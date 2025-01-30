/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Franchisebroker_AutocompleteElement_Response.h
 *
 * A Franchisebroker AutocompleteElement Response
 */

#ifndef Franchisebroker_AutocompleteElement_Response_H
#define Franchisebroker_AutocompleteElement_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Franchisebroker_AutocompleteElement_Response : public Object {
public:
    Franchisebroker_AutocompleteElement_Response();
    Franchisebroker_AutocompleteElement_Response(QString json);
    ~Franchisebroker_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSFranchisebrokerName() const;
    void setSFranchisebrokerName(const QString &s_franchisebroker_name);
    bool is_s_franchisebroker_name_Set() const;
    bool is_s_franchisebroker_name_Valid() const;

    qint32 getPkiFranchisebrokerId() const;
    void setPkiFranchisebrokerId(const qint32 &pki_franchisebroker_id);
    bool is_pki_franchisebroker_id_Set() const;
    bool is_pki_franchisebroker_id_Valid() const;

    bool isBFranchisebrokerIsactive() const;
    void setBFranchisebrokerIsactive(const bool &b_franchisebroker_isactive);
    bool is_b_franchisebroker_isactive_Set() const;
    bool is_b_franchisebroker_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_franchisebroker_name;
    bool m_s_franchisebroker_name_isSet;
    bool m_s_franchisebroker_name_isValid;

    qint32 m_pki_franchisebroker_id;
    bool m_pki_franchisebroker_id_isSet;
    bool m_pki_franchisebroker_id_isValid;

    bool m_b_franchisebroker_isactive;
    bool m_b_franchisebroker_isactive_isSet;
    bool m_b_franchisebroker_isactive_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Franchisebroker_AutocompleteElement_Response)

#endif // Franchisebroker_AutocompleteElement_Response_H
