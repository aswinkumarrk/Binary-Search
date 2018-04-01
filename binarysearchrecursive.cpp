#include <iostream>
using namespace std;
int binarySearch(int A[], int start, int end, int x)
{
while(start<=end)
{
		int mid =(start+end)/2;
		if (A[mid] == x) return mid;
		if ( x<A[mid]) return binarySearch(A, start, mid-1, x);
		return binarySearch(A, mid+1, end, x);
}
return -1;
}
int main( )
{
int A[] = {2, 3, 4, 10, 40};
	int mid;
int n = sizeof(A)/ sizeof(A[0]);
int x = 3;
int result = binarySearch(A, 0, n-1, x);
(result == -1)?cout<<"Element is not present in array": cout<<"Element is present at index"<<result;
return 0;
}