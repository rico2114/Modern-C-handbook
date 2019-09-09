<h1> Introduction </h1>

Prior diving into too much detail about smart pointers I consider it's pertinent to clarify one concept:

<h3> Value semantics vs Reference semantics </h3>

This concept is applied to assignments. I.e., left = right.
Value semantics reffer to *copying* the value of the right element into the left. In the other hand, reference semantics reffers to *copying* the pointer of the right element into the left.
By default C++ uses value semantics but Java and C# use reference semantics.
An example of the previous can be seen here:

'''
int main() {
	int array[5] = {0, 1, 2, 3, 4};
	int array_2[5] = array;
	array_2[3] = 99;

	int value = array[3]; // This will have the value of 3 not 99 because C++ is *value semantics*

	return 0;
}

<h1> Smart pointers </h1>

