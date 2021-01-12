#include<iostream>
using namespace std;
#define D 100

void spiral(int a[][D],int m,int n)
{
	int k=0,l=0,i;
	while(k<m && l<n)
	{
		for(i=l;i<n;i++)
		{
			cout<<a[k][i]<<" ";
		}
		k++;
		
		for(i=k;i<m;i++)
		{
			cout<<a[i][n-1]<<" ";
		}
		n--;
		
		if(k<m)
		{
			for(i=n-1;i>=l;i--)
			{
				cout<<a[m-1][i]<<" ";
			}
			m--;
		}
		
		if(l<n)
		{
			for(i=m-1;i>=k;i--)
			{
				cout<<a[i][l]<<" ";
			}
			l++;
		}
	}
}
int main()
{
	int a[D][D];
	int r,c;
	cin>>r>>c;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	spiral(a,r,c);
	return 0;
}
