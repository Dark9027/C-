#include<iostream>
using namespace std;

void merge(int [],int ,int ,int);
void merge_sort(int a[],int p,int r)
{
	if(p<r)
	{
		int q=(p+r)/2;
		merge_sort(a,p,q);
		merge_sort(a,q+1,r);
		merge(a,p,q,r);
	}
}

void merge(int a[],int p,int q,int r)
{
	int n1,n2;
	n1=q-p+1;
	n2=r-q;
	int L[n1+2],R[n2+2];
	for (int i=1;i<=n1;i++)
	{
		L[i]=a[p+i-1];
	}
	
	for (int j=1;j<=n2;j++)
	{
		R[j]=a[q+j];
	}
	
	L[n1+1]=32767;
	R[n2+1]=32767;
	int i=1;
	int j=1;
	for (int k=p;k<=r;k++)
	{
		if(L[i]<R[j])
		{
			a[k]=L[i++];
		}
		else
			a[k]=R[j++];
	}
	
}



int main()
{
	int a[10],n;
	//limit of an array
	cout<<"\n Enter the limit of an array";
	cin>>n;
	
	//array input
	for (int i=1;i<=n;i++)
	{
		cout<<"\n Enter the array element ";
		cin>>a[i];
		
	}
	
	// array display
	cout<<"\n\n----------Array Before Sorting---------------\n\n";
	for (int i=1;i<=n;i++)
	{
		cout<<" "<<a[i];
		
	}	

	merge_sort(a,1,n);
	
		// array display
	cout<<"\n\n----------Array After Sorting---------------\n\n";
	for (int i=1;i<=n;i++)
	{
		cout<<" "<<a[i];
		
	}

}
