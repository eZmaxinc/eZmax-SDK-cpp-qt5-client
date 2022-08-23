/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.10
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignbulksend_ListElement.h
 *
 * An Ezsignbulksend List Element
 */

#ifndef OAIEzsignbulksend_ListElement_H
#define OAIEzsignbulksend_ListElement_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignbulksend_ListElement : public OAIObject {
public:
    OAIEzsignbulksend_ListElement();
    OAIEzsignbulksend_ListElement(QString json);
    ~OAIEzsignbulksend_ListElement() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignbulksendId() const;
    void setPkiEzsignbulksendId(const qint32 &pki_ezsignbulksend_id);
    bool is_pki_ezsignbulksend_id_Set() const;
    bool is_pki_ezsignbulksend_id_Valid() const;

    qint32 getFkiEzsignfoldertypeId() const;
    void setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id);
    bool is_fki_ezsignfoldertype_id_Set() const;
    bool is_fki_ezsignfoldertype_id_Valid() const;

    QString getSEzsignbulksendDescription() const;
    void setSEzsignbulksendDescription(const QString &s_ezsignbulksend_description);
    bool is_s_ezsignbulksend_description_Set() const;
    bool is_s_ezsignbulksend_description_Valid() const;

    QString getSEzsignfoldertypeNameX() const;
    void setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x);
    bool is_s_ezsignfoldertype_name_x_Set() const;
    bool is_s_ezsignfoldertype_name_x_Valid() const;

    bool isBEzsignbulksendNeedvalidation() const;
    void setBEzsignbulksendNeedvalidation(const bool &b_ezsignbulksend_needvalidation);
    bool is_b_ezsignbulksend_needvalidation_Set() const;
    bool is_b_ezsignbulksend_needvalidation_Valid() const;

    qint32 getIEzsignbulksendtransmission() const;
    void setIEzsignbulksendtransmission(const qint32 &i_ezsignbulksendtransmission);
    bool is_i_ezsignbulksendtransmission_Set() const;
    bool is_i_ezsignbulksendtransmission_Valid() const;

    qint32 getIEzsignfolder() const;
    void setIEzsignfolder(const qint32 &i_ezsignfolder);
    bool is_i_ezsignfolder_Set() const;
    bool is_i_ezsignfolder_Valid() const;

    qint32 getIEzsigndocument() const;
    void setIEzsigndocument(const qint32 &i_ezsigndocument);
    bool is_i_ezsigndocument_Set() const;
    bool is_i_ezsigndocument_Valid() const;

    qint32 getIEzsignsignature() const;
    void setIEzsignsignature(const qint32 &i_ezsignsignature);
    bool is_i_ezsignsignature_Set() const;
    bool is_i_ezsignsignature_Valid() const;

    qint32 getIEzsignsignatureSigned() const;
    void setIEzsignsignatureSigned(const qint32 &i_ezsignsignature_signed);
    bool is_i_ezsignsignature_signed_Set() const;
    bool is_i_ezsignsignature_signed_Valid() const;

    bool isBEzsignbulksendIsactive() const;
    void setBEzsignbulksendIsactive(const bool &b_ezsignbulksend_isactive);
    bool is_b_ezsignbulksend_isactive_Set() const;
    bool is_b_ezsignbulksend_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsignbulksend_id;
    bool m_pki_ezsignbulksend_id_isSet;
    bool m_pki_ezsignbulksend_id_isValid;

    qint32 fki_ezsignfoldertype_id;
    bool m_fki_ezsignfoldertype_id_isSet;
    bool m_fki_ezsignfoldertype_id_isValid;

    QString s_ezsignbulksend_description;
    bool m_s_ezsignbulksend_description_isSet;
    bool m_s_ezsignbulksend_description_isValid;

    QString s_ezsignfoldertype_name_x;
    bool m_s_ezsignfoldertype_name_x_isSet;
    bool m_s_ezsignfoldertype_name_x_isValid;

    bool b_ezsignbulksend_needvalidation;
    bool m_b_ezsignbulksend_needvalidation_isSet;
    bool m_b_ezsignbulksend_needvalidation_isValid;

    qint32 i_ezsignbulksendtransmission;
    bool m_i_ezsignbulksendtransmission_isSet;
    bool m_i_ezsignbulksendtransmission_isValid;

    qint32 i_ezsignfolder;
    bool m_i_ezsignfolder_isSet;
    bool m_i_ezsignfolder_isValid;

    qint32 i_ezsigndocument;
    bool m_i_ezsigndocument_isSet;
    bool m_i_ezsigndocument_isValid;

    qint32 i_ezsignsignature;
    bool m_i_ezsignsignature_isSet;
    bool m_i_ezsignsignature_isValid;

    qint32 i_ezsignsignature_signed;
    bool m_i_ezsignsignature_signed_isSet;
    bool m_i_ezsignsignature_signed_isValid;

    bool b_ezsignbulksend_isactive;
    bool m_b_ezsignbulksend_isactive_isSet;
    bool m_b_ezsignbulksend_isactive_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignbulksend_ListElement)

#endif // OAIEzsignbulksend_ListElement_H
