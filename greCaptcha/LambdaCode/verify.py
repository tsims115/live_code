import json
import requests

def lambda_handler(event, context):
    url = "https://www.google.com/recaptcha/api/siteverify?secret=6LelYjYkAAAAAGbrIFaPZVCBlhBFoSPJsIQeziYY&response=" + event["token"]
    res = requests.post(url)
    verified = res.text.split(":")[1].replace(" ", "").split(",")[0]
    if verified == "true":
        return {
        'statusCode': 200,
        'body': json.dumps('The user has been verified!')
        }
    return {
        'statusCode': 302,
        'body': json.dumps('The user may be a bot')
    }
