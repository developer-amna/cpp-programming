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

\\ Program # 21

#include<iostream>
using namespace std;
int main()
{
	int c=1;
	for(int i=5;i<=1;i--)
	{
		for(int j=i;j<=1;j++)
		{
		cout<<j<<"\t";}
	
        }
    cout<<endl;
	}
	  return 0;
}

\\ Program # 22

#include<iostream>
using namespace std;
int main()
{
	for(int n=64;n>=2;n/=2)
	cout<<n<<" ";
	return 0;
}

\\ Program # 23

Write a program that converts 12000 rupees into dollars (1 dollar = RS. 99)
#include<iostream>
using namespace std;
int main()
{
    double amount_in_pkr;
    double amount_in_dollar;
    cout<<"Enter amount in pkr: ";
    cin>>amount_in_pkr;
    amount_in_dollar=amount_in_pkr*99.0;
    cout<<"amount in dollars="<<amount_in_dollar;
    return 0;
}

\\ Program # 24

#include<iostream>
using namespace std;
int main()
{
    int hours,min,sec;
    cout<<"enter hours,minutes and seconds: ";
    cin>>hours>>min>>sec;
    sec=(hours*3600)+(min*60)+sec;
    cout<<"second="<<sec;
    return 0;
}

\\ Program # 25

Write a program that inputs four numbers amd computes the sum, average and product of these numbers.

#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"enter four numbers: ";
    cin>>a>>b>>c>>d;
    int sum=a+b+c+d;
    int average=sum/100;
    int product=a*b*c*d;
    cout<<"sum="<<sum<<endl;
    cout<<"average="<<average<<endl;
    cout<<"product="<<product;
    return 0;
}

\\ Program # 26

Write a program that inputs current units and previous units from the userand calculates the electricity bill . per unit price is RS.19.25 and surcharge on the bill is 12.5% will be added. The program calculates the net bill and displaysbit on the screen.

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double current_units,previous_units;
    cout<<"Enter current units: ";
    cin>>current_units;
    cout<<"Enter previous units: ";
    cin>>previous_units;
   double units_consumed=current_units-previous_units;
   double elec_bill=units_consumed*19.25;
   double surcharge=elec_bill*12.5/100.0;
   double net_bill=elec_bill+surcharge;
   cout<<"net bill="<<net_bill;
   return 0;
}

\\ Program # 27

Write a program that inputs principal amount, rate of interest and total time. It computes the compound interest. The formula to compute the compound interest is :
                         (Amount(1+rate/100)^time)-Amount

						 #include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double amount,rate,time;
    cout<<"Enter amount: ";
    cin>>amount;
    cout<<"Enter rate: ";
    cin>>rate;
    cout<<"Enter time: ";
    cin>>time;
     double interest=(amount*pow((1+rate/100.0), time)-amount);
    cout<<"interest="<<interest;
    return 0;
}

\\ Program # 28

Write a program that inputs base and height from the user and calculates the area of the triangle using the formula:
                       Area=1/2*base*height
#include<iostream>
using namespace std;
int main()
{
    float base,height;
    cout<<"Enter height ";
    cin>>height;
    cout<<"Enter base ";
    cin>>base;
    double Area=1/2*(base*height);
    cout<<"Area="<<Area;
    return 0;
}

\\ Program # 29

Write a program that computes the area of a sector of a circle. It inputs the radii and angle in radians of a sector of a circle. The formula to compute the area is:
                    Area = (radii * radii * angle)/2
#include<iostream>
using namespace std;
int main()
{
    float radii,angle;
    cout<<"Enter radius: ";
    cin>>radii;
    cout<<"Enter angle: ";
    cin>>angle;
    double Area=(radii*radii*angle)/2;
    cout<<"Area="<<Area;
    return 0;
}

\\ Program # 30

Write a program that inputs a number from the user. It displays its square and cube.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    int square=n*n;
    int cube=n*n*n;
    cout<<"square="<<square<<endl;
    cout<<"cube="<<cube;
    return 0;
}

\\ Program # 31

Write a program that inputs an integer of five-digits, separate the integer into its digits and displays them separated by four spaces each. Use integer division and modulus operators in the program. Assume that the user enters 41258, the output should be displayed as under:
                   4    1    2     5     8 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a five-digit number: ";
    cin>>n;
    int a=n/10000;
     n=n%10000;
    int b=n/1000;
    n=n%1000;
    int c=n/100;
    n=n%100;
    int d=n/10;
    n=n%10;
    cout<<"Enter five digits with spaces="<<a<<"    "<<b<<"    "<<c<<"    "<<d<<"    "<<n;
    return 0;
}

\\ Program # 32

Write a program that inputs a four-digit number and displays its digits in separate four lines. For example, if the user enters 4785, the program should display output as follows:
4
7
8
5

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a four-digit number:";
    cin>>num;
        if(num>=1000 && num<=9999)
        {
          cout<<(num/1000)%10<<endl;
        cout<<(num/100)%10<<endl;
        cout<<(num/10)%10<<endl;
        cout<<num%10<<endl;
         } 
         else 
         {
          cout<<"Invalid input . please enter a four digit number .";
         }
           return 0;  
}

\\ Program # 33

Write a program thatinputs a six-digit number and displays it in reverse order. Suppose a user inputs a number 458762, it should display the number as 267857.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter 6-digit number";
    cin>>n;
    int a=n/100000;
    n=n%100000;
    int b=n/10000;
    n=n%10000;
    int c=n/1000;
    n=n%1000;
    int d=n/100;
    n=n%100;
    int e=n/10;
    n=n%10;
    cout<<"The number in reverse order is="<<n<<e<<d<<c<<b<<a;
    return 0;
}

\\ Program # 34

Write a program that gets the radius and height of a cylinder and finds out its volume using the formula:
       volume = PI R^2H                                                   Value of PI is = 3.14 
#include<iostream>
using namespace std;
int main()
{
    float radius,height;
    cout<<"enter radius";
    cin>>radius;
    cout<<"enter height";
    cin>>height;
    float volume=3.14*radius*radius*height;
    cout<<"volume="<<volume;
    return 0;
}

\\ Program # 35

Write a program that inputs the size of a file in bytes and converts into megabytes.
         1024 bytes = 1 kilobyte, and 1024 kilobytes = 1 megabyte

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float file_size_in_B;
    cout<<"Enter size of file in bytes: ";
    cin>>file_size_in_B;
    double file_size_in_MB=file_size_in_B/(1024*1024);
    cout<<setprecision(2)<<"size of file in megabytes="<<file_size_in_MB;
    return 0;
    }

\\ Program # 36

Write a program that inputs the total number of students in a class and fee per student. It calculates the total fee collected from the class.
           (Hint: Total fee collected=number of students * fee per student) 

		   #include<iostream>
using namespace std;
int main()
{
    int number_of_students,fee_per_student;
    cout<<"Enter number of students: ";
    cin>>number_of_students;
    cout<<"Enter fee per student: ";
    cin>>fee_per_student;
    int total_fee=number_of_students*fee_per_student;
    cout<<"total fee="<<total_fee;
    return 0;
}

\\ Program # 37

Write a program that inputs initial velocity (vi), acceleration (a), and time (t) span. It calculates the final velocity (vf) using the formula:
                             vf=vi + at

#include<iostream>
using namespace std;
int main()
{
    int vf,vi,a,t;
    cout<<"Enter initial velocity: ";
    cin>>vi;
    cout<<"Enter acceleration: ";
    cin>>a;
    cout<<"Enter time: ";
    cin>>t;
    vf=vi+a*t;
    cout<<"final velocity="<<vf;
    return 0;
}

\\ Program # 38

Write a program that inputs the distance traveled and speed of a car. It calculates the time requird to reach the destination and displays it. The formula to calculate the time is:
                    Time=Distance/Speed

#include<iostream>
using namespace std;
int main()
{
    float distance,speed;
    cout<<"Enter distance: ";
    cin>>distance;
    cout<<"Enter speed: ";
    cin>>speed;
    float time=distance*speed;
    cout<<"time="<<time;
    return 0;
}

\\ Program # 39

Write a program that inputs two values, swap the values usin third variable, and then displays them.

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    int temp=a;
    a=b;
    b=temp;
    cout<<"value of a="<<a<<endl;
    cout<<"value of b="<<b;
    return 0;
}

\\ Program # 40

Write a program that inputs three values , swap these values without using the fourth variable, and then displays them. Suppose the user enters values in three variables A, B and C. use the following statements in the same order to swap the values:
           A=A+B+C;
           B=A-(B+C);
          C=A-(B+C);
          A=A-(B+C);

 #include<iostream>
using namespace std;
int main()
{
    int A,B,C;
    cout<<"Enter three values";
    cin>>A>>B>>C;
    A=A+B+C;
    B=A-(B+C);
    C=A-(B+C);
    A=A-(B+C);
    cout<<"value of A="<<A<<endl;
     cout<<"value of B="<<B<<endl;
     cout<<"value of C="<<C;
     return 0;
}

\\ Program # 41

Write a program that inputs an even number and odd number, multiplies the even number with seven and odd number with 5, and then adds both results. It subtracts the result from 1000 and then displays the final result. The formula to compute the final result is:
                      Result=1000-((even*7)+(odd*5)

#include<iostream>
  using namespace std; 
    int main()
{
    int even,odd;
    cout<<"enter even number ";
    cin>>even;
    cout<<"enter odd number ";
    cin>>odd;
    int result=1000-((even*7)+(odd*5));
    cout<<"result="<<result;
    return 0;
    }

\\ Program # 42

Write a program that inputs rainfall in millimeters and converts the rainfall from millimeters into unches.
              (Hint, 1 inch = 25.4mm)

#include<iostream>
using namespace std;
int main()
{
    double rainfall_in_mm;
    double rainfall_in_inches;
    cout<<"Enter rainfall in millimeters: ";
    cin>>rainfall_in_mm;
    rainfall_in_inches=rainfall_in_mm*25.4;
    cout<<"rainfall in inches="<<rainfall_in_inches;
    return 0;
}

\\ Program # 43

Write a program that inputs coordinates for two points  i.e (x1, y1 & (x2, y2). It calculates the distance between these two points .

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 double x1,y1,x2,y2;
 cout<<"Enter coordinates of first points(x1,y1): ";
 cin>>x1>>y1;
 cout<<"Enter coordinates of second points(x2,y2): ";
 cin>>x2>>y2;
 double distance=sqrt(pow(x2-x1,2)+(pow(y2-y1,2)));
 cout<<"distance between the points="<<distance;
 return 0;
}

\\ Program # 44

Write a program that displays the following output using a single output statement (without using a loop)
*  *  *  *  *
*  *  *  *
*  *  *
*  *
*

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<"*"<<setw(3)<<"*"<<setw(3)<<"*"<<setw(3)<<"*"<<setw(3)<<"*"<<endl;
     cout<<"*"<<setw(3)<<"*"<<setw(3)<<"*"<<setw(3)<<"*"<<endl;
     cout<<"*"<<setw(3)<<"*"<<setw(3)<<"*"<<endl;
   cout<<"*"<<setw(3)<<"*"<<endl;
     cout<<"*";
    return 0;
}

\\ program # 45

#include<iostream>
using namespace std;
int main()
{
	float i=1,sum=0;
	do{
	sum=sum+1/i;
	if(i==1)
	   i=i+3;
	else
	   i=i+4;	
	}while(i<=100);
	cout<<"sum="<<sum;
   	return 0;
}

\\ Program # 46

#include<iostream>
//#include<iomanip>
using namespace std;
int main()
{
	int i,j,s;
	for(i=1;i<=9;i+=2)
	{
		for(s=1;s<=9-i;s++)
		cout<<" ";
		for(j=1;j<=i;j++)
		cout<<" *";
		cout<<endl;
	}
	for(i=7;i>=1;i-=2)
	{
		for(s=1;s<=7-i;s++)
		cout<<" ";
		for(j=1;j<=i;j++)
		cout<<" *";
		cout<<endl;
	}
	return 0;
}

\\ Program # 47

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x,n;
	int sum=0;
	cout<<"Enter a value: ";
	cin>>n;
	cout<<"Enter a value: ";
	cin>>x;
	for(int i=1;i<=n;i++)
	sum=sum+pow(x,i);
	cout<<"sum of the series="<<sum;
	return 0;
}

\\ Program # 48

#include<iostream>
using namespace std;
int main()
{
	int fact=1,sum=0;
	{
	for(int i=1;i<=5;i++)
	    {
		for(int j=1;j<=i;j++)
		fact=fact*j;
	    }
	    sum=sum+fact;
	}
	cout<<"sum of series="<<sum;
	return 0;
}

\\ Program # 49

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x,sum=0;
	cout<<"Enter the value of x= ";
	cin>>x;
	for(int i=1;i<5;i++)
	{
	   if(i==1)
	      sum+=i;
	   else
	      sum=sum+i*pow(x,i-1);
	}
	cout<<"sum="<<sum;
	return 0;
}

\\ Program # 50

#include<iostream>
using namespace std;
int main()
{
	float sum=0; 
	for(float i=1;i<=99;i++)
	sum=sum+i/(i+1);
	cout<<"sum of series="<<sum;
	return 0;
}

\\ Program # 51

#include<iostream>
using namespace std;
int main()
{
	for(int n=1;n<=200;n*=3)
	cout<<n<<" ";
	return 0;
}

\\ Program # 52

#include<iostream>
using namespace std;
int main()
{
	for(int i=8;i<=100;)
	{
	cout<<i<<" ";
	i=i+4;
	cout<<i<<" ";
	i=i+5;
	cout<<i<<" ";
	i=i+7;
    }
    return 0;
}

\\ Program # 53

#include<iostream>
using namespace std;
int main()
{
	int fact=1,sum=0;
	for(float i=1;i<=7;i++)
	{
		for(float j=1;j<=i;j++)
		{
		fact=fact*j;
	    }
	    sum=sum+i/fact;
	}
	cout<<"sum of series= "<<sum;
	return 0;
}

\\ Program # 54

#include<iostream>
using namespace std;
int main()
{
	int i,j,c;
	c=1;
	for(i=1;i<=5;i++)
	{
		for(c=1;c<=5-i;c++)
		cout<<" ";
	   for(j=1;j<=i;j++)
	   cout<<i<<"\t";
	   cout<<endl;
	}
	return 0;
}

\\ Program # 55

#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if(a<b)
       if(a<c)
       cout<<a<<"is small";
       else
       cout<<c<<"is small";
    else
        if(b<c)
        cout<<b<<"is small";
    else
        cout<<c<<"is small";
    return 0;
}

\\ Program # 56

#include <iostream>
using namespace std;

int main() {
  for(int i=1;i<=6;i++){
  	for(int j=i;j>1;j--)
  	cout<<" ";
  	for(int k=1;k<6+1;k++)
  	cout<<k<<" ";
  	cout<<endl;
  }
  return 0;
}

\\ Program # 57

#include<iostream>
using namespace std;
int main()
{
	int n=5;
	for(int i=n; i>=1; i--)
	{
		for(int s=1; s<=n-i; s++)
		cout<<" ";
		for(int j=1; j<=(2*i-1); j++)
		cout<<"*";  
		cout<<endl;
	}
	return 0;
}

\\ Program # 58

#include<iostream>
using namespace std;
int main()
{
    int code;
    cout<<"Enter code number: ";
    cin>>code;
    if(code==1)
    cout<<"Wastern Digital";
    else if(code==2)
    cout<<"3M Corporation";
    else if(code==3)
    cout<<"Maxell Corporation";
    else if(code==4)
    cout<<"Sony Corporation";
    else if(code==5)
    cout<<"Verbatim Corporation";
    else
    cout<<"Invalid input";
    return 0;
}

\\ Program # 59

#include <iostream>
using namespace std;
int main()
{
    char movie;
    cout<<"Enter movie type: ";
    cin>>movie;
    if(movie=='A')
    cout<<"Adventure movies";
    else if(movie=='C')
    cout<<"Comedy movies";
    else if(movie=='F')
    cout<<"Family movies";
    else if(movie=='H')
    cout<<"Horror movies";
    else if(movie=='s')
    cout<<"Science fiction movies";
    else
    cout<<"Invalid input";
    return 0;
}

\\ Program # 60

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if(ch>='a'&&ch<='z')
    cout<<"Entered character is a lowercase letter";
    else
    cout<<"Entered character is not a lowercase letter";
    return 0;
}

\\ Program # 61

#include <iostream>
using namespace std;
int main()
{
    char status;
    cout<<"Enter salesperson's status: ";
    cin>>status;
    if(status=='s'||status=='S')
    cout<<"Salary of senior salesperson : Rs. 400 ";
    else if(status=='j'||status=='J')
    cout<<"Salary of junior salesperson : Rs. 275 ";
    else
    cout<<"Error : invalid status.";
    return 0;
}

\\ Program # 62

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if(a!=0 && b%a==0 && c%a==0)
    cout<<a<<" is common divisor. ";
    else
    cout<<a<<" is not a common divisor. ";
    return 0;
}

\\ Program # 63

#include<iostream>
using namespace std;
int main()
{
    int temp;
    cout<<"Enter temperature: ";
    cin>>temp;
    if(temp>35)
    cout<<"Hot day";
    else if(temp>=25 || temp<=35)
    cout<<"Pleasant day";
     else if(temp<25)
     cout<<"cool day";
    else
    cout<<"invalid input";
return 0;
}

\\ Program # 64

#include<iostream> 
using namespace std; 
void prime(){ 
int n,c,p=1; 
cout<<"Enter the number: "; 
cin>>n; 
if (n<2){ 
} 
cout<<"Number is not prime. "<<endl; 
for(int c=2;c<=n/2;c++){ 
if(n%c==0){ 
p=0; 
break; 
} 
} 
if(p!=1){ 
cout<<n<<" Not a prime number "<<endl; 
} 
else 
 } 
void search(int a[]){ 
cout<<n<<" Prime Number"<<endl; 
int x; 
bool f=false; 
cout<<"Enter the number to Search in array: "; 
cin>>x; 
for(int i=0;i<10;i++){ 
if (a[i]==x){ 
f=true; 
break; 
} 
} 
if(f){ 
} 
else 
} 
cout<<"The number "<<x<<" is found"<<endl; 
a[x]=NULL; 
cout<<"The number "<<x<<" is not found"<<endl; 
void sort(int a[]){ 
int min; 
for(int i=0;i<=9;i++){ 
min=i; 
for(int j=i+1;j<=9;j++){ 
if (a[j]<a[min]) 
min=j; 
if(min!=i){ 
int temp=a[i]; 
a[i]=a[min]; 
a[min]=temp; 
} 
}   
} 
cout<<"The sorted array: "<<endl;  
for(int i=0;i<=9;i++){ 
cout<<a[i]<<"\t"; 
}cout<<endl; 
} 
void delete_num(int a[]){ 
int x; 
bool f=false; 
cout<<"Enter the indux to delete in array: "; 
cin>>x; 
for(int i=0;i<10;i++){ 
if (i==x){ 
f=true; 
break; 
} 
} 
if(f){ 
} 
else 
} 
cout<<"The number at indux "<<x<<" is Deleted"<<endl; 
a[x]=NULL; 
void Display(int a[]){ 
cout<<"The number at indux "<<x<<" is not found in the array"<<endl; 
for (int i=0;i<10;i++){ 
cout<<a[i]<<"\t"; 
}cout<<endl; 
} 
void  
div_num(int a[]){ 
cout<<"The number divided by 9 are: "<<endl; 
for(int i=0;i<10;i++){ 
if (a[i]%9==0){ 
cout<<a[i]<<"\t"; 
} 
}cout<<endl; 
} 
void Display_pat(){ 
for(int i=1;i<=5;i++){ 
for(int k=5;k>=i;k--) 
cout<<" "; 
for(int j=1;j<=i;j++){ 
cout<<i; 
}cout<<endl; 
} 
} 
int main(){ 
int ar[10]={10,20,30,40,50,60,70,80,90,100}; 
int opt; 
bool flag=true; 
do{ 
cout<<"Enter 1 to check prime or not: "<<endl; 
cout<<"Enter 2 to search number in array: "<<endl; 
cout<<"Enter 3 to sort the arrar: "<<endl; 
cout<<"Enter 4 to delete value in array: "<<endl; 
cout<<"Enter 5 to display the pattern: "<<endl; 
cout<<"Enter 6 to print the number divided by 9: "<<endl; 
cout<<"Enter 7 to print the updated array: "<<endl; 
cout<<"Enter 8 to Exit: "<<endl; 
cout<<"Enter your choice: "; 
cin>>opt; 
switch(opt){ 
case 1:{ 
} 
case 2:{ 
} 
case 3:{ 
} 
case 4:{ 
} 
prime(); 
break; 
search(ar); 
break; 
sort(ar); 
break; 
delete_num(ar); 
break; 
case 5:{ 
} 
case 6:{ 
} 
case 7:{ 
Display_pat(); 
break; 
div_num(ar); 
break; 
Display(ar); 
break; 
} 
case 8:{ 
} 
default: 
} 
}while(flag); 
flag=false; 
break; 
cout<<"Enter the correct number."; 
cout<<"GoodBye!"<<endl; 
return 0; 
}

\\ Program # 65

Program # 3
#include<iostream>
using namespace std;
int main()
{
	float i=1,sum=0;
	do{
	sum=sum+1/i;
	if(i==1)
	   i=i+3;
	else
	   i=i+4;	
	}while(i<=100);
	cout<<"sum="<<sum;
   	return 0;
}

\\ Program # 66

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x,n;
	int sum=0;
	cout<<"Enter a value: ";
	cin>>n;
	cout<<"Enter a value: ";
	cin>>x;
	for(int i=1;i<=n;i++)
	sum=sum+pow(x,i);
	cout<<"sum of the series="<<sum;
	return 0;
}

\\ Program # 67

#include<iostream>
using namespace std;
int main()
{
	int fact=1,sum=0;
	{
	for(int i=1;i<=5;i++)
	    {
		for(int j=1;j<=i;j++)
		fact=fact*j;
	    }
	    sum=sum+fact;
	}
	cout<<"sum of series="<<sum;
	return 0;
}

\\ Program # 68

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x,sum=0;
	cout<<"Enter the value of x= ";
	cin>>x;
	for(int i=1;i<5;i++)
	{
	   if(i==1)
	      sum+=i;
	   else
	      sum=sum+i*pow(x,i-1);
	}
	cout<<"sum="<<sum;
	return 0;
}

\\ Program # 69

#include<iostream>
using namespace std;
int main()
{
	float sum=0; 
	for(float i=1;i<=99;i++)
	sum=sum+i/(i+1);
	cout<<"sum of series="<<sum;
	return 0;
}

\\ Program # 70

Program # 22
#include<iostream>
using namespace std;
int main()
{
	for(int n=64;n>=2;n/=2)
	cout<<n<<" ";
	return 0;
}

\\ Program # 71

#include<iostream>
using namespace std;
int main()
{
	for(int n=1;n<=200;n*=3)
	cout<<n<<" ";
	return 0;
}

\\ Program # 72

#include<iostream>
using namespace std;
int main()
{
	for(int i=8;i<=100;)
	{
	cout<<i<<" ";
	i=i+4;
	cout<<i<<" ";
	i=i+5;
	cout<<i<<" ";
	i=i+7;
    }
    return 0;
}

\\ Program # 73

#include<iostream>
using namespace std;
int main()
{
	int fact=1,sum=0;
	for(float i=1;i<=7;i++)
	{
		for(float j=1;j<=i;j++)
		{
		fact=fact*j;
	    }
	    sum=sum+i/fact;
	}
	cout<<"sum of series= "<<sum;
	return 0;
}


















   


















