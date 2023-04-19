#include <iostream>
#include <cmath>
#include <string>

using namespace std;
class Node{
private:
    int data;
    Node *next;
public:
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    int getData(){
        return data;
    }
    void setData(int data){
        this->data = data;
    }
    Node* getNext(){
        return next;
    }
    void setNext(Node *next){
        this->next = next;
    }
};
int main(){
    //create a linked list
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    head->setNext(second);
    second->setNext(third);
    //print the linked list
    Node *temp = head;
    while(temp != NULL){
        cout << temp->getData() << " ";
        temp = temp->getNext();
    }
    cout << endl;

    return 0;
}