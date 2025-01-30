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
 * Ezsigntemplate_copy_v1_Request.h
 *
 * Request for POST /1/object/ezsigntemplate/{pkiEzsigntemplateID}/copy
 */

#ifndef Ezsigntemplate_copy_v1_Request_H
#define Ezsigntemplate_copy_v1_Request_H

#include <QJsonObject>

#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsigntemplate_copy_v1_Request : public Object {
public:
    Ezsigntemplate_copy_v1_Request();
    Ezsigntemplate_copy_v1_Request(QString json);
    ~Ezsigntemplate_copy_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getAFkiEzsignfoldertypeId() const;
    void setAFkiEzsignfoldertypeId(const QList<qint32> &a_fki_ezsignfoldertype_id);
    bool is_a_fki_ezsignfoldertype_id_Set() const;
    bool is_a_fki_ezsignfoldertype_id_Valid() const;

    bool isBCopyCompany() const;
    void setBCopyCompany(const bool &b_copy_company);
    bool is_b_copy_company_Set() const;
    bool is_b_copy_company_Valid() const;

    bool isBCopyUser() const;
    void setBCopyUser(const bool &b_copy_user);
    bool is_b_copy_user_Set() const;
    bool is_b_copy_user_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> m_a_fki_ezsignfoldertype_id;
    bool m_a_fki_ezsignfoldertype_id_isSet;
    bool m_a_fki_ezsignfoldertype_id_isValid;

    bool m_b_copy_company;
    bool m_b_copy_company_isSet;
    bool m_b_copy_company_isValid;

    bool m_b_copy_user;
    bool m_b_copy_user_isSet;
    bool m_b_copy_user_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplate_copy_v1_Request)

#endif // Ezsigntemplate_copy_v1_Request_H
