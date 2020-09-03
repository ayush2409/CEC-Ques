#include<iostream>
using namespace std;
int main()
{
 int n,i,j,d,temp;
 int c=0;
 bool flag = true;
 cout<<"Enter size of array : ";
 cin>>n;
 int a[n],b[n],z[n];
 for(i=0;i<n;i++)
 cin>>a[i];
 for(i=0;i<n-1;i++) 
 for(j=0;j<n-i-1;j++)
 if(a[j]>a[j+1])
 {
 temp = a[j];
 a[j] = a[j+1];
 a[j+1] = temp;
 }
 for(i=0;i<n;i++){
 if(a[i]!=a[i+1])
 {
 b[c]=a[i];
 c++;
 }
 }
 for(i=0;i<c;i++) 
 {
 d=0;
 for(j=0;j<n;j++)
 if(b[i]==a[j])
 d++;
 z[i]=d;
 }
 for(i=0;i<c;i++)
 if(z[i]==z[i+1])
 flag = false;
 
 cout<< ((flag==true) ? "True" : "False");
 return 0;
}
