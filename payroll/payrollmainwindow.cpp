#include "payrollmainwindow.h"
#include "ui_payrollmainwindow.h"
#include "settingsmanager.h"
#include "selectcompanydialog.h"
#include "../libfreepayroll/payrollxmlmanager.h"

#include <QDebug>
PayrollMainWindow::PayrollMainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::PayrollMainWindow)
{
	ui->setupUi(this);
	this->showMaximized();
	//selectCompany();
	this->restoreGeometry(SettingsManager::getValue("MainWindowState").toByteArray());
	if (!m_xml) {
		qDebug() << "No xml";
	}
}

PayrollMainWindow::~PayrollMainWindow()
{
	SettingsManager::setValue("MainWindowState", this->saveGeometry());
	delete ui;
}

void PayrollMainWindow::selectCompany()
{
	//if (!m_companySelector)
	m_companySelector = new SelectCompanyDialog(this);

	if (m_companySelector->exec() == QDialog::Accepted) {
		//Open selected company
	}

	delete(m_companySelector);
}
