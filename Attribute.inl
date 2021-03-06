template<typename T>
inline void agm::Attribute<T>::bind(T& attribute){
	boundAttributes.push_back(&attribute);
	attribute = cachedValue;
}

template<typename T>
inline void agm::Attribute<T>::unbind(T& attribute){
	boundAttributes.remove(&attribute);
}

template<typename T>
inline void agm::Attribute<T>::operator =(const T& value){
	cachedValue = value;

	for(T* attribute : boundAttributes){
		if(attribute){
			attribute = cachedValue;
		}
	}
}

template<typename T>
inline void agm::Attribute<T>::operator =(const T&& value){
	cachedValue = value;

	for(T* attribute : boundAttributes){
		if(attribute){
			*attribute = cachedValue;
		}
	}
}

template<typename T>
inline void agm::Attribute<T>::operator ++(){
	++cachedValue;

	for(T* attribute : boundAttributes){
		if(attribute){
			*attribute = cachedValue;
		}
	}
}

template<typename T>
inline void agm::Attribute<T>::operator +=(const T& value){
	cachedValue += value;

	for(T* attribute : boundAttributes){
		if(attribute){
			*attribute = cachedValue;
		}
	}
}

template<typename T>
inline void agm::Attribute<T>::operator +=(const T&& value){
	cachedValue += value;

	for(T* attribute : boundAttributes){
		if(attribute){
			*attribute = cachedValue;
		}
	}
}

template<typename T>
inline void agm::Attribute<T>::operator --(){
	--cachedValue;

	for(T* attribute : boundAttributes){
		if(attribute){
			*attribute = cachedValue;
		}
	}
}

template<typename T>
inline void agm::Attribute<T>::operator -=(const T& value){
	cachedValue -= value;

	for(T* attribute : boundAttributes){
		if(attribute){
			*attribute = cachedValue;
		}
	}
}

template<typename T>
inline void agm::Attribute<T>::operator -=(const T&& value){
	cachedValue -= value;

	for(T* attribute : boundAttributes){
		if(attribute){
			*attribute = cachedValue;
		}
	}
}

template<typename T>
inline agm::Attribute<T>::operator T(){
	return cachedValue;
}