#include <stdio.h>

#define MAXLINE 1000
#define LIMIT 80

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

int main(){
    char line[MAXLINE];
    int len;
    while((len = my_getline(line, MAXLINE)) > 0){
        if(len > LIMIT){
            printf("%s", line);
        }
    }
    return 0;
}