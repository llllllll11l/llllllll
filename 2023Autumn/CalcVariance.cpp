#include <bits/stdc++.h>

using namespace std;

double a[1005];
int n;
double avr;
double vr;

int main()
{
	n=6;
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	for(int i=0;i<n;i++)
		avr+=a[i];
	avr/=n;
	
	for(int i=0;i<n;i++)
		vr+=(a[i]-avr)*(a[i]-avr);
	vr/=n;
	
	cout<<avr<<endl<<vr<<endl;
	
	return 0;
}
