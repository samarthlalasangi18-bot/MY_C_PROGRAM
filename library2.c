#include <stdio.h>
int main() {
    int n, key;
    printf("Enter number of books: ");
    scanf("%d", &n);
    int books[n];
    printf("Enter Book IDs in ascending order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &books[i]);
    }
    printf("Enter Book ID to search: ");
    scanf("%d", &key);
    int low = 0, high = n - 1, mid, found = 0;
    while (low <= high) {
        mid = (low + high) / 2;
        if (books[mid] == key) {
            found = 1;
            break;
        }
        else if (key < books[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    if (found)
        printf("Book is available\n");
    else
        printf("Book not available\n");
}
