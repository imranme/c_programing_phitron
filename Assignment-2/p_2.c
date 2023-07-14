#include<stdio.h>
int main(){
    int n,i;
    scanf("%d", &n);

    if(n%2==-1 || n==0){
        for(i=n; i<=1; i++){
            printf("%d ", i);
        }
    }
    else{
        for(i=1;i<=n;i++){
            printf("%d ",i);
        }
    }
    return 0;
}


 int n;
    scanf("%d", &n);

    if (n <= 0) {
        for (int i = n; i <= 1; i++) {
            printf("%d ", i);
        }
    } else {
        for (int i = 1; i <= n; i++) {
            printf("%d ", i);
        }
    }
