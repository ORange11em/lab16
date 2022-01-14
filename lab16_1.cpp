#include <iostream>
using namespace std;

int main(){
	int a =5 ;
	char b ='A';
	char *c =&b;
	
	int *x = &a;
	char *y = &b;
	int *z = x;

	cout<<a<<" "<<b<<" "<<c<<" "<<x<<" "<<&y<<" "<<z;
	cout<<"\n";
	cout<<&a<<" "<<(void *)&b<<" "<<&c<<" "<<&x<<" "<<&y<<" "<<&z;
	cout<<"\n";

	*c ='F';

	cout<<a<<" "<<b<<" "<<c<<" "<<x<<" "<<&y<<" "<<z;
	cout<<"\n";

	*y= 'w';
	cout<<a<<" "<<b<<" "<<c<<" "<<x<<" "<<&y<<" "<<z;
	cout<<"\n";

	*x = 6;
	cout<<a<<" "<<b<<" "<<c<<" "<<x<<" "<<&y<<" "<<z;
	cout<<"\n";
	
	*z=7;
	cout<<a<<" "<<b<<" "<<c<<" "<<x<<" "<<&y<<" "<<z;
	cout<<"\n";

	return 0;
}


