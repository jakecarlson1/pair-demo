/**
 * Templated Pair
 * Created by: Jake Carlson
 * Date: 2017-02-08
 *
 * Simple implementation of a templated pair class
 */
#ifndef PAIR_H
#define PAIR_H

// includes
#include <iostream>

// template types identifiers
template <class T, class U>
class Pair
{
// public member function prototypes
public:
    Pair();
    Pair(T, U);
    ~Pair();
    void make_pair(T, U);
    void set_first(T);
    void set_second(U);
    T& get_first();
    U& get_second();

private:
    // data payload
    T first;
    U second;
};

// default constructor
template <class T, class U>
Pair<T, U>::Pair() {}

// full constructor - initializes first and second on construction
template <class T, class U>
Pair<T, U>::Pair(T to_be_first, U to_be_second):
first(to_be_first), second(to_be_second) {}

// default destructor
template <class T, class U>
Pair<T, U>::~Pair() {}

// make_pair - updates first and second to new values
template <class T, class U>
void Pair<T, U>::make_pair(T to_be_first, U to_be_second)
{
    this->first = to_be_first;
    this->second = to_be_second;
}

// set_first - updates first to a new value
template <class T, class U>
void Pair<T, U>::set_first(T new_first)
{
    this->first = new_first;
}

// set_second - updates second to a new value
template <class T, class U>
void Pair<T, U>::set_second(U new_second)
{
    this->second = new_second;
}

// get_first - returns reference to first
template <class T, class U>
T& Pair<T, U>::get_first()
{
    return this->first;
}

// get_second - returns reference to second
template <class T, class U>
U& Pair<T, U>::get_second()
{
    return this->second;
}

#endif // PAIR_H
