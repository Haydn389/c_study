#include <stdio.h>

void print_month(int *mp,int size);

int main(void)
{
	int month[12] = {31, 28, 31, 30, 1, 30, 31, 31, 30, 31, 30, 31};
	int size = sizeof(month)/sizeof(month[0]); 
	print_month(month,size);
}
void print_month(int *mp,int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ",mp[i]);
		if ((i+1)%5==0){
			printf("\n");
		}
	}
}
