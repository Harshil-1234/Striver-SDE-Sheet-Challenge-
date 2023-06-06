#include <bits/stdc++.h>
template <typename T>

class LinkedListNode
{
public:
    T data;
    LinkedListNode<T> *next;
    LinkedListNode(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

LinkedListNode<int> * reverse1(LinkedListNode<int> *head){
    //Base Case
    if(head==NULL || head->next == NULL){
        return head;
    }
    
    LinkedListNode<int> * otherHead = reverse1(head->next);
    
    //accessing the node after the 1st node and storing the 1st node address in it(reverse linking 2nd and 1st node).
    head->next->next = head;
    
    //linking 1st node to NULL.3
    head->next = NULL;
    
    return otherHead;
    
}
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    reverse1(head);
}

int main(){
    return 0;
}