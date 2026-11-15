# Push_swap

> **42 School project** · C · Sorting algorithms

## Overview

A constrained sorting challenge: sort a sequence of integers using two stacks and a restricted set of operations.

## Features

- Validate inputs and initialize the stack
- Generate stack operations including swaps, pushes and rotations
- Implement sorting logic with an explicit operation sequence
- Provide a bonus `checker` program to validate a sequence of moves

## Technical approach

Parsing, stack operations and sorting routines are separated into distinct source directories. The bonus checker reuses the core operations.

**Stack:** C · Algorithms · Stacks · Make.

## Build and usage

```bash
git clone https://github.com/doooriian/Push_swap.git
cd Push_swap
make
./push_swap 3 2 1
```

Prints operations that sort the input. The checker can be built separately:

```bash
make bonus
ARG='3 2 1'
./push_swap $ARG | ./checker $ARG
```

## Verification

Review the output with representative inputs and edge cases. No automated CI test suite is included in this repository; build and behaviour should be verified in a compatible local environment.

## Notes and limitations

The generated operation count varies with the input. The aim is to sort correctly with as few allowed moves as practical, not to provide a general-purpose sorting API.

---

Part of the [42 curriculum](https://42.fr/). Explore the other projects on [my GitHub profile](https://github.com/doooriian).
