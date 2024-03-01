# Binary Trees Project
> C, Algorithm, Data structure

## Overview

Welcome to the Binary Trees project! This is a group project designed to explore the implementation, algorithms, and applications of binary trees in the C programming language. This project provides an opportunity for collaborative learning and hands-on experience with one of the fundamental data structures in computer science.

## Project Goals

1. **Implementation**: Develop a comprehensive set of functions to create, manipulate, and traverse binary trees in C.
2. **Algorithms**: Explore and implement common binary tree algorithms such as tree traversal (in-order, pre-order, post-order), searching, insertion, and deletion.
3. **Data Structures**: Gain a deep understanding of the binary tree data structure and its variations, including balanced trees and binary search trees (BST).


## Tasks
0. **New node**: a function that creates a binary tree node
> Prototype: ```binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);```

1. **Insert left**: a function that inserts a node as the left-child of another node
> Prototype: ```binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);```

2. **Insert right***:a function that inserts a node as the right-child of another node
> Prototype: ```binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);```

3. **Delete**: a function that deletes an entire binary tree
> Prototype: ```void binary_tree_delete(binary_tree_t *tree);```

4. **Is leaf**: a function that checks if a node is a leaf
> Prototype: ```int binary_tree_is_leaf(const binary_tree_t *node);```

5. **Is root**: a function that checks if a given node is a root
> Prototype: ```int binary_tree_is_root(const binary_tree_t *node);```

6. **Pre-order traversal**: a function that goes through a binary tree using pre-order traversal
> Prototype: ```void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));```

7. **In-order traversal**: Write a function that goes through a binary tree using in-order traversal
> Prototype: ```void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));```

8. **Post-order traversal**: Write a function that goes through a binary tree using post-order traversal
> Prototype: ```void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));```

9. **Height**: Write a function that measures the height of a binary tree
> Prototype: ```size_t binary_tree_height(const binary_tree_t *tree);```

10. **Depth**: a function that measures the depth of a node in a binary tree
> Prototype: ```size_t binary_tree_depth(const binary_tree_t *tree);```

11. **Size**: a function that measures the size of a binary tree
> Prototype: ```size_t binary_tree_size(const binary_tree_t *tree);```

12. **Leaves:** Write a function that counts the leaves in a binary tree
> Prototype: ```size_t binary_tree_leaves(const binary_tree_t *tree);```

13. **Nodes:** a function that counts the nodes with at least 1 child in a binary tree
> Prototype: ```size_t binary_tree_nodes(const binary_tree_t *tree);```

14. **Balance factor:** a function that measures the balance factor of a binary tree
> Prototype: ```int binary_tree_balance(const binary_tree_t *tree);```

15. **Is full:**  a function that checks if a binary tree is full
> Prototype: ```int binary_tree_is_full(const binary_tree_t *tree);```

16. **Is perfect:** a function that checks if a binary tree is perfect
> ```Prototype: int binary_tree_is_perfect(const binary_tree_t *tree);```

17. **Sibling:** a function that finds the sibling of a node
> Prototype: ```binary_tree_t *binary_tree_sibling(binary_tree_t *node);```

18. **Uncle:** a function that finds the uncle of a node
> Prototype: ```binary_tree_t *binary_tree_uncle(binary_tree_t *node);```


