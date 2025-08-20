📝 To-Do List Manager in C++

A simple console-based To-Do List Manager written in C++.
Users can add, view, complete, and remove tasks easily through a menu-driven interface.

📌 Features

➕ Add new tasks with a description

📋 View all tasks with status (✅ Completed / ❌ Pending)

✔️ Mark tasks as completed

❌ Remove tasks from the list

🌀 Menu-driven program that runs until exit

🛠 How It Works

The program starts with an empty task list.

User is shown a menu with options:

Add Task

View Tasks

Mark Task as Completed

Remove Task

Exit

Based on the choice, the program updates the list dynamically.

Tasks are stored in a vector of struct Task objects.

The program keeps running until the user selects Exit.

▶️ How to Run
Compile
g++ "Task 4.cpp" -o todo
