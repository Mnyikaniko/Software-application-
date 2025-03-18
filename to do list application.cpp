

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Task {
    string description;
    string deadline;
};

class ToDoList {
private:
    vector<Task> tasks;

public:
    void addTask() {
        Task newTask;
        cout << "Enter task description: ";
        cin.ignore();
        getline(cin, newTask.description);
        cout << "Enter task deadline (e.g., 2024-12-31): ";
        getline(cin, newTask.deadline);
        tasks.push_back(newTask);
        cout << "Task added successfully!\n";
    }

    void viewTasks() {
        if (tasks.empty()) {
            cout << "No tasks available.\n";
            return;
        }
        cout << "\nTo-Do List:\n";
        for (size_t i = 0; i < tasks.size(); i++) {
            cout << i + 1 << ". " << tasks[i].description 
                 << " (Deadline: " << tasks[i].deadline << ")\n";
        }
    }

    void deleteTask() {
        if (tasks.empty()) {
            cout << "No tasks to delete.\n";
            return;
        }
        int index;
        viewTasks();
        cout << "Enter the task number to delete: ";
        cin >> index;
        if (index < 1 || index > tasks.size()) {
            cout << "Invalid task number!\n";
        } else {
            tasks.erase(tasks.begin() + index - 1);
            cout << "Task deleted successfully!\n";
        }
    }
};

int main() {
    ToDoList todoList;
    int choice;

    do {
        cout << "\nTo-Do List Manager\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Delete Task\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                todoList.addTask();
                break;
            case 2:
                todoList.viewTasks();
                break;
            case 3:
                todoList.deleteTask();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
