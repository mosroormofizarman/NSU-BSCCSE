import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.compose import ColumnTransformer
from sklearn.preprocessing import OneHotEncoder
from sklearn.tree import DecisionTreeClassifier, plot_tree

data = {
    'High Cholesterol': ['yes', 'yes', 'no', 'no', 'yes', 'yes', 'no'],
    'Regular Exercise': ['yes', 'no', 'yes', 'yes', 'yes', 'no', 'no'],
    'Age': [7, 18, 12, 38, 35, 50, 83],
    'Diabetes': [0, 0, 1, 1, 1, 0, 0]
}

data = pd.DataFrame(data)

x = data.iloc[:, :-1].values
y = data.iloc[:, -1].values

ct = ColumnTransformer(transformers=[('encoder', OneHotEncoder(), [0, 1])], remainder='passthrough')
x = np.array(ct.fit_transform(x))

classifier = DecisionTreeClassifier()
tree = classifier.fit(x, y)

prediction_results = tree.predict(x)
print(prediction_results)

plt.figure('Decision Tree', figsize=[10, 5])
plot_tree(tree, fontsize=10, filled=True)
plt.show()