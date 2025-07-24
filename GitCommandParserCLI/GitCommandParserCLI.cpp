#include "includes.cpp";

class PaserCommands {

public:

	void createCommands(string commandMessage) {

		
		cout << commandMessage << endl;

	}

};


class GetCommandsParsing : PaserCommands {

public:

	void getArgs(string args) {
		
		ShellExecuteA(nullptr, "open", args.c_str(), nullptr, nullptr, SW_SHOWDEFAULT);

		if (sizeof(args) == 0 && args == "Add") {


			string args;
			cin >> args;

			system(args.c_str());

		}

		if (sizeof(args) == 0 && args == "commit") {

			string args;
			cin >> args;

			system(args.c_str());

		}
	

		if (sizeof(args) == 0 && args == "/clone") {

			string args;
			cin >> args;

			system(args.c_str());

		}


	}


};

static bool isEmpty(string message) {

	return message == "";


}

int main() {

	cout << "========================================" << endl;;
	cout << "-> Welcome To Git Commands Parser: " << endl;
	cout << "========================================" << endl;

	cout << endl;

	PaserCommands Commands;
	Commands.createCommands("Enter Type of Command: ");


	string args;
	cin >> args;

	if (isEmpty(args)) {

		cout << "EMPTY..." << endl;

	}


	GetCommandsParsing CommandsParser;
	CommandsParser.getArgs(args);


	system("pause > 0");
	return 0;
}