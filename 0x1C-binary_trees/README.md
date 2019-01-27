<h1>0x1C. C - Binary trees</h1>
<p>At the end of this project, you are expected to be able to explain to anyone, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What is a binary tree</li>
<li>What is the difference between a binary tree and a Binary Search Tree</li>
<li>What is the possible gain in terms of time complexity compared to linked lists</li>
<li>What are the depth, the height, the size of a binary tree</li>
<li>What are the different traversal methods to go through a binary tree</li>
<li>What is a complete, a full, a perfect, a balanced binary tree</li>
</ul>
<h2>Tasks</h2>
  <h3>
    0. New node
  </h3>
  <p>Write a function that creates a binary tree node</p>
<ul>
<li>Prototype: <code>binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);</code></li>
<li>Where <code>parent</code> is a pointer to the parent node of the node to create</li>
<li>And <code>value</code> is the value to put in the new node</li>
<li>When created, a node does not have any child</li>
<li>Your function must return a pointer to the new node, or <code>NULL</code> on failure</li>
</ul>
        <p>File: <code>0-binary_tree_node.c</code></p>
  <h3>
    1. Insert left
  </h3>
  <p>Write a function that inserts a node as the left-child of another node</p>
<ul>
<li>Prototype: <code>binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);</code></li>
<li>Where <code>parent</code> is a pointer to the node to insert the left-child in</li>
<li>And <code>value</code> is the value to store in the new node</li>
<li>Your function must return a pointer to the created node, or <code>NULL</code> on failure or if <code>parent</code> is <code>NULL</code></li>
<li>If <code>parent</code> already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.</li>
</ul>
        <p>File: <code>1-binary_tree_insert_left.c</code></p>
  <h3>
    2. Insert right
  </h3>
  <p>Write a function that inserts a node as the right-child of another node</p>
<ul>
<li>Prototype: <code>binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);</code></li>
<li>Where <code>parent</code> is a pointer to the node to insert the right-child in</li>
<li>And <code>value</code> is the value to store in the new node</li>
<li>Your function must return a pointer to the created node, or <code>NULL</code> on failure or if <code>parent</code> is <code>NULL</code></li>
<li>If <code>parent</code> already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.</li>
</ul>
        <p>File: <code>2-binary_tree_insert_right.c</code></p>
  <h3>
    3. Delete
  </h3>
  <p>Write a function that deletes an entire binary tree</p>
<ul>
<li>Prototype: <code>void binary_tree_delete(binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to delete</li>
<li>If <code>tree</code> is <code>NULL</code>, do nothing</li>
</ul>
        <p>File: <code>3-binary_tree_delete.c</code></p>
  <h3>
    4. Is leaf
  </h3>
  <p>Write a function that checks if a node is a leaf</p>
<ul>
<li>Prototype: <code>int binary_tree_is_leaf(const binary_tree_t *node);</code></li>
<li>Where <code>node</code> is a pointer to the node to check</li>
<li>Your function must return <code>1</code> if <code>node</code> is a leaf, otherwise <code>0</code></li>
<li>If <code>node</code> is <code>NULL</code>, return <code>0</code></li>
</ul>
        <p>File: <code>4-binary_tree_is_leaf.c</code></p>
  <h3>
    5. Is root
  </h3>
  <p>Write a function that checks if a given node is a root</p>
<ul>
<li>Prototype: <code>int binary_tree_is_root(const binary_tree_t *node);</code></li>
<li>Where <code>node</code> is a pointer to the node to check</li>
<li>Your function must return <code>1</code> if <code>node</code> is a root, otherwise <code>0</code></li>
<li>If <code>node</code> is <code>NULL</code>, return <code>0</code></li>
</ul>
        <p>File: <code>5-binary_tree_is_root.c</code></p>
  <h3>
    6. Pre-order traversal
  </h3>
  <p>Write a function that goes through a binary tree using pre-order traversal</p>
<ul>
<li>Prototype: <code>void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to traverse</li>
<li>And <code>func</code> is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.</li>
<li>If <code>tree</code> or <code>func</code> is <code>NULL</code>, do nothing</li>
</ul>
        <p>File: <code>6-binary_tree_preorder.c</code></p>
  <h3>
    7. In-order traversal
  </h3>
  <p>Write a function that goes through a binary tree using in-order traversal</p>
<ul>
<li>Prototype: <code>void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to traverse</li>
<li>And <code>func</code> is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.</li>
<li>If <code>tree</code> or <code>func</code> is <code>NULL</code>, do nothing</li>
</ul>
        <p>File: <code>7-binary_tree_inorder.c</code></p>
  <h3>
    8. Post-order traversal
  </h3>
  <p>Write a function that goes through a binary tree using post-order traversal</p>
<ul>
<li>Prototype: <code>void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to traverse</li>
<li>And <code>func</code> is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.</li>
<li>If <code>tree</code> or <code>func</code> is <code>NULL</code>, do nothing</li>
</ul>
        <p>File: <code>8-binary_tree_postorder.c</code></p>
  <h3>
    9. Height
  </h3>
  <p>Write a function that measures the height of a binary tree</p>
<ul>
<li>Prototype: <code>size_t binary_tree_height(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to measure the height.</li>
<li>If <code>tree</code> is <code>NULL</code>, your function must return <code>0</code></li>
</ul>
        <p>File: <code>9-binary_tree_height.c</code></p>
  <h3>
    10. Depth
  </h3>
  <p>Write a function that measures the depth of a node in a binary tree</p>
<ul>
<li>Prototype: <code>size_t binary_tree_depth(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the node to measure the depth</li>
<li>If <code>tree</code> is <code>NULL</code>, your function must return <code>0</code></li>
</ul>
        <p>File: <code>10-binary_tree_depth.c</code></p>
  <h3>
    11. Size
  </h3>
  <p>Write a function that measures the size of a binary tree</p>
<ul>
<li>Prototype: <code>size_t binary_tree_size(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to measure the size</li>
<li>If <code>tree</code> is <code>NULL</code>, the function must return 0</li>
</ul>
        <p>File: <code>11-binary_tree_size.c</code></p>
  <h3>
    12. Leaves
  </h3>
  <p>Write a function that counts the leaves in a binary tree</p>
<ul>
<li>Prototype: <code>size_t binary_tree_leaves(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to count the number of leaves</li>
<li>If <code>tree</code> is <code>NULL</code>, the function must return 0</li>
<li>A <code>NULL</code> pointer is not a leaf</li>
</ul>
        <p>File: <code>12-binary_tree_leaves.c</code></p>
  <h3>
    13. Nodes
  </h3>
  <p>Write a function that counts the nodes with at least 1 child in a binary tree</p>
<ul>
<li>Prototype: <code>size_t binary_tree_nodes(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to count the number of nodes</li>
<li>If <code>tree</code> is <code>NULL</code>, the function must return 0</li>
<li>A <code>NULL</code> pointer is not a node</li>
</ul>
        <p>File: <code>13-binary_tree_nodes.c</code></p>
  <h3>
    14. Balance factor
  </h3>
  <p>Write a function that measures the balance factor of a binary tree</p>
<ul>
<li>Prototype: <code>int binary_tree_balance(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to measure the balance factor</li>
<li>If <code>tree</code> is <code>NULL</code>, return <code>0</code></li>
</ul>
        <p>File: <code>14-binary_tree_balance.c</code></p>
  <h3>
    15. Is full
  </h3>
  <p>Write a function that checks if a binary tree is full</p>
<ul>
<li>Prototype: <code>int binary_tree_is_full(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to check</li>
<li>If <code>tree</code> is <code>NULL</code>, your function must return <code>0</code></li>
</ul>
        <p>File: <code>15-binary_tree_is_full.c</code></p>
  <h3>
    16. Is perfect
  </h3>
  <p>Write a function that checks if a binary tree is perfect</p>
<ul>
<li>Prototype: <code>int binary_tree_is_perfect(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to check</li>
<li>If <code>tree</code> is <code>NULL</code>, your function must return <code>0</code></li>
</ul>
        <p>File: <code>16-binary_tree_is_perfect.c</code></p>
  <h3>
    17. Sibling
  </h3>
  <p>Write a function that finds the sibling of a node</p>
<ul>
<li>Prototype: <code>binary_tree_t *binary_tree_sibling(binary_tree_t *node);</code></li>
<li>Where <code>node</code> is a pointer to the node to find the sibling</li>
<li>Your function must return a pointer to the sibling node</li>
<li>If <code>node</code> is <code>NULL</code> or the parent is <code>NULL</code>, return <code>NULL</code></li>
<li>If <code>node</code> has no sibling, return <code>NULL</code></li>
</ul>
        <p>File: <code>17-binary_tree_sibling.c</code></p>
  <h3>
    18. Uncle
  </h3>
  <p>Write a function that finds the uncle of a node</p>
<ul>
<li>Prototype: <code>binary_tree_t *binary_tree_uncle(binary_tree_t *node);</code></li>
<li>Where <code>node</code> is a pointer to the node to find the uncle</li>
<li>Your function must return a pointer to the uncle node</li>
<li>If <code>node</code> is <code>NULL</code>, return <code>NULL</code></li>
<li>If <code>node</code> has no uncle, return <code>NULL</code></li>
</ul>
        <p>File: <code>18-binary_tree_uncle.c</code></p>
  <h3>
    19. Lowest common ancestor
  </h3>
  <p>Write a function that finds the lowest common ancestor of two nodes</p>
<ul>
<li>Prototype: <code>binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);</code></li>
<li>Where <code>first</code> is a pointer to the first node</li>
<li>And <code>second</code> is a pointer to the second node</li>
<li>Your function must return a pointer to the lowest common ancestor node of the two given nodes</li>
<li>If no common ancestor was found, your function must return <code>NULL</code></li>
</ul>
        <p>File: <code>100-binary_trees_ancestor.c</code></p>
  <h3>
    20. Level-order traversal
  </h3>
  <p>Write a function that goes through a binary tree using level-order traversal</p>
<ul>
<li>Prototype: <code>void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to traverse</li>
<li>And <code>func</code> is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.</li>
<li>If <code>tree</code> or <code>func</code> is <code>NULL</code>, do nothing</li>
</ul>
        <p>File: <code>101-binary_tree_levelorder.c</code></p>
  <h3>
    21. Is complete
  </h3>
  <p>Write a function that checks if a binary tree is complete</p>
<ul>
<li>Prototype: <code>int binary_tree_is_complete(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to check</li>
<li>If <code>tree</code> is <code>NULL</code>, your function must return <code>0</code></li>
</ul>
        <p>File: <code>102-binary_tree_is_complete.c</code></p>
  <h3>
    22. Rotate left
  </h3>
  <p>Write a function that performs a left-rotation on a binary tree</p>
<ul>
<li>Prototype: <code>binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to rotate</li>
<li>Your function must return a pointer to the new root node of the tree once rotated</li>
</ul>
        <p>File: <code>103-binary_tree_rotate_left.c</code></p>
  <h3>
    23. Rotate right
  </h3>
  <p>Write a function that performs a right-rotation on a binary tree</p>
<ul>
<li>Prototype: <code>binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to rotate</li>
<li>Your function must return a pointer to the new root node of the tree once rotated</li>
</ul>
        <p>File: <code>104-binary_tree_rotate_right.c</code></p>
  <h3>
    24. Is BST
  </h3>
  <p>Write a function that checks if a binary tree is a valid Binary Search Tree</p>
<ul>
<li>Prototype: <code>int binary_tree_is_bst(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to check</li>
<li>Your function must return <code>1</code> if <code>tree</code> is a valid BST, and <code>0</code> otherwise</li>
<li>If <code>tree</code> is <code>NULL</code>, return <code>0</code></li>
</ul>
<p>Properties of a Binary Search Tree:</p>
<ul>
<li>The left subtree of a node contains only nodes with values less than the node’s value</li>
<li>The right subtree of a node contains only nodes with values greater than the node’s value</li>
<li>The left and right subtree each must also be a binary search tree</li>
<li>There must be no duplicate values</li>
</ul>
        <p>File: <code>110-binary_tree_is_bst.c</code></p>
  <h3>
    25. BST - Insert
  </h3>
  <p>Write a function that inserts a value in a Binary Search Tree</p>
<ul>
<li>Prototype: <code>bst_t *bst_insert(bst_t **tree, int value);</code></li>
<li>Where <code>tree</code> is a double pointer to the root node of the BST to insert the value</li>
<li>And <code>value</code> is the value to store in the node to be inserted</li>
<li>Your function must return a pointer to the created node, or <code>NULL</code> on failure</li>
<li>If the address stored in <code>tree</code> is <code>NULL</code>, the created node must become the root node.</li>
<li>If the value is already present in the tree, it must be ignored</li>
</ul>
<p>Your file <code>0-binary_tree_node.c</code> will be compile during the correction</p>
        <p>File: <code>111-bst_insert.c, 0-binary_tree_node.c</code></p>
  <h3>
    26. BST - Array to BST
  </h3>
  <p>Write a function that builds a Binary Search Tree from an array</p>
<ul>
<li>Prototype: <code>bst_t *array_to_bst(int *array, size_t size);</code></li>
<li>Where <code>array</code> is a pointer to the first element of the array to be converted</li>
<li>And <code>size</code> is the number of element in the array</li>
<li>Your function must return a pointer to the root node of the created BST, or <code>NULL</code> on failure</li>
<li>If a value of the array is already present in the tree, this value must be ignored</li>
</ul>
<p>Your files <code>111-bst_insert.c</code> and <code>0-binary_tree_node.c</code> will be compiled during the correction</p>
        <p>File: <code>112-array_to_bst.c, 111-bst_insert.c, 0-binary_tree_node.c</code></p>
  <h3>
    27. BST - Search
  </h3>
  <p>Write a function that searches for a value in a Binary Search Tree</p>
<ul>
<li>Prototype: <code>bst_t *bst_search(const bst_t *tree, int value);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the BST to search</li>
<li>And <code>value</code> is the value to search in the tree</li>
<li>Your function must return a pointer to the node containing a value equals to <code>value</code></li>
<li>If <code>tree</code> is <code>NULL</code> or if nothing is found, your function must return <code>NULL</code></li>
</ul>
        <p>File: <code>113-bst_search.c</code></p>
  <h3>
    28. BST - Remove
  </h3>
  <p>Write a function that removes a node from a Binary Search Tree</p>
<ul>
<li>Prototype: <code>bst_t *bst_remove(bst_t *root, int value);</code></li>
<li>Where <code>root</code> is a pointer to the root node of the tree where you will remove a node</li>
<li>And <code>value</code> is the value to remove in the tree</li>
<li>Once located, the node containing a value equals to <code>value</code> must be removed and freed</li>
<li>If the node to be deleted has two children, it must be replaced with its first <code>in-order successor</code> (not predecessor)</li>
<li>Your function must return a pointer to the new root node of the tree after removing the desired value</li>
</ul>
        <p>File: <code>114-bst_remove.c</code></p>
  <h3>
    29. Big O #BST
  </h3>
  <p>What are the average time complexities of those operations on a Binary Search Tree (one answer per line):</p>
<ul>
<li>Inserting the value <code>n</code></li>
<li>Removing the node with the value <code>n</code></li>
<li>Searching for a node in a BST of size n</li>
</ul>
        <p>File: <code>115-O</code></p>
  <h3>
    30. Is AVL
  </h3>
  <p>Write a function that checks if a binary tree is a valid AVL Tree</p>
<ul>
<li>Prototype: <code>int binary_tree_is_avl(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to check</li>
<li>Your function must return <code>1</code> if <code>tree</code> is a valid AVL Tree, and <code>0</code> otherwise</li>
<li>If <code>tree</code> is <code>NULL</code>, return <code>0</code></li>
</ul>
<p>Properties of an AVL Tree:</p>
<ul>
<li>An AVL Tree is a BST</li>
<li>The difference between heights of left and right subtrees cannot be more than one</li>
<li>The left and right subtree each must also be a binary search tree</li>
</ul>
        <p>File: <code>120-binary_tree_is_avl.c</code></p>
  <h3>
    31. AVL - Insert
  </h3>
  <p>Write a function that inserts a value in an AVL Tree</p>
<ul>
<li>Prototype: <code>avl_t *avl_insert(avl_t **tree, int value);</code></li>
<li>Where <code>tree</code> is a double pointer to the root node of the AVL tree for inserting the value</li>
<li>And <code>value</code> is the value to store in the node to be inserted</li>
<li>Your function must return a pointer to the created node, or <code>NULL</code> on failure</li>
<li>If the address stored in <code>tree</code> is <code>NULL</code>, the created node must become the root node.</li>
<li>The resulting tree after insertion, must be a balanced AVL Tree</li>
</ul>
<p>Your files <code>14-binary_tree_balance.c</code>, <code>103-binary_tree_rotate_left.c</code>, <code>104-binary_tree_rotate_right.c</code> and <code>0-binary_tree_node.c</code> will be compiled during the correction</p>
        <p>File: <code>121-avl_insert.c, 14-binary_tree_balance.c, 103-binary_tree_rotate_left.c, 104-binary_tree_rotate_right.c, 0-binary_tree_node.c</code></p>
  <h3>
    32. AVL - Array to AVL
  </h3>
  <p>Write a function that builds an AVL tree from an array</p>
<ul>
<li>Prototype: <code>avl_t *array_to_avl(int *array, size_t size);</code></li>
<li>Where <code>array</code> is a pointer to the first element of the array to be converted</li>
<li>And <code>size</code> is the number of element in the array</li>
<li>Your function must return a pointer to the root node of the created AVL tree, or <code>NULL</code> on failure</li>
<li>If a value of the array is already present in the tree, this value must be ignored</li>
</ul>
<p>Your files <code>121-avl_insert.c</code>, <code>0-binary_tree_node.c</code>, <code>14-binary_tree_balance.c</code>, <code>103-binary_tree_rotate_left.c</code> and <code>104-binary_tree_rotate_right.c</code> will be compiled during the correction</p>
        <p>File: <code>122-array_to_avl.c, 121-avl_insert.c, 0-binary_tree_node.c, 103-binary_tree_rotate_left.c, 104-binary_tree_rotate_right.c, 14-binary_tree_balance.c</code></p>
  <h3>
    33. AVL - Remove
  </h3>
  <p>Write a function that removes a node from an AVL tree</p>
<ul>
<li>Prototype: <code>avl_t *avl_remove(avl_t *root, int value);</code></li>
<li>Where <code>root</code> is a pointer to the root node of the tree for removing a node</li>
<li>And <code>value</code> is the value to remove in the tree</li>
<li>Once located, the node containing a value equals to <code>value</code> must be removed and freed</li>
<li>If the node to be deleted has two children, it must be replaced with its first <code>in-order successor</code> (not predecessor)</li>
<li>After deletion of the desired node, the tree must be rebalanced if necessary</li>
<li>Your function must return a pointer to the new root node of the tree after removing the desired value, and after rebalancing</li>
</ul>
<p>Your files <code>14-binary_tree_balance.c</code>, <code>103-binary_tree_rotate_left.c</code> and <code>104-binary_tree_rotate_right.c</code> will be compiled during the correction</p>
        <p>File: <code>123-avl_remove.c, 14-binary_tree_balance.c, 103-binary_tree_rotate_left.c, 104-binary_tree_rotate_right.c</code></p>
  <h3>
    34. AVL - From sorted array
  </h3>
  <p>Write a function that builds an AVL tree from an array</p>
<ul>
<li>Prototype: <code>avl_t *sorted_array_to_avl(int *array, size_t size);</code></li>
<li>Where <code>array</code> is a pointer to the first element of the array to be converted</li>
<li>And <code>size</code> is the number of element in the array</li>
<li>Your function must return a pointer to the root node of the created AVL tree, or <code>NULL</code> on failure</li>
<li>You can assume there will be no duplicate value in the array</li>
<li>You are not allowed to rotate</li>
<li>You can only have 2 functions in your file</li>
</ul>
<p>Your file <code>0-binary_tree_node.c</code> will be compiled during the correction</p>
        <p>File: <code>124-sorted_array_to_avl.c, 0-binary_tree_node.c</code></p>
  <h3>
    35. Big O #AVL Tree
  </h3>
  <p>What are the average time complexities of those operations on an AVL Tree (one answer per line):</p>
<ul>
<li>Inserting the value <code>n</code></li>
<li>Removing the node with the value <code>n</code></li>
<li>Searching for a node in an AVL tree of size n</li>
</ul>
        <p>File: <code>125-O</code></p>
  <h3>
    36. Is Binary heap
  </h3>
  <p>Write a function that checks if a binary tree is a valid Max Binary Heap</p>
<ul>
<li>Prototype: <code>int binary_tree_is_heap(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to check</li>
<li>Your function must return <code>1</code> if <code>tree</code> is a valid Max Binary Heap, and <code>0</code> otherwise</li>
<li>If <code>tree</code> is <code>NULL</code>, return <code>0</code></li>
</ul>
<p>Properties of a Max Binary Heap:</p>
<ul>
<li>It’s a complete tree</li>
<li>In a Max Binary Heap, the value at root must be maximum among all values present in Binary Heap</li>
<li>The last property must be recursively true for all nodes in Binary Tree</li>
</ul>
        <p>File: <code>130-binary_tree_is_heap.c</code></p>
  <h3>
    37. Heap - Insert
  </h3>
  <p>Write a function that inserts a value in Max Binary Heap</p>
<ul>
<li>Prototype: <code>heap_t *heap_insert(heap_t **root, int value)</code></li>
<li>Where <code>tree</code> is a double pointer to the root node of the Heap to insert the value</li>
<li>And <code>value</code> is the value to store in the node to be inserted</li>
<li>Your function must return a pointer to the created node, or <code>NULL</code> on failure</li>
<li>If the address stored in <code>tree</code> is <code>NULL</code>, the created node must become the root node.</li>
<li>You have to respect a <code>Max Heap</code> ordering</li>
<li>You are allowed to have up to <code>6</code> functions in your file</li>
</ul>
<p>Your file <code>0-binary_tree_node.c</code> will be compiled during the correction</p>
        <p>File: <code>131-heap_insert.c, 0-binary_tree_node.c</code></p>
  <h3>
    38. Heap - Array to Binary Heap
  </h3>
  <p>Write a function that builds a Max Binary Heap tree from an array</p>
<ul>
<li>Prototype: <code>heap_t *array_to_heap(int *array, size_t size);</code></li>
<li>Where array is a pointer to the first element of the array to be converted</li>
<li>And size is the number of element in the array</li>
<li>Your function must return a pointer to the root node of the created Binary Heap, or NULL on failure</li>
</ul>
<p>Your files <code>131-heap_insert.c</code> and <code>0-binary_tree_node.c</code> will be compiled during the correction</p>
        <p>File: <code>132-array_to_heap.c, 131-heap_insert.c, 0-binary_tree_node.c</code></p>
  <h3>
    39. Heap - Extract
  </h3>
  <p>Write a function that extracts the root node of a Max Binary Heap</p>
<ul>
<li>Prototype: <code>int heap_extract(heap_t **root);</code></li>
<li>Where <code>root</code> is a double pointer to the root node of heap</li>
<li>Tour function must return the value stored in the root node</li>
<li>The root node must be freed and replace with the last <code>level-order</code> node of the heap</li>
<li>Once replaced, the heap must be rebuilt if necessary</li>
<li>If your function fails, return <code>0</code></li>
</ul>
        <p>File: <code>133-heap_extract.c</code></p>
  <h3>
    40. Heap - Sort
  </h3>
  <p>Write a function that converts a Binary Max Heap to a sorted array of integers</p>
<ul>
<li>Prototype: <code>int *heap_to_sorted_array(heap_t *heap, size_t *size);</code></li>
<li>Where <code>heap</code> is a pointer to the root node of the heap to convert</li>
<li>And <code>size</code> is an address to store the size of the array</li>
<li>You can assume <code>size</code> is a valid address</li>
<li>Since we are using Max Heap, the returned array must be sorted in descending order</li>
</ul>
<p>Your file <code>133-heap_extract.c</code> will be compile during the correction</p>
        <p>File: <code>134-heap_to_sorted_array.c, 133-heap_extract.c</code></p>
  <h3>
    41. Big O #Binary Heap
  </h3>
  <p>What are the average time complexities of those operations on a Binary Heap (one answer per line):</p>
<ul>
<li>Inserting the value n</li>
<li>Extracting the root node</li>
<li>Searching for a node in a binary heap of size n</li>
</ul>
        <p>File: <code>135-O</code></p>
