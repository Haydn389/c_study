#include <stdio.h>
#include <stdlib.h>

typedef struct tfield Node;
struct tfield *talloc(void);

struct tfield{
    char name[20];
    char tel[20];
    struct tfield *pointer;
};

int main(void){
    struct tfield *head,*p,*old;
    /*더미노드생성*/
    old=head=talloc(); //처음 old와 head는 동일한 곳을 가리킴
    // scanf("%s%s",head->name,head->tel);//처음노드에 값입력 하지 않음(더미노드)
    while (p=talloc(),scanf("%s%s",p->name,p->tel)!=EOF){//새로운 노드 할당 후 값 입력
        old->pointer=p;//old의 pointer 부가 새로운 노드를 가리키도록함(새로 입력된 노드와 연결)
        old=p; //old는 다시 새로운 노드를 가리킴
    }
    old->pointer=NULL;//old는 가장 마지막에 입력된 노드를 가리킬 것이고, 그 노드의 pointer가 NULL을가리키도록 함
    // p=head;//head는 처음부터 자리 그대로이므로 이를 p에 담아 출력에 사용
    p=head->pointer;//더미노드를 배제하기 위해 p가 (head의 포인터부가 가리키는 곳)을 가리키도록 함
    while(p!=NULL){
        printf("%15s%15s\n",p->name,p->tel);
        p=p->pointer;
    }
 
    return 0;
}

struct tfield *talloc(void){
    return (struct tfield*)malloc(sizeof(struct tfield));
}
