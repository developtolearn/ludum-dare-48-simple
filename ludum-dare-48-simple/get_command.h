#pragma once


string get_command() {
	cout << "enter command:\n>>> ";
	string command;
	getline(cin, command);
	for (int i = 0; i < command.length(); i++)
		command[i] = toupper(command[i]);
	return command;
}