#include "Window.h"

int main(int argc, char* argv[])
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Game");
	Window* w = new Window(&window);
	w->Update();
}