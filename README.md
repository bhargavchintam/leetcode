# leetcode

My LeetCode solutions. Sorted into folders by language — each problem is solved once, in whichever
language I felt like at the time. There are 935 solutions in total:

<p align="center">
  <img src="docs/languages.svg" width="600" alt="Bar chart of solutions per language: Python 428, C++ 232, Java 162, C 69, SQL 40, Bash 4">
</p>

Files are named `NNNN-slug.ext` (the problem number and title). Each one is standalone — the `Solution`
plus a small `main`/driver that runs the example, so you can just run the file:

```sh
python3 python/0001-two-sum.py
g++ -std=c++17 cpp/0146-lru-cache.cpp -o a && ./a
java java/0215-kth-largest-element-in-an-array.java    # Java 11 or newer
gcc -std=c99 c/0344-reverse-string.c -o a && ./a
```

SQL is written MySQL-style. The four `bash/` ones are the LeetCode shell problems.

Mostly the standard approach for each problem — hash maps, two pointers, BFS/DFS, DP, the usual. Nothing
clever for its own sake.

## Index

The folders are split by language, not by topic, so this index goes by language and by problem number.
File names start with the problem number padded to four digits, so each folder lists in problem order.
To jump to one problem on GitHub, press `t` and type its number.

### By language

| Language | Folder | Solutions | Problem numbers (lowest to highest) |
|---|---|---:|---|
| Python | [`python/`](python/) | 428 | 1 to 2399 |
| C++ | [`cpp/`](cpp/) | 232 | 101 to 2160 |
| Java | [`java/`](java/) | 162 | 211 to 2549 |
| C | [`c/`](c/) | 69 | 331 to 1200 |
| SQL | [`sql/`](sql/) | 40 | 175 to 1179 |
| Bash | [`bash/`](bash/) | 4 | 192 to 195 |
| **Total** | | **935** | **1 to 2549** |

### By problem number

| Problem numbers | Python | C++ | Java | C | SQL | Bash | Total |
|---|---:|---:|---:|---:|---:|---:|---:|
| 1 to 499 | 58 | 55 | 55 | 43 | 13 | 4 | 228 |
| 500 to 999 | 153 | 55 | – | 1 | 26 | – | 235 |
| 1000 to 1499 | 84 | 32 | – | 25 | 1 | – | 142 |
| 1500 to 1999 | 63 | 32 | 57 | – | – | – | 152 |
| 2000 to 2499 | 70 | 58 | 40 | – | – | – | 168 |
| 2500 and up | – | – | 10 | – | – | – | 10 |
| **Total** | **428** | **232** | **162** | **69** | **40** | **4** | **935** |
