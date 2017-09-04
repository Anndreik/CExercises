#include <stdio.h>
#define swap(t, a, b) {t z;     \
                       z = a;   \
                       a = b;   \
                       b = z;   \
}

int main(){
    int a, b;
    printf("Enter first value:\n");
    scanf("%d", &a);
    printf("Enter second value:\n");
    scanf("%d", &b);
    swap(int, a, b);
    printf("first value is %d and second value is %d\n", a, b);
    return 0;
}