#include <stdio.h>

int main(){
    int c;
    while ((c = getchar()) != EOF){
        if(c != '\t' && c != '\b' && c != '\\'){
            putchar(c);
        }
        if(c == '\t'){
            putchar('\\');
            putchar('t');
        }
        if(c == '\b'){
            putchar('\\');
            putchar('b');
        }
        if(c == '\\'){
            putchar('\\');
            putchar('\\');
        }
    }
    return 0;
}

