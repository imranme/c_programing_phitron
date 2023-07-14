#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0; i<n;i++)
   {
        scanf("%d", &arr[i]);
   }
   int p,q;
   scanf("%d %d", &p,&q);
   arr[p]=arr[p]=q;
   for(int i=n-1; i>=0;i--){
    printf("%d ", arr[i]);
   }
   return 0;
}
