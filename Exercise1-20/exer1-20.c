#include <stdio.h>

#define TAB 8

int main(){
    int nb = 0; 
    int pos = 0;
    int c;
    while((c = getchar()) != EOF){
        if(c == '\t'){
            nb = TAB - (pos - (pos/TAB)*TAB);
            //printf("nb of # = %d", nb);
            while(nb--){
                putchar('#');
                ++pos;
            }
        }
        else if( c == '\n')
        {
            putchar(c);
            pos = 0;
        }
        else{
            putchar(c);
            ++pos;
        }
    }
    return 0;
}