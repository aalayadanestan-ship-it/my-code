#include<stdio.h>
int main(){
    int n ;
    scanf("%d", &n);
    int i , j ;
    int arr[n];
    for( i =0; i<n;i++ ){
        scanf("%d", &arr[i]);
    }
    int temp =0;
    for( i=0;i<n;i++){
        for( j=i+1;j<n;j++){
            if( arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i =0 ; i<n;i++){
        printf("%d", arr[i]);
    }
}