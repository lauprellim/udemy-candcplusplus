#include <stdio.h>

void fun(int *A, int n) {
  int i;
  for(i=0; i<n; i++) {
    printf("%d \n",A[i]);
  }
}

int main() {
  int A[5]={2,4,6,8,11};
  fun(A, 5);
  return 0;
}
