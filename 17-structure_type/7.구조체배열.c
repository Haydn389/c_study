#include <stdio.h>

struct address
{
    char name[20];
    int age;
    char tel[10];
    char addr[80];
};
void print_st(struct address *p);
int main(void){
    struct address a[5]={
        {"홍길동",23,"111-111","울릉도 독도"},
        {"이순신",53,"222-111","울릉도 독도"},
        {"장보고",24,"333-111","울릉도 독도"},
        {"유관순",16,"444-111","울릉도 독도"},
        {"안중근",27,"555-111","울릉도 독도"}
    };
    // printf("%s",a[0].name);// 여기서 name은 주소값

    print_st(a);//배열명은 그 자체로주소

    return 0;
}

void print_st(struct address *p){
    int i;
    for (i=0; i<5;i++){
    printf("이름 %s\n",(*(p+i)).name);
    printf("나이 %d\n",(p+i)->age);//p[i]포인터가 배열명을 저장하면 배열처럼 쓸 수 있다.
    printf("전화 %s\n",p[i].tel);
    printf("주소 %s\n",p[i].addr);
    // p++;

    }
}
