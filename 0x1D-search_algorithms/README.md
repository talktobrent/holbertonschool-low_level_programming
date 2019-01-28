<h1>0x1D. C - Search Algorithms</h1>
<p>At the end of this project, you are expected to be able to explain to anyone, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What is a search algorithm</li>
<li>What is a linear search</li>
<li>What is a binary search</li>
<li>What is the best search algorithm to use depending on your needs</li>
</ul>
<h2>Tasks</h2>
  <h3>
    0. Linear search
  </h3>
  <p>Write a function that searches for a value in an array of integers using the Linear search algorithm</p>
<ul>
<li>Prototype : <code>int linear_search(int *array, size_t size, int value);</code></li>
<li>Where <code>array</code> is a pointer to the first element of the array to search in</li>
<li><code>size</code> is the number of elements in <code>array</code></li>
<li>And <code>value</code> is the value to search for</li>
<li>Your function must return the first index where <code>value</code> is located</li>
<li>If <code>value</code> is not present in <code>array</code> or if <code>array</code> is <code>NULL</code>, your function must return <code>-1</code></li>
<li>Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)</li>
</ul>
        <p>File: <code>0-linear.c</code></p>
  <h3>
    1. Binary search
  </h3>
  <p>Write a function that searches for a value in a sorted array of integers using the Binary search algorithm</p>
<ul>
<li>Prototype : <code>int binary_search(int *array, size_t size, int value);</code></li>
<li>Where <code>array</code> is a pointer to the first element of the array to search in</li>
<li><code>size</code> is the number of elements in <code>array</code></li>
<li>And <code>value</code> is the value to search for</li>
<li>Your function must return the index where <code>value</code> is located</li>
<li>You can assume that <code>array</code> will be sorted in ascending order</li>
<li>You can assume that <code>value</code> won&rsquo;t appear more than once in <code>array</code></li>
<li>If <code>value</code> is not present in <code>array</code> or if <code>array</code> is <code>NULL</code>, your function must return <code>-1</code></li>
<li>You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) (See example)</li>
</ul>
        <p>File: <code>1-binary.c</code></p>
  <h3>
    2. Big O #0
  </h3>
  <p>What is the <code>time complexity</code> (worst case) of a linear search in an array of size <code>n</code>?</p>
        <p>File: <code>2-O</code></p>
  <h3>
    3. Big O #1
  </h3>
  <p>What is the <code>space complexity</code> (worst case) of an iterative linear search algorithm in an array of size <code>n</code>?</p>
        <p>File: <code>3-O</code></p>
  <h3>
    4. Big O #2
  </h3>
  <p>What is the <code>time complexity</code> (worst case) of a binary search in an array of size <code>n</code>?</p>
        <p>File: <code>4-O</code></p>
  <h3>
    5. Big O #3
  </h3>
  <p>What is the <code>space complexity</code> (worst case) of a binary search in an array of size <code>n</code>?</p>
        <p>File: <code>5-O</code></p>
  <h3>
    6. Big O #4
  </h3>
  <p>What is the space complexity of this function / algorithm?</p>
        <p>File: <code>6-O</code></p>
  <h3>
    7. Jump search
  </h3>
  <p>Write a function that searches for a value in a sorted array of integers using the Jump search algorithm</p>
<ul>
<li>Prototype : <code>int jump_search(int *array, size_t size, int value);</code></li>
<li>Where <code>array</code> is a pointer to the first element of the array to search in</li>
<li><code>size</code> is the number of elements in <code>array</code></li>
<li>And <code>value</code> is the value to search for</li>
<li>Your function must return the first index where <code>value</code> is located</li>
<li>You can assume that <code>array</code> will be sorted in ascending order</li>
<li>If <code>value</code> is not present in <code>array</code> or if <code>array</code> is <code>NULL</code>, your function must return <code>-1</code></li>
<li>You have to use the square root of the size of the array as the jump step. </li>
<li>You can use the <code>sqrt()</code> function included in <code>&lt;math.h&gt;</code> (don&rsquo;t forget to compile with -lm)</li>
<li>Every time you compare a value in the array to the value you are searching for, you have to print this value (see example)</li>
</ul>
        <p>File: <code>100-jump.c</code></p>
  <h3>
    8. Big O #5
  </h3>
  <p>What is the <code>time complexity</code> (average case) of a jump search in an array of size <code>n</code>, using <code>step = sqrt(n)</code>?</p>
        <p>File: <code>101-O</code></p>
  <h3>
    9. Interpolation search
  </h3>
  <p>Write a function that searches for a value in a sorted array of integers using the Interpolation search algorithm</p>
<ul>
<li>Prototype : <code>int interpolation_search(int *array, size_t size, int value);</code></li>
<li>Where <code>array</code> is a pointer to the first element of the array to search in</li>
<li><code>size</code> is the number of elements in <code>array</code></li>
<li>And <code>value</code> is the value to search for</li>
<li>Your function must return the first index where <code>value</code> is located</li>
<li>You can assume that <code>array</code> will be sorted in ascending order</li>
<li>If <code>value</code> is not present in <code>array</code> or if <code>array</code> is <code>NULL</code>, your function must return <code>-1</code></li>
<li>To determine the probe position, you can use : <code>size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]))</code></li>
<li>Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)</li>
</ul>
        <p>File: <code>102-interpolation.c</code></p>
  <h3>
    10. Exponential search
  </h3>
  <p>Write a function that searches for a value in a sorted array of integers using the Exponential search algorithm</p>
<ul>
<li>Prototype : <code>int exponential_search(int *array, size_t size, int value);</code></li>
<li>Where <code>array</code> is a pointer to the first element of the array to search in</li>
<li><code>size</code> is the number of elements in <code>array</code></li>
<li>And <code>value</code> is the value to search for</li>
<li>Your function must return the first index where <code>value</code> is located</li>
<li>You can assume that <code>array</code> will be sorted in ascending order</li>
<li>If <code>value</code> is not present in <code>array</code> or if <code>array</code> is <code>NULL</code>, your function must return <code>-1</code></li>
<li>You have to use powers of 2 as exponential ranges to search in your array</li>
<li>Every time you compare a value in the array to the value you are searching for, you have to print this value (See example)</li>
<li>Once you&rsquo;ve found the good range, you need to use a binary search:
<ul>
<li>Every time you split the array, you have to print the new array (or subarray) you&rsquo;re searching in (See example)</li>
</ul></li>
</ul>
        <p>File: <code>103-exponential.c</code></p>
  <h3>
    11. Advanced binary search
  </h3>
  <p>You may have noticed that the basic binary search does not necessarily return the index of the <em>first</em> value in the array (if this value appears more than once in the array).
In this exercise, you&rsquo;ll have to solve this problem.</p>
<p>Write a function that searches for a value in a sorted array of integers.</p>
<ul>
<li>Prototype : <code>int advanced_binary(int *array, size_t size, int value);</code></li>
<li>Where <code>array</code> is a pointer to the first element of the array to search in</li>
<li><code>size</code> is the number of elements in <code>array</code></li>
<li>And <code>value</code> is the value to search for</li>
<li>Your function must return the index where <code>value</code> is located</li>
<li>You can assume that <code>array</code> will be sorted in ascending order</li>
<li>If <code>value</code> is not present in <code>array</code> or if <code>array</code> is <code>NULL</code>, your function must return <code>-1</code></li>
<li>Every time you split the array, you have to print the new array (or subarray) you&rsquo;re searching in (See example)</li>
<li>You have to use recursion. You may only use one loop (<code>while</code>, <code>for</code>, <code>do while</code>, etc.) in order to print the array</li>
</ul>
        <p>File: <code>104-advanced_binary.c</code></p>
  <h3>
    12. Jump search in a singly linked list
  </h3>
  <p>You might think that linear search is not as effective as any other algorithm, right? Well, we should see what happens with a singly linked list.</p>
<p>Please define the following data structure in your <code>search_algos.h</code> header file:</p>
<p>Write a function that searches for a value in a sorted list of integers using the Jump search algorithm.</p>
<ul>
<li>Prototype : <code>listint_t *jump_list(listint_t *list, size_t size, int value);</code></li>
<li>Where <code>list</code> is a pointer to the head of the list to search in</li>
<li><code>size</code> is the number of nodes in <code>list</code></li>
<li>And <code>value</code> is the value to search for</li>
<li>Your function must return a pointer to the first node where <code>value</code> is located</li>
<li>You can assume that <code>list</code> will be sorted in ascending order</li>
<li>If <code>value</code> is not present in <code>head</code> or if <code>head</code> is <code>NULL</code>, your function must return <code>NULL</code></li>
<li>You have to use the square root of the size of the list as the jump step.</li>
<li>You can use the <code>sqrt()</code> function included in <code>&lt;math.h&gt;</code> (don&rsquo;t forget to compile with -lm)</li>
<li>Every time you compare a value in the list to the value you are searching, you have to print this value (see example)</li>
</ul>
<p>NOTE: You can find here the functions used in the example. You don&rsquo;t need to push them, we will compile your file with our own implementation during the correction.</p>
        <p>File: <code>105-jump_list.c</code></p>
  <h3>
    13. Linear search in a skip list
  </h3>
  <p>As you see now, looking for a specific value in a singly linked list always leads to browse every element of the list.
A common way to optimize the time complexity of a search in a singly linked list is to modify the list itself by adding an &ldquo;express lane&rdquo; to browse it.
A linked list with an express lane is called a skip list.
This change does not come without consequences. Indeed, the space complexity of a search in this kind of list will grow as <code>sizeof(skiplist_t) &gt; sizeof(listint_t)</code> (see example below).</p>
<p>Please define the following data structure in your <code>search_algos.h</code> header file:</p>
<p>Write a function that searches for a value in a sorted skip list of integers.</p>
<ul>
<li>Prototype : <code>skiplist_t *linear_skip(skiplist_t *list, int value);</code></li>
<li>Where <code>list</code> is a pointer to the head of the skip list to search in</li>
<li>A node of the express lane is placed every index which is a multiple of the square root of the size of the list (see example below)</li>
<li>And <code>value</code> is the value to search for</li>
<li>You can assume that <code>list</code> will be sorted in ascending order</li>
<li>Your function must return a pointer on the first node where <code>value</code> is located</li>
<li>If <code>value</code> is not present in <code>list</code> or if <code>head</code> is <code>NULL</code>, your function must return <code>NULL</code></li>
<li>Every time you compare a value in the list to the value you are searching, you have to print this value (see example below)</li>
</ul>
<p>NOTE: You can find here the functions used in the example. You don&rsquo;t need to push them, we will compile your file with our own implementation during the correction.</p>
        <p>File: <code>106-linear_skip.c</code></p>
  <h3>
    14. Big O #6
  </h3>
  <p>What is the <code>time complexity</code> (average case) of a jump search in a singly linked list of size <code>n</code>, using <code>step = sqrt(n)</code>?</p>
        <p>File: <code>107-O</code></p>
  <h3>
    15. Big O #7
  </h3>
  <p>What is the <code>time complexity</code> (average case) of a jump search in a skip list of size <code>n</code>, with an express lane using <code>step = sqrt(n)</code>?</p>
        <p>File: <code>108-O</code></p>
