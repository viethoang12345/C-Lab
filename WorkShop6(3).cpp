#include <stdio.h>
#include <stdlib.h>

int numberArr=0;
int Arr[101];

void addValue() {
    int value;

    printf("Add a value: ");
    scanf("%d", &value);

    Arr[numberArr++] = value;
}

void searchValue() {
    int value;

    printf("Enter a value: ");
    scanf("%d", &value);

    int quanlity = 0;

    for (int index = 0; index < numberArr; index++) {
        if (Arr[index]==value) {
            quanlity++;
        }
    }

    printf("The number of %d existences are %d\n", value, quanlity);
}

void printArr() {
    printf("Display the Array: ");
    for (int index = 0; index < numberArr; index++) {
        printf("%d ", Arr[index]);
    }
    printf("\n");
}

void printInRangeArr() {
    int minValue, maxValue;

    printf("Enter min value: ");
    scanf("%d", &minValue);

    printf("Enter max value: ");
    scanf("%d", &maxValue);

    printf("The value between %d and %d are: \n", minValue, maxValue);
    for (int index = 0; index < numberArr; index++) {
        if ((Arr[index] >= minValue) && (Arr[index] <= maxValue)) {
            printf("%d ", Arr[index]);
        }
    }
    printf("\n");
}

void printInAscendingArr() {
    int newArr[101];
    int newNumberArr = numberArr;

    for (int index = 0; index < newNumberArr; index++) {
        newArr[index] = Arr[index];
    }

    for (int index = 0; index < newNumberArr-1; index++)
        for (int next = index+1; next < newNumberArr; next++)
            if (newArr[index] > newArr[next]) {
                int store = newArr[index];
                newArr[index] = newArr[next];
                newArr[next] = store;
            }

    printf("The array in ascending order: ");
    for (int index = 0; index < newNumberArr; index++) {
        printf("%d ", newArr[index]);
    }
    printf("\n");
}

int main()
{	int a[100];
    int option,n;
    printf("Option: \n");
    printf("1. Add  a value \n");
    printf("2. Search a value \n");
    printf("3. Print out the array \n");
    printf("4. Print out values in a range \n");
    printf("5. Print out the array in ascending order  \n");

    do {

        printf("Enter the option: ");
        scanf("%d",&option);

        switch(option) {
            case 1:
                addValue();
                break;

            case 2:
                searchValue();
                break;

            case 3:
                printArr();
                break;

            case 4:
                printInRangeArr();
                break;

            case 5:
                printInAscendingArr();
                break;

            default:
                break;
        }
    } while ((option >= 1) && (option <= 5));

    return 0;
}
