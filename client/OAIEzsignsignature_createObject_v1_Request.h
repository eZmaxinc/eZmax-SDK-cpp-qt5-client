/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.41
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignsignature_createObject_v1_Request.h
 *
 * Request for the /1/object/ezsignsignature/createObject API Request
 */

#ifndef OAIEzsignsignature_createObject_v1_Request_H
#define OAIEzsignsignature_createObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsignsignature_Request.h"
#include "OAIEzsignsignature_RequestCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignsignature_createObject_v1_Request : public OAIObject {
public:
    OAIEzsignsignature_createObject_v1_Request();
    OAIEzsignsignature_createObject_v1_Request(QString json);
    ~OAIEzsignsignature_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignsignature_Request getObjEzsignsignature() const;
    void setObjEzsignsignature(const OAIEzsignsignature_Request &obj_ezsignsignature);
    bool is_obj_ezsignsignature_Set() const;
    bool is_obj_ezsignsignature_Valid() const;

    OAIEzsignsignature_RequestCompound getObjEzsignsignatureCompound() const;
    void setObjEzsignsignatureCompound(const OAIEzsignsignature_RequestCompound &obj_ezsignsignature_compound);
    bool is_obj_ezsignsignature_compound_Set() const;
    bool is_obj_ezsignsignature_compound_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignsignature_Request obj_ezsignsignature;
    bool m_obj_ezsignsignature_isSet;
    bool m_obj_ezsignsignature_isValid;

    OAIEzsignsignature_RequestCompound obj_ezsignsignature_compound;
    bool m_obj_ezsignsignature_compound_isSet;
    bool m_obj_ezsignsignature_compound_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignsignature_createObject_v1_Request)

#endif // OAIEzsignsignature_createObject_v1_Request_H
