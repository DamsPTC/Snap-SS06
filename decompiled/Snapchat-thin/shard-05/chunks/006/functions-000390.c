/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f5677c; end: 103f56837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5677c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113034668) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034670);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113034678) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113034680) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113034688) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_113034690) = param_7;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f56838; end: 103f5691f; -[SCLensDataProviderConfiguration initWithFilteringPredicate:applicableContext:originalLens:providerType:lensPlacement:explorerLensDisabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f56838(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_113034668) = param_3;
  plVar1 = (long *)(param_1 + _DAT_113034670);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113034678) = param_5;
  *(undefined8 *)(param_1 + _DAT_113034680) = param_6;
  *(undefined8 *)(param_1 + _DAT_113034688) = param_7;
  *(undefined1 *)(param_1 + _DAT_113034690) = param_8;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_60,puVar2);
  return;
}



/* Entry: 103f56920; end: 103f56a3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103f56920(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  _objc_allocWithZone();
  uStack_38 = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113034668) = uStack_38;
  uStack_48 = param_1[2];
  uStack_50 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034670);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_113034678) = uStack_58;
  *(undefined8 *)(unaff_x20 + _DAT_113034680) = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_113034688) = param_1[5];
  *(undefined1 *)(unaff_x20 + _DAT_113034690) = *(undefined1 *)(param_1 + 6);
  FUN_103f5706c(&uStack_38,auStack_68,0x113034698,&UNK_10dcae1d0);
  FUN_103f5706c(&uStack_50,auStack_68,0x112d35ff8,&UNK_10d900cd0);
  FUN_103f5706c(&uStack_58,auStack_68,0x112d3b7d8,&UNK_10d920690);
  puVar2 = auStack_78;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  FUN_103f56a3c(param_1);
  return puVar2;
}



/* Entry: 103f56a3c; end: 103f56a6f;  */

undefined8 FUN_103f56a3c(undefined8 param_1)

{
  (*(code *)(undefined *)0x103f561f8)();
  return param_1;
}



/* Entry: 103f56a70; end: 103f56aa3; -[SCLensDataProviderConfiguration hash] */

undefined8 FUN_103f56a70(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f56aa4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103f56aa4; end: 103f56bd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f56aa4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar1 = *(long *)(unaff_x20 + _DAT_113034668);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x000107c44c3c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_113034670))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113034670);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x000107c44c3c();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  lVar1 = *(long *)(unaff_x20 + _DAT_113034678);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x000107c44c3c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113034680));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113034688));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113034690));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103f56bd8; end: 103f56d97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_103f56bd8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  uint uVar11;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar8 = unaff_x20;
  _swift_getObjectType();
  FUN_103f5706c(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar7 = &lStack_88;
    _swift_dynamicCast(plVar7,auStack_80,PTR___sypN_11034f1a8 + 8,lVar8,6);
    if (((ulong)plVar7 & 1) != 0) {
      lVar8 = *(long *)(unaff_x20 + _DAT_113034668);
      if (lVar8 == 0) {
        uVar5 = (uint)(*(long *)(lStack_88 + _DAT_113034668) == 0);
      }
      else {
        func_0x000107c49cec();
        uVar5 = (uint)lVar8;
      }
      lVar8 = ((long *)(unaff_x20 + _DAT_113034670))[1];
      lVar10 = ((long *)(lStack_88 + _DAT_113034670))[1];
      uVar11 = (uint)(lVar8 == 0 && lVar10 == 0);
      if (lVar8 != 0 && lVar10 != 0) {
        lVar9 = *(long *)(unaff_x20 + _DAT_113034670);
        if (lVar9 == *(long *)(lStack_88 + _DAT_113034670) && lVar8 == lVar10) {
          uVar11 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar11 = (uint)lVar9;
        }
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_113034678);
      if (lVar8 == 0) {
        uVar6 = (uint)(*(long *)(lStack_88 + _DAT_113034678) == 0);
      }
      else {
        func_0x000107c49cec();
        uVar6 = (uint)lVar8;
      }
      iVar1 = *(int *)(unaff_x20 + _DAT_113034680);
      iVar2 = *(int *)(lStack_88 + _DAT_113034680);
      lVar8 = *(long *)(unaff_x20 + _DAT_113034688);
      lVar10 = *(long *)(lStack_88 + _DAT_113034688);
      bVar3 = *(byte *)(unaff_x20 + _DAT_113034690);
      bVar4 = *(byte *)(lStack_88 + _DAT_113034690);
      _objc_release(lStack_88);
      if (((uVar5 & uVar11) == 1 && uVar6 != 0) && iVar1 == iVar2) {
        return lVar8 == lVar10 & (bVar3 ^ bVar4 ^ 1);
      }
    }
  }
  return 0;
}



/* Entry: 103f56d98; end: 103f56e17; -[SCLensDataProviderConfiguration isEqual:] */

uint FUN_103f56d98(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_103f56bd8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103f56e18; end: 103f56e1b; -[SCLensDataProviderConfiguration copyWithZone:] */

void FUN_103f56e18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f56e1c; end: 103f56e4f; -[SCLensDataProviderConfiguration description] */

void FUN_103f56e1c(void)

{
  undefined1 auStack_48 [56];
  
  func_0x000103f570b4(auStack_48);
  FUN_103f56a3c(auStack_48);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f56e50; end: 103f56eaf; -[SCLensDataProviderConfiguration init] */

void FUN_103f56e50(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensDataProviderCreationAPI/SCLensDataProviderConfigurationWrapper.swift",0x4a,2,
             0x52,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f56e98);
  (*pcVar1)();
}



/* Entry: 103f56eb0; end: 103f56ecb; +[SCLensDataProviderConfigurationBuilder lensDataProviderConfiguration] */

void FUN_103f56eb0(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x000107c453e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f56ecc; end: 103f56f0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f56ecc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130346a8);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f56f0c; end: 103f56f4b; +[SCLensDataProviderConfigurationBuilder lensDataProviderConfigurationWithExistingLensDataProviderConfiguration:] */

void FUN_103f56f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_103f57144(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103f56f4c; end: 103f56fab; -[SCLensDataProviderConfigurationBuilder withFilteringPredicate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f56f4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130346a0);
  *(undefined8 *)(param_1 + _DAT_1130346a0) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 103f56fac; end: 103f56fc3; -[SCLensDataProviderConfigurationBuilder withProviderType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f56fac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_1130346b8);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 103f56fc4; end: 103f56fd3; -[SCLensDataProviderConfigurationBuilder withExplorerLensDisabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f56fc4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1130346c8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 103f56fd4; end: 103f57017; -[SCLensDataProviderConfigurationBuilder safeBuildAndReturnError:] */

void FUN_103f56fd4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000100802a4c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f57018; end: 103f5701b;  */

void FUN_103f57018(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f5701c; end: 103f5704f;  */

void FUN_103f5701c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f57050; end: 103f5706b; -[SCLensDataProviderConfiguration .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c22b34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c22b38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f57050(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)
            (*(undefined8 *)(param_1 + _DAT_113034668),param_2,&DAT_113034668,&DAT_113034670,
             &DAT_113034678);
  return;
}



/* Entry: 103f5706c; end: 103f57143;  */

undefined8 FUN_103f5706c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103f57144; end: 103f5728f;  */

/* WARNING: Possible PIC construction at 0x000103f57178: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103f5717c) */

void FUN_103f57144(long param_1)

{
  if (param_1 == 0) {
    FUN_103f57290();
    _objc_allocWithZone();
  }
  else {
    FUN_103f57290();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 103f57290; end: 103f572af;  */

void FUN_103f57290(void)

{
  _objc_opt_self(&PTR_PTR_112969a10);
  return;
}



/* Entry: 103f572b0; end: 103f572cb;  */

void FUN_103f572b0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f572cc; end: 103f5730b;  */

void FUN_103f572cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113034720 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcae240;
  _swift_getWitnessTable(&UNK_10dcae240,&UNK_110724858);
  puRam0000000113034720 = puVar1;
  return;
}



/* Entry: 103f5730c; end: 103f573b7;  */

void FUN_103f5730c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f573b8; end: 103f573ef;  */

void FUN_103f573b8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103f573f0; end: 103f573ff; -[_TtC20SCLensTinselServices20SCLensTinselServices lensTinselExternalContentTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f573f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113034730));
  return;
}



/* Entry: 103f57400; end: 103f5740f; -[_TtC20SCLensTinselServices20SCLensTinselServices lensTinselExternalContentBroadcaster] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f57400(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113034738));
  return;
}



/* Entry: 103f57410; end: 103f5741f; -[_TtC20SCLensTinselServices20SCLensTinselServices lensTinselExternalContentBroadcastHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f57410(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113034740));
  return;
}



/* Entry: 103f57420; end: 103f574ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f57420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113034728) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113034730) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113034738) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113034740) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f574ac; end: 103f5750b; -[_TtC20SCLensTinselServices20SCLensTinselServices init] */

void FUN_103f574ac(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensTinselServices.SCLensTinselServices",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f574d8);
  (*pcVar1)();
}



/* Entry: 103f5750c; end: 103f57563; -[_TtC20SCLensTinselServices20SCLensTinselServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5750c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113034728));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113034730));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113034738));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113034740));
  return;
}



/* Entry: 103f57564; end: 103f576fb;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103f57564(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x10) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x10) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103f576fc; end: 103f577d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f576fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034770);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113034778) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f577d4; end: 103f57833; -[SCLensTinselExternalContentMessage init] */

void FUN_103f577d4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensTinselServices.LensTinselExternalContentMessage",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f57800);
  (*pcVar1)();
}



/* Entry: 103f57834; end: 103f5786f; -[SCLensTinselExternalContentMessage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f57834(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034770 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113034778));
  return;
}



/* Entry: 103f57870; end: 103f5788f;  */

void FUN_103f57870(void)

{
  _objc_opt_self(&PTR_PTR_112969bc8);
  return;
}



/* Entry: 103f57890; end: 103f5789f; -[SCLensTinselExternalContent source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f57890(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130347a8);
}



/* Entry: 103f578a0; end: 103f578fb; -[SCLensTinselExternalContent contentData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f578a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130347b0);
  uVar2 = ((undefined8 *)(param_1 + _DAT_1130347b0))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103f578fc; end: 103f57903;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f578fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130347a8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130347b0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f57904; end: 103f5799b; -[SCLensTinselExternalContent initWithSource:contentData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f57904(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  uVar3 = param_4;
  _objc_retain(param_4);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  _objc_release(uVar3);
  *(undefined8 *)(param_1 + _DAT_1130347a8) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_1130347b0);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f5799c; end: 103f57a73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5799c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130347a8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130347b0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f57a74; end: 103f57a77; -[SCLensTinselExternalContent copyWithZone:] */

void FUN_103f57a74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f57a78; end: 103f57ac3; -[SCLensTinselExternalContent description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f57a78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130347b0);
  uVar2 = ((undefined8 *)(param_1 + _DAT_1130347b0))[1];
  func_0x00010006c00c(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f57ac4; end: 103f57b3f; -[SCLensTinselExternalContent init] */

void FUN_103f57ac4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensTinselServices/LensTinselExternalContentWrapper.swift",0x3b,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f57b0c);
  (*pcVar1)();
}



/* Entry: 103f57b40; end: 103f57b53; -[SCLensTinselExternalContent .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f57b40(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = *(ulong *)(param_1 + _DAT_1130347b0);
  uVar1 = ((ulong *)(param_1 + _DAT_1130347b0))[1];
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 103f57b54; end: 103f57b73;  */

void FUN_103f57b54(void)

{
  _objc_opt_self(&PTR_PTR_112969c90);
  return;
}



/* Entry: 103f57b74; end: 103f57b77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f57b74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130347a8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130347b0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f57b78; end: 103f57bc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f57b78(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130347e8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f57bc4; end: 103f57cbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_103f57bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126a9f68;
  _objc_allocWithZone();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_103f57dbc;
  puStack_58 = &UNK_1107249c0;
  ppuVar2 = &puStack_70;
  uStack_50 = param_3;
  uStack_48 = param_4;
  __Block_copy(ppuVar2);
  _swift_retain(param_4);
  func_0x000107c45f78();
  __Block_release(ppuVar2);
  _swift_release(uStack_48);
  puStack_70 = puVar1;
  func_0x00010008a7c8(&uStack_78,&puStack_70);
  func_0x000100083b20(&puStack_70);
  _swift_release(uStack_78);
  _swift_unknownObjectRelease(puStack_70);
  return puVar1;
}



/* Entry: 103f57cbc; end: 103f57d77; -[_TtC28SCLensVideoEditingScopeProxy31SCLensVideoEditingScopeServices buildWithConfig:uiContainer:resultHandler:] */

void FUN_103f57cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  __Block_copy();
  puVar1 = &UNK_110724a40;
  _swift_allocObject(&UNK_110724a40,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_1);
  uVar2 = param_3;
  FUN_103f57bc4(param_3,param_4,0x103f57e48,puVar1);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_1);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f57d78; end: 103f57dab;  */

void FUN_103f57d78(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f57dac; end: 103f57dbb; -[_TtC28SCLensVideoEditingScopeProxy31SCLensVideoEditingScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f57dac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130347e8));
  return;
}



/* Entry: 103f57dbc; end: 103f57e0b;  */

void FUN_103f57dbc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  uVar3 = param_2;
  _objc_retain(param_2);
  (*pcVar1)(param_2);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 103f57e0c; end: 103f57e57;  */

void FUN_103f57e0c(long param_1,long param_2)

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



/* Entry: 103f57e58; end: 103f57e67; -[PublicGroupsChatScope presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f57e58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113034830));
  return;
}



/* Entry: 103f57e68; end: 103f57e87; -[PublicGroupsChatScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f57e68(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113034838));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f57e88; end: 103f57ed3; -[PublicGroupsChatScope groupId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f57e88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113034840);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113034840))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f57ed4; end: 103f57ee3; -[PublicGroupsChatScope source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f57ed4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113034848);
}



/* Entry: 103f57ee4; end: 103f57f2b; -[PublicGroupsChatScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f57ee4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113034850;
  _swift_beginAccess(param_1 + _DAT_113034850,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f57f2c; end: 103f57f83; -[PublicGroupsChatScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f57f2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113034850;
  _swift_beginAccess(param_1 + _DAT_113034850,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103f57f84; end: 103f581bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103f57f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  lVar3 = _DAT_113034850;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113034850,0);
  *(undefined8 *)(unaff_x20 + _DAT_113034830) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034840);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113034848) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113034838) = param_5;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_6);
  puVar2 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _swift_unknownObjectRetain(param_5);
  puVar4 = auStack_88;
  _objc_msgSendSuper2(puVar4,puVar2);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_6);
  return puVar4;
}



/* Entry: 103f581bc; end: 103f582bb; -[PublicGroupsChatScope initWithPresentingViewController:groupId:source:uiContainer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f581bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar3 = _DAT_113034850;
  _swift_unknownObjectWeakInit(param_1 + _DAT_113034850,0);
  *(undefined8 *)(param_1 + _DAT_113034830) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_113034840);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113034848) = param_5;
  *(undefined8 *)(param_1 + _DAT_113034838) = param_6;
  _swift_beginAccess(param_1 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar3,param_7);
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = param_1;
  lStack_80 = lVar4;
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_6);
  _objc_msgSendSuper2(&lStack_88,puVar2);
  return;
}



/* Entry: 103f582bc; end: 103f5831b; -[PublicGroupsChatScope init] */

void FUN_103f582bc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PublicGroupsChatScope.PublicGroupsChatScope",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f582e8);
  (*pcVar1)();
}



/* Entry: 103f5831c; end: 103f5839b; -[PublicGroupsChatScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f5831c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113034830));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113034838));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034840 + 8));
  param_1 = param_1 + _DAT_113034850;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 103f5839c; end: 103f583af;  */

bool FUN_103f5839c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103f583b0; end: 103f58487;  */

void FUN_103f583b0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f58488; end: 103f5849f;  */

undefined1  [16] FUN_103f58488(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  
  bVar2 = param_1 - 0x26U < 0xffffffffffffffd9;
  lVar1 = 0;
  if (!bVar2) {
    lVar1 = param_1;
  }
  auVar3[8] = bVar2;
  auVar3._0_8_ = lVar1;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 103f584a0; end: 103f584df;  */

void FUN_103f584a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113034880 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcae4e0;
  _swift_getWitnessTable(&UNK_10dcae4e0,&UNK_110724ba0);
  puRam0000000113034880 = puVar1;
  return;
}



/* Entry: 103f584e0; end: 103f58503;  */

undefined1  [16] FUN_103f584e0(void)

{
  return ZEXT816(0x110724ba0);
}



/* Entry: 103f58504; end: 103f58547;  */

void FUN_103f58504(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 103f58548; end: 103f5854b;  */

void FUN_103f58548(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103f5854c; end: 103f58a3b;  */

long FUN_103f5854c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103f58a3c; end: 103f58a53;  */

bool FUN_103f58a3c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103f58a54; end: 103f58a93;  */

void FUN_103f58a54(void)

{
  undefined *puVar1;
  
  if (puRam0000000113034890 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcae610;
  _swift_getWitnessTable(&UNK_10dcae610,&UNK_110724d68);
  puRam0000000113034890 = puVar1;
  return;
}



/* Entry: 103f58a94; end: 103f58b3f;  */

void FUN_103f58a94(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f58b40; end: 103f58b77;  */

void FUN_103f58b40(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 103f58b78; end: 103f58ba3; +[SCSendToEducationActions dismiss] */

void FUN_103f58b78(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1d1210);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f58ba4; end: 103f58bcf; +[SCSendToEducationActions trailingImageTapped] */

void FUN_103f58ba4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000027,0x800000010f1d1230);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f58bd0; end: 103f58bfb; +[SCSendToEducationActions cellTapped] */

void FUN_103f58bd0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f1d1260);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f58bfc; end: 103f58c37; -[SCSendToEducationActions init] */

void FUN_103f58bfc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f58c38; end: 103f58c6b;  */

void FUN_103f58c38(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f58c6c; end: 103f58c6f; -[SCSendToEducationActions .cxx_destruct] */

void FUN_103f58c6c(void)

{
  return;
}



/* Entry: 103f58c70; end: 103f58c8f;  */

void FUN_103f58c70(void)

{
  _objc_opt_self(&PTR_PTR_112969f00);
  return;
}



/* Entry: 103f58c90; end: 103f592bb;  */

void FUN_103f58c90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f592bc; end: 103f592cf;  */

bool FUN_103f592bc(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103f592d0; end: 103f593a7;  */

void FUN_103f592d0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f593a8; end: 103f593cb;  */

void FUN_103f593a8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103f593cc; end: 103f5940b;  */

void FUN_103f593cc(void)

{
  undefined *puVar1;
  
  if (puRam00000001130348c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcae734;
  _swift_getWitnessTable(&UNK_10dcae734,&UNK_110724f10);
  puRam00000001130348c0 = puVar1;
  return;
}



/* Entry: 103f5940c; end: 103f5941b;  */

undefined1  [16] FUN_103f5940c(void)

{
  return ZEXT816(0x110724f10);
}



/* Entry: 103f5941c; end: 103f59677;  */

long FUN_103f5941c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103f59678; end: 103f5968f;  */

bool FUN_103f59678(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103f59690; end: 103f596cf;  */

void FUN_103f59690(void)

{
  undefined *puVar1;
  
  if (puRam00000001130348c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcae810;
  _swift_getWitnessTable(&UNK_10dcae810,&UNK_110725018);
  puRam00000001130348c8 = puVar1;
  return;
}



/* Entry: 103f596d0; end: 103f5977b;  */

void FUN_103f596d0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f5977c; end: 103f597cb;  */

void FUN_103f5977c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103f597cc; end: 103f5980b;  */

void FUN_103f597cc(void)

{
  undefined *puVar1;
  
  if (puRam00000001130348d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcae8d0;
  _swift_getWitnessTable(&UNK_10dcae8d0,&UNK_110725090);
  puRam00000001130348d0 = puVar1;
  return;
}



/* Entry: 103f5980c; end: 103f598b7;  */

void FUN_103f5980c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f598b8; end: 103f598ef;  */

void FUN_103f598b8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}


