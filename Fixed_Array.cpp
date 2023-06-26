#include "Fixed_Array.h"

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (void)
: Base_Array<T>(N)
{

}

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, N> & arr)
: Base_Array<T>(arr)
{

}


//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (T fill)
: Base_Array<T>(N, fill)
{

}

//
// ~Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::~Fixed_Array (void)
{

}

//
// display
//
template <typename T, size_t N>
void Fixed_Array <T, N>::display (void)
{
    if (this->size() == 0)
    {
        std::cout << "The fixed array is empty" << std::endl;
    }
    else
    {
        size_t limit = (this->size() - 1);
        std::cout << "-----" << std::endl;
        for (size_t i = 0; i <= limit; i++)
        {
            std::cout << this->get_data_()[i] << std::endl;
        }
        std::cout << "-----" << std::endl;
    }
}

//
// operator =
//
template <typename T, size_t N>
const Fixed_Array <T, N> & Fixed_Array <T, N>::operator = (const Fixed_Array <T, N> & rhs)
{
    for (size_t i = 0; i < N; i++)
    {
        this->set(i, rhs[i]);
    }
    return *this;
}

