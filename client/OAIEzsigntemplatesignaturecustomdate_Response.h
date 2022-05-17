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
 * OAIEzsigntemplatesignaturecustomdate_Response.h
 *
 * An Ezsigntemplatesignaturecustomdate Object
 */

#ifndef OAIEzsigntemplatesignaturecustomdate_Response_H
#define OAIEzsigntemplatesignaturecustomdate_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigntemplatesignaturecustomdate_Response : public OAIObject {
public:
    OAIEzsigntemplatesignaturecustomdate_Response();
    OAIEzsigntemplatesignaturecustomdate_Response(QString json);
    ~OAIEzsigntemplatesignaturecustomdate_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplatesignaturecustomdateId() const;
    void setPkiEzsigntemplatesignaturecustomdateId(const qint32 &pki_ezsigntemplatesignaturecustomdate_id);
    bool is_pki_ezsigntemplatesignaturecustomdate_id_Set() const;
    bool is_pki_ezsigntemplatesignaturecustomdate_id_Valid() const;

    qint32 getIEzsigntemplatesignaturecustomdateX() const;
    void setIEzsigntemplatesignaturecustomdateX(const qint32 &i_ezsigntemplatesignaturecustomdate_x);
    bool is_i_ezsigntemplatesignaturecustomdate_x_Set() const;
    bool is_i_ezsigntemplatesignaturecustomdate_x_Valid() const;

    qint32 getIEzsigntemplatesignaturecustomdateY() const;
    void setIEzsigntemplatesignaturecustomdateY(const qint32 &i_ezsigntemplatesignaturecustomdate_y);
    bool is_i_ezsigntemplatesignaturecustomdate_y_Set() const;
    bool is_i_ezsigntemplatesignaturecustomdate_y_Valid() const;

    QString getSEzsigntemplatesignaturecustomdateFormat() const;
    void setSEzsigntemplatesignaturecustomdateFormat(const QString &s_ezsigntemplatesignaturecustomdate_format);
    bool is_s_ezsigntemplatesignaturecustomdate_format_Set() const;
    bool is_s_ezsigntemplatesignaturecustomdate_format_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsigntemplatesignaturecustomdate_id;
    bool m_pki_ezsigntemplatesignaturecustomdate_id_isSet;
    bool m_pki_ezsigntemplatesignaturecustomdate_id_isValid;

    qint32 i_ezsigntemplatesignaturecustomdate_x;
    bool m_i_ezsigntemplatesignaturecustomdate_x_isSet;
    bool m_i_ezsigntemplatesignaturecustomdate_x_isValid;

    qint32 i_ezsigntemplatesignaturecustomdate_y;
    bool m_i_ezsigntemplatesignaturecustomdate_y_isSet;
    bool m_i_ezsigntemplatesignaturecustomdate_y_isValid;

    QString s_ezsigntemplatesignaturecustomdate_format;
    bool m_s_ezsigntemplatesignaturecustomdate_format_isSet;
    bool m_s_ezsigntemplatesignaturecustomdate_format_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatesignaturecustomdate_Response)

#endif // OAIEzsigntemplatesignaturecustomdate_Response_H
