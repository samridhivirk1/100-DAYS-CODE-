#include <stdio.h>
const char* type(char alp);
int main(){
    char ALP;
    printf("ENTER YOUR ALPHABET");
    scanf("%c",&ALP);
    printf(" YOUR ENTERED CHARACTER IS %s",type(ALP));
    return 0;


}
const char* type(char alp){
    int arr[10]={'a','e','i','o','u','A','E','I','O','U'};
    for(int i = 0;i<10;i++){
        if(alp==arr[i]){ 
            return "VOWEL";
        }
        else{
            return "CONSONANT";
        }
    }
    
}
