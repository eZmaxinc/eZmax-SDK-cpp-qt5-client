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
 * OAIEzsigntemplatepackagemembership_createObject_v1_Response_mPayload.h
 *
 * Payload for POST /1/object/ezsigntemplatepackagemembership
 */

#ifndef OAIEzsigntemplatepackagemembership_createObject_v1_Response_mPayload_H
#define OAIEzsigntemplatepackagemembership_createObject_v1_Response_mPayload_H

#include <QJsonObject>

#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigntemplatepackagemembership_createObject_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsigntemplatepackagemembership_createObject_v1_Response_mPayload();
    OAIEzsigntemplatepackagemembership_createObject_v1_Response_mPayload(QString json);
    ~OAIEzsigntemplatepackagemembership_createObject_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getAPkiEzsigntemplatepackagemembershipId() const;
    void setAPkiEzsigntemplatepackagemembershipId(const QList<qint32> &a_pki_ezsigntemplatepackagemembership_id);
    bool is_a_pki_ezsigntemplatepackagemembership_id_Set() const;
    bool is_a_pki_ezsigntemplatepackagemembership_id_Valid() const;

    bool isBEzsigntemplatepackageNeedvalidation() const;
    void setBEzsigntemplatepackageNeedvalidation(const bool &b_ezsigntemplatepackage_needvalidation);
    bool is_b_ezsigntemplatepackage_needvalidation_Set() const;
    bool is_b_ezsigntemplatepackage_needvalidation_Valid() const;

    bool isBEzsignbulksendNeedvalidation() const;
    void setBEzsignbulksendNeedvalidation(const bool &b_ezsignbulksend_needvalidation);
    bool is_b_ezsignbulksend_needvalidation_Set() const;
    bool is_b_ezsignbulksend_needvalidation_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> m_a_pki_ezsigntemplatepackagemembership_id;
    bool m_a_pki_ezsigntemplatepackagemembership_id_isSet;
    bool m_a_pki_ezsigntemplatepackagemembership_id_isValid;

    bool m_b_ezsigntemplatepackage_needvalidation;
    bool m_b_ezsigntemplatepackage_needvalidation_isSet;
    bool m_b_ezsigntemplatepackage_needvalidation_isValid;

    bool m_b_ezsignbulksend_needvalidation;
    bool m_b_ezsignbulksend_needvalidation_isSet;
    bool m_b_ezsignbulksend_needvalidation_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatepackagemembership_createObject_v1_Response_mPayload)

#endif // OAIEzsigntemplatepackagemembership_createObject_v1_Response_mPayload_H
