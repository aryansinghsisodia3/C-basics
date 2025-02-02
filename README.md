# Basic C++ Programmes

This repository contains basic C++ programmes for early learners.

## Installation

#### Download and install a C++ compiler:
###### Most recommended: Download and install Visual Studio from the Microsoft website.
###### Alternative: Download and install MinGW (Minimalist GNU for Windows) to get the "g++" compiler.

## Add the compiler directory to your PATH environment variable:

###### Open your system properties and navigate to "Environment Variables".
###### Find the "Path" variable under "System variables" and edit it.
###### Add the path to the "bin" folder within your compiler installation directory (e.g., "C:\mingw\bin" for MinGW). 

## To verify installation

###### Open a command prompt window. 
Type ```bash g++ --version``` (for MinGW) or ```bashcl --version``` (for Visual Studio) and press Enter. 
###### If installed correctly, you should see information about the C++ compiler version. 

## Compiling a C++ program with MinGW
###### Open a command prompt and navigate to the directory containing your C++ code file.
Use the command ```bash g++ your_program.cpp -o your_program.exe``` to compile your program. 

## Contributing

Pull requests are welcome. For major changes, please open an issue first
to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License

[MIT](https://choosealicense.com/licenses/mit/)
