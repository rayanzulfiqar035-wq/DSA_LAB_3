# DSA Lab 03: Structures and Pointers

This repository contains six independent C++ programs for Lab 03 in Data Structures and Algorithms. The exercises use a `Student` structure to practice member access, structure pointers, dynamic memory, pointer parameters, and a menu-driven student record application.

## Student Information

- **Name:** Muhammad Rayan Zulfiqar
- **CMS:** 543021
- **Course:** CS — Data Structures and Algorithms
- **Lab:** 03 — Structures and Pointers; Dynamic Memory Allocation

## Lab Tasks

| Task | Program | Description |
|---|---|---|
| 1. Creating a structure | `Q1.cpp` | Define a `Student` structure, enter one student's roll number, full name, and marks, then display the record. |
| 2. Structure pointer | `Q2.cpp` | Point to a local `Student`, enter and display the record through the pointer, update the marks, and display the updated record. |
| 3. Dynamic record | `Q3.cpp` | Allocate one student record with `new`, access it through a pointer, then release it with `delete` and set the pointer to `nullptr`. |
| 4. Pointer functions | `Q4.cpp` | Use a read-only pointer parameter to display a record and a mutable pointer parameter to update its marks. Release the allocated record before the program ends. |
| 5. Record existence check | `Q5.cpp` | Start with a `nullptr` pointer and safely display the record before allocation, after creation, and after deletion. |
| 6. Student record application | `Q6.cpp` | Provide a menu to create, display, update, and delete one student record, or exit. Check record existence and clean up allocated memory. |

## Repository Structure

```text
.
├── README.md
├── Q1.cpp
├── Q2.cpp
├── Q3.cpp
├── Q4.cpp
├── Q5.cpp
└── Q6.cpp
