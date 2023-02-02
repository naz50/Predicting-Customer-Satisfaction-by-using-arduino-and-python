**# Predicting-Customer-Satisfaction-by-using-arduino-and-python**

**In this project, I collected data, analyzed survey data, and finally visualized customer satisfaction data by using survey data collected from the customer satisfaction measurement (CSM) device that I built earlier. The goal is to adopt the idea of a virtual coffee shop to collect data and then measure customer satisfaction votes, mine it, analyze it, and visualize it using Python, Arduino editor, SPSS,and Power BI.**
**Customer Satisfaction Measurement (CSM) assists in identifying the competitive advantages and disadvantages of coffee shop management as well as areas that require changes and improvements to raise the percentages of repeat orders and purchases as well as the proportion of loyal customers.**

**"Satisfied" Class**   

![1_](https://user-images.githubusercontent.com/74384259/215562611-5fa12d7a-c965-4861-8380-08e954ba7b6c.jpeg)

**"Unsatisfied" Class**                                                                                                                                             

![2](https://user-images.githubusercontent.com/74384259/215562618-f3d89a87-5258-47dc-b4fd-61597b0d05d4.jpeg)

**The circuit for connecting  "Customer Satisfaction Measurement" (CSM) device :**                                                                                       

<img width="477" alt="image" src="https://user-images.githubusercontent.com/74384259/216135884-dba3145d-e441-4121-aac3-681063c95742.png">

**Arduino Code C++ with design circuit CSM in tinkercad.**

<img width="833" alt="image" src="https://user-images.githubusercontent.com/74384259/216153387-1f118ef3-07f1-41d4-8cab-e8a24b6464dc.png">


**XGBoost Model Evaluation:**                                                                                                                                       

I got 100% in ROC_AUC, which is perfect. because when two curves completely don’t overlap, the separability of the model is optimal. The XGBoost model can clearly distinguish between the classes of "satisfied" and "unsatisfied." with 99% precision and 100% recall.
![I19](https://user-images.githubusercontent.com/74384259/215728873-0f131b54-c94c-4e4b-9037-d1cca3ff9ceb.png)

**Here is a classification report:**                                                                                                                                    

<img width="249" alt="image" src="https://user-images.githubusercontent.com/74384259/216139055-0a602058-1749-4eed-bdfd-974ea0479441.png">

**100% in ROC_AUC**                                                                                                                                                     
![7088-auc](https://user-images.githubusercontent.com/74384259/216135595-b3a1f031-028c-46a8-bc92-e2af0506454d.png)

Confusion_matrix, Roc_auc_Score, Accuracy_score, Plot_confusion_matrix                                                                                              

<img width="307" alt="image" src="https://user-images.githubusercontent.com/74384259/216137022-09e25caa-ceb2-4510-a01c-5eac35da47a8.png">

Also, while cleaning the data, I removed the "neutral" responses because they were few and irrelevant to my objective.                                               
![4444](https://user-images.githubusercontent.com/74384259/216366008-0671210d-2d42-430a-98c9-2f6fced094bc.png)

![e8k](https://user-images.githubusercontent.com/74384259/215729032-d1d00aec-d472-4b91-9606-65a2f16b8b5a.png)

Previously, we normalized our dataset via StandardScaler .


**The results of the responses to the survey**                                                                                                                                                                                                                                                                                                                                                                                                                      
![I6](https://user-images.githubusercontent.com/74384259/215729699-d0094101-c66b-4c02-9480-c52bf1c45fb9.png)

![I2](https://user-images.githubusercontent.com/74384259/215729702-ed20f6ed-d2a8-430f-aad4-6174dc6ed50f.png)

![I5](https://user-images.githubusercontent.com/74384259/215729703-6f1df777-9efd-44ed-8fd4-434a249555a9.png)

![I100](https://user-images.githubusercontent.com/74384259/215729928-bb2cc3e7-32ab-45a3-b639-08cd03e16a44.png)

![I3](https://user-images.githubusercontent.com/74384259/215729932-232253b7-6e58-43d7-9841-ebeea90663c1.png)


**Here the number of responses for females is more than for males**                                                                                                   
![I120](https://user-images.githubusercontent.com/74384259/215728500-6a28b53d-c2cf-4d52-8d30-ed33121d6865.png)


**Total responses by branch and Age**                                                                                                                                  
![I8](https://user-images.githubusercontent.com/74384259/215728703-0b7429f7-11aa-4a9e-82a3-ed8d6b5b422f.png)

![I11](https://user-images.githubusercontent.com/74384259/215728709-e3f597b9-f82a-46eb-9dbe-7cbba6b7484e.png)



**Total responses by product and Age**                                                                                                                                
![I9](https://user-images.githubusercontent.com/74384259/215730537-cebfd9f6-18fa-4444-85b0-4c6d5abc35f6.png)

![3-02](https://user-images.githubusercontent.com/74384259/215730541-a8de95c3-0489-4de5-8504-8db63c5e268b.png)




**The most frequent customers of the coffee shop**                                                                                                                     
![I13](https://user-images.githubusercontent.com/74384259/215730977-7790bf14-5d81-4889-a872-976ba30af021.png)



**Relationship between time series and customers Age_1**
![I15](https://user-images.githubusercontent.com/74384259/215731274-83a5c7f8-99b0-4731-ae2d-dd11c6d4730b.png)

**Relationship between time series and customers Age_2**

![I14](https://user-images.githubusercontent.com/74384259/215731281-092f4e17-2b7c-4f6c-87f2-35fd00541980.png)


**Heatmap of dataset** 

**To find out which features have a significant correlation with customer satisfaction, let's look at a correlation heatmap.**                                                                                                                                                                               
![I17](https://user-images.githubusercontent.com/74384259/215731377-7579c6ac-9535-44ed-ae80-94932dbcb9d4.png)


**Model Comparison and Conclusions:**

**We have a powerful candidate based on the ROC-AUC measure. Model Comparison and Conclusions All of our other models, including Random Forest and SVM, are outperformed by our XGBoost model.**                                                                                                      

**Data Analysis by Power BI**                                                                                                                                    

<img width="602" alt="image" src="https://user-images.githubusercontent.com/74384259/216321067-bc4c0c89-d0f3-468d-86b1-231f7c06b5ef.png">

**Data Analysis by SPSS**

**Statistics Tables of dataset**                                                                                                                                        

<img width="361" alt="image" src="https://user-images.githubusercontent.com/74384259/216130078-3063e97f-d4bf-4bdf-92fc-b7c4208483e0.png">
<img width="371" alt="image" src="https://user-images.githubusercontent.com/74384259/216130865-96d62028-681d-4230-8933-68166487c586.png">
<img width="374" alt="image" src="https://user-images.githubusercontent.com/74384259/216131067-a756b786-ab75-45f9-b48b-ebecf3c08110.png">
<img width="388" alt="image" src="https://user-images.githubusercontent.com/74384259/216131176-31d635c5-bc0e-4711-9ae1-6db70a3bd1bb.png">

**Statistics Charts of dataset**                                                                                                                                                                                                                                                                                                           
![image](https://user-images.githubusercontent.com/74384259/216126280-97a798c3-65ba-490a-946b-c8a693853d66.png)
![image](https://user-images.githubusercontent.com/74384259/216126596-fbf21d1b-0f33-40ea-9e53-3887d8007c01.png)
![image](https://user-images.githubusercontent.com/74384259/216131625-d3128156-5f6a-428e-b546-d40466124086.png)
![image](https://user-images.githubusercontent.com/74384259/216131670-53f82263-df3f-4fc6-b899-504081619931.png)
![image](https://user-images.githubusercontent.com/74384259/216131738-dd796675-4567-4882-be3f-0bfecdffc09a.png)
![image](https://user-images.githubusercontent.com/74384259/216131845-615d7427-75aa-4622-90da-ba5baf994017.png)
![image](https://user-images.githubusercontent.com/74384259/216131955-4206cc88-0e77-4ea0-8a30-8a8246354efd.png)
![image](https://user-images.githubusercontent.com/74384259/216131996-b13f567b-8fc1-4ed0-a603-1403ef00f5c0.png)
![image](https://user-images.githubusercontent.com/74384259/216132069-496a565b-e1e6-4e7f-9060-5c1c408aeb67.png)

Spilt analysis based on city="MADINAH"                                                                                                                         
![image](https://user-images.githubusercontent.com/74384259/216157929-e9933b35-dc76-4b1f-af3b-436f4bef93c0.png)

![image](https://user-images.githubusercontent.com/74384259/216157987-ef42d285-0f54-45e2-890d-1c6b3699c7c1.png)

![image](https://user-images.githubusercontent.com/74384259/216158109-e1c7bf55-bead-4d66-a3d2-3e999af73801.png)

![image](https://user-images.githubusercontent.com/74384259/216158676-6b19f32c-02db-4fa2-b897-61443cdf5f0f.png)

![image](https://user-images.githubusercontent.com/74384259/216158887-043c0526-6aef-41ba-bf6e-23899f555a40.png)

![image](https://user-images.githubusercontent.com/74384259/216158957-e77a9c55-c0e7-4cd7-8f29-e72d24137fad.png)

![image](https://user-images.githubusercontent.com/74384259/216159033-81f89895-6c4e-4230-8500-4caab013f3cf.png)

![image](https://user-images.githubusercontent.com/74384259/216159188-0bcba535-7c7c-45bf-baf2-1aeefdf3f05d.png)

<img width="344" alt="image" src="https://user-images.githubusercontent.com/74384259/216159413-598b46c8-d607-4566-afac-4210a7916469.png">

<img width="412" alt="image" src="https://user-images.githubusercontent.com/74384259/216159553-8f8f02d4-b3c9-498d-8ac0-0f40ccd03c83.png">

Spilt analysis based on city="JEDDAH"                                                                                                                

![image](https://user-images.githubusercontent.com/74384259/216159675-4c95afba-e94a-48f0-bce5-841db703b4f5.png)

![image](https://user-images.githubusercontent.com/74384259/216159735-5812b6ea-71d8-4d47-8219-e6e1c1783b17.png)

![image](https://user-images.githubusercontent.com/74384259/216159821-b33e159c-93a6-4fc3-8761-f28248b11c72.png)

![image](https://user-images.githubusercontent.com/74384259/216159897-f156c3c2-444c-4aec-8351-429be9017429.png)

Project demonstration video:

https://youtu.be/G7KKhxjlRow




