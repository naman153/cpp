#include <stdio.h>

void update(int *a,int *b) {
   int s=*a + *b, e;

   if(*a>*b){
       e= *a-*b ;
   }
   else{
       e= *b-*a;
   }
   *a=s;
   *b=e;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
