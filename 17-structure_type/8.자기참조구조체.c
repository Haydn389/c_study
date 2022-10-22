#include <stdio.h>

struct list
{
    int num;
    struct list *next; //자기참조 구조체
};

int main(void){
    struct list a={10},b={20},c={30};//포인터 초기화 안하면 NULL포인터가됨
    a.next=&b;
    b.next=&c;

    printf("======출력(1)======\n");
    printf("%d\n",a.num);

    printf("%d\n",(*a.next).num);
    printf("%d\n",a.next->num);//위와 동일

    printf("%d\n",(*(*a.next).next).num);//*a.next==b, *b.next==c
    printf("%d\n",a.next->next->num);//위와 동일

    printf("======출력(2)======\n");
    
    struct list *head=&a,*current;
    current=head;
    while(current!=NULL){
    // while(current->next!=NULL){//이렇게 하면 30이 출력안됨
        printf("%d\n",current->num);
        current=current->next;
    }

    return 0;
}

