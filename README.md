FUNDAMENTALS OF COMPUTER PROGRAMMING (THOERY)

📌 Project Title

Personal Planner and Productivity Calculator

📝 Problem Statement

In modern life, managing tasks, habits, and study schedules efficiently can be challenging. Students and professionals often struggle with tracking their daily activities, monitoring progress, and staying productive.

This project aims to build a console-based personal planner that helps users:

Keep track of tasks and their completion status

Log study hours daily (Mon–Sun, 3 sessions/day)

Generate weekly study reports

Calculate productivity scores based on completed tasks

The system provides a simple, menu-driven interface for easy navigation and productivity management.

🎯 Objectives
1. User Authentication

Implement a simple login system to secure access.

2. User-Friendly Interface

Provide a clean, menu-based console interface.

3. Task Management

Add new tasks

View existing tasks

Mark tasks as completed

4. Study Hours Tracking

Log study hours for each day (Mon–Sun) with 3 sessions

Generate weekly reports to monitor consistency

5. Productivity Calculation

Calculate productivity score based on completed tasks (using ternary operator).

🛠️ Code and Tools
Programming Language

C++

IDE/Compiler Used

Dev C++

Libraries Used

<iostream> → For input/output operations

<string> → For handling string data (task titles, deadlines)

📚 Key Concepts Used
• Structures (struct)

Used for organizing tasks, habits, etc.

• Functions

Modular approach to separate different features like:

login

dashboard

addTask()

viewTasks()

markTaskDone()

• Arrays

Used to store:

Tasks

Study hours (7×3 matrix)

• Loops

For iterating:

Days

Study sessions

Tasks

• Conditional Statements

Used for:

Login validation

Checking task completion

Menu navigation

• Pass by Reference

Example: int &totalTasks
Used so the updated task count is reflected everywhere in the program.

• Ternary Operator

Used for simple productivity score calculations.

📌 Summary

This project provides a beginner-friendly but functional personal productivity system with real-world applications. It uses essential C++ concepts such as structures, arrays, functions, and decision-making to create a useful planner tool.
