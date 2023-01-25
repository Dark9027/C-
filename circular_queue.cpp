#include<iostream>
using namespace std;

int queue[3],n=3;
int f=-1,r=-1;

void enqueue(int item){
    if((f==0 && r==n-1) || (f==r+1)){
        cout<<"overflow\n";
        return;
    }
    if(f==-1){
        f=0;
        r=0;
    }
    else{
        if(r==n-1){
            r=0;
        }
        else{
            r++;
        }
    }
    queue[r]=item;
}

void display(){

    cout<<"\n\n";
    if(f>r){
        for(int i=f;i<n;i++){
            cout<<queue[i]<<endl;
        }
        for(int i=0;i<=r;i++){
            cout<<queue[i]<<endl;
        }
    }
    else{
        for(int i=f;i<=r;i++){
            cout<<queue[i]<<endl;
        }
    }
}


void dequeue(){
    if(f==-1){
        cout<<"underflow\n";
    }
    if(r==f){
        r=-1;
        f=-1;
    }
    else{
        if(f==n-1){
            f=0;
        }
        else{
            f++;
        }
    }
}

int main(){
    while(1){
        cout<<"=============QUEUE==========="<<endl;
        cout<<"1.Enqueue"<<endl;
        cout<<"2.Dequeue"<<endl;
        cout<<"3.display"<<endl;
        cout<<"4.exit"<<endl;
        int ch;
        cin>>ch;

        switch (ch)
        {
        case 1:
            int item;
            cout<<"enter the element\n";
            cin>>item;
            enqueue(item);
            display();
            break;

        case 2:
        dequeue();
        display();
        break;
        case 3:
            display();
            break;
        case 4:
        exit(0);
        default:
            break;
        }
    }
    return 0;
}