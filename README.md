# Digital Wallet Management System

## Overview

The Digital Wallet Management System is a simple C++ application designed to manage financial transactions digitally. This system supports fund transfers between users, balance checking, and sorting users based on their remaining balance after transactions. The system provides a streamlined way to manage and view user transactions and balances.

## Features

- **User Management**: Keep track of user IDs and their initial balances.
- **Transaction Handling**: Process fund transfers between users.
- **Balance Check**: Verify if a transaction can be completed based on the sender's balance.
- **Sorting and Display**: Sort and display users based on their final balance in descending order; if users have the same balance, sort them by user ID in ascending order.

## Requirements

1. List of users with their initial balances.
2. List of transactions, including fund transfers.

## Input Format

1. **Number of Users**: An integer `N` representing the number of users.
2. **User Data**: Followed by `N` lines, each containing two integers: `userID` and `balance`.
3. **Number of Transactions**: An integer `T` representing the number of transactions.
4. **Transaction Data**: Followed by `T` lines, each containing three integers: `from_userID`, `to_userID`, and `amount`.

## Constraints

- `1 ≤ N ≤ 102`
- `1 ≤ userID ≤ 102`
- `0 ≤ balance ≤ 10^4`
- `1 ≤ T ≤ 10^3`
- `0 ≤ amount ≤ 10^4`

## Output Format

1. For each transaction:
   - Print "Success" if the transaction was completed successfully.
   - Print "Failure" if the transaction failed.
2. After completing all transactions, print all users sorted by their leftover balance in descending order. For users with the same balance, sort them by their user ID in ascending order.



