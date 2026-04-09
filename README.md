# ❌⭕ Tic-Tac-Toe — Console Game in C

![Language](https://img.shields.io/badge/Language-C-A8B9CC?style=flat-square&logo=c)
![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux%20%7C%20macOS-blue?style=flat-square)
![Type](https://img.shields.io/badge/Type-2--Player%20Game-orange?style=flat-square)

> A simple yet fully functional **2-player Tic-Tac-Toe game** built from scratch in **C language**, playable directly in the terminal/console.

---

## 📖 About the Project

This is a **console-based Tic-Tac-Toe game** written in pure C. It was built as a hands-on C programming project to practice concepts like 2D arrays, functions, loops, and game logic. The game supports two players taking turns on the same machine, with win detection, draw detection, and input validation — all within just **81 lines of clean C code**.

---

## 🎮 How to Play

```
Welcome to Tic-Tac-Toe!

 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9

Player 1 (X), enter position (1-9): _
```

- The board has **9 positions** numbered 1 to 9
- **Player 1** is `X`, **Player 2** is `O`
- Players take turns entering a position number
- First to align **3 in a row** (horizontal, vertical, or diagonal) wins!
- If all 9 positions are filled with no winner → **It's a Draw!**

---

## ✨ Features

- ✅ **2-Player Mode** — Play with a friend on the same machine
- ✅ **Live Board Display** — Board updates after every move
- ✅ **Win Detection** — Checks all rows, columns & diagonals
- ✅ **Draw Detection** — Detects when the board is full with no winner
- ✅ **Input Validation** — Rejects invalid positions and already-taken cells
- ✅ **Clean Code** — Well-structured with separate functions for each task
- ✅ **Lightweight** — Single `.c` file, no external dependencies

---

## 🧠 Code Structure

| Function | Description |
|----------|-------------|
| `initializeBoard()` | Fills board with positions 1–9 at the start |
| `displayBoard()` | Prints the current state of the board |
| `checkWin()` | Checks rows, columns & diagonals for a winner |
| `isBoardFull()` | Returns true if all cells are filled (draw check) |
| `main()` | Game loop — handles player turns & game flow |

---

## 🚀 Getting Started

### Prerequisites

You need a **C compiler** installed:
- **Windows** → [MinGW / GCC](https://www.mingw-w64.org/) or use Dev-C++
- **Linux/macOS** → GCC (usually pre-installed)

Check if GCC is installed:
```bash
gcc --version
```

### Compile & Run

```bash
# Step 1: Clone the repo
git clone https://github.com/rohitshivhare21/TicTacToe.git
cd TicTacToe

# Step 2: Compile
gcc ticTacToeGame.c -o ticTacToe

# Step 3: Run
./ticTacToe          # Linux / macOS
ticTacToe.exe        # Windows
```

### Or run the pre-compiled .exe (Windows only)

```bash
# Directly run the included executable
ticTacToeGame.exe
```

---

## 📁 Project Structure

```
TicTacToe/
├── ticTacToeGame.c      # Source code (C)
├── ticTacToeGame.exe    # Pre-compiled executable (Windows)
└── README.md            # Project documentation
```

---

## 🖥️ Sample Gameplay

```
Welcome to Tic-Tac-Toe!

 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9

Player 1 (X), enter position (1-9): 5

 1 | 2 | 3
---|---|---
 4 | X | 6
---|---|---
 7 | 8 | 9

Player 2 (O), enter position (1-9): 1

 O | 2 | 3
---|---|---
 4 | X | 6
---|---|---
 7 | 8 | 9

...

Player 1 (X) wins! Congratulations! 🎉
```

---

## 💡 Concepts Used

- 2D Arrays (`char board[3][3]`)
- Functions & Modular Programming
- Loops (`for`, `while`)
- Conditional Logic (`if/else`)
- Input Handling (`scanf`)
- Game Logic (win/draw detection)

---

## 📄 License

This project is open source and available under the **MIT License**.

---

## 👤 Developer

**Rohit Shivhare**
- GitHub: [@rohitshivhare21](https://github.com/rohitshivhare21)

> ⭐ If you liked this project, give it a star — it motivates me to build more!
