#include <bits/stdc++.h>
using namespace std;
int search(vector<int> &a,int s,int e ,int key)
{
	while(s<=e)
	{
		int mid = s+(e-s)/2;
		if(a[mid]==key)
		{
			return a[mid];
		}
		else if(a[mid]>key)
		{
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
	}
	int x=abs(a[e]-key);
	int y=abs(a[s]-key);
	if(x<y)
	{
		return a[e];
	}
	else
	{
		return a[s];
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
	int n,key;
	cin>>n>>key;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int x=search(a,0,n-1,key);
	cout<<x;
	return 0;
}	