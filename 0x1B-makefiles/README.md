<h1>0x1B. C - Makefiles</h1>
<p>At the end of this project, you are expected to be able to explain to anyone, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What are <code>make</code>, Makefiles</li>
<li>When, why and how to use Makefiles</li>
<li>What are a rules and how to set and use them</li>
<li>What are explicit and implicit rules</li>
<li>What are the most common / useful rules</li>
<li>What are variables and how to set and use them</li>
</ul>
<h2>Tasks</h2>
  <h3>
    0. make -f 0-Makefile
  </h3>
  <p>Create your first Makefile.</p>
<p>Requirements:</p>
<ul>
<li>name of the executable: <code>holberton</code></li>
<li>rules: <code>all</code>
<ul>
<li>The <code>all</code> rule builds your executable</li>
</ul></li>
<li>variables: none</li>
</ul>
        <p>File: <code>0-Makefile</code></p>
  <h3>
    1. make -f 1-Makefile
  </h3>
  <p>Requirements:</p>
<ul>
<li>name of the executable: <code>holberton</code></li>
<li>rules: <code>all</code>
<ul>
<li>The <code>all</code> rule builds your executable</li>
</ul></li>
<li>variables: <code>CC</code>, <code>SRC</code>
<ul>
<li><code>CC</code>: the compiler to be used</li>
<li><code>SRC</code>: the <code>.c</code> files</li>
</ul></li>
</ul>
        <p>File: <code>1-Makefile</code></p>
  <h3>
    2. make -f 2-Makefile
  </h3>
  <p>Create your first useful Makefile.</p>
<p>Requirements:</p>
<ul>
<li>name of the executable: <code>holberton</code></li>
<li>rules: <code>all</code>
<ul>
<li>The <code>all</code> rule builds your executable</li>
</ul></li>
<li>variables: <code>CC</code>, <code>SRC</code>, <code>OBJ</code>, <code>NAME</code>
<ul>
<li><code>CC</code>: the compiler to be used</li>
<li><code>SRC</code>: the <code>.c</code> files</li>
<li><code>OBJ</code>: the <code>.o</code> files</li>
<li><code>NAME</code>: the name of the executable</li>
</ul></li>
<li>The <code>all</code> rule should recompile only the updated source files</li>
<li>You are not allowed to have a list of all the <code>.o</code> files</li>
</ul>
        <p>File: <code>2-Makefile</code></p>
  <h3>
    3. make -f 3-Makefile
  </h3>
  <p>Requirements:</p>
<ul>
<li>name of the executable: <code>holberton</code></li>
<li>rules: <code>all</code>, <code>clean</code>, <code>oclean</code>, <code>fclean</code>, <code>re</code>
<ul>
<li><code>all</code>: builds your executable</li>
<li><code>clean</code>: deletes all Emacs and Vim temporary files along with the executable</li>
<li><code>oclean</code>: deletes the object files</li>
<li><code>fclean</code>: deletes the Emacs temporary files, the executable, and the object files</li>
<li><code>re</code>: forces recompilation of all source files</li>
</ul></li>
<li>variables: <code>CC</code>, <code>SRC</code>, <code>OBJ</code>, <code>NAME</code>, <code>RM</code>
<ul>
<li><code>CC</code>: the compiler to be used</li>
<li><code>SRC</code>: the <code>.c</code> files</li>
<li><code>OBJ</code>: the <code>.o</code> files</li>
<li><code>NAME</code>: the name of the executable</li>
<li><code>RM</code>: the program to delete files</li>
</ul></li>
<li>The <code>all</code> rule should recompile only the updated source files</li>
<li>The <code>clean</code>, <code>oclean</code>, <code>fclean</code>, <code>re</code> rules should never fail</li>
<li>You are not allowed to have a list of all the <code>.o</code> files</li>
</ul>
        <p>File: <code>3-Makefile</code></p>
  <h3>
    4. A complete Makefile
  </h3>
  <p>Requirements:</p>
<ul>
<li>name of the executable: <code>holberton</code></li>
<li>rules: <code>all</code>, <code>clean</code>, <code>fclean</code>, <code>oclean</code>, <code>re</code>
<ul>
<li><code>all</code>: builds your executable</li>
<li><code>clean</code>: deletes all Emacs and Vim temporary files along with the executable</li>
<li><code>oclean</code>: deletes the object files</li>
<li><code>fclean</code>: deletes the Emacs temporary files, the executable, and the object files</li>
<li><code>re</code>: forces recompilation of all source files</li>
</ul></li>
<li>variables: <code>CC</code>, <code>SRC</code>, <code>OBJ</code>, <code>NAME</code>, <code>RM</code>, <code>CFLAGS</code>
<ul>
<li><code>CC</code>: the compiler to be used</li>
<li><code>SRC</code>: the <code>.c</code> files</li>
<li><code>OBJ</code>: the <code>.o</code> files</li>
<li><code>NAME</code>: the name of the executable</li>
<li><code>RM</code>: the program to delete files</li>
<li><code>CFLAGS</code>: your favorite compiler flags: <code>-Wall -Werror -Wextra -pedantic</code></li>
</ul></li>
<li>The <code>all</code> rule should recompile only the updated source files</li>
<li><p>The <code>clean</code>, <code>oclean</code>, <code>fclean</code>, <code>re</code> rules should never fail</p></li>
<li><p>You are not allowed to have a list of all the <code>.o</code> files</p></li>
</ul>
        <p>File: <code>4-Makefile</code></p>
  <h3>
    5. Island Perimeter
  </h3>
  <p><strong>Technical interview preparation</strong>: </p>
<ul>
<li>You are not allowed to google anything</li>
<li>Whiteboard first</li>
</ul>
<p>Create a function <code>def island_perimeter(grid):</code> that returns the perimeter of the island described in <code>grid</code>:</p>
<ul>
<li><code>grid</code> is a list of list of integers:
<ul>
<li>0 represents a water zone</li>
<li>1 represents a land zone</li>
<li>One cell is a square with side length 1</li>
<li>Grid cells are connected horizontally/vertically (not diagonally). </li>
<li>Grid is rectangular, width and height don&rsquo;t exceed 100</li>
</ul></li>
<li>Grid is completely surrounded by water, and there is one island (or nothing).</li>
<li>The island doesn&rsquo;t have &ldquo;lakes&rdquo; (water inside that isn&rsquo;t connected to the water around the island).</li>
</ul>
<p>Requirements:</p>
<ul>
<li>First line contains <code>#!/usr/bin/python3</code></li>
<li>You are not allowed to import any module</li>
<li>Module and function must be documented</li>
</ul>
        <p>File: <code>5-island_perimeter.py</code></p>
  <h3>
    6. make -f 100-Makefile
  </h3>
  <p>Requirements:</p>
<ul>
<li>name of the executable: <code>holberton</code></li>
<li>rules: <code>all</code>, <code>clean</code>, <code>fclean</code>, <code>oclean</code>, <code>re</code>
<ul>
<li><code>all</code>: builds your executable</li>
<li><code>clean</code>: deletes all Emacs and Vim temporary files along with the executable</li>
<li><code>oclean</code>: deletes the object files</li>
<li><code>fclean</code>: deletes the Emacs temporary files, the executable, and the object files</li>
<li><code>re</code>: forces recompilation of all source files</li>
</ul></li>
<li>variables: <code>CC</code>, <code>SRC</code>, <code>OBJ</code>, <code>NAME</code>, <code>RM</code>, <code>CFLAGS</code>
<ul>
<li><code>CC</code>: the compiler to be used</li>
<li><code>SRC</code>: the <code>.c</code> files</li>
<li><code>OBJ</code>: the <code>.o</code> files</li>
<li><code>NAME</code>: the name of the executable</li>
<li><code>RM</code>: the program to delete files</li>
<li><code>CFLAGS</code>: your favorite compiler flags: <code>-Wall -Werror -Wextra -pedantic</code></li>
</ul></li>
<li>The <code>all</code> rule should recompile only the updated source files</li>
<li>The <code>clean</code>, <code>oclean</code>, <code>fclean</code>, <code>re</code> rules should never fail</li>
<li>You are not allowed to have a list of all the <code>.o</code> files</li>
<li>You have to use <code>$(RM)</code> for the cleaning up rules, but you are not allowed to set the <code>RM</code> variable</li>
<li>You are not allowed to use the string <code>$(CC)</code> more than once in your Makefile</li>
<li>You are only allowed to use the string <code>$(RM)</code> twice in your Makefile</li>
<li>You are not allowed to use the string <code>$(CFLAGS)</code> (but the compiler should still use the flags you set in this variable)</li>
<li>You are not allowed to have an <code>$(OBJ)</code> rule</li>
<li>You are not allowed to use the <code>%.o: %.c</code> rule</li>
<li>Your Makefile should work even if there is a file in the folder that has the same name as one of your rule</li>
<li>Your Makefile should not compile if the header file <code>m.h</code> is missing</li>
</ul>
        <p>File: <code>100-Makefile</code></p>
