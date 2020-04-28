# C Snippets

Provides a simple set of Visual Studio Code snippets for the C programming language

![Visual Studio Marketplace Installs](https://img.shields.io/visual-studio-marketplace/i/Harry-Ross-Software.c-snippets)
![Visual Studio Marketplace Downloads](https://img.shields.io/visual-studio-marketplace/d/Harry-Ross-Software.c-snippets)
![GitHub package.json version](https://img.shields.io/github/package-json/v/Harry-Ross/vscode-c-snippets)
![GitHub repo size](https://img.shields.io/github/repo-size/Harry-Ross/vscode-c-snippets)
![GitHub](https://img.shields.io/github/license/Harry-Ross/vscode-c-snippets)

# List of snippets:
| Snippet Name                     | Snippet Input | Snippet Code                                                                                               |
| -----------------------------    | ------------- | ---------------------------------------------------------------------------------------------------------- | 
| Starter Template                 | `sst`         | <code>#include <stdio.h><br>int main (int argc, char *argv[]) { <br>&nbsp;&nbsp;&nbsp;return 0;<br>}<code> |   
| Starter template with stlib.h    | `libsst`      | <code>#include <stdio.h><br> #include <stdlib.h> <br>int main (int argc, char *argv[]) { <br>&nbsp;&nbsp;&nbsp;return 0;<br>}<code> |
| Linked list template             | `libsst`      | <code>typedef struct _node * Link;<br>typedef struct _node node;<br>struct _node {<br>&nbsp;&nbsp;&nbsp;int value;<br>&nbsp;&nbsp;&nbsp;Link next;<br>};<code> |
| Create int function              | `intfunc`     | <code>int func_name () {<br>&nbsp;&nbsp;&nbsp;int x;<br>&nbsp;&nbsp;&nbsp;return x;<br>}<code> |
| Create float function            | `flfunc`      | <code>float func_name () {<br>&nbsp;&nbsp;&nbsp;float x;<br>&nbsp;&nbsp;&nbsp;return x;<br>}<code> |
| Create string function           | `strfunc`     | <code>char[] func_name () {<br>&nbsp;&nbsp;&nbsp;char[] x = {};<br>&nbsp;&nbsp;&nbsp;return x;<br>}<code> |
| Create long function             | `strfunc`     | <code>long func_name () {<br>&nbsp;&nbsp;&nbsp;long x;<br>&nbsp;&nbsp;&nbsp;return x;<br>}<code> |

#### Author: Harry Ross