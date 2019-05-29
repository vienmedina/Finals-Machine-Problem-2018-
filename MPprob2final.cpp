//Create a program that would compute the following values based on the given sides of the triangle. Let the
//measurements of the sides be a user-input.
//A. Compute for all interior angles.
//B. Classify whether scalene, isosceles, or equilateral.
//C. Determine the area and perimeter.
//D. Classify whether acute triangle, right triangle, or obtuse triangle.
//E. Compute for length of apothem and circumcenter.
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main ()
{
	double sa, sb, sc, anglea, angleb, anglec, A, P, p, a, c;
	const double pi = 3.14159265358979323846; // This is more efficient than writing the same constant over and over, 
											  // plus this ensures the value can never change no matter what
											  
    // Part one
    // Computing for all interior angles.
	cout << "Please enter the length of side A: ";	cin >> sa; 
	cout << "Please enter the length of side B: ";	cin >> sb;
	cout << "Please enter the length of side C: ";	cin >> sc;
	// Computation for Angle A
	anglea = ((acos((pow(sc, 2) + pow(sa, 2) - pow(sb, 2)) / (2 * sc * sa)) *  180) / pi); // Observe proper placement of the parenthesis
	
	// Computation for Angle B
	angleb = ((acos((pow(sb, 2) + pow(sc, 2) - pow(sa, 2)) / (2 * sb * sc)) * 180) / pi); 
	
	// Computation for Angle C
	anglec = ((acos((pow(sa, 2) + pow(sb, 2) - pow(sc, 2)) / (2 * sa * sb)) * 180) / pi); 

	cout << "\nAngle A = " << anglea << endl << "Angle B = " << angleb << endl << "Angle C = " << anglec << endl; // Same line = more efficient
	
	// Part two
	// Classifying whether scalene, isosceles, or equilateral.
	cout << "\nClassification of the triangle by side:";

	if (sa == sb && sb == sc)
	   cout << "\nEquilateral Triangle\n";
	
	else if (sa == sb || sa == sc || sb == sc)
	   cout << "\nIsosceles Triangle\n";
	
	else 
	   cout << "\nScalene Triangle\n";
	
	// Part three
	// Computing for the area and the perimeter of the triangle
	P = sa + sb + sc;
	p = P / 2;
	A = sqrt(p * ((p-sa) * (p-sb) * (p-sc)));

	cout << "\nArea of the triangle = " << A << endl << "Perimeter of the triangle = " << P << endl;
	
	// Part four 
	// Classifying whether acute triangle, right triangle, or obtuse traingle.
	cout << "\nClassification of the triangle by angle:";		
	if (anglea < 90 && angleb < 90 && anglec < 90)				
	   cout << "\nAcute Triangle\n";
	
	else if (anglea == 90 || angleb == 90 || anglec == 90)
	   cout << "\nRight Triangle\n";
	
	else if (anglea > 90 || angleb > 90 || anglec > 90)
	   cout << "\nObtuse Triangle\n";
	
	else
		cout << "\nInvalid. Sum of angles of a triangle must equal to 180.";
	    
	// Part five
	// Computing for length of apothem and circumcenter.
	a = 2 * A / P;
	c = (sa * sb * sc) / sqrt((sa + sb + sc) * (sb + sc - sa) * (sa + sb - sc));
	
	cout << "\nApothem of the triangle = " << a << endl << "Circumcenter of the triangle = " << c << endl;
	

	_getch();
	return 0;

} 
