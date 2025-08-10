#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    int a , b , c ;

    while(cin>>a>>b>>c && a != 0)
    {
        vector<bool> stay(a+1 , true) ;

        int p1 = a , p2 = 1 ;

        int left = a ;

        while(left != 0 )
        {
            int count_ = 0 ;
            while(count_ < b)
            {
                p1++ ;
                if(p1>a)
                {
                    p1 = 1 ;
                }

                if(stay[p1] == true)
                {
                    count_++ ;
                }
                //cout<<p1<<" "<<stay[p1]<<endl ;
            }

            int count_2 = 0 ;

            while(count_2 < c)
            {
                p2-- ;
                if(p2<1)
                {
                    p2 = a ;
                }

                if(stay[p2] == true)
                {
                    count_2++ ;
                }
                //cout<<p2<<" "<<stay[p2]<<endl ;
            }

            if(p1 == p2)
            {
                cout<<setw(3)<<p1 ;
                stay[p1] = false ;
                left-- ;
            }
            else
            {
                cout<<setw(3)<<p1<<setw(3)<<p2 ;
                stay[p1] = false ;
                stay[p2] = false ;
                left = left-2 ;
            }

            if(left > 0)
            {
                cout<<"," ;
            }

        }

    }

    return 0 ;



}
