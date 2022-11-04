var AWS = require('aws-sdk');
var ses = new AWS.SES({ region: "us-east-1" });

var RECEIVER = '';
var SENDER = '';

exports.handler = async function (event, context) {
    console.log('Received event:', event);
    return sendEmail(event);
};

function sendEmail (event) {
    var params = {
        Destination: {
            ToAddresses: [RECEIVER]
        },
        Message: {
            Body: {
                Text: {
                    Data: 'name: ' + event.name + '\nphone: ' + event.phone + '\nemail: ' + event.email + '\ndesc: ' + event.desc,
                    Charset: 'UTF-8'
                }
            },
            Subject: {
                Data: event.name + ' is trying contact you'
            }
        },
        Source: SENDER
    };
    return ses.sendEmail(params).promise();
}
