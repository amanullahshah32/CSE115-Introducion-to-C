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
struct student st[5];
int id;

for (int i = 0; i < 5; i++) {
printf("Enter ID fname lname age cgpa: ");
scanf("%d %s %s %d %f",
&st[i].ID, st[i].fname, st[i].lname,
&st[i].age, &st[i].cgpa);
}

printf("Enter ID to search: ");
scanf("%d", &id);

int found = 0;
for (int i = 0; i < 5; i++) {
if (st[i].ID == id) {
found = 1;
printf("Found: %s %s age %d cgpa %.2f\n",
st[i].fname, st[i].lname, st[i].age, st[i].cgpa);
break;
}
}
if (!found) printf("Invalid ID!\n");

int youngest = 0;
for (int i = 1; i < 5; i++)
if (st[i].age < st[youngest].age)
youngest = i;

printf("Youngest: %s %s\n", st[youngest].fname, st[youngest].lname);

float max = st[0].cgpa;
for (int i = 1; i < 5; i++)
if (st[i].cgpa > max)
max = st[i].cgpa;

printf("Students with highest CGPA:\n");
for (int i = 0; i < 5; i++)
if (st[i].cgpa == max)
printf("%s %s\n", st[i].fname, st[i].lname);

printf("Students whose fname is NOT John:\n");
for (int i = 0; i < 5; i++)
if (strcmp(st[i].fname, "John") != 0)
printf("%s %s\n", st[i].fname, st[i].lname);

return 0;
}