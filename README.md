# 🎮 Tic-Tac-Toe in C

A simple **console-based Tic-Tac-Toe game** written in **C**.
This project demonstrates fundamental programming concepts such as **arrays, functions, loops, input validation, and game logic**.

Players take turns placing their marks (**X** and **O**) on a **3×3 board** until one player wins or the game ends in a draw.

---

# 📸 Demo

```
🎮 Welcome to Tic-Tac-Toe!
Player 1 = X
Player 2 = O

Current Board:

   |   |   
 ---|---|---
   |   |   
 ---|---|---
   |   |   

Player X, enter row and column (0-2): 
```

---

# ✨ Features

* 🧑‍🤝‍🧑 **Two-player gameplay**
* 🧠 **Win detection** (rows, columns, diagonals)
* 🤝 **Draw detection**
* ⚠ **Input validation**
* 🔁 **Replay option**
* 📍 **Position guide for players**
* 🖥 **Clean console interface**

---

# 📁 Project Structure

```
tic-tac-toe-c/
│
├── src/
│   ├── main.c        # Program entry point
│   └── game.c        # Game logic
│
├── include/
│   └── game.h        # Function declarations
│
├── README.md         # Project documentation
├── LICENSE           # MIT License
├── .gitignore        # Ignore compiled files
└── Makefile          # Build automation
```

---

# ⚙️ Requirements

To run this project you need:

* **C compiler** (recommended: GCC)
* A terminal or command prompt

Check GCC installation:

```bash
gcc --version
```

---

# ▶️ How to Build and Run

### 1️⃣ Clone the repository

```bash
git clone https://github.com/yourusername/tic-tac-toe-c.git
cd tic-tac-toe-c
```

### 2️⃣ Compile the program

Using Makefile:

```bash
make
```

Or manually:

```bash
gcc src/main.c src/game.c -Iinclude -o tic-tac-toe
```

### 3️⃣ Run the game

Linux / Mac

```bash
./tic-tac-toe
```

Windows

```bash
tic-tac-toe.exe
```

---

# 🎯 How to Play

1. The game starts with **Player X**.
2. Players take turns entering **row and column numbers**.
3. Each position must be between **0 and 2**.

Example input:

```
Player X, enter row and column (0-2): 1 2
```

This means:

```
Row = 1
Column = 2
```

---

# 🧭 Board Position Guide

```
 0,0 | 0,1 | 0,2
 ----|-----|----
 1,0 | 1,1 | 1,2
 ----|-----|----
 2,0 | 2,1 | 2,2
```

---

# 🏆 Winning Rules

A player wins if they place **three marks in a row**:

* Horizontal
* Vertical
* Diagonal

Example winning row:

```
 X | X | X
```

---

# 🤝 Draw Condition

If all cells are filled and **no player wins**, the game ends in a **draw**.

```
It's a draw! Good game!
```

---

# 🧠 Concepts Used

This project demonstrates several core **C programming concepts**:

* Arrays (2D arrays)
* Functions
* Loops
* Conditional statements
* Input validation
* Game logic implementation

---

# 🚀 Future Improvements

Possible upgrades for this project:

* 🤖 **Single-player mode with AI**
* 🎨 **Colored terminal UI**
* 🧾 **Score tracking**
* 🖥 **Graphical interface**
* 🌐 **Online multiplayer**

---

# 
Created as a **learning project for practicing C programming and game logic**.

---

# 📜 License

This project is licensed under the **MIT License**.
See the `LICENSE` file for details.

---

# ⭐ Support

If you like this project:

* ⭐ Star the repository
* 🍴 Fork it
* 🛠 Contribute improvements

Happy Coding! 🚀
