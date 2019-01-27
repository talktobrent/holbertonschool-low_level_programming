<h1>0x18. C - Stacks, Queues - LIFO, FIFO</h1>
<p>At the end of this project, you are expected to be able to explain to anyone, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What do LIFO and FIFO mean</li>
<li>What is a stack, and when to use it</li>
<li>What is a queue, and when to use it</li>
<li>What are the common implementations of stacks and queues</li>
<li>What are the most common use cases of stacks and queues</li>
<li>What is the proper way to use global variables</li>
<li>How to work with git submodules</li>
</ul>
<h2>Tasks</h2>
  <h3>
    0. push, pall
  </h3>
  <p>Implement the <code>push</code> and <code>pall</code> opcodes.</p>
<p><strong>The push opcode</strong></p>
<p>The opcode <code>push</code> pushes an element to the stack.</p>
<ul>
<li>Usage: <code>push &lt;int&gt;</code>
<ul>
<li>where <code>&lt;int&gt;</code> is an integer</li>
</ul></li>
<li>if <code>&lt;int&gt;</code> is not an integer or if there is no argument given to <code>push</code>, print the error message <code>L&lt;line_number&gt;: usage: push integer</code>, followed by a new line, and exit with the status <code>EXIT_FAILURE</code>
<ul>
<li>where <line_number> is the line number in the file</li>
</ul></li>
<li>You won&rsquo;t have to deal with overflows. Use the <code>atoi</code> function</li>
</ul>
<p><strong>The pall opcode</strong></p>
<p>The opcode <code>pall</code> prints all the values on the stack, starting from the top of the stack.</p>
<ul>
<li>Usage <code>pall</code></li>
<li>Format: see example</li>
<li>If the stack is empty, don&rsquo;t print anything</li>
</ul>
  <h3>
    1. pint
  </h3>
  <p>Implement the <code>pint</code> opcode.</p>
<p><strong>The pint opcode</strong></p>
<p>The opcode <code>pint</code> prints the value at the top of the stack, followed by a new line.</p>
<ul>
<li>Usage: <code>pint</code></li>
<li>If the stack is empty, print the error message <code>L&lt;line_number&gt;: can&#39;t pint, stack empty</code>, followed by a new line, and exit with the status <code>EXIT_FAILURE</code></li>
</ul>
  <h3>
    2. pop
  </h3>
  <p>Implement the <code>pop</code> opcode.</p>
<p><strong>The pop opcode</strong></p>
<p>The opcode <code>pop</code> removes the top element of the stack.</p>
<ul>
<li>Usage: <code>pop</code></li>
<li>If the stack is empty, print the error message <code>L&lt;line_number&gt;: can&#39;t pop an empty stack</code>, followed by a new line, and exit with the status <code>EXIT_FAILURE</code></li>
</ul>
  <h3>
    3. swap
  </h3>
  <p>Implement the <code>swap</code> opcode.</p>
<p><strong>The swap opcode</strong></p>
<p>The opcode <code>swap</code> swaps the top two elements of the stack.</p>
<ul>
<li>Usage: <code>swap</code></li>
<li>If the stack contains less than two elements, print the error message <code>L&lt;line_number&gt;: can&#39;t swap, stack too short</code>, followed by a new line, and exit with the status <code>EXIT_FAILURE</code></li>
</ul>
  <h3>
    4. add
  </h3>
  <p>Implement the <code>add</code> opcode.</p>
<p><strong>The add opcode</strong></p>
<p>The opcode <code>add</code> adds the top two elements of the stack.</p>
<ul>
<li>Usage: <code>add</code></li>
<li>If the stack contains less than two elements, print the error message <code>L&lt;line_number&gt;: can&#39;t add, stack too short</code>, followed by a new line, and exit with the status <code>EXIT_FAILURE</code></li>
<li>The result is stored in the second top element of the stack, and the top element is removed, so that at the end:
<ul>
<li>The top element of the stack contains the result</li>
<li>The stack is one element shorter</li>
</ul></li>
</ul>
  <h3>
    5. nop
  </h3>
  <p>Implement the <code>nop</code> opcode.</p>
<p><strong>The nop opcode</strong></p>
<p>The opcode <code>nop</code> doesn&rsquo;t do anything.</p>
<ul>
<li>Usage: <code>nop</code></li>
</ul>
  <h3>
    6. sub
  </h3>
  <p>Implement the <code>sub</code> opcode.</p>
<p><strong>The sub opcode</strong></p>
<p>The opcode <code>sub</code> subtracts the top element of the stack from the second top element of the stack.</p>
<ul>
<li>Usage: <code>sub</code></li>
<li>If the stack contains less than two elements, print the error message <code>L&lt;line_number&gt;: can&#39;t sub, stack too short</code>, followed by a new line, and exit with the status <code>EXIT_FAILURE</code></li>
<li>The result is stored in the second top element of the stack, and the top element is removed, so that at the end:
<ul>
<li>The top element of the stack contains the result</li>
<li>The stack is one element shorter</li>
</ul></li>
</ul>
  <h3>
    7. div
  </h3>
  <p>Implement the <code>div</code> opcode.</p>
<p><strong>The div opcode</strong></p>
<p>The opcode <code>div</code> divides the second top element of the stack by the top element of the stack.</p>
<ul>
<li>Usage: <code>div</code></li>
<li>If the stack contains less than two elements, print the error message <code>L&lt;line_number&gt;: can&#39;t div, stack too short</code>, followed by a new line, and exit with the status <code>EXIT_FAILURE</code></li>
<li>The result is stored in the second top element of the stack, and the top element is removed, so that at the end:
<ul>
<li>The top element of the stack contains the result</li>
<li>The stack is one element shorter</li>
</ul></li>
<li>If the top element of the stack is <code>0</code>, print the error message <code>L&lt;line_number&gt;: division by zero</code>, followed by a new line, and exit with the status <code>EXIT_FAILURE</code></li>
</ul>
  <h3>
    8. mul
  </h3>
  <p>Implement the <code>mul</code> opcode.</p>
<p><strong>The mul opcode</strong></p>
<p>The opcode <code>mul</code> multiplies the second top element of the stack with the top element of the stack.</p>
<ul>
<li>Usage: <code>mul</code></li>
<li>If the stack contains less than two elements, print the error message <code>L&lt;line_number&gt;: can&#39;t mul, stack too short</code>, followed by a new line, and exit with the status <code>EXIT_FAILURE</code></li>
<li>The result is stored in the second top element of the stack, and the top element is removed, so that at the end:
<ul>
<li>The top element of the stack contains the result</li>
<li>The stack is one element shorter</li>
</ul></li>
</ul>
  <h3>
    9. mod
  </h3>
  <p>Implement the <code>mod</code> opcode.</p>
<p><strong>The mod opcode</strong></p>
<p>The opcode <code>mod</code> computes the rest of the division of the second top element of the stack by the top element of the stack.</p>
<ul>
<li>Usage: <code>mod</code></li>
<li>If the stack contains less than two elements, print the error message <code>L&lt;line_number&gt;: can&#39;t mod, stack too short</code>, followed by a new line, and exit with the status <code>EXIT_FAILURE</code></li>
<li>The result is stored in the second top element of the stack, and the top element is removed, so that at the end:
<ul>
<li>The top element of the stack contains the result</li>
<li>The stack is one element shorter</li>
</ul></li>
<li>If the top element of the stack is <code>0</code>, print the error message <code>L&lt;line_number&gt;: division by zero</code>, followed by a new line, and exit with the status <code>EXIT_FAILURE</code></li>
</ul>
  <h3>
    10. comments
  </h3>
  <p>Every good language comes with the capability of commenting. When the first non-space character of a line is <code>#</code>, treat this line as a comment (don&rsquo;t do anything).</p>
  <h3>
    11. pchar
  </h3>
  <p>Implement the <code>pchar</code> opcode.</p>
<p><strong>The pchar opcode</strong></p>
<p>The opcode <code>pchar</code> prints the char at the top of the stack, followed by a new line.</p>
<ul>
<li>Usage: <code>pchar</code></li>
<li>The integer stored at the top of the stack is treated as the ascii value of the character to be printed</li>
<li>If the value is not in the ascii table (man ascii) print the error message <code>L&lt;line_number&gt;: can&#39;t pchar, value out of range</code>, followed by a new line, and exit with the status <code>EXIT_FAILURE</code></li>
<li>If the stack is empty, print the error message <code>L&lt;line_number&gt;: can&#39;t pchar, stack empty</code>, followed by a new line, and exit with the status <code>EXIT_FAILURE</code></li>
</ul>
  <h3>
    12. pstr
  </h3>
  <p>Implement the <code>pstr</code> opcode.</p>
<p><strong>The pstr opcode</strong></p>
<p>The opcode <code>pstr</code> prints the string starting at the top of the stack, followed by a new line.</p>
<ul>
<li>Usage: <code>pstr</code></li>
<li>The integer stored in each element of the stack is treated as the ascii value of the character to be printed</li>
<li>The string stops when either:
<ul>
<li>the stack is over</li>
<li>the value of the element is 0</li>
<li>the value of the element is not in the ascii table</li>
</ul></li>
<li>If the stack is empty, print only a new line</li>
</ul>
  <h3>
    13. rotl
  </h3>
  <p>Implement the <code>rotl</code> opcode.</p>
<p><strong>The rotl opcode</strong></p>
<p>The opcode <code>rotl</code> rotates the stack to the top.</p>
<ul>
<li>Usage: <code>rotl</code></li>
<li>The top element of the stack becomes the last one, and the second top element of the stack becomes the first one</li>
<li><code>rotl</code> never fails</li>
</ul>
  <h3>
    14. rotr
  </h3>
  <p>Implement the <code>rotr</code> opcode.</p>
<p><strong>The rotr opcode</strong></p>
<p>The opcode <code>rotr</code> rotates the stack to the bottom.</p>
<ul>
<li>Usage: <code>rotr</code></li>
<li>The last element of the stack becomes the top element of the stack</li>
<li><code>rotr</code> never fails</li>
</ul>
  <h3>
    15. stack, queue
  </h3>
  <p>Implement the <code>stack</code> and <code>queue</code> opcodes.</p>
<p><strong>The stack opcode</strong></p>
<p>The opcode <code>stack</code> sets the format of the data to a stack (LIFO). This is the default behavior of the program.</p>
<ul>
<li>Usage: <code>stack</code></li>
</ul>
<p><strong>The queue opcode</strong></p>
<p>The opcode <code>queue</code> sets the format of the data to a queue (FIFO).</p>
<ul>
<li>Usage: <code>queue</code></li>
</ul>
<p>When switching mode:</p>
<ul>
<li>The top of the stack becomes the front of the queue</li>
<li>The front of the queue becomes the top of the stack</li>
</ul>
  <h3>
    16. Holberton
  </h3>
  <p>Write a Brainf*ck script that prints <code>Holberton</code>, followed by a new line.</p>
<ul>
<li>All your Brainf*ck files should be stored inside the <code>bf</code> sub directory</li>
<li>You can install the <code>bf</code> interpreter to test your code: <code>sudo apt-get install bf</code></li>
<li>Read: Brainf*ck </li>
</ul>
        <p>File: <code>1000-holberton.bf</code></p>
  <h3>
    17. Add two digits
  </h3>
  <p>Add two digits given by the user.</p>
<ul>
<li>Read the two digits from stdin, add them, and print the result</li>
<li>The total of the two digits with be one digit-long (&lt;10)</li>
</ul>
        <p>File: <code>1001-add.bf</code></p>
  <h3>
    18. Multiplication
  </h3>
  <p>Multiply two digits given by the user.</p>
<ul>
<li>Read the two digits from stdin, multiply them, and print the result</li>
<li>The result of the multiplication will be one digit-long (&lt;10)</li>
</ul>
        <p>File: <code>1002-mul.bf</code></p>
  <h3>
    19. Multiplication level up
  </h3>
  <p>Multiply two digits given by the user.
<ul>
<li>Read the two digits from stdin, multiply them, and print the result, followed by a new line</li>
</ul>
        <p>File: <code>1003-mul.bf</code></p>
