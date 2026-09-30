import pandas as pd

df = pd.read_csv("output.csv")
# print(df)

#filtering
df1 = df[(df["Department"] == "IT") & (df["Employee Salary"] > 40000)]

print(df1[["Name", "Department", "Employee Salary"]])