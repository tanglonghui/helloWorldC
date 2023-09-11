#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  system("chcp 65001");
  cout << "base" << endl;
  int i = 20;
  int *p = &i;
  int t = *p;

  cout << i << endl;
  cout << p << endl;
  cout << t << endl;

  cout << "arr[]" << endl;

  int arr[3] = {1, 2, 3};
  cout << "地址： " << arr + 1 << endl;
  cout << "值： " << *(arr + 1) << endl;
  cout << "地址： " << *(&arr + 1) << endl;

  for (int i = 0; i < 3; i++)
  {
    /* code */
    cout << arr[i] << " ";
  }

  cout << "--------arr[][]" << endl;

  char arr2[3][3];

  memset(arr2, 'a', 9);
  cout << "地址： " << arr2 << endl;
  cout << "地址： " << arr2 + 1 << endl;
  cout << "值： " << *((arr2 + 1) + 1) << endl;
  cout << "地址： " << *(&arr2 + 1) << endl;

  for (int i = 0; i < 3; i++)
  {
    cout << "\n";
    for (int j = 0; j < 3; j++)
    {
      /* code */
      cout << arr2[i][j] << " ";
    }
  }

  return 0;
}