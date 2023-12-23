#include<iostream>
using namespace std;



class node{

    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data  = data;
        this->left = NULL;
        this->right = NULL;
    }
};


node* tree(){

    int data;
    std::cout << "Enter The value of Node " << std::endl;
    cin>>data;

    if(data==-1){
        return NULL;
    }

    node* n = new node(data);

    std::cout << "Enter the value of left " <<n->data<< std::endl;
    n->left = tree();

    std::cout << "Enter the value of right " <<n->data<< std::endl;
    n->right = tree();



}

int main(){
    node* nodemain = tree();
}