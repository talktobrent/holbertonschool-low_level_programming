<h1>0x0A. C - malloc, free</h1>
<p>At the end of this project, you are expected to be able to explain to anyone, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What is the difference between automatic and dynamic allocation</li>
<li>What is <code>malloc</code> and <code>free</code> and how to use them</li>
<li>Why and when use <code>malloc</code></li>
<li>How to use <code>valgrind</code> to check for memory leak</li>
</ul>
<h2>Tasks</h2>
  <h3>
    0. Float like a butterfly, sting like a bee
  </h3>
  <p>Write a function that creates an array of chars, and initializes it with a specific char.</p>
<ul>
<li>Prototype: <code>char *create_array(unsigned int size, char c);</code></li>
<li>Returns <code>NULL</code> if size = <code>0</code></li>
<li>Returns a pointer to the array, or <code>NULL</code> if it fails</li>
</ul>
        <p>File: <code>0-create_array.c</code></p>
  <h3>
    1. The woman who has no imagination has no wings
  </h3>
  <p>Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.</p>
<ul>
<li>Prototype: <code>char *_strdup(char *str);</code></li>
<li>The <code>_strdup()</code> function returns a pointer to a new string which is a duplicate of the string <code>str</code>.  Memory for the new string is obtained with <code>malloc</code>, and can be freed with <code>free</code>.</li>
<li>Returns <code>NULL</code> if str = NULL</li>
<li>On success, the <code>_strdup</code> function returns a pointer to the duplicated string.  It returns <code>NULL</code> if insufficient memory was available</li>
</ul>
<p>FYI: The standard library provides a similar function: <code>strdup</code>. Run <code>man strdup</code> to learn more.</p>
        <p>File: <code>1-strdup.c</code></p>
  <h3>
    2. He who is not courageous enough to take risks will accomplish nothing in life
  </h3>
  <p>Write a function that concatenates two strings.</p>
<ul>
<li>Prototype: <code>char *str_concat(char *s1, char *s2);</code></li>
<li>The returned pointer should point to a newly allocated space in memory which contains the contents of <code>s1</code>, followed by the contents of <code>s2</code>, and null terminated</li>
<li>if <code>NULL</code> is passed, treat it as an empty string</li>
<li>The function should return <code>NULL</code> on failure</li>
</ul>
        <p>File: <code>2-str_concat.c</code></p>
  <h3>
    3. If you even dream of beating me you&#39;d better wake up and apologize
  </h3>
  <p>Write a function that returns a pointer to a 2 dimensional array of integers.</p>
<ul>
<li>Prototype: <code>int **alloc_grid(int width, int height);</code></li>
<li>Each element of the grid should be initialized to <code>0</code></li>
<li>The function should return <code>NULL</code> on failure</li>
<li>If <code>width</code> or <code>height</code> is <code>0</code> or negative, return <code>NULL</code></li>
</ul>
        <p>File: <code>3-alloc_grid.c</code></p>
  <h3>
    4. It&#39;s not bragging if you can back it up
  </h3>
  <p>Write a function that frees a 2 dimensional grid previously created by your <code>alloc_grid</code> function.</p>
<ul>
<li>Prototype: <code>void free_grid(int **grid, int height);</code></li>
<li>Your program should not crash if the grid is invalid (<code>NULL</code> or size = 0)</li>
<li>Note that we will compile with your <code>alloc_grid.c</code> file. Make sure it compiles.</li>
</ul>
        <p>File: <code>4-free_grid.c</code></p>
  <h3>
    5. It isn&#39;t the mountains ahead to climb that wear you out; it&#39;s the pebble in your shoe
  </h3>
  <p>Write a function that concatenates all the arguments of your program.</p>
<ul>
<li>Prototype: <code>char *argstostr(int ac, char **av);</code></li>
<li>Returns <code>NULL</code> if <code>ac == 0</code> or <code>av == NULL</code></li>
<li>Returns a pointer to a new string, or <code>NULL</code> if it fails</li>
<li>Each argument should be followed by a <code>\n</code> in the new string</li>
</ul>
        <p>File: <code>5-argstostr.c</code></p>
  <h3>
    6. I will show you how great I am
  </h3>
  <p>Write a function that splits a string into words.</p>
<ul>
<li>Prototype: <code>char **strtow(char *str);</code></li>
<li>The function returns a pointer to an array of strings (words)</li>
<li>Each element of this array should contain a single word, null-terminated</li>
<li>The last element of the returned array should be <code>NULL</code></li>
<li>Words are separated by spaces</li>
<li>Returns <code>NULL</code> if <code>str == NULL</code> or <code>str == &quot;&quot;</code></li>
<li>If your function fails, it should return <code>NULL</code></li>
</ul>
        <p>File: <code>100-strtow.c</code></p>
