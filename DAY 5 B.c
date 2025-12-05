#include <stdio.h>
void time(int s);
int main(){
    int seconds;
    printf("ENTER TIME IN SECONDS:");
    scanf("%d",&seconds);
    time(seconds);
    return 0;
}
void time(int s){
    int hrs = s/3600;
    int leftsec = s%3600;
    int mins = leftsec/60;
    int sec=leftsec%60;
    printf("TIME IS %d:%d:%d",hrs,mins,sec);
}
