#pragma once
// MESSAGE SIMBA_ROCKET_HEARTBEAT PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT 73


typedef struct __mavlink_simba_rocket_heartbeat_t {
 uint64_t timestamp; /*<  Timestamp (system uptime in ms)*/
 int16_t eb_temp; /*<  Engine Computer temperature*/
 int16_t mb_temp; /*<  Main Computer temperature*/
 uint8_t rocket_state; /*<  Current rocket state*/
 uint8_t flight_computer_status; /*<  Flight computer status*/
 uint8_t engine_computer_status; /*<  Engine computer status*/
 uint8_t values; /*<  Actuator bitmask*/
} mavlink_simba_rocket_heartbeat_t;

#define MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_LEN 16
#define MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_MIN_LEN 16
#define MAVLINK_MSG_ID_73_LEN 16
#define MAVLINK_MSG_ID_73_MIN_LEN 16

#define MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_CRC 55
#define MAVLINK_MSG_ID_73_CRC 55



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SIMBA_ROCKET_HEARTBEAT { \
    73, \
    "SIMBA_ROCKET_HEARTBEAT", \
    7, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_simba_rocket_heartbeat_t, timestamp) }, \
         { "rocket_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_simba_rocket_heartbeat_t, rocket_state) }, \
         { "flight_computer_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_simba_rocket_heartbeat_t, flight_computer_status) }, \
         { "engine_computer_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_simba_rocket_heartbeat_t, engine_computer_status) }, \
         { "values", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_simba_rocket_heartbeat_t, values) }, \
         { "eb_temp", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_simba_rocket_heartbeat_t, eb_temp) }, \
         { "mb_temp", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_simba_rocket_heartbeat_t, mb_temp) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SIMBA_ROCKET_HEARTBEAT { \
    "SIMBA_ROCKET_HEARTBEAT", \
    7, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_simba_rocket_heartbeat_t, timestamp) }, \
         { "rocket_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_simba_rocket_heartbeat_t, rocket_state) }, \
         { "flight_computer_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_simba_rocket_heartbeat_t, flight_computer_status) }, \
         { "engine_computer_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_simba_rocket_heartbeat_t, engine_computer_status) }, \
         { "values", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_simba_rocket_heartbeat_t, values) }, \
         { "eb_temp", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_simba_rocket_heartbeat_t, eb_temp) }, \
         { "mb_temp", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_simba_rocket_heartbeat_t, mb_temp) }, \
         } \
}
#endif

/**
 * @brief Pack a simba_rocket_heartbeat message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  Timestamp (system uptime in ms)
 * @param rocket_state  Current rocket state
 * @param flight_computer_status  Flight computer status
 * @param engine_computer_status  Engine computer status
 * @param values  Actuator bitmask
 * @param eb_temp  Engine Computer temperature
 * @param mb_temp  Main Computer temperature
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_rocket_heartbeat_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, uint8_t rocket_state, uint8_t flight_computer_status, uint8_t engine_computer_status, uint8_t values, int16_t eb_temp, int16_t mb_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_int16_t(buf, 8, eb_temp);
    _mav_put_int16_t(buf, 10, mb_temp);
    _mav_put_uint8_t(buf, 12, rocket_state);
    _mav_put_uint8_t(buf, 13, flight_computer_status);
    _mav_put_uint8_t(buf, 14, engine_computer_status);
    _mav_put_uint8_t(buf, 15, values);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_LEN);
#else
    mavlink_simba_rocket_heartbeat_t packet;
    packet.timestamp = timestamp;
    packet.eb_temp = eb_temp;
    packet.mb_temp = mb_temp;
    packet.rocket_state = rocket_state;
    packet.flight_computer_status = flight_computer_status;
    packet.engine_computer_status = engine_computer_status;
    packet.values = values;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_LEN, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_CRC);
}

/**
 * @brief Pack a simba_rocket_heartbeat message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  Timestamp (system uptime in ms)
 * @param rocket_state  Current rocket state
 * @param flight_computer_status  Flight computer status
 * @param engine_computer_status  Engine computer status
 * @param values  Actuator bitmask
 * @param eb_temp  Engine Computer temperature
 * @param mb_temp  Main Computer temperature
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_rocket_heartbeat_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp, uint8_t rocket_state, uint8_t flight_computer_status, uint8_t engine_computer_status, uint8_t values, int16_t eb_temp, int16_t mb_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_int16_t(buf, 8, eb_temp);
    _mav_put_int16_t(buf, 10, mb_temp);
    _mav_put_uint8_t(buf, 12, rocket_state);
    _mav_put_uint8_t(buf, 13, flight_computer_status);
    _mav_put_uint8_t(buf, 14, engine_computer_status);
    _mav_put_uint8_t(buf, 15, values);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_LEN);
#else
    mavlink_simba_rocket_heartbeat_t packet;
    packet.timestamp = timestamp;
    packet.eb_temp = eb_temp;
    packet.mb_temp = mb_temp;
    packet.rocket_state = rocket_state;
    packet.flight_computer_status = flight_computer_status;
    packet.engine_computer_status = engine_computer_status;
    packet.values = values;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_LEN, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_LEN);
#endif
}

/**
 * @brief Pack a simba_rocket_heartbeat message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp  Timestamp (system uptime in ms)
 * @param rocket_state  Current rocket state
 * @param flight_computer_status  Flight computer status
 * @param engine_computer_status  Engine computer status
 * @param values  Actuator bitmask
 * @param eb_temp  Engine Computer temperature
 * @param mb_temp  Main Computer temperature
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_rocket_heartbeat_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,uint8_t rocket_state,uint8_t flight_computer_status,uint8_t engine_computer_status,uint8_t values,int16_t eb_temp,int16_t mb_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_int16_t(buf, 8, eb_temp);
    _mav_put_int16_t(buf, 10, mb_temp);
    _mav_put_uint8_t(buf, 12, rocket_state);
    _mav_put_uint8_t(buf, 13, flight_computer_status);
    _mav_put_uint8_t(buf, 14, engine_computer_status);
    _mav_put_uint8_t(buf, 15, values);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_LEN);
#else
    mavlink_simba_rocket_heartbeat_t packet;
    packet.timestamp = timestamp;
    packet.eb_temp = eb_temp;
    packet.mb_temp = mb_temp;
    packet.rocket_state = rocket_state;
    packet.flight_computer_status = flight_computer_status;
    packet.engine_computer_status = engine_computer_status;
    packet.values = values;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_LEN, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_CRC);
}

/**
 * @brief Encode a simba_rocket_heartbeat struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param simba_rocket_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_rocket_heartbeat_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_simba_rocket_heartbeat_t* simba_rocket_heartbeat)
{
    return mavlink_msg_simba_rocket_heartbeat_pack(system_id, component_id, msg, simba_rocket_heartbeat->timestamp, simba_rocket_heartbeat->rocket_state, simba_rocket_heartbeat->flight_computer_status, simba_rocket_heartbeat->engine_computer_status, simba_rocket_heartbeat->values, simba_rocket_heartbeat->eb_temp, simba_rocket_heartbeat->mb_temp);
}

/**
 * @brief Encode a simba_rocket_heartbeat struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param simba_rocket_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_rocket_heartbeat_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_simba_rocket_heartbeat_t* simba_rocket_heartbeat)
{
    return mavlink_msg_simba_rocket_heartbeat_pack_chan(system_id, component_id, chan, msg, simba_rocket_heartbeat->timestamp, simba_rocket_heartbeat->rocket_state, simba_rocket_heartbeat->flight_computer_status, simba_rocket_heartbeat->engine_computer_status, simba_rocket_heartbeat->values, simba_rocket_heartbeat->eb_temp, simba_rocket_heartbeat->mb_temp);
}

/**
 * @brief Encode a simba_rocket_heartbeat struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param simba_rocket_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_rocket_heartbeat_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_simba_rocket_heartbeat_t* simba_rocket_heartbeat)
{
    return mavlink_msg_simba_rocket_heartbeat_pack_status(system_id, component_id, _status, msg,  simba_rocket_heartbeat->timestamp, simba_rocket_heartbeat->rocket_state, simba_rocket_heartbeat->flight_computer_status, simba_rocket_heartbeat->engine_computer_status, simba_rocket_heartbeat->values, simba_rocket_heartbeat->eb_temp, simba_rocket_heartbeat->mb_temp);
}

/**
 * @brief Send a simba_rocket_heartbeat message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp  Timestamp (system uptime in ms)
 * @param rocket_state  Current rocket state
 * @param flight_computer_status  Flight computer status
 * @param engine_computer_status  Engine computer status
 * @param values  Actuator bitmask
 * @param eb_temp  Engine Computer temperature
 * @param mb_temp  Main Computer temperature
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_simba_rocket_heartbeat_send(mavlink_channel_t chan, uint64_t timestamp, uint8_t rocket_state, uint8_t flight_computer_status, uint8_t engine_computer_status, uint8_t values, int16_t eb_temp, int16_t mb_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_int16_t(buf, 8, eb_temp);
    _mav_put_int16_t(buf, 10, mb_temp);
    _mav_put_uint8_t(buf, 12, rocket_state);
    _mav_put_uint8_t(buf, 13, flight_computer_status);
    _mav_put_uint8_t(buf, 14, engine_computer_status);
    _mav_put_uint8_t(buf, 15, values);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT, buf, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_LEN, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_CRC);
#else
    mavlink_simba_rocket_heartbeat_t packet;
    packet.timestamp = timestamp;
    packet.eb_temp = eb_temp;
    packet.mb_temp = mb_temp;
    packet.rocket_state = rocket_state;
    packet.flight_computer_status = flight_computer_status;
    packet.engine_computer_status = engine_computer_status;
    packet.values = values;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT, (const char *)&packet, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_LEN, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_CRC);
#endif
}

/**
 * @brief Send a simba_rocket_heartbeat message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_simba_rocket_heartbeat_send_struct(mavlink_channel_t chan, const mavlink_simba_rocket_heartbeat_t* simba_rocket_heartbeat)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_simba_rocket_heartbeat_send(chan, simba_rocket_heartbeat->timestamp, simba_rocket_heartbeat->rocket_state, simba_rocket_heartbeat->flight_computer_status, simba_rocket_heartbeat->engine_computer_status, simba_rocket_heartbeat->values, simba_rocket_heartbeat->eb_temp, simba_rocket_heartbeat->mb_temp);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT, (const char *)simba_rocket_heartbeat, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_LEN, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_CRC);
#endif
}

#if MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_simba_rocket_heartbeat_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, uint8_t rocket_state, uint8_t flight_computer_status, uint8_t engine_computer_status, uint8_t values, int16_t eb_temp, int16_t mb_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_int16_t(buf, 8, eb_temp);
    _mav_put_int16_t(buf, 10, mb_temp);
    _mav_put_uint8_t(buf, 12, rocket_state);
    _mav_put_uint8_t(buf, 13, flight_computer_status);
    _mav_put_uint8_t(buf, 14, engine_computer_status);
    _mav_put_uint8_t(buf, 15, values);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT, buf, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_LEN, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_CRC);
#else
    mavlink_simba_rocket_heartbeat_t *packet = (mavlink_simba_rocket_heartbeat_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->eb_temp = eb_temp;
    packet->mb_temp = mb_temp;
    packet->rocket_state = rocket_state;
    packet->flight_computer_status = flight_computer_status;
    packet->engine_computer_status = engine_computer_status;
    packet->values = values;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT, (const char *)packet, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_LEN, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_CRC);
#endif
}
#endif

#endif

// MESSAGE SIMBA_ROCKET_HEARTBEAT UNPACKING


/**
 * @brief Get field timestamp from simba_rocket_heartbeat message
 *
 * @return  Timestamp (system uptime in ms)
 */
static inline uint64_t mavlink_msg_simba_rocket_heartbeat_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field rocket_state from simba_rocket_heartbeat message
 *
 * @return  Current rocket state
 */
static inline uint8_t mavlink_msg_simba_rocket_heartbeat_get_rocket_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field flight_computer_status from simba_rocket_heartbeat message
 *
 * @return  Flight computer status
 */
static inline uint8_t mavlink_msg_simba_rocket_heartbeat_get_flight_computer_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field engine_computer_status from simba_rocket_heartbeat message
 *
 * @return  Engine computer status
 */
static inline uint8_t mavlink_msg_simba_rocket_heartbeat_get_engine_computer_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field values from simba_rocket_heartbeat message
 *
 * @return  Actuator bitmask
 */
static inline uint8_t mavlink_msg_simba_rocket_heartbeat_get_values(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  15);
}

/**
 * @brief Get field eb_temp from simba_rocket_heartbeat message
 *
 * @return  Engine Computer temperature
 */
static inline int16_t mavlink_msg_simba_rocket_heartbeat_get_eb_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Get field mb_temp from simba_rocket_heartbeat message
 *
 * @return  Main Computer temperature
 */
static inline int16_t mavlink_msg_simba_rocket_heartbeat_get_mb_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  10);
}

/**
 * @brief Decode a simba_rocket_heartbeat message into a struct
 *
 * @param msg The message to decode
 * @param simba_rocket_heartbeat C-struct to decode the message contents into
 */
static inline void mavlink_msg_simba_rocket_heartbeat_decode(const mavlink_message_t* msg, mavlink_simba_rocket_heartbeat_t* simba_rocket_heartbeat)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    simba_rocket_heartbeat->timestamp = mavlink_msg_simba_rocket_heartbeat_get_timestamp(msg);
    simba_rocket_heartbeat->eb_temp = mavlink_msg_simba_rocket_heartbeat_get_eb_temp(msg);
    simba_rocket_heartbeat->mb_temp = mavlink_msg_simba_rocket_heartbeat_get_mb_temp(msg);
    simba_rocket_heartbeat->rocket_state = mavlink_msg_simba_rocket_heartbeat_get_rocket_state(msg);
    simba_rocket_heartbeat->flight_computer_status = mavlink_msg_simba_rocket_heartbeat_get_flight_computer_status(msg);
    simba_rocket_heartbeat->engine_computer_status = mavlink_msg_simba_rocket_heartbeat_get_engine_computer_status(msg);
    simba_rocket_heartbeat->values = mavlink_msg_simba_rocket_heartbeat_get_values(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_LEN? msg->len : MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_LEN;
        memset(simba_rocket_heartbeat, 0, MAVLINK_MSG_ID_SIMBA_ROCKET_HEARTBEAT_LEN);
    memcpy(simba_rocket_heartbeat, _MAV_PAYLOAD(msg), len);
#endif
}
