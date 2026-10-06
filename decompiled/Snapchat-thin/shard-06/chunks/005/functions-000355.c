/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1049f8bd0; end: 1049f8c27; -[FBSDKBridgeAPIProtocolNativeV1 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f8bd0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a4038 + 8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a4050));
  func_0x0001049fb6fc(param_1 + _DAT_1130a4058,0x11309c428);
  return;
}



/* Entry: 1049f8c28; end: 1049f9007;  */

/* WARNING: Removing unreachable block (ram,0x0001049f8e2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_1049f8c28(undefined *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined *param_7,undefined *param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined *unaff_x20;
  undefined *unaff_x21;
  long lVar14;
  undefined *puVar15;
  undefined *unaff_x23;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b8 = param_6;
  _swift_getObjectType();
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar14 = *(long *)(param_8 + 0x10);
  _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
  puVar11 = param_7;
  puVar15 = unaff_x20;
  if (lVar14 != 0) {
    puVar11 = (undefined *)0x1;
    FUN_1049f9008();
    if (unaff_x21 != (undefined *)0x0) {
      puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      _swift_release();
      puVar2 = param_2;
      param_2 = param_7;
      goto LAB_1049f8fc8;
    }
    uStack_78 = 0x26;
    uStack_70 = 0xe100000000000000;
    uStack_88 = 0x363225;
    uStack_80 = 0xe300000000000000;
    puStack_c0 = param_7;
    puStack_a8 = param_8;
    puStack_a0 = puVar11;
    func_0x000100e8b654();
    puStack_f0 = PTR___sSSN_11034da80;
    puVar1 = &uStack_78;
    puVar12 = &uStack_88;
    puStack_e8 = param_8;
    puStack_e0 = param_8;
    puStack_d8 = param_8;
    __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
              (puVar1,puVar12,1,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80);
    puStack_c8 = param_1;
    _swift_bridgeObjectRelease(puVar11);
    puVar11 = puVar4;
    _swift_isUniquelyReferenced_nonNull_native(puVar4);
    param_1 = puStack_c8;
    puStack_a8 = puVar4;
    func_0x00010018433c(puVar1,puVar12,0x615f646f6874656d,0xeb00000000736772,puVar11);
    puVar4 = puStack_a8;
    puVar11 = puStack_c0;
  }
  puStack_c0 = puVar11;
  FUN_1049f91fc(param_2,param_3);
  unaff_x23 = (undefined *)0x0;
  puVar2 = param_2;
  FUN_1049f9008();
  puVar11 = unaff_x23;
  _swift_bridgeObjectRelease(param_2);
  if (unaff_x21 == (undefined *)0x0) {
    puVar11 = puVar4;
    _swift_isUniquelyReferenced_nonNull_native(puVar4);
    puStack_a8 = puVar4;
    func_0x00010018433c(puVar2,unaff_x23,0x615f656764697262,0xeb00000000736772,puVar11);
    puVar11 = puStack_a8;
    FUN_1049b1a14(&puStack_a8);
    puVar15 = puStack_a0;
    puVar4 = puStack_a8;
    _swift_unknownObjectRelease(uStack_98);
    _swift_unknownObjectRelease(puVar15);
    _swift_unknownObjectRelease(puVar4);
    puVar4 = puStack_c0;
    lVar14 = *(long *)((long)(unaff_x20 + _DAT_1130a4038) + 8);
    if (lVar14 == 0) {
      puVar15 = (undefined *)0x0;
      lVar14 = -0x2000000000000000;
    }
    else {
      puVar15 = *(undefined **)(unaff_x20 + _DAT_1130a4038);
    }
    _swift_bridgeObjectRetain();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar15,lVar14);
    _swift_bridgeObjectRelease(lVar14);
    uVar3 = 0x676f6c616964;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x676f6c616964,0xe600000000000000);
    puStack_a8 = (undefined *)0x2f;
    puStack_a0 = (undefined *)0xe100000000000000;
    __sSS6appendyySSF(uStack_b8,puVar4);
    puVar4 = puStack_a0;
    unaff_x23 = puStack_a8;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_a8,puStack_a0);
    _swift_bridgeObjectRelease(puVar4);
    param_2 = puVar11;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar11,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    _swift_release(puVar11);
    puStack_a8 = (undefined *)0x0;
    unaff_x20 = puStack_90;
    puVar11 = PTR_s_URLWithScheme_host_path_queryPar_11254e6b0;
    _objc_msgSend(puStack_90,PTR_s_URLWithScheme_host_path_queryPar_11254e6b0,puVar15,uVar3,
                  unaff_x23,param_2,&puStack_a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_release(uVar3);
    _objc_release(unaff_x23);
    _objc_release(param_2);
    puVar2 = puStack_a8;
    if (unaff_x20 == (undefined *)0x0) {
      unaff_x20 = puStack_a8;
      _objc_retain();
      unaff_x21 = puVar2;
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release(unaff_x20);
      _swift_willThrow();
      puVar4 = puStack_90;
      _swift_unknownObjectRelease();
      param_1 = puStack_90;
    }
    else {
      __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(param_1,unaff_x20);
      _objc_retain(puVar2);
      _swift_unknownObjectRelease(puStack_90);
      puVar4 = unaff_x20;
      _objc_release();
      param_1 = puStack_90;
    }
  }
  else {
    _swift_bridgeObjectRelease();
  }
LAB_1049f8fc8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar16._8_8_ = puVar11;
    auVar16._0_8_ = puVar4;
    return auVar16;
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_1049f9008;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = &UNK_1107bd8b8;
  puStack_140 = param_1;
  puStack_130 = puVar15;
  puStack_128 = param_2;
  puStack_120 = unaff_x23;
  puStack_118 = puVar2;
  puStack_110 = unaff_x20;
  puStack_108 = unaff_x21;
  puStack_100 = &stack0xfffffffffffffff0;
  _swift_allocObject(&UNK_1107bd8b8,0x11,7);
  puVar5[0x10] = 0;
  puVar2 = PTR_PTR_1126add58;
  _swift_getInitializedObjCClass();
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  puVar15 = &UNK_1107bd8e0;
  _swift_allocObject(&UNK_1107bd8e0,0x28,7);
  *(undefined **)(puVar15 + 0x10) = puVar5;
  puVar15[0x18] = (char)puVar11;
  *(undefined **)(puVar15 + 0x20) = unaff_x20;
  pcStack_158 = FUN_1049fb6d4;
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0x42000000;
  pcStack_168 = FUN_1049fa92c;
  puStack_160 = &UNK_1107bd8f8;
  ppuVar6 = &puStack_178;
  puStack_150 = puVar15;
  __Block_copy(ppuVar6);
  puVar11 = puStack_150;
  _swift_retain(puVar5);
  _objc_retain(unaff_x20);
  _swift_release(puVar11);
  puStack_178 = (undefined *)0x0;
  puVar15 = PTR_s_JSONStringForObject_error_invali_11254e010;
  _objc_msgSend(puVar2,PTR_s_JSONStringForObject_error_invali_11254e010,puVar4,&puStack_178,ppuVar6)
  ;
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar6);
  _objc_release(puVar4);
  puVar11 = puStack_178;
  if (puVar2 == (undefined *)0x0) {
    puVar7 = puStack_178;
    _objc_retain();
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(puVar7);
    _swift_willThrow();
    _swift_release();
    puVar8 = puVar15;
  }
  else {
    puVar7 = puVar2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puVar8 = puVar15;
    _objc_retain(puVar11);
    _swift_release(puVar5);
    _objc_release();
    puVar5 = puVar2;
    puVar4 = puVar15;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    auVar17._8_8_ = puVar4;
    auVar17._0_8_ = puVar7;
    return auVar17;
  }
  ___stack_chk_fail();
  lVar14 = 0x11309c610;
  func_0x0001048db364();
  _swift_initStackObject();
  *(undefined8 *)(lVar14 + 0x20) = 0x695f6e6f69746361;
  *(undefined8 *)(lVar14 + 0x18) = 8;
  *(undefined8 *)(lVar14 + 0x10) = 4;
  puVar4 = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar14 + 0x28) = 0xe900000000000064;
  *(undefined **)(lVar14 + 0x30) = puVar5;
  *(undefined **)(lVar14 + 0x38) = puVar8;
  *(undefined **)(lVar14 + 0x48) = puVar4;
  *(undefined8 *)(lVar14 + 0x50) = 0x6e6f63695f707061;
  *(undefined8 *)(lVar14 + 0x58) = 0xe800000000000000;
  _swift_bridgeObjectRetain();
  FUN_1049f8388();
  uVar3 = 0x1130a40c0;
  func_0x0001048db364();
  *(undefined **)(lVar14 + 0x60) = puVar8;
  *(undefined8 *)(lVar14 + 0x78) = uVar3;
  *(undefined8 *)(lVar14 + 0x80) = 0x656d616e5f707061;
  *(undefined8 *)(lVar14 + 0x88) = 0xe800000000000000;
  if (lRam000000011309ff80 != -1) {
    _swift_once(0x11309ff80,FUN_1049e4894);
  }
  if (lRam000000011309ff58 != -1) {
    _swift_once(0x11309ff58,FUN_1049e2f38);
  }
  uVar9 = (ulong)bRam0000000113815960;
  uVar13 = uRam0000000113815968;
  FUN_1049e30b0();
  uVar3 = 0x11309c748;
  func_0x0001048db364();
  *(ulong *)(lVar14 + 0x90) = uVar9;
  *(undefined8 *)(lVar14 + 0x98) = uVar13;
  *(undefined8 *)(lVar14 + 0xa8) = uVar3;
  *(undefined8 *)(lVar14 + 0xb0) = 0x737265765f6b6473;
  *(undefined **)(lVar14 + 0xd8) = puVar4;
  *(undefined8 *)(lVar14 + 0xb8) = 0xeb000000006e6f69;
  *(undefined8 *)(lVar14 + 0xc0) = 0x302e302e3731;
  *(undefined8 *)(lVar14 + 200) = 0xe600000000000000;
  lVar10 = lVar14;
  func_0x000100214a84(lVar14);
  _swift_setDeallocating(lVar14);
  uVar3 = 0x11309c418;
  func_0x0001048db364(0x11309c418);
  uVar13 = 4;
  _swift_arrayDestroy((undefined8 *)(lVar14 + 0x20),4,uVar3);
  auVar18._8_8_ = uVar13;
  auVar18._0_8_ = lVar10;
  return auVar18;
}



/* Entry: 1049f9008; end: 1049f91fb;  */

undefined1  [16] FUN_1049f9008(undefined *param_1,undefined1 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 unaff_x20;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = &UNK_1107bd8b8;
  _swift_allocObject(&UNK_1107bd8b8,0x11,7);
  puVar1[0x10] = 0;
  puVar2 = PTR_PTR_1126add58;
  _swift_getInitializedObjCClass();
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (param_1,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  puVar3 = &UNK_1107bd8e0;
  _swift_allocObject(&UNK_1107bd8e0,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar1;
  puVar3[0x18] = param_2;
  *(undefined8 *)(puVar3 + 0x20) = unaff_x20;
  pcStack_68 = FUN_1049fb6d4;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  pcStack_78 = FUN_1049fa92c;
  puStack_70 = &UNK_1107bd8f8;
  ppuVar4 = &puStack_88;
  puStack_60 = puVar3;
  __Block_copy(ppuVar4);
  puVar3 = puStack_60;
  _swift_retain(puVar1);
  _objc_retain();
  _swift_release(puVar3);
  puStack_88 = (undefined *)0x0;
  puVar11 = PTR_s_JSONStringForObject_error_invali_11254e010;
  _objc_msgSend(puVar2,PTR_s_JSONStringForObject_error_invali_11254e010,param_1,&puStack_88,ppuVar4)
  ;
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar4);
  _objc_release(param_1);
  puVar3 = puStack_88;
  if (puVar2 == (undefined *)0x0) {
    puVar5 = puStack_88;
    _objc_retain();
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(puVar5);
    _swift_willThrow();
    _swift_release();
    puVar7 = puVar11;
  }
  else {
    puVar5 = puVar2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puVar7 = puVar11;
    _objc_retain(puVar3);
    _swift_release(puVar1);
    _objc_release();
    puVar1 = puVar2;
    param_1 = puVar11;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar13._8_8_ = param_1;
    auVar13._0_8_ = puVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  lVar6 = 0x11309c610;
  func_0x0001048db364();
  _swift_initStackObject();
  *(undefined8 *)(lVar6 + 0x20) = 0x695f6e6f69746361;
  *(undefined8 *)(lVar6 + 0x18) = 8;
  *(undefined8 *)(lVar6 + 0x10) = 4;
  puVar3 = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar6 + 0x28) = 0xe900000000000064;
  *(undefined **)(lVar6 + 0x30) = puVar1;
  *(undefined **)(lVar6 + 0x38) = puVar7;
  *(undefined **)(lVar6 + 0x48) = puVar3;
  *(undefined8 *)(lVar6 + 0x50) = 0x6e6f63695f707061;
  *(undefined8 *)(lVar6 + 0x58) = 0xe800000000000000;
  _swift_bridgeObjectRetain();
  FUN_1049f8388();
  uVar8 = 0x1130a40c0;
  func_0x0001048db364();
  *(undefined **)(lVar6 + 0x60) = puVar7;
  *(undefined8 *)(lVar6 + 0x78) = uVar8;
  *(undefined8 *)(lVar6 + 0x80) = 0x656d616e5f707061;
  *(undefined8 *)(lVar6 + 0x88) = 0xe800000000000000;
  if (lRam000000011309ff80 != -1) {
    _swift_once(0x11309ff80,FUN_1049e4894);
  }
  if (lRam000000011309ff58 != -1) {
    _swift_once(0x11309ff58,FUN_1049e2f38);
  }
  uVar9 = (ulong)bRam0000000113815960;
  uVar12 = uRam0000000113815968;
  FUN_1049e30b0();
  uVar8 = 0x11309c748;
  func_0x0001048db364();
  *(ulong *)(lVar6 + 0x90) = uVar9;
  *(undefined8 *)(lVar6 + 0x98) = uVar12;
  *(undefined8 *)(lVar6 + 0xa8) = uVar8;
  *(undefined8 *)(lVar6 + 0xb0) = 0x737265765f6b6473;
  *(undefined **)(lVar6 + 0xd8) = puVar3;
  *(undefined8 *)(lVar6 + 0xb8) = 0xeb000000006e6f69;
  *(undefined8 *)(lVar6 + 0xc0) = 0x302e302e3731;
  *(undefined8 *)(lVar6 + 200) = 0xe600000000000000;
  lVar10 = lVar6;
  func_0x000100214a84(lVar6);
  _swift_setDeallocating(lVar6);
  uVar8 = 0x11309c418;
  func_0x0001048db364(0x11309c418);
  uVar12 = 4;
  _swift_arrayDestroy((undefined8 *)(lVar6 + 0x20),4,uVar8);
  auVar14._8_8_ = uVar12;
  auVar14._0_8_ = lVar10;
  return auVar14;
}



/* Entry: 1049f91fc; end: 1049f93d7;  */

long FUN_1049f91fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar2 = 0x11309c610;
  func_0x0001048db364();
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x20) = 0x695f6e6f69746361;
  *(undefined8 *)(lVar2 + 0x18) = 8;
  *(undefined8 *)(lVar2 + 0x10) = 4;
  puVar1 = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar2 + 0x28) = 0xe900000000000064;
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  *(undefined8 *)(lVar2 + 0x38) = param_2;
  *(undefined **)(lVar2 + 0x48) = puVar1;
  *(undefined8 *)(lVar2 + 0x50) = 0x6e6f63695f707061;
  *(undefined8 *)(lVar2 + 0x58) = 0xe800000000000000;
  _swift_bridgeObjectRetain();
  FUN_1049f8388();
  uVar3 = 0x1130a40c0;
  func_0x0001048db364();
  *(undefined8 *)(lVar2 + 0x60) = param_2;
  *(undefined8 *)(lVar2 + 0x78) = uVar3;
  *(undefined8 *)(lVar2 + 0x80) = 0x656d616e5f707061;
  *(undefined8 *)(lVar2 + 0x88) = 0xe800000000000000;
  if (lRam000000011309ff80 != -1) {
    _swift_once(0x11309ff80,FUN_1049e4894);
  }
  if (lRam000000011309ff58 != -1) {
    _swift_once(0x11309ff58,FUN_1049e2f38);
  }
  uVar4 = (ulong)bRam0000000113815960;
  uVar6 = uRam0000000113815968;
  FUN_1049e30b0();
  uVar3 = 0x11309c748;
  func_0x0001048db364();
  *(ulong *)(lVar2 + 0x90) = uVar4;
  *(undefined8 *)(lVar2 + 0x98) = uVar6;
  *(undefined8 *)(lVar2 + 0xa8) = uVar3;
  *(undefined8 *)(lVar2 + 0xb0) = 0x737265765f6b6473;
  *(undefined **)(lVar2 + 0xd8) = puVar1;
  *(undefined8 *)(lVar2 + 0xb8) = 0xeb000000006e6f69;
  *(undefined8 *)(lVar2 + 0xc0) = 0x302e302e3731;
  *(undefined8 *)(lVar2 + 200) = 0xe600000000000000;
  lVar5 = lVar2;
  func_0x000100214a84(lVar2);
  _swift_setDeallocating(lVar2);
  uVar3 = 0x11309c418;
  func_0x0001048db364(0x11309c418);
  _swift_arrayDestroy((undefined8 *)(lVar2 + 0x20),4,uVar3);
  return lVar5;
}



/* Entry: 1049f93d8; end: 1049f9587; -[FBSDKBridgeAPIProtocolNativeV1 requestURLWithActionID:scheme:methodName:parameters:error:] */

/* WARNING: Removing unreachable block (ram,0x0001049f94c0) */
/* WARNING: Removing unreachable block (ram,0x0001049f955c) */
/* WARNING: Removing unreachable block (ram,0x0001049f94ec) */

void FUN_1049f93d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined8 uStack_70;
  
  lVar1 = 0;
  uStack_70 = param_7;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  lStack_78 = lVar1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar2 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  uVar3 = uVar2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_6,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _objc_retain(param_1);
  FUN_1049f8c28(auStack_80 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_3,param_2);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(param_6);
  _objc_release(param_1);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  (**(code **)(lVar5 + 8))(auStack_80 + -(lVar4 + 0xfU & 0xfffffffffffffff0),lStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1049f9588; end: 1049f9d3b;  */

/* WARNING: Removing unreachable block (ram,0x0001049f9a08) */

byte * FUN_1049f9588(byte *param_1,byte *param_2,byte *param_3,byte *param_4)

{
  undefined *puVar1;
  byte *pbVar2;
  byte **ppbVar3;
  byte *pbVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  undefined **ppuVar10;
  ulong uVar11;
  ulong uVar12;
  undefined **ppuVar13;
  ulong uVar14;
  byte *unaff_x20;
  byte *unaff_x21;
  byte *pbVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuStack_150;
  byte **ppbStack_148;
  byte *pbStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  byte *pbStack_120;
  byte *pbStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  byte *pbStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar7 = unaff_x20;
  _swift_getObjectType();
  if (param_4 != (byte *)0x0) {
    *param_4 = 0;
  }
  pbVar2 = pbVar7;
  FUN_1049b1a14(&pbStack_90);
  pbVar8 = pbStack_90;
  pbVar15 = unaff_x21;
  pbVar6 = param_3;
  pbStack_110 = unaff_x20;
  pbStack_120 = param_2;
  if (unaff_x21 == (byte *)0x0) {
    uVar14 = 0;
    pbVar15 = (byte *)0x615f656764697262;
    pbStack_c0 = param_1;
    pbStack_b8 = param_2;
    _swift_unknownObjectRelease(uStack_88);
    _swift_unknownObjectRelease(uStack_80);
    _swift_unknownObjectRelease(lStack_78);
    if (*(long *)(param_3 + 0x10) == 0) {
LAB_1049f96b0:
      param_1 = (byte *)0x0;
      pbVar7 = (byte *)0xe000000000000000;
    }
    else {
      _swift_bridgeObjectRetain(param_3);
      pbVar7 = pbVar15;
      func_0x000100029284(0x615f656764697262);
      if ((uVar14 & 1) == 0) {
        _swift_bridgeObjectRelease(param_3);
        goto LAB_1049f96b0;
      }
      func_0x0001000bb420(*(long *)(param_3 + 0x38) + (long)pbVar7 * 0x20,&pbStack_90);
      _swift_bridgeObjectRelease(param_3);
      ppbVar3 = &pbStack_a0;
      _swift_dynamicCast(ppbVar3,&pbStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      pbVar7 = pbStack_98;
      param_1 = pbStack_a0;
      if (((ulong)ppbVar3 & 1) == 0) goto LAB_1049f96b0;
    }
    pbVar2 = PTR_PTR_1126add58;
    _swift_getInitializedObjCClass();
    pbVar4 = param_1;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,pbVar7);
    pbStack_90 = (byte *)0x0;
    pbStack_c8 = pbVar2;
    _objc_msgSend(pbVar2,PTR_s_objectForJSONString_error__1126159d8,pbVar4,&pbStack_90);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pbVar4);
    pbVar4 = pbStack_90;
    _objc_retain();
    if (pbVar2 == (byte *)0x0) {
      pbVar2 = pbVar4;
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release(pbVar4);
      _swift_willThrow();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x615f656764697262,0xeb00000000736772);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,pbVar7);
      _swift_bridgeObjectRelease(pbVar7);
      pbVar7 = (byte *)0xd000000000000014;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f229300);
      pbVar6 = pbVar2;
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
      unaff_x21 = pbVar8;
      _objc_msgSend(pbVar8,PTR_s_invalidArgumentErrorWithName_val_1125f80d8,pbVar15,param_1,pbVar7,
                    pbVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pbVar15);
      _objc_release(param_1);
      _objc_release(pbVar7);
      _objc_release(pbVar6);
      _swift_willThrow();
      _swift_unknownObjectRelease(pbVar8);
      param_4 = pbVar2;
LAB_1049f98d0:
      _swift_errorRelease();
      pbStack_110 = unaff_x21;
      pbStack_120 = pbVar8;
    }
    else {
      _swift_bridgeObjectRelease(pbVar7);
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&pbStack_90,pbVar2);
      _swift_unknownObjectRelease(pbVar2);
      uVar5 = 0x11309c420;
      func_0x0001048db364(0x11309c420);
      puVar1 = PTR___sypN_11034f1a8;
      ppbVar3 = &pbStack_a0;
      _swift_dynamicCast(ppbVar3,&pbStack_90,PTR___sypN_11034f1a8 + 8,uVar5,6);
      pbVar7 = pbStack_a0;
      param_1 = pbVar15;
      pbStack_120 = puVar1;
      if (((ulong)ppbVar3 & 1) != 0) {
        if (*(long *)(pbStack_a0 + 0x10) != 0) {
          _swift_bridgeObjectRetain(pbStack_a0);
          lVar9 = 0x695f6e6f69746361;
          uVar14 = 0;
          func_0x000100029284(0x695f6e6f69746361);
          if ((uVar14 & 1) == 0) {
            _swift_bridgeObjectRelease(pbVar7);
          }
          else {
            func_0x0001000bb420(*(long *)(pbVar7 + 0x38) + lVar9 * 0x20,&pbStack_90);
            _swift_bridgeObjectRelease(pbVar7);
            ppbVar3 = &pbStack_a0;
            _swift_dynamicCast(ppbVar3,&pbStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
            pbVar15 = pbStack_98;
            if (((ulong)ppbVar3 & 1) != 0) {
              if ((pbStack_a0 == pbStack_c0) && (pbStack_98 == pbStack_b8)) {
                _swift_bridgeObjectRelease(pbStack_98);
              }
              else {
                param_1 = pbStack_a0;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (pbStack_a0,pbStack_98,pbStack_c0,pbStack_b8,0);
                _swift_bridgeObjectRelease(pbVar15);
                if (((ulong)param_1 & 1) == 0) goto LAB_1049f98e4;
              }
              if (*(long *)(pbVar7 + 0x10) == 0) {
LAB_1049f99bc:
                uStack_88 = 0;
                pbStack_90 = (byte *)0x0;
                lStack_78 = 0;
                uStack_80 = 0;
              }
              else {
                _swift_bridgeObjectRetain(pbVar7);
                lVar9 = 0x726f727265;
                uVar14 = 0;
                func_0x000100029284(0x726f727265);
                if ((uVar14 & 1) == 0) {
                  _swift_bridgeObjectRelease(pbVar7);
                  goto LAB_1049f99bc;
                }
                func_0x0001000bb420(*(long *)(pbVar7 + 0x38) + lVar9 * 0x20,&pbStack_90);
                _swift_bridgeObjectRelease(pbVar7);
              }
              _swift_bridgeObjectRelease(pbVar7);
              if (lStack_78 == 0) {
                func_0x0001049fb6fc(&pbStack_90,0x11309c428);
              }
              else {
                ppbVar3 = &pbStack_a0;
                _swift_dynamicCast(ppbVar3,&pbStack_90,puVar1 + 8,uVar5,6);
                if ((int)ppbVar3 != 0) {
                  pbVar7 = pbStack_a0;
                  FUN_1049f9d3c();
                  _swift_willThrow();
                  _swift_bridgeObjectRelease(pbStack_a0);
                  _swift_unknownObjectRelease();
                  pbVar2 = pbVar8;
                  pbVar15 = pbStack_a0;
                  unaff_x21 = pbVar7;
                  goto LAB_1049f9918;
                }
              }
              param_1 = (byte *)0xee0073746c757365;
              pbVar15 = (byte *)0x725f646f6874656d;
              if (*(long *)(param_3 + 0x10) == 0) {
LAB_1049f9ac0:
                pbVar7 = (byte *)0xe000000000000000;
                param_3 = (byte *)0x0;
              }
              else {
                _swift_bridgeObjectRetain(param_3);
                pbVar7 = pbVar15;
                pbVar2 = param_1;
                func_0x000100029284(0x725f646f6874656d);
                if (((ulong)pbVar2 & 1) == 0) {
                  _swift_bridgeObjectRelease(param_3);
                  goto LAB_1049f9ac0;
                }
                func_0x0001000bb420(*(long *)(param_3 + 0x38) + (long)pbVar7 * 0x20,&pbStack_90);
                _swift_bridgeObjectRelease(param_3);
                ppbVar3 = &pbStack_a0;
                _swift_dynamicCast(ppbVar3,&pbStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
                pbVar7 = pbStack_98;
                param_3 = pbStack_a0;
                if (((ulong)ppbVar3 & 1) == 0) goto LAB_1049f9ac0;
              }
              pbVar2 = param_3;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,pbVar7);
              pbStack_90 = (byte *)0x0;
              unaff_x20 = pbStack_c8;
              _objc_msgSend(pbStack_c8,PTR_s_objectForJSONString_error__1126159d8,pbVar2,&pbStack_90
                           );
              _objc_retainAutoreleasedReturnValue();
              _objc_release(pbVar2);
              pbVar6 = pbStack_90;
              _objc_retain();
              if (unaff_x20 == (byte *)0x0) {
                pbVar2 = pbVar6;
                __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
                _objc_release(pbVar6);
                _swift_willThrow();
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                          (0x725f646f6874656d,0xee0073746c757365);
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,pbVar7);
                _swift_bridgeObjectRelease(pbVar7);
                pbVar7 = (byte *)0xd000000000000017;
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                          (0xd000000000000017,0x800000010f229320);
                pbVar6 = pbVar2;
                __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
                unaff_x21 = pbVar8;
                _objc_msgSend(pbVar8,PTR_s_invalidArgumentErrorWithName_val_1125f80d8,pbVar15,
                              param_3,pbVar7,pbVar6);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(pbVar15);
                _objc_release(param_3);
                _objc_release(pbVar7);
                _objc_release(pbVar6);
                _swift_willThrow();
                _swift_unknownObjectRelease(pbVar8);
                param_4 = param_3;
                param_1 = pbVar2;
                goto LAB_1049f98d0;
              }
              _swift_bridgeObjectRelease(pbVar7);
              __ss018_bridgeAnyObjectToB0yypyXlSgF(&pbStack_90,unaff_x20);
              _swift_unknownObjectRelease(unaff_x20);
              ppbVar3 = &pbStack_a0;
              _swift_dynamicCast(ppbVar3,&pbStack_90,puVar1 + 8,uVar5,6);
              pbVar7 = pbStack_a0;
              if ((int)ppbVar3 != 0) {
                pbVar6 = param_3;
                pbStack_110 = unaff_x20;
                if ((param_4 != (byte *)0x0) && (*(long *)(pbStack_a0 + 0x10) != 0)) {
                  _swift_bridgeObjectRetain(pbStack_a0);
                  uVar14 = 0;
                  lVar9 = -0x2fffffffffffffef;
                  func_0x000100029284(0xd000000000000011);
                  if ((uVar14 & 1) == 0) {
                    _swift_unknownObjectRelease(pbVar8);
                    pbVar2 = pbVar7;
                    _swift_bridgeObjectRelease();
                    goto LAB_1049f9918;
                  }
                  func_0x0001000bb420(*(long *)(pbVar7 + 0x38) + lVar9 * 0x20,&pbStack_90);
                  _swift_bridgeObjectRelease(pbVar7);
                  ppbVar3 = &pbStack_a0;
                  _swift_dynamicCast(ppbVar3,&pbStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
                  if (((ulong)ppbVar3 & 1) != 0) {
                    if ((pbStack_a0 == (byte *)0x6c65636e6163) &&
                       (pbStack_98 == (byte *)0xe600000000000000)) {
                      _swift_bridgeObjectRelease(0xe600000000000000);
                      param_1 = (byte *)0x1;
                    }
                    else {
                      param_1 = pbStack_a0;
                      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (pbStack_a0,pbStack_98,0x6c65636e6163,0xe600000000000000,0);
                      _swift_bridgeObjectRelease(pbStack_98);
                    }
                    *param_4 = (byte)param_1 & 1;
                    pbVar15 = pbStack_98;
                  }
                }
                _swift_unknownObjectRelease();
                pbVar2 = pbVar8;
                goto LAB_1049f9918;
              }
              goto LAB_1049f98ec;
            }
          }
        }
LAB_1049f98e4:
        _swift_bridgeObjectRelease(pbVar7);
      }
LAB_1049f98ec:
      pbVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
      pbVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_retain();
      func_0x000100214a84();
      _swift_unknownObjectRelease(pbVar8);
      pbVar2 = pbVar15;
      _swift_release();
      pbVar6 = param_3;
      pbStack_110 = unaff_x20;
    }
  }
LAB_1049f9918:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uVar14 = 0;
  uVar11 = 0;
  uVar12 = 0;
  pcStack_d8 = FUN_1049f9d3c;
  pbStack_108 = pbVar6;
  pbStack_100 = param_1;
  pbStack_f8 = param_4;
  pbStack_f0 = pbVar7;
  pbStack_e8 = pbVar15;
  puStack_e0 = &stack0xfffffffffffffff0;
  _swift_getObjectType(pbVar7);
  ppuVar13 = &PTR_DAT_1130a4060;
  FUN_1049b1a14(&pbStack_140);
  if (unaff_x21 != (byte *)0x0) {
    return pbVar7;
  }
  _swift_unknownObjectRelease(uStack_138);
  _swift_unknownObjectRelease(uStack_130);
  _swift_unknownObjectRelease(uStack_128);
  if (*(long *)(pbVar2 + 0x10) == 0) {
LAB_1049f9e2c:
    ppuVar10 = &PTR____CFConstantStringClassReference_110da2938;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
              (&PTR____CFConstantStringClassReference_110da2938);
    lVar9 = *(long *)(pbVar2 + 0x10);
  }
  else {
    _swift_bridgeObjectRetain(pbVar2);
    lVar9 = 0x6e69616d6f64;
    ppuVar13 = (byte **)0xe600000000000000;
    func_0x000100029284(0x6e69616d6f64);
    if (((ulong)ppuVar13 & 1) == 0) {
      _swift_bridgeObjectRelease(pbVar2);
      goto LAB_1049f9e2c;
    }
    func_0x0001000bb420(*(long *)(pbVar2 + 0x38) + lVar9 * 0x20,&pbStack_140);
    _swift_bridgeObjectRelease(pbVar2);
    ppuVar13 = &pbStack_140;
    _swift_dynamicCast(&ppuStack_150,ppuVar13,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((uVar14 & 1) == 0) goto LAB_1049f9e2c;
    lVar9 = *(long *)(pbVar2 + 0x10);
    ppuVar10 = ppuStack_150;
    ppuVar13 = ppbStack_148;
  }
  if (lVar9 == 0) {
    ppuVar17 = (undefined **)0x3;
    ppuVar16 = (undefined **)0x0;
    goto LAB_1049f9f58;
  }
  _swift_bridgeObjectRetain(pbVar2);
  lVar9 = 0x65646f63;
  uVar14 = 0;
  func_0x000100029284(0x65646f63);
  if ((uVar14 & 1) == 0) {
    _swift_bridgeObjectRelease(pbVar2);
LAB_1049f9ec4:
    lVar9 = *(long *)(pbVar2 + 0x10);
    ppuVar17 = (undefined **)0x3;
  }
  else {
    func_0x0001000bb420(*(long *)(pbVar2 + 0x38) + lVar9 * 0x20,&pbStack_140);
    _swift_bridgeObjectRelease(pbVar2);
    _swift_dynamicCast(&ppuStack_150,&pbStack_140,PTR___sypN_11034f1a8 + 8,PTR___sSiN_11034deb0,6);
    if ((uVar11 & 1) == 0) goto LAB_1049f9ec4;
    lVar9 = *(long *)(pbVar2 + 0x10);
    ppuVar17 = ppuStack_150;
  }
  if (lVar9 != 0) {
    _swift_bridgeObjectRetain(pbVar2);
    lVar9 = 0x666e695f72657375;
    uVar14 = 0xe90000000000006f;
    func_0x000100029284(0x666e695f72657375);
    if ((uVar14 & 1) == 0) {
      _swift_bridgeObjectRelease(pbVar2);
    }
    else {
      func_0x0001000bb420(*(long *)(pbVar2 + 0x38) + lVar9 * 0x20,&pbStack_140);
      _swift_bridgeObjectRelease(pbVar2);
      uVar5 = 0x11309c420;
      func_0x0001048db364(0x11309c420);
      _swift_dynamicCast(&ppuStack_150,&pbStack_140,PTR___sypN_11034f1a8 + 8,uVar5,6);
      ppuVar16 = ppuStack_150;
      if ((uVar12 & 1) != 0) goto LAB_1049f9f58;
    }
  }
  ppuVar16 = (undefined **)0x0;
LAB_1049f9f58:
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuVar10,ppuVar13);
  _swift_bridgeObjectRelease(ppuVar13);
  if (ppuVar16 == (undefined **)0x0) {
    ppuVar13 = (undefined **)0x0;
  }
  else {
    ppuVar13 = ppuVar16;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (ppuVar16,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(ppuVar16);
  }
  pbVar7 = pbStack_140;
  _objc_msgSend(pbStack_140,PTR_s_errorWithDomain_code_userInfo_me_112525100,ppuVar10,ppuVar17,
                ppuVar13,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar10);
  _objc_release(ppuVar13);
  _swift_unknownObjectRelease(pbStack_140);
  return pbVar7;
}



/* Entry: 1049f9d3c; end: 1049fa017;  */

void FUN_1049f9d3c(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  ulong uVar7;
  long unaff_x21;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar7 = 0;
  uVar3 = 0;
  uVar5 = 0;
  _swift_getObjectType();
  ppuVar6 = &PTR_DAT_1130a4060;
  FUN_1049b1a14(&puStack_70);
  if (unaff_x21 != 0) {
    return;
  }
  _swift_unknownObjectRelease(uStack_68);
  _swift_unknownObjectRelease(uStack_60);
  _swift_unknownObjectRelease(uStack_58);
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_1049f9e2c:
    ppuVar2 = &PTR____CFConstantStringClassReference_110da2938;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
              (&PTR____CFConstantStringClassReference_110da2938);
    lVar1 = *(long *)(param_1 + 0x10);
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    lVar1 = 0x6e69616d6f64;
    ppuVar6 = (undefined **)0xe600000000000000;
    func_0x000100029284(0x6e69616d6f64);
    if (((ulong)ppuVar6 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_1049f9e2c;
    }
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar1 * 0x20,&puStack_70);
    _swift_bridgeObjectRelease(param_1);
    ppuVar6 = &puStack_70;
    _swift_dynamicCast(&ppuStack_80,ppuVar6,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((uVar7 & 1) == 0) goto LAB_1049f9e2c;
    lVar1 = *(long *)(param_1 + 0x10);
    ppuVar2 = ppuStack_80;
    ppuVar6 = ppuStack_78;
  }
  if (lVar1 == 0) {
    ppuVar9 = (undefined **)0x3;
    ppuVar8 = (undefined **)0x0;
    goto LAB_1049f9f58;
  }
  _swift_bridgeObjectRetain(param_1);
  lVar1 = 0x65646f63;
  uVar7 = 0;
  func_0x000100029284(0x65646f63);
  if ((uVar7 & 1) == 0) {
    _swift_bridgeObjectRelease(param_1);
LAB_1049f9ec4:
    lVar1 = *(long *)(param_1 + 0x10);
    ppuVar9 = (undefined **)0x3;
  }
  else {
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar1 * 0x20,&puStack_70);
    _swift_bridgeObjectRelease(param_1);
    _swift_dynamicCast(&ppuStack_80,&puStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSiN_11034deb0,6);
    if ((uVar3 & 1) == 0) goto LAB_1049f9ec4;
    lVar1 = *(long *)(param_1 + 0x10);
    ppuVar9 = ppuStack_80;
  }
  if (lVar1 != 0) {
    _swift_bridgeObjectRetain(param_1);
    lVar1 = 0x666e695f72657375;
    uVar7 = 0xe90000000000006f;
    func_0x000100029284(0x666e695f72657375);
    if ((uVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar1 * 0x20,&puStack_70);
      _swift_bridgeObjectRelease(param_1);
      uVar4 = 0x11309c420;
      func_0x0001048db364(0x11309c420);
      _swift_dynamicCast(&ppuStack_80,&puStack_70,PTR___sypN_11034f1a8 + 8,uVar4,6);
      ppuVar8 = ppuStack_80;
      if ((uVar5 & 1) != 0) goto LAB_1049f9f58;
    }
  }
  ppuVar8 = (undefined **)0x0;
LAB_1049f9f58:
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuVar2,ppuVar6);
  _swift_bridgeObjectRelease(ppuVar6);
  if (ppuVar8 == (undefined **)0x0) {
    ppuVar6 = (undefined **)0x0;
  }
  else {
    ppuVar6 = ppuVar8;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (ppuVar8,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(ppuVar8);
  }
  _objc_msgSend(puStack_70,PTR_s_errorWithDomain_code_userInfo_me_112525100,ppuVar2,ppuVar9,ppuVar6,
                0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar6);
  _swift_unknownObjectRelease(puStack_70);
  return;
}



/* Entry: 1049fa018; end: 1049fa147; -[FBSDKBridgeAPIProtocolNativeV1 responseParametersForActionID:queryParameters:cancelled:error:] */

/* WARNING: Removing unreachable block (ram,0x0001049fa0c4) */
/* WARNING: Removing unreachable block (ram,0x0001049fa120) */
/* WARNING: Removing unreachable block (ram,0x0001049fa0c8) */

void FUN_1049fa018(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  puVar1 = PTR___sypN_11034f1a8;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _objc_retain(param_1);
  FUN_1049f9588(param_3,param_2,param_4,param_5);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_4);
  _objc_release(param_1);
  uVar2 = param_3;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (param_3,PTR___sSSN_11034da80,puVar1 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1049fa148; end: 1049fa78f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049fa148(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5,
                  long param_6)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 ******ppppppuVar8;
  undefined *puVar9;
  undefined8 ******ppppppuVar10;
  undefined *puVar11;
  undefined8 ******ppppppuVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *****pppppuVar17;
  long lVar18;
  undefined8 ******ppppppuVar19;
  long lStack_100;
  uint uStack_f4;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 *****pppppuStack_e0;
  ulong uStack_d8;
  undefined1 auStack_c0 [24];
  undefined8 *****pppppuStack_a8;
  undefined8 *****pppppuStack_a0;
  undefined *puStack_90;
  undefined1 auStack_88 [40];
  
  lVar3 = 0x11309c5e0;
  uStack_f4 = param_5;
  lStack_f0 = param_4;
  func_0x0001048db364();
  uVar15 = (long)&lStack_100 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar16 = *(long *)(lVar3 + -8);
  lVar18 = uVar15 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x0001000bb420(param_2,auStack_88);
  func_0x0001000bb420(auStack_88,&pppppuStack_a8);
  uVar4 = 0;
  func_0x000100de1f70(0);
  puVar11 = PTR___sypN_11034f1a8;
  ppppppuVar19 = &pppppuStack_e0;
  pcVar2 = (code *)&pppppuStack_a8;
  _swift_dynamicCast(ppppppuVar19,pcVar2,PTR___sypN_11034f1a8 + 8,uVar4,6);
  pppppuVar17 = pppppuStack_e0;
  if (((ulong)ppppppuVar19 & 1) == 0) {
    uVar4 = 0xe400000000000000;
    pppppuVar17 = (undefined8 *****)0x61746164;
  }
  else {
    lStack_100 = param_6;
    if (lRam000000011309ff80 != -1) {
      pcVar2 = FUN_1049e4894;
      _swift_once(0x11309ff80);
    }
    FUN_1049e4a94();
    ppppppuVar19 = (undefined8 ******)pppppuVar17;
    _UIImageJPEGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    if (ppppppuVar19 == (undefined8 ******)0x0) {
      ppppppuVar10 = (undefined8 ******)0x0;
      pcVar2 = (code *)0xf000000000000000;
    }
    else {
      ppppppuVar10 = ppppppuVar19;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      _objc_release(ppppppuVar19);
    }
    puVar5 = (undefined *)0x1130a3e48;
    func_0x0001048db364();
    pppppuStack_a8 = ppppppuVar10;
    pppppuStack_a0 = (undefined8 *****)pcVar2;
    puStack_90 = puVar5;
    func_0x000100183ab8(auStack_88);
    func_0x000100102924(&pppppuStack_a8,auStack_88);
    _objc_release(pppppuVar17);
    pppppuVar17 = (undefined8 *****)0x676e70;
    uVar4 = 0xe300000000000000;
    param_6 = lStack_100;
  }
  func_0x0001000bb420(auStack_88,&pppppuStack_a8);
  ppppppuVar19 = &pppppuStack_e0;
  _swift_dynamicCast(ppppppuVar19,&pppppuStack_a8,puVar11 + 8,PTR___s10Foundation4DataVN_110350ae0,6
                    );
  lVar7 = lStack_f0;
  if (((ulong)ppppppuVar19 & 1) == 0) {
    _swift_bridgeObjectRelease(uVar4);
    func_0x0001000bb420(auStack_88,&pppppuStack_a8);
    uVar6 = uVar15;
    _swift_dynamicCast(uVar15,&pppppuStack_a8,puVar11 + 8,lVar3,6);
    if ((uVar6 & 1) == 0) {
      (**(code **)(lVar16 + 0x38))(uVar15,1,1,lVar3);
      func_0x0001049fb6fc(uVar15,0x11309c5e0);
      func_0x000100102924(auStack_88,param_1);
      return;
    }
    (**(code **)(lVar16 + 0x38))(uVar15,0,1,lVar3);
    lVar7 = lVar18;
    (**(code **)(lVar16 + 0x20))(lVar18,uVar15,lVar3);
    __s10Foundation3URLV14absoluteStringSSvg();
    param_1[3] = (long)PTR___sSSN_11034da80;
    *param_1 = lVar7;
    param_1[1] = uVar15;
    (**(code **)(lVar16 + 8))(lVar18,lVar3);
    goto LAB_1049fa74c;
  }
  _swift_beginAccess(lStack_f0 + 0x10,auStack_c0,0,0);
  if ((((*(byte *)(lVar7 + 0x10) & 1) == 0) && ((uStack_f4 & 1) != 0)) &&
     (ppppppuVar19 = *(undefined8 *******)(param_6 + _DAT_1130a4050),
     ppppppuVar19 != (undefined8 ******)0x0)) {
    uVar1 = (uint)(uStack_d8 >> 0x20);
    uVar13 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar13 == 0) {
        uVar15 = uStack_d8 >> 0x30 & 0xff;
      }
      else {
        iVar14 = (int)((ulong)pppppuStack_e0 >> 0x20);
        if (SBORROW4(iVar14,(int)pppppuStack_e0)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1049fa790);
          (*pcVar2)();
        }
        uVar15 = (ulong)(iVar14 - (int)pppppuStack_e0);
      }
    }
    else if (uVar13 == 2) {
      uVar15 = (long)pppppuStack_e0[3] - (long)pppppuStack_e0[2];
      if (SBORROW8((long)pppppuStack_e0[3],(long)pppppuStack_e0[2])) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1049fa41c);
        (*pcVar2)();
      }
    }
    else {
      uVar15 = 0;
    }
    if (((long)uVar15 < 0) || (uVar15 < *(ulong *)(param_6 + _DAT_1130a4040))) goto LAB_1049fa628;
    puStack_90 = PTR___sSbN_11034dd40;
    pppppuStack_a8 = (undefined8 *****)CONCAT71(pppppuStack_a8._1_7_,1);
    lStack_100 = param_6;
    func_0x000100102924(&pppppuStack_a8,&pppppuStack_e0);
    puVar11 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
    _swift_isUniquelyReferenced_nonNull_native();
    puStack_e8 = puVar11;
    func_0x0001001029e8(&pppppuStack_e0,0x6265747361507369,0xec0000006472616f,puVar5);
    puVar5 = puStack_e8;
    puVar11 = PTR___sSSN_11034da80;
    puStack_90 = PTR___sSSN_11034da80;
    pppppuStack_a8 = pppppuVar17;
    pppppuStack_a0 = (undefined8 *****)uVar4;
    func_0x000100102924(&pppppuStack_a8,&pppppuStack_e0);
    puVar9 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native(puVar5);
    puStack_e8 = puVar5;
    func_0x0001001029e8(&pppppuStack_e0,0x676174,0xe300000000000000,puVar9);
    puVar5 = puStack_e8;
    ppppppuVar10 = ppppppuVar19;
    ppppppuVar12 = (undefined8 ******)PTR_s_name_112612df0;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    ppppppuVar8 = ppppppuVar10;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(ppppppuVar10);
    puStack_90 = puVar11;
    pppppuStack_a8 = ppppppuVar8;
    pppppuStack_a0 = ppppppuVar12;
    func_0x000100102924(&pppppuStack_a8,&pppppuStack_e0);
    puVar11 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native(puVar5);
    puStack_e8 = puVar5;
    func_0x0001001029e8(&pppppuStack_e0,0xd00000000000001e,0x800000010f229500,puVar11);
    puVar11 = puStack_e8;
    ppppppuVar10 = (undefined8 ******)pppppuStack_e0;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(pppppuStack_e0,uStack_d8);
    uVar4 = 0xd000000000000025;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f229520);
    _objc_msgSend(ppppppuVar19,PTR_s_setData_forPasteboardType__112525568,ppppppuVar10,uVar4);
    _objc_release(ppppppuVar10);
    _objc_release(uVar4);
    lVar3 = lStack_f0;
    _swift_beginAccess(lStack_f0 + 0x10,&pppppuStack_a8,1,0);
    *(undefined1 *)(lVar3 + 0x10) = 1;
    _objc_msgSend(ppppppuVar19,PTR_s__isGeneralPasteboard_112525570);
    if ((int)ppppppuVar19 != 0) {
      FUN_1049fa790(pppppuStack_e0,uStack_d8);
    }
  }
  else {
LAB_1049fa628:
    puStack_90 = PTR___sSbN_11034dd40;
    pppppuStack_a8 = (undefined8 *****)CONCAT71(pppppuStack_a8._1_7_,1);
    func_0x000100102924(&pppppuStack_a8,&pppppuStack_e0);
    puVar11 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
    _swift_isUniquelyReferenced_nonNull_native();
    puStack_e8 = puVar11;
    func_0x0001001029e8(&pppppuStack_e0,0x3436657361427369,0xe800000000000000,puVar5);
    puVar5 = puStack_e8;
    puVar11 = PTR___sSSN_11034da80;
    puStack_90 = PTR___sSSN_11034da80;
    pppppuStack_a8 = pppppuVar17;
    pppppuStack_a0 = (undefined8 *****)uVar4;
    func_0x000100102924(&pppppuStack_a8,&pppppuStack_e0);
    puVar9 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native(puVar5);
    puStack_e8 = puVar5;
    func_0x0001001029e8(&pppppuStack_e0,0x676174,0xe300000000000000,puVar9);
    puVar5 = puStack_e8;
    ppppppuVar10 = (undefined8 ******)0x0;
    ppppppuVar19 = (undefined8 ******)pppppuStack_e0;
    __s10Foundation4DataV19base64EncodedString7optionsSSSo27NSDataBase64EncodingOptionsV_tF
              (0,pppppuStack_e0,uStack_d8);
    puStack_90 = puVar11;
    pppppuStack_a8 = ppppppuVar10;
    pppppuStack_a0 = ppppppuVar19;
    func_0x000100102924(&pppppuStack_a8,&pppppuStack_e0);
    puVar11 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native(puVar5);
    puStack_e8 = puVar5;
    func_0x0001001029e8(&pppppuStack_e0,0xd00000000000001e,0x800000010f229500,puVar11);
    puVar11 = puStack_e8;
  }
  lVar3 = 0x11309c420;
  func_0x0001048db364();
  param_1[3] = lVar3;
  func_0x00010006c090(pppppuStack_e0,uStack_d8);
  *param_1 = (long)puVar11;
LAB_1049fa74c:
  func_0x000100183ab8(auStack_88);
  return;
}



/* Entry: 1049fa790; end: 1049fa92b;  */

/* WARNING: Removing unreachable block (ram,0x0001049fa7dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049fa790(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined1 auStack_a0 [24];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  
  _swift_getObjectType();
  FUN_1049b1a14(&puStack_88);
  uVar2 = uStack_78;
  _swift_unknownObjectRelease(puStack_70);
  _swift_unknownObjectRelease(uStack_80);
  _swift_unknownObjectRelease(puStack_88);
  puVar3 = &UNK_1107bd930;
  _swift_allocObject(&UNK_1107bd930,0x28,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  pcStack_68 = FUN_1049fb738;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  uStack_78 = 0x1049fac10;
  puStack_70 = &UNK_1107bd948;
  ppuVar4 = &puStack_88;
  puStack_60 = puVar3;
  __Block_copy(ppuVar4);
  puVar3 = puStack_60;
  _objc_retain();
  func_0x00010006c00c(param_1,param_2);
  _swift_release(puVar3);
  _objc_msgSend(uVar2,PTR_s_fb_addObserverForName_object_que_112525578,
                &PTR____CFConstantStringClassReference_110da2478,0,0,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar4);
  _swift_getObjectType();
  _swift_unknownObjectRelease(uVar2);
  lVar1 = _DAT_1130a4058;
  _swift_beginAccess(unaff_x20 + _DAT_1130a4058,auStack_a0,0x21,0);
  func_0x000100f72e88(&puStack_88,unaff_x20 + lVar1);
  _swift_endAccess(auStack_a0);
  return;
}



/* Entry: 1049fa92c; end: 1049faca3;  */

void FUN_1049fa92c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_80 [24];
  long lStack_68;
  undefined8 auStack_60 [3];
  undefined8 uStack_48;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  _swift_getObjectType();
  auStack_60[0] = param_2;
  uStack_48 = uVar3;
  _swift_retain(uVar2);
  _swift_unknownObjectRetain(param_2);
  (*pcVar1)(auStack_80,auStack_60,param_3);
  _swift_release(uVar2);
  if (lStack_68 == 0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    puVar4 = auStack_80;
    func_0x0001006732c8(puVar4,lStack_68);
    lVar6 = *(long *)(lStack_68 + -8);
    puVar5 = auStack_80 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar6 + 0x10))(puVar5,puVar4,lStack_68);
    puVar4 = puVar5;
    __ss27_bridgeAnythingToObjectiveCyyXlxlF(puVar5,lStack_68);
    (**(code **)(lVar6 + 8))(puVar5,lStack_68);
    func_0x000100183ab8(auStack_80);
  }
  func_0x000100183ab8(auStack_60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1049faca4; end: 1049facef;  */

void FUN_1049faca4(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1049facf0; end: 1049fad1b; -[FBSDKBridgeAPIProtocolNativeV1 init] */

void FUN_1049facf0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FBSDKCoreKit._BridgeAPIProtocolNativeV1",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1049fad1c);
  (*pcVar1)();
}



/* Entry: 1049fad1c; end: 1049fae27;  */

void FUN_1049fad1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 1049fae28; end: 1049faeaf;  */

undefined8
FUN_1049fae28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_getObjectType();
  _swift_getObjectType(param_2);
  _swift_getObjectType(param_3);
  _swift_getObjectType(param_4);
  return param_1;
}



/* Entry: 1049faeb0; end: 1049fafdb;  */

undefined8 FUN_1049faeb0(void)

{
  return 0x1138159e0;
}



/* Entry: 1049fafdc; end: 1049fb08f;  */

void FUN_1049fafdc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = 0;
  FUN_1049fe1e8();
  _objc_allocWithZone();
  _objc_msgSend();
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126add20;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  uRam0000000113815a00 = uVar1;
  puRam0000000113815a08 = puVar2;
  puRam0000000113815a10 = puVar3;
  puRam0000000113815a18 = puVar4;
  return;
}



/* Entry: 1049fb090; end: 1049fb26f;  */

undefined8 FUN_1049fb090(void)

{
  if (lRam000000011309ff98 != -1) {
    _swift_once(0x11309ff98,FUN_1049fafdc);
  }
  return 0x113815a00;
}



/* Entry: 1049fb270; end: 1049fb3d3;  */

void FUN_1049fb270(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x1138159e0,auStack_38,0,0);
  uVar3 = uRam00000001138159f8;
  uVar2 = uRam00000001138159f0;
  uVar1 = uRam00000001138159e8;
  *param_1 = uRam00000001138159e0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1049fb3d8();
  return;
}



/* Entry: 1049fb3d4; end: 1049fb3d7;  */

void FUN_1049fb3d4(void)

{
  return;
}



/* Entry: 1049fb3d8; end: 1049fb49b;  */

void FUN_1049fb3d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    _swift_unknownObjectRetain();
    _swift_unknownObjectRetain(param_2);
    _swift_unknownObjectRetain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRetain_11034f540)(param_4);
    return;
  }
  return;
}



/* Entry: 1049fb49c; end: 1049fb4a3;  */

void FUN_1049fb49c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001049fb4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x78))();
  return;
}



/* Entry: 1049fb4a4; end: 1049fb6d3;  */

long FUN_1049fb4a4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1049fb6d4; end: 1049fb6e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049fb6d4(long *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 ******ppppppuVar8;
  undefined *puVar9;
  undefined8 ******ppppppuVar10;
  undefined *puVar11;
  undefined8 ******ppppppuVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  long unaff_x20;
  undefined8 *****pppppuVar18;
  long lVar19;
  undefined8 ******ppppppuVar20;
  long lStack_100;
  uint uStack_f4;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 *****pppppuStack_e0;
  ulong uStack_d8;
  undefined1 auStack_c0 [24];
  undefined8 *****pppppuStack_a8;
  undefined8 *****pppppuStack_a0;
  undefined *puStack_90;
  undefined1 auStack_88 [40];
  
  lStack_f0 = *(long *)(unaff_x20 + 0x10);
  lVar13 = *(long *)(unaff_x20 + 0x20);
  uStack_f4 = (uint)*(byte *)(unaff_x20 + 0x18);
  lVar4 = 0x11309c5e0;
  func_0x0001048db364();
  uVar16 = (long)&lStack_100 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar17 = *(long *)(lVar4 + -8);
  lVar19 = uVar16 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x0001000bb420(param_2,auStack_88);
  func_0x0001000bb420(auStack_88,&pppppuStack_a8);
  uVar5 = 0;
  func_0x000100de1f70(0);
  puVar11 = PTR___sypN_11034f1a8;
  ppppppuVar20 = &pppppuStack_e0;
  pcVar3 = (code *)&pppppuStack_a8;
  _swift_dynamicCast(ppppppuVar20,pcVar3,PTR___sypN_11034f1a8 + 8,uVar5,6);
  pppppuVar18 = pppppuStack_e0;
  if (((ulong)ppppppuVar20 & 1) == 0) {
    uVar5 = 0xe400000000000000;
    pppppuVar18 = (undefined8 *****)0x61746164;
  }
  else {
    lStack_100 = lVar13;
    if (lRam000000011309ff80 != -1) {
      pcVar3 = FUN_1049e4894;
      _swift_once(0x11309ff80);
    }
    FUN_1049e4a94();
    ppppppuVar20 = (undefined8 ******)pppppuVar18;
    _UIImageJPEGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    if (ppppppuVar20 == (undefined8 ******)0x0) {
      ppppppuVar10 = (undefined8 ******)0x0;
      pcVar3 = (code *)0xf000000000000000;
    }
    else {
      ppppppuVar10 = ppppppuVar20;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      _objc_release(ppppppuVar20);
    }
    puVar6 = (undefined *)0x1130a3e48;
    func_0x0001048db364();
    pppppuStack_a8 = ppppppuVar10;
    pppppuStack_a0 = (undefined8 *****)pcVar3;
    puStack_90 = puVar6;
    func_0x000100183ab8(auStack_88);
    func_0x000100102924(&pppppuStack_a8,auStack_88);
    _objc_release(pppppuVar18);
    pppppuVar18 = (undefined8 *****)0x676e70;
    uVar5 = 0xe300000000000000;
    lVar13 = lStack_100;
  }
  func_0x0001000bb420(auStack_88,&pppppuStack_a8);
  ppppppuVar20 = &pppppuStack_e0;
  _swift_dynamicCast(ppppppuVar20,&pppppuStack_a8,puVar11 + 8,PTR___s10Foundation4DataVN_110350ae0,6
                    );
  lVar2 = lStack_f0;
  if (((ulong)ppppppuVar20 & 1) == 0) {
    _swift_bridgeObjectRelease(uVar5);
    func_0x0001000bb420(auStack_88,&pppppuStack_a8);
    uVar7 = uVar16;
    _swift_dynamicCast(uVar16,&pppppuStack_a8,puVar11 + 8,lVar4,6);
    if ((uVar7 & 1) == 0) {
      (**(code **)(lVar17 + 0x38))(uVar16,1,1,lVar4);
      func_0x0001049fb6fc(uVar16,0x11309c5e0);
      func_0x000100102924(auStack_88,param_1);
      return;
    }
    (**(code **)(lVar17 + 0x38))(uVar16,0,1,lVar4);
    lVar13 = lVar19;
    (**(code **)(lVar17 + 0x20))(lVar19,uVar16,lVar4);
    __s10Foundation3URLV14absoluteStringSSvg();
    param_1[3] = (long)PTR___sSSN_11034da80;
    *param_1 = lVar13;
    param_1[1] = uVar16;
    (**(code **)(lVar17 + 8))(lVar19,lVar4);
    goto LAB_1049fa74c;
  }
  _swift_beginAccess(lStack_f0 + 0x10,auStack_c0,0,0);
  if ((((*(byte *)(lVar2 + 0x10) & 1) == 0) && ((uStack_f4 & 1) != 0)) &&
     (ppppppuVar20 = *(undefined8 *******)(lVar13 + _DAT_1130a4050),
     ppppppuVar20 != (undefined8 ******)0x0)) {
    uVar1 = (uint)(uStack_d8 >> 0x20);
    uVar14 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar14 == 0) {
        uVar16 = uStack_d8 >> 0x30 & 0xff;
      }
      else {
        iVar15 = (int)((ulong)pppppuStack_e0 >> 0x20);
        if (SBORROW4(iVar15,(int)pppppuStack_e0)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1049fa790);
          (*pcVar3)();
        }
        uVar16 = (ulong)(iVar15 - (int)pppppuStack_e0);
      }
    }
    else if (uVar14 == 2) {
      uVar16 = (long)pppppuStack_e0[3] - (long)pppppuStack_e0[2];
      if (SBORROW8((long)pppppuStack_e0[3],(long)pppppuStack_e0[2])) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1049fa41c);
        (*pcVar3)();
      }
    }
    else {
      uVar16 = 0;
    }
    if (((long)uVar16 < 0) || (uVar16 < *(ulong *)(lVar13 + _DAT_1130a4040))) goto LAB_1049fa628;
    puStack_90 = PTR___sSbN_11034dd40;
    pppppuStack_a8 = (undefined8 *****)CONCAT71(pppppuStack_a8._1_7_,1);
    lStack_100 = lVar13;
    func_0x000100102924(&pppppuStack_a8,&pppppuStack_e0);
    puVar11 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
    _swift_isUniquelyReferenced_nonNull_native();
    puStack_e8 = puVar11;
    func_0x0001001029e8(&pppppuStack_e0,0x6265747361507369,0xec0000006472616f,puVar6);
    puVar6 = puStack_e8;
    puVar11 = PTR___sSSN_11034da80;
    puStack_90 = PTR___sSSN_11034da80;
    pppppuStack_a8 = pppppuVar18;
    pppppuStack_a0 = (undefined8 *****)uVar5;
    func_0x000100102924(&pppppuStack_a8,&pppppuStack_e0);
    puVar9 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native(puVar6);
    puStack_e8 = puVar6;
    func_0x0001001029e8(&pppppuStack_e0,0x676174,0xe300000000000000,puVar9);
    puVar6 = puStack_e8;
    ppppppuVar10 = ppppppuVar20;
    ppppppuVar12 = (undefined8 ******)PTR_s_name_112612df0;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    ppppppuVar8 = ppppppuVar10;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(ppppppuVar10);
    puStack_90 = puVar11;
    pppppuStack_a8 = ppppppuVar8;
    pppppuStack_a0 = ppppppuVar12;
    func_0x000100102924(&pppppuStack_a8,&pppppuStack_e0);
    puVar11 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native(puVar6);
    puStack_e8 = puVar6;
    func_0x0001001029e8(&pppppuStack_e0,0xd00000000000001e,0x800000010f229500,puVar11);
    puVar11 = puStack_e8;
    ppppppuVar10 = (undefined8 ******)pppppuStack_e0;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(pppppuStack_e0,uStack_d8);
    uVar5 = 0xd000000000000025;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f229520);
    _objc_msgSend(ppppppuVar20,PTR_s_setData_forPasteboardType__112525568,ppppppuVar10,uVar5);
    _objc_release(ppppppuVar10);
    _objc_release(uVar5);
    lVar4 = lStack_f0;
    _swift_beginAccess(lStack_f0 + 0x10,&pppppuStack_a8,1,0);
    *(undefined1 *)(lVar4 + 0x10) = 1;
    _objc_msgSend(ppppppuVar20,PTR_s__isGeneralPasteboard_112525570);
    if ((int)ppppppuVar20 != 0) {
      FUN_1049fa790(pppppuStack_e0,uStack_d8);
    }
  }
  else {
LAB_1049fa628:
    puStack_90 = PTR___sSbN_11034dd40;
    pppppuStack_a8 = (undefined8 *****)CONCAT71(pppppuStack_a8._1_7_,1);
    func_0x000100102924(&pppppuStack_a8,&pppppuStack_e0);
    puVar11 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
    _swift_isUniquelyReferenced_nonNull_native();
    puStack_e8 = puVar11;
    func_0x0001001029e8(&pppppuStack_e0,0x3436657361427369,0xe800000000000000,puVar6);
    puVar6 = puStack_e8;
    puVar11 = PTR___sSSN_11034da80;
    puStack_90 = PTR___sSSN_11034da80;
    pppppuStack_a8 = pppppuVar18;
    pppppuStack_a0 = (undefined8 *****)uVar5;
    func_0x000100102924(&pppppuStack_a8,&pppppuStack_e0);
    puVar9 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native(puVar6);
    puStack_e8 = puVar6;
    func_0x0001001029e8(&pppppuStack_e0,0x676174,0xe300000000000000,puVar9);
    puVar6 = puStack_e8;
    ppppppuVar10 = (undefined8 ******)0x0;
    ppppppuVar20 = (undefined8 ******)pppppuStack_e0;
    __s10Foundation4DataV19base64EncodedString7optionsSSSo27NSDataBase64EncodingOptionsV_tF
              (0,pppppuStack_e0,uStack_d8);
    puStack_90 = puVar11;
    pppppuStack_a8 = ppppppuVar10;
    pppppuStack_a0 = ppppppuVar20;
    func_0x000100102924(&pppppuStack_a8,&pppppuStack_e0);
    puVar11 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native(puVar6);
    puStack_e8 = puVar6;
    func_0x0001001029e8(&pppppuStack_e0,0xd00000000000001e,0x800000010f229500,puVar11);
    puVar11 = puStack_e8;
  }
  lVar4 = 0x11309c420;
  func_0x0001048db364();
  param_1[3] = lVar4;
  func_0x00010006c090(pppppuStack_e0,uStack_d8);
  *param_1 = (long)puVar11;
LAB_1049fa74c:
  func_0x000100183ab8(auStack_88);
  return;
}



/* Entry: 1049fb6e4; end: 1049fb737;  */

void FUN_1049fb6e4(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1049fb738; end: 1049fb743;  */

/* WARNING: Possible PIC construction at 0x0001049fab00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001049fabd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001049fab28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001049fab68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001049fab2c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x0001049fabd4) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Removing unreachable block (ram,0x0001049fab04) */
/* WARNING: Removing unreachable block (ram,0x0001049fab6c) */
/* WARNING: Removing unreachable block (ram,0x0001049fab7c) */
/* WARNING: Removing unreachable block (ram,0x0001049fabf4) */
/* WARNING: Removing unreachable block (ram,0x0001049fab80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049fb738(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined *puVar7;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  puVar4 = *(undefined **)(unaff_x20 + 0x20);
  uVar6 = *(ulong *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130a4050);
  if (uVar6 == 0) {
LAB_1049faac0:
    uVar2 = 0;
    puVar7 = (undefined *)0xf000000000000000;
  }
  else {
    uVar3 = 0xd000000000000025;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f229520);
    puVar7 = PTR_s_dataForPasteboardType__1125b6878;
    _objc_msgSend(uVar6,PTR_s_dataForPasteboardType__1125b6878,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (uVar6 == 0) goto LAB_1049faac0;
    uVar2 = uVar6;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(uVar6);
    _objc_release(uVar6);
  }
  if ((ulong)puVar4 >> 0x3c < 0xf) {
    if ((ulong)puVar7 >> 0x3c < 0xf) {
      func_0x00010006c00c(uVar1,puVar4);
      func_0x000100de78a0(uVar2,puVar7);
      func_0x000100e25fcc(uVar1,puVar4,uVar2,puVar7);
      goto code_r0x0001000b44c0;
    }
  }
  else if (0xe < (ulong)puVar7 >> 0x3c) {
    func_0x00010006c00c(uVar1,puVar4);
    func_0x000100de78a0(uVar2,puVar7);
    uVar2 = uVar1;
    puVar7 = puVar4;
    goto code_r0x0001000b44c0;
  }
  func_0x00010006c00c(uVar1,puVar4);
  uVar2 = uVar1;
  puVar7 = puVar4;
code_r0x0001000b44c0:
  if (0xe < (ulong)puVar7 >> 0x3c) {
    return;
  }
  uVar5 = (uint)((ulong)puVar7 >> 0x3e);
  if (uVar5 == 1) {
    uVar2 = (ulong)puVar7 & 0x3fffffffffffffff;
  }
  else if (uVar5 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1049fb744; end: 1049fb753;  */

void FUN_1049fb744(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1049fb754; end: 1049fb757;  */

undefined *
FUN_1049fb754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,long param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
  uVar2 = 0;
  if (param_5 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_4,param_5);
    uVar2 = param_4;
  }
  puVar1 = PTR___sypN_11034f1a8;
  if (param_6 != 0) {
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (param_6,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  }
  if (param_7 != 0) {
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (param_7,PTR___sSSN_11034da80,puVar1 + 8,PTR___sSSSHsWP_11034da90);
  }
  puVar1 = PTR_PTR_1126ae0a0;
  _swift_getInitializedObjCClass(PTR_PTR_1126ae0a0);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 1049fb758; end: 1049fb87b; -[FBSDKBridgeAPIRequestFactory bridgeAPIRequestWithProtocolType:scheme:methodName:parameters:userInfo:] */

void FUN_1049fb758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  if (param_5 == 0) {
    param_5 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  puVar1 = PTR___sypN_11034f1a8;
  if (param_6 != 0) {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_6,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  }
  if (param_7 != 0) {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_7,PTR___sSSN_11034da80,puVar1 + 8,PTR___sSSSHsWP_11034da90);
  }
  _objc_retain(param_1);
  FUN_1049fb940(param_3,param_4,param_2,param_5,uVar2,param_6,param_7);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_7);
  _swift_bridgeObjectRelease(param_6);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1049fb87c; end: 1049fb8cf;  */

void FUN_1049fb87c(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1049fb8d0; end: 1049fb90b; -[FBSDKBridgeAPIRequestFactory init] */

void FUN_1049fb8d0(undefined8 param_1)

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



/* Entry: 1049fb90c; end: 1049fb93f;  */

void FUN_1049fb90c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1049fb940; end: 1049fba4b;  */

undefined *
FUN_1049fb940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,long param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
  uVar2 = 0;
  if (param_5 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_4,param_5);
    uVar2 = param_4;
  }
  puVar1 = PTR___sypN_11034f1a8;
  if (param_6 != 0) {
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (param_6,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  }
  if (param_7 != 0) {
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (param_7,PTR___sSSN_11034da80,puVar1 + 8,PTR___sSSSHsWP_11034da90);
  }
  puVar1 = PTR_PTR_1126ae0a0;
  _swift_getInitializedObjCClass(PTR_PTR_1126ae0a0);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 1049fba4c; end: 1049fba6b;  */

void FUN_1049fba4c(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e9058);
  return;
}



/* Entry: 1049fba6c; end: 1049fba8b;  */

void FUN_1049fba6c(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1049fba8c; end: 1049fbaeb;  */

undefined * FUN_1049fba8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_2);
  puVar1 = PTR_PTR_1126ae0c8;
  _swift_getInitializedObjCClass(PTR_PTR_1126ae0c8);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  return puVar1;
}



/* Entry: 1049fbaec; end: 1049fbbc3;  */

undefined8
FUN_1049fbaec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  FUN_1049fbbc4(0);
  (**(code **)(lVar4 + 0x10))
            (&stack0xffffffffffffffa0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_2,lVar1);
  _swift_bridgeObjectRetain(param_4);
  uVar2 = param_1;
  _swift_unknownObjectRetain(param_1);
  FUN_1049fbe5c();
  _swift_unknownObjectRelease(param_1);
  return uVar2;
}



/* Entry: 1049fbbc4; end: 1049fbc07;  */

void FUN_1049fbbc4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130a40f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ae0c8;
  _swift_getInitializedObjCClass();
  _swift_getObjCClassMetadata();
  puRam00000001130a40f0 = puVar1;
  return;
}



/* Entry: 1049fbc08; end: 1049fbc43;  */

void FUN_1049fbc08(void)

{
  _swift_getInitializedObjCClass(PTR_PTR_1126ae0c8);
  _objc_msgSend();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1049fbc44; end: 1049fbc77;  */

void FUN_1049fbc44(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1049fbc78; end: 1049fbcb3; -[_TtC12FBSDKCoreKit25_BridgeAPIResponseFactory init] */

void FUN_1049fbc78(undefined8 param_1)

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



/* Entry: 1049fbcb4; end: 1049fbce7;  */

void FUN_1049fbcb4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1049fbce8; end: 1049fbd47;  */

undefined * FUN_1049fbce8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_2);
  puVar1 = PTR_PTR_1126ae0c8;
  _swift_getInitializedObjCClass(PTR_PTR_1126ae0c8);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  return puVar1;
}



/* Entry: 1049fbd48; end: 1049fbe1f;  */

undefined8
FUN_1049fbd48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  FUN_1049fbbc4(0);
  (**(code **)(lVar4 + 0x10))
            (&stack0xffffffffffffffa0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_2,lVar1);
  _swift_bridgeObjectRetain(param_4);
  uVar2 = param_1;
  _swift_unknownObjectRetain(param_1);
  FUN_1049fbe5c();
  _swift_unknownObjectRelease(param_1);
  return uVar2;
}



/* Entry: 1049fbe20; end: 1049fbe5b;  */

void FUN_1049fbe20(void)

{
  _swift_getInitializedObjCClass(PTR_PTR_1126ae0c8);
  _objc_msgSend();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1049fbe5c; end: 1049fbfc7;  */

undefined1  [16]
FUN_1049fbe5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  if (param_4 == 0) {
    param_3 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    _swift_bridgeObjectRelease(param_4);
  }
  _swift_getObjCClassFromMetadata();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_3);
  uVar4 = 0;
  if (unaff_x20 == 0) {
    _objc_retain(0);
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(0);
    _objc_release(uVar4);
    _swift_willThrow();
    lVar1 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar1 + -8) + 8))(param_2,lVar1);
  }
  else {
    lVar1 = 0;
    __s10Foundation3URLVMa();
    pcVar5 = *(code **)(*(long *)(lVar1 + -8) + 8);
    _objc_retain(0);
    (*pcVar5)(param_2,lVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    auVar6._8_8_ = lVar1;
    auVar6._0_8_ = unaff_x20;
    return auVar6;
  }
  ___stack_chk_fail();
  ppuVar2 = &PTR_PTR_1129e9108;
  _swift_getInitializedObjCClass(&PTR_PTR_1129e9108);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = ppuVar2;
  return auVar7;
}



/* Entry: 1049fbfc8; end: 1049fbfe7;  */

void FUN_1049fbfc8(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e9108);
  return;
}



/* Entry: 1049fbfe8; end: 1049fc06b;  */

void FUN_1049fbfe8(long param_1,undefined8 param_2)

{
  long unaff_x21;
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x20);
    do {
      uVar1 = *puVar3;
      uStack_38 = uVar1;
      _swift_bridgeObjectRetain(uVar1);
      FUN_1049fc0dc(&uStack_38,param_2);
      if (unaff_x21 != 0) {
        _swift_bridgeObjectRelease(uVar1);
        return;
      }
      _swift_bridgeObjectRelease(uVar1);
      puVar3 = puVar3 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



/* Entry: 1049fc06c; end: 1049fc08b;  */

void FUN_1049fc06c(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1049fc08c; end: 1049fc0db;  */

undefined * FUN_1049fc08c(undefined8 param_1)

{
  undefined *puStack_38;
  
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  _swift_retain();
  FUN_1049fbfe8(param_1,&puStack_38);
  return puStack_38;
}



/* Entry: 1049fc0dc; end: 1049fc4c3;  */

void FUN_1049fc0dc(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 auStack_80 [4];
  
  lVar1 = 0x11309c5e0;
  func_0x0001048db364();
  lVar4 = (long)&uStack_a0 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar1 + -8);
  lVar11 = lVar4 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar10 = *param_1;
  if (*(long *)(uVar10 + 0x10) == 0) {
    return;
  }
  _swift_bridgeObjectRetain(uVar10);
  lVar2 = 0x656d616e;
  uVar9 = 0;
  func_0x000100029284(0x656d616e);
  uVar5 = uVar10;
  if ((uVar9 & 1) != 0) {
    func_0x0001000bb420(*(long *)(uVar10 + 0x38) + lVar2 * 0x20,auStack_80);
    _swift_bridgeObjectRelease(uVar10);
    puVar3 = &uStack_90;
    _swift_dynamicCast(puVar3,auStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar5 = uStack_88;
    uVar9 = uStack_90;
    if (((ulong)puVar3 & 1) == 0) {
      return;
    }
    uVar7 = uStack_90 & 0xffffffffffff;
    if ((uStack_88 & 0x2000000000000000) != 0) {
      uVar7 = uStack_88 >> 0x38 & 0xf;
    }
    if ((uVar7 != 0) && (*(long *)(uVar10 + 0x10) != 0)) {
      _swift_bridgeObjectRetain(uVar10);
      lVar2 = 0x6c7275;
      uVar7 = 0;
      func_0x000100029284(0x6c7275);
      if ((uVar7 & 1) == 0) {
        _swift_bridgeObjectRelease(uVar5);
        uVar5 = uVar10;
      }
      else {
        func_0x0001000bb420(*(long *)(uVar10 + 0x38) + lVar2 * 0x20,auStack_80);
        _swift_bridgeObjectRelease(uVar10);
        puVar3 = &uStack_90;
        _swift_dynamicCast(puVar3,auStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        if (((ulong)puVar3 & 1) != 0) {
          __s10Foundation3URLV6stringACSgSSh_tcfC(lVar4,uStack_90,uStack_88);
          _swift_bridgeObjectRelease(uStack_88);
          lVar2 = lVar4;
          (**(code **)(lVar12 + 0x30))(lVar4,1,lVar1);
          if ((int)lVar2 == 1) {
            _swift_bridgeObjectRelease(uVar5);
            func_0x0001000293e4(lVar4);
            return;
          }
          (**(code **)(lVar12 + 0x20))(lVar11,lVar4,lVar1);
          if (*(long *)(uVar10 + 0x10) != 0) {
            _swift_bridgeObjectRetain(uVar10);
            lVar4 = 0x736e6f6973726576;
            uVar7 = 0;
            func_0x000100029284(0x736e6f6973726576);
            if ((uVar7 & 1) == 0) {
              _swift_bridgeObjectRelease(uVar10);
            }
            else {
              func_0x0001000bb420(*(long *)(uVar10 + 0x38) + lVar4 * 0x20,auStack_80);
              _swift_bridgeObjectRelease(uVar10);
              uVar8 = 0x11309d6d0;
              func_0x0001048db364(0x11309d6d0);
              puVar3 = &uStack_90;
              _swift_dynamicCast(puVar3,auStack_80,PTR___sypN_11034f1a8 + 8,uVar8,6);
              if (((ulong)puVar3 & 1) != 0) {
                uVar10 = uStack_90;
                func_0x000101158fcc();
                if (((uVar10 != 0) || (uVar10 = uStack_90, FUN_1049fc4c4(), uVar10 != 0)) &&
                   (_swift_bridgeObjectRelease(), *(long *)(uStack_90 + 0x10) != 0)) {
                  puVar6 = PTR_PTR_1126adfa0;
                  _objc_allocWithZone();
                  uVar10 = uVar9;
                  puStack_98 = puVar6;
                  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar9,uVar5);
                  uStack_a0 = uVar10;
                  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
                  uVar7 = uStack_90;
                  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF
                            (uStack_90,PTR___sypN_11034f1a8 + 8);
                  _swift_bridgeObjectRelease(uStack_90);
                  puVar6 = puStack_98;
                  _objc_msgSend(puStack_98,PTR_s_initWithName_URL_appVersions__1125e8f18,uStack_a0,
                                uVar10,uVar7);
                  _objc_release(uStack_a0);
                  _objc_release(uVar10);
                  _objc_release(uVar7);
                  if (puVar6 == (undefined *)0x0) {
                    FUN_10499b468(uVar9,uVar5);
                    _swift_bridgeObjectRelease(uVar5);
                    _objc_release(uVar9);
                  }
                  else {
                    uVar8 = *param_2;
                    _swift_isUniquelyReferenced_nonNull_native(uVar8);
                    auStack_80[0] = *param_2;
                    *param_2 = 0x8000000000000000;
                    func_0x00010499b8b4(puVar6,uVar9,uVar5,uVar8);
                    _swift_bridgeObjectRelease(uVar5);
                    *param_2 = auStack_80[0];
                  }
                  (**(code **)(lVar12 + 8))(lVar11,lVar1);
                  return;
                }
                (**(code **)(lVar12 + 8))(lVar11,lVar1);
                _swift_bridgeObjectRelease(uStack_90);
                goto LAB_1049fc35c;
              }
            }
          }
          (**(code **)(lVar12 + 8))(lVar11,lVar1);
        }
      }
    }
  }
LAB_1049fc35c:
  _swift_bridgeObjectRelease(uVar5);
  return;
}



/* Entry: 1049fc4c4; end: 1049fc5cf;  */

undefined * FUN_1049fc4c4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 auStack_88 [2];
  undefined1 auStack_78 [32];
  undefined *puStack_58;
  
  lVar7 = *(long *)(param_1 + 0x10);
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain();
  func_0x000100dd4260(0,lVar7,0);
  puVar4 = PTR___sypN_11034f1a8;
  puVar3 = PTR___sSiN_11034deb0;
  puVar2 = puStack_58;
  while( true ) {
    if (lVar7 == 0) {
      return puVar2;
    }
    param_1 = param_1 + 0x20;
    puStack_58 = puVar2;
    func_0x0001000bb420(param_1,auStack_78);
    puVar6 = auStack_88;
    _swift_dynamicCast(puVar6,auStack_78,puVar4 + 8,puVar3,6);
    uVar5 = auStack_88[0];
    if (((ulong)puVar6 & 1) == 0) break;
    uVar1 = *(ulong *)(puVar2 + 0x10);
    puStack_58 = puVar2;
    if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
      func_0x000100dd4260(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
    }
    *(ulong *)(puStack_58 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puStack_58 + uVar1 * 8 + 0x20) = uVar5;
    lVar7 = lVar7 + -1;
    puVar2 = puStack_58;
  }
  _swift_release(puVar2);
  return (undefined *)0x0;
}



/* Entry: 1049fc5d0; end: 1049fc677; -[FBSDKDialogConfigurationMapBuilder buildDialogConfigurationMapWithRawConfigurations:] */

void FUN_1049fc5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_38;
  
  uVar2 = 0x11309c420;
  func_0x0001048db364(0x11309c420);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar2);
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  _swift_retain();
  FUN_1049fbfe8(param_3,&puStack_38);
  _swift_bridgeObjectRelease(param_3);
  puVar1 = puStack_38;
  uVar2 = 0;
  func_0x0001049fc73c(0);
  puVar3 = puVar1;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar1,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1049fc678; end: 1049fc6ab;  */

void FUN_1049fc678(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1049fc6ac; end: 1049fc6e7; -[FBSDKDialogConfigurationMapBuilder init] */

void FUN_1049fc6ac(undefined8 param_1)

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



/* Entry: 1049fc6e8; end: 1049fc71b;  */

void FUN_1049fc6e8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1049fc71c; end: 1049fc77f;  */

void FUN_1049fc71c(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e91b8);
  return;
}



/* Entry: 1049fc780; end: 1049fc79f;  */

void FUN_1049fc780(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1049fc7a0; end: 1049fcc5b;  */

undefined *
FUN_1049fc7a0(undefined8 param_1,undefined *param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_68;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = param_2;
  puVar1 = param_2;
  if (param_2 == (undefined *)0x0) {
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain();
    func_0x000100214a84();
    _swift_release(puVar2);
  }
  if (param_4 == 0) {
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    puStack_68 = PTR___sSSN_11034da80;
    uStack_80 = param_3;
    lStack_78 = param_4;
    func_0x000100102924(&uStack_80,auStack_c0);
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_4);
    puVar2 = puVar1;
    _swift_isUniquelyReferenced_nonNull_native(puVar1);
    puVar4 = (undefined *)0xd00000000000002e;
    func_0x0001001029e8(auStack_c0,0xd00000000000002e,0x800000010f229700,puVar2);
  }
  if (param_5 != 0) {
    uVar3 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar3);
    _swift_getErrorValue(param_5,auStack_88,auStack_a0);
    puStack_68 = puStack_98;
    func_0x0001000a9d90(&uStack_80);
    (**(code **)(*(long *)(puStack_98 + -8) + 0x10))();
    func_0x000100102924(&uStack_80,auStack_c0);
    _swift_errorRetain(param_5);
    puVar2 = puVar1;
    _swift_isUniquelyReferenced_nonNull_native(puVar1);
    func_0x0001001029e8(auStack_c0,uVar3,puVar4,puVar2);
    _swift_errorRelease(param_5);
    _swift_bridgeObjectRelease(puVar4);
  }
  func_0x0001049fcd60(param_1,0xd000000000000015,0x800000010f21bb90,param_3,param_4);
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f21bb90);
  puVar2 = puVar1;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar1,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(puVar1);
  _objc_msgSend(puVar4,PTR_s_initWithDomain_code_userInfo__1125e1288,uVar3,param_1,puVar2);
  _objc_release(uVar3);
  _objc_release(puVar2);
  return puVar4;
}



/* Entry: 1049fcc5c; end: 1049fce37; -[FBSDKErrorFactory errorWithCode:userInfo:message:underlyingError:] */

void FUN_1049fcc5c(undefined8 param_1,undefined *param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    param_2 = PTR___sSSN_11034da80;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  _objc_retain(param_1);
  uVar1 = param_6;
  _objc_retain(param_6);
  FUN_1049fc7a0(param_3,param_4,param_5,param_2,param_6);
  _objc_release(param_1);
  _objc_release(uVar1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_4);
  uVar1 = param_3;
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_3);
  _swift_errorRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1049fce38; end: 1049fcf5b; -[FBSDKErrorFactory errorWithDomain:code:userInfo:message:underlyingError:] */

void FUN_1049fce38(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  puVar2 = param_2;
  if (param_5 != 0) {
    puVar2 = PTR___sSSN_11034da80;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  }
  if (param_6 == 0) {
    param_6 = 0;
    puVar2 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  }
  _objc_retain(param_1);
  uVar1 = param_7;
  _objc_retain(param_7);
  func_0x0001049fc9f0(param_3,param_2,param_4,param_5,param_6,puVar2,param_7);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _objc_release(uVar1);
  _swift_bridgeObjectRelease(puVar2);
  _swift_bridgeObjectRelease(param_5);
  uVar1 = param_3;
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_3);
  _swift_errorRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1049fcf5c; end: 1049fcf8f;  */

/* WARNING: Removing unreachable block (ram,0x0001049fd278) */

undefined *
FUN_1049fcf5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 unaff_x20;
  long lVar6;
  undefined8 uStack_e0;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined1 auStack_b8 [16];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_68;
  
  uStack_e0 = 0xd000000000000015;
  _swift_getObjectType();
  lVar6 = param_5;
  if (param_5 == 0) {
    uStack_80 = 0;
    lStack_78 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x18);
    _swift_bridgeObjectRelease(lStack_78);
    uStack_a0 = 0xd000000000000012;
    lStack_98 = -0x7ffffffef0dd68d0;
    __sSS6appendyySSF(param_1,param_2);
    __sSS6appendyySSF(0x203a,0xe200000000000000);
    func_0x000100672b50(param_3,&uStack_80);
    uVar1 = 0x11309c428;
    func_0x0001048db364(0x11309c428);
    __sSS10describingSSx_tclufC(&uStack_80,uVar1);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar1);
    lVar6 = lStack_98;
    param_4 = uStack_a0;
  }
  puVar3 = PTR___sSSN_11034da80;
  puStack_68 = PTR___sSSN_11034da80;
  uStack_80 = param_1;
  lStack_78 = param_2;
  func_0x000100102924(&uStack_80,&uStack_a0);
  _swift_bridgeObjectRetain(param_5);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
  _swift_bridgeObjectRetain(param_2);
  puVar2 = puVar5;
  _swift_isUniquelyReferenced_nonNull_native(puVar5);
  puStack_a8 = puVar5;
  func_0x0001001029e8(&uStack_a0,0xd00000000000002a,0x800000010f229750,puVar2);
  puVar5 = puStack_a8;
  func_0x000100672b50(param_3,&uStack_a0);
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_a0);
  }
  else {
    func_0x000100102924(&uStack_a0,&uStack_80);
    func_0x0001000bb420(&uStack_80,&uStack_a0);
    puVar2 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native(puVar5);
    puStack_a8 = puVar5;
    func_0x0001001029e8(&uStack_a0,0xd00000000000002b,0x800000010f229780,puVar2);
    func_0x000100183ab8(&uStack_80);
    puVar5 = puStack_a8;
  }
  puStack_68 = puVar3;
  uStack_80 = param_4;
  lStack_78 = lVar6;
  func_0x000100102924(&uStack_80,&uStack_a0);
  _swift_bridgeObjectRetain(lVar6);
  puVar3 = puVar5;
  _swift_isUniquelyReferenced_nonNull_native(puVar5);
  uVar1 = 0xd00000000000002e;
  puStack_a8 = puVar5;
  func_0x0001001029e8(&uStack_a0,0xd00000000000002e,0x800000010f229700,puVar3);
  puVar3 = puStack_a8;
  if (param_6 != 0) {
    uVar4 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar4);
    _swift_getErrorValue(param_6,auStack_b8,auStack_d0);
    puStack_68 = puStack_c8;
    func_0x0001000a9d90(&uStack_80);
    (**(code **)(*(long *)(puStack_c8 + -8) + 0x10))();
    func_0x000100102924(&uStack_80,&uStack_a0);
    _swift_errorRetain(param_6);
    puVar5 = puVar3;
    _swift_isUniquelyReferenced_nonNull_native(puVar3);
    puStack_a8 = puVar3;
    func_0x0001001029e8(&uStack_a0,uVar4,uVar1,puVar5);
    _swift_errorRelease(param_6);
    _swift_bridgeObjectRelease(uVar1);
  }
  puVar3 = puStack_a8;
  FUN_1049b1a14(&uStack_80,unaff_x20,&PTR_DAT_1130a4150);
  uVar1 = uStack_80;
  uVar4 = uStack_e0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f21bb90);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_4,lVar6);
  _objc_msgSend(uVar1,PTR_s_saveError_errorDomain_message__112630370,2,uVar4,param_4);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar4);
  _objc_release(param_4);
  _swift_bridgeObjectRelease(lVar6);
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSError_1126ae858);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f21bb90);
  puVar2 = puVar3;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(puVar3);
  _objc_msgSend(puVar5,PTR_s_initWithDomain_code_userInfo__1125e1288,uStack_e0,2,puVar2);
  _objc_release(uStack_e0);
  _objc_release(puVar2);
  return puVar5;
}



/* Entry: 1049fcf90; end: 1049fd387;  */

/* WARNING: Removing unreachable block (ram,0x0001049fd278) */

undefined *
FUN_1049fcf90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 unaff_x20;
  long lVar6;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined1 auStack_b8 [16];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_68;
  
  _swift_getObjectType();
  lVar6 = param_7;
  if (param_7 == 0) {
    uStack_80 = 0;
    lStack_78 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x18);
    _swift_bridgeObjectRelease(lStack_78);
    uStack_a0 = 0xd000000000000012;
    lStack_98 = -0x7ffffffef0dd68d0;
    __sSS6appendyySSF(param_3,param_4);
    __sSS6appendyySSF(0x203a,0xe200000000000000);
    func_0x000100672b50(param_5,&uStack_80);
    uVar1 = 0x11309c428;
    func_0x0001048db364(0x11309c428);
    __sSS10describingSSx_tclufC(&uStack_80,uVar1);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar1);
    lVar6 = lStack_98;
    param_6 = uStack_a0;
  }
  puVar3 = PTR___sSSN_11034da80;
  puStack_68 = PTR___sSSN_11034da80;
  uStack_80 = param_3;
  lStack_78 = param_4;
  func_0x000100102924(&uStack_80,&uStack_a0);
  _swift_bridgeObjectRetain(param_7);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
  _swift_bridgeObjectRetain(param_4);
  puVar2 = puVar5;
  _swift_isUniquelyReferenced_nonNull_native(puVar5);
  puStack_a8 = puVar5;
  func_0x0001001029e8(&uStack_a0,0xd00000000000002a,0x800000010f229750,puVar2);
  puVar5 = puStack_a8;
  func_0x000100672b50(param_5,&uStack_a0);
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_a0);
  }
  else {
    func_0x000100102924(&uStack_a0,&uStack_80);
    func_0x0001000bb420(&uStack_80,&uStack_a0);
    puVar2 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native(puVar5);
    puStack_a8 = puVar5;
    func_0x0001001029e8(&uStack_a0,0xd00000000000002b,0x800000010f229780,puVar2);
    func_0x000100183ab8(&uStack_80);
    puVar5 = puStack_a8;
  }
  puStack_68 = puVar3;
  uStack_80 = param_6;
  lStack_78 = lVar6;
  func_0x000100102924(&uStack_80,&uStack_a0);
  _swift_bridgeObjectRetain(lVar6);
  puVar3 = puVar5;
  _swift_isUniquelyReferenced_nonNull_native(puVar5);
  uVar1 = 0xd00000000000002e;
  puStack_a8 = puVar5;
  func_0x0001001029e8(&uStack_a0,0xd00000000000002e,0x800000010f229700,puVar3);
  puVar3 = puStack_a8;
  if (param_8 != 0) {
    uVar4 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar4);
    _swift_getErrorValue(param_8,auStack_b8,auStack_d0);
    puStack_68 = puStack_c8;
    func_0x0001000a9d90(&uStack_80);
    (**(code **)(*(long *)(puStack_c8 + -8) + 0x10))();
    func_0x000100102924(&uStack_80,&uStack_a0);
    _swift_errorRetain(param_8);
    puVar5 = puVar3;
    _swift_isUniquelyReferenced_nonNull_native(puVar3);
    puStack_a8 = puVar3;
    func_0x0001001029e8(&uStack_a0,uVar4,uVar1,puVar5);
    _swift_errorRelease(param_8);
    _swift_bridgeObjectRelease(uVar1);
  }
  puVar3 = puStack_a8;
  FUN_1049b1a14(&uStack_80,unaff_x20,&PTR_DAT_1130a4150);
  uVar1 = uStack_80;
  uVar4 = param_1;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_6,lVar6);
  _objc_msgSend(uVar1,PTR_s_saveError_errorDomain_message__112630370,2,uVar4,param_6);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar4);
  _objc_release(param_6);
  _swift_bridgeObjectRelease(lVar6);
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSError_1126ae858);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  puVar2 = puVar3;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(puVar3);
  _objc_msgSend(puVar5,PTR_s_initWithDomain_code_userInfo__1125e1288,param_1,2,puVar2);
  _objc_release(param_1);
  _objc_release(puVar2);
  return puVar5;
}



/* Entry: 1049fd388; end: 1049fd4d7; -[FBSDKErrorFactory invalidArgumentErrorWithName:value:message:underlyingError:] */

void FUN_1049fd388(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar2 = param_2;
  if (param_4 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_4);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_70);
    _swift_unknownObjectRelease(param_4);
  }
  if (param_5 == 0) {
    lVar3 = 0;
    uVar2 = 0;
  }
  else {
    lVar3 = param_5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
    _objc_release(param_5);
  }
  uVar1 = 0xd000000000000015;
  FUN_1049fcf90(0xd000000000000015,0x800000010f21bb90,param_3,param_2,&uStack_70,lVar3,uVar2,param_6
               );
  _objc_release(param_6);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar2);
  func_0x00010006e7f4(&uStack_70);
  uVar2 = uVar1;
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(uVar1);
  _swift_errorRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1049fd4d8; end: 1049fd63b; -[FBSDKErrorFactory invalidArgumentErrorWithDomain:name:value:message:underlyingError:] */

void FUN_1049fd4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  uVar2 = uVar1;
  if (param_5 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_5);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80);
    _swift_unknownObjectRelease(param_5);
  }
  if (param_6 == 0) {
    lVar3 = 0;
    uVar2 = 0;
  }
  else {
    lVar3 = param_6;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
    _objc_release(param_6);
  }
  FUN_1049fcf90(param_3,param_2,param_4,uVar1,&uStack_80,lVar3,uVar2,param_7);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
  _objc_release(param_7);
  _swift_bridgeObjectRelease(uVar2);
  func_0x00010006e7f4(&uStack_80);
  uVar2 = param_3;
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_3);
  _swift_errorRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1049fd63c; end: 1049fd76b;  */

undefined8
FUN_1049fd63c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = param_4;
  if (param_4 == 0) {
    uStack_70 = 0;
    lStack_68 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x19);
    _swift_bridgeObjectRelease(lStack_68);
    uStack_70 = 0x6f662065756c6156;
    lStack_68 = -0x15ffffffffffdf8e;
    __sSS6appendyySSF(param_1,param_2);
    __sSS6appendyySSF(0x7571657220736920,0xed00002e64657269);
    param_3 = uStack_70;
    lVar2 = lStack_68;
  }
  lStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  _swift_bridgeObjectRetain(param_4);
  uVar1 = 0xd000000000000015;
  FUN_1049fcf90(0xd000000000000015,0x800000010f21bb90,param_1,param_2,&uStack_70,param_3,lVar2,
                param_5);
  _swift_bridgeObjectRelease(lVar2);
  func_0x00010006e7f4(&uStack_70);
  return uVar1;
}



/* Entry: 1049fd76c; end: 1049fd89b;  */

undefined8
FUN_1049fd76c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = param_6;
  if (param_6 == 0) {
    uStack_80 = 0;
    lStack_78 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x19);
    _swift_bridgeObjectRelease(lStack_78);
    uStack_80 = 0x6f662065756c6156;
    lStack_78 = -0x15ffffffffffdf8e;
    __sSS6appendyySSF(param_3,param_4);
    __sSS6appendyySSF(0x7571657220736920,0xed00002e64657269);
    param_5 = uStack_80;
    lVar1 = lStack_78;
  }
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  _swift_bridgeObjectRetain(param_6);
  FUN_1049fcf90(param_1,param_2,param_3,param_4,&uStack_80,param_5,lVar1,param_7);
  _swift_bridgeObjectRelease(lVar1);
  func_0x00010006e7f4(&uStack_80);
  return param_1;
}



/* Entry: 1049fd89c; end: 1049fd973; -[FBSDKErrorFactory requiredArgumentErrorWithName:message:underlyingError:] */

void FUN_1049fd89c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  if (param_4 == 0) {
    param_4 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  uVar1 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_1);
  FUN_1049fd63c(param_3,param_2,param_4,uVar2,param_5);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _objc_release(uVar1);
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_3;
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_3);
  _swift_errorRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1049fd974; end: 1049fda77; -[FBSDKErrorFactory requiredArgumentErrorWithDomain:name:message:underlyingError:] */

void FUN_1049fd974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar2 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  if (param_5 == 0) {
    param_5 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = uVar2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  uVar1 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_1);
  FUN_1049fd76c(param_3,param_2,param_4,uVar2,param_5,uVar3,param_6);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar2);
  _objc_release(uVar1);
  _swift_bridgeObjectRelease(uVar3);
  uVar2 = param_3;
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_3);
  _swift_errorRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1049fda78; end: 1049fdc17;  */

undefined * FUN_1049fda78(undefined8 param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_90 [32];
  undefined8 uStack_70;
  long lStack_68;
  undefined *puStack_58;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain();
    func_0x000100214a84();
    _swift_release(puVar2);
  }
  if (param_2 == 0) {
    _swift_bridgeObjectRetain(param_3);
  }
  else {
    puStack_58 = PTR___sSSN_11034da80;
    uStack_70 = param_1;
    lStack_68 = param_2;
    func_0x000100102924(&uStack_70,auStack_90);
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRetain(param_2);
    puVar2 = puVar1;
    _swift_isUniquelyReferenced_nonNull_native(puVar1);
    func_0x0001001029e8(auStack_90,0xd00000000000002e,0x800000010f229700,puVar2);
  }
  func_0x0001049fcd60(3,0xd000000000000015,0x800000010f21bb90,param_1,param_2);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f21bb90);
  puVar4 = puVar1;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar1,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(puVar1);
  _objc_msgSend(puVar2,PTR_s_initWithDomain_code_userInfo__1125e1288,uVar3,3,puVar4);
  _objc_release(uVar3);
  _objc_release(puVar4);
  return puVar2;
}



/* Entry: 1049fdc18; end: 1049fdce7; -[FBSDKErrorFactory unknownErrorWithMessage:userInfo:] */

void FUN_1049fdc18(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  if (param_4 != 0) {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  }
  _objc_retain(param_1);
  uVar1 = 3;
  FUN_1049fc7a0(3,param_4,param_3,param_2,0);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_4);
  _swift_bridgeObjectRelease(param_2);
  uVar2 = uVar1;
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(uVar1);
  _swift_errorRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1049fdce8; end: 1049fdd1b;  */

void FUN_1049fdce8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1049fdd1c; end: 1049fdd57; -[FBSDKErrorFactory init] */

void FUN_1049fdd1c(undefined8 param_1)

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



/* Entry: 1049fdd58; end: 1049fdd8b;  */

void FUN_1049fdd58(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1049fdd8c; end: 1049fddcb;  */

void FUN_1049fdd8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 1049fddcc; end: 1049fddf3;  */

undefined1  [16] FUN_1049fddcc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  _swift_getObjectType();
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1049fddf4; end: 1049fdecf;  */

undefined8 FUN_1049fddf4(void)

{
  return 0x113815a20;
}



/* Entry: 1049fded0; end: 1049fdf07;  */

void FUN_1049fded0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126adea0;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puRam0000000113815a28 = puVar1;
  return;
}



/* Entry: 1049fdf08; end: 1049fe097;  */

undefined8 FUN_1049fdf08(void)

{
  if (lRam000000011309ffa0 != -1) {
    _swift_once(0x11309ffa0,FUN_1049fded0);
  }
  return 0x113815a28;
}



/* Entry: 1049fe098; end: 1049fe1e3;  */

void FUN_1049fe098(undefined8 *param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815a20,auStack_38,0,0);
  *param_1 = uRam0000000113815a20;
  _swift_unknownObjectRetain();
  return;
}



/* Entry: 1049fe1e4; end: 1049fe1e7;  */

void FUN_1049fe1e4(void)

{
  return;
}



/* Entry: 1049fe1e8; end: 1049fe21f;  */

void FUN_1049fe1e8(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e9268);
  return;
}



/* Entry: 1049fe220; end: 1049fe307;  */

undefined * FUN_1049fe220(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uVar4 = param_1;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar2 = puVar1;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(puVar1,PTR_s_blackColor_1125a4bf0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend();
  _objc_release(puVar3);
  puVar3 = puVar2;
  FUN_1049fe5d4(param_1,param_2,uVar4,puVar2,puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 1049fe308; end: 1049fe30b;  */

long FUN_1049fe308(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  lVar1 = 0;
  _UIGraphicsBeginImageContextWithOptions();
  _UIGraphicsGetCurrentContext();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar8 = 0;
  }
  else {
    dVar12 = param_2;
    if (param_1 <= param_2) {
      dVar12 = param_1;
    }
    dVar9 = (param_1 - dVar12) * 0.5;
    dVar11 = (param_2 - dVar12) * 0.5;
    dVar13 = dVar12 / 12.0;
    lVar2 = lVar1;
    dVar15 = dVar12;
    _CGRectInset(dVar9,dVar11,dVar12,dVar12,dVar13,dVar13);
    _CGRectIntegral();
    func_0x0001028b6d3c();
    _swift_allocObject();
    *(undefined8 *)(lVar2 + 0x18) = 9;
    *(undefined8 *)(lVar2 + 0x10) = 4;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_allocWithZone();
    _objc_msgSend(0,0x3fe6666666666666);
    puVar4 = puVar3;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    *(undefined **)(lVar2 + 0x20) = puVar4;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_allocWithZone();
    _objc_msgSend(0,0x3fd3333333333333);
    puVar4 = puVar3;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    *(undefined **)(lVar2 + 0x28) = puVar4;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_allocWithZone();
    _objc_msgSend(0,0x3fb999999999999a);
    puVar4 = puVar3;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    *(undefined **)(lVar2 + 0x30) = puVar4;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_allocWithZone();
    _objc_msgSend(0,0);
    puVar4 = puVar3;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    *(undefined **)(lVar2 + 0x38) = puVar4;
    lVar8 = 0x1130a41d8;
    func_0x0001048db364();
    _swift_initStaticObject();
    lVar5 = lVar8;
    _swift_retain();
    _CGColorSpaceCreateDeviceGray();
    uVar6 = 0;
    func_0x000100ef8bfc(0);
    _objc_retain();
    lVar7 = lVar2;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar6);
    _swift_bridgeObjectRelease(lVar2);
    lVar2 = lVar5;
    _CGGradientCreateWithColors(lVar5,lVar7,lVar8 + 0x20);
    _swift_release(lVar8);
    _objc_release(lVar5);
    _objc_release(lVar7);
    if (lVar2 == 0) {
      lVar8 = 0;
    }
    else {
      dVar16 = dVar9;
      _CGRectGetMidX(dVar9,dVar11,dVar12,dVar15);
      dVar16 = dVar16 + dVar13 / -6.0;
      dVar14 = dVar9;
      _CGRectGetMidY(dVar9,dVar11,dVar12,dVar15);
      dVar14 = dVar13 * 0.25 + dVar14;
      dVar10 = dVar9;
      _CGRectGetWidth(dVar9,dVar11,dVar12,dVar15);
      _CGContextDrawRadialGradient
                (dVar16,dVar14,0,dVar16,dVar14,(dVar10 + dVar13 * -0.5) * 0.5,lVar1,lVar2,0);
      _CGRectInset(dVar9,dVar11,dVar12,dVar15,dVar13,dVar13);
      _CGRectIntegral();
      _objc_msgSend(param_3,PTR_s_setFill_112644918);
      _CGContextFillEllipseInRect(dVar9,dVar11,dVar12,dVar15,lVar1);
      _CGRectInset(dVar9,dVar11,dVar12,dVar15,dVar13,dVar13);
      _CGRectIntegral();
      _objc_msgSend(param_4,PTR_s_setFill_112644918);
      _CGContextFillEllipseInRect(dVar9,dVar11,dVar12,dVar15,lVar1);
      _CGRectInset(dVar9,dVar11,dVar12,dVar15,dVar13,dVar13);
      _CGRectIntegral();
      dVar11 = dVar13 * 5.0 * 0.25;
      dVar15 = dVar9;
      _CGRectGetMidY(dVar9);
      dVar15 = dVar15 + dVar11 * -0.5;
      _objc_msgSend(param_3,PTR_s_setFill_112644918);
      _CGContextTranslateCTM(param_1 * 0.5,param_2 * 0.5,lVar1);
      _CGContextRotateCTM(0x3fe921fb54442d18,lVar1);
      _CGContextTranslateCTM(param_1 * -0.5,param_2 * -0.5,lVar1);
      _CGContextFillRect(dVar9,dVar15,dVar12,dVar11,lVar1);
      _CGContextTranslateCTM(param_1 * 0.5,param_2 * 0.5,lVar1);
      _CGContextRotateCTM(0x3ff921fb54442d18,lVar1);
      _CGContextTranslateCTM(param_1 * -0.5,param_2 * -0.5,lVar1);
      lVar8 = lVar1;
      _CGContextFillRect(dVar9,dVar15,dVar12,dVar11,lVar1);
      _UIGraphicsGetImageFromCurrentImageContext();
      _objc_retainAutoreleasedReturnValue();
      _UIGraphicsEndImageContext();
      _objc_release(lVar5);
      lVar5 = lVar2;
    }
    _objc_release(lVar5);
    _objc_release(lVar1);
  }
  return lVar8;
}



/* Entry: 1049fe30c; end: 1049fe40f; -[FBSDKCloseIcon imageWithSize:] */

void FUN_1049fe30c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uVar4 = param_1;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retain(param_3);
  puVar2 = puVar1;
  _objc_msgSend(puVar1,PTR_s_whiteColor_112686cf0);
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(puVar1,PTR_s_blackColor_1125a4bf0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend();
  _objc_release(puVar3);
  puVar3 = puVar2;
  FUN_1049fe5d4(param_1,param_2,uVar4,puVar2,puVar1);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1049fe410; end: 1049fe4af; -[FBSDKCloseIcon imageWithSize:primaryColor:secondaryColor:scale:] */

void FUN_1049fe410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_4);
  uVar1 = param_6;
  FUN_1049fe5d4(param_1,param_2,param_3,param_6,param_7);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1049fe4b0; end: 1049fe503;  */

void FUN_1049fe4b0(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1049fe504; end: 1049fe53f; -[FBSDKCloseIcon init] */

void FUN_1049fe504(undefined8 param_1)

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



/* Entry: 1049fe540; end: 1049fe573;  */

void FUN_1049fe540(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1049fe574; end: 1049fe5c7;  */

void FUN_1049fe574(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  plVar4 = (long *)0x1130a41e8;
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1049a13f0();
    if (lVar3 != 0) {
      plVar4 = (long *)0x11309c968;
    }
  }
  lVar3 = *plVar4;
  if (lVar3 < 0) {
    lVar2 = (long)plVar4 + (long)(int)lVar3;
    _swift_getTypeByMangledNameInContext(lVar2,-(lVar3 >> 0x20),0,0);
    *plVar4 = lVar2;
    return;
  }
  return;
}



/* Entry: 1049fe5c8; end: 1049fe5d3;  */

void FUN_1049fe5c8(void)

{
  long lVar1;
  
  if (-1 < lRam00000001130a41e0) {
    return;
  }
  lVar1 = (long)(int)lRam00000001130a41e0 + 0x1130a41e0;
  _swift_getTypeByMangledNameInContext(lVar1,-(lRam00000001130a41e0 >> 0x20),0,0);
  lRam00000001130a41e0 = lVar1;
  return;
}



/* Entry: 1049fe5d4; end: 1049feb07;  */

long FUN_1049fe5d4(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  lVar1 = 0;
  _UIGraphicsBeginImageContextWithOptions();
  _UIGraphicsGetCurrentContext();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar8 = 0;
  }
  else {
    dVar12 = param_2;
    if (param_1 <= param_2) {
      dVar12 = param_1;
    }
    dVar9 = (param_1 - dVar12) * 0.5;
    dVar11 = (param_2 - dVar12) * 0.5;
    dVar13 = dVar12 / 12.0;
    lVar2 = lVar1;
    dVar15 = dVar12;
    _CGRectInset(dVar9,dVar11,dVar12,dVar12,dVar13,dVar13);
    _CGRectIntegral();
    func_0x0001028b6d3c();
    _swift_allocObject();
    *(undefined8 *)(lVar2 + 0x18) = 9;
    *(undefined8 *)(lVar2 + 0x10) = 4;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_allocWithZone();
    _objc_msgSend(0,0x3fe6666666666666);
    puVar4 = puVar3;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    *(undefined **)(lVar2 + 0x20) = puVar4;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_allocWithZone();
    _objc_msgSend(0,0x3fd3333333333333);
    puVar4 = puVar3;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    *(undefined **)(lVar2 + 0x28) = puVar4;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_allocWithZone();
    _objc_msgSend(0,0x3fb999999999999a);
    puVar4 = puVar3;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    *(undefined **)(lVar2 + 0x30) = puVar4;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_allocWithZone();
    _objc_msgSend(0,0);
    puVar4 = puVar3;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    *(undefined **)(lVar2 + 0x38) = puVar4;
    lVar8 = 0x1130a41d8;
    func_0x0001048db364();
    _swift_initStaticObject();
    lVar5 = lVar8;
    _swift_retain();
    _CGColorSpaceCreateDeviceGray();
    uVar6 = 0;
    func_0x000100ef8bfc(0);
    _objc_retain();
    lVar7 = lVar2;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar6);
    _swift_bridgeObjectRelease(lVar2);
    lVar2 = lVar5;
    _CGGradientCreateWithColors(lVar5,lVar7,lVar8 + 0x20);
    _swift_release(lVar8);
    _objc_release(lVar5);
    _objc_release(lVar7);
    if (lVar2 == 0) {
      lVar8 = 0;
    }
    else {
      dVar16 = dVar9;
      _CGRectGetMidX(dVar9,dVar11,dVar12,dVar15);
      dVar16 = dVar16 + dVar13 / -6.0;
      dVar14 = dVar9;
      _CGRectGetMidY(dVar9,dVar11,dVar12,dVar15);
      dVar14 = dVar13 * 0.25 + dVar14;
      dVar10 = dVar9;
      _CGRectGetWidth(dVar9,dVar11,dVar12,dVar15);
      _CGContextDrawRadialGradient
                (dVar16,dVar14,0,dVar16,dVar14,(dVar10 + dVar13 * -0.5) * 0.5,lVar1,lVar2,0);
      _CGRectInset(dVar9,dVar11,dVar12,dVar15,dVar13,dVar13);
      _CGRectIntegral();
      _objc_msgSend(param_3,PTR_s_setFill_112644918);
      _CGContextFillEllipseInRect(dVar9,dVar11,dVar12,dVar15,lVar1);
      _CGRectInset(dVar9,dVar11,dVar12,dVar15,dVar13,dVar13);
      _CGRectIntegral();
      _objc_msgSend(param_4,PTR_s_setFill_112644918);
      _CGContextFillEllipseInRect(dVar9,dVar11,dVar12,dVar15,lVar1);
      _CGRectInset(dVar9,dVar11,dVar12,dVar15,dVar13,dVar13);
      _CGRectIntegral();
      dVar11 = dVar13 * 5.0 * 0.25;
      dVar15 = dVar9;
      _CGRectGetMidY(dVar9);
      dVar15 = dVar15 + dVar11 * -0.5;
      _objc_msgSend(param_3,PTR_s_setFill_112644918);
      _CGContextTranslateCTM(param_1 * 0.5,param_2 * 0.5,lVar1);
      _CGContextRotateCTM(0x3fe921fb54442d18,lVar1);
      _CGContextTranslateCTM(param_1 * -0.5,param_2 * -0.5,lVar1);
      _CGContextFillRect(dVar9,dVar15,dVar12,dVar11,lVar1);
      _CGContextTranslateCTM(param_1 * 0.5,param_2 * 0.5,lVar1);
      _CGContextRotateCTM(0x3ff921fb54442d18,lVar1);
      _CGContextTranslateCTM(param_1 * -0.5,param_2 * -0.5,lVar1);
      lVar8 = lVar1;
      _CGContextFillRect(dVar9,dVar15,dVar12,dVar11,lVar1);
      _UIGraphicsGetImageFromCurrentImageContext();
      _objc_retainAutoreleasedReturnValue();
      _UIGraphicsEndImageContext();
      _objc_release(lVar5);
      lVar5 = lVar2;
    }
    _objc_release(lVar5);
    _objc_release(lVar1);
  }
  return lVar8;
}



/* Entry: 1049feb08; end: 1049feb27;  */

void FUN_1049feb08(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e9318);
  return;
}



/* Entry: 1049feb28; end: 1049feb2b;  */

undefined * FUN_1049feb28(double param_1,double param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_a0 [48];
  
  _CGAffineTransformMakeScale(auStack_a0,param_1 / 1366.0,param_2 / 1366.0);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  _objc_allocWithZone(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_msgSend();
  _objc_msgSend(0x40955551eb851eb8,0x4085555c28f5c28f);
  _objc_msgSend(0x4085555c28f5c28f,0,0x40955551eb851eb8,0x40731a3d70a3d70a,0x40908ec28f5c28f6,0,
                puVar1,PTR_s_addCurveToPoint_controlPoint1_co_11259b890);
  _objc_msgSend(0,0x4085555c28f5c28f,0x40731a3d70a3d70a,0,0,0x40731a3d70a3d70a,puVar1,
                PTR_s_addCurveToPoint_controlPoint1_co_11259b890);
  _objc_msgSend(0x4082000000000000,0x40953428f5c28f5c,0,0x408ffb47ae147ae1,0x406f347ae147ae14,
                0x40946751eb851eb8,puVar1,PTR_s_addCurveToPoint_controlPoint1_co_11259b890);
  _objc_msgSend(0x4082000000000000,0x408b800000000000,puVar1,PTR_s_addLineToPoint__11259bfd8);
  _objc_msgSend(0x40792ab851eb851f,0x408b800000000000,puVar1,PTR_s_addLineToPoint__11259bfd8);
  _objc_msgSend(0x40792ab851eb851f,0x4085555c28f5c28f,puVar1,PTR_s_addLineToPoint__11259bfd8);
  _objc_msgSend(0x4082000000000000,0x4085555c28f5c28f,puVar1,PTR_s_addLineToPoint__11259bfd8);
  _objc_msgSend(0x4082000000000000,0x4080a228f5c28f5c,puVar1,PTR_s_addLineToPoint__11259bfd8);
  _objc_msgSend(0x408a0ecccccccccd,0x4070aab851eb851f,0x4082000000000000,0x407692b851eb851f,
                0x40852f5c28f5c28f,0x4070aab851eb851f,puVar1,
                PTR_s_addCurveToPoint_controlPoint1_co_11259b890);
  _objc_msgSend(0x408ed55c28f5c28f,0x4071800000000000,0x408c6451eb851eb8,0x4070aab851eb851f,
                0x408ed55c28f5c28f,0x4071800000000000,puVar1,
                PTR_s_addCurveToPoint_controlPoint1_co_11259b890);
  _objc_msgSend(0x408ed55c28f5c28f,0x407c000000000000,puVar1,PTR_s_addLineToPoint__11259bfd8);
  _objc_msgSend(0x408c24a3d70a3d71,0x407c000000000000,puVar1,PTR_s_addLineToPoint__11259bfd8);
  _objc_msgSend(0x4088aaa3d70a3d71,0x408154e147ae147b,0x40897e3d70a3d70a,0x407c000000000000,
                0x4088aaa3d70a3d71,0x407f49eb851eb852,puVar1,
                PTR_s_addCurveToPoint_controlPoint1_co_11259b890);
  _objc_msgSend(0x4088aaa3d70a3d71,0x4085555c28f5c28f,puVar1,PTR_s_addLineToPoint__11259bfd8);
  _objc_msgSend(0x408e955c28f5c28f,0x4085555c28f5c28f,puVar1,PTR_s_addLineToPoint__11259bfd8);
  _objc_msgSend(0x408da33333333333,0x408b800000000000,puVar1,PTR_s_addLineToPoint__11259bfd8);
  _objc_msgSend(0x4088aaa3d70a3d71,0x408b800000000000,puVar1,PTR_s_addLineToPoint__11259bfd8);
  _objc_msgSend(0x4088aaa3d70a3d71,0x40953428f5c28f5c,puVar1,PTR_s_addLineToPoint__11259bfd8);
  _objc_msgSend(0x40955551eb851eb8,0x4085555c28f5c28f,0x40916ec28f5c28f6,0x40946751eb851eb8,
                0x40955551eb851eb8,0x408ffb47ae147ae1,puVar1,
                PTR_s_addCurveToPoint_controlPoint1_co_11259b890);
  _objc_msgSend(puVar1,PTR_s_closePath_1125ad0c8);
  _objc_msgSend(puVar1,PTR_s_applyTransform__11259fc38,auStack_a0);
  puVar2 = puVar1;
  _objc_msgSend(puVar1,PTR_s_CGPath_11254ddb0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 1049feb2c; end: 1049feb93; -[FBSDKLogo pathWith:] */

void FUN_1049feb2c(void)

{
  FUN_1049fec04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1049feb94; end: 1049febcf; -[FBSDKLogo init] */

void FUN_1049feb94(undefined8 param_1)

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



/* Entry: 1049febd0; end: 1049fec03;  */

void FUN_1049febd0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1049fec04; end: 1049fefa3;  */

undefined * FUN_1049fec04(double param_1,double param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_a0 [48];
  
  _CGAffineTransformMakeScale(auStack_a0,param_1 / 1366.0,param_2 / 1366.0);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  _objc_allocWithZone(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_msgSend();
  _objc_msgSend(0x40955551eb851eb8,0x4085555c28f5c28f);
  _objc_msgSend(0x4085555c28f5c28f,0,0x40955551eb851eb8,0x40731a3d70a3d70a,0x40908ec28f5c28f6,0,
                puVar1,PTR_s_addCurveToPoint_controlPoint1_co_11259b890);
  _objc_msgSend(0,0x4085555c28f5c28f,0x40731a3d70a3d70a,0,0,0x40731a3d70a3d70a,puVar1,
                PTR_s_addCurveToPoint_controlPoint1_co_11259b890);
  _objc_msgSend(0x4082000000000000,0x40953428f5c28f5c,0,0x408ffb47ae147ae1,0x406f347ae147ae14,
                0x40946751eb851eb8,puVar1,PTR_s_addCurveToPoint_controlPoint1_co_11259b890);
  _objc_msgSend(0x4082000000000000,0x408b800000000000,puVar1,PTR_s_addLineToPoint__11259bfd8);
  _objc_msgSend(0x40792ab851eb851f,0x408b800000000000,puVar1,PTR_s_addLineToPoint__11259bfd8);
  _objc_msgSend(0x40792ab851eb851f,0x4085555c28f5c28f,puVar1,PTR_s_addLineToPoint__11259bfd8);
  _objc_msgSend(0x4082000000000000,0x4085555c28f5c28f,puVar1,PTR_s_addLineToPoint__11259bfd8);
  _objc_msgSend(0x4082000000000000,0x4080a228f5c28f5c,puVar1,PTR_s_addLineToPoint__11259bfd8);
  _objc_msgSend(0x408a0ecccccccccd,0x4070aab851eb851f,0x4082000000000000,0x407692b851eb851f,
                0x40852f5c28f5c28f,0x4070aab851eb851f,puVar1,
                PTR_s_addCurveToPoint_controlPoint1_co_11259b890);
  _objc_msgSend(0x408ed55c28f5c28f,0x4071800000000000,0x408c6451eb851eb8,0x4070aab851eb851f,
                0x408ed55c28f5c28f,0x4071800000000000,puVar1,
                PTR_s_addCurveToPoint_controlPoint1_co_11259b890);
  _objc_msgSend(0x408ed55c28f5c28f,0x407c000000000000,puVar1,PTR_s_addLineToPoint__11259bfd8);
  _objc_msgSend(0x408c24a3d70a3d71,0x407c000000000000,puVar1,PTR_s_addLineToPoint__11259bfd8);
  _objc_msgSend(0x4088aaa3d70a3d71,0x408154e147ae147b,0x40897e3d70a3d70a,0x407c000000000000,
                0x4088aaa3d70a3d71,0x407f49eb851eb852,puVar1,
                PTR_s_addCurveToPoint_controlPoint1_co_11259b890);
  _objc_msgSend(0x4088aaa3d70a3d71,0x4085555c28f5c28f,puVar1,PTR_s_addLineToPoint__11259bfd8);
  _objc_msgSend(0x408e955c28f5c28f,0x4085555c28f5c28f,puVar1,PTR_s_addLineToPoint__11259bfd8);
  _objc_msgSend(0x408da33333333333,0x408b800000000000,puVar1,PTR_s_addLineToPoint__11259bfd8);
  _objc_msgSend(0x4088aaa3d70a3d71,0x408b800000000000,puVar1,PTR_s_addLineToPoint__11259bfd8);
  _objc_msgSend(0x4088aaa3d70a3d71,0x40953428f5c28f5c,puVar1,PTR_s_addLineToPoint__11259bfd8);
  _objc_msgSend(0x40955551eb851eb8,0x4085555c28f5c28f,0x40916ec28f5c28f6,0x40946751eb851eb8,
                0x40955551eb851eb8,0x408ffb47ae147ae1,puVar1,
                PTR_s_addCurveToPoint_controlPoint1_co_11259b890);
  _objc_msgSend(puVar1,PTR_s_closePath_1125ad0c8);
  _objc_msgSend(puVar1,PTR_s_applyTransform__11259fc38,auStack_a0);
  puVar2 = puVar1;
  _objc_msgSend(puVar1,PTR_s_CGPath_11254ddb0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 1049fefa4; end: 1049fefc3;  */

void FUN_1049fefa4(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e93c8);
  return;
}



/* Entry: 1049fefc4; end: 1049ff00f; -[FBSDKFeatureManager featureManagerPrefix] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049fefc4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130a4220);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130a4220))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


