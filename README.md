# Adaptive Random Average Filter

This project implements a dynamic data filtering algorithm in C. It focuses on statistical thresholding, ensuring that all elements in a randomly generated dataset meet a specific criteria based on the dataset's own arithmetic mean.

## ⚙️ Algorithm Logic

The process follows a "Generate-Test-Regenerate" model:

1.  **Initialization:**
    * User defines the sample size $N$.
    * Generates $N$ random integers in the range $[0, 100]$.
2.  **Statistical Analysis:**
    * Computes the arithmetic mean ($\mu$) of the initial set:
        $$\mu = \frac{1}{N} \sum_{i=0}^{N-1} x_i$$
3.  **Adaptive Filtering:**
    * Iterates through the array.
    * **Condition:** If an element $x_i < \mu$, it triggers a regeneration loop.
    * **Regeneration:** A new random value $x_{new}$ is generated repeatedly until $x_{new} > \mu$.
    * **Update:** The array is updated in-place.

## 🚀 Usage Scenario

This logic is useful in simulations where "underperforming" data points need to be artificially boosted to meet the group standard, ensuring a minimum baseline quality relative to the initial average.

### Build & Run
```bash
gcc main.c -o average_filter
./average_filter
