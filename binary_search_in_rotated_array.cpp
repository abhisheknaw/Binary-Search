#include <bits/stdc++.h>
using namespace std;
int minindex(int a[],int s,int e,int n)
{
	int  min;
	while(s<=e)
	{
		int mid= s+(e-s)/2;
		int prev= (mid+n-1)%n;
		int next= (mid+1)%n;
		if(a[mid]<a[prev] && a[mid]<a[next])
		{
			min=mid;
			break;
		}
		else if(a[mid]<a[e])
		{
			e=mid-1;
		}
		else if(a[mid]>a[e])
		{
			s=mid+1;
		}
	}
	return min;
}
int binarysearch(int a[],int s,int e,int x)
{
	while(s<=e)
	{
		int mid=s+(e-s)/2;
		if(a[mid]==x)
		{
			return mid;
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
	int n,x;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>x;
	int answer;
	if(n==1 && a[0]!=x)
	{
		answer=-1;
	}
	else if(n==1 && a[0]==x)
	{
		answer=0;
	}
	else
	{
		int b=minindex(a,0,n-1,n);
	    if(x==a[b])
	    {
		    answer=b;
	    }
	    else
	    {
		    int lt=binarysearch(a,0,b-1,x);
		    int rt=binarysearch(a,b+1,n-1,x);
		    if(lt==-1 && rt==-1)
		    {
			    answer=-1;
		    }
		    else if(lt==-1)
		    {
			    answer=rt;
		    }
		    else
		    {
			    answer=lt;
		    }
	    }

	}
	

	cout<<answer;
	return 0;
}	
