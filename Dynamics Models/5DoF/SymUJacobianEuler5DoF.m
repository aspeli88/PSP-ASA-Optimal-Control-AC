function j_b = SymUJacobianEuler5DoF(r1,r2,r3,v1,v2,v3,theta1,theta2,theta3,w1,w2,T1,T2,T3,mass,L,I,max_thrust)
%SymUJacobianEuler5DoF
%    J_B = SymUJacobianEuler5DoF(R1,R2,R3,V1,V2,V3,THETA1,THETA2,THETA3,W1,W2,T1,T2,T3,MASS,L,I,MAX_THRUST)

%    This function was generated by the Symbolic Math Toolbox version 24.2.
%    03-Jan-2025 22:18:38

t2 = cos(theta1);
t3 = cos(theta2);
t4 = cos(theta3);
t5 = sin(theta1);
t6 = sin(theta2);
t7 = sin(theta3);
t8 = 1.0./I;
t9 = 1.0./mass;
t10 = L.*max_thrust.*t8;
j_b = reshape([0.0,0.0,0.0,max_thrust.*t3.*t9,max_thrust.*t5.*t6.*t9,-max_thrust.*t2.*t6.*t9,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,max_thrust.*t6.*t7.*t9,max_thrust.*t9.*(t2.*t4-t3.*t5.*t7),max_thrust.*t9.*(t4.*t5+t2.*t3.*t7),0.0,0.0,0.0,0.0,-t10,0.0,0.0,0.0,max_thrust.*t4.*t6.*t9,-max_thrust.*t9.*(t2.*t7+t3.*t4.*t5),-max_thrust.*t9.*(t5.*t7-t2.*t3.*t4),0.0,0.0,0.0,t10,0.0],[11,3]);
end
