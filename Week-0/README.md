# Tasks

## 1. Git and Github initialization.
- A. Installing git on windows Machine
	+ Download: Get the installer from [git-scm download windows](https://git-scm.com/download/win).
	+ Install: Run the downloaded .exe file and follow the prompts.
	+ Verify installation by running
		>git --version
	+ Configure: Open Git Bash and run
		>git config --global user.name "Name"

  		>git config --global user.email "email@example.com"
		
- B. Creating GitHub Account
	+ Go to Sign Up Page: Navigate to [github signup](https://github.com/signup).
	+ Enter Details: Provide a username, email, and password.
	+ Verify Email.
	
- C. Initialize a Public Repository
	+ Log In: Go to [github](https://github.com/) and log in with your new account.
	+ Create New Repository:
		* Click the "+" icon in the top-right corner.
		* Select "New repository" from the drop down menu.
	+ Repository Setup:
		* Enter a repository name.
		* Add a description (optional).
		* Select "Public" for visibility.
		* Check "Initialize this repository with a README" to add a README file (optional).
	+ Create Repository: Click "Create repository."
	


## 2. Installing VDI file on Windows machine using Oracle VirtualBox
- Followed the steps given in **Steps to open VDI.pdf** file provided.


## 3. Godbolt

Godbolt, also known as Compiler Explorer, is an online tool that allows users to write, compile, and analyze code in various programming languages. Godbolt is widely used by developers, educators, and students to gain insights into the compilation process and to improve their understanding of low-level code optimization and behavior.

### Key Features
- Multi-language Support: Supports multiple programming languages, including C, C++, Rust, Go, and many more.
- Multiple Compilers: Allows users to compile code with different compilers and versions, such as GCC, Clang, MSVC, and others.
- Assembly Output: Displays the generated assembly code side-by-side with the source code, making it easier to understand how high-level code is translated into machine instructions.
- Compiler Options: Provides options to customize compiler flags and settings to see how they affect the generated assembly code.
- Code Sharing: Users can share their code and compiler settings via unique URLs.
- Integrated Libraries: Includes a selection of standard libraries and headers, and users can include these in their code easily.

Access Godbolt at [godbolt](https://godbolt.org/).

### Examples to explore on godbolt.
- a. Counter: [Counter Example](https://godbolt.org/z/caKPbcGoo)
![window](https://github.com/vishal-hunashikatti/riscv/assets/93430948/29ab8d42-36b8-4beb-a73c-d70a89095fdb)
<p style="text-align: center;">Counter Example on godbolt online platform</p>


- b. Matrix multiplication: [Matrix-multiplication Example](https://godbolt.org/z/19Gee3KMG)
