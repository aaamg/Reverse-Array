#include <stdio.h>
#include <stdlib.h>
#define N 10

int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int i;


int main(){


printf("Enter %d numbers: \n", N);
for (i = 0; i < N; i++){
    scanf("%d", &a[i]);
}

printf("In reverse order: \n");
for (i = N - 1; i >= 0; i--){
    printf(" %d", a[i]);
    printf("\n");
}

return 0;
}
