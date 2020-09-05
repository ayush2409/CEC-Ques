#include<iostream>
#include<string>
#include<sstream>
#include<cmath>
using namespace std;
int main()
{
int r1,c1,r2,c2,i,j,c=0,temp,p;
cout<<"Enter the size of the matrix : ";
cin>>r1>>c1;
cout<<"Enter the coordinates of the location : ";
cin>>r2>>c2;
p = r1*c1;
int a[r1][c1];
int dist[r1*c1];
string s[r1*c1],tin;
for(i=0;i<r1;i++)
for(j=0;j<c1;j++)
{
stringstream str1,stc1;
dist[c] = abs(r2-i) + abs(c2-j);
str1<<i;
stc1<<j;
s[c] = '[' + (str1.str()) + ',' + (stc1.str()) + ']';
c++;
}
for(i=0;i<p-1;i++)
for(j=0;j<p-i-1;j++)
if(dist[j]>dist[j+1])
{
temp = dist[j];
dist[j] = dist [j+1];
dist[j+1] = temp;
tin = s[j];
s[j] = s[j+1];
s[j+1] = tin;
}
cout<<'[';
for(i=0;i<p-1;i++)
cout<<s[i]<<",";
cout<<s[p-1]<<']'<<endl;
return 0;
}
