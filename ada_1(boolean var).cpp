#include<bits/stdc++.h>
#include<chrono>
#include <cstdlib>
using namespace std;
using namespace std::chrono;

void TT(int k,int n,int *arr)
{
  if(k == n+1)
  {
     for(int i=0;i<k;i++)
     {
         cout << arr[i];
     }
     cout << endl;
     return ;
  }
  else
  {
      arr[k] = 1;
      TT(k+1,n,arr);

      arr[k] = 0;
      TT(k+1,n,arr);
  }
}

int main()
{

    for(int i=1;i<=1;i=i+1)
    {
    int *arr = new int(100000);
    auto start = high_resolution_clock::now();
    for(int m =1;m<=1;m++)
    {
        TT(0,i,arr);
    }
    auto stop = high_resolution_clock::now();
    auto duration = (duration_cast<nanoseconds>(stop-start))/10;
    cout << "inputs \t" << i+1    << "\t Time taken: " << duration.count() << "nanoseconds" << endl ;
    }

    return 0;
}

