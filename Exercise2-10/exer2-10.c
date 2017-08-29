#include <stdio.h>

/* lower:  convert c to lower case; ASCII only */ 
int lower(int c) 
{ 
    /*
    if (c >= 'A' && c <= 'Z') 
        return c + 'a' - 'A'; 
    else 
        return c; 
    */
    c = (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
    return c;
} 

int main(){
    int c = getchar();
    putchar(lower(c));
    printf("\n");
}