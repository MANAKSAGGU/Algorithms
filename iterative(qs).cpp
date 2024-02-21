#include <bits/stdc++.h>
#include <chrono>
#include <cstdlib>
#include<stack>
using namespace std;
using namespace std::chrono;
int* generate_input(int arr[], int k) {
    for (int j = 0; j < k; j++) {
        arr[j] = rand();
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

int* qs(int a[], int low, int high) {
    stack<int> s;
    s.push(low);
    s.push(high);
    while (!s.empty()) {
        high = s.top();
        s.pop();
        low = s.top();
        s.pop();
        if (low < high) {
            int j = partition_merge(a, low, high);
            if ((j - low) < (high - j)) {
                s.push(j + 1);
                s.push(high);
                high = j - 1;
            } else {
                s.push(low);
                s.push(j - 1);
                low = j + 1;
            }
        }
    }
    return a;
}

int main() {
    int* arr = new int[100000];

    for (int i = 1000; i <= 10000; i += 1000) {
        arr = generate_input(arr, i);
        auto start = high_resolution_clock::now();
        for (int m = 1; m <= 10; m++) {
            arr = qs(arr, 0, i - 1);
           // for (int j = 0; j < i; j++)
           //     cout << arr[j] << endl;

        }
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<nanoseconds>(stop - start) / 10;
        cout << "inputs \t" << i << "\t Time taken: " << duration.count() << "nanoseconds" << endl;
    }
    return 0;
}
