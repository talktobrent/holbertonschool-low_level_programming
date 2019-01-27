<h1>0x0D. C - Structures, typedef</h1>
<p>At the end of this project, you are expected to be able to explain to anyone, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What are structures, when, why and how to use them</li>
<li>How to use <code>typedef</code></li>
</ul>
<h2>Tasks</h2>
  <h3>
    0. Django
  </h3>
<p>Define a new type <code>struct dog</code> with the following elements:</p>
<ul>
<li><code>name</code>, type = <code>char *</code></li>
<li><code>age</code>, type = <code>float</code></li>
<li><code>owner</code>, type = <code>char *</code></li>
</ul>
        <p>File: <code>dog.h</code></p>
  <h3>
    1. A dog is the only thing on earth that loves you more than you love yourself
  </h3>
  <p>Write a function that initialize a variable of type <code>struct dog</code></p>
<ul>
<li>Prototype: <code>void init_dog(struct dog *d, char *name, float age, char *owner);</code></li>
</ul>
        <p>File: <code>1-init_dog.c</code></p>
  <h3>
    2. A dog will teach you unconditional love. If you can have that in your life, things won&#39;t be too bad
  </h3>
  <p>Write a function that prints a <code>struct dog</code></p>
<ul>
<li>Prototype: <code>void print_dog(struct dog *d);</code></li>
<li>Format: see example bellow</li>
<li>You are allowed to use the standard library</li>
<li>If an element of <code>d</code> is <code>NULL</code>, print <code>(nil)</code> instead of this element. (if <code>name</code> is <code>NULL</code>, print <code>Name: (nil)</code>)</li>
<li>If <code>d</code> is <code>NULL</code> print nothing.</li>
</ul>
        <p>File: <code>2-print_dog.c</code></p>
  <h3>
    3. Outside of a dog, a book is a man&#39;s best friend. Inside of a dog it&#39;s too dark to read
  </h3>
  <p>Define a new type <code>dog_t</code> as a new name for the type <code>struct dog</code>.</p>
        <p>File: <code>dog.h</code></p>
  <h3>
    4. A door is what a dog is perpetually on the wrong side of
  </h3>
  <p>Write a function that creates a new dog.</p>
<ul>
<li>Prototype: <code>dog_t *new_dog(char *name, float age, char *owner);</code></li>
<li>You have to store a copy of <code>name</code> and <code>owner</code></li>
<li>Return <code>NULL</code> if the function fails</li>
</ul>
        <p>File: <code>4-new_dog.c</code></p>
  <h3>
    5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn&#39;t make it a leg
  </h3>
  <p>Write a function that frees dogs.</p>
<ul>
<li>Prototype: <code>void free_dog(dog_t *d);</code></li>
</ul>
        <p>File: <code>5-free_dog.c</code></p>
