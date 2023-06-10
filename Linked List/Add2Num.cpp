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

Node *addTwoNumbers(Node *l1, Node *l2)
{
    // Write your code here.
    // ALL BASE CASES COVERED
        if(l1 == NULL) return l2;
        if(l2==NULL) return l1;
        if(l1==NULL && l2 == NULL) return NULL;

        int carry = 0;
        int sum = l1->data + l2->data + carry;
        carry = sum/10;
        sum %= 10;
        Node* head = new Node(sum);
        Node* ans = head;
        l1 = l1->next; l2 = l2->next;
        while(l1!=NULL && l2!=NULL){
            sum = l1->data + l2->data + carry;
            carry = sum/10;
            sum %=10;
            Node*temp = new Node(sum);
            head->next = temp;
            head = temp;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1!=NULL){
            sum = l1->data + carry;
            carry = sum/10;
            sum %=10;
            Node*temp = new Node(sum);
            head->next = temp;
            head = temp;
            l1 = l1->next;
        }
        while(l2!=NULL){
            sum =  l2->data + carry;
            carry = sum/10;
            sum %=10;
            Node*temp = new Node(sum);
            head->next = temp;
            head = temp;
            l2 = l2->next;
        }
        if(carry>0){
            Node*temp = new Node(carry);
            head->next = temp;
        }
        return ans;
}


int main(){
    
    return 0;
}