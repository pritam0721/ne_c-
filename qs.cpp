#include <bits/stdc++.h>
using namespace std;

int
part (vector<int> &a, int l, int h)
{
  int pivot = a[l];
  // cout << pivot << endl;
  int i = l;
  // cout << l << endl;
  int j = h;
  // cout << j << endl;
  while (i < j)
    {
      do
        {
          i++;
          // cout << "pivot :  " << "i th value  " << i << " .. " << pivot
          //      << "and the " << a[i] << endl;
        }
      while (a[i] <= pivot);
      do
        {
          // cout << "pivot : " << "j th value  " << j << " ..  " << pivot
          //      << "and the " << a[j] << endl;
          j--;
        }
      while (a[j] > pivot);

      if (i < j)
        {
          swap (a[i], a[j]);
        }
    }
  swap (a[l], a[j]);

  // for (auto x : a)
  //   {
  //     cout << x << endl;
  //   }

  return j;
}
void
qs (vector<int> &a, int l, int h)
{
  if (l < h)
    {
      int p = part (a, l, h);
      qs (a, l, p);
      qs (a, p + 1, h);
    }

}
int
main ()
{
  vector<int> a = { 4, 16, 8, 12, 15, 6, 3, 9, 5 };
  a.push_back (INT_MAX);
  qs (a, 0, a.size () - 1);

  for(auto x : a){
    if(x != INT_MAX)
      cout << x << endl ;
  }
 return 0;
}