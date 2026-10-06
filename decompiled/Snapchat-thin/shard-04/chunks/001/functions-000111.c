/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10315d4d4; end: 10315d4e3;  */

void FUN_10315d4d4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110614928;
  func_0x000107c613fc(&UNK_110614928,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10315c7c8;
  func_0x00010058fa64(FUN_10315c7c8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10315d4e4; end: 10315d56b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10315d4e4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_10315d8a4();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f45998) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f459a0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10315d56c);
  (*pcVar1)();
}



/* Entry: 10315d56c; end: 10315d5cb; -[_TtC37LensTalkVideoHandlingScopeGraphBridge52LensTalkVideoHandlingScopeGraphBridgeSaberEntryPoint init] */

void FUN_10315d56c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensTalkVideoHandlingScopeGraphBridge.LensTalkVideoHandlingScopeGraphBridgeSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10315d598);
  (*pcVar1)();
}



/* Entry: 10315d5cc; end: 10315d603; -[_TtC37LensTalkVideoHandlingScopeGraphBridge52LensTalkVideoHandlingScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010315d5e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010315d5ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315d5cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f45998));
  return;
}



/* Entry: 10315d604; end: 10315d62b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315d604(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f459a0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f45998));
  return;
}



/* Entry: 10315d62c; end: 10315d64b;  */

void FUN_10315d62c(void)

{
  func_0x000107c61168(&PTR_PTR_1128bb300);
  return;
}



/* Entry: 10315d64c; end: 10315d6d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10315d64c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f459d0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f459d8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10315d6d4);
  (*pcVar2)();
}



/* Entry: 10315d6d4; end: 10315d7bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10315d6d4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f459d0);
  *(undefined **)(unaff_x20 + _DAT_112f459d0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f459d8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f459d8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110614c48;
  func_0x000107c613fc(&UNK_110614c48,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10315d7c0,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10315d7bc; end: 10315d7c7;  */

void FUN_10315d7bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10315d7c8; end: 10315d827; -[_TtC37LensTalkVideoHandlingScopeGraphBridge52SCLensTalkVideoHandlingScopedServicesSaberEntryPoint init] */

void FUN_10315d7c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensTalkVideoHandlingScopeGraphBridge.SCLensTalkVideoHandlingScopedServicesSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10315d7f4);
  (*pcVar1)();
}



/* Entry: 10315d828; end: 10315d85f; -[_TtC37LensTalkVideoHandlingScopeGraphBridge52SCLensTalkVideoHandlingScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315d828(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f459d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f459d0));
  return;
}



/* Entry: 10315d860; end: 10315d863;  */

void FUN_10315d860(void)

{
  return;
}



/* Entry: 10315d864; end: 10315d883;  */

void FUN_10315d864(void)

{
  FUN_10315d6d4();
  return;
}



/* Entry: 10315d884; end: 10315d8a3;  */

void FUN_10315d884(void)

{
  func_0x000107c61168(&PTR_PTR_1128bb3c8);
  return;
}



/* Entry: 10315d8a4; end: 10315d973;  */

undefined8 FUN_10315d8a4(void)

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
  
  func_0x000107c61428(0x112f45a08,&uStack_40,0x20,0);
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
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_10315d974();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10315d974; end: 10315d993;  */

void FUN_10315d974(void)

{
  func_0x000107c61168(&PTR_PTR_1128bb490);
  return;
}



/* Entry: 10315d994; end: 10315d9ff;  */

void FUN_10315d994(void)

{
  func_0x0001000285a8(0x112f45a10,&UNK_10db91f58);
  func_0x0001000823a8(0x10315d9d4,0);
  return;
}



/* Entry: 10315da00; end: 10315da3b; -[_TtC37LensTalkVideoHandlingScopeGraphBridge45LensTalkVideoHandlingScopeGraphBridgeServices init] */

void FUN_10315da00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10315da3c; end: 10315da6f;  */

void FUN_10315da3c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10315da70; end: 10315da77;  */

undefined8 FUN_10315da70(void)

{
  return 0x1b;
}



/* Entry: 10315da78; end: 10315dbef;  */

void FUN_10315da78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110614c90;
  func_0x000107c613fc(&UNK_110614c90,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10315dbf0,puVar1);
  return;
}



/* Entry: 10315dbf0; end: 10315dbf7;  */

void FUN_10315dbf0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112f45a08,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f45a08,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110614d28;
  func_0x000107c613fc(&UNK_110614d28,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10315dca4;
  func_0x00010058fa64(0x10315dca4,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10315dbf8; end: 10315dc53;  */

void FUN_10315dbf8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f45a08,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f45a08,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10315dc54; end: 10315dcab;  */

undefined ** FUN_10315dc54(void)

{
  return &PTR_DAT_112f46510;
}



/* Entry: 10315dcac; end: 10315dcf3; -[SCLensTalkVideoHandlingScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315dcac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f45a68;
  func_0x000107c61428(param_1 + _DAT_112f45a68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10315dcf4; end: 10315dd4b; -[SCLensTalkVideoHandlingScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315dcf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f45a68;
  func_0x000107c61428(param_1 + _DAT_112f45a68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10315dd4c; end: 10315dd93; -[SCLensTalkVideoHandlingScopeGraphBridgeSaberEntryPoint lensTalkVideoHandlingScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315dd4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f45a70;
  func_0x000107c61428(param_1 + _DAT_112f45a70,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10315dd94; end: 10315ddf7; -[SCLensTalkVideoHandlingScopeGraphBridgeSaberEntryPoint setLensTalkVideoHandlingScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315dd94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f45a70;
  func_0x000107c61428(param_1 + _DAT_112f45a70,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10315ddf8; end: 10315df2b;  */

/* WARNING: Possible PIC construction at 0x00010315deb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010315decc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010315dee8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010315deb4) */
/* WARNING: Removing unreachable block (ram,0x00010315ded0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315ddf8(void)

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
  func_0x000107c4b4a0();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_10315d62c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_10315d8a4();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10315df2c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f45998) = lVar5;
    *(long *)(lVar4 + _DAT_112f459a0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10315df2c; end: 10315df53; -[SCLensTalkVideoHandlingScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10315df2c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10315ddf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10315df54; end: 10315df97; -[SCLensTalkVideoHandlingScopeGraphBridgeSaberEntryPoint end] */

void FUN_10315df54(undefined8 param_1)

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



/* Entry: 10315df98; end: 10315e12f;  */

void FUN_10315df98(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcc) || (param_3 != -0x7ffffffef0ed6600)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000034,0x800000010f129a00,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensTalkVideoHandlingScopeGraphBridge/SCLensTalkVideoHandlingScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x62,2,0x33,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10315e130);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55eb8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10315e130; end: 10315e1db; -[SCLensTalkVideoHandlingScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10315e130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10315df98(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10315e1dc; end: 10315e247; -[SCLensTalkVideoHandlingScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315e1dc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f45a68,0);
  *(undefined8 *)(param_1 + _DAT_112f45a70) = 0;
  *(undefined8 *)(param_1 + _DAT_112f45a78) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10315e248; end: 10315e27b;  */

void FUN_10315e248(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10315e27c; end: 10315e2c3; -[SCLensTalkVideoHandlingScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010315e2a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010315e2ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315e27c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f45a68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f45a70));
  return;
}



/* Entry: 10315e2c4; end: 10315e2e3;  */

void FUN_10315e2c4(void)

{
  func_0x000107c61168(&PTR_PTR_1128bb540);
  return;
}



/* Entry: 10315e2e4; end: 10315e32b; -[SCSCLensTalkVideoHandlingScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315e2e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f45aa8;
  func_0x000107c61428(param_1 + _DAT_112f45aa8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10315e32c; end: 10315e383; -[SCSCLensTalkVideoHandlingScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315e32c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f45aa8;
  func_0x000107c61428(param_1 + _DAT_112f45aa8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10315e384; end: 10315e45b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315e384(undefined8 param_1,long param_2)

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
    FUN_10315d884();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f459d0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10315e45c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f459d8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f45ab0);
    *(long **)(unaff_x20 + _DAT_112f45ab0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10315e45c; end: 10315e483; -[SCSCLensTalkVideoHandlingScopedServicesSaberEntryPoint begin] */

void FUN_10315e45c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10315e384();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10315e484; end: 10315e5fb;  */

/* WARNING: Possible PIC construction at 0x00010315e4ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010315e584: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010315e4f0) */
/* WARNING: Removing unreachable block (ram,0x00010315e588) */
/* WARNING: Removing unreachable block (ram,0x00010315e5a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315e484(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f45ab0);
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



/* Entry: 10315e5fc; end: 10315e603;  */

void FUN_10315e5fc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10315e604; end: 10315e637; -[SCSCLensTalkVideoHandlingScopedServicesSaberEntryPoint end] */

void FUN_10315e604(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10315e484();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10315e638; end: 10315e757;  */

void FUN_10315e638(long param_1,long param_2,long param_3)

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
                        "LensTalkVideoHandlingScopeGraphBridge/SCSCLensTalkVideoHandlingScopedServicesSaberEntryPoint.swift"
                        ,0x62,2,0x2f,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10315e758);
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



/* Entry: 10315e758; end: 10315e803; -[SCSCLensTalkVideoHandlingScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10315e758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10315e638(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10315e804; end: 10315e863; -[SCSCLensTalkVideoHandlingScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315e804(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f45aa8,0);
  *(undefined8 *)(param_1 + _DAT_112f45ab0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10315e864; end: 10315e897;  */

void FUN_10315e864(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10315e898; end: 10315e8cf; -[SCSCLensTalkVideoHandlingScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315e898(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f45aa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f45ab0));
  return;
}



/* Entry: 10315e8d0; end: 10315e8ef;  */

void FUN_10315e8d0(void)

{
  func_0x000107c61168(&PTR_PTR_1128bb608);
  return;
}



/* Entry: 10315e8f0; end: 10315e95b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315e8f0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10315ece4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f45ae8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10315e95c; end: 10315e9c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315e95c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f45ae8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10315e9c8; end: 10315ea27; -[_TtC39ModularCallScopedFactoryServiceProvider25ModularCallScopedServices init] */

void FUN_10315e9c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ModularCallScopedFactoryServiceProvider.ModularCallScopedServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10315e9f4);
  (*pcVar1)();
}



/* Entry: 10315ea28; end: 10315ea37; -[_TtC39ModularCallScopedFactoryServiceProvider25ModularCallScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315ea28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f45ae8));
  return;
}



/* Entry: 10315ea38; end: 10315eaa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315ea38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110614f40;
  func_0x000107c613fc(&UNK_110614f40,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10315ed7c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10315eaa4; end: 10315eb3f;  */

void FUN_10315eaa4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110614e50;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110614e50;
  return;
}



/* Entry: 10315eb40; end: 10315eb77;  */

void FUN_10315eb40(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 10315eb78; end: 10315eb7f;  */

undefined8 FUN_10315eb78(void)

{
  return 0x1b;
}



/* Entry: 10315eb80; end: 10315ecb3;  */

void FUN_10315eb80(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110614f68;
  func_0x000107c613fc(&UNK_110614f68,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10315ed54;
  func_0x00010058fa64(FUN_10315ed54,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10315ecb4; end: 10315ece3;  */

undefined ** FUN_10315ecb4(void)

{
  return &PTR_DAT_1130666a0;
}



/* Entry: 10315ece4; end: 10315ed03;  */

void FUN_10315ece4(void)

{
  func_0x000107c61168(&PTR_PTR_1128bb6c8);
  return;
}



/* Entry: 10315ed04; end: 10315ed53;  */

undefined1  [16] FUN_10315ed04(void)

{
  return ZEXT816(0x110614ea0);
}



/* Entry: 10315ed54; end: 10315ed7b;  */

void FUN_10315ed54(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10315ed7c; end: 10315ed7f;  */

void FUN_10315ed7c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10315ed80; end: 10315f133;  */

void FUN_10315ed80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f45b50,&UNK_10db92320);
  puVar1 = &UNK_110614fa8;
  func_0x000107c613fc(&UNK_110614fa8,0xb0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_17;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_14;
  *(undefined8 *)(puVar1 + 0x28) = param_7;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_13;
  *(undefined8 *)(puVar1 + 0x48) = param_18;
  *(undefined8 *)(puVar1 + 0x50) = param_1;
  *(undefined8 *)(puVar1 + 0x58) = param_16;
  *(undefined8 *)(puVar1 + 0x60) = param_20;
  *(undefined8 *)(puVar1 + 0x68) = param_10;
  *(undefined8 *)(puVar1 + 0x70) = param_19;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_11;
  *(undefined8 *)(puVar1 + 0x88) = param_3;
  *(undefined8 *)(puVar1 + 0x90) = param_9;
  *(undefined8 *)(puVar1 + 0x98) = param_4;
  *(undefined8 *)(puVar1 + 0xa0) = param_8;
  *(undefined8 *)(puVar1 + 0xa8) = param_12;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_12);
  func_0x0001000823a8(FUN_10315f134,puVar1);
  return;
}



/* Entry: 10315f134; end: 10315f17f;  */

void FUN_10315f134(void)

{
  long unaff_x20;
  
  func_0x00010315ef3c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8));
  return;
}



/* Entry: 10315f180; end: 10315f18f;  */

undefined1  [16] FUN_10315f180(void)

{
  return ZEXT816(0x110614fd0);
}



/* Entry: 10315f190; end: 10315f6b7;  */

void FUN_10315f190(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 auStack_70 [2];
  
  uVar12 = *param_2;
  func_0x0001000285a8(0x112f45b60,&UNK_10db92360);
  puVar1 = auStack_70;
  auStack_70[0] = uVar12;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x000103161fe4();
  pcVar3 = "SCDWebExplainerTrayScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCDWebExplainerTrayScopeExposerSubjectServiceProvider",0x35,2);
  func_0x000103162064();
  func_0x000100082720("SCGroupExternalShareScopeExposerSubjectServiceProvider",0x36,2);
  puVar4 = puVar2;
  FUN_103162024();
  func_0x000100082720("SCDWebExplainerTrayScopeExposerObservableServiceProvider",0x38,2);
  pcVar5 = pcVar3;
  FUN_1031620f0();
  func_0x000100082720("SCGroupExternalShareScopeExposerObservableServiceProvider",0x39,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_10315eb40;
  func_0x0001000823a8(FUN_10315eb40,0);
  func_0x000100082720("ModularCallScopedServicesCleanupRelayServiceProvider",0x34,2);
  puVar7 = puVar2;
  FUN_103161e38(puVar2,pcVar3);
  func_0x000100082720("ModularCallScopeGraphBridgeServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112f45b68,&UNK_10db92370);
  puVar8 = &UNK_110615018;
  func_0x000107c613fc(&UNK_110615018,200,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar1;
  *(undefined8 *)(puVar8 + 0x18) = param_3;
  *(undefined8 *)(puVar8 + 0x20) = param_4;
  *(undefined8 *)(puVar8 + 0x28) = param_5;
  *(undefined8 *)(puVar8 + 0x30) = param_6;
  *(undefined8 *)(puVar8 + 0x38) = param_7;
  *(undefined8 *)(puVar8 + 0x40) = param_8;
  *(undefined8 *)(puVar8 + 0x48) = param_9;
  *(undefined8 *)(puVar8 + 0x50) = param_10;
  *(undefined8 *)(puVar8 + 0x58) = param_11;
  *(undefined8 *)(puVar8 + 0x60) = param_12;
  *(undefined8 *)(puVar8 + 0x68) = param_13;
  *(undefined8 *)(puVar8 + 0x70) = param_14;
  *(undefined8 *)(puVar8 + 0x78) = param_15;
  *(undefined8 *)(puVar8 + 0x80) = param_16;
  *(undefined8 *)(puVar8 + 0x88) = param_17;
  *(undefined8 *)(puVar8 + 0x90) = param_18;
  *(undefined8 *)(puVar8 + 0x98) = param_19;
  *(undefined8 *)(puVar8 + 0xa0) = param_20;
  *(undefined8 *)(puVar8 + 0xa8) = param_21;
  *(undefined8 *)(puVar8 + 0xb0) = param_22;
  *(undefined8 **)(puVar8 + 0xb8) = puVar4;
  *(char **)(puVar8 + 0xc0) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(pcVar5);
  uVar12 = 0x10315f7cc;
  func_0x0001000823a8(0x10315f7cc,puVar8);
  func_0x000100082720("SCModularCallEntryPointWrapperServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112f45b70,&UNK_10db92378);
  puVar8 = &UNK_110615040;
  func_0x000107c613fc(&UNK_110615040,0x30,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar1;
  *(undefined8 **)(puVar8 + 0x18) = puVar7;
  *(code **)(puVar8 + 0x20) = pcVar6;
  *(undefined8 *)(puVar8 + 0x28) = uVar12;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(uVar12);
  pcVar9 = FUN_10315f820;
  func_0x0001000823a8(FUN_10315f820,puVar8);
  func_0x000100082720("ModularCallScopeInitializationPluginRegistryServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112f45af0,&UNK_10db92130);
  func_0x000107c6157c(pcVar9);
  uVar10 = 0x10315f82c;
  func_0x0001000823a8(0x10315f82c,pcVar9);
  func_0x000100082720("ModularCallScopeInitializationServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112f45ae0,&UNK_10db92120);
  func_0x000107c6157c(uVar10);
  uVar11 = 0x10315f834;
  func_0x0001000823a8(0x10315f834,uVar10);
  func_0x000100082720("ModularCallScopedServicesServiceProvider",0x28,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar8 = &UNK_110615068;
  func_0x000107c613fc(&UNK_110615068,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar11;
  *(code **)(puVar8 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  uVar11 = 0x10315f83c;
  func_0x0001000823a8(0x10315f83c,puVar8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(uVar10);
  func_0x000100082720("ModularCallScopeEntryPointProvider",0x22,2);
  *param_1 = uVar11;
  return;
}



/* Entry: 10315f6b8; end: 10315f81f;  */

void FUN_10315f6b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10315f820; end: 10315f843;  */

void FUN_10315f820(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103161564(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("ModularCallScopeInitializationPluginRegistryServiceProvider",0x3b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10315f844; end: 1031612bb;  */

void FUN_10315f844(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100083b20(&uStack_f8);
  func_0x000100083b20(&uStack_100);
  func_0x000100083b20(&uStack_108);
  func_0x000100083b20(&uStack_110);
  func_0x000100083b20(&uStack_118);
  func_0x000100083b20(&uStack_120);
  FUN_1031614b4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  *(undefined8 *)(param_2 + 0x60) = uStack_b0;
  *(undefined8 *)(param_2 + 0x68) = uStack_b8;
  *(undefined8 *)(param_2 + 0x70) = uStack_c0;
  *(undefined8 *)(param_2 + 0x78) = uStack_c8;
  *(undefined8 *)(param_2 + 0x80) = uStack_d0;
  *(undefined8 *)(param_2 + 0x88) = uStack_d8;
  *(undefined8 *)(param_2 + 0x90) = uStack_e0;
  *(undefined8 *)(param_2 + 0x98) = uStack_e8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_f0;
  *(undefined8 *)(param_2 + 0xa8) = uStack_f8;
  *(undefined8 *)(param_2 + 0xb0) = uStack_100;
  *(undefined8 *)(param_2 + 0xb8) = uStack_108;
  *(undefined8 *)(param_2 + 0xc0) = uStack_110;
  func_0x0001000285a8(0x112ec4c78,&UNK_10dae4b88);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c61174();
  uVar12 = uStack_d0;
  func_0x000107c61174();
  uVar13 = uStack_d8;
  func_0x000107c61174();
  uVar14 = uStack_e0;
  func_0x000107c61174();
  uVar15 = uStack_e8;
  func_0x000107c61174();
  uVar16 = uStack_f0;
  func_0x000107c61174(uStack_f0);
  uVar21 = uStack_f8;
  func_0x000107c61174();
  uVar22 = uStack_100;
  func_0x000107c61174();
  uVar23 = uStack_108;
  func_0x000107c61174();
  uVar24 = uStack_110;
  func_0x000107c61174();
  uVar18 = uStack_118;
  func_0x000107c6157c(uStack_118);
  func_0x00010017da58();
  puVar19 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar18);
  *(undefined **)(param_2 + 0x18) = puVar19;
  func_0x0001000285a8(0x112f45b78,&UNK_10db92380);
  func_0x000107c610f8();
  uVar18 = uStack_120;
  func_0x000107c6157c(uStack_120);
  func_0x00010017da58();
  puVar19 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar18);
  *(undefined **)(param_2 + 0x20) = puVar19;
  puVar19 = PTR_PTR_1126acce8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar19;
  func_0x000107c61174();
  uVar17 = auStack_70[0];
  func_0x000107c61174();
  uVar18 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f129d70);
  func_0x000107c5a49c(puVar19);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174(puVar19);
  uVar18 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar19);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar18);
  uVar20 = 0x655349556c6c6163;
  func_0x000107c5fadc(0x655349556c6c6163,0xee00736563697672);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar20);
  uVar18 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f05cab0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174(uVar20);
  uVar18 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19c30);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2d400);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174(uVar20);
  uVar18 = 0x72655370756f7267;
  func_0x000107c5fadc(0x72655370756f7267,0xed00007365636976);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar18);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef13520);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1f630);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f129d90);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f007fb0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f129db0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f007f40);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar18);
  func_0x000107c61174(uVar21);
  func_0x000107c61174(uVar20);
  uVar18 = 0x767265536b636564;
  func_0x000107c5fadc(0x767265536b636564,0xec00000073656369);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar18);
  uVar25 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar22);
  func_0x000107c61174(uVar25);
  uVar18 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar18);
  func_0x000107c61174(uVar23);
  func_0x000107c61174();
  uVar18 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef2bff0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f129dd0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174(uVar18);
  uVar20 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f129df0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar20);
  uVar18 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f129e10);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar20);
  func_0x000107c3e740(uVar25);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61574(uStack_118);
  func_0x000107c61574(uStack_120);
  *param_1 = param_2;
  return;
}



/* Entry: 1031612bc; end: 1031613a7;  */

void FUN_1031612bc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  return;
}



/* Entry: 1031613a8; end: 1031613af;  */

undefined8 FUN_1031613a8(void)

{
  return 0x1b;
}



/* Entry: 1031613b0; end: 103161433;  */

void FUN_1031613b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1031614f4,param_2,FUN_1031614f8,param_2,FUN_103161520,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103161434; end: 103161483;  */

undefined8 FUN_103161434(void)

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



/* Entry: 103161484; end: 1031614b3;  */

undefined ** FUN_103161484(void)

{
  return &PTR_DAT_1130666a0;
}



/* Entry: 1031614b4; end: 1031614d3;  */

void FUN_1031614b4(void)

{
  func_0x000107c61168(&PTR_PTR_112f45be8);
  return;
}



/* Entry: 1031614d4; end: 1031614f7;  */

undefined1  [16] FUN_1031614d4(void)

{
  return ZEXT816(0x1106150c0);
}



/* Entry: 1031614f8; end: 10316151f;  */

void FUN_1031614f8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103161520; end: 103161527;  */

undefined8 FUN_103161520(void)

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



/* Entry: 103161528; end: 103161563;  */

void FUN_103161528(undefined8 *param_1,undefined8 param_2)

{
  FUN_103161564();
  func_0x0001000a7f38("ModularCallScopeInitializationPluginRegistryServiceProvider",0x3b,2);
  *param_1 = param_2;
  return;
}



/* Entry: 103161564; end: 10316174f;  */

void FUN_103161564(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074cd80;
  ppuVar4 = &PTR_DAT_1130666a0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110615110;
  func_0x000107c613fc(&UNK_110615110,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f45cf8;
  func_0x0001000285a8(0x112f45cf8,&UNK_10db92540);
  func_0x0001000a6ee8(&UNK_1106153c8,"ModularCallScopeGraphBridgeScopeInitializationPluginKey",0x37,
                      2,FUN_103161750,puVar2,uVar3,&UNK_1106153c8,&PTR_DAT_112f45d98);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_110615138;
  func_0x000107c613fc(&UNK_110615138,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110614ee0,"ModularCallScopedServicesScopeInitializationPluginKey",0x35,2,
                      FUN_103161838,puVar2,uVar3,&UNK_110614ee0,&PTR_DAT_112f45af8);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1106150c0,"SCModularCallEntryPointWrapperScopeInitializationPluginKey",
                      0x3a,2,FUN_1031618b4,param_4,uVar3,&UNK_1106150c0,&PTR_DAT_112f45b80);
  func_0x000107c61574(param_4);
  uVar3 = 0x112f45d00;
  func_0x0001000285a8(0x112f45d00,&UNK_10db92548);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 103161750; end: 10316178f;  */

void FUN_103161750(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x00010316215c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ModularCallScopeGraphBridgeScopeInitializationPluginProvider",0x3c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103161790; end: 103161837;  */

void FUN_103161790(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110615160;
  func_0x000107c613fc(&UNK_110615160,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1031618f0;
  func_0x0001000823a8(FUN_1031618f0,puVar1);
  func_0x000100082720("ModularCallScopedServicesScopeInitializationPluginProvider",0x3a,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 103161838; end: 10316183f;  */

void FUN_103161838(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110615160;
  func_0x000107c613fc(&UNK_110615160,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1031618f0;
  func_0x0001000823a8(FUN_1031618f0,puVar3);
  func_0x000100082720("ModularCallScopedServicesScopeInitializationPluginProvider",0x3a,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 103161840; end: 1031618b3;  */

void FUN_103161840(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1031618bc;
  func_0x0001000823a8(0x1031618bc,param_3);
  func_0x000100082720("SCModularCallEntryPointWrapperScopeInitializationPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031618b4; end: 1031618c3;  */

void FUN_1031618b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1031618bc;
  func_0x0001000823a8();
  func_0x000100082720("SCModularCallEntryPointWrapperScopeInitializationPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031618c4; end: 1031618ef;  */

void FUN_1031618c4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031618f0; end: 1031618f7;  */

void FUN_1031618f0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110614f68;
  func_0x000107c613fc(&UNK_110614f68,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10315ed54;
  func_0x00010058fa64(FUN_10315ed54,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1031618f8; end: 103161a0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1031618f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = auStack_70;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_103161d48();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_58);
    uVar1 = uStack_58;
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_3;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112f45d08) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112f45d10) = param_4;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103161a10);
  (*pcVar2)();
}



/* Entry: 103161a10; end: 103161a6f; -[_TtC27ModularCallScopeGraphBridge42ModularCallScopeGraphBridgeSaberEntryPoint init] */

void FUN_103161a10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ModularCallScopeGraphBridge.ModularCallScopeGraphBridgeSaberEntryPoint",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103161a3c);
  (*pcVar1)();
}



/* Entry: 103161a70; end: 103161aa7; -[_TtC27ModularCallScopeGraphBridge42ModularCallScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103161a8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103161a90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103161a70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f45d08));
  return;
}



/* Entry: 103161aa8; end: 103161acf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103161aa8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f45d10),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f45d08));
  return;
}



/* Entry: 103161ad0; end: 103161aef;  */

void FUN_103161ad0(void)

{
  func_0x000107c61168(&PTR_PTR_1128bb788);
  return;
}



/* Entry: 103161af0; end: 103161b77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103161af0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f45d40) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f45d48);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103161b78);
  (*pcVar2)();
}



/* Entry: 103161b78; end: 103161c5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103161b78(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f45d40);
  *(undefined **)(unaff_x20 + _DAT_112f45d40) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f45d48);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f45d48))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110615280;
  func_0x000107c613fc(&UNK_110615280,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x103161c64,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 103161c60; end: 103161c6b;  */

void FUN_103161c60(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103161c6c; end: 103161ccb; -[_TtC27ModularCallScopeGraphBridge40ModularCallScopedServicesSaberEntryPoint init] */

void FUN_103161c6c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ModularCallScopeGraphBridge.ModularCallScopedServicesSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103161c98);
  (*pcVar1)();
}



/* Entry: 103161ccc; end: 103161d03; -[_TtC27ModularCallScopeGraphBridge40ModularCallScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103161ccc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f45d48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f45d40));
  return;
}



/* Entry: 103161d04; end: 103161d07;  */

void FUN_103161d04(void)

{
  return;
}


