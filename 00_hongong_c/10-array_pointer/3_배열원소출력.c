#include <stdio.h>

int main(void)
{
	int ary[4] = { 10, 20, 30, 0 };
	int i;
	int* pa = ary;
	// int ary[3];
    // for (i=0; i<3;i++){
    //     scanf("%d",pa);
    //     pa++;
    // }
    // pa =ary;

	printf("1 �迭�� �� : ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(ary+i));   // pa�� ����Ű�� �迭 ��� ���
	}

	printf("\n2 �迭�� �� : ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", ary[i]);   // pa�� ����Ű�� �迭 ��� ���
	}

	printf("\n3 �迭�� �� : ");
	pa =ary;
	for (i = 0; i < 3; i++)
    {
		printf("%d ", *(pa+i));   // pa�� ����Ű�� �迭 ��� ���
	}
	printf("\n4 �迭�� �� : ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *pa);   // pa�� ����Ű�� �迭 ��� ���
		pa++;                 // ���� �迭 ��Ҹ� ����Ű���� pa �� ����
	}
	
	printf("\n5 �迭�� �� : ");
	pa =ary;
	for (i = 0; i < 3; i++)
    {
		printf("%d ", pa[i]);   // pa�� ����Ű�� �迭 ��� ���
	}
	printf("\n6 �迭�� �� : ");
	pa =ary;
	for (i = 0; i < 3; i++)
    {
		printf("%d ", *pa++);   // pa�� ����Ű�� �迭 ��� ���
	}

	printf("\n Null���� ");
    // while (pa) ã�ƺ��� Null����
	// while (*pa)
    // {
	// 	printf("%d ", *(pa++));   // pa�� ����Ű�� �迭 ��� ���
	// }
	// return 0;
}