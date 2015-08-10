#ifndef _WINDOW_
#define _WINDOW_

#include <string>
#include <SFML/Graphics.hpp>

class Window
{
public:
	Window();
	Window(sf::RenderWindow* window);
	void InitWindow(int x, int y, std::string title);
	void Render();
	void Update();
	~Window();

private:
	sf::RenderWindow *window;
};

#endif