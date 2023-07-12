#!/bin/bash
	sudo argpar 0
	echo "Start Watering" $(date) >> ./waterlog
	sudo argpar 255
	sleep 30
        echo "Ending Watering" $(date) >> ./waterlog
	sudo argpar 0
	sudo shutdown -r 1440
exit 0
