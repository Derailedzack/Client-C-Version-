#pragma once
#include<SDL_net.h>
typedef enum CLIENT_ERROR {
	CLIENT_ERROR_FAILED_TO_CONNECT_TO_HOST,
	CLIENT_ERROR_FAILED_TO_INIT_NETWORKING,
	CLIENT_NO_ERROR
}CLIENT_ERROR;
CLIENT_ERROR current_client_error;
/*Only one of these will be implemented depending on the type of program it is*/
void SendClientVersion();
void SendServerVersion();
void CreateConnection();
void ConnectToServer(int ipaddress);
void HandleConnectionError();
void Init_Network();
void HandleDisconnection();
void SendData(void* data);
void OnConnectFailed();
void OnConnectSuccess();
void OnDisconnection();

/**
 * \brief Version Structure
 */
typedef struct Version {
	int major;
	int minor;
	int patch;
	const char* build_type;
	
}Version;
Version GetClientVersion();

