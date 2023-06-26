<h1>Abstract Data Types in C++</h1>

The goal of this programming assignment is to use the Array class to implement three more ADTs:

<ul>
  <li>Stack: An ADT that contains a list of elements such that the list has last-in, first-out (LIFO) semantics, i.e., elements are inserted into the front of the list and removed from the front of the list
  <li>Queue: An ADT that contains a list of elements such that the list has first-in, first-out (FIFO) semantics, i.e., elements are inserted into the of the list and removed from the front of the list
  <li>Fixed array: An ADT that is an array, but cannot grow or shrink
</ul>

In order to solve an LSP violation that occured with the original Array class, the class was divided into a Base_Array with all the basic functionality intended for a fixed array, and an Array class that handles operations for a dynamic array. The updated class design as as shown below.

![Screen Shot 2022-10-06 at 5 05 05 PM](https://media.github.iu.edu/user/19117/files/f3651df7-7cdc-41b9-8991-2dc7e8bcbe5f)

![Screen Shot 2022-10-06 at 5 05 51 PM](https://media.github.iu.edu/user/19117/files/3e68177e-9873-455f-91a5-a4d03725cbd8)

Included files:
<ul>
  <li>Base_Array.cpp
  <li>Base_Array.h
  <li>Base_Array.inl
  <li>Array.cpp
  <li>Array.h
  <li>Array.inl
  <li>Stack.cpp
  <li>Stack.h
  <li>Stack.inl
  <li>Queue.cpp
  <li>Queue.h
  <li>Queue.inl
  <li>Fixed_Array.cpp
  <li>Fixed_Array.h
  <li>Fixed_Array.inl
  <li>assignment2.mpc
  <li>driver.cpp
</ul>
