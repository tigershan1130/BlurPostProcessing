# BlurPostProcessing
This is a selective Post processing using Custom Depth in UE4

解决问题： 3D UI/物体 如何不受UE4 的 Post Processing 影响， 但是还是可以和受到Post processing 的物体进行深度交互.

1. 我们利用了Post processing Color Grading 里的 Saturation 设置为0
2. 我们自己写了一个简单的Guassian Blur
3. 我们利用Custom Depth 去除所有Post processing 效果

![alt text](https://github.com/tigershan1130/BlurPostProcessing/blob/master/HighresScreenshot00001.png)

注意：
获取的是PostProcessing2 也就是 Pre ToneMapping 之前的Scene Color, 有可能有些效果我们想要的确没有Apply 到此物体上...
暂时没有更好的方法， 自己把一些效果Apply 上去， 或者利用自己的 Scene Color RT?

