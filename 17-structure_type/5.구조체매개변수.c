#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct vision{
  double left;
  double right;
};

struct vision swap(struct vision b);

int main(void)
{
  struct vision a={1.5,2.0};
  a=swap(a);
  printf("%.1lf,%.1lf",a.left,a.right);
  return 0;
    
}

struct vision swap(struct vision b){
  double temp;
  temp=b.left;
  b.left=b.right;
  b.right=temp;
  return b;
}
