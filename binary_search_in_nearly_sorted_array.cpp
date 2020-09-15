#include <bits/stdc++.h>
using namespace std;
int search(int a[],int s,int e,int x)
{
	while(s<=e)
	{
		int mid = s+(e-s)/2;
		if(a[mid]==x)
		{
			return mid;
		}
		else if(a[mid+1]==x && a[mid+1]<=e)
		{
			return mid+1;
		}
		else if(a[mid-1]==x && a[mid-1]>=s)
		{
			return mid-1;
		}
		else if(x<a[mid-1])
		{
			e=mid-2;
		}
		else
		{
			s=mid+2;
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
	int x,n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>x;
	int index=search(a,0,n-1,x);
	if(index==-1)
	{
		cout<<"element not exist";
	}
	else
	{
		cout<<index;
	}
	return 0;
}	