#pragma once
// MESSAGE SIMBA_MAX_ALTITUDE PACKING

#define MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE 74


typedef struct __mavlink_simba_max_altitude_t {
 int32_t alt; /*<  Max altitude*/
} mavlink_simba_max_altitude_t;

#define MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_LEN 4
#define MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_MIN_LEN 4
#define MAVLINK_MSG_ID_74_LEN 4
#define MAVLINK_MSG_ID_74_MIN_LEN 4

#define MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_CRC 11
#define MAVLINK_MSG_ID_74_CRC 11



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SIMBA_MAX_ALTITUDE { \
    74, \
    "SIMBA_MAX_ALTITUDE", \
    1, \
    {  { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_simba_max_altitude_t, alt) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SIMBA_MAX_ALTITUDE { \
    "SIMBA_MAX_ALTITUDE", \
    1, \
    {  { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_simba_max_altitude_t, alt) }, \
         } \
}
#endif

/**
 * @brief Pack a simba_max_altitude message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param alt  Max altitude
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_max_altitude_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int32_t alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_LEN];
    _mav_put_int32_t(buf, 0, alt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_LEN);
#else
    mavlink_simba_max_altitude_t packet;
    packet.alt = alt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_LEN, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_CRC);
}

/**
 * @brief Pack a simba_max_altitude message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param alt  Max altitude
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_max_altitude_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int32_t alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_LEN];
    _mav_put_int32_t(buf, 0, alt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_LEN);
#else
    mavlink_simba_max_altitude_t packet;
    packet.alt = alt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_LEN, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_LEN);
#endif
}

/**
 * @brief Pack a simba_max_altitude message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param alt  Max altitude
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_max_altitude_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int32_t alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_LEN];
    _mav_put_int32_t(buf, 0, alt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_LEN);
#else
    mavlink_simba_max_altitude_t packet;
    packet.alt = alt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_LEN, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_CRC);
}

/**
 * @brief Encode a simba_max_altitude struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param simba_max_altitude C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_max_altitude_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_simba_max_altitude_t* simba_max_altitude)
{
    return mavlink_msg_simba_max_altitude_pack(system_id, component_id, msg, simba_max_altitude->alt);
}

/**
 * @brief Encode a simba_max_altitude struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param simba_max_altitude C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_max_altitude_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_simba_max_altitude_t* simba_max_altitude)
{
    return mavlink_msg_simba_max_altitude_pack_chan(system_id, component_id, chan, msg, simba_max_altitude->alt);
}

/**
 * @brief Encode a simba_max_altitude struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param simba_max_altitude C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_max_altitude_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_simba_max_altitude_t* simba_max_altitude)
{
    return mavlink_msg_simba_max_altitude_pack_status(system_id, component_id, _status, msg,  simba_max_altitude->alt);
}

/**
 * @brief Send a simba_max_altitude message
 * @param chan MAVLink channel to send the message
 *
 * @param alt  Max altitude
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_simba_max_altitude_send(mavlink_channel_t chan, int32_t alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_LEN];
    _mav_put_int32_t(buf, 0, alt);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE, buf, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_LEN, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_CRC);
#else
    mavlink_simba_max_altitude_t packet;
    packet.alt = alt;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE, (const char *)&packet, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_LEN, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_CRC);
#endif
}

/**
 * @brief Send a simba_max_altitude message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_simba_max_altitude_send_struct(mavlink_channel_t chan, const mavlink_simba_max_altitude_t* simba_max_altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_simba_max_altitude_send(chan, simba_max_altitude->alt);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE, (const char *)simba_max_altitude, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_LEN, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_CRC);
#endif
}

#if MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_simba_max_altitude_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int32_t alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, alt);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE, buf, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_LEN, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_CRC);
#else
    mavlink_simba_max_altitude_t *packet = (mavlink_simba_max_altitude_t *)msgbuf;
    packet->alt = alt;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE, (const char *)packet, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_LEN, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_CRC);
#endif
}
#endif

#endif

// MESSAGE SIMBA_MAX_ALTITUDE UNPACKING


/**
 * @brief Get field alt from simba_max_altitude message
 *
 * @return  Max altitude
 */
static inline int32_t mavlink_msg_simba_max_altitude_get_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Decode a simba_max_altitude message into a struct
 *
 * @param msg The message to decode
 * @param simba_max_altitude C-struct to decode the message contents into
 */
static inline void mavlink_msg_simba_max_altitude_decode(const mavlink_message_t* msg, mavlink_simba_max_altitude_t* simba_max_altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    simba_max_altitude->alt = mavlink_msg_simba_max_altitude_get_alt(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_LEN? msg->len : MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_LEN;
        memset(simba_max_altitude, 0, MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_LEN);
    memcpy(simba_max_altitude, _MAV_PAYLOAD(msg), len);
#endif
}
