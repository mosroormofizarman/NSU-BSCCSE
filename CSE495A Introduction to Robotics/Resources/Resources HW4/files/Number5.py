#!/usr/bin/env python
# coding: utf-8

# 
# # ANSWER TO THE QUSTION NO. 5(c)

# In[1]:


#import libraries
import numpy as np
import matplotlib.pyplot as plt


# In[2]:


t = np.arange(0, 15, 0.01)
t


# In[3]:


len(t)


# In[4]:


# Declare Final time T
T= 15
Tsq = np.power(T,2)
Tcb = np.power(T,3)


# In[5]:


#initialized A
A = np.array([[1, 0, 0, 0,  0, 0, 0, 0],
              [0, 1, 0, 0,  0, 0, 0, 0],
              [0, 0, 0, 0,  1, 0, 0, 0],
              [0, 0, 0, 0,  0, 1, 0, 0],
              [1, T, Tsq, Tcb,  0, 0, 0, 0],
              [0, 1, 2*T, 3*Tsq,  0, 0, 0, 0],
              [0, 0, 0, 0,  1, T, Tsq, Tcb,],
              [0, 0, 0, 0,  0, 1, 2*T, 3*Tsq]
              ]
            )
A


# In[6]:


# A pesudo inverse
Ainv = np.linalg.pinv(A)
Ainv


# In[7]:


#initialized b
b =  np.array([[0],#x1(0)
               [0],#1
               [0],#x3(0)
               [-0.5],#x2(0)
               [5],#x1(T)
               [0],#1
               [5],#x3(T)
               [-0.5] #x2(T)
              ]
            )

b


# In[8]:


#matrix multiplication x = Ainv * b
x= np.matmul(Ainv, b)
x


# In[9]:


a11 = x[0]
a11


# In[10]:


a12 = x[1]
a12


# In[11]:


a13 = x[2]
a13


# In[12]:


a14 = x[3]
a14


# In[13]:


a21 = x[4]
a21


# In[14]:


a22 = x[5]
a22


# In[15]:


a23 = x[6]
a23


# In[16]:


a24 = x[7]
a24


# In[17]:


for i in t:
  X = a11 + (a12* t) + (a13 * np.power(t,2)) + (a14 * np.power(t,3))
  Y = a21 + (a22* t) + (a23 * np.power(t,2)) + (a24 * np.power(t,3) )

X, Y


# In[18]:


plt.plot(X,Y)
plt.title('X vs Y')
plt.xlabel('X')
plt.ylabel('Y')


# In[19]:


X_new = a11 + a12 * t + a13 * t**2 + a14 * t**3
Y_new = a21 + a22 * t + a23 * t**2 + a24 * t**3


# In[20]:


Xdd = np.gradient(np.gradient(X_new, t), t)
Ydd = np.gradient(np.gradient(Y_new, t), t)


# In[21]:


theta = np.arctan2(np.gradient(Y_new, t), np.gradient(X_new, t))
V = np.sqrt(np.gradient(X_new, t)**2 + np.gradient(Y_new, t)**2)
a = np.cos(theta) * Xdd + np.sin(theta) * Ydd

omega = (-np.sin(theta) * Xdd + np.cos(theta) * Ydd) / V


# In[23]:


# initialize
x_final = X_new[0]
y_final = Y_new[0]
theta_final = theta[0]
V_final = V[0]


# In[24]:


x_states = [x_final]
y_states = [y_final]


# In[25]:


for i in range(1, len(t)):
    x_final += V_final * np.cos(theta_final) * (t[i] - t[i-1])
    y_final += V_final * np.sin(theta_final) * (t[i] - t[i-1])
    theta_final += omega[i] * (t[i] - t[i-1])
    V_final += a[i] * (t[i] - t[i-1])

    x_states.append(x_final)
    y_states.append(y_final)


# In[26]:


plt.figure()
plt.plot(X, Y, label='Desired Trajectory', color='blue')
plt.plot(x_states, y_states, label='Robot Trajectory', linestyle='dotted', color='red')
plt.xlabel('X')
plt.ylabel('Y')
plt.legend()
plt.title('Desired and Robot Trajectories')
plt.grid(True)
plt.show()


# In[27]:


plt.figure()
plt.plot(X, Y, label='Desired Trajectory', color='blue')

plt.plot(x_states, y_states, label='Robot Trajectory', linestyle='-', linewidth=5, color='red', alpha=0.5, marker='o', markersize=1, markeredgecolor='red')
plt.xlabel('X')
plt.ylabel('Y')
plt.legend()
plt.title('Desired and Robot Trajectories')
plt.grid(True)
plt.show()


# In[29]:




fig, (ax1, ax2) = plt.subplots(1, 2, figsize=(12, 5))


ax1.plot(X, Y, label='Desired Trajectory', color='blue')
ax1.set_xlabel('X')
ax1.set_ylabel('Y')
ax1.legend()
ax1.set_title('Desired Trajectory')
ax1.grid(True)

# Plot the robot trajectory in the second subplot (ax2)
ax2.plot(x_states, y_states, label='Robot Trajectory',color='red')
ax2.set_xlabel('X')
ax2.set_ylabel('Y')
ax2.legend()
ax2.set_title('Robot Trajectory')
ax2.grid(True)

# Adjust spacing between subplots
plt.tight_layout()

# Show the plots
plt.show()


# In[ ]:




