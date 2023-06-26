#include "Stack.h"

//
// Stack
//
template <typename T>
Stack <T>::Stack (void)
: my_array()
{

}

//
// Stack
//
template <typename T>
Stack <T>::Stack (const Stack & stack)
: my_array(stack.size())
{
    for (size_t i = 0; i < stack.size(); i++) {my_array.set(i, stack.my_array[i]);}
}

//
// ~Stack
//
template <typename T>
Stack <T>::~Stack (void)
{

}

//
// push
//
// This method increaes the size of the array when a new element is appended and adds 
// it to the end of the array.
template <typename T>
void Stack <T>::push (T element)
{
    size_t cur_size = my_array.size();
    my_array.resize(cur_size + 1);
    my_array.set(cur_size, element);
}

//
// pop
//
// This method removes the last element in the array and reduces the size of the array by
// 1. Reducing the cur_size of the array ensures the popped element can not be read later on.
// Intially checks if the array is empty. Throws an exception if so.
template <typename T>
void Stack <T>::pop (void)
{
    size_t cur_size = my_array.size();
    if (cur_size == 0) {throw empty_exception();}
    my_array.resize(cur_size - 1);
}

//
// operator =
//
template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs)
{
    if (this != &rhs) {my_array = rhs.my_array;}
    return *this;
}

//
// display
//
// Prints elements in a manner that represents a stack (LIFO). The last element is at the top.
template <typename T>
void Stack <T>::display (void)
{
    if (my_array.size() == 0)
    {
        std::cout << "The stack is empty" << std::endl;
    }
    else
    {
        size_t limit = (my_array.size() - 1);
        std::cout << "-----" << std::endl;
        std::cout << "Top" << std::endl;
        std::cout << "|" << std::endl;
        for (size_t i = 0; i <= limit; i++)
        {
            std::cout << my_array[limit - i] << std::endl;
            std::cout << "|" << std::endl;
        }
        std::cout << "Bottom" << std::endl;
    }
}

//
// clear
//
template <typename T>
void Stack <T>::clear (void)
{
    my_array.resize(0);
}
