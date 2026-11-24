#include<iostream>
using namespace std;
class S{
    
struct Node{
int val;
Node*next;
};
Node *top=nullptr;
public:

void push(int val){
   Node *n= new Node;
   n->val=val;
   n->next=top;
   top=n;

}
void pop(){
    if(top==nullptr){
        cout<<"EMPTYY\n";
    return ;
    }
    Node *temp=top;
  //  temp->next=top;
    top=top->next;
delete temp;
}
void pop(int &val){
    if(top==nullptr){
        cout<<"EMPTYY\n";
        return;
    }
val=top->val;
    Node *temp=top;
    temp->next=top;
    top=top->next;
delete temp;
}

void get(){
    if(top==nullptr){
        cout<<"EMPTYYY\n";
        return;
    }
    cout<<top->val;
}
void print(){
Node *temp=top;
while(temp !=nullptr){
    cout<<temp->val<<" ";
    temp=temp->next;
}


}

};
int main(){
    S s1;
    s1.push(10);
        s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.pop();
    s1.print();
    s1.get();
    

}