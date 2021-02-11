// student failed or passed.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    const int exam_pass_mark = 60;
    int student_score = 0;

    cout << "This program will take the student score as an input and will determine weather they have passed or failed, and if they failed, how much more score they needed to pass.\n"
        << "Please enter your score: ";
    
    while (student_score == 0)
    {
        cin >> student_score;
        if (student_score >= exam_pass_mark)
        {
            cout << "You have passed the exam with a score of " << student_score << ". You can move onto the next semester.\n";
            student_score = 0;
            cout << " Please enter another score: ";
        }
        else
        {
            cout << "You have failed the exam, you needed " << exam_pass_mark - student_score << " more points to pass the exam\n";
            student_score = 0;
            cout << " Please enter another score: ";
        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
