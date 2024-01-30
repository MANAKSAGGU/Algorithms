#include<bits/stdc++.h>
#include<chrono>
#include <cstdlib>
using namespace std;
using namespace std::chrono;

int * generate_input(int arr[],int k)
{
    for(int i=1;i<=k;i++)
    {
        arr[i]=i;
    }
    return arr;
}

int bs(int arr[],int l,int h, int x)
{
    if(l>h)
    {
        return -1;
    }
     else{
         int mid = (l+h)/2;
         if(arr[mid]==x)
         {
             return mid;
         }
         else if(arr[mid]<x)
         {
             bs(arr,mid+1,h,x);
         }
         else
         {
             bs(arr,l,mid-1,x);
         }
     }

}

int main()
{
    int *arr = new int[100000];
    for(int i=1000;i<=10000 ;i=i+1000)
    {
    arr = generate_input(arr,i);
    auto start = high_resolution_clock::now();
    for(int m =1;m<=1;m++)
    {
        int x = i/2;
       int b = bs(arr,0,i,x);
    }
    auto stop = high_resolution_clock::now();
    auto duration = (duration_cast<nanoseconds>(stop-start))/10;
    cout << "inputs \t" << i    << "\t Time taken: " << duration.count() << "nanoseconds" << endl ;
    }

    return 0;
}


