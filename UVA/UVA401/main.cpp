/*#include <iostream>
#include<string>
#include<unordered_map>

using namespace std ;

int main()
{
    string s ;
    cin>>s ;
    bool mirr = true ;
    bool reg  =true ;


    unordered_map<char , char> mirror
    {
        {'A' , 'A'} , {'3','E'} ,{'H','H'} ,{'I','I'} ,{'L','J'},{'M','M'} , {'O','O'} ,{'2','S'} , {'T','T'} , {'U','U'} , {'V','V'} ,{'W','W'},
        {'X','X'} , {'Y','Y'} , {'Z','5'} , {'1','1'} , {'8','8'},{'E','3'} , {'S','2'} , {'J','L'} , {'5','Z'}
    } ;

    for(size_t i = 0 ; i<s.size()/2 ; i++)
    {
        if(s[i] != s[s.size()-1-i])
        {
            reg = false ;

        }

        char s1 = s[i] ;
        char s2 = s[s.size() - 1 - i] ;

        if(!mirror.count(s1) || mirror[s1] != s2)
        {
            mirr = false ;

        }

    }
    if(s.size()%2 == 1)

            {
                char mid = s[s.size() / 2] ;

                if(!mirror.count(mid) || mirror[mid] != mid)
                {
                    mirr = false ;
                }
            }

    if(mirr&&reg)
    {
        cout<<s<<" -- is a mirrored palindrome."<<endl ;
    }

    if(mirr&& !reg)
    {
        cout<<s<<" -- is a mirrored string."<<endl ;
    }

    if(!mirr&&reg)
    {
        cout<<s<<" -- is a regular palindrome."<<endl ;
    }

    if(!mirr&&!reg)
    {
        cout<<s<<" -- is not a palindrome."<<endl ;
    }

    return 0 ;
}*/

#include<iostream>
#include<string>
#include<unordered_map>

using namespace std ;

int main()
{
    string s ;

    unordered_map<char , char> mirror
        {
            {'A','A'} , {'3','E'},{'E','3'},{'H','H'},{'I','I'},{'L','J'},{'J','L'},{'M','M'},{'O','O'},{'2','S'} , {'S','2'},{'T','T'} , {'U','U'}
            ,{'V','V'},{'W','W'},{'X','X'},{'Y','Y'},{'Z','5'},{'5','Z'} , {'1','1'},{'8','8'} };



    while(cin>>s)
    {
        bool mirr = true , reg = true;


        for(size_t i = 0 ; i <=s.size()/2 ; i++)
        {
            if(s[i]!= s[s.size() - 1 -i])
            {
                reg =false ;
            }

            char s1 = s[i] ;
            char s2 = s[s.size() - 1 - i] ;

            if(!mirror.count(s1) || mirror[s1] != s2)
            {
                mirr = false ;
            }
        }

        if(s.size() % 2 != 0)
        {
            char mid = s[s.size()/2] ;
            if(!mirror.count(mid)||mirror[mid] != mid)
            {
                mirr = false ;
            }
        }

        if(!mirr && !reg)
        {
            cout<<s<<" -- is not a palindrome."<<endl ;
        }
        if(!mirr && reg)
        {
            cout<<s<<" -- is a regular palindrome."<<endl ;
        }
        if(mirr &&!reg)
        {
            cout<<s<<" -- is a mirrored string."<<endl ;
        }
        if(mirr && reg)
        {
            cout<<s<<" -- is a mirrored palindrome."<<endl ;
        }

    }

    return 0 ;



}

