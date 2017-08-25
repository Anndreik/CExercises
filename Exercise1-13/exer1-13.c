#include <stdio.h>

int main(){
    int c;
    while((c = getchar()) != EOF){
        if(c == '\t' || c == ' '){
            putchar('\n');
        }
        else{
            putchar('-');
        }
    }
    return 0;
}