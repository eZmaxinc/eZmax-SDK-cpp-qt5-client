/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.5
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigntemplatepackage_getList_v1_Response_mPayload.h
 *
 * Payload for the /1/object/ezsigntemplatepackage/getList API Request
 */

#ifndef OAIEzsigntemplatepackage_getList_v1_Response_mPayload_H
#define OAIEzsigntemplatepackage_getList_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAICommon_getList_v1_Response_mPayload.h"
#include "OAIEzsigntemplatepackage_ListElement.h"
#include "OAIEzsigntemplatepackage_getList_v1_Response_mPayload_allOf.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigntemplatepackage_getList_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsigntemplatepackage_getList_v1_Response_mPayload();
    OAIEzsigntemplatepackage_getList_v1_Response_mPayload(QString json);
    ~OAIEzsigntemplatepackage_getList_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsigntemplatepackage_ListElement> getAObjEzsigntemplatepackage() const;
    void setAObjEzsigntemplatepackage(const QList<OAIEzsigntemplatepackage_ListElement> &a_obj_ezsigntemplatepackage);
    bool is_a_obj_ezsigntemplatepackage_Set() const;
    bool is_a_obj_ezsigntemplatepackage_Valid() const;

    qint32 getIRowReturned() const;
    void setIRowReturned(const qint32 &i_row_returned);
    bool is_i_row_returned_Set() const;
    bool is_i_row_returned_Valid() const;

    qint32 getIRowFiltered() const;
    void setIRowFiltered(const qint32 &i_row_filtered);
    bool is_i_row_filtered_Set() const;
    bool is_i_row_filtered_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsigntemplatepackage_ListElement> a_obj_ezsigntemplatepackage;
    bool m_a_obj_ezsigntemplatepackage_isSet;
    bool m_a_obj_ezsigntemplatepackage_isValid;

    qint32 i_row_returned;
    bool m_i_row_returned_isSet;
    bool m_i_row_returned_isValid;

    qint32 i_row_filtered;
    bool m_i_row_filtered_isSet;
    bool m_i_row_filtered_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatepackage_getList_v1_Response_mPayload)

#endif // OAIEzsigntemplatepackage_getList_v1_Response_mPayload_H
