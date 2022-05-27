from base import Base
from datetime import datetime

if __name__ == "__main__":
    new_dict = {"id": 43, "name": "Kwarg Test", 'created_at': "2022-05-26T23:00:22.831726", "width": 5, "height": 10}
    newBase = Base(**new_dict)
    print(newBase.to_dict())

