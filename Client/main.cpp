#include <SFML/Network.hpp>
#include <iostream>

// Client
int main()
{
	sf::TcpSocket socket;

	sf::IpAddress ip = "localhost";
	unsigned int port = 3000;

	if (socket.connect(ip, port) == sf::Socket::Status::Done)
		std::cout << "I connected to the server!" << std::endl;

	std::cin.get();
	return 0;
}