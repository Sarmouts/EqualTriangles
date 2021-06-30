// EqualTriangles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
	using namespace std;



	int main()
	{
		float b, c, d, r;
		string a, y;




		cout << "orthogonio or no(don't know) " << "\n";
		cin >> a;
		if (a == "orthogonio")
		{
			cout << " Exoun dyo pleures idiou eidous mia pros mia ises(yes or no)" << "\n";
			cin >> y;
			if (y == "yes")
			{
				cout << " The tiangles are equal " << "\n";;
			}
			if (y == "no")
			{
				cout << "You got from the one triangle the 1.ypotinoysa, 2.kaueth equal with " << " the 3.ypotinoysa, 4.kaueth from the other triangle " << "\n";
				cin >> b;
				cin >> c;
				if (b == 1 && c == 3 || b == 2 && c == 4)
				{
					cout << " And you got from the one triangle the 1.proskeimenh gon, 2.the apenanti gon equal with " << "the 3.proskeimenh gon, 4.the apenanti " << "\n";
					cin >> d;
					cin >> r;
					if (d == 1 && r == 3 || d == 2 && r == 4)
					{
						cout << " Your triangles are equal " << "\n";



					}

					if (d == 1 && r == 4 || d == 2 && r == 3)
					{
						cout << " Your triangles are not equal " << "\n";



					}





				}




				if (b == 2 && c == 3 || b == 1 && c == 4)
				{
					cout << " Your triangles are not equal " << "\n";





				}



			}



		}
		if (a == "no")
		{
			cout << " How many plevles they have one by one equals " << "\n";
			cin >> b;



			if (b == 3)
			{
				cout << " The triangles are equal " << "\n";
			}
			if (b == 2)
			{
				cout << " Do they have thn periexomenh gonia of the equal plevres one by one equal(answer with yes or no) " << "\n";
				cin >> y;
				if (y == "yes")
				{
					cout << " The triangles are equal " << "\n";
				}
				if (y == "no")
				{
					cout << " The triangles are not equal " << "\n";
				}



			}
			if (b == 1)
			{
				cout << " Do they have tis proskeimenes gonies of the equal plevres one by one equal(answer with yes or no) " << "\n";
				cin >> y;
				if (y == "yes")
				{
					cout << " The triangles are equal " << "\n";
				}
				if (y == "no")
				{
					cout << " The triangles are not equal " << "\n";
				}



			}
			if (b == 0)
			{
				cout << " The triangles are not equal " << "\n";




			}






		}








		return 0;

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
