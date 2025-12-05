#include <stdio.h>
void day(int a);
int main(){
    int n;
    printf("ENTER THE NUMBER OF DAY (1-7)");
    scanf("%d",&n);
    day(n);
    return 0;
}

void day(int a){
    switch(a){
        case 1: 
        printf("Monday\n");
                break; 
        case 2:
        printf("Tuesday\n");
                break;

        case 3:
        printf("Wednesday\n");
                break;

        case 4:
        printf("Thursday\n");
                break;

        case 5:
        printf("Friday\n");
                break;

        case 6:
        printf("Saturday\n");
                break;

        case 7:
        printf("Sunday\n");
                break;
        
        default:
        printf("Enter the number between 1-7 if you are seeing this message\n");

        

    }
}
