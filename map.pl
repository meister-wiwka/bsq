# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    map.pl                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btuong <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/07 15:37:47 by btuong            #+#    #+#              #
#    Updated: 2020/09/07 15:38:42 by btuong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/perl

use warnings;
use strict;

die "program x y density" unless (scalar(@ARGV) == 3);

my ($x, $y, $density) = @ARGV;

print "$y.ox\n";
for (my $i = 0; $i < $y; $i++) {
	for (my $j = 0; $j < $x; $j++) {
		if (int(rand($y) * 2) < $density) {
			print "o";
		}
		else {
			print ".";
		}
	}
	print "\n";
}
