#include <bits/stdc++.h>
using namespace std;

int
geMax (const vector<int> &arr)
{
  return *max_element (arr.begin (), arr.end ());
}
void
countSort (vector<int> &arr, int exp)
{
  vector<int> count[10];
  vector<int> pars;
  for (int i = 0; i < arr.size (); i++)
    {
      int d = (arr[i] / exp) % 10;
      count[d].push_back (arr[i]);
    }

  for (int i = 0; i < 10; i++)
    {
      for (int j = 0; j < count[i].size (); j++)
        {
          pars.push_back (count[i][j]);
        }
    }

  arr = pars;
}

void
radixSort (vector<int> &arr)
{
  int max = geMax (arr);

  for (int exp = 1; max / exp > 0; exp *= 10)
    {
      countSort (arr, exp);
    }
}

int
main ()
{
  vector<int> arr = { 170, 45, 75, 90, 802, 24, 2, 66 ,1 , 55 ,1000 };

  radixSort (arr);
  cout << "this is the final result " << endl;
  for (auto x : arr)
    {
      cout << x << " ";
    }
  return 0;
}