# 📝 To-Do List Manager in C++

A simple **console-based To-Do List Manager** written in **C++**.  
Users can add, view, complete, and remove tasks through a menu-driven interface.

---

## 📌 Features
- ➕ Add new tasks with a description  
- 📋 View all tasks with status (**✅ Completed / ❌ Pending**)  
- ✔️ Mark tasks as completed  
- ❌ Remove tasks from the list  
- 🌀 Menu-driven program that runs until exit  

---

## 🛠 How It Works
1. The program starts with an empty task list.  
2. A **menu** is displayed with options:  
   - Add Task  
   - View Tasks  
   - Mark Task as Completed  
   - Remove Task  
   - Exit  
3. Based on the user’s choice, the list is updated dynamically.  
4. Each task is stored in a `struct` and managed using a `vector`.  
5. The program continues running until the user selects **Exit**.  

---

## ▶️ How to Run

### Compile
```bash
g++ "Task 4.cpp" -o todo
