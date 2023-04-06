<h1 align="center">
📖 push_swap - 42 Proyect
</h1>

<p align="center">
	<b><i>Because Swap_push isn’t as natural</i></b><br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/Falitomal/push_swap?color=lightblue" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/Falitomal/push_swap?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/Falitomal/push_swap?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/Falitomal/push_swap?color=green" />
</p>

## ✏️ Summary
```
This project will make you sort data on a stack, with a limited set of instructions, using
the lowest possible number of actions. To succeed you’ll have to manipulate various
types of algorithms and choose the most appropriate solution (out of many) for an
optimized data sorting.
```
## 💡 About the project

```
Writing a sorting algorithm is always a very important step in a developer’s journey. It
is often the first encounter with the concept of complexity.
Sorting algorithms and their complexity are part of the classic questions discussed
during job interviews. It’s probably a good time to look at these concepts since you’ll
have to face them at some point.
The learning objectives of this project are rigor, use of C, and use of basic algorithms.
Especially focusing on their complexity.
Sorting values is simple. To sort them the fastest way possible is less simple. Especially
because from one integers configuration to another, the most efficient sorting solution can
differ.
```
You can read the project subject [here]((https://github.com/Falitomal/Push_Swap/blob/main/Push_swap.pdf))


## 🛠️ Usage

#### 1. Compiling the program

To compile, go to the program path and run:

```
make
``` 
To compile the bonus, go to the program path and run:

```
make bonus
``` 
with make bonus, a checker executable will be created. This checker, executed with the main program, will tell if the sorting done is actually sorted correctly or not.

#### 2. Executing the program

To execute the program, run:
```
$ ./push_swap $ARG
```
where ```$ARG``` is a space separated list of integers, e.g. ```ARG="1 5 2 4 3"```


## 🛠️ USED ALGORITHM

I used a variation of the [Radix Sort](https://en.wikipedia.org/wiki/Radix_sort) algorithm. radix sort is a non-comparative sorting algorithm. It avoids comparison by creating and distributing elements into buckets according to their radix. For elements with more than one significant digit, this bucketing process is repeated for each digit, while preserving the ordering of the prior step, until all digits have been considered. For this reason, radix sort has also been called bucket sort and digital sort.


## MANDATORY PART
The rules :

• You have 2 stacks named a and b.

• At the beginning:

◦ The stack a contains a random amount of negative and/or positive numbers which cannot be duplicated.

◦ The stack b is empty.

• The goal is to sort in ascending order numbers into stack a. To do so you have the following operations at your disposal.

## FUNTIONS
◦sa (swap a): Swap the first 2 elements at the top of stack a.
 
 	Do nothing if there is only one or no elements.
 
◦sb (swap b): Swap the first 2 elements at the top of stack b.

  	Do nothing if there is only one or no elements.
  
◦ss : sa and sb at the same time.

◦pa (push a): Take the first element at the top of b and put it at the top of a.

	Do nothing if b is empty.

◦pb (push b): Take the first element at the top of a and put it at the top of b.

	Do nothing if a is empty.

◦ra (rotate a): Shift up all elements of stack a by 1.

	The first element becomes the last one.

◦rb (rotate b): Shift up all elements of stack b by 1.

	The first element becomes the last one.

◦rr : ra and rb at the same time.

◦rra (reverse rotate a): Shift down all elements of stack a by 1.

	The last element becomes the first one.

◦rrb (reverse rotate b): Shift down all elements of stack b by 1.

	The last element becomes the first one.

◦rrr : rra and rrb at the same time.

