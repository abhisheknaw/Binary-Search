#include <bits/stdc++.h>
using namespace std;
int bitonic_search(vector<int>&a,int s, int e)
{
	while(s<=e)
	{
		int mid=s+(e-s)/2;
		if(mid>0 && mid<e)
		{
			if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
			{
				return mid;
			}
			else if(a[mid]<a[mid+1])
			{
				s=mid+1;
			}
			else
			{
				e=mid-1;
			}
		}
		else if(mid==0)
		{
			if(a[0]>a[0+1])
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			if(a[e]>a[e-1])
			{
				return e;
			}
			else
			{
				return e-1;
			}
		}
	}
	return -1;
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
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int x=bitonic_search(a,0,n-1);
	cout<<a[x];
	return 0;
}		