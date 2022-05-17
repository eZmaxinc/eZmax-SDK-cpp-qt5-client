/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.7
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfolder_batchDownload_v1_Request.h
 *
 * Request for POST /1/object/ezsignfolder/{pkiEzsignfolderID}/batchDownload
 */

#ifndef OAIEzsignfolder_batchDownload_v1_Request_H
#define OAIEzsignfolder_batchDownload_v1_Request_H

#include <QJsonObject>

#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignfolder_batchDownload_v1_Request : public OAIObject {
public:
    OAIEzsignfolder_batchDownload_v1_Request();
    OAIEzsignfolder_batchDownload_v1_Request(QString json);
    ~OAIEzsignfolder_batchDownload_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getAPkiEzsigndocumentId() const;
    void setAPkiEzsigndocumentId(const QList<qint32> &a_pki_ezsigndocument_id);
    bool is_a_pki_ezsigndocument_id_Set() const;
    bool is_a_pki_ezsigndocument_id_Valid() const;

    QList<QString> getAEDocumentType() const;
    void setAEDocumentType(const QList<QString> &a_e_document_type);
    bool is_a_e_document_type_Set() const;
    bool is_a_e_document_type_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> a_pki_ezsigndocument_id;
    bool m_a_pki_ezsigndocument_id_isSet;
    bool m_a_pki_ezsigndocument_id_isValid;

    QList<QString> a_e_document_type;
    bool m_a_e_document_type_isSet;
    bool m_a_e_document_type_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfolder_batchDownload_v1_Request)

#endif // OAIEzsignfolder_batchDownload_v1_Request_H
