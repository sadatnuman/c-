/*
 MT LAB ASSIGNMENT
 Name: MD. Nazmus Sadat Numan.
 ID: 22-48497-3.
 Data Structure Lab(E).
 */
#include <iostream>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    double price;
};

void SelectionSortByPrice(Book OBJ[], int N) {
    for (int i = 0; i < N - 1; i++) {
        int min = i;
        for (int j = i + 1; j < N; j++) {
            if (OBJ[min].price > OBJ[j].price) {
                min = j;
            }
        }
        if (min != i) {
            swap(OBJ[min].id, OBJ[i].id);
            swap(OBJ[min].title, OBJ[i].title);
            swap(OBJ[min].author, OBJ[i].author);
            swap(OBJ[min].price, OBJ[i].price);
        }
    }
}

void addBook(Book OBJ[], int& N, int Id, string Title, string Author, double Price) {
    OBJ[N].id = Id;
    OBJ[N].title = Title;
    OBJ[N].author = Author;
    OBJ[N].price = Price;
    N++;
    SelectionSortByPrice(OBJ, N); // Keep the books sorted after adding a new book
}

int binarySearch(Book OBJ[], int left, int right, int searchId) {
    while (left <= right) {
        int mid = (left + right) / 2;
        if (OBJ[mid].id == searchId) {
            return mid;
        } else if (OBJ[mid].id < searchId) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

void display(Book OBJ[], int N) {
    cout << endl;
    for (int i = 0; i < N; i++) {
        cout << i + 1 << ". ";
        cout << " ID: " << OBJ[i].id << ",";
        cout << " Title: " << OBJ[i].title << ",";
        cout << " Author: " << OBJ[i].author << ",";
        cout << " Price: " << OBJ[i].price << endl;
    }
    cout << endl;
}

int main() {
    int N;
    cout << "Initial inventory size 'N': ";
    cin >> N;
    Book obj[N];

    int x;
    cout << "Total books to be added initially 'x': ";
    cin >> x;

    if (x <= N) {
        for (int i = 0; i < x; i++) {
            cout << i + 1 << "." << endl;
            cout << "ID: ";
            cin >> obj[i].id;

            cout << "Title: ";
            char ch;
            cin >> ch;
            getline(cin, obj[i].title);
            obj[i].title = ch + obj[i].title;

            cout << "Author: ";
            getline(cin, obj[i].author);

            cout << "Price: ";
            cin >> obj[i].price;
        }
    }
    cout << endl;
    cout << "Book Details Input: " << endl;
    display(obj, x);

    cout << endl;
    cout << "Sorted books by price: " << endl;
    SelectionSortByPrice(obj, x);
    display(obj, x);

    int z;
    cout << endl;
    cout << "Total new books to be added: ";
    cin >> z;

    if (z > N - x) {
        cout << "Inventory does not have enough space to store " << z << " books." << endl;
    } else {
        cout << "Input book details which will be added to the inventory: " << endl;

        for (int i = 0; i < z; i++) {
            int BookID;
            string BookTitle;
            string BookAuthor;
            double BookPrice;

            cout << i + 1 << "." << endl;
            cout << "ID: ";
            cin >> BookID;

            cout << "Title: ";
            char ch;
            cin >> ch;
            getline(cin, BookTitle);
            BookTitle = ch + BookTitle;

            cout << "Author: ";
            getline(cin, BookAuthor);

            cout << "Price: ";
            cin >> BookPrice;

            addBook(obj, x, BookID, BookTitle, BookAuthor, BookPrice);
        }
    }

    cout << endl;
    cout << "Sorted books by price after adding new books: " << endl;
    display(obj, x);

    int y;
    cout << endl;
    cout << "Total books to be searched 'y': ";
    cin >> y;
    cout << endl;
    int searcharr[y];

    for (int i = 0; i < y; i++) {
        cout << i + 1 << ". Book ID: ";
        cin >> searcharr[i];
    }
    for (int i = 0; i < y; i++) {
        int z = binarySearch(obj, 0, x - 1, searcharr[i]);

        if (z != -1) {
            cout << "Book ID " << searcharr[i] << " is available." << endl;
            cout << "Title: " << obj[z].title << endl;
            cout << "Author: " << obj[z].author << endl;
            cout << "Price: " << obj[z].price << endl;
        }
        else {
            cout << "Book ID " << searcharr[i] << " is not available." << endl;
        }
    }
    return 0;
}
