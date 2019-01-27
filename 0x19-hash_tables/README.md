<h1>0x19. C - Hash tables</h1>
<p>At the end of this project, you are expected to be able to explain to anyone, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What is a hash function</li>
<li>What makes a good hash function</li>
<li>What is a hash table, how do they work and how to use them</li>
<li>What is a collision and what are the main ways of dealing with collisions in the context of a hash table</li>
<li>What are the advantages and drawbacks of using hash tables</li>
<li>What are the most common use cases of hash tables</li>
</ul>
<h2>Tasks</h2>
  <h3>
    0. &gt;&gt;&gt; ht = {}
  </h3>
  <p>Write a function that creates a hash table.</p>
<ul>
<li>Prototype: <code>hash_table_t *hash_table_create(unsigned long int size);</code>
<ul>
<li>where <code>size</code> is the size of the array</li>
</ul></li>
<li>Returns a pointer to the newly created hash table</li>
<li>If something went wrong, your function should return <code>NULL</code></li>
</ul>
        <p>File: <code>0-hash_table_create.c</code></p>
  <h3>
    1. djb2
  </h3>
  <p>Write a hash function implementing the djb2 algorithm.</p>
<ul>
<li>Prototype: <code>unsigned long int hash_djb2(const unsigned char *str);</code></li>
<li>You are allowed to copy and paste the function from this page</li>
</ul>
        <p>File: <code>1-djb2.c</code></p>
  <h3>
    2. key -&gt; index
  </h3>
  <p>Write a function that gives you the index of a key.</p>
<ul>
<li>Prototype: <code>unsigned long int key_index(const unsigned char *key, unsigned long int size);</code>
<ul>
<li>where <code>key</code> is the key</li>
<li>and <code>size</code> is the size of the array of the hash table</li>
</ul></li>
<li>This function should use the <code>hash_djb2</code> function that you wrote earlier</li>
<li>Returns the index at which the key/value pair should be stored in the array of the hash table</li>
<li>You will have to use this hash function for all the next tasks</li>
</ul>
        <p>File: <code>2-key_index.c</code></p>
  <h3>
    3. &gt;&gt;&gt; ht[&#39;betty&#39;] = &#39;holberton&#39;
  </h3>
  <p>Write a function that adds an element to the hash table.</p>
<ul>
<li>Prototype: <code>int hash_table_set(hash_table_t *ht, const char *key, const char *value);</code>
<ul>
<li>Where <code>ht</code> is the hash table you want to add or update the key/value to</li>
<li><code>key</code> is the key. <code>key</code> can not be an empty string</li>
<li>and <code>value</code> is the value associated with the key. <code>value</code> must be duplicated. <code>value</code> can be an empty string</li>
</ul></li>
<li>Returns: <code>1</code> if it succeeded, <code>0</code> otherwise</li>
<li>In case of collision, add the new node at the beginning of the list</li>
</ul>
<p><em>Tip from Jennie Chu - Cohort 1, San Francisco</em>: if you want to test for collisions, here are some strings that collide using the djb2 algorithm:</p>
<ul>
<li><strong>hetairas</strong> collides with <strong>mentioner</strong></li>
<li><strong>heliotropes</strong> collides with <strong>neurospora</strong></li>
<li><strong>depravement</strong> collides with <strong>serafins</strong></li>
<li><strong>stylist</strong> collides with <strong>subgenera</strong></li>
<li><strong>joyful</strong> collides with <strong>synaphea</strong></li>
<li><strong>redescribed</strong> collides with <strong>urites</strong></li>
<li><strong>dram</strong> collides with <strong>vivency</strong></li>
</ul>
        <p>File: <code>3-hash_table_set.c</code></p>
  <h3>
    4. &gt;&gt;&gt; ht[&#39;betty&#39;]
  </h3>
  <p>Write a function that retrieves a value associated with a key.</p>
<ul>
<li>Prototype: <code>char *hash_table_get(const hash_table_t *ht, const char *key);</code>
<ul>
<li>where <code>ht</code> is the hash table you want to look into</li>
<li>and <code>key</code> is the key you are looking for</li>
</ul></li>
<li>Returns the value associated with the element, or <code>NULL</code> if <code>key</code> couldn&rsquo;t be found</li>
</ul>
        <p>File: <code>4-hash_table_get.c</code></p>
  <h3>
    5. &gt;&gt;&gt; print(ht)
  </h3>
  <p>Write a function that prints a hash table.</p>
<ul>
<li>Prototype: <code>void hash_table_print(const hash_table_t *ht);</code>
<ul>
<li>where <code>ht</code> is the hash table</li>
</ul></li>
<li>You should print the key/value in the order that they appear in the array of hash table
<ul>
<li>Order: array, list</li>
</ul></li>
<li>Format: see example</li>
<li>If <code>ht</code> is NULL, don&rsquo;t print anything</li>
</ul>
        <p>File: <code>5-hash_table_print.c</code></p>
  <h3>
    6. &gt;&gt;&gt; del ht
  </h3>
  <p>Write a function that deletes a hash table.</p>
<ul>
<li>Prototype: <code>void hash_table_delete(hash_table_t *ht);</code>
<ul>
<li>where <code>ht</code> is the hash table</li>
</ul></li>
</ul>
        <p>File: <code>6-hash_table_delete.c</code></p>
  <h3>
    7. $ht[&#39;Betty&#39;] = &#39;Holberton&#39;
  </h3>
  <p>In PHP, hash tables are <strong>ordered</strong>. Wait&hellip; WAT? How is this even possible?</p>
<p><strong>Before you continue</strong>, please take a moment to think about it: how you would implement it if you were asked to during an interview or a job. What data structures would you use? How would it work?</p>
<p>For this task, please:</p>
<ul>
<li>Read PHP Internals Book: HashTable</li>
<li>Use the same hash function</li>
<li>Use these data structures:</li>
</ul>
<p>Rewrite the previous functions using these data structures:</p>
<ul>
<li><code>shash_table_t *shash_table_create(unsigned long int size);</code></li>
<li><code>int shash_table_set(shash_table_t *ht, const char *key, const char *value);</code>
<ul>
<li>The key/value pair should be inserted in the sorted list at the right place</li>
<li>Note that here we do not want to do exactly like <code>PHP</code>: we want to create a sorted linked list, by key (sorted on ASCII value), that we can print by traversing it. See example.</li>
</ul></li>
<li><code>char *shash_table_get(const shash_table_t *ht, const char *key);</code></li>
<li><code>void shash_table_print(const shash_table_t *ht);</code>
<ul>
<li>Should print the hash table using the sorted linked list</li>
</ul></li>
<li><code>void shash_table_print_rev(const shash_table_t *ht);</code>
<ul>
<li>Should print the hash tables key/value pairs in reverse order using the sorted linked list</li>
</ul></li>
<li><code>void shash_table_delete(shash_table_t *ht);</code></li>
<li>You are allowed to have more than 5 functions in your file</li>
</ul>
        <p>File: <code>100-sorted_hash_table.c</code></p>
