# import package require for windowing
import tkinter

# Create a main window by creating object of
# class Tk
root_window = tkinter.Tk()

# Set title of a window
root_window.title('Tkinter- Python ')

# Set minimum width and height of a window
root_window.minsize(200, 150)

# Set maximum width and height of a window
root_window.maxsize(800, 600)

# Create a label object
# initialization data: text of label, font color and font info of label
my_name = tkinter.Label(root_window, text='Jyoti Jagave',
                        fg='green', font=('Times New Roman', 12, 'bold'))

# Place the label on window anchoring it to a center
my_name.place(relx=0.5, rely=0.5, anchor=tkinter.CENTER)

# Enter the event loop
root_window.mainloop()
