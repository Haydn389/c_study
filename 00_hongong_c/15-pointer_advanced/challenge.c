#include <stdio.h>
#include <string.h>
void swap(char *type, void *pa, void *pb);

int main(void)
{
    int a = 10, b = 20;
    double da = 1.5, db = 3.4;
    swap("int", &a, &b);
    printf("a:%d, b:%d\n", a, b);
    swap("double", &da, &db);
    printf("da:%.1lf, db:%.1lf\n", da, db);
    return 0;
}

// void swap(int*pa,int*pb){
//     int t;
//     t=*pa;
//     *pa=*pb;
//     *pb=t;
// }
void swap(char *type, void *pa, void *pb)
{
    int t;
    double dt;
    if (strcmp(type, "int") == 0)
    {
        t = *(int *)pa;
        *(int *)pa = *(int *)pb;
        *(int *)pb = t;
    }
    else if(strcmp(type,"double")==0){
        dt = *(double *)pa;
        *(double *)pa = *(double *)pb;
        *(double *)pb = dt;
    }
}