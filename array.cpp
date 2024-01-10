
/*
Task: Array Sorting

Description:
Write a program that sorts an array of
integers in ascending or descending
order. Prompt the user to input the array
elements and choose the sorting order.
Display the sorted array.
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int size;

    // Get the size of the array from the user
    cout << "Enter the size of the array: ";
    cin >> size;

    // Validate input
    if (size <= 0) {
        cout << "Please enter a positive size for the array." << endl;
        return 1;
    }

    // Input array elements
    int* array = new int[size];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> array[i];
    }

    int choice;

    // Ask the user for sorting order
    cout << "Choose sorting order:" << endl;
    cout << "1. Ascending order" << endl;
    cout << "2. Descending order" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    // Validate choice
    if (choice != 1 && choice != 2) {
        cout << "Invalid choice. Please enter 1 for ascending or 2 for descending." << endl;
        delete[] array;
        return 1;
    }

    // Sort the array based on the user's choice
    if (choice == 1) {
        sort(array, array + size);
        cout << "Array sorted in ascending order:" << endl;
    } else {
        sort(array, array + size, greater<int>());
        cout << "Array sorted in descending order:" << endl;
    }

    // Display the sorted array
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }

    // Clean up allocated memory
    delete[] array;
}


/*
Output:

Enter the size of the array: 4
Enter the elements of the array:
Element 1: 5
Element 2: 6
Element 3: 8
Element 4: 1
Choose sorting order:
1. Ascending order
2. Descending order
Enter your choice (1 or 2): 1
Array sorted in ascending order:
1 5 6 8 
*/

