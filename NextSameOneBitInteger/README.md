# Problem

This problem was asked by Facebook.

Given an integer n, find the next biggest integer\
with the same number of 1-bits on. For example,\
given the number 6 (0110 in binary), return 9 (1001).

## Explained.cpp

Explained.cpp includes the implementation of\
Two's Compliment to determine the binary\
representation of a negative integer.\
This file is included because this code is\
much more readable than Short.cpp.

## Short.cpp

A short and concise approach to the problem\
using bit manipulation.

# Program Output

#### Output for Explained.cpp

```
NextSameOneBitInteger$ ./exe
Please enter an integer that is not 0: 20
Binary of 20 is: 10100
Binary of 24 is: 11000
Next integer: 24
```

#### Output for Short.cpp

```
NextSameOneBitInteger$ ./a.out
Please enter an integer: 20
Binary of 20: 00000000000000000000000000010100
Binary of 24: 00000000000000000000000000011000
The next integer with the same number of 1 bit as 20 is: 24
```