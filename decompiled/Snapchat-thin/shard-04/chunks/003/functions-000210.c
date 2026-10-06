/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103312c04; end: 103312c0f; -[SCLensInfoCardsScopeGraphBridgeSaberEntryPoint setLensInfoCardsScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103312c04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f58c10;
  func_0x000107c61428(param_1 + _DAT_112f58c10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103312c10; end: 103312c6f;  */

void FUN_103312c10(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 103312c70; end: 103312e2b;  */

/* WARNING: Possible PIC construction at 0x000103312d88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103312dac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103312dbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103312e00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103312dc0) */
/* WARNING: Removing unreachable block (ram,0x000103312db0) */
/* WARNING: Removing unreachable block (ram,0x000103312d8c) */
/* WARNING: Removing unreachable block (ram,0x000103312e04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103312c70(void)

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
  func_0x000107c50f70();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c4b230();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_10331228c();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_103312504();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103312e2c);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112f58b28) = lVar5;
      *(long *)(lVar3 + _DAT_112f58b30) = unaff_x20;
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



/* Entry: 103312e2c; end: 103312e53; -[SCLensInfoCardsScopeGraphBridgeSaberEntryPoint begin] */

void FUN_103312e2c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103312c70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103312e54; end: 103312e97; -[SCLensInfoCardsScopeGraphBridgeSaberEntryPoint end] */

void FUN_103312e54(undefined8 param_1)

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



/* Entry: 103312e98; end: 10331309b;  */

void FUN_103312e98(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdf) || (param_3 != -0x7ffffffef0f89650)) {
      uVar2 = 0xd000000000000021;
      func_0x000107c605b8(0xd000000000000021,0x800000010f0769b0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0ec1570)) &&
           (func_0x000107c605b8(0xd00000000000002c,0x800000010f13ea90,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "LensInfoCardsScopeGraphBridge/SCLensInfoCardsScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x52,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10331309c);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55da0();
        goto LAB_103312f24;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58518();
  }
LAB_103312f24:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10331309c; end: 103313147; -[SCLensInfoCardsScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10331309c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103312e98(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103313148; end: 1033131bf; -[SCLensInfoCardsScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103313148(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f58c00,0);
  *(undefined8 *)(param_1 + _DAT_112f58c08) = 0;
  *(undefined8 *)(param_1 + _DAT_112f58c10) = 0;
  *(undefined8 *)(param_1 + _DAT_112f58c18) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033131c0; end: 1033131f3;  */

void FUN_1033131c0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033131f4; end: 10331324b; -[SCLensInfoCardsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103313220: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103313224) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033131f4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f58c00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f58c08));
  return;
}



/* Entry: 10331324c; end: 10331326b;  */

void FUN_10331324c(void)

{
  func_0x000107c61168(&PTR_PTR_1128cdd50);
  return;
}



/* Entry: 10331326c; end: 1033132b3; -[SCSCLensInfoCardsScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10331326c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f58c48;
  func_0x000107c61428(param_1 + _DAT_112f58c48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033132b4; end: 10331330b; -[SCSCLensInfoCardsScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033132b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f58c48;
  func_0x000107c61428(param_1 + _DAT_112f58c48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10331330c; end: 1033133e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10331330c(undefined8 param_1,long param_2)

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
    FUN_1033124e4();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f58b60) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033133e4);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f58b68);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f58c50);
    *(long **)(unaff_x20 + _DAT_112f58c50) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1033133e4; end: 10331340b; -[SCSCLensInfoCardsScopedServicesSaberEntryPoint begin] */

void FUN_1033133e4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10331330c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10331340c; end: 103313583;  */

/* WARNING: Possible PIC construction at 0x000103313474: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010331350c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103313478) */
/* WARNING: Removing unreachable block (ram,0x000103313510) */
/* WARNING: Removing unreachable block (ram,0x000103313528) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10331340c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f58c50);
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



/* Entry: 103313584; end: 10331358b;  */

void FUN_103313584(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10331358c; end: 1033135bf; -[SCSCLensInfoCardsScopedServicesSaberEntryPoint end] */

void FUN_10331358c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10331340c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1033135c0; end: 1033136df;  */

void FUN_1033135c0(long param_1,long param_2,long param_3)

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
                        "LensInfoCardsScopeGraphBridge/SCSCLensInfoCardsScopedServicesSaberEntryPoint.swift"
                        ,0x52,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1033136e0);
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



/* Entry: 1033136e0; end: 10331378b; -[SCSCLensInfoCardsScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1033136e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1033135c0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10331378c; end: 1033137eb; -[SCSCLensInfoCardsScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10331378c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f58c48,0);
  *(undefined8 *)(param_1 + _DAT_112f58c50) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033137ec; end: 10331381f;  */

void FUN_1033137ec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103313820; end: 103313857; -[SCSCLensInfoCardsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103313820(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f58c48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f58c50));
  return;
}



/* Entry: 103313858; end: 103313877;  */

void FUN_103313858(void)

{
  func_0x000107c61168(&PTR_PTR_1128cde20);
  return;
}



/* Entry: 103313878; end: 1033138d3; -[_TtC23LensInfoCardIntegration26InfoCardCompactTrayAdapter attachUI:] */

/* WARNING: Possible PIC construction at 0x0001033138bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033138c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103313878(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10333f1ac(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033138d4; end: 10331396b; -[_TtC23LensInfoCardIntegration26InfoCardCompactTrayAdapter detachUI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033138d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_11063d990;
    func_0x000107c613fc(&UNK_11063d990,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    pcVar2 = FUN_103313d38;
  }
  func_0x000107c61174(param_1);
  FUN_10333f560(pcVar2,puVar1);
  func_0x00010058d43c(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10331396c; end: 1033139cb; -[_TtC23LensInfoCardIntegration26InfoCardCompactTrayAdapter init] */

void FUN_10331396c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardIntegration.InfoCardCompactTrayAdapter",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103313998);
  (*pcVar1)();
}



/* Entry: 1033139cc; end: 1033139db; -[_TtC23LensInfoCardIntegration26InfoCardCompactTrayAdapter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033139cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f58c80));
  return;
}



/* Entry: 1033139dc; end: 103313a03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033139dc(void)

{
  FUN_10333f748();
  return;
}



/* Entry: 103313a04; end: 103313a23;  */

void FUN_103313a04(void)

{
  func_0x000107c61168(&PTR_PTR_1128cdee0);
  return;
}



/* Entry: 103313a24; end: 103313bbf;  */

void FUN_103313a24(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11063d958;
  if (lRam0000000112f58cb0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112f58cb0 = param_1;
  }
  return;
}



/* Entry: 103313bc0; end: 103313c67;  */

void FUN_103313bc0(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 4) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffffc;
      puVar6 = (undefined8 *)(param_2 + 0x30);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar7 = uVar4;
      do {
        uVar42 = puVar6[-1];
        uVar41 = puVar6[-2];
        uVar44 = puVar6[1];
        uVar43 = *puVar6;
        bVar8 = (byte)uVar41 | bVar8;
        bVar9 = (byte)((ulong)uVar41 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar41 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar41 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar41 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar41 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar41 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar41 >> 0x38) | bVar15;
        bVar16 = (byte)uVar42 | bVar16;
        bVar17 = (byte)((ulong)uVar42 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar42 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar42 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar42 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar42 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar42 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar42 >> 0x38) | bVar23;
        bVar24 = (byte)uVar43 | bVar24;
        bVar26 = (byte)((ulong)uVar43 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar43 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar43 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar43 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar43 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar43 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar43 >> 0x38) | bVar32;
        bVar33 = (byte)uVar44 | bVar33;
        bVar34 = (byte)((ulong)uVar44 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar44 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar44 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar44 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar44 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar44 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar44 >> 0x38) | bVar40;
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar24 = bVar24 | bVar8;
      bVar26 = bVar26 | bVar9;
      bVar27 = bVar27 | bVar10;
      bVar28 = bVar28 | bVar11;
      bVar29 = bVar29 | bVar12;
      bVar30 = bVar30 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      auVar25[1] = bVar26;
      auVar25[0] = bVar24;
      auVar25[2] = bVar27;
      auVar25[3] = bVar28;
      auVar25[4] = bVar29;
      auVar25[5] = bVar30;
      auVar25[6] = bVar31;
      auVar25[7] = bVar32;
      auVar25[8] = bVar33 | bVar16;
      auVar25[9] = bVar34 | bVar17;
      auVar25[10] = bVar35 | bVar18;
      auVar25[0xb] = bVar36 | bVar19;
      auVar25[0xc] = bVar37 | bVar20;
      auVar25[0xd] = bVar38 | bVar21;
      auVar25[0xe] = bVar39 | bVar22;
      auVar25[0xf] = bVar40 | bVar23;
      auVar1[1] = bVar26;
      auVar1[0] = bVar24;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33 | bVar16;
      auVar1[9] = bVar34 | bVar17;
      auVar1[10] = bVar35 | bVar18;
      auVar1[0xb] = bVar36 | bVar19;
      auVar1[0xc] = bVar37 | bVar20;
      auVar1[0xd] = bVar38 | bVar21;
      auVar1[0xe] = bVar39 | bVar22;
      auVar1[0xf] = bVar40 | bVar23;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar32 | auVar25[7],
                       CONCAT16(bVar31 | auVar25[6],
                                CONCAT15(bVar30 | auVar25[5],
                                         CONCAT14(bVar29 | auVar25[4],
                                                  CONCAT13(bVar28 | auVar25[3],
                                                           CONCAT12(bVar27 | auVar25[2],
                                                                    CONCAT11(bVar26 | auVar25[1],
                                                                             bVar24 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_103313c54;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_103313c54:
  func_0x000107c6142c();
  *param_1 = uVar7;
  return;
}



/* Entry: 103313c68; end: 103313caf;  */

void FUN_103313c68(void)

{
  FUN_103313cb0(0x112f58cb8,&UNK_10dbb0f18);
  return;
}



/* Entry: 103313cb0; end: 103313cef;  */

void FUN_103313cb0(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_103313a24(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 103313cf0; end: 103313d37;  */

void FUN_103313cf0(void)

{
  FUN_103313cb0(0x112f58cc8,&UNK_10dbb1008);
  return;
}



/* Entry: 103313d38; end: 103313d3f;  */

void FUN_103313d38(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100f4d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103313d40; end: 103313d83;  */

void FUN_103313d40(long param_1,long *param_2,long param_3)

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



/* Entry: 103313d84; end: 103313dcb;  */

bool FUN_103313d84(ulong *param_1)

{
  ulong *unaff_x20;
  
  return (*param_1 & (*unaff_x20 ^ 0xffffffffffffffff)) == 0;
}



/* Entry: 103313dcc; end: 103313e6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103313dcc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long alStack_40 [2];
  
  func_0x0001000d224c(alStack_40);
  lVar2 = alStack_40[0];
  func_0x000107c5cfa0();
  func_0x000107c61180();
  func_0x000107c615e8(alStack_40[0]);
  lVar1 = _DAT_112f58cf0;
  if (lVar2 != 0) {
    if ((*(byte *)(unaff_x20 + _DAT_112f58cf0) & 1) == 0) {
      func_0x000107c3e2c0(lVar2,param_2,param_1);
      func_0x000107c615e8(lVar2);
      *(undefined1 *)(unaff_x20 + lVar1) = 1;
    }
    else {
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 103313e6c; end: 103313ebb; -[_TtC23LensInfoCardIntegration29InfoCardMiniCameraTrayAdapter attachUI:] */

/* WARNING: Possible PIC construction at 0x000103313ea4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103313ea8) */

void FUN_103313e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103313dcc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103313ebc; end: 1033140bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103313ebc(code *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined **ppuVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  func_0x0001000d224c(&puStack_70);
  puVar3 = puStack_70;
  func_0x000107c5cfa0();
  func_0x000107c61180();
  func_0x000107c615e8(puStack_70);
  if (puVar3 != (undefined *)0x0) {
    if (*(char *)(unaff_x20 + _DAT_112f58cf0) == '\x01') {
      if (param_1 != (code *)0x0) {
        puVar4 = &UNK_11063db60;
        func_0x000107c613fc(&UNK_11063db60,0x20,7);
        *(code **)(puVar4 + 0x10) = param_1;
        *(undefined8 *)(puVar4 + 0x18) = param_2;
        lVar2 = _DAT_112f58ce8;
        func_0x000107c61428(unaff_x20 + _DAT_112f58ce8,&puStack_70,0x21,0);
        uVar8 = *(ulong *)(unaff_x20 + lVar2);
        func_0x000107c6157c(param_2);
        uVar5 = uVar8;
        func_0x000107c61558();
        *(ulong *)(unaff_x20 + lVar2) = uVar8;
        uVar7 = uVar8;
        if ((uVar5 & 1) == 0) {
          uVar7 = 0;
          func_0x0001016cbf48(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
          *(ulong *)(unaff_x20 + lVar2) = uVar7;
        }
        uVar5 = *(ulong *)(uVar7 + 0x10);
        uVar8 = uVar7;
        if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar5) {
          uVar8 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
          func_0x0001016cbf48(uVar8,uVar5 + 1,1,uVar7);
        }
        *(ulong *)(uVar8 + 0x10) = uVar5 + 1;
        lVar1 = uVar8 + uVar5 * 0x10;
        *(code **)(lVar1 + 0x20) = FUN_1033143d0;
        *(undefined **)(lVar1 + 0x28) = puVar4;
        *(ulong *)(unaff_x20 + lVar2) = uVar8;
        func_0x000107c614a8(&puStack_70);
      }
      puVar4 = &UNK_11063db10;
      func_0x000107c613fc(&UNK_11063db10,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      uStack_50 = 0x1033143ac;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000b0c7c;
      puStack_58 = &UNK_11063db28;
      puStack_48 = puVar4;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61574(puStack_48);
      func_0x000107c41864(puVar3);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c615e8(puVar3);
      return;
    }
    func_0x000107c615e8(puVar3);
  }
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 1033140bc; end: 10331410f;  */

void FUN_1033140bc(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_103314110();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103314110; end: 1033141e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103314110(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [24];
  
  *(undefined1 *)(unaff_x20 + _DAT_112f58cf0) = 0;
  lVar1 = _DAT_112f58ce8;
  func_0x000107c61428(unaff_x20 + _DAT_112f58ce8,auStack_68,1,0);
  lVar4 = *(long *)(unaff_x20 + lVar1);
  uVar5 = *(ulong *)(lVar4 + 0x10);
  func_0x000107c61434(lVar4);
  if (uVar5 != 0) {
    uVar6 = 0;
    puVar7 = (undefined8 *)(lVar4 + 0x28);
    do {
      if (*(ulong *)(lVar4 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1033141e4);
        (*pcVar2)();
      }
      uVar6 = uVar6 + 1;
      pcVar2 = (code *)puVar7[-1];
      uVar3 = *puVar7;
      func_0x000107c6157c(uVar3);
      (*pcVar2)();
      func_0x000107c61574(uVar3);
      puVar7 = puVar7 + 2;
    } while (uVar5 != uVar6);
  }
  func_0x000107c6142c(lVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(uVar3);
  return;
}



/* Entry: 1033141e4; end: 10331426f; -[_TtC23LensInfoCardIntegration29InfoCardMiniCameraTrayAdapter detachUI:] */

void FUN_1033141e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uVar2 = 0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_11063dae8;
    func_0x000107c613fc(&UNK_11063dae8,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    uVar2 = 0x1033143a4;
  }
  func_0x000107c61174(param_1);
  FUN_103313ebc(uVar2,puVar1);
  func_0x00010058d43c(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103314270; end: 1033142d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103314270(void)

{
  long lStack_30;
  long lStack_28;
  
  func_0x000104875e28(&lStack_30);
  if (lStack_30 != 0) {
    func_0x000107c615e8();
    func_0x0001000d224c(&lStack_30);
    func_0x000107c614f0(lStack_30);
    (**(code **)(lStack_28 + 0x10))();
    func_0x000107c615e8(lStack_30);
  }
  return;
}



/* Entry: 1033142d8; end: 103314337; -[_TtC23LensInfoCardIntegration29InfoCardMiniCameraTrayAdapter init] */

void FUN_1033142d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardIntegration.InfoCardMiniCameraTrayAdapter",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103314304);
  (*pcVar1)();
}



/* Entry: 103314338; end: 10331437f; -[_TtC23LensInfoCardIntegration29InfoCardMiniCameraTrayAdapter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103314338(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f58cd8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f58ce0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f58ce8));
  return;
}



/* Entry: 103314380; end: 10331439f;  */

void FUN_103314380(void)

{
  func_0x000107c61168(&PTR_PTR_1128cdfa0);
  return;
}



/* Entry: 1033143a0; end: 1033143cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033143a0(void)

{
  long lStack_30;
  long lStack_28;
  
  func_0x000104875e28(&lStack_30);
  if (lStack_30 != 0) {
    func_0x000107c615e8();
    func_0x0001000d224c(&lStack_30);
    func_0x000107c614f0(lStack_30);
    (**(code **)(lStack_28 + 0x10))();
    func_0x000107c615e8(lStack_30);
  }
  return;
}



/* Entry: 1033143d0; end: 1033143ef;  */

void FUN_1033143d0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1033143f0; end: 1033145c7;  */

undefined1 * FUN_1033143f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  long lStack_48;
  
  ppuVar4 = &puStack_70;
  ppuVar5 = &puStack_70;
  func_0x0001000d224c(&puStack_70);
  puVar1 = puStack_70;
  if (puStack_70 == (undefined *)0x0) {
    func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
    puStack_70 = (undefined *)((ulong)puStack_70 & 0xffffffffffffff00);
    func_0x000104888f7c(&puStack_70);
  }
  else {
    func_0x0001000285a8(0x112dc1148,&UNK_10d9bbf70);
    func_0x000107c613fc();
    lVar3 = 0;
    func_0x00010095c380();
    func_0x000107c5fadc(param_1,param_2);
    pcStack_50 = FUN_103314770;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100ab47f8;
    puStack_58 = &UNK_11063dbb0;
    lStack_48 = lVar3;
    func_0x000107c60bc4(&puStack_70);
    lVar2 = lStack_48;
    func_0x000107c6157c(lVar3);
    func_0x000107c61574(lVar2);
    func_0x000107c3f978(puVar1);
    func_0x000107c615e8(puVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_1);
    ppuVar5 = *(undefined ***)(lVar3 + 0x10);
    func_0x000107c6157c(ppuVar5);
    func_0x000107c61574(lVar3);
  }
  return (undefined1 *)ppuVar5;
}



/* Entry: 1033145c8; end: 10331460b;  */

void FUN_1033145c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10331460c; end: 1033146fb;  */

long FUN_10331460c(void)

{
  long lVar1;
  long lStack_28;
  
  func_0x0001000d224c(&lStack_28);
  if (lStack_28 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lStack_28;
    func_0x000107c44b38(lStack_28);
    func_0x000107c615e8(lStack_28);
  }
  return lVar1;
}



/* Entry: 1033146fc; end: 10331476f;  */

void FUN_1033146fc(undefined8 param_1,undefined8 param_2)

{
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c4ab58(lStack_38);
    func_0x000107c615e8(lStack_38);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103314770; end: 103314793;  */

void FUN_103314770(undefined1 param_1)

{
  undefined1 uStack_11;
  
  uStack_11 = param_1;
  func_0x000100b60084(&uStack_11);
  return;
}



/* Entry: 103314794; end: 1033147af;  */

void FUN_103314794(long param_1,long param_2)

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



/* Entry: 1033147b0; end: 1033148e3;  */

void FUN_1033147b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  ulong uStack_48;
  
  puVar1 = *(undefined **)(unaff_x20 + 0x20);
  if (puVar1 != (undefined *)0x0) {
    func_0x000107c61174();
    func_0x0001000d224c(&uStack_48);
    if (uStack_48 != 0) {
      uVar2 = uStack_48;
      func_0x000107c42b60();
      if ((uVar2 & 1) != 0) {
        func_0x000107c61170(puVar1);
        func_0x000107c615e8(uStack_48);
        return;
      }
      puVar3 = PTR_PTR_1126aead8;
      func_0x000107c610f8(PTR_PTR_1126aead8);
      func_0x000107c4807c();
      FUN_10331ec7c();
      puVar4 = PTR_PTR_1126b1b50;
      func_0x000107c61168(PTR_PTR_1126b1b50);
      func_0x000107c41638();
      func_0x000107c61180();
      puVar5 = PTR_PTR_1126b1b58;
      func_0x000107c610f8(PTR_PTR_1126b1b58);
      func_0x000107c48890();
      func_0x000107c61170(puVar4);
      func_0x000107c4ef58(uStack_48,param_2,puVar3,puVar5);
      func_0x000107c61170(puVar1);
      func_0x000107c615e8(uStack_48);
      func_0x000107c61170(puVar3);
      puVar1 = puVar5;
    }
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 1033148e4; end: 10331492f;  */

void FUN_1033148e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103314930; end: 10331494f;  */

void FUN_103314930(void)

{
  FUN_1033147b0();
  return;
}



/* Entry: 103314950; end: 103314a63;  */

void FUN_103314950(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_11063dc50;
  func_0x000107c613fc(&UNK_11063dc50,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  func_0x0001000285a8(0x112f58e78,&UNK_10dbb1198);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  pcVar2 = FUN_103314d78;
  func_0x0001000bdd8c(FUN_103314d78,puVar1);
  uVar3 = 0;
  func_0x00010036bf0c(0);
  func_0x000107c610f8();
  func_0x000104373bf8(pcVar2,uVar3);
  *param_1 = pcVar2;
  return;
}



/* Entry: 103314a64; end: 103314a87;  */

void FUN_103314a64(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar6 = &UNK_11063dc50;
  func_0x000107c613fc(&UNK_11063dc50,0x48,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar8;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar1;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  *(undefined8 *)(puVar6 + 0x40) = uVar9;
  func_0x0001000285a8(0x112f58e78,&UNK_10dbb1198);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar9);
  pcVar7 = FUN_103314d78;
  func_0x0001000bdd8c(FUN_103314d78,puVar6);
  uVar8 = 0;
  func_0x00010036bf0c(0);
  func_0x000107c610f8();
  func_0x000104373bf8(pcVar7,uVar8);
  *param_1 = pcVar7;
  return;
}



/* Entry: 103314a88; end: 103314d23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103314a88(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  ulong *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  uVar2 = uStack_68;
  uVar1 = 0x112e4cd20;
  func_0x0001000285a8(0x112e4cd20,&UNK_10da47070);
  func_0x000107c610f8();
  func_0x00010017da58(uVar2,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  func_0x000100083b20(&uStack_68);
  uVar2 = uStack_68;
  uVar1 = 0x112f58e80;
  func_0x0001000285a8(0x112f58e80,&UNK_10dbb11a8);
  func_0x000107c610f8();
  func_0x00010017da58(uVar2,uVar1);
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  func_0x000100083b20(&uStack_68);
  uVar1 = uStack_68;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  func_0x000100083b20(&uStack_70);
  uVar2 = uStack_70;
  func_0x000107c4b010();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000100083b20(&puStack_78);
  uVar5 = uStack_70;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puStack_78) + 0x58))();
  func_0x000107c61170(puStack_78);
  func_0x000100083b20(&uStack_80);
  uVar6 = uStack_80;
  func_0x000107c5d2b0();
  func_0x000107c61180();
  func_0x000107c61170(uStack_80);
  func_0x000100083b20(&lStack_88);
  uVar7 = *(undefined8 *)(lStack_88 + _DAT_112fee3c0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_88);
  func_0x000100083b20(&lStack_90);
  uVar8 = *(undefined8 *)(lStack_90 + _DAT_112fee3b8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_90);
  func_0x000100083b20(&lStack_98);
  uVar9 = *(undefined8 *)(lStack_98 + _DAT_112fee3c8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_98);
  lVar10 = 0;
  func_0x00010331a9bc();
  lVar11 = lVar10;
  func_0x000107c613fc();
  *(undefined8 *)(lVar11 + 0x10) = uVar1;
  *(undefined8 *)(lVar11 + 0x18) = uVar2;
  *(undefined8 *)(lVar11 + 0x20) = uVar5;
  *(undefined8 *)(lVar11 + 0x28) = uVar6;
  *(undefined8 *)(lVar11 + 0x30) = uVar8;
  *(undefined8 *)(lVar11 + 0x38) = uVar7;
  *(undefined8 *)(lVar11 + 0x40) = uVar9;
  *(undefined **)(lVar11 + 0x48) = puVar3;
  *(undefined **)(lVar11 + 0x50) = puVar4;
  param_1[3] = lVar10;
  param_1[4] = (long)&PTR_DAT_11063e148;
  *param_1 = lVar11;
  return;
}



/* Entry: 103314d24; end: 103314d77;  */

void FUN_103314d24(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103314d78; end: 103314d8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103314d78(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  ulong *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  uVar2 = uStack_68;
  uVar1 = 0x112e4cd20;
  func_0x0001000285a8(0x112e4cd20,&UNK_10da47070);
  func_0x000107c610f8();
  func_0x00010017da58(uVar2,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  func_0x000100083b20(&uStack_68);
  uVar2 = uStack_68;
  uVar1 = 0x112f58e80;
  func_0x0001000285a8(0x112f58e80,&UNK_10dbb11a8);
  func_0x000107c610f8();
  func_0x00010017da58(uVar2,uVar1);
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  func_0x000100083b20(&uStack_68);
  uVar1 = uStack_68;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  func_0x000100083b20(&uStack_70);
  uVar2 = uStack_70;
  func_0x000107c4b010();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000100083b20(&puStack_78);
  uVar5 = uStack_70;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puStack_78) + 0x58))();
  func_0x000107c61170(puStack_78);
  func_0x000100083b20(&uStack_80);
  uVar6 = uStack_80;
  func_0x000107c5d2b0();
  func_0x000107c61180();
  func_0x000107c61170(uStack_80);
  func_0x000100083b20(&lStack_88);
  uVar7 = *(undefined8 *)(lStack_88 + _DAT_112fee3c0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_88);
  func_0x000100083b20(&lStack_90);
  uVar8 = *(undefined8 *)(lStack_90 + _DAT_112fee3b8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_90);
  func_0x000100083b20(&lStack_98);
  uVar9 = *(undefined8 *)(lStack_98 + _DAT_112fee3c8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_98);
  lVar10 = 0;
  func_0x00010331a9bc();
  lVar11 = lVar10;
  func_0x000107c613fc();
  *(undefined8 *)(lVar11 + 0x10) = uVar1;
  *(undefined8 *)(lVar11 + 0x18) = uVar2;
  *(undefined8 *)(lVar11 + 0x20) = uVar5;
  *(undefined8 *)(lVar11 + 0x28) = uVar6;
  *(undefined8 *)(lVar11 + 0x30) = uVar8;
  *(undefined8 *)(lVar11 + 0x38) = uVar7;
  *(undefined8 *)(lVar11 + 0x40) = uVar9;
  *(undefined **)(lVar11 + 0x48) = puVar3;
  *(undefined **)(lVar11 + 0x50) = puVar4;
  param_1[3] = lVar10;
  param_1[4] = (long)&PTR_DAT_11063e148;
  *param_1 = lVar11;
  return;
}



/* Entry: 103314d8c; end: 1033159db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103314d8c(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7,long param_8,long param_9,long param_10,long param_11,long param_12,
                  long param_13,long param_14,long param_15,undefined8 param_16,undefined8 param_17)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  code *pcVar20;
  undefined1 *puVar21;
  long *plVar22;
  long *plVar23;
  long unaff_x20;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  undefined1 *puVar29;
  long lVar30;
  undefined8 uVar31;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  func_0x000107c613fc();
  *(long *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  lVar26 = _DAT_113071cb8;
  func_0x000107c61428(param_1 + _DAT_113071cb8,auStack_80,0,0);
  uVar27 = *(ulong *)(param_1 + lVar26);
  lVar2 = *(long *)(param_1 + _DAT_113071cd8);
  func_0x000107c4b4c0();
  func_0x000107c61180();
  lVar26 = lVar2;
  func_0x000107c4500c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  uVar28 = uVar27;
  if (lVar26 != 0) {
    lVar2 = lVar26;
    func_0x000107c4a20c();
    func_0x000107c615e8(lVar26);
    uVar28 = uVar27 | 0x20;
    if ((int)lVar2 == 0) {
      uVar28 = uVar27;
    }
  }
  puVar3 = PTR_PTR_1126b5f28;
  func_0x000107c610f8();
  func_0x000107c47454();
  lVar4 = 0;
  func_0x000103319308();
  lVar2 = lVar4;
  func_0x000107c613fc();
  *(undefined1 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  func_0x000107c61614(lVar2 + 0x20,0);
  *(undefined **)(lVar2 + 0x10) = puVar3;
  func_0x000107c61174();
  lVar5 = param_3;
  func_0x000107c45390();
  func_0x000107c61180();
  lVar6 = param_4;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  lVar7 = param_5;
  func_0x000107c4b1cc();
  func_0x000107c61180();
  lVar8 = *(long *)(param_6 + _DAT_113071308);
  lVar24 = *(long *)(param_6 + _DAT_1130712e8);
  func_0x000107c61174();
  func_0x000107c61174();
  lVar9 = param_7;
  func_0x000107c4c974();
  func_0x000107c61180();
  lVar10 = *(long *)(param_1 + _DAT_113071cd0);
  func_0x000107c4b01c();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_90 = FUN_1033159dc;
  uStack_88 = 0;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  pcStack_a0 = FUN_1033159e4;
  puStack_98 = &UNK_11063dc68;
  ppuVar11 = &puStack_b0;
  func_0x000107c60bc4(ppuVar11);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar11);
  lVar12 = param_8;
  func_0x000107c4b3b8();
  func_0x000107c61180();
  lVar13 = param_9;
  func_0x000107c4b144();
  func_0x000107c61180();
  lVar14 = param_10;
  func_0x000107c4b120();
  func_0x000107c61180();
  lVar15 = *(long *)(param_13 + _DAT_113083868);
  func_0x000107c61174();
  lVar16 = param_11;
  func_0x000107c41284();
  func_0x000107c61180();
  func_0x000107c6157c(lVar2);
  lVar17 = param_12;
  func_0x000107c4d80c();
  func_0x000107c61180();
  lVar18 = *(long *)(*(long *)(param_1 + _DAT_113071cc8) + _DAT_113071d50);
  lVar25 = *(long *)(param_1 + _DAT_113071ce0);
  func_0x000107c6157c();
  func_0x000107c5b734();
  func_0x000107c61180();
  lVar19 = param_14;
  func_0x000107c4af30();
  func_0x000107c61180();
  lVar26 = _DAT_1130813f0;
  lVar30 = *(long *)(param_2 + _DAT_113091b70);
  uVar31 = *(undefined8 *)(param_15 + _DAT_1130813f0);
  func_0x000107c615f0(lVar30);
  func_0x000107c6157c(uVar31);
  pcVar20 = FUN_103315a38;
  func_0x0001000cb480(FUN_103315a38,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar31);
  puVar29 = *(undefined1 **)(param_15 + lVar26);
  puVar21 = puVar29;
  func_0x000107c6157c();
  func_0x00010332aea0();
  uVar1 = *puVar21;
  plVar22 = (long *)0x0;
  func_0x00010331d4fc();
  func_0x000107c613fc();
  plVar22[0x23] = 0;
  plVar22[0x22] = 0;
  plVar22[0x25] = 0;
  plVar22[0x24] = 0;
  plVar22[2] = param_1;
  plVar22[3] = uVar28;
  plVar22[4] = lVar5;
  plVar22[5] = lVar6;
  plVar22[6] = lVar7;
  plVar22[7] = lVar8;
  plVar22[8] = lVar24;
  plVar22[9] = lVar9;
  plVar22[10] = lVar10;
  plVar22[0xb] = (long)puVar3;
  plVar22[0xc] = 0;
  plVar22[0xd] = lVar12;
  plVar22[0xe] = lVar13;
  plVar22[0xf] = lVar14;
  plVar22[0x10] = lVar15;
  plVar22[0x11] = lVar16;
  plVar22[0x12] = lVar2;
  plVar22[0x15] = lVar4;
  plVar22[0x16] = (long)&PTR_DAT_11063de30;
  plVar22[0x17] = lVar17;
  plVar22[0x18] = lVar18;
  plVar22[0x19] = lVar25;
  plVar22[0x1a] = lVar19;
  *(bool *)(plVar22 + 0x1e) = (uVar28 & 0x2000) == 0;
  plVar22[0x1c] = 0;
  plVar22[0x1d] = 0;
  plVar22[0x1b] = lVar30;
  plVar22[0x1f] = (long)pcVar20;
  plVar22[0x20] = (long)puVar29;
  *(undefined1 *)(plVar22 + 0x21) = uVar1;
  *(undefined ***)(lVar2 + 0x28) = &PTR_DAT_11063e288;
  func_0x000107c61604(lVar2 + 0x20,plVar22);
  *(long *)(unaff_x20 + 0x10) = (long)plVar22;
  if (plVar22[0x25] == 0) {
    plVar23 = plVar22;
    func_0x000107c6157c();
    FUN_10331be2c();
    if (plVar23 != (long *)0x0) {
      lVar26 = plVar22[0x25];
      plVar22[0x25] = (long)plVar23;
      func_0x000107c6157c();
      func_0x000107c61574(lVar26);
      (**(code **)(*plVar23 + 0x170))();
      func_0x000107c61574(plVar23);
    }
    func_0x000107c61170(param_17);
    func_0x000107c61170(param_16);
    func_0x000107c61170(param_1);
    func_0x000107c61574(lVar2);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_15);
    func_0x000107c61574(plVar22);
  }
  else {
    func_0x000107c61170(param_17);
    func_0x000107c61170(param_16);
    func_0x000107c61170(param_1);
    func_0x000107c61574(lVar2);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_15);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_14);
  return unaff_x20;
}



/* Entry: 1033159dc; end: 1033159e3;  */

undefined8 FUN_1033159dc(void)

{
  return 0;
}



/* Entry: 1033159e4; end: 103315a1b;  */

void FUN_1033159e4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103315a1c; end: 103315a37;  */

void FUN_103315a1c(long param_1,long param_2)

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



/* Entry: 103315a38; end: 103315a83;  */

void FUN_103315a38(byte *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar2);
  (**(code **)(lVar1 + 0xe8))(uVar2,lVar1);
  *param_1 = (byte)uVar2 & 1;
  return;
}



/* Entry: 103315a84; end: 103315b9b;  */

undefined * FUN_103315a84(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168();
    func_0x000107c6157c(lVar2);
    func_0x000107c3e26c();
    func_0x000107c61180();
    puVar4 = &UNK_11063dcc8;
    func_0x000107c613fc(&UNK_11063dcc8,0x18,7);
    *(undefined **)(puVar4 + 0x10) = puVar1;
    plVar3 = *(long **)(lVar2 + 0x128);
    if (plVar3 == (long *)0x0) {
      func_0x000107c61174(puVar1);
      func_0x000107c4358c();
    }
    else {
      pcVar6 = *(code **)(*plVar3 + 0x178);
      func_0x000107c61174(puVar1);
      func_0x000107c6157c(plVar3);
      (*pcVar6)(FUN_103315bec,puVar4);
      func_0x000107c61574(plVar3);
    }
    func_0x000107c61574(puVar4);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined **)(unaff_x20 + 0x18) = puVar1;
    func_0x000107c61174(puVar1);
    func_0x000107c61170(uVar5);
    puVar4 = puVar1;
    func_0x000107c4f3ec(puVar1);
    func_0x000107c61180();
    func_0x000107c61574(lVar2);
    func_0x000107c61170(puVar1);
  }
  return puVar4;
}



/* Entry: 103315b9c; end: 103315bc7;  */

void FUN_103315b9c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103315bc8; end: 103315bcb;  */

void FUN_103315bc8(void)

{
  return;
}



/* Entry: 103315bcc; end: 103315beb;  */

void FUN_103315bcc(void)

{
  FUN_103315a84();
  return;
}



/* Entry: 103315bec; end: 103315bf3;  */

void FUN_103315bec(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103315bf4; end: 103315c13;  */

void FUN_103315bf4(void)

{
  func_0x000107c61168(&PTR_PTR_112f58ec8);
  return;
}



/* Entry: 103315c14; end: 103315c1b;  */

void FUN_103315c14(long param_1,long param_2)

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



/* Entry: 103315c1c; end: 10331715b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103315c1c(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7,long param_8,long param_9,long param_10,long param_11,long param_12,
                  long param_13,long param_14,long param_15,long param_16,long param_17,
                  long param_18,long param_19,long param_20,long param_21,long param_22,
                  long param_23,long param_24,undefined8 param_25,undefined8 param_26)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  long *plVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  long lVar28;
  long unaff_x20;
  code *pcVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  byte bStack_1dc;
  long lStack_178;
  long lStack_e0;
  undefined1 auStack_d8 [24];
  ulong uStack_c0;
  long lStack_b8;
  long alStack_b0 [4];
  undefined **ppuStack_90;
  undefined1 auStack_80 [32];
  
  func_0x000107c613fc();
  *(long *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  lVar1 = _DAT_113071ea8;
  func_0x000107c61428(param_1 + _DAT_113071ea8,auStack_80,0,0);
  uVar31 = *(ulong *)(param_1 + lVar1);
  lVar1 = param_17;
  func_0x000107c4b4c0();
  func_0x000107c61180();
  lVar33 = lVar1;
  func_0x000107c4500c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  uVar32 = uVar31;
  if (lVar33 != 0) {
    lVar1 = lVar33;
    func_0x000107c4a20c();
    func_0x000107c615e8(lVar33);
    uVar32 = uVar31 | 0x20;
    if ((int)lVar1 == 0) {
      uVar32 = uVar31;
    }
  }
  lVar1 = param_12;
  func_0x000107c4af30();
  func_0x000107c61180();
  lVar33 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar33 != 0) {
    lVar1 = lVar33;
    func_0x000107c4b41c();
    func_0x000107c615e8(lVar33);
    if ((lVar1 == 0x2d) || (lVar1 == 0x11)) {
      uVar32 = uVar32 | 0x40;
    }
  }
  lVar1 = *(long *)(param_3 + _DAT_1130353e0);
  func_0x000107c4af9c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar33 = 0;
  }
  else {
    lVar33 = lVar1;
    func_0x000107c4ac54();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  lVar2 = param_10;
  func_0x000107c4aeb0();
  func_0x000107c61180();
  lVar1 = _DAT_1130813f0;
  func_0x0001000d224c(alStack_b0);
  func_0x0001000a8868(alStack_b0,alStack_b0[3]);
  uVar31 = alStack_b0[3];
  (**(code **)((long)ppuStack_90 + 0xf0))(alStack_b0[3],ppuStack_90);
  func_0x0001000834e4(alStack_b0);
  if ((uVar31 & 1) != 0) {
    func_0x0001000285a8(0x112f421d8,&UNK_10db8f108);
    uVar6 = param_25;
    func_0x000107c4b2f8();
    func_0x000107c61180();
    uVar3 = uVar6;
    func_0x0001000bda74();
    func_0x000107c61170(uVar6);
    func_0x0001000285a8(0x112d5d810,&UNK_10d923f50);
    lVar9 = lVar2;
    func_0x000107c4aeb4();
    func_0x000107c61180();
    lVar7 = lVar9;
    func_0x0001000bda74();
    func_0x000107c61170(lVar9);
    puVar4 = &UNK_11063dd10;
    func_0x000107c613fc(&UNK_11063dd10,0x18,7);
    *(long *)(puVar4 + 0x10) = param_22;
    func_0x0001000285a8(0x112f58f38,&UNK_10dbb11f8);
    func_0x000107c613fc();
    func_0x000107c61174(param_22);
    pcVar29 = FUN_103317428;
    func_0x0001000bdd8c(FUN_103317428,puVar4);
    lVar5 = 0;
    func_0x0001033188a0();
    lVar9 = lVar5;
    func_0x000107c613fc();
    uVar6 = 0;
    func_0x0001000c6560();
    func_0x000107c613fc();
    func_0x0001000c6580();
    *(undefined8 *)(lVar9 + 0x30) = 0;
    *(undefined8 *)(lVar9 + 0x38) = 0;
    puVar4 = PTR___swiftEmptySetSingleton_11034f1d8;
    *(undefined8 *)(lVar9 + 0x40) = 0;
    *(undefined **)(lVar9 + 0x48) = puVar4;
    *(undefined8 *)(lVar9 + 0x10) = uVar3;
    *(long *)(lVar9 + 0x18) = lVar7;
    *(code **)(lVar9 + 0x20) = pcVar29;
    *(undefined8 *)(lVar9 + 0x28) = uVar6;
    ppuStack_90 = &PTR_DAT_11063ddf0;
    alStack_b0[3] = lVar5;
    func_0x000107c61170(lVar2);
    alStack_b0[0] = lVar9;
    goto LAB_103316034;
  }
  if (lVar33 == 0) {
LAB_103315fc8:
    func_0x000107c61170(lVar2);
    ppuStack_90 = (undefined **)0x0;
    alStack_b0[1] = 0;
    alStack_b0[0] = 0;
    alStack_b0[3] = 0;
    alStack_b0[2] = 0;
  }
  else {
    lVar9 = lVar33;
    func_0x000107c61174();
    lVar7 = lVar9;
    func_0x000107c4500c();
    func_0x000107c61180();
    if (lVar7 != 0) {
      lVar5 = lVar7;
      func_0x000107c3d0c8();
      func_0x000107c615e8(lVar7);
      if ((int)lVar5 != 0) {
        func_0x000107c61170(lVar9);
        goto LAB_103315fc8;
      }
    }
    lVar7 = lVar2;
    func_0x000107c4aeb4();
    func_0x000107c61180();
    lVar8 = 0;
    func_0x000103317948();
    lVar5 = lVar8;
    func_0x000107c613fc();
    *(long *)(lVar5 + 0x10) = lVar9;
    *(undefined8 *)(lVar5 + 0x18) = 0;
    *(long *)(lVar5 + 0x20) = lVar7;
    *(undefined1 *)(lVar5 + 0x28) = 0;
    ppuStack_90 = &PTR_DAT_11063ddb0;
    alStack_b0[3] = lVar8;
    func_0x000107c61170(lVar2);
    alStack_b0[0] = lVar5;
  }
LAB_103316034:
  func_0x0001000d224c(auStack_d8);
  func_0x0001000a8868(auStack_d8,uStack_c0);
  uVar31 = uStack_c0;
  (**(code **)(lStack_b8 + 0xf0))(uStack_c0,lStack_b8);
  func_0x0001000834e4(auStack_d8);
  if ((uVar31 & 1) == 0) {
    lStack_178 = 0;
  }
  else {
    lStack_178 = *(long *)(param_24 + _DAT_112fe95f8);
    func_0x000107c6157c();
  }
  lVar2 = _DAT_113071eb0;
  puVar26 = auStack_d8;
  func_0x000107c61428(param_1 + _DAT_113071eb0,puVar26,0,0);
  lVar9 = *(long *)(param_1 + lVar2);
  func_0x000107c4b1dc();
  func_0x000107c61180();
  lVar2 = lVar9;
  func_0x000107c5faec();
  puVar27 = puVar26;
  func_0x000107c61170(lVar9);
  func_0x0001000d224c(&lStack_e0);
  lVar9 = lStack_e0;
  func_0x000107c4518c();
  func_0x000107c61180();
  func_0x000107c615e8(lStack_e0);
  if (lVar9 == 0) {
    func_0x000107c6142c(puVar26);
    bStack_1dc = 1;
  }
  else {
    lVar7 = lVar9;
    func_0x000107c5faec();
    func_0x000107c61170(lVar9);
    if ((lVar2 == lVar7) && (puVar26 == puVar27)) {
      func_0x000107c6142c(puVar26);
      func_0x000107c6142c(puVar27);
      bStack_1dc = 0;
    }
    else {
      func_0x000107c605b8(lVar2,puVar26,lVar7,puVar27,0);
      func_0x000107c6142c(puVar26);
      func_0x000107c6142c(puVar27);
      bStack_1dc = (byte)lVar2 ^ 1;
    }
  }
  func_0x000107c61174();
  lVar5 = param_4;
  func_0x000107c45390();
  func_0x000107c61180();
  lVar8 = param_5;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  lVar10 = param_6;
  func_0x000107c4b1cc();
  func_0x000107c61180();
  lVar11 = *(long *)(param_7 + _DAT_113071308);
  lVar28 = *(long *)(param_7 + _DAT_1130712e8);
  func_0x000107c61174();
  func_0x000107c61174();
  lVar12 = param_8;
  func_0x000107c4c974();
  func_0x000107c61180();
  lVar13 = param_9;
  func_0x000107c4b01c();
  func_0x000107c61180();
  lVar2 = param_10;
  func_0x000107c4aeb0();
  func_0x000107c61180();
  lVar14 = lVar2;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar15 = *(long *)(*(long *)(param_11 + _DAT_1130827c8) + _DAT_113082768);
  func_0x000107c6157c();
  lVar16 = param_13;
  func_0x000107c4b3b8();
  func_0x000107c61180();
  lVar17 = param_14;
  func_0x000107c4b144();
  func_0x000107c61180();
  lVar18 = param_15;
  func_0x000107c4b120();
  func_0x000107c61180();
  lVar19 = *(long *)(param_21 + _DAT_113083868);
  func_0x000107c61174();
  lVar20 = param_16;
  func_0x000107c41284();
  func_0x000107c61180();
  lVar21 = param_18;
  func_0x000107c4d80c();
  func_0x000107c61180();
  lVar34 = *(long *)(param_19 + _DAT_113071d50);
  func_0x000107c6157c(lVar34);
  lVar22 = param_20;
  func_0x000107c5b734();
  func_0x000107c61180();
  lVar23 = param_12;
  func_0x000107c4af30();
  func_0x000107c61180();
  lVar30 = *(long *)(param_2 + _DAT_113091b70);
  lVar2 = param_22 + _DAT_112f5cd48;
  lVar9 = *(long *)(lVar2 + 0x18);
  lVar7 = *(long *)(lVar2 + 0x20);
  func_0x0001000a8868(lVar2,lVar9);
  pcVar29 = *(code **)(lVar7 + 0x10);
  func_0x000107c615f0(lVar30);
  (*pcVar29)(lVar9,lVar7);
  uVar6 = *(undefined8 *)(param_23 + lVar1);
  func_0x000107c6157c(lStack_178);
  func_0x000107c6157c(uVar6);
  pcVar29 = FUN_10331715c;
  func_0x0001000cb480(FUN_10331715c,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar6);
  lVar1 = *(long *)(param_23 + lVar1);
  plVar24 = (long *)0x0;
  func_0x00010331d4fc();
  func_0x000107c613fc();
  plVar24[0x23] = 0;
  plVar24[0x22] = 0;
  plVar24[0x25] = 0;
  plVar24[0x24] = 0;
  plVar24[2] = param_1;
  plVar24[3] = uVar32;
  plVar24[4] = lVar5;
  plVar24[5] = lVar8;
  plVar24[6] = lVar10;
  plVar24[7] = lVar11;
  plVar24[8] = lVar28;
  plVar24[9] = lVar12;
  plVar24[10] = lVar13;
  plVar24[0xb] = lVar14;
  plVar24[0xc] = lVar15;
  plVar24[0xd] = lVar16;
  plVar24[0xe] = lVar17;
  plVar24[0xf] = lVar18;
  plVar24[0x10] = lVar19;
  plVar24[0x11] = lVar20;
  FUN_1033171a8(alStack_b0,plVar24 + 0x12);
  plVar24[0x17] = lVar21;
  plVar24[0x18] = lVar34;
  plVar24[0x19] = lVar22;
  plVar24[0x1a] = lVar23;
  *(undefined1 *)(plVar24 + 0x1e) = 0;
  plVar24[0x1b] = lVar30;
  plVar24[0x1c] = lVar9;
  plVar24[0x1d] = lStack_178;
  plVar24[0x1f] = (long)pcVar29;
  plVar24[0x20] = lVar1;
  *(byte *)(plVar24 + 0x21) = bStack_1dc & 1;
  *(long *)(unaff_x20 + 0x10) = (long)plVar24;
  func_0x000107c6157c(lVar1);
  plVar25 = plVar24;
  func_0x000107c6157c();
  FUN_10331be2c();
  if (plVar25 != (long *)0x0) {
    lVar1 = plVar24[0x25];
    plVar24[0x25] = (long)plVar25;
    func_0x000107c6157c();
    func_0x000107c61574(lVar1);
    (**(code **)(*plVar25 + 0x170))();
    func_0x000107c61574(plVar25);
  }
  func_0x000107c61170(param_1);
  func_0x000107c61574(lStack_178);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_2);
  func_0x000107c61574(plVar24);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_25);
  func_0x000107c61170(lVar33);
  func_0x0001033173e0(alStack_b0);
  return unaff_x20;
}



/* Entry: 10331715c; end: 1033171a7;  */

void FUN_10331715c(byte *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar2);
  (**(code **)(lVar1 + 0xe8))(uVar2,lVar1);
  *param_1 = (byte)uVar2 & 1;
  return;
}



/* Entry: 1033171a8; end: 1033171f7;  */

undefined8 FUN_1033171a8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f58f30;
  func_0x0001000285a8(0x112f58f30,&UNK_10dbb11f0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1033171f8; end: 10331730f;  */

undefined * FUN_1033171f8(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168();
    func_0x000107c6157c(lVar2);
    func_0x000107c3e26c();
    func_0x000107c61180();
    puVar4 = &UNK_11063dd60;
    func_0x000107c613fc(&UNK_11063dd60,0x18,7);
    *(undefined **)(puVar4 + 0x10) = puVar1;
    plVar3 = *(long **)(lVar2 + 0x128);
    if (plVar3 == (long *)0x0) {
      func_0x000107c61174(puVar1);
      func_0x000107c4358c();
    }
    else {
      pcVar6 = *(code **)(*plVar3 + 0x178);
      func_0x000107c61174(puVar1);
      func_0x000107c6157c(plVar3);
      (*pcVar6)(0x103317430,puVar4);
      func_0x000107c61574(plVar3);
    }
    func_0x000107c61574(puVar4);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined **)(unaff_x20 + 0x18) = puVar1;
    func_0x000107c61174(puVar1);
    func_0x000107c61170(uVar5);
    puVar4 = puVar1;
    func_0x000107c4f3ec(puVar1);
    func_0x000107c61180();
    func_0x000107c61574(lVar2);
    func_0x000107c61170(puVar1);
  }
  return puVar4;
}



/* Entry: 103317310; end: 10331738f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103317310(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  param_2 = param_2 + _DAT_112f5cd48;
  lVar1 = *(long *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,lVar1);
  (**(code **)(lVar2 + 0x10))(lVar1,lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 103317390; end: 1033173bb;  */

void FUN_103317390(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033173bc; end: 1033173bf;  */

void FUN_1033173bc(void)

{
  return;
}



/* Entry: 1033173c0; end: 103317427;  */

void FUN_1033173c0(void)

{
  FUN_1033171f8();
  return;
}



/* Entry: 103317428; end: 103317437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103317428(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10) + _DAT_112f5cd48;
  lVar2 = *(long *)(lVar3 + 0x18);
  lVar1 = *(long *)(lVar3 + 0x20);
  func_0x0001000a8868(lVar3,lVar2);
  (**(code **)(lVar1 + 0x10))(lVar2,lVar1);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
  }
  *param_1 = lVar3;
  return;
}



/* Entry: 103317438; end: 103317457;  */

void FUN_103317438(void)

{
  func_0x000107c61168(&PTR_PTR_112f58f80);
  return;
}



/* Entry: 103317458; end: 10331745b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103317458(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10) + _DAT_112f5cd48;
  lVar2 = *(long *)(lVar3 + 0x18);
  lVar1 = *(long *)(lVar3 + 0x20);
  func_0x0001000a8868(lVar3,lVar2);
  (**(code **)(lVar1 + 0x10))(lVar2,lVar1);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
  }
  *param_1 = lVar3;
  return;
}



/* Entry: 10331745c; end: 1033175c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10331745c(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c613fc();
  lVar2 = _DAT_113071eb8;
  func_0x000107c61428(param_1 + _DAT_113071eb8,auStack_48,0,0);
  lVar2 = param_1 + lVar2;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126ad0a8;
    func_0x000107c610f8();
    func_0x000107c471d0();
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar2);
    *(undefined **)(unaff_x20 + 0x10) = puVar3;
    return unaff_x20;
  }
  func_0x0001048d9980(0xd00000000000005f,0x800000010f13ec00);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10331751c);
  (*pcVar1)();
}



/* Entry: 1033175c8; end: 1033175d7;  */

void FUN_1033175c8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1033175d8; end: 1033175fb;  */

void FUN_1033175d8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033175fc; end: 103317607;  */

void FUN_1033175fc(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103317608; end: 103317683;  */

void FUN_103317608(undefined8 param_1)

{
  if (lRam0000000112f59010 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e75a774);
  return;
}



/* Entry: 103317684; end: 1033178bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103317684(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  plVar10 = &lStack_80;
  if (*(long *)(unaff_x20 + 0x18) == 0) {
    uVar4 = *(ulong *)(unaff_x20 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar4 != 0) {
      uVar5 = uVar4;
      func_0x000107c3d0c8();
      if ((uVar5 & 1) != 0) {
        func_0x0001000285a8(0x112f591c8,&UNK_10dbb1328);
        uStack_70 = 0;
        uStack_68 = 3;
        func_0x000100854cb0(&uStack_70);
        func_0x000107c615e8(uVar4);
        return;
      }
      puVar6 = &UNK_11063ddd0;
      func_0x000107c613fc(&UNK_11063ddd0,0x18,7);
      func_0x000107c61644(puVar6 + 0x10);
      lVar7 = 0;
      FUN_103317d6c();
      lVar8 = lVar7;
      func_0x000107c610f8();
      lVar3 = _DAT_112f59190;
      func_0x0001000285a8(0x112f591d0,&UNK_10dbb1330);
      func_0x000107c613fc();
      func_0x000107c6157c(puVar6);
      uVar9 = 1;
      func_0x00010008747c();
      *(undefined8 *)(lVar8 + lVar3) = uVar9;
      *(undefined8 *)(lVar8 + _DAT_112f59198) = 0;
      *(undefined8 *)(lVar8 + _DAT_112f59170) = param_1;
      *(undefined8 *)(lVar8 + _DAT_112f59178) = param_2;
      *(undefined1 *)(lVar8 + _DAT_112f59180) = 1;
      puVar1 = (undefined8 *)(lVar8 + _DAT_112f59188);
      *puVar1 = FUN_103317d8c;
      puVar1[1] = puVar6;
      puVar2 = PTR_s_init_1125d9248;
      lStack_80 = lVar8;
      lStack_78 = lVar7;
      func_0x000107c6157c(param_1);
      func_0x000107c61174(param_2);
      func_0x000107c61154(&lStack_80,puVar2);
      func_0x000107c61574(puVar6);
      uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
      *(long **)(unaff_x20 + 0x18) = plVar10;
      func_0x000107c61174();
      func_0x000107c61170(uVar9);
      func_0x000107c3d044(uVar4);
      func_0x000107c615e8(uVar4);
      func_0x000107c6157c(*(undefined8 *)((long)plVar10 + _DAT_112f59190));
      func_0x000107c61170(plVar10);
      return;
    }
  }
  func_0x0001000285a8(0x112f591c8,&UNK_10dbb1328);
  uStack_70 = 0;
  uStack_68 = 3;
  func_0x000100854cb0(&uStack_70);
  return;
}



/* Entry: 1033178bc; end: 103317913;  */

void FUN_1033178bc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    func_0x000107c61574();
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 103317914; end: 103317967;  */

void FUN_103317914(void)

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



/* Entry: 103317968; end: 103317987;  */

void FUN_103317968(void)

{
  FUN_103317684();
  return;
}



/* Entry: 103317988; end: 103317a6f;  */

/* WARNING: Removing unreachable block (ram,0x000103317a50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103317988(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f59198;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112f59198);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    func_0x000103f57290();
    func_0x000103f56e98();
    puVar3 = PTR_PTR_1133c9360;
    func_0x000107c5faec();
    func_0x000103f56ecc();
    func_0x000107c6142c(param_2);
    func_0x000107c61170();
    func_0x000100802a4c();
    func_0x000107c61170(puVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 103317a70; end: 103317b5f; -[_TtC23LensInfoCardIntegrationP33_EC4DAA9B3341C7D3BCBD5D1132F42B9221LensCollectionManager collectionsCarouselLenses] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103317a70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = 0x112d657e8;
  func_0x0001000285a8(0x112d657e8,&UNK_10d92a540);
  uVar2 = 0x103317aec;
  func_0x0001000bfde0(0x103317aec,0,uVar1);
  uVar1 = uVar2;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103317b60; end: 103317b93; -[_TtC23LensInfoCardIntegrationP33_EC4DAA9B3341C7D3BCBD5D1132F42B9221LensCollectionManager lensDataProviderConfiguration] */

void FUN_103317b60(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103317988();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103317b94; end: 103317bb7; -[_TtC23LensInfoCardIntegrationP33_EC4DAA9B3341C7D3BCBD5D1132F42B9221LensCollectionManager lensCameraUpdatingStrategy] */

void FUN_103317b94(void)

{
  func_0x000107c610f8(PTR_PTR_1126c89f0);
  func_0x000107c47400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


