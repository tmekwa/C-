
#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <stdexcept>
#include <iostream>
#include <string>

template<class T>
class Array {
public:
	Array(){
		this->arr = nullptr;
		this->_size = 0;
	}

	Array(unsigned int n){
		this->arr = new T[n];
		this->_size = n;
	}

	Array(T const & src){
		*this = src;
	}

	~Array() {
		if (this->_size > 0) {
			for(unsigned int i = 0; i < this->_size; i++) {
				if (arr[i] != NULL) {
					delete this->arr[i];
				}
			}
			delete [] arr;
		}
	}

	Array<T> &operator=(const Array & src) {
		if (this->_size > 0) {
			for(unsigned int i = 0; i < this->_size; i++) {
				if (this->arr[i] != NULL) {
					delete this->arr[i];
				}
			}
			delete [] arr;
		}
		this->arr = new T * [src.size()];
		for (unsigned int i = 0; i < this->_size; i++) {
			this->arr[i] = new T;
			this->arr[i] = src.arr[i];
		}
		this->_size = src.size();
		return *this;
	}

	T &operator[](int x) {
		if (static_cast<unsigned int>(x) <= this->_size)
			return *arr[x];
		throw std::out_of_range("Array out of bounds");
	}

	unsigned int	size() const {return (this->_size);}
	//std::ostream & operator<<( std::ostream & o, T const &src);

	T 				**arr;

private:
	unsigned int	_size;
};

#endif
