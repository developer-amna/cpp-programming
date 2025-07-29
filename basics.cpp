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

\\ Program # 14

#include<iostream>
using namespace std;
int main()
{
	int n=2;
	do
	{
		cout<<n<<"\t";
		n+=3;
	}
	while(n<=17);
	return 0;
}

\\ Program # 15

#include<iostream>
using namespace std;
int main()
{
	int s,e;
	cout<<"Enter starting number: ";
	cin>>s;
	cout<<"Enter ending number: ";
	do
	{
		if(s%2==0)
		cout<<s<<"\t";
		s++;
	}
	while(s<=e);
	return 0;
	
}

\\ Program # 16

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x,n,sum;
	sum=0;
	cout<<"Enter the value of x:";
	cin>>x;
	cout<<"Enter the value of n:";
	cin>>n;
	for(int i=1;i<=n;i++)
	sum=pow(x,i);
	cout<<"sum of the series is="<<sum<<endl;
	return 0;
}

\\ Program # 17

#include<iostream>
using namespace std;
int main()
{
	float sum;
	sum=0.0;
	for(int i=1;i<=100;i++)
	sum+=(double)i/(i+1);
	cout<<"The sum of the series is="<<sum<<endl;
	return 0;
}

\\ Program # 18

#include<iostream>
using namespace std;
int main()
{
	int n=1024;
	while(n>=1)
	{
		cout<<n<<"   ";
		n/=2;
	}
	cout<<endl;
	return 0;
}

\\ Program # 19

#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=200;i*=3)
	cout<<i<<"   ";
	{
		cout<<endl;
	}
	return 0;
}

\\ Program # 20

#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	for(int i=30;i<=60;i+=3)
	
	sum+=i;
	{
		cout<<"sum is="<<sum;
	}
	return 0;
}