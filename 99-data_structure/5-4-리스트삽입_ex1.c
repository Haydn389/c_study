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

/*����Ʈ�� ������ �߰�*/
void link(char *key){
    struct tfield *p,*n; //*p�� ã�� ������, n�� ������ ���
    n=talloc();
    printf("�߰������� �Է� : ");
    scanf("%s%s",n->name,n->tel); //���� ���� �ޱ�
    p=head; //displist()������ head�� �������� ���Ե� ��带 �̹� ����Ű�� ����
    while (p!=NULL){
        if (strcmp(key,p->name)==0){
            /*ä������*/
            n->pointer=p->pointer;
            p->pointer=n;//
            return ;
        }
        p=p->pointer;
        /*ä������*/

    }
    printf("key�����͸� ã���� �����ϴ�.\n");
    n->pointer=head;
    head=n;
    /*ä������*/

}


/*����Ʈ ����*/
void genlist(void){
    struct tfield *p;
    head=NULL;
    while(p=talloc(),scanf("%s %s",p->name,p->tel)!=EOF){
        p->pointer=head;
        head=p;
    }
}

/*����Ʈ ���*/
void displist(void){
    struct tfield *p;
    p=head;
    while(p!=NULL){
        printf("%s%s\n",p->name,p->tel);
        p=p->pointer;
    }
}

/*�޸��Ҵ�*/
struct tfield *talloc(void){
    return (struct tfield *)malloc(sizeof(struct tfield));
}
