
#include <iostream>

template< typename T >
class List
{
    public:
            List<T>( T const & content)
            {
                //Some code
            }

            List<T>( List<T> const & list)
            {
                //Some code
            }
            ~List<T>( void )
            {
                //Some code
            }

    private:
            T *         _content;
            List<T> *   _next;

};


//  **********************************************************************  //
    
int main( void )
{
    /* code */
    List<int>       a( 42 );
    List<float>     b( 3.14f );
    List<List<int> > c( a ); 
    return 0;
}




//  **********************************************************************  //
