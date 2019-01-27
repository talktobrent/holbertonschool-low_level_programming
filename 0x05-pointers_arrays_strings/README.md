<h1>0x05. C - More pointers, arrays and strings</h1>
<h2>Tasks</h2>
  <h3>
    0. strcat
  </h3>
  <p>Write a function that concatenates two strings.</p>
<ul>
<li>Prototype: <code>char *_strcat(char *dest, char *src);</code></li>
<li>This function appends the <code>src</code> string to the <code>dest</code> string, overwriting the terminating null byte (<code>\0</code>) at the end of <code>dest</code>, and then adds a terminating null byte</li>
<li>Returns a pointer to the resulting string <code>dest</code></li>
</ul>
<p>FYI: The standard library provides a similar function: <code>strcat</code>. Run <code>man strcat</code> to learn more.</p>
        <p>File: <code>0-strcat.c</code></p>
  <h3>
    1. strncat
  </h3>
  <p>Write a function that concatenates two strings.</p>
<ul>
<li>Prototype: <code>char *_strncat(char *dest, char *src, int n);</code> </li>
<li>The <code>_strncat</code> function is similar to the <code>_strcat</code> function, except that
<ul>
<li>it will use at most <code>n</code> bytes from <code>src</code>; and</li>
<li><code>src</code> does not need to be null-terminated if it contains <code>n</code> or more bytes</li>
</ul></li>
<li>Return a pointer to the resulting string <code>dest</code></li>
</ul>
<p>FYI: The standard library provides a similar function: <code>strncat</code>. Run <code>man strncat</code> to learn more.</p>
        <p>File: <code>1-strncat.c</code></p>
  <h3>
    2. strncpy
  </h3>
  <p>Write a function that copies a string.</p>
<ul>
<li>Prototype: <code>char *_strncpy(char *dest, char *src, int n);</code></li>
<li>Your function should work exactly like <code>strncpy</code></li>
</ul>
<p>FYI: The standard library provides a similar function: <code>strncpy</code>. Run <code>man strncpy</code> to learn more.</p>
        <p>File: <code>2-strncpy.c</code></p>
  <h3>
    3. strcmp
  </h3>
  <p>Write a function that compares two strings.</p>
<ul>
<li>Prototype: <code>int _strcmp(char *s1, char *s2);</code></li>
<li>Your function should work exactly like <code>strcmp</code></li>
</ul>
<p>FYI: The standard library provides a similar function: <code>strcmp</code>. Run <code>man strcmp</code> to learn more.</p>
        <p>File: <code>3-strcmp.c</code></p>
  <h3>
    4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy
  </h3>
  <p>Write a function that reverses the content of an array of integers.</p>
<ul>
<li>Prototype: <code>void reverse_array(int *a, int n);</code></li>
<li>Where <code>n</code> is the number of elements of the array</li>
</ul>
        <p>File: <code>4-rev_array.c</code></p>
  <h3>
    5. Always look up
  </h3>
  <p>Write a function that changes all lowercase letters of a string to uppercase.</p>
<ul>
<li>Prototype: <code>char *string_toupper(char *);</code></li>
</ul>
        <p>File: <code>5-string_toupper.c</code></p>
  <h3>
    6. Expect the best. Prepare for the worst. Capitalize on what comes
  </h3>
  <p>Write a function that capitalizes all words of a string.</p>
<ul>
<li>Prototype: <code>char *cap_string(char *);</code></li>
<li>Separators of words: space, tabulation, new line, <code>,</code>, <code>;</code>, <code>.</code>, <code>!</code>, <code>?</code>, <code>&quot;</code>, <code>(</code>, <code>)</code>, <code>{</code>, and <code>}</code></li>
</ul>
        <p>File: <code>6-cap_string.c</code></p>
  <h3>
    7. Mozart composed his music not for the elite, but for everybody
  </h3>
  <p>Write a function that encodes a string into 1337.</p>
<ul>
<li>Letters <code>a</code> and <code>A</code> should be replaced by <code>4</code></li>
<li>Letters <code>e</code> and <code>E</code> should be replaced by <code>3</code></li>
<li>Letters <code>o</code> and <code>O</code> should be replaced by <code>0</code></li>
<li>Letters <code>t</code> and <code>T</code> should be replaced by <code>7</code></li>
<li>Letters <code>l</code> and <code>L</code> should be replaced by <code>1</code></li>
<li>Prototype: <code>char *leet(char *);</code></li>
<li>You can only use one <code>if</code> in your code</li>
<li>You can only use two loops in your code</li>
<li>You are not allowed to use <code>switch</code></li>
<li>You are not allowed to use any ternary operation</li>
</ul>
        <p>File: <code>7-leet.c</code></p>
  <h3>
    8. rot13
  </h3>
  <p>Write a function that encodes a string using rot13.</p>
<ul>
<li>Prototype: <code>char *rot13(char *);</code></li>
<li>You can only use <code>if</code> statement once in your code</li>
<li>You can only use two loops in your code</li>
<li>You are not allowed to use <code>switch</code></li>
<li>You are not allowed to use any ternary operation</li>
</ul>
        <p>File: <code>8-rot13.c</code></p>
  <h3>
    9. Numbers have life; they&#39;re not just symbols on paper
  </h3>
  <p>Write a function that prints an integer.</p>
<ul>
<li>Prototype: <code>void print_number(int n);</code></li>
<li>You can only use <code>_putchar</code> function to print</li>
<li>You are not allowed to use <code>long</code></li>
<li>You are not allowed to use arrays or pointers</li>
<li>You are not allowed to hard-code special values</li>
</ul>
        <p>File: <code>100-print_number.c</code></p>
  <h3>
    10. A dream doesn&#39;t become reality through magic; it takes sweat, determination and hard work
  </h3>
Add one line to this code, so that the program prints <code>a[2] = 98</code>, followed by a new line.</p>
<ul>
<li>You are not allowed to use the variable <code>a</code> in your new line of code</li>
<li>You are not allowed to modify the variable <code>p</code></li>
<li>You can only write one statement</li>
<li>You are not allowed to use <code>,</code></li>
<li>You are not allowed to code anything else than the line of expected line of code at the expected line</li>
<li>Your code should be written at line 19, before the <code>;</code></li>
<li>Do not remove anything from the initial code (not even the comments)</li>
<li>and don&rsquo;t change anything but the line of code you are adding (don&rsquo;t change the spaces to tabs!)</li>
<li>You are allowed to use the standard library</li>
</ul>
        <p>File: <code>101-magic.c</code></p>
  <h3>
    11. It is the addition of strangeness to beauty that constitutes the romantic character in art
  </h3>
  <p>Write a function that adds two numbers.</p>
<ul>
<li>Prototype: <code>char *infinite_add(char *n1, char *n2, char *r, int size_r);</code></li>
<li>Where <code>n1</code> and <code>n2</code> are the two numbers</li>
<li><code>r</code> is the buffer that the function will use to store the result</li>
<li><code>size_r</code> is the buffer size</li>
<li>The function returns a pointer to the result</li>
<li>You can assume that you will always get positive numbers, or <code>0</code></li>
<li>You can assume that there will be only digits in the strings <code>n1</code> and <code>n2</code></li>
<li><code>n1</code> and <code>n2</code> will never be empty</li>
<li>If the result can not be stored in <code>r</code> the function must return <code>0</code></li>
</ul>
        <p>File: <code>102-infinite_add.c</code></p>
  <h3>
    12. Noise is a buffer, more effective than cubicles or booth walls
  </h3>
  <p>Write a function that prints a buffer.</p>
<ul>
<li>Prototype: <code>void print_buffer(char *b, int size);</code></li>
<li>The function must print the content of <code>size</code> bytes of the buffer pointed by <code>b</code></li>
<li>The output should print 10 bytes per line</li>
<li>Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with <code>0</code></li>
<li>Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space</li>
<li>Each line shows the content of the buffer.  If the byte is a printable character, print the letter, if not, print <code>.</code></li>
<li>Each line ends with a new line <code>\n</code></li>
<li>If <code>size</code> is 0 or less, the output should be a new line only <code>\n</code></li>
<li>You are allowed to use the standard library</li>
<li>The output should look like the following example, and formatted exactly the same way:</li>
</ul>
        <p>File: <code>103-print_buffer.c</code></p>
