
# Monty Project
![C Project](https://img.shields.io/badge/Project-C-green)

The project implements Stacks and Queues, with th concept of FIFO, LIFO.

---
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

Monty byte code files

Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument

---

## The monty program

- Usage: monty file
    - where file is the path to the file containing Monty byte code
- If the user does not give any file or more than one argument to your program, print the error message USAGE: monty file, followed by a new line, and exit with the status EXIT_FAILURE
- If, for any reason, it’s not possible to open the file, print the error message Error: Can't open file <file>, followed by a new line, and exit with the status EXIT_FAILURE
    - where <file> is the name of the file
- If the file contains an invalid instruction, print the error message L<line_number>: unknown instruction <opcode>, followed by a new line, and exit with the status EXIT_FAILURE
    - where is the line number where the instruction appears.
    - Line numbers always start at 1
- The monty program runs the bytecodes line by line and stop if either:
    - it executed properly every line of the file
    - it finds an error in the file
    - an error occured
- If the system cannot allocate memory anymore, I print the error message Error: malloc failed, followed by a new line, and exit with status EXIT_FAILURE.
- only malloc and free are used for memory allocation and deallocation. 

```bash
donjoe@joseph:~/Desktop/alx/monty$ cat 000.m 
push 0
push 1
push 2
  push 3
                   pall    
push 4
    push 5    
      push    6        
     pall  
     pop
     pall
   #pint
   pop
   #pint
pall
   swap
   pall
   	nop
   add
   pall
   sub
   pall
   div
   pall
   mul
   pall
   add

donjoe@joseph:~/Desktop/alx/monty$ cat 400.m 
push 2
push 1
pall
pop
pint
	addd

donjoe@joseph:~/Desktop/alx/monty$ cat run.sh 
#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=c90 *.c -o monty
donjoe@joseph:~/Desktop/alx/monty$ ./run.sh
donjoe@joseph:~/Desktop/alx/monty$ 

donjoe@joseph:~/Desktop/alx/monty$ ./monty 
USAGE: monty file


```

## Authors

- [@joseph](https://www.github.com/dnjoe96)
