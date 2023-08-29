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
 * OAIEzsignsignature_sign_v1_Request.h
 *
 * Request for POST /1/object/ezsignsignature/{pkiEzsignsignatureID}/sign
 */

#ifndef OAIEzsignsignature_sign_v1_Request_H
#define OAIEzsignsignature_sign_v1_Request_H

#include <QJsonObject>

#include "OAICommon_File.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICommon_File;

class OAIEzsignsignature_sign_v1_Request : public OAIObject {
public:
    OAIEzsignsignature_sign_v1_Request();
    OAIEzsignsignature_sign_v1_Request(QString json);
    ~OAIEzsignsignature_sign_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSValue() const;
    void setSValue(const QString &s_value);
    bool is_s_value_Set() const;
    bool is_s_value_Valid() const;

    QString getEAttachmentsConfirmationDecision() const;
    void setEAttachmentsConfirmationDecision(const QString &e_attachments_confirmation_decision);
    bool is_e_attachments_confirmation_decision_Set() const;
    bool is_e_attachments_confirmation_decision_Valid() const;

    QString getSAttachmentsRefusalReason() const;
    void setSAttachmentsRefusalReason(const QString &s_attachments_refusal_reason);
    bool is_s_attachments_refusal_reason_Set() const;
    bool is_s_attachments_refusal_reason_Valid() const;

    QString getSSvg() const;
    void setSSvg(const QString &s_svg);
    bool is_s_svg_Set() const;
    bool is_s_svg_Valid() const;

    QList<OAICommon_File> getAObjFile() const;
    void setAObjFile(const QList<OAICommon_File> &a_obj_file);
    bool is_a_obj_file_Set() const;
    bool is_a_obj_file_Valid() const;

    bool isBIsAutomatic() const;
    void setBIsAutomatic(const bool &b_is_automatic);
    bool is_b_is_automatic_Set() const;
    bool is_b_is_automatic_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_value;
    bool m_s_value_isSet;
    bool m_s_value_isValid;

    QString m_e_attachments_confirmation_decision;
    bool m_e_attachments_confirmation_decision_isSet;
    bool m_e_attachments_confirmation_decision_isValid;

    QString m_s_attachments_refusal_reason;
    bool m_s_attachments_refusal_reason_isSet;
    bool m_s_attachments_refusal_reason_isValid;

    QString m_s_svg;
    bool m_s_svg_isSet;
    bool m_s_svg_isValid;

    QList<OAICommon_File> m_a_obj_file;
    bool m_a_obj_file_isSet;
    bool m_a_obj_file_isValid;

    bool m_b_is_automatic;
    bool m_b_is_automatic_isSet;
    bool m_b_is_automatic_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignsignature_sign_v1_Request)

#endif // OAIEzsignsignature_sign_v1_Request_H
