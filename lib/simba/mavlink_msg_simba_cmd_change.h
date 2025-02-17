#pragma once
// MESSAGE SIMBA_CMD_CHANGE PACKING

#define MAVLINK_MSG_ID_SIMBA_CMD_CHANGE 146


typedef struct __mavlink_simba_cmd_change_t {
 uint8_t cmd_change; /*<  Command for abort*/
} mavlink_simba_cmd_change_t;

#define MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_LEN 1
#define MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_MIN_LEN 1
#define MAVLINK_MSG_ID_146_LEN 1
#define MAVLINK_MSG_ID_146_MIN_LEN 1

#define MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_CRC 120
#define MAVLINK_MSG_ID_146_CRC 120



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SIMBA_CMD_CHANGE { \
    146, \
    "SIMBA_CMD_CHANGE", \
    1, \
    {  { "cmd_change", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_simba_cmd_change_t, cmd_change) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SIMBA_CMD_CHANGE { \
    "SIMBA_CMD_CHANGE", \
    1, \
    {  { "cmd_change", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_simba_cmd_change_t, cmd_change) }, \
         } \
}
#endif

/**
 * @brief Pack a simba_cmd_change message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param cmd_change  Command for abort
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_cmd_change_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t cmd_change)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_LEN];
    _mav_put_uint8_t(buf, 0, cmd_change);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_LEN);
#else
    mavlink_simba_cmd_change_t packet;
    packet.cmd_change = cmd_change;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_CMD_CHANGE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_CRC);
}

/**
 * @brief Pack a simba_cmd_change message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param cmd_change  Command for abort
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_cmd_change_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t cmd_change)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_LEN];
    _mav_put_uint8_t(buf, 0, cmd_change);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_LEN);
#else
    mavlink_simba_cmd_change_t packet;
    packet.cmd_change = cmd_change;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_CMD_CHANGE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_LEN);
#endif
}

/**
 * @brief Pack a simba_cmd_change message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_change  Command for abort
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_cmd_change_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t cmd_change)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_LEN];
    _mav_put_uint8_t(buf, 0, cmd_change);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_LEN);
#else
    mavlink_simba_cmd_change_t packet;
    packet.cmd_change = cmd_change;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_CMD_CHANGE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_CRC);
}

/**
 * @brief Encode a simba_cmd_change struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param simba_cmd_change C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_cmd_change_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_simba_cmd_change_t* simba_cmd_change)
{
    return mavlink_msg_simba_cmd_change_pack(system_id, component_id, msg, simba_cmd_change->cmd_change);
}

/**
 * @brief Encode a simba_cmd_change struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param simba_cmd_change C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_cmd_change_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_simba_cmd_change_t* simba_cmd_change)
{
    return mavlink_msg_simba_cmd_change_pack_chan(system_id, component_id, chan, msg, simba_cmd_change->cmd_change);
}

/**
 * @brief Encode a simba_cmd_change struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param simba_cmd_change C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_cmd_change_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_simba_cmd_change_t* simba_cmd_change)
{
    return mavlink_msg_simba_cmd_change_pack_status(system_id, component_id, _status, msg,  simba_cmd_change->cmd_change);
}

/**
 * @brief Send a simba_cmd_change message
 * @param chan MAVLink channel to send the message
 *
 * @param cmd_change  Command for abort
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_simba_cmd_change_send(mavlink_channel_t chan, uint8_t cmd_change)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_LEN];
    _mav_put_uint8_t(buf, 0, cmd_change);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE, buf, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_CRC);
#else
    mavlink_simba_cmd_change_t packet;
    packet.cmd_change = cmd_change;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE, (const char *)&packet, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_CRC);
#endif
}

/**
 * @brief Send a simba_cmd_change message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_simba_cmd_change_send_struct(mavlink_channel_t chan, const mavlink_simba_cmd_change_t* simba_cmd_change)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_simba_cmd_change_send(chan, simba_cmd_change->cmd_change);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE, (const char *)simba_cmd_change, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_CRC);
#endif
}

#if MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_simba_cmd_change_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t cmd_change)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, cmd_change);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE, buf, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_CRC);
#else
    mavlink_simba_cmd_change_t *packet = (mavlink_simba_cmd_change_t *)msgbuf;
    packet->cmd_change = cmd_change;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE, (const char *)packet, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_CRC);
#endif
}
#endif

#endif

// MESSAGE SIMBA_CMD_CHANGE UNPACKING


/**
 * @brief Get field cmd_change from simba_cmd_change message
 *
 * @return  Command for abort
 */
static inline uint8_t mavlink_msg_simba_cmd_change_get_cmd_change(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a simba_cmd_change message into a struct
 *
 * @param msg The message to decode
 * @param simba_cmd_change C-struct to decode the message contents into
 */
static inline void mavlink_msg_simba_cmd_change_decode(const mavlink_message_t* msg, mavlink_simba_cmd_change_t* simba_cmd_change)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    simba_cmd_change->cmd_change = mavlink_msg_simba_cmd_change_get_cmd_change(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_LEN? msg->len : MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_LEN;
        memset(simba_cmd_change, 0, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_LEN);
    memcpy(simba_cmd_change, _MAV_PAYLOAD(msg), len);
#endif
}
