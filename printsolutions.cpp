#include<iostream>
using namespace std;
void combination(int n,int a)
{
	int arr[n];
	int sum=0;
	int j=1;
	for(int i=0;i<n;i++)
	arr[i]=0;
	while(j>0)
	{
		bool check=true;
		sum=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]==a+1)
			{
				arr[i]=0;
				if (i==n-1)
				{
					check =false;
					break;
				}
				arr[i+1]++;
			}
			sum+=arr[i];
		}
		if(check==false)
		
			break;
		
		if (sum==a)
		{
			for(int i=n-1;i>=0;i--)
			
				cout<<arr[i]<<" ";
				cout<<endl;
			
		}
		arr[0]++;
	}
}

int main()
{
	int n,c;
	cout<<"Enter the numbe of digits that you want  combination: ";
	cin>>n;
	cout<<"Enter the sum of all digits: ";
	cin>>c;
	combination(n,c);
	return 0;
}
	
	
	
	

