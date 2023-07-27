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
 * OAIEmailtype_AutocompleteElement_Response.h
 *
 * A Emailtype AutocompleteElement Response
 */

#ifndef OAIEmailtype_AutocompleteElement_Response_H
#define OAIEmailtype_AutocompleteElement_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEmailtype_AutocompleteElement_Response : public OAIObject {
public:
    OAIEmailtype_AutocompleteElement_Response();
    OAIEmailtype_AutocompleteElement_Response(QString json);
    ~OAIEmailtype_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEmailtypeId() const;
    void setPkiEmailtypeId(const qint32 &pki_emailtype_id);
    bool is_pki_emailtype_id_Set() const;
    bool is_pki_emailtype_id_Valid() const;

    QString getSEmailtypeNameX() const;
    void setSEmailtypeNameX(const QString &s_emailtype_name_x);
    bool is_s_emailtype_name_x_Set() const;
    bool is_s_emailtype_name_x_Valid() const;

    bool isBEmailtypeIsactive() const;
    void setBEmailtypeIsactive(const bool &b_emailtype_isactive);
    bool is_b_emailtype_isactive_Set() const;
    bool is_b_emailtype_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_emailtype_id;
    bool m_pki_emailtype_id_isSet;
    bool m_pki_emailtype_id_isValid;

    QString s_emailtype_name_x;
    bool m_s_emailtype_name_x_isSet;
    bool m_s_emailtype_name_x_isValid;

    bool b_emailtype_isactive;
    bool m_b_emailtype_isactive_isSet;
    bool m_b_emailtype_isactive_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEmailtype_AutocompleteElement_Response)

#endif // OAIEmailtype_AutocompleteElement_Response_H
