#include<bits/stdc++.h>
using namespace std;

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

void deleteNode(LinkedListNode<int> * node) {
    // Write your code here.
    LinkedListNode<int> * temp = node->next;
    node->data = temp->data;
    node->next = temp->next;
    temp->next = NULL;
    delete temp;

}
int main(){
    
    return 0;
}