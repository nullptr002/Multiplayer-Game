#include <SFML/Network.hpp>
#include <iostream>

// Server
int main()
{
	sf::TcpListener listener;
	sf::TcpSocket socket;

	unsigned int port = 3000;

	if (listener.listen(port) == sf::Socket::Status::Done)
		std::cout << "I'm listening..." << std::endl;

	if(listener.accept(socket) == sf::Socket::Status::Done)
		std::cout << "A client connected to me." << std::endl;

	std::cin.get();
	return 0;
}