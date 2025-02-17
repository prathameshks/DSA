//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
    Node* reverse(Node* head){
        Node* temp = head;
        Node* prev = NULL;
        Node* next = NULL;
        while(temp!=NULL){
            cout<<"R"<<temp->data<<endl;
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        return prev;
    }
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node* slow = head;
        Node* fast = head;
        while(fast!=NULL){
            cout<<"L"<<fast->data<<endl;

            slow = slow->next;
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
            }
        }
        Node* half;
        half = reverse(slow);
        Node* temp = head;
        Node* temp2 = half;
        while(temp!= NULL && temp2!=NULL){
            cout<<"C"<<temp->data<<endl;
            if(temp->data != temp2->data){
                return 0;
            }
            temp = temp->next;
            temp2 = temp2->next;

        }
        return 1;
    }
};

/*3
1 2 1
*/

//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends