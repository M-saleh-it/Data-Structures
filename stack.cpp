#include<iostream>
using namespace std;
const int Max_Size=100;
class stack{
int top;
int item[Max_Size];
public:
stack(){
    top=-1;
}
void push(int element){
    if(top>=Max_Size){
        cout<<"the iten is full\n";
    }
    else{
        top++;
        item[top]=element;
    }
}
bool isEmpty(){
    return top<0;
}
void pop(){
    if(isEmpty()){
        cout<<"the iten is farh\n ";
    }
    else{
        top--;
    }
}

void pop(int &element){
        if(isEmpty()){
        cout<<"the iten is farh\n ";
    }
    else{
        element=item[top];
        top--;
    }
}
void getTop(){
    if(isEmpty()){
        cout<<"the iten is farh\n ";
    }else{
      //  stacktop=item[top];
cout<<item[top];//

    }
}

    void print () {
        for(int i=top;i>=0;i--){
        cout<<item[i]<<" ";
        }
         cout<<endl;
    }
   

};
int main(){
    stack s1;
    s1.push(5);
    s1.push(10);
     s1.push(15);
    s1.push(20);
    
   s1.getTop();
    cout<<endl;
    int y=0;
s1.pop(y);
    cout<<y;
    cout<<endl;

s1.getTop();
cout<<endl;
s1.print();
     
    
}