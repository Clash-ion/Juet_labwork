#include <iostream>
using std::cin;
using std::cout;
using std::endl;
void minmax(int [],int,int &,int &);
int main(int argc, char *argv[])
{
	int n;
	cin>>n;
	int arr[n],max,min;
	int &ref_max = max;
	int &ref_min = min;
	for (int i = 0; i<n;i++)
	{
		cin>> arr[i];
	}
	minmax(arr,n,ref_max,ref_min);
	cout << "max is : " << max << "\nmin is " << min << endl;
}
void minmax(int arr[],int n,int& max,int &min)
{
	max = arr[0];
	min = arr[0];
	for (int i = 1 ; i < n;i++)
	{
		if (max<arr[i])
		max = arr[i];
		if (min> arr[i])
		min = arr[i];
	}
}