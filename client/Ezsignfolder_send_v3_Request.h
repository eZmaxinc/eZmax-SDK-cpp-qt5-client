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
 * Ezsignfolder_send_v3_Request.h
 *
 * Request for POST /3/object/ezsignfolder/{pkiEzsignfolderID}/send
 */

#ifndef Ezsignfolder_send_v3_Request_H
#define Ezsignfolder_send_v3_Request_H

#include <QJsonObject>

#include "Field_eEzsignfolderMessageorder.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsignfolder_send_v3_Request : public Object {
public:
    Ezsignfolder_send_v3_Request();
    Ezsignfolder_send_v3_Request(QString json);
    ~Ezsignfolder_send_v3_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getTEzsignfolderMessage() const;
    void setTEzsignfolderMessage(const QString &t_ezsignfolder_message);
    bool is_t_ezsignfolder_message_Set() const;
    bool is_t_ezsignfolder_message_Valid() const;

    Field_eEzsignfolderMessageorder getEEzsignfolderMessageorder() const;
    void setEEzsignfolderMessageorder(const Field_eEzsignfolderMessageorder &e_ezsignfolder_messageorder);
    bool is_e_ezsignfolder_messageorder_Set() const;
    bool is_e_ezsignfolder_messageorder_Valid() const;

    QString getDtEzsignfolderDelayedsenddate() const;
    void setDtEzsignfolderDelayedsenddate(const QString &dt_ezsignfolder_delayedsenddate);
    bool is_dt_ezsignfolder_delayedsenddate_Set() const;
    bool is_dt_ezsignfolder_delayedsenddate_Valid() const;

    QList<qint32> getAFkiEzsignfoldersignerassociationId() const;
    void setAFkiEzsignfoldersignerassociationId(const QList<qint32> &a_fki_ezsignfoldersignerassociation_id);
    bool is_a_fki_ezsignfoldersignerassociation_id_Set() const;
    bool is_a_fki_ezsignfoldersignerassociation_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_t_ezsignfolder_message;
    bool m_t_ezsignfolder_message_isSet;
    bool m_t_ezsignfolder_message_isValid;

    Field_eEzsignfolderMessageorder m_e_ezsignfolder_messageorder;
    bool m_e_ezsignfolder_messageorder_isSet;
    bool m_e_ezsignfolder_messageorder_isValid;

    QString m_dt_ezsignfolder_delayedsenddate;
    bool m_dt_ezsignfolder_delayedsenddate_isSet;
    bool m_dt_ezsignfolder_delayedsenddate_isValid;

    QList<qint32> m_a_fki_ezsignfoldersignerassociation_id;
    bool m_a_fki_ezsignfoldersignerassociation_id_isSet;
    bool m_a_fki_ezsignfoldersignerassociation_id_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignfolder_send_v3_Request)

#endif // Ezsignfolder_send_v3_Request_H
