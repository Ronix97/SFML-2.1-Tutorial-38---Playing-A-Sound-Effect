#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(600, 600), "SFML WORK!");

	sf::SoundBuffer buffer;

	if (!buffer.loadFromFile("Collide.wav"))
	{
		std::cout << "ERROR" << std::endl;
	}

	sf::Sound sound;

	sound.setBuffer(buffer);

	sound.play();

	while (window.isOpen())
	{
		sf::Event event;

		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();

				break;

			}
		}

		window.clear();

		window.display();
	}
}