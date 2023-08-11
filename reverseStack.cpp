void insertAtBoottom(stack<int> &st,int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    int num=st.top();
    st.pop();
    insertAtBoottom(st,x);
    st.push(num);
}
void reverseStack(stack<int> &stack) {
   if(stack.empty()){
       return;
   }
   int x=stack.top();
   stack.pop();
   reverseStack(stack);
   insertAtBoottom(stack,x);
}
