<h1>0x00. C - Hello, World</h1>
<p>At the end of this project, you are expected to be able to explain to anyone, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>Who invented C</li>
<li>Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds</li>
<li>What happens when you type <code>gcc main.c</code></li>
<li>What is an entry point</li>
<li>What is <code>main</code></li>
<li>How to print text using <code>printf</code>, <code>puts</code> and <code>putchar</code></li>
<li>How to get the size of a specific type using the unary operator <code>sizeof</code></li>
<li>How to compile using <code>gcc</code></li>
<li>What is the default program name when compiling with <code>gcc</code></li>
<li>What is the official Holberton C coding style and how to check your code with <code>betty-style</code></li>
<li>How to find the right header to include in your source code when using a standard library function</li>
<li>How does the <code>main</code> function influence the return value of the program</li>
</ul>
<h2>Tasks</h2>
  <h3>
    0. Preprocessor
  </h3>
  <p>Write a script that runs a C file through the preprocessor and save the result into another file.</p>
<ul>
<li>The C file name will be saved in the variable <code>$CFILE</code></li>
<li>The output should be saved in the file <code>c</code></li>
</ul>
        <p>File: <code>0-preprocessor</code></p>
  <h3>
    1. Compiler
  </h3>
  <p>Write a script that compiles a C file but does not link.</p>
<ul>
<li>The C file name will be saved in the variable <code>$CFILE</code></li>
<li>The output file should be named the same as the C file, but with the extension <code>.o</code> instead of <code>.c</code>.
<ul>
<li>Example: if the C file is <code>main.c</code>, the output file should be <code>main.o</code></li>
</ul></li>
</ul>
        <p>File: <code>1-compiler</code></p>
  <h3>
    2. Assembler
  </h3>
  <p>Write a script that generates the assembly code of a C code and save it in an output file.</p>
<ul>
<li>The C file name will be saved in the variable <code>$CFILE</code></li>
<li>The output file should be named the same as the C file, but with the extension <code>.s</code> instead of <code>.c</code>.
<ul>
<li>Example: if the C file is <code>main.c</code>, the output file should be <code>main.s</code></li>
</ul></li>
</ul>
        <p>File: <code>2-assembler</code></p>
  <h3>
    3. Name
  </h3>
  <p>Write a script that compiles a C file and creates an executable named <code>cisfun</code>.</p>
<ul>
<li>The C file name will be saved in the variable <code>$CFILE</code></li>
</ul>
        <p>File: <code>3-name</code></p>
  <h3>
    4. Hello, puts
  </h3>
  <p>Write a C program that prints exactly <code>&quot;Programming is like building a multilingual puzzle</code>, followed by a new line.</p>
<ul>
<li>Use the function <code>puts</code></li>
<li>You are not allowed to use <code>printf</code></li>
<li>Your program should end with the value <code>0</code></li>
</ul>
        <p>File: <code>4-puts.c</code></p>
  <h3>
    5. Hello, printf
  </h3>
  <p>Write a C program that prints exactly <code>with proper grammar, but the outcome is a piece of art,</code>, followed by a new line.</p>
<ul>
<li>Use the function <code>printf</code></li>
<li>You are not allowed to use the function <code>puts</code></li>
<li>Your program should return <code>0</code></li>
<li>Your program should compile without warning when using the <code>-Wall</code> <code>gcc</code> option</li>
</ul>
        <p>File: <code>5-printf.c</code></p>
  <h3>
    6. Size is not grandeur, and territory does not make a nation
  </h3>
  <p>Write a C program that prints the size of various types on the computer it is compiled and run on.</p>
<ul>
<li>You should produce the exact same output as in the example</li>
<li>Warnings are allowed</li>
<li>Your program should return <code>0</code></li>
<li>You might have to install the package  <code>libc6-dev-i386</code> on your Linux (Vagrant) to test the <code>-m32</code> <code>gcc</code> option</li>
</ul>
        <p>File: <code>6-size.c</code></p>
  <h3>
    7. What happens when you type gcc main.c
  </h3>
  <p>Write a blog post that explains all the steps of compilation. Use command lines and examples to illustrate.</p>
<ul>
<li>Use <code>gcc</code> as the compiler</li>
<li>Have at least one picture, at the top of the blog post</li>
<li>Publish your blog post on Medium or LinkedIn</li>
<li>Share your blog post at least on Twitter and LinkedIn</li>
</ul>
  <h3>
    8. Intel
  </h3>
  <p>Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.</p>
<ul>
<li>The C file name will be saved in the variable <code>$CFILE</code>.</li>
<li>The output file should be named the same as the C file, but with the extension <code>.s</code> instead of <code>.c</code>.
<ul>
<li>Example: if the C file is <code>main.c</code>, the output file should be <code>main.s</code></li>
</ul></li>
</ul>
        <p>File: <code>100-intel</code></p>
  <h3>
    9. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
  </h3>
  <p>Write a C program that prints exactly <code>and that piece of art is useful&quot; - Dora Korpar, 2015-10-19</code>, followed by a new line, to the standard error.</p>
<ul>
<li>You are not allowed to use any functions listed in the NAME section of the man (3) <code>printf</code> or man (3) <code>puts</code></li>
<li>Your program should return 1</li>
<li>Your program should compile without any warnings when using the <code>-Wall</code> <code>gcc</code> option</li>
<li>Dora Korpar - Cohort 0,  San Francisco</li>
</ul>
        <p>File: <code>101-quote.c</code></p>
