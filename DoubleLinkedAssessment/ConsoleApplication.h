#pragma once
class ConsoleApplication
{
public:
	ConsoleApplication();
	~ConsoleApplication();

	void Run();
	void ProcessMainMenuInput();
	void DisplayMainMenu();
protected:

	bool m_quit = false;

private:
};

