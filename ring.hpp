#ifndef __MYUN2__RING_HPP__
#define __MYUN2__RING_HPP__

#include <list>

template <typename T>
class ring_list : public ::std::list<T> {};

template <typename T>
class ring
{
private:
	ring_list<T> lst;
	typedef typename ring_list<T>::iterator _lstIt;
	_lstIt _current;
public:
	ring() { _current = lst.end(); }
	void append(const T& item) { lst.push_back(item); }

	T& current() {
		if ( _current == lst.end() )
			_current = lst.begin();
		return *_current;
	}
	const T& current() const { return current(); }
	const T& next() { _current++; return current(); }

	// Increment Operator
	const T& operator++ () { return next(); }
	const T& operator++ (int) { return next(); }

	//	Cast Operator
	operator const T&() const { return current(); }
	operator T&() { return current(); }
};

#endif//__MYUN2__RING_HPP__
