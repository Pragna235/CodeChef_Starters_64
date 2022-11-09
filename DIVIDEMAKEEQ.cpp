#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int x;
	    for (int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    x=a[0];
	    for(int i=1;i<n;i++)
	    {
	        x=gcd(x,a[i]);
	    }
	    
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]==x) count++;
	    }
	    cout<<n-count<<endl;
	}
	return 0;
}
