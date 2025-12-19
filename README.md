# 📚 CSE115 - Introduction to C Programming

### 🚀 Last Minute Exam Preparation Guide

> **Quick Reference Tutorial** for CSE115 students - Covers all topics with easy examples and expected outputs!

---

## 📖 Table of Contents

1. [C Basics](#1-c-basics)
2. [Arrays - Fundamentals](#2-arrays---fundamentals)
3. [Array Operations](#3-array-operations)
4. [Loops with Arrays](#4-loops-with-arrays)
5. [Functions in C](#5-functions-in-c)
6. [Strings in C](#6-strings-in-c)
7. [Structures](#7-structures)
8. [Pointers](#8-pointers)
9. [2D Arrays (Matrices)](#9-2d-arrays-matrices)
10. [File Handling](#10-file-handling)
11. [Common Algorithms](#11-common-algorithms)

---

## 1. C Basics

### 📌 Basic Structure of a C Program

```c
#include <stdio.h>  // Header file for input/output

int main() {
    // Your code goes here
    printf("Hello, World!\n");
    return 0;  // Indicates successful execution
}
```

**Expected Output:**

```
Hello, World!
```

### 📌 Variables and Data Types

```c
int age = 20;           // Integer (whole numbers)
float gpa = 3.75;       // Decimal numbers
char grade = 'A';       // Single character
char name[50] = "Ali";  // String (array of characters)
```

### 📌 Input/Output

```c
#include <stdio.h>

int main() {
    int num;
    float price;
    char name[50];

    printf("Enter a number: ");
    scanf("%d", &num);          // Use & for non-array variables

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Enter name: ");
    scanf("%s", name);          // No & for arrays!

    printf("Number: %d, Price: %.2f, Name: %s\n", num, price, name);
    return 0;
}
```

**Input:**

```
5
99.99
Ahmed
```

**Output:**

```
Number: 5, Price: 99.99, Name: Ahmed
```

---

## 2. Arrays - Fundamentals

### 📌 What is an Array?

An array is a **collection of elements** of the same type stored in **contiguous memory**.

```c
// Declaration and Initialization
int arr[5] = {10, 20, 30, 40, 50};

// Access elements using index (0-based)
// arr[0] = 10, arr[1] = 20, arr[2] = 30, etc.
```

### 📌 Printing Array Elements

```c
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;

    printf("Array Elements: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
```

**Output:**

```
Array Elements: 10 20 30 40 50
```

### 📌 Taking Array Input from User

```c
#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
```

---

## 3. Array Operations

### 📌 Modify an Element at Index k

```c
#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    int k, newValue;

    printf("Original Array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter index to modify (0 to %d): ", size - 1);
    scanf("%d", &k);
    printf("Enter new value: ");
    scanf("%d", &newValue);

    // Validation and Modification
    if(k >= 0 && k < size) {
        arr[k] = newValue;  // Direct assignment
        printf("Modification successful.\n");
    } else {
        printf("Invalid index!\n");
    }

    printf("Modified Array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
```

**Input:** `2` then `100`  
**Output:**

```
Original Array: 10 20 30 40 50
Modified Array: 10 20 100 40 50
```

---

### 📌 Delete Element at Index k (Shift Left)

**🧠 Logic:** Shift all elements after index `k` one position LEFT, then decrease size.

```c
#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    int k;

    printf("Original: ");
    for(int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");

    printf("Enter index to delete (0 to %d): ", size - 1);
    scanf("%d", &k);

    if(k >= 0 && k < size) {
        // 🔑 KEY LOGIC: Shift elements LEFT
        for(int i = k; i < size - 1; i++) {
            arr[i] = arr[i + 1];  // Copy NEXT into CURRENT
        }
        size--;  // Reduce array size
        printf("Element deleted.\n");
    } else {
        printf("Invalid index!\n");
    }

    printf("New Array: ");
    for(int i = 0; i < size; i++) printf("%d ", arr[i]);

    return 0;
}
```

**Input:** `2`  
**Output:**

```
Original: 10 20 30 40 50
New Array: 10 20 40 50
```

---

### 📌 Insert Element at Index k (Shift Right)

**🧠 Logic:** Shift all elements from `k` to end one position RIGHT, then insert.

```c
#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    int k, value;

    printf("Original: ");
    for(int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");

    printf("Enter index to insert (0 to %d): ", size);
    scanf("%d", &k);
    printf("Enter value to insert: ");
    scanf("%d", &value);

    if(k >= 0 && k <= size && size < 100) {
        // 🔑 KEY LOGIC: Shift elements RIGHT (start from end!)
        for(int i = size; i > k; i--) {
            arr[i] = arr[i - 1];  // Move PREVIOUS into CURRENT
        }
        arr[k] = value;  // Place new value
        size++;          // Increase size

        printf("Element inserted.\n");
    } else {
        printf("Invalid index or Array full!\n");
    }

    printf("New Array: ");
    for(int i = 0; i < size; i++) printf("%d ", arr[i]);

    return 0;
}
```

**Input:** `2` then `99`  
**Output:**

```
Original: 10 20 30 40 50
New Array: 10 20 99 30 40 50
```

---

### 📌 Append Element to End of Array

```c
#include <stdio.h>

int main() {
    int X[100];
    int n, newValue;

    printf("Enter number of elements (n): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &X[i]);
    }

    printf("Enter new element to add: ");
    scanf("%d", &newValue);

    // 🔑 Simply assign to index 'n'
    X[n] = newValue;
    n++;  // Update count

    printf("Updated array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", X[i]);
    }

    return 0;
}
```

---

## 4. Loops with Arrays

### 📌 Calculate Sum and Average

```c
#include <stdio.h>

int main() {
    float arr[100];
    int n;
    float sum = 0.0, avg;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];  // Add to running total
    }

    avg = sum / n;
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    // Find elements greater than average
    printf("Elements greater than average: ");
    for(int i = 0; i < n; i++) {
        if(arr[i] > avg) {
            printf("%.0f ", arr[i]);
        }
    }

    return 0;
}
```

**Input:** `5` then `10 20 15 16 4`  
**Output:**

```
Sum = 65.00
Average = 13.00
Elements greater than average: 20 15 16
```

---

### 📌 Find Unique Elements (Appearing Only Once)

**🧠 Logic:** For each element, count how many times it appears. If count == 1, it's unique.

```c
#include <stdio.h>

int main() {
    int arr[100], n, count;

    printf("Input the number of elements: ");
    scanf("%d", &n);

    printf("Input elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The unique elements are: ");
    for(int i = 0; i < n; i++) {
        count = 0;

        // Count occurrences of arr[i]
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        // If appears exactly once = unique
        if(count == 1) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
```

**Input:** `7` then `1 2 3 2 4 5 4`  
**Output:**

```
The unique elements are: 1 3 5
```

---

### 📌 Count Duplicate Elements

**🧠 Logic:** Count how many distinct numbers appear more than once.

```c
#include <stdio.h>

int main() {
    int arr[100], n, count = 0, freq;

    printf("Input the number of elements: ");
    scanf("%d", &n);

    printf("Input elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        // Check if we already processed this number
        int alreadyChecked = 0;
        for(int k = 0; k < i; k++) {
            if(arr[i] == arr[k]) {
                alreadyChecked = 1;
                break;
            }
        }

        // If not processed yet, count frequency
        if(alreadyChecked == 0) {
            freq = 1;
            for(int j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) freq++;
            }
            if(freq > 1) count++;  // It's a duplicate
        }
    }

    printf("Total duplicate elements: %d\n", count);
    return 0;
}
```

**Input:** `7` then `1 2 3 2 4 5 4`  
**Output:**

```
Total duplicate elements: 2
```

---

## 5. Functions in C

### 📌 Function Syntax

```c
// Function Declaration (Prototype)
return_type function_name(parameters);

// Function Definition
return_type function_name(parameters) {
    // body
    return value;  // if not void
}
```

### 📌 Reverse Array Using Function

**🧠 Logic:** Use two pointers (start and end), swap and move inward.

```c
#include <stdio.h>

// Function Prototype
void RevArr(int arr[], int size);

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    RevArr(arr, n);  // Call function

    printf("Reversed array: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}

void RevArr(int arr[], int size) {
    int temp;
    int start = 0;
    int end = size - 1;

    while(start < end) {
        // 🔑 SWAP LOGIC
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}
```

**Input:** `5` then `1 2 3 4 5`  
**Output:**

```
Reversed array: 5 4 3 2 1
```

---

### 📌 Array Rotation (Left Rotate)

**🧠 Logic:** To rotate by N positions, shift left N times.

```c
#include <stdio.h>

// Shift array left by ONE position
void shiftArr1Pos(int arr[], int size) {
    int first = arr[0];  // Save first element

    for(int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];  // Shift left
    }

    arr[size - 1] = first;  // Put first at end
}

// Rotate by N positions
void arr1Rotate(int arr[], int size, int rotFrom) {
    for(int i = 0; i < rotFrom; i++) {
        shiftArr1Pos(arr, size);
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5, rotFrom = 2;

    printf("Original: ");
    for(int i = 0; i < size; i++) printf("%d ", arr[i]);

    arr1Rotate(arr, size, rotFrom);

    printf("\nAfter rotating by %d: ", rotFrom);
    for(int i = 0; i < size; i++) printf("%d ", arr[i]);

    return 0;
}
```

**Output:**

```
Original: 10 20 30 40 50
After rotating by 2: 30 40 50 10 20
```

---

## 6. Strings in C

### 📌 String Basics

```c
// Strings are arrays of characters ending with '\0' (null terminator)
char str[100] = "Hello";  // Internally: 'H','e','l','l','o','\0'

// Input a string
scanf("%s", str);  // Reads until space

// Print a string
printf("%s\n", str);
```

### 📌 Important: Space Before %c

```c
char ch;
scanf(" %c", &ch);  // The SPACE skips leftover newlines!
```

### 📌 Replace Character in String

```c
#include <stdio.h>

void Replace(char arr[], char oldChar, char newChar) {
    int i = 0;
    while(arr[i] != '\0') {
        if(arr[i] == oldChar) {
            arr[i] = newChar;
        }
        i++;
    }
}

int main() {
    char str[100];
    char oldC, newC;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter character to replace: ");
    scanf(" %c", &oldC);  // Note the space!

    printf("Enter new character: ");
    scanf(" %c", &newC);

    Replace(str, oldC, newC);

    printf("Modified String: %s\n", str);
    return 0;
}
```

**Input:** `hello`, `l`, `x`  
**Output:**

```
Modified String: hexxo
```

---

### 📌 Remove Non-Alphabetic Characters

**🧠 Logic:** Use two-pointer technique - one for reading, one for writing.

```c
#include <stdio.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    scanf("%s", str);

    j = 0;  // Write position
    for(i = 0; str[i] != '\0'; i++) {
        // Check if character is alphabet
        if((str[i] >= 'a' && str[i] <= 'z') ||
           (str[i] >= 'A' && str[i] <= 'Z')) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';  // Don't forget null terminator!

    printf("Output String: %s\n", str);
    return 0;
}
```

**Input:** `a1b2c3`  
**Output:**

```
Output String: abc
```

---

### 📌 Concatenate Two Strings (Without strcat)

```c
#include <stdio.h>

int main() {
    char A[100], B[50];
    int i, j;

    printf("Enter first string: ");
    scanf("%s", A);
    printf("Enter second string: ");
    scanf("%s", B);

    // Find end of A
    i = 0;
    while(A[i] != '\0') i++;

    // Append B to A
    j = 0;
    while(B[j] != '\0') {
        A[i] = B[j];
        i++;
        j++;
    }
    A[i] = '\0';  // Terminate!

    printf("After joining: %s\n", A);
    return 0;
}
```

**Input:** `Hello`, `World`  
**Output:**

```
After joining: HelloWorld
```

---

### 📌 Check Palindrome

**🧠 Logic:** Compare characters from both ends moving inward.

```c
#include <stdio.h>

int main() {
    char str[100];
    int len = 0, start, end;
    int isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Calculate length
    while(str[len] != '\0') len++;

    start = 0;
    end = len - 1;

    while(start < end) {
        if(str[start] != str[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if(isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}
```

**Input:** `madam` → Output: `The string is a palindrome.`  
**Input:** `hello` → Output: `The string is NOT a palindrome.`

---

### 📌 Find String Length (Two Methods)

```c
#include <stdio.h>

// Method 1: Array Notation
int findlength_Array(char s[]) {
    int i = 0;
    while(s[i] != '\0') {
        i++;
    }
    return i;
}

// Method 2: Pointer Notation
int findlength_Pointer(char *s) {
    int count = 0;
    while(*s != '\0') {
        count++;
        s++;  // Move pointer forward
    }
    return count;
}

int main() {
    char str[] = "Hello";
    printf("Length (Array): %d\n", findlength_Array(str));
    printf("Length (Pointer): %d\n", findlength_Pointer(str));
    return 0;
}
```

**Output:**

```
Length (Array): 5
Length (Pointer): 5
```

---

## 7. Structures

### 📌 What is a Structure?

A structure groups **different data types** together.

```c
// Define Structure
struct Student {
    int ID;
    char name[50];
    float cgpa;
    int age;
};

// Create variable
struct Student s1;

// Access members using DOT (.)
s1.ID = 101;
s1.cgpa = 3.75;
```

### 📌 Array of Structures

```c
#include <stdio.h>
#include <string.h>

struct student {
    int ID;
    char fname[20];
    char lname[20];
    int age;
    float cgpa;
};

int main() {
    struct student stlist[5];
    int i;

    // Input 5 students
    printf("Enter records for 5 students:\n");
    for(i = 0; i < 5; i++) {
        printf("Student %d (ID fname lname age cgpa): ", i+1);
        scanf("%d %s %s %d %f",
              &stlist[i].ID,
              stlist[i].fname,
              stlist[i].lname,
              &stlist[i].age,
              &stlist[i].cgpa);
    }

    // TASK 1: Search by ID
    int searchID, found = 0;
    printf("\nEnter ID to search: ");
    scanf("%d", &searchID);

    for(i = 0; i < 5; i++) {
        if(stlist[i].ID == searchID) {
            printf("Found: %s %s, CGPA: %.2f\n",
                   stlist[i].fname, stlist[i].lname, stlist[i].cgpa);
            found = 1;
        }
    }
    if(!found) printf("Error: Invalid ID\n");

    // TASK 2: Find Youngest Student
    int minIndex = 0;
    for(i = 1; i < 5; i++) {
        if(stlist[i].age < stlist[minIndex].age) {
            minIndex = i;
        }
    }
    printf("\nYoungest: %s %s (Age: %d)\n",
           stlist[minIndex].fname, stlist[minIndex].lname, stlist[minIndex].age);

    // TASK 3: Highest CGPA
    float maxCGPA = stlist[0].cgpa;
    for(i = 1; i < 5; i++) {
        if(stlist[i].cgpa > maxCGPA) maxCGPA = stlist[i].cgpa;
    }
    printf("\nStudent(s) with Highest CGPA (%.2f):\n", maxCGPA);
    for(i = 0; i < 5; i++) {
        if(stlist[i].cgpa == maxCGPA) {
            printf("- %s %s\n", stlist[i].fname, stlist[i].lname);
        }
    }

    // TASK 4: Filter by Name (using strcmp)
    printf("\nStudents NOT named John:\n");
    for(i = 0; i < 5; i++) {
        if(strcmp(stlist[i].fname, "John") != 0) {  // strcmp returns 0 if equal
            printf("- %s %s\n", stlist[i].fname, stlist[i].lname);
        }
    }

    return 0;
}
```

### 📌 Passing Structures to Functions

```c
// Pass by reference to modify original
void insertStudent(struct Student s[], int *n) {
    int curr = *n;
    printf("Enter details: ");
    scanf("%d %s", &s[curr].ID, s[curr].name);
    (*n)++;  // Modify count in main
}

// Call: insertStudent(list, &n);
```

---

## 8. Pointers

### 📌 Pointer Basics

```c
int x = 10;
int *p = &x;   // p stores ADDRESS of x

printf("Value of x: %d\n", x);      // 10
printf("Address of x: %p\n", &x);   // Memory address
printf("Value of p: %p\n", p);      // Same address
printf("Value at p: %d\n", *p);     // 10 (dereferencing)
```

### 📌 Pointer Arithmetic

```c
int arr[] = {10, 20, 30, 40, 50};
int *p = arr;  // Points to arr[0]

// These are equivalent:
arr[i]     ←→  *(arr + i)
&arr[i]    ←→  (arr + i)

printf("%d\n", *p);        // 10 (arr[0])
printf("%d\n", *(p + 1));  // 20 (arr[1])
printf("%d\n", *(p + 2));  // 30 (arr[2])
```

### 📌 Find Max Using Pointers

```c
#include <stdio.h>

int max(int *p, int size) {
    int maxVal = *p;  // First element

    for(int i = 1; i < size; i++) {
        if(*(p + i) > maxVal) {
            maxVal = *(p + i);
        }
    }
    return maxVal;
}

int main() {
    int arr[] = {12, 45, 2, 99, 23};
    printf("Max value: %d\n", max(arr, 5));
    return 0;
}
```

**Output:**

```
Max value: 99
```

---

### 📌 Bubble Sort Using Pointers

```c
#include <stdio.h>

void sortArray(int *ptr, int size) {
    int temp;

    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            // Compare adjacent elements
            if(*(ptr + j) > *(ptr + j + 1)) {
                // Swap
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22};
    int size = 5;

    printf("Original: ");
    for(int i = 0; i < size; i++) printf("%d ", arr[i]);

    sortArray(arr, size);

    printf("\nSorted: ");
    for(int i = 0; i < size; i++) printf("%d ", arr[i]);

    return 0;
}
```

**Output:**

```
Original: 64 34 25 12 22
Sorted: 12 22 25 34 64
```

---

### 📌 Reverse Array Using Pointers

```c
#include <stdio.h>

void rev_arr_pointer(int *arr, int *rev_arr, int size) {
    for(int i = 0; i < size; i++) {
        *(rev_arr + i) = *(arr + (size - 1 - i));
    }
}

int main() {
    int original[] = {10, 20, 30, 40, 50};
    int reversed[5];
    int size = 5;

    rev_arr_pointer(original, reversed, size);

    printf("Reversed: ");
    for(int i = 0; i < size; i++) printf("%d ", reversed[i]);

    return 0;
}
```

**Output:**

```
Reversed: 50 40 30 20 10
```

---

## 9. 2D Arrays (Matrices)

### 📌 Declaration and Input

```c
int arr[3][3];  // 3x3 matrix

// Input
for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
        scanf("%d", &arr[i][j]);
    }
}

// Print
for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
        printf("%d ", arr[i][j]);
    }
    printf("\n");
}
```

### 📌 Matrix Operations

```c
#include <stdio.h>

int main() {
    int arr[3][3];
    int sumDiag = 0, sumBorder = 0;
    int maxRow = 0, maxCol = 0;

    // Input
    printf("Enter 3x3 matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate
    for(int i = 0; i < 3; i++) {
        int rowSum = 0, colSum = 0;

        for(int j = 0; j < 3; j++) {
            // Main Diagonal (i == j)
            if(i == j) sumDiag += arr[i][j];

            // Border elements
            if(i == 0 || j == 0 || i == 2 || j == 2) {
                sumBorder += arr[i][j];
            }

            rowSum += arr[i][j];
            colSum += arr[j][i];  // Note: arr[j][i]
        }

        printf("Row %d sum: %d\n", i, rowSum);
        if(rowSum > maxRow) maxRow = rowSum;
        if(colSum > maxCol) maxCol = colSum;
    }

    printf("Main diagonal sum: %d\n", sumDiag);
    printf("Border sum: %d\n", sumBorder);
    printf("Maximum row sum: %d\n", maxRow);
    printf("Maximum column sum: %d\n", maxCol);

    return 0;
}
```

### 📌 Print Triangles from Matrix

**Upper Right Triangle** (where j >= i):

```c
printf("Upper Right Triangle:\n");
for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
        if(j >= i)
            printf("%d ", arr[i][j]);
        else
            printf("  ");
    }
    printf("\n");
}
```

**Lower Right Triangle** (where i + j >= 2):

```c
printf("Lower Right Triangle:\n");
for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
        if(i + j >= 2)
            printf("%d ", arr[i][j]);
        else
            printf("  ");
    }
    printf("\n");
}
```

---

## 10. File Handling

### 📌 File Modes

| Mode   | Description                    |
| ------ | ------------------------------ |
| `"r"`  | Read only (file must exist)    |
| `"w"`  | Write (creates new/overwrites) |
| `"a"`  | Append (adds to end)           |
| `"r+"` | Read and Write                 |

### 📌 Basic File Operations

```c
#include <stdio.h>

int main() {
    FILE *fp;  // File pointer

    // --- WRITE TO FILE ---
    fp = fopen("data.txt", "w");

    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Hello World\n");
    fprintf(fp, "Number: %d\n", 42);

    fclose(fp);  // Always close!

    // --- READ FROM FILE ---
    char line[100];
    int num;

    fp = fopen("data.txt", "r");

    while(fscanf(fp, "%s", line) != EOF) {
        printf("%s ", line);
    }

    fclose(fp);

    return 0;
}
```

### 📌 Complete File Handling Example with Structures

```c
#include <stdio.h>
#include <string.h>

struct Book {
    char Name[50];
    int Id;
    int year;
    char Author[50];
    float Price;
};

int main() {
    struct Book b;
    int n;
    FILE *fp_in, *fp_dickens, *fp_others;

    // --- WRITE BOOKS TO FILE ---
    printf("Enter number of books: ");
    scanf("%d", &n);

    fp_in = fopen("input.txt", "w");

    for(int i = 0; i < n; i++) {
        printf("Book %d (Name ID Year Author Price): ", i + 1);
        scanf("%s %d %d %s %f", b.Name, &b.Id, &b.year, b.Author, &b.Price);
        fprintf(fp_in, "%s %d %d %s %.2f\n", b.Name, b.Id, b.year, b.Author, b.Price);
    }
    fclose(fp_in);
    printf("Saved to input.txt\n");

    // --- READ AND DISPLAY ---
    fp_in = fopen("input.txt", "r");

    printf("\nBooks in system:\n");
    while(fscanf(fp_in, "%s %d %d %s %f", b.Name, &b.Id, &b.year, b.Author, &b.Price) != EOF) {
        printf("ID: %d | Name: %s | Author: %s\n", b.Id, b.Name, b.Author);
    }
    fclose(fp_in);

    // --- FILTER BY AUTHOR ---
    fp_in = fopen("input.txt", "r");
    fp_dickens = fopen("dickens_books.txt", "w");
    fp_others = fopen("other_books.txt", "w");

    while(fscanf(fp_in, "%s %d %d %s %f", b.Name, &b.Id, &b.year, b.Author, &b.Price) != EOF) {
        if(strcmp(b.Author, "Charles_Dickens") == 0) {
            fprintf(fp_dickens, "%s\n", b.Name);
        } else {
            fprintf(fp_others, "%s\n", b.Name);
        }
    }

    fclose(fp_in);
    fclose(fp_dickens);
    fclose(fp_others);

    printf("Created dickens_books.txt and other_books.txt\n");

    return 0;
}
```

---

## 11. Common Algorithms

### 📌 Swap Two Variables

```c
int a = 5, b = 10;
int temp;

temp = a;   // Save a
a = b;      // Overwrite a
b = temp;   // Put saved value in b

// Result: a = 10, b = 5
```

### 📌 Find Maximum/Minimum in Array

```c
int max = arr[0], min = arr[0];

for(int i = 1; i < n; i++) {
    if(arr[i] > max) max = arr[i];
    if(arr[i] < min) min = arr[i];
}
```

### 📌 Linear Search

```c
int search(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) return i;  // Found at index i
    }
    return -1;  // Not found
}
```

### 📌 Bubble Sort

```c
for(int i = 0; i < n-1; i++) {
    for(int j = 0; j < n-i-1; j++) {
        if(arr[j] > arr[j+1]) {
            // Swap
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}
```

---

## 📝 Quick Reference Card

### Format Specifiers

| Type    | Specifier      |
| ------- | -------------- |
| int     | `%d`           |
| float   | `%f` or `%.2f` |
| char    | `%c`           |
| string  | `%s`           |
| address | `%p`           |

### Important String Functions (from `<string.h>`)

| Function            | Description                  |
| ------------------- | ---------------------------- |
| `strlen(s)`         | Length of string             |
| `strcpy(dest, src)` | Copy string                  |
| `strcat(dest, src)` | Concatenate strings          |
| `strcmp(s1, s2)`    | Compare (returns 0 if equal) |

### Common Mistakes to Avoid ❌

1. **Forgetting `&` in scanf** for non-array variables
2. **Using `&` with arrays/strings** in scanf (not needed!)
3. **Not null-terminating strings** after modification
4. **Array index out of bounds** (remember: 0 to n-1)
5. **Not closing files** after opening
6. **Forgetting space before `%c`** in scanf

---

## 🎯 Practice Tips

1. **Trace code by hand** - Write down variable values step by step
2. **Draw arrays** - Visualize indices and values
3. **For loops** - Know your start, condition, and increment
4. **Pointers** - Remember `*p` = value, `p` = address
5. **Structures** - Use dot notation: `student.name`

---

## 📁 Files in This Repository

### Assignment 1 (Arrays, Strings, Functions, Structures)

- Array modification, insertion, deletion
- Unique elements, duplicates
- Array reversal, rotation
- String manipulation
- Palindrome check
- Structure operations

### Assignment 2 (Pointers, 2D Arrays, File Handling)

- Pointer arithmetic
- Sorting using pointers
- Matrix operations
- File read/write operations

---

**Good Luck on Your Exam! 🍀**

> _"The only way to learn programming is by doing it."_ - Practice these examples!
