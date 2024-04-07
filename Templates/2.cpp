// Write a program of to sort the array using templates

#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void sortArray(T arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swapValues(arr[j], arr[j + 1]);
            }
        }
    }
}

template <typename T>
void printArray(T arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int intArr[] = {5, 2, 7, 1, 9};
    int intSize = sizeof(intArr) / sizeof(int);

    cout << "Original integer array: ";
    printArray(intArr, intSize);
    sortArray(intArr, intSize);
    cout << "Sorted integer array: ";
    printArray(intArr, intSize);

    return 0;
}
