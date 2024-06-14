#include<iostream>
using namespace std;

int add(int a, int b){
	int x,y,z;
	x = a;
	y =b;
	z = x+y;
	return z;
}
int main(){
	int a, b;
	a = 5;
	b = 5;
	cout<<add(a,b);
}