# 🎯 Number Guessing Game in C

This is a simple **random number guessing game** built in C.  
The computer picks a number between **1 and 100**, and the player keeps guessing until they get it right.

---

## 💻 How It Works
- The program generates a random number using `rand()` and `srand(time(0))`.
- The user enters guesses until they match the hidden number.
- After each guess, the program tells whether it’s **too high** or **too low**.
- It also counts how many tries it took to guess correctly.

---

## 🚀 How to Run
1. Compile the program using GCC or any C compiler:
   ```bash
   gcc guess_the_number.c -o guess
