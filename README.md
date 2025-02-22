<br />
<p align="center">
  <a href="https://upload.wikimedia.org/wikipedia/commons/thumb/8/8d/42_Logo.svg/1200px-42_Logo.svg.png">
    <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/8/8d/42_Logo.svg/1200px-42_Logo.svg.png" alt="42 Logo" width="250" height="250">
  </a>

  <h1 align="center">Push_swap</h1>

  <p align="center">
    A 42 School project to sort a stack of integers using a minimal number of operations
    <br /><br />
    <img src="https://github.com/doooriian/42-Badges/blob/main/badges/push_swapm.png" alt="Push_swap Badge" width="150">
  </p>
</p>

<p align="center">
  <img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/doooriian/Push_swap?color=1A237E" />
  <img alt="Code language count" src="https://img.shields.io/github/languages/count/doooriian/Push_swap?color=00BCD4" />
  <img alt="GitHub top language" src="https://img.shields.io/github/languages/top/doooriian/Push_swap?color=7B1FA2" />
  <img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/doooriian/Push_swap?color=D32F2F" />
</p>
---

## ✨ Overview

**Push_swap** is an individual project at 42 School that challenges you to sort a stack of integers with the fewest possible operations. This project focuses on mastering data structures, honing algorithmic skills, and optimizing the limited set of allowed operations.

For this project, I tackled the bonus requirements and slightly improved the Turkish algorithm initially described in this resource:  
- [Medium Article – Push_swap](https://medium.com/@ayogun/push-swap-c1f5d2d41e97)

**Bonus Optimization:**  
I refined the Turkish algorithm by slightly modifying its logic. In particular, when two numbers are either both above or both below the median, the algorithm performs a grouped rotation (rotating both simultaneously in the same direction) to reduce the total number of operations required.

---

## 📑 Key Features

- **Optimized Turkish Algorithm:**  
  Implementation and enhancement of the Turkish algorithm with bonus optimizations that group rotations when both numbers are on the same side of the median.
  
- **Full Bonus Implementation:**  
  All bonus features have been implemented to meet the project requirements.
  
- **Visualization & Testing:**  
  - Integrated with the [push_swap_visualizer](https://github.com/o-reo/push_swap_visualizer) for a graphical display of the sorting process.
  - Tested against the [push_swap-testeur-max](https://gitlab.com/nda-cunh/push_swap-testeur-max) to ensure compliance with the expected standards.

**Resources Used:**  
- Turkish algorithm explanation: [Medium – Push_swap](https://medium.com/@ayogun/push-swap-c1f5d2d41e97)  
- Interactive visualizer: [push_swap_visualizer](https://github.com/o-reo/push_swap_visualizer)  
- Comprehensive tester: [push_swap-testeur-max](https://gitlab.com/nda-cunh/push_swap-testeur-max)

---

## 🛠️ Technologies Used

- **[C](https://devdocs.io/c/)** — Primary programming language.
- **[Makefile](https://www.gnu.org/software/make/manual/make.html)** — For build automation.
- **[Git](https://git-scm.com/)** — Version control.

---

## 🚀 How to Compile and Run

Clone the repository and use the following commands in your terminal:

```bash
# Compile the project
make all

# Remove object files
make clean

# Remove object files and executables
make fclean

# Recompile from scratch after cleanup
make re

```

> **Note:** Ensure that your 42 environment is correctly set up before compiling.

## 🎨 Visual Example

**Tip for inserting a screenshot:**  
- Use your preferred screenshot tool to capture the visualizer output (e.g., from push_swap_visualizer).  
- Host the image on an online platform like GitHub, Imgur, etc.  
- Replace `YOUR_IMAGE_URL` with the direct URL to your image.

**Example:**

![Visualization Example](YOUR_IMAGE_URL)

## 🧪 Testing

This project was rigorously tested using:
- The **push_swap_visualizer** to observe real-time operations.
- The **push_swap-testeur-max** to validate robustness and efficiency, especially for the bonus optimizations.

## ✅ Results

Below are some performance and quality indicators achieved:

<p align="center">
  <img src="https://github.com/doooriian/42-Badges/blob/main/badges/100Grade.png" alt="Push_swap Grade">
</p>

## 📬 Contact

Feel free to reach out or contribute to this project via [GitHub](https://github.com/doooriian/Push_swap)!
