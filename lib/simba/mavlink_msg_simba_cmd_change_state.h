#pragma once
// MESSAGE SIMBA_CMD_CHANGE_STATE PACKING

#define MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE 146


typedef struct __mavlink_simba_cmd_change_state_t {
 uint8_t new_state; /*<  New rocket state*/
} mavlink_simba_cmd_change_state_t;

#define MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_LEN 1
#define MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_MIN_LEN 1
#define MAVLINK_MSG_ID_146_LEN 1
#define MAVLINK_MSG_ID_146_MIN_LEN 1

#define MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_CRC 245
#define MAVLINK_MSG_ID_146_CRC 245



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SIMBA_CMD_CHANGE_STATE { \
    146, \
    "SIMBA_CMD_CHANGE_STATE", \
    1, \
    {  { "new_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_simba_cmd_change_state_t, new_state) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SIMBA_CMD_CHANGE_STATE { \
    "SIMBA_CMD_CHANGE_STATE", \
    1, \
    {  { "new_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_simba_cmd_change_state_t, new_state) }, \
         } \
}
#endif

/**
 * @brief Pack a simba_cmd_change_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param new_state  New rocket state
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_cmd_change_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t new_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_LEN];
    _mav_put_uint8_t(buf, 0, new_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_LEN);
#else
    mavlink_simba_cmd_change_state_t packet;
    packet.new_state = new_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_CRC);
}

/**
 * @brief Pack a simba_cmd_change_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param new_state  New rocket state
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_cmd_change_state_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t new_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_LEN];
    _mav_put_uint8_t(buf, 0, new_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_LEN);
#else
    mavlink_simba_cmd_change_state_t packet;
    packet.new_state = new_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_LEN);
#endif
}

/**
 * @brief Pack a simba_cmd_change_state message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param new_state  New rocket state
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_cmd_change_state_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t new_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_LEN];
    _mav_put_uint8_t(buf, 0, new_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_LEN);
#else
    mavlink_simba_cmd_change_state_t packet;
    packet.new_state = new_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_CRC);
}

/**
 * @brief Encode a simba_cmd_change_state struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param simba_cmd_change_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_cmd_change_state_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_simba_cmd_change_state_t* simba_cmd_change_state)
{
    return mavlink_msg_simba_cmd_change_state_pack(system_id, component_id, msg, simba_cmd_change_state->new_state);
}

/**
 * @brief Encode a simba_cmd_change_state struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param simba_cmd_change_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_cmd_change_state_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_simba_cmd_change_state_t* simba_cmd_change_state)
{
    return mavlink_msg_simba_cmd_change_state_pack_chan(system_id, component_id, chan, msg, simba_cmd_change_state->new_state);
}

/**
 * @brief Encode a simba_cmd_change_state struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param simba_cmd_change_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_cmd_change_state_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_simba_cmd_change_state_t* simba_cmd_change_state)
{
    return mavlink_msg_simba_cmd_change_state_pack_status(system_id, component_id, _status, msg,  simba_cmd_change_state->new_state);
}

/**
 * @brief Send a simba_cmd_change_state message
 * @param chan MAVLink channel to send the message
 *
 * @param new_state  New rocket state
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_simba_cmd_change_state_send(mavlink_channel_t chan, uint8_t new_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_LEN];
    _mav_put_uint8_t(buf, 0, new_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE, buf, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_CRC);
#else
    mavlink_simba_cmd_change_state_t packet;
    packet.new_state = new_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE, (const char *)&packet, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_CRC);
#endif
}

/**
 * @brief Send a simba_cmd_change_state message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_simba_cmd_change_state_send_struct(mavlink_channel_t chan, const mavlink_simba_cmd_change_state_t* simba_cmd_change_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_simba_cmd_change_state_send(chan, simba_cmd_change_state->new_state);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE, (const char *)simba_cmd_change_state, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_simba_cmd_change_state_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t new_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, new_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE, buf, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_CRC);
#else
    mavlink_simba_cmd_change_state_t *packet = (mavlink_simba_cmd_change_state_t *)msgbuf;
    packet->new_state = new_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE, (const char *)packet, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_MIN_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_LEN, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_CRC);
#endif
}
#endif

#endif

// MESSAGE SIMBA_CMD_CHANGE_STATE UNPACKING


/**
 * @brief Get field new_state from simba_cmd_change_state message
 *
 * @return  New rocket state
 */
static inline uint8_t mavlink_msg_simba_cmd_change_state_get_new_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a simba_cmd_change_state message into a struct
 *
 * @param msg The message to decode
 * @param simba_cmd_change_state C-struct to decode the message contents into
 */
static inline void mavlink_msg_simba_cmd_change_state_decode(const mavlink_message_t* msg, mavlink_simba_cmd_change_state_t* simba_cmd_change_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    simba_cmd_change_state->new_state = mavlink_msg_simba_cmd_change_state_get_new_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_LEN? msg->len : MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_LEN;
        memset(simba_cmd_change_state, 0, MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_LEN);
    memcpy(simba_cmd_change_state, _MAV_PAYLOAD(msg), len);
#endif
}
