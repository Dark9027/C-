#include<iostream>
using namespace std;

int selection_sort(int a[],int n)
{
int i,j,temp;
for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}

}


int main()
{
	int a[10],n;
	//limit of an array
	cout<<"\n Enter the limit of an array";
	cin>>n;
	
	//array input
	for (int i=0;i<n;i++)
	{
		cout<<"\n Enter the array element ";
		cin>>a[i];
		
	}
	
	// array display
	cout<<"\n\n----------Array Before Sorting---------------\n\n";
	for (int i=0;i<n;i++)
	{
		cout<<" "<<a[i];
		
	}	

	selection_sort(a,n);
	
		// array display
	cout<<"\n\n----------Array After Sorting---------------\n\n";
	for (int i=0;i<n;i++)
	{
		cout<<" "<<a[i];
		
	}

}

