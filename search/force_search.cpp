#include <iostream>

using namespace std;

int ForceSearch(int a[], int n, int m)
{
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == m)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int a[1000], n, m;

    while (cin >> n >> m)
    {
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        cout << ForceSearch(a, n, m) << endl;
    }

    return 0;
}
