<div align="center">

  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" />
  <img src="https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white" />
  <img src="https://img.shields.io/badge/Codespaces-1f2428?style=for-the-badge&logo=github-actions&logoColor=white" />
  <img src="https://img.shields.io/badge/Algorithms-FF7139?style=for-the-badge&logo=leetcode&logoColor=white" />

  <h1>⚡ 15-Days of C++ | DSA Using C++</h1>
  <p><b>Design & Analysis of Algorithms (DAA) Laboratory Manual Implementation & Asymptotic Performance Analysis</b></p>
  
  <p>
    <code>Repository: 15-Days-of-Cpp / DSA-Using-C++</code> • 
    <code>Environment: GitHub Codespaces</code> • 
    <code>Language: C++17/20</code>
  </p>
</div>

---

## 🎯 Goals & Objectives

The primary intent of this repository is to bridge theoretical algorithm design with practical software engineering through a structured 15-days challenge framework:
* 🧠 **Theoretical Mastery:** Deep-dive into foundational algorithm design paradigms (Divide & Conquer, Greedy Method, Iterative & Recursive structures).
* 💻 **Practical Implementation:** Write clean, modular, and optimized C++ code directly inside cloud-based development environments (GitHub Codespaces).
* 📊 **Asymptotic Rigor:** Conduct both *A Priori* (mathematical) and *A Posteriori* (empirical) performance evaluations covering Best ($\Omega$), Average ($\Theta$), and Worst ($O$) case complexities.
* 🌐 **Portfolio Elevation:** Maintain a production-grade, documented repository mirroring professional software architecture.

---

## 📂 Lab Programs Directory (Web UI Dashboard)

| Index | Program Title & Core Question | Algorithmic Paradigm | Time Complexity | Space Complexity |
| :---: | :--- | :--- | :---: | :---: |
| **01** | **Sequential (Linear) Search**<br><sub>Search for a target element in an unordered array sequentially.</sub> | Iterative / Linear Scan | $\Theta(n)$ | $O(1)$ |
| **02** | **Fibonacci Series Generator**<br><sub>Generate the first $n$ terms of the Fibonacci sequence iteratively.</sub> | Iterative Loop | $\Theta(n)$ | $O(1)$ |
| **03** | **Recursive Binary Search**<br><sub>Search for an element in a sorted array using divide and conquer halving.</sub> | Divide & Conquer | $\Theta(\log n)$ | $O(\log n)$ |
| **04** | **Recursive Factorial Calculation**<br><sub>Compute the factorial of a number utilizing recursive stack frames.</sub> | Recursion | $\Theta(n)$ | $O(n)$ |
| **05** | **Merge Sort Algorithm**<br><sub>Sort an array in ascending order by recursively splitting and merging.</sub> | Divide & Conquer | $\Theta(n \log n)$ | $O(n)$ |
| **06** | **Quick Sort Algorithm**<br><sub>Generate random numbers and sort them using partition pivot placement.</sub> | Divide & Conquer | $\Theta(n \log n)$ | $O(n)$ |
| **07** | **Minimum & Maximum Value Finder**<br><sub>Find min and max elements in an array using tournament divide strategy.</sub> | Divide & Conquer | $\Theta(n)$ | $O(\log n)$ |
| **08** | **Fractional Knapsack Problem**<br><sub>Maximize total profit in a knapsack using greedy ratio sorting.</sub> | Greedy Approach | $\Theta(n^2)$ | $O(n)$ |
| **09** | **Prim's Algorithm**<br><sub>Find the Minimum Cost Spanning Tree (MCST) using matrix checks.</sub> | Greedy Approach | $\Theta(n^3)$ | $O(n^2)$ |
| **10** | **Kruskal's Algorithm**<br><sub>Find MCST using edge sorting and disjoint-set cycle detection.</sub> | Greedy / Disjoint Set | $\Theta(e \log e)$ | $O(n + e)$ |

---

## 🛠️ Compilation & Execution Guide (GitHub Codespaces)

1. **Clone the Workspace:**
   ```bash
   git clone [https://github.com/nisargans87/15-Days-of-Cpp.git](https://github.com/nisargans87/15-Days-of-Cpp.git)
   cd "15-Days-of-Cpp/DSA-Using-C++"

2. **Compile using g++:**
```bash
g++ -std=c++17 program1_sequential_search.cpp -o search

3. **Run the Executable:**
Bash
./search