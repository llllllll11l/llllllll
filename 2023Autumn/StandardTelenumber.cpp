#include <bits/stdc++.h>

using namespace std;

char a[8][4];
string s;
int n;
	
int main()
{
	cin>>s;
	for (int i=0;i<8;i++)
		if(i+2!=7&&i+2!=9)
			for (int j=0;j<3;j++)
			{
				a[i][j]='A'+n;
				n++;
			}
		else
			for (int j=0;j<4;j++)
			{
				a[i][j]='A'+n;
				n++;
			}
	for (int i=0;i<7;i++)
		for (int j=0;j<8;j++)
			for (int k=0;k<4;k++)
				if (s[i]==a[j][k])
				{
					cout<<j+2;
					break;
				}
	return 0;
}
