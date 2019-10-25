# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    where_am_i.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/19 01:43:56 by tbergkul          #+#    #+#              #
#    Updated: 2019/07/19 02:30:35 by tbergkul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

address=`ifconfig | grep "inet " | grep -v 127.0.0.1 | cut -d\  -f2`;
if [[address == ""]]
then echo "I am lost!\n"
else echo "$address"
fi
