#include <algorithm>
#include <iostream>
#include <vector>
#include<queue>

using namespace std;
template<typename T,typename v>
class Pair{
	T X;
	v Y;
	public:
	void setX(T x){
		this->X=x;
	}
	T getX(){
		return  X;
	}
	void setY(v y){
		this->Y=y;
	}
	v getY(){
		return  Y;
	}
	
};

int main() {
	Pair <double,int>p2;
	p2.setX(9.99);
	p2.setY(8.09);
	cout<<p2.getX()<<endl;
	cout<<p2.getY()<<endl;
	return 0;
}
