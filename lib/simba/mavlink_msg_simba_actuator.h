#pragma once
// MESSAGE SIMBA_ACTUATOR PACKING

#define MAVLINK_MSG_ID_SIMBA_ACTUATOR 68


typedef struct __mavlink_simba_actuator_t {
 uint8_t values; /*<  Actuators' values - each bit represents one actuator*/
} mavlink_simba_actuator_t;

#define MAVLINK_MSG_ID_SIMBA_ACTUATOR_LEN 1
#define MAVLINK_MSG_ID_SIMBA_ACTUATOR_MIN_LEN 1
#define MAVLINK_MSG_ID_68_LEN 1
#define MAVLINK_MSG_ID_68_MIN_LEN 1

#define MAVLINK_MSG_ID_SIMBA_ACTUATOR_CRC 228
#define MAVLINK_MSG_ID_68_CRC 228



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SIMBA_ACTUATOR { \
    68, \
    "SIMBA_ACTUATOR", \
    1, \
    {  { "values", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_simba_actuator_t, values) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SIMBA_ACTUATOR { \
    "SIMBA_ACTUATOR", \
    1, \
    {  { "values", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_simba_actuator_t, values) }, \
         } \
}
#endif

/**
 * @brief Pack a simba_actuator message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param values  Actuators' values - each bit represents one actuator
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_actuator_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t values)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_ACTUATOR_LEN];
    _mav_put_uint8_t(buf, 0, values);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_ACTUATOR_LEN);
#else
    mavlink_simba_actuator_t packet;
    packet.values = values;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_ACTUATOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_ACTUATOR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SIMBA_ACTUATOR_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CRC);
}

/**
 * @brief Pack a simba_actuator message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param values  Actuators' values - each bit represents one actuator
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_actuator_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t values)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_ACTUATOR_LEN];
    _mav_put_uint8_t(buf, 0, values);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_ACTUATOR_LEN);
#else
    mavlink_simba_actuator_t packet;
    packet.values = values;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_ACTUATOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_ACTUATOR;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_ACTUATOR_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_ACTUATOR_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_LEN);
#endif
}

/**
 * @brief Pack a simba_actuator message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param values  Actuators' values - each bit represents one actuator
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_actuator_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t values)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_ACTUATOR_LEN];
    _mav_put_uint8_t(buf, 0, values);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_ACTUATOR_LEN);
#else
    mavlink_simba_actuator_t packet;
    packet.values = values;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_ACTUATOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_ACTUATOR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SIMBA_ACTUATOR_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CRC);
}

/**
 * @brief Encode a simba_actuator struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param simba_actuator C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_actuator_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_simba_actuator_t* simba_actuator)
{
    return mavlink_msg_simba_actuator_pack(system_id, component_id, msg, simba_actuator->values);
}

/**
 * @brief Encode a simba_actuator struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param simba_actuator C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_actuator_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_simba_actuator_t* simba_actuator)
{
    return mavlink_msg_simba_actuator_pack_chan(system_id, component_id, chan, msg, simba_actuator->values);
}

/**
 * @brief Encode a simba_actuator struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param simba_actuator C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_actuator_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_simba_actuator_t* simba_actuator)
{
    return mavlink_msg_simba_actuator_pack_status(system_id, component_id, _status, msg,  simba_actuator->values);
}

/**
 * @brief Send a simba_actuator message
 * @param chan MAVLink channel to send the message
 *
 * @param values  Actuators' values - each bit represents one actuator
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_simba_actuator_send(mavlink_channel_t chan, uint8_t values)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_ACTUATOR_LEN];
    _mav_put_uint8_t(buf, 0, values);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_ACTUATOR, buf, MAVLINK_MSG_ID_SIMBA_ACTUATOR_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CRC);
#else
    mavlink_simba_actuator_t packet;
    packet.values = values;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_ACTUATOR, (const char *)&packet, MAVLINK_MSG_ID_SIMBA_ACTUATOR_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CRC);
#endif
}

/**
 * @brief Send a simba_actuator message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_simba_actuator_send_struct(mavlink_channel_t chan, const mavlink_simba_actuator_t* simba_actuator)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_simba_actuator_send(chan, simba_actuator->values);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_ACTUATOR, (const char *)simba_actuator, MAVLINK_MSG_ID_SIMBA_ACTUATOR_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CRC);
#endif
}

#if MAVLINK_MSG_ID_SIMBA_ACTUATOR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_simba_actuator_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t values)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, values);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_ACTUATOR, buf, MAVLINK_MSG_ID_SIMBA_ACTUATOR_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CRC);
#else
    mavlink_simba_actuator_t *packet = (mavlink_simba_actuator_t *)msgbuf;
    packet->values = values;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_ACTUATOR, (const char *)packet, MAVLINK_MSG_ID_SIMBA_ACTUATOR_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CRC);
#endif
}
#endif

#endif

// MESSAGE SIMBA_ACTUATOR UNPACKING


/**
 * @brief Get field values from simba_actuator message
 *
 * @return  Actuators' values - each bit represents one actuator
 */
static inline uint8_t mavlink_msg_simba_actuator_get_values(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a simba_actuator message into a struct
 *
 * @param msg The message to decode
 * @param simba_actuator C-struct to decode the message contents into
 */
static inline void mavlink_msg_simba_actuator_decode(const mavlink_message_t* msg, mavlink_simba_actuator_t* simba_actuator)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    simba_actuator->values = mavlink_msg_simba_actuator_get_values(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SIMBA_ACTUATOR_LEN? msg->len : MAVLINK_MSG_ID_SIMBA_ACTUATOR_LEN;
        memset(simba_actuator, 0, MAVLINK_MSG_ID_SIMBA_ACTUATOR_LEN);
    memcpy(simba_actuator, _MAV_PAYLOAD(msg), len);
#endif
}
