#include <bits/stdc++.h>
using namespace std;
int search(vector<int>&a,int s,int e,int key)
{
	int res=-1;
	while(s<=e)
	{
		int mid=s+(e-s)/2;
		if(a[mid]==key)
		{
			res=mid;
			e=mid-1;
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
	int n,key;
	cin>>n>>key;
	int s=0;
	int e=1;
	vector<int>a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	while(key>a[e])
	{
		s=e;
		e=2*e;
	}
	int x=search(a,s,e,key);
	cout<<x;
	return 0;
}	