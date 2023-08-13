#include <bits/stdc++.h> 
void sortedInsert(stack<int>&st,int num){
	if(st.empty()||!st.empty() && st.top()<num){
		st.push(num);
		return;
	}
	int n=st.top();
	st.pop();
	sortedInsert(st,num);
	st.push(n);

}
void sortStack(stack<int> &stack)
{
	if(stack.empty()){
		return;
	}
	int num=stack.top();
	stack.pop();
	sortStack(stack);
	sortedInsert(stack,num);
}
