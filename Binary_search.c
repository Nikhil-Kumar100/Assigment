#include<stdio.h>
int main(){
    int arr[100],size,element,high,low,mid;
    int binary_search(int arr[],int size,int element);
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the elements of the array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&element);
    high=size-1;
    low=0;
    mid=(high+low)/2;
    while(high>=low){
        if(arr[mid]==element){
            printf("Element found at index %d",mid);
            break;
        }
        else if(arr[mid]>element){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        mid=(high+low)/2;
    }
    if(high<low){
        printf("Element not found");
    }
    return 0;
    
}
