#include <iostream>
using namespace std;


int add(int a,int b){
    return a+b;
}

void disp(int a,int b,int func(int,int)){
    cout<<func(a,b);
}


int main(){
    disp(12,13,add);
    return 0;
}