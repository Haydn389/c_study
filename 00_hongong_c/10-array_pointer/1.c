#include <stdio.h>

// int main(void){
//     int ary[3];
//     int i;

//     *(ary+0)=10;
//     *(ary+1)=*(ary+0)+10;
//     scanf("%d",ary+2);
//     for (i=0; i<3;i++){
//         printf("%5d",*(ary+i));
//     }
//     return 0; 
// }
int main(void){
    int ary[3];
    int *pa=ary;
    int i;

    *(pa+0)=10;
    *(pa+1)=*(pa+0)+10;
    scanf("%d",pa+2);
    for (i=0; i<3;i++){
        printf("%5d",pa[i]);
    }
    return 0; 
} 