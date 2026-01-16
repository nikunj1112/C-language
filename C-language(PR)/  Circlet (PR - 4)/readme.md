# 📘 Pattern Printing in C — Example Programs
This repository contains multiple C programs that print different number and star patterns.
Useful for beginners learning loops, nested loops & dry-run concepts.

---

## 📌 **Q.1) Right Half Triangle Pattern**

### 🖨 Expected Output:
```
41
41 42
41 42 43
41 42 43 44
41 42 43 44 45
```

### 🎯 Objective:
To demonstrate how nested loops work in C for generating numeric patterns.

### 👨‍💻 Language Used:
- C Programming

### ▶️ Sample Output:

<img width="600" height="400" alt="pr-4 Q-1" src="https://github.com/user-attachments/assets/c7526c3c-7dfe-44a7-9ad5-76478433009b" />


### 🧠 Logic Explanation:
- Outer loop controls rows
- Inner loop prints values starting from 41

### 🛠 Concepts Used:
| Concept | Description |
|---------|-------------|
| Nested Loop | Loop inside another loop |
| Increment | Numbers increase per row |

---

## 📌 **Q.2) Floyd's Triangle Pattern**

### 🖨 Expected Output:
```
11
12 13
14 15 16
17 18 19 20
```

### 🎯 Objective:
To generate Floyd's triangle using nested loops starting from 11.

### 👨‍💻 Language Used:
- C Programming

### ▶️ Sample Output:

<img width="600" height="400" alt="pr-4 Q-2" src="https://github.com/user-attachments/assets/a88751e5-5a74-4fe9-ab49-38430ea343b3" />


### 🧠 Logic Overview:
- Initialize `num = 11`
- Outer loop manages rows
- Inner loop prints & increments `num`

### 🛠 Key Concepts Used:
| Concept | Explanation |
|--------|-------------|
| Nested Loop | Handles rows & columns |
| Variable | Stores running number |

---

## 📌 **Q.3) Left Half Triangle Pattern**

### 🖨 Expected Output:
```
        5
      4 5
    3 4 5
  2 3 4 5
1 2 3 4 5
```

### 🎯 Objective:
To print a reverse left-aligned numeric triangle with spacing.

### 👨‍💻 Logic Explanation:
- 1st inner loop prints spaces
- 2nd inner loop prints numbers up to 5

### ▶️ Sample Output:

<img width="600" height="400" alt="pr-4 Q-3" src="https://github.com/user-attachments/assets/ed9c735e-aee7-471b-9cd5-823c4a6869b0" />


### 🛠 Concepts Used:
| Concept | Description |
|---------|-------------|
| Spacing | For alignment |
| Nested loops | Multiple prints per row |

---

## 📌 **Q.4) Inverted Left Half Binary Triangle**

### 🖨 Expected Output:
```
1 0 1 0 1
  1 0 1 0
    1 0 1
      1 0
        1
```

### 🎯 Objective:
To print inverted binary values with left spacing.

### 🧠 Logic Explanation:
- Leading spaces increase every row
- `(i + j) % 2` generates binary 0/1

### ▶️ Sample Output:

<img width="600" height="400" alt="pr-4 Q-4" src="https://github.com/user-attachments/assets/59491d6f-8226-4d3a-9267-26c0a7988396" />



### 🛠 Concepts Used:
| Concept | Explanation |
|---------|-------------|
| Binary Logic | Generates 1 & 0 |
| Nested Loop | Controls pattern shape |

---

## 📌 **Q.5) Full Pyramid Pattern**

### 🖨 Expected Output:
```
        5
      4 5 4
    3 4 5 4 3
  3 3 4 5 4 3 2
1 2 3 4 5 4 3 2 1
```

### 🎯 Objective:
To print a full numeric pyramid pattern using nested loops.

### 🧠 Logic Explanation:
- 1st inner loop: spaces
- 2nd inner loop: ascending numbers
- 3rd inner loop: descending numbers

### ▶️ Sample Output:

<img width="600" height="400" alt="pr-4 Q-5" src="https://github.com/user-attachments/assets/0d472c1e-e0f2-4c00-8d97-fb9194cd8ab7" />


### 🛠 Concepts Used:
| Concept | Explanation |
|---------|-------------|
| Pyramid Logic | Symmetric output |
| Double Sequence | Ascending & descending numbers |
| Alignment | Spacing before prints |

---

## 📌 **Q.6) Custom Numeric Mirror Pattern**

### 🖨 Expected Output:
```
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1
```

### 🎯 Objective:
To print mirrored numbers with spacing in middle.

### 🧠 Logic Explanation:
- Left sequence increases
- Middle space decreases
- Right sequence 

### ▶️ Sample Output:

<img width="600" height="400" alt="pr-4 Q-6" src="https://github.com/user-attachments/assets/183cf732-0c8f-4078-bac8-0904c051a3de" />


### 🛠 Concepts Used:
| Concept | Explanation |
|---------|-------------|
| Mirroring | Left & right reverse output |
| Spacing Control | Gap decreases |
| Nested Loops | Multi-part pattern |

---

## 📌 **Q.7) Custom Alphabetic (Star) Pattern**

### 🖨 Expected Output:
```
* * * * *
*       *
* * * * *
*
*
```

### 🎯 Objective:
To print a combination of solid & hollow star patterns.

### 🧠 Logic Explanation:
- Row 1 & 3 print full stars
- Row 2 prints boundary stars only
- Last rows print single stars

### ▶️ Sample Output:

<img width="600" height="400" alt="pr-4 Q-7" src="https://github.com/user-attachments/assets/f2b13061-e35b-460c-abd2-07ce2dcbc066" />


### 🛠 Concepts Used:
| Concept | Explanation |
|---------|-------------|
| Hollow Pattern | Prints boundary only |
| Nested Loops | Used for rows & spacing |

---

### 📦 Summary:
This repository helps beginners practice:

✔ Nested Loops  
✔ Number Patterns  
✔ Star Patterns  
✔ Dry-run Logic  
✔ Loop-based Problem Solving  

---


