#include <iostream>

using namespace std;

void SelectionSort(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        int min_val = a[i], min_pos = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (a[j] < min_val)
            {
                min_val = a[j];
                min_pos = j;
            }
        }

        if (min_pos != i)
        {
            int tmp = a[i];
            a[i] = a[min_pos];
            a[min_pos] = tmp;
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

        SelectionSort(a, n);

        for (int i = 0; i < n; ++i)
        {
            if (i > 0) cout << " ";
            cout << a[i];
        }
        cout << endl;
    }

    return 0;
}
