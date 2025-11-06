#include <stdio.h>
#include <string.h>


struct clothes {
    char producttype[50];
    int gsm;
    char name[50];
    int stock;
    int prize;
};

// Function to swap two clothes
void swap(struct clothes *a, struct clothes *b) {
    struct clothes temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform Bubble Sort based on prize (descending order)
void bubbleSort(struct clothes c[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (c[j].prize < c[j + 1].prize) {
                swap(&c[j], &c[j + 1]);
            }
        }
    }
}


void displayClothes(struct clothes c[], int n) {
    printf("\nClothes Details (Sorted by Prize - Highest to Lowest):\n");
    printf("--------------------------------------------------------\n");
    printf("%-20s%-10s%-20s%-10s%-10s\n", "Product Type", "GSM", "Product Name", "Stock", "Prize");
    printf("--------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%-20s%-10d%-20s%-10d%-10d\n", c[i].producttype, c[i].gsm, c[i].name, c[i].stock, c[i].prize);
    }
}

int main() {
    int n;

    
    printf("Enter the number of clothes: ");
    scanf("%d", &n);

    
    struct clothes c1[n];

    
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for product %d:\n", i + 1);
        printf("Enter Product Type: ");
        getchar();  // Consume leftover newline character from previous input
        fgets(c1[i].producttype, 50, stdin);
        c1[i].producttype[strcspn(c1[i].producttype, "\n")] = '\0';  // Remove newline character

        printf("Enter Product GSM: ");
        scanf("%d", &c1[i].gsm);

        printf("Enter Product Name: ");
        getchar();  // Consume leftover newline character from previous input
        fgets(c1[i].name, 50, stdin);
        c1[i].name[strcspn(c1[i].name, "\n")] = '\0';  // Remove newline character

        printf("Enter available stock: ");
        scanf("%d", &c1[i].stock);

        printf("Enter Product Prize: ");
        scanf("%d", &c1[i].prize);
        printf("\n");
    }

  
    bubbleSort(c1, n);

   
    displayClothes(c1, n);

    return 0;
}


