# Define the state categories
eastern_states = ["DE", "NC", "NJ", "VA"]
midwestern_states = ["IA", "IN", "KS", "WI"]
southern_states = ["TX", "LA", "AL", "AK"]
western_states = ["CA", "OR", "WA", "NV"]

# Prompt the user for a state name
state = input("Enter the name of a state (or END to quit): ").upper()

# Keep prompting the user until they enter "END"
while state != "END":
    # Check which category the state belongs to and print the result
    if state in eastern_states:
        print(state, "is in the Eastern region.")
    elif state in midwestern_states:
        print(state, "is in the Midwestern region.")
    elif state in southern_states:
        print(state, "is in the Southern region.")
    elif state in western_states:
        print(state, "is in the Western region.")
    else:
        print("Unknown state.")

    # Prompt the user for another state name
    state = input("Enter the name of a state (or END to quit): ").upper()