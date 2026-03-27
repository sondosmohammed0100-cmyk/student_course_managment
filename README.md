# 🎓 Student Course Management System (C++)

## 📌 Overview

This project is a **C++ console application** designed to manage students and their enrolled courses.
It allows users to perform various operations such as adding, removing, searching, and displaying students, as well as enrolling them in courses.

The project demonstrates the use of:

* Object-Oriented Programming (OOP)
* Standard Template Library (STL)
* Data structures like `vector`, `map`, and `set`

---

## 🚀 Features

### 👨‍🎓 Student Management

* Add new students
* Remove existing students
* Search for a student by ID
* Display all students
* Sort students by GPA

### 📚 Course Management

* Enroll a student in one or more courses
* Prevent duplicate course enrollment
* Display all courses of a specific student

### 📊 Additional Operations

* Count students with GPA greater than a value (`count_if`)
* Count students with a specific GPA

---

## 🧠 Concepts Used

### 🔹 Object-Oriented Programming

* **Inheritance**:
  `Student` class inherits from `Person`

* **Encapsulation**:
  Private data members with public getters

---

### 🔹 STL (Standard Template Library)

* `vector` → to store students
* `map` → to map student ID to their courses
* `set` → to store unique courses
* Algorithms:

  * `find_if`
  * `count`
  * `count_if`
  * `sort`

---

## 🏗️ System Design

### 📌 Classes

#### 1. Person

* Stores the name of a person

#### 2. Student (inherits from Person)

* ID
* GPA

#### 3. Management

Handles all operations:

* Student management
* Course enrollment
* Searching and sorting

---

## 🔗 Data Structure Used for Courses

```cpp
map<int, set<pair<int, string>>> course_student;
```

### Explanation:

* `int` → student ID
* `set<pair<int, string>>` → (courseID, courseName)
* Ensures:

  * No duplicate courses
  * Sorted storage

---

## 🖥️ How to Use

### 📝 Available Commands:

| Command  | Description                     |
| -------- | ------------------------------- |
| Add      | Add new students                |
| Remove   | Delete a student                |
| Search   | Find a student                  |
| Print    | Display all students            |
| Enroll   | Enroll student in course        |
| Display  | Show student courses            |
| Sort     | Sort students by GPA            |
| count_if | Count students with GPA > value |
| count    | Count students with exact GPA   |
| Exit     | End program                     |

---

## ▶️ Example

```
Add
Enroll
Display
Sort
Exit
```

---

##  Notes

* Student ID must be unique
* GPA must be between 0 and 4
* When a student is removed, all their courses are also deleted

---

## 📈 Future Improvements
* Improve user interface
* Convert to GUI application

---

## 👩‍💻 Author

Sondos Mohammed

---

## ⭐ Conclusion

This project is a practical implementation of C++ concepts combining:

* OOP
* STL
* Algorithmic thinking
