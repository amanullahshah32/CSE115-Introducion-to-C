                         // TASK 1

/*
#include <stdio.h>

int main() {
    int n, k, newValue, i, duplicate = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[100];

    printf("Enter %d unique integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                printf("Error: Duplicate value found.\n");
                return 0;
            }
        }
    }

    printf("Enter index k to modify (0 to %d): ", n - 1);
    scanf("%d", &k);

    if (k < 0 || k >= n) {
        printf("Invalid index!\n");
        return 0;
    }

    printf("Enter new value: ");
    scanf("%d", &newValue);

    for (i = 0; i < n; i++) {
        if (arr[i] == newValue) {
            duplicate = 1;
            break;
        }
    }

    if (duplicate) {
        printf("Error: Value already exists.\n");
    } else {
        arr[k] = newValue;
        printf("Array after modification:\n");
        for (i = 0; i < n; i++) printf("%d ", arr[i]);
    }

    return 0;
}
*/


                         // TASK 2

/*
#include <stdio.h>

int main() {
    int n, k, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[100];

    printf("Enter %d unique integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                printf("Error: Duplicate value found.\n");
                return 0;
            }
        }
    }

    printf("Enter index k to delete (0 to %d): ", n - 1);
    scanf("%d", &k);

    if (k < 0 || k >= n) {
        printf("Invalid index!\n");
        return 0;
    }

    for (i = k; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Array after deletion:\n");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}
*/


                       //  TASK 3

/*
#include <stdio.h>

int main() {
    int n, k, newValue, i, duplicate = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[100];

    printf("Enter %d unique integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                printf("Error: Duplicate value found.\n");
                return 0;
            }
        }
    }

    printf("Enter index k to insert (0 to %d): ", n);
    scanf("%d", &k);

    if (k < 0 || k > n) {
        printf("Invalid index!\n");
        return 0;
    }

    printf("Enter value to insert: ");
    scanf("%d", &newValue);

    for (i = 0; i < n; i++) {
        if (arr[i] == newValue) {
            duplicate = 1;
            break;
        }
    }

    if (duplicate) {
        printf("Error: Value already exists.\n");
        return 0;
    }

    for (i = n; i > k; i--) {
        arr[i] = arr[i - 1];
    }

    arr[k] = newValue;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}
*/


                        //  TASK 4

/*
#include <stdio.h>

int main() {
    int X[100], n, newValue, i;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &X[i]);
    }

    printf("Enter new element to insert after the first %d elements: ", n);
    scanf("%d", &newValue);

    X[n] = newValue;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", X[i]);
    }

    return 0;
}
*/


                          //  TASK 5

/*
#include <stdio.h>

int main() {
    int n, i, count = 0;
    float arr[100], sum = 0, avg;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;

    printf("Average = %f, The elements greater than average are: ", avg);

    for (i = 0; i < n; i++) {
        if (arr[i] > avg) {
            printf("%g ", arr[i]);
        }
    }

    return 0;
}
*/


                           //  TASK 6

/*
#include <stdio.h>

int main() {
    int arr[100], n, i, j, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Unique elements: ");

    for (i = 0; i < n; i++) {
        count = 0;

        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }

        if (count == 1)
            printf("%d ", arr[i]);
    }

    return 0;
}
*/


                          //  TASK 7

/*
#include <stdio.h>

int main() {
    int arr[100], n, i, j, countDup = 0;

    printf("Input the number of elements: ");
    scanf("%d", &n);

    printf("Input elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        int count = 0;

        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > 1)
            countDup++;
    }

    countDup /= 2;  // each duplicate counted twice

    printf("Total number of duplicate element found in array: %d\n", countDup);

    return 0;
}
*/
 

                           //  TASK 8

/*
#include <stdio.h>

void RevArr(int arr[], int size) {
    int i, temp;
    for (i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    RevArr(arr, n);

    printf("Reversed array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
*/


                         //  TASK 9

/*
#include <stdio.h>

void shiftArr1Pos(int arr1[], int arrSize) {
    int first = arr1[0];
    for (int i = 0; i < arrSize - 1; i++)
        arr1[i] = arr1[i + 1];
    arr1[arrSize - 1] = first;
}

void arr1Rotate(int arr1[], int arrSize, int rotFrom) {
    for (int i = 0; i < rotFrom; i++)
        shiftArr1Pos(arr1, arrSize);
}

int main() {
    int arr1[100], n, rot, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    printf("Enter rotation amount: ");
    scanf("%d", &rot);

    arr1Rotate(arr1, n, rot);

    printf("Array after rotation:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr1[i]);

    return 0;
}
*/


                       //  TASK 10

/*
#include <stdio.h>

void Replace(char arr[], char oldChar, char newChar) {
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == oldChar)
            arr[i] = newChar;
    }
}

int main() {
    char str[100], oldCh, newCh;

    printf("Enter a string: ");
    gets(str);

    printf("Enter character to replace: ");
    scanf("%c", &oldCh);

    printf("Enter new character: ");
    scanf(" %c", &newCh);

    Replace(str, oldCh, newCh);

    printf("Modified string: %s\n", str);

    return 0;
}
*/


                       //  TASK 11

/*
#include <stdio.h>

int main() {
    char str[100], result[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z')) {
            result[j++] = str[i];
        }
    }

    result[j] = '\0';

    printf("Output: %s\n", result);

    return 0;
}
*/


                       //  TASK 12

/*
#include <stdio.h>

int main() {
    char A[100], B[50];
    int i = 0, j = 0;

    printf("Enter first string: ");
    gets(A);

    printf("Enter second string: ");
    gets(B);

    while (A[i] != '\0') i++;

    while (B[j] != '\0') {
        A[i] = B[j];
        i++;
        j++;
    }
    A[i] = '\0';

    printf("After joining, first string is: %s\n", A);

    return 0;
}
*/


                       //  TASK 13

/*
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, len = 0, isPalindrome = 1;

    printf("Enter a string: ");
    gets(str);

    while (str[len] != '\0') {
        len++;
    }

    j = len - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}
*/


                       //  TASK 14

/*
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
     int i, searchID;

     for (i = 0; i < 5; i++) {
         printf("Enter info for student %d:\n", i+1);
         scanf("%d %s %s %d %f",
               &stlist[i].ID,
               stlist[i].fname,
               stlist[i].lname,
               &stlist[i].age,
               &stlist[i].cgpa);
     }

     printf("Enter ID to search: ");
     scanf("%d", &searchID);

     int found = 0;
     for (i = 0; i < 5; i++) {
         if (stlist[i].ID == searchID) {
             found = 1;
             printf("ID: %d, Name: %s %s, Age: %d, CGPA: %.2f\n",
                 stlist[i].ID, stlist[i].fname, stlist[i].lname,
                 stlist[i].age, stlist[i].cgpa);
         }
     }
     if (!found) printf("Invalid ID.\n");

     int minAge = stlist[0].age;
     for (i = 1; i < 5; i++)
         if (stlist[i].age < minAge)
             minAge = stlist[i].age;

     printf("Youngest student(s):\n");
     for (i = 0; i < 5; i++)
         if (stlist[i].age == minAge)
             printf("%s %s\n", stlist[i].fname, stlist[i].lname);

     float maxCgpa = stlist[0].cgpa;
     for (i = 1; i < 5; i++)
         if (stlist[i].cgpa > maxCgpa)
             maxCgpa = stlist[i].cgpa;

     printf("Student(s) with highest CGPA:\n");
     for (i = 0; i < 5; i++)
         if (stlist[i].cgpa == maxCgpa)
             printf("%s %s\n", stlist[i].fname, stlist[i].lname);

     printf("Students whose first name is not John:\n");
     for (i = 0; i < 5; i++)
         if (strcmp(stlist[i].fname, "John") != 0)
             printf("%s %s\n", stlist[i].fname, stlist[i].lname);

     return 0;
 }

*/


                       //  TASK 15

/*
#include <stdio.h>
#include <string.h>

struct Student {
    int ID;
    char Name[50];
    float Cgpa;
    int Age;
    char Gender[10];
    char ContactNumber[20];
    char Address[100];
};

void displayAbove3_5(struct Student s[], int n) {
    for (int i = 0; i < n; i++)
        if (s[i].Cgpa > 3.5)
            printf("%d %s\n", s[i].ID, s[i].Name);
}

void insertStudent(struct Student s[], int *n) {
    printf("Enter new student details:\n");
    scanf("%d %s %f %d %s %s %s",
          &s[*n].ID, s[*n].Name, &s[*n].Cgpa,
          &s[*n].Age, s[*n].Gender,
          s[*n].ContactNumber, s[*n].Address);
    (*n)++;
}

void deleteByName(struct Student s[], int *n, char name[]) {
    int i, pos = -1;

    for (i = 0; i < *n; i++)
        if (strcmp(s[i].Name, name) == 0)
            pos = i;

    if (pos == -1) {
        printf("Name not found.\n");
        return;
    }

    for (i = pos; i < *n - 1; i++)
        s[i] = s[i + 1];

    (*n)--;
    printf("Record deleted.\n");
}

void modifyByID(struct Student s[], int n, int id) {
    for (int i = 0; i < n; i++) {
        if (s[i].ID == id) {
            printf("Enter new contact number: ");
            scanf("%s", s[i].ContactNumber);

            printf("Enter new address: ");
            scanf("%s", s[i].Address);

            printf("Record updated.\n");
            return;
        }
    }
    printf("Invalid ID.\n");
}

int main() {
    struct Student list[100];
    int n, choice, id;
    char name[50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d %s %f %d %s %s %s",
              &list[i].ID, list[i].Name, &list[i].Cgpa,
              &list[i].Age, list[i].Gender,
              list[i].ContactNumber, list[i].Address);

    // MENU
    do {
        printf("\n1. Display students with CGPA > 3.5\n");
        printf("2. Insert new student at end\n");
        printf("3. Delete student by name\n");
        printf("4. Modify contact/address by ID\n");
        printf("5. Exit\n");
        scanf("%d", &choice);

        if (choice == 1)
            displayAbove3_5(list, n);

        else if (choice == 2)
            insertStudent(list, &n);

        else if (choice == 3) {
            printf("Enter name to delete: ");
            scanf("%s", name);
            deleteByName(list, &n, name);
        }

        else if (choice == 4) {
            printf("Enter ID to update: ");
            scanf("%d", &id);
            modifyByID(list, n, id);
        }

    } while (choice != 5);

    return 0;
}
*/
