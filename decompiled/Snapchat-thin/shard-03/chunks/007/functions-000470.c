/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102bb604c; end: 102bb6207;  */

/* WARNING: Possible PIC construction at 0x000102bb6164: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb6188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb6198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb61dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bb619c) */
/* WARNING: Removing unreachable block (ram,0x000102bb618c) */
/* WARNING: Removing unreachable block (ram,0x000102bb6168) */
/* WARNING: Removing unreachable block (ram,0x000102bb61e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb604c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c5e1d0();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c405b0();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_102bb5668();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_102bb58e0();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102bb6208);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112efc9b0) = lVar5;
      *(long *)(lVar3 + _DAT_112efc9b8) = unaff_x20;
      lStack_80 = lVar3;
      lStack_78 = lVar4;
      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102bb6208; end: 102bb622f; -[SCContextOperaEmbeddedComponentScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102bb6208(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102bb604c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bb6230; end: 102bb6273; -[SCContextOperaEmbeddedComponentScopeGraphBridgeSaberEntryPoint end] */

void FUN_102bb6230(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102bb6274; end: 102bb6477;  */

void FUN_102bb6274(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ed990)) {
      uVar2 = 0xd000000000000017;
      func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffc4) || (param_3 != -0x7ffffffef0f04700)) &&
           (func_0x000107c605b8(0xd00000000000003c,0x800000010f0fb900,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "ContextOperaEmbeddedComponentScopeGraphBridge/SCContextOperaEmbeddedComponentScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x72,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102bb6478);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c538f4();
        goto LAB_102bb6300;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a68c();
  }
LAB_102bb6300:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102bb6478; end: 102bb6523; -[SCContextOperaEmbeddedComponentScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102bb6478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_102bb6274(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102bb6524; end: 102bb659b; -[SCContextOperaEmbeddedComponentScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb6524(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112efca88,0);
  *(undefined8 *)(param_1 + _DAT_112efca90) = 0;
  *(undefined8 *)(param_1 + _DAT_112efca98) = 0;
  *(undefined8 *)(param_1 + _DAT_112efcaa0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102bb659c; end: 102bb65cf;  */

void FUN_102bb659c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102bb65d0; end: 102bb6627; -[SCContextOperaEmbeddedComponentScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102bb65fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bb6600) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb65d0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112efca88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efca90));
  return;
}



/* Entry: 102bb6628; end: 102bb6647;  */

void FUN_102bb6628(void)

{
  func_0x000107c61168(&PTR_PTR_112893f30);
  return;
}



/* Entry: 102bb6648; end: 102bb668f; -[SCSCContextOperaEmbeddedComponentScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb6648(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efcad0;
  func_0x000107c61428(param_1 + _DAT_112efcad0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102bb6690; end: 102bb66e7; -[SCSCContextOperaEmbeddedComponentScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb6690(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efcad0;
  func_0x000107c61428(param_1 + _DAT_112efcad0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102bb66e8; end: 102bb67bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb66e8(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_102bb58c0();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112efc9e8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bb67c0);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112efc9f0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112efcad8);
    *(long **)(unaff_x20 + _DAT_112efcad8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102bb67c0; end: 102bb67e7; -[SCSCContextOperaEmbeddedComponentScopedServicesSaberEntryPoint begin] */

void FUN_102bb67c0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102bb66e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bb67e8; end: 102bb695f;  */

/* WARNING: Possible PIC construction at 0x000102bb6850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb68e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bb6854) */
/* WARNING: Removing unreachable block (ram,0x000102bb68ec) */
/* WARNING: Removing unreachable block (ram,0x000102bb6904) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb67e8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112efcad8);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102bb6960; end: 102bb6967;  */

void FUN_102bb6960(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102bb6968; end: 102bb699b; -[SCSCContextOperaEmbeddedComponentScopedServicesSaberEntryPoint end] */

void FUN_102bb6968(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102bb67e8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102bb699c; end: 102bb6abb;  */

void FUN_102bb699c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "ContextOperaEmbeddedComponentScopeGraphBridge/SCSCContextOperaEmbeddedComponentScopedServicesSaberEntryPoint.swift"
                        ,0x72,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bb6abc);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102bb6abc; end: 102bb6b67; -[SCSCContextOperaEmbeddedComponentScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102bb6abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_102bb699c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102bb6b68; end: 102bb6bc7; -[SCSCContextOperaEmbeddedComponentScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb6b68(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112efcad0,0);
  *(undefined8 *)(param_1 + _DAT_112efcad8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102bb6bc8; end: 102bb6bfb;  */

void FUN_102bb6bc8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102bb6bfc; end: 102bb6c33; -[SCSCContextOperaEmbeddedComponentScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb6bfc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112efcad0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efcad8));
  return;
}



/* Entry: 102bb6c34; end: 102bb6c53;  */

void FUN_102bb6c34(void)

{
  func_0x000107c61168(&PTR_PTR_112894000);
  return;
}



/* Entry: 102bb6c54; end: 102bb6e53;  */

void FUN_102bb6c54(double *param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  char cStack_68;
  
  FUN_102bb6e54(&dStack_88);
  dVar2 = 0.0;
  dVar3 = 0.0;
  dVar4 = 0.0;
  if (cStack_68 == '\x01') {
    dVar5 = 0.0;
    uVar1 = 1;
  }
  else {
    dVar2 = dStack_88;
    func_0x000107c609cc(dStack_88,uStack_80,uStack_78,uStack_70);
    if ((dVar2 <= 0.0) ||
       (dVar2 = dStack_88, func_0x000107c609b0(dStack_88,uStack_80,uStack_78,uStack_70),
       dVar2 <= 0.0)) {
      uVar1 = 1;
      dVar5 = 0.0;
      dVar2 = 0.0;
      dVar3 = 0.0;
    }
    else {
      dVar2 = param_2;
      func_0x000107c609c4(param_2,param_3,param_4,param_5);
      dVar3 = dStack_88;
      func_0x000107c609c4(dStack_88,uStack_80,uStack_78,uStack_70);
      dVar4 = dStack_88;
      func_0x000107c609cc(dStack_88,uStack_80,uStack_78,uStack_70);
      dVar4 = (dVar2 - dVar3) / dVar4;
      dVar2 = param_2;
      func_0x000107c609c8(param_2,param_3,param_4,param_5);
      dVar3 = dStack_88;
      func_0x000107c609c8(dStack_88,uStack_80,uStack_78,uStack_70);
      dVar5 = dStack_88;
      func_0x000107c609b0(dStack_88,uStack_80,uStack_78,uStack_70);
      dVar5 = (dVar2 - dVar3) / dVar5;
      dVar2 = param_2;
      func_0x000107c609cc(param_2,param_3,param_4,param_5);
      dVar3 = dStack_88;
      func_0x000107c609cc(dStack_88,uStack_80,uStack_78,uStack_70);
      func_0x000107c609b0(param_2,param_3,param_4,param_5);
      func_0x000107c609b0(dStack_88,uStack_80,uStack_78,uStack_70);
      uVar1 = 0;
      dVar2 = dVar2 / dVar3;
      dVar3 = param_2 / dStack_88;
    }
  }
  *param_1 = dVar4;
  param_1[1] = dVar5;
  param_1[3] = dVar3;
  param_1[2] = dVar2;
  *(undefined1 *)(param_1 + 4) = uVar1;
  return;
}



/* Entry: 102bb6e54; end: 102bb7093;  */

void FUN_102bb6e54(double *param_1,double param_2,double param_3,double param_4,double param_5,
                  code *param_6)

{
  ulong uVar1;
  undefined1 uVar2;
  code *pcVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  (*param_6)();
  if ((ulong)param_6 >> 0x3e == 0) {
    pcVar4 = *(code **)(((ulong)param_6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    pcVar4 = (code *)((ulong)param_6 & 0xffffffffffffff8);
    if ((code *)0x7fffffffffffffff < param_6) {
      pcVar4 = param_6;
    }
    func_0x000107c60480();
  }
  if (pcVar4 == (code *)0x0) {
    func_0x000107c6142c(param_6);
    dVar11 = 0.0;
    dVar12 = 0.0;
    uVar2 = 1;
    dVar13 = 0.0;
    dVar14 = 0.0;
  }
  else {
    lVar7 = 4;
    do {
      uVar6 = lVar7 - 4;
      if (((ulong)param_6 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_6 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bb7038);
          (*pcVar4)();
        }
        uVar5 = *(ulong *)(param_6 + lVar7 * 8);
        func_0x000107c615f0(uVar5);
        dVar11 = param_2;
        dVar12 = param_3;
        dVar13 = param_4;
        dVar14 = param_5;
      }
      else {
        uVar5 = uVar6;
        FUN_102bc7298(uVar6,param_6);
        dVar11 = param_2;
        dVar12 = param_3;
        dVar13 = param_4;
        dVar14 = param_5;
      }
      if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102bb7034);
        (*pcVar4)();
      }
      pcVar3 = (code *)(lVar7 + -3);
      uVar6 = uVar5;
      func_0x000107c4a158();
      param_2 = dVar11;
      param_3 = dVar12;
      param_4 = dVar13;
      param_5 = dVar14;
      if (((uVar6 & 1) == 0) &&
         (uVar6 = uVar5,
         func_0x000107c61150(uVar5,PTR_s_respondsToSelector__11262c7e0,
                             PTR_s_mediaViewContainerView_11260f660), param_2 = dVar11,
         param_3 = dVar12, param_4 = dVar13, param_5 = dVar14, (uVar6 & 1) != 0)) {
        uVar6 = uVar5;
        func_0x000107c4ca7c();
        func_0x000107c61180();
        param_2 = dVar11;
        param_3 = dVar12;
        param_4 = dVar13;
        param_5 = dVar14;
        if (uVar6 == 0) goto LAB_102bb6ec4;
        uVar1 = uVar6;
        func_0x000107c438d4();
        dVar8 = dVar11;
        param_3 = dVar12;
        param_4 = dVar13;
        param_5 = dVar14;
        func_0x000107c609e0();
        param_2 = dVar8;
        if ((((uVar1 & 1) != 0) || (func_0x000107c4c998(uVar5), param_2 = dVar8, dVar8 <= 0.0)) ||
           (param_2 = dVar11, param_3 = dVar12, param_4 = dVar13, param_5 = dVar14,
           func_0x000107c609cc(), param_2 <= 0.0)) {
          func_0x000107c615e8(uVar5);
          func_0x000107c61170(uVar6);
        }
        else {
          dVar9 = dVar11;
          func_0x000107c609b0(dVar11,dVar12,dVar13,dVar14);
          dVar10 = dVar11;
          param_4 = dVar13;
          param_5 = dVar14;
          func_0x000107c609cc(dVar11,dVar12);
          func_0x000107c615e8(uVar5);
          func_0x000107c61170(uVar6);
          param_2 = ABS(dVar9 / dVar10 - dVar8);
          param_3 = dVar8 * 0.01;
          if (param_2 <= param_3) {
            func_0x000107c6142c(param_6);
            uVar2 = 0;
            goto LAB_102bb7064;
          }
        }
      }
      else {
LAB_102bb6ec4:
        func_0x000107c615e8(uVar5);
      }
      lVar7 = lVar7 + 1;
    } while (pcVar3 != pcVar4);
    func_0x000107c6142c(param_6);
    dVar11 = 0.0;
    dVar12 = 0.0;
    uVar2 = 1;
    dVar13 = 0.0;
    dVar14 = 0.0;
  }
LAB_102bb7064:
  param_1[1] = dVar12;
  *param_1 = dVar11;
  param_1[3] = dVar14;
  param_1[2] = dVar13;
  *(undefined1 *)(param_1 + 4) = uVar2;
  return;
}



/* Entry: 102bb7094; end: 102bb711f;  */

void FUN_102bb7094(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105aad70;
  if (lRam0000000112efcb08 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112efcb08 = param_1;
  }
  return;
}



/* Entry: 102bb7120; end: 102bb7163;  */

void FUN_102bb7120(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 102bb7164; end: 102bb717b;  */

void FUN_102bb7164(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 102bb717c; end: 102bb72db;  */

undefined1 FUN_102bb717c(undefined8 param_1,long param_2)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  undefined1 uStack_11;
  
  uStack_28 = 0xd000000000000023;
  uStack_20 = 0x800000010f0fbc50;
  uStack_18 = 0;
  (**(code **)(param_2 + 8))
            (&uStack_11,&uStack_28,&UNK_1107383c8,&PTR_DAT_11304a4b0,param_1,param_2);
  return uStack_11;
}



/* Entry: 102bb72dc; end: 102bb72ff;  */

undefined1 FUN_102bb72dc(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_41;
  
  uStack_58 = 0xd00000000000002e;
  uStack_50 = 0x800000010f0fbb40;
  uStack_48 = 1;
  pcVar1 = *(code **)(param_2 + 8);
  _swift_bridgeObjectRetain(0x800000010f0fbb40);
  (*pcVar1)(&uStack_41,&uStack_58,&UNK_1107383c8,&PTR_DAT_11304a4b0,param_1,param_2);
  _swift_bridgeObjectRelease(0x800000010f0fbb40);
  return uStack_41;
}



/* Entry: 102bb7300; end: 102bb7393;  */

void FUN_102bb7300(long param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined1 uStack_31;
  
  lVar1 = param_1;
  func_0x00010403f9f4();
  if ((lVar1 != 1) && (lVar1 == 0)) {
    uStack_48 = 0xd000000000000028;
    uStack_40 = 0x800000010f0fbaf0;
    uStack_38 = 0;
    (**(code **)(param_2 + 8))
              (&uStack_31,&uStack_48,&UNK_1107383c8,&PTR_DAT_11304a4b0,param_1,param_2);
  }
  return;
}



/* Entry: 102bb7394; end: 102bb7587;  */

undefined1 FUN_102bb7394(undefined8 param_1,long param_2)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  undefined1 uStack_11;
  
  uStack_28 = 0xd000000000000037;
  uStack_20 = 0x800000010f0fbbb0;
  uStack_18 = 0;
  (**(code **)(param_2 + 8))
            (&uStack_11,&uStack_28,&UNK_1107383c8,&PTR_DAT_11304a4b0,param_1,param_2);
  return uStack_11;
}



/* Entry: 102bb7588; end: 102bb75ab;  */

undefined1 FUN_102bb7588(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_41;
  
  uStack_58 = 0xd000000000000024;
  uStack_50 = 0x800000010f0fbbf0;
  uStack_48 = 1;
  pcVar1 = *(code **)(param_2 + 8);
  _swift_bridgeObjectRetain(0x800000010f0fbbf0);
  (*pcVar1)(&uStack_41,&uStack_58,&UNK_1107383c8,&PTR_DAT_11304a4b0,param_1,param_2);
  _swift_bridgeObjectRelease(0x800000010f0fbbf0);
  return uStack_41;
}



/* Entry: 102bb75ac; end: 102bb7687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102bb75ac(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112efcb40) = param_1;
  puVar1 = PTR_s_initWithNibName_bundle__1125e9850;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&stack0xffffffffffffffc0,puVar1,0,0);
  func_0x000107c61180();
  func_0x000107c5677c();
  puVar3 = puVar2;
  func_0x000107c4d508();
  func_0x000107c61180();
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = puVar3;
    func_0x000107c4d4bc();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c550d8(puVar4);
    func_0x000107c61170(puVar4);
  }
  FUN_102bb7688();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102bb7688; end: 102bb7937;  */

/* WARNING: Possible PIC construction at 0x000102bb76cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb774c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb776c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb77bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb77dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb782c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb784c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb78b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb78d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bb78b4) */
/* WARNING: Removing unreachable block (ram,0x000102bb7850) */
/* WARNING: Removing unreachable block (ram,0x000102bb7934) */
/* WARNING: Removing unreachable block (ram,0x000102bb7884) */
/* WARNING: Removing unreachable block (ram,0x000102bb7830) */
/* WARNING: Removing unreachable block (ram,0x000102bb77e0) */
/* WARNING: Removing unreachable block (ram,0x000102bb7930) */
/* WARNING: Removing unreachable block (ram,0x000102bb7814) */
/* WARNING: Removing unreachable block (ram,0x000102bb77c0) */
/* WARNING: Removing unreachable block (ram,0x000102bb7770) */
/* WARNING: Removing unreachable block (ram,0x000102bb792c) */
/* WARNING: Removing unreachable block (ram,0x000102bb77a4) */
/* WARNING: Removing unreachable block (ram,0x000102bb7750) */
/* WARNING: Removing unreachable block (ram,0x000102bb76d0) */
/* WARNING: Removing unreachable block (ram,0x000102bb7928) */
/* WARNING: Removing unreachable block (ram,0x000102bb7734) */
/* WARNING: Removing unreachable block (ram,0x000102bb78d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb7688(void)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bb7928);
  (*pcVar1)();
}



/* Entry: 102bb7938; end: 102bb795f; -[_TtC24AdContextEmbeddedContent40AdContextEmbeddedContainerViewController initWithValdiView:] */

void FUN_102bb7938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102bb75ac();
  return;
}



/* Entry: 102bb7960; end: 102bb79b7; -[_TtC24AdContextEmbeddedContent40AdContextEmbeddedContainerViewController initWithCoder:] */

void FUN_102bb7960(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001d,0x800000010ef19c10,
                      "AdContextEmbeddedContent/AdContextEmbeddedContainerViewController.swift",0x47
                      ,2,0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bb79b8);
  (*pcVar1)();
}



/* Entry: 102bb79b8; end: 102bb79f3; -[_TtC24AdContextEmbeddedContent40AdContextEmbeddedContainerViewController viewDidLoad] */

void FUN_102bb79b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  return;
}



/* Entry: 102bb79f4; end: 102bb7a53; -[_TtC24AdContextEmbeddedContent40AdContextEmbeddedContainerViewController initWithNibName:bundle:] */

void FUN_102bb79f4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdContextEmbeddedContent.AdContextEmbeddedContainerViewController",0x41,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bb7a20);
  (*pcVar1)();
}



/* Entry: 102bb7a54; end: 102bb7a63; -[_TtC24AdContextEmbeddedContent40AdContextEmbeddedContainerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb7a54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efcb40));
  return;
}



/* Entry: 102bb7a64; end: 102bb7a83;  */

void FUN_102bb7a64(void)

{
  func_0x000107c61168(&PTR_PTR_1128940c0);
  return;
}



/* Entry: 102bb7a84; end: 102bb7af7; -[_TtC24AdContextEmbeddedContent40AdContextEmbeddedContainerViewController forceDisableDismissalGesture:] */

/* WARNING: Possible PIC construction at 0x000102bb7ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb7ae0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bb7acc) */
/* WARNING: Removing unreachable block (ram,0x000102bb7ad0) */

void FUN_102bb7a84(long param_1)

{
  long lVar1;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c4d508();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c49888();
    func_0x000107c61180();
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bb7af8; end: 102bb7aff; -[_TtC24AdContextEmbeddedContent40AdContextEmbeddedContainerViewController shouldBeSilentlyPresentedAndPauseOpera] */

undefined8 FUN_102bb7af8(void)

{
  return 1;
}



/* Entry: 102bb7b00; end: 102bb7b07; -[_TtC24AdContextEmbeddedContent40AdContextEmbeddedContainerViewController shouldAlwaysBeSilentlyPresented] */

undefined8 FUN_102bb7b00(void)

{
  return 1;
}



/* Entry: 102bb7b08; end: 102bb7bbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb7b08(uint param_1)

{
  long *plVar1;
  uint uVar2;
  long unaff_x20;
  long lVar3;
  
  uVar2 = param_1;
  FUN_102bb7bbc();
  if ((uVar2 & 0xff) != (param_1 & 0xff)) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112efcb80);
    plVar1 = (long *)&DAT_113077f20;
    if ((param_1 & 0xff) != 1) {
      plVar1 = (long *)&DAT_113077f18;
    }
    func_0x000107c41864(*(undefined8 *)(lVar3 + *plVar1));
    if (*(long *)(unaff_x20 + _DAT_112efcb70) != 0) {
      plVar1 = (long *)&DAT_113077f20;
      if (*(char *)(unaff_x20 + _DAT_112efcb78) != '\x01') {
        plVar1 = (long *)&DAT_113077f18;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(lVar3 + *plVar1),PTR_s_attachUI__1125a0c08);
      return;
    }
  }
  return;
}



/* Entry: 102bb7bbc; end: 102bb7bdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb7bbc(void)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_112efcb78) == '\x02') {
    *(undefined1 *)(unaff_x20 + _DAT_112efcb78) = 1;
  }
  return;
}



/* Entry: 102bb7bdc; end: 102bb7deb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb7bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efcb70) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112efcb78) = 2;
  *(undefined8 *)(unaff_x20 + _DAT_112efcb80) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112efcb88) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112efcb90) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112efcb98) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112efcba0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112efcba8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112efcbb0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112efcbb8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112efcbc0) = param_9;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102bb7dec; end: 102bb7f6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb7dec(void)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  long lVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  char cStack_41;
  
  lVar8 = *(long *)(unaff_x20 + _DAT_112efcb80);
  lVar4 = *(long *)(lVar8 + _DAT_113077f08);
  func_0x000107c42e84();
  func_0x000107c61180();
  if (lVar4 != 0) {
    cStack_41 = '\0';
    puVar5 = &UNK_1105aae80;
    func_0x000107c613fc(&UNK_1105aae80,0x18,7);
    *(char **)(puVar5 + 0x10) = &cStack_41;
    puVar6 = &UNK_1105aaea8;
    func_0x000107c613fc(&UNK_1105aaea8,0x20,7);
    *(code **)(puVar6 + 0x10) = FUN_102bb8c2c;
    *(undefined **)(puVar6 + 0x18) = puVar5;
    pcStack_58 = FUN_102bb8c3c;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    uStack_68 = 0x102bb8b54;
    puStack_60 = &UNK_1105aaec0;
    ppuVar7 = &puStack_78;
    puStack_50 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_50);
    func_0x000107c4c6a4(lVar4);
    func_0x000107c61170(lVar4);
    func_0x000107c60bd0(ppuVar7);
    cVar2 = cStack_41;
    func_0x000107c61574();
    if (cVar2 == '\x01') {
      FUN_102bb7f6c();
      lVar4 = _DAT_112efcb70;
      uVar3 = (uint)*(undefined8 *)(unaff_x20 + _DAT_112efcb70);
      *(undefined **)(unaff_x20 + _DAT_112efcb70) = puVar5;
      func_0x000107c61170();
      FUN_102bb7bbc();
      if (*(long *)(unaff_x20 + lVar4) != 0) {
        plVar1 = (long *)&DAT_113077f20;
        if ((uVar3 & 0xff) != 1) {
          plVar1 = (long *)&DAT_113077f18;
        }
        func_0x000107c3e2c0(*(undefined8 *)(lVar8 + *plVar1));
      }
    }
  }
  return;
}



/* Entry: 102bb7f6c; end: 102bb8c2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102bb7f6c(void)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 uVar4;
  long lVar5;
  undefined *puVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  code *pcVar19;
  long *plVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long unaff_x20;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112efcb98);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar13 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar13 == 0) {
    lStack_e0 = 0;
  }
  else {
    lStack_e0 = lVar13;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar13);
  }
  lVar5 = _DAT_11304a478;
  lVar31 = *(long *)(unaff_x20 + _DAT_112efcb88);
  uVar26 = *(undefined8 *)(lVar31 + _DAT_11304a478);
  func_0x000107c6157c(uVar26);
  func_0x0001000d224c(&puStack_d8);
  func_0x000107c61574(uVar26);
  uVar26 = uStack_d0;
  puVar14 = puStack_d8;
  puVar6 = puStack_d8;
  func_0x000107c614f0(puStack_d8);
  bVar3 = 0;
  func_0x00010403c628(0xd000000000000020,0x800000010f0fbd60,puVar6,uVar26);
  func_0x000107c615e8(puVar14);
  lVar1 = _DAT_113077f10;
  lVar13 = _DAT_112f0e0e8;
  lVar32 = *(long *)(unaff_x20 + _DAT_112efcb80);
  uVar26 = *(undefined8 *)(lVar32 + _DAT_113077f10);
  lVar30 = *(long *)(unaff_x20 + _DAT_112efcbb8);
  uVar27 = *(undefined8 *)(lVar30 + _DAT_112f0e0e8);
  func_0x000107c615f0(uVar26);
  func_0x000107c6157c(uVar27);
  pcVar7 = "init(operaEventAnnouncer:eventStream:isVerticalActionBarMigrated:performer:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  lVar8 = 0;
  FUN_102bc9de8();
  lVar10 = lVar8;
  func_0x000107c610f8();
  *(undefined8 *)(lVar10 + _DAT_112efce08) = 0;
  puVar22 = (undefined8 *)(lVar10 + _DAT_112efce10);
  *puVar22 = 0;
  *(undefined1 *)(puVar22 + 1) = 1;
  *(undefined8 *)(lVar10 + _DAT_112efce20) = uVar26;
  *(undefined8 *)(lVar10 + _DAT_112efce28) = uVar27;
  *(byte *)(lVar10 + _DAT_112efce18) = bVar3 & 1;
  *(char **)(lVar10 + _DAT_112efce30) = pcVar7;
  plVar9 = &lStack_78;
  lStack_78 = lVar10;
  lStack_70 = lVar8;
  func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
  uVar27 = 0;
  FUN_102bcc4bc();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar26 = *(undefined8 *)(lVar30 + lVar13);
  func_0x000107c6157c(uVar26);
  pcVar7 = "init(eventStream:performer:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  lVar10 = 0;
  FUN_102bcc90c();
  lVar13 = lVar10;
  func_0x000107c610f8();
  *(undefined8 *)(lVar13 + _DAT_112efd060) = 0;
  *(undefined8 *)(lVar13 + _DAT_112efd050) = uVar26;
  *(char **)(lVar13 + _DAT_112efd058) = pcVar7;
  plVar11 = &lStack_88;
  lStack_88 = lVar13;
  lStack_80 = lVar10;
  func_0x000107c61154(plVar11,PTR_s_init_1125d9248);
  uStack_90 = 0;
  uVar26 = *(undefined8 *)(lVar31 + lVar5);
  func_0x000107c6157c(uVar26);
  func_0x0001000d224c(&puStack_d8);
  func_0x000107c61574(uVar26);
  uVar26 = uStack_d0;
  puVar14 = puStack_d8;
  puVar6 = puStack_d8;
  func_0x000107c614f0(puStack_d8);
  uVar12 = 0;
  func_0x00010403c628(0xd000000000000028,0x800000010f0fbe00,puVar6,uVar26);
  func_0x000107c615e8(puVar14);
  if ((uVar12 & 1) != 0) {
    lVar13 = *(long *)(lVar32 + _DAT_113077f08);
    func_0x000107c42e84();
    func_0x000107c61180();
    if (lVar13 != 0) {
      puStack_f8 = &UNK_1105aaf20;
      func_0x000107c613fc(&UNK_1105aaf20,0x18,7);
      *(undefined8 **)(puStack_f8 + 0x10) = &uStack_90;
      puVar14 = &UNK_1105aaf48;
      func_0x000107c613fc(&UNK_1105aaf48,0x20,7);
      pcStack_100 = FUN_102bb8e7c;
      *(code **)(puVar14 + 0x10) = FUN_102bb8e7c;
      *(undefined **)(puVar14 + 0x18) = puStack_f8;
      uStack_b8 = 0x102bb8eb4;
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0x42000000;
      uStack_c8 = 0x102bb8b54;
      puStack_c0 = &UNK_1105aaf60;
      ppuVar15 = &puStack_d8;
      puStack_b0 = puVar14;
      func_0x000107c60bc4(ppuVar15);
      func_0x000107c61574(puStack_b0);
      func_0x000107c4c6a4(lVar13);
      func_0x000107c60bd0(ppuVar15);
      func_0x000107c61170(lVar13);
      goto LAB_102bb8320;
    }
  }
  pcStack_100 = (code *)0x0;
  puStack_f8 = (undefined *)0x0;
LAB_102bb8320:
  func_0x0001000285a8(0x112efcbf0,&UNK_10db2e8d8);
  uVar26 = *(undefined8 *)(lVar32 + _DAT_113077f00);
  func_0x000107c61174();
  uVar16 = uVar26;
  func_0x0001000b637c();
  func_0x000107c61170(uVar26);
  uVar29 = *(undefined8 *)(lVar32 + lVar1);
  uVar33 = *(undefined8 *)(lVar31 + lVar5);
  uVar24 = *(undefined8 *)(unaff_x20 + _DAT_112efcb90);
  lVar13 = *(long *)(unaff_x20 + _DAT_112efcbb0);
  uVar26 = *(undefined8 *)(lVar13 + _DAT_113068628);
  func_0x000107c615f0(uVar29);
  func_0x000107c6157c(uVar33);
  func_0x000107c6157c(uVar26);
  func_0x0001000d224c(&uStack_98);
  func_0x000107c61574(uVar26);
  uVar17 = uStack_98;
  func_0x000107c614f0();
  func_0x0001041dfcd0();
  func_0x000107c615e8();
  uVar4 = (undefined1)uStack_98;
  uVar28 = *(undefined8 *)(lVar13 + _DAT_113068638);
  FUN_102bb7bbc();
  uVar2 = uStack_90;
  uVar25 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112efcbc0) + _DAT_113012fb8);
  uVar18 = uStack_90;
  func_0x000107c61174();
  func_0x000107c6157c(uVar28);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(uVar25);
  pcVar7 = 
  "init(runtime:operaPageObservable:eventAnnouncer:adConfigProvider:valdiCOFStoresServices:skOverlayLifecycleEvents:skOverlayOffsetStore:actionHandlers:eventStreams:valdiAdTrackEventListener:containerType:dpaLensGrapheneLogger:wakeUpUiHideObservable:delegate:mainQueuePerformer:)"
  ;
  func_0x0001000c10c0();
  func_0x000107c61180();
  lVar8 = 0;
  FUN_102bbc118();
  lVar10 = lVar8;
  func_0x000107c610f8();
  lVar5 = lVar10 + _DAT_112efcc88;
  *(undefined8 *)(lVar5 + 8) = 0;
  func_0x000107c61614(lVar5,0);
  lVar13 = _DAT_112efcce0;
  func_0x0001000285a8(0x112efcbf8,&UNK_10db2e8e0);
  func_0x000107c613fc();
  pcVar19 = FUN_102bb9f30;
  func_0x0001000bdd8c(FUN_102bb9f30,0);
  *(code **)(lVar10 + lVar13) = pcVar19;
  lVar13 = _DAT_112efcce8;
  func_0x0001000285a8(0x112efcc00,&UNK_10db2eb20);
  func_0x000107c613fc();
  uVar26 = 0x102bb9f60;
  func_0x0001000bdd8c(0x102bb9f60,0);
  *(undefined8 *)(lVar10 + lVar13) = uVar26;
  *(undefined1 *)(lVar10 + _DAT_112efccf0) = 0;
  *(undefined8 *)(lVar10 + _DAT_112efcd00) = 0;
  puVar22 = (undefined8 *)(lVar10 + _DAT_112efcd08);
  *puVar22 = 0;
  puVar22[1] = 0;
  puVar22 = (undefined8 *)(lVar10 + _DAT_112efcd10);
  *puVar22 = 0;
  *(undefined1 *)(puVar22 + 1) = 1;
  *(undefined1 *)(lVar10 + _DAT_112efcd18) = 0;
  *(undefined1 *)(lVar10 + _DAT_112efcd20) = 0;
  *(undefined8 *)(lVar10 + _DAT_112efcd28) = 0;
  *(undefined **)(lVar10 + _DAT_112efcd30) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar1 = _DAT_112efcd40;
  puStack_d8 = (undefined *)((ulong)puStack_d8 & 0xffffffffffffff00);
  lVar13 = 0x112d61fd8;
  func_0x0001000285a8(0x112d61fd8,&UNK_10d927f90);
  func_0x000107c613fc();
  ppuVar15 = &puStack_d8;
  func_0x00010042e6a0();
  *(undefined ***)(lVar10 + lVar1) = ppuVar15;
  lVar1 = _DAT_112efcd48;
  puStack_d8 = (undefined *)0x0;
  func_0x0001000285a8(0x112e65788,&UNK_10da70730);
  func_0x000107c613fc();
  ppuVar15 = &puStack_d8;
  func_0x00010042e6a0();
  *(undefined ***)(lVar10 + lVar1) = ppuVar15;
  lVar1 = _DAT_112efcd50;
  puStack_d8 = (undefined *)((ulong)puStack_d8 & 0xffffffffffffff00);
  func_0x000107c613fc(lVar13,*(undefined4 *)(lVar13 + 0x30),*(undefined2 *)(lVar13 + 0x34));
  ppuVar15 = &puStack_d8;
  func_0x00010042e6a0();
  *(undefined ***)(lVar10 + lVar1) = ppuVar15;
  lVar1 = _DAT_112efcd58;
  puStack_d8 = (undefined *)((ulong)puStack_d8 & 0xffffffffffffff00);
  func_0x000107c613fc(lVar13,*(undefined4 *)(lVar13 + 0x30),*(undefined2 *)(lVar13 + 0x34));
  ppuVar15 = &puStack_d8;
  func_0x00010042e6a0();
  *(undefined ***)(lVar10 + lVar1) = ppuVar15;
  lVar13 = _DAT_112efcd78;
  uVar26 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar10 + lVar13) = uVar26;
  *(undefined8 *)(lVar10 + _DAT_112efcd80) = 0;
  *(undefined8 *)(lVar10 + _DAT_112efcd88) = 0;
  *(long *)(lVar10 + _DAT_112efcc90) = lStack_e0;
  *(undefined8 *)(lVar10 + _DAT_112efcca0) = uVar16;
  *(undefined8 *)(lVar10 + _DAT_112efcca8) = uVar29;
  *(undefined8 *)(lVar10 + _DAT_112efccb0) = uVar33;
  func_0x000107c615f0();
  func_0x000107c6157c(uVar16);
  func_0x000107c615f0(uVar29);
  func_0x000107c6157c(uVar33);
  func_0x0001000d224c(&puStack_d8);
  uVar26 = uStack_d0;
  puVar14 = puStack_d8;
  puVar6 = puStack_d8;
  func_0x000107c614f0(puStack_d8);
  bVar3 = 0;
  func_0x00010403c628(0xd00000000000002c,0x800000010f0fbf50,puVar6,uVar26);
  func_0x000107c615e8(puVar14);
  *(byte *)(lVar10 + _DAT_112efcd38) = bVar3 & 1;
  *(undefined8 *)(lVar10 + _DAT_112efcc98) = uVar24;
  *(undefined8 *)(lVar10 + _DAT_112efcd60) = uVar17;
  *(undefined8 *)(lVar10 + _DAT_112efcd68) = uVar28;
  puVar22 = (undefined8 *)(lVar10 + _DAT_112efccb8);
  *puVar22 = plVar9;
  puVar22[1] = &PTR_DAT_1105ac548;
  puVar22 = (undefined8 *)(lVar10 + _DAT_112efccc0);
  *puVar22 = uVar27;
  puVar22[1] = &PTR_DAT_1105acc90;
  puVar22 = (undefined8 *)(lVar10 + _DAT_112efccc8);
  *puVar22 = plVar11;
  puVar22[1] = &PTR_DAT_1105acd08;
  *(undefined1 *)(lVar10 + _DAT_112efccf8) = uVar4;
  *(undefined8 *)(lVar10 + _DAT_112efccd0) = uVar25;
  *(undefined8 *)(lVar10 + _DAT_112efcd70) = uVar2;
  *(undefined ***)(lVar5 + 8) = &PTR_DAT_1105aaf00;
  func_0x000107c61604(lVar5,unaff_x20);
  *(char **)(lVar10 + _DAT_112efccd8) = pcVar7;
  puVar14 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_a8 = lVar10;
  lStack_a0 = lVar8;
  func_0x000107c6157c(uVar28);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(uVar25);
  func_0x000107c61174();
  func_0x000107c61174(uVar24);
  func_0x000107c6157c(uVar17);
  func_0x000107c615f0(pcVar7);
  plVar20 = &lStack_a8;
  func_0x000107c61154(plVar20,puVar14,0,0);
  lVar13 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar13 + 0x18) = 0x2a;
  *(undefined8 *)(lVar13 + 0x10) = 0x15;
  func_0x000107c61174();
  func_0x000107c61174();
  plVar21 = plVar20;
  func_0x000103b81f54();
  puVar22 = (undefined8 *)plVar21[1];
  *(long *)(lVar13 + 0x20) = *plVar21;
  *(undefined8 **)(lVar13 + 0x28) = puVar22;
  func_0x000107c61434();
  func_0x000103bb6b44();
  puVar23 = (undefined8 *)puVar22[1];
  *(undefined8 *)(lVar13 + 0x30) = *puVar22;
  *(undefined8 **)(lVar13 + 0x38) = puVar23;
  func_0x000107c61434();
  func_0x000103bb6d88();
  puVar22 = (undefined8 *)puVar23[1];
  *(undefined8 *)(lVar13 + 0x40) = *puVar23;
  *(undefined8 **)(lVar13 + 0x48) = puVar22;
  func_0x000107c61434();
  func_0x000103bb6d50();
  puVar23 = (undefined8 *)puVar22[1];
  *(undefined8 *)(lVar13 + 0x50) = *puVar22;
  *(undefined8 **)(lVar13 + 0x58) = puVar23;
  func_0x000107c61434();
  func_0x000103bad358();
  puVar22 = (undefined8 *)puVar23[1];
  *(undefined8 *)(lVar13 + 0x60) = *puVar23;
  *(undefined8 **)(lVar13 + 0x68) = puVar22;
  func_0x000107c61434();
  func_0x000103bad390();
  puVar23 = (undefined8 *)puVar22[1];
  *(undefined8 *)(lVar13 + 0x70) = *puVar22;
  *(undefined8 **)(lVar13 + 0x78) = puVar23;
  func_0x000107c61434();
  func_0x000103bb5854();
  puVar22 = (undefined8 *)puVar23[1];
  *(undefined8 *)(lVar13 + 0x80) = *puVar23;
  *(undefined8 **)(lVar13 + 0x88) = puVar22;
  func_0x000107c61434();
  func_0x000103bb588c();
  puVar23 = (undefined8 *)puVar22[1];
  *(undefined8 *)(lVar13 + 0x90) = *puVar22;
  *(undefined8 **)(lVar13 + 0x98) = puVar23;
  func_0x000107c61434();
  func_0x000103bb463c();
  puVar22 = (undefined8 *)puVar23[1];
  *(undefined8 *)(lVar13 + 0xa0) = *puVar23;
  *(undefined8 **)(lVar13 + 0xa8) = puVar22;
  func_0x000107c61434();
  func_0x000103bb610c();
  puVar23 = (undefined8 *)puVar22[1];
  *(undefined8 *)(lVar13 + 0xb0) = *puVar22;
  *(undefined8 **)(lVar13 + 0xb8) = puVar23;
  func_0x000107c61434();
  func_0x000103b81490();
  puVar22 = (undefined8 *)puVar23[1];
  *(undefined8 *)(lVar13 + 0xc0) = *puVar23;
  *(undefined8 **)(lVar13 + 200) = puVar22;
  func_0x000107c61434();
  func_0x000103bb9c00();
  puVar23 = (undefined8 *)puVar22[1];
  *(undefined8 *)(lVar13 + 0xd0) = *puVar22;
  *(undefined8 **)(lVar13 + 0xd8) = puVar23;
  func_0x000107c61434();
  func_0x000103bb9c70();
  puVar22 = (undefined8 *)puVar23[1];
  *(undefined8 *)(lVar13 + 0xe0) = *puVar23;
  *(undefined8 **)(lVar13 + 0xe8) = puVar22;
  func_0x000107c61434();
  func_0x000103bb6c9c();
  puVar23 = (undefined8 *)puVar22[1];
  *(undefined8 *)(lVar13 + 0xf0) = *puVar22;
  *(undefined8 **)(lVar13 + 0xf8) = puVar23;
  func_0x000107c61434();
  func_0x000103bb6cd8();
  puVar22 = (undefined8 *)puVar23[1];
  *(undefined8 *)(lVar13 + 0x100) = *puVar23;
  *(undefined8 **)(lVar13 + 0x108) = puVar22;
  func_0x000107c61434();
  func_0x000103bb5d50();
  puVar23 = (undefined8 *)puVar22[1];
  *(undefined8 *)(lVar13 + 0x110) = *puVar22;
  *(undefined8 **)(lVar13 + 0x118) = puVar23;
  func_0x000107c61434();
  func_0x000103b817f8();
  puVar22 = (undefined8 *)puVar23[1];
  *(undefined8 *)(lVar13 + 0x120) = *puVar23;
  *(undefined8 **)(lVar13 + 0x128) = puVar22;
  func_0x000107c61434();
  func_0x000103b81960();
  puVar23 = (undefined8 *)puVar22[1];
  *(undefined8 *)(lVar13 + 0x130) = *puVar22;
  *(undefined8 **)(lVar13 + 0x138) = puVar23;
  func_0x000107c61434();
  func_0x000103b81998();
  puVar22 = (undefined8 *)puVar23[1];
  *(undefined8 *)(lVar13 + 0x140) = *puVar23;
  *(undefined8 **)(lVar13 + 0x148) = puVar22;
  func_0x000107c61434();
  func_0x000103b81834();
  puVar23 = (undefined8 *)puVar22[1];
  *(undefined8 *)(lVar13 + 0x150) = *puVar22;
  *(undefined8 **)(lVar13 + 0x158) = puVar23;
  func_0x000107c61434();
  func_0x000103b81928();
  uVar26 = puVar23[1];
  *(undefined8 *)(lVar13 + 0x160) = *puVar23;
  *(undefined8 *)(lVar13 + 0x168) = uVar26;
  func_0x000107c61434();
  lVar5 = lVar13;
  func_0x000107c5fc48(lVar13,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar13);
  func_0x000107c3d744(uVar29);
  func_0x000107c615e8(lStack_e0);
  func_0x000107c61574(uVar16);
  func_0x000107c615e8(uVar29);
  func_0x000107c61574(uVar33);
  func_0x000107c61574(uVar17);
  func_0x000107c61574(uVar28);
  func_0x000107c61170(plVar9);
  func_0x000107c61170(plVar9);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(plVar11);
  func_0x000107c61170(plVar11);
  func_0x000107c61574(uVar25);
  func_0x000107c61170(uVar18);
  func_0x000107c615e8(pcVar7);
  func_0x000107c61170(plVar20);
  func_0x000107c61170(plVar20);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uStack_90);
  FUN_102bb8e6c(pcStack_100,puStack_f8);
  return plVar20;
}



/* Entry: 102bb8c2c; end: 102bb8c3b;  */

void FUN_102bb8c2c(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 102bb8c3c; end: 102bb8c73;  */

void FUN_102bb8c3c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102bb8c74; end: 102bb8c8f;  */

void FUN_102bb8c74(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102bb8c90; end: 102bb8cef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102bb8c90(uint param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112efcb70) != 0) {
    FUN_102bb7bbc();
    plVar1 = (long *)&DAT_113077f20;
    if ((param_1 & 0xff) != 1) {
      plVar1 = (long *)&DAT_113077f18;
    }
    func_0x000107c41864(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112efcb80) + *plVar1),param_2,0);
  }
  return 0;
}



/* Entry: 102bb8cf0; end: 102bb8d4f; -[_TtC24AdContextEmbeddedContent34AdContextEmbeddedContentEntryPoint init] */

void FUN_102bb8cf0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdContextEmbeddedContent.AdContextEmbeddedContentEntryPoint",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bb8d1c);
  (*pcVar1)();
}



/* Entry: 102bb8d50; end: 102bb8e4b; -[_TtC24AdContextEmbeddedContent34AdContextEmbeddedContentEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102bb8d6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb8d8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb8dac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb8dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb8dec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bb8dd0) */
/* WARNING: Removing unreachable block (ram,0x000102bb8db0) */
/* WARNING: Removing unreachable block (ram,0x000102bb8d90) */
/* WARNING: Removing unreachable block (ram,0x000102bb8d70) */
/* WARNING: Removing unreachable block (ram,0x000102bb8df0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb8d50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efcb80));
  return;
}



/* Entry: 102bb8e4c; end: 102bb8e6b;  */

void FUN_102bb8e4c(void)

{
  func_0x000107c61168(&PTR_PTR_112894180);
  return;
}



/* Entry: 102bb8e6c; end: 102bb8e7b;  */

void FUN_102bb8e6c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 102bb8e7c; end: 102bb8eab;  */

void FUN_102bb8e7c(void)

{
  undefined8 in_x5;
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = in_x5;
  func_0x000107c61174(in_x5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102bb8eac; end: 102bb901b;  */

void FUN_102bb8eac(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102bb901c; end: 102bb90c7;  */

void FUN_102bb901c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102bb90c8; end: 102bb90f7;  */

void FUN_102bb90c8(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 102bb90f8; end: 102bb9137;  */

void FUN_102bb90f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efcc08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db2ea10;
  func_0x000107c61520(&UNK_10db2ea10,&UNK_1105ab018);
  puRam0000000112efcc08 = puVar1;
  return;
}



/* Entry: 102bb9138; end: 102bb913b;  */

bool FUN_102bb9138(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102bb913c; end: 102bb923b;  */

void FUN_102bb913c(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  
  func_0x000107c5a738(0x4028000000000000);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar3 = puVar2;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50();
  func_0x000107c61170(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIViewController_1126af898;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIViewController_1126af898);
  func_0x000107c453e4();
  func_0x000107c57f18();
  func_0x000107c61170(puVar3);
  func_0x000107c508f0();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bb923c);
      (*pcVar1)();
    }
    func_0x000107c5af88(puVar2);
    func_0x000107c61180();
    func_0x000107c52b50(lVar4);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 102bb923c; end: 102bb92b3; -[_TtC24AdContextEmbeddedContent35AdContextEmbeddedPresentationWindow initWithWindowScene:] */

undefined1 * FUN_102bb923c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar3 = &uStack_30;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_initWithWindowScene__1125f66b8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_30,puVar1,param_3);
  func_0x000107c61180();
  FUN_102bb913c();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar3;
}



/* Entry: 102bb92b4; end: 102bb933b; -[_TtC24AdContextEmbeddedContent35AdContextEmbeddedPresentationWindow initWithCoder:] */

undefined1 * FUN_102bb92b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = (undefined1 *)puVar3;
    func_0x000107c61174(puVar3);
    FUN_102bb913c();
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar3;
}



/* Entry: 102bb933c; end: 102bb9387; -[_TtC24AdContextEmbeddedContent35AdContextEmbeddedPresentationWindow initWithFrame:] */

void FUN_102bb933c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdContextEmbeddedContent.AdContextEmbeddedPresentationWindow",0x3c,
                      "init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bb9368);
  (*pcVar1)();
}



/* Entry: 102bb9388; end: 102bb9487;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102bb9388(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  char *pcVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_50 [16];
  
  puVar4 = auStack_50;
  func_0x000107c614f0();
  pcVar3 = "init(runtime:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  func_0x000107c610f8();
  lVar2 = _DAT_112efcc38;
  func_0x000107c61614(unaff_x20 + _DAT_112efcc38,0);
  *(undefined8 *)(unaff_x20 + _DAT_112efcc40) = 0;
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  *(char **)(unaff_x20 + _DAT_112efcc48) = pcVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112efcc50);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112efcc58);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61154(auStack_50,PTR_s_initWithRuntime__1125edce0,param_1);
  func_0x000107c615e8(param_1);
  func_0x000107c614f0();
  func_0x000107c61464();
  return puVar4;
}



/* Entry: 102bb9488; end: 102bb94b7; -[_TtC24AdContextEmbeddedContent31AdContextEmbeddedValdiNavigator initWithRuntime:] */

void FUN_102bb9488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  FUN_102bb9388(param_3);
  return;
}



/* Entry: 102bb94b8; end: 102bb978b;  */

/* WARNING: Possible PIC construction at 0x000102bb9534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb9554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb9574: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb9594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb9668: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb96ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb9764: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bb966c) */
/* WARNING: Removing unreachable block (ram,0x000102bb96d8) */
/* WARNING: Removing unreachable block (ram,0x000102bb96e0) */
/* WARNING: Removing unreachable block (ram,0x000102bb9598) */
/* WARNING: Removing unreachable block (ram,0x000102bb9578) */
/* WARNING: Removing unreachable block (ram,0x000102bb957c) */
/* WARNING: Removing unreachable block (ram,0x000102bb9558) */
/* WARNING: Removing unreachable block (ram,0x000102bb955c) */
/* WARNING: Removing unreachable block (ram,0x000102bb9538) */
/* WARNING: Removing unreachable block (ram,0x000102bb9788) */
/* WARNING: Removing unreachable block (ram,0x000102bb953c) */
/* WARNING: Removing unreachable block (ram,0x000102bb96f0) */
/* WARNING: Removing unreachable block (ram,0x000102bb9500) */
/* WARNING: Removing unreachable block (ram,0x000102bb95e0) */
/* WARNING: Removing unreachable block (ram,0x000102bb951c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb94b8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  lVar4 = unaff_x20 + _DAT_112efcc38;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar1 = lVar4;
    FUN_102bb988c();
    lVar2 = lVar1;
    func_0x000107c508f0();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x0001048db000(0xd00000000000001e,0x800000010f0fc0d0,0xd000000000000064,
                          0x800000010f0fbff0,0x4e);
      func_0x000107c615e8(lVar4);
    }
    else {
      lVar4 = *(long *)(unaff_x20 + _DAT_112efcc40);
      *(long *)(unaff_x20 + _DAT_112efcc40) = lVar1;
      func_0x000107c61174(lVar1);
      lVar1 = lVar4;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  uVar3 = 0x800000010f0fc0b0;
  func_0x0001048db000(0xd00000000000001a,0x800000010f0fc0b0,0xd000000000000064,0x800000010f0fbff0,
                      0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 102bb978c; end: 102bb988b; -[_TtC24AdContextEmbeddedContent31AdContextEmbeddedValdiNavigator presentComponentWithPage:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb978c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112efcc48);
  puVar1 = &UNK_1105ab130;
  func_0x000107c613fc(&UNK_1105ab130,0x21,7);
  *(long *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  puVar1[0x20] = param_4;
  pcStack_50 = FUN_102bb9ed0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105ab148;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102bb988c; end: 102bb9ba7;  */

ulong FUN_102bb988c(void)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong unaff_x20;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x26;
  
  func_0x000107c4c250();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
    puVar9 = (undefined8 *)0xd000000000000021;
    uVar4 = 0x800000010f0fbfc0;
    func_0x0001048db000(0xd000000000000021,0x800000010f0fbfc0,0xd000000000000064,0x800000010f0fbff0,
                        0x6f);
    puVar8 = puVar9;
    func_0x0001018e0ad8();
    func_0x000107c613f8(&UNK_1107b6098,puVar8,0,0);
    *puVar8 = puVar9;
    puVar8[1] = uVar4;
    func_0x000107c61654();
    return unaff_x26;
  }
  uVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102bb9ba8);
    (*pcVar2)();
  }
  uVar10 = uVar3;
  func_0x000107c5e3f8();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  if (uVar10 != 0) {
    uVar3 = uVar10;
    func_0x000107c5e400();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    if (uVar3 != 0) {
      uVar10 = uVar3;
      func_0x000107c5e408();
      func_0x000107c61180();
      uVar4 = 0;
      func_0x000100e8a058(0);
      uVar5 = uVar10;
      func_0x000107c5fc54(uVar10,uVar4);
      func_0x000107c61170(uVar10);
      if (uVar5 >> 0x3e == 0) {
        uVar10 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar10 = uVar5 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar5) {
          uVar10 = uVar5;
        }
        func_0x000107c60480();
      }
      if (uVar10 != 0) {
        uVar11 = 0;
        do {
          if ((uVar5 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102bb9ae0);
              (*pcVar2)();
            }
            unaff_x26 = *(ulong *)(uVar5 + uVar11 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            unaff_x26 = uVar11;
            func_0x000100de9de8(uVar11,uVar5);
          }
          uVar1 = uVar11 + 1;
          if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102bb9adc);
            (*pcVar2)();
          }
          uVar6 = unaff_x26;
          func_0x000102bb9368();
          uVar7 = unaff_x26;
          func_0x000107c61480(unaff_x26,uVar6);
          if (uVar7 != 0) {
            func_0x000107c61170(unaff_x20);
            func_0x000107c61170(uVar3);
            func_0x000107c6142c(uVar5);
            return unaff_x26;
          }
          func_0x000107c61170(unaff_x26);
          uVar11 = uVar11 + 1;
        } while (uVar1 != uVar10);
      }
      func_0x000107c6142c(uVar5);
      puVar9 = (undefined8 *)0xd00000000000002e;
      uVar4 = 0x800000010f0fc080;
      func_0x0001048db000(0xd00000000000002e,0x800000010f0fc080,0xd000000000000064,
                          0x800000010f0fbff0,0x77);
      puVar8 = puVar9;
      func_0x0001018e0ad8();
      func_0x000107c613f8(&UNK_1107b6098,puVar8,0,0);
      *puVar8 = puVar9;
      puVar8[1] = uVar4;
      func_0x000107c61654();
      func_0x000107c61170(unaff_x20);
      unaff_x20 = uVar3;
      goto LAB_102bb9b7c;
    }
  }
  puVar9 = (undefined8 *)0xd000000000000016;
  uVar4 = 0x800000010f0fc060;
  func_0x0001048db000(0xd000000000000016,0x800000010f0fc060,0xd000000000000064,0x800000010f0fbff0,
                      0x73);
  puVar8 = puVar9;
  func_0x0001018e0ad8();
  func_0x000107c613f8(&UNK_1107b6098,puVar8,0,0);
  *puVar8 = puVar9;
  puVar8[1] = uVar4;
  func_0x000107c61654();
LAB_102bb9b7c:
  func_0x000107c61170(unaff_x20);
  return unaff_x26;
}



/* Entry: 102bb9ba8; end: 102bb9cd3;  */

/* WARNING: Removing unreachable block (ram,0x000102bb9bd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb9ba8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  
  lVar1 = param_1;
  FUN_102bb988c();
  lVar2 = lVar1;
  func_0x000107c508f0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = &UNK_1105ab0e0;
    func_0x000107c613fc(&UNK_1105ab0e0,0x18,7);
    *(long *)(puVar3 + 0x10) = lVar1;
    uStack_58 = 0x102bb9ec4;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1105ab0f8;
    ppuVar4 = &puStack_78;
    puStack_50 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_50;
    func_0x000107c61174(lVar1);
    func_0x000107c61574(puVar3);
    func_0x000107c420a8(lVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar2);
  }
  if (*(code **)(param_1 + _DAT_112efcc58) != (code *)0x0) {
    (**(code **)(param_1 + _DAT_112efcc58))();
  }
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 102bb9cd4; end: 102bb9da7; -[_TtC24AdContextEmbeddedContent31AdContextEmbeddedValdiNavigator dismissWithAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb9cd4(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112efcc48);
  puVar1 = &UNK_1105ab090;
  func_0x000107c613fc(&UNK_1105ab090,0x19,7);
  *(long *)(puVar1 + 0x10) = param_1;
  puVar1[0x18] = param_3;
  pcStack_40 = FUN_102bb9e9c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105ab0a8;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102bb9da8; end: 102bb9dd3; -[_TtC24AdContextEmbeddedContent31AdContextEmbeddedValdiNavigator init] */

void FUN_102bb9da8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdContextEmbeddedContent.AdContextEmbeddedValdiNavigator",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bb9dd4);
  (*pcVar1)();
}



/* Entry: 102bb9dd4; end: 102bb9dd7;  */

void FUN_102bb9dd4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102bb9dd8; end: 102bb9e0b;  */

void FUN_102bb9dd8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102bb9e0c; end: 102bb9e7b; -[_TtC24AdContextEmbeddedContent31AdContextEmbeddedValdiNavigator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102bb9e5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bb9e60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb9e0c(long param_1)

{
  func_0x000102bb9ef8(param_1 + _DAT_112efcc38);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112efcc40));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112efcc48));
  if (*(long *)(param_1 + _DAT_112efcc50) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112efcc50))[1]);
    return;
  }
  return;
}



/* Entry: 102bb9e7c; end: 102bb9e9b;  */

void FUN_102bb9e7c(void)

{
  func_0x000107c61168(&PTR_PTR_112894340);
  return;
}



/* Entry: 102bb9e9c; end: 102bb9ecf;  */

/* WARNING: Removing unreachable block (ram,0x000102bb9bd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb9e9c(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  code *pcVar6;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = lVar5;
  FUN_102bb988c();
  lVar2 = lVar1;
  func_0x000107c508f0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = &UNK_1105ab0e0;
    func_0x000107c613fc(&UNK_1105ab0e0,0x18,7);
    *(long *)(puVar3 + 0x10) = lVar1;
    uStack_58 = 0x102bb9ec4;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1105ab0f8;
    ppuVar4 = &puStack_78;
    puStack_50 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_50;
    func_0x000107c61174(lVar1);
    func_0x000107c61574(puVar3);
    func_0x000107c420a8(lVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar2);
  }
  pcVar6 = *(code **)(lVar5 + _DAT_112efcc58);
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)();
  }
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 102bb9ed0; end: 102bb9f1b;  */

void FUN_102bb9ed0(void)

{
  long unaff_x20;
  
  FUN_102bb94b8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102bb9f1c; end: 102bb9f2f;  */

void FUN_102bb9f1c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102bb9f30; end: 102bb9f8f;  */

void FUN_102bb9f30(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000103b750d4();
  func_0x000103b750bc();
  *param_1 = uVar1;
  return;
}



/* Entry: 102bb9f90; end: 102bb9ffb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102bb9f90(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112efcd80;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112efcd80);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ac080;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 102bb9ffc; end: 102bba023; -[_TtC24AdContextEmbeddedContent31AdContextEmbeddedViewController initWithCoder:] */

void FUN_102bb9ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000102bc7a04();
  return;
}



/* Entry: 102bba024; end: 102bba0af;  */

/* WARNING: Possible PIC construction at 0x000102bba04c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bba08c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bba050) */
/* WARNING: Removing unreachable block (ram,0x000102bba090) */

void FUN_102bba024(undefined8 param_1)

{
  FUN_102bb9f90();
  func_0x000107c5a568();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bba0b0; end: 102bba0d7; -[_TtC24AdContextEmbeddedContent31AdContextEmbeddedViewController loadView] */

void FUN_102bba0b0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102bba024();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bba0d8; end: 102bba1f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bba0d8(void)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  long *plVar6;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_viewDidLoad_112684cd8);
  plVar6 = *(long **)(unaff_x20 + _DAT_112efccd8);
  plVar1 = plVar6;
  func_0x000107c615f0(plVar6);
  func_0x000100471e0c();
  func_0x000107c615e8();
  FUN_102bc7ef8();
  func_0x0001000c2068();
  func_0x000107c61574(plVar1);
  puVar2 = &UNK_1105ab180;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcVar3 = FUN_102bc7f3c;
  puVar5 = puVar2;
  (**(code **)(*plVar6 + 0x60))(FUN_102bc7f3c);
  func_0x000107c61574(plVar6);
  func_0x000107c61574(puVar2);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112efcd78),pcVar4,puVar5);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 102bba1f4; end: 102bba24f;  */

void FUN_102bba1f4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102bba250(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102bba250; end: 102bbad4f;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bba250(long *param_1)

{
  undefined1 uVar1;
  long *plVar2;
  ulong ******ppppppuVar3;
  ulong *****pppppuVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong *******pppppppuVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  ulong *******pppppppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  code *pcVar15;
  code *pcVar16;
  undefined8 uVar17;
  ulong ******ppppppuVar18;
  ulong ******ppppppuVar19;
  undefined8 uVar20;
  long unaff_x20;
  undefined8 uVar21;
  ulong ******ppppppuVar22;
  ulong *******pppppppuVar23;
  ulong *******pppppppuStack_e8;
  ulong *******pppppppuStack_a0;
  ulong *******pppppppuStack_90;
  undefined8 uStack_88;
  ulong ******ppppppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar21 = *(undefined8 *)(unaff_x20 + _DAT_112efcd00);
  *(long **)(unaff_x20 + _DAT_112efcd00) = param_1;
  plVar2 = param_1;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61170(uVar21);
  uVar21 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112efccb8) + _DAT_112efce08);
  *(long **)(*(long *)(unaff_x20 + _DAT_112efccb8) + _DAT_112efce08) = param_1;
  func_0x000107c61174();
  func_0x000107c61170(uVar21);
  uVar21 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112efccc8) + _DAT_112efd060);
  *(long **)(*(long *)(unaff_x20 + _DAT_112efccc8) + _DAT_112efd060) = param_1;
  func_0x000107c61170(uVar21);
  ppppppuVar22 = *(ulong *******)((long)plVar2 + _DAT_11307abc8);
  ppppppuStack_80 = ppppppuVar22;
  func_0x000107c61434(ppppppuVar22);
  uVar21 = 0x112d472a8;
  func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
  uVar6 = 0x112da99a0;
  func_0x0001000285a8(0x112da99a0,&UNK_10d97c130);
  func_0x000107c6147c(&pppppppuStack_90,&ppppppuStack_80,uVar21,uVar6,7);
  pppppppuVar23 = pppppppuStack_90;
  func_0x0001000d224c(&ppppppuStack_80);
  ppppppuVar3 = ppppppuStack_80;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & (ulong)*ppppppuStack_80) + 0x108))
            (pppppppuVar23);
  func_0x000107c6142c(pppppppuVar23);
  func_0x000107c61170();
  func_0x00010404c6a8();
  if (ppppppuVar22[2] == (ulong *****)0x0) {
    uStack_78 = 0;
    ppppppuStack_80 = (ulong ******)0x0;
    lStack_68 = 0;
    uStack_70 = 0;
LAB_102bba478:
    func_0x000102bc85b8(&ppppppuStack_80,0x112d387f8,&UNK_10d902650);
LAB_102bba490:
    uVar1 = 0;
  }
  else {
    pppppuVar4 = *ppppppuVar3;
    ppppppuVar3 = (ulong ******)ppppppuVar3[1];
    func_0x000107c61434(ppppppuVar22);
    func_0x000107c61434(ppppppuVar3);
    ppppppuVar18 = ppppppuVar3;
    func_0x000100029284(pppppuVar4);
    if (((ulong)ppppppuVar18 & 1) == 0) {
      func_0x000107c6142c(ppppppuVar22);
      uStack_78 = 0;
      ppppppuStack_80 = (ulong ******)0x0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x0001000bb420(ppppppuVar22[7] + (long)pppppuVar4 * 4,&ppppppuStack_80);
      func_0x000107c6142c(ppppppuVar3);
      ppppppuVar3 = ppppppuVar22;
    }
    func_0x000107c6142c(ppppppuVar3);
    if (lStack_68 == 0) goto LAB_102bba478;
    uVar21 = 0;
    func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    pppppppuVar23 = (ulong *******)&pppppppuStack_90;
    func_0x000107c6147c(pppppppuVar23,&ppppppuStack_80,PTR___sypN_11034f1a8 + 8,uVar21,6);
    pppppppuVar7 = pppppppuStack_90;
    if (((ulong)pppppppuVar23 & 1) == 0) goto LAB_102bba490;
    pppppppuVar23 = pppppppuStack_90;
    func_0x000107c3ebcc();
    uVar1 = SUB81(pppppppuVar23,0);
    func_0x000107c61170(pppppppuVar7);
  }
  *(undefined1 *)(unaff_x20 + _DAT_112efcd20) = uVar1;
  FUN_102bbd49c();
  plVar5 = plVar2;
  func_0x000107c3e4a4();
  uVar21 = 0;
  FUN_102bcc4bc();
  (*(code *)(undefined *)0x102bcc718)(plVar5,uVar21,&PTR_DAT_1105acc90);
  func_0x00010404c1c0();
  if (ppppppuVar22[2] == (ulong *****)0x0) {
    uStack_78 = 0;
    ppppppuStack_80 = (ulong ******)0x0;
    lStack_68 = 0;
    uStack_70 = 0;
LAB_102bba5c4:
    pppppppuVar23 = &ppppppuStack_80;
    func_0x000102bc85b8(pppppppuVar23,0x112d387f8,&UNK_10d902650);
LAB_102bba5dc:
    pppppppuVar7 = pppppppuVar23;
    pppppppuVar23 = (ulong *******)0x0;
  }
  else {
    lVar8 = *plVar5;
    ppppppuVar3 = (ulong ******)plVar5[1];
    func_0x000107c61434(ppppppuVar22);
    func_0x000107c61434(ppppppuVar3);
    ppppppuVar18 = ppppppuVar3;
    func_0x000100029284(lVar8);
    if (((ulong)ppppppuVar18 & 1) == 0) {
      func_0x000107c6142c(ppppppuVar22);
      uStack_78 = 0;
      ppppppuStack_80 = (ulong ******)0x0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x0001000bb420(ppppppuVar22[7] + lVar8 * 4,&ppppppuStack_80);
      func_0x000107c6142c(ppppppuVar3);
      ppppppuVar3 = ppppppuVar22;
    }
    func_0x000107c6142c(ppppppuVar3);
    if (lStack_68 == 0) goto LAB_102bba5c4;
    uVar6 = 0;
    func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    pppppppuVar23 = (ulong *******)&pppppppuStack_90;
    func_0x000107c6147c(pppppppuVar23,&ppppppuStack_80,PTR___sypN_11034f1a8 + 8,uVar6,6);
    pppppppuVar7 = pppppppuStack_90;
    if (((ulong)pppppppuVar23 & 1) == 0) goto LAB_102bba5dc;
    pppppppuVar23 = pppppppuStack_90;
    func_0x000107c3ebcc();
    func_0x000107c61170(pppppppuVar7);
  }
  FUN_102bb9f90();
  func_0x000107c550d8();
  func_0x000107c61170(pppppppuVar7);
  lVar8 = *(long *)(unaff_x20 + _DAT_112efcd88);
  if (lVar8 != 0) {
    func_0x000107c61174();
    func_0x000107c521e8();
    func_0x000107c61170(lVar8);
  }
  if (((ulong)pppppppuVar23 & 1) != 0) {
    return;
  }
  lVar8 = *(long *)(unaff_x20 + _DAT_112efcc90);
  if (lVar8 == 0) {
    return;
  }
  func_0x000107c615f0(lVar8);
  plVar5 = plVar2;
  FUN_102bbd738();
  pppppppuVar23 = (ulong *******)0x0;
  if (plVar5 != (long *)0x0) {
    plVar9 = plVar5;
    FUN_102bbe240();
    func_0x00010404c524();
    if (ppppppuVar22[2] == (ulong *****)0x0) {
      uStack_78 = 0;
      ppppppuStack_80 = (ulong ******)0x0;
      lStack_68 = 0;
      uStack_70 = 0;
LAB_102bba734:
      pppppppuVar23 = &ppppppuStack_80;
      func_0x000102bc85b8(pppppppuVar23,0x112d387f8,&UNK_10d902650);
      uVar6 = 0xf000000000000000;
      pppppppuVar7 = (ulong *******)0x0;
    }
    else {
      lVar10 = *plVar9;
      ppppppuVar3 = (ulong ******)plVar9[1];
      func_0x000107c61434(ppppppuVar22);
      func_0x000107c61434(ppppppuVar3);
      ppppppuVar18 = ppppppuVar3;
      func_0x000100029284(lVar10);
      if (((ulong)ppppppuVar18 & 1) == 0) {
        func_0x000107c6142c(ppppppuVar22);
        uStack_78 = 0;
        ppppppuStack_80 = (ulong ******)0x0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        func_0x0001000bb420(ppppppuVar22[7] + lVar10 * 4,&ppppppuStack_80);
        func_0x000107c6142c(ppppppuVar3);
        ppppppuVar3 = ppppppuVar22;
      }
      func_0x000107c6142c(ppppppuVar3);
      if (lStack_68 == 0) goto LAB_102bba734;
      pppppppuVar23 = (ulong *******)&pppppppuStack_90;
      func_0x000107c6147c(pppppppuVar23,&ppppppuStack_80,PTR___sypN_11034f1a8 + 8,
                          PTR___s10Foundation4DataVN_110350ae0,6);
      uVar6 = uStack_88;
      pppppppuVar7 = pppppppuStack_90;
      if ((int)pppppppuVar23 == 0) {
        pppppppuVar7 = (ulong *******)0x0;
        uVar6 = 0xf000000000000000;
      }
    }
    func_0x00010404c5a0();
    if (ppppppuVar22[2] == (ulong *****)0x0) {
      uStack_78 = 0;
      ppppppuStack_80 = (ulong ******)0x0;
      lStack_68 = 0;
      uStack_70 = 0;
LAB_102bba818:
      pppppppuVar23 = &ppppppuStack_80;
      func_0x000102bc85b8(pppppppuVar23,0x112d387f8,&UNK_10d902650);
      pppppppuStack_a0 = (ulong *******)0x0;
      uVar20 = 0xf000000000000000;
    }
    else {
      ppppppuVar3 = *pppppppuVar23;
      ppppppuVar18 = pppppppuVar23[1];
      func_0x000107c61434(ppppppuVar22);
      func_0x000107c61434(ppppppuVar18);
      ppppppuVar19 = ppppppuVar18;
      func_0x000100029284(ppppppuVar3);
      if (((ulong)ppppppuVar19 & 1) == 0) {
        func_0x000107c6142c(ppppppuVar22);
        uStack_78 = 0;
        ppppppuStack_80 = (ulong ******)0x0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        func_0x0001000bb420(ppppppuVar22[7] + (long)ppppppuVar3 * 4,&ppppppuStack_80);
        func_0x000107c6142c(ppppppuVar18);
        ppppppuVar18 = ppppppuVar22;
      }
      func_0x000107c6142c(ppppppuVar18);
      if (lStack_68 == 0) goto LAB_102bba818;
      pppppppuVar23 = (ulong *******)&pppppppuStack_90;
      func_0x000107c6147c(pppppppuVar23,&ppppppuStack_80,PTR___sypN_11034f1a8 + 8,
                          PTR___s10Foundation4DataVN_110350ae0,6);
      uVar20 = uStack_88;
      pppppppuStack_a0 = pppppppuStack_90;
      if ((int)pppppppuVar23 == 0) {
        pppppppuStack_a0 = (ulong *******)0x0;
        uVar20 = 0xf000000000000000;
      }
    }
    func_0x00010404c560();
    if (ppppppuVar22[2] == (ulong *****)0x0) {
      uStack_78 = 0;
      ppppppuStack_80 = (ulong ******)0x0;
      lStack_68 = 0;
      uStack_70 = 0;
LAB_102bba90c:
      pppppppuVar12 = &ppppppuStack_80;
      func_0x000102bc85b8(pppppppuVar12,0x112d387f8,&UNK_10d902650);
      pppppppuVar23 = (ulong *******)0x0;
    }
    else {
      ppppppuVar3 = *pppppppuVar23;
      ppppppuVar18 = pppppppuVar23[1];
      func_0x000107c61434(ppppppuVar22);
      func_0x000107c61434(ppppppuVar18);
      ppppppuVar19 = ppppppuVar18;
      func_0x000100029284(ppppppuVar3);
      if (((ulong)ppppppuVar19 & 1) == 0) {
        func_0x000107c6142c(ppppppuVar22);
        uStack_78 = 0;
        ppppppuStack_80 = (ulong ******)0x0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        func_0x0001000bb420(ppppppuVar22[7] + (long)ppppppuVar3 * 4,&ppppppuStack_80);
        func_0x000107c6142c(ppppppuVar18);
        ppppppuVar18 = ppppppuVar22;
      }
      func_0x000107c6142c(ppppppuVar18);
      if (lStack_68 == 0) goto LAB_102bba90c;
      uVar11 = 0;
      func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      pppppppuVar12 = (ulong *******)&pppppppuStack_90;
      func_0x000107c6147c(pppppppuVar12,&ppppppuStack_80,PTR___sypN_11034f1a8 + 8,uVar11,6);
      pppppppuVar23 = pppppppuStack_90;
      if ((int)pppppppuVar12 == 0) {
        pppppppuVar23 = (ulong *******)0x0;
      }
    }
    func_0x00010404c718();
    if (ppppppuVar22[2] == (ulong *****)0x0) {
      uStack_78 = 0;
      ppppppuStack_80 = (ulong ******)0x0;
      lStack_68 = 0;
      uStack_70 = 0;
LAB_102bba9e8:
      func_0x000102bc85b8(&ppppppuStack_80,0x112d387f8,&UNK_10d902650);
      pppppppuStack_e8 = (ulong *******)0x0;
      uVar11 = 0;
    }
    else {
      ppppppuVar3 = *pppppppuVar12;
      ppppppuVar18 = pppppppuVar12[1];
      func_0x000107c61434(ppppppuVar22);
      func_0x000107c61434(ppppppuVar18);
      ppppppuVar19 = ppppppuVar18;
      func_0x000100029284(ppppppuVar3);
      if (((ulong)ppppppuVar19 & 1) == 0) {
        func_0x000107c6142c(ppppppuVar22);
        uStack_78 = 0;
        ppppppuStack_80 = (ulong ******)0x0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        func_0x0001000bb420(ppppppuVar22[7] + (long)ppppppuVar3 * 4,&ppppppuStack_80);
        func_0x000107c6142c(ppppppuVar18);
        ppppppuVar18 = ppppppuVar22;
      }
      func_0x000107c6142c(ppppppuVar18);
      if (lStack_68 == 0) goto LAB_102bba9e8;
      pppppppuVar12 = (ulong *******)&pppppppuStack_90;
      func_0x000107c6147c(pppppppuVar12,&ppppppuStack_80,PTR___sypN_11034f1a8 + 8,
                          PTR___sSSN_11034da80,6);
      uVar11 = uStack_88;
      pppppppuStack_e8 = pppppppuStack_90;
      if ((int)pppppppuVar12 == 0) {
        pppppppuStack_e8 = (ulong *******)0x0;
        uVar11 = 0;
      }
    }
    puVar13 = &UNK_1105ab180;
    func_0x000107c613fc(&UNK_1105ab180,0x18,7);
    func_0x000107c61614(puVar13 + 0x10);
    puVar14 = &UNK_1105ab1d0;
    func_0x000107c613fc(&UNK_1105ab1d0,0x58,7);
    *(undefined **)(puVar14 + 0x10) = puVar13;
    *(ulong ********)(puVar14 + 0x18) = pppppppuVar7;
    *(undefined8 *)(puVar14 + 0x20) = uVar6;
    *(ulong ********)(puVar14 + 0x28) = pppppppuStack_a0;
    *(undefined8 *)(puVar14 + 0x30) = uVar20;
    *(ulong ********)(puVar14 + 0x38) = pppppppuVar23;
    *(ulong ********)(puVar14 + 0x40) = pppppppuStack_e8;
    *(undefined8 *)(puVar14 + 0x48) = uVar11;
    *(long **)(puVar14 + 0x50) = plVar2;
    func_0x0001000285a8(0x112efcdd0,&UNK_10db2eae0);
    func_0x000107c613fc();
    func_0x000107c61174(plVar2);
    func_0x000100de78a0(pppppppuVar7,uVar6);
    func_0x000100de78a0(pppppppuStack_a0,uVar20);
    func_0x000107c61174();
    pcVar15 = FUN_102bc7f44;
    func_0x0001000bdd8c(FUN_102bc7f44,puVar14);
    pcVar16 = pcVar15;
    func_0x0001000bf56c();
    func_0x000107c61574(pcVar15);
    lVar10 = _DAT_112efcd80;
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112efcd80);
    func_0x000107c61174(uVar11);
    func_0x0001000d224c(&ppppppuStack_80);
    ppppppuVar3 = ppppppuStack_80;
    func_0x000107c614f0(ppppppuStack_80);
    FUN_102bb72dc();
    func_0x000107c615e8(ppppppuVar3);
    func_0x000107c59308(uVar11);
    func_0x000107c61170(uVar11);
    uVar17 = *(undefined8 *)(unaff_x20 + lVar10);
    func_0x000107c61174(uVar17);
    func_0x0001000d224c(&ppppppuStack_80);
    uVar11 = uStack_78;
    ppppppuVar3 = ppppppuStack_80;
    ppppppuVar18 = ppppppuStack_80;
    func_0x000107c614f0(ppppppuStack_80);
    func_0x00010403c628(0xd00000000000002c,0x800000010f0fc210,ppppppuVar18,uVar11);
    func_0x000107c615e8(ppppppuVar3);
    func_0x000107c5a1ec(uVar17);
    func_0x0001000b44c0(pppppppuVar7,uVar6);
    func_0x0001000b44c0(pppppppuStack_a0,uVar20);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(plVar5);
    func_0x000107c61170(pcVar16);
    func_0x000107c61170();
  }
  lVar10 = _DAT_112efccf0;
  if ((*(byte *)(unaff_x20 + _DAT_112efccf0) & 1) != 0) goto LAB_102bbad28;
  func_0x00010404c618();
  if (ppppppuVar22[2] == (ulong *****)0x0) {
    uStack_78 = 0;
    ppppppuStack_80 = (ulong ******)0x0;
    lStack_68 = 0;
    uStack_70 = 0;
LAB_102bbad0c:
    func_0x000102bc85b8(&ppppppuStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    ppppppuVar3 = *pppppppuVar23;
    ppppppuVar18 = pppppppuVar23[1];
    func_0x000107c61434(ppppppuVar22);
    func_0x000107c61434(ppppppuVar18);
    ppppppuVar19 = ppppppuVar18;
    func_0x000100029284(ppppppuVar3);
    if (((ulong)ppppppuVar19 & 1) == 0) {
      func_0x000107c6142c(ppppppuVar22);
      uStack_78 = 0;
      ppppppuStack_80 = (ulong ******)0x0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x0001000bb420(ppppppuVar22[7] + (long)ppppppuVar3 * 4,&ppppppuStack_80);
      func_0x000107c6142c(ppppppuVar18);
      ppppppuVar18 = ppppppuVar22;
    }
    func_0x000107c6142c(ppppppuVar18);
    if (lStack_68 == 0) goto LAB_102bbad0c;
    uVar6 = 0;
    func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    pppppppuVar23 = (ulong *******)&pppppppuStack_90;
    func_0x000107c6147c(pppppppuVar23,&ppppppuStack_80,PTR___sypN_11034f1a8 + 8,uVar6,6);
    if (((ulong)pppppppuVar23 & 1) != 0) {
      pppppppuVar23 = pppppppuStack_90;
      func_0x000107c3ebcc();
      func_0x000107c61170(pppppppuStack_90);
      *(char *)(unaff_x20 + lVar10) = (char)pppppppuVar23;
      if (((ulong)pppppppuVar23 & 1) != 0) {
        (*(code *)(undefined *)0x102bcc658)(uVar21,&PTR_DAT_1105acc90);
      }
      goto LAB_102bbad28;
    }
  }
  *(undefined1 *)(unaff_x20 + lVar10) = 0;
LAB_102bbad28:
  func_0x000107c615e8(lVar8);
  return;
}



/* Entry: 102bbad50; end: 102bbad77; -[_TtC24AdContextEmbeddedContent31AdContextEmbeddedViewController viewDidLoad] */

void FUN_102bbad50(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102bba0d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bbad78; end: 102bbb08f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bbad78(double param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  double dVar4;
  double dVar5;
  double dVar6;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_viewDidLayoutSubviews_112684cc8);
  lVar2 = *(long *)(unaff_x20 + _DAT_112efcd28);
  if (lVar2 != 0) {
    func_0x000107c61174();
    lVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bbaf04);
      (*pcVar1)();
    }
    func_0x000107c3ec60();
    func_0x000107c61170(lVar3);
    dVar4 = param_1;
    dVar6 = param_3;
    func_0x000107c609b0(param_1,param_2,param_3,param_4);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bbaf08);
      (*pcVar1)();
    }
    lVar3 = unaff_x20;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    if (lVar3 == 0) {
      dVar6 = 0.0;
    }
    else {
      func_0x000107c515a0(lVar3);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61174(lVar2);
    dVar5 = param_1;
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    func_0x000107c609b0(param_1,param_2,param_3,param_4);
    func_0x000107c54b80(0,dVar4 * 0.595,dVar5,dVar6 + (param_1 - dVar4 * 0.595),lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102bbb090; end: 102bbb0b7; -[_TtC24AdContextEmbeddedContent31AdContextEmbeddedViewController viewDidLayoutSubviews] */

void FUN_102bbb090(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102bbad78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bbb0b8; end: 102bbb29f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bbb0b8(uint param_1)

{
  long unaff_x20;
  undefined1 uStack_51;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_viewDidAppear__112684bd0,param_1 & 1);
  if ((*(char *)(unaff_x20 + _DAT_112efcd20) == '\x01') &&
     ((*(byte *)(unaff_x20 + _DAT_112efcd18) & 1) == 0)) {
    FUN_102bcc4bc(0);
    FUN_102bcc4dc();
    uStack_51 = 1;
    func_0x0001007d6d78(&uStack_51);
  }
  func_0x000102bbb184();
  return;
}



/* Entry: 102bbb2a0; end: 102bbb303; -[_TtC24AdContextEmbeddedContent31AdContextEmbeddedViewController viewDidAppear:] */

void FUN_102bbb2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102bbb0b8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bbb304; end: 102bbb30b;  */

undefined8 FUN_102bbb304(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_1041d6e3c)(param_1,param_2);
  return param_1;
}



/* Entry: 102bbb30c; end: 102bbb37b;  */

void FUN_102bbb30c(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102bbb37c(uVar2,uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102bbb37c; end: 102bbb54b;  */

/* WARNING: Possible PIC construction at 0x000102bbb3b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bbb3f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bbb424: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bbb4d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bbb518: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bbb3f8) */
/* WARNING: Removing unreachable block (ram,0x000102bbb3bc) */
/* WARNING: Removing unreachable block (ram,0x000102bbb4dc) */
/* WARNING: Removing unreachable block (ram,0x000102bbb3c0) */
/* WARNING: Removing unreachable block (ram,0x000102bbb3fc) */
/* WARNING: Removing unreachable block (ram,0x000102bbb410) */
/* WARNING: Removing unreachable block (ram,0x000102bbb4f4) */
/* WARNING: Removing unreachable block (ram,0x000102bbb508) */
/* WARNING: Removing unreachable block (ram,0x000102bbb424) */
/* WARNING: Removing unreachable block (ram,0x000102bbb3d0) */
/* WARNING: Removing unreachable block (ram,0x000102bbb3e4) */
/* WARNING: Removing unreachable block (ram,0x000102bbb51c) */
/* WARNING: Removing unreachable block (ram,0x000102bbb428) */
/* WARNING: Removing unreachable block (ram,0x000102bbb474) */
/* WARNING: Removing unreachable block (ram,0x000102bbb47c) */
/* WARNING: Removing unreachable block (ram,0x000102bbb484) */
/* WARNING: Removing unreachable block (ram,0x000102bbb48c) */
/* WARNING: Removing unreachable block (ram,0x000102bbb434) */
/* WARNING: Removing unreachable block (ram,0x000102bbb438) */
/* WARNING: Removing unreachable block (ram,0x000102bbb494) */
/* WARNING: Removing unreachable block (ram,0x000102bbb4a8) */
/* WARNING: Removing unreachable block (ram,0x000102bbb4b8) */
/* WARNING: Removing unreachable block (ram,0x000102bbb440) */
/* WARNING: Removing unreachable block (ram,0x000102bbb524) */
/* WARNING: Removing unreachable block (ram,0x000102bbb458) */
/* WARNING: Removing unreachable block (ram,0x000102bbb46c) */
/* WARNING: Removing unreachable block (ram,0x000102bbb528) */
/* WARNING: Removing unreachable block (ram,0x000102bbb520) */
/* WARNING: Removing unreachable block (ram,0x000102bbb530) */

void FUN_102bbb37c(undefined8 param_1)

{
  FUN_102bb9f90();
  func_0x000107c5def8();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bbb54c; end: 102bbb707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_102bbb54c(double param_1,double param_2,undefined8 param_3,double param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auVar6 [16];
  ulong uStack_60;
  undefined8 uStack_58;
  
  func_0x0001000d224c(&uStack_60);
  uVar5 = uStack_60;
  uVar2 = uStack_60;
  func_0x000107c614f0();
  FUN_102bb7300();
  func_0x000107c615e8();
  if ((uVar2 & 1) == 0) {
    func_0x0001000d224c(&uStack_60);
    FUN_102bb9f90();
    uVar2 = uVar5;
    func_0x000107c5def8();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    if (uVar2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar4 = uVar2;
      func_0x000107c5b9a4();
      func_0x000107c61180();
      if (uVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar4;
        func_0x000107c49804();
        func_0x000107c61170(uVar4);
      }
      func_0x000107c61170(uVar2);
    }
    uVar2 = uStack_60;
    func_0x000107c614f0(uStack_60);
    func_0x000102bb7244(uVar5,uVar2,uStack_58);
    func_0x000107c615e8(uStack_60);
    uVar3 = 0;
  }
  else {
    FUN_102bb9f90();
    uVar2 = uVar5;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    if (uVar2 != 0) {
      func_0x000107c61170(uVar2);
      lVar1 = _DAT_112efcd80;
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112efcd80);
      func_0x000107c61174(uVar3);
      func_0x000107c42820(param_5);
      func_0x000107c40738(uVar3);
      func_0x000107c61170(uVar3);
      func_0x000107c438d4(*(undefined8 *)(unaff_x20 + lVar1));
      if (param_2 < param_4) {
        func_0x000107c438d4(*(undefined8 *)(unaff_x20 + lVar1));
        uVar3 = 0;
        param_1 = param_4 - param_2;
        goto LAB_102bbb6ec;
      }
    }
    param_1 = 0.0;
    uVar3 = 1;
  }
LAB_102bbb6ec:
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 102bbb708; end: 102bbb8df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bbb708(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_90;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112efcd10);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  func_0x0001000d224c(&puStack_90);
  puVar3 = puStack_90;
  func_0x000107c614f0();
  FUN_102bb7300();
  func_0x000107c615e8();
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = puStack_90;
    FUN_102bb9f90();
    puVar4 = puVar3;
    func_0x000107c5def8();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar4 != (undefined *)0x0) {
      lVar5 = *(long *)(unaff_x20 + _DAT_112efcd00);
      if ((lVar5 != 0) && (*(long *)(unaff_x20 + _DAT_112efcd68) != 0)) {
        func_0x000107c61174();
        puVar3 = puVar4;
        uVar9 = uStack_88;
        FUN_102bc7c8c(puVar4);
        puVar6 = puVar4;
        func_0x000107c5b9a4();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
          bVar2 = true;
        }
        else {
          puVar7 = puVar6;
          func_0x000107c49804();
          func_0x000107c61170(puVar6);
          bVar2 = (int)puVar7 - 4U < 0xfffffffd;
        }
        func_0x0001041e00ec(puVar3,uVar9,bVar2);
        func_0x000107c61170(lVar5);
      }
      func_0x000107c61170(puVar4);
    }
  }
  puVar3 = &UNK_1105ab180;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  uStack_70 = 0x102bc7e98;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1105ab198;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c3d5a8(param_2);
  func_0x000107c60bd0(ppuVar8);
  return;
}



/* Entry: 102bbb8e0; end: 102bbbbb7;  */

/* WARNING: Possible PIC construction at 0x000102bbb964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bbb988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bbb9a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bbb968) */
/* WARNING: Removing unreachable block (ram,0x000102bbb98c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bbb8e0(long param_1,uint param_2)

{
  long unaff_x20;
  long lVar1;
  
  func_0x000102bbbac4();
  if (param_1 == 0) {
    return;
  }
  if (*(long *)(unaff_x20 + _DAT_112efcd00) != 0) {
    func_0x000107c61174();
    lVar1 = param_1;
    FUN_102bc7c8c(param_1);
    if ((param_2 & 0xff) == 1) {
      lVar1 = 0;
    }
    else {
      func_0x000107c5fdd0(lVar1);
    }
    func_0x000107c52e1c(param_1);
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


