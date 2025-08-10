# test.py
from ultralytics import YOLO
import cv2
import matplotlib.pyplot as plt
import os

# === CONFIGURATION ===
image_path = "/home/biswash/up_work/final_output/images/images/tb0_0_2025-05-28_18-24-51.jpg"  # Put your image here
model_path = "best.pt"  # Your custom trained model

confidence_threshold = 0.5

# === LOAD MODEL ===
model = YOLO(model_path)

# === RUN PREDICTION ===
results = model.predict(source=image_path, conf=confidence_threshold)

# === LOAD IMAGE ===
image = cv2.imread(image_path)
image = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)

# === PROCESS DETECTIONS ===
boxes = results[0].boxes
if boxes and boxes.xyxy is not None:
    for i in range(len(boxes.xyxy)):
        x1, y1, x2, y2 = map(int, boxes.xyxy[i])
        conf = float(boxes.conf[i])
        cls = int(boxes.cls[i])
        label = model.names[cls]

        cv2.rectangle(image, (x1, y1), (x2, y2), (0, 255, 0), 2)
        cv2.putText(image, f"{label}: {conf:.2f}", (x1, y1 - 10),
                    cv2.FONT_HERSHEY_SIMPLEX, 0.7, (255, 0, 0), 2)
else:
    print("⚠️ No detections found.")

# === DISPLAY ===
plt.figure(figsize=(10, 10))
plt.imshow(image)
plt.axis('off')
plt.title("Detections")
plt.show()