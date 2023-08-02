/*
 MT LAB TASK: 4
 Name: MD. Nazmus Sadat Numan.
 ID: 22-48497-3.
 Data Structure Lab(E).
 */
#include <iostream>
using namespace std;

struct Book{
    string isbn;
    string title;
    string author;
};

void display( Book OBJ[], int N ){
    cout << endl;
    for( int i=0; i<N; i++ ){
            cout << i+1 << ".";
        cout << " Isbn: "<< OBJ[i].isbn <<",";
        cout << " Title: "<< OBJ[i].title <<",";
        cout << " Author: "<< OBJ[i].author << endl;
    }
    cout << endl;
}


int main() {
    
    cout << "Maximum  books capacity: 20"<<endl;
    Book obj[20];

    int n;
    cout<<"Total books(n) : ";
    cin >> n;
    cout<<endl;
    


    for( int i=0; i<n; i++ ){
        cout << i+1 <<"."<<endl;
        cout << "Isbn: ";
        cin >> obj[i].isbn;
        cout << "Title: ";

        char ch;
        cin >> ch;
        getline( cin, obj[i].title );
        obj[i].title = ch + obj[i].title;

        cout << "Author: ";
        getline( cin, obj[i].author );
    }
    
    //Bookshelf
    cout<<endl;
    cout << "Bookshelf: " <<endl;
    display( obj, n );
    
    
    //Bubble Sort ISBN
    for( int i=0; i<n; i++ ){
        for( int j=0; j<n-1-i; j++ ){
            if( obj[j].isbn > obj[j+1].isbn ){
                swap( obj[j].title, obj[j+1].title );
                swap( obj[j].isbn, obj[j+1].isbn );
                swap( obj[j].author, obj[j+1].author );

            }
        }
    }
    cout << "After sorting by ISBN: " <<endl;
    display( obj, n );
    
    
    //Bubble Sort Title
    for( int i=0; i<n; i++ ){
        for( int j=0; j<n-1-i; j++ ){
            if( obj[j].title > obj[j+1].title ){
                swap( obj[j].title, obj[j+1].title );
                swap( obj[j].isbn, obj[j+1].isbn );
                swap( obj[j].author, obj[j+1].author );

            }
        }
    }
    cout << "After sorting by title: " <<endl;
    display( obj, n );
    
    
    //Bubble Sort Author
    for( int i=0; i<n; i++ ){
        for( int j=0; j<n-1-i; j++ ){
            if( obj[j].author > obj[j+1].author ){
                swap( obj[j].title, obj[j+1].title );
                swap( obj[j].isbn, obj[j+1].isbn );
                swap( obj[j].author, obj[j+1].author );

            }
        }
    }
    cout << "After sorting by Author: " <<endl;
    display( obj, n );
    cout<<endl;
    return 0;
}
