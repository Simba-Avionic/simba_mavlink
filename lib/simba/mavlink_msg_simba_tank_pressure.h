#pragma once
// MESSAGE SIMBA_TANK_PRESSURE PACKING

#define MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE 70


typedef struct __mavlink_simba_tank_pressure_t {
 float pressure; /*<  Pressure from tank*/
 float d_pressure; /*<  Delta Pressure from tank*/
} mavlink_simba_tank_pressure_t;

#define MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_LEN 8
#define MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_MIN_LEN 8
#define MAVLINK_MSG_ID_70_LEN 8
#define MAVLINK_MSG_ID_70_MIN_LEN 8

#define MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_CRC 89
#define MAVLINK_MSG_ID_70_CRC 89



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SIMBA_TANK_PRESSURE { \
    70, \
    "SIMBA_TANK_PRESSURE", \
    2, \
    {  { "pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_simba_tank_pressure_t, pressure) }, \
         { "d_pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_simba_tank_pressure_t, d_pressure) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SIMBA_TANK_PRESSURE { \
    "SIMBA_TANK_PRESSURE", \
    2, \
    {  { "pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_simba_tank_pressure_t, pressure) }, \
         { "d_pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_simba_tank_pressure_t, d_pressure) }, \
         } \
}
#endif

/**
 * @brief Pack a simba_tank_pressure message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param pressure  Pressure from tank
 * @param d_pressure  Delta Pressure from tank
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_tank_pressure_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float pressure, float d_pressure)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_LEN];
    _mav_put_float(buf, 0, pressure);
    _mav_put_float(buf, 4, d_pressure);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_LEN);
#else
    mavlink_simba_tank_pressure_t packet;
    packet.pressure = pressure;
    packet.d_pressure = d_pressure;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_LEN, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_CRC);
}

/**
 * @brief Pack a simba_tank_pressure message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param pressure  Pressure from tank
 * @param d_pressure  Delta Pressure from tank
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_tank_pressure_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               float pressure, float d_pressure)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_LEN];
    _mav_put_float(buf, 0, pressure);
    _mav_put_float(buf, 4, d_pressure);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_LEN);
#else
    mavlink_simba_tank_pressure_t packet;
    packet.pressure = pressure;
    packet.d_pressure = d_pressure;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_LEN, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_LEN);
#endif
}

/**
 * @brief Pack a simba_tank_pressure message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pressure  Pressure from tank
 * @param d_pressure  Delta Pressure from tank
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_tank_pressure_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float pressure,float d_pressure)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_LEN];
    _mav_put_float(buf, 0, pressure);
    _mav_put_float(buf, 4, d_pressure);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_LEN);
#else
    mavlink_simba_tank_pressure_t packet;
    packet.pressure = pressure;
    packet.d_pressure = d_pressure;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_LEN, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_CRC);
}

/**
 * @brief Encode a simba_tank_pressure struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param simba_tank_pressure C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_tank_pressure_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_simba_tank_pressure_t* simba_tank_pressure)
{
    return mavlink_msg_simba_tank_pressure_pack(system_id, component_id, msg, simba_tank_pressure->pressure, simba_tank_pressure->d_pressure);
}

/**
 * @brief Encode a simba_tank_pressure struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param simba_tank_pressure C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_tank_pressure_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_simba_tank_pressure_t* simba_tank_pressure)
{
    return mavlink_msg_simba_tank_pressure_pack_chan(system_id, component_id, chan, msg, simba_tank_pressure->pressure, simba_tank_pressure->d_pressure);
}

/**
 * @brief Encode a simba_tank_pressure struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param simba_tank_pressure C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_tank_pressure_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_simba_tank_pressure_t* simba_tank_pressure)
{
    return mavlink_msg_simba_tank_pressure_pack_status(system_id, component_id, _status, msg,  simba_tank_pressure->pressure, simba_tank_pressure->d_pressure);
}

/**
 * @brief Send a simba_tank_pressure message
 * @param chan MAVLink channel to send the message
 *
 * @param pressure  Pressure from tank
 * @param d_pressure  Delta Pressure from tank
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_simba_tank_pressure_send(mavlink_channel_t chan, float pressure, float d_pressure)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_LEN];
    _mav_put_float(buf, 0, pressure);
    _mav_put_float(buf, 4, d_pressure);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE, buf, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_LEN, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_CRC);
#else
    mavlink_simba_tank_pressure_t packet;
    packet.pressure = pressure;
    packet.d_pressure = d_pressure;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE, (const char *)&packet, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_LEN, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_CRC);
#endif
}

/**
 * @brief Send a simba_tank_pressure message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_simba_tank_pressure_send_struct(mavlink_channel_t chan, const mavlink_simba_tank_pressure_t* simba_tank_pressure)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_simba_tank_pressure_send(chan, simba_tank_pressure->pressure, simba_tank_pressure->d_pressure);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE, (const char *)simba_tank_pressure, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_LEN, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_CRC);
#endif
}

#if MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_simba_tank_pressure_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float pressure, float d_pressure)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, pressure);
    _mav_put_float(buf, 4, d_pressure);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE, buf, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_LEN, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_CRC);
#else
    mavlink_simba_tank_pressure_t *packet = (mavlink_simba_tank_pressure_t *)msgbuf;
    packet->pressure = pressure;
    packet->d_pressure = d_pressure;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE, (const char *)packet, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_LEN, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_CRC);
#endif
}
#endif

#endif

// MESSAGE SIMBA_TANK_PRESSURE UNPACKING


/**
 * @brief Get field pressure from simba_tank_pressure message
 *
 * @return  Pressure from tank
 */
static inline float mavlink_msg_simba_tank_pressure_get_pressure(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field d_pressure from simba_tank_pressure message
 *
 * @return  Delta Pressure from tank
 */
static inline float mavlink_msg_simba_tank_pressure_get_d_pressure(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Decode a simba_tank_pressure message into a struct
 *
 * @param msg The message to decode
 * @param simba_tank_pressure C-struct to decode the message contents into
 */
static inline void mavlink_msg_simba_tank_pressure_decode(const mavlink_message_t* msg, mavlink_simba_tank_pressure_t* simba_tank_pressure)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    simba_tank_pressure->pressure = mavlink_msg_simba_tank_pressure_get_pressure(msg);
    simba_tank_pressure->d_pressure = mavlink_msg_simba_tank_pressure_get_d_pressure(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_LEN? msg->len : MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_LEN;
        memset(simba_tank_pressure, 0, MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_LEN);
    memcpy(simba_tank_pressure, _MAV_PAYLOAD(msg), len);
#endif
}
