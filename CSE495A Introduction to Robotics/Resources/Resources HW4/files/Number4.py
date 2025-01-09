#!/usr/bin/env python
# coding: utf-8

# # ANSWER TO THE QUESTION NO. 4 C(i)

# In[38]:


import numpy as np
import matplotlib.pyplot as plt


# In[39]:


t = np.linspace(0, 10, 100)


# In[40]:


t


# In[41]:


#check the length of t
len(t)


# In[42]:


# def calculate_coefficients():
T = 10
Tsq = T ** 2
Tcb = T ** 3


# In[43]:


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


# In[44]:


Ainv = np.linalg.pinv(A)


# In[45]:


Ainv


# In[46]:


# X1_0 = 1
# X2_0 = 1
# X3_0 = 0
# X1_T = 5
# X2_T = 5
# X3_T = 1


# In[47]:


#initialized b
b =  np.array([[1],#x1(0)
               [1],#1
               [0],#x3(0)
               [1],#x2(0)
               [5],#x1(T)
               [1],#1
               [5],#x3(T)
               [5] #x2(T)
              ]
            )

b


# In[48]:


#matrix multiplication x = Ainv * b
x = np.matmul(Ainv, b)
x


# In[49]:


a11 = x[0]
a11


# In[50]:


a12 = x[1]
a12


# In[51]:


a13 = x[2]
a13


# In[52]:


a14 = x[3]
a14


# In[53]:


a21 = x[4]
a21


# In[54]:


a22 = x[5]
a22


# In[55]:


a23 = x[6]
a23


# In[56]:


a24 = x[7]
a24


# In[57]:


t


# In[58]:



for i in t:
    
    X1 = a11 + (a12* t) + (a13 * np.power(t,2)) + (a14 * np.power(t,3))

  # X2 = a22 + (2*a23*t) + (3*a24* np.power(t,2))
    
    X2 = (a22 + (2*a23*t) + (3*a24* np.power(t,2)))/(a12 + (2*a13*t) + (3*a14* np.power(t,2)))

    X3 = a21 + (a22* t) + (a23 * np.power(t,2)) + (a24 * np.power(t,3) )

X1, X2, X3


# In[59]:


plt.plot(t,X1)


# In[60]:


plt.plot(t,X2)


# In[61]:


plt.plot(t, X3)


# In[62]:


ax = plt.figure().add_subplot(projection='3d')
ax.plot(X1, X2, X3)
ax.set_xlabel('X1')
ax.set_ylabel('X2')
ax.set_zlabel('X3')


# In[63]:


ax = plt.figure().add_subplot(projection='3d')
ax.plot(X3, X2, X1)
ax.set_xlabel('X3')
ax.set_ylabel('X2')
ax.set_zlabel('X1')


# In[ ]:




