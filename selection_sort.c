* SELECTION SORT: select minimus in an array and place front
steps:
	1.select minimums and swap(Select minimum in an entire array and place at front).
	2.select minimum in an unsorted array and swap.
	3. repeat step 1 &2
	4.  repeat step 1 &2
	5.   repeat step 1 &2


	Eg:
	#include <bits/stdc++.h>
using namespace std;
void selection_sort(int *a,int n)
{
    for(int i=0;i<=n-2;i++)
    {
        int min=i;
        for(int j=i;j<=n-1;j++)
        {
            if(a[j]<a[min])min=j;
        }
        int temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
}
void display(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
 int a[]={11,2,4,2,23,20};
 int n=sizeof(a)/sizeof(a[0]);
 selection_sort(a,n);
 display(a, n);
 
    return 0;
}
o/p:
	2 2 4 11 20 23 
















	
	
#include<stdio.h>
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
void selection_sort(int arr[],int n)
{

	int i,j;
	for(i=0;i<n-1;i++)
	{
		int min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		if(min !=i)
		{
			swap(&arr[i],&arr[min]);
		}
	}
}

void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
int main()
{
	int arr[]={11,12,9,8,7};
	int SIZE=sizeof(arr)/sizeof(arr[0]);
	selection_sort(arr,SIZE);
	display(arr,SIZE);
	return 0;
}
