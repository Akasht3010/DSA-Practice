#include <iostream>
#include <vector>
using namespace std;

int longestSubsequence(vector<int> &arr)
{
    int n = arr.size();
    vector<int> lis(n, 1);
    int maxLen = 1;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j] && lis[j] + 1 > lis[i])
            {
                lis[i] = lis[j] + 1;
            }
        }

        if (lis[i] > maxLen)
        {
            maxLen = lis[i];
        }
    }

    return maxLen;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int length = longestSubsequence(arr);
    cout << "Output: " << length << endl;

    return 0;
}