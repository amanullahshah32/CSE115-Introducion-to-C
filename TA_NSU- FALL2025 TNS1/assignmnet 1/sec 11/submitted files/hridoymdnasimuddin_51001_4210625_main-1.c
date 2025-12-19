/*
//question 1
#include<stdio.h>
int main()
{
    int arr[100], n, k, newVal, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d unique integers:\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter index to modify (0 to %d): ", n-1);
    scanf("%d", &k);

    if(k<0 || k>=n)
    {
        printf("Invalid index.\n");
        return 0;
    }

    printf("Enter new value: ");
    scanf("%d", &newVal);

    arr[k] = newVal;

    printf("Array after modification:\n");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);

    return 0;
}*/

/*
//question 2
#include<stdio.h>
int main()
{
    int arr[100], n, k, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d unique integers:\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter index to delete (0 to %d): ", n-1);
    scanf("%d", &k);

    if(k<0 || k>=n)
    {
        printf("Invalid index.\n");
        return 0;
    }

    // shifting left
    for(i=k; i<n-1; i++)
        arr[i] = arr[i+1];
    n--; // reduce size by 1

    printf("Array after deletion:\n");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);

    return 0;
}*/

/*
//question 3
#include<stdio.h>
int main()
{
    int arr[100], n, k, newVal, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d unique integers:\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter index to insert (0 to %d): ", n);
    scanf("%d", &k);

    if(k<0 || k>n)
    {
        printf("Invalid index.\n");
        return 0;
    }

    printf("Enter new value to insert: ");
    scanf("%d", &newVal);

    // shifting right from the end
    for(i=n; i>k; i--)
        arr[i] = arr[i-1];

    arr[k] = newVal;
    n++; // increase size by 1

    printf("Array after insertion:\n");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);

    return 0;
}*/

/*
//question 4
#include<stdio.h>
int main()
{
    int X[100], n, newVal, i;

    printf("Enter n (<=99): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &X[i]);

    printf("Enter new value to insert after first %d elements: ", n);
    scanf("%d", &newVal);

    X[n] = newVal; // placing at index n
    n++;

    printf("Array now:\n");
    for(i=0; i<n; i++)
        printf("%d ", X[i]);

    return 0;
}*/

/*
//question 5
#include<stdio.h>
int main()
{
    float arr[100], sum=0, avg;
    int n, i, count=0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;
    printf("Average = %f\n", avg);

    // counting and printing elements greater than avg
    printf("The elements greater than average are: ");
    for(i=0; i<n; i++)
    {
        if(arr[i] > avg)
        {
            if(count > 0) printf(", ");
            printf("%.f", arr[i]);
            count++;
        }
    }
    if(count == 0) printf("None");
    printf("\n");

    return 0;
}*/

/*
//question 6
#include<stdio.h>
int main()
{
    int arr[100], n, i, j, unique;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Unique elements: ");

    for(i=0; i<n; i++)
    {
        unique = 1; // assume unique
        for(j=0; j<n; j++)
        {
            if(i != j && arr[i] == arr[j])
            {
                unique = 0;
                break;
            }
        }
        if(unique)
            printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}*/

/*
//question 7
#include<stdio.h>
int main()
{
    int arr[100], n, i, j, duplicateCount=0;

    printf("Input the number of elements: ");
    scanf("%d", &n);

    printf("Input elements are: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                duplicateCount++;
                break; // count once for this element
            }
        }
    }

    printf("Total number of duplicate element found in array: %d\n", duplicateCount);

    return 0;
}*/

/*
//question 8

#include<stdio.h>

void RevArr(int arr[], int size)
{
    int temp, i;
    for(i=0; i<size/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }
}

int main()
{
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    RevArr(arr, n);

    printf("Reversed array:\n");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);

    return 0;
}*/


/*
//question 9
#include<stdio.h>

void shiftArr1Pos(int arr1[], int arrSize)
{
    int temp = arr1[0], i;
    for(i=0; i<arrSize-1; i++)
        arr1[i] = arr1[i+1];
    arr1[arrSize-1] = temp;
}

void arr1Rotate(int arr1[], int arrSize, int rotFrom)
{
    int i;
    for(i=0; i<rotFrom; i++)
        shiftArr1Pos(arr1, arrSize);
}

int main()
{
    int arr[100], n, rot, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of positions to rotate left: ");
    scanf("%d", &rot);

    arr1Rotate(arr, n, rot);

    printf("Array after rotation:\n");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);

    return 0;
}*/

/*
//Question 10
#include<stdio.h>

void Replace(char arr[], char oldChar, char newChar)
{
    int i = 0;
    while(arr[i] != '\0')
    {
        if(arr[i] == oldChar)
            arr[i] = newChar;
        i++;
    }
}

int main()
{
    char str[100];
    char old, new;

    printf("Enter a string: ");
    gets(str);

    printf("Enter character to replace: ");
    scanf(" %c", &old);

    printf("Enter new character: ");
    scanf(" %c", &new);

    Replace(str, old, new);

    printf("Modified string: %s\n", str);

    return 0;
}*/

/*
//Question 11
#include<stdio.h>

int main()
{
    char str[100], result[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';

    printf("Output: %s\n", result);

    return 0;
}*/

/*
//Question 12
#include<stdio.h>

int main()
{
    char A[100], B[50];
    int i, j;

    printf("Enter first string: ");
    gets(A);

    printf("Enter second string: ");
    gets(B);

    // find end of A
    i = 0;
    while(A[i] != '\0')
        i++;

    // copy B into A
    j = 0;
    while(B[j] != '\0')
    {
        A[i] = B[j];
        i++;
        j++;
    }
    A[i] = '\0';

    printf("After joining, first string is: %s\n", A);

    return 0;
}*/

/*
//Question 13
#include<stdio.h>

int main()
{
    char str[100];
    int length = 0, i, palindrome = 1;

    printf("Enter a string: ");
    gets(str);

    // find length
    while(str[length] != '\0')
        length++;

    // check palindrome
    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    if(palindrome)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}*/

/*
//question 14
#include<stdio.h>

struct student
{
    int ID;
    char fname[20];
    char lname[20];
    int age;
    float cgpa;
};

int main()
{
    struct student stlist[5];
    int i, searchID, found = 0;
    int youngestIndex = 0;
    float highestCGPA = 0;

    // Input 5 students
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details for student %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &stlist[i].ID);
        printf("First name: ");
        scanf("%s", stlist[i].fname);
        printf("Last name: ");
        scanf("%s", stlist[i].lname);
        printf("Age: ");
        scanf("%d", &stlist[i].age);
        printf("CGPA: ");
        scanf("%f", &stlist[i].cgpa);
    }

    // 1) Search by ID
    printf("\nEnter ID to search: ");
    scanf("%d", &searchID);
    found = 0;
    for(i = 0; i < 5; i++)
    {
        if(stlist[i].ID == searchID)
        {
            printf("Found:\n");
            printf("ID: %d, Name: %s %s, Age: %d, CGPA: %.2f\n",
                   stlist[i].ID, stlist[i].fname, stlist[i].lname,
                   stlist[i].age, stlist[i].cgpa);
            found = 1;
            break;
        }
    }
    if(!found) printf("Invalid ID.\n");

    // 2) Youngest student
    for(i = 1; i < 5; i++)
    {
        if(stlist[i].age < stlist[youngestIndex].age)
            youngestIndex = i;
    }
    printf("\nYoungest student: %s %s (Age: %d)\n",
           stlist[youngestIndex].fname, stlist[youngestIndex].lname,
           stlist[youngestIndex].age);

    // 3) Highest CGPA
    for(i = 0; i < 5; i++)
    {
        if(stlist[i].cgpa > highestCGPA)
            highestCGPA = stlist[i].cgpa;
    }
    printf("\nStudent(s) with highest CGPA (%.2f):\n", highestCGPA);
    for(i = 0; i < 5; i++)
    {
        if(stlist[i].cgpa == highestCGPA)
        {
            printf("ID: %d, Name: %s %s, Age: %d, CGPA: %.2f\n",
                   stlist[i].ID, stlist[i].fname, stlist[i].lname,
                   stlist[i].age, stlist[i].cgpa);
        }
    }

    // 4) Not John
    printf("\nStudents whose first name is not John:\n");
    for(i = 0; i < 5; i++)
    {
        // Compare strings manually
        int isJohn = 1;
        char *name = stlist[i].fname;
        char john[] = "John";
        int j = 0;
        while(john[j] != '\0' || name[j] != '\0')
        {
            if(name[j] != john[j])
            {
                isJohn = 0;
                break;
            }
            j++;
        }
        if(!isJohn)
        {
            printf("ID: %d, Name: %s %s, Age: %d, CGPA: %.2f\n",
                   stlist[i].ID, stlist[i].fname, stlist[i].lname,
                   stlist[i].age, stlist[i].cgpa);
        }
    }

    return 0;
}*/

/*
//Question 15
#include<stdio.h>

struct Student
{
    int ID;
    char Name[50];
    float Cgpa;
    int Age;
    char Gender;
    char ContactNumber[15];
    char Address[100];
};

void displayHighCGPA(struct Student s[], int n)
{
    int i;
    printf("\nStudents with CGPA > 3.5:\n");
    for(i = 0; i < n; i++)
    {
        if(s[i].Cgpa > 3.5)
            printf("ID: %d, Name: %s\n", s[i].ID, s[i].Name);
    }
}

void insertStudent(struct Student s[], int *n)
{
    if(*n >= 100)
    {
        printf("Array full.\n");
        return;
    }

    printf("\nEnter new student details:\n");
    printf("ID: ");
    scanf("%d", &s[*n].ID);
    printf("Name: ");
    scanf(" %[^\n]", s[*n].Name);
    printf("CGPA: ");
    scanf("%f", &s[*n].Cgpa);
    printf("Age: ");
    scanf("%d", &s[*n].Age);
    printf("Gender (M/F): ");
    scanf(" %c", &s[*n].Gender);
    printf("Contact Number: ");
    scanf("%s", s[*n].ContactNumber);
    printf("Address: ");
    scanf(" %[^\n]", s[*n].Address);

    (*n)++;
    printf("Student added successfully.\n");
}

void deleteStudent(struct Student s[], int *n, char name[])
{
    int i, j, found = 0;
    for(i = 0; i < *n; i++)
    {
        // Compare names manually
        int match = 1;
        int idx = 0;
        while(name[idx] != '\0' && s[i].Name[idx] != '\0')
        {
            if(name[idx] != s[i].Name[idx])
            {
                match = 0;
                break;
            }
            idx++;
        }
        if(match && name[idx] == '\0' && s[i].Name[idx] == '\0')
        {
            found = 1;
            // Shift left
            for(j = i; j < *n - 1; j++)
                s[j] = s[j + 1];
            (*n)--;
            printf("Student deleted.\n");
            break;
        }
    }
    if(!found) printf("Student not found.\n");
}

void modifyContact(struct Student s[], int n, int id)
{
    int i, found = 0;
    for(i = 0; i < n; i++)
    {
        if(s[i].ID == id)
        {
            found = 1;
            printf("Current contact: %s\n", s[i].ContactNumber);
            printf("Current address: %s\n", s[i].Address);

            int choice;
            printf("Modify:\n1. Contact Number\n2. Address\nChoice: ");
            scanf("%d", &choice);
            if(choice == 1)
            {
                printf("Enter new contact number: ");
                scanf("%s", s[i].ContactNumber);
                printf("Contact updated.\n");
            }
            else if(choice == 2)
            {
                printf("Enter new address: ");
                scanf(" %[^\n]", s[i].Address);
                printf("Address updated.\n");
            }
            break;
        }
    }
    if(!found) printf("ID not found.\n");
}

int main()
{
    struct Student students[100];
    int n = 0, choice, id;
    char name[50];

    // Input number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    if(n > 100)
    {
        printf("Maximum 100 allowed. Setting to 100.\n");
        n = 100;
    }

    // Populate student data
    for(int i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &students[i].ID);
        printf("Name: ");
        scanf(" %[^\n]", students[i].Name);
        printf("CGPA: ");
        scanf("%f", &students[i].Cgpa);
        printf("Age: ");
        scanf("%d", &students[i].Age);
        printf("Gender (M/F): ");
        scanf(" %c", &students[i].Gender);
        printf("Contact Number: ");
        scanf("%s", students[i].ContactNumber);
        printf("Address: ");
        scanf(" %[^\n]", students[i].Address);
    }

    // Menu
    do
    {
        printf("\n--- Student Management ---\n");
        printf("1. Display students with CGPA > 3.5\n");
        printf("2. Insert new student\n");
        printf("3. Delete student by name\n");
        printf("4. Modify contact/address by ID\n");
        printf("5. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                displayHighCGPA(students, n);
                break;
            case 2:
                insertStudent(students, &n);
                break;
            case 3:
                printf("Enter name to delete: ");
                scanf(" %[^\n]", name);
                deleteStudent(students, &n, name);
                break;
            case 4:
                printf("Enter ID to modify: ");
                scanf("%d", &id);
                modifyContact(students, n, id);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while(choice != 5);

    return 0;
}*/


