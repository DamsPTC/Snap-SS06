/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1024d7154; end: 1024d71b3; -[_TtC42MyStoryCustomViewersPickerScopeGraphBridge50MyStoryCustomViewersPickerScopeGraphBridgeServices init] */

void FUN_1024d7154(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyStoryCustomViewersPickerScopeGraphBridge.MyStoryCustomViewersPickerScopeGraphBridgeServices"
                      ,0x5d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d7180);
  (*pcVar1)();
}



/* Entry: 1024d71b4; end: 1024d71c3; -[_TtC42MyStoryCustomViewersPickerScopeGraphBridge50MyStoryCustomViewersPickerScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d71b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea1100));
  return;
}



/* Entry: 1024d71c4; end: 1024d724f;  */

void FUN_1024d71c4(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1024d7204,0);
  return;
}



/* Entry: 1024d7250; end: 1024d726b;  */

void FUN_1024d7250(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1024d72bc,param_1);
  return;
}



/* Entry: 1024d726c; end: 1024d72bb;  */

void FUN_1024d726c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1024d72bc; end: 1024d72ef;  */

void FUN_1024d72bc(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1024d72f0; end: 1024d72f7;  */

undefined8 FUN_1024d72f0(void)

{
  return 0x1b;
}



/* Entry: 1024d72f8; end: 1024d746f;  */

void FUN_1024d72f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110516af0;
  func_0x000107c613fc(&UNK_110516af0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1024d7470,puVar1);
  return;
}



/* Entry: 1024d7470; end: 1024d7477;  */

void FUN_1024d7470(undefined8 *param_1)

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
  func_0x000107c61428(0x112ea10f0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ea10f0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110516bc8;
  func_0x000107c613fc(&UNK_110516bc8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1024d7544;
  func_0x00010058fa64(0x1024d7544,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1024d7478; end: 1024d74d3;  */

void FUN_1024d7478(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ea10f0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ea10f0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1024d74d4; end: 1024d754b;  */

undefined ** FUN_1024d74d4(void)

{
  return &PTR_DAT_112ea1308;
}



/* Entry: 1024d754c; end: 1024d7593; -[SCMyStoryCustomViewersPickerScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d754c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea1158;
  func_0x000107c61428(param_1 + _DAT_112ea1158,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024d7594; end: 1024d75eb; -[SCMyStoryCustomViewersPickerScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d7594(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea1158;
  func_0x000107c61428(param_1 + _DAT_112ea1158,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1024d75ec; end: 1024d7633; -[SCMyStoryCustomViewersPickerScopeGraphBridgeSaberEntryPoint sCRecipientPickerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d75ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea1160;
  func_0x000107c61428(param_1 + _DAT_112ea1160,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024d7634; end: 1024d763f; -[SCMyStoryCustomViewersPickerScopeGraphBridgeSaberEntryPoint setSCRecipientPickerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d7634(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea1160;
  func_0x000107c61428(param_1 + _DAT_112ea1160,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1024d7640; end: 1024d7687; -[SCMyStoryCustomViewersPickerScopeGraphBridgeSaberEntryPoint myStoryCustomViewersPickerScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d7640(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea1168;
  func_0x000107c61428(param_1 + _DAT_112ea1168,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024d7688; end: 1024d7693; -[SCMyStoryCustomViewersPickerScopeGraphBridgeSaberEntryPoint setMyStoryCustomViewersPickerScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d7688(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea1168;
  func_0x000107c61428(param_1 + _DAT_112ea1168,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1024d7694; end: 1024d76f3;  */

void FUN_1024d7694(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 1024d76f4; end: 1024d78af;  */

/* WARNING: Possible PIC construction at 0x0001024d780c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024d7830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024d7840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024d7884: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024d7844) */
/* WARNING: Removing unreachable block (ram,0x0001024d7834) */
/* WARNING: Removing unreachable block (ram,0x0001024d7810) */
/* WARNING: Removing unreachable block (ram,0x0001024d7888) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d76f4(void)

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
  func_0x000107c5121c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c4d3ac();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_1024d6d10();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_1024d6f88();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d78b0);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112ea1080) = lVar5;
      *(long *)(lVar3 + _DAT_112ea1088) = unaff_x20;
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



/* Entry: 1024d78b0; end: 1024d78d7; -[SCMyStoryCustomViewersPickerScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1024d78b0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1024d76f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024d78d8; end: 1024d791b; -[SCMyStoryCustomViewersPickerScopeGraphBridgeSaberEntryPoint end] */

void FUN_1024d78d8(undefined8 param_1)

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



/* Entry: 1024d791c; end: 1024d7b1f;  */

void FUN_1024d791c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef1006030)) {
      uVar2 = 0xd00000000000001d;
      func_0x000107c605b8(0xd00000000000001d,0x800000010eff9fd0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000039;
        if (((param_2 != -0x2fffffffffffffc7) || (param_3 != -0x7ffffffef0f597c0)) &&
           (func_0x000107c605b8(0xd000000000000039,0x800000010f0a6840,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MyStoryCustomViewersPickerScopeGraphBridge/SCMyStoryCustomViewersPickerScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x6c,2,0x35,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d7b20);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56924();
        goto LAB_1024d79a8;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c587c4();
  }
LAB_1024d79a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1024d7b20; end: 1024d7bcb; -[SCMyStoryCustomViewersPickerScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1024d7b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1024d791c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1024d7bcc; end: 1024d7c43; -[SCMyStoryCustomViewersPickerScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d7bcc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ea1158,0);
  *(undefined8 *)(param_1 + _DAT_112ea1160) = 0;
  *(undefined8 *)(param_1 + _DAT_112ea1168) = 0;
  *(undefined8 *)(param_1 + _DAT_112ea1170) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024d7c44; end: 1024d7c77;  */

void FUN_1024d7c44(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024d7c78; end: 1024d7ccf; -[SCMyStoryCustomViewersPickerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024d7ca4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024d7ca8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d7c78(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ea1158);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea1160));
  return;
}



/* Entry: 1024d7cd0; end: 1024d7cef;  */

void FUN_1024d7cd0(void)

{
  func_0x000107c61168(&PTR_PTR_112848fb0);
  return;
}



/* Entry: 1024d7cf0; end: 1024d7d37; -[SCSCMyStoryCustomViewersPickerScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d7cf0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea11a0;
  func_0x000107c61428(param_1 + _DAT_112ea11a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024d7d38; end: 1024d7d8f; -[SCSCMyStoryCustomViewersPickerScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d7d38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea11a0;
  func_0x000107c61428(param_1 + _DAT_112ea11a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1024d7d90; end: 1024d7e67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d7d90(undefined8 param_1,long param_2)

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
    FUN_1024d6f68();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ea10b8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024d7e68);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ea10c0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ea11a8);
    *(long **)(unaff_x20 + _DAT_112ea11a8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1024d7e68; end: 1024d7e8f; -[SCSCMyStoryCustomViewersPickerScopedServicesSaberEntryPoint begin] */

void FUN_1024d7e68(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1024d7d90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024d7e90; end: 1024d8007;  */

/* WARNING: Possible PIC construction at 0x0001024d7ef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024d7f90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024d7efc) */
/* WARNING: Removing unreachable block (ram,0x0001024d7f94) */
/* WARNING: Removing unreachable block (ram,0x0001024d7fac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d7e90(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea11a8);
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



/* Entry: 1024d8008; end: 1024d800f;  */

void FUN_1024d8008(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1024d8010; end: 1024d8043; -[SCSCMyStoryCustomViewersPickerScopedServicesSaberEntryPoint end] */

void FUN_1024d8010(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1024d7e90();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1024d8044; end: 1024d8163;  */

void FUN_1024d8044(long param_1,long param_2,long param_3)

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
                        "MyStoryCustomViewersPickerScopeGraphBridge/SCSCMyStoryCustomViewersPickerScopedServicesSaberEntryPoint.swift"
                        ,0x6c,2,0x2d,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d8164);
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



/* Entry: 1024d8164; end: 1024d820f; -[SCSCMyStoryCustomViewersPickerScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1024d8164(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1024d8044(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1024d8210; end: 1024d826f; -[SCSCMyStoryCustomViewersPickerScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d8210(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ea11a0,0);
  *(undefined8 *)(param_1 + _DAT_112ea11a8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024d8270; end: 1024d82a3;  */

void FUN_1024d8270(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024d82a4; end: 1024d82db; -[SCSCMyStoryCustomViewersPickerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d82a4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ea11a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea11a8));
  return;
}



/* Entry: 1024d82dc; end: 1024d82fb;  */

void FUN_1024d82dc(void)

{
  func_0x000107c61168(&PTR_PTR_112849080);
  return;
}



/* Entry: 1024d82fc; end: 1024d855f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1024d82fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  plVar5 = &lStack_60;
  func_0x000107c613fc();
  uVar2 = param_2;
  func_0x000107c5b4b0();
  func_0x000107c61180();
  lVar3 = 0;
  FUN_1024d9424();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112ea1280) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112ea1278) = param_4;
  *(undefined8 *)(lVar4 + _DAT_112ea1290) = param_3;
  *(undefined8 *)(lVar4 + _DAT_112ea1288) = uVar2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  func_0x000107c61154(&lStack_60,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  *(long **)(unaff_x20 + 0x10) = plVar5;
  return unaff_x20;
}



/* Entry: 1024d8560; end: 1024d857f;  */

void FUN_1024d8560(void)

{
  FUN_1024d85f0();
  return;
}



/* Entry: 1024d8580; end: 1024d85a3;  */

void FUN_1024d8580(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1024d85a4; end: 1024d85c7;  */

void FUN_1024d85a4(void)

{
  FUN_1024d85f0();
  return;
}



/* Entry: 1024d85c8; end: 1024d85cf;  */

undefined8 FUN_1024d85c8(void)

{
  return 0;
}



/* Entry: 1024d85d0; end: 1024d85ef;  */

void FUN_1024d85d0(void)

{
  func_0x000107c61168(&PTR_PTR_112ea1218);
  return;
}



/* Entry: 1024d85f0; end: 1024d8747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d85f0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea1288);
  if (lVar2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      uVar3 = 0;
      FUN_1024d9468(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      func_0x000107c5ffdc();
      puVar4 = &UNK_110516cd0;
      func_0x000107c613fc(&UNK_110516cd0,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      pcStack_40 = FUN_1024d9444;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_100f6151c;
      puStack_48 = &UNK_110516ce8;
      puStack_38 = puVar4;
      func_0x000107c60bc4(&puStack_60);
      func_0x000107c61574(puStack_38);
      func_0x000107c4e128(lVar2);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uVar3);
      return;
    }
  }
  lVar1 = _DAT_112ea12c8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea1280);
  func_0x000107c61428(lVar2 + _DAT_112ea12c8,&puStack_60,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c4d3a8();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1024d8748; end: 1024d883b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d8748(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if (param_1 == 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      lVar2 = *(long *)(param_3 + _DAT_112ea1280);
      func_0x000107c61174();
      func_0x000107c61170(param_3);
      lVar1 = _DAT_112ea12c8;
      func_0x000107c61428(lVar2 + _DAT_112ea12c8,auStack_50,0,0);
      lVar1 = lVar2 + lVar1;
      func_0x000107c61618();
      func_0x000107c61170(lVar2);
      if (lVar1 != 0) {
        func_0x000107c4d3a8(lVar1);
        func_0x000107c615e8(lVar1);
      }
    }
  }
  else {
    func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      FUN_1024d883c(param_1);
      func_0x000107c61170(param_3);
    }
  }
  return;
}



/* Entry: 1024d883c; end: 1024d8d37;  */

/* WARNING: Removing unreachable block (ram,0x0001024d8d2c) */
/* WARNING: Removing unreachable block (ram,0x0001024d8d28) */
/* WARNING: Removing unreachable block (ram,0x0001024d8d30) */
/* WARNING: Removing unreachable block (ram,0x0001024d8d24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d883c(ulong param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  ulong uVar15;
  long unaff_x20;
  undefined **ppuVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 auStack_e0 [104];
  long lStack_78;
  ulong auStack_70 [2];
  
  if (param_1 >> 0x3e == 0) {
    uVar17 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar17 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar17 = param_1;
    }
    func_0x000107c60480();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar5;
  if (uVar17 != 0) {
    uVar18 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d89a8);
          (*pcVar1)();
        }
        uVar4 = *(ulong *)(param_1 + uVar18 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar18;
        func_0x00010103193c(uVar18,param_1);
      }
      if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d89a4);
        (*pcVar1)();
      }
      uVar19 = uVar18 + 1;
      auStack_70[0] = uVar4;
      FUN_1024d8d38(&lStack_78,auStack_70);
      func_0x000107c61170(uVar4);
      lVar8 = lStack_78;
      if (lStack_78 != 0) {
        puVar3 = puVar5;
        func_0x000107c61550();
        if ((((int)puVar3 == 0) || ((long)puVar5 < 0)) ||
           (puVar3 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar5 >> 0x3e == 0) {
            puVar2 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar2 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar5) {
              puVar2 = puVar5;
            }
            func_0x000107c60480(puVar2);
          }
          puVar3 = (undefined *)0x0;
          func_0x00010117000c(0,puVar2 + 1,1,puVar5);
        }
        uVar15 = (ulong)puVar3 & 0xffffffffffffff8;
        uVar4 = *(ulong *)(uVar15 + 0x10);
        puVar5 = puVar3;
        if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar4) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
          func_0x00010117000c(puVar5,uVar4 + 1,1,puVar3);
          uVar15 = (ulong)puVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar15 + 0x10) = uVar4 + 1;
        *(long *)(uVar15 + uVar4 * 8 + 0x20) = lVar8;
      }
      uVar18 = uVar18 + 1;
    } while (uVar19 != uVar17);
  }
  lVar6 = 0x705f6d6f74737563;
  func_0x000107c5fadc(0x705f6d6f74737563,0xee00796361766972);
  uVar7 = 0;
  func_0x000107c5fe40(0);
  lVar8 = lVar6;
  uVar10 = uVar7;
  func_0x000107c312f4(lVar6,uVar7);
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  func_0x000107c61170(uVar7);
  if (lVar8 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = lVar8;
    func_0x000107c5faec(lVar8);
    func_0x000107c61170(lVar8);
    func_0x000107c5fadc(lVar6,uVar10);
    func_0x000107c6142c(uVar10);
  }
  puVar2 = PTR_PTR_1126b2890;
  func_0x000107c610f8();
  func_0x000107c48da0();
  func_0x000107c61170(lVar6);
  lVar8 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  puVar13 = auStack_e0;
  func_0x000107c61534();
  *(undefined8 *)(lVar8 + 0x18) = 8;
  *(undefined8 *)(lVar8 + 0x10) = 4;
  ppuVar16 = &PTR____CFConstantStringClassReference_110f488f8;
  func_0x000107c5faec();
  puVar14 = puVar13;
  func_0x000107c61170(&PTR____CFConstantStringClassReference_110f488f8);
  *(undefined8 *)(lVar8 + 0x20) = ppuVar16;
  *(undefined1 **)(lVar8 + 0x28) = puVar13;
  ppuVar16 = &PTR____CFConstantStringClassReference_110f48918;
  func_0x000107c5faec();
  puVar13 = puVar14;
  func_0x000107c61170(&PTR____CFConstantStringClassReference_110f48918);
  *(undefined ***)(lVar8 + 0x30) = ppuVar16;
  *(undefined1 **)(lVar8 + 0x38) = puVar14;
  ppuVar16 = &PTR____CFConstantStringClassReference_110f48798;
  func_0x000107c5faec();
  puVar14 = puVar13;
  func_0x000107c61170(&PTR____CFConstantStringClassReference_110f48798);
  *(undefined ***)(lVar8 + 0x40) = ppuVar16;
  *(undefined1 **)(lVar8 + 0x48) = puVar13;
  ppuVar16 = &PTR____CFConstantStringClassReference_110f48998;
  func_0x000107c5faec();
  func_0x000107c61170(&PTR____CFConstantStringClassReference_110f48998);
  *(undefined ***)(lVar8 + 0x50) = ppuVar16;
  *(undefined1 **)(lVar8 + 0x58) = puVar14;
  lVar6 = lVar8;
  func_0x000100111634(lVar8);
  func_0x000107c61588(lVar8);
  func_0x000107c61408((undefined8 *)(lVar8 + 0x20),4,PTR___sSSN_11034da80);
  puVar3 = &UNK_110516d20;
  func_0x000107c613fc(&UNK_110516d20,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  func_0x000107c61174(puVar2);
  lVar9 = 0x765f7463656c6573;
  func_0x000107c5fadc(0x765f7463656c6573,0xee00737265776569);
  uVar10 = 0;
  func_0x000107c5fe40(0);
  lVar8 = lVar9;
  func_0x000107c312f4(lVar9,uVar10);
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  func_0x000107c61170(uVar10);
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d8d38);
    (*pcVar1)();
  }
  puVar11 = PTR_PTR_1126c24a0;
  func_0x000107c610f8();
  func_0x000107c4650c();
  func_0x000107c61170(lVar8);
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ea1280) + _DAT_112ea12c0);
  func_0x000107c615f0(uVar7);
  puVar12 = puVar11;
  func_0x000107c61174(puVar11);
  uVar10 = uVar7;
  func_0x0001043965b4(uVar7,lVar6,puVar5,PTR___swiftEmptyArrayStorage_11034f1c8,FUN_1024d94a8,puVar3
                      ,FUN_1024d8f88,0,puVar11,0,0,0,unaff_x20,0);
  func_0x000107c6142c(puVar5);
  func_0x000107c6142c(lVar6);
  func_0x000107c615e8(uVar7);
  func_0x000107c61170(puVar12);
  func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112ea1278));
  func_0x000107c61170(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar10);
  return;
}



/* Entry: 1024d8d38; end: 1024d8f87;  */

/* WARNING: Removing unreachable block (ram,0x0001024d8f7c) */

void FUN_1024d8d38(undefined8 *param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar10 = *param_2;
  uVar9 = uVar10;
  func_0x000107c5d984();
  func_0x000107c61180();
  puVar8 = (undefined *)0x0;
  if (uVar9 == 0) goto LAB_1024d8e24;
  uVar1 = uVar9;
  func_0x000107c5faec();
  uVar1 = uVar1 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar1 = uVar10;
    uVar6 = param_3;
    func_0x000107c42120();
    func_0x000107c61180();
    if (uVar1 == 0) {
      uVar1 = uVar10;
      func_0x000107c5db08();
      func_0x000107c61180();
      if (uVar1 == 0) goto LAB_1024d8e14;
    }
    uVar2 = uVar1;
    func_0x000107c5faec();
    uVar7 = uVar6;
    func_0x000107c61170(uVar1);
    uVar1 = uVar10;
    func_0x000107c439a8();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar3 = uVar1;
      func_0x000107c3f430();
      if ((uVar3 & 1) == 0) {
        func_0x000107c6142c(param_3);
        puVar4 = PTR_PTR_1126b3558;
        func_0x000107c610f8(PTR_PTR_1126b3558);
        func_0x000107c48298();
        func_0x000107c61170(uVar9);
        func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52c78);
        func_0x000107c5db08();
        func_0x000107c61180();
        if (uVar10 == 0) {
          func_0x000107c61174(puVar4);
          uVar9 = 0;
        }
        else {
          uVar9 = uVar10;
          func_0x000107c5faec();
          func_0x000107c61170(uVar10);
          func_0x000107c61174(puVar4);
          func_0x000107c5fadc(uVar9,uVar7);
          func_0x000107c6142c(uVar7);
        }
        puVar5 = PTR_PTR_1126b3560;
        func_0x000107c610f8(PTR_PTR_1126b3560);
        func_0x000107c5fadc(uVar2,uVar6);
        func_0x000107c6142c(uVar6);
        func_0x000107c46d94(puVar5);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar2);
        puVar8 = PTR_PTR_1126b3568;
        func_0x000107c610f8();
        func_0x000107c48294();
        func_0x000107c61170(uVar1);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar5);
        goto LAB_1024d8e24;
      }
      func_0x000107c61170(uVar1);
    }
    func_0x000107c6142c(param_3);
    param_3 = uVar6;
  }
LAB_1024d8e14:
  func_0x000107c6142c(param_3);
  func_0x000107c61170(uVar9);
  puVar8 = (undefined *)0x0;
LAB_1024d8e24:
  *param_1 = puVar8;
  return;
}



/* Entry: 1024d8f88; end: 1024d906f;  */

undefined * FUN_1024d8f88(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar2 = PTR_PTR_1126b2898;
  func_0x000107c610f8(PTR_PTR_1126b2898);
  func_0x000107c453e4();
  lVar3 = 0x6b636f6c62;
  func_0x000107c5fadc(0x6b636f6c62,0xe500000000000000);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar3;
  func_0x000107c312f4(lVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    puVar6 = puVar2;
    func_0x000107c5e838(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c5e5c0(puVar2);
    func_0x000107c61180();
    func_0x000107c61170();
    puVar6 = puVar2;
    func_0x000107c3ecc8(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d9070);
  (*pcVar1)();
}



/* Entry: 1024d9070; end: 1024d90cf; -[_TtC30MyStoryCustomViewersPickerImpl34MyStoryCustomViewersPickerWorkflow init] */

void FUN_1024d9070(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyStoryCustomViewersPickerImpl.MyStoryCustomViewersPickerWorkflow",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d909c);
  (*pcVar1)();
}



/* Entry: 1024d90d0; end: 1024d9127; -[_TtC30MyStoryCustomViewersPickerImpl34MyStoryCustomViewersPickerWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024d90ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024d910c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024d90f0) */
/* WARNING: Removing unreachable block (ram,0x0001024d9110) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d90d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea1280));
  return;
}



/* Entry: 1024d9128; end: 1024d9273;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d9128(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112ea1278);
  lVar2 = lVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    func_0x000107c41864(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ea1280) + _DAT_112ea12c0));
    func_0x000107c4ffe8(lVar3);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  lVar3 = _DAT_112ea12c8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea1280);
  func_0x000107c61428(lVar2 + _DAT_112ea12c8,auStack_68,0,0);
  lVar2 = lVar2 + lVar3;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar1 = 0;
    FUN_1024d9468(0,0x112d60fb0,&PTR_PTR_1126b3568);
    func_0x000107c5fc48(param_1,uVar1);
    if (param_3 == 0) {
      param_2 = 0;
    }
    else {
      func_0x000107c5fadc(param_2,param_3);
    }
    func_0x000107c41ad0(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1024d9274; end: 1024d9333; -[_TtC30MyStoryCustomViewersPickerImpl34MyStoryCustomViewersPickerWorkflow didConfirmWithSelectedItems:title:uiContainer:] */

/* WARNING: Possible PIC construction at 0x0001024d9318: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024d931c) */

void FUN_1024d9274(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1024d9468(0,0x112d60fb0,&PTR_PTR_1126b3568);
  func_0x000107c5fc54(param_3,uVar1);
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_1024d9128(param_3,param_4,uVar1,param_5);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1024d9334; end: 1024d9423; -[_TtC30MyStoryCustomViewersPickerImpl34MyStoryCustomViewersPickerWorkflow didDismissWithSelectedItems:title:] */

void FUN_1024d9334(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174(param_1);
  func_0x0001024d9384();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1024d9424; end: 1024d9443;  */

void FUN_1024d9424(void)

{
  func_0x000107c61168(&PTR_PTR_112849140);
  return;
}



/* Entry: 1024d9444; end: 1024d9467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d9444(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if (param_1 == 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + _DAT_112ea1280);
      func_0x000107c61174();
      func_0x000107c61170(lVar1);
      lVar1 = _DAT_112ea12c8;
      func_0x000107c61428(lVar2 + _DAT_112ea12c8,auStack_50,0,0);
      lVar1 = lVar2 + lVar1;
      func_0x000107c61618();
      func_0x000107c61170(lVar2);
      if (lVar1 != 0) {
        func_0x000107c4d3a8(lVar1);
        func_0x000107c615e8(lVar1);
      }
    }
  }
  else {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      FUN_1024d883c(param_1);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 1024d9468; end: 1024d94a7;  */

void FUN_1024d9468(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1024d94a8; end: 1024d94af;  */

void FUN_1024d94a8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1024d94b0; end: 1024d94cf; -[_TtC33SCMyStoryCustomViewersPickerScope33SCMyStoryCustomViewersPickerScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d94b0(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ea12c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024d94d0; end: 1024d9517; -[_TtC33SCMyStoryCustomViewersPickerScope33SCMyStoryCustomViewersPickerScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d94d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea12c8;
  func_0x000107c61428(param_1 + _DAT_112ea12c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024d9518; end: 1024d956f; -[_TtC33SCMyStoryCustomViewersPickerScope33SCMyStoryCustomViewersPickerScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d9518(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea12c8;
  func_0x000107c61428(param_1 + _DAT_112ea12c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1024d9570; end: 1024d95cf; -[_TtC33SCMyStoryCustomViewersPickerScope33SCMyStoryCustomViewersPickerScope init] */

void FUN_1024d9570(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMyStoryCustomViewersPickerScope.SCMyStoryCustomViewersPickerScope",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d959c);
  (*pcVar1)();
}



/* Entry: 1024d95d0; end: 1024d962b; -[_TtC33SCMyStoryCustomViewersPickerScope33SCMyStoryCustomViewersPickerScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1024d95d0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea12c0));
  param_1 = param_1 + _DAT_112ea12c8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1024d962c; end: 1024d9697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d962c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100342200();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ea1300) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1024d9698; end: 1024d969f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d9698(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100342200();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea1300) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1024d96a0; end: 1024d96eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d96a0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea1300) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024d96ec; end: 1024d97df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1024d96ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_80 [2];
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = 0;
  func_0x000100335f8c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112ea12c8;
  func_0x000107c61614(lVar4 + _DAT_112ea12c8,0);
  *(undefined8 *)(lVar4 + _DAT_112ea12c0) = param_1;
  func_0x000107c61428(lVar4 + lVar2,auStack_58,1,0);
  func_0x000107c61604(lVar4 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = lVar4;
  lStack_60 = lVar3;
  func_0x000107c615f0(param_1);
  plVar5 = &lStack_68;
  func_0x000107c61154(plVar5,puVar1);
  aplStack_80[0] = plVar5;
  func_0x00010008a7c8(&uStack_70,aplStack_80);
  func_0x000100083b20(aplStack_80);
  func_0x000107c61574(uStack_70);
  func_0x000107c615e8(aplStack_80[0]);
  return plVar5;
}



/* Entry: 1024d97e0; end: 1024d9853; -[_TtC33SCMyStoryCustomViewersPickerScope41SCMyStoryCustomViewersPickerScopeServices buildWithUiContainer:delegate:] */

void FUN_1024d97e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1024d96ec(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1024d9854; end: 1024d98b3; -[_TtC33SCMyStoryCustomViewersPickerScope41SCMyStoryCustomViewersPickerScopeServices init] */

void FUN_1024d9854(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMyStoryCustomViewersPickerScope.SCMyStoryCustomViewersPickerScopeServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d9880);
  (*pcVar1)();
}



/* Entry: 1024d98b4; end: 1024d98e3; -[_TtC33SCMyStoryCustomViewersPickerScope41SCMyStoryCustomViewersPickerScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d98b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea1300));
  return;
}



/* Entry: 1024d98e4; end: 1024d992f;  */

void FUN_1024d98e4(undefined8 param_1)

{
  func_0x0001000285a8(0x112ea0e28,&UNK_10dab2e60);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1024d9930,param_1);
  return;
}



/* Entry: 1024d9930; end: 1024d99a7;  */

void FUN_1024d9930(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c5aa4c(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  puVar2 = PTR_PTR_1126aa958;
  func_0x000107c610f8();
  func_0x000107c48678();
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 1024d99a8; end: 1024d99e7;  */

undefined ** FUN_1024d99a8(void)

{
  return &PTR_DAT_112f2d890;
}



/* Entry: 1024d99e8; end: 1024d9b7b;  */

undefined1  [16] FUN_1024d99e8(long param_1,long param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      func_0x000107c602fc(0x28);
      func_0x000107c6142c(0xe000000000000000);
      uStack_40 = -0x2fffffffffffffda;
      uStack_38 = -0x7ffffffef0f59490;
      lVar1 = param_1;
      lVar2 = param_2;
    }
    else {
      func_0x000107c602fc(0x1f);
      func_0x000107c61434(param_2);
      func_0x000107c6142c(0xe000000000000000);
      lVar2 = -0x7ffffffef0f594e0;
      lVar1 = -0x2fffffffffffffe3;
      uStack_40 = param_1;
      uStack_38 = param_2;
    }
  }
  else {
    if (param_3 != 2) {
      lVar1 = -0x7ffffffef0f59510;
      lVar2 = -0x2fffffffffffffe0;
      if (param_1 != 1 || param_2 != 0) {
        lVar1 = -0x12ffff8d908d8d9b;
        lVar2 = 0x206e776f6e6b6e55;
      }
      uStack_40 = -0x2fffffffffffffde;
      uStack_38 = -0x7ffffffef0f594c0;
      if (param_1 != 0 || param_2 != 0) {
        uStack_40 = lVar2;
        uStack_38 = lVar1;
      }
      goto LAB_1024d9b68;
    }
    uStack_40 = 0x206f4e;
    uStack_38 = -0x1d00000000000000;
    func_0x000107c5fb78();
    lVar1 = 0x62616c6961766120;
    lVar2 = -0x15ffffffffff9a94;
  }
  func_0x000107c5fb78(lVar1,lVar2);
LAB_1024d9b68:
  auVar3._8_8_ = uStack_38;
  auVar3._0_8_ = uStack_40;
  return auVar3;
}



/* Entry: 1024d9b7c; end: 1024d9b83; -[_TtC42FriendingInAppNotificationPresentingPlugin42FriendingInAppNotificationPresentingPlugin presentInAppNotification:delegate:] */

undefined8 FUN_1024d9b7c(void)

{
  return 0;
}



/* Entry: 1024d9b84; end: 1024da05b;  */

/* WARNING: Possible PIC construction at 0x0001024d9c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024d9c78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024d9c88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024d9d70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024d9c8c) */
/* WARNING: Removing unreachable block (ram,0x0001024d9c7c) */
/* WARNING: Removing unreachable block (ram,0x0001024d9c20) */
/* WARNING: Removing unreachable block (ram,0x0001024d9cf8) */
/* WARNING: Removing unreachable block (ram,0x0001024d9fb8) */
/* WARNING: Removing unreachable block (ram,0x0001024d9d28) */
/* WARNING: Removing unreachable block (ram,0x0001024d9c30) */
/* WARNING: Removing unreachable block (ram,0x0001024d9d74) */
/* WARNING: Removing unreachable block (ram,0x0001024da050) */
/* WARNING: Removing unreachable block (ram,0x0001024d9d98) */
/* WARNING: Removing unreachable block (ram,0x0001024d9fc8) */
/* WARNING: Removing unreachable block (ram,0x0001024da058) */
/* WARNING: Removing unreachable block (ram,0x0001024d9fcc) */
/* WARNING: Removing unreachable block (ram,0x0001024da010) */
/* WARNING: Removing unreachable block (ram,0x0001024d9f3c) */
/* WARNING: Removing unreachable block (ram,0x0001024da054) */
/* WARNING: Removing unreachable block (ram,0x0001024d9f40) */
/* WARNING: Removing unreachable block (ram,0x0001024da014) */

void FUN_1024d9b84(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x000107c4f6dc();
  if ((uVar1 < 0x19) && ((1L << (uVar1 & 0x3f) & 0x1804000U) != 0)) {
    puVar2 = &UNK_110516fa8;
    func_0x000107c613fc(&UNK_110516fa8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_2);
    puVar3 = &UNK_110516fd0;
    func_0x000107c613fc(&UNK_110516fd0,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(ulong *)(puVar3 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)(param_1);
    return;
  }
  return;
}



/* Entry: 1024da05c; end: 1024da0b7;  */

void FUN_1024da05c(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c445dc();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 1024da0b8; end: 1024da11f; -[_TtC42FriendingInAppNotificationPresentingPlugin42FriendingInAppNotificationPresentingPlugin presentInAppNotificationAsync:delegate:] */

/* WARNING: Possible PIC construction at 0x0001024da100: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024da104) */

void FUN_1024da0b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_1024d9b84(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1024da120; end: 1024da16f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024da120(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = _DAT_112ea1370;
  if (*(long *)(unaff_x20 + _DAT_112ea1378) != 0) {
    if (*(long *)(unaff_x20 + _DAT_112ea1370) != 0) {
      func_0x000107c4207c();
      uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
      *(undefined8 *)(unaff_x20 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 1024da170; end: 1024da197; -[_TtC42FriendingInAppNotificationPresentingPlugin42FriendingInAppNotificationPresentingPlugin dismissInAppNotification] */

void FUN_1024da170(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1024da120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024da198; end: 1024da1c7; -[_TtC42FriendingInAppNotificationPresentingPlugin42FriendingInAppNotificationPresentingPlugin shouldHandleAppNotification:] */

uint FUN_1024da198(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  func_0x000107c4f6dc(param_3);
  return (uint)(param_3 < 0x19) & 0x1804000U >> (ulong)((uint)param_3 & 0x1f);
}



/* Entry: 1024da1c8; end: 1024da1eb;  */

void FUN_1024da1c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_6;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x78) = param_5;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1024da1ec,0,0);
  return;
}



/* Entry: 1024da1ec; end: 1024da3ab;  */

void FUN_1024da1ec(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x22;
  
  uVar7 = *(ulong *)(unaff_x22 + 0x68);
  uVar2 = *(ulong *)(unaff_x22 + 0x70);
  uVar1 = uVar7 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar8 = *(ulong *)(unaff_x22 + 0x78);
    uVar3 = *(ulong *)(unaff_x22 + 0x80);
    uVar1 = uVar8 & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar1 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
      puVar5 = PTR_PTR_1126afd38;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(unaff_x22 + 0x90) = puVar5;
      func_0x000107c5fadc(uVar6,uVar4);
      func_0x000107c5e868(puVar5);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61170(uVar6);
      func_0x000107c5fadc(uVar7,uVar2);
      func_0x000107c5e458(puVar5);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61170(uVar7);
      func_0x000107c5fadc(uVar8,uVar3);
      func_0x000107c5e780(puVar5);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61170(uVar8);
      func_0x000107c5e770(puVar5);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c5e89c(puVar5);
      func_0x000107c61180();
      func_0x000107c61170();
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_1024da3ac;
      func_0x000107c61448(unaff_x22 + 0x10,1);
      FUN_1024da484();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
  }
  FUN_1024dcbd0(*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60),0);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x0001024da3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1024da3ac; end: 1024da417;  */

void FUN_1024da3ac(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x98) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0xa0) = *(undefined8 *)(lVar2 + 0x50);
    pcVar1 = FUN_1024da418;
  }
  else {
    func_0x000107c61654();
    pcVar1 = (code *)0x1024da450;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1024da418; end: 1024da483;  */

void FUN_1024da418(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x0001024da44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xa0));
  return;
}



/* Entry: 1024da484; end: 1024da643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024da484(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar1 = *(long *)(param_2 + _DAT_112ea1390);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3ecc8(param_3);
    func_0x000107c61180();
    uVar2 = 0;
    func_0x0001024dd084(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    func_0x000107c5ffdc();
    puVar3 = &UNK_1105171b0;
    func_0x000107c613fc(&UNK_1105171b0,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_1;
    *(long *)(puVar3 + 0x18) = param_2;
    pcStack_50 = FUN_1024dd028;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1010a2bbc;
    puStack_58 = &UNK_1105171c8;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar3);
    func_0x000107c4329c(lVar1);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar2);
    return;
  }
  uVar5 = 0xd000000000000016;
  FUN_1024dcbd0(0xd000000000000016,0x800000010f0a6ad0,2);
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar6 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar6 = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_1,uVar2);
  return;
}



/* Entry: 1024da644; end: 1024da6cb;  */

void FUN_1024da644(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (param_1 != 0) {
    **(long **)(*(long *)(param_4 + 0x40) + 0x28) = param_1;
    func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_4);
    return;
  }
  FUN_1024dcbd0(0,0,3);
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *plVar2 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_4,uVar1);
  return;
}



/* Entry: 1024da6cc; end: 1024da6e3;  */

void FUN_1024da6cc(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1024da6e4,0,0);
  return;
}



/* Entry: 1024da6e4; end: 1024da83f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024da6e4(undefined8 param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x22;
  long lVar6;
  
  uVar3 = *(ulong *)(unaff_x22 + 0x58);
  func_0x000107c51f08();
  func_0x000107c61180();
  if (uVar3 == 0) {
    FUN_1024dcbd0(0x69207265646e6553,0xe900000000000064,1);
  }
  else {
    lVar6 = *(long *)(unaff_x22 + 0x60);
    uVar4 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    *(ulong *)(unaff_x22 + 0x68) = param_2;
    puVar1 = (ulong *)(lVar6 + _DAT_112ea13c0);
    uVar3 = *puVar1;
    uVar2 = puVar1[1];
    if ((uVar4 != uVar3 || param_2 != uVar2) &&
       (uVar5 = uVar4, func_0x000107c605b8(uVar4,param_2,uVar3,uVar2,0), (uVar5 & 1) == 0)) {
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_1024da840;
      func_0x000107c61448(unaff_x22 + 0x10,1);
      FUN_1024da918();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    func_0x000107c5c734(*(undefined8 *)(*(long *)(unaff_x22 + 0x60) + _DAT_112ea13a0));
    func_0x000107c61180();
    func_0x000107c615e8();
    FUN_1024dcbd0(uVar4,param_2,0);
    func_0x000107c6142c(param_2);
  }
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x0001024da7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1024da840; end: 1024da8ab;  */

void FUN_1024da840(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x70) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(lVar2 + 0x50);
    pcVar1 = FUN_1024da8ac;
  }
  else {
    func_0x000107c61654();
    pcVar1 = (code *)0x1024da8e4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1024da8ac; end: 1024da917;  */

void FUN_1024da8ac(void)

{
  long unaff_x22;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x0001024da8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Entry: 1024da918; end: 1024dad93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024da918(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long lVar9;
  long lVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = *(long *)(param_2 + _DAT_112ea13a8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar7 = param_3;
    func_0x000107c5fadc(param_3,param_4);
    func_0x0001024dd084(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    (**(code **)(lVar10 + 0x68))
              (lVar9,*(undefined4 *)
                      PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar1);
    lVar3 = lVar9;
    func_0x000107c5fff0(lVar9);
    (**(code **)(lVar10 + 8))(lVar9,lVar1);
    puVar4 = &UNK_110517138;
    func_0x000107c613fc(&UNK_110517138,0x30,7);
    *(undefined8 *)(puVar4 + 0x10) = param_1;
    *(long *)(puVar4 + 0x18) = param_2;
    *(undefined8 *)(puVar4 + 0x20) = param_3;
    *(undefined8 *)(puVar4 + 0x28) = param_4;
    pcStack_70 = FUN_1024dcf7c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_101043a98;
    puStack_78 = &UNK_110517150;
    ppuVar5 = &puStack_90;
    puStack_68 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_68;
    func_0x000107c61174(param_2);
    func_0x000107c61434(param_4);
    func_0x000107c61574(puVar4);
    func_0x000107c5b49c(lVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar3);
    return;
  }
  uVar6 = 0xd000000000000019;
  FUN_1024dcbd0(0xd000000000000019,0x800000010f0a6ab0,2);
  uVar7 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar8 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar8 = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_1,uVar7);
  return;
}



/* Entry: 1024dad94; end: 1024dae33;  */

void FUN_1024dad94(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_9;
  *(long *)(unaff_x22 + 0x10) = param_3;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1024dae34;
  plVar1[0x10] = param_8;
  plVar1[0x11] = param_2;
  plVar1[0xe] = param_6;
  plVar1[0xf] = param_7;
  plVar1[0xc] = param_4;
  plVar1[0xd] = param_5;
  plVar1[0xb] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1024da1ec,0,0);
  return;
}



/* Entry: 1024dae34; end: 1024dae9f;  */

void FUN_1024dae34(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x30) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x28));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x38) = param_1;
    pcVar1 = FUN_1024daf34;
  }
  else {
    pcVar1 = FUN_1024daea0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1024daea0; end: 1024daf33;  */

void FUN_1024daea0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x22 + 0x18));
  uVar1 = uVar2;
  func_0x000108ffe710();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = 1;
  func_0x000108ffef38(1,uVar1,1);
  func_0x000107c61180();
  func_0x000107c614ac(uVar3);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1024daf34,0,0);
  return;
}



/* Entry: 1024daf34; end: 1024daf73;  */

void FUN_1024daf34(void)

{
  long unaff_x22;
  
  **(undefined8 **)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0x40) + 0x28) =
       *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c61450();
                    /* WARNING: Could not recover jumptable at 0x0001024daf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1024daf74; end: 1024db1a3;  */

/* WARNING: Possible PIC construction at 0x0001024dafc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024db030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024db040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024db070: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024db044) */
/* WARNING: Removing unreachable block (ram,0x0001024db034) */
/* WARNING: Removing unreachable block (ram,0x0001024dafc8) */
/* WARNING: Removing unreachable block (ram,0x0001024dafcc) */
/* WARNING: Removing unreachable block (ram,0x0001024db05c) */
/* WARNING: Removing unreachable block (ram,0x0001024db060) */
/* WARNING: Removing unreachable block (ram,0x0001024dafe8) */
/* WARNING: Removing unreachable block (ram,0x0001024db074) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024daf74(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ea13c8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4d860();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1024db1a4; end: 1024db297;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024db1a4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  func_0x000107c5d9a4();
  func_0x000107c61180();
  if (param_1 == 0) {
    uVar3 = 0x666e692072657355;
    uVar4 = 0xe90000000000006f;
    uVar5 = 1;
  }
  else {
    func_0x000107c61170();
    lVar1 = *(long *)(unaff_x20 + _DAT_112ea1388);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126ce088;
      func_0x000107c61168(PTR_PTR_1126ce088);
      func_0x000107c41b48();
      func_0x000107c61180();
      func_0x000107c4f648(lVar1);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(puVar2);
      return;
    }
    uVar4 = 0x800000010f0a6ba0;
    uVar3 = 0xd000000000000014;
    uVar5 = 2;
  }
  FUN_1024dcbd0(uVar3,uVar4,uVar5);
  func_0x000107c61654();
  return;
}


