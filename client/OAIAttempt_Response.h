/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.47
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIAttempt_Response.h
 *
 * An Attempt object
 */

#ifndef OAIAttempt_Response_H
#define OAIAttempt_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAttempt_Response : public OAIObject {
public:
    OAIAttempt_Response();
    OAIAttempt_Response(QString json);
    ~OAIAttempt_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getDtAttemptStart() const;
    void setDtAttemptStart(const QString &dt_attempt_start);
    bool is_dt_attempt_start_Set() const;
    bool is_dt_attempt_start_Valid() const;

    QString getSAttemptResult() const;
    void setSAttemptResult(const QString &s_attempt_result);
    bool is_s_attempt_result_Set() const;
    bool is_s_attempt_result_Valid() const;

    qint32 getIAttemptDuration() const;
    void setIAttemptDuration(const qint32 &i_attempt_duration);
    bool is_i_attempt_duration_Set() const;
    bool is_i_attempt_duration_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString dt_attempt_start;
    bool m_dt_attempt_start_isSet;
    bool m_dt_attempt_start_isValid;

    QString s_attempt_result;
    bool m_s_attempt_result_isSet;
    bool m_s_attempt_result_isValid;

    qint32 i_attempt_duration;
    bool m_i_attempt_duration_isSet;
    bool m_i_attempt_duration_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAttempt_Response)

#endif // OAIAttempt_Response_H
