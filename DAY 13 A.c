#include <stdio.h>
int calc(int a, int b, char c);
int main(){
    int x,y;
    char C;
    printf("ENTER YOUR 1ST NUMBER:");
    scanf("%d",&x);
    printf("ENTER YOUR 2ND NUMBER:");
    scanf("%d",&y);
    printf("ENTER YOUR OPERATOR:");
    getchar();
    scanf("%c",&C);
    printf("YOUR ANSWER IS : %d",calc(x,y,C));
    return 0;
}

int calc(int a, int b, char c){
    switch (c){
        case '+':
        return a+b;

       
         case '-':
        return a-b;
       
         case '*':
        return a*b;
        
        case '/':
        if(b!=0){
            return a/b;
        }
       
        case '%':
        if(b!=0){
            return a%b;
        }
        break;
        default:
            printf("ERROR: Invalid operator '%c'\n", c);
            return 0;
    }
}
