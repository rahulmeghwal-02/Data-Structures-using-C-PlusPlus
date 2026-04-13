#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {22, 43, 28, 90, 15};

    cout << "Array Elements : Before Insertion... " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // insert 99 at index 2
    arr[2] = 99;
    cout << "Array Elements : After Insertion... " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}