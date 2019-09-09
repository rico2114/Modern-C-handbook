<h1> Introduction </h1>

Before delving into too many detail about smart pointers I consider it's pertinent to clarify one concept:

<h3> Value semantics vs Reference semantics </h3>

This concept is applied to assignments. I.e., left = right.
Value semantics reffer to **copying the value** of the right element into the left. In the other hand, reference semantics reffers to **copying the pointer** of the right element into the left. Value semantics not only applies to assignments, they are also applied to:
<ul>
	<li> Parameters </li>
</ul>		
By default C++ uses value semantics but Java and C# use reference semantics.
An example of the previous can be seen here:

<h4>This example ilustrates copy assignment</h4>

```C++
void CopyExample() {
	int array[5] = {0, 1, 2, 3, 4};
	int copy[5] = array;
	copy[3] = 99;

	// This will have the value of 3 not 99 because
	// C++ assignments are based on Value semantics.
	std::cout << array[3]; 
	
	// This will have the value of 99.
	std::cout << copy[3]; 
}
```
<h4>This example ilustrates a parameter copy</h4>


```C++
// Notice that a and b values are swapped here.
void Swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void ReturnExample() {
	int a = 5;
	int b = 10;
	// 'a' and 'b' will not be modified because 'a' is copied
	// into the parameter 'a'. The same applies to 'b'
	Swap(a, b);

	// This will print 5
	std::cout << a;
	// This will print 10
	std::cout << b;
}
```

<h1> Smart pointers </h1>


