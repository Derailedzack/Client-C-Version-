#pragma once
#include"Main.h"
typedef enum {
	CLIENT_ERROR_FAILED_TO_CONNECT_TO_HOST,
}CLIENT_ERROR;

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
void OnConnectSucess();
void OnDisconnection();

typedef struct {
	int major;
	int minor;
	int patch;
	const char* Build_Type;
}Version;
Version GetClientVersion();

