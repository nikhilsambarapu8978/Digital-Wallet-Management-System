# Digital-Wallet-Management-System
A C++ code to implement application for managing digital wallet transactions, including fund transfers and sorting users by remaining balance.

Overview
This Digital Wallet Management System is a simple C++ application that allows users to manage financial transactions digitally. The system supports transferring funds between users, checking balances, and displaying the sorted list of users based on their remaining balance after transactions.
The program handles a series of transactions and updates user balances accordingly. It then sorts the users based on their final balances and displays the results. The sorting is done in descending order of balances, and for users with the same balance, it sorts them by their user ID in ascending order.

QUESTION DESCRIPTION:

A Digital Wallet Management System is a software platform that allows users to manage their financial transactions digitally. It enables transferring and receiving funds, and viewing account balances. This system ensures secure, fast, and convenient transactions, streamlining financial management for users.
Requirements :
List of users with their initial balances
List of transactions including adding funds.
Results :
For each transaction, provide a confirmation of success or failure.
After completing all transactions, sort and display users based on leftover balance.
Input Format
The first line contains an integer N, the number of users.
The next N lines each contain two integers: userID and balance, where userID is the user's identifier, and balance is the user's current balance
The next line contains an integer T , the number of transactions.
The next T lines each contain three integers: from_userID, to_userID, amount, where from_userID and to_userID are the identifiers of the users involved in the transaction, amount is the amount transferred

Constraints
1 ≤ N ≤ 102
1 ≤ userID ≤ 102
0 ≤ balance ≤ 104
1 ≤ T ≤ 103
0 ≤ amount ≤ 104

Output Format
For each transaction:
Print "Success" if the transaction was completed successfully.
Print "Failure" if the transaction failed
Print all users in sorted order based on their leftover balance.

CODE DESCRIPTION:
Features
User Management: Keep track of user IDs and their initial balances.
Transaction Handling: Process fund transfers between users.
Balance Check: Verify if a transaction can be completed based on the sender's balance.
Sorting and Display: Sort and display users based on their final balance in descending order; for users with the same balance, sort by user ID in ascending order.

Input Format
Number of Users: An integer N representing the number of users.
User Data: Followed by N lines, each containing two integers: userID and balance.
Number of Transactions: An integer T representing the number of transactions.
Transaction Data: Followed by T lines, each containing three integers: from_userID, to_userID, and amount.

Output :
Sample Input 0
4
1 9000
2 3000
3 7500
4 2000
5
1 2 1000
3 4 3000
2 3 500
4 1 7500
1 4 1500
Sample Output 0
Success
Success
Success
Failure
Success
2 3500
3 5000
1 6500
4 6500
