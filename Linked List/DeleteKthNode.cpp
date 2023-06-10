#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};

Node* removeKthNode(Node* head, int n)
{
    // Write your code here.
    if(head == NULL){
            return head;
        }
        Node*fast = head,*slow = head;
        for(int i=1;i<=n+1;i++){
            if(fast == NULL){
                return head->next;
            }
            fast = fast->next;
        }
        while (fast!= NULL) {
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        return head;
}

int main(){
    
    return 0;
}