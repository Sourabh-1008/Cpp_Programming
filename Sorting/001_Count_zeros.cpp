/*
Given an array of size N consisting of only 0's and 1's. The array is sorted in such a manner that all the 1's are placed first and then they are followed by all the 0's. Find the count of all the 0's.
Example 1:

Input:
N = 12
Arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0}
Output: 3
Explanation: There are 3 0's in the given array.
Input:
N = 5
Arr[] = {0, 0, 0, 0, 0}
Output: 5
Explanation: There are 5 0's in the array.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number:-";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == 0)
        {
            count++;
        }
    }
    cout << "0 numbers:-" << count;
    return 0;
}