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

#include "Ezsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::Ezsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::Ezsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request() {
    this->initializeModel();
}

Ezsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::~Ezsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request() {}

void Ezsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::initializeModel() {

    m_a_obj_ezsigntemplateformfieldgroup_isSet = false;
    m_a_obj_ezsigntemplateformfieldgroup_isValid = false;
}

void Ezsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsigntemplateformfieldgroup_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsigntemplateformfieldgroup, json[QString("a_objEzsigntemplateformfieldgroup")]);
    m_a_obj_ezsigntemplateformfieldgroup_isSet = !json[QString("a_objEzsigntemplateformfieldgroup")].isNull() && m_a_obj_ezsigntemplateformfieldgroup_isValid;
}

QString Ezsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_ezsigntemplateformfieldgroup.size() > 0) {
        obj.insert(QString("a_objEzsigntemplateformfieldgroup"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsigntemplateformfieldgroup));
    }
    return obj;
}

QList<Ezsigntemplateformfieldgroup_RequestCompound> Ezsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::getAObjEzsigntemplateformfieldgroup() const {
    return m_a_obj_ezsigntemplateformfieldgroup;
}
void Ezsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::setAObjEzsigntemplateformfieldgroup(const QList<Ezsigntemplateformfieldgroup_RequestCompound> &a_obj_ezsigntemplateformfieldgroup) {
    m_a_obj_ezsigntemplateformfieldgroup = a_obj_ezsigntemplateformfieldgroup;
    m_a_obj_ezsigntemplateformfieldgroup_isSet = true;
}

bool Ezsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::is_a_obj_ezsigntemplateformfieldgroup_Set() const{
    return m_a_obj_ezsigntemplateformfieldgroup_isSet;
}

bool Ezsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::is_a_obj_ezsigntemplateformfieldgroup_Valid() const{
    return m_a_obj_ezsigntemplateformfieldgroup_isValid;
}

bool Ezsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_ezsigntemplateformfieldgroup.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsigntemplateformfieldgroup_isValid && true;
}

} // namespace Ezmaxapi
