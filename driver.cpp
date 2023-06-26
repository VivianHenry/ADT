#include <iostream>

// // Testing Array.h
// #include "Array.h"

// int main (int argc, char * argv [])
// {
//   // TODO Add code here to test your Array class.
  
//   Array<char> test_1(3);
//   test_1[0] = 'a';
//   test_1[1] = 'b';
//   test_1[2] = 'c';

//   Array<char> test_2(test_1);

//   Array<char> test_3(5, 'v');

//   Array<char> test_4(10);
//   test_4[0] = 'a';
//   test_4[1] = 'b';
//   test_4[2] = 'c';
//   test_4[3] = 'd';
//   test_4[4] = 'e';
  
//   Array<char> test_5(20);

//   // Testing constructors, [], and get function
//   std::cout << "Constructor w/ 1 argument" << std::endl;
//   for(int i = 0; i < 3; i++) {std::cout << test_1[i] << std::endl;}
//   std::cout << std::endl;
//   std::cout << "Constructor w/ 2 argument" << std::endl;
//   for(int i = 0; i < 5; i++) {std::cout << test_3.get(i) << std::endl;}
//   std::cout << std::endl;
//   std::cout << "Copy constructor" << std::endl;
//   for(int i = 0; i < 3; i++) {std::cout << test_2[i] << std::endl;}
//   std::cout << "---------------------------------------" << std::endl;

//   // Testing [] for const arrays
//   std::cout << "[] for const arrays test" << std::endl;
//   //const Array test_9(10);
//   //test_9[0] = 'a';

//   // Testing equality and inequality
//   std::cout << "Equality and inequality test" << std::endl;
//   bool result = test_1 == test_2;
//   std::cout << result << std::endl;
//   std::cout << "---------------------------------------" << std::endl;

//   // Testing set function
//   std::cout << "Set function test" << std::endl;
//   std::cout << "Value before function: " << test_2[1] << std::endl;
//   test_2.set(1, 'z');
//   std::cout << "Value after function: " << test_2[1] << std::endl;
//   std::cout << "---------------------------------------" << std::endl;

//   // Testing size and max_size functions
//   std::cout << "size and max_size functions test" << std::endl;
//   std::cout << "size function: " << test_4.size() << std::endl;
//   std::cout << "max_size after function: " << test_4.max_size() << std::endl;
//   std::cout << "---------------------------------------" << std::endl;

//   // Testing resize function
//   std::cout << "Resize function test" << std::endl;
//   std::cout << "Before resize: " << std::endl;
//   for(int i = 0; i < test_3.size(); i++) {std::cout << test_3[i] << std::endl;}
//   std::cout << "Max size: " << test_3.max_size() << " " << "Cur size: " << test_3.size() << std::endl;
//   std::cout << "After resize: " << std::endl;
//   test_3.resize(10);
//   for(int i = 0; i < test_3.size(); i++) {std::cout << test_3[i] << std::endl;}
//   std::cout << "Max size: " << test_3.max_size() << " " << "Cur size: " << test_3.size() << std::endl;
//   std::cout << "After resize: " << std::endl;
//   test_3.resize(8);
//   for(int i = 0; i < test_3.size(); i++) {std::cout << test_3[i] << std::endl;}
//   std::cout << "Max size: " << test_3.max_size() << " " << "Cur size: " << test_3.size() << std::endl;
//   std::cout << "---------------------------------------" << std::endl;

//   // Testing find function
//   std::cout << "Find function test" << std::endl;
//   std::cout << "Result: " << test_4.find('c') << std::endl;
//   std::cout << "---------------------------------------" << std::endl;

//   // Testing find w/ start index function
//   std::cout << "Find w/ start index function test"  << std::endl;
//   std::cout << "Result: " << test_4.find('d', 1) << std::endl;
//   std::cout << "---------------------------------------" << std::endl;

//   // Testing fill function
//   std::cout << "Fill function test" << std::endl;
//   test_5.fill('z');
//   for(int i = 0; i <test_5.size(); i++) {std::cout << test_5[i] << std::endl;}
//   std::cout << "---------------------------------------" << std::endl;

//   //Testing = operator
//   std::cout << "= operator test" << std::endl;
//   std::cout << "Test array 5: " << std::endl;
//   std::cout << "Max size: " << test_5.max_size() << " " << "Cur size: " << test_5.size() << std::endl;
//   for(int i = 0; i <test_5.size(); i++) {std::cout << test_5[i] << std::endl;}
//   Array<char> test_6;
//   test_6 = test_5;
//   std::cout << "Test array 6: " << std::endl;
//   std::cout << "Max size: " << test_6.max_size() << " " << "Cur size: " << test_6.size() << std::endl;
//   for(int i = 0; i <test_6.size(); i++) {std::cout << test_6[i] << std::endl;}
//   std::cout << "---------------------------------------" << std::endl;

//   //Testing max_size_ and cur_size_
//   std::cout << "Size and max_size functions test" << std::endl;
//   std::cout << test_1.max_size() << " and " << test_1.size() << std::endl;
//   std::cout << test_2.max_size() << " and " << test_2.size() << std::endl;
//   std::cout << test_3.max_size() << " and " << test_3.size() << std::endl;
//   std::cout << test_4.max_size() << " and " << test_4.size() << std::endl;
//   std::cout << test_5.max_size() << " and " << test_5.size() << std::endl;
//   std::cout << test_6.max_size() << " and " << test_6.size() << std::endl;
//   std::cout << "---------------------------------------" << std::endl;

//   //Testing shrink function
//   std::cout << "Shrink function test" << std::endl;
//   std::cout << "Before shrink: " << std::endl;
//   std::cout << "Max size: " << test_3.max_size() << " " << "Cur size: " << test_3.size() << std::endl;
//   for(int i = 0; i <test_3.size(); i++) {std::cout << test_3[i] << std::endl;}
//   test_3.shrink();
//   std::cout << "Max size: " << test_3.max_size() << " " << "Cur size: " << test_3.size() << std::endl;
//   for(int i = 0; i <test_3.size(); i++) {std::cout << test_3[i] << std::endl;}
//   std::cout << "---------------------------------------" << std::endl;

//   //Testing reverse function
//   std::cout << "Reverse function test" << std::endl;
//   std::cout << "Before reverse: " << std::endl;
//   for(int i = 0; i <test_4.size(); i++) {std::cout << test_4[i] << std::endl;}
//   test_4.reverse();
//   std::cout << "After reverse: " << std::endl;
//   for(int i = 0; i <test_4.size(); i++) {std::cout << test_4[i] << std::endl;}
//   std::cout << "---------------------------------------" << std::endl;

//   //Testing slice w/ 1 parameter function
//   Array<char> test_7(10);
//   test_7[0] = 'a';
//   test_7[1] = 'b';
//   test_7[2] = 'c';
//   test_7[3] = 'd';
//   test_7[4] = 'e';
//   test_7[5] = 'f';
//   test_7[6] = 'g';
//   test_7[7] = 'h';
//   test_7[8] = 'i';
//   test_7[9] = 'j';
//   std::cout << "Slice w/ 1 parameter function test" << std::endl;
//   std::cout << "Before slice: " << std::endl;
//   for(int i = 0; i <test_7.size(); i++) {std::cout << test_7[i] << std::endl;}
//   Array<char> test_8 = test_7.slice(3);
//   std::cout << "After slice: " << std::endl;
//   for (size_t i = 0; i < test_8.size(); i++) {std::cout << test_8[i] << std::endl;}
//   std::cout << "Changing value in original array: " << std::endl;
//   test_7[6] = 'z';
//   std::cout << "Before slice: " << std::endl;
//   for(int i = 0; i <test_7.size(); i++) {std::cout << test_7[i] << std::endl;}
//   std::cout << "After slice: " << std::endl;
//   for (size_t i = 0; i < test_8.size(); i++) {std::cout << test_8[i] << std::endl;}
//   std::cout << "Changing value in copied array: " << std::endl;
//   test_8[2] = 'y';
//   std::cout << "Before slice: " << std::endl;
//   for(int i = 0; i <test_7.size(); i++) {std::cout << test_7[i] << std::endl;}
//   std::cout << "After slice: " << std::endl;
//   for (size_t i = 0; i < test_8.size(); i++) {std::cout << test_8[i] << std::endl;}
//   std::cout << "---------------------------------------" << std::endl;
  
//   // Array test_10(3);
//   // test_10[0] = 'a';
//   // test_10[1] = 'b';
//   // test_10[2] = 'c';

//   //Testing slice w/ 2 parameters function
//   Array<char> test_10(10);
//   test_10[0] = 'a';
//   test_10[1] = 'b';
//   test_10[2] = 'c';
//   test_10[3] = 'd';
//   test_10[4] = 'e';
//   test_10[5] = 'f';
//   test_10[6] = 'g';
//   test_10[7] = 'h';
//   test_10[8] = 'i';
//   test_10[9] = 'j';
//   std::cout << "Slice w/ 2 parameters function test" << std::endl;
//   std::cout << "Before slice: " << std::endl;
//   for(int i = 0; i <test_10.size(); i++) {std::cout << test_10[i] << std::endl;}
//   Array<char> test_11 = test_10.slice(2, 8);
//   std::cout << "After slice: " << std::endl;
//   for (size_t i = 0; i < test_11.size(); i++) {std::cout << test_11[i] << std::endl;}
//   std::cout << "Changing value in original array: " << std::endl;
//   test_10[6] = 'z';
//   std::cout << "Before slice: " << std::endl;
//   for(int i = 0; i <test_10.size(); i++) {std::cout << test_10[i] << std::endl;}
//   std::cout << "After slice: " << std::endl;
//   for (size_t i = 0; i < test_11.size(); i++) {std::cout << test_11[i] << std::endl;}
//   std::cout << "Changing value in copied array: " << std::endl;
//   test_11[4] = 'y';
//   std::cout << "Before slice: " << std::endl;
//   for(int i = 0; i <test_10.size(); i++) {std::cout << test_10[i] << std::endl;}
//   std::cout << "After slice: " << std::endl;
//   for (size_t i = 0; i < test_11.size(); i++) {std::cout << test_11[i] << std::endl;}
//   std::cout << "---------------------------------------" << std::endl;

//   std::cout << "---------------------------------------" << std::endl;
//   std::cout << "END OF DRIVER CODE" << std::endl;
//   std::cout << "---------------------------------------" << std::endl;

//   return 0;
// }



// // Testing Stack.h
// #include "Stack.h"

// int main(int argc, char const *argv[])
// {
//     // Testing constructor, push, and size functions
//     std::cout << "Testing constructor, push, and size functions" << std::endl;
//     Stack <char> test_1;
//     std::cout << "Size of stack before pushing elements: " << " " << test_1.size() << std::endl;
//     test_1.push('a');
//     test_1.push('b');
//     test_1.push('c');
//     test_1.push('d');
//     test_1.push('e');
//     std::cout << "Size of stack after pushing elements: " << " " << test_1.size() << std::endl;
//     std::cout << "---------------------------------------" << std::endl;

//     // Testing copy constructor
//     std::cout << "Testing copy constructor" << std::endl;
//     Stack <char> test_2(test_1);
//     std::cout << "Size of copied stack: " << " " << test_2.size() << std::endl;
//     std::cout << "---------------------------------------" << std::endl;

//     // Testing pop function
//     std::cout << "Testing pop function" << std::endl;
//     std::cout << "Size of original stack: " << " " << test_2.size() << std::endl;
//     test_2.pop();
//     test_2.pop();
//     std::cout << "Size of modified stack (popping twice): " << " " << test_2.size() << std::endl;
//     std::cout << "---------------------------------------" << std::endl;

//     // Testing top function
//     std::cout << "Testing top function" << std::endl;
//     std::cout << "Size of stack before function: " << " " << test_1.size() << std::endl;
//     char var = test_1.top();
//     std::cout << "Top element of stack: " << " " << var << std::endl;
//     std::cout << "Size of stack after function: " << " " << test_1.size() << std::endl;
//     std::cout << "---------------------------------------" << std::endl;

//     // Testing is_empty function
//     std::cout << "Testing is_empty function" << std::endl;
//     std::cout << "Is stack 1 empty? " << " " << test_1.is_empty() << std::endl;
//     Stack<char> test_3;
//     std::cout << "Is stack 3 empty? " << " " << test_3.is_empty() << std::endl;
//     std::cout << "---------------------------------------" << std::endl;

//     // Testing = operator
//     std::cout << "Testing = operator" << std::endl;
//     Stack <char> test_4;
//     test_4 = test_1;
//     std::cout << "Size of old stack: " << " " << test_1.size() << std::endl;
//     std::cout << "Size of new stack: " << " " << test_4.size() << std::endl;
//     std::cout << "---------------------------------------" << std::endl;
    
//     // Testing clear function
//     std::cout << "Testing clear function" << std::endl;
//     std::cout << "Size of stack before function: " << " " << test_4.size() << std::endl;
//     test_4.clear();
//     std::cout << "Size of stack after function: " << " " << test_4.size() << std::endl;
//     std::cout << "---------------------------------------" << std::endl;

//     Stack<char> test_5(test_2);

//     // Testing the display function
//     std::cout << "Testing the display function" << std::endl;
//     std::cout << "Stack 1: " << std::endl;
//     test_1.display();
//     std::cout << "---------------------------------------" << std::endl;

//     // Testing exception handling (default)
//     std::cout << "Testing exception handling (default)" << std::endl;
//     try
//     {
//         for (;;)
//         {
//             std::cout << "Size of stack before popping: " << " " << test_2.size() << std::endl;
//             test_2.pop();
//             std::cout << "Size of stack after popping: " << " " << test_2.size() << std::endl;
//         }
//     }
//     catch(Stack<char>::empty_exception& ex)
//     {
//         std::cout << "Exception caught" << std::endl;
//     }
//     std::cout << "---------------------------------------" << std::endl;

//     // // Testing exception handling (w/ message)
//     // std::cout << "Testing exception handling (w/ message)" << std::endl;
//     // try
//     // {
//     //     for (;;)
//     //     {
//     //         std::cout << "Size of stack before popping: " << " " << test_5.size() << std::endl;
//     //         test_5.pop();
//     //         std::cout << "Size of stack after popping: " << " " << test_5.size() << std::endl;
//     //     }
//     // }
//     // catch(std::runtime_error& ex)
//     // {
//     //     std::cout << "Exception caught" << std::endl;
//     //     std::cout << ex.what() << std::endl;
//     // }
//     // std::cout << "---------------------------------------" << std::endl;

//     std::cout << "---------------------------------------" << std::endl;
//     std::cout << "END OF DRIVER CODE" << std::endl;
//     std::cout << "---------------------------------------" << std::endl;

//     return 0;
// }



// // Testing Queue.h
// #include "Queue.h"

// int main(int argc, char const *argv[])
// {
//     // Testing constructor, enqueue, and size functions
//     std::cout << "Testing constructor, enqueue, and size functions" << std::endl;
//     Queue <char> test_1;
//     std::cout << "Size of queue before pushing elements: " << " " << test_1.size() << std::endl;
//     test_1.enqueue('a');
//     test_1.enqueue('b');
//     test_1.enqueue('c');
//     test_1.enqueue('d');
//     test_1.enqueue('e');
//     test_1.enqueue('f');
//     test_1.enqueue('g');
//     test_1.enqueue('h');
//     std::cout << "Size of queue after pushing elements: " << " " << test_1.size() << std::endl;
//     std::cout << "---------------------------------------" << std::endl;

//     // Testing copy constructor
//     std::cout << "Testing copy constructor" << std::endl;
//     Queue <char> test_2(test_1);
//     std::cout << "Size of copied queue: " << " " << test_2.size() << std::endl;
//     std::cout << "---------------------------------------" << std::endl;

//     // Checking front and end
//     std::cout << "Checking front and end" << std::endl;
//     std::cout << "Queue 1: " << " " << test_1.front << " " << test_1.end << std::endl;
//     std::cout << "Queue 2: " << " " << test_2.front << " " << test_2.end << std::endl;
//     std::cout << "---------------------------------------" << std::endl;

//     // Testing dequeue function
//     std::cout << "Testing dequeue function" << std::endl;
//     std::cout << "Size of original queue: " << " " << test_2.size() << std::endl;
//     test_2.dequeue();
//     test_2.dequeue();
//     std::cout << "Size of modified queue (dequeuing twice): " << " " << test_2.size() << std::endl;
//     std::cout << "---------------------------------------" << std::endl;

//     // Checking front and end
//     std::cout << "Checking front and end (After dequeue)" << std::endl;
//     std::cout << "Queue 1: " << " " << test_1.front << " " << test_1.end << std::endl;
//     std::cout << "Queue 2: " << " " << test_2.front << " " << test_2.end << std::endl;
//     std::cout << "---------------------------------------" << std::endl;

//     // Testing is_empty function
//     std::cout << "Testing is_empty function" << std::endl;
//     std::cout << "Is queue 1 empty? " << " " << test_1.is_empty() << std::endl;
//     Queue <char> test_3;
//     std::cout << "Is queue 3 empty? " << " " << test_3.is_empty() << std::endl;
//     std::cout << "---------------------------------------" << std::endl;

//     // Testing = operator
//     std::cout << "Testing = operator" << std::endl;
//     Queue <char> test_4;
//     test_4 = test_1;
//     std::cout << "Size of old queue: " << " " << test_1.size() << std::endl;
//     std::cout << "Size of new queue: " << " " << test_4.size() << std::endl;
//     std::cout << "---------------------------------------" << std::endl;
    
//     // Testing clear function
//     std::cout << "Testing clear function" << std::endl;
//     std::cout << "Size of queue before function: " << " " << test_4.size() << std::endl;
//     test_4.clear();
//     std::cout << "Size of stack after function: " << " " << test_4.size() << std::endl;
//     std::cout << "---------------------------------------" << std::endl;

//     // Testing the display function
//     std::cout << "Testing the display function" << std::endl;
//     std::cout << "Queue 1: " << std::endl;
//     test_1.display();
//     std::cout << "" << std::endl;
//     std::cout << "Queue 2: " << std::endl;
//     test_2.display();
//     std::cout << "" << std::endl;
//     std::cout << "Queue 3: " << std::endl;
//     test_3.display();
//     std::cout << "" << std::endl;
//     std::cout << "Queue 4: " << std::endl;
//     test_4.display();
//     std::cout << "" << std::endl;

//     std::cout << "---------------------------------------" << std::endl;
//     std::cout << "END OF DRIVER CODE" << std::endl;
//     std::cout << "---------------------------------------" << std::endl;

//     return 0;
// }



// // Testing Fixed_Array.h
// #include "Fixed_Array.h"

// int main(int argc, char const *argv[])
// {
//     // Testing constructor
//     std::cout << "Testing constructor" << std::endl;
//     Fixed_Array <char, 10> test_1;
//     test_1[0] = 'a';
//     test_1[1] = 'b';
//     test_1[2] = 'c';
//     test_1[3] = 'd';
//     test_1[4] = 'e';
//     test_1[5] = 'f';
//     test_1[6] = 'g';
//     test_1[7] = 'h';
//     test_1[8] = 'i';
//     test_1[9] = 'j';
//     std::cout << "Cur size: " << test_1.size() << std::endl;
//     std::cout << "Max size: " << test_1.max_size() << std::endl;
//     std::cout << "Data:" << std::endl;
//     for(int i = 0; i < test_1.size(); i++) {std::cout << test_1[i] << std::endl;}
//     std::cout << "---------------------------------------" << std::endl;

//     // Testing copy constructor (same size)
//     std::cout << "Testing copy constructor (same size)" << std::endl;
//     Fixed_Array <char, 10> test_2(test_1);
//     std::cout << "Cur size (original): " << test_1.size() << std::endl;
//     std::cout << "Max size (original): " << test_1.max_size() << std::endl;
//     std::cout << "Cur size (copied): " << test_2.size() << std::endl;
//     std::cout << "Max size (copied): " << test_2.max_size() << std::endl;
//     std::cout << "Data (copied):" << std::endl;
//     for(int i = 0; i < test_2.size(); i++) {std::cout << test_2[i] << std::endl;}
//     std::cout << "---------------------------------------" << std::endl;

//     // // Testing copy constructor (different size)
//     // std::cout << "Testing copy constructor (different size)" << std::endl;
//     // Fixed_Array <char, 20> test_3(test_1);
//     // std::cout << "Cur size (original): " << test_1.size() << std::endl;
//     // std::cout << "Max size (original): " << test_1.max_size() << std::endl;
//     // std::cout << "Cur size (copied): " << test_3.size() << std::endl;
//     // std::cout << "Max size (copied): " << test_3.max_size() << std::endl;
//     // std::cout << "Data (copied):" << std::endl;
//     // for(int i = 0; i < test_3.size(); i++) {std::cout << test_3[i] << std::endl;}
//     // std::cout << "---------------------------------------" << std::endl;

//     // Testing fill constructor
//     std::cout << "Testing fill constructor" << std::endl;
//     Fixed_Array <char, 5> test_4('z');
//     std::cout << "Cur size: " << test_4.size() << std::endl;
//     std::cout << "Max size: " << test_4.max_size() << std::endl;
//     std::cout << "Data:" << std::endl;
//     for(int i = 0; i < test_4.size(); i++) {std::cout << test_4[i] << std::endl;}
//     std::cout << "---------------------------------------" << std::endl;

//     // Testing = operator (same size)
//     std::cout << "Testing = operator (same size)" << std::endl;
//     Fixed_Array <char, 10> test_5;
//     std::cout << "Data in new array before copying:" << std::endl;
//     for(int i = 0; i < test_5.size(); i++) {std::cout << test_5[i] << std::endl;}
//     test_5 = test_1;
//     std::cout << "Size of old queue: " << " " << test_1.size() << std::endl;
//     std::cout << "Data (original):" << std::endl;
//     for(int i = 0; i < test_1.size(); i++) {std::cout << test_1[i] << std::endl;}
//     std::cout << "Size of new queue: " << " " << test_5.size() << std::endl;
//     std::cout << "Data (copied):" << std::endl;
//     for(int i = 0; i < test_5.size(); i++) {std::cout << test_5[i] << std::endl;}
//     std::cout << "---------------------------------------" << std::endl;

//     // Testing display function
//     std::cout << "Testing display function" << std::endl;
//     std::cout << "Data:" << std::endl;
//     test_1.display();
//     std::cout << "---------------------------------------" << std::endl;

//     // // Testing = operator (different size)
//     // std::cout << "Testing = operator (different size)" << std::endl;
//     // Fixed_Array <char, 5> test_6;
//     // std::cout << "Data in new array before copying:" << std::endl;
//     // for(int i = 0; i < test_6.size(); i++) {std::cout << test_6[i] << std::endl;}
//     // test_6 = test_1;
//     // std::cout << "Size of old queue: " << " " << test_1.size() << std::endl;
//     // std::cout << "Data (original):" << std::endl;
//     // for(int i = 0; i < test_1.size(); i++) {std::cout << test_1[i] << std::endl;}
//     // std::cout << "Size of new queue: " << " " << test_6.size() << std::endl;
//     // std::cout << "Data (copied):" << std::endl;
//     // for(int i = 0; i < test_6.size(); i++) {std::cout << test_6[i] << std::endl;}
//     // std::cout << "---------------------------------------" << std::endl;

//     std::cout << "---------------------------------------" << std::endl;
//     std::cout << "END OF DRIVER CODE" << std::endl;
//     std::cout << "---------------------------------------" << std::endl;

//     return 0;
// }



// Testing all three together
#include "Stack.h"
#include "Queue.h"
#include "Fixed_Array.h"

int main(int argc, char const *argv[])
{
    // Testing constructor
    std::cout << "Testing constructors (Stack)" << std::endl;
    Stack <char> test_1_stack;
    std::cout << "Size of stack before pushing elements: " << " " << test_1_stack.size() << std::endl;
    test_1_stack.push('a');
    test_1_stack.push('b');
    test_1_stack.push('c');
    test_1_stack.push('d');
    test_1_stack.push('e');
    std::cout << "Size of stack after pushing elements: " << " " << test_1_stack.size() << std::endl;
    std::cout << "Data: " << std::endl;
    test_1_stack.display();
    std::cout << "---------------------------------------" << std::endl;

    std::cout << "Testing constructors (Queue)" << std::endl;
    Queue <char> test_1_queue;
    std::cout << "Size of queue before pushing elements: " << " " << test_1_queue.size() << std::endl;
    test_1_queue.enqueue('a');
    test_1_queue.enqueue('b');
    test_1_queue.enqueue('c');
    test_1_queue.enqueue('d');
    test_1_queue.enqueue('e');
    std::cout << "Size of queue after pushing elements: " << " " << test_1_queue.size() << std::endl;
    std::cout << "Data: " << std::endl;
    test_1_queue.display();
    std::cout << "---------------------------------------" << std::endl;

    Fixed_Array <char, 10> test_1_fixed;
    test_1_fixed[0] = 'a';
    test_1_fixed[1] = 'b';
    test_1_fixed[2] = 'c';
    test_1_fixed[3] = 'd';
    test_1_fixed[4] = 'e';
    test_1_fixed[5] = 'f';
    test_1_fixed[6] = 'g';
    test_1_fixed[7] = 'h';
    test_1_fixed[8] = 'i';
    test_1_fixed[9] = 'j';
    std::cout << "Testing Fixed Array" << std::endl;
    std::cout << "Cur size: " << test_1_fixed.size() << std::endl;
    std::cout << "Max size: " << test_1_fixed.max_size() << std::endl;
    std::cout << "Data:" << std::endl;
    for(int i = 0; i < test_1_fixed.size(); i++) {std::cout << test_1_fixed[i] << std::endl;}
    std::cout << "---------------------------------------" << std::endl;

    std::cout << "---------------------------------------" << std::endl;
    std::cout << "END OF DRIVER CODE" << std::endl;
    std::cout << "---------------------------------------" << std::endl;

    return 0;
}
