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
			res=mid+1;
			e=mid-1;
		}
		if(a[mid]<x)
		{
			s=mid+1;
		}
		if(a[mid]>x)
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
			ans=mid+1;
			s=mid+1;
		}
		if(a[mid]<x)
		{
			s=mid+1;
		}
		if(a[mid]>x)
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
    if(res==-1)
    {
        cout<<"not found";
    }
    else
    {
        cout<<res;
    }
    cout<<"\n";
    if(ans==-1)
    {
        cout<<"not found";
    }
    else
    {
        cout<<ans;
    }
    return 0;
   } 	