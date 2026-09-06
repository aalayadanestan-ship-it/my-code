#include<stdio.h>
int main(){
    int n;
    printf("enter the n");
    scanf("%d", &n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d", & arr[i]);
    }
    int max = arr[0];
    for( i=0;i<n;i++){
        if( arr[i] > max){
            max = arr[i];
        }
    }
    printf("max : %d", max );

}