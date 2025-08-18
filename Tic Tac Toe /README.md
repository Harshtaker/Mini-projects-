# 🎮 Tic Tac Toe in C++

A simple **console-based Tic Tac Toe** game written in **C++**.  
Two players (`X` and `O`) take turns marking spaces on a 3×3 grid until one player wins or the game ends in a draw.

---

## 📌 Features
- 2-player game (Player `X` vs Player `O`)
- Clean grid display with proper spacing
- Detects **wins** (rows, columns, diagonals)
- Detects **draws** (when the board is full)
- Input validation for correct moves
- Option to **play again** after a game ends

---

## 🛠 How It Works
1. The board starts empty:
   |   |   
-----------
   |   |   
-----------
   |   |   
2. Players take turns choosing a position (1–9).
3. If the move is valid, the mark (`X` or `O`) is placed.
4. The game checks after each move:
- ✅ If a player wins → show winner 🎉  
- 🤝 If it’s a draw → announce draw  
- Otherwise → switch player and continue
5. After the game, players can choose to restart or quit.

---

## ▶️ How to Run

### Compile
```bash
g++ tic_tac_toe.cpp -o tic_tac_toe
