<div align="center">

<img src="https://capsule-render.vercel.app/api?type=waving&color=0:0f2027,50:203a43,100:2c5364&height=220&section=header&text=SY%20Engg%20Codes&fontSize=64&fontColor=ffffff&fontAlignY=38&desc=Second%20Year%20Engineering%20%E2%80%A2%20Lab%20Journal%20in%20Code&descAlignY=58&descSize=18&animation=fadeIn" width="100%"/>

<a href="https://github.com/Samarth-Bolkotgi-dev/SY-Engg-Codes">
  <img src="https://readme-typing-svg.demolab.com?font=JetBrains+Mono&weight=600&size=22&duration=2800&pause=900&color=36BCF7&center=true&vCenter=true&width=640&lines=malloc()+a+node%2C+link+it%2C+free()+it.;push()+%E2%86%92+pop()+%E2%86%92+postfix+%E2%9C%93;class+Engineer+%3A+public+Student+%7B%7D;fork()+%E2%86%92+zombie%3F+orphan%3F+%F0%9F%A7%9F;O(n%C2%B2)+today%2C+O(n+log+n)+tomorrow." alt="Typing SVG" />
</a>

<br/>

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)
![Linux](https://img.shields.io/badge/POSIX-FCC624?style=for-the-badge&logo=linux&logoColor=black)
![macOS](https://img.shields.io/badge/Built_on-macOS-000000?style=for-the-badge&logo=apple&logoColor=white)
![VS Code](https://img.shields.io/badge/VS_Code-007ACC?style=for-the-badge&logo=visualstudiocode&logoColor=white)

![Last commit](https://img.shields.io/github/last-commit/Samarth-Bolkotgi-dev/SY-Engg-Codes?style=flat-square&color=36BCF7)
![Repo size](https://img.shields.io/github/repo-size/Samarth-Bolkotgi-dev/SY-Engg-Codes?style=flat-square&color=8A2BE2)
![Status](https://img.shields.io/badge/status-actively%20growing-2ea44f?style=flat-square)

</div>

---

> **Not a code dump.** It's a semester spent learning to think in pointers, stacks and objects, one lab at a time.
> Every file here was written, compiled, broken and fixed again before a viva.

<br/>

## 🧭 The Map

```mermaid
mindmap
  root((SY Engg Codes))
    🧱 DSA in C
      Matrices
        Add · Sub · Mul · Transpose
        Sparse · Simple T · Fast T
      Search & Sort
        Linear · Binary
        Insertion · Selection · Shell
      Linked Lists
        Singly · Circular
        Polynomial addition
      Stacks
        Stack ADT
        Infix ⇄ Prefix ⇄ Postfix
        Postfix evaluation
      Queues
        Linear printer queue
        Circular queue
    🧬 OOP in C++
      Classes & Objects
      Encapsulation · Friends
      Overloading · Virtual
      Exceptions · File I/O
      Templates · STL vector
    ⚙️ Operating Systems
      FCFS scheduling
      FIFO · LRU paging
      Zombie · Orphan processes
```

<br/>

## 📊 By the Numbers

<div align="center">

| 📁 Subjects | 🧪 Lab Experiments | 📄 Source Files | 🧾 Lines of Code | 🎯 Exam-prep Programs |
|:---:|:---:|:---:|:---:|:---:|
| **3** | **19+** | **126** | **~8,300** | **70+** |

</div>

```text
 Language mix (by file)

 C     ███████████████████████████████████████░░░░░░░░░░░░  94 files   75%
 C++   █████████████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░  32 files   25%
```

<br/>

## 🚀 Publishing Progress

Everything lives on my machine first and lands here once it's cleaned up.

```text
 DSA · Expts 1–6    ████████████████████████████████████  ✅ live in this repo
 DSA · Expts 8–9    ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░  🔜 queued
 DSA · LCA Prep     ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░  🔜 queued
 OOP · C++          ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░  🔜 queued
 OS  · C            ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░  🔜 queued
```

---

## 🧱 Data Structures & Algorithms <sub><sup>— in C</sup></sub>

### 🗺️ The Learning Path

```mermaid
flowchart LR
    A["🔢 Expt 1<br/>Matrix Ops"] --> B["🕳️ Expt 2<br/>Sparse Matrix"]
    B --> C["🔍 Expt 3<br/>Search & Sort"]
    C --> D["🔗 Expt 4<br/>Singly LL"]
    D --> E["⭕ Expt 5<br/>Circular LL"]
    E --> F["🥞 Expt 6<br/>Stack & Infix→Postfix"]
    F --> G["🖨️ Expt 8<br/>Printer Queue"]
    G --> H["🔄 Expt 9<br/>Circular Queue"]

    classDef live fill:#2c5364,stroke:#36BCF7,color:#fff,stroke-width:2px;
    classDef soon fill:#1e1e1e,stroke:#555,color:#aaa,stroke-dasharray:4 3;
    class A,B,C,D,E,F live;
    class G,H soon;
```

<sub>Solid boxes are published. Dashed ones are coming soon.</sub>

### 🧪 Experiments

<table>
<tr>
<th>#</th><th>Experiment</th><th>What's inside</th><th>Concepts</th>
</tr>

<tr>
<td align="center"><b>01</b></td>
<td><a href="DSA/Expt_1"><b>🔢 Matrix Operations</b></a></td>
<td><code>mat_add.c</code> · <code>mat_sub.c</code> · <code>mat_mul.c</code> · <code>mat_t.c</code></td>
<td>2-D arrays, nested loops, row × column product</td>
</tr>

<tr>
<td align="center"><b>02</b></td>
<td><a href="DSA/Expt_2"><b>🕳️ Sparse Matrix</b></a></td>
<td><code>Sparse_matrix.c</code> · <code>Simple_T.c</code> · <code>Fast_T.c</code></td>
<td>Triplet form, simple vs fast transpose</td>
</tr>

<tr>
<td align="center"><b>03</b></td>
<td><a href="DSA/Expt_3"><b>🔍 Search & Sort</b></a></td>
<td><code>Linear_search.c</code> · <code>Binary_search.c</code><br/><code>Insertion_sort.c</code> · <code>Selection_sort.c</code> · <code>Shell_sort.c</code></td>
<td>Divide & conquer, gap sequences, stability</td>
</tr>

<tr>
<td align="center"><b>04</b></td>
<td><a href="DSA/Expt_4"><b>🔗 Singly Linked List</b></a></td>
<td><code>singly_linked_list.c</code></td>
<td>Dynamic nodes, traversal, length, <code>malloc</code></td>
</tr>

<tr>
<td align="center"><b>05</b></td>
<td><a href="DSA/Expt_5"><b>⭕ Circular Linked List</b></a></td>
<td><code>circular_linked_list.c</code></td>
<td>Tail→head link, polynomial representation & addition</td>
</tr>

<tr>
<td align="center"><b>06</b></td>
<td><a href="DSA/Expt_6"><b>🥞 Stack & Expressions</b></a></td>
<td><code>stack_basic.c</code> · <code>infix_postfix.c</code><br/><code>infix_postfix_using_refcode.c</code></td>
<td>Stack ADT, operator precedence, associativity</td>
</tr>

<tr>
<td align="center"><b>08</b></td>
<td><b>🖨️ Printer Job Queue</b> <sub>🔜</sub></td>
<td><code>Linear_queue_printer_manager.c</code></td>
<td>Linear queue, enqueue / dequeue, overflow</td>
</tr>

<tr>
<td align="center"><b>09</b></td>
<td><b>🔄 Circular Queue</b> <sub>🔜</sub></td>
<td><code>Circular_queue.c</code></td>
<td>Modulo indexing, wasted-slot problem solved</td>
</tr>
</table>

### 🎨 How It Looks in Memory

<table>
<tr>
<td width="50%" valign="top">

**🔗 Singly Linked List**
```text
 head
  │
  ▼
┌────┬───┐   ┌────┬───┐   ┌────┬──────┐
│ 10 │ ●─┼──▶│ 20 │ ●─┼──▶│ 30 │ NULL │
└────┴───┘   └────┴───┘   └────┴──────┘
```

</td>
<td width="50%" valign="top">

**⭕ Circular Linked List**
```text
   ┌──────────────────────────────┐
   ▼                              │
┌────┬───┐   ┌────┬───┐   ┌────┬──┴┐
│ 3x²│ ●─┼──▶│ 2x │ ●─┼──▶│ 5  │ ● │
└────┴───┘   └────┴───┘   └────┴───┘
```

</td>
</tr>
<tr>
<td valign="top">

**🥞 Stack: `A+B*C` → `ABC*+`**
```text
 token  stack      output
 ─────  ─────────  ───────
   A    │      │   A
   +    │ +    │   A
   B    │ +    │   AB
   *    │ + *  │   AB
   C    │ + *  │   ABC
  end   │      │   ABC*+  ✓
```

</td>
<td valign="top">

**🔄 Circular Queue (size 5)**
```text
        front           rear
          ▼               ▼
  ┌─────┬─────┬─────┬─────┬─────┐
  │  ·  │ J2  │ J3  │ J4  │  ·  │
  └─────┴─────┴─────┴─────┴─────┘
     0     1     2     3     4
  rear = (rear + 1) % SIZE  ♻️
```

</td>
</tr>
<tr>
<td colspan="2">

**🕳️ Sparse Matrix → Triplet**
```text
  ┌             ┐        row  col  val
  │ 0  0  3  0  │        ───  ───  ───
  │ 0  0  0  0  │   ⇒     4    4    3     ← header (rows, cols, non-zeros)
  │ 0  7  0  0  │         0    2    3
  │ 0  0  0  9  │         2    1    7
  └             ┘         3    3    9
```

</td>
</tr>
</table>

### ⏱️ Complexity Cheat-Sheet

| Algorithm | Best | Average | Worst | Space | Stable? |
|---|:---:|:---:|:---:|:---:|:---:|
| 🔍 Linear Search | `O(1)` | `O(n)` | `O(n)` | `O(1)` | — |
| 🎯 Binary Search | `O(1)` | `O(log n)` | `O(log n)` | `O(1)` | — |
| 🃏 Insertion Sort | `O(n)` | `O(n²)` | `O(n²)` | `O(1)` | ✅ |
| 👆 Selection Sort | `O(n²)` | `O(n²)` | `O(n²)` | `O(1)` | ❌ |
| 🐚 Shell Sort | `O(n log n)` | `~O(n^1.3)` | `O(n²)` | `O(1)` | ❌ |
| 🔁 Simple Transpose | — | `O(cols · t)` | `O(cols · t)` | `O(t)` | — |
| ⚡ Fast Transpose | — | `O(cols + t)` | `O(cols + t)` | `O(cols)` | — |

<sub><i>t</i> = number of non-zero terms in the sparse matrix.</sub>

<details>
<summary><b>🎯 Exam & LCA prep vault</b> <sub>(click to expand · 🔜 coming soon)</sub></summary>
<br/>

A separate arsenal built for practicals and LCA:

| Folder | Contents |
|---|---|
| `Exam_Prep/` | Postfix evaluation, prefix ⇄ postfix, student DB (array + linked list) |
| `LCA_Prep/Codes/Separate/` | **32** single-purpose programs, one per sub-question (1a → 8d) |
| `LCA_Prep/Codes/Experiments/` | **11** full experiment solutions, incl. multi-digit postfix eval |
| `LCA_Prep/Codes/Conversions/` | All **6** expression conversions + one menu-driven "do-it-all" |
| `LCA_Prep/Codes/Mixed/` | **15** mixed-scenario problems (A1–A10, B1–B5) |
| `LCA_Prep/*.pdf` | Typeset notes for every experiment |

```text
          ┌──────────┐
          │  INFIX   │
          └──┬────▲──┘
             │    │
     ┌───────▼┐  ┌┴───────┐
     │ PREFIX │◀─▶│POSTFIX │      6 directions · 6 programs · 1 menu
     └────────┘  └────────┘
```

</details>

---

## 🧬 Object-Oriented Programming <sub><sup>— in C++</sup></sub> <sub>🔜</sub>

```mermaid
classDiagram
    direction LR
    class Shape {
        <<abstract>>
        +area()* double
    }
    class Circle { +area() double }
    class Rectangle { +area() double }
    class BankAccount {
        -balance : double
        +deposit(amt)
        +withdraw(amt)
        +friend showBalance()
    }
    Shape <|-- Circle
    Shape <|-- Rectangle
```

| Lab | Topic | Highlights |
|:---:|---|---|
| **1** | 🧭 Procedural vs OOP | Area calculator for shapes, the four pillars |
| **2** | 🏦 Classes & Friends | Bank account system, `friend` functions |
| **3** | 🎭 Polymorphism & Robustness | Function overloading, `virtual` dispatch, exceptions, file I/O |
| **6** | 💾 File Handling | Writing and reading objects vs plain text with `fstream` |
| **LCA** | 🧰 Templates & STL | `template<T>` stack, `std::vector`, 11 mixed real-world scenarios |

<details>
<summary><b>🧰 The 11 mixed scenarios</b></summary>
<br/>

`🏦 Bank` · `🎓 Student + vector + file` · `👔 Employee` · `🔢 Complex numbers` · `🔷 Shapes in a vector` · `🥞 Template stack` · `🌳 Inheritance types` · `📚 Library` · `📏 Distance (friend)` · `📌 Static & copy ctor` · `🧩 Template + vector`

</details>

---

## ⚙️ Operating Systems <sub><sup>— in C</sup></sub> <sub>🔜</sub>

<table>
<tr>
<td width="50%" valign="top">

**🗓️ FCFS Scheduling: Gantt Chart**
```text
 ┌──────┬────────┬───┬──────────┐
 │  P1  │   P2   │P3 │    P4    │
 └──────┴────────┴───┴──────────┘
 0      4        10  12         18
```

</td>
<td width="50%" valign="top">

**📄 Page Replacement (3 frames)**
```text
 ref:  7  0  1  2  0  3  0  4
 F1 :  7  7  7  2  2  2  2  4
 F2 :  ·  0  0  0  0  3  3  3
 F3 :  ·  ·  1  1  1  1  0  0
       ✗  ✗  ✗  ✗  ✓  ✗  ✗  ✗   (FIFO)
```

</td>
</tr>
</table>

```mermaid
sequenceDiagram
    participant P as 👨 Parent
    participant C as 👶 Child
    P->>C: fork()
    Note over C: Zombie 🧟: child exits,<br/>parent never calls wait()
    Note over P: Orphan 👻: parent exits first,<br/>child is adopted by init
```

| Program | What it shows |
|---|---|
| `fcfs.c` | First-Come-First-Serve with idle detection and a Gantt timeline |
| `Fifo.c` | FIFO page replacement with hit / miss tracking |
| `LRU.c` · `find_lru_index.c` | Least-Recently-Used replacement via last-use timestamps |
| `zombieprocess.c` | A child that dies but is never reaped |
| `orphanprocess.c` | A child that outlives its parent |

---

## 🗂️ Repository Layout

```text
SY-Engg-Codes/
├── 📁 DSA/
│   ├── 🔢 Expt_1/   matrix add · sub · mul · transpose
│   ├── 🕳️ Expt_2/   sparse matrix · simple & fast transpose
│   ├── 🔍 Expt_3/   linear/binary search · insertion/selection/shell sort
│   ├── 🔗 Expt_4/   singly linked list
│   ├── ⭕ Expt_5/   circular linked list (polynomials)
│   └── 🥞 Expt_6/   stack ADT · infix → postfix
├── 🔜 OOPS - CPP/
├── 🔜 OS/
└── 📘 README.md
```

---

## ⚡ Run Anything in 10 Seconds

```bash
# clone
git clone https://github.com/Samarth-Bolkotgi-dev/SY-Engg-Codes.git
cd SY-Engg-Codes

# compile & run any C program
gcc DSA/Expt_3/Binary_search.c -o bsearch && ./bsearch

# compile & run any C++ program
g++ -std=c++17 "OOPS - CPP/expt_2/bank_acc.cpp" -o bank && ./bank
```

> 💡 **Tip:** every program is a standalone `main()`. No build system and no dependencies, just a compiler.

---

## 🧠 Lessons the Compiler Taught Me

```diff
+ Always check if malloc() returned NULL.
+ Draw the linked list on paper before touching ->next.
+ (rear + 1) % SIZE is the most elegant line in the syllabus.
- Forgetting to free() is a memory leak; forgetting wait() is a zombie.
- Segmentation fault (core dumped) is not an answer in the viva.
```

---

<div align="center">

### ⭐ If this helped you survive a practical, leave a star.

<sub>Built with ☕, late nights and far too many <code>printf("here\n");</code> debug lines</sub>
<br/>
<sub>by <a href="https://github.com/Samarth-Bolkotgi-dev"><b>Samarth Bolkotgi</b></a> · Second Year Engineering</sub>

<img src="https://capsule-render.vercel.app/api?type=waving&color=0:2c5364,50:203a43,100:0f2027&height=120&section=footer" width="100%"/>

</div>
