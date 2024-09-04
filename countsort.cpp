#include <bits/stdc++.h>
using namespace std;

void
conuntSort (vector<int> &arr)
{
  int max = *max_element (arr.begin (), arr.end ());

  vector<int> c (max + 1,0) ;

   for(auto x : arr){
      c[x]++;     
   }
   arr.clear();
   int i = 0;
   for(auto x : c){
     if(x > 0){
         while (x--)
           {
             arr.push_back (i);
           }
     }
         i++;
   }
}
int
main ()
{
  //! your codes go here
  vector<int> arr = { 6, 3, 9, 10, 15, 6, 8, 12, 3, 6 };
  conuntSort (arr);
    for(auto x : arr){
       cout << x << " ";
    }
      return 0;
}