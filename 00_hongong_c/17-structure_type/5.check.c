#include <stdio.h>
#include <string.h>

struct cracker{
    int price;
    int calories;
};

int main(void)
{
    struct cracker a;
    printf("바나나의 가격과 열량을 입력하세요 : ");
    scanf("%d%d",&a.price,&a.calories);
    printf("바나나의 가격 :%d원\n",a.price);
    printf("바나나의 열량 :%dkcal\n",a.calories);
	return 0;
}