# Activity-4
AIM: Design a c program that stores information in database.

THEME: 
Create employee data base using structure and display info design a C program to display the information of all employees in a company sorted by their salaries from highest to lowest . each employee info including their employee id and salary is stored in database using arrays and structures the program should read employee data from database , organise it based on salaries and then print details of each employee in descending order of their salaries additionally program should handle ties in salary and provide a consistent method for sorting the employees.



RESEARCH: 
https://www.w3schools.com/c/

https://www.geeksforgeeks.org/c/c-programming-language/

https://www.tutorialspoint.com/cprogramming/c_structures.htm



HOW IT WORKS:
Structure Definition:


The program defines a struct called clothes to hold information about each clothing item. This structure contains:


producttype: Type of the product (e.g., T-shirt, Jeans).


gsm: The GSM (Grams per Square Meter) of the fabric.


name: Name of the product.


stock: Available quantity in stock.


prize: Price of the product.


Input:


The program first asks the user how many clothing items they want to input.


Then, for each clothing item, it prompts the user to enter the following details:


Product type, GSM, product name, stock, and price.


Bubble Sort:


Once all items are entered, the program sorts the array of clothes using the Bubble Sort algorithm.


Bubble Sort works by repeatedly comparing adjacent items in the array. If the price (prize) of the first item is smaller than the second, they are swapped. This process continues until all items are sorted in descending order based on price.


Display Sorted Items:


After sorting, the program displays the details of each clothing item in a tabular format. The items are shown in descending order of price.


Example Workflow:
User Input:


Enter 3 items:


Item 1: T-shirt (GSM 150, Price 399)


Item 2: Jeans (GSM 300, Price 799)


Item 3: Jacket (GSM 500, Price 1499)


Sorting:


The items are sorted by price using Bubble Sort:


After the first pass, the highest-priced item (Jacket) is moved to the top.


The remaining items (T-shirt and Jeans) are sorted in descending order of their prices.
OUTPUT: 
Enter the number of clothes: 3

Enter details for product 1:
Enter Product Type: tshirt
Enter Product GSM: 220
Enter Product Name: attackoftitan
Enter available stock: 46
Enter Product Prize: 399


Enter details for product 2:
Enter Product Type: shirt
Enter Product GSM: 200
Enter Product Name: floral
Enter available stock: 100
Enter Product Prize: 499


Enter details for product 3:
Enter Product Type: shorts
Enter Product GSM: 220
Enter Product Name: shorts
Enter available stock: 399
Enter Product Prize: 399


Clothes Details (Sorted by Prize - Highest to Lowest):
--------------------------------------------------------
Product Type        GSM       Product Name        Stock     Prize     
--------------------------------------------------------
shirt               200       floral              100       499       
tshirt              220       attackoftitan       46        399       
shorts              220       shorts              399       399       


=== Code Execution Successful ===


Enter the number of clothes: 4

Enter details for product 1:
Enter Product Type: thsirt
Enter Product GSM: 220
Enter Product Name: oversized
Enter available stock: 99
Enter Product Prize: 399


Enter details for product 2:
Enter Product Type: shirt
Enter Product GSM: 200
Enter Product Name: boxyfit
Enter available stock: 399
Enter Product Prize: 499


Enter details for product 3:
Enter Product Type: cap
Enter Product GSM: 200
Enter Product Name: cropped
Enter available stock: 99
Enter Product Prize: 399


Enter details for product 4:
Enter Product Type: jeans
Enter Product GSM: 250
Enter Product Name: baggyjeans
Enter available stock: 100
Enter Product Prize: 699


Clothes Details (Sorted by Prize - Highest to Lowest):
--------------------------------------------------------
Product Type        GSM       Product Name        Stock     Prize     
--------------------------------------------------------
jeans               250       baggyjeans          100       699       
shirt               200       boxyfit             399       499       
thsirt              220       oversized           99        399       
cap                 200       cropped             99        399       


=== Code Execution Successful ===

