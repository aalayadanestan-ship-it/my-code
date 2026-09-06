#include<stdio.h>
#include<math.h>
#include<limits.h>
int main(){
    int n ;
    printf("enter the number");
    scanf("%d", &n);
    int arr[n];
    int i , j;
    for(i=0;i<n;i++){
            scanf("%d", &arr[i]);
    }
    int min =  -112;
    for( i=0;i<n;i++){
        for( j= i+1;j<n;j++){
            if(arr[i] < arr[j]){
                min = arr[i];
            }
        }
    }
    for( i=0;i<n;i++){
        printf("%d", arr[i]);
    }
}