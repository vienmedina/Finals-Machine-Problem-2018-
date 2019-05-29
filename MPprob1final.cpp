//Nowadays, software companies are producing classroom management software in order to aid school
//instructors or professors in assessing their students’ academic performances in class. As a newly built
//software company, you’ve decided to create your own version of a classroom management software in a
//form of an electronic class record that will suit the given specifications:
//A. The program will let the instructor to input 50 student names and their respective scores for each grade component.
//B. The students’ raw grades will be computed according to the following grade components
//Experiments
//- This component is composed of 4 experiments.
//- Each experiment is equal to 100 points and has a weight of 5%.
//20%
//Skills Tests
//- This component is composed of 4 skills tests.
//- Each skills test is equal to 100 points and has a weight of 5%.
//20%
//Machine Problems
//- This component is composed of 2 machine problems.
//- Each machine problem is equal to 100 points and has a weight of 10%.
//20%
//- Preliminary and Final Examinations are both
//equivalent to 100 points and are divided into two parts:
//Written Examination = Score / 30
//Practical Examination = Score / 70
//- Each major exam is equivalent to 20%
//C. The program will output the students’ final raw grades and their corresponding Grade Point Average (GPA) based on the transmutation table
//D. The program will determine if a student passed or failed the subject and will display the top 10 performing students in class.
#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
 	string student[50], name, temp;
 	int exp[4], counter = 4;
 	
	double totalexp, averageexp, percentexp;
	int st[4];
	
	double totalst, averagest, percentst; 
	int mp[2];
	
	double totalmp, averagemp, percentmp;
    int wp, pp, wf, pf, pe, fe;
    
    double averagem, totalm, percentagem;
    
    double GeneralAverage[50];
    float TransmutedGrade[50];
	double score;
	
		for(int i = 0; i < 50; i++) 
		{
			cout << "Enter name of student " << i + 1 << ": "; cin >> student[i];
		
	
	
	// EXPERIMENT*************************************************************************	
	cout << "\nEnter Experiment scores (Each Experiment is over 100 points only) " << endl;
	    for (counter = 0; counter < 4; counter ++)	
		{
            cout << "Experiment "<< counter + 1 << " = "; cin >> exp[counter];
	    }
    // Formula:
    totalexp = exp[0] + exp[1] + exp[2] + exp[3]; 
    averageexp = totalexp / counter;
    percentexp = averageexp * .20;
    
	    cout << "Raw average: " << averageexp << endl;
	    cout << "Average percent: " << percentexp << "%" << endl;
    	cout << endl;
 
 
 
 
 	// SKILLS TEST************************************************************************
	cout << "Enter Skills Test scores (Each ST is over 100 points only) " << endl;
	
	    for (counter = 0; counter < 4; counter ++)
        {
            cout << "Skills Test " << counter + 1 << " = "; cin >> st[counter];        
	    }
     // Formula:
    totalst = st[0] + st[1] + st[2] + st[3];
    averagest = totalst / counter;
    percentst = averagest * .20;
    
    	cout << "Raw average: " << averagest << endl;
    	cout << "Average percent: " << percentst << "%" << endl;
	    cout << endl;

    
    
    
	// MACHINE PROBLEM********************************************************************
	cout << "Enter Machine Problem scores (Each MP is over 100 points only)" << endl;
	
	      for (int counter = 0; counter < 2; counter ++)
        {
            cout << "Machine Problem " << counter + 1 << " = "; cin >> mp[counter];
	    }
  	 // Formula:
    totalmp = mp[0] + mp[1];
    averagemp = totalmp / 2;
    percentmp = averagemp * .20;
    
	    cout << "Raw average: " << averagemp << endl;
		cout << "Average percent: " << percentmp << "%" << endl;
		cout<< endl;

    
    
	// MAJOR EXAMINATION******************************************************************
    cout << "Enter Preliminary Exam Score (Written Exam is over 30, Practical Exam is over 70) " << endl;
    
            cout << "Written Examination: "; cin >> wp;
	    	cout << "Practical Examination: "; cin >> pp;
	    	
    cout << "\nFinal Exam Score (Written Exam is over 30, Practical Exam is over 70) " << endl;
    
           cout << "Written Examination: "; cin >> wf;
           cout << "Practical Examination: "; cin >> pf;
           
	 // Formula:
	pe = wp + pp;
	fe = wf + pf;
	
    cout << "\nPreliminary Exam = " << pe << endl;
    cout << "Final Exam = " << fe << endl;
    
     // Formula:
    totalm = pe + fe;
    averagem = (totalm / 2);
	percentagem = averagem * 0.40;
    
    	cout << "Raw average: " << averagem << endl;
    	cout << "Average percent: " << percentagem << "%" << endl;




	// FINAL GRADE TRANSMUTATION***********************************************************
	GeneralAverage[i] = (averageexp + averagest + averagemp + averagem) / counter;
    cout<< endl;
    cout<< "General Average = " << GeneralAverage[i] << endl;

    if ((GeneralAverage[i] >= 95.57) && (GeneralAverage[i] <= 100)){
	{
		TransmutedGrade[i] = 1.00;} 
		cout << "Final Grade: 1.00 - Passed" ;
	}
	else if ((GeneralAverage[i]>= 91.12) && (GeneralAverage[i] <= 95.56)){
	{
		TransmutedGrade[i] = 1.25;}	
		cout << "Final Grade: 1.25 - Passed" ;
	}
	else if ((GeneralAverage[i]>= 86.68) && (GeneralAverage[i] <= 91.11)){
	{
		TransmutedGrade[i] = 1.50;}	
		cout << "Final Grade: 1.50 - Passed" ;
	}
	else if ((GeneralAverage[i] >= 82.23) && (GeneralAverage[i] <= 86.67)){
	{
		TransmutedGrade[i] = 1.75;} 
		cout << "Final Grade: 1.75 - Passed" ;
	}
	else if ((GeneralAverage[i] >= 77.79) && (GeneralAverage[i] <= 82.22)){
	{
		TransmutedGrade[i] = 2.00;} 	
		cout << "Final Grade: 2.00 - Passed" ;
	}	
	else if ((GeneralAverage[i] >= 73.34) && (GeneralAverage[i] <= 77.78)){
	{
		TransmutedGrade[i] = 2.25;} 
		cout << "Final Grade: 2.25 - Passed" ;
	}
	else if ((GeneralAverage[i] >= 68.90) && (GeneralAverage[i] <= 73.33)){
	{
		TransmutedGrade[i] = 2.50;} 
		cout << "Final Grade: 2.50 - Passed" ;
	}
	else if ((GeneralAverage[i] >= 64.45) && (GeneralAverage[i] <= 68.89)){
	{
		TransmutedGrade[i] = 2.75;} 
		cout << "Final Grade: 2.75 - Passed" ;
	}
	else if ((GeneralAverage[i] >= 60.00) && (GeneralAverage[i] <= 64.44)){
	{
		TransmutedGrade[i] = 3.00;} 
		cout << "Final Grade: 3.00 - Passed" ;
	}
	else {
	{
		TransmutedGrade[i] = 5.00;}
		cout << "Final Grade: 5.00 - Failed. See you next term." ; 
	}
  	cout << "\n" << endl;
	}
	
	
	
	// GRADE TABLE
	cout << "NAME" << "\t\t" << "GENERAL AVERAGE" << "\t\t" << "FINAL GRADE" << "\t\t" << "PASSED/FAILED" << endl;
	for(int i = 0; i < 50; i++) 
	{
		cout << fixed << setprecision(2) << left;
		cout << student[i] << "\t\t" << GeneralAverage[i] << "\t\t\t" << TransmutedGrade[i] << "\t\t\t";
		if(TransmutedGrade[i] <= 3){
			cout << "PASSED" << endl;
	}
		else{
			cout << "FAILED" << endl;	
		}
		}
		
		
	// TOP TEN********************************************************************************
	for(int i = 0; i < 50; i++) 
	{
		for(int j = i + 1; j < 50; j++)
		{
			if(GeneralAverage[i] < GeneralAverage[j])
			{
				score = GeneralAverage[i];
				GeneralAverage[i] = GeneralAverage[j];
				GeneralAverage[j] = score;
				
				name = student[i];
				student[i] = student[j];
				student[j] = name;
			} 
		}
	
	}
	
	cout << "\nTop performing students: " << endl; // Outputting the top 10 students
	
	for(int i = 0; i < 10; i++)	
	{
		cout << "Top " << i + 1 << ": " << student[i] << endl; 
	}	
	
    _getch();
    return 0;
    }
