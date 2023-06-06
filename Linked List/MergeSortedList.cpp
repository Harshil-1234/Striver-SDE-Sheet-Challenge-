#include <bits/stdc++.h>
using namespace std;
template <typename T>

class Node {
    public:
    T data;
    Node* next;
    Node(T data) {
        next = NULL;
        this->data = data;
    }
    ~Node() {
        if (next != NULL) {
            delete next;
        }
    }
};

Node<int>* result(Node<int>* first, Node<int>* second){
    //if only 1 element is present in 1st list
    if(first->next == NULL){
        first->next = second;
        return first;
    }
    Node<int>* curr1 = first;
    Node<int>* next1 = curr1->next;
    Node<int>* curr2 = second;
    Node<int>* next2 = curr2->next;
    while(next1!=NULL && curr2!=NULL){
        //curr2->data lies in the range
        if((curr1->data)<=(curr2->data) && (curr2->data)<=(next1->data)){
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
            
            curr1 = curr2;
            curr2 = next2;
        }
        //curr2->data doesnot lie in the range
        else{
            //curr1 and next1 ko aage badhado
            curr1 = next1;
            next1 = next1->next;
            if(next1 == NULL){
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
}

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first == NULL){
        return second;
    }
    
    if(second == NULL){
        return first;
    }
    
    if(first->data <= second->data){
        return result(first,second);
    }
    else{
        return result(second,first);
    }
}

int main(){
    return 0;
}