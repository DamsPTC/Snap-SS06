/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102473e1c; end: 102473f03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102473e1c(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9cac0);
  *(undefined **)(unaff_x20 + _DAT_112e9cac0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9cac8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e9cac8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11050dc10;
  func_0x000107c613fc(&UNK_11050dc10,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102473f08,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102473f04; end: 102473f0f;  */

void FUN_102473f04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102473f10; end: 102473f6f; -[_TtC36CreatorsProfileImageScopeGraphBridge51SCCreatorsProfileImageScopedServicesSaberEntryPoint init] */

void FUN_102473f10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorsProfileImageScopeGraphBridge.SCCreatorsProfileImageScopedServicesSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102473f3c);
  (*pcVar1)();
}



/* Entry: 102473f70; end: 102473fa7; -[_TtC36CreatorsProfileImageScopeGraphBridge51SCCreatorsProfileImageScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102473f70(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e9cac8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9cac0));
  return;
}



/* Entry: 102473fa8; end: 102473fab;  */

void FUN_102473fa8(void)

{
  return;
}



/* Entry: 102473fac; end: 102473fcb;  */

void FUN_102473fac(void)

{
  FUN_102473e1c();
  return;
}



/* Entry: 102473fcc; end: 102473feb;  */

void FUN_102473fcc(void)

{
  func_0x000107c61168(&PTR_PTR_112843bd8);
  return;
}



/* Entry: 102473fec; end: 1024740bb;  */

undefined8 FUN_102473fec(void)

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
  
  func_0x000107c61428(0x112e9caf8,&uStack_40,0x20,0);
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
    FUN_1024740bc();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1024740bc; end: 1024740db;  */

void FUN_1024740bc(void)

{
  func_0x000107c61168(&PTR_PTR_112843ca0);
  return;
}



/* Entry: 1024740dc; end: 102474147;  */

void FUN_1024740dc(void)

{
  func_0x0001000285a8(0x112e9cb00,&UNK_10daaae88);
  func_0x0001000823a8(0x10247411c,0);
  return;
}



/* Entry: 102474148; end: 102474183; -[_TtC36CreatorsProfileImageScopeGraphBridge44CreatorsProfileImageScopeGraphBridgeServices init] */

void FUN_102474148(undefined8 param_1)

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



/* Entry: 102474184; end: 1024741b7;  */

void FUN_102474184(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024741b8; end: 1024741bf;  */

undefined8 FUN_1024741b8(void)

{
  return 0x1b;
}



/* Entry: 1024741c0; end: 102474337;  */

void FUN_1024741c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11050dc58;
  func_0x000107c613fc(&UNK_11050dc58,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102474338,puVar1);
  return;
}



/* Entry: 102474338; end: 10247433f;  */

void FUN_102474338(undefined8 *param_1)

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
  func_0x000107c61428(0x112e9caf8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e9caf8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11050dcf0;
  func_0x000107c613fc(&UNK_11050dcf0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1024743ec;
  func_0x00010058fa64(0x1024743ec,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102474340; end: 10247439b;  */

void FUN_102474340(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e9caf8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e9caf8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10247439c; end: 1024743f3;  */

undefined ** FUN_10247439c(void)

{
  return &PTR_DAT_112ff2cf0;
}



/* Entry: 1024743f4; end: 10247443b; -[SCCreatorsProfileImageScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024743f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9cb58;
  func_0x000107c61428(param_1 + _DAT_112e9cb58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10247443c; end: 102474493; -[SCCreatorsProfileImageScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247443c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9cb58;
  func_0x000107c61428(param_1 + _DAT_112e9cb58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102474494; end: 1024744db; -[SCCreatorsProfileImageScopeGraphBridgeSaberEntryPoint creatorsProfileImageScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102474494(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9cb60;
  func_0x000107c61428(param_1 + _DAT_112e9cb60,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024744dc; end: 10247453f; -[SCCreatorsProfileImageScopeGraphBridgeSaberEntryPoint setCreatorsProfileImageScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024744dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9cb60;
  func_0x000107c61428(param_1 + _DAT_112e9cb60,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102474540; end: 102474673;  */

/* WARNING: Possible PIC construction at 0x0001024745f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102474614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102474630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024745fc) */
/* WARNING: Removing unreachable block (ram,0x000102474618) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102474540(void)

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
  func_0x000107c40d40();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_102473d74();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_102473fec();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102474674);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e9ca88) = lVar5;
    *(long *)(lVar4 + _DAT_112e9ca90) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102474674; end: 10247469b; -[SCCreatorsProfileImageScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102474674(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102474540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10247469c; end: 1024746df; -[SCCreatorsProfileImageScopeGraphBridgeSaberEntryPoint end] */

void FUN_10247469c(undefined8 param_1)

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



/* Entry: 1024746e0; end: 102474877;  */

void FUN_1024746e0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcd) || (param_3 != -0x7ffffffef0f5fe10)) {
      uVar2 = 0xd000000000000033;
      func_0x000107c605b8(0xd000000000000033,0x800000010f0a01f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CreatorsProfileImageScopeGraphBridge/SCCreatorsProfileImageScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x60,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102474878);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53b34();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102474878; end: 102474923; -[SCCreatorsProfileImageScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102474878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1024746e0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102474924; end: 10247498f; -[SCCreatorsProfileImageScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102474924(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e9cb58,0);
  *(undefined8 *)(param_1 + _DAT_112e9cb60) = 0;
  *(undefined8 *)(param_1 + _DAT_112e9cb68) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102474990; end: 1024749c3;  */

void FUN_102474990(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024749c4; end: 102474a0b; -[SCCreatorsProfileImageScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024749f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024749f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024749c4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e9cb58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9cb60));
  return;
}



/* Entry: 102474a0c; end: 102474a2b;  */

void FUN_102474a0c(void)

{
  func_0x000107c61168(&PTR_PTR_112843d50);
  return;
}



/* Entry: 102474a2c; end: 102474a73; -[SCSCCreatorsProfileImageScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102474a2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9cb98;
  func_0x000107c61428(param_1 + _DAT_112e9cb98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102474a74; end: 102474acb; -[SCSCCreatorsProfileImageScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102474a74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9cb98;
  func_0x000107c61428(param_1 + _DAT_112e9cb98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102474acc; end: 102474ba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102474acc(undefined8 param_1,long param_2)

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
    FUN_102473fcc();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e9cac0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102474ba4);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e9cac8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e9cba0);
    *(long **)(unaff_x20 + _DAT_112e9cba0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102474ba4; end: 102474bcb; -[SCSCCreatorsProfileImageScopedServicesSaberEntryPoint begin] */

void FUN_102474ba4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102474acc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102474bcc; end: 102474d43;  */

/* WARNING: Possible PIC construction at 0x000102474c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102474ccc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102474c38) */
/* WARNING: Removing unreachable block (ram,0x000102474cd0) */
/* WARNING: Removing unreachable block (ram,0x000102474ce8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102474bcc(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e9cba0);
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



/* Entry: 102474d44; end: 102474d4b;  */

void FUN_102474d44(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102474d4c; end: 102474d7f; -[SCSCCreatorsProfileImageScopedServicesSaberEntryPoint end] */

void FUN_102474d4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102474bcc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102474d80; end: 102474e9f;  */

void FUN_102474d80(long param_1,long param_2,long param_3)

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
                        "CreatorsProfileImageScopeGraphBridge/SCSCCreatorsProfileImageScopedServicesSaberEntryPoint.swift"
                        ,0x60,2,0x2e,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102474ea0);
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



/* Entry: 102474ea0; end: 102474f4b; -[SCSCCreatorsProfileImageScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102474ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102474d80(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102474f4c; end: 102474fab; -[SCSCCreatorsProfileImageScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102474f4c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e9cb98,0);
  *(undefined8 *)(param_1 + _DAT_112e9cba0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102474fac; end: 102474fdf;  */

void FUN_102474fac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102474fe0; end: 102475017; -[SCSCCreatorsProfileImageScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102474fe0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e9cb98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9cba0));
  return;
}



/* Entry: 102475018; end: 102475037;  */

void FUN_102475018(void)

{
  func_0x000107c61168(&PTR_PTR_112843e18);
  return;
}



/* Entry: 102475038; end: 1024750a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102475038(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10247542c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e9cbd8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1024750a4; end: 10247510f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024750a4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9cbd8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102475110; end: 10247516f; -[_TtC57CreatorsSpotlightSubmissionV2ScopedFactoryServiceProvider43CreatorsSpotlightSubmissionV2ScopedServices init] */

void FUN_102475110(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorsSpotlightSubmissionV2ScopedFactoryServiceProvider.CreatorsSpotlightSubmissionV2ScopedServices"
                      ,0x65,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10247513c);
  (*pcVar1)();
}



/* Entry: 102475170; end: 10247517f; -[_TtC57CreatorsSpotlightSubmissionV2ScopedFactoryServiceProvider43CreatorsSpotlightSubmissionV2ScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102475170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9cbd8));
  return;
}



/* Entry: 102475180; end: 1024751eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102475180(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11050df08;
  func_0x000107c613fc(&UNK_11050df08,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1024754c4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1024751ec; end: 102475287;  */

void FUN_1024751ec(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11050de18;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11050de18;
  return;
}



/* Entry: 102475288; end: 1024752bf;  */

void FUN_102475288(long *param_1)

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



/* Entry: 1024752c0; end: 1024752c7;  */

undefined8 FUN_1024752c0(void)

{
  return 0x1b;
}



/* Entry: 1024752c8; end: 1024753fb;  */

void FUN_1024752c8(undefined8 *param_1)

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
  puVar1 = &UNK_11050df30;
  func_0x000107c613fc(&UNK_11050df30,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10247549c;
  func_0x00010058fa64(FUN_10247549c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1024753fc; end: 10247542b;  */

undefined ** FUN_1024753fc(void)

{
  return &PTR_DAT_1130665c8;
}



/* Entry: 10247542c; end: 10247544b;  */

void FUN_10247542c(void)

{
  func_0x000107c61168(&PTR_PTR_112843ed8);
  return;
}



/* Entry: 10247544c; end: 10247549b;  */

undefined1  [16] FUN_10247544c(void)

{
  return ZEXT816(0x11050de68);
}



/* Entry: 10247549c; end: 1024754c3;  */

void FUN_10247549c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1024754c4; end: 1024754d7;  */

void FUN_1024754c4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1024754d8; end: 102475aeb;  */

void FUN_1024754d8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  code *pcVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  code *pcVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 auStack_70 [2];
  
  uVar18 = *param_2;
  func_0x0001000285a8(0x112e9cc50,&UNK_10daab328);
  puVar1 = auStack_70;
  auStack_70[0] = uVar18;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x000102477734();
  pcVar3 = "MemoriesQuickCutScopeExposerSubjectServiceProvider";
  func_0x000100082720("MemoriesQuickCutScopeExposerSubjectServiceProvider",0x32,2);
  FUN_102477780();
  pcVar4 = "SCCaaSCameraScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCCaaSCameraScopeExposerSubjectServiceProvider",0x2e,2);
  func_0x000102477800();
  pcVar5 = "SCDirectorModeScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCDirectorModeScopeExposerSubjectServiceProvider",0x30,2);
  FUN_10247784c();
  pcVar6 = "SCMemoriesPickerV2ScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMemoriesPickerV2ScopeExposerSubjectServiceProvider",0x34,2);
  FUN_102477898();
  func_0x000100082720("SCSnapEditorScopeExposerSubjectServiceProvider",0x2e,2);
  puVar7 = puVar2;
  FUN_102477774();
  func_0x000100082720("MemoriesQuickCutScopeExposerObservableServiceProvider",0x35,2);
  pcVar8 = pcVar3;
  FUN_1024777c0();
  func_0x000100082720("SCCaaSCameraScopeExposerObservableServiceProvider",0x31,2);
  pcVar9 = pcVar4;
  FUN_102477840();
  func_0x000100082720("SCDirectorModeScopeExposerObservableServiceProvider",0x33,2);
  pcVar10 = pcVar5;
  FUN_10247788c();
  func_0x000100082720("SCMemoriesPickerV2ScopeExposerObservableServiceProvider",0x37,2);
  pcVar11 = pcVar6;
  FUN_102477924();
  func_0x000100082720("SCSnapEditorScopeExposerObservableServiceProvider",0x31,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar12 = FUN_102475288;
  func_0x0001000823a8(FUN_102475288,0);
  func_0x000100082720("CreatorsSpotlightSubmissionV2ScopedServicesCleanupRelayServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112e9cc58,&UNK_10daab340);
  puVar13 = &UNK_11050dfe0;
  func_0x000107c613fc(&UNK_11050dfe0,0xb8,7);
  *(undefined8 **)(puVar13 + 0x10) = puVar1;
  *(undefined8 *)(puVar13 + 0x18) = param_3;
  *(undefined8 *)(puVar13 + 0x20) = param_4;
  *(undefined8 *)(puVar13 + 0x28) = param_5;
  *(undefined8 *)(puVar13 + 0x30) = param_6;
  *(undefined8 *)(puVar13 + 0x38) = param_7;
  *(undefined8 *)(puVar13 + 0x40) = param_8;
  *(undefined8 *)(puVar13 + 0x48) = param_9;
  *(undefined8 *)(puVar13 + 0x50) = param_10;
  *(undefined8 *)(puVar13 + 0x58) = param_11;
  *(undefined8 *)(puVar13 + 0x60) = param_12;
  *(undefined8 *)(puVar13 + 0x68) = param_13;
  *(undefined8 *)(puVar13 + 0x70) = param_14;
  *(undefined8 *)(puVar13 + 0x78) = param_15;
  *(undefined8 *)(puVar13 + 0x80) = param_16;
  *(undefined8 *)(puVar13 + 0x88) = param_17;
  *(char **)(puVar13 + 0x90) = pcVar10;
  *(char **)(puVar13 + 0x98) = pcVar11;
  *(undefined8 **)(puVar13 + 0xa0) = puVar7;
  *(char **)(puVar13 + 0xa8) = pcVar9;
  *(char **)(puVar13 + 0xb0) = pcVar8;
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
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(pcVar10);
  func_0x000107c6157c(pcVar11);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(pcVar9);
  func_0x000107c6157c(pcVar8);
  uVar18 = 0x102475b34;
  func_0x0001000823a8(0x102475b34,puVar13);
  func_0x000100082720("CreatorsSpotlightSubmissionV2EntryPointWrapperServiceProvider",0x3d,2);
  puVar14 = puVar2;
  FUN_102477428(puVar2,pcVar3,pcVar4,pcVar5,pcVar6);
  func_0x000100082720("CreatorsSpotlightSubmissionV2ScopeGraphBridgeServicesServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112e9cc60,&UNK_10daab330);
  puVar13 = &UNK_11050e008;
  func_0x000107c613fc(&UNK_11050e008,0x30,7);
  *(undefined8 *)(puVar13 + 0x10) = uVar18;
  *(undefined8 **)(puVar13 + 0x18) = puVar1;
  *(undefined8 **)(puVar13 + 0x20) = puVar14;
  *(code **)(puVar13 + 0x28) = pcVar12;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar18);
  func_0x000107c6157c(puVar14);
  func_0x000107c6157c(pcVar12);
  pcVar15 = FUN_102475b80;
  func_0x0001000823a8(FUN_102475b80,puVar13);
  func_0x000100082720("CreatorsSpotlightSubmissionV2ScopeInitializationPluginRegistryServiceProvider"
                      ,0x4d,2);
  func_0x0001000285a8(0x112e9cbe0,&UNK_10daab060);
  func_0x000107c6157c(pcVar15);
  uVar16 = 0x102475b8c;
  func_0x0001000823a8(0x102475b8c,pcVar15);
  func_0x000100082720("CreatorsSpotlightSubmissionV2ScopeInitializationServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112e9cbd0,&UNK_10daab050);
  func_0x000107c6157c(uVar16);
  uVar17 = 0x102475b94;
  func_0x0001000823a8(0x102475b94,uVar16);
  func_0x000100082720("CreatorsSpotlightSubmissionV2ScopedServicesServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar13 = &UNK_11050e030;
  func_0x000107c613fc(&UNK_11050e030,0x20,7);
  *(undefined8 *)(puVar13 + 0x10) = uVar17;
  *(code **)(puVar13 + 0x18) = pcVar12;
  func_0x000107c6157c(pcVar12);
  uVar17 = 0x102475b9c;
  func_0x0001000823a8(0x102475b9c,puVar13);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(uVar18);
  func_0x000107c61574(puVar14);
  func_0x000107c61574(pcVar15);
  func_0x000107c61574(uVar16);
  func_0x000100082720("CreatorsSpotlightSubmissionV2ScopeEntryPointProvider",0x34,2);
  *param_1 = uVar17;
  return;
}



/* Entry: 102475aec; end: 102475b7f;  */

void FUN_102475aec(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1024754d8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 102475b80; end: 102475ba3;  */

void FUN_102475b80(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102476a94(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("CreatorsSpotlightSubmissionV2ScopeInitializationPluginRegistryServiceProvider"
                      ,0x4d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102475ba4; end: 102476827;  */

void FUN_102475ba4(long *param_1,long param_2)

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
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined *puVar22;
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
  FUN_1024769c0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x40) = uStack_78;
  *(undefined8 *)(param_2 + 0x48) = uStack_80;
  *(undefined8 *)(param_2 + 0x50) = uStack_88;
  *(undefined8 *)(param_2 + 0x58) = uStack_90;
  *(undefined8 *)(param_2 + 0x60) = uStack_98;
  *(undefined8 *)(param_2 + 0x68) = uStack_a0;
  *(undefined8 *)(param_2 + 0x70) = uStack_a8;
  *(undefined8 *)(param_2 + 0x78) = uStack_b0;
  *(undefined8 *)(param_2 + 0x80) = uStack_b8;
  *(undefined8 *)(param_2 + 0x88) = uStack_c0;
  *(undefined8 *)(param_2 + 0x90) = uStack_c8;
  *(undefined8 *)(param_2 + 0x98) = uStack_d0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_d8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_e0;
  *(undefined8 *)(param_2 + 0xb0) = uStack_e8;
  func_0x0001000285a8(0x112e7a318,&UNK_10da84650);
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
  func_0x000107c6157c(uStack_f0);
  func_0x00010017da58();
  puVar17 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar16);
  *(undefined **)(param_2 + 0x18) = puVar17;
  func_0x0001000285a8(0x112e5eda8,&UNK_10daab350);
  func_0x000107c610f8();
  uVar16 = uStack_f8;
  func_0x000107c6157c(uStack_f8);
  func_0x00010017da58();
  puVar18 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar16);
  *(undefined **)(param_2 + 0x20) = puVar18;
  func_0x0001000285a8(0x112e78410,&UNK_10db5b9a0);
  func_0x000107c610f8();
  uVar16 = uStack_100;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar21 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar16);
  *(undefined **)(param_2 + 0x28) = puVar21;
  func_0x0001000285a8(0x112e9cc68,&UNK_10daab360);
  func_0x000107c610f8();
  uVar16 = uStack_108;
  func_0x000107c6157c(uStack_108);
  func_0x00010017da58();
  puVar22 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar16);
  *(undefined **)(param_2 + 0x30) = puVar22;
  func_0x0001000285a8(0x112e99f48,&UNK_10dabb4f0);
  func_0x000107c610f8();
  uVar16 = uStack_110;
  func_0x000107c6157c(uStack_110);
  func_0x00010017da58();
  puVar19 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar16);
  *(undefined **)(param_2 + 0x38) = puVar19;
  FUN_10247a20c();
  func_0x000107c613fc();
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
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = auStack_70[0];
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = uVar20;
  func_0x00010247985c(uVar20,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
                      uVar12,uVar13,uVar14,uVar15,puVar17,puVar18,puVar21,puVar22,puVar19);
  *(undefined8 *)(param_2 + 0x10) = uVar16;
  func_0x000107c6157c();
  FUN_10247a0b8();
  func_0x000107c61170(uVar20);
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
  func_0x000107c61574(uStack_f0);
  func_0x000107c61574(uStack_f8);
  func_0x000107c61574(uStack_100);
  func_0x000107c61574(uStack_108);
  func_0x000107c61574(uStack_110);
  func_0x000107c61574(uVar16);
  *param_1 = param_2;
  return;
}



/* Entry: 102476828; end: 102476903;  */

void FUN_102476828(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
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
  return;
}



/* Entry: 102476904; end: 10247690b;  */

undefined8 FUN_102476904(void)

{
  return 0x1b;
}



/* Entry: 10247690c; end: 10247698f;  */

void FUN_10247690c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102476a00,param_2,FUN_102476a04,param_2,0x102476a2c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102476990; end: 1024769bf;  */

undefined ** FUN_102476990(void)

{
  return &PTR_DAT_1130665c8;
}



/* Entry: 1024769c0; end: 1024769df;  */

void FUN_1024769c0(void)

{
  func_0x000107c61168(&PTR_PTR_112e9ccd8);
  return;
}



/* Entry: 1024769e0; end: 102476a03;  */

undefined1  [16] FUN_1024769e0(void)

{
  return ZEXT816(0x11050e088);
}



/* Entry: 102476a04; end: 102476a57;  */

void FUN_102476a04(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102476a58; end: 102476a93;  */

void FUN_102476a58(undefined8 *param_1,undefined8 param_2)

{
  FUN_102476a94();
  func_0x0001000a7f38("CreatorsSpotlightSubmissionV2ScopeInitializationPluginRegistryServiceProvider"
                      ,0x4d,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102476a94; end: 102476c7f;  */

void FUN_102476a94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074cc18;
  ppuVar4 = &PTR_DAT_1130665c8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e9cdd8;
  func_0x0001000285a8(0x112e9cdd8,&UNK_10daab550);
  func_0x0001000a6ee8(&UNK_11050e088,
                      "CreatorsSpotlightSubmissionV2EntryPointWrapperScopeInitializationPluginKey",
                      0x4a,2,FUN_102476cf4,param_1,uVar2,&UNK_11050e088,&PTR_DAT_112e9cc70);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_11050e0d8;
  func_0x000107c613fc(&UNK_11050e0d8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11050e450,
                      "CreatorsSpotlightSubmissionV2ScopeGraphBridgeScopeInitializationPluginKey",
                      0x49,2,FUN_102476cfc,puVar3,uVar2,&UNK_11050e450,&PTR_DAT_112e9ce90);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_11050e100;
  func_0x000107c613fc(&UNK_11050e100,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11050dea8,
                      "CreatorsSpotlightSubmissionV2ScopedServicesScopeInitializationPluginKey",0x47
                      ,2,FUN_102476de4,puVar3,uVar2,&UNK_11050dea8,&PTR_DAT_112e9cbe8);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e9cde0;
  func_0x0001000285a8(0x112e9cde0,&UNK_10daab558);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 102476c80; end: 102476cf3;  */

void FUN_102476c80(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102476e20;
  func_0x0001000823a8(0x102476e20,param_3);
  func_0x000100082720("CreatorsSpotlightSubmissionV2EntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102476cf4; end: 102476cfb;  */

void FUN_102476cf4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102476e20;
  func_0x0001000823a8();
  func_0x000100082720("CreatorsSpotlightSubmissionV2EntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102476cfc; end: 102476d3b;  */

void FUN_102476cfc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102477990(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("CreatorsSpotlightSubmissionV2ScopeGraphBridgeScopeInitializationPluginProvider"
                      ,0x4e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102476d3c; end: 102476de3;  */

void FUN_102476d3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11050e128;
  func_0x000107c613fc(&UNK_11050e128,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102476e18;
  func_0x0001000823a8(FUN_102476e18,puVar1);
  func_0x000100082720("CreatorsSpotlightSubmissionV2ScopedServicesScopeInitializationPluginProvider"
                      ,0x4c,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102476de4; end: 102476deb;  */

void FUN_102476de4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11050e128;
  func_0x000107c613fc(&UNK_11050e128,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102476e18;
  func_0x0001000823a8(FUN_102476e18,puVar3);
  func_0x000100082720("CreatorsSpotlightSubmissionV2ScopedServicesScopeInitializationPluginProvider"
                      ,0x4c,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102476dec; end: 102476e17;  */

void FUN_102476dec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102476e18; end: 102476e27;  */

void FUN_102476e18(undefined8 *param_1)

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
  puVar1 = &UNK_11050df30;
  func_0x000107c613fc(&UNK_11050df30,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10247549c;
  func_0x00010058fa64(FUN_10247549c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102476e28; end: 102476fff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102476e28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_102477338();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_2;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_3;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_4;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_5;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uStack_70 = param_6;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uStack_68);
    *(long *)(unaff_x20 + _DAT_112e9cde8) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112e9cdf0) = param_7;
    puVar4 = auStack_80;
    func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102477000);
  (*pcVar2)();
}



/* Entry: 102477000; end: 10247705f; -[_TtC45CreatorsSpotlightSubmissionV2ScopeGraphBridge60CreatorsSpotlightSubmissionV2ScopeGraphBridgeSaberEntryPoint init] */

void FUN_102477000(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorsSpotlightSubmissionV2ScopeGraphBridge.CreatorsSpotlightSubmissionV2ScopeGraphBridgeSaberEntryPoint"
                      ,0x6a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10247702c);
  (*pcVar1)();
}



/* Entry: 102477060; end: 102477097; -[_TtC45CreatorsSpotlightSubmissionV2ScopeGraphBridge60CreatorsSpotlightSubmissionV2ScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010247707c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102477080) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102477060(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9cde8));
  return;
}



/* Entry: 102477098; end: 1024770bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102477098(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e9cdf0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e9cde8));
  return;
}



/* Entry: 1024770c0; end: 1024770df;  */

void FUN_1024770c0(void)

{
  func_0x000107c61168(&PTR_PTR_112843f98);
  return;
}



/* Entry: 1024770e0; end: 102477167;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1024770e0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9ce20) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e9ce28);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102477168);
  (*pcVar2)();
}



/* Entry: 102477168; end: 10247724f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102477168(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9ce20);
  *(undefined **)(unaff_x20 + _DAT_112e9ce20) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9ce28);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e9ce28))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11050e248;
  func_0x000107c613fc(&UNK_11050e248,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102477254,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102477250; end: 10247725b;  */

void FUN_102477250(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10247725c; end: 1024772bb; -[_TtC45CreatorsSpotlightSubmissionV2ScopeGraphBridge58CreatorsSpotlightSubmissionV2ScopedServicesSaberEntryPoint init] */

void FUN_10247725c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorsSpotlightSubmissionV2ScopeGraphBridge.CreatorsSpotlightSubmissionV2ScopedServicesSaberEntryPoint"
                      ,0x68,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102477288);
  (*pcVar1)();
}



/* Entry: 1024772bc; end: 1024772f3; -[_TtC45CreatorsSpotlightSubmissionV2ScopeGraphBridge58CreatorsSpotlightSubmissionV2ScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024772bc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e9ce28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9ce20));
  return;
}



/* Entry: 1024772f4; end: 1024772f7;  */

void FUN_1024772f4(void)

{
  return;
}



/* Entry: 1024772f8; end: 102477317;  */

void FUN_1024772f8(void)

{
  FUN_102477168();
  return;
}



/* Entry: 102477318; end: 102477337;  */

void FUN_102477318(void)

{
  func_0x000107c61168(&PTR_PTR_112844060);
  return;
}



/* Entry: 102477338; end: 102477407;  */

undefined8 FUN_102477338(void)

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
  
  func_0x000107c61428(0x112e9ce58,&uStack_40,0x20,0);
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
    FUN_102477408();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102477408; end: 102477427;  */

void FUN_102477408(void)

{
  func_0x000107c61168(&PTR_PTR_112844128);
  return;
}



/* Entry: 102477428; end: 1024775bf;  */

void FUN_102477428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9ce60,&UNK_10daab638);
  puVar1 = &UNK_11050e290;
  func_0x000107c613fc(&UNK_11050e290,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_1024775c0,puVar1);
  return;
}



/* Entry: 1024775c0; end: 1024775cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024775c0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar8 = &lStack_60;
  lVar6 = lVar1;
  FUN_102477408();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_112e9ce68) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_112e9ce70) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112e9ce78) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112e9ce80) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112e9ce88) = uVar9;
  puVar5 = PTR_s_init_1125d9248;
  lStack_60 = lVar7;
  lStack_58 = lVar6;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar9);
  func_0x000107c61154(&lStack_60,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 1024775d0; end: 10247766b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024775d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9ce68) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e9ce70) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e9ce78) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e9ce80) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e9ce88) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10247766c; end: 1024776cb; -[_TtC45CreatorsSpotlightSubmissionV2ScopeGraphBridge53CreatorsSpotlightSubmissionV2ScopeGraphBridgeServices init] */

void FUN_10247766c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorsSpotlightSubmissionV2ScopeGraphBridge.CreatorsSpotlightSubmissionV2ScopeGraphBridgeServices"
                      ,99,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102477698);
  (*pcVar1)();
}



/* Entry: 1024776cc; end: 102477773; -[_TtC45CreatorsSpotlightSubmissionV2ScopeGraphBridge53CreatorsSpotlightSubmissionV2ScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024776e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102477708: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024776ec) */
/* WARNING: Removing unreachable block (ram,0x00010247770c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024776cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9ce68));
  return;
}



/* Entry: 102477774; end: 10247777f;  */

void FUN_102477774(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102477c64,param_1);
  return;
}



/* Entry: 102477780; end: 1024777bf;  */

void FUN_102477780(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102477c78,0);
  return;
}



/* Entry: 1024777c0; end: 1024777cb;  */

void FUN_1024777c0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1024777cc,param_1);
  return;
}


