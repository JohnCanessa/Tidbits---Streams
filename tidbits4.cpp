#include "pch.h"

#include <Windows.h>

using namespace std;


int main()
{


#ifdef CAKE
	// **** writing to the cout I/O stream ****
	const string greeting = "Hello World!!!";

    cout << "Hello World!!!\n";
	cout << "Hello world!!!" << endl;
	cout << greeting << endl << endl;

	// **** writting to cout one byte / character at a time ****
	cout.put('J');
	cout.put('o');
	cout.put('h');
	cout.put('n');
	cout.put('!').put('!').put('!');
	cout.put('\n');
	cout << endl;

	// **** flusing the stream buffer ****
	cout << "Hello";
	Sleep(1000);
	
	cout << " John !!!\n";
	Sleep(1000);

	cout << flush;
	Sleep(1000);
#endif


#ifdef CAKE
	string firstName;

	// **** just read the first name, e.g., John Canessa ****
	cout << "please enter your first name: ";
	cin >> firstName;
	cout << "your name is ==>" << firstName << "<==\n";

	// **** clear cin (e.g., discard " Canessa" ****
	cin.ignore(INT_MAX, '\n');

	// **** reads the entire full name, e.g., John Canessa ****
	string fullName;

	cout << "please enter your full name: ";
	getline(cin, fullName);
	cout << "your full name is ==>" << fullName << "<==\n";

	// **** now in a loop ****
	for (int i = 0; i < 3; i++) {
		cout << "please enter your full name: ";
		getline(cin, fullName);
		cout << "your full name is ==>" << fullName << "<==\n";
	}
#endif
	

#ifdef CAKE
	// **** loop reading from cin one character at a time (ctrl-z to end) ****
	char c;

	cout << "please enter some text: ";
	cin >> c;
	cout << "\nblocked until \\n was entered\n";

	do {
		cout << c;
		cin >> c;
	} while (!cin.eof());
	cout << endl;
#endif


#ifdef CAKE
	// **** now in C ****
	char c;
	printf("please enter some text: ");

	for (bool done = false; !done; ) {
		c = fgetc(stdin);
		if (c == 0x1A) {
			done = true;
			continue;
		}
		printf("%c", c);
	}

	printf("\nall done !!!\n");
#endif


#ifdef CAKE
	// **** ****
	Person person = Person("John", "C", "Canessa", 21);
	cout << "person: " << person.toString() << endl;
	cout << endl;
	cout << "person: " << person.tostring() << endl;
#endif


#ifdef _DEBUG
	// **** values in file:  100 90 80 70 60  (all grades on a single line) ****

	const string	gradesFileName = "c:\\temp\\grades.txt";

	ifstream		gradeFile;

	stringstream	grades;

	int				grade,
					total = 0;

	// **** open the input file stream ****
	gradeFile.open(gradesFileName);

	// **** read the grades into line ****
	string line;
	getline(gradeFile, line);
	cout << "line ==>" << line << "<==" << endl;

	// **** close the input file stream ****
	gradeFile.close();

	// **** put the grades into the string stream ****
	grades << line;

	// **** process the grades ****
	int i;
	for (i = 0; true; ) {

		// **** check if the string stream is empty ****
		if (grades.rdbuf()->in_avail() == 0)
			break;

		// **** ****
		i++;

		// **** extract the next grade and process it ****
		grades >> grade;
		cout << "grade: " << grade << endl;
		total += grade;
	}
	cout << "i: " << i << endl;

	// **** compute and display the average ****
	double average;
	average = total / i;
	cout << "average: " << average << endl;
#endif


	// **** ****
	return 0;
}
