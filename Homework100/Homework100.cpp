#include <iostream>
using namespace std;

int main()
{
    int const N = 8;
    int arr[N] = { 54, 42, 39, 37, 12, 5, 3, 1 };
    int left = 0;
    int right = N - 1;
    int middleIndex;
    int search;

    cout << "Enter search: ";
    cin >> search;

    int index = -1;

    while (left <= right)
    {
        middleIndex = (left + right) / 2;

        if (arr[middleIndex] == search)
        {
            index = middleIndex;
            break;
        }
        else if (arr[middleIndex] > search)
        {
            left = middleIndex + 1;
        }
        else
        {
            right = middleIndex - 1;
        }
    }

    cout << index << endl;

}
