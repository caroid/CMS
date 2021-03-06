#ifndef MARKETINGUNITCONTROLLER_H
#define MARKETINGUNITCONTROLLER_H

#include "applicationcontroller.h"


class T_CONTROLLER_EXPORT MarketingunitController : public ApplicationController
{
    Q_OBJECT
public:
    MarketingunitController() { }
    MarketingunitController(const MarketingunitController &other);

public slots:
    void index();
    void show(const QString &pk);
    void entry();
    void create();
    void edit(const QString &pk);
    void save(const QString &pk);
    void remove(const QString &pk);
    void searching();
    void reportform();
    void showform();

private:
    void renderEntry(const QVariantMap &marketingunit = QVariantMap());
    void renderEdit(const QVariantMap &marketingunit = QVariantMap());
protected:
    bool preFilter();
};

T_DECLARE_CONTROLLER(MarketingunitController, marketingunitcontroller)

#endif // MARKETINGUNITCONTROLLER_H
