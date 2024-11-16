#include <iostream>
using namespace std;

int main() 
{
    const int N = 10;
    int arr[N] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };
    int target = 5;
    for (int i = 0; i < N - 1; ++i) 
    {
        for (int j = 0; j < N - i - 1; ++j)
        {
            if (arr[j] < arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Відсортований масив: ";
    for (int i = 0; i < N; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int left = 0, right = N - 1;
    bool found = false;

    while (left <= right) 
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) 
        {
            int temp = mid;
            cout << "Знайдено значення " << target << " на індексах: ";
            while (temp >= 0 && arr[temp] == target) 
            {
                cout << temp << " ";
                temp--;
            }
            temp = mid + 1;
            while (temp < N && arr[temp] == target)
            {
                cout << temp << " ";
                temp++;
            }
            found = true;
            break;
        }
        if (arr[mid] > target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    if (!found) 
    {
        cout << "Значення " << target << " не знайдено." << endl;
    }
}
