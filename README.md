# Attribute-Binding
This is a C++ reference counted smart pointer solution.

Version 1.0.0

#

1. [Attribute](#Att)

## <a name="Att"></a> Attribute
An ```Attribute``` is a way to bind multiple variables to a single value

### Usage
To use the ```Attribute``` you just use it as you would normaly do with a variable of the same type that ```Attribute``` is templated to
```C++
Attribute<int> myAttribute;
myAttribute = 5;

int x = myAttribute;
```

You can call ```Attribute::bind``` and ```Attribute::unbind``` to bind and unbind variables respectively
```C++
Attribute<int> myAttribute;
myAttribute = 13;

int x = 0;

myAttribute.bind(x); //x has now also been set to 13

myAttribute = 14; //all bound variables are now 14

myAttribute.unbind(x); //x removed

myAttribute = 24; //x is still 14
```