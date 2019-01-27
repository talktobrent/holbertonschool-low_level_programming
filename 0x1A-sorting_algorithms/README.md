<h1>0x1A. C - Sorting algorithms &amp; Big O</h1>
<p>At the end of this project, you are expected to be able to explain to anyone, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>At least four different sorting algorithms</li>
<li>What is the Big O notation, and how to evaluate the time complexity of an algorithm</li>
<li>How to select the best sorting algorithm for a given input</li>
<li>What is a stable sorting algorithm</li>
</ul>
<h2>Tasks</h2>
  <h3>
    0. Bubble sort
  </h3>
<p>Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm</p>
<ul>
<li>Prototype: <code>void bubble_sort(int *array, size_t size);</code></li>
<li>You&rsquo;re expected to print the <code>array</code> after each time you swap two elements (See example below)</li>
</ul>
<p>Write in the file <code>0-O</code>, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:</p>
<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>
        <p>File: <code>0-bubble_sort.c, 0-O</code></p>
  <h3>
    1. Insertion sort
  </h3>
<p>Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm</p>
<ul>
<li>Prototype: <code>void insertion_sort_list(listint_t **list);</code></li>
<li>You are not allowed to modify the integer <code>n</code> of a node. You have to swap the nodes themselves.</li>
<li>You&rsquo;re expected to print the <code>list</code> after each time you swap two elements (See example below)</li>
</ul>
<p>Write in the file <code>1-O</code>, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:</p>
<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>
        <p>File: <code>1-insertion_sort_list.c, 1-O</code></p>
  <h3>
    2. Selection sort
  </h3>
<p>Write a function that sorts an array of integers in ascending order using the Selection sort algorithm</p>
<ul>
<li>Prototype: <code>void selection_sort(int *array, size_t size);</code></li>
<li>You&rsquo;re expected to print the <code>array</code> after each time you swap two elements (See example below)</li>
</ul>
<p>Write in the file <code>2-O</code>, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:</p>
<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>
        <p>File: <code>2-selection_sort.c, 2-O</code></p>
  <h3>
    3. Quick sort
  </h3>
  <p>Write a function that sorts an array of integers in ascending order using the Quick sort algorithm</p>
<ul>
<li>Prototype: <code>void quick_sort(int *array, size_t size);</code></li>
<li>You must implement the <code>Lomuto</code> partition scheme.</li>
<li>The pivot should always be the last element of the partition being sorted.</li>
<li>You&rsquo;re expected to print the <code>array</code> after each time you swap two elements (See example below)</li>
</ul>
<p>Write in the file <code>3-O</code>, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:</p>
<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>
        <p>File: <code>3-quick_sort.c, 3-O</code></p>
  <h3>
    4. Shell sort - Knuth Sequence
  </h3>
  <p>Write a function that sorts an array of integers in ascending order using the Shell sort algorithm, using the <code>Knuth sequence</code></p>
<ul>
<li>Prototype: <code>void shell_sort(int *array, size_t size);</code></li>
<li>You must use the following sequence of intervals (a.k.a the Knuth sequence):
<ul>
<li><code>n+1 = n * 3 + 1</code></li>
<li><code>1, 4, 13, 40, 121, ...</code></li>
</ul></li>
<li>You&rsquo;re expected to print the <code>array</code> each time you decrease the interval (See example below).</li>
</ul>
        <p>File: <code>100-shell_sort.c</code></p>
  <h3>
    5. Cocktail shaker sort
  </h3>
  <p>Write a function that sorts a doubly linked list of integers in ascending order using the Cocktail shaker sort algorithm</p>
<ul>
<li>Prototype: <code>void cocktail_sort_list(listint_t **list);</code></li>
<li>You are not allowed to modify the integer <code>n</code> of a node. You have to swap the nodes themselves.</li>
<li>You&rsquo;re expected to print the <code>list</code> after each time you swap two elements (See example below)</li>
</ul>
<p>Write in the file <code>101-O</code>, the big O notations of the time complexity of the Cocktail shaker sort algorithm, with 1 notation per line:</p>
<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>
        <p>File: <code>101-cocktail_sort_list.c, 101-O</code></p>
  <h3>
    6. Counting sort
  </h3>
  <p>Write a function that sorts an array of integers in ascending order using the Counting sort algorithm</p>
<ul>
<li>Prototype: <code>void counting_sort(int *array, size_t size);</code></li>
<li>You can assume that <code>array</code> will contain only numbers <code>&gt;= 0</code></li>
<li>You are allowed to use <code>malloc</code> and <code>free</code> for this task</li>
<li>You&rsquo;re expected to print your counting array once it is set up (See example below)
<ul>
<li>This array is of size <code>k + 1</code> where <code>k</code> is the largest number in <code>array</code></li>
</ul></li>
</ul>
<p>Write in the file <code>102-O</code>, the big O notations of the time complexity of the Counting sort algorithm, with 1 notation per line:</p>
<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>
        <p>File: <code>102-counting_sort.c, 102-O</code></p>
  <h3>
    7. Merge sort
  </h3>
  <p>Write a function that sorts an array of integers in ascending order using the Merge sort algorithm</p>
<ul>
<li>Prototype: <code>void merge_sort(int *array, size_t size);</code></li>
<li>You must implement the <code>top-down</code> merge sort algorithm
<ul>
<li>When you divide an array into two sub-arrays, the size of the left array should always be &lt;= the size of the right array. i.e. <code>{1, 2, 3, 4, 5}</code> -&gt; <code>{1, 2}, {3, 4, 5}</code></li>
<li> Sort the left array before the right array</li>
</ul></li>
<li>You are allowed to use <code>printf</code></li>
<li>You are allowed to use <code>malloc</code> and <code>free</code> only once (only one <strong>call</strong>)</li>
<li>Output: see example</li>
</ul>
<p>Write in the file <code>103-O</code>, the big O notations of the time complexity of the Merge sort algorithm, with 1 notation per line:</p>
<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>
        <p>File: <code>103-merge_sort.c, 103-O</code></p>
  <h3>
    8. Heap sort
  </h3>
  <p>Write a function that sorts an array of integers in ascending order using the Heap sort algorithm</p>
<ul>
<li>Prototype: <code>void heap_sort(int *array, size_t size);</code></li>
<li>You must implement the <code>sift-down</code> heap sort algorithm</li>
<li>You&rsquo;re expected to print the <code>array</code> after each time you swap two elements (See example below)</li>
</ul>
<p>Write in the file <code>104-O</code>, the big O notations of the time complexity of the Heap sort algorithm, with 1 notation per line:</p>
<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>
        <p>File: <code>104-heap_sort.c, 104-O</code></p>
  <h3>
    9. Radix sort
  </h3>
  <p>Write a function that sorts an array of integers in ascending order using the Radix sort algorithm</p>
<ul>
<li>Prototype: <code>void radix_sort(int *array, size_t size);</code></li>
<li>You must implement the <code>LSD</code> radix sort algorithm</li>
<li>You can assume that <code>array</code> will contain only numbers <code>&gt;= 0</code></li>
<li>You are allowed to use <code>malloc</code> and <code>free</code> for this task</li>
<li>You&rsquo;re expected to print the <code>array</code> each time you increase your <code>significant digit</code> (See example below)</li>
</ul>
<p>Write in the file <code>105-O</code>, the big O notations of the time complexity of the LSD Radix sort algorithm, with 1 notation per line:</p>
<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>
        <p>File: <code>105-radix_sort.c, 105-O</code></p>
  <h3>
    10. Bitonic sort
  </h3>
  <p>Write a function that sorts an array of integers in ascending order using the Bitonic sort algorithm</p>
<ul>
<li>Prototype: <code>void bitonic_sort(int *array, size_t size);</code></li>
<li>You can assume that <code>size</code> will be equal to <code>2^k</code>, where <code>k &gt;= 0</code> (when <code>array</code> is not <code>NULL</code> &hellip;)</li>
<li>You are allowed to use <code>printf</code></li>
<li>You&rsquo;re expected to print the <code>array</code> each time you swap two elements (See example below)</li>
<li>Output: see example</li>
</ul>
<p>Write in the file <code>106-O</code>, the big O notations of the time complexity of the Bitonic sort algorithm, with 1 notation per line:</p>
<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>
        <p>File: <code>106-bitonic_sort.c, 106-O</code></p>
  <h3>
    11. Quick Sort - Hoare Partition scheme
  </h3>
  <p>Write a function that sorts an array of integers in ascending order using the Quick sort algorithm</p>
<ul>
<li>Prototype: <code>void quick_sort_hoare(int *array, size_t size);</code></li>
<li>You must implement the <code>Hoare</code> partition scheme.</li>
<li>The pivot should always be the last element of the partition being sorted.</li>
<li>You&rsquo;re expected to print the <code>array</code> after each time you swap two elements (See example below)</li>
</ul>
<p>Write in the file <code>107-O</code>, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:</p>
<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>
<p>Another example of output:</p>
        <p>File: <code>107-quick_sort_hoare.c</code></p>
  <h3>
    12. Dealer
  </h3>
<p>Write a function that sorts a deck of cards.</p>
<ul>
<li>Prototype: <code>void sort_deck(deck_node_t **deck);</code></li>
<li>You are allowed to use the C standard library function <code>qsort</code></li>
<li>Please use the following data structures:</li>
</ul>
<ul>
<li>You have to push you <code>deck.h</code> header file, containing the previous data structures definition</li>
<li>Each node of the doubly linked list contains a card that you cannot modify. You have to swap the nodes.</li>
<li>You can assume there is exactly <code>52</code> elements in the doubly linked list.</li>
<li>You are free to use the sorting algorithm of your choice</li>
<li>The deck must be ordered:
<ul>
<li>From <code>Ace</code> to <code>King</code></li>
<li>From Spades to Diamonds</li>
<li>See example below</li>
</ul></li>
</ul>
        <p>File: <code>1000-sort_deck.c, deck.h</code></p>
