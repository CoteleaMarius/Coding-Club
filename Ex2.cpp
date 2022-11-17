#include <iostream>
#include <ctime>
using namespace std;
int main() { //R%(y-x+1)+x
    clock_t tstart, tend;
    double time1;
    tstart = clock();
    tend = clock();
    time1 = (double)(tend - tstart) / CLOCKS_PER_SEC;
    srand(time(0));
    int a[100000];
    int n = 100000;
    int low, high, aux;

    low = -3;
    high = 6;
    for(int i = 0; i < n; i++)
        a[i] = rand()%(high - low + 1) + low;

    for(int i = 0; i < n; i++){
        aux = a[i];
        a[i] = a[n - 1 - i];
        a[n-1-i] = aux;
    }

    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    cout<<"Timpul egal ="<<time1;
    return 0;
}
