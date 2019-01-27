<h1>0x04. C - Pointers, arrays and strings</h1>
<p>At the end of this project, you are expected to be able to explain to anyone, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What are pointers and how to use them</li>
<li>What are arrays and how to use them</li>
<li>What are the differences between pointers and arrays</li>
<li>How to use strings and how to manipulate them</li>
<li>Scope of variables</li>
</ul>
<h2>Tasks</h2>
  <h3>
    0. 98 Battery st.
  </h3>
  <p>Write a function that takes a pointer to an <code>int</code> as parameter and updates the value it points to to <code>98</code>.</p>
<ul>
<li>Prototype: <code>void reset_to_98(int *n);</code> </li>
</ul>
        <p>File: <code>0-reset_to_98.c</code></p>
  <h3>
    1. Don&#39;t swap horses in crossing a stream
  </h3>
  <p>Write a function that swaps the values of two integers.</p>
<ul>
<li>Prototype: <code>void swap_int(int *a, int *b);</code></li>
</ul>
        <p>File: <code>1-swap.c</code></p>
  <h3>
    2. This report, by its very length, defends itself against the risk of being read
  </h3>
  <p>Write a function that returns the length of a string.</p>
<ul>
<li>Prototype: <code>int _strlen(char *s);</code></li>
</ul>
<p>FYI: The standard library provides a similar function: <code>strlen</code>. Run <code>man strlen</code> to learn more.</p>
        <p>File: <code>2-strlen.c</code></p>
  <h3>
    3. I do not fear computers. I fear the lack of them
  </h3>
  <p>Write a function that prints a string, followed by a new line, to <code>stdout</code>.</p>
<ul>
<li>Prototype: <code>void _puts(char *str);</code></li>
</ul>
<p>FYI: The standard library provides a similar function: <code>puts</code>. Run <code>man puts</code> to learn more.</p>
        <p>File: <code>3-puts.c</code></p>
  <h3>
    4. I can only go one way. I&#39;ve not got a reverse gear
  </h3>
  <p>Write a function that prints a string, in reverse, followed by a new line.</p>
<ul>
<li>Prototype: <code>void print_rev(char *s);</code></li>
</ul>
        <p>File: <code>4-print_rev.c</code></p>
  <h3>
    5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes
  </h3>
  <p>Write a function that reverses a string.  </p>
<ul>
<li>Prototype: <code>void rev_string(char *s);</code></li>
</ul>
        <p>File: <code>5-rev_string.c</code></p>
  <h3>
    6. Half the lies they tell about me aren&#39;t true
  </h3>
  <p>Write a function that prints one char out of 2 of a string, followed by a new line.</p>
<ul>
<li>Prototype: <code>void puts2(char *str);</code></li>
<li>The function should print only one character out of two, starting with the first one</li>
</ul>
        <p>File: <code>6-puts2.c</code></p>
  <h3>
    7. Winning is only half of it. Having fun is the other half
  </h3>
  <p>Write a function that prints half of a string, followed by a new line.</p>
<ul>
<li>Prototype: <code>void puts_half(char *str);</code></li>
<li>The function should print the second half of the string</li>
<li>If the number of characters is odd, the function should print the last <code>n</code> characters of the string, where <code>n = (length_of_the_string - 1) / 2</code></li>
</ul>
        <p>File: <code>7-puts_half.c</code></p>
  <h3>
    8. Arrays are not pointers
  </h3>
  <p>Write a function that prints <code>n</code> elements of an array of integers, followed by a new line.</p>
<ul>
<li>Prototype: <code>void print_array(int *a, int n);</code></li>
<li>where <code>n</code> is the number of elements of the array to be printed</li>
<li>Numbers must be separated by comma, followed by a space</li>
<li>The numbers should be displayed in the same order as they are stored in the array</li>
<li>You are allowed to use <code>printf</code></li>
</ul>
        <p>File: <code> 8-print_array.c</code></p>
  <h3>
    9. strcpy
  </h3>
  <ul>
<li>Prototype: <code>char *_strcpy(char *dest, char *src);</code> </li>
</ul>
<p>Write a function that copies the string pointed to by <code>src</code>, including the terminating null byte (<code>\0</code>), to the buffer pointed to by <code>dest</code>.</p>
<ul>
<li>Return value: the pointer to <code>dest</code></li>
</ul>
<p>FYI: The standard library provides a similar function: <code>strcpy</code>. Run <code>man strcpy</code> to learn more.</p>
        <p>File: <code>9-strcpy.c</code></p>
  <h3>
    10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers
  </h3>
  <p>Write a function that convert a string to an integer.</p>
<ul>
<li>Prototype: <code>int _atoi(char *s);</code></li>
<li>The number in the string can be preceded by an infinite number of characters</li>
<li>You need to take into account all the <code>-</code> and <code>+</code> signs before the number</li>
<li>If there are no numbers in the string, the function must return <code>0</code></li>
<li>You are not allowed to use <code>long</code></li>
<li>You are not allowed to declare new variables of &ldquo;type&rdquo; array</li>
<li>You are not allowed to hard-code special values</li>
<li>Your code needs to work on both ubuntu 14.04 LTS and 16.04 LTS</li>
<li>We will use the <code>-fsanitize=signed-integer-overflow</code> gcc flag to compile your code. If this flag is not available in you version of gcc, you can install the last version on your VM</li>
<li>We will use gcc version 5 or above to compile</li>
</ul>
<p>FYI: The standard library provides a similar function: <code>atoi</code>. Run <code>man atoi</code> to learn more.</p>
        <p>File: <code>100-atoi.c</code></p>
  <h3>
    11. Don&#39;t hate the hacker, hate the code
  </h3>
  <p>Create a program that generates random valid passwords for the program 101-crackme.</p>
<ul>
<li>You are allowed to use the standard library</li>
<li>You don&rsquo;t have to pass the <code>betty-style</code> tests (you still need to pass the <code>betty-doc</code> tests)</li>
<li>man <code>srand</code>, <code>rand</code>, <code>time</code></li>
<li><code>gdb</code> and <code>objdump</code> can help</li>
</ul>
        <p>File: <code>101-keygen.c</code></p>
