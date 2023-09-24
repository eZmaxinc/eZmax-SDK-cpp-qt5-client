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
 * OAICommon_Response_objDebug.h
 *
 * This is a generic debug object that is returned by all API requests
 */

#ifndef OAICommon_Response_objDebug_H
#define OAICommon_Response_objDebug_H

#include <QJsonObject>

#include "OAICommon_Response_objSQLQuery.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICommon_Response_objSQLQuery;

class OAICommon_Response_objDebug : public OAIObject {
public:
    OAICommon_Response_objDebug();
    OAICommon_Response_objDebug(QString json);
    ~OAICommon_Response_objDebug() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSMemoryUsage() const;
    void setSMemoryUsage(const QString &s_memory_usage);
    bool is_s_memory_usage_Set() const;
    bool is_s_memory_usage_Valid() const;

    QString getSRunTime() const;
    void setSRunTime(const QString &s_run_time);
    bool is_s_run_time_Set() const;
    bool is_s_run_time_Valid() const;

    qint32 getISqlSelects() const;
    void setISqlSelects(const qint32 &i_sql_selects);
    bool is_i_sql_selects_Set() const;
    bool is_i_sql_selects_Valid() const;

    qint32 getISqlQueries() const;
    void setISqlQueries(const qint32 &i_sql_queries);
    bool is_i_sql_queries_Set() const;
    bool is_i_sql_queries_Valid() const;

    QList<OAICommon_Response_objSQLQuery> getAObjSqlQuery() const;
    void setAObjSqlQuery(const QList<OAICommon_Response_objSQLQuery> &a_obj_sql_query);
    bool is_a_obj_sql_query_Set() const;
    bool is_a_obj_sql_query_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_memory_usage;
    bool m_s_memory_usage_isSet;
    bool m_s_memory_usage_isValid;

    QString m_s_run_time;
    bool m_s_run_time_isSet;
    bool m_s_run_time_isValid;

    qint32 m_i_sql_selects;
    bool m_i_sql_selects_isSet;
    bool m_i_sql_selects_isValid;

    qint32 m_i_sql_queries;
    bool m_i_sql_queries_isSet;
    bool m_i_sql_queries_isValid;

    QList<OAICommon_Response_objSQLQuery> m_a_obj_sql_query;
    bool m_a_obj_sql_query_isSet;
    bool m_a_obj_sql_query_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICommon_Response_objDebug)

#endif // OAICommon_Response_objDebug_H
