#include <iostream>
using namespace std;
int main {
int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int x;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            cout << "Element founded at index " << i + 1 << endl;
            return;
        }
    }
    cout << "Element not founded" << endl;
}
