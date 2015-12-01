#include <SFML/Graphics.hpp>
#include<iostream>

int main() {
	sf::RenderWindow window(sf::VideoMode(800,600), "This is a Test");
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::KeyPressed)

				switch (event.KeyPressed) {
				case sf::Keyboard::Escape:
					window.close();
					break;


			}
					window.close(); 

			
		}
	}
} 
 