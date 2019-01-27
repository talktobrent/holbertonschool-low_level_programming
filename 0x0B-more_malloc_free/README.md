<h1>0x0B. C - More malloc, free</h1>
<p>At the end of this project, you are expected to be able to explain to anyone, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>How to use the <code>exit</code> function</li>
<li>What are the functions <code>calloc</code> and <code>realloc</code> from the standard library and how to use them</li>
</ul>
<h2>Tasks</h2>
  <h3>
    0. Trust no one
  </h3>
  <p>Write a function that allocates memory using <code>malloc</code>.</p>
<ul>
<li>Prototype: <code>void *malloc_checked(unsigned int b);</code></li>
<li>Returns a pointer to the allocated memory</li>
<li>if <code>malloc</code> fails, the <code>malloc_checked</code> function should cause normal process termination with a status value of <code>98</code></li>
</ul>
        <p>File: <code>0-malloc_checked.c</code></p>
  <h3>
    1. string_nconcat
  </h3>
  <p>Write a function that concatenates two strings.</p>
<ul>
<li>Prototype: <code>char *string_nconcat(char *s1, char *s2, unsigned int n);</code></li>
<li>The returned pointer shall point to a newly allocated space in memory, which contains <code>s1</code>, followed by the first <code>n</code> bytes of <code>s2</code>, and null terminated</li>
<li>If the function fails, it should return <code>NULL</code></li>
<li>If <code>n</code> is greater or equal to the length of <code>s2</code> then use the entire string <code>s2</code></li>
<li>if <code>NULL</code> is passed, treat it as an empty string</li>
</ul>
        <p>File: <code>1-string_nconcat.c</code></p>
  <h3>
    2. _calloc
  </h3>
  <p>Write a function that allocates memory for an array, using <code>malloc</code>.</p>
<ul>
<li>Prototype: <code>void *_calloc(unsigned int nmemb, unsigned int size);</code></li>
<li>The <code>_calloc</code> function allocates memory for an array of <code>nmemb</code> elements of <code>size</code> bytes each and returns a pointer to the allocated memory.</li>
<li>The memory is set to zero</li>
<li>If <code>nmemb</code> or <code>size</code> is <code>0</code>, then <code>_calloc</code> returns <code>NULL</code></li>
<li>If <code>malloc</code> fails, then <code>_calloc</code> returns <code>NULL</code></li>
</ul>
<p>FYI: The standard library provides a different function: <code>calloc</code>. Run <code>man calloc</code> to learn more.</p>
        <p>File: <code>2-calloc.c</code></p>
  <h3>
    3. array_range
  </h3>
  <p>Write a function that creates an array of integers.</p>
<ul>
<li>Prototype: <code>int *array_range(int min, int max);</code></li>
<li>The array created should contain all the values from <code>min</code> (included) to <code>max</code> (included), ordered from <code>min</code> to <code>max</code></li>
<li>Return: the pointer to the newly created array</li>
<li>If <code>min</code> &gt; <code>max</code>, return <code>NULL</code></li>
<li>If <code>malloc</code> fails, return <code>NULL</code></li>
</ul>
        <p>File: <code>3-array_range.c</code></p>
  <h3>
    4. _realloc
  </h3>
  <p>Write a function that reallocates a memory block using <code>malloc</code> and <code>free</code></p>
<ul>
<li>Prototype: <code>void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);</code></li>
<li>where <code>ptr</code> is a pointer to the memory previously allocated with a call to <code>malloc</code>: <code>malloc(old_size)</code></li>
<li><code>old_size</code> is the size, in bytes, of the allocated space for <code>ptr</code></li>
<li>and <code>new_size</code> is the new size, in bytes of the new memory block</li>
<li>The contents will be copied to the newly allocated space, in the range from the start of <code>ptr</code> up to the minimum of the old and new sizes</li>
<li>If <code>new_size</code> &gt; <code>old_size</code>, the &ldquo;added&rdquo; memory should not be initialized</li>
<li>If <code>new_size</code> == <code>old_size</code> do not do anything and return <code>ptr</code></li>
<li>If <code>ptr</code> is <code>NULL</code>, then the call is equivalent to <code>malloc(new_size)</code>, for all values of <code>old_size</code> and <code>new_size</code></li>
<li>If <code>new_size</code> is equal to zero, and <code>ptr</code> is not <code>NULL</code>, then the call is equivalent to <code>free(ptr)</code>. Return <code>NULL</code></li>
<li>Don&rsquo;t forget to free <code>ptr</code> when it makes sense</li>
</ul>
<p>FYI: The standard library provides a different function: <code>realloc</code>. Run <code>man realloc</code> to learn more.</p>
        <p>File: <code>100-realloc.c</code></p>
  <h3>
    5. We must accept finite disappointment, but never lose infinite hope
  </h3>
  <p>Write a program that multiplies two positive numbers.</p>
<ul>
<li>Usage: <code>mul num1 num2</code></li>
<li><code>num1</code> and <code>num2</code> will be passed in base 10</li>
<li>Print the result, followed by a new line</li>
<li>If the number of arguments is incorrect, print <code>Error</code>, followed by a new line, and exit with a status of <code>98</code></li>
<li><code>num1</code> and <code>num2</code> should only be composed of digits. If not, print <code>Error</code>, followed by a new line, and exit with a status of <code>98</code></li>
<li>You are allowed to use more than 5 functions in your file</li>
</ul>
<p>You can use <code>bc</code> (<code>man bc</code>) to check your results.</p>
        <p>File: <code>101-mul.c</code></p>
