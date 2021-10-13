# CPP00
## some notes
is foundamental to place `std::` before every function that comes from standard header
### class
`class` is a new object that can define an design object, a C struct-like, but improved, that integrate the function that can access to its variable. Infact another interested feature is the possibility to protect some variables and functions.
```
-----------------------------------------
	---	DEFINITION OF THE CLASS	---
-----------------------------------------

class Sample
{
	public:
		//	variables and functions that has to be public
		Sample();	//	the constructor
		~Sample();	//	the deconstructor
	private:
		//	variables and functions that has to be private
}

-----------------------------------------
	--- DEFINITION OF THE FUNCTION ---
-----------------------------------------

Sample::Sample () {}

Sample::~Sample () {}

Sample::functionName ( arguments )
{
	// operations
}

-----------------------------------------
	---	INSTANCE OF THE CLASS	---
-----------------------------------------

int main ( void )
{
	...
	Sample instanceName ( argument if needed for the initialization )
	...
}

-----------------------------------------
			--- CALLING	---
-----------------------------------------

int main ( void )
{
	...
	Sample.functionName( arguments );
	...
}
```

#### initialization list
the inizialization of the class private and public variable in this language is possible with the initialization list. Here is an example:
```
ClassName::ClassName(variables or void) : variablesThatWeWantToInit(valueToAssign) {	}
```

#### this
`this` make possible to access to the class public and private variables when is called inside a function declared inside a class
```
	std::cout << "value: " << this->value << std::endl;
```

### important libraries
- for interact with the I/O, the header is `#include <iostream>`
- `<string>` library is an inteeresting library that let us an interesting new type, the string, decleared as `std::string`.
- another interesting library is `<iomanip>`, that implements some functions for indent out output.

### new types
- the dinamilcal allocate array is replace by `std::vector<type>`, a new type of object that indipendently allocate and reallocate his dimension.
- another new object is `std::pair<type, type>`, a container that can contain two different object.
- another interesting object is `type::iterator`, a pointer to type object taht is use for access to a container.
- important in this language is `const`, that specify that a variable is impossible to write after his initialization.

# Const
This keyword is not only useful for make a variable costant, but also make a member function to modify the values stored inside the class.
```
variableType const variableName; // make a variable costant. for the initialization, see the initialization list

functionType functionName( functionArguments ) const;	// this make impossible to this member function to change the values of the instance of the class.
```
