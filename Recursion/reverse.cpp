#include<iostream>
using namespace std;

void sol(string str , int size){

if(size==0){
    return;
}

std::cout << str[size-1]<<" ";
sol(str,size-1);



}

int main(){
    string str = "Yash Murani";
   
    int size = str.length();

    // sol(str,size);

 
}