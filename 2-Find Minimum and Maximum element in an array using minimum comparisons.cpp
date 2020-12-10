#include<iostream>
using namespace std;
void findMinAndMax(int arr[],int n,int &min,int &max)
{
    max=arr[0];
    min=arr[0];
    for(int i=1;i<n;i++)
    {
       if(arr[i]>max)
       {
          max=arr[i];
          
       }
       else if(arr[i]<min)
       {
          min=arr[i];
       }
    }
    
}

int main()
{
  int arr[]={2 ,5 ,6 ,3,9,10}
  int n = sizeof(arr)/sizeof(arr[0]);
  int min,max;
  findMinAndMax(arr[],n,min ,max);
  cout<<"min is"<<min<<endl;
  cout<<"max is"<<max<,endl;
  return 0;
}
