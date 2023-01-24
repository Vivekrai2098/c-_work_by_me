#include <iostream>
using namespace std;
int main()
{
    // search the element in array using the pointer;
    int arr[100], a, *p;
    cout << "how many value you want to enter in this array" << endl;
    cin >> a;
    for (int j = 0; j < a; j++)
    {
        cout << j + 1 << " value input";
        cin >> arr[j];
    }
    cout << "..........................." << endl;
    cout << "do you want to search any array element" << endl;
    char b;
    cin >> b;
    if (b == 'y' || b == 'Y')
    {
        int k;
        cout << "enter the value" << endl;
        cin >> k;
        p = &k;
        for (int q = 0; q < a; q++)
        {
            if (arr[q] == *p)
            {
                cout << "that is exist in array" << arr[q];
            }
        }
    }
    else
    {
        cout << "thanks for using this value";
    }

    return 0;
}