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
    struct tfield *head=NULL,*p;// [struct tfield *]형 포인터선언 int *p 랑 동일
    // 즉, 아래 문장은 talloc()수행 결과 반환된 struct tfield 형 포인터 *를 포인터p에 저장한다는 의미
    while (p=talloc(),scanf("%s%s",p->name,p->tel)!=EOF){
        p->pointer=head;//p의 포인터부가 기존 head가 가리키던 곳을 가리키도록 하고
        head=p; //head는 다시 추가된 노드p를 가리키도록 한다. 이를 반복
    }
    p=head;//뒤에서부터 출력
    while(p!=NULL){
        printf("%15s%15s\n",p->name,p->tel);
        p=p->pointer;
    }
 
    return 0;
}

struct tfield *talloc(void){
    return (struct tfield*)malloc(sizeof(struct tfield));
}
