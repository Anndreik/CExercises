#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSTRING 1000

void reverse(char s[]){
    int i, j;
    char temp;
    for(i =0, j = strlen(s) - 1; i < j; ++i, --j){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

}

void itob(int n, char s[], int b){
    int i = 0;
    int sign = n;
    char symbols[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    if(n < 0){
        n = -n;
    }
    do{
        s[i++] = symbols[n%b];
    }while(n/=b);
    if(sign < 0){
        s[i++] = '-';
    }
    s[i] = '\0';
    reverse(s);
}



int main(){
    int value, base;
    char a[MAXSTRING];
    printf("Enter value:\n");
    scanf("%d", &value);
    printf("Enter base:\n");
    scanf("%d", &base);
    itob(value, a, base);
    printf("%s\n", a);
    return 0;
}