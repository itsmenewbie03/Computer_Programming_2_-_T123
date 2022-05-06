#include <stdio.h>
#include <stdlib.h>

float computeTotalGrade(float[], int);
float computeAverage(float, int);
void createNewRecord(int);

int main()
{
    int num;
    printf("Enter number of students: ");
    scanf("%d", &num);
    for (int x = 0; x < num; x++)
    {
        createNewRecord(x);
    }
}

float computeTotalGrade(float grades[], int count)
{
    float sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += grades[i];
    }
    return sum;
}

float computeAverage(float sum, int count)
{
    return sum / count;
}

void createNewRecord(int index)
{
    char sName[250];
    char fileName[250];
    snprintf(fileName, 250, "Student%d.txt", index + 1);
    FILE *sFile;
    int sID;
    float mathGrade, sciGrade, engGrade;
    float totalGrade, averageGrade;
    printf("------------------------------------\n");
    printf("+ Enter Informations For Student %d +\n",index+1);
    printf("------------------------------------\n");
    printf("Student Name: ");
    scanf("\n%[^\n]s", sName);
    printf("Student ID Number: ");
    scanf("%d", &sID);
    printf("Math Grade: ");
    scanf("%f", &mathGrade);
    printf("Science Grade: ");
    scanf("%f", &sciGrade);
    printf("English Grade: ");
    scanf("%f", &engGrade);
    sFile = fopen(fileName, "w");
    float grades[] = {mathGrade, sciGrade, engGrade};
    int count = sizeof(grades) / sizeof(grades[0]);
    totalGrade = computeTotalGrade(grades, count);
    averageGrade = computeAverage(totalGrade, count);
    fprintf(sFile, "Student Name: %s\nStudent ID Number: %d\nMath Grade: %.2f\nScience Grade: %.2f\nEnglish Grade: %.2f\nTotal Grade: %.2f\nAverage Grade: %.2f", sName, sID, mathGrade, sciGrade, engGrade, totalGrade, averageGrade);
    fclose(sFile);
}
