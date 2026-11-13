
# AI-Assisted Student Record and Result Management System

## Project Overview
A console-based student record and result management system
developed in C for academic purposes.

## Features
- Add student records
- Display all student records
- Search students by SAP ID
- Delete student records
- Calculate CGPA from available SGPA values
- Calculate average CGPA by academic year
- Sort records by SAP ID and name
- Provide rule-based academic advice

## Student Information
The program stores SAP ID, roll number, name, phone number,
email, year, completed semesters, and available SGPA values.

## Requirements
- A C compiler such as GCC
- A terminal or command prompt

## Compile
Replace SAP_ID.c with your actual source filename.

gcc 590036013.c -o student_management

## Run
Windows:
student_management.exe

Linux/macOS:
./student_management

## Limitations
Records are stored in memory and are not retained after
the program exits. Names currently accept one word.

## Testing
Refer to the tests folder and sample input/output files.

## AI Assistance
ChatGPT was used as a learning assistant for code structure,
feature planning, debugging guidance, and documentation.
See AI_USAGE_LOG.md for details.
