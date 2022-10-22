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
void link(char *);

int main(void){
    char key[32];
    genlist();
    displist();
    while (printf("Key Name : "),scanf("%s",key)!=EOF){
        link(key);
    }
    printf("\n");
    displist();

    return 0;
}

/*리스트에 데이터 추가*/
void link(char *key){
    struct tfield *p,*n; //*p는 찾는 포인터, n은 삽입할 노드
    n=talloc();
    printf("추가데이터 입력 : ");
    scanf("%s%s",n->name,n->tel); //삽입 정보 받기
    p=head; //displist()수행결과 head는 마지막에 삽입된 노드를 이미 가리키고 있음
    while (p!=NULL){
        if (strcmp(key,p->name)==0){
            /*채워보기*/
            n->pointer=p->pointer;  //p의 포인터부값(다음노드주소)를 n의 포인터부에 대입
            p->pointer=n;           //p의 포인터부가 n을 가리키도록 함
            return ;
        }
        p=p->pointer;
    }
    printf("key데이터를 찾을수 없습니다.\n");
    /*채워보기*/
    n->pointer=head;    //head는 가장 마지막 노드를 가리키고 있었음, n의 포인터부가 마지막 노드를 가리키도록 함
    head=n;         //head는 다시 마지막 노드인 n을 가리키도록 함
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
