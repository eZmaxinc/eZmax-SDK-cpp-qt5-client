/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.
 *
 * The version of the OpenAPI document: 1.0.30
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfolder_createObject_v1_Request.h
 *
 * Request for the /1/object/ezsignfolder/createObject API Request
 */

#ifndef OAIEzsignfolder_createObject_v1_Request_H
#define OAIEzsignfolder_createObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsignfolder_Request.h"
#include "OAIEzsignfolder_RequestCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignfolder_createObject_v1_Request : public OAIObject {
public:
    OAIEzsignfolder_createObject_v1_Request();
    OAIEzsignfolder_createObject_v1_Request(QString json);
    ~OAIEzsignfolder_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignfolder_Request getObjEzsignfolder() const;
    void setObjEzsignfolder(const OAIEzsignfolder_Request &obj_ezsignfolder);
    bool is_obj_ezsignfolder_Set() const;
    bool is_obj_ezsignfolder_Valid() const;

    OAIEzsignfolder_RequestCompound getObjEzsignfolderCompound() const;
    void setObjEzsignfolderCompound(const OAIEzsignfolder_RequestCompound &obj_ezsignfolder_compound);
    bool is_obj_ezsignfolder_compound_Set() const;
    bool is_obj_ezsignfolder_compound_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignfolder_Request obj_ezsignfolder;
    bool m_obj_ezsignfolder_isSet;
    bool m_obj_ezsignfolder_isValid;

    OAIEzsignfolder_RequestCompound obj_ezsignfolder_compound;
    bool m_obj_ezsignfolder_compound_isSet;
    bool m_obj_ezsignfolder_compound_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfolder_createObject_v1_Request)

#endif // OAIEzsignfolder_createObject_v1_Request_H
