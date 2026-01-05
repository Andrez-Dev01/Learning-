/* ====================================================================================
 * PROFESSIONAL-LEVEL EXERCISE: Grade Calculator & Statistics System
 * ====================================================================================
 * 
 * OBJECTIVE:
 * Build a comprehensive grade management system that processes student scores,
 * calculates statistics, and provides detailed reporting. This exercise integrates
 * concepts from Chapter 1 (Data Types & Operators) and Chapter 2 (Control Structures).
 * 
 * REQUIREMENTS:
 * 
 * 1. DATA INPUT & VALIDATION:
 *    - Prompt the user to enter the number of students (must be between 1 and 50)
 *    - For each student, collect:
 *      * Student ID (integer)
 *      * Score for Exam 1 (0-100, floating-point)
 *      * Score for Exam 2 (0-100, floating-point)
 *      * Score for Final Exam (0-100, floating-point)
 *    - Validate all inputs (scores must be between 0-100, student ID must be positive)
 *    - Use appropriate data types for each variable
 * 
 * 2. CALCULATIONS:
 *    - Calculate each student's final grade using weighted average:
 *      * Exam 1: 25% weight
 *      * Exam 2: 25% weight
 *      * Final Exam: 50% weight
 *    - Determine letter grade based on final grade:
 *      * A: 90-100
 *      * B: 80-89
 *      * C: 70-79
 *      * D: 60-69
 *      * F: Below 60
 *    - Calculate class statistics:
 *      * Average final grade (mean)
 *      * Highest final grade
 *      * Lowest final grade
 *      * Number of students who passed (grade >= 60)
 *      * Pass rate percentage
 * 
 * 3. OUTPUT & REPORTING:
 *    - Display a formatted report showing:
 *      * Individual student records (ID, all scores, final grade, letter grade)
 *      * Class statistics summary
 *    - Format all floating-point numbers to 2 decimal places
 * 
 * 4. PROGRAM STRUCTURE:
 *    - Use loops for data collection and processing
 *    - Use conditional statements for validation and grade determination
 *    - Use appropriate operators for calculations
 *    - Implement proper type casting where necessary
 *    - Include error handling for invalid inputs (re-prompt user)
 * 
 * 5. BONUS CHALLENGES (Optional):
 *    - Add a menu system allowing users to:
 *      a) Enter new student data
 *      b) View statistics
 *      c) Search for a specific student by ID
 *      d) Exit
 *    - Implement grade distribution (count how many A's, B's, C's, D's, F's)
 *    - Calculate standard deviation of final grades
 * 
 * EXPECTED OUTPUT FORMAT:
 * ====================================================================================
 * GRADE CALCULATOR & STATISTICS SYSTEM
 * ====================================================================================
 * 
 * Enter number of students (1-50): 3
 * 
 * --- Student 1 ---
 * Enter Student ID: 1001
 * Enter Exam 1 score (0-100): 85.5
 * Enter Exam 2 score (0-100): 92.0
 * Enter Final Exam score (0-100): 88.5
 * 
 * [Similar prompts for remaining students...]
 * 
 * ====================================================================================
 * STUDENT GRADE REPORT
 * ====================================================================================
 * ID      Exam 1    Exam 2    Final    Weighted Avg    Letter Grade
 * --------------------------------------------------------------------
 * 1001    85.50     92.00     88.50    88.75           B
 * 1002    78.00     82.50     75.00    77.88           C
 * 1003    95.00     98.00     92.00    93.75           A
 * 
 * ====================================================================================
 * CLASS STATISTICS
 * ====================================================================================
 * Average Final Grade: 86.79
 * Highest Final Grade: 93.75
 * Lowest Final Grade:  77.88
 * Students Passed:     3
 * Pass Rate:           100.00%
 * 
 * ====================================================================================
 * 
 * TECHNICAL REQUIREMENTS:
 * - Use appropriate data types (int, float/double, char, bool)
 * - Implement input validation with loops
 * - Use arithmetic and comparison operators
 * - Apply type casting for accurate calculations
 * - Structure code with proper control flow
 * - Format output professionally
 * 
 * GOOD LUCK!
 */


 #include <iostream>
 #include <iomanip>
 using namespace std;
 
 int main() {
     const int MAX_STUDENTS = 50;
     int studentIDs[MAX_STUDENTS];
     float exam1Scores[MAX_STUDENTS];
     float exam2Scores[MAX_STUDENTS];
     float finalExamScores[MAX_STUDENTS];
     float percentages[MAX_STUDENTS];
     char letterGrades[MAX_STUDENTS];
     int totalStudents = 0;  
     
     cout << "====================================================================================" << endl;
     cout << "GRADE CALCULATOR & STATISTICS SYSTEM" << endl;
     cout << "====================================================================================" << endl;
     cout << endl;
     
     int choice;
     bool exitProgram = false;
     
     // Menu system loop
     while (!exitProgram) {
         cout << "========================================" << endl;
         cout << "   GRADE CALCULATOR MENU" << endl;
         cout << "========================================" << endl;
         cout << "1. Enter new student data" << endl;
         cout << "2. View statistics" << endl;
         cout << "3. Search for a specific student by ID" << endl;
         cout << "4. Exit" << endl;
         cout << "========================================" << endl;
         cout << "Enter your choice (1-4): ";
         cin >> choice;
         cout << endl;
         
         switch (choice) {
             case 1: {
                 // Enter new student data
                 if (totalStudents >= MAX_STUDENTS) {
                     cout << "Maximum number of students (" << MAX_STUDENTS << ") reached!" << endl;
                     break;
                 }
                 
                 int students;
                 cout << "Enter number of students to add (1-" << (MAX_STUDENTS - totalStudents) << "): ";
                 cin >> students;
                 
                 if (students < 1 || students > (MAX_STUDENTS - totalStudents)) {
                     cout << "Invalid number. Please try again." << endl;
                     break;
                 }
                 
                 float exam1, exam2, finalExam;
                 
                 for (int i = 0; i < students; i++) {
                     cout << "--- Student " << (totalStudents + 1) << " ---" << endl;
                     cout << "Enter Student ID: ";
                     cin >> studentIDs[totalStudents];
                     
                     cout << "Enter Exam 1 score (0-100): ";
                     while (!(cin >> exam1) || exam1 < 0 || exam1 > 100) {
                         if (!cin) {
                             cout << "A student's score must be a decimal number. Please try again: ";
                             cin.clear();
                             cin.ignore(10000, '\n');
                         } else {
                             cout << "Score must be between 0 and 100. Please try again: ";
                         }
                     }
                     exam1Scores[totalStudents] = exam1;
                     
                     cout << "Enter Exam 2 score (0-100): ";
                     while (!(cin >> exam2) || exam2 < 0 || exam2 > 100) {
                         if (!cin) {
                             cout << "A student's score must be a decimal number. Please try again: ";
                             cin.clear();
                             cin.ignore(10000, '\n');
                         } else {
                             cout << "Score must be between 0 and 100. Please try again: ";
                         }
                     }
                     exam2Scores[totalStudents] = exam2;
                     
                     cout << "Enter Final Exam score (0-100): ";
                     while (!(cin >> finalExam) || finalExam < 0 || finalExam > 100) {
                         if (!cin) {
                             cout << "A student's score must be a decimal number. Please try again: ";
                             cin.clear();
                             cin.ignore(10000, '\n');
                         } else {
                             cout << "Score must be between 0 and 100. Please try again: ";
                         }
                     }
                     finalExamScores[totalStudents] = finalExam;
                     cout << endl;
                     
                     // Calculate percentage and letter grade
                     percentages[totalStudents] = (exam1Scores[totalStudents] * 0.25) + (exam2Scores[totalStudents] * 0.25) + (finalExamScores[totalStudents] * 0.50);

                     int finalGrade = static_cast<int>(percentages[totalStudents]);
                     
                     int gradeCategory = finalGrade / 10;
                     
                     switch (gradeCategory) {
                         case 10:
                         case 9:
                             letterGrades[totalStudents] = 'A';
                             break;
                         case 8:
                             letterGrades[totalStudents] = 'B';
                             break;
                         case 7:
                             letterGrades[totalStudents] = 'C';
                             break;
                         case 6:
                             letterGrades[totalStudents] = 'D';
                             break;
                         default:
                             letterGrades[totalStudents] = 'F';
                             break;
                     }
                     
                     totalStudents++;
                 }
                 
                 cout << "Student data entered successfully!" << endl;
                 break;
             }
             
             case 2: {
                 // View statistics
                 if (totalStudents == 0) {
                     cout << "No student data available. Please enter student data first." << endl;
                     break;
                 }
                 
                 // Display student report
                 cout << "====================================================================================" << endl;
                 cout << "STUDENT GRADE REPORT" << endl;
                 cout << "====================================================================================" << endl;
                 cout << "ID      Exam 1    Exam 2    Final    Weighted Avg    Letter Grade" << endl;
                 cout << "--------------------------------------------------------------------" << endl;
                 
                 for (int i = 0; i < totalStudents; i++) {
                     cout << setw(7) << studentIDs[i] 
                          << setw(10) << fixed << setprecision(2) << exam1Scores[i]
                          << setw(9) << exam2Scores[i]
                          << setw(9) << finalExamScores[i]
                          << setw(15) << percentages[i]
                          << setw(15) << letterGrades[i] << endl;
                 }
                 cout << endl;
                 
                 // Calculate class statistics
                 float sum = 0;
                 float highest = percentages[0];
                 float lowest = percentages[0];
                 int studentsPassed = 0;
                 int gradeCount[5] = {0}; // A, B, C, D, F
                 
                 for (int i = 0; i < totalStudents; i++) {
                     sum += percentages[i];
                     if (percentages[i] > highest) highest = percentages[i];
                     if (percentages[i] < lowest) lowest = percentages[i];
                     if (percentages[i] >= 60) studentsPassed++;
                     
                     // Count letter grades for distribution
                     switch (letterGrades[i]) {
                         case 'A': gradeCount[0]++; break;
                         case 'B': gradeCount[1]++; break;
                         case 'C': gradeCount[2]++; break;
                         case 'D': gradeCount[3]++; break;
                         case 'F': gradeCount[4]++; break;
                     }
                 }
                 
                 float classAverage = sum / totalStudents;
                 float passingRate = (static_cast<float>(studentsPassed) / totalStudents) * 100;
                 
                 // Display class statistics
                 cout << "====================================================================================" << endl;
                 cout << "CLASS STATISTICS" << endl;
                 cout << "====================================================================================" << endl;
                 cout << "Total Students:        " << totalStudents << endl;
                 cout << "Average Final Grade:   " << fixed << setprecision(2) << classAverage << endl;
                 cout << "Highest Final Grade:   " << highest << endl;
                 cout << "Lowest Final Grade:    " << lowest << endl;
                 cout << "Students Passed:       " << studentsPassed << endl;
                 cout << "Pass Rate:             " << passingRate << "%" << endl;
                 cout << endl;
                 cout << "Grade Distribution:" << endl;
                 cout << "  A's: " << gradeCount[0] << endl;
                 cout << "  B's: " << gradeCount[1] << endl;
                 cout << "  C's: " << gradeCount[2] << endl;
                 cout << "  D's: " << gradeCount[3] << endl;
                 cout << "  F's: " << gradeCount[4] << endl;
                 cout << "====================================================================================" << endl;
                 break;
             }
             
             case 3: {
                 // Search for a specific student by ID
                 if (totalStudents == 0) {
                     cout << "No student data available. Please enter student data first." << endl;
                     break;
                 }
                 
                 int searchID;
                 cout << "Enter Student ID to search: ";
                 cin >> searchID;
                 
                 bool found = false;
                 for (int i = 0; i < totalStudents; i++) {
                     if (studentIDs[i] == searchID) {
                         found = true;
                         cout << "\n====================================================================================" << endl;
                         cout << "   STUDENT FOUND" << endl;
                         cout << "====================================================================================" << endl;
                         cout << "Student ID:           " << studentIDs[i] << endl;
                         cout << "Exam 1 Score:         " << fixed << setprecision(2) << exam1Scores[i] << endl;
                         cout << "Exam 2 Score:         " << exam2Scores[i] << endl;
                         cout << "Final Exam Score:     " << finalExamScores[i] << endl;
                         cout << "Weighted Average:     " << percentages[i] << endl;
                         cout << "Letter Grade:         " << letterGrades[i] << endl;
                         cout << "====================================================================================" << endl;
                         break;
                     }
                 }
                 
                 if (!found) {
                     cout << "Student ID " << searchID << " not found." << endl;
                 }
                 break;
             }
             
             case 4: {
                 cout << "Thank you for using the Grade Calculator System. Goodbye!" << endl;
                 exitProgram = true;
                 break;
             }
             
             default: {
                 cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
                 break;
             }
         }
         cout << endl;
     }
     
     return 0;
 }