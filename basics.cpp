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

\\ Program # 4

#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter a number: ";
	cin>>n;
	for(i=1;i<=10;i++)
	cout<<n<<"*"<<i<<"="<<n*i<<endl;
	return 0;
}

\\ Program # 5

#include<iostream>
using namespace std;
int main()
{
	int sum,n;
	sum=0;
	for(n=3;n<=18;n+=3)
	sum=sum+n;
	cout<<"sum of series="<<sum;
	return 0;
}

\\ Program # 6

#include<iostream>
using namespace std;
int main()
{
  for(int i=1;i<=5;i++)
  {
  	for(int j=1;j<=i;j++)
  	{
  	cout<<" *";
	  }
	  cout<<endl;
	  }	
	  return 0;
}

\\ Program # 7

#include<iostream>
using namespace std;
int main()
{
  for(int i=1;i<=5;i++)
  {
  	for(int j=i;j<=5;j++)
  	{
  	cout<<" *";
	  }
	  cout<<endl;
	  }	
	  return 0;
}

\\ Program # 8


using namespace std;
int main()
{
  for(int i=1;i<=5;i++)
  {
  	for(int j=1;j<=4;j++)
  	{
       cout<<i;
	  }
	  cout<<endl;
	  }	
	  return 0;
}