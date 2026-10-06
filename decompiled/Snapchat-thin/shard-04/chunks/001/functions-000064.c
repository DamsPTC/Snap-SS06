/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103084778; end: 1030848ef;  */

void FUN_103084778(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110605a88;
  func_0x000107c613fc(&UNK_110605a88,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1030848f0,puVar1);
  return;
}



/* Entry: 1030848f0; end: 1030848f7;  */

void FUN_1030848f0(undefined8 *param_1)

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
  func_0x000107c61428(0x112f38488,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f38488,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110605b60;
  func_0x000107c613fc(&UNK_110605b60,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1030849c4;
  func_0x00010058fa64(0x1030849c4,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1030848f8; end: 103084953;  */

void FUN_1030848f8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f38488,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f38488,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 103084954; end: 1030849cb;  */

undefined ** FUN_103084954(void)

{
  return &PTR_DAT_1130664c0;
}



/* Entry: 1030849cc; end: 103084a13; -[SCAdAttachmentHandlerScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030849cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f384f0;
  func_0x000107c61428(param_1 + _DAT_112f384f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103084a14; end: 103084a6b; -[SCAdAttachmentHandlerScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103084a14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f384f0;
  func_0x000107c61428(param_1 + _DAT_112f384f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103084a6c; end: 103084ab3; -[SCAdAttachmentHandlerScopeGraphBridgeSaberEntryPoint adAttachmentPresenterScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103084a6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f384f8;
  func_0x000107c61428(param_1 + _DAT_112f384f8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103084ab4; end: 103084abf; -[SCAdAttachmentHandlerScopeGraphBridgeSaberEntryPoint setAdAttachmentPresenterScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103084ab4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f384f8;
  func_0x000107c61428(param_1 + _DAT_112f384f8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103084ac0; end: 103084b07; -[SCAdAttachmentHandlerScopeGraphBridgeSaberEntryPoint adAttachmentHandlerScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103084ac0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f38500;
  func_0x000107c61428(param_1 + _DAT_112f38500,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103084b08; end: 103084b13; -[SCAdAttachmentHandlerScopeGraphBridgeSaberEntryPoint setAdAttachmentHandlerScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103084b08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f38500;
  func_0x000107c61428(param_1 + _DAT_112f38500,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103084b14; end: 103084b73;  */

void FUN_103084b14(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 103084b74; end: 103084d2f;  */

/* WARNING: Possible PIC construction at 0x000103084c8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103084cb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103084cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103084d04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103084cc4) */
/* WARNING: Removing unreachable block (ram,0x000103084cb4) */
/* WARNING: Removing unreachable block (ram,0x000103084c90) */
/* WARNING: Removing unreachable block (ram,0x000103084d08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103084b74(void)

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
  func_0x000107c3d264();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c3d22c();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_103084190();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_103084408();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103084d30);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112f38418) = lVar5;
      *(long *)(lVar3 + _DAT_112f38420) = unaff_x20;
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



/* Entry: 103084d30; end: 103084d57; -[SCAdAttachmentHandlerScopeGraphBridgeSaberEntryPoint begin] */

void FUN_103084d30(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103084b74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103084d58; end: 103084d9b; -[SCAdAttachmentHandlerScopeGraphBridgeSaberEntryPoint end] */

void FUN_103084d58(undefined8 param_1)

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



/* Entry: 103084d9c; end: 103084f9f;  */

void FUN_103084d9c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdf) || (param_3 != -0x7ffffffef0ee4080)) {
      uVar2 = 0xd000000000000021;
      func_0x000107c605b8(0xd000000000000021,0x800000010f11bf80,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffce) || (param_3 != -0x7ffffffef0ee4050)) &&
           (func_0x000107c605b8(0xd000000000000032,0x800000010f11bfb0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "AdAttachmentHandlerScopeGraphBridge/SCAdAttachmentHandlerScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x5e,2,0x33,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103084fa0);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52268();
        goto LAB_103084e28;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5227c();
  }
LAB_103084e28:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103084fa0; end: 10308504b; -[SCAdAttachmentHandlerScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_103084fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103084d9c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10308504c; end: 1030850c3; -[SCAdAttachmentHandlerScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308504c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f384f0,0);
  *(undefined8 *)(param_1 + _DAT_112f384f8) = 0;
  *(undefined8 *)(param_1 + _DAT_112f38500) = 0;
  *(undefined8 *)(param_1 + _DAT_112f38508) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030850c4; end: 1030850f7;  */

void FUN_1030850c4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030850f8; end: 10308514f; -[SCAdAttachmentHandlerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103085124: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103085128) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030850f8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f384f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f384f8));
  return;
}



/* Entry: 103085150; end: 10308516f;  */

void FUN_103085150(void)

{
  func_0x000107c61168(&PTR_PTR_1128b23d0);
  return;
}



/* Entry: 103085170; end: 1030851b7; -[SCAdAttachmentHandlerScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103085170(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f38538;
  func_0x000107c61428(param_1 + _DAT_112f38538,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030851b8; end: 10308520f; -[SCAdAttachmentHandlerScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030851b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f38538;
  func_0x000107c61428(param_1 + _DAT_112f38538,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103085210; end: 1030852e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103085210(undefined8 param_1,long param_2)

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
    FUN_1030843e8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f38450) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030852e8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f38458);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f38540);
    *(long **)(unaff_x20 + _DAT_112f38540) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1030852e8; end: 10308530f; -[SCAdAttachmentHandlerScopedServicesSaberEntryPoint begin] */

void FUN_1030852e8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103085210();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103085310; end: 103085487;  */

/* WARNING: Possible PIC construction at 0x000103085378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103085410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010308537c) */
/* WARNING: Removing unreachable block (ram,0x000103085414) */
/* WARNING: Removing unreachable block (ram,0x00010308542c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103085310(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f38540);
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



/* Entry: 103085488; end: 10308548f;  */

void FUN_103085488(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103085490; end: 1030854c3; -[SCAdAttachmentHandlerScopedServicesSaberEntryPoint end] */

void FUN_103085490(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103085310();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1030854c4; end: 1030855e3;  */

void FUN_1030854c4(long param_1,long param_2,long param_3)

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
                        "AdAttachmentHandlerScopeGraphBridge/SCAdAttachmentHandlerScopedServicesSaberEntryPoint.swift"
                        ,0x5c,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030855e4);
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



/* Entry: 1030855e4; end: 10308568f; -[SCAdAttachmentHandlerScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1030855e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1030854c4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103085690; end: 1030856ef; -[SCAdAttachmentHandlerScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103085690(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f38538,0);
  *(undefined8 *)(param_1 + _DAT_112f38540) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030856f0; end: 103085723;  */

void FUN_1030856f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103085724; end: 10308575b; -[SCAdAttachmentHandlerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103085724(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f38538);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f38540));
  return;
}



/* Entry: 10308575c; end: 10308577b;  */

void FUN_10308575c(void)

{
  func_0x000107c61168(&PTR_PTR_1128b24a0);
  return;
}



/* Entry: 10308577c; end: 103085867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308577c(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_2;
  func_0x000100083b20(&uStack_38);
  FUN_103085bdc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f38578) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f38580) = uStack_38;
  puVar1 = PTR_s_init_1125d9248;
  lStack_48 = lVar3;
  lStack_40 = lVar2;
  func_0x000107c6157c(param_2);
  plVar4 = &lStack_48;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 103085868; end: 103085887;  */

void FUN_103085868(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103085888; end: 1030858e7; -[_TtC55AdAttachmentPresenterPluginScopedFactoryServiceProvider41AdAttachmentPresenterPluginScopedServices init] */

void FUN_103085888(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdAttachmentPresenterPluginScopedFactoryServiceProvider.AdAttachmentPresenterPluginScopedServices"
                      ,0x61,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030858b4);
  (*pcVar1)();
}



/* Entry: 1030858e8; end: 10308591f; -[_TtC55AdAttachmentPresenterPluginScopedFactoryServiceProvider41AdAttachmentPresenterPluginScopedServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103085904: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103085908) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030858e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f38580));
  return;
}



/* Entry: 103085920; end: 10308598b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103085920(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110605d90;
  func_0x000107c613fc(&UNK_110605d90,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_103085c74,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10308598c; end: 10308599b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308598c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + _DAT_112f38578));
  return;
}



/* Entry: 10308599c; end: 103085a37;  */

void FUN_10308599c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&lStack_38);
  func_0x000107c61428(lStack_38 + 0x10,auStack_50,1,0);
  uVar2 = *(undefined8 *)(lStack_38 + 0x10);
  *(undefined8 *)(lStack_38 + 0x10) = auStack_50[0];
  *(undefined ***)(lStack_38 + 0x18) = &PTR_DAT_110605c88;
  uVar1 = auStack_50[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110605c98;
  return;
}



/* Entry: 103085a38; end: 103085a6f;  */

void FUN_103085a38(long *param_1)

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



/* Entry: 103085a70; end: 103085a77;  */

undefined8 FUN_103085a70(void)

{
  return 0x1b;
}



/* Entry: 103085a78; end: 103085bab;  */

void FUN_103085a78(undefined8 *param_1)

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
  puVar1 = &UNK_110605db8;
  func_0x000107c613fc(&UNK_110605db8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103085c4c;
  func_0x00010058fa64(FUN_103085c4c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103085bac; end: 103085bdb;  */

undefined ** FUN_103085bac(void)

{
  return &PTR_DAT_1130664d8;
}



/* Entry: 103085bdc; end: 103085bfb;  */

void FUN_103085bdc(void)

{
  func_0x000107c61168(&PTR_PTR_1128b2560);
  return;
}



/* Entry: 103085bfc; end: 103085c4b;  */

undefined1  [16] FUN_103085bfc(void)

{
  return ZEXT816(0x110605cf0);
}



/* Entry: 103085c4c; end: 103085c73;  */

void FUN_103085c4c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 103085c74; end: 103085c77;  */

void FUN_103085c74(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103085c78; end: 103085f67;  */

/* WARNING: Possible PIC construction at 0x000103085e40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103085e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103085e60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103085e70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103085e80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103085e90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103085ea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103085eb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103085ec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103085ed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103085ee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103085ef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103085f00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103085f10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103085f20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103085f30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103085f40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103085f34) */
/* WARNING: Removing unreachable block (ram,0x000103085f24) */
/* WARNING: Removing unreachable block (ram,0x000103085f14) */
/* WARNING: Removing unreachable block (ram,0x000103085f04) */
/* WARNING: Removing unreachable block (ram,0x000103085ef4) */
/* WARNING: Removing unreachable block (ram,0x000103085ee4) */
/* WARNING: Removing unreachable block (ram,0x000103085ed4) */
/* WARNING: Removing unreachable block (ram,0x000103085ec4) */
/* WARNING: Removing unreachable block (ram,0x000103085eb4) */
/* WARNING: Removing unreachable block (ram,0x000103085ea4) */
/* WARNING: Removing unreachable block (ram,0x000103085e94) */
/* WARNING: Removing unreachable block (ram,0x000103085e84) */
/* WARNING: Removing unreachable block (ram,0x000103085e74) */
/* WARNING: Removing unreachable block (ram,0x000103085e64) */
/* WARNING: Removing unreachable block (ram,0x000103085e54) */
/* WARNING: Removing unreachable block (ram,0x000103085e44) */
/* WARNING: Removing unreachable block (ram,0x000103085f44) */

void FUN_103085c78(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_110605e48;
  func_0x000107c613fc(&UNK_110605e48,0x120,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  uVar2 = 0x112f385f8;
  func_0x0001000285a8(0x112f385f8,&UNK_10db83a78);
  func_0x000107c613fc();
  uVar3 = 0x1030866bc;
  func_0x0001000841fc(0x1030866bc,puVar1,uVar2);
  func_0x000100084214(&UNK_10db83a40,0x37,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 103085f68; end: 103085fcb;  */

void FUN_103085f68(void)

{
  long unaff_x20;
  
  FUN_103085c78(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118));
  return;
}



/* Entry: 103085fcc; end: 103085fdb;  */

undefined1  [16] FUN_103085fcc(void)

{
  return ZEXT816(0x110605e28);
}



/* Entry: 103085fdc; end: 10308658f;  */

void FUN_103085fdc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 auStack_70 [2];
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112f38600,&UNK_10db83a80);
  puVar1 = auStack_70;
  auStack_70[0] = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1030c5634();
  func_0x000100082720("AdAttachmentPresenterPluginScopeGraphBridgeServicesServiceProvider",0x42,2);
  func_0x0001000285a8(0x112f38608,&UNK_10db83a88);
  puVar3 = &UNK_110605e70;
  func_0x000107c613fc(&UNK_110605e70,0x128,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_18;
  *(undefined8 *)(puVar3 + 0x20) = param_11;
  *(undefined8 *)(puVar3 + 0x28) = param_10;
  *(undefined8 *)(puVar3 + 0x30) = param_5;
  *(undefined8 *)(puVar3 + 0x38) = param_28;
  *(undefined8 *)(puVar3 + 0x40) = param_12;
  *(undefined8 *)(puVar3 + 0x48) = param_6;
  *(undefined8 *)(puVar3 + 0x50) = param_3;
  *(undefined8 *)(puVar3 + 0x58) = param_19;
  *(undefined8 *)(puVar3 + 0x60) = param_25;
  *(undefined8 *)(puVar3 + 0x68) = param_33;
  *(undefined8 *)(puVar3 + 0x70) = param_27;
  *(undefined8 *)(puVar3 + 0x78) = param_30;
  *(undefined8 *)(puVar3 + 0x80) = param_31;
  *(undefined8 *)(puVar3 + 0x88) = param_16;
  *(undefined8 *)(puVar3 + 0x90) = param_36;
  *(undefined8 *)(puVar3 + 0x98) = param_32;
  *(undefined8 *)(puVar3 + 0xa0) = param_8;
  *(undefined8 *)(puVar3 + 0xa8) = param_9;
  *(undefined8 *)(puVar3 + 0xb0) = param_23;
  *(undefined8 *)(puVar3 + 0xb8) = param_17;
  *(undefined8 *)(puVar3 + 0xc0) = param_22;
  *(undefined8 *)(puVar3 + 200) = param_35;
  *(undefined8 *)(puVar3 + 0xd0) = param_14;
  *(undefined8 *)(puVar3 + 0xd8) = param_26;
  *(undefined8 *)(puVar3 + 0xe0) = param_34;
  *(undefined8 *)(puVar3 + 0xe8) = param_15;
  *(undefined8 *)(puVar3 + 0xf0) = param_24;
  *(undefined8 *)(puVar3 + 0xf8) = param_20;
  *(undefined8 *)(puVar3 + 0x100) = param_21;
  *(undefined8 *)(puVar3 + 0x108) = param_13;
  *(undefined8 *)(puVar3 + 0x110) = param_7;
  *(undefined8 *)(puVar3 + 0x118) = param_29;
  *(undefined8 *)(puVar3 + 0x120) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_4);
  uVar10 = 0x103086744;
  func_0x0001000823a8(0x103086744,puVar3);
  func_0x000100082720("AdAttachmentPresenterPluginRegistryServiceProvider",0x32,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_103085a38;
  func_0x0001000823a8(FUN_103085a38,0);
  func_0x000100082720("AdAttachmentPresenterPluginScopedServicesCleanupRelayServiceProvider",0x44,2)
  ;
  uVar5 = uVar10;
  FUN_1030c6590();
  func_0x000100082720("AdAttachmentPresenterPluginCollectionServiceProvider",0x34,2);
  func_0x0001000285a8(0x112f38610,&UNK_10db83a98);
  puVar3 = &UNK_110605e98;
  func_0x000107c613fc(&UNK_110605e98,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(code **)(puVar3 + 0x20) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(pcVar4);
  pcVar6 = FUN_1030867b0;
  func_0x0001000823a8(FUN_1030867b0,puVar3);
  func_0x000100082720("AdAttachmentPresenterPluginScopeInitializationPluginRegistryServiceProvider",
                      0x4b,2);
  func_0x0001000285a8(0x112f38590,&UNK_10db837b0);
  func_0x000107c6157c(pcVar6);
  uVar7 = 0x1030867bc;
  func_0x0001000823a8(0x1030867bc,pcVar6);
  func_0x000100082720("AdAttachmentPresenterPluginScopeInitializationServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112f38570,&UNK_10db837a0);
  puVar3 = &UNK_110605ec0;
  func_0x000107c613fc(&UNK_110605ec0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  *(undefined8 *)(puVar3 + 0x18) = uVar7;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1030867c4;
  func_0x0001000823a8(0x1030867c4,puVar3);
  func_0x000100082720("AdAttachmentPresenterPluginScopedServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f38588,&UNK_10db83aa0);
  puVar3 = &UNK_110605ee8;
  func_0x000107c613fc(&UNK_110605ee8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar9 = FUN_1030867f8;
  func_0x0001000823a8(FUN_1030867f8,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("AdAttachmentPresenterPluginScopeEntryPointProvider",0x32,2);
  *param_1 = pcVar9;
  return;
}



/* Entry: 103086590; end: 1030867af;  */

void FUN_103086590(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1030867b0; end: 1030867cb;  */

void FUN_1030867b0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103087a18(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000a7f38("AdAttachmentPresenterPluginScopeInitializationPluginRegistryServiceProvider",
                      0x4b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030867cc; end: 1030867f7;  */

void FUN_1030867cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1030867f8; end: 1030867ff;  */

void FUN_1030867f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_38);
  func_0x000107c61428(lStack_38 + 0x10,auStack_50,1,0);
  uVar2 = *(undefined8 *)(lStack_38 + 0x10);
  *(undefined8 *)(lStack_38 + 0x10) = auStack_50[0];
  *(undefined ***)(lStack_38 + 0x18) = &PTR_DAT_110605c88;
  uVar1 = auStack_50[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110605c98;
  return;
}



/* Entry: 103086800; end: 103087473;  */

void FUN_103086800(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_110609128;
  ppuVar4 = &PTR_DAT_112f39ed0;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110605f10;
  func_0x000107c613fc(&UNK_110605f10,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  uVar3 = 0x112f38618;
  func_0x0001000285a8(0x112f38618,&UNK_10db83aa8);
  func_0x0001000a6ee8(&UNK_110606240,"AdAdToCallAttachmentPresenterPluginKey",0x26,2,FUN_103087474,
                      puVar2,uVar3,&UNK_110606240,&PTR_DAT_112f38640);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_110605f38;
  func_0x000107c613fc(&UNK_110605f38,0x50,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  *(undefined8 *)(puVar2 + 0x38) = param_8;
  *(undefined8 *)(puVar2 + 0x40) = param_9;
  *(undefined8 *)(puVar2 + 0x48) = param_10;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x0001000a6ee8(&UNK_1106071e0,"AdAppInstallAttachmentPresenterPluginKey",0x28,2,0x10308748c,
                      puVar2,uVar3,&UNK_1106071e0,&PTR_DAT_112f38b88);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_110605f60;
  func_0x000107c613fc(&UNK_110605f60,0x88,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_6;
  *(undefined8 *)(puVar2 + 0x28) = param_9;
  *(undefined8 *)(puVar2 + 0x30) = param_10;
  *(undefined8 *)(puVar2 + 0x38) = param_8;
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  *(undefined8 *)(puVar2 + 0x48) = param_11;
  *(undefined8 *)(puVar2 + 0x50) = param_12;
  *(undefined8 *)(puVar2 + 0x58) = param_7;
  *(undefined8 *)(puVar2 + 0x60) = param_13;
  *(undefined8 *)(puVar2 + 0x68) = param_14;
  *(undefined8 *)(puVar2 + 0x70) = param_2;
  *(undefined8 *)(puVar2 + 0x78) = param_15;
  *(undefined8 *)(puVar2 + 0x80) = param_16;
  func_0x000107c6157c();
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
  func_0x0001000a6ee8(&UNK_110607478,"AdDeepLinkAttachmentPresenterPluginKey",0x26,2,0x1030874a4,
                      puVar2,uVar3,&UNK_110607478,&PTR_DAT_112f38cc8);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_110605f88;
  func_0x000107c613fc(&UNK_110605f88,0xb0,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_17;
  *(undefined8 *)(puVar2 + 0x20) = param_18;
  *(undefined8 *)(puVar2 + 0x28) = param_14;
  *(undefined8 *)(puVar2 + 0x30) = param_19;
  *(undefined8 *)(puVar2 + 0x38) = param_20;
  *(undefined8 *)(puVar2 + 0x40) = param_21;
  *(undefined8 *)(puVar2 + 0x48) = param_22;
  *(undefined8 *)(puVar2 + 0x50) = param_23;
  *(undefined8 *)(puVar2 + 0x58) = param_24;
  *(undefined8 *)(puVar2 + 0x60) = param_25;
  *(undefined8 *)(puVar2 + 0x68) = param_26;
  *(undefined8 *)(puVar2 + 0x70) = param_11;
  *(undefined8 *)(puVar2 + 0x78) = param_12;
  *(undefined8 *)(puVar2 + 0x80) = param_27;
  *(undefined8 *)(puVar2 + 0x88) = param_28;
  *(undefined8 *)(puVar2 + 0x90) = param_29;
  *(undefined8 *)(puVar2 + 0x98) = param_30;
  *(undefined8 *)(puVar2 + 0xa0) = param_31;
  *(undefined8 *)(puVar2 + 0xa8) = param_16;
  func_0x000107c6157c();
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c();
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x0001000a6ee8(&UNK_110607600,"AdInstantPageAttachmentPresenterPluginKey",0x29,2,
                      FUN_1030874bc,puVar2,uVar3,&UNK_110607600,&PTR_DAT_112f38de8);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_110605fb0;
  func_0x000107c613fc(&UNK_110605fb0,0x80,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_23;
  *(undefined8 *)(puVar2 + 0x20) = param_30;
  *(undefined8 *)(puVar2 + 0x28) = param_29;
  *(undefined8 *)(puVar2 + 0x30) = param_17;
  *(undefined8 *)(puVar2 + 0x38) = param_27;
  *(undefined8 *)(puVar2 + 0x40) = param_22;
  *(undefined8 *)(puVar2 + 0x48) = param_19;
  *(undefined8 *)(puVar2 + 0x50) = param_10;
  *(undefined8 *)(puVar2 + 0x58) = param_32;
  *(undefined8 *)(puVar2 + 0x60) = param_20;
  *(undefined8 *)(puVar2 + 0x68) = param_5;
  *(undefined8 *)(puVar2 + 0x70) = param_16;
  *(undefined8 *)(puVar2 + 0x78) = param_33;
  func_0x000107c6157c();
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  func_0x0001000a6ee8(&UNK_1106080d8,"AdLeadGenAttachmentPresenterPluginKey",0x25,2,0x103087530,
                      puVar2,uVar3,&UNK_1106080d8,&PTR_DAT_112f39438);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_110605fd8;
  func_0x000107c613fc(&UNK_110605fd8,0x70,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_9;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  *(undefined8 *)(puVar2 + 0x38) = param_8;
  *(undefined8 *)(puVar2 + 0x40) = param_34;
  *(undefined8 *)(puVar2 + 0x48) = param_35;
  *(undefined8 *)(puVar2 + 0x50) = param_36;
  *(undefined8 *)(puVar2 + 0x58) = param_10;
  *(undefined8 *)(puVar2 + 0x60) = param_7;
  *(undefined8 *)(puVar2 + 0x68) = param_17;
  func_0x000107c6157c();
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x0001000a6ee8(&UNK_1106084f8,"AdPlayableAttachmentPresenterPluginKey",0x26,2,0x103087594,
                      puVar2,uVar3,&UNK_1106084f8,&PTR_DAT_112f39740);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_110606000;
  func_0x000107c613fc(&UNK_110606000,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_17;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_17);
  func_0x0001000a6ee8(&UNK_110608768,"AdSurveyAttachmentPresenterPluginKey",0x24,2,FUN_1030875f8,
                      puVar2,uVar3,&UNK_110608768,&PTR_DAT_112f399f8);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_110606028;
  func_0x000107c613fc(&UNK_110606028,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110606460,"AdToCallAttachmentPresenterPluginKey",0x24,2,FUN_10308763c,
                      puVar2,uVar3,&UNK_110606460,&PTR_DAT_112f386a8);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_2);
  func_0x0001000a6ee8(&UNK_110606560,"AdToMessageAttachmentPresenterPluginKey",0x27,2,FUN_1030876a4,
                      param_2,uVar3,&UNK_110606560,&PTR_DAT_112f386d0);
  func_0x000107c61574(param_2);
  puVar2 = &UNK_110606050;
  func_0x000107c613fc(&UNK_110606050,0x58,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_10;
  *(undefined8 *)(puVar2 + 0x28) = param_11;
  *(undefined8 *)(puVar2 + 0x30) = param_12;
  *(undefined8 *)(puVar2 + 0x38) = param_14;
  *(undefined8 *)(puVar2 + 0x40) = param_13;
  *(undefined8 *)(puVar2 + 0x48) = param_16;
  *(undefined8 *)(puVar2 + 0x50) = param_15;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x0001000a6ee8(&UNK_1106088f0,"AdWebViewAttachmentPresenterPluginKey",0x25,2,FUN_1030876e4,
                      puVar2,uVar3,&UNK_1106088f0,&PTR_DAT_112f39bf8);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_110606078;
  func_0x000107c613fc(&UNK_110606078,0x50,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  *(undefined8 *)(puVar2 + 0x38) = param_8;
  *(undefined8 *)(puVar2 + 0x40) = param_9;
  *(undefined8 *)(puVar2 + 0x48) = param_10;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x0001000a6ee8(&UNK_1106067b8,"SCAdAppInstallAttachmentPresenterPluginKey",0x2a,2,
                      FUN_103087758,puVar2,uVar3,&UNK_1106067b8,&PTR_DAT_112f38760);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1106060a0;
  func_0x000107c613fc(&UNK_1106060a0,0x88,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_6;
  *(undefined8 *)(puVar2 + 0x28) = param_7;
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  *(undefined8 *)(puVar2 + 0x40) = param_8;
  *(undefined8 *)(puVar2 + 0x48) = param_9;
  *(undefined8 *)(puVar2 + 0x50) = param_10;
  *(undefined8 *)(puVar2 + 0x58) = param_11;
  *(undefined8 *)(puVar2 + 0x60) = param_12;
  *(undefined8 *)(puVar2 + 0x68) = param_14;
  *(undefined8 *)(puVar2 + 0x70) = param_13;
  *(undefined8 *)(puVar2 + 0x78) = param_16;
  *(undefined8 *)(puVar2 + 0x80) = param_15;
  func_0x000107c6157c(param_2);
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
  func_0x0001000a6ee8(&UNK_110606a08,"SCAdDeepLinkAttachmentPresenterPluginKey",0x28,2,FUN_103087860
                      ,puVar2,uVar3,&UNK_110606a08,&PTR_DAT_112f387b0);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1106060c8;
  func_0x000107c613fc(&UNK_1106060c8,0x58,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_10;
  *(undefined8 *)(puVar2 + 0x28) = param_11;
  *(undefined8 *)(puVar2 + 0x30) = param_12;
  *(undefined8 *)(puVar2 + 0x38) = param_14;
  *(undefined8 *)(puVar2 + 0x40) = param_13;
  *(undefined8 *)(puVar2 + 0x48) = param_16;
  *(undefined8 *)(puVar2 + 0x50) = param_15;
  func_0x000107c6157c();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x0001000a6ee8(&UNK_1106068e0,"SCAdWebViewAttachmentPresenterPluginKey",0x27,2,FUN_103087958,
                      puVar2,uVar3,&UNK_1106068e0,&PTR_DAT_112f38788);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112f38620;
  func_0x0001000285a8(0x112f38620,&UNK_10db83ab0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  func_0x0001000a7f38("AdAttachmentPresenterPluginRegistryServiceProvider",0x32,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 103087474; end: 1030874bb;  */

void FUN_103087474(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103087cd4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("AdAdToCallAttachmentPresenterSaberPluginProvider",0x30,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030874bc; end: 1030875f7;  */

void FUN_1030874bc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1030988b8(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                *(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                *(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                *(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000100082720("AdInstantPageAttachmentPresenterSaberPluginProvider",0x33,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030875f8; end: 10308760f;  */

void FUN_1030875f8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1030b4db0(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("AdSurveyAttachmentPresenterSaberPluginProvider",0x2e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103087610; end: 10308763b;  */

void FUN_103087610(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10308763c; end: 103087653;  */

void FUN_10308763c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103088e2c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("AdToCallAttachmentPresenterSaberPluginProvider",0x2e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103087654; end: 1030876a3;  */

void FUN_103087654(undefined8 *param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  (*param_3)(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720(param_4,param_5,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030876a4; end: 1030876e3;  */

void FUN_1030876a4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  FUN_103089054();
  func_0x000100082720("AdToMessageAttachmentPresenterSaberPluginProvider",0x31,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1030876e4; end: 1030876fb;  */

void FUN_1030876e4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1030bc22c(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000100082720("AdWebViewAttachmentPresenterSaberPluginProvider",0x2f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030876fc; end: 103087757;  */

void FUN_1030876fc(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103087758; end: 10308776f;  */

void FUN_103087758(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103089e48(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48));
  func_0x000100082720("SCAdAppInstallAttachmentPresenterSaberPluginProvider",0x34,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103087770; end: 1030877cb;  */

void FUN_103087770(undefined8 *param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  (*param_3)(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
             *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
             *(undefined8 *)(unaff_x20 + 0x48));
  func_0x000100082720(param_4,param_5,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030877cc; end: 10308785f;  */

void FUN_1030877cc(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103087860; end: 103087877;  */

void FUN_103087860(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10308a8b8(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000100082720("SCAdDeepLinkAttachmentPresenterSaberPluginProvider",0x32,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103087878; end: 1030878f3;  */

void FUN_103087878(undefined8 *param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  (*param_3)(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
             *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
             *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
             *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
             *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
             *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000100082720(param_4,param_5,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030878f4; end: 103087957;  */

void FUN_1030878f4(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103087958; end: 10308796f;  */

void FUN_103087958(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10308a3a0(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000100082720("SCAdWebViewAttachmentPresenterSaberPluginProvider",0x31,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103087970; end: 1030879db;  */

void FUN_103087970(undefined8 *param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  (*param_3)(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
             *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
             *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000100082720(param_4,param_5,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030879dc; end: 103087a17;  */

void FUN_1030879dc(undefined8 *param_1,undefined8 param_2)

{
  FUN_103087a18();
  func_0x0001000a7f38("AdAttachmentPresenterPluginScopeInitializationPluginRegistryServiceProvider",
                      0x4b,2);
  *param_1 = param_2;
  return;
}



/* Entry: 103087a18; end: 103087baf;  */

void FUN_103087a18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074ca88;
  ppuVar4 = &PTR_DAT_1130664d8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1106060f0;
  func_0x000107c613fc(&UNK_1106060f0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f38628;
  func_0x0001000285a8(0x112f38628,&UNK_10db83ab8);
  func_0x0001000a6ee8(&UNK_110608fe0,
                      "AdAttachmentPresenterPluginScopeGraphBridgeScopeInitializationPluginKey",0x47
                      ,2,FUN_103087bb0,puVar2,uVar3,&UNK_110608fe0,&PTR_DAT_112f39e00);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_110606118;
  func_0x000107c613fc(&UNK_110606118,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110605d30,
                      "AdAttachmentPresenterPluginScopedServicesScopeInitializationPluginKey",0x45,2
                      ,FUN_103087c98,puVar2,uVar3,&UNK_110605d30,&PTR_DAT_112f38598);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112f38630;
  func_0x0001000285a8(0x112f38630,&UNK_10db83ac0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 103087bb0; end: 103087bef;  */

void FUN_103087bb0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1030c5718(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("AdAttachmentPresenterPluginScopeGraphBridgeScopeInitializationPluginProvider"
                      ,0x4c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103087bf0; end: 103087c97;  */

void FUN_103087bf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110606140;
  func_0x000107c613fc(&UNK_110606140,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_103087ccc;
  func_0x0001000823a8(FUN_103087ccc,puVar1);
  func_0x000100082720("AdAttachmentPresenterPluginScopedServicesScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 103087c98; end: 103087c9f;  */

void FUN_103087c98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110606140;
  func_0x000107c613fc(&UNK_110606140,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_103087ccc;
  func_0x0001000823a8(FUN_103087ccc,puVar3);
  func_0x000100082720("AdAttachmentPresenterPluginScopedServicesScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 103087ca0; end: 103087ccb;  */

void FUN_103087ca0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103087ccc; end: 103087cd3;  */

void FUN_103087ccc(undefined8 *param_1)

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
  puVar1 = &UNK_110605db8;
  func_0x000107c613fc(&UNK_110605db8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103085c4c;
  func_0x00010058fa64(FUN_103085c4c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103087cd4; end: 103087d53;  */

void FUN_103087cd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f38638,&UNK_10db83ad0);
  puVar1 = &UNK_110606210;
  func_0x000107c613fc(&UNK_110606210,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103087d54,puVar1);
  return;
}



/* Entry: 103087d54; end: 103087e9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103087d54(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long alStack_58 [3];
  
  func_0x000100083b20(alStack_58);
  lVar1 = alStack_58[0];
  if ((*(char *)(alStack_58[0] + _DAT_113067438) == '\x01') &&
     (lVar5 = *(long *)(*(long *)(alStack_58[0] + _DAT_113067410) + _DAT_113067d40), lVar5 != 0)) {
    func_0x000107c61174();
    func_0x000100083b20(alStack_58);
    uVar2 = *(undefined8 *)(alStack_58[0] + _DAT_112feddb8);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(alStack_58[0]);
    uVar3 = uVar2;
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    lVar4 = _DAT_113067428;
    func_0x000107c61428(lVar1 + _DAT_113067428,alStack_58,0,0);
    lVar4 = lVar1 + lVar4;
    func_0x000107c61618(lVar4);
    uVar2 = 0;
    FUN_103088da0(0);
    func_0x000107c610f8();
    func_0x000103087fac(lVar5,uVar3,lVar4,uVar2);
    func_0x000107c61170(lVar1);
  }
  else {
    func_0x000107c61170();
    lVar5 = 0;
  }
  *param_1 = lVar5;
  return;
}



/* Entry: 103087ea0; end: 103087edf;  */

undefined ** FUN_103087ea0(void)

{
  return &PTR_DAT_112f39ed0;
}



/* Entry: 103087ee0; end: 103088077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103087ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar3 = auStack_50;
  func_0x000107c610f8();
  lVar2 = _DAT_112f38668;
  func_0x000107c61614(unaff_x20 + _DAT_112f38668,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f38670) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f38678) = param_2;
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c61154(auStack_50,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  return puVar3;
}



/* Entry: 103088078; end: 1030880b3; -[_TtC29AdAdToCallAttachmentPresenter29AdAdToCallAttachmentPresenter canHandleAttachment:] */

bool FUN_103088078(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000104191a9c();
  func_0x000107c61170(param_3);
  return (int)uVar1 == 4;
}



/* Entry: 1030880b4; end: 1030880bb; -[_TtC29AdAdToCallAttachmentPresenter29AdAdToCallAttachmentPresenter isPresenting] */

undefined8 FUN_1030880b4(void)

{
  return 0;
}



/* Entry: 1030880bc; end: 103088537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030880bc(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined1 *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *apuStack_e0 [4];
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [80];
  
  lVar16 = unaff_x20;
  func_0x000107c614f0();
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)((long)apuStack_e0 - extraout_x8);
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar17 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar14 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar15 = *(long *)(unaff_x20 + _DAT_112f38670);
  puVar1 = (undefined8 *)(lVar15 + _DAT_1130680c0);
  uVar10 = *puVar1;
  uVar7 = puVar1[1];
  func_0x000107c61434(uVar7);
  FUN_103088538(puVar6,uVar10,uVar7);
  func_0x000107c6142c(uVar7);
  puVar5 = puVar6;
  (**(code **)(lVar17 + 0x30))(puVar6,1,lVar4);
  if ((int)puVar5 == 1) {
    func_0x000103088cec(puVar6,0x112d36580,&UNK_10d9016d0);
    func_0x0001041b5884();
    uVar10 = *puVar6;
    uVar2 = puVar6[1];
    lVar4 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar13 = auStack_b0;
    func_0x000107c61534();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    uVar7 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar4 + 0x20) = uVar7;
    *(undefined1 **)(lVar4 + 0x28) = puVar13;
    apuStack_e0[0] = (undefined *)0x0;
    apuStack_e0[1] = (undefined *)0xe000000000000000;
    func_0x000107c61434(uVar2);
    func_0x000107c602fc(0x1c);
    func_0x000107c6142c(apuStack_e0[1]);
    apuStack_e0[0] = (undefined *)0x5b;
    apuStack_e0[1] = (undefined *)0xe100000000000000;
    uVar7 = 0;
    func_0x000107c60714(lVar16,0);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar7);
    func_0x000107c5fb78(0xd000000000000017,0x800000010f11ca00);
    uVar7 = *puVar1;
    uVar3 = puVar1[1];
    func_0x000107c61434(uVar3);
    func_0x000107c5fb78(uVar7,uVar3);
    func_0x000107c6142c(uVar3);
    puVar11 = PTR___sSSN_11034da80;
    *(undefined **)(lVar4 + 0x48) = PTR___sSSN_11034da80;
    *(undefined **)(lVar4 + 0x30) = apuStack_e0[0];
    *(undefined **)(lVar4 + 0x38) = apuStack_e0[1];
    lVar16 = lVar4;
    func_0x000100214a84(lVar4);
    func_0x000107c61588(lVar4);
    func_0x000103088cec((undefined8 *)(lVar4 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c5fadc(uVar10,uVar2);
    func_0x000107c6142c(uVar2);
    lVar4 = lVar16;
    func_0x000107c5f9dc(lVar16,puVar11,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar16);
    func_0x000107c466bc(puVar8);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(lVar4);
    lVar4 = unaff_x20 + _DAT_112f38668;
    func_0x000107c61618();
    if (lVar4 != 0) {
      func_0x0001041bb118(0);
      func_0x0001041b965c(lVar15);
      puVar11 = PTR_PTR_1126af5d0;
      func_0x000107c61168(PTR_PTR_1126af5d0);
      func_0x000107c61174(puVar8);
      puVar9 = puVar8;
      func_0x000107c5ed2c();
      func_0x000107c61170(puVar8);
      func_0x000107c42d78(puVar11);
      func_0x000107c61180();
      func_0x000107c61170(puVar9);
      uVar10 = 0;
      func_0x0001041bf5c0(0);
      func_0x0001041bf280();
      func_0x000107c3d24c(lVar4);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(lVar15);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(uVar10);
    }
    func_0x000107c61170(puVar8);
  }
  else {
    (**(code **)(lVar17 + 0x20))(lVar14,puVar6,lVar4);
    lVar16 = *(long *)(unaff_x20 + _DAT_112f38678);
    if (lVar16 != 0) {
      lVar15 = lVar16;
      func_0x000107c615f0(lVar16);
      func_0x000107c5ed90();
      puVar11 = &UNK_110606338;
      func_0x000107c613fc(&UNK_110606338,0x18,7);
      func_0x000107c61614(puVar11 + 0x10);
      uStack_c0 = 0x103088d2c;
      apuStack_e0[0] = PTR___NSConcreteStackBlock_11034bd00;
      apuStack_e0[1] = (undefined *)0x42000000;
      apuStack_e0[2] = &UNK_1000f3aa0;
      apuStack_e0[3] = &UNK_110606350;
      ppuVar12 = apuStack_e0;
      puStack_b8 = puVar11;
      func_0x000107c60bc4(ppuVar12);
      func_0x000107c61574(puStack_b8);
      func_0x000107c44624(lVar16);
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c615e8(lVar16);
      func_0x000107c61170(lVar15);
    }
    (**(code **)(lVar17 + 8))(lVar14,lVar4);
  }
  return;
}



/* Entry: 103088538; end: 10308861f;  */

void FUN_103088538(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar1 = 0;
    func_0x000107c5fbb4(0x2f2f3a6c6574,0xe600000000000000,param_2,param_3);
    if ((uVar1 & 1) == 0) {
      func_0x000107c5fb78(param_2,param_3);
      param_2 = 0x2f2f3a6c6574;
      param_3 = 0xe600000000000000;
    }
    else {
      func_0x000107c61434(param_3);
    }
    func_0x000107c5edd0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
    return;
  }
  lVar2 = 0;
  func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x0001030885d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,1,1,lVar2);
  return;
}



/* Entry: 103088620; end: 103088b4f;  */

/* WARNING: Possible PIC construction at 0x000103088760: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030887c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103088a4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103088a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103088ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103088aec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103088afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103088b14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103088b00) */
/* WARNING: Removing unreachable block (ram,0x000103088af0) */
/* WARNING: Removing unreachable block (ram,0x000103088abc) */
/* WARNING: Removing unreachable block (ram,0x000103088a9c) */
/* WARNING: Removing unreachable block (ram,0x000103088a50) */
/* WARNING: Removing unreachable block (ram,0x000103088b04) */
/* WARNING: Removing unreachable block (ram,0x000103088b08) */
/* WARNING: Removing unreachable block (ram,0x000103088a6c) */
/* WARNING: Removing unreachable block (ram,0x0001030887cc) */
/* WARNING: Removing unreachable block (ram,0x000103088b18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103088620(uint param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [80];
  
  lVar10 = unaff_x20;
  func_0x000107c614f0();
  lVar9 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  puVar11 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar11 - extraout_x12;
  puVar12 = *(undefined **)(unaff_x20 + _DAT_112f38670);
  if (*(long *)(puVar12 + _DAT_1130680c8) != 0) {
    puVar4 = (undefined8 *)(*(long *)(puVar12 + _DAT_1130680c8) + _DAT_113067500);
    pcVar1 = (code *)*puVar4;
    uVar2 = puVar4[1];
    func_0x000107c6157c(uVar2);
    (*pcVar1)(param_1 & 1);
    func_0x000107c61574(uVar2);
  }
  func_0x0001041bb118(0);
  puVar3 = puVar12;
  func_0x0001041b965c();
  lVar5 = _DAT_112f38668;
  if ((param_1 & 1) == 0) {
    uVar2 = *(undefined8 *)(puVar12 + _DAT_1130680c0);
    puVar4 = *(undefined8 **)((long)(puVar12 + _DAT_1130680c0) + 8);
    puStack_c8 = puVar3;
    func_0x000107c61434(puVar4);
    FUN_103088538(lVar9,uVar2,puVar4);
    func_0x000107c6142c();
    func_0x0001041b5884();
    puStack_d8 = (undefined *)*puVar4;
    uVar2 = puVar4[1];
    lVar5 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar8 = auStack_b0;
    func_0x000107c61534();
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    uVar6 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar5 + 0x20) = uVar6;
    *(undefined1 **)(lVar5 + 0x28) = puVar8;
    uStack_c0 = 0;
    uStack_b8 = 0xe000000000000000;
    func_0x000107c61434(uVar2);
    func_0x000107c602fc(0x38);
    func_0x000107c5fb78(0x5b,0xe100000000000000);
    uVar6 = 0;
    func_0x000107c60714(lVar10,0);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar6);
    func_0x000107c5fb78(0xd000000000000033,0x800000010f11ca60);
    lStack_d0 = lVar9;
    func_0x000103088de4(lVar9,puVar11,0x112d36580,&UNK_10d9016d0);
    lVar9 = 0;
    func_0x000107c5ede0();
    lVar10 = *(long *)(lVar9 + -8);
    uVar6 = 1;
    puVar8 = puVar11;
    (**(code **)(lVar10 + 0x30))(puVar11,1,lVar9);
    if ((int)puVar8 == 1) {
      func_0x000103088cec(puVar11,0x112d36580,&UNK_10d9016d0);
      uVar6 = 0xe600000000000000;
      puVar8 = (undefined1 *)0x296c6c756e28;
    }
    else {
      func_0x000107c5ed70();
      (**(code **)(lVar10 + 8))(puVar11,lVar9);
    }
    func_0x000107c5fb78(puVar8,uVar6);
    func_0x000107c6142c(uVar6);
    puVar12 = PTR___sSSN_11034da80;
    *(undefined **)(lVar5 + 0x48) = PTR___sSSN_11034da80;
    *(undefined8 *)(lVar5 + 0x30) = uStack_c0;
    *(undefined8 *)(lVar5 + 0x38) = uStack_b8;
    lVar9 = lVar5;
    func_0x000100214a84(lVar5);
    func_0x000107c61588(lVar5);
    func_0x000103088cec((undefined8 *)(lVar5 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    puVar3 = puStack_d8;
    func_0x000107c5fadc(puStack_d8,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c5f9dc(lVar9,puVar12,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar9);
    func_0x000107c466bc(puVar7);
  }
  else {
    lVar9 = unaff_x20 + _DAT_112f38668;
    func_0x000107c61618();
    if (lVar9 == 0) {
      lVar5 = unaff_x20 + lVar5;
      func_0x000107c61618();
      if (lVar5 != 0) {
        puVar3 = PTR_PTR_1126af5d0;
        func_0x000107c61168(PTR_PTR_1126af5d0);
        func_0x000107c5c3c8();
        func_0x000107c61180();
        func_0x0001041bf5c0(0);
        func_0x0001041bf280();
        func_0x000107c3d24c(lVar5);
        func_0x000107c615e8(lVar5);
      }
    }
    else {
      puVar3 = (undefined *)0x0;
      func_0x0001041bf5c0(0);
      func_0x0001041bf280();
      func_0x000107c3d254(lVar9);
      func_0x000107c615e8(lVar9);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 103088b50; end: 103088b77; -[_TtC29AdAdToCallAttachmentPresenter29AdAdToCallAttachmentPresenter presentAttachment] */

void FUN_103088b50(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030880bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103088b78; end: 103088c47;  */

/* WARNING: Possible PIC construction at 0x000103088c18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103088c1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103088b78(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112f38668;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = 0;
    func_0x0001041bb118(0);
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f38670);
    func_0x0001041b965c(uVar3,uVar2);
    func_0x000107c61168(PTR_PTR_1126af5d0);
    func_0x000107c5c3c8();
    func_0x000107c61180();
    func_0x0001041bf5c0(0);
    func_0x0001041bf280();
    func_0x000107c3d24c(lVar1);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 103088c48; end: 103088c6f; -[_TtC29AdAdToCallAttachmentPresenter29AdAdToCallAttachmentPresenter dismissAttachment] */

void FUN_103088c48(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103088b78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103088c70; end: 103088ca3;  */

void FUN_103088c70(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103088ca4; end: 103088d83; -[_TtC29AdAdToCallAttachmentPresenter29AdAdToCallAttachmentPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103088ca4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f38670));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f38678));
  param_1 = param_1 + _DAT_112f38668;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103088d84; end: 103088d9f;  */

void FUN_103088d84(long param_1,long param_2)

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



/* Entry: 103088da0; end: 103088dbf;  */

void FUN_103088da0(void)

{
  func_0x000107c61168(&PTR_PTR_1128b2628);
  return;
}



/* Entry: 103088dc0; end: 103088e2b;  */

undefined8 FUN_103088dc0(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103088e2c; end: 103088eab;  */

void FUN_103088e2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f38638,&UNK_10db83ad0);
  puVar1 = &UNK_110606430;
  func_0x000107c613fc(&UNK_110606430,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103088eac,puVar1);
  return;
}



/* Entry: 103088eac; end: 103089013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103088eac(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long alStack_58 [3];
  
  func_0x000100083b20(alStack_58);
  lVar1 = alStack_58[0];
  if (((*(byte *)(alStack_58[0] + _DAT_113067438) & 1) == 0) &&
     (lVar2 = *(long *)(*(long *)(alStack_58[0] + _DAT_113067410) + _DAT_113067d40), lVar2 != 0)) {
    func_0x000107c61174();
    func_0x000100083b20(alStack_58);
    lVar3 = *(long *)(alStack_58[0] + _DAT_112feddb8);
    func_0x000107c61174();
    func_0x000107c61170(alStack_58[0]);
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = _DAT_113067428;
    if (lVar4 != 0) {
      func_0x000107c61428(lVar1 + _DAT_113067428,alStack_58,0,0);
      lVar3 = lVar1 + lVar3;
      func_0x000107c61618(lVar3);
      puVar5 = PTR_PTR_1126acaa0;
      func_0x000107c610f8();
      func_0x000107c457e0();
      func_0x000107c615e8(lVar3);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
      goto LAB_103088fe8;
    }
    func_0x000107c61170(lVar1);
    alStack_58[0] = lVar2;
  }
  func_0x000107c61170(alStack_58[0]);
  puVar5 = (undefined *)0x0;
LAB_103088fe8:
  *param_1 = puVar5;
  return;
}


