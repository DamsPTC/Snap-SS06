/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1014acaa8; end: 1014acad7; -[_TtC27SCNetworkRegulationServices43NetworkRegulationConnectivityChangeNotifier notifyListener:] */

void FUN_1014acaa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1014ac9bc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014acad8; end: 1014acadb; -[_TtC27SCNetworkRegulationServices43NetworkRegulationConnectivityChangeNotifier notifyRadioAccessType:] */

void FUN_1014acad8(void)

{
  return;
}



/* Entry: 1014acadc; end: 1014acae3; -[_TtC27SCNetworkRegulationServices43NetworkRegulationConnectivityChangeNotifier registerRadioAccessTypeListener:] */

undefined8 FUN_1014acadc(void)

{
  return 0;
}



/* Entry: 1014acae4; end: 1014acb0f; -[_TtC27SCNetworkRegulationServices43NetworkRegulationConnectivityChangeNotifier init] */

void FUN_1014acae4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCNetworkRegulationServices.NetworkRegulationConnectivityChangeNotifier",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014acb10);
  (*pcVar1)();
}



/* Entry: 1014acb10; end: 1014accc3;  */

ulong FUN_1014acb10(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014acbf4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014acbf8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126e0220;
    func_0x000107c61168(PTR_PTR_1126e0220);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126e0220;
    func_0x000107c61168(PTR_PTR_1126e0220);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x0001009d8f68(0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1014accc4);
  (*pcVar2)();
}



/* Entry: 1014accc4; end: 1014acccb;  */

void FUN_1014accc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1014acccc; end: 1014acd4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1014acccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112da4a58) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da4a60) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112da4a68) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 1014acd50; end: 1014acd57;  */

void FUN_1014acd50(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c0e2810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_onAppForeground_112616418);
  return;
}



/* Entry: 1014acd58; end: 1014acdb7; -[_TtC27SCNetworkRegulationServices27NetworkRegulationEntryPoint init] */

void FUN_1014acd58(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCNetworkRegulationServices.NetworkRegulationEntryPoint",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014acd84);
  (*pcVar1)();
}



/* Entry: 1014acdb8; end: 1014ace1f; -[_TtC27SCNetworkRegulationServices27NetworkRegulationEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001014acdd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014acdd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014acdb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da4a60));
  return;
}



/* Entry: 1014ace20; end: 1014ace2b;  */

undefined8 FUN_1014ace20(void)

{
  return 0;
}



/* Entry: 1014ace2c; end: 1014ace8b; -[_TtC27SCNetworkRegulationServices33NetworkRegulationSupportInterface init] */

void FUN_1014ace2c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCNetworkRegulationServices.NetworkRegulationSupportInterface",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014ace58);
  (*pcVar1)();
}



/* Entry: 1014ace8c; end: 1014acfe3;  */

void FUN_1014ace8c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x0001000977b8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_1014adfc0(0);
  func_0x000107c610f8();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x0001014adbb8();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  func_0x000107c61174();
  func_0x0001014adcd8();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar5);
  *param_1 = param_2;
  return;
}



/* Entry: 1014acfe4; end: 1014acfef;  */

void FUN_1014acfe4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x0001000977b8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_1014adfc0(0);
  func_0x000107c610f8();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_58;
  func_0x000107c61174();
  uVar6 = uVar5;
  func_0x0001014adbb8();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  func_0x000107c61174();
  func_0x0001014adcd8();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  *param_1 = lVar1;
  return;
}



/* Entry: 1014acff0; end: 1014ad0f3;  */

long FUN_1014acff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  FUN_1014adfc0(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001014adbb8();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c61174();
  func_0x0001014adcd8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar1);
  return unaff_x20;
}



/* Entry: 1014ad0f4; end: 1014ad12f;  */

void FUN_1014ad0f4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014ad130; end: 1014ad163;  */

undefined1  [16] FUN_1014ad130(void)

{
  return ZEXT816(0x1103c8f18);
}



/* Entry: 1014ad164; end: 1014ad1b7;  */

void FUN_1014ad164(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014ad1b8; end: 1014ad453;  */

void FUN_1014ad1b8(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100098e3c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a7270;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar7);
  uVar6 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef85780);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar7);
  uVar6 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3c3e0);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar7);
  uVar6 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c3e740(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 1014ad454; end: 1014ad45f;  */

void FUN_1014ad454(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100098e3c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a7270;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef85780);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3c3e0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c3e740(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *param_1 = lVar1;
  return;
}



/* Entry: 1014ad460; end: 1014ad6af;  */

long FUN_1014ad460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126a7270;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef85780);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3c3e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return unaff_x20;
}



/* Entry: 1014ad6b0; end: 1014ad6eb;  */

void FUN_1014ad6b0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014ad6ec; end: 1014ad73b;  */

undefined8 FUN_1014ad6ec(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1014ad73c; end: 1014ad76f;  */

undefined1  [16] FUN_1014ad73c(void)

{
  return ZEXT816(0x1103c8fc0);
}



/* Entry: 1014ad770; end: 1014ad797;  */

void FUN_1014ad770(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014ad798; end: 1014ad79f;  */

undefined8 FUN_1014ad798(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1014ad7a0; end: 1014ad80f;  */

undefined8 FUN_1014ad7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x000100a00c64(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1014ad810; end: 1014ad843;  */

void FUN_1014ad810(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014ad844; end: 1014ad893;  */

undefined8 FUN_1014ad844(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1014ad894; end: 1014ad8cf;  */

undefined1  [16] FUN_1014ad894(void)

{
  return ZEXT816(0x1103c9068);
}



/* Entry: 1014ad8d0; end: 1014ad957;  */

undefined8
FUN_1014ad8d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x000100a08838(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return uVar1;
}



/* Entry: 1014ad958; end: 1014ad9a3;  */

void FUN_1014ad958(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014ad9a4; end: 1014ad9f3;  */

undefined8 FUN_1014ad9a4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1014ad9f4; end: 1014ada3f;  */

undefined1  [16] FUN_1014ad9f4(void)

{
  return ZEXT816(0x1103c9110);
}



/* Entry: 1014ada40; end: 1014ada97; +[_TtC23SCConfigRecoveryHelpers31ConfigRecoveryHelpersEntryPoint attributedTask] */

void FUN_1014ada40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000100079360(0);
  uVar1 = 0;
  func_0x0001000faf74(0);
  func_0x0001009d46ac();
  uVar2 = uVar1;
  func_0x0001000faff4();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1014ada98; end: 1014adedf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1014ada98(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  
  puVar4 = auStack_60;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112da4e78) = param_2;
  func_0x000107c61174(param_2);
  uVar2 = param_3;
  func_0x000107c400bc();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + _DAT_112da4e80) = uVar2;
  lVar3 = 0;
  func_0x0001014ae0d8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  *(long *)(unaff_x20 + _DAT_112da4e88) = lVar3;
  uVar5 = *(undefined8 *)(param_4 + _DAT_113092298);
  *(undefined8 *)(unaff_x20 + _DAT_112da4e90) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(uVar2);
  func_0x000107c615f0(uVar5);
  func_0x000107c61154(auStack_60,puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return puVar4;
}



/* Entry: 1014adee0; end: 1014adf3f; -[_TtC23SCConfigRecoveryHelpers31ConfigRecoveryHelpersEntryPoint init] */

void FUN_1014adee0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCConfigRecoveryHelpers.ConfigRecoveryHelpersEntryPoint",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014adf0c);
  (*pcVar1)();
}



/* Entry: 1014adf40; end: 1014adfb7; -[_TtC23SCConfigRecoveryHelpers31ConfigRecoveryHelpersEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001014adf5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014adf60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014adf40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da4e78));
  return;
}



/* Entry: 1014adfb8; end: 1014adfbf;  */

undefined8 FUN_1014adfb8(void)

{
  return 0;
}



/* Entry: 1014adfc0; end: 1014adfdf;  */

void FUN_1014adfc0(void)

{
  func_0x000107c61168(&PTR_PTR_1127da390);
  return;
}



/* Entry: 1014adfe0; end: 1014ae0b3;  */

void FUN_1014adfe0(ulong param_1,char param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  ulong uStack_28;
  
  if (param_2 == '\0') {
    if (8 < param_1) {
      puVar3 = &UNK_110785358;
      goto LAB_1014ae09c;
    }
  }
  else if (((param_2 == '\x01') && (param_1 != 0)) && (param_1 != 1)) {
    puVar3 = &UNK_110785378;
LAB_1014ae09c:
    uStack_28 = param_1;
    func_0x000107c60614(puVar3,&uStack_28,puVar3,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1014ae0b4);
    (*pcVar1)();
  }
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c4bbd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 1014ae0b4; end: 1014ae0f7;  */

void FUN_1014ae0b4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014ae0f8; end: 1014ae0fb;  */

void FUN_1014ae0f8(ulong param_1,char param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  ulong uStack_28;
  
  if (param_2 == '\0') {
    if (8 < param_1) {
      puVar3 = &UNK_110785358;
      goto LAB_1014ae09c;
    }
  }
  else if (((param_2 == '\x01') && (param_1 != 0)) && (param_1 != 1)) {
    puVar3 = &UNK_110785378;
LAB_1014ae09c:
    uStack_28 = param_1;
    func_0x000107c60614(puVar3,&uStack_28,puVar3,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1014ae0b4);
    (*pcVar1)();
  }
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c4bbd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 1014ae0fc; end: 1014ae2df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ae0fc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0x112d71bc8;
  func_0x0001000285a8(0x112d71bc8,&UNK_10d932780);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar4 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _DAT_112da4f70;
  func_0x000107c61428(unaff_x20 + _DAT_112da4f70,auStack_78,0,0);
  func_0x0001014ae848(unaff_x20 + lVar1,lVar5,0x112d71bc8,&UNK_10d932780);
  lVar3 = lVar5;
  (**(code **)(lVar6 + 0x30))(lVar5,1,lVar2);
  if ((int)lVar3 == 1) {
    func_0x0001014ae808(lVar5,0x112d71bc8,&UNK_10d932780);
    func_0x000107c5edd0(param_1,0xd000000000000026,0x800000010ef85880);
    func_0x0001014ae848(param_1,puVar4,0x112d36580,&UNK_10d9016d0);
    (**(code **)(lVar6 + 0x38))(puVar4,0,1,lVar2);
    func_0x000107c61428(unaff_x20 + lVar1,auStack_90,0x21,0);
    func_0x00010130f508(puVar4,unaff_x20 + lVar1);
    func_0x000107c614a8(auStack_90);
  }
  else {
    func_0x0001001021cc(lVar5,lVar5 - extraout_x8_00);
    func_0x0001001021cc(lVar5 - extraout_x8_00,param_1);
  }
  return;
}



/* Entry: 1014ae2e0; end: 1014ae32f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ae2e0(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar7;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_1137ff4f0);
  func_0x000107c49b8c();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1137ff4f8);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1394b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_resetRecoveryWithReason__11262bf48,1);
    return;
  }
  func_0x000107c49a4c();
  if ((int)uVar2 != 0) {
    lVar3 = 0;
    func_0x000107c5eb08();
    lVar12 = *(long *)(lVar3 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
    puVar8 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lVar5 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar10 = (long)puVar8 - extraout_x8_00;
    lVar4 = 0;
    func_0x000107c5ede0();
    lVar7 = *(long *)(lVar4 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
    lVar11 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar9 = lVar11 - extraout_x12;
    FUN_1014ae0fc(lVar10);
    lVar5 = lVar10;
    (**(code **)(lVar7 + 0x30))(lVar10,1,lVar4);
    if ((int)lVar5 == 1) {
      FUN_1014ae808(lVar10,0x112d36580,&UNK_10d9016d0);
    }
    else {
      lStack_98 = lVar3;
      (**(code **)(lVar7 + 0x20))(lVar9,lVar10,lVar4);
      (**(code **)(lVar7 + 0x10))(lVar11,lVar9,lVar4);
      func_0x000107c5eaec(puVar8,0x4008000000000000,lVar11,0);
      func_0x000107c5ead0(0x44414548,0xe400000000000000);
      lVar5 = *(long *)(unaff_x20 + _DAT_1137ff508);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar5 != 0) {
        func_0x000107c4ba94();
        func_0x000107c615e8(lVar5);
      }
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1137ff500);
      func_0x000107c5eae0();
      pcStack_70 = FUN_1014ae7e4;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      pcStack_80 = FUN_1012d0a0c;
      puStack_78 = &UNK_1103c9258;
      ppuVar6 = &puStack_90;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c6157c();
      func_0x000107c61574(unaff_x20);
      func_0x000107c412c4(uVar2);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(lVar5);
      func_0x000107c50714(uVar2);
      func_0x000107c61170(uVar2);
      (**(code **)(lVar12 + 8))(puVar8,lStack_98);
      (**(code **)(lVar7 + 8))(lVar9,lVar4);
    }
    return;
  }
  return;
}



/* Entry: 1014ae330; end: 1014ae5cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ae330(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar5;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  
  lVar1 = 0;
  func_0x000107c5eb08();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar6 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)puVar6 - extraout_x8_00;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar10 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar10 - extraout_x12;
  FUN_1014ae0fc(lVar8);
  lVar3 = lVar8;
  (**(code **)(lVar5 + 0x30))(lVar8,1,lVar2);
  if ((int)lVar3 == 1) {
    FUN_1014ae808(lVar8,0x112d36580,&UNK_10d9016d0);
  }
  else {
    lStack_98 = lVar1;
    (**(code **)(lVar5 + 0x20))(lVar7,lVar8,lVar2);
    (**(code **)(lVar5 + 0x10))(lVar10,lVar7,lVar2);
    func_0x000107c5eaec(puVar6,0x4008000000000000,lVar10,0);
    func_0x000107c5ead0(0x44414548,0xe400000000000000);
    lVar3 = *(long *)(unaff_x20 + _DAT_1137ff508);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c4ba94();
      func_0x000107c615e8(lVar3);
    }
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_1137ff500);
    func_0x000107c5eae0();
    pcStack_70 = FUN_1014ae7e4;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1012d0a0c;
    puStack_78 = &UNK_1103c9258;
    ppuVar4 = &puStack_90;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c6157c();
    func_0x000107c61574(unaff_x20);
    func_0x000107c412c4(uVar9);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c50714(uVar9);
    func_0x000107c61170(uVar9);
    (**(code **)(lVar11 + 8))(puVar6,lStack_98);
    (**(code **)(lVar5 + 8))(lVar7,lVar2);
  }
  return;
}



/* Entry: 1014ae5cc; end: 1014ae68f;  */

/* WARNING: Possible PIC construction at 0x0001014ae66c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ae5cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8;
    func_0x000107c61168(PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8);
    lVar2 = param_3;
    func_0x000107c6148c(param_3,puVar1);
    if (lVar2 != 0) {
      func_0x000107c61174(param_3);
      func_0x000107c5bd10();
      if (lVar2 == 200) {
        lVar2 = *(long *)(param_5 + _DAT_1137ff508);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar2 != 0) {
          func_0x000107c4ba94();
          func_0x000107c615e8(lVar2);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_3);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1394b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_5 + _DAT_1137ff4f8),PTR_s_resetRecoveryWithReason__11262bf48,1);
  return;
}



/* Entry: 1014ae690; end: 1014ae70f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ae690(void)

{
  long unaff_x20;
  
  FUN_1014ae808(unaff_x20 + _DAT_112da4f70,0x112d71bc8,&UNK_10d932780);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + _DAT_1137ff4f0));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + _DAT_1137ff4f8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_1137ff500));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_1137ff508));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014ae710; end: 1014ae717;  */

void FUN_1014ae710(void)

{
  if (lRam0000000112da4fa0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e63d4fc);
  return;
}



/* Entry: 1014ae718; end: 1014ae74f;  */

void FUN_1014ae718(undefined8 param_1)

{
  if (lRam0000000112da4fa0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e63d4fc);
  return;
}



/* Entry: 1014ae750; end: 1014ae7e3;  */

void FUN_1014ae750(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x00010006a248();
  if (param_2 < 0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_40 = &UNK_10d94a3b8;
    puStack_38 = &UNK_10d94a3b8;
    puStack_30 = PTR___sBOWV_11034d658 + 0x40;
    puStack_28 = puStack_30;
    func_0x000107c61630(param_1,0x100,6,&lStack_50,param_1 + 0x50);
  }
  return;
}



/* Entry: 1014ae7e4; end: 1014ae807;  */

/* WARNING: Possible PIC construction at 0x0001014ae66c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ae7e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8;
    func_0x000107c61168(PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8);
    lVar2 = param_3;
    func_0x000107c6148c(param_3,puVar1);
    if (lVar2 != 0) {
      func_0x000107c61174(param_3);
      func_0x000107c5bd10();
      if (lVar2 == 200) {
        lVar2 = *(long *)(unaff_x20 + _DAT_1137ff508);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar2 != 0) {
          func_0x000107c4ba94();
          func_0x000107c615e8(lVar2);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_3);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1394b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_1137ff4f8),PTR_s_resetRecoveryWithReason__11262bf48,1)
  ;
  return;
}



/* Entry: 1014ae808; end: 1014ae88f;  */

undefined8 FUN_1014ae808(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1014ae890; end: 1014ae953;  */

void FUN_1014ae890(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x0001000a2cb0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  *(undefined8 *)(param_2 + 0x20) = uStack_58;
  FUN_1014af21c(0);
  func_0x000107c610f8();
  uVar1 = uStack_50;
  func_0x000107c61174(uStack_50);
  func_0x000107c61174(uStack_58);
  func_0x0001014af04c(uStack_48,uVar1,uStack_58);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 1014ae954; end: 1014ae95f;  */

void FUN_1014ae954(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x0001000a2cb0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  *(undefined8 *)(lVar1 + 0x20) = uStack_58;
  FUN_1014af21c(0);
  func_0x000107c610f8();
  uVar2 = uStack_50;
  func_0x000107c61174(uStack_50);
  func_0x000107c61174(uStack_58);
  func_0x0001014af04c(uStack_48,uVar2,uStack_58);
  *(undefined8 *)(lVar1 + 0x10) = uStack_48;
  *param_1 = lVar1;
  return;
}



/* Entry: 1014ae960; end: 1014ae9e7;  */

long FUN_1014ae960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_1014af21c(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x0001014af04c(param_1,param_2,param_3);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 1014ae9e8; end: 1014aea1b;  */

void FUN_1014ae9e8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014aea1c; end: 1014aea4f;  */

undefined1  [16] FUN_1014aea1c(void)

{
  return ZEXT816(0x1103c9348);
}



/* Entry: 1014aea50; end: 1014aeaa3;  */

void FUN_1014aea50(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014aeaa4; end: 1014aeb13;  */

undefined8 FUN_1014aeaa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x0001009d4100(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  return uVar1;
}



/* Entry: 1014aeb14; end: 1014aeb47;  */

void FUN_1014aeb14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014aeb48; end: 1014aeb8f;  */

undefined8 FUN_1014aeb48(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x000103dc0438();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 1014aeb90; end: 1014aebcb;  */

undefined1  [16] FUN_1014aeb90(void)

{
  return ZEXT816(0x1103c93f0);
}



/* Entry: 1014aebcc; end: 1014aec2b; -[_TtC26SCComposerShakeLogProvider24ComposerShakeLogProvider init] */

void FUN_1014aebcc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCComposerShakeLogProvider.ComposerShakeLogProvider",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014aebf8);
  (*pcVar1)();
}



/* Entry: 1014aec2c; end: 1014aec3b; -[_TtC26SCComposerShakeLogProvider24ComposerShakeLogProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014aec2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da5240));
  return;
}



/* Entry: 1014aec3c; end: 1014aec43; -[_TtC26SCComposerShakeLogProvider24ComposerShakeLogProvider willDumpLogGivenProject:] */

undefined8 FUN_1014aec3c(void)

{
  return 1;
}



/* Entry: 1014aec44; end: 1014aeca7;  */

void FUN_1014aec44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  lVar1 = 0;
  func_0x000107c5fb10();
  *(long *)(unaff_x22 + 0x38) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1014aeca8,0,0);
  return;
}



/* Entry: 1014aeca8; end: 1014aedef;  */

void FUN_1014aeca8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = *(long *)(unaff_x22 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      lVar1 = *(long *)(unaff_x22 + 0x40);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
      lVar3 = lVar2;
      func_0x000107c42358();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      lVar2 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      *(long *)(unaff_x22 + 0x10) = lVar2;
      *(undefined8 *)(unaff_x22 + 0x18) = param_2;
      func_0x000107c5fb04(uVar6);
      FUN_100e8b654();
      uVar4 = 0;
      uVar5 = uVar6;
      func_0x000107c60214(uVar6,0,PTR___sSSN_11034da80,lVar3);
      (**(code **)(lVar1 + 8))(uVar6,uVar7);
      func_0x000107c6142c(param_2);
      goto LAB_1014aed90;
    }
  }
  uVar5 = 0;
  uVar4 = 0xf000000000000000;
LAB_1014aed90:
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(unaff_x22 + 0x28))(uVar5,uVar4,0xd000000000000012,0x800000010ef858b0);
  func_0x0001000b44c0(uVar5,uVar4);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001014aedec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1014aedf0; end: 1014aeeeb; -[_TtC26SCComposerShakeLogProvider24ComposerShakeLogProvider provideLogContentAsync:] */

/* WARNING: Possible PIC construction at 0x0001014aeec8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014aeecc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014aedf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1103c94e0;
  func_0x000107c613fc(&UNK_1103c94e0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112da5240);
  puVar2 = &UNK_1103c9508;
  func_0x000107c613fc(&UNK_1103c9508,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(code **)(puVar2 + 0x18) = FUN_1014aef0c;
  *(undefined **)(puVar2 + 0x20) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar3);
  func_0x000107c6157c(puVar1);
  func_0x0001001ca524(5,0,0xc,4,0,0,&UNK_10d94a758,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1014aeeec; end: 1014aef0b;  */

void FUN_1014aeeec(void)

{
  func_0x000107c61168(&PTR_PTR_1127da4b8);
  return;
}



/* Entry: 1014aef0c; end: 1014aef13;  */

/* WARNING: Possible PIC construction at 0x0001011810ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011810f0) */

void FUN_1014aef0c(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 >> 0x3c < 0xf) {
    func_0x000107c5ee20();
  }
  else {
    param_1 = 0;
  }
  uVar2 = 0;
  if (param_4 != 0) {
    func_0x000107c5fadc(param_3,param_4);
    uVar2 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014aef14; end: 1014aef7f;  */

void FUN_1014aef14(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1014aef80;
  plVar4[5] = lVar1;
  plVar4[6] = lVar5;
  plVar4[4] = lVar2;
  lVar2 = 0;
  func_0x000107c5fb10();
  plVar4[7] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[8] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[9] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1014aeca8,0,0);
  return;
}



/* Entry: 1014aef80; end: 1014aefbb;  */

void FUN_1014aef80(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001014aefb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1014aefbc; end: 1014af0db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1014aefbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112da5270) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da5278) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da5280) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112da5288) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 1014af0dc; end: 1014af157; +[_TtC26SCComposerShakeLogProvider34ComposerShakeLogProviderEntryPoint attributedTask] */

void FUN_1014af0dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000100079360(0);
  func_0x0001000ab080(0);
  uVar1 = 0;
  func_0x0001009d3b30(0);
  func_0x0001009d3b50();
  uVar2 = uVar1;
  func_0x0001009d3ba4();
  func_0x000107c61170(uVar1);
  uVar1 = uVar2;
  func_0x0001000ab100(uVar2);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1014af158; end: 1014af1b7; -[_TtC26SCComposerShakeLogProvider34ComposerShakeLogProviderEntryPoint init] */

void FUN_1014af158(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCComposerShakeLogProvider.ComposerShakeLogProviderEntryPoint",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014af184);
  (*pcVar1)();
}



/* Entry: 1014af1b8; end: 1014af20f; -[_TtC26SCComposerShakeLogProvider34ComposerShakeLogProviderEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001014af1d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014af1f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014af1d8) */
/* WARNING: Removing unreachable block (ram,0x0001014af1f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014af1b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da5280));
  return;
}



/* Entry: 1014af210; end: 1014af21b;  */

void FUN_1014af210(void)

{
  return;
}



/* Entry: 1014af21c; end: 1014af23b;  */

void FUN_1014af21c(void)

{
  func_0x000107c61168(&PTR_PTR_1127da578);
  return;
}



/* Entry: 1014af23c; end: 1014af29b; -[_TtC26SCComposerShakeLogProvider29ComposerShakeMetaInfoProvider init] */

void FUN_1014af23c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCComposerShakeLogProvider.ComposerShakeMetaInfoProvider",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014af268);
  (*pcVar1)();
}



/* Entry: 1014af29c; end: 1014af2ab; -[_TtC26SCComposerShakeLogProvider29ComposerShakeMetaInfoProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014af29c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da52b8));
  return;
}



/* Entry: 1014af2ac; end: 1014af2cb;  */

void FUN_1014af2ac(void)

{
  func_0x000107c61168(&PTR_PTR_1127da650);
  return;
}



/* Entry: 1014af2cc; end: 1014af3d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014af2cc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112da52b8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(uVar1);
    if (uVar2 != 0) {
      uVar1 = uVar2;
      func_0x000107c42354();
      func_0x000107c61180();
      func_0x000107c615e8(uVar2);
      uVar2 = uVar1;
      func_0x000107c5faec();
      func_0x000107c61170(uVar1);
      uVar1 = uVar2 & 0xffffffffffff;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar1 = param_2 >> 0x38 & 0xf;
      }
      if (uVar1 == 0) {
        func_0x000107c6142c(param_2);
      }
      else {
        func_0x000107c5fb78(uVar2,param_2);
        func_0x000107c6142c(param_2);
        func_0x000107c5fb78(10,0xe100000000000000);
      }
    }
  }
  return;
}



/* Entry: 1014af3d4; end: 1014af43b; -[_TtC26SCComposerShakeLogProvider29ComposerShakeMetaInfoProvider getMetaInfo] */

void FUN_1014af3d4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1014af2cc();
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1014af43c; end: 1014af5bb;  */

void FUN_1014af43c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x0001000980d8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  puVar1 = PTR_PTR_1126a7290;
  func_0x000107c610f8();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar3 = uStack_58;
  func_0x000107c61174(uStack_58);
  uVar4 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef854e0);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c3e740(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *param_1 = param_2;
  return;
}



/* Entry: 1014af5bc; end: 1014af5c3;  */

void FUN_1014af5bc(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_60);
  func_0x0001000980d8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  puVar2 = PTR_PTR_1126a7290;
  func_0x000107c610f8();
  uVar3 = uStack_60;
  func_0x000107c61174(uStack_60);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar4 = uStack_58;
  func_0x000107c61174(uStack_58);
  uVar5 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  uVar5 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar5);
  uVar6 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef854e0);
  func_0x000107c5a49c(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c3e740(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  *param_1 = lVar1;
  return;
}



/* Entry: 1014af5c4; end: 1014af70f;  */

long FUN_1014af5c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a7290;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef854e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return unaff_x20;
}



/* Entry: 1014af710; end: 1014af73b;  */

void FUN_1014af710(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014af73c; end: 1014af78b;  */

undefined8 FUN_1014af73c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1014af78c; end: 1014af7bf;  */

undefined1  [16] FUN_1014af78c(void)

{
  return ZEXT816(0x1103c9608);
}



/* Entry: 1014af7c0; end: 1014af7e7;  */

void FUN_1014af7c0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014af7e8; end: 1014af7ef;  */

undefined8 FUN_1014af7e8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1014af7f0; end: 1014af87b;  */

long FUN_1014af7f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100456278(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001004562f0();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x00010045630c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  return unaff_x20;
}



/* Entry: 1014af87c; end: 1014af8a7;  */

void FUN_1014af87c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014af8a8; end: 1014af8eb;  */

undefined1  [16] FUN_1014af8a8(void)

{
  return ZEXT816(0x1103c9688);
}



/* Entry: 1014af8ec; end: 1014af93f;  */

void FUN_1014af8ec(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014af940; end: 1014af9f7;  */

long FUN_1014af940(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000100457cdc(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100457edc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x000100457f04();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return unaff_x20;
}



/* Entry: 1014af9f8; end: 1014afa2b;  */

void FUN_1014af9f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014afa2c; end: 1014afa6f;  */

undefined1  [16] FUN_1014afa2c(void)

{
  return ZEXT816(0x1103c9750);
}



/* Entry: 1014afa70; end: 1014afaeb;  */

void FUN_1014afa70(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}


