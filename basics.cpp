\\ Program # 1

#include<iostream>
using namespace std;
int main()
{
	cout<<"hello world";
	return 0;
}


\\ Program # 2

#include<iostream>
using namespace std;
int main()
{
	int n,f,a;
	cout<<"Enter a number: ";
	cin>>n;
	f=1;
	for(a=1;a<=n;a++)
	f=f*a;
	cout<<"factorial="<<f;
	return 0;
}