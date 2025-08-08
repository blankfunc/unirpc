#include <stdint.h>

typedef enum {
	BATCH		= 0,		// 特殊包：多包粘合
	HELLO		= 0x000001,	// C> 握手请求
	WINK		= 0x000002,	// S> 回复握手

} PacketType;

typedef struct {
	uint32_t packet_id;		// 包 ID
	uint32_t resent_count;	// 重发次数
} MetaData;

typedef struct {
	PacketType head;
	MetaData meta;
} Packet;