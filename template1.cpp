#include <algorithm>
#include <iostream>
#include <vector>
#include<queue>

using namespace std;
template<typename T>
class Pair{
	T X;
	T Y;
	public:
	void setX(T x){
		this->X=x;
	}
	T getX(){
		return  X;
	}
	void setY(T y){
		this->Y=y;
	}
	T getY(){
		return  Y;
	}
	
};

int main() {
    Pair <int>p;
	p.setX(9);
	p.setY(7);
	cout<<p.getX()<<endl;
	cout<<p.getY()<<endl;
	Pair <double>p1;
	p1.setX(9.999);
	p1.setY(7.8888);
	cout<<p1.getX()<<endl;
	cout<<p1.getY()<<endl;
	return 0;
}
