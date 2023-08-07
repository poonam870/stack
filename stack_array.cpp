#include <algorithm>
#include <iostream>
#include <vector>
#include<queue>

using namespace std;
class Stack{
	int* arr;
	int nextid;
	int cap;
	public:
	Stack(){
		cap=8;
		arr=new int[8];
		nextid=0;
	}
	Stack(int n){
		cap=n;
		arr=new int[cap];
		nextid=0;
	}
	int size(){
		return nextid;
	}
	bool isEmpty(){
		return nextid==0;
	}
	void push(int ele){
		if(nextid==cap){
			cout<<"stack overflow"<<endl;
			return;
		}
		arr[nextid++]=ele;
	}
	void pop(){
		if(isEmpty()){
			cout<<"stack underflow!!!"<<endl;
			return;
		}
		nextid--;
	}
	int top(){
		if(isEmpty()){
			return -1;
		}
		return arr[nextid-1];
	}
	
};

int main() {
    Stack s(4);
	s.push(80);
	s.push(70);
	s.push(60);
	s.push(50);
	s.push(40);
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.size()<<endl;
	s.pop();
	
	return 0;
}
