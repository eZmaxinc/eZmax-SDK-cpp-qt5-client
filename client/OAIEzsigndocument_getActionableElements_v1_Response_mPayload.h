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
 * OAIEzsigndocument_getActionableElements_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/ezsigndocument/{pkiEzsigndocumentID}/getActionableElements
 */

#ifndef OAIEzsigndocument_getActionableElements_v1_Response_mPayload_H
#define OAIEzsigndocument_getActionableElements_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsignformfieldgroup_ResponseCompound.h"
#include "OAIEzsignsignature_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignsignature_ResponseCompound;
class OAIEzsignformfieldgroup_ResponseCompound;

class OAIEzsigndocument_getActionableElements_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsigndocument_getActionableElements_v1_Response_mPayload();
    OAIEzsigndocument_getActionableElements_v1_Response_mPayload(QString json);
    ~OAIEzsigndocument_getActionableElements_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsignsignature_ResponseCompound> getAObjEzsignsignature() const;
    void setAObjEzsignsignature(const QList<OAIEzsignsignature_ResponseCompound> &a_obj_ezsignsignature);
    bool is_a_obj_ezsignsignature_Set() const;
    bool is_a_obj_ezsignsignature_Valid() const;

    QList<OAIEzsignformfieldgroup_ResponseCompound> getAObjEzsignformfieldgroup() const;
    void setAObjEzsignformfieldgroup(const QList<OAIEzsignformfieldgroup_ResponseCompound> &a_obj_ezsignformfieldgroup);
    bool is_a_obj_ezsignformfieldgroup_Set() const;
    bool is_a_obj_ezsignformfieldgroup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsignsignature_ResponseCompound> a_obj_ezsignsignature;
    bool m_a_obj_ezsignsignature_isSet;
    bool m_a_obj_ezsignsignature_isValid;

    QList<OAIEzsignformfieldgroup_ResponseCompound> a_obj_ezsignformfieldgroup;
    bool m_a_obj_ezsignformfieldgroup_isSet;
    bool m_a_obj_ezsignformfieldgroup_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigndocument_getActionableElements_v1_Response_mPayload)

#endif // OAIEzsigndocument_getActionableElements_v1_Response_mPayload_H
