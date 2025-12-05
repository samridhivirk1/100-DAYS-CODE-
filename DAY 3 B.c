
#include <stdio.h>
void swap(int *a, int *b);
int main(){
    int x,y;
    printf("ENTER YOUR FIRST NUMBER:\n");
    scanf("%d",&x);
    printf("ENTER YOUR SECOND NUMBER:\n");
    scanf("%d",&y);
    swap(&x,&y);
    printf("swapped numbers are %d %d",x,y);
    return 0;

}
void swap(int *a, int *b){ 
    int t;                
    t=*a;
    *a=*b;
    *b=t;

}
