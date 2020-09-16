#include <bits/stdc++.h>
using namespace std;
int floor(int a[],int s,int e,int x)
{
	int res,ans;
	while(s<=e)
	{
		int mid=s+(e-s)/2;
		if(a[mid]==x)
		{
			ans=a[mid];
			return ans;
		}
		else if(a[mid]<x)
		{
			res=a[mid];
			s=mid+1;
		}
		else
		{
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
	int b=floor(a,0,n-1,x);
	cout<<"floor value="<<b;
	return 0;
}	