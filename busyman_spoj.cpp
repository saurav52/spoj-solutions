#include <bits/stdc++.h>
using namespace std;

int main() {
     int t,n;
     int start,fin,Res=0;;
     scanf("%d",&t);
     while(t--)
     {
          scanf("%d",&n);
          /*Making vector of Pair*/
          vector <pair<int,int> > v;

          Res=1; // as the first activity is always printed
          for(int i=0;i<n;++i)
          {
               scanf("%d%d",&start,&fin);
               /*we make the finish time as the first element
               and start time as the second element*/
               v.push_back(make_pair(fin,start))	;
          }
          /*Using STL sort, we sort according to the first element as the key*/
          sort(v.begin(),v.end());

          int PresentFin=v[0].first; // stores the finish time of activity presntly selected

          /*Selecting the activites from the set*/
          for(int i=1;i<n;++i)
               if(v[i].second>=PresentFin)
               {
                    Res++;
                    PresentFin=v[i].first;
               }
          printf("%d\n",Res);

     }
     return 0;
}
