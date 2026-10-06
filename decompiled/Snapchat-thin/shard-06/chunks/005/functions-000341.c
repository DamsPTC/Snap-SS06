/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10499d1dc; end: 10499d233;  */

void FUN_10499d1dc(undefined8 param_1,long param_2,long param_3)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_2);
  }
  (**(code **)(param_3 + 0x10))(param_3,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10499d234; end: 10499d27b; -[FBSDKAppLinkResolver cachedAppLinks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10499d234(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a2990;
  _swift_beginAccess(param_1 + _DAT_1130a2990,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10499d27c; end: 10499d2bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10499d27c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a2990;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2990,auStack_38,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 10499d2bc; end: 10499d31f; -[FBSDKAppLinkResolver setCachedAppLinks:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10499d2bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a2990;
  _swift_beginAccess(param_1 + _DAT_1130a2990,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10499d320; end: 10499d3b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10499d320(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a2990;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2990,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _objc_release(uVar2);
  return;
}



/* Entry: 10499d3b8; end: 10499d4eb;  */

void FUN_10499d3b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uStack_70;
  
  lVar1 = 0;
  uStack_70 = param_2;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar1 + -8);
  lVar8 = *(long *)(lVar7 + 0x40);
  lVar6 = (long)&uStack_70 - (lVar8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x1130a2998;
  func_0x0001048db364();
  uVar9 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar5 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  pcVar4 = *(code **)(lVar7 + 0x10);
  (*pcVar4)(lVar2 + uVar5,param_1,lVar1);
  (*pcVar4)(lVar6,param_1,lVar1);
  puVar3 = &UNK_1107ba520;
  _swift_allocObject(&UNK_1107ba520,uVar5 + lVar8,uVar9 | 7);
  *(undefined8 *)(puVar3 + 0x10) = uStack_70;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  (**(code **)(lVar7 + 0x20))(puVar3 + uVar5,lVar6,lVar1);
  _swift_retain(param_3);
  FUN_10499d580(lVar2,FUN_10499d57c,puVar3);
  _swift_release(puVar3);
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 10499d4ec; end: 10499d57b;  */

void FUN_10499d4ec(long param_1,ulong param_2,code *param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_2;
    _swift_bridgeObjectRetain();
    func_0x000101c17870();
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x38) + param_5 * 8);
      _objc_retain(uVar2);
    }
    _swift_bridgeObjectRelease(param_1);
  }
  (*param_3)(uVar2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10499d57c; end: 10499d57f;  */

void FUN_10499d57c(long param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar2 = unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff));
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = param_2;
    _swift_bridgeObjectRetain();
    func_0x000101c17870();
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar2 * 8);
      _objc_retain(uVar4);
    }
    _swift_bridgeObjectRelease(param_1);
  }
  (*pcVar1)(uVar4,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10499d580; end: 10499d927;  */

/* WARNING: Removing unreachable block (ram,0x00010499d914) */
/* WARNING: Removing unreachable block (ram,0x00010499d5d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10499d580(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined *puStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  
  _swift_getObjectType();
  FUN_1049b1a14(&puStack_b0);
  lVar2 = lStack_a8;
  puVar1 = puStack_b0;
  lVar3 = lStack_a8;
  _objc_msgSend(lStack_a8,PTR_s_clientToken_1125acf18);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    _swift_getObjCClassFromMetadata();
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    if (pcStack_a0 == (code *)0x0) {
      puVar4 = PTR_PTR_1126add38;
      _swift_getInitializedObjCClass(PTR_PTR_1126add38);
      uVar5 = 0xd000000000000045;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000045,0x800000010f226160);
      _objc_msgSend(puVar4,PTR_s_singleShotLogEntry_logEntry__11266cd78,
                    &PTR____CFConstantStringClassReference_110da4eb8,uVar5);
    }
  }
  _objc_release();
  puVar4 = &UNK_1107ba548;
  _swift_allocObject(&UNK_1107ba548,0x18,7);
  puVar7 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined **)(puVar4 + 0x10) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar6 = &UNK_1107ba570;
  _swift_allocObject(&UNK_1107ba570,0x18,7);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(puVar6 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar3 = _DAT_1130a2990;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2990,auStack_80,0,0);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar3);
  _swift_retain(puVar7);
  _swift_retain(puVar8);
  _objc_retain(uVar5);
  _objc_sync_enter();
  FUN_10499dac8(param_1);
  _objc_sync_exit(uVar5);
  _objc_release(uVar5);
  if (*(long *)(*(long *)(puVar6 + 0x10) + 0x10) == 0) {
    uVar5 = *(undefined8 *)(puVar4 + 0x10);
    _swift_bridgeObjectRetain(uVar5);
    (*param_2)();
    _swift_unknownObjectRelease(lStack_a8);
    _swift_unknownObjectRelease(puStack_b0);
    _swift_release(puVar4);
    _swift_release(puVar6);
    _swift_bridgeObjectRelease(uVar5);
  }
  else {
    uVar5 = 0;
    __s10Foundation3URLVMa(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,uVar5);
    _objc_msgSend(puStack_b0,PTR_s_requestForURLs__112525288,param_1);
    puVar7 = puStack_b0;
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar8 = &UNK_1107ba598;
    _swift_allocObject(&UNK_1107ba598,0x38,7);
    *(code **)(puVar8 + 0x10) = param_2;
    *(undefined8 *)(puVar8 + 0x18) = param_3;
    *(undefined **)(puVar8 + 0x20) = puVar6;
    *(long *)(puVar8 + 0x28) = unaff_x20;
    *(undefined **)(puVar8 + 0x30) = puVar4;
    uStack_90 = 0x1049a013c;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    lStack_a8 = 0x42000000;
    pcStack_a0 = FUN_1048e305c;
    puStack_98 = &UNK_1107ba5b0;
    ppuVar9 = &puStack_b0;
    puStack_88 = puVar8;
    __Block_copy(ppuVar9);
    puVar8 = puStack_88;
    _swift_retain(param_3);
    _swift_retain(puVar6);
    _objc_retain();
    _swift_retain(puVar4);
    _swift_release(puVar8);
    puVar8 = puVar7;
    _objc_msgSend(puVar7,PTR_s_startWithCompletion__1126720c8,ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    __Block_release(ppuVar9);
    _swift_unknownObjectRelease(lVar2);
    _swift_unknownObjectRelease(puVar1);
    _swift_release(puVar4);
    _swift_release(puVar6);
    _swift_unknownObjectRelease(puVar7);
    _swift_unknownObjectRelease(puVar8);
  }
  return;
}



/* Entry: 10499d928; end: 10499dac7; -[FBSDKAppLinkResolver appLinkFromURL:handler:] */

void FUN_10499d928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = 0;
  uStack_68 = param_1;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar1 + -8);
  lVar11 = *(long *)(lVar10 + 0x40);
  uVar6 = lVar11 + 0xfU & 0xfffffffffffffff0;
  puVar9 = auStack_70 + -uVar6;
  lVar8 = (long)puVar9 - uVar6;
  __Block_copy();
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar8,param_3);
  puVar2 = &UNK_1107ba6a0;
  _swift_allocObject(&UNK_1107ba6a0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  lVar3 = 0x1130a2998;
  func_0x0001048db364();
  uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar12 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
  _swift_allocObject();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  pcVar7 = *(code **)(lVar10 + 0x10);
  (*pcVar7)(lVar3 + uVar12,lVar8,lVar1);
  (*pcVar7)(puVar9,lVar8,lVar1);
  puVar4 = &UNK_1107ba6c8;
  _swift_allocObject(&UNK_1107ba6c8,uVar12 + lVar11,uVar6 | 7);
  *(code **)(puVar4 + 0x10) = FUN_1049a0418;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  (**(code **)(lVar10 + 0x20))(puVar4 + uVar12,puVar9,lVar1);
  uVar5 = uStack_68;
  _objc_retain(uStack_68);
  _swift_retain(puVar2);
  FUN_10499d580(lVar3,FUN_1049a0534,puVar4);
  _swift_release(puVar2);
  _objc_release(uVar5);
  _swift_release(puVar4);
  _swift_bridgeObjectRelease(lVar3);
  (**(code **)(lVar10 + 8))(lVar8,lVar1);
  return;
}



/* Entry: 10499dac8; end: 10499df13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10499dac8(long param_1,long param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  code *pcVar15;
  undefined1 *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  code *pcVar22;
  long lVar23;
  long lVar24;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  undefined8 uStack_58;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar1 = _DAT_1130a2990;
  lVar12 = *(long *)(lVar2 + -8);
  uVar13 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar16 = &stack0xfffffffffffffee0 + -uVar13;
  lVar17 = (long)puVar16 - uVar13;
  lVar18 = lVar17 - uVar13;
  uVar13 = lVar18 - uVar13;
  lVar24 = *(long *)(param_1 + 0x10);
  if (lVar24 != 0) {
    uVar14 = (ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
             ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff);
    param_1 = param_1 + uVar14;
    _swift_beginAccess(param_2 + _DAT_1130a2990,auStack_80,0,0);
    lVar23 = *(long *)(lVar12 + 0x48);
    pcVar15 = *(code **)(lVar12 + 0x10);
    do {
      (*pcVar15)(uVar13,param_1,lVar2);
      lVar20 = *(long *)(param_2 + lVar1);
      (*pcVar15)(lVar18,uVar13,lVar2);
      _objc_retain();
      lVar4 = lVar18;
      __ss38_bridgeAnythingNonVerbatimToObjectiveCyyXlxnlF(lVar18,lVar2);
      lVar5 = lVar20;
      _objc_msgSend(lVar20,PTR_s___swift_objectForKeyedSubscript__11254e8a0,lVar4);
      _objc_retainAutoreleasedReturnValue();
      _swift_unknownObjectRelease(lVar4);
      _objc_release(lVar20);
      if (lVar5 == 0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,lVar5);
        _swift_unknownObjectRelease(lVar5);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) {
        func_0x0001049a0164(&uStack_a0,0x11309c428);
LAB_10499dd98:
        (*pcVar15)(lVar17,uVar13,lVar2);
        uVar19 = *param_4;
        uVar10 = uVar19;
        _swift_isUniquelyReferenced_nonNull_native();
        *param_4 = uVar19;
        uVar8 = uVar19;
        if ((uVar10 & 1) == 0) {
          uVar8 = 0;
          FUN_10499fec4(0,*(long *)(uVar19 + 0x10) + 1,1,uVar19,0x1130a2998,
                        PTR___s10Foundation3URLVMa_110350988);
          *param_4 = uVar8;
        }
        uVar10 = *(ulong *)(uVar8 + 0x10);
        uVar19 = uVar8;
        if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar10) {
          uVar19 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
          FUN_10499fec4(uVar19,uVar10 + 1,1,uVar8,0x1130a2998,PTR___s10Foundation3URLVMa_110350988);
          *param_4 = uVar19;
        }
        *(ulong *)(uVar19 + 0x10) = uVar10 + 1;
        (**(code **)(lVar12 + 0x20))(uVar19 + uVar14 + uVar10 * lVar23,lVar17,lVar2);
        pcVar22 = *(code **)(lVar12 + 8);
      }
      else {
        uVar6 = 0;
        FUN_1049952e0(0);
        puVar7 = &uStack_58;
        _swift_dynamicCast(puVar7,&uStack_a0,PTR___sypN_11034f1a8 + 8,uVar6,6);
        uVar6 = uStack_58;
        if (((ulong)puVar7 & 1) == 0) goto LAB_10499dd98;
        uVar10 = uVar13;
        (*pcVar15)(puVar16,uVar13,lVar2);
        uVar8 = *param_3;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar11 = (uint)uVar8;
        uVar21 = *param_3;
        *param_3 = 0x8000000000000000;
        puVar9 = puVar16;
        uStack_a0 = uVar21;
        func_0x000101c17870();
        uVar19 = (ulong)~(uint)uVar10 & 1;
        if (SCARRY8(*(long *)(uVar21 + 0x10),uVar19)) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x10499df04);
          (*pcVar15)();
        }
        if (*(long *)(uVar21 + 0x18) < (long)(*(long *)(uVar21 + 0x10) + uVar19)) {
          func_0x0001049a7054();
          puVar9 = puVar16;
          func_0x000101c17870();
          if (((uint)uVar10 & 1) != (uVar11 & 1)) {
            __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(lVar2);
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x10499df14);
            (*pcVar15)();
          }
joined_r0x00010499ded0:
          if ((uVar10 & 1) != 0) goto LAB_10499dbbc;
LAB_10499de08:
          uVar10 = uStack_a0;
          lVar4 = uStack_a0 + ((ulong)puVar9 >> 6) * 8;
          *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << ((ulong)puVar9 & 0x3f);
          (*pcVar15)(*(long *)(uStack_a0 + 0x30) + (long)puVar9 * lVar23,puVar16,lVar2);
          *(undefined8 *)(*(long *)(uVar10 + 0x38) + (long)puVar9 * 8) = uVar6;
          if (SCARRY8(*(long *)(uVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x10499df08);
            (*pcVar15)();
          }
          *(long *)(uVar10 + 0x10) = *(long *)(uVar10 + 0x10) + 1;
        }
        else {
          if ((uVar8 & 1) == 0) {
            FUN_1049a6884();
            goto joined_r0x00010499ded0;
          }
          if ((uVar10 & 1) == 0) goto LAB_10499de08;
LAB_10499dbbc:
          uVar10 = uStack_a0;
          uVar3 = *(undefined8 *)(*(long *)(uStack_a0 + 0x38) + (long)puVar9 * 8);
          *(undefined8 *)(*(long *)(uStack_a0 + 0x38) + (long)puVar9 * 8) = uVar6;
          _objc_release(uVar3);
        }
        pcVar22 = *(code **)(lVar12 + 8);
        (*pcVar22)(puVar16,lVar2);
        *param_3 = uVar10;
      }
      (*pcVar22)(uVar13,lVar2);
      param_1 = param_1 + lVar23;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  return;
}



/* Entry: 10499df14; end: 10499eedb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10499df14(undefined8 param_1,undefined8 param_2,long param_3,code *param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  code *pcVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long lStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [24];
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  long lStack_70;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar18 = *(long *)(lVar2 + -8);
  uVar10 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
  uVar17 = (long)&lStack_130 - uVar10;
  if (param_3 == 0) {
    lStack_f0 = (uVar17 - uVar10) - uVar10;
    lStack_e8 = lVar2;
    FUN_1049a04dc(param_2,auStack_88,0x11309c428);
    if (lStack_70 == 0) {
      func_0x0001049a0164(auStack_88,0x11309c428);
    }
    else {
      uVar6 = 0x11309d898;
      func_0x0001048db364(0x11309d898);
      puVar3 = auStack_a0;
      _swift_dynamicCast(puVar3,auStack_88,PTR___sypN_11034f1a8 + 8,uVar6,6);
      if (((ulong)puVar3 & 1) != 0) {
        uStack_f8 = auStack_a0[0];
        _swift_beginAccess(param_6 + 0x10,auStack_88,0,0);
        lVar13 = _DAT_1130a2990;
        lVar4 = *(long *)(param_6 + 0x10);
        lVar2 = *(long *)(lVar4 + 0x10);
        if (lVar2 != 0) {
          lVar5 = lVar4 + ((ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff));
          lStack_130 = lVar4;
          uStack_128 = param_5;
          pcStack_120 = param_4;
          _swift_bridgeObjectRetain();
          lStack_100 = lVar13;
          _swift_beginAccess(param_7 + lVar13,auStack_a0,0,0);
          lStack_e0 = *(long *)(lVar18 + 0x48);
          pcStack_d8 = *(code **)(lVar18 + 0x10);
          lVar13 = lStack_f0;
          lVar4 = lStack_e8;
          lStack_118 = uVar17 - uVar10;
          lStack_110 = param_7;
          lStack_108 = lVar18;
          do {
            pcVar15 = pcStack_d8;
            lVar12 = lStack_110;
            lVar18 = lStack_118;
            lStack_d0 = lVar5;
            lStack_c8 = lVar2;
            (*pcStack_d8)(lVar13,lVar5,lVar4);
            lVar5 = lVar13;
            func_0x00010499e3a0(lVar13,uStack_f8);
            lVar2 = lStack_100;
            uVar6 = *(undefined8 *)(lVar12 + lStack_100);
            _objc_retain(uVar6);
            _objc_sync_enter();
            uVar16 = *(undefined8 *)(lVar12 + lVar2);
            (*pcVar15)(lVar18,lVar13,lVar4);
            _objc_retain(uVar16);
            __ss38_bridgeAnythingNonVerbatimToObjectiveCyyXlxnlF(lVar18,lVar4);
            _objc_msgSend(uVar16,PTR_s___swift_setObject_forKeyedSubscr_11254e8a8,lVar5,lVar18);
            _objc_release(uVar16);
            _swift_unknownObjectRelease(lVar18);
            _objc_sync_exit(uVar6);
            _objc_release(uVar6);
            (*pcVar15)(uVar17,lVar13,lVar4);
            puVar9 = auStack_b8;
            _swift_beginAccess(param_8 + 0x10,puVar9,0x21,0);
            _objc_retain();
            uVar7 = *(ulong *)(param_8 + 0x10);
            _swift_isUniquelyReferenced_nonNull_native();
            uVar8 = (uint)uVar7;
            lVar13 = *(long *)(param_8 + 0x10);
            *(undefined8 *)(param_8 + 0x10) = 0x8000000000000000;
            uVar10 = uVar17;
            lStack_c0 = lVar13;
            func_0x000101c17870();
            lVar2 = lStack_c8;
            lVar18 = lStack_108;
            uVar11 = (ulong)~(uint)puVar9 & 1;
            if (SCARRY8(*(long *)(lVar13 + 0x10),uVar11)) {
                    /* WARNING: Does not return */
              pcVar15 = (code *)SoftwareBreakpoint(1,0x10499e390);
              (*pcVar15)();
            }
            if (*(long *)(lVar13 + 0x18) < (long)(*(long *)(lVar13 + 0x10) + uVar11)) {
              func_0x0001049a7054();
              uVar10 = uVar17;
              func_0x000101c17870();
              lVar18 = lStack_108;
              lVar2 = lStack_c8;
              if (((uint)puVar9 & 1) != (uVar8 & 1)) {
                __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(lStack_e8)
                ;
                    /* WARNING: Does not return */
                pcVar15 = (code *)SoftwareBreakpoint(1,0x10499e3a0);
                (*pcVar15)();
              }
joined_r0x00010499e324:
              if (((ulong)puVar9 & 1) != 0) goto LAB_10499e0d0;
LAB_10499e2c4:
              lVar12 = lStack_c0;
              lVar4 = lStack_e8;
              lVar13 = lStack_c0 + (uVar10 >> 6) * 8;
              *(ulong *)(lVar13 + 0x40) = *(ulong *)(lVar13 + 0x40) | 1L << (uVar10 & 0x3f);
              (*pcStack_d8)(*(long *)(lStack_c0 + 0x30) + uVar10 * lStack_e0,uVar17,lStack_e8);
              *(long *)(*(long *)(lVar12 + 0x38) + uVar10 * 8) = lVar5;
              if (SCARRY8(*(long *)(lVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar15 = (code *)SoftwareBreakpoint(1,0x10499e394);
                (*pcVar15)();
              }
              *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + 1;
            }
            else {
              if ((uVar7 & 1) == 0) {
                FUN_1049a6884();
                goto joined_r0x00010499e324;
              }
              if (((ulong)puVar9 & 1) == 0) goto LAB_10499e2c4;
LAB_10499e0d0:
              lVar12 = lStack_c0;
              uVar6 = *(undefined8 *)(*(long *)(lStack_c0 + 0x38) + uVar10 * 8);
              *(long *)(*(long *)(lStack_c0 + 0x38) + uVar10 * 8) = lVar5;
              _objc_release(uVar6);
              lVar4 = lStack_e8;
            }
            pcVar15 = *(code **)(lVar18 + 8);
            (*pcVar15)(uVar17,lVar4);
            *(long *)(param_8 + 0x10) = lVar12;
            _swift_endAccess(auStack_b8);
            _objc_release(lVar5);
            lVar13 = lStack_f0;
            (*pcVar15)(lStack_f0,lVar4);
            lVar5 = lStack_d0 + lStack_e0;
            lVar2 = lVar2 + -1;
          } while (lVar2 != 0);
          _swift_bridgeObjectRelease(lStack_130);
          param_4 = pcStack_120;
        }
        _swift_bridgeObjectRelease(uStack_f8);
        _swift_beginAccess(param_8 + 0x10,auStack_b8,0,0);
        puVar14 = *(undefined **)(param_8 + 0x10);
        _swift_bridgeObjectRetain(puVar14);
        goto LAB_10499dfb8;
      }
    }
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  FUN_10499c020();
  _swift_release(puVar1);
LAB_10499dfb8:
  (*param_4)();
  _swift_bridgeObjectRelease(puVar14);
  return;
}



/* Entry: 10499eedc; end: 10499ef77; -[FBSDKAppLinkResolver appLinksFrom:handler:] */

void FUN_10499eedc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  __Block_copy();
  uVar1 = 0;
  __s10Foundation3URLVMa(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  puVar2 = &UNK_1107ba678;
  _swift_allocObject(&UNK_1107ba678,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  _objc_retain(param_1);
  FUN_10499d580(param_3,FUN_1049a03cc,puVar2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 10499ef78; end: 10499f00f;  */

void FUN_10499ef78(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  __s10Foundation3URLVMa(0);
  uVar2 = 0;
  FUN_1049952e0(0);
  uVar3 = uVar2;
  FUN_1049a03d4();
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF(param_1,uVar1,uVar2,uVar3);
  if (param_2 != 0) {
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_2);
  }
  (**(code **)(param_3 + 0x10))(param_3,param_1,param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10499f010; end: 10499f023;  */

void FUN_10499f010(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  
  uVar3 = 0x11309c420;
  lVar5 = *(long *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,lVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10499f124);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar6 + lVar5)) {
    FUN_10499fca8();
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (lVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10499f128);
      (*pcVar1)();
    }
  }
  else {
    lVar6 = *(long *)(lVar4 + 0x10);
    if ((long)((*(ulong *)(lVar4 + 0x18) >> 1) - lVar6) < lVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10499f12c);
      (*pcVar1)();
    }
    func_0x0001048db364(0x11309c420);
    _swift_arrayInitWithCopy(lVar4 + lVar6 * 8 + 0x20,param_1 + 0x20,lVar5,uVar3);
    _swift_bridgeObjectRelease(param_1);
    if (lVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10499f130);
        (*pcVar1)();
      }
      *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + lVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 10499f024; end: 10499f12f;  */

void FUN_10499f024(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar3 = *unaff_x20;
  lVar5 = *(long *)(lVar3 + 0x10);
  if (SCARRY8(lVar5,lVar4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10499f124);
    (*pcVar1)();
  }
  lVar2 = lVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) || ((long)(*(ulong *)(lVar3 + 0x18) >> 1) < lVar5 + lVar4)) {
    FUN_10499fca8();
    lVar5 = *(long *)(param_1 + 0x10);
    lVar3 = lVar2;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x10);
  }
  if (lVar5 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (lVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10499f128);
      (*pcVar1)();
    }
  }
  else {
    lVar5 = *(long *)(lVar3 + 0x10);
    if ((long)((*(ulong *)(lVar3 + 0x18) >> 1) - lVar5) < lVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10499f12c);
      (*pcVar1)();
    }
    func_0x0001048db364(param_3);
    _swift_arrayInitWithCopy(lVar3 + lVar5 * 8 + 0x20,param_1 + 0x20,lVar4,param_3);
    _swift_bridgeObjectRelease(param_1);
    if (lVar4 != 0) {
      if (SCARRY8(*(long *)(lVar3 + 0x10),lVar4)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10499f130);
        (*pcVar1)();
      }
      *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + lVar4;
    }
  }
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 10499f130; end: 10499f217;  */

void FUN_10499f130(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar3 = *unaff_x20;
  lVar5 = *(long *)(lVar3 + 0x10);
  if (SCARRY8(lVar5,lVar4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10499f20c);
    (*pcVar1)();
  }
  lVar2 = lVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) || ((long)(*(ulong *)(lVar3 + 0x18) >> 1) < lVar5 + lVar4)) {
    FUN_10499fdd4();
    lVar5 = *(long *)(param_1 + 0x10);
    lVar3 = lVar2;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x10);
  }
  if (lVar5 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (lVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10499f210);
      (*pcVar1)();
    }
  }
  else {
    if ((long)((*(ulong *)(lVar3 + 0x18) >> 1) - *(long *)(lVar3 + 0x10)) < lVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10499f214);
      (*pcVar1)();
    }
    _memcpy(lVar3 + *(long *)(lVar3 + 0x10) + 0x20,param_1 + 0x20,lVar4);
    _swift_bridgeObjectRelease(param_1);
    if (lVar4 != 0) {
      if (SCARRY8(*(long *)(lVar3 + 0x10),lVar4)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10499f218);
        (*pcVar1)();
      }
      *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + lVar4;
    }
  }
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 10499f218; end: 10499f2ef; -[FBSDKAppLinkResolver buildAppLinkFor:result:] */

void FUN_10499f218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar4 = &stack0xffffffffffffffc0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar4,param_3);
  uVar2 = 0x11309c420;
  func_0x0001048db364(0x11309c420);
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_4,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
  _objc_retain(param_1);
  puVar3 = puVar4;
  func_0x00010499e3a0(puVar4,param_4);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_4);
  (**(code **)(lVar5 + 8))(puVar4,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10499f2f0; end: 10499f30f;  */

void FUN_10499f2f0(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 10499f310; end: 10499f377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10499f310(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_getObjectType();
  lVar1 = _DAT_1130a2990;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_allocWithZone();
  _objc_msgSend();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10499f378; end: 10499f3df; -[FBSDKAppLinkResolver init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10499f378(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar1 = _DAT_1130a2990;
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_allocWithZone();
  _objc_msgSend();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10499f3e0; end: 10499f413;  */

void FUN_10499f3e0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10499f414; end: 10499f4cb; -[FBSDKAppLinkResolver .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10499f414(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130a2990));
  return;
}



/* Entry: 10499f4cc; end: 10499f51b;  */

undefined8 FUN_10499f4cc(undefined8 param_1,undefined8 param_2)

{
  _swift_getObjectType();
  _swift_getObjectType(param_2);
  return param_1;
}



/* Entry: 10499f51c; end: 10499f633;  */

undefined8 FUN_10499f51c(void)

{
  return 0x113815840;
}



/* Entry: 10499f634; end: 10499f70f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10499f634(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lStack_30;
  long lStack_28;
  
  plVar6 = &lStack_30;
  puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_msgSend();
  _objc_release(puVar2);
  lVar4 = 0;
  FUN_1049a0bc8();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined **)(lVar5 + _DAT_1130a2a28) = puVar3;
  lStack_30 = lVar5;
  lStack_28 = lVar4;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  if (lRam000000011309ff80 != -1) {
    _swift_once(0x11309ff80,FUN_1049e4894);
  }
  uVar1 = uRam00000001130a3c58;
  uVar7 = 0;
  FUN_10490b480();
  uRam0000000113815860 = uVar1;
  puRam0000000113815858 = (undefined1 *)plVar6;
  uRam0000000113815868 = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 10499f710; end: 10499f8d7;  */

undefined8 FUN_10499f710(void)

{
  if (lRam000000011309fe20 != -1) {
    _swift_once(0x11309fe20,FUN_10499f634);
  }
  return 0x113815858;
}



/* Entry: 10499f8d8; end: 10499fa47;  */

void FUN_10499f8d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815840,auStack_38,0,0);
  uVar2 = uRam0000000113815850;
  uVar1 = uRam0000000113815848;
  *param_1 = uRam0000000113815840;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  func_0x0001049a01a0();
  return;
}



/* Entry: 10499fa48; end: 10499fb77;  */

ulong FUN_10499fa48(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xfffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10499fb78);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xfffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar2,uVar4);
  }
  uVar3 = uVar2;
  func_0x0001049d7218(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10499fb74);
      (*pcVar1)();
    }
    FUN_1049a0040(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      _memmove(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar3;
}



/* Entry: 10499fb78; end: 10499fb8b;  */

undefined * FUN_10499fb78(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = (undefined *)0x1130a2a18;
  uVar4 = 0x11309c408;
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10499fdd4);
        (*pcVar1)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  if (uVar5 == 0) {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    func_0x0001048db364();
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar7 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar7 = puVar3 + -0x20;
    }
    *(ulong *)(puVar2 + 0x10) = uVar6;
    *(long *)(puVar2 + 0x18) = ((long)puVar7 >> 3) << 1;
    puVar7 = puVar2;
  }
  puVar2 = puVar7 + 0x20;
  puVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x0001048db364(0x11309c408);
    _swift_arrayInitWithCopy(puVar2,puVar3,uVar6,uVar4);
  }
  else {
    if (puVar7 != param_4 || puVar3 + uVar6 * 8 <= puVar2) {
      _memmove(puVar2,puVar3,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar7;
}



/* Entry: 10499fb8c; end: 10499fca7;  */

undefined * FUN_10499fb8c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10499fca8);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  if (uVar5 == 0) {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    puVar3 = (undefined *)0x1130a2a20;
    func_0x0001048db364();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&UNK_1107bad10);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 10499fca8; end: 10499fdd3;  */

undefined *
FUN_10499fca8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10499fdd4);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  if (uVar4 == 0) {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    func_0x0001048db364();
    _swift_allocObject();
    puVar3 = param_5;
    _malloc_size();
    puVar6 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar6 = puVar3 + -0x20;
    }
    *(ulong *)(param_5 + 0x10) = uVar5;
    *(long *)(param_5 + 0x18) = ((long)puVar6 >> 3) << 1;
    puVar6 = param_5;
  }
  puVar3 = puVar6 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x0001048db364(param_6);
    _swift_arrayInitWithCopy(puVar3,puVar1,uVar5,param_6);
  }
  else {
    if (puVar6 != param_4 || puVar1 + uVar5 * 8 <= puVar3) {
      _memmove(puVar3,puVar1,uVar5 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar6;
}



/* Entry: 10499fdd4; end: 10499fec3;  */

undefined * FUN_10499fdd4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10499fec4);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  if (uVar5 == 0) {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    puVar3 = (undefined *)0x1130a2a10;
    func_0x0001048db364();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,uVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 10499fec4; end: 1049a003f;  */

undefined *
FUN_10499fec4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             code *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1049a0040);
        (*pcVar4)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    func_0x0001048db364();
    lVar5 = 0;
    (*param_6)();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(param_5,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = param_5;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1049a0038);
      (*pcVar4)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1049a003c);
      (*pcVar4)();
    }
    lVar3 = 0;
    if (lVar10 != 0) {
      lVar3 = lVar5 / lVar10;
    }
    *(ulong *)(param_5 + 0x10) = uVar9;
    *(long *)(param_5 + 0x18) = lVar3 << 1;
    puVar6 = param_5;
  }
  lVar5 = 0;
  (*param_6)();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar1 = puVar6 + uVar7;
  puVar2 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar2,uVar9,lVar5);
  }
  else {
    if ((puVar6 < param_4) || (puVar2 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar1))
    {
      _swift_arrayInitWithTakeFrontToBack(puVar1,puVar2,uVar9);
    }
    else if (puVar6 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar1,puVar2,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar6;
}



/* Entry: 1049a0040; end: 1049a0137;  */

long FUN_1049a0040(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1049a0134);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1049a0138);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1049a13f0(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        __ss12_ArrayBufferV18_typeCheckSlowPathyySiF(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1049a13f0(0);
      _swift_arrayInitWithCopy
                (param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,param_2 - param_1,uVar4)
      ;
      _swift_bridgeObjectRelease(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1049a0130);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if ((long)param_4 < 0) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1049a0138; end: 1049a014b;  */

void FUN_1049a0138(void)

{
  return;
}



/* Entry: 1049a014c; end: 1049a03cb;  */

void FUN_1049a014c(long param_1,long param_2)

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



/* Entry: 1049a03cc; end: 1049a03d3;  */

void FUN_1049a03cc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = 0;
  __s10Foundation3URLVMa(0);
  uVar2 = 0;
  FUN_1049952e0(0);
  uVar3 = uVar2;
  FUN_1049a03d4();
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF(param_1,uVar1,uVar2,uVar3);
  if (param_2 != 0) {
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_2);
  }
  (**(code **)(lVar4 + 0x10))(lVar4,param_1,param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1049a03d4; end: 1049a0417;  */

void FUN_1049a03d4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e092e0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  __s10Foundation3URLVMa(0xff);
  puVar2 = PTR___s10Foundation3URLVSHAAMc_1103509a0;
  _swift_getWitnessTable(PTR___s10Foundation3URLVSHAAMc_1103509a0,uVar1);
  puRam0000000112e092e0 = puVar2;
  return;
}



/* Entry: 1049a0418; end: 1049a041f;  */

void FUN_1049a0418(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1049a0420; end: 1049a048b;  */

void FUN_1049a0420(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1049a048c; end: 1049a04db;  */

void FUN_1049a048c(long param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar2 = unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff));
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = param_2;
    _swift_bridgeObjectRetain();
    func_0x000101c17870();
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar2 * 8);
      _objc_retain(uVar4);
    }
    _swift_bridgeObjectRelease(param_1);
  }
  (*pcVar1)(uVar4,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1049a04dc; end: 1049a0533;  */

undefined8 FUN_1049a04dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x0001048db364();
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1049a0534; end: 1049a0537;  */

void FUN_1049a0534(long param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar2 = unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff));
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = param_2;
    _swift_bridgeObjectRetain();
    func_0x000101c17870();
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar2 * 8);
      _objc_retain(uVar4);
    }
    _swift_bridgeObjectRelease(param_1);
  }
  (*pcVar1)(uVar4,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1049a0538; end: 1049a0583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a0538(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130a2a28) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1049a0584; end: 1049a0637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1049a0584(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = 0x11309c500;
  func_0x0001048db364();
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = 0x736f69;
  *(undefined8 *)(lVar1 + 0x28) = 0xe300000000000000;
  if (*(long *)(unaff_x20 + _DAT_1130a2a28) == 1) {
    uVar2 = 0xe400000000000000;
    uVar3 = 0x64617069;
  }
  else {
    if (*(long *)(unaff_x20 + _DAT_1130a2a28) != 0) {
      return lVar1;
    }
    uVar2 = 0xe600000000000000;
    uVar3 = 0x656e6f687069;
  }
  lVar1 = 1;
  func_0x0001000d182c(1,2,1);
  *(undefined8 *)(lVar1 + 0x10) = 2;
  *(undefined8 *)(lVar1 + 0x30) = uVar3;
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  return lVar1;
}



/* Entry: 1049a0638; end: 1049a067f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049a0638(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (*(long *)(unaff_x20 + _DAT_1130a2a28) == 0) {
    auVar2._8_8_ = 0xe600000000000000;
    auVar2._0_8_ = 0x656e6f687069;
    return auVar2;
  }
  if (*(long *)(unaff_x20 + _DAT_1130a2a28) == 1) {
    auVar1._8_8_ = 0xe400000000000000;
    auVar1._0_8_ = 0x64617069;
    return auVar1;
  }
  return ZEXT816(0);
}



/* Entry: 1049a0680; end: 1049a06cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a0680(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_1130a2a28) = param_1;
  _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1049a06cc; end: 1049a0863;  */

undefined * FUN_1049a06cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = param_1;
  FUN_1049a0584();
  uVar1 = 0x11309c618;
  func_0x0001048db364(0x11309c618);
  uVar2 = uVar1;
  func_0x00010011d734();
  uVar3 = 0x2c;
  uVar6 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x2c,0xe100000000000000,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar4);
  FUN_1049a09ec();
  uVar4 = 0x2c;
  uVar7 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x2c,0xe100000000000000,uVar1,uVar2);
  _swift_bridgeObjectRelease(param_1);
  __ss11_StringGutsV4growyySiF(0x1c);
  _swift_bridgeObjectRelease(0xe000000000000000);
  __sSS6appendyySSF(uVar3,uVar6);
  _swift_bridgeObjectRelease(uVar6);
  __sSS6appendyySSF(0x3d7364692629,0xe600000000000000);
  __sSS6appendyySSF(uVar4,uVar7);
  _swift_bridgeObjectRelease(uVar7);
  uVar1 = 0xd000000000000019;
  puVar5 = PTR_PTR_1126ade80;
  _objc_allocWithZone(PTR_PTR_1126ade80);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f2262b0);
  _swift_bridgeObjectRelease(0x800000010f2262b0);
  _objc_msgSend(puVar5,PTR_s_initWithGraphPath_parameters_fla_1125e3990,uVar1,0,0xc);
  _objc_release(uVar1);
  return puVar5;
}



/* Entry: 1049a0864; end: 1049a08cf; -[_TtC12FBSDKCoreKit29AppLinkResolverRequestBuilder requestForURLs:] */

void FUN_1049a0864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  __s10Foundation3URLVMa(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_1049a06cc(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1049a08d0; end: 1049a093f; -[_TtC12FBSDKCoreKit29AppLinkResolverRequestBuilder getIdiomSpecificField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a08d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + _DAT_1130a2a28) == 1) {
    uVar2 = 0xe400000000000000;
    uVar1 = 0x64617069;
  }
  else {
    if (*(long *)(param_1 + _DAT_1130a2a28) != 0) {
      uVar1 = 0;
      goto LAB_1049a0930;
    }
    uVar2 = 0xe600000000000000;
    uVar1 = 0x656e6f687069;
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
LAB_1049a0930:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1049a0940; end: 1049a098b;  */

void FUN_1049a0940(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1049a098c; end: 1049a09eb; -[_TtC12FBSDKCoreKit29AppLinkResolverRequestBuilder init] */

void FUN_1049a098c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FBSDKCoreKit.AppLinkResolverRequestBuilder",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1049a09b8);
  (*pcVar1)();
}



/* Entry: 1049a09ec; end: 1049a0bc7;  */

undefined * FUN_1049a09ec(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_a0 [8];
  long lStack_98;
  code *pcStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = 0;
  __s10Foundation12CharacterSetVMa();
  lStack_80 = *(long *)(lVar2 + -8);
  puVar11 = auStack_a0 + -(*(long *)(lStack_80 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_78 = lVar2;
  __s10Foundation3URLVMa();
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar13 = *(long *)(lVar3 + -8);
  lVar12 = (long)puVar11 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    param_1 = param_1 + ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff));
    lStack_88 = *(long *)(lVar13 + 0x48);
    pcStack_90 = *(code **)(lVar13 + 0x10);
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
    lStack_98 = lVar13;
    do {
      lVar4 = lVar12;
      lVar9 = param_1;
      (*pcStack_90)(lVar12,param_1,lVar3);
      __s10Foundation3URLV14absoluteStringSSvg();
      lStack_70 = lVar4;
      lStack_68 = lVar9;
      __s10Foundation12CharacterSetV15urlQueryAllowedACvgZ(puVar11);
      func_0x000100e8b654();
      puVar5 = puVar11;
      puVar10 = PTR___sSSN_11034da80;
      __sSy10FoundationE21addingPercentEncoding21withAllowedCharactersSSSgAA12CharacterSetV_tF
                (puVar11,PTR___sSSN_11034da80,lVar4);
      (**(code **)(lStack_80 + 8))(puVar11,lStack_78);
      _swift_bridgeObjectRelease(lVar9);
      (**(code **)(lVar13 + 8))(lVar12,lVar3);
      if (puVar10 != (undefined *)0x0) {
        puVar6 = puVar7;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar8 = puVar7;
        if (((ulong)puVar6 & 1) == 0) {
          puVar8 = (undefined *)0x0;
          func_0x0001000d182c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
        }
        uVar1 = *(ulong *)(puVar8 + 0x10);
        puVar7 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          func_0x0001000d182c(puVar7,uVar1 + 1,1,puVar8);
        }
        *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
        *(undefined1 **)(puVar7 + uVar1 * 0x10 + 0x20) = puVar5;
        *(undefined **)(puVar7 + uVar1 * 0x10 + 0x28) = puVar10;
        lVar13 = lStack_98;
      }
      param_1 = param_1 + lStack_88;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return puVar7;
}



/* Entry: 1049a0bc8; end: 1049a0bf3;  */

void FUN_1049a0bc8(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e7bf0);
  return;
}



/* Entry: 1049a0bf4; end: 1049a0bfb;  */

void FUN_1049a0bf4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001049a0bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x58))();
  return;
}



/* Entry: 1049a0bfc; end: 1049a0cab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1049a0bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar2 = auStack_60;
  _objc_allocWithZone();
  func_0x000100029394(param_1,unaff_x20 + _DAT_1130a2a58);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a2a60);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a2a68);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  func_0x0001000293e4(param_1);
  return puVar2;
}



/* Entry: 1049a0cac; end: 1049a0d5f; -[FBSDKAppLinkTarget URL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a0cac(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x11309c5e0;
  func_0x0001048db364();
  puVar4 = &stack0xffffffffffffffd0 +
           -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000100029394(param_1 + _DAT_1130a2a58,puVar4);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1049a0d60; end: 1049a0d73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1049a0d60(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_1130a2a58;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar1,lVar2);
  return param_1;
}



/* Entry: 1049a0d74; end: 1049a0dcf; -[FBSDKAppLinkTarget appStoreId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a0d74(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130a2a60))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130a2a60);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1049a0dd0; end: 1049a0e07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049a0dd0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _DAT_1130a2a60);
  _swift_bridgeObjectRetain(*(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + _DAT_1130a2a60) + 8))
  ;
  return auVar1;
}



/* Entry: 1049a0e08; end: 1049a0e53; -[FBSDKAppLinkTarget appName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a0e08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130a2a68);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130a2a68))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1049a0e54; end: 1049a0e8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049a0e54(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _DAT_1130a2a68);
  _swift_bridgeObjectRetain(*(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + _DAT_1130a2a68) + 8))
  ;
  return auVar1;
}



/* Entry: 1049a0e8c; end: 1049a0f3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1049a0e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffa0;
  _swift_getObjectType();
  func_0x000100029394(param_1,unaff_x20 + _DAT_1130a2a58);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a2a60);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a2a68);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  func_0x0001000293e4(param_1);
  return puVar2;
}



/* Entry: 1049a0f3c; end: 1049a1177; -[FBSDKAppLinkTarget initWithURL:appStoreId:appName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1049a0f3c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0x11309c5e0;
  func_0x0001048db364();
  lVar3 = (long)&lStack_60 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_3 == 0) {
    lVar4 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar3,param_3);
    lVar4 = 0;
    __s10Foundation3URLVMa();
  }
  uVar6 = (ulong)(param_3 == 0);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar3,uVar6,1);
  if (param_4 == 0) {
    uVar7 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar7 = uVar6;
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  func_0x000100029394(lVar3,param_1 + _DAT_1130a2a58);
  plVar5 = (long *)(param_1 + _DAT_1130a2a60);
  *plVar5 = param_4;
  plVar5[1] = uVar7;
  puVar1 = (undefined8 *)(param_1 + _DAT_1130a2a68);
  *puVar1 = param_5;
  puVar1[1] = uVar6;
  plVar5 = &lStack_60;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  func_0x0001000293e4(lVar3);
  return plVar5;
}



/* Entry: 1049a1178; end: 1049a12eb; +[FBSDKAppLinkTarget appLinkTargetWithURL:appStoreId:appName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a1178(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lStack_60;
  long lStack_58;
  
  lVar2 = 0x11309c5e0;
  func_0x0001048db364();
  uVar5 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar2 = (long)&lStack_60 - uVar5;
  lVar6 = lVar2 - uVar5;
  if (param_3 == 0) {
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar6,param_3);
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  uVar5 = (ulong)(param_3 == 0);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar6,uVar5,1);
  if (param_4 == 0) {
    uVar7 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar7 = uVar5;
  }
  _swift_getObjCClassMetadata();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  func_0x000100029394(lVar6,lVar2);
  lVar3 = param_1;
  _objc_allocWithZone();
  func_0x000100029394(lVar2,lVar3 + _DAT_1130a2a58);
  plVar4 = (long *)(lVar3 + _DAT_1130a2a60);
  *plVar4 = param_4;
  plVar4[1] = uVar7;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130a2a68);
  *puVar1 = param_5;
  puVar1[1] = uVar5;
  plVar4 = &lStack_60;
  lStack_60 = lVar3;
  lStack_58 = param_1;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  func_0x0001000293e4(lVar2);
  func_0x0001000293e4(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 1049a12ec; end: 1049a1337;  */

void FUN_1049a12ec(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1049a1338; end: 1049a1397; -[FBSDKAppLinkTarget init] */

void FUN_1049a1338(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("FBSDKCoreKit.AppLinkTarget",0x1a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1049a1364);
  (*pcVar1)();
}



/* Entry: 1049a1398; end: 1049a13e7; -[FBSDKAppLinkTarget .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a1398(long param_1)

{
  func_0x0001000293e4(param_1 + _DAT_1130a2a58);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a2a60 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130a2a68 + 8))
  ;
  return;
}



/* Entry: 1049a13e8; end: 1049a13ef;  */

void FUN_1049a13e8(void)

{
  if (lRam00000001130a2a98 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e82644c);
  return;
}



/* Entry: 1049a13f0; end: 1049a14b3;  */

void FUN_1049a13f0(undefined8 param_1)

{
  if (lRam00000001130a2a98 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e82644c);
  return;
}



/* Entry: 1049a14b4; end: 1049a14bb;  */

void FUN_1049a14b4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001049a14b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x68))();
  return;
}



/* Entry: 1049a14bc; end: 1049a15c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1049a14bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lStack_60;
  long lStack_58;
  
  lVar3 = 0x11309c5e0;
  func_0x0001048db364();
  lVar6 = (long)&lStack_60 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000100029394(param_1,lVar6);
  lVar4 = 0;
  FUN_1049a13f0();
  lVar3 = lVar4;
  _objc_allocWithZone();
  func_0x000100029394(lVar6,lVar3 + _DAT_1130a2a58);
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130a2a60);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130a2a68);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = lVar3;
  lStack_58 = lVar4;
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_5);
  plVar5 = &lStack_60;
  _objc_msgSendSuper2(plVar5,puVar2);
  func_0x0001000293e4(lVar6);
  return plVar5;
}



/* Entry: 1049a15c8; end: 1049a173f; -[_TtC12FBSDKCoreKit20AppLinkTargetFactory createAppLinkTargetWithURL:appStoreId:appName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a15c8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lStack_60;
  long lStack_58;
  
  lVar2 = 0x11309c5e0;
  func_0x0001048db364();
  uVar6 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar2 = (long)&lStack_60 - uVar6;
  lVar7 = lVar2 - uVar6;
  if (param_3 == 0) {
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar7,param_3);
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  uVar6 = (ulong)(param_3 == 0);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar7,uVar6,1);
  if (param_4 == 0) {
    uVar8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar8 = uVar6;
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  func_0x000100029394(lVar7,lVar2);
  lVar4 = 0;
  FUN_1049a13f0();
  lVar3 = lVar4;
  _objc_allocWithZone();
  func_0x000100029394(lVar2,lVar3 + _DAT_1130a2a58);
  plVar5 = (long *)(lVar3 + _DAT_1130a2a60);
  *plVar5 = param_4;
  plVar5[1] = uVar8;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130a2a68);
  *puVar1 = param_5;
  puVar1[1] = uVar6;
  plVar5 = &lStack_60;
  lStack_60 = lVar3;
  lStack_58 = lVar4;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  func_0x0001000293e4(lVar2);
  func_0x0001000293e4(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar5);
  return;
}



/* Entry: 1049a1740; end: 1049a179b;  */

void FUN_1049a1740(void)

{
  return;
}



/* Entry: 1049a179c; end: 1049a17a3;  */

void FUN_1049a179c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001049a17a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x50))();
  return;
}



/* Entry: 1049a17a4; end: 1049a17fb;  */

undefined * FUN_1049a17a4(undefined8 param_1)

{
  undefined *puVar1;
  
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  puVar1 = PTR_PTR_1126adfc0;
  _swift_getInitializedObjCClass(PTR_PTR_1126adfc0);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 1049a17fc; end: 1049a18ab; -[_TtC12FBSDKCoreKit17AppLinkURLFactory createAppLinkURLWithURL:] */

void FUN_1049a17fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ
            (&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_3);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  puVar2 = PTR_PTR_1126adfc0;
  _swift_getInitializedObjCClass(PTR_PTR_1126adfc0);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  (**(code **)(lVar4 + 8))(&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1049a18ac; end: 1049a18ff;  */

void FUN_1049a18ac(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1049a1900; end: 1049a193b; -[_TtC12FBSDKCoreKit17AppLinkURLFactory init] */

void FUN_1049a1900(undefined8 param_1)

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



/* Entry: 1049a193c; end: 1049a196f;  */

void FUN_1049a193c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1049a1970; end: 1049a198f;  */

void FUN_1049a1970(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e7d88);
  return;
}



/* Entry: 1049a1990; end: 1049a19d7; -[FBSDKApplicationDelegate applicationObservers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a1990(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a2bf8;
  _swift_beginAccess(param_1 + _DAT_1130a2bf8,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1049a19d8; end: 1049a1a17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a19d8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a2bf8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2bf8,auStack_38,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 1049a1a18; end: 1049a1a7b; -[FBSDKApplicationDelegate setApplicationObservers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a1a18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a2bf8;
  _swift_beginAccess(param_1 + _DAT_1130a2bf8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1049a1a7c; end: 1049a1b43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a1a7c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a2bf8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2bf8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _objc_release(uVar2);
  return;
}



/* Entry: 1049a1b44; end: 1049a1b87; -[FBSDKApplicationDelegate isAppLaunched] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1049a1b44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a2c10;
  _swift_beginAccess(param_1 + _DAT_1130a2c10,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 1049a1b88; end: 1049a1bc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1049a1b88(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a2c10;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2c10,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Entry: 1049a1bc8; end: 1049a1c17; -[FBSDKApplicationDelegate setIsAppLaunched:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a1bc8(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a2c10;
  _swift_beginAccess(param_1 + _DAT_1130a2c10,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1049a1c18; end: 1049a1ca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a1c18(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a2c10;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2c10,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 1049a1ca8; end: 1049a1ceb; -[FBSDKApplicationDelegate applicationState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1049a1ca8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a2c18;
  _swift_beginAccess(param_1 + _DAT_1130a2c18,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 1049a1cec; end: 1049a1d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1049a1cec(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a2c18;
  _swift_beginAccess(unaff_x20 + _DAT_1130a2c18,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Entry: 1049a1d2c; end: 1049a1e07; -[FBSDKApplicationDelegate setApplicationState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a1d2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a2c18;
  _swift_beginAccess(param_1 + _DAT_1130a2c18,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_msgSend(*(undefined8 *)(*(long *)(param_1 + _DAT_1130a2c00) + 0x40),
                PTR_s_setApplicationState__112638080,param_3);
  return;
}



/* Entry: 1049a1e08; end: 1049a1e73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049a1e08(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar2 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x28,0x8bb6);
  }
  *param_1 = lVar2;
  lVar1 = _DAT_1130a2c18;
  *(long *)(lVar2 + 0x18) = unaff_x20;
  *(long *)(lVar2 + 0x20) = lVar1;
  _swift_beginAccess(unaff_x20 + lVar1,lVar2,0x21,0);
  auVar3._8_8_ = unaff_x20 + lVar1;
  auVar3._0_8_ = FUN_1049a1e74;
  return auVar3;
}



/* Entry: 1049a1e74; end: 1049a1ec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049a1e74(long *param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  _swift_endAccess(lVar1);
  if ((param_2 & 1) == 0) {
    _objc_msgSend(*(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x18) + _DAT_1130a2c00) + 0x40),
                  PTR_s_setApplicationState__112638080,
                  *(undefined8 *)(*(long *)(lVar1 + 0x18) + *(long *)(lVar1 + 0x20)));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 1049a1ec8; end: 1049a1f13;  */

void FUN_1049a1ec8(undefined8 param_1)

{
  FUN_1049a8368();
  _objc_allocWithZone();
  _objc_msgSend();
  uRam00000001130a2b68 = param_1;
  return;
}



/* Entry: 1049a1f14; end: 1049a1f53;  */

void FUN_1049a1f14(void)

{
  if (lRam000000011309fe28 != -1) {
    _swift_once(0x11309fe28,FUN_1049a1ec8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uRam00000001130a2b68);
  return;
}



/* Entry: 1049a1f54; end: 1049a1f93; +[FBSDKApplicationDelegate sharedInstance] */

void FUN_1049a1f54(void)

{
  if (lRam000000011309fe28 != -1) {
    _swift_once(0x11309fe28,FUN_1049a1ec8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001130a2b68);
  return;
}



/* Entry: 1049a1f94; end: 1049a20af; +[FBSDKApplicationDelegate setSharedInstance:] */

void FUN_1049a1f94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = lRam000000011309fe28;
  _objc_retain();
  if (lVar1 != -1) {
    _swift_once(0x11309fe28,FUN_1049a1ec8);
  }
  uVar2 = uRam00000001130a2b68;
  uRam00000001130a2b68 = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1049a20b0; end: 1049a2173;  */

undefined8 FUN_1049a20b0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  
  _swift_getObjectType();
  if (lRam000000011309fed0 != -1) {
    _swift_once(0x11309fed0,FUN_1049adc74);
  }
  uVar2 = uRam00000001138158a0;
  lVar1 = 0;
  FUN_1049b0ed4();
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  _objc_allocWithZone(unaff_x20);
  _swift_retain_n(uVar2,2);
  FUN_1049a7eb0();
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return uVar2;
}


