
# coding: utf-8

# In[1]:


import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sb

get_ipython().run_line_magic('matplotlib', 'inline')


# In[2]:


diabetes_data = pd.read_csv('diabetes.csv')
print(diabetes_data.shape)
diabetes_data.head(10)


# In[3]:


grp1 = 0
grp2 = 0
grp3 = 0
grp4 = 0
grp5 = 0

for i in range(diabetes_data.shape[0]):
    if diabetes_data['Age'][i]<=15 and diabetes_data['Outcome'][i] == 1:
        grp1+=1
    if diabetes_data['Age'][i]<=30 and diabetes_data['Age'][i]>15 and diabetes_data['Outcome'][i] == 1:
        grp1+=1
    if diabetes_data['Age'][i]<=45 and diabetes_data['Age'][i]>30 and diabetes_data['Outcome'][i] == 1:
        grp1+=1
    elif diabetes_data['Age'][i]<=60 and diabetes_data['Age'][i]>45 and diabetes_data['Outcome'][i] == 1:
        grp4 += 1
    else:
        grp5 += 1


# In[4]:


diabetes_data['Age'][0]


# In[5]:


age_data = {'Patient Count': pd.Series(data=[grp1,grp2,grp3,grp4,grp5], 
                                      index=['0-15', '15-30', '31-45', '46-60','60-100'])}
age_table = pd.DataFrame(age_data)
age_table


# In[6]:


fig = plt.figure()

plt.title("Distribution of Diabetes Patient of different ages")
plt.xlabel('Age')
plt.ylabel('Count')
plt.bar(['0-15', '15-30', '31-45', '46-60','60-100'],[grp1,grp2,grp3,grp4,grp5])

fig.savefig('Age.png')
plt.show()


# In[7]:


fig = plt.figure()

plt.title("Histogram of Body Mass Index (BMI) of patients")
plt.xlabel('BMI Distribution')
plt.ylabel('Count')

bin_edges = np.arange(0,diabetes_data['BMI'].max()+5, 5)
plt.hist(data=diabetes_data,x='BMI', bins=bin_edges)

fig.savefig('BMI.png')


# In[8]:


bmi_updated = []


# In[9]:


for d in diabetes_data.BMI:
    if d >10 and d<60:
        bmi_updated.append(d)


# In[10]:


from scipy.stats import gamma

bmi_updated = np.array(bmi_updated)


# In[11]:


sb.distplot(bmi_updated)
plt.xlabel('BMI Distribution')
plt.ylabel('Count')


# In[12]:


shape, scale = bmi_updated.mean(), bmi_updated.std()
s = np.random.gamma(shape, scale)


# In[13]:


import scipy.special as sps
count, bins, ignored = plt.hist(bmi_updated, 50, density=True)
y = bins**(shape-1)*(np.exp(-bins/scale)/(sps.gamma(shape)*scale**shape))
plt.plot(bins, y, linewidth=2, color='r')
plt.show


# In[14]:




count, bins, ignored = plt.hist(s, 50, density=True)
y = bins**(shape-1)*(np.exp(-bins/scale) /
                     (sps.gamma(shape)*scale**shape))
plt.plot(bins, y, linewidth=2, color='r')
plt.show()


# In[15]:


age_table['Patient Count'].value_counts()


# In[16]:


color = [(0.8392156862745098, 0.15294117647058825, 0.1568627450980392),
         (0.17254901960784313, 0.6274509803921569, 0.17254901960784313),
        (0.09019607843137255, 0.7450980392156863, 0.8117647058823529),
        (0.12156862745098039, 0.4666666666666667, 0.7058823529411765),
        (0.09019607843137255, 0.7450980392156863, 0.8117647058823529)]


# In[17]:


fig = plt.figure()
plt.title("Pie chart of Diabetes Patient of different ages ")
plt.pie([grp1,grp2,grp3,grp4,grp5],labels=['0-15', '15-30', '31-45', '46-60','60-100'],colors=color)

fig.savefig('Pie.png')
plt.show()


# In[18]:


sb.boxplot(x=bmi_updated)


# In[19]:


plt.boxplot(diabetes_data['BMI'])


plt.xlabel('BMI')
plt.ylabel('BMI index')

plt.show()


# In[20]:


diabetes_data.BMI.std()


# # Head

# In[21]:


from scipy import stats


# In[23]:


mean, sd = stats.norm.fit(bmi_updated)
print(mean,sd)


# In[24]:


n, bins, patches = plt.hist(bmi_updated, 10, density=1)
y = stats.norm.pdf(bins, mean, sd)
plt.plot(bins, y, color='r')
plt.show

