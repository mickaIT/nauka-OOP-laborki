#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main()
{
    std::vector < int > tab;
    srand( time( NULL ) );
    //zapis
    tab.push_back( 0 );
    for( int i = 0; i < 10; i++ )
    {
        int gdzie = rand() % tab.size();
        tab.insert( tab.begin() + gdzie, i );
    }
    //odczyt
    for( int i = 0; i < tab.size(); i++ )
    {
        std::cout << tab[ i ] << std::endl;
    }
    return 0;
}
