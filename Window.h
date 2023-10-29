#pragma once
#include <allegro5/allegro5.h>

class Window 
{
private:
	void installs();
	void createWindow();
	void createEventQueue();
	void setupImgui();

public:
	ALLEGRO_DISPLAY* display;
	ALLEGRO_EVENT_QUEUE* queue;
	ALLEGRO_EVENT event;
	Window();
	void cleanExit();
	bool getEvent();
	void render();
};