#include <stdio.h>

int main() {
   int a,b,c,k;

   printf("세 징수의 최댓값을 구합니다.\n");
   printf("a값:  "); scanf("%d",&a);
   printf("b값:  "); scanf("%d",&b);
   printf("c값:  "); scanf("%d",&c);
   
   int max = a;
   if(b > max) max = b;
   if(c > max) max = c;

   printf("최댓값은 %d입니다.\n",max);

   return 0;

}