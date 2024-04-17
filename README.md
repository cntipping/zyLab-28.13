# zyLab-28.13
Last in-class lab

Lab Instructions: 
1) Create three files to submit:

- ItemToPurchase.h - Class declaration
- ItemToPurchase.cpp - Class definition
- main.cpp - main() function
  
Build the ItemToPurchase class with the following specifications:

- Default constructor
- Public class functions (mutators & accessors)
  - SetName() & GetName() (2 pts)
  - SetPrice() & GetPrice() (2 pts)
  - SetQuantity() & GetQuantity() (2 pts)
- Private data members
  - string itemName - Initialized in default constructor to "none"
  - int itemPrice - Initialized in default constructor to 0
  - int itemQuantity - Initialized in default constructor to 0
    
(2) In main(), prompt the user for two items and create two objects of the ItemToPurchase class. 
Before prompting for the second item, call cin.ignore() to allow the user to input a new string. (2 pts)
