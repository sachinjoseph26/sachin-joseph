#include<iostream>
#include<stack>>
using namespace std;

void bracketno(string exp,int n)
{
	stack<int>right;		//create a stack named right
	int left=1;				
	for(int i=0;i<n;i++)
	{
		if(exp[i]=='(')		//if ( is found print left and push left to stack right
			{
				cout<<left<<" ";
				right.push(left);
				left++;				//then increment left
			}
		else if(exp[i]==')')	//if ) is found print the top element in right stack
										//then pop the top element
		{
			cout<<right.top()<<" ";
			right.pop();
		}
	}
}
int main()
{
	string exp;
	cin>>exp;
	int n=exp.size();
	bracketno(exp,n);
}
