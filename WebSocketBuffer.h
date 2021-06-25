#ifndef VUSER_WEBSOCKET_BUFFER_HEADER
#define VUSER_WEBSOCKET_BUFFER_HEADER

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive0[] = "{\"id\":1,\"result\":{\"status\":200}}";
long WebSocketReceiveLen0   = sizeof(WebSocketReceive0) - 1;	// (record-time: 32 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive1[] = "{\"method\":\"notice\",\"params\":{\"system\":\"storage\",\"meta\":{\"email\":\""
                        "{email}\"},\"events\":[{\"name\":\"change\",\"data\":{\"revision_prev\":2"
                        "02,\"revision_last\":203,\"checksum_prev\":3592956168,\"checksum_last\":40994619"
                        "56}}]}}";
long WebSocketReceiveLen1   = sizeof(WebSocketReceive1) - 1;	// (record-time: 215 bytes)

#endif
