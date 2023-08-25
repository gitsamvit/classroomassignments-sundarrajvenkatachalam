// Online C++ compiler to run C++ program online
#include <iostream>
class Device{
    
};

class IPrinter{
public:
  virtual void print() const = 0;  
};

class IScanner{
public:
  virtual void scan () const = 0;  
};

class Printer: public IPrinter {
public:
    void print() const{
    
    }
};

class Scanner : public IScanner{
public:
    void scan() const {
        
    }
};

class PrinterScanner : public IPrinter, public IScanner{
private:
    Printer pObj;
    Scanner sObj;
    
public:
    void print() const {
        pObj.print();
    }
    
    void scan() const {
        sObj.scan();
    }
    
};

void printJob(const IPrinter & printRef) {
    printRef.print();
}

void scanJob(const IScanner & scanRef) {
    scanRef.scan();
}


int main() {
    Printer pObj;
    Scanner sObj;
    PrinterScanner psObj;
    
    printJob(pObj);
    scanJob(sObj);
    printJob(psObj);
    scanJob(psObj);
    
    return 0;
}