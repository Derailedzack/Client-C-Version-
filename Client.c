
#include "Client.h"

Version Client_version =  {0,0,0,"Development Build"};
Version GetClientVersion()
{
	return Client_version;
}

void SendClientVersion()
{
}

void SendServerVersion()
{
}

void CreateConnection()
{
}

void ConnectToServer(int ip_address)
{
}

void HandleConnectionError()
{
}

void Init_Network()
{
	if(SDLNet_Init() == -1){
		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,"Project","SDL 2 Net failed to init!",NULL);
		//current_client_error = CLIENT_ERROR_FAILED_TO_INIT_NETWORKING;
	}else{

	}
}

void HandleDisconnection()
{
}

void SendData(void* data)
{
}

void OnConnectFailed()
{
}

void OnConnectSuccess()
{
}

void OnDisconnection()
{
}


