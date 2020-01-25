For part 2 of the assignment, we have decided to design the basic API for classes Object, String, and Array.

Class Object is parent of String and Array. The constructor for Object initializes the hash code as 0. Object methods are able to be overridden in their subclasses and are therefore declared as virtual. The destructor of the parent class is also declared as virtual. 

Basic API included in the Object class are a hash_me() function, hash() function and equals(Object* other) function.
The hash_me() function ensures that the hash code returns as type size_t, an alias for unsigned long. The <stdlib.h> library is included in the file to allow the type size_t to be used. 
The hash() function returns the hash code of that object 
The equals function takes in an Object* other and compares if this object is equal to the other object

Class String is a subclass of class Object. The class includes variables char* val, which is a character array, and size_t size which will represent the length of the String. The default constructor initializes the size as 0 and val as a nullptr. It also contains another constructor which takes in a character array char* c and initializes the variable length to the length of that character array by calling the strlen function from the <string.h> library. The variable val is allocated on heap by declaring "new" to allow it to persist. The heap-allocated array is freed by calling ‘delete[]' in the destructor for String.
The String class includes a compare function which compares the String with another String and will return a int value denoting whether the String is equal to each other by comparing the characters of both Strings. 
The concat takes in a String and concatenates that String to its ends. 
The hash function returns the hash code for the String. 
The equals function takes in Object* other and determines if this String is equal to other. 
The function length returns the varaible size of the String class.

Class Array is a subclass of class Object. The class includes variables size_t arraySize which represents the size of the array and Object** elements which represents an array of Objects. The arraySize is initialized to 0 and elements as nullptr. 
The function push_back adds an Object* e to the end of the array. 
The function add adds Object* e to position i. 
The function concat takes in an Array* c and adds the elements in Array* c to the end of its array. 
The function add_all takes in an Array* c and size_t i and inserts the elements of Array* c at position i of its array. 
The function clear clears all the elements in the array.  
The function equals takes in an Object* o and compares whether the Object* o is equal to this Array
The function get takes in a size_t index and returns the Object* element at that index
The function hash returns the hash code of the array
The function index_of takes in an Object* o and returns the index of the first occurrence of Object* o
The function remove takes in a size_t i and returns the Object* that is removed at index i
The function set takes in size_t i and Object* e and assigns the element at index i to the given Object* e
The function length returns the arraySize of the Array