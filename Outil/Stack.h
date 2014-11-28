//=======================================================================
// Basic C++: a simple class template Stack
//      Specification and implementation
//-----------------------------------------------------------------------
// Jean-Paul Rigault --- Copyright 2003
// $Id: Stack.h,v 1.3 2005/02/20 14:50:29 jpr Exp $
//=======================================================================

#ifndef _STACK_H_
#define _STACK_H_

#include "List.h"

template <typename ELEM>
class Stack;
template <typename ELEM>
ostream& operator<<(ostream&, const Stack<ELEM>&);
template <typename ELEM>

class Stack : private List<ELEM>{
public:
    Stack(){List<ELEM>();}
    void push(ELEM);
    ELEM pop();
    friend ostream& operator<< <>(ostream&, const Stack&);
    using List<ELEM>::is_empty;
};

template <typename ELEM>
void Stack<ELEM>::push(ELEM v){
    List<ELEM>::prepend(v);
}

template <typename ELEM>
ELEM Stack<ELEM>::pop(){
    return List<ELEM>::get_first();
}
template <typename ELEM>
ostream& operator<<(ostream& os, const Stack<ELEM>& l)
{
    return os<<static_cast<List<ELEM>>(l);
}

#endif

