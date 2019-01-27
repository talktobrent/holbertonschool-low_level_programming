<h1>0x12. C - More singly linked lists</h1>
<p>At the end of this project, you are expected to be able to explain to anyone, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>How to use linked lists</li>
<li>Start to look for the right source of information without too much help</li>
</ul>
<h2>Tasks</h2>
  <h3>
    0. Print list
  </h3>
  <p>Write a function that prints all the elements of a <code>listint_t</code> list.</p>
<ul>
<li>Prototype: <code>size_t print_listint(const listint_t *h);</code></li>
<li>Return: the number of nodes</li>
<li>Format: see example</li>
<li>You are allowed to use <code>printf</code></li>
</ul>
        <p>File: <code>0-print_listint.c</code></p>
  <h3>
    1. List length
  </h3>
  <p>Write a function that returns the number of elements in a linked <code>listint_t</code> list.</p>
<ul>
<li>Prototype: <code>size_t listint_len(const listint_t *h);</code></li>
</ul>
        <p>File: <code>1-listint_len.c</code></p>
  <h3>
    2. Add node
  </h3>
  <p>Write a function that adds a new node at the beginning of a <code>listint_t</code> list.</p>
<ul>
<li>Prototype: <code>listint_t *add_nodeint(listint_t **head, const int n);</code></li>
<li>Return: the address of the new element, or <code>NULL</code> if it failed</li>
</ul>
        <p>File: <code>2-add_nodeint.c</code></p>
  <h3>
    3. Add node at the end
  </h3>
  <p>Write a function that adds a new node at the end of a <code>listint_t</code> list.</p>
<ul>
<li>Prototype: <code>listint_t *add_nodeint_end(listint_t **head, const int n);</code></li>
<li>Return: the address of the new element, or <code>NULL</code> if it failed</li>
</ul>
        <p>File: <code>3-add_nodeint_end.c</code></p>
  <h3>
    4. Free list
  </h3>
  <p>Write a function that frees a <code>listint_t</code> list.</p>
<ul>
<li>Prototype: <code>void free_listint(listint_t *head);</code></li>
</ul>
        <p>File: <code>4-free_listint.c</code></p>
  <h3>
    5. Free
  </h3>
  <p>Write a function that frees a <code>listint_t</code> list.</p>
<ul>
<li>Prototype: <code>void free_listint2(listint_t **head);</code></li>
<li>The function sets the <code>head</code> to <code>NULL</code></li>
</ul>
        <p>File: <code>5-free_listint2.c</code></p>
  <h3>
    6. Pop
  </h3>
  <p>Write a function that deletes the head node of a <code>listint_t</code> linked list, and returns the head node&rsquo;s data (n).</p>
<ul>
<li>Prototype: <code>int pop_listint(listint_t **head);</code></li>
<li>if the linked list is empty return <code>0</code></li>
</ul>
        <p>File: <code>6-pop_listint.c</code></p>
  <h3>
    7. Get node at index
  </h3>
  <p>Write a function that returns the nth node of a <code>listint_t</code> linked list.</p>
<ul>
<li>Prototype: <code>listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);</code></li>
<li>where <code>index</code> is the index of the node, starting at <code>0</code></li>
<li>if the node does not exist, return <code>NULL</code></li>
</ul>
        <p>File: <code>7-get_nodeint.c</code></p>
  <h3>
    8. Sum list
  </h3>
  <p>Write a function that returns the sum of all the data (n) of a <code>listint_t</code> linked list.</p>
<ul>
<li>Prototype: <code>int sum_listint(listint_t *head);</code></li>
<li>if the list is empty, return <code>0</code></li>
</ul>
        <p>File: <code>8-sum_listint.c</code></p>
  <h3>
    9. Insert
  </h3>
  <p>Write a function that inserts a new node at a given position.</p>
<ul>
<li>Prototype: <code>listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);</code></li>
<li>where <code>idx</code> is the index of the list where the new node should be added. Index starts at <code>0</code></li>
<li>Returns: the address of the new node, or <code>NULL</code> if it failed</li>
<li>if it is not possible to add the new node at index <code>idx</code>, do not add the new node and return <code>NULL</code></li>
</ul>
        <p>File: <code>9-insert_nodeint.c</code></p>
  <h3>
    10. Delete at index
  </h3>
  <p>Write a function that deletes the node at index <code>index</code> of a <code>listint_t</code> linked list.</p>
<ul>
<li>Prototype: <code>int delete_nodeint_at_index(listint_t **head, unsigned int index);</code></li>
<li>where <code>index</code> is the index of the node that should be deleted. Index starts at <code>0</code></li>
<li>Returns: <code>1</code> if it succeeded, <code>-1</code> if it failed</li>
</ul>
        <p>File: <code>10-delete_nodeint.c</code></p>
  <h3>
    11. Reverse list
  </h3>
  <p>Write a function that reverses a <code>listint_t</code> linked list.</p>
<ul>
<li>Prototype: <code>listint_t *reverse_listint(listint_t **head);</code></li>
<li>Returns: a pointer to the first node of the reversed list</li>
<li>You are not allowed to use more than <code>1</code> loop.</li>
<li>You are not allowed to use <code>malloc</code>, <code>free</code> or arrays</li>
<li>You can only declare a maximum of two variables in your function</li>
</ul>
        <p>File: <code>100-reverse_listint.c</code></p>
  <h3>
    12. Print (safe version)
  </h3>
  <p>Write a function that prints a <code>listint_t</code> linked list.</p>
<ul>
<li>Prototype: <code>size_t print_listint_safe(const listint_t *head);</code></li>
<li>Returns: the number of nodes in the list</li>
<li>This function can print lists with a loop</li>
<li>You should go through the list only once</li>
<li>If the function fails, exit the program with status <code>98</code></li>
<li>Output format: see example</li>
</ul>
        <p>File: <code>101-print_listint_safe.c</code></p>
  <h3>
    13. Free (safe version)
  </h3>
  <p>Write a function that frees a <code>listint_t</code> list.</p>
<ul>
<li>Prototype: <code>size_t free_listint_safe(listint_t **h);</code></li>
<li>This function can free lists with a loop</li>
<li>You should go though the list only once</li>
<li>Returns: the size of the list that was free&rsquo;d</li>
<li>The function sets the <code>head</code> to <code>NULL</code></li>
</ul>
        <p>File: <code>102-free_listint_safe.c</code></p>
  <h3>
    14. Find the loop
  </h3>
  <p>Write a function that finds the loop in a linked list.</p>
<ul>
<li>Prototype: <code>listint_t *find_listint_loop(listint_t *head);</code></li>
<li>Returns: The address of the node where the loop starts, or <code>NULL</code> if there is no loop</li>
<li>You are not allowed to use <code>malloc</code>, <code>free</code> or arrays</li>
<li>You can only declare a maximum of two variables in your function</li>
</ul>
        <p>File: <code>103-find_loop.c</code></p>
