#include <stdio.h>
#include <malloc.h>
#include <string.h>

struct tfield{
    char name[20];
    char tel[20];
    struct tfield *pointer;
}*head;
// struct tfield *head; //위와 동일한 문장
struct tfield *talloc(void);

void genlist(void);
void displist(void);
void del(char *);

int main(void){
    char key[32];
    genlist();
    displist();
    while (printf("Key Name : "),scanf("%s",key)!=EOF){
        del(key);
    }
    printf("\n");
    displist();
    return 0;
}

/*리스트에 데이터 삭제*/
void del(char *key){
    struct tfield *p,*old; //*p는 삭제할 노드
    p=old=head; //displist()수행결과 head는 마지막에 삽입된 노드를 이미 가리키고 있음
    while (p!=NULL){
        if (strcmp(key,p->name)==0){
            /*채워보기*/
            if (p==head)
                head=p->pointer;//p의 포인터부값(다음노드주소)를 head에 대입
            else
                old->pointer=p->pointer;//p의 포인터부값(다음노드주소)를 삭제할 노드 부모노드의 포인터에 대입   
            return ;
        }
        old=p; //부모너드 업데이트
        p=p->pointer;
    }
    printf("key데이터를 찾을수 없습니다.\n");
}


/*리스트 생성*/
void genlist(void){
    struct tfield *p;
    head=NULL;
    while(p=talloc(),scanf("%s %s",p->name,p->tel)!=EOF){
        p->pointer=head;
        head=p;
    }
}

/*리스트 출력*/
void displist(void){
    struct tfield *p;
    p=head;
    while(p!=NULL){
        printf("%s%s\n",p->name,p->tel);
        p=p->pointer;
    }
}

/*메모리할당*/
struct tfield *talloc(void){
    return (struct tfield *)malloc(sizeof(struct tfield));
}
