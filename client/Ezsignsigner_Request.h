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
 * Ezsignsigner_Request.h
 *
 * An Ezsignsigner Object
 */

#ifndef Ezsignsigner_Request_H
#define Ezsignsigner_Request_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsignsigner_Request : public Object {
public:
    Ezsignsigner_Request();
    Ezsignsigner_Request(QString json);
    ~Ezsignsigner_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFkiUserlogintypeId() const;
    void setFkiUserlogintypeId(const qint32 &fki_userlogintype_id);
    bool is_fki_userlogintype_id_Set() const;
    bool is_fki_userlogintype_id_Valid() const;

    qint32 getFkiTaxassignmentId() const;
    void setFkiTaxassignmentId(const qint32 &fki_taxassignment_id);
    bool is_fki_taxassignment_id_Set() const;
    bool is_fki_taxassignment_id_Valid() const;

    qint32 getFkiSecretquestionId() const;
    void setFkiSecretquestionId(const qint32 &fki_secretquestion_id);
    bool is_fki_secretquestion_id_Set() const;
    bool is_fki_secretquestion_id_Valid() const;

    Q_DECL_DEPRECATED QString getEEzsignsignerLogintype() const;
    Q_DECL_DEPRECATED void setEEzsignsignerLogintype(const QString &e_ezsignsigner_logintype);
    Q_DECL_DEPRECATED bool is_e_ezsignsigner_logintype_Set() const;
    Q_DECL_DEPRECATED bool is_e_ezsignsigner_logintype_Valid() const;

    QString getSEzsignsignerSecretanswer() const;
    void setSEzsignsignerSecretanswer(const QString &s_ezsignsigner_secretanswer);
    bool is_s_ezsignsigner_secretanswer_Set() const;
    bool is_s_ezsignsigner_secretanswer_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_fki_userlogintype_id;
    bool m_fki_userlogintype_id_isSet;
    bool m_fki_userlogintype_id_isValid;

    qint32 m_fki_taxassignment_id;
    bool m_fki_taxassignment_id_isSet;
    bool m_fki_taxassignment_id_isValid;

    qint32 m_fki_secretquestion_id;
    bool m_fki_secretquestion_id_isSet;
    bool m_fki_secretquestion_id_isValid;

    QString m_e_ezsignsigner_logintype;
    bool m_e_ezsignsigner_logintype_isSet;
    bool m_e_ezsignsigner_logintype_isValid;

    QString m_s_ezsignsigner_secretanswer;
    bool m_s_ezsignsigner_secretanswer_isSet;
    bool m_s_ezsignsigner_secretanswer_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignsigner_Request)

#endif // Ezsignsigner_Request_H
