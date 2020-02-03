---
noteId: "153787f0464511ea9ad3510428038c0b"
tags: []

---
- [Update on Feb 02](#update-on-feb-02)
- [Update on Jan 31](#update-on-jan-31)

# Update on Feb 02
   
---
Feb01的数据与Jan27-Jan31做出的推断差距很大，Feb02的差距也比较大，目前还不清楚这其中差距的来由。猜测可能与Jan21武汉的万家宴等活动，加上春节前出行造成确诊人数较其他数据爬升较快，当然也有可能是新医院和更多的核酸试剂投入使用。需要密切观察这几天的数据。    
![](.notebook/assets/images/2db3401909fe9cc5b2c638c9a34f2973.png)
问题如下：   
![](.notebook/assets/images/45b46df60c44cdbc03af7c438bc52865.png)
受到Feb01的数据影响，导致算法负解，且比率超过100%，我将会利用之后几天的数据来评估是否是Feb01开始后的新情况，还是Feb01是一个比较大的离群点。**预计在后天(Feb04)做鲁棒性检测**来确认。   
![](notebook:/assets/images/95c7ab60f67d6f1065340ac1810b7b12.png)
   
---
    
# Update on Jan 31
     
---
说一下今天的分析结果吧   
1. 图一是目前的增长情况
![](.notebook/assets/images/99e021cd6234c3e6ad6b3994bb67dae0.png)
2. 如果你第一天被认为是疑似患者，你第二天被确诊的可能性为69.59%，残差经过Chi^2检验满足正态分布，图3为残差的直方图   
![](.notebook/assets/images/432b7efec5a03bf7f9f64c052171ae7f.png)   
![](.notebook/assets/images/ab504dcb512386e6b621d1f25699038d.png)   
3. 一个密切观察者平均7天被解除观察（请求解释？可能是由于本病毒是一个轻尾分布，也说可能是因为由于位置的数据统计方式导致此处的计数与我想象不符）   
![](.notebook/assets/images/fa0489806849aaa10e3823f45a3b6896.png)
4. 一个确诊的人基本拥有10个左右的密切接触者
![](.notebook/assets/images/22727d6125aa35a2ef394e7a00ea5c29.png)   
5. 密切接触者转化为疑似或者确诊的概率为4.26%，残差也经过Chi^2检验满足态分布。   
![](.notebook/assets/images/4b122f88e605fb0b81bd03b49b5bca29.png)   
![](.notebook/assets/images/700136213dc79466a6cf8fac989e92bc.png)   
我会把所有Matlab代码和数据延时更新在我的公开笔记本[pubnotebook/新型肺炎 at master · benhaotang/pubnotebook · GitHub](https://github.com/benhaotang/pubnotebook/tree/master/%E6%96%B0%E5%9E%8B%E8%82%BA%E7%82%8E)中的新型病毒文件夹里，大家可以查看    

---