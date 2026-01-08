# 📘 Assignment(Looper) — C Programming (Q-1 to Q-3)

This document contains 3 C programs demonstrating loop, arithmetic operations, and digit processing concepts.

---

## ✅ **Q.1) Alphabet Skipper**

### 📌 **Problem Statement**
Develop a program that prints all alphabets from **'a' to 'z'** by **skipping 3 alphabets** using a **do-while loop**.

### 🛠 **Logic Used**
- Start from character `'a'`
- Print current character
- Increase it by **4** (skip 3 letters)
- Repeat until `'z'`

### 🧠 **Concepts**
✔ ASCII character handling  
✔ do-while loop  
✔ Increment logic

### ▶️ **Sample Output**
```
a e i m q u y
```

---

## ✅ **Q.2) Digit Counter**

### 📌 **Problem Statement**
Develop a program to **count total digits** in a number.

### 🛠 **Logic Used**
- If number is `0`, digit count = 1
- Otherwise divide number by **10** until it becomes **0**
- Count total iterations

### 🧠 **Concepts**
✔ while loop  
✔ integer division  
✔ conditional logic  

### ▶️ **Sample Output**
```
Input: 50836
Output: Total number of digits: 5
```

---

## ✅ **Q.3) Digit Addition**

### 📌 **Problem Statement**
Develop a program to **find the sum of the first and last digits** of a number.

### 🛠 **Logic Used**
- Last digit = `num % 10`
- First digit = repeatedly divide by `10` until `< 10`
- Sum = first digit + last digit

### 🧠 **Concepts**
✔ modulus operator  
✔ while loop  
✔ digit extraction  

### ▶️ **Sample Output**
```
Input: 384
Output: The sum of the first and the last digit: 7
```

---

## 🏁 **Conclusion**
These three programs cover basic C programming techniques:

✔ Character handling & skipping logic  
✔ Mathematical operations on integers  
✔ Loop-based digit extraction  

They are essential foundations for building more advanced C algorithms.
