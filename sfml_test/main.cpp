#include <SFML/Graphics.hpp>
#include<iostream>

int main()
{
	sf:: RenderWindow window(sf::VideoMode(800,600), "This is a test");

	while (window.isOpen()) {

		sf::Event event;
		
		while (window.pollEvent(event)) {

			if (event.type == sf::Event::Closed) 
				window.close();
		
		if (event.type == sf::Event::MouseMoved)
		std::cout << "Mouse moved" << std::endl;

		if (event.type == sf::Event::KeyPressed ) {

			

			std::cout << "Key pressed" << (char)event.text.unicode << std::endl;
			
			

		}
		



			window.display();
		
		
		}
	}
    return 0;
	
}