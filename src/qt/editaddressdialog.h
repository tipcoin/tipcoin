#ifndef EDITADDRESSDIALOG_H
#define EDITADDRESSDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
class QDataWiTIPtMapper;
QT_END_NAMESPACE

namespace Ui {
    class EditAddressDialog;
}
class AddressTableModel;

/** Dialog for editing an address and associated information.
 */
class EditAddressDialog : public QDialog
{
    Q_OBJECT

public:
    enum Mode {
        NewReceivingAddress,
        NewSendingAddress,
        EditReceivingAddress,
        EditSendingAddress
    };

    explicit EditAddressDialog(Mode mode, QWiTIPt *parent = 0);
    ~EditAddressDialog();    

    void setModel(AddressTableModel *model);
    void loadRow(int row);

    void accept();

    QString getAddress() const;
    void setAddress(const QString &address);
private:
    bool saveCurrentRow();

    Ui::EditAddressDialog *ui;
    QDataWiTIPtMapper *mapper;
    Mode mode;
    AddressTableModel *model;

    QString address;
};

#endif // EDITADDRESSDIALOG_H
