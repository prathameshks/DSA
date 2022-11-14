#include<stdio.h>

void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void insert(int arr[],int *size,int element,int index,int capacity){
    if (*size<capacity)
    {
        for (int i = *size-1; i >= index; i--)
        {
            arr[i+1]=arr[i];
        }
        arr[index] = element;
        (*size)++;
        display(arr,*size);
    }else{
        printf("Array is full\n");
    }
    
}

int main(){
    int arr[10] = {1,2,4,8,4,5,5,6,6,16};
    int size = 10;
    display(arr,size);

    insert(arr,&size,9,2,10);
    return 0;
}