import cv2
ref_image=cv2.imread('flappy.jpeg')
for i in range(len(ref_image)):
    for j in range(len(ref_image[i])):
        br=(0.21*ref_image[i][j][0]+0.72*ref_image[i][j][1]+0.02*ref_image[i][j][2])/3
        if br>42:
            ref_image[i][j]=[0,0,0]
        else:
            ref_image[i][j]=[255,255,255]
cv2.imshow("image",ref_image)
cv2.waitKey(0)

    
            
