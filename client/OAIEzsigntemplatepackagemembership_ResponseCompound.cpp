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

#include "OAIEzsigntemplatepackagemembership_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatepackagemembership_ResponseCompound::OAIEzsigntemplatepackagemembership_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatepackagemembership_ResponseCompound::OAIEzsigntemplatepackagemembership_ResponseCompound() {
    this->initializeModel();
}

OAIEzsigntemplatepackagemembership_ResponseCompound::~OAIEzsigntemplatepackagemembership_ResponseCompound() {}

void OAIEzsigntemplatepackagemembership_ResponseCompound::initializeModel() {

    m_pki_ezsigntemplatepackagemembership_id_isSet = false;
    m_pki_ezsigntemplatepackagemembership_id_isValid = false;

    m_fki_ezsigntemplatepackage_id_isSet = false;
    m_fki_ezsigntemplatepackage_id_isValid = false;

    m_fki_ezsigntemplate_id_isSet = false;
    m_fki_ezsigntemplate_id_isValid = false;

    m_i_ezsigntemplatepackagemembership_order_isSet = false;
    m_i_ezsigntemplatepackagemembership_order_isValid = false;

    m_obj_ezsigntemplate_isSet = false;
    m_obj_ezsigntemplate_isValid = false;

    m_a_obj_ezsigntemplatepackagesignermembership_isSet = false;
    m_a_obj_ezsigntemplatepackagesignermembership_isValid = false;
}

void OAIEzsigntemplatepackagemembership_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatepackagemembership_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatepackagemembership_id_isValid = ::OpenAPI::fromJsonValue(m_pki_ezsigntemplatepackagemembership_id, json[QString("pkiEzsigntemplatepackagemembershipID")]);
    m_pki_ezsigntemplatepackagemembership_id_isSet = !json[QString("pkiEzsigntemplatepackagemembershipID")].isNull() && m_pki_ezsigntemplatepackagemembership_id_isValid;

    m_fki_ezsigntemplatepackage_id_isValid = ::OpenAPI::fromJsonValue(m_fki_ezsigntemplatepackage_id, json[QString("fkiEzsigntemplatepackageID")]);
    m_fki_ezsigntemplatepackage_id_isSet = !json[QString("fkiEzsigntemplatepackageID")].isNull() && m_fki_ezsigntemplatepackage_id_isValid;

    m_fki_ezsigntemplate_id_isValid = ::OpenAPI::fromJsonValue(m_fki_ezsigntemplate_id, json[QString("fkiEzsigntemplateID")]);
    m_fki_ezsigntemplate_id_isSet = !json[QString("fkiEzsigntemplateID")].isNull() && m_fki_ezsigntemplate_id_isValid;

    m_i_ezsigntemplatepackagemembership_order_isValid = ::OpenAPI::fromJsonValue(m_i_ezsigntemplatepackagemembership_order, json[QString("iEzsigntemplatepackagemembershipOrder")]);
    m_i_ezsigntemplatepackagemembership_order_isSet = !json[QString("iEzsigntemplatepackagemembershipOrder")].isNull() && m_i_ezsigntemplatepackagemembership_order_isValid;

    m_obj_ezsigntemplate_isValid = ::OpenAPI::fromJsonValue(m_obj_ezsigntemplate, json[QString("objEzsigntemplate")]);
    m_obj_ezsigntemplate_isSet = !json[QString("objEzsigntemplate")].isNull() && m_obj_ezsigntemplate_isValid;

    m_a_obj_ezsigntemplatepackagesignermembership_isValid = ::OpenAPI::fromJsonValue(m_a_obj_ezsigntemplatepackagesignermembership, json[QString("a_objEzsigntemplatepackagesignermembership")]);
    m_a_obj_ezsigntemplatepackagesignermembership_isSet = !json[QString("a_objEzsigntemplatepackagesignermembership")].isNull() && m_a_obj_ezsigntemplatepackagesignermembership_isValid;
}

QString OAIEzsigntemplatepackagemembership_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatepackagemembership_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatepackagemembership_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatepackagemembershipID"), ::OpenAPI::toJsonValue(m_pki_ezsigntemplatepackagemembership_id));
    }
    if (m_fki_ezsigntemplatepackage_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatepackageID"), ::OpenAPI::toJsonValue(m_fki_ezsigntemplatepackage_id));
    }
    if (m_fki_ezsigntemplate_id_isSet) {
        obj.insert(QString("fkiEzsigntemplateID"), ::OpenAPI::toJsonValue(m_fki_ezsigntemplate_id));
    }
    if (m_i_ezsigntemplatepackagemembership_order_isSet) {
        obj.insert(QString("iEzsigntemplatepackagemembershipOrder"), ::OpenAPI::toJsonValue(m_i_ezsigntemplatepackagemembership_order));
    }
    if (m_obj_ezsigntemplate.isSet()) {
        obj.insert(QString("objEzsigntemplate"), ::OpenAPI::toJsonValue(m_obj_ezsigntemplate));
    }
    if (m_a_obj_ezsigntemplatepackagesignermembership.size() > 0) {
        obj.insert(QString("a_objEzsigntemplatepackagesignermembership"), ::OpenAPI::toJsonValue(m_a_obj_ezsigntemplatepackagesignermembership));
    }
    return obj;
}

qint32 OAIEzsigntemplatepackagemembership_ResponseCompound::getPkiEzsigntemplatepackagemembershipId() const {
    return m_pki_ezsigntemplatepackagemembership_id;
}
void OAIEzsigntemplatepackagemembership_ResponseCompound::setPkiEzsigntemplatepackagemembershipId(const qint32 &pki_ezsigntemplatepackagemembership_id) {
    m_pki_ezsigntemplatepackagemembership_id = pki_ezsigntemplatepackagemembership_id;
    m_pki_ezsigntemplatepackagemembership_id_isSet = true;
}

bool OAIEzsigntemplatepackagemembership_ResponseCompound::is_pki_ezsigntemplatepackagemembership_id_Set() const{
    return m_pki_ezsigntemplatepackagemembership_id_isSet;
}

bool OAIEzsigntemplatepackagemembership_ResponseCompound::is_pki_ezsigntemplatepackagemembership_id_Valid() const{
    return m_pki_ezsigntemplatepackagemembership_id_isValid;
}

qint32 OAIEzsigntemplatepackagemembership_ResponseCompound::getFkiEzsigntemplatepackageId() const {
    return m_fki_ezsigntemplatepackage_id;
}
void OAIEzsigntemplatepackagemembership_ResponseCompound::setFkiEzsigntemplatepackageId(const qint32 &fki_ezsigntemplatepackage_id) {
    m_fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    m_fki_ezsigntemplatepackage_id_isSet = true;
}

bool OAIEzsigntemplatepackagemembership_ResponseCompound::is_fki_ezsigntemplatepackage_id_Set() const{
    return m_fki_ezsigntemplatepackage_id_isSet;
}

bool OAIEzsigntemplatepackagemembership_ResponseCompound::is_fki_ezsigntemplatepackage_id_Valid() const{
    return m_fki_ezsigntemplatepackage_id_isValid;
}

qint32 OAIEzsigntemplatepackagemembership_ResponseCompound::getFkiEzsigntemplateId() const {
    return m_fki_ezsigntemplate_id;
}
void OAIEzsigntemplatepackagemembership_ResponseCompound::setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id) {
    m_fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    m_fki_ezsigntemplate_id_isSet = true;
}

bool OAIEzsigntemplatepackagemembership_ResponseCompound::is_fki_ezsigntemplate_id_Set() const{
    return m_fki_ezsigntemplate_id_isSet;
}

bool OAIEzsigntemplatepackagemembership_ResponseCompound::is_fki_ezsigntemplate_id_Valid() const{
    return m_fki_ezsigntemplate_id_isValid;
}

qint32 OAIEzsigntemplatepackagemembership_ResponseCompound::getIEzsigntemplatepackagemembershipOrder() const {
    return m_i_ezsigntemplatepackagemembership_order;
}
void OAIEzsigntemplatepackagemembership_ResponseCompound::setIEzsigntemplatepackagemembershipOrder(const qint32 &i_ezsigntemplatepackagemembership_order) {
    m_i_ezsigntemplatepackagemembership_order = i_ezsigntemplatepackagemembership_order;
    m_i_ezsigntemplatepackagemembership_order_isSet = true;
}

bool OAIEzsigntemplatepackagemembership_ResponseCompound::is_i_ezsigntemplatepackagemembership_order_Set() const{
    return m_i_ezsigntemplatepackagemembership_order_isSet;
}

bool OAIEzsigntemplatepackagemembership_ResponseCompound::is_i_ezsigntemplatepackagemembership_order_Valid() const{
    return m_i_ezsigntemplatepackagemembership_order_isValid;
}

OAIEzsigntemplate_ResponseCompound OAIEzsigntemplatepackagemembership_ResponseCompound::getObjEzsigntemplate() const {
    return m_obj_ezsigntemplate;
}
void OAIEzsigntemplatepackagemembership_ResponseCompound::setObjEzsigntemplate(const OAIEzsigntemplate_ResponseCompound &obj_ezsigntemplate) {
    m_obj_ezsigntemplate = obj_ezsigntemplate;
    m_obj_ezsigntemplate_isSet = true;
}

bool OAIEzsigntemplatepackagemembership_ResponseCompound::is_obj_ezsigntemplate_Set() const{
    return m_obj_ezsigntemplate_isSet;
}

bool OAIEzsigntemplatepackagemembership_ResponseCompound::is_obj_ezsigntemplate_Valid() const{
    return m_obj_ezsigntemplate_isValid;
}

QList<OAIEzsigntemplatepackagesignermembership_ResponseCompound> OAIEzsigntemplatepackagemembership_ResponseCompound::getAObjEzsigntemplatepackagesignermembership() const {
    return m_a_obj_ezsigntemplatepackagesignermembership;
}
void OAIEzsigntemplatepackagemembership_ResponseCompound::setAObjEzsigntemplatepackagesignermembership(const QList<OAIEzsigntemplatepackagesignermembership_ResponseCompound> &a_obj_ezsigntemplatepackagesignermembership) {
    m_a_obj_ezsigntemplatepackagesignermembership = a_obj_ezsigntemplatepackagesignermembership;
    m_a_obj_ezsigntemplatepackagesignermembership_isSet = true;
}

bool OAIEzsigntemplatepackagemembership_ResponseCompound::is_a_obj_ezsigntemplatepackagesignermembership_Set() const{
    return m_a_obj_ezsigntemplatepackagesignermembership_isSet;
}

bool OAIEzsigntemplatepackagemembership_ResponseCompound::is_a_obj_ezsigntemplatepackagesignermembership_Valid() const{
    return m_a_obj_ezsigntemplatepackagesignermembership_isValid;
}

bool OAIEzsigntemplatepackagemembership_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplatepackagemembership_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplatepackage_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplate_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatepackagemembership_order_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_ezsigntemplate.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezsigntemplatepackagesignermembership.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatepackagemembership_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplatepackagemembership_id_isValid && m_fki_ezsigntemplatepackage_id_isValid && m_fki_ezsigntemplate_id_isValid && m_i_ezsigntemplatepackagemembership_order_isValid && m_obj_ezsigntemplate_isValid && m_a_obj_ezsigntemplatepackagesignermembership_isValid && true;
}

} // namespace OpenAPI
