#include <iostream>

using namespace std;

int number(int n)
{

    int total = 1 ;

    while(n!= 1)
    {
        if(n%2 != 0 )
        {
            n = n*3+1 ;
            total = total + 1 ;
        }
        else
        {
            n = n / 2 ;
            total = total + 1 ;
        }
    }
    return total;
}

int main()
{

    int a , b ;
    cin>>a>>b ;
    cout<<a<<" "<<b ;

    if(a>b)
    {
        int tmp = a ;
        a = b ;
        b = tmp ;

    }
    int max_  = 1 ;


    for(int i = a ; i<=b ; i++)
    {

        if(number(i) > max_)
        {
            max_ = number(i) ;
        }


    }

    cout<<" "<<max_ ;




    return 0 ;



}
