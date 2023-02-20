#include <iostream>
using namespace std;

const int SIZE = 3;

bool isLoShuMagicSquare(int square[SIZE][SIZE]) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += square[0][i]; // add up first row for comparison
    }

    // check each row
    for (int i = 1; i < SIZE; i++) {
        int rowSum = 0;
        for (int j = 0; j < SIZE; j++) {
            rowSum += square[i][j];
        }
        if (rowSum != sum) {
            return false;
        }
    }

    // check each column
    for (int j = 0; j < SIZE; j++) {
        int colSum = 0;
        for (int i = 0; i < SIZE; i++) {
            colSum += square[i][j];
        }
        if (colSum != sum) {
            return false;
        }
    }

    // check diagonal from top left to bottom right
    int diagSum = 0;
    for (int i = 0; i < SIZE; i++) {
        diagSum += square[i][i];
    }
    if (diagSum != sum) {
        return false;
    }

    // check diagonal from top right to bottom left
    diagSum = 0;
    for (int i = 0; i < SIZE; i++) {
        diagSum += square[i][SIZE - 1 - i];
    }
    if (diagSum != sum) {
        return false;
    }

    return true;
}

int main() {
    int square[SIZE][SIZE];
    cout << "Enter a 3x3 matrix:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> square[i][j];
        }
    }
    if (isLoShuMagicSquare(square)) {
        cout << "The matrix is a Lo Shu Magic Square.\n";
    } else {
        cout << "The matrix is not a Lo Shu Magic Square.\n";
    }
    return 0;
}

