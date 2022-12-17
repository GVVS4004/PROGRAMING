#include<bits/stdc++.h>
using namespace std;
class Node{
    public: 
    int data;
    Node* next;
    // Node(int data){
    //     this ->data=data;
    //     this ->next=NULL;
    // }
};
void insertathead(Node* &head,int data){
    if(head==NULL){
        Node* newnode =new Node();
        newnode->data=data;
        newnode->next=NULL;
        head=newnode;
    }
    else{
        Node* node =new Node();
        node->next=head;
        node->data=data;
        head=node;
    }
}

int main(){
    Node* head=NULL;
    // cout<<head->data;
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int value;
        cout<<"enter the value";
        cin>>value;
        insertathead(head,value);
    }
    Node* ptr=head;
    // int count=0;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
        // count++;
        cout<<count<<endl;
    }
    // cout<<"HI"<<endl;
    // cout<<count<<endl;
    
    
    
    
    return 0;
}
//30 ptr.next=20
//20 ptr.next=10
//10 ptr