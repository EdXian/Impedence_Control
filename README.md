# Impedence Control



## Simulation
* It's required Qt version greater than 5.9. 



## Kinematics (Single Harmonic Motion)

Assuming that the angular velocity and the radius of the SHM system is constant.


x = r * cos(theta)
y = r * sin(theta) 

vx =  - omega * r * sin(theta) 
vy =  omega *r *cos(theta)

ax = - omega *omega *r * cos(theta)
ay = -omega * omega *r *sin(theta)
 


## Impedence Control design
 
ax_2 = ax_d + (1 / mass) * ( damping * (v_xd - vx_2 ) + spring* (posx_d - posx2 ) +forcex);
ay_2 = ay_d + (1 / mass) * ( damping * (v_yd - vy_2 ) + spring* (posy_d - posy2 ) +forcey);
 


## Explaination


![image](video.gif)

