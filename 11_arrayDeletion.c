#include<stdio.h>

void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void delete(int arr[],int *size,int index){
    if (index< *size && index>=0)
    {
        for (int i = index; i < *size-1; i++)
        {
            arr[i]=arr[i+1];
        }
        (*size)--;
        display(arr,*size);
    }else{
        printf("Invalid Index\n");
    }
    
}

int main(){
    int arr[10] = {1,2,4,8,4,5,5,6,6,16};
    int size = 10;
    display(arr,size);

    delete(arr,&size,4);
    return 0;
}