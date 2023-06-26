// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Array.h"
#include <stdexcept>  // for std::out_of_bounds exception

//
// Array
//
template <typename T>
Array <T>::Array (void)
: Base_Array<T>()
{

}

//
// Array (size_t)
//
template <typename T>
Array <T>::Array (size_t length)
: Base_Array<T>(length)
{

}

//
// Array (size_t, char)
//
template <typename T>
Array <T>::Array (size_t length, T fill)
: Base_Array<T>(length, fill)
{

}

//
// Array (const Array &)
//
template <typename T>
Array <T>::Array (const Array & array)
: Base_Array<T>(array)
{

}

//
// ~Array
//
template <typename T>
Array <T>::~Array (void)
{

}

//
// operator =
//
template <typename T>
const Array <T> & Array <T>::operator = (const Array & rhs)
{
  if (this->size() != rhs.size() or this->max_size() != rhs.max_size())
  {
    this->resize(rhs.size());
  }
  
  for (size_t i = 0; i < rhs.size(); i++)
  {
    this->get_data_()[i] = rhs[i];
  }

  return *this;
}

//
// resize
//
template <typename T>
void Array <T>::resize (size_t new_size)
{
  if (new_size < this->size())
  {
    this->set_cur_size_(new_size);
  }

  if (new_size > this->size())
  {
    T* temp = new T[new_size];

    for (size_t i = 0; i < this->size(); i++) {temp[i] = this->get_data_()[i];}
        
    delete[] this->get_data_();
    this->set_data_(temp);
    temp = nullptr;
    this->set_cur_size_(new_size);

    if (new_size > this->max_size()) {this->set_max_size_(new_size);}
  }
}

//
// shrink
//
template <typename T>
void Array <T>::shrink (void)
{
  if (this->size() < this->max_size())
  {
      T* temp = new T[this->size()];
      for (int i = 0; i < this->size(); i++)
      {
          temp[i] = this->get_data_()[i];
      }
      delete[] this->get_data_();
      this->set_data_(temp);
      temp = nullptr;
      this->set_max_size_(this->size());
  }
}

//
// slice (begin)
//
template <typename T>
Array <T> Array <T>::slice (size_t begin) const
{
  int req_size = (this->size() - 1) - begin;
  Array <T> new_arr(req_size);
  T* ptr = this->get_data_();
  new_arr.set_data_(&ptr[begin]);      // Makes the data_ of new array refer to data_ of parent array
  new_arr.set_is_sliced_array_(true);  // Avoids scenario where sliced array deletes the memory location before parent array

  return new_arr;
}

//
// slice (begin, end)
//
template <typename T>
Array <T> Array <T>::slice (size_t begin, size_t end) const
{
  int req_size = end - begin;
  Array <T> new_arr(req_size);
  T* ptr = this->get_data_();
  new_arr.set_data_(&ptr[begin]);
  new_arr.set_is_sliced_array_(true);

  return new_arr;
}
