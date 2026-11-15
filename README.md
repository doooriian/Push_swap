<div align="center">

<a href="https://42.fr/"><img src="https://raw.githubusercontent.com/doooriian/42-Badges/main/badges/push_swapm.png" alt="Push_swap 42 badge" width="125" /></a>

# Push_swap

**42 School project · Constrained sorting algorithms**

<img src="https://img.shields.io/badge/42_Project-C%20%7C%20Algorithms-2563EB?style=flat-square" alt="Push_swap technology" />
<img src="https://img.shields.io/badge/Documentation-Project_Overview-334155?style=flat-square" alt="Project documentation" />

</div>

## 🔎 Overview

A constrained sorting challenge: sort a sequence of integers using two stacks and a restricted set of operations.

## ✨ Features

- Validate inputs and initialize the stack
- Generate stack operations including swaps, pushes and rotations
- Implement sorting logic with an explicit operation sequence
- Provide a bonus `checker` program to validate a sequence of moves

## 🧩 Technical approach

Parsing, stack operations and sorting routines are separated into distinct source directories. The bonus checker reuses the core operations.

> **Tech stack** · C · Algorithms · Stacks · Make.

## 🚀 Build and usage

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

## 🧪 Verification

Review the output with representative inputs and edge cases. No automated CI test suite is included in this repository; build and behaviour should be verified in a compatible local environment.

## ⚠️ Notes and limitations

The generated operation count varies with the input. The aim is to sort correctly with as few allowed moves as practical, not to provide a general-purpose sorting API.

---

<div align="center">

<sub>Part of the <a href="https://42.fr/">42 curriculum</a> · <a href="https://github.com/doooriian">Back to my GitHub profile</a></sub>

</div>
