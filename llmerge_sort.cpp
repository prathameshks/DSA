#include <iostream>
using namespace std;

class node {
   public:
    int data;
    node* next;
    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
void print(node* head) {
    node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node* mergeSort(node* head) {
    // Write your code here.
    if (head == NULL || head->next == NULL) {
        return head;
    }

    node* first;
    node* second;
    node* temp;
    second = head;
    first = head;
    while (second != NULL) {
        temp = first;
        second = second->next;
        if (second != NULL) {
            second = second->next;
            first = first->next;
        }
    }
    second = temp->next;
    temp->next = NULL;
    first = head;
    // cout << "first " << first->data << " second " << second->data << endl;
    
    first = mergeSort(first);
    second = mergeSort(second);

    //merge first and second
    node* temp1=first,*temp2 = second,*ans = new node(0),*temp3;
    temp3 = ans;
    while(temp1!= NULL && temp2!=NULL){
        if(temp1->data < temp2->data){
            temp3->next = temp1;
            temp1 = temp1->next;
        }else{
            temp3->next = temp2;
            temp2 = temp2->next;
        }
        temp3 = temp3->next;
        temp3->next = NULL;
    }
    if(temp1!=NULL){
        temp3->next = temp1;
    }else{
        temp3->next = temp2;
    }
    temp3 = ans;
    ans = ans->next;
    delete temp3;
    return ans;
}

int main() {
    // while (true) {
        int num;
        cin >> num;
        node* lst = new node(num);

        node* temp = lst;
        while (num != -1) {
            cin >> num;
            if (num == -1) {
                break;
            }
            temp->next = new node(num);
            temp = temp->next;
        }
        // print(lst);
        node* ans = mergeSort(lst);
        print(ans);
    // }
    return 0;
}

/*
1 -1
1 2 -1
1 2 3 -1
1 2 3 4 -1
1 2 3 4 5 -1
1 2 3 4 5 6 -1
1 2 3 4 5 6 7 -1
1 2 3 4 5 6 7 8 -1
1 2 3 4 5 6 7 8 9 -1
1 2 3 4 5 6 7 8 9 10 -1
1 2 3 4 5 6 7 8 9 10 11 -1
1 2 3 4 5 6 7 8 9 10 11 12 -1

*/