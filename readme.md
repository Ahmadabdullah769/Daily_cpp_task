# Beginner Guide to C++ Concepts

## Header files
**What they are:** Header files tell the compiler about functions, classes and other definitions you want to use. Use angle-brackets for standard headers.

**Common headers**
- `<iostream>` — input/output (`std::cin`, `std::cout`)
- `<string>` — `std::string`
- `<sstream>` — string streams (split, format)
- `<iomanip>` — manipulators like `setw`
- `<vector>` — dynamic array `std::vector`
- `<cmath>` — math functions like `sqrt`, `pow`

**Example**
```cpp
#include <iostream>
#include <string>
```

---

## Structure of a C++ Program
Minimum structure:
```cpp
#include <iostream>        // header files
int main() {              // program entry point
    std::cout << "Hi\n";  // statement
    return 0;             // exit code
}
```
Parts:
- Headers / `#include`
- `main()` — starting function
- Statements ended with `;`
- `{ }` define blocks / scope

---

## Statement Terminator
Every statement ends with a semicolon `;`.
```cpp
int a = 5;      // statement terminated by ;
a = a + 2;      // another statement
```

---

## Comments and their syntax in C++
- Single-line: `// this is a comment`
- Multi-line: `/* comment line 1
                 comment line 2 */`

Example:
```cpp
// Print a message
std::cout << "Hello";  /* inline comment */
```

---

## C++ constants and Variable
- **Variable:** storage with a name and a type (e.g., `int x;`).
- **Constant:** value that cannot change after initialization.

Use `const`:
```cpp
const double PI = 3.14159;
```
Or `constexpr` for compile-time constants:
```cpp
constexpr int MAX_USERS = 100;
```

---

## Rules for naming variable
- Start with a letter (A–Z, a–z) or underscore `_` — **not** a digit.
- After first character can contain letters, digits, underscores.
- Case sensitive (`age` ≠ `Age`).
- Cannot use reserved keywords (`int`, `return`, `class`, etc).
- Prefer meaningful names: `totalScore`, `userAge`.

Valid examples:
```cpp
int age;
double account_balance;
std::string studentName;
```

---

## Declaration and Initialization of Variable
- **Declaration**: informs compiler of a variable and its type.
- **Initialization**: gives it an initial value.

Examples:
```cpp
int a;            // declaration
int b = 10;       // declaration + initialization
int c(5);         // direct initialization
int d{7};         // uniform initialization
auto e = 2.5;     // compiler deduces type (double)
```

---

## Fundamental Data types in C++
- `char` — character (e.g., `'A'`)
- `int` — integer (e.g., `42`)
- `short`, `long`, `long long` — different integer sizes
- `float` — single precision floating point
- `double` — double precision floating point
- `bool` — `true` / `false`
- `void` — no value / no type

Example:
```cpp
char grade = 'A';
int count = 100;
float price = 12.50f;
double pi = 3.14159;
bool isOpen = true;
```

---

## Type casting Operators
**Implicit cast** (automatic):
```cpp
double x = 3;    // int -> double implicitly
```
**C++ casts (recommended):**
- `static_cast<T>(value)` — safe explicit conversions

Example:
```cpp
double x = 3.9;
int n = static_cast<int>(x); // n == 3
```

---

## Input / Output Handling
**Basic I/O** from `<iostream>`:
- `std::cout` — print to console
- `std::cin` — read from keyboard

Example:
```cpp
#include <iostream>
int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "You are " << age << " years old\n";
    return 0;
}
```

---

## Escape Sequences
- `\n` — newline
- `\t` — tab
- `\\` — backslash
- `\"` — double quote
- `\'` — single quote

Example:
```cpp
std::cout << "Line1\nLine2\n";
std::cout << "Tabbed:\tHello\n";
```

---

## Input / Output Handling functions
- `std::getline(std::cin, str)` — read full line including spaces
- `std::cin >> var` — reads formatted input
- `std::cin.get()` — read single character

Example:
```cpp
#include <iostream>
#include <string>
int main() {
    std::string name;
    std::cout << "Enter full name: ";
    std::getline(std::cin, name);
    std::cout << "Hello, " << name << "\n";
}
```

---

## `endl` and `setw` Manipulator
- `std::endl` — newline + flush output buffer.
- `std::setw(n)` — sets field width for next output.

Example:
```cpp
#include <iostream>
#include <iomanip>
int main() {
    std::cout << std::left << std::setw(10) << "Name"
              << std::setw(5) << "Age" << '\n';
    std::cout << std::setw(10) << "Ali"
              << std::setw(5) << 21 << '\n';
}
```

---

## Operators in C++
- Arithmetic: `+ - * / %`
- Assignment: `=, +=, -=`
- Comparison: `==, !=, >, <`
- Logical: `&&, ||, !`
- Bitwise: `&, |, ^, ~, <<, >>`
- Increment/Decrement: `++`, `--`
- Ternary: `?:`

---

## Unary, Binary and Ternary Operators
- **Unary**: one operand (`!flag`, `++i`)
- **Binary**: two operands (`a + b`)
- **Ternary**: `condition ? trueVal : falseVal`

Example:
```cpp
int x = 10;
std::string s = (x > 5) ? "big" : "small";
```

---

## Expressions
Combine variables, literals, operators.
```cpp
int a = 2, b = 3;
int c = a * (b + 4);
```

---

## Precedence of operators
High ➜ Low:
1. `()`
2. Unary `+ - ! ++ --`
3. `* / %`
4. `+ -`
5. `<< >>`
6. `< <= > >=`
7. `== !=`
8. `&`
9. `^`
10. `|`
11. `&&`
12. `||`
13. `?:`
14. `=`
15. `,`

Tip: Use parentheses to make intent clear.

---

## Compound expressions
```cpp
int a = 2, b = 3, c = 4;
int result = a + b * c;      // 14
int result2 = (a + b) * c;   // 20
```

---

## Reverse Words Example
```cpp
#include <iostream>
#include <sstream>
#include <vector>
#include <string>

int main() {
    std::string line;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, line);

    std::istringstream iss(line);
    std::vector<std::string> words;
    std::string word;

    while (iss >> word) {
        words.push_back(word);
    }

    for (int i = words.size() - 1; i >= 0; --i) {
        std::cout << words[i];
        if (i) std::cout << ' ';
    }
    std::cout << '\n';
}
```
Input: `Hello world from C++` → Output: `C++ from world Hello`

---

## Beginner Mini Examples
1. **Swap numbers:**
```cpp
int a = 5, b = 7, temp;
temp = a; a = b; b = temp;
```

2. **Simple calculator:**
```cpp
#include <iostream>
int main() {
    int x, y;
    std::cout << "Enter two integers: ";
    std::cin >> x >> y;
    std::cout << "Sum is " << (x + y) << '\n';
}
```

3. **Type casting:**
```cpp
double d = 9.7;
int i = static_cast<int>(d); // i == 9
```

4. **setw usage:**
```cpp
#include <iostream>
#include <iomanip>
int main() {
    std::cout << std::setw(10) << "Item" << std::setw(10) << "Price" << '\n';
    std::cout << std::setw(10) << "Apple" << std::setw(10) << 20 << '\n';
}
```

---

## Quick Cheat Sheet
- Program skeleton: `#include <iostream> int main(){}`
- Print: `std::cout << "text" << var << '\n';`
- Read: `std::cin >> x;`
- Read line: `std::getline(std::cin, s);`
- Comment: `//` or `/* ... */`
- Constant: `const int N = 5;`
- Cast: `int n = static_cast<int>(3.14);`
- Ternary: `a > b ? a : b`
- Precedence tip: parentheses `()`
