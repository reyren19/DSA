#include <iostream>
using namespace std;

int firstOccur(int arr[], int n, int key)
{
    int ans = 0;
    int s = 0, e = n - 1;
    int mid = (s + e) / 2;
    while (s < e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1; /*When arr[mid] == key, we've found a potential occurrence, but there might be others to the left.
    To explore the left side, we set e = mid - 1 to narrow the search range.*/
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}
int lastOccur(int arr[], int n, int key)
{
    int ans = 0;
    int s = 0, e = n - 1;
    int mid = (s + e) / 2;
    while (s < e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1; /*When arr[mid] == key, we've found a potential occurrence, but there might be others to the right.
    To explore the right side, we set s = mid + 1 to narrow the search range.*/
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int arr[6] = {1, 4, 4, 5, 7, 8};
    cout << "First occurance of 4 is " << firstOccur(arr, 6, 4);
    cout << "Last occurance of 4  is" << lastOccur(arr, 6, 4);
    return 0;
}