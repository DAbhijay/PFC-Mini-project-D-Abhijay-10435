START
INPUT principal P
INPUT annual interest rate A
INPUT tenure in years Y

R = A / (12 * 100)
N = Y * 12

EMI = (P * R * (1+R)^N) / ((1+R)^N - 1)

balance = P
totalInterest = 0

FOR month = 1 to N
    interest = balance * R
    principalPaid = EMI - interest
    balance = balance - principalPaid
    totalInterest = totalInterest + interest

    DISPLAY month, EMI, interest, principalPaid, balance
END FOR

DISPLAY totalInterest
DISPLAY totalAmount = P + totalInterest
END
