#include <stdio.h>
#define MAXLINE 1000

int my_getline(char s[],int lim) 
{ 
    int c, i; 
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) 
        s[i] = c; 
    if (c == '\n') { 
       s[i] = c; 
        ++i; 
    } 
    s[i] = '\0'; 
    return i; 
}

void escape(char s[], char t[]){
    int i, j;
    for(i = 0, j = 0; s[i] != '\0'; ++i, ++j){
        switch(t[i]){
            case '\t':
                s[j] = '\\';
                ++j;
                s[j] = 't';
                break;
            case '\n':
                s[j] = '\\';
                ++j;
                s[j] = 'n';
                break;
            default:
                s[j] = t[i];
                break;
        }
    }
    s[i] = '\0';
}

int main(){
    char t[MAXLINE];
    char s[MAXLINE];
    my_getline(t, MAXLINE);
    escape(s, t);
    printf("%s\n", s);
}