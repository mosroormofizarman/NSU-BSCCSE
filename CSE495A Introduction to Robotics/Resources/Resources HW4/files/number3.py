#!/usr/bin/env python
# coding: utf-8

# # ANSWER TO THE QUESTION NO. 2

# In[16]:


import numpy as np
import matplotlib.pyplot as plt


# # Initialization Variable

# In[17]:


Tinitial = 0
Tfinal = 10
delT = 0.1


# In[18]:


arraySize = int ((Tfinal - Tinitial)/delT)
arraySize


# In[19]:


x = np.zeros(int(arraySize))
y = np.zeros(int(arraySize))
theta = np.ones(int(arraySize))
x, y , theta


# In[20]:


r = 0.1
l = 1
wl = np.ones(100)
wr = np.ones(100)
wl , wr


# # Condition
# 

# In[21]:


for i in range(100):

  wr[i] = 1
  if i>=5 and i<=15:
    wr[i] = 12
  elif i>=20 and i<=40:
    wr[i] = 12
  elif i>=40 and i<=60:
    wl[i] = 12
  elif i>=60 and i<=80:
    wl[i] = 12


wl, wr


# # Main Program

# In[22]:


for i in range(99):
  x[i+1] =  x[i] + ((r/2) *(wl[i]+wr[i])*(np.cos(theta[i]))) *delT
  y[i+1] =  y[i] + ((r/2) *(wl[i]+wr[i])*(np.sin(theta[i]))) * delT
  theta[i+1] =  theta[i] + ((r/l) *(wr[i]-wl[i]))* delT


x, y, theta


# In[23]:


t= np.arange(100)

plt.plot(t, x)
plt.title('X vs T')
plt.xlabel('X')
plt.ylabel('T')


# In[24]:


plt.plot(t, y)
plt.title('Y vs T')
plt.xlabel('Y')
plt.ylabel('T')


# In[25]:


plt.plot(t, theta)
plt.title('θ vs T')
plt.xlabel('θ')
plt.ylabel('T')


# In[26]:


plt.plot(x,y)
plt.title('X vs Y')
plt.xlabel('X')
plt.ylabel('Y')

