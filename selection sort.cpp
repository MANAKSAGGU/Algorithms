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

int partition_merge(int a[],int low,int high)
{
    int i=low;
    int j = high;
    int pivot=low;
    while(i<j)
    {
        while(a[i]<a[pivot])
        {
            i++;
        }
        while(a[j]>a[pivot])
        {
            j--;
        }
        if(i<j)
        {
            swap(a[i],a[j]);
        }
    }
    swap(a[j],a[pivot]);
    return j;
}

int kth_smallest(int k, int arr[], int low, int high) {
        int pos = partition_merge(arr, low, high);
        if (pos == k - 1) {
            return pos;
        } else if (pos > k - 1) {
            return kth_smallest(k, arr, low, pos - 1);
        } else {
            return kth_smallest(k, arr, pos + 1, high);

    }
    return -1;
}

int * selection_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j= kth_smallest(i,arr,0,n-1);
        for(int k=i+1;k<=n;k++)
        {
            if(arr[k]<arr[j])
            {
                j=k;
            }
        }
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j] = temp;
    }
    return arr;
}

int main()
{
    int *arr = new int(100000);
    for(int i=10;i<=10 ;i=i+500)
    {
    arr = generate_input(arr,i);

    auto start = high_resolution_clock::now();
    for(int m =1;m<=10;m++)
    {
        arr = selection_sort(arr,i);
    }
    auto stop = high_resolution_clock::now();
    auto duration = (duration_cast<nanoseconds>(stop-start))/10;
    cout << "inputs \t" << i    << "\t Time taken to complete selection sorting: " << duration.count() << "nanoseconds" << endl ;
    }

    return 0;
}

