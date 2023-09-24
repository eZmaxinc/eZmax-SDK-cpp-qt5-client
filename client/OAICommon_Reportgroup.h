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
 * OAICommon_Reportgroup.h
 *
 * A group of reports  Each Reportgroup is for a specific recipient or for a specific context.
 */

#ifndef OAICommon_Reportgroup_H
#define OAICommon_Reportgroup_H

#include <QJsonObject>

#include "OAICommon_Report.h"
#include "OAICommon_Reportcellstyle.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICommon_Report;
class OAICommon_Reportcellstyle;

class OAICommon_Reportgroup : public OAIObject {
public:
    OAICommon_Reportgroup();
    OAICommon_Reportgroup(QString json);
    ~OAICommon_Reportgroup() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAICommon_Report> getAObjReport() const;
    void setAObjReport(const QList<OAICommon_Report> &a_obj_report);
    bool is_a_obj_report_Set() const;
    bool is_a_obj_report_Valid() const;

    QList<OAICommon_Reportcellstyle> getAObjReportcellstyleCustom() const;
    void setAObjReportcellstyleCustom(const QList<OAICommon_Reportcellstyle> &a_obj_reportcellstyle_custom);
    bool is_a_obj_reportcellstyle_custom_Set() const;
    bool is_a_obj_reportcellstyle_custom_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAICommon_Report> m_a_obj_report;
    bool m_a_obj_report_isSet;
    bool m_a_obj_report_isValid;

    QList<OAICommon_Reportcellstyle> m_a_obj_reportcellstyle_custom;
    bool m_a_obj_reportcellstyle_custom_isSet;
    bool m_a_obj_reportcellstyle_custom_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICommon_Reportgroup)

#endif // OAICommon_Reportgroup_H
