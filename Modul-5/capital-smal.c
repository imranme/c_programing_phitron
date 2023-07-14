#include<stdio.h>

int main(){
    char x;
    scanf("%c", &x);

    if(x>=48 && x<=57)
    {
        printf("IS DIGIT\n");
    }
     else
    {
        printf("ALPHA\n");
        if(x>='a' && x<='z'){
            printf("IS SMALL");
        }
        else{
            printf("IS CAPITAL");
        }
    }
    return 0;
}
