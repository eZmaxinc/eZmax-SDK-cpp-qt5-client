/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.  We provide SDKs for customers. They are generated using OpenAPI codegen, we encourage customers to use them as we also provide samples for them.  You can choose to build your own implementation manually or can use any compatible OpenAPI 3.0 generator like Swagger Codegen, OpenAPI codegen or any commercial generators.  If you need helping understanding how to use this API, don't waste too much time looking for it. Contact support-api@ezmax.ca, we're here to help. We are developpers so we know programmers don't like bad documentation. If you don't find what you need in the documentation, let us know, we'll improve it and put you rapidly up on track.
 *
 * The version of the OpenAPI document: 1.0.27
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_ENUM_H
#define OAI_ENUM_H

#include <QJsonValue>
#include <QMetaType>
#include <QString>

namespace OpenAPI {

class OAIEnum {
public:
    OAIEnum() {}

    OAIEnum(QString jsonString) {
        fromJson(jsonString);
    }

    virtual ~OAIEnum() {}

    virtual QJsonValue asJsonValue() const {
        return QJsonValue(jstr);
    }

    virtual QString asJson() const {
        return jstr;
    }

    virtual void fromJson(QString jsonString) {
        jstr = jsonString;
    }

    virtual void fromJsonValue(QJsonValue jval) {
        jstr = jval.toString();
    }

    virtual bool isSet() const {
        return false;
    }

    virtual bool isValid() const {
        return true;
    }

private:
    QString jstr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEnum)

#endif // OAI_ENUM_H
