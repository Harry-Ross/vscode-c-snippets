# C Snippets

This extension provides a simple set of VSCode snippets for the C programming language.

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
||
| If statement| `if` | 
| Linked list template             | `libsst`      | <code>typedef struct _node * Link;<br>typedef struct _node node;<br>struct _node {<br>&nbsp;&nbsp;&nbsp;int value;<br>&nbsp;&nbsp;&nbsp;Link next;<br>};<code> |
||
| Create int function              | `intfunc`     | <code>int func_name () {<br>&nbsp;&nbsp;&nbsp;int x;<br>&nbsp;&nbsp;&nbsp;return x;<br>}<code> |
| Create float function            | `flfunc`      | <code>float func_name () {<br>&nbsp;&nbsp;&nbsp;float x;<br>&nbsp;&nbsp;&nbsp;return x;<br>}<code> |
| Create string function           | `strfunc`     | <code>char[] func_name () {<br>&nbsp;&nbsp;&nbsp;char[] x = {};<br>&nbsp;&nbsp;&nbsp;return x;<br>}<code> |
| Create long function             | `strfunc`     | <code>long func_name () {<br>&nbsp;&nbsp;&nbsp;long x;<br>&nbsp;&nbsp;&nbsp;return x;<br>}<code> |
||
| Print variable of type float (2 decimal places)   | `pflo`        | <code>printf(\"var_name :>> %.2f\\n\", var_name);</code> |
| Print variable of type int       | `pint`        | <code>printf(\"var_name :>> %d\\n\", var_name);</code> |
| Print variable of type char      | `pcha`        | <code>printf(\"var_name :>> %c\\n\", var_name);</code> |
| Print variable of type pointer   | `ppoint`      | <code>printf(\"var_name :>> %p\\n\", (void *) var_name);</code> |
| Print variable of type size_t    | `psiz`        | <code>printf(\"var_name :>> %zu\\n\", var_name);</code> |
| Allocate memory using calloc     | `cal`         | <code>{type} *ptr = ({type}*)calloc(, sizeof({type})); <br>if (ptr == NULL) { <br> &nbsp;&nbsp;&nbsp;printf("Memory allocation failed!\n"); <br> &nbsp;&nbsp;&nbsp;exit(0); <br> } <br> free(ptr); </code> |

#### Authors: [Harry Ross](https://github.com/Harry-Ross) and [Luca Merzetti](https://github.com/lucamerzi)

If you would like to support development of the extension donate Bitcoin here: **1BnrjF49owBx7UjMaJt5crZw5DegUYG3mb**