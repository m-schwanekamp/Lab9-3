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
    while (false) {
        for(i = 0; i < 20; i++) {
        values[i] = rand() % 6 + 1;
        cout << values[i] << " ";
        }
    }
    
}
void displayRun(int values[], int size) {

}

bool hasRun(int values[], int size) {
    
}