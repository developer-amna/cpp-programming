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

\\ Program # 9

#include<iostream>
using namespace std;
int main()
{
    int num,n,r,sum;
    cout<<"Enter a number: ";
    cin>>n;
    num=n;
    sum=0;
    while(n!=0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(sum==num)
    cout<<num<<"is an armstrong number.";
    else
    cout<<num<<"is not an armstrong number.";
    return 0;
}

\\ Program # 10

#include<iostream>
using namespace std;
int main()
{
	int a,b,next,count;
	a=1;
	b=1;
	cout<<a<<"\t"<<b;
	count=2;
	while(count<=10)
	{
		next=a+b;
		cout<<"\t"<<next;
		count++;
		a=b;
		b=next;
	}
	return 0;
}

\\ Program # 11

#include<iostream>
using namespace std;
int main()
{
	int n;
	while(n<=5)
	{
		cout<<"hello"<<endl;
		n++;
	}
	return 0;
}

\\ Program # 12

#include<iostream>
using namespace std;
int main()
{
	int n;
	n=1;
	cout<<"Enter a number: ";
	cin>>n;
	while(n<=5)
	{
		cout<<n<<"\t"<<n*n<<"\t"<<n*n*n<<endl;
		n=n+1;
	}
	return 0;
}

\\ Program # 13

#include<iostream>
using namespace std;
int main()
{
	int n=1;
	cout<<"Enter a number: ";
	cin>>n;
	do
	{
		cout<<n<<endl;
		n++;
	}
	while(n<=5);
	return 0;
}