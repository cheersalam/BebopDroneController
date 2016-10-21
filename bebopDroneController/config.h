#ifndef CONFIG_H
#define CONFIG_H

#define DRONE_IP_ADD            "127.0.0.1"
#define DRONE_COMM_PORT         5000  // not used
#define D2C_PORT                43210 // Drone to controller
#define C2D_PORT                54321 // controller to drone
#define RTP_PORT                5004  //stream port
#define RTCP_PORT               5005  // control port
#define DRONE_HANDSHAKE_REQ     "{ \"d2c_port\": 43210,\"controller_name\": \"linux\",\"controller_type\": \"linux\" }"

#endif //config
