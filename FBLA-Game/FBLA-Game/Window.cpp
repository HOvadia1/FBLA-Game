#include "Window.h"

Window::Window()
{
	this->window = nullptr;
}

Window::Window(sf::RenderWindow* window)
{
	this->window = window;
}

void Window::Render()
{
	this->window->clear();
	this->window->display();
}

void Window::Update()
{
	if (this->window != nullptr)
	{
		while (this->window->isOpen())
		{
			sf::Event mainEvent;

			while (this->window->pollEvent(mainEvent))
			{
				if (mainEvent.type == sf::Event::Closed)
					this->window->close();
			}

			Render();
		}
	}
}

Window::~Window()
{
	delete this->window;
}