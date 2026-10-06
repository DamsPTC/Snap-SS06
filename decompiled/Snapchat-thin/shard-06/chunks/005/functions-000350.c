/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1049dbfa4; end: 1049dc00b; +[FBSDKProtectedModeManager isProtectedModeAppliedWithParameters:] */

uint FUN_1049dbfa4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_3 != 0) {
    uVar1 = 0;
    FUN_1048db924(0);
    uVar2 = uVar1;
    func_0x0001049ac144();
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_3,uVar1,PTR___sypN_11034f1a8 + 8,uVar2);
  }
  lVar3 = param_3;
  func_0x0001049dc6b8(param_3);
  _swift_bridgeObjectRelease(param_3);
  return (uint)lVar3 & 1;
}



/* Entry: 1049dc00c; end: 1049dc113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049dc00c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined1 *)(unaff_x20 + _DAT_1130a3a60) = 0;
  lVar2 = _DAT_1130a3a68;
  lVar3 = 0x11309c500;
  func_0x0001048db364();
  _swift_initStaticObject();
  lVar4 = lVar3;
  _swift_retain();
  func_0x000100111634();
  _swift_release(lVar3);
  _swift_arrayDestroy(lVar3 + 0x20,0x8a,PTR___sSSN_11034da80);
  *(long *)(unaff_x20 + lVar2) = lVar4;
  puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(unaff_x20 + _DAT_1130a3a58) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined8 *)(unaff_x20 + _DAT_1130a3a48) = 0;
  lVar3 = _DAT_1130a3a50;
  puVar5 = PTR_PTR_1126ade20;
  _swift_getInitializedObjCClass();
  _swift_retain(puVar1);
  _objc_msgSend(puVar5,PTR_s_shared_1126687d0);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(unaff_x20 + lVar3) = puVar5;
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1049dc114; end: 1049dc133; -[FBSDKProtectedModeManager init] */

void FUN_1049dc114(void)

{
  FUN_1049dc00c();
  return;
}



/* Entry: 1049dc134; end: 1049dc167;  */

void FUN_1049dc134(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1049dc168; end: 1049dc1ff; -[FBSDKProtectedModeManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049dc168(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3a68));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3a58));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3a48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_1130a3a50));
  return;
}



/* Entry: 1049dc200; end: 1049dc20b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049dc200(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a3a48;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3a48,auStack_48,0,0);
  *param_1 = *(undefined8 *)(unaff_x20 + lVar1);
  _swift_unknownObjectRetain();
  return;
}



/* Entry: 1049dc20c; end: 1049dc25f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049dc20c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a3a48;
  uVar3 = *param_1;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3a48,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  _swift_unknownObjectRelease(uVar2);
  return;
}



/* Entry: 1049dc260; end: 1049dc29f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049dc260(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1130a3a48;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3a48,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x1049dc9d8;
  return auVar2;
}



/* Entry: 1049dc2a0; end: 1049dc2ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049dc2a0(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a3a50;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3a50,auStack_48,0,0);
  *param_1 = *(undefined8 *)(unaff_x20 + lVar1);
  _swift_unknownObjectRetain();
  return;
}



/* Entry: 1049dc2ac; end: 1049dc2fb;  */

void FUN_1049dc2ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_48,0,0);
  *param_1 = *(undefined8 *)(unaff_x20 + lVar1);
  _swift_unknownObjectRetain();
  return;
}



/* Entry: 1049dc2fc; end: 1049dc2ff;  */

void FUN_1049dc2fc(void)

{
  return;
}



/* Entry: 1049dc300; end: 1049dc5bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049dc300(long param_1,ulong param_2,ulong *param_3)

{
  ulong *puVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  lVar2 = _DAT_1130a3a58;
  puVar12 = (ulong *)(param_1 + 0x40);
  uVar11 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((long)uVar11 < 0x40) {
    uVar17 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar17 = uVar17 & *puVar12;
  lVar5 = param_1;
  uVar9 = param_2;
  _swift_bridgeObjectRetain();
  lVar18 = 0;
joined_r0x0001049dc37c:
  do {
    while (uVar17 == 0) {
      bVar4 = SCARRY8(lVar18,1);
      lVar18 = lVar18 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1049dc5bc);
        (*pcVar3)();
      }
      if ((long)(uVar11 + 0x3f >> 6) <= lVar18) {
        _swift_release(param_1);
        return;
      }
      uVar17 = puVar12[lVar18];
    }
    uVar6 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
    uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    uVar17 = uVar17 - 1 & uVar17;
    uVar13 = *(ulong *)(*(long *)(param_1 + 0x30) +
                       (lVar18 << 9 | LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) << 3));
    lVar19 = *(long *)(param_2 + lVar2);
    uVar6 = uVar13;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    if (*(long *)(lVar19 + 0x10) == 0) {
      uVar16 = uVar9;
      _objc_retain(uVar13);
      _swift_bridgeObjectRelease(uVar9);
    }
    else {
      __ss6HasherV5_seedABSi_tcfC(&uStack_b0,*(undefined8 *)(lVar19 + 0x28));
      uVar15 = uVar13;
      _objc_retain();
      _swift_bridgeObjectRetain(lVar19);
      puVar7 = &uStack_b0;
      uVar16 = uVar6;
      __sSS4hash4intoys6HasherVz_tF(puVar7,uVar6,uVar9);
      __ss6HasherV9_finalizeSiyF();
      uVar10 = -1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
      uVar14 = (ulong)puVar7 & (uVar10 ^ 0xffffffffffffffff);
      param_1 = lVar5;
      if ((*(ulong *)(lVar19 + 0x38 + (uVar14 >> 3 & 0xfffffffffffff8)) >> (uVar14 & 0x3f) & 1) != 0
         ) {
        do {
          puVar1 = (ulong *)(*(long *)(lVar19 + 0x30) + uVar14 * 0x10);
          uVar8 = *puVar1;
          uVar16 = puVar1[1];
          if ((uVar8 == uVar6 && uVar16 == uVar9) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar8,uVar16,uVar6,uVar9,0), (uVar8 & 1) != 0)) {
            _swift_bridgeObjectRelease(uVar9);
            _swift_bridgeObjectRelease(lVar19);
            _objc_release(uVar15);
            uVar9 = uVar16;
            goto joined_r0x0001049dc37c;
          }
          uVar14 = uVar14 + 1 & ~uVar10;
        } while ((*(ulong *)(lVar19 + 0x38 + (uVar14 >> 3 & 0xfffffffffffff8)) >> (uVar14 & 0x3f) &
                 1) != 0);
      }
      _swift_bridgeObjectRelease(uVar9);
      _swift_bridgeObjectRelease(lVar19);
    }
    uVar15 = *param_3;
    _swift_bridgeObjectRetain(uVar15);
    uVar6 = uVar13;
    FUN_1048ddcc8();
    uVar9 = uVar16;
    _swift_bridgeObjectRelease(uVar15);
    if ((uVar16 & 1) == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      uVar9 = *param_3;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar16 = *param_3;
      if ((uVar9 & 1) == 0) {
        FUN_1049027d8();
      }
      _objc_release(*(undefined8 *)(*(long *)(uVar16 + 0x30) + uVar6 * 8));
      func_0x000100102924(*(long *)(uVar16 + 0x38) + uVar6 * 0x20,&uStack_b0);
      uVar9 = uVar16;
      FUN_10490909c(uVar6);
      *param_3 = uVar16;
    }
    func_0x00010006e7f4(&uStack_b0);
    _objc_release(uVar13);
  } while( true );
}



/* Entry: 1049dc5bc; end: 1049dc7af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049dc5bc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [24];
  undefined *puStack_48;
  long lStack_38;
  
  if ((*(char *)(unaff_x20 + _DAT_1130a3a60) == '\x01' && param_1 != 0) &&
     (*(long *)(param_1 + 0x10) != 0)) {
    lStack_38 = param_1;
    _objc_retain();
    _swift_bridgeObjectRetain(param_1);
    FUN_1049dc300();
    _objc_release(unaff_x20);
    if (lRam000000011309ff18 != -1) {
      _swift_once(0x11309ff18,0x1049dba90);
    }
    uVar1 = uRam00000001130a3a40;
    puStack_48 = PTR___sSbN_11034dd40;
    auStack_60[0] = 1;
    func_0x000100102924(auStack_60,auStack_80);
    lVar2 = lStack_38;
    _swift_isUniquelyReferenced_nonNull_native(lStack_38);
    FUN_104902c18(auStack_80,uVar1,lVar2);
  }
  else {
    _swift_bridgeObjectRetain();
  }
  return;
}



/* Entry: 1049dc7b0; end: 1049dc7df;  */

void FUN_1049dc7b0(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e8820);
  return;
}



/* Entry: 1049dc7e0; end: 1049dc9d3;  */

undefined * FUN_1049dc7e0(long param_1,ulong param_2)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined1 auStack_a8 [72];
  
  puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar11 = *(undefined **)(param_1 + 0x10);
  if (puVar11 == (undefined *)0x0) {
    _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
  }
  else {
    func_0x0001048db364(0x1130a3ad0);
    puVar2 = puVar11;
    __ss11_SetStorageC8allocate8capacityAByxGSi_tFZ();
    puVar15 = (undefined *)0x0;
    do {
      uVar14 = *(ulong *)(param_1 + 0x20 + (long)puVar15 * 8);
      uVar13 = *(undefined8 *)(puVar2 + 0x28);
      uVar3 = uVar14;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      __ss6HasherV5_seedABSi_tcfC(auStack_a8,uVar13);
      uVar4 = uVar14;
      _objc_retain();
      puVar5 = auStack_a8;
      __sSS4hash4intoys6HasherVz_tF(puVar5,uVar3,param_2);
      __ss6HasherV9_finalizeSiyF();
      _swift_bridgeObjectRelease(param_2);
      uVar10 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
      uVar12 = (ulong)puVar5 & (uVar10 ^ 0xffffffffffffffff);
      uVar7 = uVar12 >> 6;
      uVar8 = *(ulong *)(puVar2 + uVar7 * 8 + 0x38);
      uVar9 = 1L << (uVar12 & 0x3f);
      if ((uVar9 & uVar8) != 0) {
        uVar6 = uVar3;
        do {
          uVar8 = *(ulong *)(*(long *)(puVar2 + 0x30) + uVar12 * 8);
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          uVar3 = uVar14;
          uVar7 = uVar6;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          if (uVar8 == uVar3 && uVar6 == uVar7) {
            uVar3 = uVar7;
            _objc_release(uVar4);
            _swift_bridgeObjectRelease(uVar6);
            _swift_bridgeObjectRelease(uVar7);
            goto LAB_1049dc860;
          }
          uVar3 = uVar6;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          _swift_bridgeObjectRelease(uVar6);
          _swift_bridgeObjectRelease(uVar7);
          if ((uVar8 & 1) != 0) {
            _objc_release(uVar4);
            goto LAB_1049dc860;
          }
          uVar12 = uVar12 + 1 & ~uVar10;
          uVar7 = uVar12 >> 6;
          uVar8 = *(ulong *)(puVar2 + uVar7 * 8 + 0x38);
          uVar9 = 1L << (uVar12 & 0x3f);
          uVar6 = uVar3;
        } while ((uVar9 & uVar8) != 0);
      }
      *(ulong *)(puVar2 + uVar7 * 8 + 0x38) = uVar9 | uVar8;
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar12 * 8) = uVar4;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1049dc9d4);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
LAB_1049dc860:
      puVar15 = puVar15 + 1;
      param_2 = uVar3;
    } while (puVar15 != puVar11);
  }
  return puVar2;
}



/* Entry: 1049dc9d4; end: 1049dc9db;  */

void FUN_1049dc9d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1049dc9dc; end: 1049dc9fb;  */

void FUN_1049dc9dc(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1049dc9fc; end: 1049dca53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049dc9fc(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a3ad8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3ad8,auStack_38,0,0);
  _swift_unknownObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 1049dca54; end: 1049dca7b;  */

undefined1  [16] FUN_1049dca54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  _swift_getObjectType();
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1049dca7c; end: 1049dcb67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049dca7c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a3ae0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3ae0,auStack_38,0,0);
  _swift_unknownObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 1049dcb68; end: 1049dcdc3;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049dcb68(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  long alStack_98 [5];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar7 = _DAT_1130a3ad8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3ad8,auStack_58,0,0);
  lVar3 = _DAT_1130a3ae0;
  lVar2 = *(long *)(unaff_x20 + lVar7);
  lVar7 = lVar2;
  if (lVar2 == 0) {
    _swift_beginAccess(unaff_x20 + _DAT_1130a3ae0,auStack_70,0,0);
    lVar7 = *(long *)(unaff_x20 + lVar3);
    if (lVar7 == 0) {
      return;
    }
    _swift_unknownObjectRetain(lVar7);
    lVar2 = 0;
  }
  _swift_unknownObjectRetain(lVar2);
  lVar3 = lVar7;
  _objc_msgSend(lVar7,PTR_s_cachedServerConfiguration_1125a76d0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar1 = PTR___sypN_11034f1a8;
  if (lVar2 == 0) {
    _swift_unknownObjectRelease(lVar7);
    alStack_98[2] = 0;
    alStack_98[1] = 0;
    alStack_98[4] = 0;
    alStack_98[3] = 0;
  }
  else {
    lVar3 = lVar2;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (lVar2,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    _objc_release(lVar2);
    if (*(long *)(lVar3 + 0x10) == 0) {
      alStack_98[2] = 0;
      alStack_98[1] = 0;
      alStack_98[4] = 0;
      alStack_98[3] = 0;
    }
    else {
      _swift_bridgeObjectRetain(lVar3);
      lVar2 = 0x6465746361646572;
      uVar5 = 0xef73746e6576655f;
      func_0x000100029284(0x6465746361646572);
      if ((uVar5 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar3);
        alStack_98[2] = 0;
        alStack_98[1] = 0;
        alStack_98[4] = 0;
        alStack_98[3] = 0;
      }
      else {
        func_0x0001000bb420(*(long *)(lVar3 + 0x38) + lVar2 * 0x20,alStack_98 + 1);
        _swift_bridgeObjectRelease(lVar3);
      }
    }
    _swift_bridgeObjectRelease(lVar3);
    if (alStack_98[4] != 0) {
      uVar6 = 0x11309d5b0;
      func_0x0001048db364(0x11309d5b0);
      plVar4 = alStack_98;
      _swift_dynamicCast(plVar4,alStack_98 + 1,puVar1 + 8,uVar6,6);
      if (((ulong)plVar4 & 1) == 0) {
        _swift_unknownObjectRelease(lVar7);
        return;
      }
      lVar3 = alStack_98[0];
      FUN_1049ddaf0();
      _swift_bridgeObjectRelease(alStack_98[0]);
      _swift_unknownObjectRelease(lVar7);
      lVar7 = _DAT_1130a3ae8;
      _swift_beginAccess(unaff_x20 + _DAT_1130a3ae8,alStack_98 + 1,1,0);
      uVar6 = *(undefined8 *)(unaff_x20 + lVar7);
      *(long *)(unaff_x20 + lVar7) = lVar3;
      _swift_bridgeObjectRetain(lVar3);
      _swift_bridgeObjectRelease(uVar6);
      lVar7 = *(long *)(lVar3 + 0x10);
      _swift_bridgeObjectRelease(lVar3);
      if (lVar7 == 0) {
        return;
      }
      *(undefined1 *)(unaff_x20 + _DAT_1130a3af0) = 1;
      return;
    }
    _swift_unknownObjectRelease(lVar7);
  }
  func_0x00010006e7f4(alStack_98 + 1);
  return;
}



/* Entry: 1049dcdc4; end: 1049dcdeb; -[FBSDKRedactedEventsManager enable] */

void FUN_1049dcdc4(undefined8 param_1)

{
  _objc_retain();
  FUN_1049dcb68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049dcdec; end: 1049dceb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049dcdec(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined *puStack_38;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(char *)(unaff_x20 + _DAT_1130a3af0) == '\x01') {
    puStack_38 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _objc_retain();
    _swift_retain(puVar1);
    FUN_1049dda08(param_1,unaff_x20,&puStack_38);
    _objc_release(unaff_x20);
    _objc_msgSend(param_1,PTR_s_removeAllObjects_112628590);
    puVar1 = puStack_38;
    puVar2 = puStack_38;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puStack_38,PTR___sypN_11034f1a8 + 8);
    _objc_msgSend(param_1,PTR_s_addObjectsFromArray__11259c200,puVar2);
    _swift_bridgeObjectRelease(puVar1);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 1049dceb8; end: 1049dd403;  */

void FUN_1049dceb8(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined **ppuVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong *puStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x0001000bb420(param_1,&puStack_80);
  uVar4 = 0x11309c420;
  func_0x0001048db364(0x11309c420);
  puVar2 = PTR___sypN_11034f1a8;
  pppuVar5 = &ppuStack_a0;
  _swift_dynamicCast(pppuVar5,&puStack_80,PTR___sypN_11034f1a8 + 8,uVar4,6);
  ppuVar11 = ppuStack_a0;
  if (((ulong)pppuVar5 & 1) == 0) {
    return;
  }
  if (ppuStack_a0[2] == (undefined *)0x0) goto LAB_1049dd230;
  lVar16 = 0x746e657665;
  _swift_bridgeObjectRetain(ppuStack_a0);
  uVar14 = 0;
  func_0x000100029284(0x746e657665);
  if ((uVar14 & 1) == 0) {
    _swift_bridgeObjectRelease_n(ppuVar11,2);
    return;
  }
  func_0x0001000bb420(ppuVar11[7] + lVar16 * 0x20,&puStack_80);
  _swift_bridgeObjectRelease(ppuVar11);
  uVar4 = 0x1130a2e60;
  func_0x0001048db364(0x1130a2e60);
  pppuVar5 = &ppuStack_a0;
  ppuVar8 = &puStack_80;
  _swift_dynamicCast(pppuVar5,ppuVar8,puVar2 + 8,uVar4,6);
  if (((ulong)pppuVar5 & 1) == 0) goto LAB_1049dd230;
  ppuVar6 = ppuStack_a0;
  _swift_bridgeObjectRetain();
  FUN_1049b270c();
  _swift_bridgeObjectRelease(ppuStack_a0);
  ppuVar7 = &PTR____CFConstantStringClassReference_110da1138;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110da1138;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (ppuVar6[2] == (undefined *)0x0) {
LAB_1049dd024:
    uStack_78 = 0;
    puStack_80 = (undefined *)0x0;
    puStack_68 = (undefined *)0x0;
    uStack_70 = 0;
  }
  else {
    _swift_bridgeObjectRetain(ppuVar6);
    ppuVar13 = ppuVar8;
    func_0x000100029284(ppuVar7);
    if (((ulong)ppuVar13 & 1) == 0) {
      _swift_bridgeObjectRelease(ppuVar6);
      goto LAB_1049dd024;
    }
    func_0x0001000bb420(ppuVar6[7] + (long)ppuVar7 * 0x20,&puStack_80);
    _swift_bridgeObjectRelease(ppuVar8);
    ppuVar8 = ppuVar6;
  }
  _swift_bridgeObjectRelease(ppuVar8);
  _swift_bridgeObjectRelease(ppuVar6);
  if (puStack_68 == (undefined *)0x0) {
    _swift_bridgeObjectRelease(ppuVar11);
    func_0x00010006e7f4(&puStack_80);
    ppuVar11 = ppuStack_a0;
  }
  else {
    pppuVar5 = &ppuStack_a0;
    _swift_dynamicCast(pppuVar5,&puStack_80,puVar2 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)pppuVar5 & 1) != 0) {
      lVar16 = lStack_98;
      puStack_b0 = param_3;
      FUN_1049dd404();
      _swift_bridgeObjectRelease(lStack_98);
      puVar1 = PTR___sSSN_11034da80;
      if (lVar16 == 0) {
        _swift_bridgeObjectRelease(ppuVar11);
        _swift_bridgeObjectRelease(ppuStack_a0);
        func_0x0001000bb420(param_1,&puStack_80);
      }
      else {
        puStack_68 = PTR___sSSN_11034da80;
        func_0x000100102924(&puStack_80,&ppuStack_a0);
        ppuVar8 = ppuStack_a8;
        _objc_retain(ppuStack_a8);
        ppuVar6 = ppuStack_a0;
        _swift_isUniquelyReferenced_nonNull_native(ppuStack_a0);
        func_0x000102492b94(&ppuStack_a0,ppuVar8,ppuVar6);
        _objc_release(ppuVar8);
        puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_allocWithZone();
        _objc_msgSend();
        ppuVar8 = ppuStack_a0;
        func_0x0001024925ac(ppuStack_a0);
        _swift_release(ppuStack_a0);
        puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_allocWithZone(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        ppuVar6 = ppuVar8;
        __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                  (ppuVar8,PTR___ss11AnyHashableVN_11034e448,puVar2 + 8,
                   PTR___ss11AnyHashableVSHsWP_11034e450);
        _swift_bridgeObjectRelease(ppuVar8);
        _objc_msgSend(puVar10,PTR_s_initWithDictionary__1125e0b28,ppuVar6);
        _objc_release(ppuVar6);
        puStack_80 = (undefined *)0x746e657665;
        uStack_78 = 0xe500000000000000;
        ppuVar8 = &puStack_80;
        __ss38_bridgeAnythingNonVerbatimToObjectiveCyyXlxnlF(ppuVar8,puVar1);
        _objc_msgSend(puVar9,PTR_s___swift_setObject_forKeyedSubscr_11254e8a8,puVar10,ppuVar8);
        _objc_release(puVar10);
        _swift_unknownObjectRelease(ppuVar8);
        if (ppuVar11[2] == (undefined *)0x0) {
          uStack_78 = 0;
          puStack_80 = (undefined *)0x0;
          puStack_68 = (undefined *)0x0;
          uStack_70 = 0;
        }
        else {
          _swift_bridgeObjectRetain(ppuVar11);
          lVar16 = 0x63696c706d497369;
          uVar14 = 0xea00000000007469;
          func_0x000100029284(0x63696c706d497369);
          if ((uVar14 & 1) == 0) {
            _swift_bridgeObjectRelease(ppuVar11);
            uStack_78 = 0;
            puStack_80 = (undefined *)0x0;
            puStack_68 = (undefined *)0x0;
            uStack_70 = 0;
          }
          else {
            func_0x0001000bb420(ppuVar11[7] + lVar16 * 0x20,&puStack_80);
            _swift_bridgeObjectRelease(ppuVar11);
          }
        }
        _swift_bridgeObjectRelease(ppuVar11);
        puVar2 = puStack_68;
        if (puStack_68 == (undefined *)0x0) {
          lVar16 = 0;
        }
        else {
          ppuVar11 = &puStack_80;
          func_0x0001006732c8(ppuVar11,puStack_68);
          lVar18 = *(long *)(puVar2 + -8);
          lVar17 = (long)&puStack_b0 - (*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
          (**(code **)(lVar18 + 0x10))(lVar17,ppuVar11,puVar2);
          lVar16 = lVar17;
          __ss27_bridgeAnythingToObjectiveCyyXlxlF(lVar17,puVar2);
          (**(code **)(lVar18 + 8))(lVar17,puVar2);
          func_0x000100183ab8(&puStack_80);
        }
        puStack_80 = (undefined *)0x63696c706d497369;
        uStack_78 = 0xea00000000007469;
        ppuVar11 = &puStack_80;
        __ss38_bridgeAnythingNonVerbatimToObjectiveCyyXlxnlF(ppuVar11,PTR___sSSN_11034da80);
        _objc_msgSend(puVar9,PTR_s___swift_setObject_forKeyedSubscr_11254e8a8,lVar16,ppuVar11);
        _swift_unknownObjectRelease(lVar16);
        _swift_unknownObjectRelease(ppuVar11);
        lVar16 = 0;
        func_0x00010178e118();
        puStack_80 = puVar9;
        puStack_68 = (undefined *)lVar16;
      }
      puVar3 = puStack_b0;
      uVar15 = *puStack_b0;
      uVar14 = uVar15;
      _swift_isUniquelyReferenced_nonNull_native();
      *puVar3 = uVar15;
      uVar12 = uVar15;
      if ((uVar14 & 1) == 0) {
        uVar12 = 0;
        func_0x000100f6a040(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
        *puVar3 = uVar12;
      }
      uVar14 = *(ulong *)(uVar12 + 0x10);
      uVar15 = uVar12;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar14) {
        uVar15 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
        func_0x000100f6a040(uVar15,uVar14 + 1,1,uVar12);
        *puVar3 = uVar15;
      }
      *(ulong *)(uVar15 + 0x10) = uVar14 + 1;
      func_0x000100102924(&puStack_80,uVar15 + uVar14 * 0x20 + 0x20);
      return;
    }
    _swift_bridgeObjectRelease(ppuStack_a0);
  }
LAB_1049dd230:
  _swift_bridgeObjectRelease(ppuVar11);
  return;
}



/* Entry: 1049dd404; end: 1049dd68b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049dd404(ulong param_1,ulong param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [24];
  
  lVar4 = _DAT_1130a3ae8;
  if (*(char *)(unaff_x20 + _DAT_1130a3af0) == '\x01') {
    _swift_beginAccess(unaff_x20 + _DAT_1130a3ae8,auStack_78,0,0);
    lVar7 = *(long *)(unaff_x20 + lVar4);
    uVar11 = 1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar18 = 0xffffffffffffffff;
    if ((long)uVar11 < 0x40) {
      uVar18 = ~(-1L << (uVar11 & 0x3f));
    }
    uVar18 = uVar18 & *(ulong *)(lVar7 + 0x40);
    _swift_bridgeObjectRetain();
    lVar14 = 0;
    do {
      for (; uVar18 != 0; uVar18 = uVar18 - 1 & uVar18) {
        uVar16 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        plVar1 = (long *)(*(long *)(lVar7 + 0x30) +
                         (lVar14 << 10 | LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) << 4));
        lVar17 = *plVar1;
        uVar16 = plVar1[1];
        _swift_beginAccess(unaff_x20 + lVar4,auStack_c0,0x20,0);
        lVar13 = *(long *)(unaff_x20 + lVar4);
        lVar12 = *(long *)(lVar13 + 0x10);
        _swift_bridgeObjectRetain(uVar16);
        if (lVar12 == 0) {
LAB_1049dd60c:
          _swift_endAccess(auStack_c0);
        }
        else {
          _swift_bridgeObjectRetain(lVar13);
          lVar12 = lVar17;
          uVar10 = uVar16;
          func_0x000100029284();
          if ((uVar10 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar13);
            goto LAB_1049dd60c;
          }
          lVar12 = *(long *)(*(long *)(lVar13 + 0x38) + lVar12 * 8);
          _swift_bridgeObjectRetain(lVar12);
          _swift_endAccess(auStack_c0);
          _swift_bridgeObjectRelease(lVar13);
          if (*(long *)(lVar12 + 0x10) == 0) {
            _swift_bridgeObjectRelease(lVar12);
          }
          else {
            __ss6HasherV5_seedABSi_tcfC(auStack_c0,*(undefined8 *)(lVar12 + 0x28));
            puVar8 = auStack_c0;
            __sSS4hash4intoys6HasherVz_tF(puVar8,param_1,param_2);
            __ss6HasherV9_finalizeSiyF();
            uVar10 = -1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
            uVar15 = (ulong)puVar8 & (uVar10 ^ 0xffffffffffffffff);
            if ((*(ulong *)(lVar12 + 0x38 + (uVar15 >> 3 & 0xfffffffffffff8)) >> (uVar15 & 0x3f) & 1
                ) != 0) {
              do {
                puVar2 = (ulong *)(*(long *)(lVar12 + 0x30) + uVar15 * 0x10);
                uVar9 = *puVar2;
                uVar3 = puVar2[1];
                if ((uVar9 == param_1 && uVar3 == param_2) ||
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (uVar9,uVar3,param_1,param_2,0), (uVar9 & 1) != 0)) {
                  _swift_release(lVar7);
                  _swift_bridgeObjectRelease(lVar12);
                  goto LAB_1049dd64c;
                }
                uVar15 = uVar15 + 1 & ~uVar10;
              } while ((*(ulong *)(lVar12 + 0x38 + (uVar15 >> 3 & 0xfffffffffffff8)) >>
                        (uVar15 & 0x3f) & 1) != 0);
            }
            _swift_bridgeObjectRelease(lVar12);
          }
        }
        _swift_bridgeObjectRelease(uVar16);
      }
      bVar6 = SCARRY8(lVar14,1);
      lVar14 = lVar14 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1049dd68c);
        (*pcVar5)();
      }
      if ((long)(uVar11 + 0x3f >> 6) <= lVar14) goto LAB_1049dd63c;
      uVar18 = ((ulong *)(lVar7 + 0x40))[lVar14];
    } while( true );
  }
LAB_1049dd644:
  lVar17 = 0;
  uVar16 = 0;
LAB_1049dd64c:
  auVar19._8_8_ = uVar16;
  auVar19._0_8_ = lVar17;
  return auVar19;
LAB_1049dd63c:
  _swift_release(lVar7);
  goto LAB_1049dd644;
}



/* Entry: 1049dd68c; end: 1049dd6db; -[FBSDKRedactedEventsManager processEvents:] */

void FUN_1049dd68c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1049dcdec(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049dd6dc; end: 1049dd793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049dd6dc(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined1 *)(unaff_x20 + _DAT_1130a3af0) = 0;
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined **)(unaff_x20 + _DAT_1130a3ae8) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(unaff_x20 + _DAT_1130a3ad8) = 0;
  lVar2 = _DAT_1130a3ae0;
  puVar3 = PTR_PTR_1126ade20;
  _swift_getInitializedObjCClass();
  _swift_retain(puVar1);
  _objc_msgSend(puVar3,PTR_s_shared_1126687d0);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1049dd794; end: 1049dd84b; -[FBSDKRedactedEventsManager init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049dd794(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_1130a3af0) = 0;
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined **)(param_1 + _DAT_1130a3ae8) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(param_1 + _DAT_1130a3ad8) = 0;
  lVar2 = _DAT_1130a3ae0;
  puVar4 = PTR_PTR_1126ade20;
  _swift_getInitializedObjCClass();
  _swift_retain(puVar1);
  _objc_msgSend(puVar4,PTR_s_shared_1126687d0);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(param_1 + lVar2) = puVar4;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1049dd84c; end: 1049dd87f;  */

void FUN_1049dd84c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1049dd880; end: 1049dd907; -[FBSDKRedactedEventsManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049dd880(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3ae8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3ad8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_1130a3ae0));
  return;
}



/* Entry: 1049dd908; end: 1049dd913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049dd908(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a3ad8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3ad8,auStack_48,0,0);
  *param_1 = *(undefined8 *)(unaff_x20 + lVar1);
  _swift_unknownObjectRetain();
  return;
}



/* Entry: 1049dd914; end: 1049dd967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049dd914(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a3ad8;
  uVar3 = *param_1;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3ad8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  _swift_unknownObjectRelease(uVar2);
  return;
}



/* Entry: 1049dd968; end: 1049dd9a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049dd968(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1130a3ad8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3ad8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x1049de014;
  return auVar2;
}



/* Entry: 1049dd9a8; end: 1049dd9b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049dd9a8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a3ae0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3ae0,auStack_48,0,0);
  *param_1 = *(undefined8 *)(unaff_x20 + lVar1);
  _swift_unknownObjectRetain();
  return;
}



/* Entry: 1049dd9b4; end: 1049dda03;  */

void FUN_1049dd9b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_48,0,0);
  *param_1 = *(undefined8 *)(unaff_x20 + lVar1);
  _swift_unknownObjectRetain();
  return;
}



/* Entry: 1049dda04; end: 1049dda07;  */

void FUN_1049dda04(void)

{
  return;
}



/* Entry: 1049dda08; end: 1049ddaef;  */

void FUN_1049dda08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = 0;
  __s10Foundation25NSFastEnumerationIteratorVMa();
  lVar4 = *(long *)(lVar1 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  lVar2 = lVar1;
  __sSo7NSArrayC10FoundationE12makeIteratorAC017NSFastEnumerationD0VyF
            (auStack_90 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  func_0x000100e15a08();
  do {
    __sSt4next7ElementQzSgyFTj(auStack_70,lVar1,lVar2);
    if (lStack_58 == 0) {
LAB_1049ddac0:
      (**(code **)(lVar4 + 8))(auStack_90 + -(lVar3 + 0xfU & 0xfffffffffffffff0),lVar1);
      return;
    }
    func_0x000100102924(auStack_70,auStack_90);
    FUN_1049dceb8(auStack_90,param_2,param_3);
    if (unaff_x21 != 0) {
      func_0x000100183ab8(auStack_90);
      goto LAB_1049ddac0;
    }
    func_0x000100183ab8(auStack_90);
  } while( true );
}



/* Entry: 1049ddaf0; end: 1049ddfdf;  */

undefined * FUN_1049ddaf0(long param_1)

{
  ulong *puVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong *puVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puStack_90;
  ulong uStack_88;
  undefined *apuStack_80 [4];
  
  puVar17 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar16 = *(long *)(param_1 + 0x10);
  if (lVar16 == 0) {
    _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
  }
  else {
    puVar15 = (ulong *)(param_1 + 0x20);
    _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
    puVar7 = PTR___sypN_11034f1a8;
    puVar8 = PTR___sSSN_11034da80;
    do {
      uVar6 = 0x11309c618;
      lVar5 = 0x65756c6176;
      uVar13 = *puVar15;
      if (*(long *)(uVar13 + 0x10) != 0) {
        _swift_bridgeObjectRetain(uVar13);
        lVar3 = 0x79656b;
        uVar11 = 0;
        func_0x000100029284(0x79656b);
        if ((uVar11 & 1) != 0) {
          func_0x0001000bb420(*(long *)(uVar13 + 0x38) + lVar3 * 0x20,apuStack_80);
          ppuVar4 = &puStack_90;
          _swift_dynamicCast(ppuVar4,apuStack_80,puVar7 + 8,puVar8,6);
          uVar11 = uStack_88;
          puVar10 = puStack_90;
          if (((ulong)ppuVar4 & 1) != 0) {
            if (*(long *)(uVar13 + 0x10) != 0) {
              uVar12 = 0;
              func_0x000100029284(0x65756c6176);
              if ((uVar12 & 1) != 0) {
                func_0x0001000bb420(*(long *)(uVar13 + 0x38) + lVar5 * 0x20,apuStack_80);
                _swift_bridgeObjectRelease(uVar13);
                func_0x0001048db364(0x11309c618);
                ppuVar4 = &puStack_90;
                _swift_dynamicCast(ppuVar4,apuStack_80,puVar7 + 8,uVar6,6);
                puVar9 = puStack_90;
                uVar13 = uVar11;
                if (((ulong)ppuVar4 & 1) != 0) {
                  if (*(long *)(puVar17 + 0x10) != 0) {
                    _swift_bridgeObjectRetain(puVar17);
                    func_0x000100029284(puVar10);
                    _swift_bridgeObjectRelease(puVar17);
                    if ((uVar13 & 1) != 0) {
                      if (*(long *)(puVar17 + 0x10) != 0) {
                        _swift_bridgeObjectRetain(puVar17);
                        puVar14 = puVar10;
                        uVar13 = uVar11;
                        func_0x000100029284();
                        if ((uVar13 & 1) != 0) {
                          puVar14 = *(undefined **)(*(long *)(puVar17 + 0x38) + (long)puVar14 * 8);
                          _swift_bridgeObjectRetain(puVar14);
                          _swift_bridgeObjectRelease(puVar17);
                          puVar8 = puVar9;
                          func_0x000100403a6c(puVar9);
                          _swift_bridgeObjectRelease(puVar9);
                          apuStack_80[0] = puVar14;
                          func_0x00010105ba6c(puVar8);
                          puVar9 = apuStack_80[0];
                          puVar14 = puVar17;
                          _swift_isUniquelyReferenced_nonNull_native();
                          puVar8 = puVar10;
                          uVar13 = uVar11;
                          apuStack_80[0] = puVar17;
                          func_0x000100029284();
                          uVar12 = (ulong)~(uint)uVar13 & 1;
                          lVar5 = *(long *)(puVar17 + 0x10) + uVar12;
                          if (SCARRY8(*(long *)(puVar17 + 0x10),uVar12)) {
                    /* WARNING: Does not return */
                            pcVar2 = (code *)SoftwareBreakpoint(1,0x1049ddfcc);
                            (*pcVar2)();
                          }
                          if (*(long *)(puVar17 + 0x18) < lVar5) {
                            func_0x0001010ae964(lVar5,puVar14);
                            puVar8 = puVar10;
                            uVar12 = uVar11;
                            func_0x000100029284();
                            puVar17 = apuStack_80[0];
                            if (((uint)uVar13 & 1) != ((uint)uVar12 & 1)) goto LAB_1049ddfd0;
                          }
                          else {
                            puVar17 = apuStack_80[0];
                            if (((ulong)puVar14 & 1) == 0) {
                              func_0x0001010ae7f4();
                              puVar17 = apuStack_80[0];
                            }
                          }
                          apuStack_80[0] = puVar17;
                          if ((uVar13 & 1) == 0) {
                            *(ulong *)(puVar17 + ((ulong)puVar8 >> 6) * 8 + 0x40) =
                                 *(ulong *)(puVar17 + ((ulong)puVar8 >> 6) * 8 + 0x40) |
                                 1L << ((ulong)puVar8 & 0x3f);
                            puVar1 = (ulong *)(*(long *)(puVar17 + 0x30) + (long)puVar8 * 0x10);
                            *puVar1 = (ulong)puVar10;
                            puVar1[1] = uVar11;
                            *(undefined **)(*(long *)(puVar17 + 0x38) + (long)puVar8 * 8) = puVar9;
                            if (SCARRY8(*(long *)(puVar17 + 0x10),1)) {
                    /* WARNING: Does not return */
                              pcVar2 = (code *)SoftwareBreakpoint(1,0x1049ddfd0);
                              (*pcVar2)();
                            }
                            *(long *)(puVar17 + 0x10) = *(long *)(puVar17 + 0x10) + 1;
                            puVar8 = PTR___sSSN_11034da80;
                          }
                          else {
                            _swift_bridgeObjectRelease(uVar11);
                            puVar17 = apuStack_80[0];
                            uVar6 = *(undefined8 *)
                                     (*(long *)(apuStack_80[0] + 0x38) + (long)puVar8 * 8);
                            *(undefined **)(*(long *)(apuStack_80[0] + 0x38) + (long)puVar8 * 8) =
                                 puVar9;
                            _swift_bridgeObjectRelease(uVar6);
                            puVar8 = PTR___sSSN_11034da80;
                          }
                          goto LAB_1049ddb5c;
                        }
                        _swift_bridgeObjectRelease(puVar9);
                        puVar9 = puVar17;
                      }
                      _swift_bridgeObjectRelease(puVar9);
                      _swift_bridgeObjectRetain(puVar17);
                      uVar13 = uVar11;
                      func_0x000100029284();
                      _swift_bridgeObjectRelease(puVar17);
                      _swift_bridgeObjectRelease(uVar11);
                      if ((uVar13 & 1) != 0) {
                        puVar9 = puVar17;
                        _swift_isUniquelyReferenced_nonNull_native();
                        apuStack_80[0] = puVar17;
                        if ((int)puVar9 == 0) {
                          func_0x0001010ae7f4();
                        }
                        puVar17 = apuStack_80[0];
                        _swift_bridgeObjectRelease
                                  (*(undefined8 *)
                                    (*(long *)(apuStack_80[0] + 0x30) + (long)puVar10 * 0x10 + 8));
                        _swift_bridgeObjectRelease
                                  (*(undefined8 *)(*(long *)(puVar17 + 0x38) + (long)puVar10 * 8));
                        func_0x0001010ae644(puVar10,puVar17);
                      }
                      goto LAB_1049ddb5c;
                    }
                  }
                  puVar7 = puVar9;
                  func_0x000100403a6c();
                  _swift_bridgeObjectRelease(puVar9);
                  puVar8 = puVar17;
                  _swift_isUniquelyReferenced_nonNull_native();
                  puVar9 = puVar10;
                  uVar13 = uVar11;
                  apuStack_80[0] = puVar17;
                  func_0x000100029284();
                  uVar12 = (ulong)~(uint)uVar13 & 1;
                  lVar5 = *(long *)(puVar17 + 0x10) + uVar12;
                  if (SCARRY8(*(long *)(puVar17 + 0x10),uVar12)) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1049ddfc8);
                    (*pcVar2)();
                  }
                  if (*(long *)(puVar17 + 0x18) < lVar5) {
                    func_0x0001010ae964(lVar5,puVar8);
                    uVar12 = uVar11;
                    func_0x000100029284();
                    puVar9 = puVar10;
                    if (((uint)uVar13 & 1) != ((uint)uVar12 & 1)) {
LAB_1049ddfd0:
                      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                                (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x1049ddfe0);
                      (*pcVar2)();
                    }
                  }
                  else if (((ulong)puVar8 & 1) == 0) {
                    func_0x0001010ae7f4();
                  }
                  puVar17 = apuStack_80[0];
                  if ((uVar13 & 1) == 0) {
                    FUN_10499a118();
                    puVar7 = PTR___sypN_11034f1a8;
                    puVar8 = PTR___sSSN_11034da80;
                  }
                  else {
                    uVar6 = *(undefined8 *)(*(long *)(apuStack_80[0] + 0x38) + (long)puVar9 * 8);
                    *(undefined **)(*(long *)(apuStack_80[0] + 0x38) + (long)puVar9 * 8) = puVar7;
                    _swift_bridgeObjectRelease(uVar11);
                    _swift_bridgeObjectRelease(uVar6);
                    puVar7 = PTR___sypN_11034f1a8;
                    puVar8 = PTR___sSSN_11034da80;
                  }
                  goto LAB_1049ddb5c;
                }
                goto LAB_1049ddb58;
              }
            }
            _swift_bridgeObjectRelease(uVar13);
            uVar13 = uVar11;
          }
        }
LAB_1049ddb58:
        _swift_bridgeObjectRelease(uVar13);
      }
LAB_1049ddb5c:
      puVar15 = puVar15 + 1;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return puVar17;
}



/* Entry: 1049ddfe0; end: 1049de017;  */

void FUN_1049ddfe0(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e88f8);
  return;
}



/* Entry: 1049de018; end: 1049de06f;  */

void FUN_1049de018(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1049de070; end: 1049de0c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049de070(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a3b60;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3b60,auStack_38,0,0);
  _swift_unknownObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 1049de0c8; end: 1049de0ef;  */

undefined1  [16] FUN_1049de0c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  _swift_getObjectType();
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1049de0f0; end: 1049de1db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049de0f0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a3b68;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3b68,auStack_38,0,0);
  _swift_unknownObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 1049de1dc; end: 1049de413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049de1dc(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar7 = _DAT_1130a3b60;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3b60,auStack_58,0,0);
  lVar3 = _DAT_1130a3b68;
  lVar2 = *(long *)(unaff_x20 + lVar7);
  lVar7 = lVar2;
  if (lVar2 == 0) {
    _swift_beginAccess(unaff_x20 + _DAT_1130a3b68,auStack_70,0,0);
    lVar7 = *(long *)(unaff_x20 + lVar3);
    if (lVar7 == 0) {
      return;
    }
    _swift_unknownObjectRetain(lVar7);
    lVar2 = 0;
  }
  _swift_unknownObjectRetain(lVar2);
  lVar3 = lVar7;
  _objc_msgSend(lVar7,PTR_s_cachedServerConfiguration_1125a76d0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar1 = PTR___sypN_11034f1a8;
  if (lVar2 == 0) {
    _swift_unknownObjectRelease(lVar7);
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
    goto LAB_1049de3e8;
  }
  lVar3 = lVar2;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (lVar2,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _objc_release(lVar2);
  if (*(long *)(lVar3 + 0x10) == 0) {
LAB_1049de330:
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar3);
    uVar6 = 0;
    lVar2 = -0x2ffffffffffffff0;
    func_0x000100029284(0xd000000000000010);
    if ((uVar6 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar3);
      goto LAB_1049de330;
    }
    func_0x0001000bb420(*(long *)(lVar3 + 0x38) + lVar2 * 0x20,&uStack_90);
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_bridgeObjectRelease(lVar3);
  if (lStack_78 != 0) {
    uVar4 = 0x11309d5b0;
    func_0x0001048db364(0x11309d5b0);
    puVar5 = &uStack_98;
    _swift_dynamicCast(puVar5,&uStack_90,puVar1 + 8,uVar4,6);
    if (((ulong)puVar5 & 1) == 0) {
      _swift_unknownObjectRelease(lVar7);
      return;
    }
    FUN_1049de414(uStack_98);
    _swift_bridgeObjectRelease(uStack_98);
    _swift_unknownObjectRelease(lVar7);
    lVar7 = _DAT_1130a3b70;
    _swift_beginAccess(unaff_x20 + _DAT_1130a3b70,&uStack_90,0,0);
    if ((*(long *)(*(long *)(unaff_x20 + lVar7) + 0x10) == 0) &&
       (*(long *)(*(long *)(unaff_x20 + _DAT_1130a3b80) + 0x10) == 0)) {
      return;
    }
    *(undefined1 *)(unaff_x20 + _DAT_1130a3b78) = 1;
    return;
  }
  _swift_unknownObjectRelease(lVar7);
LAB_1049de3e8:
  func_0x00010006e7f4(&uStack_90);
  return;
}



/* Entry: 1049de414; end: 1049de913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049de414(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long unaff_x20;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uStack_a8;
  ulong uStack_a0;
  long alStack_98 [4];
  undefined1 auStack_78 [24];
  
  lVar4 = _DAT_1130a3b80;
  lVar3 = _DAT_1130a3b70;
  lVar16 = *(long *)(param_1 + 0x10);
  if (lVar16 != 0) {
    puVar18 = (ulong *)(param_1 + 0x20);
    _swift_beginAccess(unaff_x20 + _DAT_1130a3b70,auStack_78,0,0);
    puVar2 = PTR___sypN_11034f1a8;
    puVar1 = PTR___sSSN_11034da80;
    do {
      uVar14 = *puVar18;
      if (*(long *)(uVar14 + 0x10) != 0) {
        _swift_bridgeObjectRetain(uVar14);
        lVar6 = 0x79656b;
        uVar11 = 0;
        func_0x000100029284(0x79656b);
        if ((uVar11 & 1) != 0) {
          func_0x0001000bb420(*(long *)(uVar14 + 0x38) + lVar6 * 0x20,alStack_98);
          puVar7 = &uStack_a8;
          _swift_dynamicCast(puVar7,alStack_98,puVar2 + 8,puVar1,6);
          uVar12 = uStack_a0;
          uVar11 = uStack_a8;
          if (((ulong)puVar7 & 1) != 0) {
            if (*(long *)(uVar14 + 0x10) != 0) {
              lVar6 = 0x65756c6176;
              uVar17 = 0;
              func_0x000100029284(0x65756c6176);
              if ((uVar17 & 1) != 0) {
                func_0x0001000bb420(*(long *)(uVar14 + 0x38) + lVar6 * 0x20,alStack_98);
                _swift_bridgeObjectRelease(uVar14);
                uVar9 = 0x11309c618;
                func_0x0001048db364(0x11309c618);
                puVar7 = &uStack_a8;
                _swift_dynamicCast(puVar7,alStack_98,puVar2 + 8,uVar9,6);
                uVar17 = uStack_a8;
                uVar14 = uVar12;
                if (((ulong)puVar7 & 1) != 0) {
                  uVar8 = uStack_a8;
                  func_0x000100403a6c();
                  _swift_bridgeObjectRelease(uVar17);
                  if (((uVar11 != 0x445f4b4453544d5f) || (uVar12 != 0xef5f746c75616665)) &&
                     (uVar14 = uVar11,
                     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                               (uVar11,uVar12,0x445f4b4453544d5f,0xef5f746c75616665,0),
                     (uVar14 & 1) == 0)) {
                    lVar6 = *(long *)(unaff_x20 + lVar3);
                    if (*(long *)(lVar6 + 0x10) != 0) {
                      _swift_bridgeObjectRetain(lVar6);
                      uVar14 = uVar12;
                      func_0x000100029284(uVar11);
                      _swift_bridgeObjectRelease(lVar6);
                      if ((uVar14 & 1) != 0) {
                        _swift_beginAccess(unaff_x20 + lVar3,alStack_98,0x20,0);
                        uVar14 = *(ulong *)(unaff_x20 + lVar3);
                        if (*(long *)(uVar14 + 0x10) == 0) {
                          _swift_endAccess(alStack_98);
LAB_1049de814:
                          _swift_bridgeObjectRelease(uVar8);
                          _swift_beginAccess(unaff_x20 + lVar3,alStack_98,0x21,0);
LAB_1049de82c:
                          uVar9 = *(undefined8 *)(unaff_x20 + lVar3);
                          _swift_bridgeObjectRetain(uVar9);
                          uVar14 = uVar12;
                          func_0x000100029284();
                          _swift_bridgeObjectRelease(uVar9);
                          if ((uVar14 & 1) != 0) {
                            uVar14 = *(ulong *)(unaff_x20 + lVar3);
                            _swift_isUniquelyReferenced_nonNull_native();
                            uStack_a8 = *(ulong *)(unaff_x20 + lVar3);
                            if ((uVar14 & 1) == 0) {
                              func_0x0001010ae7f4();
                            }
                            uVar14 = uStack_a8;
                            _swift_bridgeObjectRelease
                                      (*(undefined8 *)
                                        (*(long *)(uStack_a8 + 0x30) + uVar11 * 0x10 + 8));
                            uVar17 = *(ulong *)(*(long *)(uVar14 + 0x38) + uVar11 * 8);
                            func_0x0001010ae644(uVar11,uVar14);
                            *(ulong *)(unaff_x20 + lVar3) = uVar14;
                            _swift_bridgeObjectRelease(uVar12);
                            uVar12 = uVar17;
                          }
                          _swift_bridgeObjectRelease(uVar12);
                        }
                        else {
                          _swift_bridgeObjectRetain(uVar14);
                          uVar17 = uVar11;
                          uVar10 = uVar12;
                          func_0x000100029284();
                          if ((uVar10 & 1) == 0) {
                            _swift_endAccess(alStack_98);
                            _swift_bridgeObjectRelease(uVar8);
                            uVar8 = uVar14;
                            goto LAB_1049de814;
                          }
                          lVar6 = *(long *)(*(long *)(uVar14 + 0x38) + uVar17 * 8);
                          _swift_bridgeObjectRetain(lVar6);
                          _swift_endAccess(alStack_98);
                          _swift_bridgeObjectRelease(uVar14);
                          alStack_98[0] = lVar6;
                          func_0x00010105ba6c(uVar8);
                          lVar6 = alStack_98[0];
                          _swift_beginAccess(unaff_x20 + lVar3,alStack_98,0x21,0);
                          if (lVar6 == 0) goto LAB_1049de82c;
                          uVar9 = *(undefined8 *)(unaff_x20 + lVar3);
                          _swift_isUniquelyReferenced_nonNull_native(uVar9);
                          uStack_a8 = *(ulong *)(unaff_x20 + lVar3);
                          *(undefined8 *)(unaff_x20 + lVar3) = 0x8000000000000000;
                          func_0x0001010af74c(lVar6,uVar11,uVar12,uVar9);
                          _swift_bridgeObjectRelease(uVar12);
                          *(ulong *)(unaff_x20 + lVar3) = uStack_a8;
                        }
                        _swift_endAccess(alStack_98);
                        goto LAB_1049de484;
                      }
                    }
                    _swift_beginAccess(unaff_x20 + lVar3,alStack_98,0x21,0);
                    uVar10 = *(ulong *)(unaff_x20 + lVar3);
                    _swift_isUniquelyReferenced_nonNull_native();
                    uVar15 = *(ulong *)(unaff_x20 + lVar3);
                    *(undefined8 *)(unaff_x20 + lVar3) = 0x8000000000000000;
                    uVar14 = uVar11;
                    uVar17 = uVar12;
                    uStack_a8 = uVar15;
                    func_0x000100029284();
                    uVar13 = (ulong)~(uint)uVar17 & 1;
                    lVar6 = *(long *)(uVar15 + 0x10) + uVar13;
                    if (SCARRY8(*(long *)(uVar15 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x1049de904);
                      (*pcVar5)();
                    }
                    if (*(long *)(uVar15 + 0x18) < lVar6) {
                      func_0x0001010ae964(lVar6,uVar10);
                      uVar14 = uVar11;
                      uVar10 = uVar12;
                      func_0x000100029284();
                      if (((uint)uVar17 & 1) != ((uint)uVar10 & 1)) {
                        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                                  (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
                        pcVar5 = (code *)SoftwareBreakpoint(1,0x1049de914);
                        (*pcVar5)();
                      }
                    }
                    else if ((uVar10 & 1) == 0) {
                      func_0x0001010ae7f4();
                    }
                    uVar10 = uStack_a8;
                    if ((uVar17 & 1) == 0) {
                      FUN_10499a118(uVar14,uVar11,uVar12,uVar8,uStack_a8);
                    }
                    else {
                      uVar9 = *(undefined8 *)(*(long *)(uStack_a8 + 0x38) + uVar14 * 8);
                      *(ulong *)(*(long *)(uStack_a8 + 0x38) + uVar14 * 8) = uVar8;
                      _swift_bridgeObjectRelease(uVar12);
                      _swift_bridgeObjectRelease(uVar9);
                    }
                    *(ulong *)(unaff_x20 + lVar3) = uVar10;
                    _swift_endAccess(alStack_98);
                    goto LAB_1049de484;
                  }
                  _swift_bridgeObjectRelease(uVar12);
                  uVar14 = *(ulong *)(unaff_x20 + lVar4);
                  *(ulong *)(unaff_x20 + lVar4) = uVar8;
                }
                goto LAB_1049de480;
              }
            }
            _swift_bridgeObjectRelease(uVar14);
            uVar14 = uVar12;
          }
        }
LAB_1049de480:
        _swift_bridgeObjectRelease(uVar14);
      }
LAB_1049de484:
      puVar18 = puVar18 + 1;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}



/* Entry: 1049de914; end: 1049de93b; -[_TtC12FBSDKCoreKit22SensitiveParamsManager enable] */

void FUN_1049de914(undefined8 param_1)

{
  _objc_retain();
  FUN_1049de1dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049de93c; end: 1049dee83;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1049de93c(long param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long unaff_x20;
  long lVar15;
  undefined1 *puVar16;
  ulong uVar17;
  undefined1 auStack_c8 [24];
  long lStack_b0;
  undefined *apuStack_a8 [4];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar7 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (((*(char *)(unaff_x20 + _DAT_1130a3b78) != '\x01') || (param_1 == 0)) ||
     (lStack_68 = param_1, *(long *)(param_1 + 0x10) == 0)) {
    _swift_bridgeObjectRetain(param_1);
    return param_1;
  }
  lVar14 = *(long *)(unaff_x20 + _DAT_1130a3b80);
  apuStack_a8[0] = PTR___swiftEmptySetSingleton_11034f1d8;
  uVar13 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((long)uVar13 < 0x40) {
    uVar17 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)(lVar14 + 0x38);
  _swift_bridgeObjectRetain_n(lVar14,2);
  _swift_bridgeObjectRetain(param_1);
  _swift_retain(puVar7);
  lVar12 = 0;
joined_r0x0001049de9f4:
  while (uVar17 != 0) {
    uVar11 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
    uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar17 = uVar17 - 1 & uVar17;
    puVar1 = (undefined8 *)
             (*(long *)(lVar14 + 0x30) +
             (lVar12 << 10 | LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) << 4));
    uVar8 = *puVar1;
    uVar11 = puVar1[1];
    _swift_bridgeObjectRetain(uVar11);
    uVar10 = uVar11;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8);
    _swift_bridgeObjectRelease(uVar11);
    lVar15 = lStack_68;
    if (*(long *)(lStack_68 + 0x10) == 0) {
LAB_1049dea28:
      _objc_release(uVar8);
    }
    else {
      _swift_bridgeObjectRetain(lStack_68);
      FUN_1048ddcc8(uVar8);
      uVar11 = uVar10;
      _swift_bridgeObjectRelease(lVar15);
      if ((uVar10 & 1) == 0) goto LAB_1049dea28;
      FUN_104908fd8(&puStack_88,uVar8);
      func_0x00010006e7f4(&puStack_88);
      uVar5 = uVar8;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar8);
      func_0x000100403b00(&puStack_88,uVar5,uVar11);
      _objc_release(uVar8);
      _swift_bridgeObjectRelease(uStack_80);
    }
  }
  bVar3 = SCARRY8(lVar12,1);
  lVar12 = lVar12 + 1;
  if (bVar3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1049dee68);
    (*pcVar2)();
  }
  if (lVar12 < (long)(uVar13 + 0x3f >> 6)) {
    uVar17 = ((ulong *)(lVar14 + 0x38))[lVar12];
    goto joined_r0x0001049de9f4;
  }
  _swift_release(lVar14);
  _swift_bridgeObjectRelease(lVar14);
  puVar7 = apuStack_a8[0];
  lVar14 = _DAT_1130a3b70;
  if (param_2 != 0) {
    puVar16 = auStack_c8;
    _swift_beginAccess(unaff_x20 + _DAT_1130a3b70,puVar16,0,0);
    lVar15 = *(long *)(unaff_x20 + lVar14);
    lVar12 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_2);
    if (*(long *)(lVar15 + 0x10) == 0) {
      _swift_bridgeObjectRelease(puVar16);
      lVar14 = *(long *)(puVar7 + 0x10);
      goto joined_r0x0001049dedac;
    }
    lVar4 = param_2;
    _objc_retain(param_2);
    _swift_bridgeObjectRetain(lVar15);
    puVar9 = puVar16;
    func_0x000100029284(lVar12);
    puVar6 = puVar9;
    _swift_bridgeObjectRelease(lVar15);
    _swift_bridgeObjectRelease(puVar16);
    if (((ulong)puVar9 & 1) != 0) {
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _swift_beginAccess(unaff_x20 + lVar14,&puStack_88,0x20,0);
      puVar16 = *(undefined1 **)(unaff_x20 + lVar14);
      if (*(long *)(puVar16 + 0x10) != 0) {
        _swift_bridgeObjectRetain(puVar16);
        puVar9 = puVar6;
        func_0x000100029284();
        if (((ulong)puVar9 & 1) != 0) {
          lVar14 = *(long *)(*(long *)(puVar16 + 0x38) + param_2 * 8);
          _swift_bridgeObjectRetain(lVar14);
          _swift_endAccess(&puStack_88);
          _swift_bridgeObjectRelease(puVar6);
          _swift_bridgeObjectRelease(puVar16);
          apuStack_a8[0] = PTR___swiftEmptySetSingleton_11034f1d8;
          uVar13 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
          uVar17 = 0xffffffffffffffff;
          if ((long)uVar13 < 0x40) {
            uVar17 = ~(-1L << (uVar13 & 0x3f));
          }
          uVar17 = uVar17 & *(ulong *)(lVar14 + 0x38);
          _swift_retain();
          _swift_bridgeObjectRetain(lVar14);
          lVar12 = 0;
joined_r0x0001049dec68:
          while (uVar17 != 0) {
            uVar11 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
            uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
            uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
            uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
            uVar17 = uVar17 - 1 & uVar17;
            puVar1 = (undefined8 *)
                     (*(long *)(lVar14 + 0x30) +
                     (lVar12 << 10 | LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) << 4));
            uVar8 = *puVar1;
            uVar11 = puVar1[1];
            _swift_bridgeObjectRetain(uVar11);
            uVar10 = uVar11;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8);
            _swift_bridgeObjectRelease(uVar11);
            lVar15 = lStack_68;
            if (*(long *)(lStack_68 + 0x10) == 0) {
LAB_1049dec84:
              _objc_release(uVar8);
            }
            else {
              _swift_bridgeObjectRetain(lStack_68);
              FUN_1048ddcc8(uVar8);
              uVar11 = uVar10;
              _swift_bridgeObjectRelease(lVar15);
              if ((uVar10 & 1) == 0) goto LAB_1049dec84;
              FUN_104908fd8(&puStack_88,uVar8);
              func_0x00010006e7f4(&puStack_88);
              uVar5 = uVar8;
              __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar8);
              func_0x000100403b00(&puStack_88,uVar5,uVar11);
              _objc_release(uVar8);
              _swift_bridgeObjectRelease(uStack_80);
            }
          }
          bVar3 = SCARRY8(lVar12,1);
          lVar12 = lVar12 + 1;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1049dee6c);
            (*pcVar2)();
          }
          if (lVar12 < (long)(uVar13 + 0x3f >> 6)) {
            uVar17 = ((ulong *)(lVar14 + 0x38))[lVar12];
            goto joined_r0x0001049dec68;
          }
          _swift_release(lVar14);
          _swift_bridgeObjectRelease(lVar14);
          puStack_88 = puVar7;
          func_0x00010105ba6c(apuStack_a8[0]);
          _objc_release(lVar4);
          lVar14 = *(long *)(puStack_88 + 0x10);
          puVar7 = puStack_88;
          goto joined_r0x0001049dedac;
        }
        _swift_bridgeObjectRelease(puVar6);
        puVar6 = puVar16;
      }
      _swift_bridgeObjectRelease(puVar6);
      _swift_endAccess(&puStack_88);
    }
    _objc_release(lVar4);
  }
  lVar14 = *(long *)(puVar7 + 0x10);
joined_r0x0001049dedac:
  if (lVar14 == 0) {
    _swift_bridgeObjectRelease(puVar7);
  }
  else {
    if (lRam000000011309ff20 != -1) {
      _swift_once(0x11309ff20,0x1049de038);
    }
    uVar5 = uRam00000001130a3b58;
    func_0x0001048ffbe8();
    uVar8 = 0x11309c618;
    func_0x0001048db364();
    puStack_88 = puVar7;
    uStack_70 = uVar8;
    func_0x000100102924(&puStack_88,apuStack_a8);
    lVar14 = lStack_68;
    lVar12 = lStack_68;
    _swift_isUniquelyReferenced_nonNull_native(lStack_68);
    lStack_b0 = lVar14;
    FUN_104902c18(apuStack_a8,uVar5,lVar12);
    lStack_68 = lStack_b0;
  }
  return lStack_68;
}



/* Entry: 1049dee84; end: 1049df047; -[_TtC12FBSDKCoreKit22SensitiveParamsManager processParameters:eventName:] */

void FUN_1049dee84(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR___sypN_11034f1a8;
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1048db924(0);
    uVar3 = uVar2;
    func_0x0001049ac144();
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_3,uVar2,puVar1 + 8,uVar3);
  }
  _objc_retain(param_1);
  uVar3 = param_4;
  _objc_retain(param_4);
  lVar4 = param_3;
  FUN_1049de93c(param_3,param_4);
  _objc_release(uVar3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1048db924(0);
    uVar3 = uVar2;
    func_0x0001049ac144();
    lVar5 = lVar4;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF(lVar4,uVar2,puVar1 + 8,uVar3);
    _swift_bridgeObjectRelease(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1049df048; end: 1049df067; -[_TtC12FBSDKCoreKit22SensitiveParamsManager init] */

void FUN_1049df048(void)

{
  func_0x0001049def74();
  return;
}



/* Entry: 1049df068; end: 1049df09b;  */

void FUN_1049df068(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1049df09c; end: 1049df133; -[_TtC12FBSDKCoreKit22SensitiveParamsManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049df09c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3b70));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3b80));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3b60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_1130a3b68));
  return;
}



/* Entry: 1049df134; end: 1049df13f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049df134(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a3b60;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3b60,auStack_48,0,0);
  *param_1 = *(undefined8 *)(unaff_x20 + lVar1);
  _swift_unknownObjectRetain();
  return;
}



/* Entry: 1049df140; end: 1049df193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049df140(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a3b60;
  uVar3 = *param_1;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3b60,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  _swift_unknownObjectRelease(uVar2);
  return;
}



/* Entry: 1049df194; end: 1049df1d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049df194(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1130a3b60;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3b60,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x1049e08e0;
  return auVar2;
}



/* Entry: 1049df1d4; end: 1049df1df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049df1d4(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a3b68;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3b68,auStack_48,0,0);
  *param_1 = *(undefined8 *)(unaff_x20 + lVar1);
  _swift_unknownObjectRetain();
  return;
}



/* Entry: 1049df1e0; end: 1049df22f;  */

void FUN_1049df1e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_48,0,0);
  *param_1 = *(undefined8 *)(unaff_x20 + lVar1);
  _swift_unknownObjectRetain();
  return;
}



/* Entry: 1049df230; end: 1049df393;  */

undefined8 FUN_1049df230(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar2 = &lStack_c0;
  lVar6 = *unaff_x20;
  uStack_70 = param_2;
  uStack_68 = param_3;
  uStack_60 = param_2;
  uStack_58 = param_3;
  __ss6HasherV5_seedABSi_tcfC(&lStack_c0,*(undefined8 *)(lVar6 + 0x28));
  FUN_1049cdeac();
  __ss6HasherV9_finalizeSiyF();
  uVar4 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
  uVar5 = (ulong)plVar2 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar6 + 0x38 + (uVar5 >> 3 & 0xfffffffffffff8)) >> (uVar5 & 0x3f) & 1) != 0) {
    do {
      plVar2 = (long *)(*(long *)(lVar6 + 0x30) + uVar5 * 0x10);
      lStack_b8 = plVar2[1];
      lStack_c0 = *plVar2;
      func_0x000104994534(lStack_c0,lStack_b8);
      uVar3 = 0;
      FUN_1049ce214(&lStack_c0,&uStack_60);
      func_0x000104994548(lStack_c0,lStack_b8);
      if ((uVar3 & 1) != 0) {
        func_0x000104994548(uStack_60,uStack_58);
        puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x30) + uVar5 * 0x10);
        uVar8 = puVar1[1];
        uVar7 = *puVar1;
        param_1[1] = uVar8;
        *param_1 = uVar7;
        func_0x000104994534(uVar7,uVar8);
        return 0;
      }
      uVar5 = uVar5 + 1 & ~uVar4;
      param_3 = uStack_58;
      param_2 = uStack_60;
    } while ((*(ulong *)(lVar6 + 0x38 + (uVar5 >> 3 & 0xfffffffffffff8)) >> (uVar5 & 0x3f) & 1) != 0
            );
  }
  lVar6 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar6);
  lStack_c0 = *unaff_x20;
  func_0x000104994534(param_2,param_3);
  FUN_1049df684(param_2,param_3,uVar5,lVar6);
  *unaff_x20 = lStack_c0;
  *param_1 = param_2;
  param_1[1] = param_3;
  return 1;
}



/* Entry: 1049df394; end: 1049df683;  */

undefined8 FUN_1049df394(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long alStack_a8 [9];
  
  lVar9 = *unaff_x20;
  uVar7 = *(undefined8 *)(lVar9 + 0x28);
  uVar1 = param_2;
  uVar6 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  __ss6HasherV5_seedABSi_tcfC(alStack_a8,uVar7);
  plVar2 = alStack_a8;
  __sSS4hash4intoys6HasherVz_tF(plVar2,uVar1,uVar6);
  __ss6HasherV9_finalizeSiyF();
  _swift_bridgeObjectRelease(uVar6);
  uVar6 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
  uVar8 = (ulong)plVar2 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar9 + 0x38 + (uVar8 >> 3 & 0xfffffffffffff8)) >> (uVar8 & 0x3f) & 1) != 0) {
    do {
      uVar3 = *(ulong *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      uVar4 = param_2;
      uVar5 = uVar1;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      if (uVar3 == uVar4 && uVar1 == uVar5) {
        _objc_release(param_2);
        _swift_bridgeObjectRelease(uVar1);
        _swift_bridgeObjectRelease(uVar5);
LAB_1049df514:
        *param_1 = *(ulong *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        _objc_retain();
        return 0;
      }
      uVar4 = uVar1;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease(uVar1);
      _swift_bridgeObjectRelease(uVar5);
      if ((uVar3 & 1) != 0) {
        _objc_release(param_2);
        goto LAB_1049df514;
      }
      uVar8 = uVar8 + 1 & ~uVar6;
      uVar1 = uVar4;
    } while ((*(ulong *)(lVar9 + 0x38 + (uVar8 >> 3 & 0xfffffffffffff8)) >> (uVar8 & 0x3f) & 1) != 0
            );
  }
  _swift_isUniquelyReferenced_nonNull_native(*unaff_x20);
  alStack_a8[0] = *unaff_x20;
  _objc_retain();
  FUN_1049df810();
  *unaff_x20 = alStack_a8[0];
  *param_1 = param_2;
  return 1;
}



/* Entry: 1049df684; end: 1049df80f;  */

void FUN_1049df684(undefined8 param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar2 = &uStack_c0;
  uVar4 = *(ulong *)(*unaff_x20 + 0x10);
  uVar3 = *(ulong *)(*unaff_x20 + 0x18);
  uStack_60 = param_1;
  uStack_58 = param_2;
  if ((uVar3 <= uVar4) || ((param_4 & 1) == 0)) {
    if ((param_4 & 1) == 0) {
      if (uVar4 < uVar3) {
        func_0x000104901c3c();
        goto LAB_1049df7a4;
      }
      func_0x000104901ff8(uVar4 + 1);
    }
    else {
      func_0x0001049024a0(uVar4 + 1);
    }
    lVar6 = *unaff_x20;
    uStack_70 = param_1;
    uStack_68 = param_2;
    __ss6HasherV5_seedABSi_tcfC(&uStack_c0,*(undefined8 *)(lVar6 + 0x28));
    FUN_1049cdeac();
    __ss6HasherV9_finalizeSiyF();
    uVar4 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    param_3 = (ulong)puVar2 & (uVar4 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar6 + 0x38 + (param_3 >> 3 & 0xfffffffffffff8)) >> (param_3 & 0x3f) & 1) != 0)
    {
      do {
        puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x30) + param_3 * 0x10);
        uStack_b8 = puVar2[1];
        uStack_c0 = *puVar2;
        func_0x000104994534(uStack_c0,uStack_b8);
        uVar3 = 0;
        FUN_1049ce214(&uStack_c0,&uStack_60);
        func_0x000104994548(uStack_c0,uStack_b8);
        if ((uVar3 & 1) != 0) {
          __ss50ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(&UNK_1107bc018);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1049df810);
          (*pcVar1)();
        }
        param_3 = param_3 + 1 & ~uVar4;
        param_2 = uStack_58;
        param_1 = uStack_60;
      } while ((*(ulong *)(lVar6 + 0x38 + (param_3 >> 3 & 0xfffffffffffff8)) >> (param_3 & 0x3f) & 1
               ) != 0);
    }
  }
LAB_1049df7a4:
  lVar5 = *unaff_x20;
  lVar6 = lVar5 + (param_3 >> 6) * 8;
  *(ulong *)(lVar6 + 0x38) = *(ulong *)(lVar6 + 0x38) | 1L << (param_3 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(lVar5 + 0x30) + param_3 * 0x10);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1049df800);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return;
}



/* Entry: 1049df810; end: 1049dfb77;  */

void FUN_1049df810(ulong param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_a8 [72];
  
  uVar2 = *(ulong *)(*unaff_x20 + 0x10);
  uVar7 = *(ulong *)(*unaff_x20 + 0x18);
  if ((uVar7 <= uVar2) || ((param_3 & 1) == 0)) {
    if ((param_3 & 1) == 0) {
      if (uVar2 < uVar7) {
        FUN_1049dfb78();
        goto LAB_1049df97c;
      }
      func_0x0001049dfe00(uVar2 + 1);
    }
    else {
      func_0x0001049e0330(uVar2 + 1);
    }
    lVar10 = *unaff_x20;
    uVar9 = *(undefined8 *)(lVar10 + 0x28);
    uVar2 = param_1;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,uVar9);
    puVar3 = auStack_a8;
    __sSS4hash4intoys6HasherVz_tF(puVar3,uVar2,param_2);
    __ss6HasherV9_finalizeSiyF();
    _swift_bridgeObjectRelease(param_2);
    uVar7 = -1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    param_2 = (ulong)puVar3 & (uVar7 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar10 + 0x38 + (param_2 >> 3 & 0xfffffffffffff8)) >> (param_2 & 0x3f) & 1) != 0
       ) {
      uVar9 = 0;
      func_0x000104993dfc(0);
      do {
        uVar4 = *(ulong *)(*(long *)(lVar10 + 0x30) + param_2 * 8);
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        uVar5 = param_1;
        uVar6 = uVar2;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        if (uVar4 == uVar5 && uVar2 == uVar6) {
          _swift_bridgeObjectRelease(uVar2);
          _swift_bridgeObjectRelease(uVar6);
LAB_1049df9e8:
          __ss50ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(uVar9);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1049df9f4);
          (*pcVar1)();
        }
        uVar5 = uVar2;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        _swift_bridgeObjectRelease(uVar2);
        _swift_bridgeObjectRelease(uVar6);
        if ((uVar4 & 1) != 0) goto LAB_1049df9e8;
        param_2 = param_2 + 1 & ~uVar7;
        uVar2 = uVar5;
      } while ((*(ulong *)(lVar10 + 0x38 + (param_2 >> 3 & 0xfffffffffffff8)) >> (param_2 & 0x3f) &
               1) != 0);
    }
  }
LAB_1049df97c:
  lVar8 = *unaff_x20;
  lVar10 = lVar8 + (param_2 >> 6) * 8;
  *(ulong *)(lVar10 + 0x38) = *(ulong *)(lVar10 + 0x38) | 1L << (param_2 & 0x3f);
  *(ulong *)(*(long *)(lVar8 + 0x30) + param_2 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar8 + 0x10),1)) {
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1049df9d8);
  (*pcVar1)();
}



/* Entry: 1049dfb78; end: 1049dfdff;  */

void FUN_1049dfb78(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  
  func_0x0001048db364(0x1130a3ad0);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  __ss11_SetStorageC4copy8originalAByxGs05__RawaB0C_tFZ();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x38;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x38U) {
      _memmove(lVar4 + 0x38U,lVar1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((long)uVar6 < 0x40) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x38);
    if (uVar5 == 0) goto LAB_1049dfc48;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar9 << 6;
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        _objc_retain();
        if (uVar5 != 0) break;
LAB_1049dfc48:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1049dfcbc);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_1049dfc94;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar9 = lVar2;
      }
    } while( true );
  }
LAB_1049dfc94:
  _swift_release(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1049dfe00; end: 1049e08a7;  */

void FUN_1049dfe00(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined1 auStack_a8 [72];
  
  lVar15 = *unaff_x20;
  lVar7 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar7 = param_1;
  }
  uVar16 = 0x1130a3ad0;
  func_0x0001048db364(0x1130a3ad0);
  lVar4 = lVar15;
  __ss11_SetStorageC6resize8original8capacity4moveAByxGs05__RawaB0C_SiSbtFZ(lVar15,lVar7,0,uVar16);
  if (*(long *)(lVar15 + 0x10) == 0) {
    _swift_release(lVar15);
LAB_1049e0020:
    *unaff_x20 = lVar4;
    return;
  }
  uVar10 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((long)uVar10 < 0x40) {
    uVar14 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(lVar15 + 0x38);
  lVar1 = lVar4 + 0x38;
  lVar5 = 0;
  do {
    if (uVar14 == 0) {
      do {
        lVar17 = lVar5 + 1;
        if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1049e0048);
          (*pcVar3)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar17) {
          _swift_release(lVar15);
          goto LAB_1049e0020;
        }
        uVar14 = ((ulong *)(lVar15 + 0x38))[lVar17];
        lVar5 = lVar5 + 1;
      } while (uVar14 == 0);
      uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
    }
    else {
      uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar17 = lVar5;
    }
    lVar13 = *(long *)(*(long *)(lVar15 + 0x30) + (LZCOUNT(uVar8) | lVar17 << 6) * 8);
    uVar16 = *(undefined8 *)(lVar4 + 0x28);
    lVar5 = lVar13;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar13);
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,uVar16);
    _objc_retain();
    puVar6 = auStack_a8;
    __sSS4hash4intoys6HasherVz_tF(puVar6,lVar5,lVar7);
    __ss6HasherV9_finalizeSiyF();
    _swift_bridgeObjectRelease(lVar7);
    uVar12 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar11 = (ulong)puVar6 & (uVar12 ^ 0xffffffffffffffff);
    uVar9 = uVar11 >> 6;
    uVar8 = -1L << (uVar11 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar8 == 0) {
      bVar2 = false;
      uVar8 = 0x3f - uVar12 >> 6;
      do {
        uVar11 = uVar9 + 1;
        if ((uVar11 == uVar8) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1049e004c);
          (*pcVar3)();
        }
        uVar9 = 0;
        if (uVar11 != uVar8) {
          uVar9 = uVar11;
        }
        bVar2 = (bool)(uVar11 == uVar8 | bVar2);
        uVar11 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar11 == 0xffffffffffffffff);
      uVar11 = ~uVar11;
      uVar8 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) + uVar9 * 0x40;
    }
    else {
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar11 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar9) = 1L << (uVar8 & 0x3f) | *(ulong *)(lVar1 + uVar9);
    *(long *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) = lVar13;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar5;
    lVar5 = lVar17;
  } while( true );
}



/* Entry: 1049e08a8; end: 1049e08ab;  */

void FUN_1049e08a8(void)

{
  return;
}



/* Entry: 1049e08ac; end: 1049e08eb;  */

void FUN_1049e08ac(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e89c8);
  return;
}



/* Entry: 1049e08ec; end: 1049e094f;  */

void FUN_1049e08ec(void)

{
  __ss6HasherV8_combineyySuF(0);
  return;
}



/* Entry: 1049e0950; end: 1049e0957;  */

undefined8 FUN_1049e0950(void)

{
  return 1;
}



/* Entry: 1049e0958; end: 1049e09f7;  */

void FUN_1049e0958(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1049e09f8; end: 1049e0a07;  */

void FUN_1049e09f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1049e0a08; end: 1049e0b67;  */

undefined1  [16] FUN_1049e0a08(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR_PTR_1126ade20;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  puVar3 = PTR_s_loggingToken_1125254c8;
  _objc_msgSend(puVar2,PTR_s_loggingToken_1125254c8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = puVar1;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(puVar1);
    _objc_release(puVar1);
  }
  auVar4._8_8_ = puVar3;
  auVar4._0_8_ = puVar2;
  return auVar4;
}



/* Entry: 1049e0b68; end: 1049e0c5b;  */

void FUN_1049e0b68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = PTR_PTR_1126ade20;
  _swift_getInitializedObjCClass(PTR_PTR_1126ade20);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = &UNK_1107bc7a8;
  _swift_allocObject(&UNK_1107bc7a8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  pcStack_50 = FUN_1049e0e70;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x1049e0fc8;
  puStack_58 = &UNK_1107bc7c0;
  puStack_48 = puVar2;
  __Block_copy(&puStack_70);
  puVar2 = puStack_48;
  func_0x0001049e1058(param_1,param_2);
  _swift_release(puVar2);
  _objc_msgSend(puVar1,PTR_s_loadServerConfigurationWithCompl_112604a70,ppuVar3);
  __Block_release(ppuVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 1049e0c5c; end: 1049e0e6f;  */

void FUN_1049e0c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_98 = *(long *)(lVar1 + -8);
  puVar9 = auStack_b0 + -(*(long *)(lStack_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lStack_a8 = *(long *)(lVar2 + -8);
  lVar10 = (long)puVar9 - (*(long *)(lStack_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  lStack_a0 = lVar2;
  func_0x0001000295c4(0);
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  puVar4 = &UNK_1107bc888;
  _swift_allocObject(&UNK_1107bc888,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_4;
  *(undefined8 *)(puVar4 + 0x20) = param_1;
  *(undefined8 *)(puVar4 + 0x28) = param_2;
  pcStack_70 = FUN_1049e127c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1107bc8a0;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  __Block_copy(ppuVar5);
  puVar4 = puStack_68;
  func_0x0001049e1058(param_3,param_4);
  _objc_retain(param_1);
  _swift_errorRetain(param_2);
  _swift_release(puVar4);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar10);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar6 = 0x112d4af88;
  FUN_1049e1288(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  _swift_retain(puVar4);
  uVar7 = 0x11309c6f0;
  func_0x0001048db364(0x11309c6f0);
  uVar8 = 0x112d4af98;
  FUN_1049e1288(0x112d4af98,0x1048e76ec,PTR___sSayxGSTsMc_11034dd08);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar9,&puStack_90,uVar7,uVar8,lVar1,uVar6);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar10,puVar9,ppuVar5);
  __Block_release(ppuVar5);
  _objc_release(uVar3);
  (**(code **)(lStack_98 + 8))(puVar9,lVar1);
  (**(code **)(lStack_a8 + 8))(lVar10,lStack_a0);
  return;
}



/* Entry: 1049e0e70; end: 1049e0e77;  */

void FUN_1049e0e70(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_98 = *(long *)(lVar1 + -8);
  puVar9 = auStack_b0 + -(*(long *)(lStack_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lStack_a8 = *(long *)(lVar2 + -8);
  lVar10 = (long)puVar9 - (*(long *)(lStack_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  lStack_a0 = lVar2;
  func_0x0001000295c4(0);
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  puVar4 = &UNK_1107bc888;
  _swift_allocObject(&UNK_1107bc888,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  *(undefined8 *)(puVar4 + 0x18) = uVar7;
  *(undefined8 *)(puVar4 + 0x20) = param_1;
  *(undefined8 *)(puVar4 + 0x28) = param_2;
  pcStack_70 = FUN_1049e127c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1107bc8a0;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  __Block_copy(ppuVar5);
  puVar4 = puStack_68;
  func_0x0001049e1058(uVar6,uVar7);
  _objc_retain(param_1);
  _swift_errorRetain(param_2);
  _swift_release(puVar4);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar10);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar6 = 0x112d4af88;
  FUN_1049e1288(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  _swift_retain(puVar4);
  uVar7 = 0x11309c6f0;
  func_0x0001048db364(0x11309c6f0);
  uVar8 = 0x112d4af98;
  FUN_1049e1288(0x112d4af98,0x1048e76ec,PTR___sSayxGSTsMc_11034dd08);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar9,&puStack_90,uVar7,uVar8,lVar1,uVar6);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar10,puVar9,ppuVar5);
  __Block_release(ppuVar5);
  _objc_release(uVar3);
  (**(code **)(lStack_98 + 8))(puVar9,lVar1);
  (**(code **)(lStack_a8 + 8))(lVar10,lStack_a0);
  return;
}



/* Entry: 1049e0e78; end: 1049e103f;  */

void FUN_1049e0e78(code *param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_1 == (code *)0x0) {
    return;
  }
  if ((param_3 == 0) || (param_4 != 0)) {
    func_0x0001049e1058(param_1,param_2);
    (*param_1)(0,param_4);
  }
  else {
    _objc_retain();
    func_0x0001049e1058(param_1,param_2);
    lVar1 = param_3;
    _objc_msgSend(param_3,PTR_s_loginTooltipText_1125254d8);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      func_0x0001049e12d8();
      puVar3 = &UNK_1107bc868;
      _swift_allocError(&UNK_1107bc868,lVar1,0,0);
      (*param_1)(0,puVar3);
      _swift_errorRelease(puVar3);
      _objc_release(param_3);
    }
    else {
      _objc_msgSend(param_3,PTR_s_isLoginTooltipEnabled_1125254e0);
      puVar3 = PTR_PTR_1126ae0c0;
      _objc_allocWithZone(PTR_PTR_1126ae0c0);
      _objc_msgSend();
      _objc_release(lVar1);
      puVar2 = puVar3;
      _objc_retain(puVar3);
      (*param_1)(puVar3,0);
      _objc_release(param_3);
      _objc_release(puVar2);
      _objc_release(puVar2);
    }
  }
  if (param_1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1049e1040; end: 1049e1067;  */

void FUN_1049e1040(long param_1,long param_2)

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



/* Entry: 1049e1068; end: 1049e10bb;  */

void FUN_1049e1068(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1049e10bc; end: 1049e10f7; -[_TtC12FBSDKCoreKit27ServerConfigurationProvider init] */

void FUN_1049e10bc(undefined8 param_1)

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



/* Entry: 1049e10f8; end: 1049e112b;  */

void FUN_1049e10f8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1049e112c; end: 1049e127b;  */

void FUN_1049e112c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130a3bf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4b8f0;
  _swift_getWitnessTable(&UNK_10dd4b8f0,&UNK_1107bc868);
  puRam00000001130a3bf0 = puVar1;
  return;
}



/* Entry: 1049e127c; end: 1049e1287;  */

void FUN_1049e127c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  if ((lVar3 == 0) || (lVar4 != 0)) {
    func_0x0001049e1058(pcVar1,uVar2);
    (*pcVar1)(0,lVar4);
  }
  else {
    _objc_retain();
    func_0x0001049e1058(pcVar1,uVar2);
    lVar4 = lVar3;
    _objc_msgSend(lVar3,PTR_s_loginTooltipText_1125254d8);
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      func_0x0001049e12d8();
      puVar6 = &UNK_1107bc868;
      _swift_allocError(&UNK_1107bc868,lVar4,0,0);
      (*pcVar1)(0,puVar6);
      _swift_errorRelease(puVar6);
      _objc_release(lVar3);
    }
    else {
      _objc_msgSend(lVar3,PTR_s_isLoginTooltipEnabled_1125254e0);
      puVar6 = PTR_PTR_1126ae0c0;
      _objc_allocWithZone(PTR_PTR_1126ae0c0);
      _objc_msgSend();
      _objc_release(lVar4);
      puVar5 = puVar6;
      _objc_retain(puVar6);
      (*pcVar1)(puVar6,0);
      _objc_release(lVar3);
      _objc_release(puVar5);
      _objc_release(puVar5);
    }
  }
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1049e1288; end: 1049e131f;  */

void FUN_1049e1288(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 1049e1320; end: 1049e139b;  */

undefined4 FUN_1049e1320(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
  lVar2 = 0x11309d4f0;
  func_0x0001048db364();
  _swift_initStaticObject();
  lVar3 = lVar2;
  _swift_retain();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_release(lVar2);
  _swift_bridgeObjectRelease(param_2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  return uVar1;
}



/* Entry: 1049e139c; end: 1049e13c7;  */

undefined1  [16] FUN_1049e139c(ulong param_1)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  
  pcVar1 = "auto_log_app_events_enabled";
  if ((param_1 & 1) == 0) {
    pcVar1 = "auto_log_app_events_default";
  }
  auVar2._8_8_ = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
  auVar2._0_8_ = 0xd00000000000001b;
  return auVar2;
}



/* Entry: 1049e13c8; end: 1049e1467;  */

uint FUN_1049e13c8(char *param_1,char *param_2)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  pcVar1 = "auto_log_app_events_default";
  if (*param_1 == '\0') {
    pcVar1 = "_audiencePropertyIds";
  }
  uVar2 = (ulong)pcVar1 | 0x8000000000000000;
  pcVar1 = "auto_log_app_events_default";
  if (*param_2 == '\0') {
    pcVar1 = "_audiencePropertyIds";
  }
  uVar3 = (ulong)pcVar1 | 0x8000000000000000;
  if (uVar2 == uVar3) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0x1b;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd00000000000001b,uVar2,0xd00000000000001b,uVar3,0);
  }
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar3);
  return uVar4 & 1;
}



/* Entry: 1049e1468; end: 1049e159b;  */

void FUN_1049e1468(void)

{
  char *pcVar1;
  char cVar2;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  pcVar1 = "auto_log_app_events_default";
  if (cVar2 == '\0') {
    pcVar1 = "_audiencePropertyIds";
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,0xd00000000000001b,(ulong)pcVar1 | 0x8000000000000000);
  _swift_bridgeObjectRelease((ulong)pcVar1 | 0x8000000000000000);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1049e159c; end: 1049e161b;  */

void FUN_1049e159c(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x11309d4f0;
  func_0x0001048db364();
  _swift_initStaticObject();
  lVar4 = lVar3;
  _swift_retain();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_release(lVar3);
  _swift_bridgeObjectRelease(uVar2);
  uVar5 = 1;
  if (lVar4 != 1) {
    uVar5 = 2;
  }
  uVar1 = 0;
  if (lVar4 != 0) {
    uVar1 = uVar5;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1049e161c; end: 1049e1653;  */

void FUN_1049e161c(undefined8 *param_1)

{
  char *pcVar1;
  char *unaff_x20;
  
  pcVar1 = "auto_log_app_events_default";
  if (*unaff_x20 == '\0') {
    pcVar1 = "_audiencePropertyIds";
  }
  *param_1 = 0xd00000000000001b;
  param_1[1] = (ulong)pcVar1 | 0x8000000000000000;
  return;
}



/* Entry: 1049e1654; end: 1049e1a73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1049e1654(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  plVar1 = (long *)(unaff_x20 + _DAT_1130a3c60);
  _swift_beginAccess(plVar1,auStack_78,0,0);
  lVar6 = *plVar1;
  lVar2 = plVar1[1];
  lVar7 = plVar1[2];
  lVar3 = plVar1[3];
  lVar11 = plVar1[4];
  lVar12 = lVar6;
  lVar13 = lVar2;
  lVar14 = lVar7;
  lVar15 = lVar3;
  lVar16 = lVar11;
  if (lVar6 == 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_1130a3c68);
    _swift_beginAccess(plVar1,auStack_90,0,0);
    lVar12 = *plVar1;
    if (lVar12 != 0) {
      lVar15 = plVar1[3];
      lVar16 = plVar1[4];
      lVar13 = plVar1[1];
      lVar14 = plVar1[2];
      _swift_unknownObjectRetain(lVar12);
      _swift_unknownObjectRetain(lVar13);
      _swift_unknownObjectRetain(lVar14);
      _swift_unknownObjectRetain(lVar15);
      _swift_unknownObjectRetain(lVar16);
      goto LAB_1049e1744;
    }
    goto LAB_1049e1a34;
  }
LAB_1049e1744:
  FUN_1049e1a74(lVar6,lVar2,lVar7,lVar3,lVar11);
  lVar6 = lVar13;
  _objc_msgSend(lVar13,PTR_s_cachedServerConfiguration_1125a76d0);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  puVar4 = PTR___sypN_11034f1a8;
  if (lVar7 == 0) {
    if (lRam000000011309ff68 != -1) {
      _swift_once(0x11309ff68,FUN_1049e33d0);
    }
    uVar5 = (uint)bRam0000000113815980;
    FUN_1049e368c(bRam0000000113815980,uRam0000000113815988,uRam0000000113815990);
    _swift_unknownObjectRelease(lVar16);
    _swift_unknownObjectRelease(lVar15);
    _swift_unknownObjectRelease(lVar14);
    _swift_unknownObjectRelease(lVar13);
    _swift_unknownObjectRelease(lVar12);
    goto LAB_1049e1a38;
  }
  lVar6 = lVar7;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (lVar7,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _objc_release();
  uVar5 = (uint)lVar7;
  if (*(long *)(lVar6 + 0x10) == 0) {
LAB_1049e189c:
    FUN_1049e1b00();
    if ((uVar5 & 0xff) == 2) {
      lVar7 = lVar16;
      FUN_1049e1d1c();
      uVar5 = (uint)lVar7;
      if ((uVar5 & 0xff) == 2) {
        if (*(long *)(lVar6 + 0x10) == 0) {
LAB_1049e1950:
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          _swift_bridgeObjectRetain(lVar6);
          uVar10 = 0;
          lVar7 = -0x2fffffffffffffe5;
          func_0x000100029284(0xd00000000000001b);
          if ((uVar10 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar6);
            goto LAB_1049e1950;
          }
          func_0x0001000bb420(*(long *)(lVar6 + 0x38) + lVar7 * 0x20,&uStack_b0);
          _swift_bridgeObjectRelease(lVar6);
        }
        _swift_bridgeObjectRelease(lVar6);
        if (lStack_98 == 0) {
          _swift_unknownObjectRelease(lVar16);
          _swift_unknownObjectRelease(lVar15);
          _swift_unknownObjectRelease(lVar14);
          _swift_unknownObjectRelease(lVar13);
          _swift_unknownObjectRelease(lVar12);
          func_0x00010006e7f4(&uStack_b0);
        }
        else {
          uVar8 = 0;
          func_0x0001002ed07c(0);
          puVar9 = &uStack_b8;
          _swift_dynamicCast(puVar9,&uStack_b0,puVar4 + 8,uVar8,6);
          if (((ulong)puVar9 & 1) != 0) goto LAB_1049e198c;
          _swift_unknownObjectRelease(lVar16);
          _swift_unknownObjectRelease(lVar15);
          _swift_unknownObjectRelease(lVar14);
          _swift_unknownObjectRelease(lVar13);
          _swift_unknownObjectRelease(lVar12);
        }
LAB_1049e1a34:
        uVar5 = 1;
        goto LAB_1049e1a38;
      }
    }
    _swift_unknownObjectRelease(lVar16);
    _swift_unknownObjectRelease(lVar15);
    _swift_unknownObjectRelease(lVar14);
    _swift_unknownObjectRelease(lVar13);
    _swift_unknownObjectRelease(lVar12);
    _swift_bridgeObjectRelease(lVar6);
  }
  else {
    _swift_bridgeObjectRetain(lVar6);
    uVar10 = 0;
    lVar7 = -0x2fffffffffffffe5;
    func_0x000100029284(0xd00000000000001b);
    if ((uVar10 & 1) == 0) {
      lVar7 = lVar6;
      _swift_bridgeObjectRelease();
      uVar5 = (uint)lVar7;
      goto LAB_1049e189c;
    }
    func_0x0001000bb420(*(long *)(lVar6 + 0x38) + lVar7 * 0x20,&uStack_b0);
    _swift_bridgeObjectRelease(lVar6);
    uVar8 = 0;
    func_0x0001002ed07c(0);
    puVar9 = &uStack_b8;
    _swift_dynamicCast(puVar9,&uStack_b0,puVar4 + 8,uVar8,6);
    uVar5 = (uint)puVar9;
    if (((ulong)puVar9 & 1) == 0) goto LAB_1049e189c;
    _swift_bridgeObjectRelease(lVar6);
LAB_1049e198c:
    uVar8 = uStack_b8;
    _objc_msgSend(uStack_b8,PTR_s_boolValue_1125a5698);
    uVar5 = (uint)uVar8;
    _swift_unknownObjectRelease(lVar16);
    _swift_unknownObjectRelease(lVar15);
    _swift_unknownObjectRelease(lVar14);
    _swift_unknownObjectRelease(lVar13);
    _swift_unknownObjectRelease(lVar12);
    _objc_release(uStack_b8);
  }
LAB_1049e1a38:
  return uVar5 & 1;
}



/* Entry: 1049e1a74; end: 1049e1acb;  */

void FUN_1049e1a74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_1 != 0) {
    _swift_unknownObjectRetain();
    _swift_unknownObjectRetain(param_2);
    _swift_unknownObjectRetain(param_3);
    _swift_unknownObjectRetain(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRetain_11034f540)(param_5);
    return;
  }
  return;
}



/* Entry: 1049e1acc; end: 1049e1aff; -[FBSDKSettings checkAutoLogAppEventsEnabled] */

uint FUN_1049e1acc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1049e1654();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1049e1b00; end: 1049e1d1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1049e1b00(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar7 = 0;
  plVar1 = (long *)(unaff_x20 + _DAT_1130a3c60);
  _swift_beginAccess(plVar1,auStack_98,0,0);
  lVar6 = *plVar1;
  lVar3 = plVar1[1];
  lVar2 = plVar1[2];
  lVar4 = plVar1[3];
  lVar11 = plVar1[4];
  lVar9 = lVar2;
  lVar10 = lVar6;
  lVar12 = lVar3;
  lVar13 = lVar4;
  lVar14 = lVar11;
  if (lVar6 == 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_1130a3c68);
    _swift_beginAccess(plVar1,auStack_b0,0,0);
    lVar10 = *plVar1;
    if (lVar10 == 0) {
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
      goto LAB_1049e1cf0;
    }
    lVar13 = plVar1[3];
    lVar14 = plVar1[4];
    lVar12 = plVar1[1];
    lVar9 = plVar1[2];
    _swift_unknownObjectRetain(lVar10);
    _swift_unknownObjectRetain(lVar12);
    _swift_unknownObjectRetain(lVar9);
    _swift_unknownObjectRetain(lVar13);
    _swift_unknownObjectRetain(lVar14);
  }
  _swift_unknownObjectRetain(lVar9);
  FUN_1049e1a74(lVar6,lVar3,lVar2,lVar4,lVar11);
  _swift_unknownObjectRelease(lVar14);
  _swift_unknownObjectRelease(lVar13);
  _swift_unknownObjectRelease(lVar9);
  _swift_unknownObjectRelease(lVar12);
  _swift_unknownObjectRelease(lVar10);
  uVar5 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f223790);
  lVar6 = lVar9;
  _objc_msgSend(lVar9,PTR_s_fb_objectForKey__1125c5f60,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _swift_unknownObjectRelease(lVar9);
  if (lVar6 == 0) {
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_d0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  lStack_68 = lStack_b8;
  uStack_70 = uStack_c0;
  if (lStack_b8 != 0) {
    uVar5 = 0;
    func_0x0001002ed07c(0);
    _swift_dynamicCast(&uStack_d0,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar5,6);
    uVar5 = uStack_d0;
    if ((uVar7 & 1) == 0) {
      return 2;
    }
    uVar8 = uStack_d0;
    _objc_msgSend(uStack_d0,PTR_s_boolValue_1125a5698);
    _objc_release(uVar5);
    return uVar8;
  }
LAB_1049e1cf0:
  func_0x00010006e7f4(&uStack_80);
  return 2;
}



/* Entry: 1049e1d1c; end: 1049e1e1b;  */

undefined8 FUN_1049e1d1c(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uVar1 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f223790);
  _objc_msgSend(param_1,PTR_s_fb_objectForInfoDictionaryKey__1125c5f58,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (param_1 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_60,param_1);
    _swift_unknownObjectRelease(param_1);
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
  }
  else {
    uVar1 = 0;
    func_0x0001002ed07c(0);
    puVar2 = &uStack_68;
    _swift_dynamicCast(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar2 & 1) != 0) {
      uVar1 = uStack_68;
      _objc_msgSend(uStack_68,PTR_s_boolValue_1125a5698);
      _objc_release(uStack_68);
      return uVar1;
    }
  }
  return 2;
}



/* Entry: 1049e1e1c; end: 1049e1fc7;  */

void FUN_1049e1e1c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130a3c28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4b9f0;
  _swift_getWitnessTable(&UNK_10dd4b9f0,&UNK_1107bc9a8);
  puRam00000001130a3c28 = puVar1;
  return;
}



/* Entry: 1049e1fc8; end: 1049e2217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e1fc8(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar6 = 0;
  __s10Foundation4DateVMa();
  lVar13 = *(long *)(lVar6 + -8);
  puStack_b8 = auStack_d0 + -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar1 = (long *)(unaff_x20 + _DAT_1130a3c60);
  _swift_beginAccess(plVar1,auStack_78,0,0);
  lVar8 = *plVar1;
  lVar3 = plVar1[1];
  lVar2 = plVar1[2];
  lVar4 = plVar1[3];
  lVar16 = plVar1[4];
  lVar10 = lVar3;
  lVar11 = lVar2;
  lVar12 = lVar4;
  lVar14 = lVar16;
  lVar15 = lVar8;
  lStack_c8 = lVar13;
  lStack_c0 = lVar6;
  if (lVar8 == 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_1130a3c68);
    _swift_beginAccess(plVar1,auStack_90,0,0);
    lVar15 = *plVar1;
    if (lVar15 == 0) {
      return;
    }
    lVar12 = plVar1[3];
    lVar14 = plVar1[4];
    lVar10 = plVar1[1];
    lVar11 = plVar1[2];
    _swift_unknownObjectRetain(lVar15);
    _swift_unknownObjectRetain(lVar10);
    _swift_unknownObjectRetain(lVar11);
    _swift_unknownObjectRetain(lVar12);
    _swift_unknownObjectRetain(lVar14);
  }
  _swift_unknownObjectRetain(lVar11);
  FUN_1049e1a74(lVar8,lVar3,lVar2,lVar4,lVar16);
  _swift_unknownObjectRelease(lVar14);
  _swift_unknownObjectRelease(lVar12);
  _swift_unknownObjectRelease(lVar11);
  _swift_unknownObjectRelease(lVar10);
  _swift_unknownObjectRelease(lVar15);
  uVar7 = 0xd00000000000002e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002e,0x800000010f223a00);
  lVar8 = lVar11;
  _objc_msgSend(lVar11,PTR_s_fb_objectForKey__1125c5f60,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  if (lVar8 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    puVar9 = &uStack_b0;
    func_0x00010006e7f4(puVar9);
    puVar5 = puStack_b8;
    __s10Foundation4DateVACycfC(puStack_b8);
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lStack_c8 + 8))(puVar5,lStack_c0);
    uVar7 = 0xd00000000000002e;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002e,0x800000010f223a00);
    _objc_msgSend(lVar11,PTR_s_fb_setObject_forKey__1125c5f88,puVar9,uVar7);
    _swift_unknownObjectRelease(lVar11);
    _objc_release(puVar9);
    _objc_release(uVar7);
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar8);
    _swift_unknownObjectRelease(lVar8);
    _swift_unknownObjectRelease(lVar11);
    func_0x00010006e7f4(&uStack_b0);
  }
  return;
}



/* Entry: 1049e2218; end: 1049e223f; -[FBSDKSettings recordInstall] */

void FUN_1049e2218(undefined8 param_1)

{
  _objc_retain();
  FUN_1049e1fc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049e2240; end: 1049e23ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e2240(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar15 = *(long *)(lVar3 + -8);
  lVar14 = (long)&lStack_b0 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar1 = (long *)(unaff_x20 + _DAT_1130a3c60);
  _swift_beginAccess(plVar1,auStack_78,0,0);
  lVar2 = *plVar1;
  lVar5 = plVar1[1];
  lVar6 = plVar1[2];
  lVar7 = plVar1[3];
  lVar8 = plVar1[4];
  lVar9 = lVar6;
  lVar10 = lVar2;
  lVar11 = lVar7;
  lVar12 = lVar5;
  lVar13 = lVar8;
  if (lVar2 == 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_1130a3c68);
    lStack_b0 = lVar5;
    lStack_a8 = lVar6;
    lStack_a0 = lVar7;
    lStack_98 = lVar8;
    _swift_beginAccess(plVar1,auStack_90,0,0);
    lVar10 = *plVar1;
    if (lVar10 == 0) {
      return;
    }
    lVar11 = plVar1[3];
    lVar13 = plVar1[4];
    lVar12 = plVar1[1];
    lVar9 = plVar1[2];
    _swift_unknownObjectRetain(lVar10);
    _swift_unknownObjectRetain(lVar12);
    _swift_unknownObjectRetain(lVar9);
    _swift_unknownObjectRetain(lVar11);
    _swift_unknownObjectRetain(lVar13);
    lVar5 = lStack_b0;
    lVar6 = lStack_a8;
    lVar7 = lStack_a0;
    lVar8 = lStack_98;
  }
  FUN_1049e1a74(lVar2,lVar5,lVar6,lVar7,lVar8);
  _swift_unknownObjectRelease(lVar13);
  _swift_unknownObjectRelease(lVar11);
  _swift_unknownObjectRelease(lVar12);
  _swift_unknownObjectRelease(lVar10);
  __s10Foundation4DateVACycfC(lVar14);
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
  (**(code **)(lVar15 + 8))(lVar14,lVar3);
  uVar4 = 0xd000000000000043;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000043,0x800000010f223a30);
  _objc_msgSend(lVar9,PTR_s_fb_setObject_forKey__1125c5f88,lVar10,uVar4);
  _objc_release(lVar10);
  _objc_release(uVar4);
  _swift_unknownObjectRelease(lVar9);
  return;
}



/* Entry: 1049e2400; end: 1049e2427; -[FBSDKSettings recordSetAdvertiserTrackingEnabled] */

void FUN_1049e2400(undefined8 param_1)

{
  _objc_retain();
  FUN_1049e2240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049e2428; end: 1049e271f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e2428(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  plVar1 = (long *)(unaff_x20 + _DAT_1130a3c60);
  _swift_beginAccess(plVar1,auStack_98,0,0);
  puVar13 = PTR___sSSN_11034da80;
  lVar6 = *plVar1;
  lVar3 = plVar1[1];
  lVar2 = plVar1[2];
  lVar4 = plVar1[3];
  lVar9 = plVar1[4];
  lVar7 = lVar9;
  lVar8 = lVar4;
  lVar10 = lVar6;
  lVar11 = lVar3;
  lVar12 = lVar2;
  if (lVar6 == 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_1130a3c68);
    _swift_beginAccess(plVar1,auStack_b0,0,0);
    lVar10 = *plVar1;
    if (lVar10 != 0) {
      lVar8 = plVar1[3];
      lVar7 = plVar1[4];
      lVar11 = plVar1[1];
      lVar12 = plVar1[2];
      _swift_unknownObjectRetain(lVar10);
      _swift_unknownObjectRetain(lVar11);
      _swift_unknownObjectRetain(lVar12);
      _swift_unknownObjectRetain(lVar8);
      _swift_unknownObjectRetain(lVar7);
      goto LAB_1049e2510;
    }
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
LAB_1049e2510:
    _swift_unknownObjectRetain(lVar7);
    FUN_1049e1a74(lVar6,lVar3,lVar2,lVar4,lVar9);
    _swift_unknownObjectRelease(lVar7);
    _swift_unknownObjectRelease(lVar8);
    _swift_unknownObjectRelease(lVar12);
    _swift_unknownObjectRelease(lVar11);
    _swift_unknownObjectRelease(lVar10);
    uVar5 = 0xd000000000000025;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f2237b0);
    lVar6 = lVar7;
    _objc_msgSend(lVar7,PTR_s_fb_objectForInfoDictionaryKey__1125c5f58,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _swift_unknownObjectRelease(lVar7);
    if (lVar6 == 0) {
      uStack_c8 = 0;
      uStack_d0 = 0;
      lStack_b8 = 0;
      uStack_c0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_d0,lVar6);
      _swift_unknownObjectRelease(lVar6);
    }
    puVar13 = PTR___sSSN_11034da80;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    lStack_68 = lStack_b8;
    uStack_70 = uStack_c0;
    if (lStack_b8 != 0) {
      func_0x00010006e7f4(&uStack_80);
      goto LAB_1049e2674;
    }
  }
  func_0x00010006e7f4(&uStack_80);
  lVar6 = 0x11309d598;
  func_0x0001048db364();
  _swift_allocObject();
  *(undefined8 *)(lVar6 + 0x18) = 2;
  *(undefined8 *)(lVar6 + 0x10) = 1;
  *(undefined **)(lVar6 + 0x38) = puVar13;
  *(undefined8 *)(lVar6 + 0x20) = 0xd0000000000000b5;
  *(undefined8 *)(lVar6 + 0x28) = 0x800000010f228090;
  __ss5print_9separator10terminatoryypd_S2StF();
  _swift_bridgeObjectRelease(lVar6);
LAB_1049e2674:
  lVar6 = _DAT_1130a3c88;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3c88,&uStack_80,0,0);
  if ((*(byte *)(unaff_x20 + lVar6) == 2) || ((*(byte *)(unaff_x20 + lVar6) & 1) == 0)) {
    lVar6 = 0x11309d598;
    func_0x0001048db364();
    _swift_allocObject();
    *(undefined8 *)(lVar6 + 0x18) = 2;
    *(undefined8 *)(lVar6 + 0x10) = 1;
    *(undefined **)(lVar6 + 0x38) = puVar13;
    *(undefined8 *)(lVar6 + 0x20) = 0xd0000000000000de;
    *(undefined8 *)(lVar6 + 0x28) = 0x800000010f228150;
    __ss5print_9separator10terminatoryypd_S2StF();
    _swift_bridgeObjectRelease(lVar6);
  }
  return;
}



/* Entry: 1049e2720; end: 1049e2747; -[FBSDKSettings logWarnings] */

void FUN_1049e2720(undefined8 param_1)

{
  _objc_retain();
  FUN_1049e2428();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049e2748; end: 1049e2d27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e2748(void)

{
  ulong *puVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long unaff_x20;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  byte bStack_e1;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [40];
  
  puVar1 = (ulong *)(unaff_x20 + _DAT_1130a3c60);
  _swift_beginAccess(puVar1,auStack_88,0,0);
  uVar15 = *puVar1;
  uVar4 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  uVar14 = puVar1[4];
  uVar16 = uVar4;
  uVar17 = uVar6;
  uVar18 = uVar14;
  uVar19 = uVar15;
  uVar20 = uVar7;
  if (uVar15 == 0) {
    puVar1 = (ulong *)(unaff_x20 + _DAT_1130a3c68);
    _swift_beginAccess(puVar1,auStack_a0,0,0);
    uVar19 = *puVar1;
    if (uVar19 == 0) {
      return;
    }
    uVar20 = puVar1[3];
    uVar18 = puVar1[4];
    uVar16 = puVar1[1];
    uVar17 = puVar1[2];
    _swift_unknownObjectRetain(uVar19);
    _swift_unknownObjectRetain(uVar16);
    _swift_unknownObjectRetain(uVar17);
    _swift_unknownObjectRetain(uVar20);
    _swift_unknownObjectRetain(uVar18);
  }
  FUN_1049e1a74(uVar15,uVar4,uVar6,uVar7,uVar14);
  FUN_1049e1654();
  uVar6 = 2;
  if ((uVar15 & 1) == 0) {
    uVar6 = 0;
  }
  if (lRam000000011309ff70 != -1) {
    _swift_once(0x11309ff70,FUN_1049e34c0);
  }
  uVar4 = (ulong)bRam0000000113815998;
  FUN_1049e368c(uVar4,uRam00000001138159a0,uRam00000001138159a8);
  uVar15 = 4;
  if ((uVar4 & 1) == 0) {
    uVar15 = 0;
  }
  uVar15 = uVar15 | uVar6;
  _swift_unknownObjectRetain(uVar17);
  uVar5 = 0xd000000000000025;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f2239d0);
  uVar6 = uVar17;
  _objc_msgSend(uVar17,PTR_s_fb_integerForKey__1125252b0,uVar5);
  _swift_unknownObjectRelease(uVar17);
  _objc_release(uVar5);
  if (uVar15 == uVar6) {
    _swift_unknownObjectRelease(uVar18);
    _swift_unknownObjectRelease(uVar20);
    _swift_unknownObjectRelease(uVar17);
    _swift_unknownObjectRelease(uVar16);
    _swift_unknownObjectRelease(uVar19);
    return;
  }
  _swift_unknownObjectRetain(uVar17);
  uVar5 = 0xd000000000000025;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f2239d0);
  puVar12 = PTR_s_fb_setInteger_forKey__1125252b8;
  _objc_msgSend(uVar17,PTR_s_fb_setInteger_forKey__1125252b8,uVar15,uVar5);
  _swift_unknownObjectRelease(uVar17);
  _objc_release(uVar5);
  bVar2 = bRam00000001130a2249;
  uVar7 = (ulong)bRam00000001130a2248;
  func_0x0001049e3e50(uVar7);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(puVar12);
  uVar4 = uVar18;
  puVar13 = (undefined8 *)PTR_s_fb_objectForInfoDictionaryKey__1125c5f58;
  _objc_msgSend(uVar18,PTR_s_fb_objectForInfoDictionaryKey__1125c5f58,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  if (uVar4 == 0) {
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar4);
    _swift_unknownObjectRelease(uVar4);
  }
  uStack_b8 = uStack_d8;
  uStack_c0 = uStack_e0;
  lStack_a8 = lStack_c8;
  uStack_b0 = uStack_d0;
  if (lStack_c8 == 0) {
    func_0x00010006e7f4(&uStack_c0);
LAB_1049e2a1c:
    uVar4 = 0;
  }
  else {
    pbVar8 = &bStack_e1;
    puVar13 = &uStack_c0;
    _swift_dynamicCast(pbVar8,puVar13,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
    if (((ulong)pbVar8 & 1) == 0) goto LAB_1049e2a1c;
    uVar4 = 1;
    bVar2 = bStack_e1;
  }
  bVar3 = bRam00000001130a224b;
  uVar14 = (ulong)bRam00000001130a224a;
  func_0x0001049e3e50(uVar14);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(puVar13);
  uVar7 = uVar18;
  _objc_msgSend(uVar18,PTR_s_fb_objectForInfoDictionaryKey__1125c5f58,uVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  if (uVar7 == 0) {
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar7);
    _swift_unknownObjectRelease(uVar7);
  }
  uStack_b8 = uStack_d8;
  uStack_c0 = uStack_e0;
  lStack_a8 = lStack_c8;
  uStack_b0 = uStack_d0;
  if (lStack_c8 == 0) {
    func_0x00010006e7f4(&uStack_c0);
  }
  else {
    pbVar8 = &bStack_e1;
    _swift_dynamicCast(pbVar8,&uStack_c0,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
    if (((ulong)pbVar8 & 1) != 0) {
      uVar7 = 2;
      bVar3 = bStack_e1;
      goto LAB_1049e2aec;
    }
  }
  uVar7 = 0;
LAB_1049e2aec:
  uVar14 = 2;
  if (bVar3 == 0) {
    uVar14 = 0;
  }
  lVar9 = 0x1130a2c40;
  func_0x0001048db364();
  _swift_initStackObject();
  *(undefined8 *)(lVar9 + 0x18) = 8;
  *(undefined8 *)(lVar9 + 0x10) = 4;
  lVar10 = lRam000000011309ff28;
  _swift_unknownObjectRetain(uVar20);
  if (lVar10 != -1) {
    _swift_once(0x11309ff28,FUN_1049e2d50);
  }
  uVar5 = uRam00000001130a3c30;
  puVar12 = PTR___sSiN_11034deb0;
  *(undefined **)(lVar9 + 0x40) = PTR___sSiN_11034deb0;
  *(undefined8 *)(lVar9 + 0x20) = uVar5;
  *(ulong *)(lVar9 + 0x28) = uVar7 | uVar4;
  lVar10 = lRam000000011309ff30;
  _objc_retain();
  if (lVar10 != -1) {
    _swift_once(0x11309ff30,0x1049e2d7c);
  }
  uVar5 = uRam00000001130a3c38;
  *(undefined **)(lVar9 + 0x68) = puVar12;
  *(undefined8 *)(lVar9 + 0x48) = uVar5;
  *(ulong *)(lVar9 + 0x50) = uVar14 | bVar2;
  lVar10 = lRam000000011309ff38;
  _objc_retain();
  if (lVar10 != -1) {
    _swift_once(0x11309ff38,0x1049e2dac);
  }
  uVar5 = uRam00000001130a3c40;
  *(undefined **)(lVar9 + 0x90) = puVar12;
  *(undefined8 *)(lVar9 + 0x70) = uVar5;
  *(ulong *)(lVar9 + 0x78) = uVar6;
  lVar10 = lRam000000011309ff40;
  _objc_retain();
  if (lVar10 != -1) {
    _swift_once(0x11309ff40,0x1049e2ddc);
  }
  uVar5 = uRam00000001130a3c48;
  *(undefined **)(lVar9 + 0xb8) = puVar12;
  *(undefined8 *)(lVar9 + 0x98) = uVar5;
  *(ulong *)(lVar9 + 0xa0) = uVar15;
  _objc_retain();
  lVar10 = lVar9;
  FUN_10499c188(lVar9);
  _swift_setDeallocating(lVar9);
  uVar5 = 0x1130a2938;
  func_0x0001048db364(0x1130a2938);
  _swift_arrayDestroy(lVar9 + 0x20,4,uVar5);
  uVar11 = 0;
  FUN_1048db924(0);
  uVar5 = uVar11;
  func_0x0001049ac144();
  lVar9 = lVar10;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar10,uVar11,PTR___sypN_11034f1a8 + 8,uVar5);
  _swift_bridgeObjectRelease(lVar10);
  _objc_msgSend(uVar20,PTR_s_logInternalEvent_parameters_isIm_112607d68,
                &PTR____CFConstantStringClassReference_110da0e18,lVar9,1);
  _swift_unknownObjectRelease(uVar18);
  _swift_unknownObjectRelease(uVar17);
  _swift_unknownObjectRelease(uVar16);
  _swift_unknownObjectRelease(uVar19);
  _swift_unknownObjectRelease_n(uVar20,2);
  _objc_release(lVar9);
  return;
}



/* Entry: 1049e2d28; end: 1049e2d4f; -[FBSDKSettings logIfSDKSettingsChanged] */

void FUN_1049e2d28(undefined8 param_1)

{
  _objc_retain();
  FUN_1049e2748();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


