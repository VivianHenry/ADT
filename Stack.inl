//
// size
//
template <typename T>
inline
size_t Stack <T>::size (void) const
{
    return this->my_array.size();
}

//
// top
//
template <typename T>
inline
T Stack <T>::top (void) const
{
    if (my_array.size() == 0) {throw empty_exception();}
    else
    {
        size_t cur_size = my_array.size();
        return my_array.get(cur_size - 1);
    }
}

//
// is_empty
//
template <typename T>
inline
bool Stack <T>::is_empty (void) const
{
    if (my_array.size() == 0) {return true;}
    else {return false;}
}
