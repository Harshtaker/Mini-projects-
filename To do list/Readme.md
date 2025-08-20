📝 To-Do List Manager (C++)

This is a console-based To-Do List Manager built in C++ as part of my CodSoft Internship tasks.
The program allows users to add, view, mark as completed, and remove tasks dynamically using vector.

📌 Features

➕ Add Task – Create a new task with a description.

📋 View Tasks – Display all tasks with their status (✅ Completed / ❌ Pending).

✔️ Mark Completed – Update a task status once it’s done.

❌ Remove Task – Delete tasks from the list.

🌀 Menu-Driven – Keeps running until the user chooses Exit.

⚙️ How It Works

Program starts with a menu.

User selects an option (1-5).

Tasks are stored inside a vector<Task>.

Each Task has:

string Title (description)

bool completed (status)

Functions are used for modularity:

addTask()

viewTasks()

markCompleted()

removeTask()

🚀 Getting Started
🔧 Requirements

C++ Compiler (like g++)

Command Line / Terminal

▶️ Compile & Run
g++ todo.cpp -o todo
./todo


Your Tasks:
1. Complete C++ project [Pending ❌]

🛠️ Concepts Used

Structs (Task)

Vectors (std::vector)

Functions for modular design

cin.ignore() & getline() for input handling

Loops & Conditionals for menu-driven logic
