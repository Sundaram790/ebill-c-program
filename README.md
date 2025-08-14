# Electricity Bill Generator (C)💡

This is a simple C program to calculate an electricity bill based on:
- Customer name
- Connection type (Domestic or Commercial)
- Units consumed

The program uses a slab-based rate system:
- Domestic:
  - 0–100 units → ₹1.50/unit
  - 101–300 units → ₹2.00/unit
  - Above 300 units → ₹3.00/unit
- Commercial:
  - 0–100 units → ₹2.50/unit
  - 101–300 units → ₹4.00/unit
  - Above 300 units → ₹5.00/unit

A fixed meter maintenance charge (₹50) is added to every bill.  
The bill is then displayed in a formatted layout.

Code and output screenshot -> [
