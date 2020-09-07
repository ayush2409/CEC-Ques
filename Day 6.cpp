#include <iostream>
using namespace std;

void Z(int arr[], int n)
{
 int count = 0;


 for (int i = 0; i < n; i++)
 if (arr[i] != 0)
 arr[count++] = arr[i];


 while (count < n)
 arr[count++] = 0;
}

int main()
{
 int i,arr[5];
 for(i=0;i<5;i++)
 cin>>arr[i];
 int n = sizeof(arr) / sizeof(arr[0]);
 Z(arr, n);
 cout << "Array after rearranging :\n";
 for (int i = 0; i < n; i++)
 cout << arr[i] << " ";
 return 0;
}
