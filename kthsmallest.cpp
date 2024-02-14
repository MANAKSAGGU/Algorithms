#include <bits/stdc++.h>
#include <chrono>
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
            return arr[pos];
        } else if (pos > k - 1) {
            return kth_smallest(k, arr, low, pos - 1);
        } else {
            return kth_smallest(k, arr, pos + 1, high);

    }
    return -1;
}

int main() {
    int* arr = new int[10000];
     auto start = high_resolution_clock::now();
    for (int i = 1000; i <= 10000; i += 1000) {
        arr=generate_input(arr, i);
      //  for (int j = 0; j < 10; j++) {
      //      cout << arr[j] << endl;
       // }

        for (int m = 1; m <= 10; m++) {
            int k = 10;
            int result = kth_smallest(k, arr, 0, i - 1);
         //   cout << "The " << k << "th smallest element is: " << result << endl;
        }
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<nanoseconds>(stop - start) / 10;
        cout << "inputs \t" << i << "\t Time taken: " << duration.count() << "nanoseconds" << endl;
    }
    return 0;
}

