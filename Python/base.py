from datetime import datetime
import json

class Base:
    __nb_objects = 0
    def __init__(self, **kwargs):
        print(kwargs)
        if kwargs:
            for k, v in kwargs.items():
                if k == 'created_at':
                    v = datetime.fromisoformat(v)
                setattr(self, k, v)
        else:
            Base.__nb_objects += 1
            self.id = Base.__nb_objects
            self.created_at = datetime.now()

    def to_dict(self):
        new_dict = {}
        for k, v in self.__dict__.items():
            new_dict[k] = v
        new_dict["created_at"] = datetime.isoformat(self.created_at)
        return new_dict

    def to_json_string(self):
        return json.dumps(self.to_dict())
