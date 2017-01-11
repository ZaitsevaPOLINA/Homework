#include <iostream>
using namespace std;

 void incredible_sort (int N, int k)
 {
    int a[k];
    int b;
    for (int i = 0; i < k; i ++)
        a[i]=0;
    for (int i = 0; i < N; i++)
     {
        cin >> b;
        a[b-1]++;
        }
    for (int i=k-1; i > -1; i--)
        for (int j = 0; j < a[i]; j++)
            cout << i+1 << " " ;
 }

int main()
{
    int N;
    int k;
    cin >> N >> k;
    incredible_sort ( N,k );
    return 0;
}
