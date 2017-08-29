#include <stdio.h>

int bitcount(unsigned int x){
    int a;
    for(a = 0; x != 0; x = x &(x-1)){
        ++a;
    }
    return a;
}

int main(){
    unsigned int value;
    printf("Enter value:\n");
    scanf("%u", &value);
    printf("%d\n",bitcount(value));
    return 0;
}