#include <bits/stdc++.h>
using namespace std;
int ceil(int a[],int s,int e,int x)
{
	int res;
	while(s<=e)
	{
		int mid=s+(e-s)/2;
		if(a[mid]==x)
		{
			return a[mid];
		}
		else if(a[mid]<x)
		{
			s=mid+1;
		}
		else
		{
			res=a[mid];
			e=mid-1;
		}
	}
	return res;
}

int main() 
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
	int x,n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>x;
	int b=ceil(a,0,n-1,x);
	cout<<"ceil value="<<b;
	return 0;
}	