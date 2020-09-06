#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
 int Z(vector<vector<int>>& clips, int T) {
 vector <int> v(T + 1, -1);
 int n = clips.size();
 for(int i = 0; i < n; i++){
 if(clips[i][0] > T)continue;
 v[clips[i][0]] = max(v[clips[i][0]], min(clips[i][1],
 T));
 }
 int c = v[0];
 if(v[0] == -1)return -1;
 int i = 1;
 int x = 1;
 int next = 0;
 while(c < T && i <= n){
 while(i <= c){
 next = max(next, v[i]);
 i++;
 }
 if(next == c || next == -1) return -1;
 c = next;
 x++;
 }
 return c >= T? x : -1;
 }
};
int main(){
 vector<vector<int>> v1 = {{0,2},{4,6},{8,10},{1,9},{1,5},{5,9}};                         // you can change the code as per your input here 

 Solution ob;
 cout << (ob.Z(v1, 10));
}
