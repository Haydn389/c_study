#include <stdio.h>


void print_test2(int* arr,int n,int *pi){
    for(int j=0; j<10;j++){
        arr[*pi++]=j*10;
    }
}


void print_test(int* arr,int n){
    int n=10;
    int ary_idx[10 ];
    for (int j=0;j<n;j++){
        ary_idx[j]=j;
    }
    print_test2(arr,n,ary_idx);

}


int main(void){
    int a[10],n=10;
    print_test(a,n);
    for(int i=0; i<n;i++){
        printf("%d ",a[i]);
    }
    return 0 ;
}