#include <iostream>
#include <vector>
#include <string>

using namespace std;


class ValidationError {
public:
    string message;
    ValidationError(string msg) : message(msg) {}
};


template <typename T>
class SafeDataProcessor {
private:
    vector<T> dataStore; 

public:
    
    SafeDataProcessor() {
        cout << "Processor started..." << endl;
    }

    void addData(T value) {
        
        if (value < 0) {
            throw ValidationError("Error: Negative value detected.");
        }
        dataStore.push_back(value);
    }

    void displayData() {
        
        if (dataStore.empty()) {
            throw string("Data store is currently empty.");
        }

        cout << "Stored Values: ";
        for (int i = 0; i < dataStore.size(); i++) {
            cout << dataStore[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    SafeDataProcessor<float> processor;

    try {
        cout << "--- Safe Data Processor Utility ---" << endl;
        
    
        processor.addData(10.5);
        processor.addData(20.3);
        processor.displayData();

    
        cout << "\nAttempting to add -1.0..." << endl;
        processor.addData(-1.0);

    } 
    
    catch (const ValidationError& e) {
        cout << "Caught Custom Exception: " << e.message << endl;
    } 
    catch (const string& e) {
        cout << "Caught String Exception: " << e << endl;
    }
    catch (...) {
        cout << "Caught an unknown error." << endl;
    }

    return 0;
}
