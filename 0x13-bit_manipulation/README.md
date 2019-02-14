<h1>0x13. C - Bit manipulation</h1>
<p>At the end of this project, you are expected to be able to explain to anyone, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>Look for the right source of information without too much help</li>
<li>How to manipulate bits and use bitwise operators</li>
</ul>
<h2>Tasks</h2>
  <h3>
    0. 0
  </h3>
  <p>Write a function that converts a binary number to an <code>unsigned int</code>.</p>
<ul>
<li>Prototype: <code>unsigned int binary_to_uint(const char *b);</code></li>
<li>where <code>b</code> is pointing to a string of <code>0</code> and <code>1</code> chars</li>
<li>Return: the converted number, or 0 if
<ul>
<li>there is one or more chars in the string <code>b</code> that is not <code>0</code> or <code>1</code></li>
<li><code>b</code> is <code>NULL</code></li>
</ul></li>
</ul>
        <p>File: <code>0-binary_to_uint.c</code></p>
  <h3>
    1. 1
  </h3>
  <p>Write a function that prints the binary representation of a number.</p>
<ul>
<li>Prototype: <code>void print_binary(unsigned long int n);</code></li>
<li>Format: see example</li>
<li>You are not allowed to use arrays</li>
<li>You are not allowed to use <code>malloc</code></li>
<li>You are not allowed to use the <code>%</code> or <code>/</code> operators</li>
</ul>
        <p>File: <code>1-print_binary.c</code></p>
  <h3>
    2. 10
  </h3>
  <p>Write a function that returns the value of a bit at a given index.</p>
<ul>
<li>Prototype: <code>int get_bit(unsigned long int n, unsigned int index);</code></li>
<li>where <code>index</code> is the index, starting from <code>0</code> of the bit you want to get</li>
<li>Returns: the value of the bit at index <code>index</code> or <code>-1</code> if an error occured</li>
</ul>
        <p>File: <code>2-get_bit.c</code></p>
  <h3>
    3. 11
  </h3>
  <p>Write a function that sets the value of a bit to <code>1</code> at a given index.</p>
<ul>
<li>Prototype: <code>int set_bit(unsigned long int *n, unsigned int index);</code></li>
<li>where <code>index</code> is the index, starting from <code>0</code> of the bit you want to set</li>
<li>Returns: <code>1</code> if it worked, or <code>-1</code> if an error occurred</li>
</ul>
        <p>File: <code>3-set_bit.c</code></p>
  <h3>
    4. 100
  </h3>
  <p>Write a function that sets the value of a bit to <code>0</code> at a given index.</p>
<ul>
<li>Prototype: <code>int clear_bit(unsigned long int *n, unsigned int index);</code></li>
<li>where <code>index</code> is the index, starting from <code>0</code> of the bit you want to set</li>
<li>Returns: <code>1</code> if it worked, or <code>-1</code> if an error occurred</li>
</ul>
        <p>File: <code>4-clear_bit.c</code></p>
  <h3>
    5. 101
  </h3>
  <p>Write a function that returns the number of bits you would need to flip to get from one number to another.</p>
<ul>
<li>Prototype: <code>unsigned int flip_bits(unsigned long int n, unsigned long int m);</code></li>
<li>You are not allowed to use the <code>%</code> or <code>/</code> operators</li>
</ul>
        <p>File: <code>5-flip_bits.c</code></p>
  <h3>
    6. Endianness
  </h3>
  <p>Write a function that checks the endianness.</p>
<ul>
<li>Prototype: <code>int get_endianness(void);</code></li>
<li>Returns: <code>0</code> if big endian, <code>1</code> if little endian</li>
</ul>
        <p>File: <code>100-get_endianness.c</code></p>
  <h3>
    7. Crackme3
  </h3>
  <p>Find the password for this program.</p>
<ul>
<li>Save the password in the file <code>101-password</code></li>
<li>Your file should contain the exact password, no new line, no extra space</li>
</ul>
        <p>File: <code>101-password</code></p>
  <h3>
    8. Two&#39;s complement and negative numbers
  </h3>
  <p>Write a blog post on how integers are stored in memory using two&rsquo;s complement.</p>
<ul>
<li>Have at least one picture, at the top of the blog post</li>
<li>Have a few examples covering positive and negative numbers</li>
<li>Publish your blog post on Medium or LinkedIn</li>
<li>Share your blog post at least on Twitter and LinkedIn</li>
</ul>
