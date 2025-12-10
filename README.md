FUNDAMENTALS OF COMPUTER PROGRAMMING (THEORY)

📌 Project Title

Personal Planner and Productivity Calculator

📝 Problem Statement

Managing tasks, habits, and study schedules efficiently can be challenging in modern life. Students and professionals often struggle with:

Tracking daily activities

Monitoring progress

Staying productive

This project aims to develop a console-based personal planner that helps users:

✔️ Keep track of tasks and their completion status

✔️ Log study hours daily (Mon–Sun, 3 sessions/day)

✔️ Generate weekly study reports

✔️ Calculate productivity scores based on completed tasks

The system uses a simple, menu-driven interface for smooth navigation and effective productivity management.

🎯 Objectives
1. User Authentication

Implement a basic login system to secure access.

2. User-Friendly Interface

Clean, menu-based console navigation for ease of use.

3. Task Management

Add new tasks

View all tasks

Mark tasks as completed

4. Study Hours Tracking

Log study hours for each day (Mon–Sun, 3 sessions/day)

Generate weekly study reports to monitor consistency

5. Productivity Calculation

Compute productivity score based on completed tasks (using the ternary operator)

🛠️ Code and Tools
Programming Language

C++

IDE / Compiler

Dev C++

Libraries Used

<iostream> — For input/output

<string> — For handling strings, such as task titles and deadlines

📚 Key Concepts Used
🔹 Structures (struct)

Used for organizing data like tasks, habits, etc.

🔹 Functions

Program is divided into modular functions such as:

login()

dashboard()

addTask()

viewTasks()

markTaskDone()

🔹 Arrays

Used to store:

Task lists

Study hours in a 7×3 matrix

🔹 Loops

Used to iterate through:

Days

Study sessions

Tasks

🔹 Conditional Statements

Used for:

Login validation

Marking tasks as completed

Controlling menu flow

🔹 Pass by Reference

Example: int &totalTasks

Ensures updated values are reflected throughout the program.

🔹 Ternary Operator

Used for:

Quick productivity score calculations

📌 Summary

This project is a beginner-friendly yet practical productivity management tool.
It demonstrates essential C++ concepts such as structures, functions, arrays, loops, conditionals, and references, all while solving a real-world problem.
The planner helps users stay organized, track their progress, and boost productivity through a simple and intuitive console application.
