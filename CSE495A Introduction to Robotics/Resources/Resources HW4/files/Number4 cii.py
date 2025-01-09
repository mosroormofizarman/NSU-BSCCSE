#!/usr/bin/env python
# coding: utf-8

# # ANSWER TO THE QUESTION NO. 4 C(ii)

# In[1]:


import numpy as np
import matplotlib.pyplot as plt


# In[2]:


t = np.linspace(0, 15, 100)


# In[3]:


t


# In[4]:


#check the length of t
len(t)


# In[5]:


# def calculate_coefficients():
T = 15
Tsq = T ** 2
Tcb = T ** 3


# In[6]:


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


# In[7]:


Ainv = np.linalg.pinv(A)


# In[8]:


Ainv


# In[9]:


#initialized b
b =  np.array([[1],#x1(0)
               [1],#1
               [0],#x3(0)
               [1],#x2(0)
               [10],#x1(T)
               [1],#1
               [5],#x3(T)
               [10] #x2(T)
              ]
            )

b


# In[10]:


#matrix multiplication x = Ainv * b
x = np.matmul(Ainv, b)
x


# In[11]:


a11 = x[0]
a11


# In[12]:


a12 = x[1]
a12


# In[13]:


a13 = x[2]
a13


# In[14]:


a14 = x[3]
a14


# In[15]:


a21 = x[4]
a21


# In[16]:


a22 = x[5]
a22


# In[17]:


a23 = x[6]
a23


# In[18]:


a24 = x[7]
a24


# In[19]:


t


# In[20]:



for i in t:
    
    X1 = a11 + (a12* t) + (a13 * np.power(t,2)) + (a14 * np.power(t,3))

  # X2 = a22 + (2*a23*t) + (3*a24* np.power(t,2))
    
    X2 = (a22 + (2*a23*t) + (3*a24* np.power(t,2)))/(a12 + (2*a13*t) + (3*a14* np.power(t,2)))

    X3 = a21 + (a22* t) + (a23 * np.power(t,2)) + (a24 * np.power(t,3) )

X1, X2, X3


# In[21]:


plt.plot(t,X1)


# In[22]:


plt.plot(t,X2)


# In[26]:


plt.plot(t,X3)


# In[30]:


ax = plt.figure().add_subplot(projection='3d')
ax.plot(X1, X2, X3)
ax.set_xlabel('X1')
ax.set_ylabel('X2')
ax.set_zlabel('X3')


# In[28]:


ax = plt.figure().add_subplot(projection='3d')
ax.plot(X3, X2, X1)
ax.set_xlabel('X3')
ax.set_ylabel('X2')
ax.set_zlabel('X1')


# In[ ]:




