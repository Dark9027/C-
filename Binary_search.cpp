#include<iostream>
using namespace std;
int b_search(int lb,int ub,int item, int arr[]){
    int mid;
    if(lb>ub){
        cout<<"not found";
    }
    else{
        mid=(lb+ub)/2;
        if(arr[mid]==item){
            cout<<"found\n";
            return mid+1;
        }
        else if(arr[mid]>item){
            return b_search(0,mid-1,item,arr);
        }
        else if(arr[mid]<item){
            return b_search(mid+1,ub,item,arr);
        }
    }
}

int main(){
    int arr[10];
    int item;
    int lb=0,ub,n;
    cout<<"enter the value of n:\n";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter the sorted array:\n";
        cin>>arr[i];
    }
    cout<<"enter the item:\n";
    cin>>item;
    ub=n;



    cout<<b_search(0,ub,item,arr);

}
