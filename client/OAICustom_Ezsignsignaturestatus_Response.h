/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.9
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICustom_Ezsignsignaturestatus_Response.h
 *
 * A Ezsignsignaturestatus Object and children to create a complete structure
 */

#ifndef OAICustom_Ezsignsignaturestatus_Response_H
#define OAICustom_Ezsignsignaturestatus_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICustom_Ezsignsignaturestatus_Response : public OAIObject {
public:
    OAICustom_Ezsignsignaturestatus_Response();
    OAICustom_Ezsignsignaturestatus_Response(QString json);
    ~OAICustom_Ezsignsignaturestatus_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getEEzsignsignaturestatusSteptype() const;
    void setEEzsignsignaturestatusSteptype(const QString &e_ezsignsignaturestatus_steptype);
    bool is_e_ezsignsignaturestatus_steptype_Set() const;
    bool is_e_ezsignsignaturestatus_steptype_Valid() const;

    qint32 getIEzsignsignaturestatusStep() const;
    void setIEzsignsignaturestatusStep(const qint32 &i_ezsignsignaturestatus_step);
    bool is_i_ezsignsignaturestatus_step_Set() const;
    bool is_i_ezsignsignaturestatus_step_Valid() const;

    qint32 getIEzsignsignaturestatusTotal() const;
    void setIEzsignsignaturestatusTotal(const qint32 &i_ezsignsignaturestatus_total);
    bool is_i_ezsignsignaturestatus_total_Set() const;
    bool is_i_ezsignsignaturestatus_total_Valid() const;

    qint32 getIEzsignsignaturestatusSigned() const;
    void setIEzsignsignaturestatusSigned(const qint32 &i_ezsignsignaturestatus_signed);
    bool is_i_ezsignsignaturestatus_signed_Set() const;
    bool is_i_ezsignsignaturestatus_signed_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString e_ezsignsignaturestatus_steptype;
    bool m_e_ezsignsignaturestatus_steptype_isSet;
    bool m_e_ezsignsignaturestatus_steptype_isValid;

    qint32 i_ezsignsignaturestatus_step;
    bool m_i_ezsignsignaturestatus_step_isSet;
    bool m_i_ezsignsignaturestatus_step_isValid;

    qint32 i_ezsignsignaturestatus_total;
    bool m_i_ezsignsignaturestatus_total_isSet;
    bool m_i_ezsignsignaturestatus_total_isValid;

    qint32 i_ezsignsignaturestatus_signed;
    bool m_i_ezsignsignaturestatus_signed_isSet;
    bool m_i_ezsignsignaturestatus_signed_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustom_Ezsignsignaturestatus_Response)

#endif // OAICustom_Ezsignsignaturestatus_Response_H
