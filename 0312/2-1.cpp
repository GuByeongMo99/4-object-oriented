#include <stdio.h>
int sum(int, int);

int main() { 
    int n=0;
    printf("끝수를 입력하세요 >>");
    scanf("%d", &n);
    if (n <= 0) {
        printf("양수를입력하세요! \n");
    return 0;
    }
    printf("1에서 %d까지의 합은 %d 입니다\n", n, sum(1,n));
    return 0;
}

int sum(int a, int b) {
    int res=0;
    for (int k=a; k<=b; k++) 
    {
        res += k;
    }
    return res;
}