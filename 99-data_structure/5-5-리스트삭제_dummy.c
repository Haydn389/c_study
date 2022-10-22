#include <stdio.h>
#include <malloc.h>
#include <string.h>

struct tfield{
    char name[20];
    char tel[20];
    struct tfield *pointer;
}*head;
// struct tfield *head; //���� ������ ����
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

/*����Ʈ�� ������ ����*/
void del(char *key){
    struct tfield *p;
    p=head; //displist()������ head�� �������� ���Ե� ��带 �̹� ����Ű�� ����
    while (p->pointer!=NULL){
        if (strcmp(key,p->pointer->name)==0){
            /*ä������*/
            p->pointer=p->pointer->pointer;
            return ;
        }
        p=p->pointer;
    }
    printf("key�����͸� ã���� �����ϴ�.\n");
}

/*����Ʈ ����*/
void genlist(void){
    struct tfield *p;
    head=NULL;
    do{ //�ϴ� ������ ���̳�� �ϳ��� �־��ֱ� ���ؼ� do while�� ���
        p=talloc();
        p->pointer=head;
        head=p;
    }while (scanf("%s%s",p->name,p->tel)!=EOF);
    // while(p=talloc(),scanf("%s %s",p->name,p->tel)!=EOF){
    //     p->pointer=head;
    //     head=p;
    // }
}

/*����Ʈ ���*/
void displist(void){
    struct tfield *p;
    // p=head; //���̳�� �����ľ���
    p=head->pointer;
    while(p!=NULL){
        printf("%s%s\n",p->name,p->tel);
        p=p->pointer;
    }
}

/*�޸��Ҵ�*/
struct tfield *talloc(void){
    return (struct tfield *)malloc(sizeof(struct tfield));
}