/*Name
* Class etc...
*/

#include <iostream>

using namespace std;

int main()
{
//Output schedule to screen
const string m = "Monday";
const string t = "Tuesday";
const string w = "Wednesday";
const string th = "Thursday";
const string f = "Friday";
const string fct = "8:20-9:20"; //fct = first class time
const string sct = "10:00-11:00"; // sct = second class time
const string fcn = "Python Programming"; // fcn = first class name
const string scn = "Principles of Macroeconomics"; // scn = second class name
const string tcn = "C++"; // tcn = thrid class name

cout << "Schedule" << endl;
cout << m << "\t\t" << fct <<"\t" << scn << "\t" << sct << "\t" << tcn << endl;
cout << t << "\t\t" << fct <<"\t" << fcn << "\t\t" << sct << "\t" << tcn << endl;
cout << w << "\t" << fct << "\t" << scn << "\t" << sct << "\t" << tcn << endl;
cout << th << "\t" << fct << "\t" << fcn << "\t\t" << sct << "\t" << tcn << endl;
cout << f << "\t\t" << fct << "\t" << scn << "\t" << sct << "\t" << tcn << endl;

cout << "\n\nCheckerboard" << endl;
cout << "\n\t\t*" << "\t\t*" << "\t\t*" << "\t\t*" << endl;
cout << "\n\n\t*" << "\t\t*" << "\t\t*" << "\t\t*" << endl;
cout << "\n\n\t\t*" << "\t\t*" << "\t\t*" << "\t\t*" << endl;
cout << "\n\n\t*" << "\t\t*" << "\t\t*" << "\t\t*" << endl;
cout << "\n\n\t\t*" << "\t\t*" << "\t\t*" << "\t\t*" << endl;
cout << "\n\n\t*" << "\t\t*" << "\t\t*" << "\t\t*" << endl;
cout << "\n\n\t\t*" << "\t\t*" << "\t\t*" << "\t\t*" << endl;
cout << "\n\n\t*" << "\t\t*" << "\t\t*" << "\t\t*" << endl;

return 0;
}