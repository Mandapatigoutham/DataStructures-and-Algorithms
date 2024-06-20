#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int x=m%n;
	    int y=n-x;
	    if(m<n)
	    cout<<n-m<<endl;
	    else
	    cout<<min(x,y)<<endl;
	}
}
