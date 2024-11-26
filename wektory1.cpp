#include <iostream>
using namespace std;

const int _R = 3;
typedef int w;
typedef w wekt[_R];

w ilsk(wekt A, wekt B)
{
    double suma = 0;
    for (int i = 0; i < _R; i++)
    {
        suma = suma + A[i] * B[i];
    }
    return suma;
}

double max(wekt A)
{
    int max = A[0];
    for (int i = 0; i < _R; i++)
    {
        if (A[i] > max)
            max = A[i];
    }
    return max;
}

double min(wekt A)
{
    int min = A[0];
    for (int i = 0; i < _R; i++)
    {
        if (A[i] < min)
            min = A[i];
    }
    return min;
}

double sr(wekt A)
{
    double suma = 0;
    int mian = 0;
    for (int i = 0; i < _R; i++)
    {
        suma += A[i];
        mian++;
    }
    return suma / mian;
}

int main()
{
    wekt a, b;
    
    cout << "Pierwszy wektor:" << endl;
    for (int i = 0; i < _R; i++)
    {
        cin >> a[i];
    }

    cout << "Drugi wektor:" << endl;
    for (int i = 0; i < _R; i++)
    {
        cin >> b[i];
    }

    cout << "Iloczyn skalarny = " << ilsk(a, b) << endl;
    cout << "Srednia wektora a = " << sr(a) << endl;
    cout << "Srednia wektora b = " << sr(b) << endl;
    cout << "Maximum wektora a = " << max(a) << endl;
    cout << "Maximum wektora b = " << max(b) << endl;
    cout << "Minimum wektora a = " << min(a) << endl;
    cout << "Minimum wektora b = " << min(b) << endl;
   
}