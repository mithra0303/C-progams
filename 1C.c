#include <stdio.h>

// Function to input marks for five subjects
void inputMarks(int marks[]) {
    printf("Enter marks for five subjects (out of 100):\n");

    for (int i = 0; i < 5; ++i) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        // Validate input marks (between 0 and 100)
        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks. Marks should be between 0 and 100.\n");
            // Exit the program with an error code
            exit(1);
        }
    }
}

// Function to calculate aggregate marks
float calculateAggregateMarks(int marks[]) {
    return marks[0] + marks[1] + marks[2] + marks[3] + marks[4];
}

// Function to calculate percentage
float calculatePercentage(float aggregateMarks) {
    return (aggregateMarks / (5 * 100)) * 100;
}

int main() {
    int marks[5];
    float aggregateMarks, percentage;

    // Input marks for five subjects
    inputMarks(marks);

    // Calculate aggregate marks
    aggregateMarks = calculateAggregateMarks(marks);

    // Calculate percentage
    percentage = calculatePercentage(aggregateMarks);

    // Display the aggregate marks and percentage
    printf("Aggregate Marks: %.2f\n", aggregateMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
