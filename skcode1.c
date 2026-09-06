#include<stdio.h>
int main (){
    int n ;
    printf("enter the n");
    scanf("%d", &n);
    int i , j;
    int count =0;
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if( arr[i] > arr[j]){
                count++;
            }
        }
    }
    printf("count : %d", count);
}