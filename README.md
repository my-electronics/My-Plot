# MyPlot

MyPlot is a simple Qt widget for plotting. It has no further dependencies and can be easily integrate in Qt projects. 
MyPlot can display realtime data inside an Qt application as well as producing high quality plots for export.

Getting MyPlot to work with your Qt application is very easy:

- Download the latest version of MyPlot and copy the myplot.h and myplot.cpp file to you application directory.
- In Qt Creator right click on the your project and choose *Add Existing Files...*
- In the dialog, select the myplot.h and myplot.cpp file, to add them to your project.
- Place a QWidget on your form in the desired location. Right click on it and hit Promote to...
- In the dialog, enter "MyPlot" in the *Promoted Class Name* input field. The input next to *Header File* should be filled automatically with the correct myplot.h. Press "Add" to add Mylot to the promoted classes list and finally press *Promote* to turn the QWidget on your form into a MyPlot.
- You won't see any immediate visual changes in Qt Creater, but while running the application, you will see an empty plot with axes.
