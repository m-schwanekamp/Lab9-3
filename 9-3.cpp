//Lab9-3
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void displayRun(int values[], int size);
bool hasRun(int values[], int size);

int main() {
    int values[20], i;

    srand(time(0));
    do {
        
        for (i = 0; i < 20; i++) {
            values[i] = rand() % 6 + 1;
           
        }
        cout << endl;
    }
    while (hasRun(values, 20) == false);
    if (hasRun(values, 20) == true) {
        displayRun(values, 20);
        
    }
    return 0;
}

void displayRun(int values[], int size) {
    if (hasRun(values, size) == true) {
        cout << "has run: ";
        for (int i = 0; i < 20; i++) {
            if (values[i] == values[i + 1] && values[i] != values[i - 1]) cout << "(";
            cout << values[i];
            if (values[i] == values[i - 1] && values[i] != values[i + 1]) cout << ")";
            cout << " ";
        }

    }
    else {
        cout << "no run: ";
        for (int i = 0; i < 20; i++) {
            cout << values[i] << " ";
        }
    }
}


bool hasRun(int values[], int size) {
    if (values[0] == values[1] || values[2] == values[3] || values[4] == values[5]
        || values[5] == values[6] || values[6] == values[7] || values[7] == values[8]
        || values[8] == values[9] || values[9] == values[10] || values[10] == values[11]
        || values[11] == values[12] || values[12] == values[13] || values[13] == values[14]
        || values[14] == values[15] || values[15] == values[16] || values[16] == values[17]
        || values[17] == values[18] || values[18] == values[19]) {
        return true;
    }
    else return false;

}
