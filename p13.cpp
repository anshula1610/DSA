#include<iostream>
using namespace std;

int main() {
    int arr[7] = {1, 2, 3, 4, 1, 2, 3};
    bool found = false;

    for (int i = 0; i < 7; i++) {
        int count = 0;
        for (int j = 0; j < 7; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            cout << "Single occurring element is: " << arr[i] << endl;
            found = true;
            break;  // kyunki hume bas ek hi chahiye
        }
    }

    if (!found) {
        cout << "No single occurring element found!" << endl;
    }

    return 0;
}

