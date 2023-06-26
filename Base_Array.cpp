// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Base_Array.h"
#include <stdexcept>  // for std::out_of_bounds exception

//
// Array
//
template <typename T>
Base_Array <T>::Base_Array (void)
: max_size_ (10), 
cur_size_ (0)
{
  data_ = new T[max_size_];
}

//
// Array (size_t)
//
template <typename T>
Base_Array <T>::Base_Array (size_t length)
: max_size_ (length), 
cur_size_ (length)
{
  data_ = new T[max_size_];
}

//
// Array (size_t, char)
//
template <typename T>
Base_Array <T>::Base_Array (size_t length, T fill)
: max_size_ (length), 
cur_size_ (length)
{
  data_ = new T[max_size_];
  for (int i = 0; i < cur_size_; i++) {data_[i] = fill;}
}

//
// Array (const Array &)
//
template <typename T>
Base_Array <T>::Base_Array (const Base_Array & array)
: max_size_ (array.max_size_), 
cur_size_ (array.cur_size_)
{
  this->data_ = new T[this->max_size_];  
  for (int i = 0; i < this->cur_size_; i++) {this->data_[i] = array.data_[i];}
}

//
// ~Array
//
template <typename T>
Base_Array <T>::~Base_Array (void)
{
  // This check is to ensure a sliced array does not delete the memory location 
  // of the original array
  if (this->is_sliced_array_ == false) {delete[] data_;}
}

//
// operator =
//
template <typename T>
const Base_Array <T> & Base_Array <T>::operator = (const Base_Array & rhs)
{
  if (this != &rhs)  // Check for self assignment
  {
    if (this->cur_size_ > rhs.cur_size_)
    {
      this->cur_size_ = rhs.cur_size_;
    }
    else if (this->cur_size_ < rhs.cur_size_)
    {
      delete [] this->data_;
      this->max_size_ = rhs.max_size_;
      this->cur_size_ = rhs.cur_size_;
      this->data_ = new T[this->max_size_];
    }
        
    for (size_t i = 0; i < cur_size_; i++){
      this->data_[i] = rhs.data_[i];
    }
  }

  return *this;
}

//
// operator []
//
template <typename T>
T & Base_Array <T>::operator [] (size_t index)
{
  if (index >= this->cur_size_) {throw std::out_of_range("Invalid index");}  // Inhibts retrieval of garbage data
  return data_[index];
}

//
// operator [] 
//
template <typename T>
const T & Base_Array <T>::operator [] (size_t index) const
{
  if (index >= this->cur_size_) {throw std::out_of_range("Invalid index");}
  return data_[index];
}

//
// get
//
template <typename T>
T Base_Array <T>::get (size_t index) const
{
  if (index >= this->cur_size_) {throw std::out_of_range("Invalid index");}
  return data_[index];
}

//
// set
//
template <typename T>
void Base_Array <T>::set (size_t index, T value)
{
  if (index >= this->cur_size_) {throw std::out_of_range("Invalid index");}
  data_[index] = value;
}

//
// find (value)
//
template  <typename T>
int Base_Array <T>::find (T value) const
{
  int pos = -1;

  for (int i = 0; i < cur_size_; i++)
  {
    if (this->data_[i] == value) 
    {
      pos = i;
      return pos;
    }        
  }
  return pos;
}

//
// find (val, size_t) 
//
template <typename T>
int Base_Array <T>::find (T val, size_t start) const
{
  if (start > this->cur_size_) {throw "out_of_range";}
    
  int start_index = start;
  int pos = -1;

  for (int i = start_index; i < cur_size_; i++)
  {
    if (this->data_[i] == val) 
    {
      pos = i;
      return pos;
    }        
  }
  return pos;
}

//
// operator ==
//
template <typename T>
bool Base_Array <T>::operator == (const Base_Array & rhs) const
{
  if (this == &rhs) {return true;}  // Check for equality to self
    
  if (this->cur_size_ != rhs.cur_size_) {return false;}
    
  for (size_t i = 0; i < cur_size_; i++)
  {
    if (this->data_[i] != rhs.data_[i]) {return false;}
  }

  return true;
}

//
// operator !=
//
template <typename T>
bool Base_Array <T>::operator != (const Base_Array & rhs) const
{
  return !(*this == rhs);
}

//
// fill
//
template <typename T>
void Base_Array <T>::fill (T value)
{
  for (int i = 0; i < cur_size_; i++) {this->data_[i] = value;}
}

//
// reverse
//
template <typename T>
void Base_Array <T>::reverse (void)
{
  int start = 0;
  int end = this->size() - 1;
  T temp;

  // Reverses array in place
  while (start < end)
  {
    temp = this->get_data_()[start];
    this->get_data_()[start] = this->get_data_()[end];
    this->get_data_()[end] = temp;
    start++;
    end--;
  }
}

//
// slice (begin)
//
template <typename T>
Base_Array <T> Base_Array <T>::slice (size_t begin) const
{
  int req_size = (cur_size_ - 1) - begin;
  Base_Array <T> new_arr(req_size);

  new_arr.data_ = &data_[begin];
  new_arr.is_sliced_array_ = true;  // Avoids scenario where sliced array deletes the memory location before parent array

  return new_arr;
}

//
// slice (begin, end)
//
template <typename T>
Base_Array <T> Base_Array <T>::slice (size_t begin, size_t end) const
{
  int req_size = end - begin;
  Base_Array <T> new_arr(req_size);

  new_arr.data_ = &data_[begin];
  new_arr.is_sliced_array_ = true;

  return new_arr;
}