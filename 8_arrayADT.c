#include<stdio.h>
#include<stdlib.h>

struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray* a,int tsize, int usize){
    (*a).total_size = tsize;
    (*a).used_size = usize;
    (*a).ptr = (int *) malloc(tsize*sizeof(int));
}

void setValue(struct myArray *a){
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter element %d :",i);
        scanf("%d",&n);
        (a->ptr)[i] = n;
    }
    

}

void show(struct myArray *a){
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n",(a->ptr)[i]);
    }
    
}

int main(){
    struct myArray marks;
    printf("%d",sizeof(marks.ptr));
    createArray(&marks,10,4);
    setValue(&marks);
    show(&marks);
    return 0;
}