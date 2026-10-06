/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100a4314c; end: 100a432e3;  */

void FUN_100a4314c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e14f20)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f1eb0e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SemcSystemScopeGraphBridge/SCSemcSystemScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x4c,2,0x2d,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a432e4);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58e7c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a432e4; end: 100a4333b; -[SCSemcSystemScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a432e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305bf60;
  func_0x000107c61428(param_1 + _DAT_11305bf60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a4333c; end: 100a4339f; -[SCSemcSystemScopeGraphBridgeSaberEntryPoint setSemcSystemScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a4333c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305bf68;
  func_0x000107c61428(param_1 + _DAT_11305bf68,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a433a0; end: 100a433c7; -[SCSemcSystemScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a433a0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a433c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a433c8; end: 100a434fb;  */

/* WARNING: Possible PIC construction at 0x000100a43480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a4349c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a434b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a43484) */
/* WARNING: Removing unreachable block (ram,0x000100a434a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a433c8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c51d78();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100a4358c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100a435ac();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a434fc);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_11305bc40) = lVar5;
    *(long *)(lVar4 + _DAT_11305bc48) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a434fc; end: 100a43543; -[SCSemcSystemScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a434fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305bf60;
  func_0x000107c61428(param_1 + _DAT_11305bf60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a43544; end: 100a4358b; -[SCSemcSystemScopeGraphBridgeSaberEntryPoint semcSystemScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a43544(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305bf68;
  func_0x000107c61428(param_1 + _DAT_11305bf68,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a4358c; end: 100a435ab;  */

void FUN_100a4358c(void)

{
  func_0x000107c61168(&PTR_PTR_11298a610);
  return;
}



/* Entry: 100a435ac; end: 100a4367b;  */

undefined8 FUN_100a435ac(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x11305bee8,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    FUN_10006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_10009c854();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a4367c; end: 100a436e7; -[SCShuSystemScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a4367c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11305c610,0);
  *(undefined8 *)(param_1 + _DAT_11305c618) = 0;
  *(undefined8 *)(param_1 + _DAT_11305c620) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a436e8; end: 100a43793; -[SCShuSystemScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a436e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a43794(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a43794; end: 100a4392b;  */

void FUN_100a43794(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0e14b40)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000028,0x800000010f1eb4c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ShuSystemScopeGraphBridge/SCShuSystemScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x4a,2,0x2e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a4392c);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59294();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a4392c; end: 100a43983; -[SCShuSystemScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a4392c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305c610;
  func_0x000107c61428(param_1 + _DAT_11305c610,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a43984; end: 100a439e7; -[SCShuSystemScopeGraphBridgeSaberEntryPoint setShuSystemScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a43984(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305c618;
  func_0x000107c61428(param_1 + _DAT_11305c618,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a439e8; end: 100a43a0f; -[SCShuSystemScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a439e8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a43a10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a43a10; end: 100a43b43;  */

/* WARNING: Possible PIC construction at 0x000100a43ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a43ae4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a43b00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a43acc) */
/* WARNING: Removing unreachable block (ram,0x000100a43ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a43a10(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c5af38();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100a43bd4();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100a43bf4();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a43b44);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_11305c218) = lVar5;
    *(long *)(lVar4 + _DAT_11305c220) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a43b44; end: 100a43b8b; -[SCShuSystemScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a43b44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305c610;
  func_0x000107c61428(param_1 + _DAT_11305c610,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a43b8c; end: 100a43bd3; -[SCShuSystemScopeGraphBridgeSaberEntryPoint shuSystemScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a43b8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305c618;
  func_0x000107c61428(param_1 + _DAT_11305c618,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a43bd4; end: 100a43bf3;  */

void FUN_100a43bd4(void)

{
  func_0x000107c61168(&PTR_PTR_11298aa08);
  return;
}



/* Entry: 100a43bf4; end: 100a43cc3;  */

undefined8 FUN_100a43bf4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x11305c590,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    FUN_10006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_10009a234();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a43cc4; end: 100a43d2f; -[SCStartSystemScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a43cc4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11305cb30,0);
  *(undefined8 *)(param_1 + _DAT_11305cb38) = 0;
  *(undefined8 *)(param_1 + _DAT_11305cb40) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a43d30; end: 100a43ddb; -[SCStartSystemScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a43d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a43ddc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a43ddc; end: 100a43f73;  */

void FUN_100a43ddc(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0e147b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002a,0x800000010f1eb850,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "StartSystemScopeGraphBridge/SCStartSystemScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x4e,2,0x2c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a43f74);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c597dc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a43f74; end: 100a43fcb; -[SCStartSystemScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a43f74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305cb30;
  func_0x000107c61428(param_1 + _DAT_11305cb30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a43fcc; end: 100a4402f; -[SCStartSystemScopeGraphBridgeSaberEntryPoint setStartSystemScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a43fcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305cb38;
  func_0x000107c61428(param_1 + _DAT_11305cb38,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a44030; end: 100a44057; -[SCStartSystemScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a44030(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a44058();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a44058; end: 100a4418b;  */

/* WARNING: Possible PIC construction at 0x000100a44110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a4412c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a44148: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a44114) */
/* WARNING: Removing unreachable block (ram,0x000100a44130) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a44058(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c5bbe0();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100a4421c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100a4423c();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a4418c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_11305c980) = lVar5;
    *(long *)(lVar4 + _DAT_11305c988) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a4418c; end: 100a441d3; -[SCStartSystemScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a4418c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305cb30;
  func_0x000107c61428(param_1 + _DAT_11305cb30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a441d4; end: 100a4421b; -[SCStartSystemScopeGraphBridgeSaberEntryPoint startSystemScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a441d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305cb38;
  func_0x000107c61428(param_1 + _DAT_11305cb38,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a4421c; end: 100a4423b;  */

void FUN_100a4421c(void)

{
  func_0x000107c61168(&PTR_PTR_11298ae50);
  return;
}



/* Entry: 100a4423c; end: 100a4430b;  */

undefined8 FUN_100a4423c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x11305cac0,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    FUN_10006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_100098b80();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a4430c; end: 100a4438b; -[SCSCLegacyWarmStartupInitiatorServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a4430c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11305cb70,0);
  func_0x000107c61614(param_1 + _DAT_11305cb78,0);
  *(undefined8 *)(param_1 + _DAT_11305cb80) = 0;
  *(undefined8 *)(param_1 + _DAT_11305cb88) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a4438c; end: 100a44437; -[SCSCLegacyWarmStartupInitiatorServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a4438c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a44438(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a44438; end: 100a4463b;  */

void FUN_100a44438(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0e14730)) {
      uVar2 = 0xd000000000000023;
      func_0x000107c605b8(0xd000000000000023,0x800000010f1eb8d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000002b;
        if (((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0e14700)) &&
           (func_0x000107c605b8(0xd00000000000002b,0x800000010f1eb900,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "StartSystemScopeGraphBridge/SCSCLegacyWarmStartupInitiatorServicesSaberEntryPoint.swift"
                              ,0x57,2,0x30,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a4463c);
          (*pcVar1)();
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5840c();
        goto LAB_100a444c4;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c597d8();
  }
LAB_100a444c4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a4463c; end: 100a44647; -[SCSCLegacyWarmStartupInitiatorServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a4463c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305cb70;
  func_0x000107c61428(param_1 + _DAT_11305cb70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a44648; end: 100a4469b;  */

void FUN_100a44648(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a4469c; end: 100a446a7; -[SCSCLegacyWarmStartupInitiatorServicesSaberEntryPoint setStartSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a4469c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305cb78;
  func_0x000107c61428(param_1 + _DAT_11305cb78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a446a8; end: 100a4470b; -[SCSCLegacyWarmStartupInitiatorServicesSaberEntryPoint setSCLegacyWarmStartupInitiatorServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a446a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305cb80;
  func_0x000107c61428(param_1 + _DAT_11305cb80,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a4470c; end: 100a44733; -[SCSCLegacyWarmStartupInitiatorServicesSaberEntryPoint begin] */

void FUN_100a4470c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a44734();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a44734; end: 100a448b7;  */

/* WARNING: Possible PIC construction at 0x000100a44834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a44844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a44860: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a44838) */
/* WARNING: Removing unreachable block (ram,0x000100a44848) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a44734(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5bbdc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50e64();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a4495c();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_11305cad0);
        *(undefined8 *)(lVar2 + _DAT_11305c9b8) = uVar6;
        *(long *)(lVar2 + _DAT_11305c9c0) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_11305c9c0);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100a448b8; end: 100a448c3; -[SCSCLegacyWarmStartupInitiatorServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a448b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305cb70;
  func_0x000107c61428(param_1 + _DAT_11305cb70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a448c4; end: 100a44907;  */

void FUN_100a448c4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a44908; end: 100a44913; -[SCSCLegacyWarmStartupInitiatorServicesSaberEntryPoint startSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a44908(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305cb78;
  func_0x000107c61428(param_1 + _DAT_11305cb78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a44914; end: 100a4495b; -[SCSCLegacyWarmStartupInitiatorServicesSaberEntryPoint sCLegacyWarmStartupInitiatorServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a44914(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305cb80;
  func_0x000107c61428(param_1 + _DAT_11305cb80,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a4495c; end: 100a4497b;  */

void FUN_100a4495c(void)

{
  func_0x000107c61168(&PTR_PTR_11298af18);
  return;
}



/* Entry: 100a4497c; end: 100a44983;  */

void FUN_100a4497c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a44984; end: 100a449d7;  */

void FUN_100a44984(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a449d8; end: 100a44a43; -[SCStrSystemScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a449d8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11305cec0,0);
  *(undefined8 *)(param_1 + _DAT_11305cec8) = 0;
  *(undefined8 *)(param_1 + _DAT_11305ced0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a44a44; end: 100a44aef; -[SCStrSystemScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a44a44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a44af0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a44af0; end: 100a44c87;  */

void FUN_100a44af0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0e144d0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000028,0x800000010f1ebb30,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "StrSystemScopeGraphBridge/SCStrSystemScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x4a,2,0x2c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a44c88);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c599c8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a44c88; end: 100a44cdf; -[SCStrSystemScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a44c88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305cec0;
  func_0x000107c61428(param_1 + _DAT_11305cec0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a44ce0; end: 100a44d43; -[SCStrSystemScopeGraphBridgeSaberEntryPoint setStrSystemScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a44ce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305cec8;
  func_0x000107c61428(param_1 + _DAT_11305cec8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a44d44; end: 100a44d6b; -[SCStrSystemScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a44d44(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a44d6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a44d6c; end: 100a44e9f;  */

/* WARNING: Possible PIC construction at 0x000100a44e24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a44e40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a44e5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a44e28) */
/* WARNING: Removing unreachable block (ram,0x000100a44e44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a44d6c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c5c0a4();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100a44f30();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100a44f50();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a44ea0);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_11305cc78) = lVar5;
    *(long *)(lVar4 + _DAT_11305cc80) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a44ea0; end: 100a44ee7; -[SCStrSystemScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a44ea0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305cec0;
  func_0x000107c61428(param_1 + _DAT_11305cec0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a44ee8; end: 100a44f2f; -[SCStrSystemScopeGraphBridgeSaberEntryPoint strSystemScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a44ee8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305cec8;
  func_0x000107c61428(param_1 + _DAT_11305cec8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a44f30; end: 100a44f4f;  */

void FUN_100a44f30(void)

{
  func_0x000107c61168(&PTR_PTR_11298b288);
  return;
}



/* Entry: 100a44f50; end: 100a450f7;  */

undefined8 FUN_100a44f50(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x11305ce50,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    FUN_10006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_100095274();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a450f8; end: 100a45117; -[SCSystemScopeGraphBridgeSaberEntryPoint init] */

void FUN_100a450f8(void)

{
  func_0x000100a45020();
  return;
}



/* Entry: 100a45118; end: 100a451c3; -[SCSystemScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a45118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a451c4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a451c4; end: 100a45707;  */

void FUN_100a451c4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
    goto LAB_100a45250;
  }
  if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef107ff40)) {
    uVar2 = 0xd00000000000001f;
    func_0x000107c605b8(0xd00000000000001f,0x800000010ef800c0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      if ((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef107ff20)) {
        uVar2 = 0xd00000000000001d;
        func_0x000107c605b8(0xd00000000000001d,0x800000010ef800e0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0xd00000000000001b;
          if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef107ff00)) ||
             (func_0x000107c605b8(0xd00000000000001b,0x800000010ef80100,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c58300();
          }
          else {
            uVar2 = 0xd00000000000003d;
            if (((param_2 == -0x2fffffffffffffc3) && (param_3 == -0x7ffffffef107fee0)) ||
               (func_0x000107c605b8(0xd00000000000003d,0x800000010ef80120,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c583e8();
            }
            else {
              if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef107fea0)) {
                uVar2 = 0xd00000000000001f;
                func_0x000107c605b8(0xd00000000000001f,0x800000010ef80160,param_2,param_3,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = 0xd000000000000021;
                  if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef107fe80)) ||
                     (func_0x000107c605b8(0xd000000000000021,0x800000010ef80180,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c5869c();
                  }
                  else {
                    if ((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef107fe50)) {
                      uVar2 = 0xd00000000000001d;
                      func_0x000107c605b8(0xd00000000000001d,0x800000010ef801b0,param_2,param_3,0);
                      if ((uVar2 & 1) == 0) {
                        uVar2 = 0xd000000000000019;
                        if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef107fe30))
                           || (func_0x000107c605b8(0xd000000000000019,0x800000010ef801d0,param_2,
                                                   param_3,0), (uVar2 & 1) != 0)) {
                          FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c58afc();
                        }
                        else {
                          uVar2 = 0xd000000000000037;
                          if (((param_2 == -0x2fffffffffffffc9) && (param_3 == -0x7ffffffef107fe10))
                             || (func_0x000107c605b8(0xd000000000000037,0x800000010ef801f0,param_2,
                                                     param_3,0), (uVar2 & 1) != 0)) {
                            FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c581cc();
                          }
                          else {
                            uVar2 = 0xd000000000000025;
                            if (((param_2 != -0x2fffffffffffffdb) ||
                                (param_3 != -0x7ffffffef107fdd0)) &&
                               (func_0x000107c605b8(0xd000000000000025,0x800000010ef80230,param_2,
                                                    param_3,0), (uVar2 & 1) == 0)) {
                              func_0x000107c602fc(0x15);
                              func_0x000107c6142c(0xe000000000000000);
                              func_0x000107c5fb78(param_2,param_3);
                              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                                  0x800000010ef0fc20,
                                                  "SystemScopeGraphBridge/SCSystemScopeGraphBridgeSaberEntryPoint.swift"
                                                  ,0x44,2,0x66,0);
                    /* WARNING: Does not return */
                              pcVar1 = (code *)SoftwareBreakpoint(1,0x100a45708);
                              (*pcVar1)();
                            }
                            FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c59b74();
                          }
                        }
                        goto LAB_100a45250;
                      }
                    }
                    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c58a78();
                  }
                  goto LAB_100a45250;
                }
              }
              FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c58410();
            }
          }
          goto LAB_100a45250;
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c582a0();
      goto LAB_100a45250;
    }
  }
  FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c58254();
LAB_100a45250:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a45708; end: 100a4575f; -[SCSystemScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a45708(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d9e978;
  func_0x000107c61428(param_1 + _DAT_112d9e978,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a45760; end: 100a4576b; -[SCSystemScopeGraphBridgeSaberEntryPoint setSystemScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a45760(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d9e9c8;
  func_0x000107c61428(param_1 + _DAT_112d9e9c8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a4576c; end: 100a457cb;  */

void FUN_100a4576c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 100a457cc; end: 100a45a6f; -[SCScopeLifecycle propertyExposerForScope:isDeferred:exposerType:propertyType:propertyTypeEncoding:propertyName:] */

/* WARNING: Possible PIC construction at 0x000100a45a00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a45a10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a459b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a45a14) */
/* WARNING: Removing unreachable block (ram,0x000100a45a04) */
/* WARNING: Removing unreachable block (ram,0x000100a459b4) */

void FUN_100a457cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  lVar1 = 0;
  if (param_5 < 7) {
    if (param_5 < 5) {
      if (param_5 == 3) {
        lVar1 = param_1;
        FUN_100a45a70(param_1,param_7,*(undefined8 *)(param_1 + 0x50));
        func_0x000107c61180();
        func_0x000107c51960(param_1);
        func_0x000107c61180();
        goto code_r0x000107c61170;
      }
      if (param_5 == 4) {
        lVar1 = param_1;
        FUN_100a45a70(param_1,param_7,*(undefined8 *)(param_1 + 0x50));
        func_0x000107c61180();
        func_0x000107c4e9f8(param_1);
        func_0x000107c61180();
        goto code_r0x000107c61170;
      }
    }
    else {
      if (param_5 == 5) {
        lVar1 = param_1;
        FUN_100a45a70(param_1,param_7,*(undefined8 *)(param_1 + 0x50));
        func_0x000107c61180();
        func_0x000107c4d18c(param_1);
        func_0x000107c61180();
        goto code_r0x000107c61170;
      }
      if (param_5 == 6) {
        lVar1 = param_1;
        FUN_100a45a70(param_1,param_7,*(undefined8 *)(param_1 + 0x50));
        func_0x000107c61180();
        func_0x000107c42700(param_1);
        func_0x000107c61180();
        goto code_r0x000107c61170;
      }
    }
  }
  else if (param_5 < 9) {
    if (param_5 == 7) {
      func_0x000107c41f44(param_1);
      func_0x000107c61180();
      lVar1 = param_1;
    }
    else if (param_5 == 8) {
      func_0x000107c5d3a0(param_1);
      func_0x000107c61180();
      lVar1 = param_1;
    }
  }
  else {
    if (param_5 == 9) {
      lVar1 = param_1;
      FUN_100a45a70(param_1,param_7,*(undefined8 *)(param_1 + 0x50));
      func_0x000107c61180();
      func_0x000107c426fc(param_1);
      func_0x000107c61180();
      goto code_r0x000107c61170;
    }
    if (param_5 == 10) {
      func_0x000107c41f40(param_1);
      func_0x000107c61180();
      lVar1 = param_1;
    }
    else if (param_5 == 0xb) {
      func_0x000107c5d39c(param_1);
      func_0x000107c61180();
      lVar1 = param_1;
    }
  }
  func_0x000107c5a49c(param_3);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100a45a70; end: 100a45b33;  */

void FUN_100a45a70(undefined8 param_1,undefined2 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined2 uStack_40;
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_100a49e5c;
  puStack_58 = &UNK_110cb76d8;
  func_0x000107c6111c(auStack_48,auStack_38);
  uStack_50 = param_3;
  uStack_40 = param_2;
  func_0x000107c61174(param_3);
  func_0x000107c61184(&puStack_70);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_48);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 100a45b34; end: 100a45b9b; -[SCScopeLifecycle enabledOptionalMultiScopeContainerWithLifecycleProvider:] */

void FUN_100a45b34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df8b0;
  func_0x000107c4d18c();
  func_0x000107c61180();
  func_0x000107c426e4(puVar1,param_2,param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100a45b9c; end: 100a45c9f; -[SCScopeLifecycle multiScopeContainerWithLifecycleProvider:] */

void FUN_100a45b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126df890;
  func_0x000107c610f4(PTR_PTR_1126df890);
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c61174(param_3);
  func_0x000107c484ec(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100a45ca0; end: 100a45d8f; -[SCMultiScopeContainer initWithScopeExposerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100a45ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_112705728;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278c9f4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278c9f4) = uVar4;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278c9f8);
    *(undefined **)((long)puVar1 + (long)_DAT_11278c9f8) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278c9fc);
    *(undefined **)((long)puVar1 + (long)_DAT_11278c9fc) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = &UNK_10f7275fa;
    func_0x000107c60f50(&UNK_10f7275fa,0);
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278ca00);
    *(undefined **)((long)puVar1 + (long)_DAT_11278ca00) = puVar2;
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a45d90; end: 100a45deb; +[SCOptionalMultiScopeContainer enabledContainerWithMultiScopeExposer:] */

void FUN_100a45d90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c610f4(param_1);
  func_0x000107c484e0();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100a45dec; end: 100a45e83; -[SCOptionalMultiScopeContainer initWithScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100a45dec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_112705778;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11278caa4;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a45e84; end: 100a45e8f; -[SCSystemScopeGraphBridgeSaberEntryPoint setSCCountryCodePickerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a45e84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d9e980;
  func_0x000107c61428(param_1 + _DAT_112d9e980,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a45e90; end: 100a45e9b; -[SCSystemScopeGraphBridgeSaberEntryPoint setSCDataUnavailableScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a45e90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d9e988;
  func_0x000107c61428(param_1 + _DAT_112d9e988,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a45e9c; end: 100a45ea7; -[SCScopeLifecycle disabledOptionalMultiScopeContainer] */

void FUN_100a45e9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf80d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126df8b0,PTR_s_disabledContainer_1125bdd08);
  return;
}



/* Entry: 100a45ea8; end: 100a45ec3; +[SCOptionalMultiScopeContainer disabledContainer] */

void FUN_100a45ea8(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c610f4();
  func_0x000107c484e0(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a45ec4; end: 100a45ecf; -[SCSystemScopeGraphBridgeSaberEntryPoint setSCEmergencyModeScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a45ec4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d9e990;
  func_0x000107c61428(param_1 + _DAT_112d9e990,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a45ed0; end: 100a45edb; -[SCSystemScopeGraphBridgeSaberEntryPoint setSCLegacyNonCriticalStartupCommandsStartupCompleteScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a45ed0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d9e998;
  func_0x000107c61428(param_1 + _DAT_112d9e998,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a45edc; end: 100a45ee7; -[SCSystemScopeGraphBridgeSaberEntryPoint setSCLegacyWarmStartupScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a45edc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d9e9a0;
  func_0x000107c61428(param_1 + _DAT_112d9e9a0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a45ee8; end: 100a45ef3; -[SCSystemScopeGraphBridgeSaberEntryPoint setSCNGOCodeVerificationScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a45ee8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d9e9a8;
  func_0x000107c61428(param_1 + _DAT_112d9e9a8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a45ef4; end: 100a45eff; -[SCSystemScopeGraphBridgeSaberEntryPoint setSCUnauthenticatedScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a45ef4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d9e9b0;
  func_0x000107c61428(param_1 + _DAT_112d9e9b0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a45f00; end: 100a45f0b; -[SCSystemScopeGraphBridgeSaberEntryPoint setSCUserSessionScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a45f00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d9e9b8;
  func_0x000107c61428(param_1 + _DAT_112d9e9b8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a45f0c; end: 100a45f8f; -[SCScopeLifecycle plugInScopeContainerWithLifecycleProvider:] */

void FUN_100a45f0c(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x000107c51960();
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126df898;
  func_0x000107c610f4(PTR_PTR_1126df898);
  func_0x000107c484d4();
  func_0x000107c53fcc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100a45f90; end: 100a4604b; -[SCScopeLifecycle scopeContainerWithLifecycleProvider:] */

void FUN_100a45f90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126df888;
  func_0x000107c610f4(PTR_PTR_1126df888);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c4dfa0(uVar2);
  func_0x000107c61180();
  func_0x000107c47c88(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c53fcc(puVar1,param_2,param_1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100a4604c; end: 100a4612f; -[SCScopeContainer initWithOperationQueue:lifecycles:lifecycleProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100a4604c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_112705748;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11278ca24;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + (long)_DAT_11278ca28),param_4);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278ca2c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278ca2c) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a46130; end: 100a46143; -[SCScopeContainer setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a46130(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11278ca34,param_3);
  return;
}



/* Entry: 100a46144; end: 100a461d3; -[SCPlugInScopeContainer initWithScopeContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100a46144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_112705740;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11278ca14;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c53fcc(*(undefined8 *)((long)puVar1 + lVar3));
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a461d4; end: 100a461e7; -[SCPlugInScopeContainer setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a461d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11278ca20,param_3);
  return;
}



/* Entry: 100a461e8; end: 100a461f3; -[SCSystemScopeGraphBridgeSaberEntryPoint setSCComposerSystemSessionImageLoadersRegistryScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a461e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d9e9c0;
  func_0x000107c61428(param_1 + _DAT_112d9e9c0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a461f4; end: 100a4621b; -[SCSystemScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a461f4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a4621c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a4621c; end: 100a468d3;  */

/* WARNING: Possible PIC construction at 0x000100a46600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a46614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a46624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a46634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a46648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a46674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a46684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a46694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a466a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a466b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a466c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a46868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a46878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a46888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a46898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a468a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a46828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a46838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a46848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a46858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a467e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a467f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a46808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a467a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a467b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a467c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a46778: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a46788: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a46798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a46758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a46768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a46738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a46718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a46708: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a4671c) */
/* WARNING: Removing unreachable block (ram,0x000100a4673c) */
/* WARNING: Removing unreachable block (ram,0x000100a4676c) */
/* WARNING: Removing unreachable block (ram,0x000100a4675c) */
/* WARNING: Removing unreachable block (ram,0x000100a4679c) */
/* WARNING: Removing unreachable block (ram,0x000100a4678c) */
/* WARNING: Removing unreachable block (ram,0x000100a4677c) */
/* WARNING: Removing unreachable block (ram,0x000100a467cc) */
/* WARNING: Removing unreachable block (ram,0x000100a467bc) */
/* WARNING: Removing unreachable block (ram,0x000100a467ac) */
/* WARNING: Removing unreachable block (ram,0x000100a4680c) */
/* WARNING: Removing unreachable block (ram,0x000100a467fc) */
/* WARNING: Removing unreachable block (ram,0x000100a467ec) */
/* WARNING: Removing unreachable block (ram,0x000100a4685c) */
/* WARNING: Removing unreachable block (ram,0x000100a4684c) */
/* WARNING: Removing unreachable block (ram,0x000100a4683c) */
/* WARNING: Removing unreachable block (ram,0x000100a4682c) */
/* WARNING: Removing unreachable block (ram,0x000100a468ac) */
/* WARNING: Removing unreachable block (ram,0x000100a4689c) */
/* WARNING: Removing unreachable block (ram,0x000100a4688c) */
/* WARNING: Removing unreachable block (ram,0x000100a4687c) */
/* WARNING: Removing unreachable block (ram,0x000100a4686c) */
/* WARNING: Removing unreachable block (ram,0x000100a466c8) */
/* WARNING: Removing unreachable block (ram,0x000100a466b8) */
/* WARNING: Removing unreachable block (ram,0x000100a466a8) */
/* WARNING: Removing unreachable block (ram,0x000100a46698) */
/* WARNING: Removing unreachable block (ram,0x000100a46688) */
/* WARNING: Removing unreachable block (ram,0x000100a46678) */
/* WARNING: Removing unreachable block (ram,0x000100a4664c) */
/* WARNING: Removing unreachable block (ram,0x000100a46638) */
/* WARNING: Removing unreachable block (ram,0x000100a46628) */
/* WARNING: Removing unreachable block (ram,0x000100a46618) */
/* WARNING: Removing unreachable block (ram,0x000100a46604) */
/* WARNING: Removing unreachable block (ram,0x000100a4670c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a4621c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c50cac();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c50cf8();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar5 = unaff_x20;
      func_0x000107c50d58();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar5 = unaff_x20;
        func_0x000107c50e40();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar4;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c50e68();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar3);
            lVar3 = lVar4;
          }
          else {
            lVar5 = unaff_x20;
            func_0x000107c510f4();
            func_0x000107c61180();
            if (lVar5 != 0) {
              lVar5 = unaff_x20;
              func_0x000107c514d0();
              func_0x000107c61180();
              if (lVar5 != 0) {
                lVar5 = unaff_x20;
                func_0x000107c51554();
                func_0x000107c61180();
                if (lVar5 == 0) {
                  func_0x000107c61170(lVar3);
                  lVar3 = lVar4;
                }
                else {
                  lVar5 = unaff_x20;
                  func_0x000107c50c24();
                  func_0x000107c61180();
                  if (lVar5 == 0) {
                    func_0x000107c61170(lVar3);
                    lVar3 = lVar4;
                  }
                  else {
                    func_0x000107c5c63c();
                    func_0x000107c61180();
                    if (unaff_x20 != 0) {
                      lVar6 = 0;
                      FUN_100a46bec();
                      lVar4 = lVar6;
                      func_0x000107c610f8();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      lVar5 = lVar3;
                      FUN_100a46c0c();
                      if (lVar5 == 0) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a468d4);
                        (*pcVar2)();
                      }
                      FUN_100083b20(&uStack_68);
                      uVar1 = uStack_68;
                      FUN_100087c34(auStack_70);
                      func_0x000107c61574(uVar1);
                      FUN_100083b20(&uStack_68);
                      uVar1 = uStack_68;
                      FUN_100087c34(auStack_70);
                      func_0x000107c61574(uVar1);
                      FUN_100083b20(&uStack_68);
                      uVar1 = uStack_68;
                      FUN_100087c34(auStack_70);
                      func_0x000107c61574(uVar1);
                      FUN_100083b20(&uStack_68);
                      uVar1 = uStack_68;
                      FUN_100087c34(auStack_70);
                      func_0x000107c61574(uVar1);
                      FUN_100083b20(&uStack_68);
                      uVar1 = uStack_68;
                      FUN_100087c34(auStack_70);
                      func_0x000107c61574(uVar1);
                      FUN_100083b20(&uStack_68);
                      uVar1 = uStack_68;
                      FUN_100087c34(auStack_70);
                      func_0x000107c61574(uVar1);
                      FUN_100083b20(&uStack_68);
                      uVar1 = uStack_68;
                      FUN_100087c34(auStack_70);
                      func_0x000107c61574(uVar1);
                      FUN_100083b20(&uStack_68);
                      uVar1 = uStack_68;
                      FUN_100087c34(auStack_70);
                      func_0x000107c61574(uVar1);
                      FUN_100083b20(&uStack_68);
                      FUN_100087c34(auStack_70);
                      func_0x000107c61574(uStack_68);
                      *(long *)(lVar4 + _DAT_112d9dee8) = lVar5;
                      *(long *)(lVar4 + _DAT_112d9def0) = unaff_x20;
                      lStack_80 = lVar4;
                      lStack_78 = lVar6;
                      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100a468d4; end: 100a4691b; -[SCSystemScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a468d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d9e978;
  func_0x000107c61428(param_1 + _DAT_112d9e978,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a4691c; end: 100a46963; -[SCSystemScopeGraphBridgeSaberEntryPoint sCCountryCodePickerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a4691c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d9e980;
  func_0x000107c61428(param_1 + _DAT_112d9e980,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a46964; end: 100a469ab; -[SCSystemScopeGraphBridgeSaberEntryPoint sCDataUnavailableScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a46964(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d9e988;
  func_0x000107c61428(param_1 + _DAT_112d9e988,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a469ac; end: 100a469f3; -[SCSystemScopeGraphBridgeSaberEntryPoint sCEmergencyModeScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a469ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d9e990;
  func_0x000107c61428(param_1 + _DAT_112d9e990,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a469f4; end: 100a46a3b; -[SCSystemScopeGraphBridgeSaberEntryPoint sCLegacyNonCriticalStartupCommandsStartupCompleteScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a469f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d9e998;
  func_0x000107c61428(param_1 + _DAT_112d9e998,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a46a3c; end: 100a46a83; -[SCSystemScopeGraphBridgeSaberEntryPoint sCLegacyWarmStartupScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a46a3c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d9e9a0;
  func_0x000107c61428(param_1 + _DAT_112d9e9a0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a46a84; end: 100a46acb; -[SCSystemScopeGraphBridgeSaberEntryPoint sCNGOCodeVerificationScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a46a84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d9e9a8;
  func_0x000107c61428(param_1 + _DAT_112d9e9a8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a46acc; end: 100a46b13; -[SCSystemScopeGraphBridgeSaberEntryPoint sCUnauthenticatedScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a46acc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d9e9b0;
  func_0x000107c61428(param_1 + _DAT_112d9e9b0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a46b14; end: 100a46b5b; -[SCSystemScopeGraphBridgeSaberEntryPoint sCUserSessionScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a46b14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d9e9b8;
  func_0x000107c61428(param_1 + _DAT_112d9e9b8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a46b5c; end: 100a46ba3; -[SCSystemScopeGraphBridgeSaberEntryPoint sCComposerSystemSessionImageLoadersRegistryScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a46b5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d9e9c0;
  func_0x000107c61428(param_1 + _DAT_112d9e9c0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}


