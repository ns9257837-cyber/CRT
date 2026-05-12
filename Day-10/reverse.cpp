#include <iostream>
using namespace std;

void ReverseString(int nums[], int n)
{
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}

int main()
{
    int str[5] = {1, 2, 3, 4, 5};
    int size = sizeof(str) / sizeof(str);
    ReverseString(str, size);
    return 0;
}