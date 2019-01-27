<h1>0x11. C - Singly linked lists</h1>
<p>At the end of this project, you are expected to be able to explain to anyone, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>When and why using linked lists vs arrays</li>
<li>How to build and use linked lists</li>
</ul>
<h2>Tasks</h2>
  <h3>
    0. Print list
  </h3>
  <p>Write a function that prints all the elements of a <code>list_t</code> list.</p>
<ul>
<li>Prototype: <code>size_t print_list(const list_t *h);</code></li>
<li>Return: the number of nodes</li>
<li>Format: see example</li>
<li>If <code>str</code> is <code>NULL</code>, print <code>[0] (nil)</code></li>
<li>You are allowed to use <code>printf</code></li>
</ul>
        <p>File: <code> 0-print_list.c</code></p>
  <h3>
    1. List length
  </h3>
  <p>Write a function that returns the number of elements in a linked <code>list_t</code> list.</p>
<ul>
<li>Prototype: <code>size_t list_len(const list_t *h);</code></li>
</ul>
        <p>File: <code>1-list_len.c</code></p>
  <h3>
    2. Add node
  </h3>
  <p>Write a function that adds a new node at the beginning of a <code>list_t</code> list.</p>
<ul>
<li>Prototype: <code>list_t *add_node(list_t **head, const char *str);</code></li>
<li>Return: the address of the new element, or <code>NULL</code> if it failed</li>
<li><code>str</code> needs to be duplicated</li>
<li>You are allowed to use <code>strdup</code></li>
</ul>
<p><em>^ Cohort 0, San Francisco students</em></p>
        <p>File: <code>2-add_node.c</code></p>
  <h3>
    3. Add node at the end
  </h3>
  <p>Write a function that adds a new node at the end of a <code>list_t</code> list.</p>
<ul>
<li>Prototype: <code>list_t *add_node_end(list_t **head, const char *str);</code></li>
<li>Return: the address of the new element, or <code>NULL</code> if it failed</li>
<li><code>str</code> needs to be duplicated</li>
<li>You are allowed to use <code>strdup</code></li>
</ul>
<p><em>^ Cohort 1, San Francisco students</em></p>
        <p>File: <code>3-add_node_end.c</code></p>
  <h3>
    4. Free list
  </h3>
  <p>Write a function that frees a <code>list_t</code> list.</p>
<ul>
<li>Prototype: <code>void free_list(list_t *head);</code></li>
</ul>
        <p>File: <code>4-free_list.c</code></p>
  <h3>
    5. The Hare and the Tortoise
  </h3>
<p>Write a function that prints <code>You&#39;re beat! and yet, you must allow,\nI bore my house upon my back!\n</code> before the <code>main</code> function is executed.</p>
<ul>
<li>You are allowed to use the <code>printf</code> function</li>
</ul>
        <p>File: <code>100-first.c</code></p>
  <h3>
    6. Real programmers can write assembly code in any language
  </h3>
  <p>Write a 64-bit program in assembly that prints <code>Hello, Holberton</code>, followed by a new line.</p>
<ul>
<li>You are only allowed to use the <code>printf</code> function</li>
<li>You are not allowed to use interrupts</li>
<li>Your program will be compiled using <code>nasm</code> and <code>gcc</code>:</li>
</ul>
        <p>File: <code>101-hello_holberton.asm</code></p>
