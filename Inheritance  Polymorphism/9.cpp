// Write a Program of Two 1D Matrix Addition using Operator Overloading

#include <iostream>
using namespace std;

class Matrix
{
private:
    int size;
    int *elements;

public:
    Matrix(int s, int arr[]) : size(s)
    {
        elements = new int[size];
        for (int i = 0; i < size; ++i)
        {
            elements[i] = arr[i];
        }
    }

    ~Matrix()
    {
        delete[] elements;
    }

    Matrix operator+(const Matrix &mat)
    {
        Matrix result(size, elements);
        for (int i = 0; i < size; ++i)
        {
            result.elements[i] += mat.elements[i];
        }
        return result;
    }

    void display()
    {
        cout << "Matrix Elements:" << endl;
        for (int i = 0; i < size; ++i)
        {
            cout << elements[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {5, 4, 3, 2, 1};

    Matrix matrix1(5, arr1);
    Matrix matrix2(5, arr2);

    Matrix result = matrix1 + matrix2;

    result.display();

    return 0;
}
