import tkinter as tk
from tkinter import ttk
import time

def start_progress():
    progress.start()

    for i in range(101):
        time.sleep(0.05)
        progress['value'] = i
        root_window.update_idletasks()
    progress.stop()

root_window = tk.Tk()
root_window.title("Progressbar")

# Create a progressbar widget
progress = ttk.Progressbar(root_window, orient = "horizontal", length = 300,
                            mode = "determinate")
progress.pack(pady=20)

# Button to start progress
start_button = tk.Button(root_window,text = "Start Progress",
                         command = start_progress)
start_button.pack(pady = 10)

root_window.mainloop()
                          
