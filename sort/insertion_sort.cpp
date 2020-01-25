
#include <iostream>

using namespace std;

void InsertionSort(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        int pos = 0;
        int tmp = a[i];

        for (int j = i - 1; j >= 0; --j)
        {
            if (a[j] <= tmp)
            {
                pos = j + 1;
                break;
            }
        }

        for (int j = i; j > pos; --j)
        {
            a[j] = a[j-1];
        }
        a[pos] = tmp;
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

        InsertionSort(a, n);

        for (int i = 0; i < n; ++i)
        {
            if (i > 0) cout << " ";
            cout << a[i];
        }
        cout << endl;
    }

    return 0;
}
