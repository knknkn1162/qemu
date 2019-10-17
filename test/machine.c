// DEFINE_MACHINE("virt", riscv_virt_board_machine_init):
static void riscv_virt_board_machine_init_class_init(ObjectClass *oc, void *data)
{
    MachineClass *mc = MACHINE_CLASS(oc);
    machine_initfn(mc);
}

static const TypeInfo riscv_virt_board_machine_init_typeinfo = {
    .name       = MACHINE_TYPE_NAME("virt"), // "virt-machine"
    .parent     = TYPE_MACHINE, // "machine"
    .class_init = riscv_virt_board_machine_init_class_init,
};
static void riscv_virt_board_machine_init_register_types(void) \
{
    type_register_static(&riscv_virt_board_machine_init_typeinfo);
}
// #define type_init(function) module_init(function, MODULE_INIT_QOM) // enum: INIT_QOM
type_init(riscv_virt_board_machine_init_register_types)
