# Learning C++

## Class and Objects

- **Class** is a template for objects.
- **Objects** is an instance of a class.

```cpp
class student{
    public:
    int rollnum;
    string name;
    void myM(); 
};

int main()
{
    student s49;

    s49.rollnum = 22049;
    s49.name="G Pavan Shanmukha Madhav Gunda";
    cout<<s49.rollnum<<"\n";
    cout<<s49.name;
    return 0;
}
```

You can create functions inside a class, or declare the function inside the class and define the function outside the class too.

```cpp
void student::myM()
{
    cout<<"Hello World";
}
```

---

## All About Constructor

### Key Points

- **Special Function**
- **Same Name as Class Name**
- Constructor is always a **public** function.
- Does not have any return value.
- Constructor is a function with no datatype.
- Can take parameters and is generally used for setting initial values for attributes.
- Can be defined inside or outside of a class.

### Example:

```cpp
student::student(int num, string nam) {
    rollno = num;
    name = nam;
}
```

When you create an object of the respective class and the class uses a constructor, the constructor is automatically called.

Yes, in C++, constructors can be made private. This means that no external code can directly create an object of that class.

### Types of Constructors

1. **Default Constructors** - No parameters, used to create an object with default values.
2. **Parameterized Constructor** - Takes parameters, used to create an object with specific values.
3. **Copy Constructor** - Takes a reference to another object of the same class.
4. **Move Constructor** - Takes an rvalue reference to another object, transferring resources from a temporary object.

### Implicit Copy Constructor

An implicit copy constructor will always be created by the compiler if there is no explicit copy constructor.

#### Example:

**Copy Constructor**
```cpp
ClassName(ClassName &obj) {
  // body_containing_logic
}
```

**Move Constructor**
```cpp
className(className&& obj) {
     // body of the constructor
}
```

- **L-value** refers to a memory location that identifies an object.
- **R-value** refers to the data value that is stored at some address.

```cpp
int a = 10;
int& lref = a;
int&& rref = 20;
```

### Compiler-Generated Functions:

- Default Constructor
- Copy Constructor
- Move Constructors
- Assignment Operator
- Destructor

Yes, we can have more than one constructor in a class. It is called **Constructor Overloading**.

---

## Destructor

- Invoked automatically whenever an object is going to be destroyed.
- It's the last function that's called before an object is destroyed.

**Example:**
```cpp
~student() {
    // destructor body
}
```

Or outside the class:
```cpp
student::~student() {
    // destructor body
}
```

### Key Points:

- Special Member Function
- Destroys the object created by the constructor.
- Same name as their class name preceded by a tilde (~) symbol.
- Not possible to define more than one destructor.
- Destructor cannot be overloaded.
- Destructor cannot be declared static or const.
- Destructor neither requires any arguments nor returns any value.
- Automatically called when an object goes out of scope.
- Destructor releases memory space occupied by the objects created by the constructor.
- Objects are destroyed in reverse order of creation.

If the object is created using `new` or the constructor uses `new` to allocate memory, the destructor should use `delete` to free the memory.

---

## Access Specifiers

### Types:

1. **Public** - Members are accessible outside the class.
2. **Private** - Members cannot be accessed or viewed from outside the class.
3. **Protected** - Members cannot be accessed from outside the class, but they can be accessed in inherited classes.

### Encapsulation

Encapsulation ensures sensitive data is hidden from users. To achieve this, declare attributes as private and use public methods to access and modify them.

---

## Inheritance

### Key Points:

- **Parent Class** - The class being inherited from.
- **Base Class** - The class that inherits from another class.

To inherit from a class, use the `:` symbol.

**Example:**
```cpp
class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n";
    }
};

class Car: public Vehicle {
  public:
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}
```

### Types of Inheritance:

1. **Multilevel Inheritance**
   - A class derived from another derived class.
   - Example: Parent -> Child -> Grandchild.

2. **Multiple Inheritance**
   - A class can be derived from more than one base class.
   - Example:
     ```cpp
     class MyChildClass: public MyClass, public MyOtherClass {
     };
     ```

---

## Polymorphism

Polymorphism means "many forms" and occurs when we have many classes related by inheritance.

### Types:

1. **Compile-Time Polymorphism (Static Polymorphism)**
   - Constructor overloading
   - Function overloading
   - Early Binding

2. **Run-Time Polymorphism (Dynamic Polymorphism)**
   - Function overriding
   - Late Binding

### Function Overriding

When a derived class provides a specific implementation for a function defined in its base class.

**Example:**
```cpp
#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Display from Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Display from Derived class" << endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;

    basePtr = &derivedObj;
    basePtr->display();
    return 0;
}
```

### Virtual Table (vtable):

- The compiler creates a vtable (virtual table) for each class with virtual functions.
- Each object of the class contains a hidden pointer (vptr) to the vtable.
- Function calls are resolved at runtime using the vtable.

---

## Operator Overloading

Overloading an operator like `+` allows custom behavior for operations between objects.

**Example:**
```cpp
class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    Complex operator+(Complex const& obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }

    void print() {
        cout << real << " + i" << imag << '\n';
    }
};

int main() {
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print();
}
```

### Operators That Cannot Be Overloaded:

- `sizeof`
- `typeid`
- `::` (Scope resolution)
- `.` (Class member access)
- `.*` (Pointer to member operator)
- `?:` (Ternary operator)

### Operators That Can Be Overloaded:

- Binary Arithmetic: `+, -, *, /, %`
- Unary Arithmetic: `+, -, ++, --`
- Assignment: `=, +=, *=, /=, -=, %=`
- Bitwise: `&, |, <<, >>, ~, ^`
- Logical: `&, ||, !`
- Relational: `>, <, ==, <=, >=`
- Dynamic memory allocation: `new, delete`
- Subscript: `[]`
- Function call: `()`

---

## Function Overloading

Two or more functions can have the same name but different parameters.

**Example:**
```cpp
void add(int a, int b) {
  cout << "sum = " << (a + b);
}

void add(double a, double b) {
    cout << endl << "sum = " << (a + b);
}

int main() {
    add(10, 2);
    add(5.3, 6.2);
    return 0;
}
```

---

## Enum

An enum is a special type that represents a group of constants.

**Example:**
```cpp
enum Level {
  LOW,
  MEDIUM,
  HIGH
};

int main() {
  Level myVar = MEDIUM;
  cout << myVar;
  return 0;
}
```

---

## Pointers

A pointer is a variable that stores the memory address as its value.

**Example:**
```cpp
string food = "Pizza"; 
cout << food;  // Outputs: Pizza
cout << &food; // Outputs: Memory address

string* mystring;
mystring = &food;
```

---

## Files

The `fstream` library allows us to work with files.

### Write to a File:

```cpp
#include <fstream>
using namespace std;

int main() {
  ofstream MyFile("filename.txt");
  MyFile << "Files can be tricky, but it is fun enough!";
  MyFile.close();
}
```

### Read from a File:

```cpp
#include <fstream>
using namespace std;

int main() {
  string myText;
  ifstream MyReadFile("filename.txt");

  while (getline(MyReadFile, myText)) {
    cout << myText;
  }

  MyReadFile.close();
}
```

---

## Exception Handling

### Key Points:

- `try` defines a block of code to test for errors.
- `throw` throws an exception when a problem arises.
- `catch` defines a block of code to handle errors.

### Example:

```cpp
try {
  int age = 11;
  if (age >= 18) {
    cout << "Access granted.";
  } else {
    throw age;
  }
} catch (int myNum) {
  cout << "Access denied. Age is: " << myNum;
}
```

### Handle Any Type of Exceptions:

```cpp
try {
  throw 505;
} catch (...) {
  cout << "An exception occurred.";
}
