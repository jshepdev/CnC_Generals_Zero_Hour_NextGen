#pragma once
#pragma once

enum ENetworkConnectionState
{
	NOT_CONNECTED,
	CONNECTED_DIRECT,
	CONNECTED_RELAYED
};

enum ENetworkMeshType : uint8_t
{
	NETWORK_ROOM = 0,
	GAME_LOBBY = 1
};

class NetworkMemberBase
{
public:
	AsciiString m_strName = "NO_NAME";
	ENetworkConnectionState m_connectionState = ENetworkConnectionState::NOT_CONNECTED;
	bool m_bIsHost = false;

	bool m_bIsReady = false;
};