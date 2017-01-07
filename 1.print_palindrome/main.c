#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a, n, s, num = 0; // a - полиндром, n - кол-во %9, s - половина
cin >> a;

for (int i = pow(10,(a-1)) + 1; i < (pow(10, a)); i++){
    if (i%9 == 0) n++;
}
int *array = new int[n];
int *numArray = new int[a];
n = 0;
for (int i = pow(10,(a-1)) + 1; i < (pow(10, a)); i++){
    if (i%9 == 0) {
            array[n] = i; // массив с %9;
            n++;
    };
}
for (int i = 0; i < n; i++){
    s = 1;
    num = array[i];
    for (int r = 0; r < a; r++){
        numArray[r] = num%10;
        num = num / 10;
    }

    if (a%2 == 0){
            for (int r = 0; r < a/2; r++){
                if (numArray[r] == numArray[a-r]) cout << array[i] << endl;
            }
    }
    else {
        for (int r = 0; r < a/2; r++){
                if (numArray[r] == numArray[a-r-1]) cout << array[i] << endl;
            }
        }
}

}

