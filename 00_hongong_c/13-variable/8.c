#include <stdio.h>

int* sum(int *pa, int *pb);   // int�� ������ �ּҸ� ��ȯ�ϴ� �Լ� ����
void sub(void);
int main(void)
{
	int* resp;            // ��ȯ���� ������ ������ resp(result pointer)
    int a=10,b=20;
	resp = sum(&a,&b);   // ��ȯ�� �ּҴ� resp�� ����
    sub();
	printf("�� ������ �� : %  d\n", *resp);   // resp�� ����Ű�� ������ ���

	return 0;
}

int* sum(int *pa, int *pb)    // int�� ������ �ּҸ� ��ȯ�ϴ� �Լ�
{
	// auto int res;       // ���� ����
	static int res;       // ���� ���� ����

	res = *pa + *pb;          // �� ������ ���� res(result)�� ����

	return &res;          // ���� ������ �ּ� ��ȯ
}

void sub(void){
    int a=999;
}