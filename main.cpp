#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int t ;
   cin >> t ;
   while(t--)
   {
       int n ;
       cin >> n ;
       int arr[n] ;
       for(int i = 0 ; i<n ; i++)
       {
           cin >> arr[i] ;
       }
       for(int i = 0 ; i<n ; i++)
       {
           for(int j = i ; j<n ; j++)
           {
               int mx = -1e5;
               for(int z = i ; z<=j ; z++)
               {
                   if(mx<arr[z])
                   {
                       mx = arr[z];
                   }
               }
                cout << mx << " " ;
           }
       }
       cout << endl ;

   }


    return 0;
}
