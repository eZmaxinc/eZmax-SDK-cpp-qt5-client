/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.9
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigntemplateformfield_Request.h
 *
 * A Ezsigntemplateformfield Object
 */

#ifndef OAIEzsigntemplateformfield_Request_H
#define OAIEzsigntemplateformfield_Request_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigntemplateformfield_Request : public OAIObject {
public:
    OAIEzsigntemplateformfield_Request();
    OAIEzsigntemplateformfield_Request(QString json);
    ~OAIEzsigntemplateformfield_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplateformfieldId() const;
    void setPkiEzsigntemplateformfieldId(const qint32 &pki_ezsigntemplateformfield_id);
    bool is_pki_ezsigntemplateformfield_id_Set() const;
    bool is_pki_ezsigntemplateformfield_id_Valid() const;

    qint32 getIEzsigntemplatedocumentpagePagenumber() const;
    void setIEzsigntemplatedocumentpagePagenumber(const qint32 &i_ezsigntemplatedocumentpage_pagenumber);
    bool is_i_ezsigntemplatedocumentpage_pagenumber_Set() const;
    bool is_i_ezsigntemplatedocumentpage_pagenumber_Valid() const;

    QString getSEzsigntemplateformfieldLabel() const;
    void setSEzsigntemplateformfieldLabel(const QString &s_ezsigntemplateformfield_label);
    bool is_s_ezsigntemplateformfield_label_Set() const;
    bool is_s_ezsigntemplateformfield_label_Valid() const;

    QString getSEzsigntemplateformfieldValue() const;
    void setSEzsigntemplateformfieldValue(const QString &s_ezsigntemplateformfield_value);
    bool is_s_ezsigntemplateformfield_value_Set() const;
    bool is_s_ezsigntemplateformfield_value_Valid() const;

    qint32 getIEzsigntemplateformfieldX() const;
    void setIEzsigntemplateformfieldX(const qint32 &i_ezsigntemplateformfield_x);
    bool is_i_ezsigntemplateformfield_x_Set() const;
    bool is_i_ezsigntemplateformfield_x_Valid() const;

    qint32 getIEzsigntemplateformfieldY() const;
    void setIEzsigntemplateformfieldY(const qint32 &i_ezsigntemplateformfield_y);
    bool is_i_ezsigntemplateformfield_y_Set() const;
    bool is_i_ezsigntemplateformfield_y_Valid() const;

    qint32 getIEzsigntemplateformfieldWidth() const;
    void setIEzsigntemplateformfieldWidth(const qint32 &i_ezsigntemplateformfield_width);
    bool is_i_ezsigntemplateformfield_width_Set() const;
    bool is_i_ezsigntemplateformfield_width_Valid() const;

    qint32 getIEzsigntemplateformfieldHeight() const;
    void setIEzsigntemplateformfieldHeight(const qint32 &i_ezsigntemplateformfield_height);
    bool is_i_ezsigntemplateformfield_height_Set() const;
    bool is_i_ezsigntemplateformfield_height_Valid() const;

    bool isBEzsigntemplateformfieldSelected() const;
    void setBEzsigntemplateformfieldSelected(const bool &b_ezsigntemplateformfield_selected);
    bool is_b_ezsigntemplateformfield_selected_Set() const;
    bool is_b_ezsigntemplateformfield_selected_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsigntemplateformfield_id;
    bool m_pki_ezsigntemplateformfield_id_isSet;
    bool m_pki_ezsigntemplateformfield_id_isValid;

    qint32 i_ezsigntemplatedocumentpage_pagenumber;
    bool m_i_ezsigntemplatedocumentpage_pagenumber_isSet;
    bool m_i_ezsigntemplatedocumentpage_pagenumber_isValid;

    QString s_ezsigntemplateformfield_label;
    bool m_s_ezsigntemplateformfield_label_isSet;
    bool m_s_ezsigntemplateformfield_label_isValid;

    QString s_ezsigntemplateformfield_value;
    bool m_s_ezsigntemplateformfield_value_isSet;
    bool m_s_ezsigntemplateformfield_value_isValid;

    qint32 i_ezsigntemplateformfield_x;
    bool m_i_ezsigntemplateformfield_x_isSet;
    bool m_i_ezsigntemplateformfield_x_isValid;

    qint32 i_ezsigntemplateformfield_y;
    bool m_i_ezsigntemplateformfield_y_isSet;
    bool m_i_ezsigntemplateformfield_y_isValid;

    qint32 i_ezsigntemplateformfield_width;
    bool m_i_ezsigntemplateformfield_width_isSet;
    bool m_i_ezsigntemplateformfield_width_isValid;

    qint32 i_ezsigntemplateformfield_height;
    bool m_i_ezsigntemplateformfield_height_isSet;
    bool m_i_ezsigntemplateformfield_height_isValid;

    bool b_ezsigntemplateformfield_selected;
    bool m_b_ezsigntemplateformfield_selected_isSet;
    bool m_b_ezsigntemplateformfield_selected_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplateformfield_Request)

#endif // OAIEzsigntemplateformfield_Request_H
