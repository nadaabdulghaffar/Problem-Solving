class MinStack:

    def __init__(self):
        self.stack = []
        self.stackMin = []

    def push(self, val: int) -> None:
        self.stack.append(val)
        # Push to min stack if empty OR val <= current min
        if not self.stackMin or val <= self.stackMin[-1]:
            self.stackMin.append(val)

    def pop(self) -> None:
        if self.stack:
            val = self.stack.pop()
            if val == self.stackMin[-1]:  # also remove from min stack
                self.stackMin.pop()

    def top(self) -> int:
        return self.stack[-1] if self.stack else None

    def getMin(self) -> int:
        return self.stackMin[-1] if self.stackMin else None
