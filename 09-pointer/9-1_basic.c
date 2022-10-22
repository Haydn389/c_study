#include <stdio.h>

/*9-1포인터의 주소 출력*/
// int main(void){
//     int a;
//     double b;
//     char c;
//     printf("int형 변수의 주소 : %u\n",&a);
//     printf("double형 변수의 주소 : %u\n",&b);
//     printf("char형 변수의 주소 : %u\n",&c);
//     return 0;
// }

/*9-2포인터의 선언 및 사용*/
//포인터 : 주소를 저장하는 '변수'
//간접참조연산자'*' :포인터가 어떤 변수를 가리키면 해당 변수를 사용할 수 있음 
int main(void)
{
    // int a;
    // int *pa;
    // int b;
    // int *pb;
    
    // pa=&a;//포인터에 a의 주소 대입
    // *pa=10;//포인터로 변수 a에 p 대입
    
    // pb=&b;
    // *pb=20;

    // printf("포인터로 c값 출력 : %d\n",*pb);
    // printf("변수명으로 c값출력 : %d\n",b);

    /*한번에 이해하기*/
    int a=10;
    int *pa=&a; //642044
    printf("a : %d\n",a);               //10        값 a 출력
    printf("pa : %d\n",pa);             //6422044    포인터 pa 값 출력
    printf("&a : %d\n",&a);             //6422044    a의 주소값 출력
    printf("*pa : %d\n",*pa);           //10        포인터 pa의 간접참조연산 결과값 출력
    printf("&*pa : %d\n",&*pa);         //6422044    포인터 pa가 가리키는 변수a의 주소값 출력
    printf("*&a : %d\n",*&a);           //10        a의 주소를 간접참조한 결과값 출력
    *&a=20;
    printf("&pa : %d\n",&pa);           //6422042    포인터 pa의 주소값 출력
    printf("*&pa : %d\n",*&pa);         //6422044    포인터 pa의 주소값을 간접참조한 결과값(주소) 출력
    printf("**&pa : %d\n",**&pa);       //10      포인터 pa의 주소값을 간접참조한 결과값(주소)이 가리키는 변수 출력
    printf("&**&pa : %d\n",&**&pa);     //6422044   
    printf("*&**&pa : %d\n",*&**&pa);   //10
    return 0;
}