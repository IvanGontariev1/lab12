#include <iostream>

const int rows = 10;
const int cols = 15;

int findMaxElement(int arr[], int size) {
    int maxElement = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int main() {
    int array[rows][cols];


    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> array[i][j];
        }
    }


    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (array[i][j] > 0) {
                array[i][j] = array[i][j] * array[i][j];
            }
        }
    }

    int rowSums[rows] = { 0 };
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            rowSums[i] += array[i][j];
        }
    }


    std::cout << "Sum of elements in each row:\n";
    for (int i = 0; i < rows; ++i) {
        std::cout << "Row " << i << ": " << rowSums[i] << std::endl;
    }


    int maxElement = findMaxElement(rowSums, rows);
    std::cout << "Maximum sum of elements in rows: " << maxElement << std::endl;

    return 0;
}
