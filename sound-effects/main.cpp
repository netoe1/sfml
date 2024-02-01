#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window.hpp>

sf::Music music;

int main()
{
    sf::Window window(sf::VideoMode(800, 600), "Aperte um botao caralho.");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::KeyPressed)
            {
                if (event.key.code == sf::Keyboard::S)
                    music.stop();
                else if (event.key.code == sf::Keyboard::Num1)
                {
                    music.openFromFile("./sounds/1.ogg");
                    music.play();
                }
                else if (event.key.code == sf::Keyboard::Num2)
                {
                    music.openFromFile("./sounds/2.ogg");
                    music.play();
                }
                else if (event.key.code == sf::Keyboard::Num3)
                {
                    music.openFromFile("./sounds/3.ogg");
                    music.play();
                }
            }
            else if (event.type == sf::Event::KeyReleased)
            {
                // Pode adicionar lógica aqui se necessário
            }
        }
    }

    return 0;
}
