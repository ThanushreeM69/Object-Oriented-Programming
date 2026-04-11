#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;



class Product {
private:
    int id;
    char name[30];
    double price;
    int quantity;

public:
    
    Product() : id(0), price(0.0), quantity(0) {}

    
    void getData() {
        cout << "\nEnter Product ID: ";
        cin >> id;
        cin.ignore(); 
        cout << "Enter Product Name: ";
        cin.getline(name, 30);
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void showData() const {
        cout << "\nID: " << id 
             << " | Name: " << name 
             << " | Price: $" << price 
             << " | Qty: " << quantity;
    }

    
    int getID() const { return id; }
};


class InventoryManager {
public:
    
    void addProduct() {
        Product p;
        p.getData();
        
        ofstream outFile("inventory.dat", ios::binary | ios::app);
        outFile.write(reinterpret_cast<char*>(&p), sizeof(p));
        outFile.close();
        cout << "\nProduct added successfully!";
    }

    
    void displayAll() {
        Product p;
        ifstream inFile("inventory.dat", ios::binary);
        
        if (!inFile) {
            cout << "\nFile could not be opened!!";
            return;
        }

        cout << "\n--- Current Inventory ---";
        while (inFile.read(reinterpret_cast<char*>(&p), sizeof(p))) {
            p.showData();
        }
        inFile.close();
    }

    
    void updateProduct(int n) {
        bool found = false;
        Product p;
        fstream file("inventory.dat", ios::binary | ios::in | ios::out);

        while (!found && file.read(reinterpret_cast<char*>(&p), sizeof(p))) {
            if (p.getID() == n) {
                p.showData();
                cout << "\n\nEnter New Details:";
                p.getData();

                
                int pos = (-1) * static_cast<int>(sizeof(p));
                file.seekp(pos, ios::cur);
                
                file.write(reinterpret_cast<char*>(&p), sizeof(p));
                cout << "\nRecord Updated!";
                found = true;
            }
        }
        file.close();
        if (!found) cout << "\nProduct not found!";
    }
};


int main() {
    InventoryManager manager;
    int choice, searchID;

    do {
        cout << "\n\n--- INVENTORY FILE SYSTEM ---";
        cout << "\n1. Add Product";
        cout << "\n2. View All Products";
        cout << "\n3. Update Product";
        cout << "\n4. Exit";
        cout << "\nSelect Option: ";
        cin >> choice;

        switch (choice) {
            case 1: manager.addProduct(); break;
            case 2: manager.displayAll(); break;
            case 3: 
                cout << "\nEnter ID to update: ";
                cin >> searchID;
                manager.updateProduct(searchID); 
                break;
            case 4: exit(0);
            default: cout << "\nInvalid Choice!";
        }
    } while (choice != 4);

    return 0;
}
