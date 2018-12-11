#include <list>

/////////ATTRIBUTE
template <typename T> 
class Attribute{
	
	//VARIABLES
private:
	std::list<T*> boundAttributes;

	T cachedValue;

	//FUNCTIONS
public:
	Attribute() = default;
	~Attribute() = default;

	void bind(T& attribute);
	void unbind(T& attribute);

	void operator =(const T& value);
	void operator =(const T&& value);

	void operator ++();

	void operator +=(const T& value);
	void operator +=(const T&& value);

	void operator --();

	void operator -=(const T& value);
	void operator -=(const T&& value);

	operator T();
};

/////////INLINE INCLUDE
#include "Attribute.inl"