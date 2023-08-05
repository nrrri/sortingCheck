#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    bool check = true;
    int data[] = { 1, 2, 4, 5, 8, 12, 13, 16, 71, 92 };    // correct
    int data2[] = { 1, 112, 4, 5, 8, 12, 13, 16, 71, 92 }; // incorrect

    cout << sizeof(data) << " | ";
    cout << sizeof(data[0]) << endl;

    // find length of array
    int len = sizeof(data) / sizeof(data[0]);

    cout << "len = " << len << endl;

    for (int k = 0; k < len; k++)
    {
        if (data2[k] < data2[k + 1])
        {
            check = true;
        }
        else
        {
            check = false;
            break;
        }
    }

    if (check == true)
    {
        cout << "Check sorting = true" << endl;
    }
    else
    {
        cout << "Check sorting = false" << endl;
    }
    return 0;
}
