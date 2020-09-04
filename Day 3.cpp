#include<iostream>
using namespace std;
string Common_String(string str1, string str2, int l1, int l2){
 string result;
 int flag;
 if (l1>l2){
 for (int i=1; i<=l2; i++){
 string sub2=str2.substr(0,i);
 flag=0;
 for(int j=0; j<l2; j+=sub2.length()){
 string temp1=str2.substr(j, i);
 if (temp1!=sub2)
 flag=1;
 }
 if (flag==1)
 continue;
 for (int m=0;m<l1;m+=sub2.length()){
 string temp2=str1.substr(m, i);
 if (temp2!=sub2)
 flag=1;
 }
 if (flag!=1){
 if (sub2.length()>result.length())
 result = sub2;
 }
 }
 }
 else if(l2>l1){
 for (int i=1;i<=l1;i++){
 string sub1=str1.substr(0, i);
 flag=0;
 for (int j=0;j<l1;j+= sub1.length()){
 string temp1=str1.substr(j,i);
 if (temp1!=sub1)
 flag=1;
 }
 if (flag==1)
 continue;
 for (int m=0;m<l2;m+=sub1.length()){
 string temp2=str2.substr(m,i);
 if (temp2!=sub1)
 flag=1;
 }
 if (flag!=1){
 if (sub1.length()>result.length())
 result=sub1;
 }
 }
 }
 else
 cout<<" ' ' ";
 cout<<"\n "<<result;
}
int main(){
 string s1, s2;
 cout<<"\n Enter your first String: ";
 getline(cin, s1);
 cout<<"\n Enter string no.2: ";
 getline(cin,s2);
 int l1=s1.length(), l2=s2.length();
 Common_String(s1,s2,l1,l2);
 return 0;
}
