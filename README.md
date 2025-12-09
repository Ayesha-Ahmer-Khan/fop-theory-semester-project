my fundamentals of computer programing end semester project

Project Tittle: Personal Planner and Productivity Calculator

Problem Statement:
In modern life, managing tasks, habits, and study schedules efficiently can be challenging. Many
students and professionals struggle with tracking their daily activities, monitoring progress, and
staying productive.
This project aims to create a simple personal planner and productivity calculator that helps users:
•	Keep track of tasks and their completion status.
•	Log study hours daily and generate weekly reports.
•	Calculate productivity scores based on completed tasks.
The system offers a console-based interface that allows users to efficiently manage tasks,
monitor their study sessions and evaluate their productivity.

Objectives:
1.	User Authentication: Implement a simple login system to secure access.
2.	User-Friendly Interface: Provide a simple menu-driven console interface to navigate the planner easily.
3.	Task Management: Allow users to add, view, and mark tasks as completed.
4.	Study Hours Tracking: Enable users to log study hours for each day (Mon-Sun) with 3 sessions of different hours and generate weekly study reports to monitor consistency.
5.	Productivity Calculation: Calculate a productivity score based on task completion.


Code and Tools:
Programming Language: C++
IDE/Compiler Used: Dev C++
Libraries Used:
•	<iostream> → For input/output operations.
•	<string> → For handling string data (task titles, deadlines).

Key Concepts Used:
•	Structures (struct): For organizing tasks and habits.
•	Functions: Modular approach for different functionalities.
•	Arrays: To store tasks and study hours.
•	Loops: For iterating through days, sessions, and tasks.
•	Conditional Statements: For decision-making (marking tasks completed, checking login credentials).
•	Pass by Reference: For updating task count dynamically (int &totalTasks).
•	Ternary Operator: For calculating productivity score.

# AI Personal Planner & Habit Tracker - Flowchart

```mermaid
graph TD
    A([Start]) --> B{Login}
    B -->|Success| C[Dashboard Menu]
    B -->|Fail| D[Access Denied] --> Z([End])

    C --> E{Choice?}
    E -->|1| F[Add Task: Input title, deadline, set completed=false, increment totalTasks] --> C
    E -->|2| G[View Tasks: If none, print 'No tasks'; Else list tasks with status] --> C
    E -->|3| H[Mark Task Done: Input index, if valid set completed=true] --> C
    E -->|4| I[Log Study Hours: Input minutes for 7 days × 3 sessions] --> C
    E -->|5| J[Show Study Report: Print total minutes per day] --> C
    E -->|6| K[Calculate Score: completed × 5, cap at 100; Print score] --> C
    E -->|7| L[Goodbye] --> Z
    E -->|Invalid| M[Print 'Invalid Choice'] --> C

    subgraph Unused
        N[Habit Struct: Defined but not used]
    end

