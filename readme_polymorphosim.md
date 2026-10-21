C++ Polymorphism

1. Introduction

This project demonstrates runtime polymorphism in C++ using a real-world payment system.

2. Objectives

- To understand polymorphism in C++.
- To implement virtual functions and function overriding.
- To demonstrate runtime polymorphism using a base-class pointer.

3. Classes Used

- Payment: Parent class containing the virtual function "makePayment()".
- CashPayment: Derived class that implements cash payment.
- MobileMoneyPayment: Derived class that implements mobile money payment.

4. How It Works

The program uses a base-class pointer to call the overridden "makePayment()" function. The output changes depending on the derived object being referenced.

5. Expected Output

POLYMORPHISM DEMONSTRATION
--------------------------
Payment made using cash.
Payment made using mobile money.

6. Compilation and Execution

Compile the program:

g++ polymorphism.cpp -o polymorphism

Run on Linux or macOS:

./polymorphism

On Windows:

polymorphism.exe

7. Illustration

Include a photograph of your hand-drawn diagram showing the "Payment" parent class and its two derived classes, "CashPayment" and "MobileMoneyPayment".

8. Conclusion

This project demonstrates how runtime polymorphism allows the same function call to produce different behaviours depending on the object involved.

9. Author

Name: [Mandela nickson]
Language: C++
Topic: Runtime Polymorphism
