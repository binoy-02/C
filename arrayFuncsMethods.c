#include <stdio.h>

void insert(int a[], int *n) {
    int i;
    printf("Enter the limit: ");
    scanf("%d", n);
    for (i = 0; i < *n; i++) {
        printf("Value at a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void search(int a[], int n) {
    int i, s, flag = 0;
    printf("Element to search is: ");
    scanf("%d", &s);
    for (i = 0; i < n; i++) {
        if (a[i] == s) {
            flag = 1;
            printf("%d is at position %d\n", s, i + 1);
        }
    }
    if (flag == 0) {
        printf("Element not found\n");
    }
}

void del(int p, int a[], int *n) {
    int i, j;
    for (i = 0; i < *n; i++) {
        if (a[i] == p) {
            for (j = i; j < *n - 1; j++) {
                a[j] = a[j + 1];
            }
            (*n)--;
        }
    }
    printf("Element %d deleted.\n", p);
}

void disp(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
   

 printf("\n");
}

void sort(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Array sorted:\n");
    disp(a, n);
}

int menu() {
    int ch;
	printf("\n 1.Insert\n 2.Search\n 3.Delete\n 4.Sort\n 5.Display\n 6.Exit\n");
	printf("enter your choice :");
	scanf("%d",&ch);
	return ch;

}

int main() {
    int a[100], n = 0, ch;

    for (ch = menu(); ch != 6; ch = menu()) {
        switch (ch) 
{
            case 1:
                insert(a, &n);
                break;
            case 2:
                search(a, n);
                break;
            case 3:
                printf("Enter the element to delete: ");
                int p;
                scanf("%d", &p);
                del(p, a, &n);
                break;
            case 4:
                sort(a, n);
                break;
            case 5:
                disp(a, n);
                break;
        


   	default:
                	printf ("Wrong choice\n");
        	}
  }
   return 0;
}
