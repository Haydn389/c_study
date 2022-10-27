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
    struct tfield *head=NULL,*p;// [struct tfield *]�� �����ͼ��� int *p �� ����
    // ��, �Ʒ� ������ talloc()���� ��� ��ȯ�� struct tfield �� ������ *�� ������p�� �����Ѵٴ� �ǹ�
    while (p=talloc(),scanf("%s%s",p->name,p->tel)!=EOF){
        p->pointer=head;//p�� �����ͺΰ� ���� head�� ����Ű�� ���� ����Ű���� �ϰ�
        head=p; //head�� �ٽ� �߰��� ���p�� ����Ű���� �Ѵ�. �̸� �ݺ�
    }
    p=head;//�ڿ������� ���
    while(p!=NULL){
        printf("%15s%15s\n",p->name,p->tel);
        p=p->pointer;
    }
 
    return 0;
}

struct tfield *talloc(void){
    return (struct tfield*)malloc(sizeof(struct tfield));
}
