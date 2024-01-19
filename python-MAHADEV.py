
from sciPy.optimize import fsolve

# Define a function that represents the equations
def equations(vars):
    L, W, H = vars
    eq1 = 4*L + 6*H - (4*L*W / (W + 6))
    eq2 = 6*L + 6*W - (4*L*W**2 / (W*H + 6*H))
    eq3 = L*W*H - 20
    return [eq1, eq2, eq3]

# Initial guess for L, W, and H
initial_guess = [1, 1, 1]

# Use fsolve to find the solution
solution = fsolve(equations, initial_guess)

L, W, H = solution
print(f"L = {L}, W = {W}, H = {H}")
