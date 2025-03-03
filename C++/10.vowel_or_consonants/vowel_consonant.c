#include <stdio.h>

int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
        printf("%c is vowel\n",c);
    }
    else{
        printf("%c is consonant\n",c);
    }

    int lower_case, upper_case;
    lower_case = c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ;
    upper_case = c=='A' || c=='E' || c=='I' || c=='O' || c=='U';
    if(lower_case || upper_case){
        printf("%c is vowel\n",c);
    }
    else{
        printf("%c is consonant\n",c);
    }
    return 0;
}