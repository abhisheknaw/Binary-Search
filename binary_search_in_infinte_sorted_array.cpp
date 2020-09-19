#include <bits/stdc++.h>
using namespace std;
int infinite_search(vector<int>&a,int s,int e,int key)
{
	while(s<=e)
	{
		int mid=s+(e-s)/2;
		if(a[mid]==key)
		{
			return mid;
		}
		else if(a[mid]<key)
		{
			s=mid+1;
		}
		else
		{
		    e=mid-1;
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
	int s=0;
	int e=1;
	int key;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>key;
	while(a[e]<key)
	{
		s=e;
		e=2*e;
	}
	int x=infinite_search(a,s,e,key);
	cout<<x;
	return 0;
}	
