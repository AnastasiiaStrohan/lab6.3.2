//використовувати шаблони функцій для реалізації універсального алгоритму.

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;


template <typename T>
vector<T> createArray(int size) {
    vector<T> arr(size);
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
    return arr;
}


template <typename T>
void printArrayRecursive(const vector<T>& arr, const string& message, int index = 0) {
    if (index == 0) {
        cout << message << ": ";
    }

    if (index < arr.size()) {
        cout << setw(4) << arr[index];
        printArrayRecursive(arr, message, index + 1);  
    }
    else {
        cout << endl;
    }
}


template <typename T>
void reverseArrayRecursive(vector<T>& arr, int start, int end) {
    if (start >= end) {
        return;  
    }

    swap(arr[start], arr[end]);  
    reverseArrayRecursive(arr, start + 1, end - 1);  
}

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;

   
    vector<int> arr = createArray<int>(size);

   
    printArrayRecursive(arr, "Initial array");

    
    reverseArrayRecursive(arr, 0, arr.size() - 1);

   
    printArrayRecursive(arr, "Reversed array");

    return 0;
}

