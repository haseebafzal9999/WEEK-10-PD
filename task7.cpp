#include <iostream>
using namespace std;
bool canFormConsecutiveList(int arr[], int n);
main()
{
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Can be arranged: " << canFormConsecutiveList(arr, n);
}
bool canFormConsecutiveList(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            return false;
        }
    }
    int maxElement = arr[0];
    int minElement = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
        if (arr[i] < minElement)
        {
            minElement = arr[i];
        }
    }
    if (maxElement - minElement + 1 > n)
    {
        return false;
    }
    bool visited[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        if (visited[arr[i]] || arr[i] < minElement || arr[i] > maxElement)
        {
            return false;
        }
        visited[arr[i]] = true;
    }
    return true;
}