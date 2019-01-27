<h1>0x0F. C - Variadic functions</h1>
<p>At the end of this project, you are expected to be able to explain to anyone, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What are variadic functions</li>
<li>How to use <code>va_start</code>, <code>va_arg</code> and <code>va_end</code> macros</li>
<li>Why and how to use the <code>const</code> type qualifier</li>
</ul>
<h2>Tasks</h2>
  <h3>
    0. Beauty is variable, ugliness is constant
  </h3>
  <p>Write a function that returns the sum of all its parameters.</p>
<ul>
<li>Prototype: <code>int sum_them_all(const unsigned int n, ...);</code></li>
<li>If <code>n == 0</code>, return <code>0</code></li>
</ul>
        <p>File: <code>0-sum_them_all.c</code></p>
  <h3>
    1. To be is to be the value of a variable
  </h3>
  <p>Write a function that prints numbers, followed by a new line.</p>
<ul>
<li>Prototype: <code>void print_numbers(const char *separator, const unsigned int n, ...);</code></li>
<li>where <code>separator</code> is the string to be printed between numbers</li>
<li>and <code>n</code> is the number of integers passed to the function</li>
<li>You are allowed to use <code>printf</code></li>
<li>If <code>separator</code> is <code>NULL</code>, don&rsquo;t print it</li>
<li>Print a new line at the end of your function</li>
</ul>
        <p>File: <code>1-print_numbers.c</code></p>
  <h3>
    2. One woman&#39;s constant is another woman&#39;s variable
  </h3>
  <p>Write a function that prints strings, followed by a new line.</p>
<ul>
<li>Prototype: <code>void print_strings(const char *separator, const unsigned int n, ...);</code></li>
<li>where <code>separator</code> is the string to be printed between the strings</li>
<li>and <code>n</code> is the number of strings passed to the function</li>
<li>You are allowed to use <code>printf</code></li>
<li>If separator is NULL, don&rsquo;t print it</li>
<li>If one of the string is NULL, print <code>(nil)</code> instead</li>
<li>Print a new line at the end of your function</li>
</ul>
        <p>File: <code>2-print_strings.c</code></p>
  <h3>
    3. To be is a to be the value of a variable
  </h3>
  <p>Write a function that prints anything.</p>
<ul>
<li>Prototype: <code>void print_all(const char * const format, ...);</code></li>
<li>where <code>format</code> is a list of types of arguments passed to the function
<ul>
<li><code>c</code>: <code>char</code></li>
<li><code>i</code>: <code>integer</code></li>
<li><code>f</code>: <code>float</code></li>
<li><code>s</code>: <code>char *</code> (if the string is NULL, print <code>(nil)</code> instead</li>
<li>any other char should be ignored</li>
<li>see example</li>
</ul></li>
<li>You are not allowed to use <code>for</code>, <code>goto</code>, ternary operator, <code>else</code>, <code>do ... while</code></li>
<li>You can use a maximum of
<ul>
<li>2 <code>while</code> loops</li>
<li>2 <code>if</code></li>
</ul></li>
<li>You can declare a maximum of <code>9</code> variables</li>
<li>You are allowed to use <code>printf</code></li>
<li>Print a new line at the end of your function</li>
</ul>
        <p>File: <code>3-print_all.c</code></p>
  <h3>
    4. Real programmers can write assembly code in any language
  </h3>
  <p>Write a 64-bit program in assembly that prints <code>Hello, Holberton</code>, followed by a new line.</p>
<ul>
<li>You are only allowed to use the system call <code>write</code> (use <code>int</code> or <code>syscall</code>, not a call)</li>
<li>Your program will be compiled using <code>nasm</code> and <code>gcc</code> (as follows)</li>
</ul>
        <p>File: <code>100-hello_holberton.asm</code></p>
