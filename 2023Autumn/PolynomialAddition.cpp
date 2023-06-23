#include <bits/stdc++.h>

using namespace std;

int a[10005];

int main()
{
    int x,y;
    int f;
    cin>>x>>y;
    while(x!=0)
    {
    	a[x]+=y;
        cin>>x>>y;
    }
    cin>>x>>y;
    while(x!=0)
    {
        a[x]+=y;
        cin>>x>>y;
    }
	
	for(int i=101;i>0;i--)
        if(a[i]!=0)
        {
            cout<<i<<"x"<<a[i];
            f=0;
            for(int j=i-1;j>0;j--)
            {
                if(a[j]!=0)
                f=1;
            }
            if(f)
                cout<<'+';
        }
    return 0;
}
