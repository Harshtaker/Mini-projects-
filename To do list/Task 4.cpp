#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Task {
    string Title;
    bool completed;
};

void addTask(vector<Task> &tasks);
void viewTasks(const vector<Task> &tasks);
void markCompleted(vector<Task> &tasks);
void removeTask(vector<Task> &tasks);

int main() {
    vector<Task> tasks;
    int choice;

    do {
        cout << "\n===== TO-DO LIST MANAGER =====\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addTask(tasks); break;
            case 2: viewTasks(tasks); break;
            case 3: markCompleted(tasks); break;
            case 4: removeTask(tasks); break;
            case 5: cout << "closing... Goodbye!\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}

void addTask(vector<Task> &tasks) {
    cin.ignore();  
    Task newTask;
    cout << "Enter task description: ";
    getline(cin, newTask.Title);
    newTask.completed = false;
    tasks.push_back(newTask);
    cout << "Task added successfully!\n";
}

void viewTasks(const vector<Task> &tasks) {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
        return;
    }
    cout << "\nYour Tasks:\n";
    for (int i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << tasks[i].Title 
             << " [" << (tasks[i].completed ? "Completed ✅" : "Pending ❌") << "]\n";
    }
}

void markCompleted(vector<Task> &tasks) {
    int index;
    viewTasks(tasks);
    if (tasks.empty()) return;

    cout << "Enter task number to mark as completed: ";
    cin >> index;

    if (index > 0 && index <= tasks.size()) {
        tasks[index - 1].completed = true;
        cout << "Task marked as completed!\n";
    } else {
        cout << "Invalid task number!\n";
    }
}

void removeTask(vector<Task> &tasks) {
    int index;
    viewTasks(tasks);
    if (tasks.empty()) return;

    cout << "Enter task number to remove: ";
    cin >> index;

    if (index > 0 && index <= tasks.size()) {
        tasks.erase(tasks.begin() + index - 1);
        cout << "Task removed successfully!\n";
    } else {
        cout << "Invalid task number!\n";
    }
}

