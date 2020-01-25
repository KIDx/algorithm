#include <iostream>

using namespace std;

void BubbleSort(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = n - 1; j > i; --j)
        {
            if (a[j] < a[j-1])
            {
                int tmp = a[j-1];
                a[j-1] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int main()
{
    int a[1000], n;

    while (cin >> n)
    {
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        BubbleSort(a, n);

        for (int i = 0; i < n; ++i)
        {
            if (i > 0) cout << " ";
            cout << a[i];
        }
        cout << endl;
    }

    return 0;
}
