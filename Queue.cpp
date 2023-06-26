#include "Queue.h"

//
// Queue
//
template <typename T>
Queue <T>::Queue (void)
: my_array(), 
front (0), 
end (0)
{

}

//
// Queue
//
template <typename T>
Queue <T>::Queue (const Queue & Queue)
: my_array(Queue.size()), 
front (0), 
end (Queue.size() - 1)
{
    for (size_t i = 0; i < Queue.size(); i++)
    {
        my_array.set(i, Queue.my_array[i]);
    }
}

//
// ~Queue
//
template <typename T>
Queue <T>::~Queue (void)
{

}

//
// enqueue
//
// Resizes the array to grow by one and adds the new element to the end
// of the array. Variable end stores the index of the new element.
template <typename T>
void Queue <T>::enqueue (T element)
{
    size_t cur_size = my_array.size();
    my_array.resize(cur_size + 1);
    my_array.set(cur_size, element);
    end = cur_size;
}

//
// dequeue
//
// Initially checks if the array is empty and throws an exception if so. In order to 
// remove an element from the front of the array, the variable front is shifted forward.
// This approach allows the display method to be aware of the start and end of the array,
// while printing.
template <typename T>
void Queue <T>::dequeue (void)
{
    size_t cur_size = my_array.size();

    if (cur_size == 0) {throw empty_exception();}
    
    front++;
    if (this->front > this->end) {my_array.resize(0);}
}

//
// operator =
//
template <typename T>
const Queue <T> & Queue <T>::operator = (const Queue & rhs)
{
    if (this != &rhs)
    {
        my_array = rhs.my_array;
        this->front = rhs.front;
        this->end = rhs.end;
    }
    return *this;
}

//
// display
//
// Prints elements in a manner that represents a queue (FIFO). The last element is at the end.
template <typename T>
void Queue <T>::display (void)
{
    if (my_array.size() == 0) {std::cout << "The queue is empty" << std::endl;}
    else
    {
        std::cout << "-----" << std::endl;
        std::cout << "Front";
        std::cout << " | ";
        for (size_t i = front; i <= end; i++)
        {
            std::cout << my_array[i];
            std::cout << " | ";
        }
        std::cout << "End" << std::endl;
    }
}

//
// clear
//
template <typename T>
void Queue <T>::clear (void)
{
    my_array.resize(0);
    front = 0;
    end = 0;
}
