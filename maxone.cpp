#include<iostream>
using namespace std;
int main()
{
    int D=100;
    int a[D][D];
    int r,c,rownum;
    cin>>r>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    int j=c-1;
    for(int i=0;i<r;i++)
    {
        while(j>=0)
        {
            if(a[i][j]==1)
             {   j--;
                rownum=i;
             }
             else
                i++;
        }
    }
    cout<<rownum+1;
    return 0;
    
}
