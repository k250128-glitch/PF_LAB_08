int main() {
    int rows = 5;
    int cols = 5;
    int count_absent =0;
    int count_student=0;
    int total;
    printf("Classroom Seating Arrangement :\n\n");

    for (int i = 0; i < rows; i++) {
        printf("Row %d ", i+1);
        for (int j = 0; j < cols; j++) {
            
            if ((i + j) % 2 == 0) {
                printf("O "); 
                count_absent++;
            } else {
                printf("X ");
                count_student++;
            }
        }
        printf("\n");
        
    }
    total =count_student+count_absent;
    printf("SUMMARY:\n\n");
    printf("Student present : %d\n",count_student);
    printf("Student absent: %d\n",count_absent);
    printf("Total :%d\n",total);
    return 0;
}

