<h1>0x09. C - argc, argv</h1>
<p>At the end of this project, you are expected to be able to explain to anyone, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>How to use arguments passed to your program</li>
<li>What are two prototypes of <code>main</code> that you know of, and in which case do you use one or the other</li>
<li>How to use <code>__attribute__((unused))</code> or <code>(void)</code> to compile functions with unused variables or parameters</li>
</ul>
<h2>Tasks</h2>
  <h3>
    0. It ain&#39;t what they call you, it&#39;s what you answer to
  </h3>
  <p>Write a program that prints its name, followed by a new line.</p>
<ul>
<li>If you rename the program, it will print the new name, without having to compile it again</li>
<li>You should not remove the path before the name of the program</li>
</ul>
        <p>File: <code>0-whatsmyname.c</code></p>
  <h3>
    1. Silence is argument carried out by other means
  </h3>
  <p>Write a program that prints the number of arguments passed into it.</p>
<ul>
<li>Your program should print a number, followed by a new line</li>
</ul>
        <p>File: <code>1-args.c</code></p>
  <h3>
    2. The best argument against democracy is a five-minute conversation with the average voter
  </h3>
  <p>Write a program that prints all arguments it receives.</p>
<ul>
<li>All arguments should be printed, including the first one</li>
<li>Only print one argument per line, ending with a new line</li>
</ul>
        <p>File: <code>2-args.c</code></p>
  <h3>
    3. Neither irony nor sarcasm is argument
  </h3>
  <p>Write a program that multiplies two numbers.</p>
<ul>
<li>Your program should print the result of the multiplication, followed by a new line</li>
<li>You can assume that the two numbers and result of the multiplication can be stored in an integer</li>
<li>If the program does not receive two arguments, your program should print <code>Error</code>, followed by a new line, and return <code>1</code></li>
</ul>
        <p>File: <code>3-mul.c</code></p>
  <h3>
    4. To infinity and beyond
  </h3>
  <p>Write a program that adds positive numbers.</p>
<ul>
<li>Print the result, followed by a new line</li>
<li>If no number is passed to the program, print <code>0</code>, followed by a new line</li>
<li>If one of the number contains symbols that are not digits, print <code>Error</code>, followed by a new line, and return <code>1</code></li>
<li>You can assume that numbers and the addition of all the numbers can be stored in an <code>int</code></li>
</ul>
        <p>File: <code>4-add.c</code></p>
  <h3>
    5. Minimal Number of Coins for Change
  </h3>
  <p>Write a program that prints the minimum number of coins to make change for an amount of money.</p>
<ul>
<li>Usage: <code>./change cents</code></li>
<li>where <code>cents</code> is the amount of cents you need to give back</li>
<li>if the number of arguments passed to your program is not exactly <code>1</code>, print <code>Error</code>, followed by a new line, and return <code>1</code></li>
<li>you should use <code>atoi</code> to parse the parameter passed to your program</li>
<li>If the number passed as the argument is negative, print <code>0</code>, followed by a new line</li>
<li>You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent</li>
</ul>
        <p>File: <code>100-change.c</code></p>
