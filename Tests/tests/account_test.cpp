//
// Created by konrad on 11.06.17.
//

#include <gtest/gtest.h>
#include "Account.h"

class AccountTest : public ::testing::Test {
protected:
    Account acc = Account("", 0);
public:
    void setUp() { }
    void tearDown() { }
};

TEST_F(AccountTest, zeroInit){
    ASSERT_DOUBLE_EQ(0, acc.balance());
}

TEST_F(AccountTest, simpleDeposit){
    acc.reset();
    acc.deposit(2000);
    ASSERT_DOUBLE_EQ(2000, acc.balance());
}

TEST_F(AccountTest, simpleWithdrawal){
    acc.reset();
    acc.deposit(2000);
    acc.withdraw(1500);
    ASSERT_DOUBLE_EQ(500, acc.balance());
}

TEST(SingleTest, nameTest){
    Account acc("Konrad", 3500);
    ASSERT_EQ("Konrad Gaca", acc.getName());
}
