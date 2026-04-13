#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {22, 43, 28, 90, 15};

    cout << "Array Elements : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "First Element : " << arr[0] << endl;
    cout << "Last Element : " << arr[4] << endl;

    cout << endl;
    return 0;
}