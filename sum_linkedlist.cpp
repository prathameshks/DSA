//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size) {
    int val;
    cin >> val;

    Node* head = new Node(val);
    Node* tail = head;

    for (int i = 0; i < size - 1; i++) {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node* n) {
    while (n) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
    Node* reverse(Node* head) {
        Node* temp = head;
        Node *prev = NULL, *next;
        while (temp != NULL) {
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        return prev;
    }

   public:
    // Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second) {
        // code here
        // return reverse(second);
        Node* t1 = reverse(first);
        Node* t2 = reverse(second);
        Node* ans = NULL;
        int c = 0, s;
        while (t1 != NULL && t2 != NULL) {
            s = (c + t1->data + t2->data);
            c = s / 10;
            Node* temp = new Node(s % 10);
            temp->next = ans;
            ans = temp;
            t1 = t1->next;
            t2 = t2->next;
        }

        while (t1 != NULL) {
            s = (c + t1->data);
            c = s / 10;
            Node* temp = new Node(s % 10);
            temp->next = ans;
            ans = temp;
            t1 = t1->next;
        }
        while (t2 != NULL) {
            s = (c + t2->data);
            c = s / 10;
            Node* temp = new Node(s % 10);
            temp->next = ans;
            ans = temp;
            t2 = t2->next;
        }
        if (c!=0)
        {
            Node* temp = new Node(c);
            temp->next = ans;
            ans = temp;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;

        cin >> n;
        Node* first = buildList(n);

        cin >> m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first, second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends