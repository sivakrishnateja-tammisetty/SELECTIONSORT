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
