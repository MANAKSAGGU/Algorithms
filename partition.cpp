#include<bits/stdc++.h>
#include<chrono>
#include <cstdlib>
using namespace std;
using namespace std::chrono;

int * generate_input(int arr[],int k)
{
    for(int j=1;j<=k;j++)
    {
        arr[j]=rand();
    }
    return arr;
}

int * partition_merge(int a[],int size)
{
    int low=0;
    int high = size-1; ;
    int pivot=low;
    while(low<high)
    {
        while(a[low]<a[pivot])
        {
            low++;
        }
        while(a[high]>a[pivot])
        {
            high--;
        }
        if(low<high)
        {
            swap(a[low],a[high]);
        }
    }
    swap(a[high],a[pivot]);
    return a;
}
int main()
{
    int *arr = new int(100000);

    for(int i=1000;i<=10000 ;i=i+1000)
    {
    arr = generate_input(arr,i);
   /* for(int i=0;i<10;i++)
    {
        cout << arr[i] << endl;
    }*/
      auto start = high_resolution_clock::now();

    for(int m =1;m<=10;m++)
    {

        arr= partition_merge(arr,10);
     /*    for(int m=0;m<10;i++)
         {
             cout << arr[i] << " ";
         }*/

    }
    auto stop = high_resolution_clock::now();
    auto duration = (duration_cast<nanoseconds>(stop-start))/10;
    cout << "inputs \t" << i    << "\t Time taken to complete selection sorting: " << duration.count() << "nanoseconds" << endl ;
    }
return 0;
}
