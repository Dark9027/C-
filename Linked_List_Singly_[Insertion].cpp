
// Insertion_at_beg_&_Last...!

#include<iostream>
using namespace std;

struct node{
    int info;
    struct node *link;
};
struct node *start=NULL;

void insert_at_begin(int item){
    struct node *new_node=new struct node;
    new_node->link=start;
    new_node->info=item;
    start=new_node;
}
void insert_at_last(int item){
    struct node *new_node=new struct node;
    new_node->info=item;
    new_node->link=NULL;
    if(start==NULL){
        start=new_node;
    }
    else{
    struct node *ptr=start;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=new_node;
    }
}
void display(){
    struct node *ptr1=start;
    if(start==NULL){
        cout<<"underflow\n";
    }
    else{
        while(ptr1!=NULL){
            cout<<ptr1->info<<"->";
            ptr1=ptr1->link;
        }
        cout<<"X";
    }
}

int main(){
    insert_at_begin(10);
    insert_at_begin(20);
    insert_at_last(30);
    display();
    return 0;
}
