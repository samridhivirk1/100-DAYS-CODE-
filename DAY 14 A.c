#include <stdio.h>
int odd(int n);
int main(){
    int x;
    printf("ENTER THE NUMBER OF ODD NUMBERS WHOSE SUM YOU WANT:");
    scanf("%d",&x);
    printf("SUM OF FIRST %d ODD NUMBERS IS %d",x,odd(x));
    return 0;

}
int odd(int n){
    int sum = 0;
    int count = 1;

    for(int i = 1;i<=n;i++,count+=2){
        
        sum=sum+count;
      
    }
    return sum;
}
