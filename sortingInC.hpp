template <typename T>
void selectionSort(T list[], int size) {
    int minIndex = 0;
    int i, j;
    for (i = 0; i < size - 1; i++) {
        minIndex = i;
        
        for (j = i + 1; j < size; j++) {
            if (list[j] < list[minIndex]) {
                minIndex = j;
            }
        }
        
        if (minIndex != i) {
            swap(list[i], list[minIndex]);
        }
    }
}

template <typename T>
void bubbleSort(T list[], int size) {
    bool swapped = true;
    int i;
    while (swapped) {
        swapped = false;
        for (i = 0; i < size - 1; i++) {
            if (list[i + 1] < list[i]) {
                swap(list[i + 1], list[i]);
                swapped = true;
            }
        }
    }
}