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






TASK # 3 :: 
__________
User Manual for the Run-Length Encoding (RLE) File Compression Program

Overview
This program allows you to compress and decompress files using Run-Length Encoding (RLE), a simple form of lossless data compression where sequences of the same data value (runs) are stored as a single data value and count. You can choose to either compress a file or decompress an already compressed file using this program.

Key Features
- File Reading and Writing: The program reads data from an input file and writes either the compressed or decompressed data to an output file.
- Compression (RLE): Replaces sequences of the same character with the character followed by the number of occurrences.
- Decompression: Reverts the compressed file back to its original form by expanding the sequences back to their original state.

How to Use
1. Input File Path:
   - When prompted, enter the full path to the file you want to compress or decompress.

2. Choose Operation:
   - The program will ask you to choose an operation:
     - Enter `C` or `c` to compress the file.
     - Enter `D` or `d` to decompress the file.

3. File Processing:
   - Depending on your choice, the program will:
     - Compression: Read the content from the file, compress it using RLE, and save the compressed data to a new file with the extension `.rle`.
     - Decompression: Read the compressed file, decompress it, and save the decompressed data to a new file with the extension `.decompressed`.

4. Output:
   - After processing, the program will display a success message with the path to the newly created output file.

Example Walkthrough

- Example 1: Compressing a File
  - Suppose you have a file named `data.txt` that contains the text `aaaabbbcc`.
  - When you run the program, input the path `data.txt` when prompted.
  - Choose `C` to compress the file.
  - The program will create a file named `data.txt.rle` containing `a4b3c2`.

- Example 2: Decompressing a File
  - If you have a compressed file named `data.txt.rle` containing `a4b3c2`.
  - Run the program, input the path `data.txt.rle`.
  - Choose `D` to decompress the file.
  - The program will create a file named `data.txt.rle.decompressed` containing the original text `aaaabbbcc`.

Error Handling
- File Opening Errors: If the program cannot open the specified file for reading or writing, it will display an error message like "could not open file for reading/writing."
- Invalid Operation Choice: If you enter anything other than `C/c` or `D/d`, the program will notify you that the choice is invalid.

Detailed Code Explanation

1. File Reading Function:
   - `filereading()` reads the entire content of the specified file into a string using binary mode.

2. File Writing Function:
   - `writefile()` writes the provided data to a specified file in binary mode.

3. Compression Function (RLE):
   - `compressRLE()` compresses the input data by counting consecutive identical characters and storing the character followed by the count.

4. Decompression Function:
   - `decompressRLE()` decompresses the RLE-compressed data back to its original form by repeating each character according to the stored count.

5. Main Function:
   - Handles user interaction, manages the input/output file paths, calls the appropriate compression or decompression functions, and handles errors.

Conclusion
This program is a simple and effective tool for compressing and decompressing text files using Run-Length Encoding. It’s particularly useful for files with repetitive sequences, as it reduces the file size while retaining all the original data.
__________________________________________________________________________________________


TASK # 4 :: 
__________
User Manual for the Simple Multi-threaded HTTP Server in C++

Overview
This program is a basic multi-threaded HTTP server implemented in C++ using Winsock2. The server listens on a specified port (default is `8080`) for incoming client connections. It serves HTML files from a directory named `www` and can handle multiple client requests simultaneously by spawning a new thread for each client.

Key Features
- Multi-threading: The server can handle multiple client connections at the same time by creating a new thread for each client.
- Simple HTTP Handling: The server can respond to basic HTTP GET requests, serving files from the `www` directory.
- Error Handling: The program includes error diagnostics for issues related to socket operations, such as binding and listening.

How to Use

1. Compiling the Program:
   - Make sure you are on a Windows system with Winsock2 installed.
   - Compile the code using a C++ compiler that supports Windows-specific libraries (e.g., MSVC).

2. Running the Server:
   - Run the compiled executable. The server will start listening on port `8080` for incoming connections.

3. Serving Files:
   - The server serves files from a directory named `www`. Ensure this directory exists in the same location as the executable and contains an `index.html` file.
   - When a client connects and requests the root path (`/`), the server will serve `index.html`.
   - For other paths, the server will look for the corresponding file in the `www` directory.

4. Accessing the Server:
   - Open a web browser and enter the server's IP address followed by `:8080`. For example, if the server is running on `localhost`, enter `http://localhost:8080/`.
   - The server will respond with the contents of the `index.html` file or the requested file if it exists.

5. Handling Multiple Clients:
   - The server can handle multiple clients simultaneously. Each client connection will be processed in its own thread, allowing multiple clients to interact with the server concurrently.

Example Walkthrough

- Starting the Server:
  - Run the program. You should see a message like `Server is listening on port 8080`.
  
- Accessing the Server:
  - In a web browser, navigate to `http://localhost:8080/`.
  - If the `index.html` file exists in the `www` directory, it will be displayed.
  
- Handling Different Paths:
  - If a client requests `http://localhost:8080/about.html`, the server will look for `www/about.html`. If it exists, the server will send its content to the client. If it does not exist, the server will respond with a `404 Not Found` error.

Detailed Code Explanation
1. Winsock Initialization:
   - The program initializes Winsock using `WSAStartup()` and prepares the server for handling TCP connections.

2. Socket Creation:
   - A socket is created using `socket()` for the server to listen for incoming connections.

3. Socket Binding:
   - The socket is bound to the specified port (`8080` by default) using `bind()`. The program also sets the `SO_REUSEADDR` option to allow the socket to be reused, which is helpful during development to avoid "Address already in use" errors.

4. Listening for Connections:
   - The server listens for incoming client connections using `listen()` and waits for clients to connect.

5. Accepting Connections:
   - When a client connects, the server accepts the connection using `accept()` and spawns a new thread to handle the client.

6. Handling Client Requests:
   - Each client request is processed in the `handle_client()` function:
     - The server reads the client's HTTP request.
     - If the request path is `/`, it serves `index.html`.
     - If the file exists in the `www` directory, the server sends the file content.
     - If the file does not exist, the server responds with a `404 Not Found` message.

7. Multi-threading:
   - The program uses the C++ `thread` library to create a new thread for each client, allowing multiple clients to be served concurrently.

8. Graceful Shutdown:
   - After all client threads have completed, the server socket is closed, and Winsock is cleaned up using `WSACleanup()`.

Conclusion
This simple HTTP server demonstrates basic network programming concepts using Winsock2 in C++. It is a lightweight server capable of serving static HTML files from a directory and handling multiple client connections concurrently. This makes it suitable for educational purposes or as a foundation for building more complex networked applications.
__________________________________________________________________________________________

