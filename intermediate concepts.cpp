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