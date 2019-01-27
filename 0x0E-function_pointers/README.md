<h1>0x0E. C - Function pointers</h1>
<p>At the end of this project, you are expected to be able to explain to anyone, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What are function pointers and how to use them</li>
<li>What does a function pointer exactly hold</li>
<li>Where does a function pointer point to in the virtual memory</li>
</ul>
<h2>Tasks</h2>
  <h3>
    0. What&#39;s my name
  </h3>
  <p>Write a function that prints a name.</p>
<ul>
<li>Prototype: <code>void print_name(char *name, void (*f)(char *));</code></li>
</ul>
<ul>
<li>Danton Rodriguez - Cohort 2, San Francisco</li>
<li>Rick Harris - Cohort 0, San Francisco</li>
</ul>
        <p>File: <code>0-print_name.c</code></p>
  <h3>
    1. If you spend too much time thinking about a thing, you&#39;ll never get it done
  </h3>
  <p>Write a function that executes a function given as a parameter on each element of an array.</p>
<ul>
<li>Prototype: <code>void array_iterator(int *array, size_t size, void (*action)(int));</code></li>
<li>where <code>size</code> is the size of the array</li>
<li>and <code>action</code> is a pointer to the function you need to use</li>
</ul>
        <p>File: <code>1-array_iterator.c</code></p>
  <h3>
    2. To hell with circumstances; I create opportunities
  </h3>
  <p>Write a function that searches for an integer.</p>
<ul>
<li>Prototype: <code>int int_index(int *array, int size, int (*cmp)(int));</code></li>
<li>where <code>size</code> is the number of elements in the array <code>array</code></li>
<li><code>cmp</code> is a pointer to the function to be used to compare values</li>
<li><code>int_index</code> returns the index of the first element for which the <code>cmp</code> function does not return <code>0</code></li>
<li>If no element matches, return <code>-1</code></li>
<li>If size &lt;= <code>0</code>, return <code>-1</code></li>
</ul>
        <p>File: <code>2-int_index.c</code></p>
  <h3>
    3. A goal is not always meant to be reached, it often serves simply as something to aim at
  </h3>
  <p>Write a program that performs simple operations.</p>
<ul>
<li>You are allowed to use the standard library</li>
<li>Usage: <code>calc num1 operator num2</code></li>
<li>You can assume <code>num1</code> and <code>num2</code> are integers, so use the <code>atoi</code> function to convert them from the string input to <code>int</code></li>
<li><code>operator</code> is one of the following:
<ul>
<li><code>+</code>: addition</li>
<li><code>-</code>: subtraction</li>
<li><code>*</code>: multiplication</li>
<li><code>/</code>: division</li>
<li><code>%</code>: modulo</li>
</ul></li>
<li>The program prints the result of the operation, followed by a new line</li>
<li>You can assume that the result of all operations can be stored in an <code>int</code></li>
<li>if the number of arguments is wrong, print <code>Error</code>, followed by a new line, and exit with the status <code>98</code></li>
<li>if the <code>operator</code> is none of the above, print <code>Error</code>, followed by a new line, and exit with the status <code>99</code></li>
<li>if the user tries to divide (<code>/</code> or <code>%</code>) by <code>0</code>, print <code>Error</code>, followed by a new line, and exit with the status <code>100</code></li>
</ul>
<p>This task requires that you create four different files.</p>
<p><strong>3-calc.h</strong></p>
<p>This file should contain all the function prototypes and data structures used by the program.
You can use this structure:</p>
<p><strong>3-op_functions.c</strong></p>
<p>This file should contain the 5 following functions (not more):</p>
<ul>
<li><code>op_add</code>: returns the sum of <code>a</code> and <code>b</code>. Prototype: <code>int op_add(int a, int b);</code></li>
<li><code>op_sub</code>: returns the difference of <code>a</code> and <code>b</code>. Prototype: <code>int op_sub(int a, int b);</code></li>
<li><code>op_mul</code>: returns the product of <code>a</code> and <code>b</code>. Prototype: <code>int op_mul(int a, int b);</code></li>
<li><code>op_div</code>: returns the result of the division of <code>a</code> by <code>b</code>. Prototype: <code>int op_div(int a, int b);</code></li>
<li><code>op_mod</code>: returns the remainder of the division of <code>a</code> by <code>b</code>. Prototype: <code>int op_mod(int a, int b);</code></li>
</ul>
<p><strong>3-get_op_func.c</strong></p>
<p>This file should contain the function that selects the correct function to perform the operation asked by the user. You&rsquo;re not allowed to declare any other function.</p>
<ul>
<li>Prototype: <code>int (*get_op_func(char *s))(int, int);</code></li>
<li>where <code>s</code> is the operator passed as argument to the program</li>
<li>This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: <code>get_op_func(&quot;+&quot;)</code> should return a pointer to the function <code>op_add</code></li>
<li>You are not allowed to use <code>switch</code> statements</li>
<li>You are not allowed to use <code>for</code> or <code>do ... while</code> loops</li>
<li>You are not allowed to use <code>goto</code></li>
<li>You are not allowed to use <code>else</code></li>
<li>You are not allowed to use more than one <code>if</code> statement in your code</li>
<li>You are not allowed to use more than one <code>while</code> loop in your code</li>
<li>If <code>s</code> does not match any of the 5 expected operators (<code>+</code>, <code>-</code>, <code>*</code>, <code>/</code>, <code>%</code>), return <code>NULL</code></li>
<li>You are only allowed to declare these two variables in this function:</li>
</ul>
<p><strong>3-main.c</strong></p>
<p>This file should contain your <code>main</code> function only.</p>
<ul>
<li>You are not allowed to code any other function than <code>main</code> in this file</li>
<li>You are not allowed to directly call <code>op_add</code>, <code>op_sub</code>, <code>op_mul</code>, <code>op_div</code> or <code>op_mod</code> from the <code>main</code> function</li>
<li>You have to use <code>atoi</code> to convert arguments to <code>int</code></li>
<li>You are not allowed to use any kind of loop</li>
<li>You are allowed to use a maximum of 3 <code>if</code> statements</li>
</ul>
<p><strong>Compilation and examples</strong></p>
        <p>File: <code>3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h</code></p>
  <h3>
    4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker
  </h3>
  <p>Write a program that prints the opcodes of its own main function.</p>
<ul>
<li>Usage: <code>./main number_of_bytes</code></li>
<li>Output format:
<ul>
<li>the opcodes should be printed in hexadecimal, lowercase</li>
<li>each opcode is two char long</li>
<li>listing ends with a new line</li>
<li>see example</li>
</ul></li>
<li>You are allowed to use <code>printf</code> and <code>atoi</code></li>
<li>You have to use <code>atoi</code> to convert the argument to an <code>int</code></li>
<li>If the number of argument is not the correct one, print <code>Error</code>, followed by a new line, and exit with the status <code>1</code></li>
<li>If the number of bytes is negative, print <code>Error</code>, followed by a new line, and exit with the status <code>2</code></li>
<li>You do not have to compile with any flags</li>
</ul>
<p>Note: if you want to translate your opcodes to assembly instructions, you can use, for instance udcli.</p>
<ul>
<li><em>Note 0: <code>je</code> is equivalent to <code>jz</code></em></li>
<li><em>Note 1: depending on how you write your <code>main</code> function, and on which machine you compile your program, the opcodes (and by extension the assembly code) might be different than the above example</em></li>
</ul>
        <p>File: <code>100-main_opcodes.c</code></p>
