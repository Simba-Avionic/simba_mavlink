#pragma once
// MESSAGE SIMBA_GS_HEARTBEAT PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT 74


typedef struct __mavlink_simba_gs_heartbeat_t {
 uint64_t timestamp; /*<  Timestamp (system uptime in ms)*/
 uint8_t values; /*<  GS buttons bitmask */
} mavlink_simba_gs_heartbeat_t;

#define MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_LEN 9
#define MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_MIN_LEN 9
#define MAVLINK_MSG_ID_74_LEN 9
#define MAVLINK_MSG_ID_74_MIN_LEN 9

#define MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_CRC 75
#define MAVLINK_MSG_ID_74_CRC 75



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SIMBA_GS_HEARTBEAT { \
    74, \
    "SIMBA_GS_HEARTBEAT", \
    2, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_simba_gs_heartbeat_t, timestamp) }, \
         { "values", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_simba_gs_heartbeat_t, values) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SIMBA_GS_HEARTBEAT { \
    "SIMBA_GS_HEARTBEAT", \
    2, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_simba_gs_heartbeat_t, timestamp) }, \
         { "values", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_simba_gs_heartbeat_t, values) }, \
         } \
}
#endif

/**
 * @brief Pack a simba_gs_heartbeat message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  Timestamp (system uptime in ms)
 * @param values  GS buttons bitmask 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_gs_heartbeat_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, uint8_t values)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, values);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_LEN);
#else
    mavlink_simba_gs_heartbeat_t packet;
    packet.timestamp = timestamp;
    packet.values = values;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_LEN, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_CRC);
}

/**
 * @brief Pack a simba_gs_heartbeat message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  Timestamp (system uptime in ms)
 * @param values  GS buttons bitmask 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_gs_heartbeat_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp, uint8_t values)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, values);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_LEN);
#else
    mavlink_simba_gs_heartbeat_t packet;
    packet.timestamp = timestamp;
    packet.values = values;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_LEN, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_LEN);
#endif
}

/**
 * @brief Pack a simba_gs_heartbeat message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp  Timestamp (system uptime in ms)
 * @param values  GS buttons bitmask 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_gs_heartbeat_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,uint8_t values)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, values);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_LEN);
#else
    mavlink_simba_gs_heartbeat_t packet;
    packet.timestamp = timestamp;
    packet.values = values;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_LEN, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_CRC);
}

/**
 * @brief Encode a simba_gs_heartbeat struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param simba_gs_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_gs_heartbeat_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_simba_gs_heartbeat_t* simba_gs_heartbeat)
{
    return mavlink_msg_simba_gs_heartbeat_pack(system_id, component_id, msg, simba_gs_heartbeat->timestamp, simba_gs_heartbeat->values);
}

/**
 * @brief Encode a simba_gs_heartbeat struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param simba_gs_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_gs_heartbeat_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_simba_gs_heartbeat_t* simba_gs_heartbeat)
{
    return mavlink_msg_simba_gs_heartbeat_pack_chan(system_id, component_id, chan, msg, simba_gs_heartbeat->timestamp, simba_gs_heartbeat->values);
}

/**
 * @brief Encode a simba_gs_heartbeat struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param simba_gs_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_gs_heartbeat_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_simba_gs_heartbeat_t* simba_gs_heartbeat)
{
    return mavlink_msg_simba_gs_heartbeat_pack_status(system_id, component_id, _status, msg,  simba_gs_heartbeat->timestamp, simba_gs_heartbeat->values);
}

/**
 * @brief Send a simba_gs_heartbeat message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp  Timestamp (system uptime in ms)
 * @param values  GS buttons bitmask 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_simba_gs_heartbeat_send(mavlink_channel_t chan, uint64_t timestamp, uint8_t values)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, values);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT, buf, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_LEN, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_CRC);
#else
    mavlink_simba_gs_heartbeat_t packet;
    packet.timestamp = timestamp;
    packet.values = values;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT, (const char *)&packet, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_LEN, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_CRC);
#endif
}

/**
 * @brief Send a simba_gs_heartbeat message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_simba_gs_heartbeat_send_struct(mavlink_channel_t chan, const mavlink_simba_gs_heartbeat_t* simba_gs_heartbeat)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_simba_gs_heartbeat_send(chan, simba_gs_heartbeat->timestamp, simba_gs_heartbeat->values);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT, (const char *)simba_gs_heartbeat, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_LEN, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_CRC);
#endif
}

#if MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_simba_gs_heartbeat_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, uint8_t values)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, values);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT, buf, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_LEN, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_CRC);
#else
    mavlink_simba_gs_heartbeat_t *packet = (mavlink_simba_gs_heartbeat_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->values = values;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT, (const char *)packet, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_LEN, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_CRC);
#endif
}
#endif

#endif

// MESSAGE SIMBA_GS_HEARTBEAT UNPACKING


/**
 * @brief Get field timestamp from simba_gs_heartbeat message
 *
 * @return  Timestamp (system uptime in ms)
 */
static inline uint64_t mavlink_msg_simba_gs_heartbeat_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field values from simba_gs_heartbeat message
 *
 * @return  GS buttons bitmask 
 */
static inline uint8_t mavlink_msg_simba_gs_heartbeat_get_values(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Decode a simba_gs_heartbeat message into a struct
 *
 * @param msg The message to decode
 * @param simba_gs_heartbeat C-struct to decode the message contents into
 */
static inline void mavlink_msg_simba_gs_heartbeat_decode(const mavlink_message_t* msg, mavlink_simba_gs_heartbeat_t* simba_gs_heartbeat)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    simba_gs_heartbeat->timestamp = mavlink_msg_simba_gs_heartbeat_get_timestamp(msg);
    simba_gs_heartbeat->values = mavlink_msg_simba_gs_heartbeat_get_values(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_LEN? msg->len : MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_LEN;
        memset(simba_gs_heartbeat, 0, MAVLINK_MSG_ID_SIMBA_GS_HEARTBEAT_LEN);
    memcpy(simba_gs_heartbeat, _MAV_PAYLOAD(msg), len);
#endif
}
