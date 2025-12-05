#include <stdio.h>
#include <string.h>
void rev(char arr[]);
int main(){
    char num[500];
    fgets(num,499,stdin);//INPUTTING THE NUMBER AS A STRING ARRAY
    size_t c = strlen(num);    
    if(c>0 && num[c-1]=='\n'){
        num[c-1]='\0';
    }

    rev(num);
    puts(num);
    return 0;


}
void rev(char arr[]){
    size_t c = strlen(arr); 
    for(int i = 0;i<c/2;i++){
        char curr = arr[i];
        char reversal = arr[c-i-1];
        arr[i]= reversal;
        arr[c-i-1]= curr;

    }
}
