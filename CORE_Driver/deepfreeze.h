
NTSTATUS DispatchDeepFreeze(IN PDEVICE_OBJECT dobj, IN PIRP Irp);

NTSTATUS do_ioctl_thaw(IN PDEVICE_OBJECT dobj, IN PIRP Irp, IN PIO_STACK_LOCATION irpSp);
NTSTATUS do_ioctl_freeze(IN PDEVICE_OBJECT dobj, IN PIRP Irp, IN PIO_STACK_LOCATION irpSp);

NTSTATUS DriverEntryDeepFreeze( IN PDRIVER_OBJECT dobj, IN PUNICODE_STRING regpath);
void OnUnloadDeepFreeze(IN PDRIVER_OBJECT dobj);