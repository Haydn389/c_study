#include<stdio.h>
#include<stdlib.h>

typedef struct list List;

struct list{
    int seats;
    struct list *next;
};

int main(void){
    struct list *head=NULL, *tail=NULL;
    int i;
    for (i=0;i<5;i++){
        if(head==NULL){
            head=tail=(struct list *)malloc(sizeof(struct list));
        }
        else{
            //(*tail).next;
            tail->next=(struct list *)malloc(sizeof(struct list));
            tail=tail->next;
        }
    }
    tail=head;
    int val=1;
    for (i=0;i<5;i++){
        tail->seats=val++;
        tail=tail->next;
    };
    tail=head;
    for (i=0;i<5;i++){
        printf("%5d",tail->seats);
        tail=tail->next;
    }
    return 0;
}