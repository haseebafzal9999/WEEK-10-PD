#include <iostream>
using namespace std;

int main()
{
    int size = 10;
    int array[size];

    cout << "Enter the weights of the 10 packages: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int result = array[j];
                array[j] = array[j + 1];
                array[j + 1] = result;
            }
        }
    }

    cout << "Sorted array in ascending order: ";
    for (int k = 0; k < size; k++)
    {
        cout << array[k] << ", ";
    }

    return 0;
}
