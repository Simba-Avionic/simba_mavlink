#pragma once
// MESSAGE SIMBA_HEARTBEAT_1 PACKING

#define MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1 74


typedef struct __mavlink_simba_heartbeat_1_t {
 uint64_t timestamp; /*<  Timestamp (time since system boot)*/
 uint8_t computer_status; /*<  Status of computer*/
} mavlink_simba_heartbeat_1_t;

#define MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_LEN 9
#define MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_MIN_LEN 9
#define MAVLINK_MSG_ID_74_LEN 9
#define MAVLINK_MSG_ID_74_MIN_LEN 9

#define MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_CRC 150
#define MAVLINK_MSG_ID_74_CRC 150



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SIMBA_HEARTBEAT_1 { \
    74, \
    "SIMBA_HEARTBEAT_1", \
    2, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_simba_heartbeat_1_t, timestamp) }, \
         { "computer_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_simba_heartbeat_1_t, computer_status) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SIMBA_HEARTBEAT_1 { \
    "SIMBA_HEARTBEAT_1", \
    2, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_simba_heartbeat_1_t, timestamp) }, \
         { "computer_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_simba_heartbeat_1_t, computer_status) }, \
         } \
}
#endif

/**
 * @brief Pack a simba_heartbeat_1 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  Timestamp (time since system boot)
 * @param computer_status  Status of computer
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_heartbeat_1_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, uint8_t computer_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, computer_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_LEN);
#else
    mavlink_simba_heartbeat_1_t packet;
    packet.timestamp = timestamp;
    packet.computer_status = computer_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_MIN_LEN, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_LEN, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_CRC);
}

/**
 * @brief Pack a simba_heartbeat_1 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  Timestamp (time since system boot)
 * @param computer_status  Status of computer
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_heartbeat_1_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp, uint8_t computer_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, computer_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_LEN);
#else
    mavlink_simba_heartbeat_1_t packet;
    packet.timestamp = timestamp;
    packet.computer_status = computer_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_MIN_LEN, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_LEN, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_MIN_LEN, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_LEN);
#endif
}

/**
 * @brief Pack a simba_heartbeat_1 message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp  Timestamp (time since system boot)
 * @param computer_status  Status of computer
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_heartbeat_1_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,uint8_t computer_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, computer_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_LEN);
#else
    mavlink_simba_heartbeat_1_t packet;
    packet.timestamp = timestamp;
    packet.computer_status = computer_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_MIN_LEN, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_LEN, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_CRC);
}

/**
 * @brief Encode a simba_heartbeat_1 struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param simba_heartbeat_1 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_heartbeat_1_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_simba_heartbeat_1_t* simba_heartbeat_1)
{
    return mavlink_msg_simba_heartbeat_1_pack(system_id, component_id, msg, simba_heartbeat_1->timestamp, simba_heartbeat_1->computer_status);
}

/**
 * @brief Encode a simba_heartbeat_1 struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param simba_heartbeat_1 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_heartbeat_1_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_simba_heartbeat_1_t* simba_heartbeat_1)
{
    return mavlink_msg_simba_heartbeat_1_pack_chan(system_id, component_id, chan, msg, simba_heartbeat_1->timestamp, simba_heartbeat_1->computer_status);
}

/**
 * @brief Encode a simba_heartbeat_1 struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param simba_heartbeat_1 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_heartbeat_1_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_simba_heartbeat_1_t* simba_heartbeat_1)
{
    return mavlink_msg_simba_heartbeat_1_pack_status(system_id, component_id, _status, msg,  simba_heartbeat_1->timestamp, simba_heartbeat_1->computer_status);
}

/**
 * @brief Send a simba_heartbeat_1 message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp  Timestamp (time since system boot)
 * @param computer_status  Status of computer
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_simba_heartbeat_1_send(mavlink_channel_t chan, uint64_t timestamp, uint8_t computer_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, computer_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1, buf, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_MIN_LEN, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_LEN, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_CRC);
#else
    mavlink_simba_heartbeat_1_t packet;
    packet.timestamp = timestamp;
    packet.computer_status = computer_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1, (const char *)&packet, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_MIN_LEN, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_LEN, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_CRC);
#endif
}

/**
 * @brief Send a simba_heartbeat_1 message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_simba_heartbeat_1_send_struct(mavlink_channel_t chan, const mavlink_simba_heartbeat_1_t* simba_heartbeat_1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_simba_heartbeat_1_send(chan, simba_heartbeat_1->timestamp, simba_heartbeat_1->computer_status);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1, (const char *)simba_heartbeat_1, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_MIN_LEN, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_LEN, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_CRC);
#endif
}

#if MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_simba_heartbeat_1_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, uint8_t computer_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, computer_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1, buf, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_MIN_LEN, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_LEN, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_CRC);
#else
    mavlink_simba_heartbeat_1_t *packet = (mavlink_simba_heartbeat_1_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->computer_status = computer_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1, (const char *)packet, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_MIN_LEN, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_LEN, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_CRC);
#endif
}
#endif

#endif

// MESSAGE SIMBA_HEARTBEAT_1 UNPACKING


/**
 * @brief Get field timestamp from simba_heartbeat_1 message
 *
 * @return  Timestamp (time since system boot)
 */
static inline uint64_t mavlink_msg_simba_heartbeat_1_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field computer_status from simba_heartbeat_1 message
 *
 * @return  Status of computer
 */
static inline uint8_t mavlink_msg_simba_heartbeat_1_get_computer_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Decode a simba_heartbeat_1 message into a struct
 *
 * @param msg The message to decode
 * @param simba_heartbeat_1 C-struct to decode the message contents into
 */
static inline void mavlink_msg_simba_heartbeat_1_decode(const mavlink_message_t* msg, mavlink_simba_heartbeat_1_t* simba_heartbeat_1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    simba_heartbeat_1->timestamp = mavlink_msg_simba_heartbeat_1_get_timestamp(msg);
    simba_heartbeat_1->computer_status = mavlink_msg_simba_heartbeat_1_get_computer_status(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_LEN? msg->len : MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_LEN;
        memset(simba_heartbeat_1, 0, MAVLINK_MSG_ID_SIMBA_HEARTBEAT_1_LEN);
    memcpy(simba_heartbeat_1, _MAV_PAYLOAD(msg), len);
#endif
}
