/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfolder_editObject_v1_Request.h
 *
 * Request for PUT /1/object/ezsignfolder/{pkiEzsignfolderID}
 */

#ifndef OAIEzsignfolder_editObject_v1_Request_H
#define OAIEzsignfolder_editObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsignfolder_RequestCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignfolder_RequestCompound;

class OAIEzsignfolder_editObject_v1_Request : public OAIObject {
public:
    OAIEzsignfolder_editObject_v1_Request();
    OAIEzsignfolder_editObject_v1_Request(QString json);
    ~OAIEzsignfolder_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignfolder_RequestCompound getObjEzsignfolder() const;
    void setObjEzsignfolder(const OAIEzsignfolder_RequestCompound &obj_ezsignfolder);
    bool is_obj_ezsignfolder_Set() const;
    bool is_obj_ezsignfolder_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignfolder_RequestCompound obj_ezsignfolder;
    bool m_obj_ezsignfolder_isSet;
    bool m_obj_ezsignfolder_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfolder_editObject_v1_Request)

#endif // OAIEzsignfolder_editObject_v1_Request_H
