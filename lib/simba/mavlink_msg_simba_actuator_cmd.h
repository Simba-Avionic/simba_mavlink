#pragma once
// MESSAGE SIMBA_ACTUATOR_CMD PACKING

#define MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD 147


typedef struct __mavlink_simba_actuator_cmd_t {
 uint8_t actuator_id; /*<  id device to change state*/
 uint8_t value; /*<  value to set actuator*/
} mavlink_simba_actuator_cmd_t;

#define MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_LEN 2
#define MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_MIN_LEN 2
#define MAVLINK_MSG_ID_147_LEN 2
#define MAVLINK_MSG_ID_147_MIN_LEN 2

#define MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_CRC 188
#define MAVLINK_MSG_ID_147_CRC 188



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SIMBA_ACTUATOR_CMD { \
    147, \
    "SIMBA_ACTUATOR_CMD", \
    2, \
    {  { "actuator_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_simba_actuator_cmd_t, actuator_id) }, \
         { "value", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_simba_actuator_cmd_t, value) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SIMBA_ACTUATOR_CMD { \
    "SIMBA_ACTUATOR_CMD", \
    2, \
    {  { "actuator_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_simba_actuator_cmd_t, actuator_id) }, \
         { "value", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_simba_actuator_cmd_t, value) }, \
         } \
}
#endif

/**
 * @brief Pack a simba_actuator_cmd message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param actuator_id  id device to change state
 * @param value  value to set actuator
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_actuator_cmd_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t actuator_id, uint8_t value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_LEN];
    _mav_put_uint8_t(buf, 0, actuator_id);
    _mav_put_uint8_t(buf, 1, value);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_LEN);
#else
    mavlink_simba_actuator_cmd_t packet;
    packet.actuator_id = actuator_id;
    packet.value = value;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_CRC);
}

/**
 * @brief Pack a simba_actuator_cmd message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param actuator_id  id device to change state
 * @param value  value to set actuator
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_actuator_cmd_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t actuator_id, uint8_t value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_LEN];
    _mav_put_uint8_t(buf, 0, actuator_id);
    _mav_put_uint8_t(buf, 1, value);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_LEN);
#else
    mavlink_simba_actuator_cmd_t packet;
    packet.actuator_id = actuator_id;
    packet.value = value;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_LEN);
#endif
}

/**
 * @brief Pack a simba_actuator_cmd message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param actuator_id  id device to change state
 * @param value  value to set actuator
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_actuator_cmd_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t actuator_id,uint8_t value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_LEN];
    _mav_put_uint8_t(buf, 0, actuator_id);
    _mav_put_uint8_t(buf, 1, value);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_LEN);
#else
    mavlink_simba_actuator_cmd_t packet;
    packet.actuator_id = actuator_id;
    packet.value = value;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_CRC);
}

/**
 * @brief Encode a simba_actuator_cmd struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param simba_actuator_cmd C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_actuator_cmd_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_simba_actuator_cmd_t* simba_actuator_cmd)
{
    return mavlink_msg_simba_actuator_cmd_pack(system_id, component_id, msg, simba_actuator_cmd->actuator_id, simba_actuator_cmd->value);
}

/**
 * @brief Encode a simba_actuator_cmd struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param simba_actuator_cmd C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_actuator_cmd_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_simba_actuator_cmd_t* simba_actuator_cmd)
{
    return mavlink_msg_simba_actuator_cmd_pack_chan(system_id, component_id, chan, msg, simba_actuator_cmd->actuator_id, simba_actuator_cmd->value);
}

/**
 * @brief Encode a simba_actuator_cmd struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param simba_actuator_cmd C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_actuator_cmd_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_simba_actuator_cmd_t* simba_actuator_cmd)
{
    return mavlink_msg_simba_actuator_cmd_pack_status(system_id, component_id, _status, msg,  simba_actuator_cmd->actuator_id, simba_actuator_cmd->value);
}

/**
 * @brief Send a simba_actuator_cmd message
 * @param chan MAVLink channel to send the message
 *
 * @param actuator_id  id device to change state
 * @param value  value to set actuator
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_simba_actuator_cmd_send(mavlink_channel_t chan, uint8_t actuator_id, uint8_t value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_LEN];
    _mav_put_uint8_t(buf, 0, actuator_id);
    _mav_put_uint8_t(buf, 1, value);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD, buf, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_CRC);
#else
    mavlink_simba_actuator_cmd_t packet;
    packet.actuator_id = actuator_id;
    packet.value = value;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD, (const char *)&packet, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_CRC);
#endif
}

/**
 * @brief Send a simba_actuator_cmd message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_simba_actuator_cmd_send_struct(mavlink_channel_t chan, const mavlink_simba_actuator_cmd_t* simba_actuator_cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_simba_actuator_cmd_send(chan, simba_actuator_cmd->actuator_id, simba_actuator_cmd->value);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD, (const char *)simba_actuator_cmd, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_CRC);
#endif
}

#if MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_simba_actuator_cmd_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t actuator_id, uint8_t value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, actuator_id);
    _mav_put_uint8_t(buf, 1, value);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD, buf, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_CRC);
#else
    mavlink_simba_actuator_cmd_t *packet = (mavlink_simba_actuator_cmd_t *)msgbuf;
    packet->actuator_id = actuator_id;
    packet->value = value;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD, (const char *)packet, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_LEN, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_CRC);
#endif
}
#endif

#endif

// MESSAGE SIMBA_ACTUATOR_CMD UNPACKING


/**
 * @brief Get field actuator_id from simba_actuator_cmd message
 *
 * @return  id device to change state
 */
static inline uint8_t mavlink_msg_simba_actuator_cmd_get_actuator_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field value from simba_actuator_cmd message
 *
 * @return  value to set actuator
 */
static inline uint8_t mavlink_msg_simba_actuator_cmd_get_value(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a simba_actuator_cmd message into a struct
 *
 * @param msg The message to decode
 * @param simba_actuator_cmd C-struct to decode the message contents into
 */
static inline void mavlink_msg_simba_actuator_cmd_decode(const mavlink_message_t* msg, mavlink_simba_actuator_cmd_t* simba_actuator_cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    simba_actuator_cmd->actuator_id = mavlink_msg_simba_actuator_cmd_get_actuator_id(msg);
    simba_actuator_cmd->value = mavlink_msg_simba_actuator_cmd_get_value(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_LEN? msg->len : MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_LEN;
        memset(simba_actuator_cmd, 0, MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_LEN);
    memcpy(simba_actuator_cmd, _MAV_PAYLOAD(msg), len);
#endif
}
