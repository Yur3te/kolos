#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

    int rzuty[6] = { 0 };
    int lrzutow = 0;

    srand(time(NULL));

    do
    {
        for (int i = 0; i < 6; i++)
        {
            rzuty[i] = rand() % 6 + 1;
        }
        lrzutow++;

    } while (!((rzuty[0] == 1) && (rzuty[1] == 2) && (rzuty[2] == 3) && (rzuty[3] == 4) && (rzuty[4] == 5) && (rzuty[5] == 6)) && 
            !((rzuty[0] == 6) && (rzuty[1] == 5) && (rzuty[2] == 4) && (rzuty[3] == 3) && (rzuty[4] == 2) && (rzuty[5] == 1)));

    cout << "Liczba prob: " << lrzutow << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << rzuty[i];
    }
}