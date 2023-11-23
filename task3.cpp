#include <iostream>

using namespace std;

bool IsRepeatingCycle(int length, int array[], int size);

int main()
{
  int size, length;
  cout << "Enter the length of the array: ";
  cin >> size;

  int array[size];
  cout << "Enter the elements of the array:" << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> array[i];
  }

  cout << "Enter the length of the cycle: ";
  cin >> length;

  cout << "Output: " << IsRepeatingCycle(length, array, size);
}

bool IsRepeatingCycle(int length, int array[], int size)
{
  for (int j = length; j < size; j++)
  {
    if (array[j] != array[j - length])
    {
      return false;
    }
  }

  return true;
}