/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.15
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfoldertype_editObject_v1_Request.h
 *
 * Request for PUT /1/object/ezsignfoldertype/{pkiEzsignfoldertypeID}
 */

#ifndef OAIEzsignfoldertype_editObject_v1_Request_H
#define OAIEzsignfoldertype_editObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsignfoldertype_RequestCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignfoldertype_RequestCompound;

class OAIEzsignfoldertype_editObject_v1_Request : public OAIObject {
public:
    OAIEzsignfoldertype_editObject_v1_Request();
    OAIEzsignfoldertype_editObject_v1_Request(QString json);
    ~OAIEzsignfoldertype_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignfoldertype_RequestCompound getObjEzsignfoldertype() const;
    void setObjEzsignfoldertype(const OAIEzsignfoldertype_RequestCompound &obj_ezsignfoldertype);
    bool is_obj_ezsignfoldertype_Set() const;
    bool is_obj_ezsignfoldertype_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignfoldertype_RequestCompound obj_ezsignfoldertype;
    bool m_obj_ezsignfoldertype_isSet;
    bool m_obj_ezsignfoldertype_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfoldertype_editObject_v1_Request)

#endif // OAIEzsignfoldertype_editObject_v1_Request_H
