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