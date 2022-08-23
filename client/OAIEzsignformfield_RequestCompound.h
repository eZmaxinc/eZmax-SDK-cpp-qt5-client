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
 * OAIEzsignformfield_RequestCompound.h
 *
 * An Ezsignformfield Object and children to create a complete structure
 */

#ifndef OAIEzsignformfield_RequestCompound_H
#define OAIEzsignformfield_RequestCompound_H

#include <QJsonObject>

#include "OAIEzsignformfield_Request.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignformfield_RequestCompound : public OAIObject {
public:
    OAIEzsignformfield_RequestCompound();
    OAIEzsignformfield_RequestCompound(QString json);
    ~OAIEzsignformfield_RequestCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignformfieldId() const;
    void setPkiEzsignformfieldId(const qint32 &pki_ezsignformfield_id);
    bool is_pki_ezsignformfield_id_Set() const;
    bool is_pki_ezsignformfield_id_Valid() const;

    qint32 getIEzsignpagePagenumber() const;
    void setIEzsignpagePagenumber(const qint32 &i_ezsignpage_pagenumber);
    bool is_i_ezsignpage_pagenumber_Set() const;
    bool is_i_ezsignpage_pagenumber_Valid() const;

    QString getSEzsignformfieldLabel() const;
    void setSEzsignformfieldLabel(const QString &s_ezsignformfield_label);
    bool is_s_ezsignformfield_label_Set() const;
    bool is_s_ezsignformfield_label_Valid() const;

    QString getSEzsignformfieldValue() const;
    void setSEzsignformfieldValue(const QString &s_ezsignformfield_value);
    bool is_s_ezsignformfield_value_Set() const;
    bool is_s_ezsignformfield_value_Valid() const;

    qint32 getIEzsignformfieldX() const;
    void setIEzsignformfieldX(const qint32 &i_ezsignformfield_x);
    bool is_i_ezsignformfield_x_Set() const;
    bool is_i_ezsignformfield_x_Valid() const;

    qint32 getIEzsignformfieldY() const;
    void setIEzsignformfieldY(const qint32 &i_ezsignformfield_y);
    bool is_i_ezsignformfield_y_Set() const;
    bool is_i_ezsignformfield_y_Valid() const;

    qint32 getIEzsignformfieldWidth() const;
    void setIEzsignformfieldWidth(const qint32 &i_ezsignformfield_width);
    bool is_i_ezsignformfield_width_Set() const;
    bool is_i_ezsignformfield_width_Valid() const;

    qint32 getIEzsignformfieldHeight() const;
    void setIEzsignformfieldHeight(const qint32 &i_ezsignformfield_height);
    bool is_i_ezsignformfield_height_Set() const;
    bool is_i_ezsignformfield_height_Valid() const;

    bool isBEzsignformfieldSelected() const;
    void setBEzsignformfieldSelected(const bool &b_ezsignformfield_selected);
    bool is_b_ezsignformfield_selected_Set() const;
    bool is_b_ezsignformfield_selected_Valid() const;

    QString getSEzsignformfieldEnteredvalue() const;
    void setSEzsignformfieldEnteredvalue(const QString &s_ezsignformfield_enteredvalue);
    bool is_s_ezsignformfield_enteredvalue_Set() const;
    bool is_s_ezsignformfield_enteredvalue_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsignformfield_id;
    bool m_pki_ezsignformfield_id_isSet;
    bool m_pki_ezsignformfield_id_isValid;

    qint32 i_ezsignpage_pagenumber;
    bool m_i_ezsignpage_pagenumber_isSet;
    bool m_i_ezsignpage_pagenumber_isValid;

    QString s_ezsignformfield_label;
    bool m_s_ezsignformfield_label_isSet;
    bool m_s_ezsignformfield_label_isValid;

    QString s_ezsignformfield_value;
    bool m_s_ezsignformfield_value_isSet;
    bool m_s_ezsignformfield_value_isValid;

    qint32 i_ezsignformfield_x;
    bool m_i_ezsignformfield_x_isSet;
    bool m_i_ezsignformfield_x_isValid;

    qint32 i_ezsignformfield_y;
    bool m_i_ezsignformfield_y_isSet;
    bool m_i_ezsignformfield_y_isValid;

    qint32 i_ezsignformfield_width;
    bool m_i_ezsignformfield_width_isSet;
    bool m_i_ezsignformfield_width_isValid;

    qint32 i_ezsignformfield_height;
    bool m_i_ezsignformfield_height_isSet;
    bool m_i_ezsignformfield_height_isValid;

    bool b_ezsignformfield_selected;
    bool m_b_ezsignformfield_selected_isSet;
    bool m_b_ezsignformfield_selected_isValid;

    QString s_ezsignformfield_enteredvalue;
    bool m_s_ezsignformfield_enteredvalue_isSet;
    bool m_s_ezsignformfield_enteredvalue_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignformfield_RequestCompound)

#endif // OAIEzsignformfield_RequestCompound_H
