#include <iostream>

using namespace ::std;

// zad 1
double srednia (double vector[], int size) {
    double sum = 0;
    for(int i=0; i<size; i++) {
        if(static_cast<int>(vector[i])%2==0){
            sum += vector[i];
        }
    }
    double srednia = sum / 20;
    return srednia;
}

// zad 2
void replacing (double vector[20], int size) {
    for(int i=0; i<size; i++) {
        if(vector[i] > 10 or vector[i] < 1) {
            vector[i] = 0;
        }
    }
}

// zad 3
void reversearray(double vector[20], int size) {
    for(int i=0; i<size/2; i++) {
        double temp = vector[i];
        vector[i] = vector[size-i-1];
        vector[size-i-1] = temp;
    }
}



int main () {
    double vector[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    cout << srednia(vector, 20)<<endl;

    replacing(vector, 20);

    reversearray(vector, 20);

    for (int i = 0; i < 20; i++) {
        cout << vector[i] << " ";
    }
}
