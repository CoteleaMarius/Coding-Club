#include <iostream>
#include <ctime>
#pragma GCC optimize("03")
using namespace std;
int main() {
    long long i, n, s;
    clock_t tstart, tend; //(a*b)mod c
    double time;          //(a mod c * b mod c) mod c
    n = 4000000000;
    if(n < 1)
    {
        cout<<"Error"<<endl;
        return 0;
    }
    tstart = clock();
    s = 0.5 * n * (n + 1);
    //s = 0;
    //for(i = 1; i <= n; i++)
    //    s+=i;
    tend = clock();
    time = (double)(tend - tstart)/CLOCKS_PER_SEC;
    cout<<s<<endl;
    cout<<"Time = "<<time<<endl;
    return 0;
}
