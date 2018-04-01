#include <iostream>
using namespace std;
int binarySearch(int arr[], int start, int end, int x)
{
	while (start <= end)
	{
		int m = (start + end)/2;
		if (arr[m] == x)
			return m;
		if (arr[m] < x)
			start = m + 1;
		else
			end = m - 1;
	}
	return -1;
}

int main(void)
{
/*	int arr[] = {2, 3, 4, 10, 40};
	int n = sizeof(arr)/ sizeof(arr[0]);
	int x = 10;*/
	int n,i,arr[i],x;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	cout<<"enter the array elements"<<endl;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"enter the element x to be searched"<<endl;
	cin>>x;
	int result = binarySearch(arr, 0, n-1, x);
	if(result == -1)
	    cout<<"Element is not present in array";
	   else
	   cout<<endl<<"Element is present at index"<<result;
	return 0;
}
