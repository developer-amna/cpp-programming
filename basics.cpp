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

\\ Program # 3

#include<iostream>
using namespace std;
int main()
{
	float sum,a;
	sum=0.0;
	for(a=1;a<=10;a+=2)
	sum=sum+1/a;
	cout<<"sum of series="<<sum;
	return 0;
}