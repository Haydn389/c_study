#include <stdio.h>
struct vision{
  unsigned int son:2; //변수명:비트수
  unsigned int daughter:2; //변수명:비트수
  unsigned int pet:3; //변수명:비트수

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
