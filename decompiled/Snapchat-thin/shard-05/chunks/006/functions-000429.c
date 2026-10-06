/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103fcdb74; end: 103fcdbd7; -[SCSnapEditorSendActionContext matchSendTo:quickSend:postToStory:] */

void FUN_103fcdb74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_103fcdae4(FUN_103fcdeb8,auStack_40,FUN_103fcdf10,auStack_60,0x103fcdec4,auStack_80);
  _objc_release(param_1);
  return;
}



/* Entry: 103fcdbd8; end: 103fcdc73;  */

void FUN_103fcdbd8(uint param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = 0;
    FUN_103fcdecc(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_2,uVar1);
  }
  if (param_3 != 0) {
    uVar1 = 0;
    func_0x0001043f7068(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_3,uVar1);
  }
  (**(code **)(param_5 + 0x10))(param_5,param_1 & 1,param_2,param_3,param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103fcdc74; end: 103fcdca7;  */

void FUN_103fcdc74(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103fcdca8; end: 103fcdcef; -[SCSnapEditorSendActionContext .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcdca8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113040170));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113040178));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113040180));
  return;
}



/* Entry: 103fcdcf0; end: 103fcdd0f;  */

void FUN_103fcdcf0(void)

{
  _objc_opt_self(&PTR_PTR_112977370);
  return;
}



/* Entry: 103fcdd10; end: 103fcde77;  */

int FUN_103fcdd10(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103fcdd8c;
        goto LAB_103fcdd70;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103fcdd70:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103fcdd8c:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103fcde78; end: 103fcdeb7;  */

void FUN_103fcde78(void)

{
  undefined *puVar1;
  
  if (puRam00000001130401b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb9a24;
  _swift_getWitnessTable(&UNK_10dcb9a24,&UNK_11072e600);
  puRam00000001130401b0 = puVar1;
  return;
}



/* Entry: 103fcdeb8; end: 103fcdecb;  */

void FUN_103fcdeb8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103fcdec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103fcdecc; end: 103fcdf0f;  */

void FUN_103fcdecc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebad80 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126dc8c0;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam0000000112ebad80 = puVar1;
  return;
}



/* Entry: 103fcdf10; end: 103fcdf13;  */

void FUN_103fcdf10(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103fcdec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103fcdf14; end: 103fcdf23; -[SCSnapEditorState currentSelectedSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcdf14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130401b8));
  return;
}



/* Entry: 103fcdf24; end: 103fcdf33; -[SCSnapEditorState currentClipEditingSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcdf24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130401c0));
  return;
}



/* Entry: 103fcdf34; end: 103fcdf43; -[SCSnapEditorState currentlyDisplayingSegmentIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fcdf34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130401c8);
}



/* Entry: 103fcdf44; end: 103fcdf57; -[SCSnapEditorState playbackState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fcdf44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130401d0);
}



/* Entry: 103fcdf58; end: 103fce083; -[SCSnapEditorState initWithCurrentSelectedSegment:currentClipEditingSegment:currentlyDisplayingSegmentIndex:playbackState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcdf58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130401b8) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130401c0) = param_4;
  *(undefined8 *)(param_1 + _DAT_1130401c8) = param_5;
  *(undefined8 *)(param_1 + _DAT_1130401d0) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 103fce084; end: 103fce087; -[SCSnapEditorState copyWithZone:] */

void FUN_103fce084(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103fce088; end: 103fce0a3; -[SCSnapEditorState description] */

void FUN_103fce088(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fce0a4; end: 103fce0eb; -[SCSnapEditorState init] */

void FUN_103fce0a4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCSnapEditorAPI/SnapEditorStateWrapper.swift"
             ,0x2c,2,0x33,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fce0ec);
  (*pcVar1)();
}



/* Entry: 103fce0ec; end: 103fce107; +[SCSnapEditorStateBuilder snapEditorState] */

void FUN_103fce0ec(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x000107c453e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fce108; end: 103fce147; +[SCSnapEditorStateBuilder snapEditorStateWithExistingSnapEditorState:] */

void FUN_103fce108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_103fce5f4(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103fce148; end: 103fce18f; -[SCSnapEditorStateBuilder withCurrentSelectedSegment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fce148(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130401d8);
  *(undefined8 *)(param_1 + _DAT_1130401d8) = param_3;
  _objc_retain(param_3);
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 103fce190; end: 103fce1d7; -[SCSnapEditorStateBuilder withCurrentClipEditingSegment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fce190(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130401e0);
  *(undefined8 *)(param_1 + _DAT_1130401e0) = param_3;
  _objc_retain(param_3);
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 103fce1d8; end: 103fce1ef; -[SCSnapEditorStateBuilder withCurrentlyDisplayingSegmentIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fce1d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_1130401e8);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 103fce1f0; end: 103fce207; -[SCSnapEditorStateBuilder withPlaybackState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fce1f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_1130401f0);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 103fce208; end: 103fce3cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fce208(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_50;
  long lStack_48;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_1130401d8);
  if (lVar3 == 0) {
    FUN_103fce6f4(0xd000000000000016,0x800000010f1d9510);
    _swift_willThrow();
  }
  else {
    lVar6 = *(long *)(unaff_x20 + _DAT_1130401e0);
    if (lVar6 == 0) {
      _objc_retain();
      FUN_103fce6f4(0xd000000000000019,0x800000010f1d9530);
      _swift_willThrow();
    }
    else {
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130401e8);
      if (*(char *)(puVar1 + 1) == '\x01') {
        uVar7 = 0;
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 0;
      }
      else {
        uVar7 = *puVar1;
      }
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_1130401f0) + 1) != '\x01') {
        uVar8 = *(undefined8 *)(unaff_x20 + _DAT_1130401f0);
        lVar4 = lVar3;
        FUN_103fce89c();
        lVar5 = lVar4;
        _objc_allocWithZone();
        *(long *)(lVar5 + _DAT_1130401b8) = lVar3;
        *(long *)(lVar5 + _DAT_1130401c0) = lVar6;
        *(undefined8 *)(lVar5 + _DAT_1130401c8) = uVar7;
        *(undefined8 *)(lVar5 + _DAT_1130401d0) = uVar8;
        puVar2 = PTR_s_init_1125d9248;
        lStack_50 = lVar5;
        lStack_48 = lVar4;
        _objc_retain(lVar3);
        _objc_retain(lVar6);
        _objc_msgSendSuper2(&lStack_50,puVar2);
        return;
      }
      _objc_retain();
      _objc_retain(lVar6);
      FUN_103fce6f4(0x6b63616279616c70,0xed00006574617453);
      _swift_willThrow();
      _objc_release(lVar3);
      lVar3 = lVar6;
    }
    _objc_release(lVar3);
  }
  return;
}



/* Entry: 103fce3d0; end: 103fce43b; -[SCSnapEditorStateBuilder build] */

/* WARNING: Removing unreachable block (ram,0x000103fce41c) */

void FUN_103fce3d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103fce208();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fce43c; end: 103fce4cb; -[SCSnapEditorStateBuilder safeBuildAndReturnError:] */

/* WARNING: Removing unreachable block (ram,0x000103fce478) */
/* WARNING: Removing unreachable block (ram,0x000103fce4ac) */
/* WARNING: Removing unreachable block (ram,0x000103fce47c) */

void FUN_103fce43c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103fce208();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fce4cc; end: 103fce54b; -[SCSnapEditorStateBuilder init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fce4cc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130401d8) = 0;
  *(undefined8 *)(param_1 + _DAT_1130401e0) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_1130401e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(param_1 + _DAT_1130401f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fce54c; end: 103fce54f;  */

void FUN_103fce54c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103fce550; end: 103fce587; -[SCSnapEditorStateBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fce550(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130401d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130401e0));
  return;
}



/* Entry: 103fce588; end: 103fce5bb;  */

void FUN_103fce588(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103fce5bc; end: 103fce5f3; -[SCSnapEditorState .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fce5bc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130401b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130401c0));
  return;
}



/* Entry: 103fce5f4; end: 103fce6f3;  */

/* WARNING: Possible PIC construction at 0x000103fce628: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103fce62c) */

void FUN_103fce5f4(long param_1)

{
  if (param_1 == 0) {
    func_0x000103fce8bc();
    _objc_allocWithZone();
  }
  else {
    func_0x000103fce8bc();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 103fce6f4; end: 103fce89b;  */

undefined * FUN_103fce6f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [80];
  
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar6 = auStack_90;
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  __ss11_StringGutsV4growyySiF(0x33);
  __sSS6appendyySSF(0xd000000000000027,0x800000010f11f8b0);
  __sSS6appendyySSF(param_1,param_2);
  __sSS6appendyySSF(0x736e752073692027,0xea00000000007465);
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0xe000000000000000;
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  _swift_setDeallocating(lVar2);
  func_0x000100f15a0c((undefined8 *)(lVar2 + 0x20));
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f11f880);
  lVar2 = lVar4;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(lVar4);
  func_0x000107c466bc(puVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
  return puVar5;
}



/* Entry: 103fce89c; end: 103fce8db;  */

void FUN_103fce89c(void)

{
  _objc_opt_self(&PTR_PTR_112977450);
  return;
}



/* Entry: 103fce8dc; end: 103fce8e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fce8dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130401b8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130401c0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130401c8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130401d0) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fce8e4; end: 103fce96b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103fce8e4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a54acc();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_113040248) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_113040250) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fce96c);
  (*pcVar1)();
}



/* Entry: 103fce96c; end: 103fce9cb; -[_TtC31MyaiUserSessionScopeGraphBridge46MyaiUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103fce96c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MyaiUserSessionScopeGraphBridge.MyaiUserSessionScopeGraphBridgeSaberEntryPoint",0x4e,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fce998);
  (*pcVar1)();
}



/* Entry: 103fce9cc; end: 103fcea03; -[_TtC31MyaiUserSessionScopeGraphBridge46MyaiUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fce9cc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113040248));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113040250));
  return;
}



/* Entry: 103fcea04; end: 103fcea2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcea04(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_113040250),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_113040248));
  return;
}



/* Entry: 103fcea2c; end: 103fcea8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fcea2c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113040360);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fcea90; end: 103fcea97;  */

void FUN_103fcea90(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fcea98; end: 103fceb37;  */

void FUN_103fcea98(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fceb38; end: 103fceba3;  */

void FUN_103fceb38(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fceba4; end: 103fcec03; -[_TtC31MyaiUserSessionScopeGraphBridge39MyaiUserSessionScopeGraphBridgeServices init] */

void FUN_103fceba4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MyaiUserSessionScopeGraphBridge.MyaiUserSessionScopeGraphBridgeServices",0x47,"init()"
             ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fcebd0);
  (*pcVar1)();
}



/* Entry: 103fcec04; end: 103fcec13; -[_TtC31MyaiUserSessionScopeGraphBridge39MyaiUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcec04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113040360));
  return;
}



/* Entry: 103fcec14; end: 103fcec6f;  */

void FUN_103fcec14(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113040350,auStack_38,0x20,0);
  _objc_setAssociatedObject(param_1,0x113040350,0,1);
  _swift_endAccess(auStack_38);
  return;
}



/* Entry: 103fcec70; end: 103fceca7;  */

undefined1  [16] FUN_103fcec70(void)

{
  return ZEXT816(0x11072e768);
}



/* Entry: 103fceca8; end: 103fceceb; -[SCMyaiUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_103fceca8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fcecec; end: 103fced1f;  */

void FUN_103fcecec(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103fced20; end: 103fced67; -[SCMyaiUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fced20(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130403b8);
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130403c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130403c8));
  return;
}



/* Entry: 103fced68; end: 103fced87;  */

void FUN_103fced68(void)

{
  _objc_opt_self(&PTR_PTR_112977788);
  return;
}



/* Entry: 103fced88; end: 103fced93; -[SCMyAIExperimentServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fced88(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130403f8;
  _swift_beginAccess(param_1 + _DAT_1130403f8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fced94; end: 103fced9f; -[SCMyAIExperimentServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fced94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130403f8;
  _swift_beginAccess(param_1 + _DAT_1130403f8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fceda0; end: 103fcedab; -[SCMyAIExperimentServicesSaberServiceProvider myaiUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fceda0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113040400;
  _swift_beginAccess(param_1 + _DAT_113040400,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fcedac; end: 103fcedef;  */

void FUN_103fcedac(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fcedf0; end: 103fcedfb; -[SCMyAIExperimentServicesSaberServiceProvider setMyaiUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcedf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113040400;
  _swift_beginAccess(param_1 + _DAT_113040400,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fcedfc; end: 103fcee4f;  */

void FUN_103fcedfc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fcee50; end: 103fcf063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fcee50(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x00010bf18280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4d3d8();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103fceabc();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113040360);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113040408);
      *(long *)(unaff_x20 + _DAT_113040408) = lVar4;
      _swift_retain();
      _swift_retain(lVar4);
      _swift_release(uVar5);
      func_0x000100083b20(&uStack_48);
      _swift_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
      return uStack_48;
    }
    _objc_release(lVar2);
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
             "MyaiUserSessionScopeGraphBridge/SCMyAIExperimentServicesSaberServiceProvider.swift",
             0x52,2,0x1c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fcef7c);
  (*pcVar1)();
}



/* Entry: 103fcf064; end: 103fcf097; -[SCMyAIExperimentServicesSaberServiceProvider provide] */

void FUN_103fcf064(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103fcee50();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fcf098; end: 103fcf0cb; -[SCMyAIExperimentServicesSaberServiceProvider __safeProvide] */

void FUN_103fcf098(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103fcef7c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fcf0cc; end: 103fcf10f; -[SCMyAIExperimentServicesSaberServiceProvider end] */

void FUN_103fcf0cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fcf110; end: 103fcf2a7;  */

void FUN_103fcf110(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0)) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e268d0)) {
      uVar2 = 0xd000000000000027;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000027,0x800000010f1d9730,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "MyaiUserSessionScopeGraphBridge/SCMyAIExperimentServicesSaberServiceProvider.swift"
                   ,0x52,2,0x31,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103fcf2a8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c56940();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103fcf2a8; end: 103fcf353; -[SCMyAIExperimentServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103fcf2a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_50,param_3);
  _swift_unknownObjectRelease(param_3);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  FUN_103fcf110(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103fcf354; end: 103fcf3c7; -[SCMyAIExperimentServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcf354(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_1130403f8,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113040400,0);
  *(undefined8 *)(param_1 + _DAT_113040408) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fcf3c8; end: 103fcf3fb;  */

void FUN_103fcf3c8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103fcf3fc; end: 103fcf443; -[SCMyAIExperimentServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcf3fc(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130403f8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113040400);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113040408));
  return;
}



/* Entry: 103fcf444; end: 103fcf463;  */

void FUN_103fcf444(void)

{
  _objc_opt_self(&PTR_PTR_113040450);
  return;
}



/* Entry: 103fcf464; end: 103fcf473; -[MyAIExperimentServices configProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcf464(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130404b8));
  return;
}



/* Entry: 103fcf474; end: 103fcf4bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcf474(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130404b8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fcf4c0; end: 103fcf51f; -[MyAIExperimentServices init] */

void FUN_103fcf4c0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MyAIExperimentServices.MyAIExperimentServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fcf4ec);
  (*pcVar1)();
}



/* Entry: 103fcf520; end: 103fcf52f; -[MyAIExperimentServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcf520(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130404b8));
  return;
}



/* Entry: 103fcf530; end: 103fcf5b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103fcf530(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a55114();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_1130404e8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_1130404f0) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fcf5b8);
  (*pcVar1)();
}



/* Entry: 103fcf5b8; end: 103fcf617; -[_TtC30PacUserSessionScopeGraphBridge45PacUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103fcf5b8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PacUserSessionScopeGraphBridge.PacUserSessionScopeGraphBridgeSaberEntryPoint",0x4c,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fcf5e4);
  (*pcVar1)();
}



/* Entry: 103fcf618; end: 103fcf64f; -[_TtC30PacUserSessionScopeGraphBridge45PacUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcf618(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130404e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130404f0));
  return;
}



/* Entry: 103fcf650; end: 103fcf677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcf650(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_1130404f0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_1130404e8));
  return;
}



/* Entry: 103fcf678; end: 103fcf6db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fcf678(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113040600);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fcf6dc; end: 103fcf6e3;  */

void FUN_103fcf6dc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fcf6e4; end: 103fcf783;  */

void FUN_103fcf6e4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fcf784; end: 103fcf7ef;  */

void FUN_103fcf784(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fcf7f0; end: 103fcf84f; -[_TtC30PacUserSessionScopeGraphBridge38PacUserSessionScopeGraphBridgeServices init] */

void FUN_103fcf7f0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PacUserSessionScopeGraphBridge.PacUserSessionScopeGraphBridgeServices",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fcf81c);
  (*pcVar1)();
}



/* Entry: 103fcf850; end: 103fcf85f; -[_TtC30PacUserSessionScopeGraphBridge38PacUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcf850(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113040600));
  return;
}



/* Entry: 103fcf860; end: 103fcf8bb;  */

void FUN_103fcf860(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x1130405f0,auStack_38,0x20,0);
  _objc_setAssociatedObject(param_1,0x1130405f0,0,1);
  _swift_endAccess(auStack_38);
  return;
}



/* Entry: 103fcf8bc; end: 103fcf8f3;  */

undefined1  [16] FUN_103fcf8bc(void)

{
  return ZEXT816(0x11072e950);
}



/* Entry: 103fcf8f4; end: 103fcf937; -[SCPacUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_103fcf8f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fcf938; end: 103fcf96b;  */

void FUN_103fcf938(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103fcf96c; end: 103fcf9b3; -[SCPacUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcf96c(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113040658);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113040660));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113040668));
  return;
}



/* Entry: 103fcf9b4; end: 103fcf9d3;  */

void FUN_103fcf9b4(void)

{
  _objc_opt_self(&PTR_PTR_112977ae0);
  return;
}



/* Entry: 103fcf9d4; end: 103fcf9df; -[SCSCWebLensesActiveLensServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcf9d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113040698;
  _swift_beginAccess(param_1 + _DAT_113040698,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fcf9e0; end: 103fcf9eb; -[SCSCWebLensesActiveLensServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcf9e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113040698;
  _swift_beginAccess(param_1 + _DAT_113040698,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fcf9ec; end: 103fcf9f7; -[SCSCWebLensesActiveLensServicesSaberServiceProvider pacUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcf9ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130406a0;
  _swift_beginAccess(param_1 + _DAT_1130406a0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fcf9f8; end: 103fcfa3b;  */

void FUN_103fcf9f8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fcfa3c; end: 103fcfa47; -[SCSCWebLensesActiveLensServicesSaberServiceProvider setPacUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcfa3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130406a0;
  _swift_beginAccess(param_1 + _DAT_1130406a0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fcfa48; end: 103fcfa9b;  */

void FUN_103fcfa48(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fcfa9c; end: 103fcfcaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fcfa9c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x00010bf18280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4e214();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103fcf708();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113040600);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1130406a8);
      *(long *)(unaff_x20 + _DAT_1130406a8) = lVar4;
      _swift_retain();
      _swift_retain(lVar4);
      _swift_release(uVar5);
      func_0x000100083b20(&uStack_48);
      _swift_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
      return uStack_48;
    }
    _objc_release(lVar2);
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
             "PacUserSessionScopeGraphBridge/SCSCWebLensesActiveLensServicesSaberServiceProvider.swift"
             ,0x58,2,0x1c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fcfbc8);
  (*pcVar1)();
}



/* Entry: 103fcfcb0; end: 103fcfce3; -[SCSCWebLensesActiveLensServicesSaberServiceProvider provide] */

void FUN_103fcfcb0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103fcfa9c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fcfce4; end: 103fcfd17; -[SCSCWebLensesActiveLensServicesSaberServiceProvider __safeProvide] */

void FUN_103fcfce4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103fcfbc8();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fcfd18; end: 103fcfd5b; -[SCSCWebLensesActiveLensServicesSaberServiceProvider end] */

void FUN_103fcfd18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fcfd5c; end: 103fcfef3;  */

void FUN_103fcfd5c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0)) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffda) || (param_3 != -0x7ffffffef0e26680)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000026,0x800000010f1d9980,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "PacUserSessionScopeGraphBridge/SCSCWebLensesActiveLensServicesSaberServiceProvider.swift"
                   ,0x58,2,0x31,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103fcfef4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c5717c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103fcfef4; end: 103fcff9f; -[SCSCWebLensesActiveLensServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103fcfef4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_50,param_3);
  _swift_unknownObjectRelease(param_3);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  FUN_103fcfd5c(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}


