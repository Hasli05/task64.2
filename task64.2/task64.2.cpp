#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
   

    cout << "enter arr size: " << endl;
    cin >> N;

    vector<int> arr;
    arr.reserve(N);

    for (int i = 0; i <= arr.capacity(); ++i)
    {
        int num;
        cout << "enter element in arr:" << endl;
        cin >> num;
        arr.at(i) = num;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }

    // дальше всьо робоче єслі масів з ізвєсними числами

    int max = 0;
    bool n = false;

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] <= arr[i - 1] && arr[i] <= arr[i + 1])
        {
            if (!n)
            {
                max = arr[i];
                n = true;
            }
            else {
                if (arr[i] > max) max = arr[i];
            }
        }
    }
    if (n) { cout << max; }
    else { cout << "no min"; }
}

