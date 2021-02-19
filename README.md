# C Snippets

This extension provides a simple set of VSCode snippets for the C programming language. Can be found [here on the Visual Studio Marketplace](https://marketplace.visualstudio.com/items?itemName=Harry-Ross-Software.c-snippets).

![Visual Studio Marketplace Rating (Stars)](https://img.shields.io/visual-studio-marketplace/stars/Harry-Ross-Software.c-snippets)
![Visual Studio Marketplace Installs](https://img.shields.io/visual-studio-marketplace/i/Harry-Ross-Software.c-snippets)
![Visual Studio Marketplace Downloads](https://img.shields.io/visual-studio-marketplace/d/Harry-Ross-Software.c-snippets)
![GitHub package.json version](https://img.shields.io/github/package-json/v/Harry-Ross/vscode-c-snippets)
![GitHub repo size](https://img.shields.io/github/repo-size/Harry-Ross/vscode-c-snippets)
![GitHub](https://img.shields.io/github/license/Harry-Ross/vscode-c-snippets)

# List of snippets:
| Snippet Description              | Snippet Input | Snippet Code                                                                                               |
| -----------------------------    | ------------- | ---------------------------------------------------------------------------------------------------------- | 
| Starter Template                 | `sst`         | <code>#include <stdio.h><br>int main (int argc, char *argv[]) { <br>&nbsp;&nbsp;&nbsp;return 0;<br>}<code> |   
| Starter template with stlib.h    | `libsst`      | <code>#include <stdio.h><br> #include <stdlib.h> <br>int main (int argc, char *argv[]) { <br>&nbsp;&nbsp;&nbsp;return 0;<br>}<code> |
| Conditionals and loops | | |
| If statement| `if` | <code>if (expression) {<br>&nbsp;&nbsp;&nbsp;/* code here */<br>}</code> |
| Else if statement | `elif` | <code>elseif (expression) {<br>&nbsp;&nbsp;&nbsp;/* code here */<br>}</code> |
| Else statement | `else` | <code>else {<br>&nbsp;&nbsp;&nbsp;/* code here */<br>}</code> |
| For loop | `for` | <code>for (int i = 0; i < count; i++) {<br>&nbsp;&nbsp;&nbsp;/* code here */<br>}</code> |
| While loop | `while` | <code>while (expression) {<br>&nbsp;&nbsp;&nbsp;/* code here */<br>}</code> |
| Do...while loop | `dowhile` | <code>do {<br>&nbsp;&nbsp;&nbsp;/* code here */<br>} while (expression)</code> | 
| Linked lists | | |
| Linked list template             | `libsst`      | <code>typedef struct _node * Link;<br>typedef struct _node node;<br>struct _node {<br>&nbsp;&nbsp;&nbsp;int value;<br>&nbsp;&nbsp;&nbsp;Link next;<br>};<code> |
| Functions | | |
| Create int function              | `intfunc`     | <code>int func_name () {<br>&nbsp;&nbsp;&nbsp;int x;<br>&nbsp;&nbsp;&nbsp;return x;<br>}<code> |
| Create float function            | `flfunc`      | <code>float func_name () {<br>&nbsp;&nbsp;&nbsp;float x;<br>&nbsp;&nbsp;&nbsp;return x;<br>}<code> |
| Create string function           | `strfunc`     | <code>char[] func_name () {<br>&nbsp;&nbsp;&nbsp;char[] x = {};<br>&nbsp;&nbsp;&nbsp;return x;<br>}<code> |
| Create long function             | `strfunc`     | <code>long func_name () {<br>&nbsp;&nbsp;&nbsp;long x;<br>&nbsp;&nbsp;&nbsp;return x;<br>}<code> |
| Print statements | | |
| Print variable of type float (2 decimal places)   | `pflo`        | <code>printf(\"var_name :>> %.2f\\n\", var_name);</code> |
| Print variable of type int       | `pint`        | <code>printf(\"var_name :>> %d\\n\", var_name);</code> |
| Print variable of type char      | `pcha`        | <code>printf(\"var_name :>> %c\\n\", var_name);</code> |
| Print variable of type pointer   | `ppoint`      | <code>printf(\"var_name :>> %p\\n\", (void *) var_name);</code> |
| Print variable of type size_t    | `psiz`        | <code>printf(\"var_name :>> %zu\\n\", var_name);</code> |
| Allocate memory using calloc     | `cal`         | <code>{type} *ptr = ({type}*)calloc(, sizeof({type})); <br>if (ptr == NULL) { <br> &nbsp;&nbsp;&nbsp;printf("Memory allocation failed!\n"); <br> &nbsp;&nbsp;&nbsp;exit(0); <br> } <br> free(ptr); </code> |
| Header file include guard        | `ig`          | <code>#ifndef {transformed_file_name} <br>#define {transformed_file_name} <br><br> // Code for header body <br><br>#endif {transformed_file_name}</code> |

If you would like to support development of the extension donate Bitcoin here: **1BnrjF49owBx7UjMaJt5crZw5DegUYG3mb**
#### Authors: [Harry Ross](https://github.com/Harry-Ross) and [Luca Merzetti](https://github.com/lucamerzi)
