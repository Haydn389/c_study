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

	printf("1 배열의 값 : ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(ary+i));   // pa가 가리키는 배열 요소 출력
	}

	printf("\n2 배열의 값 : ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", ary[i]);   // pa가 가리키는 배열 요소 출력
	}

	printf("\n3 배열의 값 : ");
	pa =ary;
	for (i = 0; i < 3; i++)
    {
		printf("%d ", *(pa+i));   // pa가 가리키는 배열 요소 출력
	}
	printf("\n4 배열의 값 : ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *pa);   // pa가 가리키는 배열 요소 출력
		pa++;                 // 다음 배열 요소를 가리키도록 pa 값 증가
	}
	
	printf("\n5 배열의 값 : ");
	pa =ary;
	for (i = 0; i < 3; i++)
    {
		printf("%d ", pa[i]);   // pa가 가리키는 배열 요소 출력
	}
	printf("\n6 배열의 값 : ");
	pa =ary;
	for (i = 0; i < 3; i++)
    {
		printf("%d ", *pa++);   // pa가 가리키는 배열 요소 출력
	}

	printf("\n Null가드 ");
    // while (pa) 찾아보자 Null가드
	// while (*pa)
    // {
	// 	printf("%d ", *(pa++));   // pa가 가리키는 배열 요소 출력
	// }
	// return 0;
}