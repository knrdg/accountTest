//
// Created by konrad on 10.06.17.
//

#ifndef ACCOUNTEXAMPLE_ACCOUNT_H
#define ACCOUNTEXAMPLE_ACCOUNT_H


#include <string>

class Account {
    std::string name;
    double bal;
public:
    Account(const std::string& name, const double bal = 0) : name(name), bal(bal) { }
    virtual ~Account() { }
    std::string getName() const { return name; }
    double balance() const { return bal; }
    void deposit(const double value) { bal += value; }
    void withdraw(const double value) { bal -= value; }
    void reset() { bal = 0; }
};

#endif //ACCOUNTEXAMPLE_ACCOUNT_H
