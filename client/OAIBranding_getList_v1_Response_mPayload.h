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
 * OAIBranding_getList_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/branding/getList
 */

#ifndef OAIBranding_getList_v1_Response_mPayload_H
#define OAIBranding_getList_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAIBranding_ListElement.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIBranding_ListElement;

class OAIBranding_getList_v1_Response_mPayload : public OAIObject {
public:
    OAIBranding_getList_v1_Response_mPayload();
    OAIBranding_getList_v1_Response_mPayload(QString json);
    ~OAIBranding_getList_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getIRowReturned() const;
    void setIRowReturned(const qint32 &i_row_returned);
    bool is_i_row_returned_Set() const;
    bool is_i_row_returned_Valid() const;

    qint32 getIRowFiltered() const;
    void setIRowFiltered(const qint32 &i_row_filtered);
    bool is_i_row_filtered_Set() const;
    bool is_i_row_filtered_Valid() const;

    QList<OAIBranding_ListElement> getAObjBranding() const;
    void setAObjBranding(const QList<OAIBranding_ListElement> &a_obj_branding);
    bool is_a_obj_branding_Set() const;
    bool is_a_obj_branding_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_i_row_returned;
    bool m_i_row_returned_isSet;
    bool m_i_row_returned_isValid;

    qint32 m_i_row_filtered;
    bool m_i_row_filtered_isSet;
    bool m_i_row_filtered_isValid;

    QList<OAIBranding_ListElement> m_a_obj_branding;
    bool m_a_obj_branding_isSet;
    bool m_a_obj_branding_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBranding_getList_v1_Response_mPayload)

#endif // OAIBranding_getList_v1_Response_mPayload_H
