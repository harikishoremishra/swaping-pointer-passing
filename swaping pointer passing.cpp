#include<iostream>
using namespace std;

void swap(int *x, int *y)//a,b are different
{
	int c; // x and y are the pointer  to a, b they store the addresso of a  and b
	c=*x;               // to get a,b from x and y we need to derefernece the pointer
	*x=*y;
	*y=c;
	
	cout<<"the swaping is complete"<<endl;
	         
}
int main()
{
	int a,b;
	a=3;
	b=4;
	/* int c
	c =a;
	a=b;
	b=c; */
	
	swap(&a,&b);
	cout<<"the values of a and b after the swap are : "<<a<<" "<<b;
	
	return 0;
}
