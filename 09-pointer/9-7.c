#include <stdio.h>

void swap(int *pa, int *pb);
//선언된 변수는 해당 블럭 내에서만 사용가능
int main(void){
    int a=10, b=20;
	printf("a: %d, b : %d\n", a, b);   // 변수 a, b 출력
    swap(&a,&b);
	printf("a: %d, b : %d\n", a, b);   // 변수 a, b 출력

}

void swap_x(int a, int b)
{
    // 이 함수 내의 a,b라는 변수는 메인함수의 변수a,b랑 다른 공간에 메모리를 저장한다.
    // 즉 메인함수에서 넘어온 a,b의 값이 새로운 a,b라는 이름의 메모리공간에 저장된다.
    // 따라서 아래 연산을 수행하도 메인함수의 a,b는 여전히 바뀌지 않고있다
    int t;
    t=a;
    a=b;
    b=t;
    // 바뀐 값을 반환해주면 되지 않느냐?
    // 모든 함수의 반환값은 오직1개만 가능
}
void swap(int *pa, int *pb)
{
    // a,b의 주소를 가지고 간접참조로 사용하도록 하자
    int t;
    t=*pa;
    *pa=*pb;
    *pb=t;

}