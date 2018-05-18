#pragma once
// MESSAGE TEST_ADD_MESSAGE PACKING

#define MAVLINK_MSG_ID_TEST_ADD_MESSAGE 500

MAVPACKED(
typedef struct __mavlink_test_add_message_t {
 uint64_t counter; /*< Test counter*/
}) mavlink_test_add_message_t;

#define MAVLINK_MSG_ID_TEST_ADD_MESSAGE_LEN 8
#define MAVLINK_MSG_ID_TEST_ADD_MESSAGE_MIN_LEN 8
#define MAVLINK_MSG_ID_500_LEN 8
#define MAVLINK_MSG_ID_500_MIN_LEN 8

#define MAVLINK_MSG_ID_TEST_ADD_MESSAGE_CRC 186
#define MAVLINK_MSG_ID_500_CRC 186



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TEST_ADD_MESSAGE { \
    500, \
    "TEST_ADD_MESSAGE", \
    1, \
    {  { "counter", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_test_add_message_t, counter) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TEST_ADD_MESSAGE { \
    "TEST_ADD_MESSAGE", \
    1, \
    {  { "counter", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_test_add_message_t, counter) }, \
         } \
}
#endif

/**
 * @brief Pack a test_add_message message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param counter Test counter
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_test_add_message_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t counter)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TEST_ADD_MESSAGE_LEN];
    _mav_put_uint64_t(buf, 0, counter);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TEST_ADD_MESSAGE_LEN);
#else
    mavlink_test_add_message_t packet;
    packet.counter = counter;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TEST_ADD_MESSAGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TEST_ADD_MESSAGE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TEST_ADD_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_TEST_ADD_MESSAGE_LEN, MAVLINK_MSG_ID_TEST_ADD_MESSAGE_CRC);
}

/**
 * @brief Pack a test_add_message message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param counter Test counter
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_test_add_message_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t counter)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TEST_ADD_MESSAGE_LEN];
    _mav_put_uint64_t(buf, 0, counter);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TEST_ADD_MESSAGE_LEN);
#else
    mavlink_test_add_message_t packet;
    packet.counter = counter;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TEST_ADD_MESSAGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TEST_ADD_MESSAGE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TEST_ADD_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_TEST_ADD_MESSAGE_LEN, MAVLINK_MSG_ID_TEST_ADD_MESSAGE_CRC);
}

/**
 * @brief Encode a test_add_message struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param test_add_message C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_test_add_message_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_test_add_message_t* test_add_message)
{
    return mavlink_msg_test_add_message_pack(system_id, component_id, msg, test_add_message->counter);
}

/**
 * @brief Encode a test_add_message struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param test_add_message C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_test_add_message_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_test_add_message_t* test_add_message)
{
    return mavlink_msg_test_add_message_pack_chan(system_id, component_id, chan, msg, test_add_message->counter);
}

/**
 * @brief Send a test_add_message message
 * @param chan MAVLink channel to send the message
 *
 * @param counter Test counter
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_test_add_message_send(mavlink_channel_t chan, uint64_t counter)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TEST_ADD_MESSAGE_LEN];
    _mav_put_uint64_t(buf, 0, counter);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_ADD_MESSAGE, buf, MAVLINK_MSG_ID_TEST_ADD_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_TEST_ADD_MESSAGE_LEN, MAVLINK_MSG_ID_TEST_ADD_MESSAGE_CRC);
#else
    mavlink_test_add_message_t packet;
    packet.counter = counter;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_ADD_MESSAGE, (const char *)&packet, MAVLINK_MSG_ID_TEST_ADD_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_TEST_ADD_MESSAGE_LEN, MAVLINK_MSG_ID_TEST_ADD_MESSAGE_CRC);
#endif
}

/**
 * @brief Send a test_add_message message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_test_add_message_send_struct(mavlink_channel_t chan, const mavlink_test_add_message_t* test_add_message)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_test_add_message_send(chan, test_add_message->counter);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_ADD_MESSAGE, (const char *)test_add_message, MAVLINK_MSG_ID_TEST_ADD_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_TEST_ADD_MESSAGE_LEN, MAVLINK_MSG_ID_TEST_ADD_MESSAGE_CRC);
#endif
}

#if MAVLINK_MSG_ID_TEST_ADD_MESSAGE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_test_add_message_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t counter)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, counter);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_ADD_MESSAGE, buf, MAVLINK_MSG_ID_TEST_ADD_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_TEST_ADD_MESSAGE_LEN, MAVLINK_MSG_ID_TEST_ADD_MESSAGE_CRC);
#else
    mavlink_test_add_message_t *packet = (mavlink_test_add_message_t *)msgbuf;
    packet->counter = counter;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_ADD_MESSAGE, (const char *)packet, MAVLINK_MSG_ID_TEST_ADD_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_TEST_ADD_MESSAGE_LEN, MAVLINK_MSG_ID_TEST_ADD_MESSAGE_CRC);
#endif
}
#endif

#endif

// MESSAGE TEST_ADD_MESSAGE UNPACKING


/**
 * @brief Get field counter from test_add_message message
 *
 * @return Test counter
 */
static inline uint64_t mavlink_msg_test_add_message_get_counter(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Decode a test_add_message message into a struct
 *
 * @param msg The message to decode
 * @param test_add_message C-struct to decode the message contents into
 */
static inline void mavlink_msg_test_add_message_decode(const mavlink_message_t* msg, mavlink_test_add_message_t* test_add_message)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    test_add_message->counter = mavlink_msg_test_add_message_get_counter(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TEST_ADD_MESSAGE_LEN? msg->len : MAVLINK_MSG_ID_TEST_ADD_MESSAGE_LEN;
        memset(test_add_message, 0, MAVLINK_MSG_ID_TEST_ADD_MESSAGE_LEN);
    memcpy(test_add_message, _MAV_PAYLOAD(msg), len);
#endif
}
