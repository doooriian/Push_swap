<br />
<p align="center">
  <a href="https://raw.githubusercontent.com/othneildrew/Best-README-Template/master/images/logo.png">
    <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/8/8d/42_Logo.svg/1200px-42_Logo.svg.png" alt="42 Logo" width="250" height="250">
  </a>

  <h1 align="center">Push_swap</h1>

  <p align="center">
    A sorting algorithm project from 42 School
    <br />
    <br />
    <img src="https://github.com/doooriian/42-Badges/blob/main/badges/push_swapm.png" alt="Push_swap Badge" width="150">
  </p>
</p>

<p align="center">
  <img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/doooriian/Push_swap?color=1A237E" />
  <img alt="Code language count" src="https://img.shields.io/github/languages/count/doooriian/Push_swap?color=00BCD4" />
  <img alt="GitHub top language" src="https://img.shields.io/github/languages/top/doooriian/Push_swap?color=7B1FA2" />
  <img alt="GitHub last commit" src="https://img.shields.io/github/languages/top/doooriian/Push_swap?color=D32F2F" />
</p>

---

## ✨ Overview

**Push_swap** is an individual project at 42 School that challenges students to sort a stack of integers using two stacks and a limited set of operations. The objective is to achieve a fully sorted stack in the fewest moves possible, emphasizing algorithm optimization and efficient stack manipulation.

For this project, I implemented the **Turkish algorithm**, a proven strategy for solving Push_swap efficiently, inspired by [this resource](https://medium.com/@ayogun/push-swap-c1f5d2d41e97) from its creator. To meet the bonus requirements—which demand sorting within an even stricter move limit—I optimized the algorithm by checking if both numbers to be moved are above or below the median. This allowed me to perform simultaneous rotations (e.g., `rr` or `rrr`) when possible, reducing the total number of moves.

---

## 📑 Key Features

- **Sorting Algorithm**: Utilizes the Turkish algorithm for optimal stack sorting.
- **Operations**: Implements all required stack operations:
  - `sa`, `sb`, `ss` — Swap the top two elements of stack A, B, or both.
  - `pa`, `pb` — Push an element from stack A to B or vice versa.
  - `ra`, `rb`, `rr` — Rotate stack A, B, or both upward.
  - `rra`, `rrb`, `rrr` — Reverse rotate stack A, B, or both downward.
- **Optimization**: Enhanced the Turkish algorithm to perform simultaneous rotations when both numbers are on the same side of the median, minimizing move count.
- **Bonus Achievement**: Meets the bonus criteria by staying below the required move threshold.

---

## 🛠️ Technologies Used

- **[C](https://devdocs.io/c/)** — Core programming language.
- **[Makefile](https://www.gnu.org/software/make/manual/make.html)** — Build automation tool.

---

## 🚀 How to Build and Run

Clone the repository and use the following commands in your terminal:

```bash
# Compile the project
make all

# Remove object files
make clean

# Remove object files and executable
make fclean

# Clean and recompile
make re

```

To run the program, provide a list of integers as arguments:

```bash
./push_swap 3 1 4 2

```
## 🧪 Testing

The implementation was thoroughly tested using the following tools:

- [**Push_swap Visualizer**](https://github.com/o-reo/push_swap_visualizer)
  : A tool that allows step-by-step visualization of the sorting process.
- [**Push_swap Tester**](https://gitlab.com/nda-cunh/push_swap-testeur-max)
  : A combined visualizer and tester to verify both correctness and efficiency of moves.

Additionally, custom test cases were created to check edge cases and ensure compliance with bonus requirements.

---

## 📸 Visual Example

   ![Sorting Process](https://github.com/doooriian/42-Badges/blob/main/push_swap.gif)

---

## ✅ Results

Here’s my score for the Push_swap project:

<p align="center">
  <img src="https://github.com/doooriian/42-Badges/blob/main/badges/LibftGrade.png" alt="Push_swap Grade">
</p>

---

## 📚 Resources

- [**Turkish Algorithm Explanation**](https://medium.com/@ayogun/push-swap-c1f5d2d41e97)
  : A comprehensive guide written by the algorithm’s creator, which was the basis for this implementation.

---

## 📬 Contact

Feel free to reach out or contribute to this project on [GitHub](https://github.com/doooriian)!
