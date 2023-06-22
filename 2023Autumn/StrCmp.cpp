#include <bits/stdc++.h>

using namespace std;

string str1,str2;
int l1,l2;
int cnt;

int main()
{
	cin>>str1>>str2;
	l1=str1.length();
	l2=str2.length();
	int f=1;
	int k;
	int i=0;
	while(i<l2)
	{ 
		for (;str1[0]!=str2[i]&&i<l2;i++);
		for (int j=0,k=i;j<l1;j++,k++)
			if (str1[j]!=str2[k])
			{
				f=0;
				break;
			}
		if (f)
		{
			cout<<i<< " ";
			cnt++;
		}
		f=1;
		i++;
	}
	if (!cnt)
		cout<<"-1";
	return 0;
}
