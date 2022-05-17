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
 * OAICommon_Response_objDebugPayload_getList_allOf.h
 *
 * 
 */

#ifndef OAICommon_Response_objDebugPayload_getList_allOf_H
#define OAICommon_Response_objDebugPayload_getList_allOf_H

#include <QJsonObject>

#include "OAICommon_Response_Filter.h"
#include <QList>
#include <QMap>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICommon_Response_Filter;

class OAICommon_Response_objDebugPayload_getList_allOf : public OAIObject {
public:
    OAICommon_Response_objDebugPayload_getList_allOf();
    OAICommon_Response_objDebugPayload_getList_allOf(QString json);
    ~OAICommon_Response_objDebugPayload_getList_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICommon_Response_Filter getAFilter() const;
    void setAFilter(const OAICommon_Response_Filter &a_filter);
    bool is_a_filter_Set() const;
    bool is_a_filter_Valid() const;

    QMap<QString, QString> getAOrderBy() const;
    void setAOrderBy(const QMap<QString, QString> &a_order_by);
    bool is_a_order_by_Set() const;
    bool is_a_order_by_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICommon_Response_Filter a_filter;
    bool m_a_filter_isSet;
    bool m_a_filter_isValid;

    QMap<QString, QString> a_order_by;
    bool m_a_order_by_isSet;
    bool m_a_order_by_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICommon_Response_objDebugPayload_getList_allOf)

#endif // OAICommon_Response_objDebugPayload_getList_allOf_H
