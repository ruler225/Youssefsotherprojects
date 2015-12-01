#include<SFML/Graphics.hpp>
#include<iostream>
#include<fstream>


void movementevents(sf::CircleShape& ball, sf::Event& event, sf::Vector2f& ballposition) {
	if (event.type == sf::Event::KeyPressed) {
		
		if (event.key.code == sf::Keyboard::Up) 
			ballposition.y -= 5;
			
		if (event.key.code == sf::Keyboard::Down)
			ballposition.y += 5;

		if (event.key.code == sf::Keyboard::Right)
			ballposition.x += 5;

		if (event.key.code == sf::Keyboard::Left)
			ballposition.x -= 5;

	}

}

void essentialeventtasks(sf::RenderWindow& window, sf::Event& event) {
	if (event.type == sf::Event::KeyPressed) {

		if (event.key.code == sf::Keyboard::Escape)
			window.close();

	}

	
	if (event.type == sf::Event::Closed)
		window.close();
}





int main() {
	sf::RenderWindow window(sf::VideoMode(800, 600), "Bouncing Ball", sf::Style::Close);
	
		window.setFramerateLimit(30);	//This sets the frame rate limit to 30 in order to prevent strain on the video card
	
		sf::Vector2f ballposition(400, 300);
		sf::Vector2f paddleposition(5, 300);
		sf::CircleShape ball;
		sf::RectangleShape paddle;
		ball.setOrigin(5, 5);
		paddle.setOrigin(5, 20);
	
	while (window.isOpen()) {
		sf::Event event;
		
		if ((ballposition.x == paddleposition.x - 5 || ballposition.x == paddleposition.x + 5) && (ballposition.y == paddleposition.y + 20 || ballposition.y == paddleposition.y - 20))
			ballposition.x += 5;
		
		ball.setPosition(ballposition);
		ball.setFillColor(sf::Color::Red);
		ball.setOutlineColor(sf::Color::Black);
		ball.setOutlineThickness(2);
		ball.setRadius(5);
		
		paddle.setPosition(paddleposition);
		paddle.setFillColor(sf::Color::Black);
		paddle.setSize(sf::Vector2f(10, 40));

		window.pollEvent(event);
		essentialeventtasks(window, event);
		movementevents(ball, event, ballposition);

		if (ballposition.x == 0)
			ballposition.x += 5;

		if (ballposition.x == 800)
			ballposition.x -= 5;
		
		
		window.draw(ball);
		window.draw(paddle);
		window.display();
	

		window.clear(sf::Color::Green);

	

		

	
		}


}

