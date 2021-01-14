#include<iostream>
using namespace std;

void colony(int *cells,int day)
{
	int u[8];
	for(int i=0;i<day;i++)
	{
		cells[-1]=0;
		cells[8]=0;
		for(int k=0;k<8;k++)
		{
			u[k]=cells[k];
		}
		for(int j=0;j<8;j++)
		{
			if(u[j-1]==u[j+1])
			{
				cells[j]=0;
			}
			else
				cells[j]=1;
		}
		
	}
	for(int i=0;i<8;i++)
	{
		cout<<cells[i]<<" ";
	}
}
int main()
{
	int day;
	int arr[8];
	for(int i=0;i<8;i++)
	{
		cin>>arr[i];
	}
	cin>>day;
	int *arrptr=arr;
	colony(arrptr,day);
	return 0;
}
