#include <stdio.h>

/* binsearch:  find x in v[0] <= v[1] <= ... <= v[n-1] */ 
int binsearch(int x, int v[], int n) 
{ 
    int low, high, mid; 
    low = 0; 
    high = n - 1; 
    while (low <= high) { 
        mid = (low+high)/2; 
        if (x < v[mid]) 
            high = mid - 1; 
        else if (x  > v[mid]) 
            low = mid + 1; 
        else    /* found match */ 
            return mid; 
    } 
    return -1;   /* no match */ 
}

int second_binsearch(int x, int v[], int n) 
{ 
    int low, high, mid; 
    low = 0; 
    high = n - 1; 
    mid = (low+high)/2;
    while (low < high && x != v[mid]) { 
         
        if (x < v[mid]) 
            high = mid - 1; 
        else 
            low = mid + 1;  

            mid = (low+high)/2;
    } 
    if(x == v[mid])
        return mid;
    return -1;   /* no match */ 
}

int main(){
    int v[] = {1,2,3,4,5,6,7,8,9,10,12,14,16,18,20,22,24,26,28,30};
    int value;
    printf("Enter the value you are searching for:\n");
    scanf("%d", &value);
    printf("Postion found is: %d\n", binsearch(value, v, 20));
    return 0;
}