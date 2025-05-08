#define MAVLINK_USE_CONVENIENCE_FUNCTIONS
#include "mavlink_types.h"
mavlink_system_t mavlink_system = {1,1};

#include "simba/mavlink.h"

mavlink_message_t last_msg;

void comm_send_ch(mavlink_channel_t chan, uint8_t ch) {}

#include "simba/testsuite.h"

int main(int argc, char const *argv[])
{
    mavlink_test_all(1, 1, &last_msg);
    return 0;
}
