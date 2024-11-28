#include <iostream>
using namespace std;

int ProgressDays(int arr[], int size);

int main()
{
    int saturdays;
    cout << "Enter the number of saturdays: " ;
    cin >> saturdays;
    int arr[saturdays];
    cout << "Enter the number of miles Kaka runs each saturday: "<< endl;
    for (int i = 0; i < saturdays; i++)
    {
        cin >> arr[i];
    }
    int result=ProgressDays(arr,saturdays);
    cout << "Result : " << result;
    
}

int ProgressDays(int arr[], int size)
{
    int result;
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            break;
        }
        if (arr[i] < arr[i + 1])
        {
            result++;
        }
    }
    return result;
}
