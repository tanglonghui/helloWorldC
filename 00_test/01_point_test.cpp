#include <iostream>
using namespace std;

template <typename T, int N>
int calc_arr_size(T (&arr)[N])
{
    return N;
}

void printArr(int arr[],int size)
{

    cout << size << ":size --";
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout << arr[i] << "-"<< &arr[i]<<" ";
    }
    cout << endl;
}

int main()
{
    system("chcp 65001");
    std::cout << "hello" << std::endl;
    std::cout << "你好" << std::endl;

    cout << "arr[]" << endl;

    int arr[4] = {1, 2, 3,4};
    printArr(arr,calc_arr_size(arr));
    int *prd = arr + 1;

    cout << "1、地址:" << prd << endl;
    cout << "1、值: " << *prd << endl;

    // cout << "2、地址:" << (*prd++ = 6) << endl;
    // *prd = 6;
    cout << "2、地址:" << prd << endl;
    cout << "2、值: " << *prd << endl;

    *prd++ = 6;
    *prd++ = 5;

    cout << "3、地址:" << prd << endl;
    cout << "3、值: " << *prd << endl;

    printArr(arr,calc_arr_size(arr));
    return 0;
}