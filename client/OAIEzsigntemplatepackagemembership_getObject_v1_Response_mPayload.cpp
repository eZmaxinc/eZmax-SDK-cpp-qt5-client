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

#include "OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::~OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload() {}

void OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::initializeModel() {

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

void OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatepackagemembership_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsigntemplatepackagemembership_id, json[QString("pkiEzsigntemplatepackagemembershipID")]);
    m_pki_ezsigntemplatepackagemembership_id_isSet = !json[QString("pkiEzsigntemplatepackagemembershipID")].isNull() && m_pki_ezsigntemplatepackagemembership_id_isValid;

    m_fki_ezsigntemplatepackage_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntemplatepackage_id, json[QString("fkiEzsigntemplatepackageID")]);
    m_fki_ezsigntemplatepackage_id_isSet = !json[QString("fkiEzsigntemplatepackageID")].isNull() && m_fki_ezsigntemplatepackage_id_isValid;

    m_fki_ezsigntemplate_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntemplate_id, json[QString("fkiEzsigntemplateID")]);
    m_fki_ezsigntemplate_id_isSet = !json[QString("fkiEzsigntemplateID")].isNull() && m_fki_ezsigntemplate_id_isValid;

    m_i_ezsigntemplatepackagemembership_order_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplatepackagemembership_order, json[QString("iEzsigntemplatepackagemembershipOrder")]);
    m_i_ezsigntemplatepackagemembership_order_isSet = !json[QString("iEzsigntemplatepackagemembershipOrder")].isNull() && m_i_ezsigntemplatepackagemembership_order_isValid;

    m_obj_ezsigntemplate_isValid = ::OpenAPI::fromJsonValue(obj_ezsigntemplate, json[QString("objEzsigntemplate")]);
    m_obj_ezsigntemplate_isSet = !json[QString("objEzsigntemplate")].isNull() && m_obj_ezsigntemplate_isValid;

    m_a_obj_ezsigntemplatepackagesignermembership_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsigntemplatepackagesignermembership, json[QString("a_objEzsigntemplatepackagesignermembership")]);
    m_a_obj_ezsigntemplatepackagesignermembership_isSet = !json[QString("a_objEzsigntemplatepackagesignermembership")].isNull() && m_a_obj_ezsigntemplatepackagesignermembership_isValid;
}

QString OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatepackagemembership_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatepackagemembershipID"), ::OpenAPI::toJsonValue(pki_ezsigntemplatepackagemembership_id));
    }
    if (m_fki_ezsigntemplatepackage_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatepackageID"), ::OpenAPI::toJsonValue(fki_ezsigntemplatepackage_id));
    }
    if (m_fki_ezsigntemplate_id_isSet) {
        obj.insert(QString("fkiEzsigntemplateID"), ::OpenAPI::toJsonValue(fki_ezsigntemplate_id));
    }
    if (m_i_ezsigntemplatepackagemembership_order_isSet) {
        obj.insert(QString("iEzsigntemplatepackagemembershipOrder"), ::OpenAPI::toJsonValue(i_ezsigntemplatepackagemembership_order));
    }
    if (obj_ezsigntemplate.isSet()) {
        obj.insert(QString("objEzsigntemplate"), ::OpenAPI::toJsonValue(obj_ezsigntemplate));
    }
    if (a_obj_ezsigntemplatepackagesignermembership.size() > 0) {
        obj.insert(QString("a_objEzsigntemplatepackagesignermembership"), ::OpenAPI::toJsonValue(a_obj_ezsigntemplatepackagesignermembership));
    }
    return obj;
}

qint32 OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::getPkiEzsigntemplatepackagemembershipId() const {
    return pki_ezsigntemplatepackagemembership_id;
}
void OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::setPkiEzsigntemplatepackagemembershipId(const qint32 &pki_ezsigntemplatepackagemembership_id) {
    this->pki_ezsigntemplatepackagemembership_id = pki_ezsigntemplatepackagemembership_id;
    this->m_pki_ezsigntemplatepackagemembership_id_isSet = true;
}

bool OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::is_pki_ezsigntemplatepackagemembership_id_Set() const{
    return m_pki_ezsigntemplatepackagemembership_id_isSet;
}

bool OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::is_pki_ezsigntemplatepackagemembership_id_Valid() const{
    return m_pki_ezsigntemplatepackagemembership_id_isValid;
}

qint32 OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::getFkiEzsigntemplatepackageId() const {
    return fki_ezsigntemplatepackage_id;
}
void OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::setFkiEzsigntemplatepackageId(const qint32 &fki_ezsigntemplatepackage_id) {
    this->fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    this->m_fki_ezsigntemplatepackage_id_isSet = true;
}

bool OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::is_fki_ezsigntemplatepackage_id_Set() const{
    return m_fki_ezsigntemplatepackage_id_isSet;
}

bool OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::is_fki_ezsigntemplatepackage_id_Valid() const{
    return m_fki_ezsigntemplatepackage_id_isValid;
}

qint32 OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::getFkiEzsigntemplateId() const {
    return fki_ezsigntemplate_id;
}
void OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id) {
    this->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    this->m_fki_ezsigntemplate_id_isSet = true;
}

bool OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::is_fki_ezsigntemplate_id_Set() const{
    return m_fki_ezsigntemplate_id_isSet;
}

bool OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::is_fki_ezsigntemplate_id_Valid() const{
    return m_fki_ezsigntemplate_id_isValid;
}

qint32 OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::getIEzsigntemplatepackagemembershipOrder() const {
    return i_ezsigntemplatepackagemembership_order;
}
void OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::setIEzsigntemplatepackagemembershipOrder(const qint32 &i_ezsigntemplatepackagemembership_order) {
    this->i_ezsigntemplatepackagemembership_order = i_ezsigntemplatepackagemembership_order;
    this->m_i_ezsigntemplatepackagemembership_order_isSet = true;
}

bool OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::is_i_ezsigntemplatepackagemembership_order_Set() const{
    return m_i_ezsigntemplatepackagemembership_order_isSet;
}

bool OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::is_i_ezsigntemplatepackagemembership_order_Valid() const{
    return m_i_ezsigntemplatepackagemembership_order_isValid;
}

OAIEzsigntemplate_ResponseCompound OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::getObjEzsigntemplate() const {
    return obj_ezsigntemplate;
}
void OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::setObjEzsigntemplate(const OAIEzsigntemplate_ResponseCompound &obj_ezsigntemplate) {
    this->obj_ezsigntemplate = obj_ezsigntemplate;
    this->m_obj_ezsigntemplate_isSet = true;
}

bool OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::is_obj_ezsigntemplate_Set() const{
    return m_obj_ezsigntemplate_isSet;
}

bool OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::is_obj_ezsigntemplate_Valid() const{
    return m_obj_ezsigntemplate_isValid;
}

QList<OAIEzsigntemplatepackagesignermembership_ResponseCompound> OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::getAObjEzsigntemplatepackagesignermembership() const {
    return a_obj_ezsigntemplatepackagesignermembership;
}
void OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::setAObjEzsigntemplatepackagesignermembership(const QList<OAIEzsigntemplatepackagesignermembership_ResponseCompound> &a_obj_ezsigntemplatepackagesignermembership) {
    this->a_obj_ezsigntemplatepackagesignermembership = a_obj_ezsigntemplatepackagesignermembership;
    this->m_a_obj_ezsigntemplatepackagesignermembership_isSet = true;
}

bool OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::is_a_obj_ezsigntemplatepackagesignermembership_Set() const{
    return m_a_obj_ezsigntemplatepackagesignermembership_isSet;
}

bool OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::is_a_obj_ezsigntemplatepackagesignermembership_Valid() const{
    return m_a_obj_ezsigntemplatepackagesignermembership_isValid;
}

bool OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::isSet() const {
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

        if (obj_ezsigntemplate.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_ezsigntemplatepackagesignermembership.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatepackagemembership_getObject_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplatepackagemembership_id_isValid && m_fki_ezsigntemplatepackage_id_isValid && m_fki_ezsigntemplate_id_isValid && m_i_ezsigntemplatepackagemembership_order_isValid && m_obj_ezsigntemplate_isValid && m_a_obj_ezsigntemplatepackagesignermembership_isValid && true;
}

} // namespace OpenAPI
