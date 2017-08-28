#include <stdio.h>
#define MAXLINE 1000
#define MAXVALUE 10000000

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

int any(char string1[], char string2[]){
    int min_value = MAXVALUE;
    int found = 0;
    for(int i=0; string1[i] != '\0'; ++i){
        for(int j = 0; string2[j] != '\0'; ++j){
            if(string1[i] == string2[j] && string2[j] != '\n'){
                if(i < min_value){
                    printf("found value from s2 at location %d in s1 at location %d\n", j, i);
                    min_value = i;
                    found = 1;
                }
            }
        }
    }
    if(found){
        return min_value;
    }
    else{
        return -1;
    }
}

int main(){
    int position = 0;
    char s1[MAXLINE], s2[MAXLINE];
    my_getline(s1, MAXLINE);
    my_getline(s2, MAXLINE);
    position = any(s1, s2);
    printf("Position where we found first occurence of a character from s2 in s1 is: %d\n", position);
    return 0;
}