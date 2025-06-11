#pragma once
// MESSAGE SIMBA_ALTITUDE_ORIENTATION PACKING

#define MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION 71


typedef struct __mavlink_simba_altitude_orientation_t {
 uint8_t TODO; /*<   TODO*/
} mavlink_simba_altitude_orientation_t;

#define MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_LEN 1
#define MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_MIN_LEN 1
#define MAVLINK_MSG_ID_71_LEN 1
#define MAVLINK_MSG_ID_71_MIN_LEN 1

#define MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_CRC 8
#define MAVLINK_MSG_ID_71_CRC 8



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SIMBA_ALTITUDE_ORIENTATION { \
    71, \
    "SIMBA_ALTITUDE_ORIENTATION", \
    1, \
    {  { "TODO", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_simba_altitude_orientation_t, TODO) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SIMBA_ALTITUDE_ORIENTATION { \
    "SIMBA_ALTITUDE_ORIENTATION", \
    1, \
    {  { "TODO", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_simba_altitude_orientation_t, TODO) }, \
         } \
}
#endif

/**
 * @brief Pack a simba_altitude_orientation message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param TODO   TODO
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_altitude_orientation_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t TODO)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_LEN];
    _mav_put_uint8_t(buf, 0, TODO);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_LEN);
#else
    mavlink_simba_altitude_orientation_t packet;
    packet.TODO = TODO;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_LEN, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_CRC);
}

/**
 * @brief Pack a simba_altitude_orientation message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param TODO   TODO
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_altitude_orientation_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t TODO)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_LEN];
    _mav_put_uint8_t(buf, 0, TODO);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_LEN);
#else
    mavlink_simba_altitude_orientation_t packet;
    packet.TODO = TODO;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_LEN, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_LEN);
#endif
}

/**
 * @brief Pack a simba_altitude_orientation message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param TODO   TODO
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_altitude_orientation_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t TODO)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_LEN];
    _mav_put_uint8_t(buf, 0, TODO);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_LEN);
#else
    mavlink_simba_altitude_orientation_t packet;
    packet.TODO = TODO;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_LEN, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_CRC);
}

/**
 * @brief Encode a simba_altitude_orientation struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param simba_altitude_orientation C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_altitude_orientation_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_simba_altitude_orientation_t* simba_altitude_orientation)
{
    return mavlink_msg_simba_altitude_orientation_pack(system_id, component_id, msg, simba_altitude_orientation->TODO);
}

/**
 * @brief Encode a simba_altitude_orientation struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param simba_altitude_orientation C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_altitude_orientation_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_simba_altitude_orientation_t* simba_altitude_orientation)
{
    return mavlink_msg_simba_altitude_orientation_pack_chan(system_id, component_id, chan, msg, simba_altitude_orientation->TODO);
}

/**
 * @brief Encode a simba_altitude_orientation struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param simba_altitude_orientation C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_altitude_orientation_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_simba_altitude_orientation_t* simba_altitude_orientation)
{
    return mavlink_msg_simba_altitude_orientation_pack_status(system_id, component_id, _status, msg,  simba_altitude_orientation->TODO);
}

/**
 * @brief Send a simba_altitude_orientation message
 * @param chan MAVLink channel to send the message
 *
 * @param TODO   TODO
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_simba_altitude_orientation_send(mavlink_channel_t chan, uint8_t TODO)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_LEN];
    _mav_put_uint8_t(buf, 0, TODO);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION, buf, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_LEN, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_CRC);
#else
    mavlink_simba_altitude_orientation_t packet;
    packet.TODO = TODO;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION, (const char *)&packet, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_LEN, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_CRC);
#endif
}

/**
 * @brief Send a simba_altitude_orientation message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_simba_altitude_orientation_send_struct(mavlink_channel_t chan, const mavlink_simba_altitude_orientation_t* simba_altitude_orientation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_simba_altitude_orientation_send(chan, simba_altitude_orientation->TODO);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION, (const char *)simba_altitude_orientation, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_LEN, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_CRC);
#endif
}

#if MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_simba_altitude_orientation_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t TODO)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, TODO);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION, buf, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_LEN, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_CRC);
#else
    mavlink_simba_altitude_orientation_t *packet = (mavlink_simba_altitude_orientation_t *)msgbuf;
    packet->TODO = TODO;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION, (const char *)packet, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_LEN, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_CRC);
#endif
}
#endif

#endif

// MESSAGE SIMBA_ALTITUDE_ORIENTATION UNPACKING


/**
 * @brief Get field TODO from simba_altitude_orientation message
 *
 * @return   TODO
 */
static inline uint8_t mavlink_msg_simba_altitude_orientation_get_TODO(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a simba_altitude_orientation message into a struct
 *
 * @param msg The message to decode
 * @param simba_altitude_orientation C-struct to decode the message contents into
 */
static inline void mavlink_msg_simba_altitude_orientation_decode(const mavlink_message_t* msg, mavlink_simba_altitude_orientation_t* simba_altitude_orientation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    simba_altitude_orientation->TODO = mavlink_msg_simba_altitude_orientation_get_TODO(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_LEN? msg->len : MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_LEN;
        memset(simba_altitude_orientation, 0, MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_LEN);
    memcpy(simba_altitude_orientation, _MAV_PAYLOAD(msg), len);
#endif
}
