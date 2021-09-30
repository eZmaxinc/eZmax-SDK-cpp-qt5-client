/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigndocument_getWordsPositions_v1_Response_mPayload.h
 *
 * Payload for the /1/object/ezsigndocument/{pkiEzsigndocumentID}/getWordsPositions API Request
 */

#ifndef OAIEzsigndocument_getWordsPositions_v1_Response_mPayload_H
#define OAIEzsigndocument_getWordsPositions_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAICustom_WordPosition_Response.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigndocument_getWordsPositions_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsigndocument_getWordsPositions_v1_Response_mPayload();
    OAIEzsigndocument_getWordsPositions_v1_Response_mPayload(QString json);
    ~OAIEzsigndocument_getWordsPositions_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAICustom_WordPosition_Response> getASWords() const;
    void setASWords(const QList<OAICustom_WordPosition_Response> &a_s_words);
    bool is_a_s_words_Set() const;
    bool is_a_s_words_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAICustom_WordPosition_Response> a_s_words;
    bool m_a_s_words_isSet;
    bool m_a_s_words_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigndocument_getWordsPositions_v1_Response_mPayload)

#endif // OAIEzsigndocument_getWordsPositions_v1_Response_mPayload_H
