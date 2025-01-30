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
 * Ezsigntemplatedocument_extractText_v1_Response_mPayload.h
 *
 * Response for POST /1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/ExtractText
 */

#ifndef Ezsigntemplatedocument_extractText_v1_Response_mPayload_H
#define Ezsigntemplatedocument_extractText_v1_Response_mPayload_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsigntemplatedocument_extractText_v1_Response_mPayload : public Object {
public:
    Ezsigntemplatedocument_extractText_v1_Response_mPayload();
    Ezsigntemplatedocument_extractText_v1_Response_mPayload(QString json);
    ~Ezsigntemplatedocument_extractText_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSText() const;
    void setSText(const QString &s_text);
    bool is_s_text_Set() const;
    bool is_s_text_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_text;
    bool m_s_text_isSet;
    bool m_s_text_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplatedocument_extractText_v1_Response_mPayload)

#endif // Ezsigntemplatedocument_extractText_v1_Response_mPayload_H
