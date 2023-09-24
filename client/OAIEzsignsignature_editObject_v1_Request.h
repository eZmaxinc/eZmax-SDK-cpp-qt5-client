/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignsignature_editObject_v1_Request.h
 *
 * Request for PUT /1/object/ezsignsignature/{pkiEzsignsignatureID}
 */

#ifndef OAIEzsignsignature_editObject_v1_Request_H
#define OAIEzsignsignature_editObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsignsignature_RequestCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignsignature_RequestCompound;

class OAIEzsignsignature_editObject_v1_Request : public OAIObject {
public:
    OAIEzsignsignature_editObject_v1_Request();
    OAIEzsignsignature_editObject_v1_Request(QString json);
    ~OAIEzsignsignature_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignsignature_RequestCompound getObjEzsignsignature() const;
    void setObjEzsignsignature(const OAIEzsignsignature_RequestCompound &obj_ezsignsignature);
    bool is_obj_ezsignsignature_Set() const;
    bool is_obj_ezsignsignature_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignsignature_RequestCompound m_obj_ezsignsignature;
    bool m_obj_ezsignsignature_isSet;
    bool m_obj_ezsignsignature_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignsignature_editObject_v1_Request)

#endif // OAIEzsignsignature_editObject_v1_Request_H
