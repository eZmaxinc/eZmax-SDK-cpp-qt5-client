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
 * OAITimezone_AutocompleteElement_Response.h
 *
 * A Timezone AutocompleteElement Response
 */

#ifndef OAITimezone_AutocompleteElement_Response_H
#define OAITimezone_AutocompleteElement_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAITimezone_AutocompleteElement_Response : public OAIObject {
public:
    OAITimezone_AutocompleteElement_Response();
    OAITimezone_AutocompleteElement_Response(QString json);
    ~OAITimezone_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSTimezoneName() const;
    void setSTimezoneName(const QString &s_timezone_name);
    bool is_s_timezone_name_Set() const;
    bool is_s_timezone_name_Valid() const;

    qint32 getPkiTimezoneId() const;
    void setPkiTimezoneId(const qint32 &pki_timezone_id);
    bool is_pki_timezone_id_Set() const;
    bool is_pki_timezone_id_Valid() const;

    bool isBTimezoneIsactive() const;
    void setBTimezoneIsactive(const bool &b_timezone_isactive);
    bool is_b_timezone_isactive_Set() const;
    bool is_b_timezone_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_timezone_name;
    bool m_s_timezone_name_isSet;
    bool m_s_timezone_name_isValid;

    qint32 pki_timezone_id;
    bool m_pki_timezone_id_isSet;
    bool m_pki_timezone_id_isValid;

    bool b_timezone_isactive;
    bool m_b_timezone_isactive_isSet;
    bool m_b_timezone_isactive_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAITimezone_AutocompleteElement_Response)

#endif // OAITimezone_AutocompleteElement_Response_H
