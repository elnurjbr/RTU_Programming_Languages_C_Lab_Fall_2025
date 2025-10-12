#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int id;
    float grade;
};

void trim_newline(char *s) {
    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n')
        s[len - 1] = '\0';
}

int main(void) {
    int n;
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    struct Student *students = malloc(n * sizeof(struct Student));
    if (!students) {
        printf("Memory allocation failed\n");
        return 1;
    }

    getchar(); // clear newline from input buffer

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        trim_newline(students[i].name);

        printf("Enter ID and grade: ");
        scanf("%d %f", &students[i].id, &students[i].grade);
        getchar();
    }

    printf("\nID     Name            Grade\n");
    for (int i = 0; i < n; i++) {
        printf("%-6d %-15s %.1f\n", students[i].id, students[i].name, students[i].grade);
    }

    free(students);
    return 0;
}
