#include<iostream>
#include <vector>       // Missing include for vector
#include <algorithm>
#include <utility>
#include<map>
#include<set>
#include<math.h>
using namespace std;
// void solve()
// {
//  vector <int> m;
 
//  int number;
//  cin>>number;
//  cout<<number;
// }

struct Node{
    int data;// stores the value of node
    Node* next;//Pointer to the next node 



    //constructor to initialize a new node 
    Node(int value){
        data=value;
        next=nullptr;
    }

};


class LinkedList{
private:
    Node* head;//Pointer to the first node of the list 

public:

    //constructor to initialize  the list as empty
LinkedList(){

head=nullptr;

}

//Function to insert a node at the end of the list 

void insertAtEnd(int value){
    Node* newNode =new Node(value);//create  a new node 


    //If the list is empty ,set the new node as head 


    if(!head){
        head=newNode;
        return;
    }


    Node* temp=head;
    while(temp->next!=nullptr)
        temp=temp->next;

    // Link the last node to the new node


    temp->next=newNode;

}


//Function to insert at the begining of the node 

void insertAtBeginning(int value){
    Node* newNode=new Node(value);//create a new node 

    newNode->next=head;
    head=newNode;


}

//Function to print the linked list 

void printList(){
    Node *temp=head;
    while(temp){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<"NULL";
}

void deleteNode(int value){
    if(!head) return ;

    //if head needs to be deleted 


    if(head->data==value){
        Node*temp =head;
        head=head->next;
        delete temp;
        return;

    }


    //Traverse the list to find the node before the one to delete 


    Node *temp=head;
    while(temp->next &&  temp->next->data!=value)
        temp =temp->next;


if(temp->next){
    Node *nodeToDelete= temp->next;
    temp->next=temp->next->next;
    delete nodeToDelete;

}

}

void reverseList(){

    Node* prev=nullptr;
    Node* curr=head;
    Node* next=nullptr;


    while(curr){
        next=curr->next;
        curr->next=prev;
        prev= curr;
        curr=next;
    } 

    head=prev;

}


};
int main()
{
  LinkedList list;

  list.insertAtEnd(10);
  list.insertAtEnd(20);
  list.insertAtEnd(30);

  cout<<"Initial list"<<endl;

  list.printList();
  cout<<""<<endl;

  list.reverseList();
  cout<<"Revesed list"<<endl;

  list.printList();

  return 0;

}