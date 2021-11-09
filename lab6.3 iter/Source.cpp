#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, int i)
{
    for (int i = 0; i < size; i++)
        a[i] = rand() % 100;
}
void Print(int* a, const int size)
{

    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}
int Sum(int* a, const int size)
{
    int S = 0;
    for (int i = 0; i < size; i++)
        if ( a[i] % 2 == 0)
            S += a[i];
    return S;
}

int main()
{
    srand((unsigned)time(NULL));
    int n;
    cout << "n = ";
    cin >> n;
    int* a = new int[n];
    Create(a, n, 0);
    Print(a, n);
    cout << "S = " << Sum(a, n) << endl;
    delete[] a;
    return 0;
}