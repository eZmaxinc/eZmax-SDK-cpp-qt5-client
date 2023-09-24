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
 * OAISignature_Request.h
 *
 * A Signature Object
 */

#ifndef OAISignature_Request_H
#define OAISignature_Request_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAISignature_Request : public OAIObject {
public:
    OAISignature_Request();
    OAISignature_Request(QString json);
    ~OAISignature_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiSignatureId() const;
    void setPkiSignatureId(const qint32 &pki_signature_id);
    bool is_pki_signature_id_Set() const;
    bool is_pki_signature_id_Valid() const;

    QString getTSignatureSvg() const;
    void setTSignatureSvg(const QString &t_signature_svg);
    bool is_t_signature_svg_Set() const;
    bool is_t_signature_svg_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_signature_id;
    bool m_pki_signature_id_isSet;
    bool m_pki_signature_id_isValid;

    QString m_t_signature_svg;
    bool m_t_signature_svg_isSet;
    bool m_t_signature_svg_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAISignature_Request)

#endif // OAISignature_Request_H
