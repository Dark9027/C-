#include<iostream>
using namespace std;

int l_search(int A[],int item,int n){
    for(int i=0;i<n;i++){
        if(A[i]==item){
            return i+1;
        }
    }
    
    return -1;

}

int main(){
    int A[]={1,2,3,4,5,6};
    int c=l_search(A,6,6);
    if(c==-1){
        cout<<"not found\n";
    }
    else{
        cout<<"found_at_"<<c;
    }
    return 0;
}
