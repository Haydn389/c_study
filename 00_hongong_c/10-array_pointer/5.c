#include <stdio.h>

void print_ary(int *pa);
void input_ary(int *pa,int size);
double avg_ary(int *pa,int size);

int main(void){
    int ary[5];
    int size=sizeof(ary)/sizeof(ary[0]);
    double avg;
    input_ary(ary,size);
    print_ary(ary);
    avg=avg_ary(ary,size);

    printf("%.1lf",avg);
    return 0;
}

void print_ary(int *pa){
   int i;
    for (i=0; i<5;i++){
        // printf("%d ",pa[i]);
        printf("%d ",*(pa+i));
    }
    printf("\n");

}
double avg_ary(int *pa,int size){
    int tot=0,i;
    for (i=0; i<size;i++){
        tot+=pa[i];
    }
    return tot/(double)size; 
}

void input_ary(int *pa, int size){
    int i;
    for (i=0; i<size;i++){
        // scanf("%lf",&pa[i])
        scanf("%d",pa+i);
    }
}