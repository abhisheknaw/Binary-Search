#include <bits/stdc++.h>
using namespace std;
int rotated(int a[],int s,int e,int n)
{
	int pivot;
	while(s<=e)
	{
		int mid = s+(e-s)/2;
		int next = (mid+1)%n;
		int prev = (mid+n-1)%n;
		if(a[mid]<a[prev] && a[mid]<a[next])
		{
			pivot=mid;
			break;
		}
		else if(a[mid]<a[e])
		{
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
	}
	return pivot;
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
    if(a[0]<a[n-1] || n==1)
    {
    	x=0;
    	cout<<x;
    }
    else
    {
    	x=rotated(a,0,n-1,n);
    	cout<<(n-x);
    }
    return 0;	
 } 