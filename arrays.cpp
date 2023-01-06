#include <iostream>
using namespace std;

void print(int arr[15],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
        cout<<endl;
    
}



int main(){
    int arr[10];
    
    print(arr,10);
    
    return 0;
}