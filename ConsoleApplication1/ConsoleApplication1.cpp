//MAKE A POPUP VIRUS USING C++

#include <iostream>
#include<thread> 
#include <Windows.h>

#include<random>

void createRegularPopup()
{
	MessageBoxA(NULL, "So you are a big boy??\n Press the button", "BigBoy Popup", MB_OKCANCEL | MB_ICONASTERISK);
	//how do I make this bigger?????
}

void createVirusPopup()
{
	// the first parameter is the handle to the owner window, we set it to NULL to make it a top-level window
	// the second parameter is the text to be displayed in the popup
	// the third parameter is the caption of the popup
	//the fourth parameter is the type of the popup, we use MB_OK to display an OK button and MB_ICONWARNING to display a warning icon
	// MB is a macro that defines the type of the popip
	// a macro is a preprocessor directive that defines a constant value or a function-like macro that can be used in the code
	// a preprocessor directive is a line of code that is processed by the preprocessor before the actual compilation of the code
	// 
	// this line of code will create a popup with the specified text, caption, and type
	MessageBoxA(NULL, "This is a popup virus!\n HAHAAHAH NOOB MAN BOY!!!!", "Popup Virus", MB_OK | MB_ICONWARNING); 
	
	// disable the ability to close the popup by clicking the X button

	// disable the ability to close the popup by clicking the ok button
	
}

void playSFX()
{

	for (int i = 0; i <= 10; i++)
	{
		system("LaughSFX.mp3"); // play a sound effect when the popup is created
		Sleep(1'500); // sleep 1.5 seconds
	}
}


int main()
{
	createRegularPopup(); // creates the regular popup and waits for input on the ok or cancel
	
	//how to play the SFX and display the popup at the same time?????

	playSFX(); // laugh at the fool noob boy
	
	std::thread firstThread; 

	createVirusPopup(); // display popup and disable mouse input and ability to close program


	std::thread secondThread; 
	//createur
	createVirusPopup(); 

	
}
