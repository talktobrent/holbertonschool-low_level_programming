<h1>0x17. C - Dynamic libraries</h1>
<p>At the end of this project, you are expected to be able to explain to anyone, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What is a dynamic library, how does it work, how to create one, and how to use it</li>
<li>What is the environment variable <code>$LD_LIBRARY_PATH</code> and how to use it</li>
<li>What are the differences between static and shared libraries</li>
<li>Basic usage <code>nm</code>, <code>ldd</code>, <code>ldconfig</code></li>
</ul>
<h2>Tasks</h2>
  <h3>
    0. A library is not a luxury but one of the necessities of life
  </h3>
  <p>Create the dynamic library libholberton.so containing all the functions listed below:</p>
<p>If you haven&rsquo;t coded all of the above functions create empty ones, with the right prototype.
Don&rsquo;t forget to push your <code>holberton.h</code> file in your repository, containing at least all the prototypes of the above functions.</p>
        <p>File: <code>libholberton.so, holberton.h</code></p>
  <h3>
    1. Without libraries what have we? We have no past and no future
  </h3>
  <p>Create a script that creates a dynamic library called <code>liball.so</code> from all the <code>.c</code> files that are in the current directory.</p>
        <p>File: <code>1-create_dynamic_lib.sh</code></p>
  <h3>
    2. Either write something worth reading or do something worth writing
  </h3>
  <p>Write a blog post describing the differences between static and dynamic libraries. It should cover:</p>
<ul>
<li>Why using libraries in general</li>
<li>How do they work</li>
<li>How to create them (Linux only)</li>
<li>How to use them (Linux only)</li>
<li>What are the differences between static and dynamic libraries</li>
<li>What are the advantages and drawbacks of each of them</li>
</ul>
<p>Your posts should have examples and at least one picture, at the top.
Publish your blog post on Medium or LinkedIn, and share it at least on Twitter and LinkedIn.</p>
<p>When done, please add all urls below (blog post, tweet, etc.)</p>
<p>Please, remember that these blogs must be written in English to further your technical ability in a variety of settings</p>
  <h3>
    3. Let&#39;s call C functions from Python
  </h3>
  <p>I know, you&rsquo;re missing C when coding in Python. So let&rsquo;s fix that!</p>
<p>Create a dynamic library that contains C functions that can be called from Python. See example for more detail.</p>
        <p>File: <code>100-operations.so</code></p>
  <h3>
    4. Code injection: Win the Giga Millions!
  </h3>
<p>I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?</p>
<ul>
<li>Our mole got us a copy of the program, you can download it here. Our mole also gave us a piece of documentation:</li>
</ul>
<ul>
<li>You can&rsquo;t modify the program <code>gm</code> itself as Master Sysadmin Sylvain (MSS) always checks its MD5 before running it</li>
<li>The system is an <code>Linux Ubuntu 16.04</code></li>
<li>The server has internet access</li>
<li>Our mole will be only able to run two commands from a shell script, without being detected by MSS</li>
<li>Your shell script should be maximum 3 lines long. You are not allowed to use <code>;</code>, <code>&amp;&amp;</code>, <code>||</code>, <code>|</code>, &#96; (it would be detected by MSS), and have a maximum of two commands</li>
<li>Our mole has only the authorization to upload one file on the server. It will be your shell script</li>
<li>Our mole will run your shell script this way: <code>mss@gm_server$ . ./101-make_me_win.sh</code></li>
<li>Our mole will run your shell script from the same directory containing the program <code>gm</code>, exactly 98 seconds before MSS runs <code>gm</code> with my numbers: <code>./gm 9 8 10 24 75 9</code></li>
<li>MSS will use the same terminal and session than our mole</li>
<li>Before running the <code>gm</code> program, MSS always check the content of the directory</li>
<li>MSS always exit after running the program <code>gm</code></li>
<li>TL;DR; This is what is going to happen</li>
</ul>
<p>Tip: <code>LD_PRELOAD</code></p>
        <p>File: <code>101-make_me_win.sh</code></p>
