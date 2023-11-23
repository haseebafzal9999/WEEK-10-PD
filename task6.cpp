#include <iostream>

using namespace std;
void ReverseString(string size);

int main()
{
    string size;
    cout << "Enter a string: ";
    getline(cin, size);
    cout << "Reversed string: ";
    ReverseString(size);
}
void ReverseString(string size)
{
    string result[10];
    int COUNT = 0;
    for (int i = 0; size[i] != '\0'; i++)
    {
        result[COUNT] = result[COUNT] + size[i];
        if (size[i] == ' ')
        {
            COUNT++;
            continue;
        }
    }
    for (int i = COUNT; i >= 0; i--)
    {
        cout << result[i];
        if (i == COUNT)
            cout << " ";
    }
}