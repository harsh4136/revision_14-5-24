#include<iostream>
using namespace std;

int add(int a, int b){
	int x,y,z;
	x = a;
	y =b;
	z = x+y;
	return z;
}

int find(int n);

int sub ( int a, int b) {
return(a-b);
}
int main()
{
	int n,ans,subt;
	int a, b;
	a = 5;
	b = 5;
	cout<<"enter the value of n : ";
	cin>>n;
	ans=find(n);
	cout<<"The subtraction of two number is "<<sub(3,1)<<endl;
	cout<<add(a,b)<<endl;
}

int find(int n)
{
	if(n%2==0)
	{
		cout<<"number is even";
	}
	else
	{
		cout<<"number is odd";
	}

	return 0;
	
}
