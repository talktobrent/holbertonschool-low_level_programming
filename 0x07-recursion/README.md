<h1>0x07. C - Recursion</h1>
<p>At the end of this project, you are expected to be able to explain to anyone, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What is recursion</li>
<li>How to implement recursion</li>
<li>In what situations you should implement recursion</li>
<li>In what situations you shouldn&rsquo;t implement recursion</li>
</ul>
<h2>Tasks</h2>
  <h3>
    0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget
  </h3>
  <p>Write a function that prints a string, followed by a new line.</p>
<ul>
<li>Prototype: <code>void _puts_recursion(char *s);</code></li>
</ul>
<p>FYI: The standard library provides a similar function: <code>puts</code>. Run <code>man puts</code> to learn more.</p>
        <p>File: <code>0-puts_recursion.c</code></p>
  <h3>
    1. Why is it so important to dream? Because, in my dreams we are together
  </h3>
  <p>Write a function that prints a string in reverse.</p>
<ul>
<li>Prototype: <code>void _print_rev_recursion(char *s);</code></li>
</ul>
<ul>
<li>Colton Walker - Cohort 1, San Francisco</li>
</ul>
        <p>File: <code>1-print_rev_recursion.c</code></p>
  <h3>
    2. Dreams feel real while we&#39;re in them. It&#39;s only when we wake up that we realize something was actually strange
  </h3>
  <p>Write a function that returns the length of a string.</p>
<ul>
<li>Prototype: <code>int _strlen_recursion(char *s);</code></li>
</ul>
<p>FYI: The standard library provides a similar function: <code>strlen</code>. Run <code>man strlen</code> to learn more.</p>
<ul>
<li>Corbin Coleman - Cohort 1, San Francisco</li>
</ul>
        <p>File: <code>2-strlen_recursion.c</code></p>
  <h3>
    3. You mustn&#39;t be afraid to dream a little bigger, darling
  </h3>
  <p>Write a function that returns the factorial of a given number.</p>
<ul>
<li>Prototype: <code>int factorial(int n);</code></li>
<li>If <code>n</code> is lower than <code>0</code>, the function should return <code>-1</code> to indicate an error</li>
<li>Factorial of <code>0</code> is <code>1</code></li>
</ul>
        <p>File: <code>3-factorial.c</code></p>
  <h3>
    4. Once an idea has taken hold of the brain it&#39;s almost impossible to eradicate
  </h3>
  <p>Write a function that returns the value of <code>x</code> raised to the power of <code>y</code>.</p>
<ul>
<li>Prototype: <code>int _pow_recursion(int x, int y);</code></li>
<li>If <code>y</code> is lower than <code>0</code>, the function should return <code>-1</code></li>
</ul>
<p>FYI: The standard library provides a different function: <code>pow</code>. Run <code>man pow</code> to learn more.</p>
        <p>File: <code>4-pow_recursion.c</code></p>
  <h3>
    5. Your subconscious is looking for the dreamer
  </h3>
  <p>Write a function that returns the natural square root of a number.</p>
<ul>
<li>Prototype: <code>int _sqrt_recursion(int n);</code></li>
<li>If <code>n</code> does not have a natural square root, the function should return <code>-1</code></li>
</ul>
<p>FYI: The standard library provides a different function: <code>sqrt</code>. Run <code>man sqrt</code> to learn more.</p>
        <p>File: <code>5-sqrt_recursion.c</code></p>
  <h3>
    6. Inception. Is it possible?
  </h3>
  <p>Write a function that returns <code>1</code> if the input integer is a prime number, otherwise return <code>0</code>.</p>
<ul>
<li>Prototype: <code>int is_prime_number(int n);</code></li>
</ul>
        <p>File: <code>6-is_prime_number.c</code></p>
  <h3>
    7. They say we only use a fraction of our brain&#39;s true potential. Now that&#39;s when we&#39;re awake. When we&#39;re asleep, we can do almost anything
  </h3>
  <p>Write a function that returns <code>1</code> if a string is a palindrome and <code>0</code> if not.</p>
<ul>
<li>Prototype: <code>int is_palindrome(char *s);</code></li>
<li>An empty string is a palindrome</li>
</ul>
        <p>File: <code>7-is_palindrome.c</code></p>
  <h3>
    8. Inception. Now, before you bother telling me it&#39;s impossible...
  </h3>
  <p>Write a function that compares two strings and returns <code>1</code> if the strings can be considered identical, otherwise return <code>0</code>.</p>
<ul>
<li>Prototype: <code>int wildcmp(char *s1, char *s2);</code></li>
<li><code>s2</code> can contain the special character <code>*</code>.</li>
<li>The special char <code>*</code> can replace any string (including an empty string)</li>
</ul>
        <p>File: <code>100-wildcmp.c</code></p>
