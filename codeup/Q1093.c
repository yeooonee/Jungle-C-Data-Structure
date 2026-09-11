#include <stdio.h>

int main() {
   int n, i, t;
   int a[24]={};  // 배열 사용하기 전 배열에 들어있는 값 초기화 

   scanf("%d", &n);  // 개수 입력받기 

   for (i = 1; i <= n; i ++){
      scanf("%d", &t);
      a[t] = a[t] + 1;
   }

   for(i=1; i<=23; i++){
      printf("%d ", a[i]);
   }
}