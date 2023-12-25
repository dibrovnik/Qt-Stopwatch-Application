# Stopwatch Application

This project is a simple stopwatch application developed using the Qt framework with C++. The application allows users to measure time with precision up to 1 millisecond, providing features such as start, stop, pause, and reset functionalities. The user interface includes a central label displaying the elapsed time in the format "hh:mm:ss:zzz" and a toolbar with individual buttons for each action.

## Features

- **Start:** Initiates the stopwatch, measuring time with 1-millisecond precision.
- **Stop:** Halts the stopwatch, allowing users to record the elapsed time.
- **Pause:** Temporarily pauses the stopwatch without resetting the time.
- **Reset:** Resets the stopwatch, setting the elapsed time back to zero.

## Implementation Details

### Qt Components Used

1. **QAction:** Utilized to create individual actions for start, stop, pause, and reset functionalities.
2. **QElapsedTimer:** Employed for high-precision time measurements, reducing the impact of system clock variations.
3. **QToolBar:** Implemented to create a user-friendly toolbar with distinct buttons.
4. **QTimer:** While not used in the final implementation, it was considered initially but excluded due to potential inaccuracies in time measurement.

### Project Insights

During the development of this project, the following key knowledge was acquired:

- Understanding and implementation of actions using `QAction`.
- Effective utilization of `QElapsedTimer` for accurate time measurement, minimizing discrepancies caused by system clock variations.
- Integration of `QToolBar` to create a user-friendly toolbar with distinct buttons.
- Knowledge of `QTimer` and considerations for its potential inaccuracies in time measurement, leading to the selection of `QElapsedTimer` for this application.

## Notes

The decision not to use the `QTimer` library was based on the consideration that it might introduce inaccuracies in time measurement, which are crucial for the precision required in a stopwatch application.

Feel free to explore and contribute to the project! If you have any suggestions or improvements, please open an issue or create a pull request.
