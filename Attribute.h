#include <list>

/////////ATTRIBUTE
template <typename T> class Attribute{
	
	//VARIABLES
private:
	list<T*> boundAttributes;

	//FUNCTIONS
public:
	void bind(T* attribute);
	void unBind(T* attribute)

	void operator=(T value);
}

/////////INLINE INCLUDE
#include "Attribute.inl"