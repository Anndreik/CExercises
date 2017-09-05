#include <stdio.h>

void mystrncpy(char *s, char *t, int n){
    while(*t && n--){
        *s++ = *t++;
        //++s;
        //++t;
    }
    *s = '\0';
}



void mystrncat(char *s, char *t, int n){
    while(*s){
        ++s;
    }
    while(*t && n--){
        *s++ = *t++;
    }
    *s = '\0';
}

int mystrncmp(char *s, char *t, int n){
    while(*s == *t && n--){
        s++;
        t++;
    }
    if(*s == '\0' || n == 0)
        return 0;
    return *s - *t;
}

int main(){
    //char a[] = "";
    //char b[] = "testing the copy";
    //char c[] = "string";
    //char d[] = " for test";
    char e[] = "accdef";
    char f[] = "abdef";
    //mystrncpy(a, b, 8);
    //mystrncat(c, d, 9);
    //printf("%s\n", a);
    //printf("%s\n", c);
    int x;
    x = mystrncmp(e, f, 2);
    printf("%d\n", x);
    return 0;
}