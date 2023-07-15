#ifndef UPDATE_ORDER_STATUS_H
#define UPDATE_ORDER_STATUS_H

#include <vector>
#include "updateOrder.h"

void updateOrderStatus(std::vector<Order>& orders, int orderId, const std::string& newStatus);

#endif
