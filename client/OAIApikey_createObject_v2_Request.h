/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIApikey_createObject_v2_Request.h
 *
 * Request for POST /2/object/apikey
 */

#ifndef OAIApikey_createObject_v2_Request_H
#define OAIApikey_createObject_v2_Request_H

#include <QJsonObject>

#include "OAIApikey_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIApikey_RequestCompound;

class OAIApikey_createObject_v2_Request : public OAIObject {
public:
    OAIApikey_createObject_v2_Request();
    OAIApikey_createObject_v2_Request(QString json);
    ~OAIApikey_createObject_v2_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIApikey_RequestCompound> getAObjApikey() const;
    void setAObjApikey(const QList<OAIApikey_RequestCompound> &a_obj_apikey);
    bool is_a_obj_apikey_Set() const;
    bool is_a_obj_apikey_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIApikey_RequestCompound> a_obj_apikey;
    bool m_a_obj_apikey_isSet;
    bool m_a_obj_apikey_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIApikey_createObject_v2_Request)

#endif // OAIApikey_createObject_v2_Request_H
