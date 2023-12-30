#include <stdio.h>


void inputMarks(int marks[]) {
    printf("Enter marks for five subjects (out of 100):\n");

    for (int i = 0; i < 5; ++i) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        
        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks. Marks should be between 0 and 100.\n");
            // Exit the program with an error code
            exit(1);
        }
    }
}


float calculateAggregateMarks(int marks[]) {
    return marks[0] + marks[1] + marks[2] + marks[3] + marks[4];
}


float calculatePercentage(float aggregateMarks) {
    return (aggregateMarks / (5 * 100)) * 100;
}

int main() {
    int marks[5];
    float aggregateMarks, percentage;

    
    inputMarks(marks);

    
    aggregateMarks = calculateAggregateMarks(marks);

    
    percentage = calculatePercentage(aggregateMarks);


    printf("Aggregate Marks: %.2f\n", aggregateMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
