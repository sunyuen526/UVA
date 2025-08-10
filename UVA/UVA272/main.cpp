#include <iostream>

using namespace std;

int main()
{
    char c ;

    bool check = true ;

    while(cin.get(c))
    {
        if(c == '"')
        {
            if(check)
            {
                cout<<"``" ;
            }
            else
            {
                cout<<"''" ;
            }

            check = !check ;
        }

        else
        {

            cout<<c ;
        }
    }

    return 0 ;
}
