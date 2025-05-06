#include <iostream>
using namespace std;
int main {
int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int x;
    cin >> x;
    int l = 0, r = n - 1, ans = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
        {
            ans = mid;
            break;
        }
        else if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    if (ans != -1)
        cout << "Element found at index " << ans << endl;
    else
        cout << "Element not found" << endl;
}
