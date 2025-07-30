\\ program # 1

#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,j,temp;
	for(i=0;i<5;i++)
	{
	cout<<"Enter value: ";
	cin>>arr[i];
    }
    cout<<"The original value in array:\n";
    for(i=0;i<5;i++)
    cout<<arr[i]<<" ";
    for(i=0;i<5;i++)
      for(j=1;j<4;j++)
      if(arr[j]>arr[j+1])
      {
      	temp=arr[j];
      	arr[j]=arr[j+1];
      	arr[j+1]=temp;
	  }
	  cout<<"\nThe sorted array is\n";
	  for(i=0;i<5;i++)
	  cout<<arr[i]<<" ";
	  return 0;
}

\\ Program # 2

#include <iostream>
using namespace std;
int main()
{
	int arr[5],i,j,temp,min;
	for(i=0;i<5;i++)
	{
		cout<<"Enter value: ";
		cin>>arr[i];
	}
	cout<<"The original values in array: ";
	for(i=0;i<5;i++)
	cout<<arr[i]<<" ";
	
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		if(arr[j]<arr[min])
		  min=j;
	 if(min !=i)
	 {
	 	temp=arr[i];
	 	arr[i]=arr[min];
	 	arr[min]=temp;
	 }
	}
	cout<<"\nThe sorted array:\n";
	for(i=0;i<5;i++)
	 cout<<arr[i]<<" ";
	 return 0;
}

\\ Program # 3

#include<iostream>
using namespace std;
int main()
{
	int arr[2][4],i,j;
	for(i=0;i<2;i++)
	  for(j=0;j<4;j++)
	  {
	  	 cout<<"Enter a number: ";
	  	 cin>>arr[i][j];
	  }
	  for(i=0;i<2;i++)
	  {
	  	for(j=0;j<4;j++)
	  	cout<<arr[i][j]<<"\t";
	  	cout<<endl;
	  }
	  return 0;
}

\\ Program # 4

#include<iostream>
using namespace std;
int main()
{
	int arr[5] , i;
	for(i=0;i<5;i++)
	{
		cout<<"Enter an integers: ";
		cin>>arr[i];
	}
	 cout<<"The values in array are :\n"<<endl;
	 for(i=0;i<5;i++)
	 cout<<arr[i]<<endl;
	 return 0;
}

\\ Program # 5

#include<iostream>
using namespace std;
int main()
{
	int month,days,total;
	int days_per_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	cout<<"Enter the month number:"<<endl;
	cin>>month;
	cout<<"Enter the day number:"<<endl;
	cin>>days;
	total=days;
	for(int x=0;x<month-1;x++)
	total+=days_per_month[x];
	cout<<"The number of days in this year till date="<<total<<endl;
	return 0;
}

\\ Program # 6

#include<iostream>
using namespace std;
int main()
{
	int arr[10]={10,20,30,40,50,60,70,80,90,100};
	int n,start,mid,end,loc;
	start=0;
	end=9;
	loc=-1;
	cout<<"Enter number to find: ";
	cin>>n;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(arr[mid]==n)
		{
		loc=mid;
		break;	
		}
		else if(n<arr[mid])
		  end=mid-1;
		else
		  start=mid+1;
	}
	if(loc==-1)
	  cout<<n<<"not found!";
	else
	  cout<<n<<"found at index."<<loc;
	  return 0;
}

\\ Program # 7

#include<iostream>
using namespace std;
void sumOfArray(int arr[],int size);
int main()
{
   int arr[5]={10,20,30,40,50};
   sumOfArray(arr,5);
   return 0;	
}
   void sumOfArray(int arr[],int size)
   {
   	int sum=0;
   	for(int i=0;i<size;i++)
   	sum=sum+arr[i];
   	cout<<sum;
   }

   \\ Program # 8

   a#include<iostream>
using namespace std;
int main()
{
	int arr[10]={10,20,30,40,50,60,70,80,90,100};
	int i, n, loc=-1;
	cout<<"Enter value to find: ";
	cin>>n;
	for(i=0;i<=10;i++)
	{
		if(arr[i]==n)
		loc=i;
	}
	if(loc==-1)
	  cout<<"Value not found in the array";
	else
	  cout<<"Value found at index"<<loc;
	  return 0;
}

\\ Program # 9

#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
void ShowMenu()
{
    cout<<"press 1 to find whether number is prime or not"<<endl;
    cout<<"press 2 to search a number in Array"<<endl;
    cout<<"press 3 to sort the Array"<<endl;
    cout<<"press 4 to delete a value from the Array"<<endl;
    cout<<"press 5 to display a following shape"<<endl;
    cout<<"press 6 to display value that are divisible by 9 in Array"<<endl;
    cout<<"press 7 for exit"<<endl;
}
int main(){
    int option, n;
    
    ShowMenu();
    int i, loc=-1, arr[10]={10,20,30,40,50,60,70,80,90,100};
    int rows=4;
    cout<<"Enter the number::";
    cin>>option;
    switch(option){
        case 1:{
            cout<<"Enter a number:";
            cin>>n;
            if(n<2)
               cout<<"Not a prime number";
            else{
                bool IsPrime=true;
                for(int i=2;i<=sqrt(n);i++){
                   if(n%i==0){
                    IsPrime = false;
                    break;
                   }
            }
            if(IsPrime)
               cout<<"Number is prime";
            else
               cout<<"Not a prime";
           }
            break;
    }
    case 2:{
        cout<<"Enter the numbe you want to see in which index::";
        cin>>n;
        for(i=0;i<10;i++){
          if(arr[i]==n){
             loc=i;
             break;     
            }
        }
        if(loc!=-1)
          cout<<"The number is at index"<<loc;
        else
          cout<<"Not Found";
        break;
    }
     case 3:{
        for(i=0;i<10;i++){
            cout<<"Enter the number";
            cin>>arr[i];
         }
         cout<<"After sorting";
         sort(arr,arr+10);
          for(i=0;i<10;i++){
            cout<<arr[i]<<endl;
          }
        break;
     }
     case 4:{
        int size, nv;
        cout<<"Enter the size of array";
        cin>>size;
        int arr[size];
        cout<<"Enter the "<<size<<"elements you want to save in array"<<endl;
        for(i=0;i<size;i++){
            cin >> arr[i];
         }
         cout<<endl;
         for(i=0;i<size;i++){
            cout<<arr[i]<<"\n";
         }
         cout<<endl;
         cout<<"Enter the index you want to delete";
         cin>>n;
         cout<<"Enter the new value you want to store";
         cin>>nv;
         arr[n]=nv;
         cout<<"After changing the value:";
         for(i=0;i<size;i++)
            cout<<arr[i]<<"\n";
        break;
     }
     case 5:{
        
        for(int i=1;i<=rows;i++){
            for(int space=0;space<rows-i;space++){
                cout<<" ";
             }
             for(int j=2*i-1;j<=1;j-=2){
                cout<<j<<" ";
             }
             cout<<endl;
             break;
         }
     case 6:{
        cout<<"Values divisible by 9 in the array:";
        for(i=0;i<10;i++){
            if(arr[i]%9==0){
                cout<<arr[i]<<" ";     } }
        cout<<endl;
        break;}
    case 7:{
        cout<<"Exiting the program.Goodbye!"<<endl;
            break;}
        default:
            cout<<"invalid option selected."<<endl;
            break;
        }
        return 0;
    }
}

\\ Program # 10

#include<iostream>
using namespace std;
int sum(int a,int b)
{
	return a+b;
}
int pro(int a,int b)
{
	return a*b;
}
float avg(int a,int b)
{
	return (a+b)/2.0;
}
int main()
{int a,b;
	cout<<"Enter two numbers";
	cin>>a>>b;
	cout<<"sum="<<sum(a,b);
	cout<<"product="<<pro(a,b);
	cout<<"average="<<avg(a,b);
}


