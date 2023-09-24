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

#include "OAICommon_Reportcellstyle.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICommon_Reportcellstyle::OAICommon_Reportcellstyle(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommon_Reportcellstyle::OAICommon_Reportcellstyle() {
    this->initializeModel();
}

OAICommon_Reportcellstyle::~OAICommon_Reportcellstyle() {}

void OAICommon_Reportcellstyle::initializeModel() {

    m_b_reportcellstyle_bordertop_isSet = false;
    m_b_reportcellstyle_bordertop_isValid = false;

    m_b_reportcellstyle_borderbottom_isSet = false;
    m_b_reportcellstyle_borderbottom_isValid = false;

    m_b_reportcellstyle_borderleft_isSet = false;
    m_b_reportcellstyle_borderleft_isValid = false;

    m_b_reportcellstyle_borderright_isSet = false;
    m_b_reportcellstyle_borderright_isValid = false;

    m_e_reportcell_horizontalalignment_isSet = false;
    m_e_reportcell_horizontalalignment_isValid = false;

    m_e_reportcell_verticalalignment_isSet = false;
    m_e_reportcell_verticalalignment_isValid = false;

    m_e_reportcell_fontweight_isSet = false;
    m_e_reportcell_fontweight_isValid = false;

    m_e_reportcell_fontunderline_isSet = false;
    m_e_reportcell_fontunderline_isValid = false;
}

void OAICommon_Reportcellstyle::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommon_Reportcellstyle::fromJsonObject(QJsonObject json) {

    m_b_reportcellstyle_bordertop_isValid = ::OpenAPI::fromJsonValue(m_b_reportcellstyle_bordertop, json[QString("bReportcellstyleBordertop")]);
    m_b_reportcellstyle_bordertop_isSet = !json[QString("bReportcellstyleBordertop")].isNull() && m_b_reportcellstyle_bordertop_isValid;

    m_b_reportcellstyle_borderbottom_isValid = ::OpenAPI::fromJsonValue(m_b_reportcellstyle_borderbottom, json[QString("bReportcellstyleBorderbottom")]);
    m_b_reportcellstyle_borderbottom_isSet = !json[QString("bReportcellstyleBorderbottom")].isNull() && m_b_reportcellstyle_borderbottom_isValid;

    m_b_reportcellstyle_borderleft_isValid = ::OpenAPI::fromJsonValue(m_b_reportcellstyle_borderleft, json[QString("bReportcellstyleBorderleft")]);
    m_b_reportcellstyle_borderleft_isSet = !json[QString("bReportcellstyleBorderleft")].isNull() && m_b_reportcellstyle_borderleft_isValid;

    m_b_reportcellstyle_borderright_isValid = ::OpenAPI::fromJsonValue(m_b_reportcellstyle_borderright, json[QString("bReportcellstyleBorderright")]);
    m_b_reportcellstyle_borderright_isSet = !json[QString("bReportcellstyleBorderright")].isNull() && m_b_reportcellstyle_borderright_isValid;

    m_e_reportcell_horizontalalignment_isValid = ::OpenAPI::fromJsonValue(m_e_reportcell_horizontalalignment, json[QString("eReportcellHorizontalalignment")]);
    m_e_reportcell_horizontalalignment_isSet = !json[QString("eReportcellHorizontalalignment")].isNull() && m_e_reportcell_horizontalalignment_isValid;

    m_e_reportcell_verticalalignment_isValid = ::OpenAPI::fromJsonValue(m_e_reportcell_verticalalignment, json[QString("eReportcellVerticalalignment")]);
    m_e_reportcell_verticalalignment_isSet = !json[QString("eReportcellVerticalalignment")].isNull() && m_e_reportcell_verticalalignment_isValid;

    m_e_reportcell_fontweight_isValid = ::OpenAPI::fromJsonValue(m_e_reportcell_fontweight, json[QString("eReportcellFontweight")]);
    m_e_reportcell_fontweight_isSet = !json[QString("eReportcellFontweight")].isNull() && m_e_reportcell_fontweight_isValid;

    m_e_reportcell_fontunderline_isValid = ::OpenAPI::fromJsonValue(m_e_reportcell_fontunderline, json[QString("eReportcellFontunderline")]);
    m_e_reportcell_fontunderline_isSet = !json[QString("eReportcellFontunderline")].isNull() && m_e_reportcell_fontunderline_isValid;
}

QString OAICommon_Reportcellstyle::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommon_Reportcellstyle::asJsonObject() const {
    QJsonObject obj;
    if (m_b_reportcellstyle_bordertop_isSet) {
        obj.insert(QString("bReportcellstyleBordertop"), ::OpenAPI::toJsonValue(m_b_reportcellstyle_bordertop));
    }
    if (m_b_reportcellstyle_borderbottom_isSet) {
        obj.insert(QString("bReportcellstyleBorderbottom"), ::OpenAPI::toJsonValue(m_b_reportcellstyle_borderbottom));
    }
    if (m_b_reportcellstyle_borderleft_isSet) {
        obj.insert(QString("bReportcellstyleBorderleft"), ::OpenAPI::toJsonValue(m_b_reportcellstyle_borderleft));
    }
    if (m_b_reportcellstyle_borderright_isSet) {
        obj.insert(QString("bReportcellstyleBorderright"), ::OpenAPI::toJsonValue(m_b_reportcellstyle_borderright));
    }
    if (m_e_reportcell_horizontalalignment.isSet()) {
        obj.insert(QString("eReportcellHorizontalalignment"), ::OpenAPI::toJsonValue(m_e_reportcell_horizontalalignment));
    }
    if (m_e_reportcell_verticalalignment.isSet()) {
        obj.insert(QString("eReportcellVerticalalignment"), ::OpenAPI::toJsonValue(m_e_reportcell_verticalalignment));
    }
    if (m_e_reportcell_fontweight.isSet()) {
        obj.insert(QString("eReportcellFontweight"), ::OpenAPI::toJsonValue(m_e_reportcell_fontweight));
    }
    if (m_e_reportcell_fontunderline.isSet()) {
        obj.insert(QString("eReportcellFontunderline"), ::OpenAPI::toJsonValue(m_e_reportcell_fontunderline));
    }
    return obj;
}

bool OAICommon_Reportcellstyle::isBReportcellstyleBordertop() const {
    return m_b_reportcellstyle_bordertop;
}
void OAICommon_Reportcellstyle::setBReportcellstyleBordertop(const bool &b_reportcellstyle_bordertop) {
    m_b_reportcellstyle_bordertop = b_reportcellstyle_bordertop;
    m_b_reportcellstyle_bordertop_isSet = true;
}

bool OAICommon_Reportcellstyle::is_b_reportcellstyle_bordertop_Set() const{
    return m_b_reportcellstyle_bordertop_isSet;
}

bool OAICommon_Reportcellstyle::is_b_reportcellstyle_bordertop_Valid() const{
    return m_b_reportcellstyle_bordertop_isValid;
}

bool OAICommon_Reportcellstyle::isBReportcellstyleBorderbottom() const {
    return m_b_reportcellstyle_borderbottom;
}
void OAICommon_Reportcellstyle::setBReportcellstyleBorderbottom(const bool &b_reportcellstyle_borderbottom) {
    m_b_reportcellstyle_borderbottom = b_reportcellstyle_borderbottom;
    m_b_reportcellstyle_borderbottom_isSet = true;
}

bool OAICommon_Reportcellstyle::is_b_reportcellstyle_borderbottom_Set() const{
    return m_b_reportcellstyle_borderbottom_isSet;
}

bool OAICommon_Reportcellstyle::is_b_reportcellstyle_borderbottom_Valid() const{
    return m_b_reportcellstyle_borderbottom_isValid;
}

bool OAICommon_Reportcellstyle::isBReportcellstyleBorderleft() const {
    return m_b_reportcellstyle_borderleft;
}
void OAICommon_Reportcellstyle::setBReportcellstyleBorderleft(const bool &b_reportcellstyle_borderleft) {
    m_b_reportcellstyle_borderleft = b_reportcellstyle_borderleft;
    m_b_reportcellstyle_borderleft_isSet = true;
}

bool OAICommon_Reportcellstyle::is_b_reportcellstyle_borderleft_Set() const{
    return m_b_reportcellstyle_borderleft_isSet;
}

bool OAICommon_Reportcellstyle::is_b_reportcellstyle_borderleft_Valid() const{
    return m_b_reportcellstyle_borderleft_isValid;
}

bool OAICommon_Reportcellstyle::isBReportcellstyleBorderright() const {
    return m_b_reportcellstyle_borderright;
}
void OAICommon_Reportcellstyle::setBReportcellstyleBorderright(const bool &b_reportcellstyle_borderright) {
    m_b_reportcellstyle_borderright = b_reportcellstyle_borderright;
    m_b_reportcellstyle_borderright_isSet = true;
}

bool OAICommon_Reportcellstyle::is_b_reportcellstyle_borderright_Set() const{
    return m_b_reportcellstyle_borderright_isSet;
}

bool OAICommon_Reportcellstyle::is_b_reportcellstyle_borderright_Valid() const{
    return m_b_reportcellstyle_borderright_isValid;
}

OAIEnum_Horizontalalignment OAICommon_Reportcellstyle::getEReportcellHorizontalalignment() const {
    return m_e_reportcell_horizontalalignment;
}
void OAICommon_Reportcellstyle::setEReportcellHorizontalalignment(const OAIEnum_Horizontalalignment &e_reportcell_horizontalalignment) {
    m_e_reportcell_horizontalalignment = e_reportcell_horizontalalignment;
    m_e_reportcell_horizontalalignment_isSet = true;
}

bool OAICommon_Reportcellstyle::is_e_reportcell_horizontalalignment_Set() const{
    return m_e_reportcell_horizontalalignment_isSet;
}

bool OAICommon_Reportcellstyle::is_e_reportcell_horizontalalignment_Valid() const{
    return m_e_reportcell_horizontalalignment_isValid;
}

OAIEnum_Verticalalignment OAICommon_Reportcellstyle::getEReportcellVerticalalignment() const {
    return m_e_reportcell_verticalalignment;
}
void OAICommon_Reportcellstyle::setEReportcellVerticalalignment(const OAIEnum_Verticalalignment &e_reportcell_verticalalignment) {
    m_e_reportcell_verticalalignment = e_reportcell_verticalalignment;
    m_e_reportcell_verticalalignment_isSet = true;
}

bool OAICommon_Reportcellstyle::is_e_reportcell_verticalalignment_Set() const{
    return m_e_reportcell_verticalalignment_isSet;
}

bool OAICommon_Reportcellstyle::is_e_reportcell_verticalalignment_Valid() const{
    return m_e_reportcell_verticalalignment_isValid;
}

OAIEnum_Fontweight OAICommon_Reportcellstyle::getEReportcellFontweight() const {
    return m_e_reportcell_fontweight;
}
void OAICommon_Reportcellstyle::setEReportcellFontweight(const OAIEnum_Fontweight &e_reportcell_fontweight) {
    m_e_reportcell_fontweight = e_reportcell_fontweight;
    m_e_reportcell_fontweight_isSet = true;
}

bool OAICommon_Reportcellstyle::is_e_reportcell_fontweight_Set() const{
    return m_e_reportcell_fontweight_isSet;
}

bool OAICommon_Reportcellstyle::is_e_reportcell_fontweight_Valid() const{
    return m_e_reportcell_fontweight_isValid;
}

OAIEnum_Fontunderline OAICommon_Reportcellstyle::getEReportcellFontunderline() const {
    return m_e_reportcell_fontunderline;
}
void OAICommon_Reportcellstyle::setEReportcellFontunderline(const OAIEnum_Fontunderline &e_reportcell_fontunderline) {
    m_e_reportcell_fontunderline = e_reportcell_fontunderline;
    m_e_reportcell_fontunderline_isSet = true;
}

bool OAICommon_Reportcellstyle::is_e_reportcell_fontunderline_Set() const{
    return m_e_reportcell_fontunderline_isSet;
}

bool OAICommon_Reportcellstyle::is_e_reportcell_fontunderline_Valid() const{
    return m_e_reportcell_fontunderline_isValid;
}

bool OAICommon_Reportcellstyle::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_b_reportcellstyle_bordertop_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_reportcellstyle_borderbottom_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_reportcellstyle_borderleft_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_reportcellstyle_borderright_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_reportcell_horizontalalignment.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_reportcell_verticalalignment.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_reportcell_fontweight.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_reportcell_fontunderline.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommon_Reportcellstyle::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_b_reportcellstyle_bordertop_isValid && m_b_reportcellstyle_borderbottom_isValid && m_b_reportcellstyle_borderleft_isValid && m_b_reportcellstyle_borderright_isValid && m_e_reportcell_horizontalalignment_isValid && m_e_reportcell_verticalalignment_isValid && m_e_reportcell_fontweight_isValid && m_e_reportcell_fontunderline_isValid && true;
}

} // namespace OpenAPI
