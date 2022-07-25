#include <iostream>
#include <string>
#include <algorithm>

template <typename T>
void bubble_sort(T arr[], int n)
{
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                std::swap(arr[i], arr[i + 1]);
            }
        }
    }
}

template <typename T>
void print_arr(T arr[], int n)
{
    std::string succ_mess = "Array is sorted! Hooray!";
    std::string fail_mess = "Array is not sorted! Boo!";
    std::cout << "Your array is: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i];
        if(i != n -1)
            std::cout << ", ";
    }
    std::cout << "\n";

    if (std::is_sorted(arr, arr + n))
        std::cout << succ_mess << '\n';
    else
        std::cout << fail_mess << '\n';
}

int main()
{
    int arr1[10] = {10, 9, 8, 7, 5, 3, 4, 6, 2, 1};
    char arr2[10] = {'j', 'i', 'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a'};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    print_arr(arr1, n1);
    bubble_sort(arr1, n1);
    print_arr(arr1, n1);

    print_arr(arr2, n2);
    bubble_sort(arr2, n2);
    print_arr(arr2, n2);
    return 1;
}