/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.5
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfolder_getEzsigndocuments_v1_Response_mPayload.h
 *
 * Payload for the /1/object/ezsignfolder/{pkiEzsignfolder}/getEzsigndocuments API Request
 */

#ifndef OAIEzsignfolder_getEzsigndocuments_v1_Response_mPayload_H
#define OAIEzsignfolder_getEzsigndocuments_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsigndocument_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigndocument_ResponseCompound;

class OAIEzsignfolder_getEzsigndocuments_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsignfolder_getEzsigndocuments_v1_Response_mPayload();
    OAIEzsignfolder_getEzsigndocuments_v1_Response_mPayload(QString json);
    ~OAIEzsignfolder_getEzsigndocuments_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsigndocument_ResponseCompound> getAObjEzsigndocument() const;
    void setAObjEzsigndocument(const QList<OAIEzsigndocument_ResponseCompound> &a_obj_ezsigndocument);
    bool is_a_obj_ezsigndocument_Set() const;
    bool is_a_obj_ezsigndocument_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsigndocument_ResponseCompound> a_obj_ezsigndocument;
    bool m_a_obj_ezsigndocument_isSet;
    bool m_a_obj_ezsigndocument_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfolder_getEzsigndocuments_v1_Response_mPayload)

#endif // OAIEzsignfolder_getEzsigndocuments_v1_Response_mPayload_H
