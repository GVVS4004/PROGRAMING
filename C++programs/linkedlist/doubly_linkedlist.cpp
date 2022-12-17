#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};
void insertatstart(Node* &head,int data){
        if(head==NULL){
            Node* newnode=new Node();
            newnode->data=data;
            newnode->prev=NULL;
            head=newnode;
            
        }
        else{
            Node* newnode=new Node();
            newnode->data=data;
            newnode->next=head;
            newnode->prev=NULL;
            head=newnode;
            
        }
}
void insertatpos(Node* &head,int data,int pos){
    Node* ptr=head;
    for (int i=0;i<pos-1;i++){
        ptr=ptr->next;
        cout<<ptr->data;
    }
    
    Node* newnode=new Node();
    newnode->data=data;
    newnode->next=ptr->next;
    newnode->prev=ptr;
    newnode->next->prev=newnode;
    ptr->next =newnode;
}
void 
int main(){
    Node* head=NULL;
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int value;
        cout<<"enter the value";
        cin>>value;
        insertatstart(head,value);
    }
    
    int pos,data;
    cout<<"pos";
    cin>>pos;
    cout<<"data";
    cin>>data;
    insertatpos(head,data,pos);
    Node* ptr1=head;
    while(ptr1!=NULL){
        cout<<ptr1->data<<endl;
        ptr1=ptr1->next;
        
    }
}