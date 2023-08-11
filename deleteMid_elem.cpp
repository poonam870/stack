#include <bits/stdc++.h> 
void solve(stack<int>&st,int cnt,int size){
   if(cnt==size/2){
      st.pop();
      return;
   }
   int num=st.top();
   st.pop();
   solve(st,cnt+1,size);
   st.push(num);
}
void deleteMiddle(stack<int>&st, int N){
   int cnt=0;
   solve(st,cnt,N);
}
