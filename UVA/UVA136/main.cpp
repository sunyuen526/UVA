#include <iostream>
#include<vector>

using namespace std;
//會超時，但可以
int main()
{
    vector<int> prime ;
    int i = 1 ;

    while(prime.size()<1500)
    {

        int val = i ;
        int tmp = val ;

        while(tmp%2 == 0)
        {
            tmp = tmp/2 ;
        }

        while(tmp%3 == 0)
        {
            tmp = tmp / 3 ;
        }
        while(tmp%5 == 0)
        {
            tmp = tmp / 5 ;
        }

        if(tmp == 1 )
        {
            prime.push_back(i) ;
        }

        i++ ;

    }

    cout<<"The 1500'th ugly number is "<<prime[1499]<<"." ;
    return 0;
}
