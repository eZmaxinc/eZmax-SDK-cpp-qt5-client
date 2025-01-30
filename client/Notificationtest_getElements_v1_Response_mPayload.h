/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Notificationtest_getElements_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/notificationtest/{pkiNotificationtestID}/getElements
 */

#ifndef Notificationtest_getElements_v1_Response_mPayload_H
#define Notificationtest_getElements_v1_Response_mPayload_H

#include <QJsonObject>

#include <QJsonValue>
#include <QList>
#include <QMap>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Notificationtest_getElements_v1_Response_mPayload : public Object {
public:
    Notificationtest_getElements_v1_Response_mPayload();
    Notificationtest_getElements_v1_Response_mPayload(QString json);
    ~Notificationtest_getElements_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiNotificationtestId() const;
    void setPkiNotificationtestId(const qint32 &pki_notificationtest_id);
    bool is_pki_notificationtest_id_Set() const;
    bool is_pki_notificationtest_id_Valid() const;

    QString getSNotificationtestFunction() const;
    void setSNotificationtestFunction(const QString &s_notificationtest_function);
    bool is_s_notificationtest_function_Set() const;
    bool is_s_notificationtest_function_Valid() const;

    QList<QString> getASVariableobjectProperty() const;
    void setASVariableobjectProperty(const QList<QString> &a_s_variableobject_property);
    bool is_a_s_variableobject_property_Set() const;
    bool is_a_s_variableobject_property_Valid() const;

    QList<QMap> getAObjVariableobject() const;
    void setAObjVariableobject(const QList<QMap> &a_obj_variableobject);
    bool is_a_obj_variableobject_Set() const;
    bool is_a_obj_variableobject_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_notificationtest_id;
    bool m_pki_notificationtest_id_isSet;
    bool m_pki_notificationtest_id_isValid;

    QString m_s_notificationtest_function;
    bool m_s_notificationtest_function_isSet;
    bool m_s_notificationtest_function_isValid;

    QList<QString> m_a_s_variableobject_property;
    bool m_a_s_variableobject_property_isSet;
    bool m_a_s_variableobject_property_isValid;

    QList<QMap> m_a_obj_variableobject;
    bool m_a_obj_variableobject_isSet;
    bool m_a_obj_variableobject_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Notificationtest_getElements_v1_Response_mPayload)

#endif // Notificationtest_getElements_v1_Response_mPayload_H
