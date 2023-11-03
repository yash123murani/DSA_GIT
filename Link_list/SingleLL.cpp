#include<iostream>
using namespace std;

class Node{
public:
int data;
Node* next = NULL;

    
    Node(int data){
        this->next = NULL;
            this->data= data;
    }
};

void inserthead(Node * &head, Node* &tail,int data){
    if(head==NULL){
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }else{

        Node *temp = new Node(data);
        temp -> next = head;
        head = temp;
    }
}

void insertAtTail( Node* &head, Node* &tail ,int data){
    if(head==NULL){
        
        Node* temp = new Node(data);
        head = temp;
        tail = temp;   
    }
    
        Node* temp = new Node(data);
        tail->next = temp;
        tail = temp;

    
}

void Insertatpos(Node *&head, Node* &tail, int data, int pos){

    if(pos<=1){
        inserthead(head,tail, data);
    }
   
    else{
        Node *prv = NULL;
        Node *current = head;

        while(pos!=1){
            prv = current;
            current = current->next;
            pos--;
        }

    Node* tmp = new Node(data);
    prv->next = tmp;
    tmp->next = current;
    }


}

void print(Node * &head){
    Node *temp = head;
    while(temp!=NULL){
        std::cout << temp->data <<"->";
        temp = temp ->next;

            }
            std::cout << " " << std::endl;
}






int main(){

    Node *head =  NULL;
    Node *tail = NULL;


    
    inserthead(head,tail,50);    
    inserthead(head,tail,40);
    inserthead(head,tail,30);
    inserthead(head,tail,20);
    inserthead(head,tail,10);
    // print(head);

    insertAtTail(head,tail,100);
    // print(head);

    Insertatpos(head,tail,100,2);
    // print(head);
    Insertatpos(head,tail,200,0);
    // print(head);
    Insertatpos(head,tail,300,3);
    print(head);

    return 0 ;
    
}