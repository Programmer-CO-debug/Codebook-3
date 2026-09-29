//Employee Payroll Mini-project 

#include <iostream>
#include <string>

class Payment {
public:
    virtual void pay(double amount) const = 0;
    virtual ~Payment() = default;
};

class CardPayment : public Payment {
public:
    void pay(double amount) const override {
        std::cout << "Paid Rs. " << amount << " using card\n";
    }
};

class UpiPayment : public Payment {
public:
    void pay(double amount) const override {
        std::cout << "Paid Rs. " << amount << " using UPI\n";
    }
};

class NetBankingPayment : public Payment {
public:
    void pay(double amount) const override {
        std::cout << "Paid Rs. " << amount << " using net banking\n";
    }
};

void processPayment(const Payment& payment, double amount) {
    payment.pay(amount);
}

int main() {
    CardPayment card;
    UpiPayment upi;
    NetBankingPayment netBanking;

    processPayment(card, 18350.0);
    processPayment(upi, 7320.0);
    processPayment(netBanking, 5920.0);

    return 0;
}
