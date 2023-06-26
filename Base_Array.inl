// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// size
//
template <typename T>
inline
size_t Base_Array <T>::size (void) const
{
    return cur_size_;
}

//
// max_size
//
template <typename T>
inline
size_t Base_Array <T>::max_size (void) const
{
    return max_size_;
}

//
// set_data_
//
template <typename T>
inline
void Base_Array <T>::set_data_ (T* ptr)
{
    data_ = ptr;
}

//
// get_data_
//
template <typename T>
inline
T* Base_Array <T>::get_data_ (void)
{
    return data_;
}

//
// get_data_ const
//
template <typename T>
inline
T* Base_Array <T>::get_data_ (void) const
{
    return data_;
}

//
// set_cur_size_
//
template <typename T>
inline
void Base_Array <T>::set_cur_size_ (size_t size)
{
    cur_size_ = size;
}

//
// set_max_size_
//
template <typename T>
inline
void Base_Array <T>::set_max_size_ (size_t size)
{
    max_size_ = size;
}

//
// set_is_sliced_array_
//
template <typename T>
inline
void Base_Array <T>::set_is_sliced_array_ (bool val)
{
    is_sliced_array_ = val;
}

//
// get_is_sliced_array_
//
template <typename T>
inline
bool Base_Array <T>::get_is_sliced_array_ (void)
{
    return is_sliced_array_;
}
