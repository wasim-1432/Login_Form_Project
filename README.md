# 🔐 C++ Login System using File Handling

A basic console-based **Login System** built with C++ using **Object-Oriented Programming (OOP)** and **file handling**. This project demonstrates how user authentication systems work using simple file-based data storage.

---

## 📋 Features

- ✅ **Sign Up**: Register with a Username, Email, and Password  
- 🔐 **Login**: Authenticate using saved credentials  
- 🔁 **Forgot Password**: Recover password by verifying Username and Email  
- 💾 **File Handling**: User data is saved in `loginData.txt` file using `fstream`

---

## 🛠️ Technologies Used

- **C++**
- **OOP (Object-Oriented Programming)**
- **File I/O (`fstream`)**

---

## 📂 File Structure

📁 LoginSystem
│
├── login.cpp # Main source code file
├── loginData.txt # Auto-generated file to store user data
└── README.md # Project documentation


---

## 🧠 Key Concepts Implemented

- Class-based design for cleaner and modular code  
- `fstream` used for file read/write operations  
- `getline()` and `cin.ignore()` used to handle mixed input types  
- Record search and validation through line-by-line parsing  

---

## 🚀 How to Run

1. **Clone the repository**:
   ```bash
   git clone https://github.com/your-username/your-repo-name.git
