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

Node *findMiddle(Node *head) {
    Node* curr = head->next;
    Node* prev = head;
    if(head == NULL || head->next == NULL){
        return head;
    }
    else{
        while(curr!=NULL){
            prev = prev->next;
            curr = curr->next;
            if(curr!=NULL){
                curr = curr->next;
            }
        }
        return prev;
    }   
}