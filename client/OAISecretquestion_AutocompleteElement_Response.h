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
 * OAISecretquestion_AutocompleteElement_Response.h
 *
 * A Secretquestion AutocompleteElement Response
 */

#ifndef OAISecretquestion_AutocompleteElement_Response_H
#define OAISecretquestion_AutocompleteElement_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAISecretquestion_AutocompleteElement_Response : public OAIObject {
public:
    OAISecretquestion_AutocompleteElement_Response();
    OAISecretquestion_AutocompleteElement_Response(QString json);
    ~OAISecretquestion_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSSecretquestionTextX() const;
    void setSSecretquestionTextX(const QString &s_secretquestion_text_x);
    bool is_s_secretquestion_text_x_Set() const;
    bool is_s_secretquestion_text_x_Valid() const;

    qint32 getPkiSecretquestionId() const;
    void setPkiSecretquestionId(const qint32 &pki_secretquestion_id);
    bool is_pki_secretquestion_id_Set() const;
    bool is_pki_secretquestion_id_Valid() const;

    bool isBSecretquestionIsactive() const;
    void setBSecretquestionIsactive(const bool &b_secretquestion_isactive);
    bool is_b_secretquestion_isactive_Set() const;
    bool is_b_secretquestion_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_secretquestion_text_x;
    bool m_s_secretquestion_text_x_isSet;
    bool m_s_secretquestion_text_x_isValid;

    qint32 m_pki_secretquestion_id;
    bool m_pki_secretquestion_id_isSet;
    bool m_pki_secretquestion_id_isValid;

    bool m_b_secretquestion_isactive;
    bool m_b_secretquestion_isactive_isSet;
    bool m_b_secretquestion_isactive_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAISecretquestion_AutocompleteElement_Response)

#endif // OAISecretquestion_AutocompleteElement_Response_H
