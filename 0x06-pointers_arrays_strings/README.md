<h1>0x06. C - Even more pointers, arrays and strings</h1>
<p>At the end of this project, you are expected to be able to explain to anyone, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What are pointers to pointers and how to use them</li>
<li>What are multidimensional arrays and how to use them</li>
<li>What are the most common C standard library functions to manipulate strings</li>
</ul>
<h2>Tasks</h2>
  <h3>
    0. memset
  </h3>
  <p>Write a function that fills memory with a constant byte.</p>
<ul>
<li>Prototype: <code>char *_memset(char *s, char b, unsigned int n);</code></li>
<li>The <code>_memset()</code> function fills the first <code>n</code> bytes of the memory area pointed to by <code>s</code> with the constant byte <code>b</code></li>
<li>Returns a pointer to the memory area <code>s</code></li>
</ul>
<p>FYI: The standard library provides a similar function: <code>memset</code>. Run <code>man memset</code> to learn more.</p>
        <p>File: <code>0-memset.c</code></p>
  <h3>
    1. memcpy
  </h3>
  <p>Write a function that copies memory area.</p>
<ul>
<li>Prototype: <code>char *_memcpy(char *dest, char *src, unsigned int n);</code></li>
<li>The <code>_memcpy()</code>  function  copies <code>n</code> bytes from memory area <code>src</code> to memory area <code>dest</code></li>
<li>Returns a pointer to <code>dest</code></li>
</ul>
<p>FYI: The standard library provides a similar function: <code>memcpy</code>. Run <code>man memcpy</code> to learn more.</p>
        <p>File: <code>1-memcpy.c</code></p>
  <h3>
    2. strchr
  </h3>
  <p>Write a function that locates a character in a string.</p>
<ul>
<li>Prototype: <code>char *_strchr(char *s, char c);</code></li>
<li>Returns a pointer to the first occurrence of the character <code>c</code> in the string <code>s</code>, or <code>NULL</code> if the character is not  found</li>
</ul>
<p>FYI: The standard library provides a similar function: <code>strchr</code>. Run <code>man strchr</code> to learn more.</p>
        <p>File: <code>2-strchr.c</code></p>
  <h3>
    3. strspn
  </h3>
  <p>Write a function that gets the length of a prefix substring.</p>
<ul>
<li>Prototype: <code>unsigned int _strspn(char *s, char *accept);</code></li>
<li>Returns the number of bytes in the initial segment of <code>s</code> which consist only of bytes from <code>accept</code></li>
</ul>
<p>FYI: The standard library provides a similar function: <code>strspn</code>. Run <code>man strspn</code> to learn more.</p>
        <p>File: <code>3-strspn.c</code></p>
  <h3>
    4. strpbrk
  </h3>
  <p>Write a function that searches a string for any of a set of bytes.</p>
<ul>
<li>Prototype: <code>char *_strpbrk(char *s, char *accept);</code></li>
<li>The <code>_strpbrk()</code>  function locates the first occurrence in the string <code>s</code> of any of the bytes in the string <code>accept</code></li>
<li>Returns a pointer to the byte in <code>s</code> that matches one of the bytes in <code>accept</code>,  or <code>NULL</code> if no such byte is found</li>
</ul>
<p>FYI: The standard library provides a similar function: <code>strpbrk</code>. Run <code>man strpbrk</code> to learn more.</p>
        <p>File: <code>4-strpbrk.c</code></p>
  <h3>
    5. strstr
  </h3>
  <p>Write a function that locates a substring.</p>
<ul>
<li>Prototype: <code>char *_strstr(char *haystack, char *needle);</code></li>
<li>The <code>_strstr()</code> function finds the first occurrence of the substring <code>needle</code> in the string <code>haystack</code>.  The terminating null bytes (<code>\0</code>) are not compared</li>
<li>Returns a pointer to the beginning of the located substring, or <code>NULL</code> if the substring is not found.</li>
</ul>
<p>FYI: The standard library provides a similar function: <code>strstr</code>. Run <code>man strstr</code> to learn more.</p>
        <p>File: <code>5-strstr.c</code></p>
  <h3>
    6. Chess is mental torture
  </h3>
  <p>Write a function that prints the chessboard.</p>
<ul>
<li>Prototype: <code>void print_chessboard(char (*a)[8]);</code></li>
</ul>
        <p>File: <code>7-print_chessboard.c</code></p>
  <h3>
    7. The line of life is a ragged diagonal between duty and desire
  </h3>
  <p>Write a function that prints the sum of the two diagonals of a square matrix of integers.</p>
<ul>
<li>Prototype: <code>void print_diagsums(int *a, int size);</code></li>
<li>Format: see example</li>
<li>You are allowed to use the standard library</li>
</ul>
<p>Note that in the following example we are casting an <code>int[][]</code> into an <code>int*</code>. This is not something you should do. The goal here is to make sure you understand how an array of array is stored in memory.</p>
        <p>File: <code>8-print_diagsums.c</code></p>
  <h3>
    8. Double pointer, double fun
  </h3>
  <p>Write a function that sets the value of a pointer to a char.</p>
<ul>
<li>Prototype: <code>void set_string(char **s, char *to);</code></li>
</ul>
<ul>
<li>Anne Cognet - Cohort 1, San Francisco</li>
<li>Asaia Palacios - Cohort 0, San Francisco</li>
</ul>
        <p>File: <code>9-set_string.c</code></p>
  <h3>
    9. My primary goal of hacking was the intellectual curiosity, the seduction of adventure
  </h3>
  <p>Create a file that contains the password for the crackme2  executable.</p>
<ul>
<li>Your file should contain the exact password, no new line, no extra space</li>
<li><code>ltrace</code>, <code>ldd</code>, <code>gdb</code> and <code>objdump</code> can help</li>
<li>You may need to install the <code>openssl</code> library to run the <code>crakme2</code> program: <code>sudo apt-get install libssl-dev</code> </li>
</ul>
        <p>File: <code>101-crackme_password</code></p>
