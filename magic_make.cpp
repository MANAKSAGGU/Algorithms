#include<bits/stdc++.h>
#include<chrono>
#include <cstdlib>
using namespace std;
using namespace std::chrono;
void magic_square(int n)
{
    int i,j;
    int s[100][100]={0};
    if(n%2==0)
    {
        cout << "n is even" << endl;
        return;
    }
    i=0;j=(n-1)/2;
    for(int key=1;key<=n*n;key++)
    {
        s[i][j]=key;
        int k = (i > 0) ? i - 1 : n - 1;
        int l = (j > 0) ? j - 1 : n - 1;
        if(s[k][l]>0)
        {
            i=(i+1)%n;
        }
        else
        {
            i=k;
            j=l;
        }
    }
/* for(int i=0;i<n;i++)
 {
     for(int j=0;j<n;j++)
     {
         cout << s[i][j] << " ";
     }
     cout << endl;
 }
 */
}

int main()
{

    for(int i=3;i<=100 ;i=i+2)
    {
    auto start = high_resolution_clock::now();
    for(int m =1;m<=10;m++)
    {
          magic_square(i);
    }
    auto stop = high_resolution_clock::now();
    auto duration = (duration_cast<nanoseconds>(stop-start))/10;
    cout << "inputs \t" << i    << "\t Time taken to complete selection sorting: " << duration.count() << "nanoseconds" << endl ;
    }
    return 0;
}
