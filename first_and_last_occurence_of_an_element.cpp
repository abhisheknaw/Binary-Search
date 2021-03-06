#include <bits/stdc++.h>
using namespace std;
int foccur(int a[],int s,int e,int x)
{
	int res=-1;
	while(s<=e)
	{
		int mid=s+(e-s)/2;
		if(a[mid]==x)
		{
			res=mid;
			e=mid-1;
		}
		else if(a[mid]<x)
		{
			s=mid+1;
		}
		else if(a[mid]>x)
		{
			e=mid-1;
		}
	}
	return res;
}
int loccur(int a[],int s,int e,int x)
{
	int ans=-1;
	while(s<=e)
	{
		int mid=s+(e-s)/2;
		if(a[mid]==x)
		{
			ans=mid;
			s=mid+1;
		}
		else if(a[mid]<x)
		{
			s=mid+1;
		}
		else if(a[mid]>x)
		{
			e=mid-1;
		}
	}
	return ans;
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
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>x;
    int res=foccur(a,0,n-1,x);
    int ans=loccur(a,0,n-1,x);
    cout<<res<<" "<<ans;
    return 0;
  } 