#include <stdio.h>

int main() {
    int attendance[70];
    int numStudents, i;
    int presentCount = 0, absentCount = 0;
    
    // Initialize array
    for(i = 0; i < 70; i++) {
        attendance[i] = 0;
    }
    
    // Get number of students
    printf("========================================\n");
    printf("   STUDENT ATTENDANCE SYSTEM\n");
    printf("========================================\n\n");
    printf("Enter number of students (max 70): ");
    scanf("%d", &numStudents);
    
    if(numStudents > 70 || numStudents < 1) {
        printf("Invalid number of students!\n");
        return 1;
    }
    
    // Mark attendance (0 = Absent, 1 = Present)
    printf("\nMark Attendance (0 for Absent, 1 for Present):\n");
    for(i = 0; i < numStudents; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &attendance[i]);
        
        if(attendance[i] == 1) {
            presentCount++;
        } else {
            absentCount++;
        }
    }
    
    // Display attendance
    printf("\n========================================\n");
    printf("         ATTENDANCE REPORT\n");
    printf("========================================\n");
    printf("Student No.\tStatus\n");
    printf("--------------------\n");
    
    for(i = 0; i < numStudents; i++) {
        printf("Student %d\t", i + 1);
        if(attendance[i] == 1) {
            printf("Present\n");
        } else {
            printf("Absent\n");
        }
    }
    
    printf("========================================\n");
    printf("Total Present: %d\n", presentCount);
    printf("Total Absent: %d\n", absentCount);
    printf("========================================\n");
    
    return 0;
}