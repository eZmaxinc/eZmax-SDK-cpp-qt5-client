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
 * OAIEzsigndocument_editEzsignsignatures_v1_Request.h
 *
 * Request for PUT /1/object/ezsigndocument/{pkiEzsigndocumentID}/editEzsignsignatures
 */

#ifndef OAIEzsigndocument_editEzsignsignatures_v1_Request_H
#define OAIEzsigndocument_editEzsignsignatures_v1_Request_H

#include <QJsonObject>

#include "OAIEzsignsignature_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignsignature_RequestCompound;

class OAIEzsigndocument_editEzsignsignatures_v1_Request : public OAIObject {
public:
    OAIEzsigndocument_editEzsignsignatures_v1_Request();
    OAIEzsigndocument_editEzsignsignatures_v1_Request(QString json);
    ~OAIEzsigndocument_editEzsignsignatures_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsignsignature_RequestCompound> getAObjEzsignsignature() const;
    void setAObjEzsignsignature(const QList<OAIEzsignsignature_RequestCompound> &a_obj_ezsignsignature);
    bool is_a_obj_ezsignsignature_Set() const;
    bool is_a_obj_ezsignsignature_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsignsignature_RequestCompound> m_a_obj_ezsignsignature;
    bool m_a_obj_ezsignsignature_isSet;
    bool m_a_obj_ezsignsignature_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigndocument_editEzsignsignatures_v1_Request)

#endif // OAIEzsigndocument_editEzsignsignatures_v1_Request_H
