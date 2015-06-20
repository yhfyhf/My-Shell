import os

os.system("./username.o")
input_str = raw_input()

while input_str.strip() != "exit":

    splited_input = input_str.split()
    cmd = splited_input[0]

    if cmd == "ls":
        os.system("./ls.o %s" % " ".join(splited_input[1:]))

    else:
        print "command not found: %s" % cmd

    os.system("./username.o")
    input_str = raw_input()


print "exit shell"
