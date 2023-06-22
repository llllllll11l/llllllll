#include <bits/stdc++.h>

using namespace std;

string str[6] = {"Children","Teenagers","Youth","middle-aged","Elderly","Old man"};

int main()
{
	int a,x;
	cin>>a;
	x=(a-1)/10;
	if(x==0)
		x=0;
	else if(x==1)
		x=1;
	else if(x<=3)
		x = 2;
	else if(x==4)
		x = 3;
	else if(x<=7)
		x=4;
	else if(x<=9)
		x=5;
	cout<<str[x]<<endl;
	return 0;
}
