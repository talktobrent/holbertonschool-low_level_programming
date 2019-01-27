<h1>0x03. C - More functions, more nested loops</h1>
<p>At the end of this project, you are expected to be able to explain to anyone, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What are nested loops and how to use them</li>
<li>What is a function and how do you use functions</li>
<li>What is the difference between a declaration and a definition of a function</li>
<li>What is a prototype</li>
<li>Scope of variables</li>
<li>What are the <code>gcc</code> flags <code>-Wall -Werror -pedantic -Wextra</code></li>
<li>What are header files and how to to use them with <code>#include</code></li>
</ul>
<h2>Tasks</h2>
  <h3>
    0. isupper
  </h3>
  <p>Write a function that checks for uppercase character.</p>
<ul>
<li>Prototype: <code>int _isupper(int c);</code></li>
<li>Returns <code>1</code> if <code>c</code> is uppercase</li>
<li>Returns <code>0</code> otherwise</li>
</ul>
<p>FYI: The standard library provides a similar function: <code>isupper</code>. Run <code>man isupper</code> to learn more.</p>
        <p>File: <code>0-isupper.c</code></p>
  <h3>
    1. isdigit
  </h3>
  <p>Write a function that checks for a digit (<code>0</code> through <code>9</code>).</p>
<ul>
<li>Prototype: <code>int _isdigit(int c);</code></li>
<li>Returns <code>1</code> if <code>c</code> is a digit</li>
<li>Returns <code>0</code> otherwise</li>
</ul>
<p>FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.</p>
        <p>File: <code>1-isdigit.c</code></p>
  <h3>
    2. Collaboration is multiplication
  </h3>
  <p>Write a function that multiplies two integers.</p>
<ul>
<li>Prototype: <code>int mul(int a, int b);</code></li>
</ul>
        <p>File: <code>2-mul.c</code></p>
  <h3>
    3. The numbers speak for themselves
  </h3>
  <p>Write a function that prints the numbers, from <code>0</code> to <code>9</code>, followed by a new line.</p>
<ul>
<li>Prototype: void print_numbers(void);</li>
<li>You can only use <code>_putchar</code> twice in your code</li>
</ul>
        <p>File: <code>3-print_numbers.c</code></p>
  <h3>
    4. I believe in numbers and signs
  </h3>
  <p>Write a function that prints the numbers, from <code>0</code> to <code>9</code>, followed by a new line.</p>
<ul>
<li>Prototype: <code>void print_most_numbers(void);</code></li>
<li>Do not print <code>2</code> and <code>4</code></li>
<li>You can only use <code>_putchar</code> twice in your code</li>
</ul>
        <p>File: <code>4-print_most_numbers.c</code></p>
  <h3>
    5. Numbers constitute the only universal language
  </h3>
  <p>Write a function that prints 10 times the numbers, from <code>0</code> to <code>14</code>, followed by a new line.</p>
<ul>
<li>Prototype: <code>void more_numbers(void);</code></li>
<li>You can only use <code>_putchar</code> three times in your code</li>
</ul>
        <p>File: <code>5-more_numbers.c</code></p>
  <h3>
    6. The shortest distance between two points is a straight line
  </h3>
  <p>Write a function that draws a straight line in the terminal.</p>
<ul>
<li>Prototype: <code>void print_line(int n);</code></li>
<li>You can only use <code>_putchar</code> function to print</li>
<li>Where <code>n</code> is the number of times the character <code>_</code> should be printed</li>
<li>The line should end with a <code>\n</code></li>
<li>If <code>n</code> is <code>0</code> or less, the function should only print <code>\n</code></li>
</ul>
        <p>File: <code>6-print_line.c</code></p>
  <h3>
    7. I feel like I am diagonally parked in a parallel universe
  </h3>
  <p>Write a function that draws a diagonal line on the terminal.</p>
<ul>
<li>Prototype: <code>void print_diagonal(int n);</code></li>
<li>You can only use <code>_putchar</code> function to print</li>
<li>Where <code>n</code> is the number of times the character <code>\</code> should be printed</li>
<li>The diagonal should end with a <code>\n</code></li>
<li>If <code>n</code> is <code>0</code> or less, the function should only print a <code>\n</code></li>
</ul>
        <p>File: <code>7-print_diagonal.c</code></p>
  <h3>
    8. You are so much sunshine in every square inch
  </h3>
  <p>Write a function that prints a square, followed by a new line.</p>
<ul>
<li>Prototype: <code>void print_square(int size);</code></li>
<li>You can only use <code>_putchar</code> function to print</li>
<li>Where <code>size</code> is the size of the square</li>
<li>If <code>size</code> is <code>0</code> or less, the function should print only a new line</li>
<li>Use the character <code>#</code> to print the square</li>
</ul>
        <p>File: <code>8-print_square.c</code></p>
  <h3>
    9. Fizz-Buzz
  </h3>
  <p>The &ldquo;Fizz-Buzz test&rdquo; is an interview question designed to help filter out the 99.5% of programming job candidates who can&rsquo;t seem to program their way out of a wet paper bag.</p>
<p>Write a program that prints the numbers from <code>1</code> to <code>100</code>, followed by a new line. But for multiples of three print <code>Fizz</code> instead of the number and for the multiples of five print <code>Buzz</code>. For numbers which are multiples of both three and five print <code>FizzBuzz</code>.</p>
<ul>
<li>Each number or word should be separated by a space</li>
<li>You are allowed to use the standard library</li>
</ul>
        <p>File: <code>9-fizz_buzz.c</code></p>
  <h3>
    10. Triangles
  </h3>
  <p>Write a function that prints a triangle, followed by a new line.</p>
<ul>
<li>Prototype: <code>void print_triangle(int size);</code></li>
<li>You can only use <code>_putchar</code> function to print</li>
<li>Where <code>size</code> is the size of the triangle</li>
<li>If <code>size</code> is <code>0</code> or less, the function should print only a new line</li>
<li>Use the character <code>#</code> to print the triangle</li>
</ul>
        <p>File: <code>10-print_triangle.c</code></p>
  <h3>
    11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic
  </h3>
  <p>The prime factors of <code>1231952</code> are <code>2</code>, <code>2</code>, <code>2</code>, <code>2</code>, <code>37</code> and <code>2081</code>. </p>
<p>Write a program that finds and prints the largest prime factor of the number <code>612852475143</code>, followed by a new line.</p>
<ul>
<li>You are allowed to use the standard library</li>
<li>Your program will be compiled with this command: <code>gcc -Wall -pedantic -Werror -Wextra 100-prime_factor.c -o 100-prime_factor -lm</code></li>
</ul>
        <p>File: <code>100-prime_factor.c</code></p>
  <h3>
    12. Numbers have life; they&#39;re not just symbols on paper
  </h3>
  <p>Write a function that prints an integer.</p>
<ul>
<li>Prototype: <code>void print_number(int n);</code></li>
<li>You can only use <code>_putchar</code> function to print</li>
<li>You are not allowed to use <code>long</code></li>
<li>You are not allowed to use arrays or pointers</li>
<li>You are not allowed to hard-code special values</li>
</ul>
        <p>File: <code>101-print_number.c</code></p>
