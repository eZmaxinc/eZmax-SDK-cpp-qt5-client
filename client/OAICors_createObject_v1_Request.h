/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICors_createObject_v1_Request.h
 *
 * Request for POST /1/object/cors
 */

#ifndef OAICors_createObject_v1_Request_H
#define OAICors_createObject_v1_Request_H

#include <QJsonObject>

#include "OAICors_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICors_RequestCompound;

class OAICors_createObject_v1_Request : public OAIObject {
public:
    OAICors_createObject_v1_Request();
    OAICors_createObject_v1_Request(QString json);
    ~OAICors_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAICors_RequestCompound> getAObjCors() const;
    void setAObjCors(const QList<OAICors_RequestCompound> &a_obj_cors);
    bool is_a_obj_cors_Set() const;
    bool is_a_obj_cors_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAICors_RequestCompound> a_obj_cors;
    bool m_a_obj_cors_isSet;
    bool m_a_obj_cors_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICors_createObject_v1_Request)

#endif // OAICors_createObject_v1_Request_H
