/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsigntemplatepublic_Request.h
 *
 * A Ezsigntemplatepublic Object
 */

#ifndef Ezsigntemplatepublic_Request_H
#define Ezsigntemplatepublic_Request_H

#include <QJsonObject>

#include "Field_eEzsigntemplatepublicLimittype.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsigntemplatepublic_Request : public Object {
public:
    Ezsigntemplatepublic_Request();
    Ezsigntemplatepublic_Request(QString json);
    ~Ezsigntemplatepublic_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplatepublicId() const;
    void setPkiEzsigntemplatepublicId(const qint32 &pki_ezsigntemplatepublic_id);
    bool is_pki_ezsigntemplatepublic_id_Set() const;
    bool is_pki_ezsigntemplatepublic_id_Valid() const;

    qint32 getFkiEzsignfoldertypeId() const;
    void setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id);
    bool is_fki_ezsignfoldertype_id_Set() const;
    bool is_fki_ezsignfoldertype_id_Valid() const;

    qint32 getFkiUserlogintypeId() const;
    void setFkiUserlogintypeId(const qint32 &fki_userlogintype_id);
    bool is_fki_userlogintype_id_Set() const;
    bool is_fki_userlogintype_id_Valid() const;

    qint32 getFkiEzsigntemplateId() const;
    void setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id);
    bool is_fki_ezsigntemplate_id_Set() const;
    bool is_fki_ezsigntemplate_id_Valid() const;

    qint32 getFkiEzsigntemplatepackageId() const;
    void setFkiEzsigntemplatepackageId(const qint32 &fki_ezsigntemplatepackage_id);
    bool is_fki_ezsigntemplatepackage_id_Set() const;
    bool is_fki_ezsigntemplatepackage_id_Valid() const;

    QString getSEzsigntemplatepublicDescription() const;
    void setSEzsigntemplatepublicDescription(const QString &s_ezsigntemplatepublic_description);
    bool is_s_ezsigntemplatepublic_description_Set() const;
    bool is_s_ezsigntemplatepublic_description_Valid() const;

    bool isBEzsigntemplatepublicIsactive() const;
    void setBEzsigntemplatepublicIsactive(const bool &b_ezsigntemplatepublic_isactive);
    bool is_b_ezsigntemplatepublic_isactive_Set() const;
    bool is_b_ezsigntemplatepublic_isactive_Valid() const;

    QString getTEzsigntemplatepublicNote() const;
    void setTEzsigntemplatepublicNote(const QString &t_ezsigntemplatepublic_note);
    bool is_t_ezsigntemplatepublic_note_Set() const;
    bool is_t_ezsigntemplatepublic_note_Valid() const;

    Field_eEzsigntemplatepublicLimittype getEEzsigntemplatepublicLimittype() const;
    void setEEzsigntemplatepublicLimittype(const Field_eEzsigntemplatepublicLimittype &e_ezsigntemplatepublic_limittype);
    bool is_e_ezsigntemplatepublic_limittype_Set() const;
    bool is_e_ezsigntemplatepublic_limittype_Valid() const;

    qint32 getIEzsigntemplatepublicLimit() const;
    void setIEzsigntemplatepublicLimit(const qint32 &i_ezsigntemplatepublic_limit);
    bool is_i_ezsigntemplatepublic_limit_Set() const;
    bool is_i_ezsigntemplatepublic_limit_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsigntemplatepublic_id;
    bool m_pki_ezsigntemplatepublic_id_isSet;
    bool m_pki_ezsigntemplatepublic_id_isValid;

    qint32 m_fki_ezsignfoldertype_id;
    bool m_fki_ezsignfoldertype_id_isSet;
    bool m_fki_ezsignfoldertype_id_isValid;

    qint32 m_fki_userlogintype_id;
    bool m_fki_userlogintype_id_isSet;
    bool m_fki_userlogintype_id_isValid;

    qint32 m_fki_ezsigntemplate_id;
    bool m_fki_ezsigntemplate_id_isSet;
    bool m_fki_ezsigntemplate_id_isValid;

    qint32 m_fki_ezsigntemplatepackage_id;
    bool m_fki_ezsigntemplatepackage_id_isSet;
    bool m_fki_ezsigntemplatepackage_id_isValid;

    QString m_s_ezsigntemplatepublic_description;
    bool m_s_ezsigntemplatepublic_description_isSet;
    bool m_s_ezsigntemplatepublic_description_isValid;

    bool m_b_ezsigntemplatepublic_isactive;
    bool m_b_ezsigntemplatepublic_isactive_isSet;
    bool m_b_ezsigntemplatepublic_isactive_isValid;

    QString m_t_ezsigntemplatepublic_note;
    bool m_t_ezsigntemplatepublic_note_isSet;
    bool m_t_ezsigntemplatepublic_note_isValid;

    Field_eEzsigntemplatepublicLimittype m_e_ezsigntemplatepublic_limittype;
    bool m_e_ezsigntemplatepublic_limittype_isSet;
    bool m_e_ezsigntemplatepublic_limittype_isValid;

    qint32 m_i_ezsigntemplatepublic_limit;
    bool m_i_ezsigntemplatepublic_limit_isSet;
    bool m_i_ezsigntemplatepublic_limit_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplatepublic_Request)

#endif // Ezsigntemplatepublic_Request_H
