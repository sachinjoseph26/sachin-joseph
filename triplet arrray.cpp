#include<iostream>
#include<algorithm>
using namespace std;
#define D 100

void triplet(int a[D],int n)
{
	for(int i=0;i<n;i++)
	{
		a[i]=a[i]*a[i];
	}
	sort(a,a+n);
	for(int i=n-1;i>=2;i--)
	{
		int l=0;
		int r=i-1;
		while(l<r)
		{
			if(a[l]+a[r]==a[i])
			{
				cout<<a[l]<<","<<a[r]<<","<<a[i]<<endl;
			}
			if(a[l]+a[r] < a[i])
				l++;
			else
				r--;
		}
	}
}
int main()
{
	int a[D];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	triplet(a,n);
	return 0;
}
