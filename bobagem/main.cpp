#include <SFML/Audio.hpp>
#include <iostream>

sf::Music music;

int main(void)
{
    if (!music.openFromFile("./sound.ogg"))
    {
        std::cout << "Couldn't find audio to play..." << std::endl;
    }

    while (true)
    {
        music.play();
        while (music.getStatus() == sf::Music::Playing)
        {
        }
        music.stop();
    }

    return 0;
}