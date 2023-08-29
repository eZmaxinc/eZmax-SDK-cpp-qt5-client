/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIScim_UserList.h
 *
 * 
 */

#ifndef OAIScim_UserList_H
#define OAIScim_UserList_H

#include <QJsonObject>

#include "OAIScim_User.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIScim_User;

class OAIScim_UserList : public OAIObject {
public:
    OAIScim_UserList();
    OAIScim_UserList(QString json);
    ~OAIScim_UserList() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getTotalResults() const;
    void setTotalResults(const qint32 &total_results);
    bool is_total_results_Set() const;
    bool is_total_results_Valid() const;

    qint32 getItemsPerPage() const;
    void setItemsPerPage(const qint32 &items_per_page);
    bool is_items_per_page_Set() const;
    bool is_items_per_page_Valid() const;

    qint32 getStartIndex() const;
    void setStartIndex(const qint32 &start_index);
    bool is_start_index_Set() const;
    bool is_start_index_Valid() const;

    QList<QString> getSchemas() const;
    void setSchemas(const QList<QString> &schemas);
    bool is_schemas_Set() const;
    bool is_schemas_Valid() const;

    QList<OAIScim_User> getResources() const;
    void setResources(const QList<OAIScim_User> &resources);
    bool is_resources_Set() const;
    bool is_resources_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_total_results;
    bool m_total_results_isSet;
    bool m_total_results_isValid;

    qint32 m_items_per_page;
    bool m_items_per_page_isSet;
    bool m_items_per_page_isValid;

    qint32 m_start_index;
    bool m_start_index_isSet;
    bool m_start_index_isValid;

    QList<QString> m_schemas;
    bool m_schemas_isSet;
    bool m_schemas_isValid;

    QList<OAIScim_User> m_resources;
    bool m_resources_isSet;
    bool m_resources_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIScim_UserList)

#endif // OAIScim_UserList_H
