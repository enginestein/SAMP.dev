#include "SAMPFunctions.hpp"
#include "GTAFunctions.hpp"
#include <Shared/PipeMessages.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/scope_exit.hpp>

int Client::SAMPFunctions::ReadGTACmdArgument(const char *option, char *&str, const int max_len) {
	auto *szCommandLine = new char[513];
	ZeroMemory(szCommandLine, 513);

	if (GTAFunctions::GetGTACommandLine(szCommandLine, 512) == 0) {
		delete[] szCommandLine;
		return 0;
	}

	char *context = nullptr;
	auto *token = strtok_s(szCommandLine, " ", &context);

	while (token != nullptr) {
		token = strtok_s(nullptr, " ", &context);
		if (strcmp(token, option) == 0)
			break;
	}

	if (token != nullptr)
	{
		token = strtok_s(nullptr, " ", &context);
		strcpy_s(str, max_len, token);
	}

	delete[] szCommandLine;
	return token != nullptr;
}

EXPORT int Client::SAMPFunctions::GetServerIP(char *&ip, const int max_len)
{
	return ReadGTACmdArgument("-h", ip, max_len);
}

EXPORT int Client::SAMPFunctions::GetServerPort()
{
	auto *portStr = new char[7];
	ZeroMemory(portStr, 7);

	BOOST_SCOPE_EXIT_ALL(portStr) {
		delete[] portStr;
	};

	if (ReadGTACmdArgument("-p", portStr, 6)) {
		errno = 0;
		const int port = strtol(portStr, nullptr, 10);
		if (errno != 0)
			return -1;
		return port;
	}
	
	return -1;
}

EXPORT int Client::SAMPFunctions::SendChat(const char *msg)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::SendChat << std::string(msg);

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::SAMPFunctions::ShowGameText(const char *msg, int time, int style)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::ShowGameText << std::string(msg) << time << style;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::SAMPFunctions::AddChatMessage(const char *msg)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::AddChatMessage << std::string(msg);

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::SAMPFunctions::ShowDialog(int id, int style, const char * caption, const char * text, const char * button, const char * button2)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::ShowDialog << id << style << std::string(caption) << std::string(text) << std::string(button) << std::string(button2);

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::SAMPFunctions::GetPlayerNameByID(int id, char *&playername, int max_len)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::GetPlayerNameByID << id;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
	{
		std::string out;
		serializerOut >> out;

		if (!out.length())
			return 0;

		strcpy_s(playername, max_len, out.c_str());
		return 1;
	}

	return 0;
}

EXPORT int Client::SAMPFunctions::GetPlayerIDByName(const char *name)
{
	for (int i = 0; i < 1004; i++)
	{
		char szBuffer[32] = { 0 };
		char *ptr = szBuffer;

		if (GetPlayerNameByID(i, ptr, sizeof(szBuffer) - 1))
			if (boost::iequals(std::string(szBuffer), std::string(name)))
				return i;
	}

	return -1;
}

EXPORT int Client::SAMPFunctions::GetPlayerName(char *&playername, const int max_len)
{
	return ReadGTACmdArgument("-n", playername, max_len);
}

EXPORT int Client::SAMPFunctions::GetPlayerId()
{
	auto *szName = new char[26];
	ZeroMemory(szName, 26);

	GetPlayerName(szName, 25);

	const int iID = GetPlayerIDByName(szName);

	delete[] szName;

	return iID;
}

EXPORT int Client::SAMPFunctions::IsChatOpen()
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::IsChatOpen;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::SAMPFunctions::IsDialogOpen()
{
	SERVER_CHECK(0)

		Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::IsDialogOpen;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}
