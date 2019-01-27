<h1>0x16. C - Doubly linked lists</h1>
<p>At the end of this project, you are expected to be able to explain to anyone, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What is a doubly linked list</li>
<li>How to use doubly linked lists</li>
<li>Start to look for the right source of information without too much help</li>
</ul>
<h2>Tasks</h2>
  <h3>
    0. Print list
  </h3>
  <p>Write a function that prints all the elements of a <code>dlistint_t</code> list.</p>
<ul>
<li>Prototype: <code>size_t print_dlistint(const dlistint_t *h);</code></li>
<li>Return: the number of nodes</li>
<li>Format: see example</li>
</ul>
        <p>File: <code> 0-print_dlistint.c</code></p>
  <h3>
    1. List length
  </h3>
  <p>Write a function that returns the number of elements in a linked <code>dlistint_t</code> list.</p>
<ul>
<li>Prototype: <code>size_t dlistint_len(const dlistint_t *h);</code></li>
</ul>
        <p>File: <code>1-dlistint_len.c</code></p>
  <h3>
    2. Add node
  </h3>
  <p>Write a function that adds a new node at the beginning of a <code>dlistint_t</code> list.</p>
<ul>
<li>Prototype: <code>dlistint_t *add_dnodeint(dlistint_t **head, const int n);</code></li>
<li>Return: the address of the new element, or <code>NULL</code> if it failed</li>
</ul>
        <p>File: <code>2-add_dnodeint.c</code></p>
  <h3>
    3. Add node at the end
  </h3>
  <p>Write a function that adds a new node at the end of a <code>dlistint_t</code> list.</p>
<ul>
<li>Prototype: <code>dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);</code></li>
<li>Return: the address of the new element, or <code>NULL</code> if it failed</li>
</ul>
        <p>File: <code>3-add_dnodeint_end.c</code></p>
  <h3>
    4. Free list
  </h3>
  <p>Write a function that free a <code>dlistint_t</code> list.</p>
<ul>
<li>Prototype: <code>void free_dlistint(dlistint_t *head);</code></li>
</ul>
        <p>File: <code>4-free_dlistint.c</code></p>
  <h3>
    5. Get node at index
  </h3>
  <p>Write a function that returns the nth node of a <code>dlistint_t</code> linked list.</p>
<ul>
<li>Prototype: <code>dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);</code></li>
<li>where <code>index</code> is the index of the node, starting from <code>0</code></li>
<li>if the node does not exist, return <code>NULL</code></li>
</ul>
        <p>File: <code>5-get_dnodeint.c</code></p>
  <h3>
    6. Sum list
  </h3>
  <p>Write a function that returns the sum of all the data (n) of a <code>dlistint_t</code> linked list.</p>
<ul>
<li>Prototype: <code>int sum_dlistint(dlistint_t *head);</code></li>
<li>if the list is empty, return <code>0</code></li>
</ul>
        <p>File: <code>6-sum_dlistint.c</code></p>
  <h3>
    7. Insert at index
  </h3>
  <p>Write a function that inserts a new node at a given position.</p>
<ul>
<li>Prototype: <code>dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);</code></li>
<li>where <code>idx</code> is the index of the list where the new node should be added. Index starts at <code>0</code></li>
<li>Returns: the address of the new node, or <code>NULL</code> if it failed</li>
<li>if it is not possible to add the new node at index <code>idx</code>, do not add the new node and return <code>NULL</code></li>
</ul>
<p>Your files <code>2-add_dnodeint.c</code> and <code>3-add_dnodeint_end.c</code> will be compiled during the correction</p>
        <p>File: <code>7-insert_dnodeint.c, 2-add_dnodeint.c, 3-add_dnodeint_end.c</code></p>
  <h3>
    8. Delete at index
  </h3>
  <p>Write a function that deletes the node at index <code>index</code> of a <code>dlistint_t</code> linked list.</p>
<ul>
<li>Prototype: <code>int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);</code></li>
<li>where <code>index</code> is the index of the node that should be deleted. Index starts at <code>0</code></li>
<li>Returns: <code>1</code> if it succeeded, <code>-1</code> if it failed</li>
</ul>
        <p>File: <code>8-delete_dnodeint.c</code></p>
  <h3>
    9. Crackme4
  </h3>
  <p>Find the password for crackme4.</p>
<ul>
<li>Save the password in the file <code>100-password</code></li>
<li>Your file should contain the exact password, no new line, no extra space</li>
<li>Hint: The program prints &ldquo;OK&rdquo; when the password is correct</li>
</ul>
        <p>File: <code>100-password</code></p>
  <h3>
    10. Palindromes
  </h3>
  <p>A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is <code>9009</code> = <code>91</code> × <code>99</code>.</p>
<p>Find the largest palindrome made from the product of two 3-digit numbers.</p>
<ul>
<li>Save the result in the file <code>102-result</code></li>
<li>Your file should contain the exact result, no new line, no extra space</li>
</ul>
        <p>File: <code>102-result</code></p>
  <h3>
    11. crackme5
  </h3>
  <p>Write a keygen for crackme5.</p>
<ul>
<li>Usage of the crackme: <code>./crackme5 username key</code></li>
<li>The crackme will segfault if you do not enter the correct key for the user</li>
<li>Usage for your keygen: <code>./keygen5 username</code></li>
<li>Your keygen should print a valid key for the <code>username</code></li>
</ul>
        <p>File: <code>103-keygen.c</code></p>
