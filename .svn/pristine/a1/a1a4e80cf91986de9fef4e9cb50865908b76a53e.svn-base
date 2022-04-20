#ifndef CS2_STACK_HPP_
#define CS2_STACK_HPP_
////////////////////////////////////////////////////////////////////////////
//
// File: stack.hpp
//
// Programmer:
// Updated:    10/2019
//
//
// Do not change the names of the classes or methods.  Otherwise, instructor
//  tests will not work.
//

#include <new>
#include <cassert>
////////////////////////////////////////////////////////////////////////////
//           
template<typename T> 
class Node {
public:
  Node() : next(0) {};
  Node(const T& item) : data(item), next (0) {};
 
  T data;
  Node<T> *next;
};


////////////////////////////////////////////////////////////////////////////
// CLASS INV:
//
//    
template <typename T>
class stack {
public:
  //default constuctor
  stack     () : tos(0) {}; 

  stack     (const stack<T>&); //copy ctor
  ~stack    (); //destructor
  void      swap      (stack<T>&); //swap
  stack<T>& operator= (stack<T> rhs){ swap(rhs); return *this; }; //assignment

  //returns true if tos == 0
  bool      empty     () const { return tos == 0; };
  bool      full      () const;//returns true if there is no memory left

  T         top       () const { return tos -> data; }; //returns the tos
  T         pop       ();//pops off stack
  void      push      (const T&);//push onto stack

private:
	Node<T>   *tos;
};

//destructor implementation
template <typename T>
stack<T>::~stack(){
  Node <T> *tmp;
  while (tos != 0){
    tmp = tos;
    tos = tos -> next;
    delete tmp;
  }
}

//copy constructor implementation
template <typename T>
stack<T>::stack(const stack <T>& actual) : stack() {
  Node<T> *tmp = actual.tos, *bottom;

  while(tmp != 0){
    if(tos == 0){
      tos = new Node <T> (tmp -> data);
      bottom = tos;
    } else {
      bottom -> next = new Node<T>(tmp -> data);
      bottom = bottom -> next;
    }
    
    tmp = tmp -> next;
  }  
}

//swap assignment function
template <typename T>
void stack<T>::swap(stack<T> &rhs) {
  Node<T> *tmp = tos;
  tos = rhs.tos;
  rhs.tos = tmp;
}

//isFull() function
//returns true if there is no more memory
template <typename T>
bool stack<T>::full() const {
  Node<T> *ptr = new(std::nothrow) Node<T> (); //ptr 0 if no memory
  if(ptr == 0) return true;
  delete ptr;
  return false;
}

//pop function
template <typename T>
T stack<T>::pop() {
  assert(!empty());
  Node<T> *tmp = tos;     //pointer that points to top of stack
  T result = tos -> data; //
  tos = tos -> next;
  delete tmp;
  return result;
}

template <typename T>
void stack<T>::push(const T& item) {
  assert(!full());
  Node<T> *tmp = new Node<T>(item);
  tmp -> next = tos;
  tos = tmp;
}

#endif

