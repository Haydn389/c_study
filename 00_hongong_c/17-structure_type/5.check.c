#include <stdio.h>
#include <string.h>

struct cracker{
    int price;
    int calories;
};

int main(void)
{
    struct cracker a;
    printf("�ٳ����� ���ݰ� ������ �Է��ϼ��� : ");
    scanf("%d%d",&a.price,&a.calories);
    printf("�ٳ����� ���� :%d��\n",a.price);
    printf("�ٳ����� ���� :%dkcal\n",a.calories);
	return 0;
}