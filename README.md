# DigitalEmpowrmentNetwork_Internship

TASK # 1 :: 
__________
USER MANUAL OF Weather and Location Management System :: 
Introduction :: 
Welcome to the Weather and Location Management System! This application allows you to manage locations, track various weather parameters, fetch weather forecasts, historical weather data, and air quality information. Designed to be versatile and user-friendly, this system helps you stay informed about the weather and air quality for multiple locations around the world.

Features :: 

1. Manage Locations ::
Add Locations: Add new locations with names, latitudes, and longitudes.
Remove Locations: Remove locations from the system by name.
List Locations: View all locations stored in the system.

2. Weather Variables :: 
Add Weather Variables: Define various weather parameters like temperature, wind speed, and humidity.
List Weather Variables: View all defined weather variables.

3. Weather Forecasting :: 
Fetch Weather Data: Retrieve current weather data for any location.
Display Weather Data: View the latest weather forecast.

4. Historical Weather Data :: 
Fetch Historical Data: Get historical weather data for a location.
Display Historical Data: View historical weather data.

5. Air Quality Forecasting :: 
Fetch Air Quality Data: Retrieve air quality index (AQI) data for any location.
Display Air Quality Data: View the current air quality information.

__________________________________________________________________________________________




TASK # 2 :: 
__________
USER MANUAL OF Contact Management System :: 
1. Overview ::
The Contact Management System is a C++ program designed to help users manage their contacts. Users can create, view, search, and delete contacts, with each contact consisting of a name and a phone number. The program also saves contacts to a file, ensuring that the data persists between sessions.

2. Features ::
Create Contact: Add a new contact with a name and phone number.
View Contacts: Display all saved contacts.
Search Contact: Find a contact by name or phone number.
Delete Contact: Remove a contact by searching for its name or phone number.
File Persistence: Automatically save contacts to a file and load them when the program starts.
Menu-Driven Interface: Easy-to-use menu for navigating through the program.

3. Technical Explanation ::
Classes and Data Structures:
The Contact class stores the name and phone number for each contact.
The ContactManagement class manages a vector of Contact objects, which stores all the contacts.

File Handling:
The program uses a file named contacts.txt to store the contacts.
When the program starts, it loads contacts from the file.
When the program exits, it saves the current contacts to the file.
This ensures that contacts persist across different sessions.

Vector for Dynamic Storage:
A vector is used to store contacts dynamically. This allows the program to handle an unknown number of contacts efficiently.
The vector is updated whenever a contact is added, deleted, or viewed.

Menu-Driven Interface:
The program’s user interface is menu-driven, providing a clear and simple way for users to interact with the system.
Error checking is minimal, focusing on functionality and simplicity.


4. How to use ::
To use the Contact Management System, start the program and navigate through the menu by entering the corresponding numbers for each option. You can create a contact by entering the name and phone number, view all saved contacts, search for a contact by name or phone number, and delete a contact using the same search method. After completing each action, you’ll be returned to the main menu. The program automatically saves all contacts to a file and loads them when restarted. To exit, simply choose the "Exit" option from the menu.


5. Conclusion ::
The Contact Management System is a simple yet effective tool for managing personal contacts using C++. By following this user manual, you should be able to effectively utilize the program's features. The system is designed with ease of use in mind, making it a perfect introductory project for managing data in a file and interacting with users via a command-line interface.
__________________________________________________________________________________________
