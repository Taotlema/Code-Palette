# File descirption: This file contains the model_based_reflex AI model, its components and interface

# Imports
import sys, time

# slow_print function: Allows program to imitate human typing
def slow_print(str):
    for i in str:
        sys.stdout.write(i)
        sys.stdout.flush()
        time.sleep(.11)

# Perception Function
def percieve(room_state, internal_model):
    # Allows internal model to percieve the room state
    internal_model["history"].append(room_state)
    internal_model["current_stste"] = room_state


# Decision-Making Function
def decide_action(internal_model):
    # fields
    current_state = internal_model["current_state"]
    history = internal_model["history"]

    # AI makes a decision based on the current state of the room
    if current_state["occupied"]:
        return "wait"
    elif current_state["obstacle"]:
        return "avod_obstacle"
    elif len(history) > 1 and history[-2]["cleanliness"] == "dirty":
        return "move_to_next_room"
    else:
        return "wait"


# Action-Preforming Function
def perform_action(action):
    if action == "clean":
        print("Cleaning the room.")
    elif action == "avoid_obstacle":
        print("Avoiding the obstacle.")
    elif action == "wait":
        print("Waiting for the room to be unoccupied.")
    elif action == "move_to_next_room":
        print("Moving to the next room.")

# User Interface

# Header
print()
print("*-*---*-*---*-*-*---*-*---*-*-*---*-*---*-")
print("model-based reflex Model - Interface")
print("Author: Ayemhenre Isikhuemhen, 01/31/2024")
print("*-*---*-*---*-*-*---*-*---*-*-*---*-*---*-")
print()

# User instruction
slow_print("Provide input on the state of room, for the AI model")
print()

# Allowing User to proceed: Yes or No question
slow_print("Do you understand?")
print("")
print("--------------")
print("1.Yes")
print("2.No")

# Loop for user input
u_loop = True

while u_loop:
    # error occurs when using slow-print in while loop
    try:
        user_input = int(input("Enter a number: "))
        print("User: ", user_input)
        break;
    except ValueError:
        print("Please enter a number")

# Conditional for user input
if user_input == 1:
    slow_print("Okay")
elif user_input == 2:
    slow_print("You will enter numbers to descirbe problem state for the model ")
elif user_input != 1 or user_input != 2:
    print("This is not a choice")
    u_loop = False

# Model testing sequence: Allows user to engage with AI
internal_model = {"history": [], "current_state": {}}

# Model testing sequence: Allows user to engage with AI
print("")

s_loop = True

while s_loop:
    # Room State Input
    room_state = {
        'cleanliness': input("Enter room cleanliness (clean/dirty): "),
        'obstacle': input("Is there an obstacle? (True/False): ").lower() == 'true',
        'occupied': input("Is the room occupied? (True/False): ").lower() == 'true'
    }
    print()

    # Model Reaction
    perceived_state = percieve(room_state, internal_model)
    action = decide_action(internal_model)
    perform_action(action)
