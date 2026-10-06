/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1049e2d50; end: 1049e2e0b;  */

void FUN_1049e2d50(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x6567617375;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6567617375,0xe500000000000000);
  uRam00000001130a3c30 = uVar1;
  return;
}



/* Entry: 1049e2e0c; end: 1049e2e17;  */

void FUN_1049e2e0c(void)

{
  return;
}



/* Entry: 1049e2e18; end: 1049e2e43;  */

void FUN_1049e2e18(void)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dd4bbf8;
  _swift_getKeyPath();
  uRam0000000113815940 = 0;
  puRam0000000113815948 = puVar1;
  return;
}



/* Entry: 1049e2e44; end: 1049e2ea7;  */

void FUN_1049e2e44(void)

{
  return;
}



/* Entry: 1049e2ea8; end: 1049e2ed7;  */

void FUN_1049e2ea8(void)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dd4bbb8;
  _swift_getKeyPath();
  uRam0000000113815950 = 1;
  puRam0000000113815958 = puVar1;
  return;
}



/* Entry: 1049e2ed8; end: 1049e2f37;  */

undefined8 FUN_1049e2ed8(void)

{
  if (lRam000000011309ff50 != -1) {
    _swift_once(0x11309ff50,FUN_1049e2ea8);
  }
  return 0x113815950;
}



/* Entry: 1049e2f38; end: 1049e2f67;  */

void FUN_1049e2f38(void)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dd4bb88;
  _swift_getKeyPath();
  uRam0000000113815960 = 2;
  puRam0000000113815968 = puVar1;
  return;
}



/* Entry: 1049e2f68; end: 1049e2fc7;  */

undefined8 FUN_1049e2f68(void)

{
  if (lRam000000011309ff58 != -1) {
    _swift_once(0x11309ff58,FUN_1049e2f38);
  }
  return 0x113815960;
}



/* Entry: 1049e2fc8; end: 1049e2ff7;  */

void FUN_1049e2fc8(void)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dd4bb58;
  _swift_getKeyPath();
  uRam0000000113815970 = 3;
  puRam0000000113815978 = puVar1;
  return;
}



/* Entry: 1049e2ff8; end: 1049e30af;  */

undefined8 FUN_1049e2ff8(void)

{
  if (lRam000000011309ff60 != -1) {
    _swift_once(0x11309ff60,FUN_1049e2fc8);
  }
  return 0x113815970;
}



/* Entry: 1049e30b0; end: 1049e335f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049e30b0(uint param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  long lStack_108;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar2 = unaff_x20;
  _objc_retain();
  pcVar3 = (code *)&lStack_90;
  plVar5 = (long *)&stack0xffffffffffffff20;
  _swift_readAtKeyPath(pcVar3,plVar5,param_2);
  lVar8 = *plVar5;
  lVar9 = plVar5[1];
  _swift_bridgeObjectRetain(lVar9);
  (*pcVar3)(&lStack_90,0);
  _objc_release(lVar2);
  if (lVar9 == 0) {
    plVar5 = (long *)(lVar2 + _DAT_1130a3c60);
    _swift_beginAccess(plVar5,auStack_a8,0,0);
    lVar8 = *plVar5;
    lVar6 = plVar5[1];
    lVar9 = plVar5[2];
    lVar1 = plVar5[3];
    lVar7 = plVar5[4];
    lVar10 = lVar9;
    lVar11 = lVar1;
    lVar12 = lVar7;
    lVar13 = lVar8;
    lStack_108 = lVar6;
    if (lVar8 == 0) {
      plVar5 = (long *)(lVar2 + _DAT_1130a3c68);
      _swift_beginAccess(plVar5,auStack_c0,0,0);
      lVar13 = *plVar5;
      if (lVar13 == 0) {
        lVar8 = 0;
        lVar9 = 0;
        goto LAB_1049e332c;
      }
      lVar11 = plVar5[3];
      lVar12 = plVar5[4];
      lStack_108 = plVar5[1];
      lVar10 = plVar5[2];
      _swift_unknownObjectRetain(lVar13);
      _swift_unknownObjectRetain(lStack_108);
      _swift_unknownObjectRetain(lVar10);
      _swift_unknownObjectRetain(lVar11);
      _swift_unknownObjectRetain(lVar12);
    }
    _swift_unknownObjectRetain(lVar12);
    FUN_1049e1a74(lVar8,lVar6,lVar9,lVar1,lVar7);
    _swift_unknownObjectRelease(lVar12);
    _swift_unknownObjectRelease(lVar11);
    _swift_unknownObjectRelease(lVar10);
    _swift_unknownObjectRelease(lStack_108);
    _swift_unknownObjectRelease(lVar13);
    uVar4 = (ulong)param_1;
    func_0x0001049e3e50(uVar4);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(lVar6);
    lVar8 = lVar12;
    _objc_msgSend(lVar12,PTR_s_fb_objectForInfoDictionaryKey__1125c5f58,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (lVar8 == 0) {
      uStack_d8 = 0;
      unaff_x20 = 0;
      lStack_c8 = 0;
      uStack_d0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&stack0xffffffffffffff20,lVar8);
      _swift_unknownObjectRelease(lVar8);
    }
    lStack_88 = uStack_d8;
    lStack_78 = lStack_c8;
    uStack_80 = uStack_d0;
    lStack_90 = unaff_x20;
    if (lStack_c8 == 0) {
      func_0x00010006e7f4(&lStack_90);
      lVar8 = 0;
      lVar9 = 0;
    }
    else {
      plVar5 = &lStack_f0;
      _swift_dynamicCast(plVar5,&lStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      lVar8 = lStack_f0;
      lVar9 = lStack_e8;
      if ((int)plVar5 == 0) {
        lVar8 = 0;
        lVar9 = 0;
      }
    }
    lStack_90 = lVar8;
    lStack_88 = lVar9;
    _swift_bridgeObjectRetain(lVar9);
    _objc_retain(lVar2);
    _swift_setAtReferenceWritableKeyPath(&stack0xffffffffffffff20,param_2,&lStack_90);
    _objc_release(lVar2);
    _swift_unknownObjectRelease(lVar12);
  }
LAB_1049e332c:
  auVar14._8_8_ = lVar9;
  auVar14._0_8_ = lVar8;
  return auVar14;
}



/* Entry: 1049e3360; end: 1049e33bb;  */

void FUN_1049e3360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_3;
  uStack_30 = param_4;
  _swift_bridgeObjectRetain(param_4);
  _objc_retain();
  _swift_setAtReferenceWritableKeyPath(&stack0xffffffffffffffd8,param_2,&uStack_38);
  _objc_release(unaff_x20);
  FUN_1049e2748();
  return;
}



/* Entry: 1049e33bc; end: 1049e33cf;  */

void FUN_1049e33bc(void)

{
  return;
}



/* Entry: 1049e33d0; end: 1049e3407;  */

void FUN_1049e33d0(void)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dd4bc38;
  _swift_getKeyPath();
  uRam0000000113815980 = 4;
  puRam0000000113815988 = puVar1;
  uRam0000000113815990 = 1;
  return;
}



/* Entry: 1049e3408; end: 1049e34bf;  */

void FUN_1049e3408(void)

{
  return;
}



/* Entry: 1049e34c0; end: 1049e34f7;  */

void FUN_1049e34c0(void)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dd4bc18;
  _swift_getKeyPath();
  uRam0000000113815998 = 5;
  puRam00000001138159a0 = puVar1;
  uRam00000001138159a8 = 1;
  return;
}



/* Entry: 1049e34f8; end: 1049e35a7;  */

undefined8 FUN_1049e34f8(void)

{
  if (lRam000000011309ff70 != -1) {
    _swift_once(0x11309ff70,FUN_1049e34c0);
  }
  return 0x113815998;
}



/* Entry: 1049e35a8; end: 1049e35db;  */

void FUN_1049e35a8(void)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dd4bb18;
  _swift_getKeyPath();
  uRam00000001138159b0 = 6;
  puRam00000001138159b8 = puVar1;
  uRam00000001138159c0 = 0;
  return;
}



/* Entry: 1049e35dc; end: 1049e368b;  */

undefined8 FUN_1049e35dc(void)

{
  if (lRam000000011309ff78 != -1) {
    _swift_once(0x11309ff78,FUN_1049e35a8);
  }
  return 0x1138159b0;
}



/* Entry: 1049e368c; end: 1049e3bbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1049e368c(uint param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  long unaff_x20;
  long lVar14;
  long lVar15;
  long lVar16;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_108;
  long lStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar5 = unaff_x20;
  _objc_retain();
  pcVar6 = (code *)&lStack_90;
  pbVar12 = &stack0xffffffffffffff10;
  _swift_readAtKeyPath(pcVar6,pbVar12,param_2);
  bVar3 = *pbVar12;
  (*pcVar6)(&lStack_90,0);
  _objc_release(lVar5);
  if (bVar3 != 2) {
    param_3 = (uint)bVar3;
    goto LAB_1049e39dc;
  }
  plVar10 = (long *)(lVar5 + _DAT_1130a3c60);
  puVar13 = auStack_a8;
  _swift_beginAccess(plVar10,puVar13,0,0);
  lVar14 = *plVar10;
  lVar1 = plVar10[1];
  lVar11 = plVar10[2];
  lVar2 = plVar10[3];
  lVar16 = plVar10[4];
  lVar15 = lVar11;
  lStack_128 = lVar2;
  lStack_120 = lVar1;
  lStack_118 = lVar14;
  lStack_108 = lVar16;
  if (lVar14 == 0) {
    plVar10 = (long *)(lVar5 + _DAT_1130a3c68);
    puVar13 = auStack_c0;
    _swift_beginAccess(plVar10,puVar13,0,0);
    lStack_118 = *plVar10;
    if (lStack_118 == 0) goto LAB_1049e39dc;
    lStack_108 = plVar10[4];
    lVar15 = plVar10[2];
    lStack_128 = plVar10[3];
    lStack_120 = plVar10[1];
    _swift_unknownObjectRetain();
    _swift_unknownObjectRetain(lStack_120);
    _swift_unknownObjectRetain(lVar15);
    _swift_unknownObjectRetain(lStack_128);
    _swift_unknownObjectRetain(lStack_108);
  }
  uVar7 = (ulong)param_1;
  func_0x0001049e3e50(uVar7);
  FUN_1049e1a74(lVar14,lVar1,lVar11,lVar2,lVar16);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,puVar13);
  _swift_bridgeObjectRelease(puVar13);
  lVar14 = lVar15;
  plVar10 = (long *)PTR_s_fb_objectForKey__1125c5f60;
  _objc_msgSend(lVar15,PTR_s_fb_objectForKey__1125c5f60,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  if (lVar14 == 0) {
    uStack_e8 = 0;
    unaff_x20 = 0;
    lStack_d8 = 0;
    uStack_e0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&stack0xffffffffffffff10,lVar14);
    _swift_unknownObjectRelease(lVar14);
  }
  puVar4 = PTR___sypN_11034f1a8;
  uStack_88 = uStack_e8;
  lStack_78 = lStack_d8;
  uStack_80 = uStack_e0;
  lStack_90 = unaff_x20;
  if (lStack_d8 == 0) {
    func_0x00010006e7f4(&lStack_90);
LAB_1049e38b0:
    uVar7 = (ulong)param_1;
    func_0x0001049e3e50(uVar7);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(plVar10);
    lVar14 = lStack_108;
    _objc_msgSend(lStack_108,PTR_s_fb_objectForInfoDictionaryKey__1125c5f58,uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    if (lVar14 == 0) {
      uStack_e8 = 0;
      unaff_x20 = 0;
      lStack_d8 = 0;
      uStack_e0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&stack0xffffffffffffff10,lVar14);
      _swift_unknownObjectRelease(lVar14);
    }
    uStack_88 = uStack_e8;
    lStack_78 = lStack_d8;
    uStack_80 = uStack_e0;
    lStack_90 = unaff_x20;
    if (lStack_d8 != 0) {
      uVar8 = 0;
      func_0x0001002ed07c(0);
      plVar10 = &lStack_c8;
      _swift_dynamicCast(plVar10,&lStack_90,puVar4 + 8,uVar8,6);
      lVar14 = lStack_c8;
      if ((int)plVar10 == 0) {
        lVar14 = 0;
      }
      goto joined_r0x0001049e3954;
    }
    func_0x00010006e7f4(&lStack_90);
    lVar14 = 0;
  }
  else {
    uVar8 = 0;
    func_0x0001002ed07c(0);
    plVar9 = &lStack_f8;
    plVar10 = &lStack_90;
    _swift_dynamicCast(plVar9,plVar10,puVar4 + 8,uVar8,6);
    lVar14 = lStack_f8;
    if (((ulong)plVar9 & 1) == 0) goto LAB_1049e38b0;
joined_r0x0001049e3954:
    if (lVar14 != 0) {
      lVar11 = lVar14;
      _objc_msgSend(lVar14,PTR_s_boolValue_1125a5698);
      param_3 = (uint)lVar11;
    }
  }
  _objc_retain(lVar5);
  _swift_setAtReferenceWritableKeyPath(&lStack_90,param_2,&stack0xffffffffffffff10);
  _objc_release(lVar5);
  _objc_release(lVar14);
  _swift_unknownObjectRelease(lStack_108);
  _swift_unknownObjectRelease(lStack_128);
  _swift_unknownObjectRelease(lVar15);
  _swift_unknownObjectRelease(lStack_120);
  _swift_unknownObjectRelease(lStack_118);
LAB_1049e39dc:
  return param_3 & 1;
}



/* Entry: 1049e3bc0; end: 1049e4073;  */

undefined1 * FUN_1049e3bc0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 1049e4074; end: 1049e4077;  */

ulong FUN_1049e4074(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x11309d4f0;
  func_0x0001048db364();
  _swift_initStaticObject();
  uVar2 = uVar1;
  _swift_retain();
  __ss30_findStringSwitchCaseWithCache5cases6string5cacheSiSays06StaticB0VG_SSs07_OpaquebcF0VztF();
  _swift_release(uVar1);
  _swift_bridgeObjectRelease(param_2);
  if (0x12 < uVar2) {
    uVar2 = 0x13;
  }
  return uVar2;
}



/* Entry: 1049e4078; end: 1049e40fb;  */

uint FUN_1049e4078(byte *param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  
  uVar2 = (ulong)*param_1;
  uVar4 = (ulong)*param_2;
  func_0x0001049e3e50();
  pbVar3 = param_2;
  func_0x0001049e3e50();
  if (uVar2 == uVar4 && param_2 == pbVar3) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar2,param_2,uVar4,pbVar3,0);
    uVar1 = (uint)uVar2;
  }
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(pbVar3);
  return uVar1 & 1;
}



/* Entry: 1049e40fc; end: 1049e424b;  */

void FUN_1049e40fc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x0001049e3e50(uVar1);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1049e424c; end: 1049e42c7;  */

ulong FUN_1049e424c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x11309d4f0;
  func_0x0001048db364();
  _swift_initStaticObject();
  uVar2 = uVar1;
  _swift_retain();
  __ss30_findStringSwitchCaseWithCache5cases6string5cacheSiSays06StaticB0VG_SSs07_OpaquebcF0VztF();
  _swift_release(uVar1);
  _swift_bridgeObjectRelease(param_2);
  if (0x12 < uVar2) {
    uVar2 = 0x13;
  }
  return uVar2;
}



/* Entry: 1049e42c8; end: 1049e446f;  */

void FUN_1049e42c8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130a3c50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4bc6c;
  _swift_getWitnessTable(&UNK_10dd4bc6c,&UNK_1107bcbe0);
  puRam00000001130a3c50 = puVar1;
  return;
}



/* Entry: 1049e4470; end: 1049e46a3;  */

uint FUN_1049e4470(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 auStack_98 [72];
  
  if (*(long *)(param_2 + 0x10) != 0) {
    uVar10 = *(undefined8 *)(param_2 + 0x28);
    uVar1 = param_1;
    lVar5 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    __ss6HasherV5_seedABSi_tcfC(auStack_98,uVar10);
    puVar2 = auStack_98;
    __sSS4hash4intoys6HasherVz_tF(puVar2,uVar1,lVar5);
    __ss6HasherV9_finalizeSiyF();
    _swift_bridgeObjectRelease(lVar5);
    uVar8 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
    uVar11 = (ulong)puVar2 & (uVar8 ^ 0xffffffffffffffff);
    if ((*(ulong *)(param_2 + 0x38 + (uVar11 >> 3 & 0xfffffffffffff8)) >> (uVar11 & 0x3f) & 1) != 0)
    {
      while( true ) {
        uVar3 = *(ulong *)(*(long *)(param_2 + 0x30) + uVar11 * 8);
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        uVar4 = param_1;
        uVar6 = uVar1;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        if (uVar3 == uVar4 && uVar1 == uVar6) break;
        uVar7 = uVar1;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar3,uVar1,uVar4,uVar6,0);
        uVar9 = (uint)uVar3;
        _swift_bridgeObjectRelease(uVar1);
        _swift_bridgeObjectRelease(uVar6);
        if (((uVar3 & 1) != 0) ||
           (uVar11 = uVar11 + 1 & ~uVar8, uVar1 = uVar7,
           (*(ulong *)(param_2 + 0x38 + (uVar11 >> 3 & 0xfffffffffffff8)) >> (uVar11 & 0x3f) & 1) ==
           0)) goto LAB_1049e4588;
      }
      _swift_bridgeObjectRelease(uVar1);
      _swift_bridgeObjectRelease(uVar6);
      uVar9 = 1;
      goto LAB_1049e4588;
    }
  }
  uVar9 = 0;
LAB_1049e4588:
  return uVar9 & 1;
}



/* Entry: 1049e46a4; end: 1049e46b3;  */

void FUN_1049e46a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  return;
}



/* Entry: 1049e46b4; end: 1049e46ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1049e46b4(void)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined *puVar4;
  byte bVar5;
  undefined8 uVar6;
  byte bVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  uint uVar17;
  long unaff_x20;
  long lVar18;
  long lVar19;
  long lVar20;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_108;
  long lStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  if (lRam000000011309ff68 != -1) {
    _swift_once(0x11309ff68,FUN_1049e33d0);
  }
  bVar7 = bRam0000000113815990;
  uVar6 = uRam0000000113815988;
  bVar5 = bRam0000000113815980;
  uVar17 = (uint)bRam0000000113815990;
  lVar8 = unaff_x20;
  _objc_retain();
  pcVar9 = (code *)&lStack_90;
  pbVar15 = &stack0xffffffffffffff10;
  _swift_readAtKeyPath(pcVar9,pbVar15,uVar6);
  bVar3 = *pbVar15;
  (*pcVar9)(&lStack_90,0);
  _objc_release(lVar8);
  if (bVar3 != 2) {
    uVar17 = (uint)bVar3;
    goto LAB_1049e39dc;
  }
  plVar13 = (long *)(lVar8 + _DAT_1130a3c60);
  puVar16 = auStack_a8;
  _swift_beginAccess(plVar13,puVar16,0,0);
  lVar18 = *plVar13;
  lVar1 = plVar13[1];
  lVar14 = plVar13[2];
  lVar2 = plVar13[3];
  lVar20 = plVar13[4];
  lVar19 = lVar14;
  lStack_128 = lVar2;
  lStack_120 = lVar1;
  lStack_118 = lVar18;
  lStack_108 = lVar20;
  if (lVar18 == 0) {
    plVar13 = (long *)(lVar8 + _DAT_1130a3c68);
    puVar16 = auStack_c0;
    _swift_beginAccess(plVar13,puVar16,0,0);
    lStack_118 = *plVar13;
    if (lStack_118 == 0) goto LAB_1049e39dc;
    lStack_108 = plVar13[4];
    lVar19 = plVar13[2];
    lStack_128 = plVar13[3];
    lStack_120 = plVar13[1];
    _swift_unknownObjectRetain();
    _swift_unknownObjectRetain(lStack_120);
    _swift_unknownObjectRetain(lVar19);
    _swift_unknownObjectRetain(lStack_128);
    _swift_unknownObjectRetain(lStack_108);
  }
  uVar17 = (uint)bVar7;
  uVar10 = (ulong)(uint)bVar5;
  func_0x0001049e3e50(uVar10);
  FUN_1049e1a74(lVar18,lVar1,lVar14,lVar2,lVar20);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar10,puVar16);
  _swift_bridgeObjectRelease(puVar16);
  lVar18 = lVar19;
  plVar13 = (long *)PTR_s_fb_objectForKey__1125c5f60;
  _objc_msgSend(lVar19,PTR_s_fb_objectForKey__1125c5f60,uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  if (lVar18 == 0) {
    uStack_e8 = 0;
    unaff_x20 = 0;
    lStack_d8 = 0;
    uStack_e0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&stack0xffffffffffffff10,lVar18);
    _swift_unknownObjectRelease(lVar18);
  }
  puVar4 = PTR___sypN_11034f1a8;
  uStack_88 = uStack_e8;
  lStack_78 = lStack_d8;
  uStack_80 = uStack_e0;
  lStack_90 = unaff_x20;
  if (lStack_d8 == 0) {
    func_0x00010006e7f4(&lStack_90);
LAB_1049e38b0:
    uVar10 = (ulong)(uint)bVar5;
    func_0x0001049e3e50(uVar10);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(plVar13);
    lVar18 = lStack_108;
    _objc_msgSend(lStack_108,PTR_s_fb_objectForInfoDictionaryKey__1125c5f58,uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    if (lVar18 == 0) {
      uStack_e8 = 0;
      unaff_x20 = 0;
      lStack_d8 = 0;
      uStack_e0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&stack0xffffffffffffff10,lVar18);
      _swift_unknownObjectRelease(lVar18);
    }
    uStack_88 = uStack_e8;
    lStack_78 = lStack_d8;
    uStack_80 = uStack_e0;
    lStack_90 = unaff_x20;
    if (lStack_d8 != 0) {
      uVar11 = 0;
      func_0x0001002ed07c(0);
      plVar13 = &lStack_c8;
      _swift_dynamicCast(plVar13,&lStack_90,puVar4 + 8,uVar11,6);
      lVar18 = lStack_c8;
      if ((int)plVar13 == 0) {
        lVar18 = 0;
      }
      goto joined_r0x0001049e3954;
    }
    func_0x00010006e7f4(&lStack_90);
    lVar18 = 0;
  }
  else {
    uVar11 = 0;
    func_0x0001002ed07c(0);
    plVar12 = &lStack_f8;
    plVar13 = &lStack_90;
    _swift_dynamicCast(plVar12,plVar13,puVar4 + 8,uVar11,6);
    lVar18 = lStack_f8;
    if (((ulong)plVar12 & 1) == 0) goto LAB_1049e38b0;
joined_r0x0001049e3954:
    if (lVar18 != 0) {
      lVar14 = lVar18;
      _objc_msgSend(lVar18,PTR_s_boolValue_1125a5698);
      uVar17 = (uint)lVar14;
    }
  }
  _objc_retain(lVar8);
  _swift_setAtReferenceWritableKeyPath(&lStack_90,uVar6,&stack0xffffffffffffff10);
  _objc_release(lVar8);
  _objc_release(lVar18);
  _swift_unknownObjectRelease(lStack_108);
  _swift_unknownObjectRelease(lStack_128);
  _swift_unknownObjectRelease(lVar19);
  _swift_unknownObjectRelease(lStack_120);
  _swift_unknownObjectRelease(lStack_118);
LAB_1049e39dc:
  return uVar17 & 1;
}



/* Entry: 1049e4700; end: 1049e4893;  */

void FUN_1049e4700(void)

{
  return;
}



/* Entry: 1049e4894; end: 1049e48df;  */

void FUN_1049e4894(undefined8 param_1)

{
  func_0x0001049eab50();
  _objc_allocWithZone();
  _objc_msgSend();
  uRam00000001130a3c58 = param_1;
  return;
}



/* Entry: 1049e48e0; end: 1049e491f;  */

void FUN_1049e48e0(void)

{
  if (lRam000000011309ff80 != -1) {
    _swift_once(0x11309ff80,FUN_1049e4894);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uRam00000001130a3c58);
  return;
}



/* Entry: 1049e4920; end: 1049e495f; +[FBSDKSettings sharedSettings] */

void FUN_1049e4920(void)

{
  if (lRam000000011309ff80 != -1) {
    _swift_once(0x11309ff80,FUN_1049e4894);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001130a3c58);
  return;
}



/* Entry: 1049e4960; end: 1049e4983; -[FBSDKSettings sdkVersion] */

void FUN_1049e4960(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x302e302e3731,0xe600000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1049e4984; end: 1049e4997;  */

undefined1  [16] FUN_1049e4984(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe600000000000000;
  auVar1._0_8_ = 0x302e302e3731;
  return auVar1;
}



/* Entry: 1049e4998; end: 1049e49bb; -[FBSDKSettings defaultGraphAPIVersion] */

void FUN_1049e4998(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x302e373176,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1049e49bc; end: 1049e49cf;  */

undefined1  [16] FUN_1049e49bc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe500000000000000;
  auVar1._0_8_ = 0x302e373176;
  return auVar1;
}



/* Entry: 1049e49d0; end: 1049e4a0b; -[FBSDKSettings JPEGCompressionQuality] */

undefined8 FUN_1049e49d0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_1049e4a94();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1049e4a0c; end: 1049e4a0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1049e4a0c(void)

{
  double *pdVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  double *pdVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  long lStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  pdVar1 = (double *)(unaff_x20 + _DAT_1130a3c70);
  if (((ulong)pdVar1[1] & 1) == 0) {
    return *pdVar1;
  }
  plVar2 = (long *)(unaff_x20 + _DAT_1130a3c60);
  _swift_beginAccess(plVar2,auStack_98,0,0);
  lVar7 = *plVar2;
  lVar4 = plVar2[1];
  lVar3 = plVar2[2];
  lVar5 = plVar2[3];
  lVar12 = plVar2[4];
  lVar9 = lVar12;
  lVar10 = lVar7;
  lVar11 = lVar3;
  lVar13 = lVar5;
  lStack_d8 = lVar4;
  if (lVar7 == 0) {
    plVar2 = (long *)(unaff_x20 + _DAT_1130a3c68);
    _swift_beginAccess(plVar2,auStack_b0,0,0);
    lVar10 = *plVar2;
    if (lVar10 != 0) {
      lVar13 = plVar2[3];
      lVar9 = plVar2[4];
      lStack_d8 = plVar2[1];
      lVar11 = plVar2[2];
      _swift_unknownObjectRetain(lVar10);
      _swift_unknownObjectRetain(lStack_d8);
      _swift_unknownObjectRetain(lVar11);
      _swift_unknownObjectRetain(lVar13);
      _swift_unknownObjectRetain(lVar9);
      goto LAB_1049e4b7c;
    }
    uStack_78 = 0;
    dStack_80 = 0.0;
    lStack_68 = 0;
    uStack_70 = 0;
LAB_1049e4c80:
    FUN_1049eab14(&dStack_80,0x11309c428);
  }
  else {
LAB_1049e4b7c:
    _swift_unknownObjectRetain(lVar9);
    FUN_1049e1a74(lVar7,lVar4,lVar3,lVar5,lVar12);
    _swift_unknownObjectRelease(lVar9);
    _swift_unknownObjectRelease(lVar13);
    _swift_unknownObjectRelease(lVar11);
    _swift_unknownObjectRelease(lStack_d8);
    _swift_unknownObjectRelease(lVar10);
    uVar6 = 0xd00000000000001e;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f223830);
    lVar7 = lVar9;
    _objc_msgSend(lVar9,PTR_s_fb_objectForInfoDictionaryKey__1125c5f58,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _swift_unknownObjectRelease(lVar9);
    if (lVar7 == 0) {
      uStack_c8 = 0;
      dStack_d0 = 0.0;
      lStack_b8 = 0;
      uStack_c0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&dStack_d0,lVar7);
      _swift_unknownObjectRelease(lVar7);
    }
    uStack_78 = uStack_c8;
    dStack_80 = dStack_d0;
    lStack_68 = lStack_b8;
    uStack_70 = uStack_c0;
    if (lStack_b8 == 0) goto LAB_1049e4c80;
    pdVar8 = &dStack_d0;
    _swift_dynamicCast(pdVar8,&dStack_80,PTR___sypN_11034f1a8 + 8,
                       PTR___s12CoreGraphics7CGFloatVN_1103513a8,6);
    if ((int)pdVar8 != 0) goto LAB_1049e4c98;
  }
  dStack_d0 = 0.9;
LAB_1049e4c98:
  if (dStack_d0 < 0.0) {
    dStack_d0 = 0.0;
  }
  dVar14 = 1.0;
  if (dStack_d0 <= 1.0) {
    dVar14 = dStack_d0;
  }
  *pdVar1 = dVar14;
  *(undefined1 *)(pdVar1 + 1) = 0;
  return dVar14;
}



/* Entry: 1049e4a10; end: 1049e4a63; -[FBSDKSettings setJPEGCompressionQuality:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e4a10(double param_1,long param_2)

{
  double *pdVar1;
  double dVar2;
  
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  dVar2 = 1.0;
  if (param_1 <= 1.0) {
    dVar2 = param_1;
  }
  pdVar1 = (double *)(param_2 + _DAT_1130a3c70);
  *pdVar1 = dVar2;
  *(undefined1 *)(pdVar1 + 1) = 0;
  _objc_retain();
  FUN_1049e2748();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1049e4a64; end: 1049e4a93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e4a64(double param_1)

{
  ulong *puVar1;
  double *pdVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long unaff_x20;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  double dVar22;
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
  
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  dVar22 = 1.0;
  if (param_1 <= 1.0) {
    dVar22 = param_1;
  }
  pdVar2 = (double *)(unaff_x20 + _DAT_1130a3c70);
  *pdVar2 = dVar22;
  *(undefined1 *)(pdVar2 + 1) = 0;
  puVar1 = (ulong *)(unaff_x20 + _DAT_1130a3c60);
  _swift_beginAccess(puVar1,auStack_88,0,0);
  uVar16 = *puVar1;
  uVar5 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  uVar15 = puVar1[4];
  uVar17 = uVar5;
  uVar18 = uVar7;
  uVar19 = uVar15;
  uVar20 = uVar16;
  uVar21 = uVar8;
  if (uVar16 == 0) {
    puVar1 = (ulong *)(unaff_x20 + _DAT_1130a3c68);
    _swift_beginAccess(puVar1,auStack_a0,0,0);
    uVar20 = *puVar1;
    if (uVar20 == 0) {
      return;
    }
    uVar21 = puVar1[3];
    uVar19 = puVar1[4];
    uVar17 = puVar1[1];
    uVar18 = puVar1[2];
    _swift_unknownObjectRetain(uVar20);
    _swift_unknownObjectRetain(uVar17);
    _swift_unknownObjectRetain(uVar18);
    _swift_unknownObjectRetain(uVar21);
    _swift_unknownObjectRetain(uVar19);
  }
  FUN_1049e1a74(uVar16,uVar5,uVar7,uVar8,uVar15);
  FUN_1049e1654();
  uVar7 = 2;
  if ((uVar16 & 1) == 0) {
    uVar7 = 0;
  }
  if (lRam000000011309ff70 != -1) {
    _swift_once(0x11309ff70,FUN_1049e34c0);
  }
  uVar5 = (ulong)bRam0000000113815998;
  FUN_1049e368c(uVar5,uRam00000001138159a0,uRam00000001138159a8);
  uVar16 = 4;
  if ((uVar5 & 1) == 0) {
    uVar16 = 0;
  }
  uVar16 = uVar16 | uVar7;
  _swift_unknownObjectRetain(uVar18);
  uVar6 = 0xd000000000000025;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f2239d0);
  uVar7 = uVar18;
  _objc_msgSend(uVar18,PTR_s_fb_integerForKey__1125252b0,uVar6);
  _swift_unknownObjectRelease(uVar18);
  _objc_release(uVar6);
  if (uVar16 == uVar7) {
    _swift_unknownObjectRelease(uVar19);
    _swift_unknownObjectRelease(uVar21);
    _swift_unknownObjectRelease(uVar18);
    _swift_unknownObjectRelease(uVar17);
    _swift_unknownObjectRelease(uVar20);
    return;
  }
  _swift_unknownObjectRetain(uVar18);
  uVar6 = 0xd000000000000025;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f2239d0);
  puVar13 = PTR_s_fb_setInteger_forKey__1125252b8;
  _objc_msgSend(uVar18,PTR_s_fb_setInteger_forKey__1125252b8,uVar16,uVar6);
  _swift_unknownObjectRelease(uVar18);
  _objc_release(uVar6);
  bVar3 = bRam00000001130a2249;
  uVar8 = (ulong)bRam00000001130a2248;
  func_0x0001049e3e50(uVar8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(puVar13);
  uVar5 = uVar19;
  puVar14 = (undefined8 *)PTR_s_fb_objectForInfoDictionaryKey__1125c5f58;
  _objc_msgSend(uVar19,PTR_s_fb_objectForInfoDictionaryKey__1125c5f58,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  if (uVar5 == 0) {
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar5);
    _swift_unknownObjectRelease(uVar5);
  }
  uStack_b8 = uStack_d8;
  uStack_c0 = uStack_e0;
  lStack_a8 = lStack_c8;
  uStack_b0 = uStack_d0;
  if (lStack_c8 == 0) {
    func_0x00010006e7f4(&uStack_c0);
LAB_1049e2a1c:
    uVar5 = 0;
  }
  else {
    pbVar9 = &bStack_e1;
    puVar14 = &uStack_c0;
    _swift_dynamicCast(pbVar9,puVar14,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
    if (((ulong)pbVar9 & 1) == 0) goto LAB_1049e2a1c;
    uVar5 = 1;
    bVar3 = bStack_e1;
  }
  bVar4 = bRam00000001130a224b;
  uVar15 = (ulong)bRam00000001130a224a;
  func_0x0001049e3e50(uVar15);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(puVar14);
  uVar8 = uVar19;
  _objc_msgSend(uVar19,PTR_s_fb_objectForInfoDictionaryKey__1125c5f58,uVar15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
  if (uVar8 == 0) {
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
    _swift_unknownObjectRelease(uVar8);
  }
  uStack_b8 = uStack_d8;
  uStack_c0 = uStack_e0;
  lStack_a8 = lStack_c8;
  uStack_b0 = uStack_d0;
  if (lStack_c8 == 0) {
    func_0x00010006e7f4(&uStack_c0);
  }
  else {
    pbVar9 = &bStack_e1;
    _swift_dynamicCast(pbVar9,&uStack_c0,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
    if (((ulong)pbVar9 & 1) != 0) {
      uVar8 = 2;
      bVar4 = bStack_e1;
      goto LAB_1049e2aec;
    }
  }
  uVar8 = 0;
LAB_1049e2aec:
  uVar15 = 2;
  if (bVar4 == 0) {
    uVar15 = 0;
  }
  lVar10 = 0x1130a2c40;
  func_0x0001048db364();
  _swift_initStackObject();
  *(undefined8 *)(lVar10 + 0x18) = 8;
  *(undefined8 *)(lVar10 + 0x10) = 4;
  lVar11 = lRam000000011309ff28;
  _swift_unknownObjectRetain(uVar21);
  if (lVar11 != -1) {
    _swift_once(0x11309ff28,FUN_1049e2d50);
  }
  uVar6 = uRam00000001130a3c30;
  puVar13 = PTR___sSiN_11034deb0;
  *(undefined **)(lVar10 + 0x40) = PTR___sSiN_11034deb0;
  *(undefined8 *)(lVar10 + 0x20) = uVar6;
  *(ulong *)(lVar10 + 0x28) = uVar8 | uVar5;
  lVar11 = lRam000000011309ff30;
  _objc_retain();
  if (lVar11 != -1) {
    _swift_once(0x11309ff30,0x1049e2d7c);
  }
  uVar6 = uRam00000001130a3c38;
  *(undefined **)(lVar10 + 0x68) = puVar13;
  *(undefined8 *)(lVar10 + 0x48) = uVar6;
  *(ulong *)(lVar10 + 0x50) = uVar15 | bVar3;
  lVar11 = lRam000000011309ff38;
  _objc_retain();
  if (lVar11 != -1) {
    _swift_once(0x11309ff38,0x1049e2dac);
  }
  uVar6 = uRam00000001130a3c40;
  *(undefined **)(lVar10 + 0x90) = puVar13;
  *(undefined8 *)(lVar10 + 0x70) = uVar6;
  *(ulong *)(lVar10 + 0x78) = uVar7;
  lVar11 = lRam000000011309ff40;
  _objc_retain();
  if (lVar11 != -1) {
    _swift_once(0x11309ff40,0x1049e2ddc);
  }
  uVar6 = uRam00000001130a3c48;
  *(undefined **)(lVar10 + 0xb8) = puVar13;
  *(undefined8 *)(lVar10 + 0x98) = uVar6;
  *(ulong *)(lVar10 + 0xa0) = uVar16;
  _objc_retain();
  lVar11 = lVar10;
  FUN_10499c188(lVar10);
  _swift_setDeallocating(lVar10);
  uVar6 = 0x1130a2938;
  func_0x0001048db364(0x1130a2938);
  _swift_arrayDestroy(lVar10 + 0x20,4,uVar6);
  uVar12 = 0;
  FUN_1048db924(0);
  uVar6 = uVar12;
  func_0x0001049ac144();
  lVar10 = lVar11;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar11,uVar12,PTR___sypN_11034f1a8 + 8,uVar6);
  _swift_bridgeObjectRelease(lVar11);
  _objc_msgSend(uVar21,PTR_s_logInternalEvent_parameters_isIm_112607d68,
                &PTR____CFConstantStringClassReference_110da0e18,lVar10,1);
  _swift_unknownObjectRelease(uVar19);
  _swift_unknownObjectRelease(uVar18);
  _swift_unknownObjectRelease(uVar17);
  _swift_unknownObjectRelease(uVar20);
  _swift_unknownObjectRelease_n(uVar21,2);
  _objc_release(lVar10);
  return;
}



/* Entry: 1049e4a94; end: 1049e4cd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1049e4a94(void)

{
  double *pdVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  double *pdVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  long lStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  pdVar1 = (double *)(unaff_x20 + _DAT_1130a3c70);
  if (((ulong)pdVar1[1] & 1) == 0) {
    return *pdVar1;
  }
  plVar2 = (long *)(unaff_x20 + _DAT_1130a3c60);
  _swift_beginAccess(plVar2,auStack_98,0,0);
  lVar7 = *plVar2;
  lVar4 = plVar2[1];
  lVar3 = plVar2[2];
  lVar5 = plVar2[3];
  lVar12 = plVar2[4];
  lVar9 = lVar12;
  lVar10 = lVar7;
  lVar11 = lVar3;
  lVar13 = lVar5;
  lStack_d8 = lVar4;
  if (lVar7 == 0) {
    plVar2 = (long *)(unaff_x20 + _DAT_1130a3c68);
    _swift_beginAccess(plVar2,auStack_b0,0,0);
    lVar10 = *plVar2;
    if (lVar10 != 0) {
      lVar13 = plVar2[3];
      lVar9 = plVar2[4];
      lStack_d8 = plVar2[1];
      lVar11 = plVar2[2];
      _swift_unknownObjectRetain(lVar10);
      _swift_unknownObjectRetain(lStack_d8);
      _swift_unknownObjectRetain(lVar11);
      _swift_unknownObjectRetain(lVar13);
      _swift_unknownObjectRetain(lVar9);
      goto LAB_1049e4b7c;
    }
    uStack_78 = 0;
    dStack_80 = 0.0;
    lStack_68 = 0;
    uStack_70 = 0;
LAB_1049e4c80:
    FUN_1049eab14(&dStack_80,0x11309c428);
  }
  else {
LAB_1049e4b7c:
    _swift_unknownObjectRetain(lVar9);
    FUN_1049e1a74(lVar7,lVar4,lVar3,lVar5,lVar12);
    _swift_unknownObjectRelease(lVar9);
    _swift_unknownObjectRelease(lVar13);
    _swift_unknownObjectRelease(lVar11);
    _swift_unknownObjectRelease(lStack_d8);
    _swift_unknownObjectRelease(lVar10);
    uVar6 = 0xd00000000000001e;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f223830);
    lVar7 = lVar9;
    _objc_msgSend(lVar9,PTR_s_fb_objectForInfoDictionaryKey__1125c5f58,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _swift_unknownObjectRelease(lVar9);
    if (lVar7 == 0) {
      uStack_c8 = 0;
      dStack_d0 = 0.0;
      lStack_b8 = 0;
      uStack_c0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&dStack_d0,lVar7);
      _swift_unknownObjectRelease(lVar7);
    }
    uStack_78 = uStack_c8;
    dStack_80 = dStack_d0;
    lStack_68 = lStack_b8;
    uStack_70 = uStack_c0;
    if (lStack_b8 == 0) goto LAB_1049e4c80;
    pdVar8 = &dStack_d0;
    _swift_dynamicCast(pdVar8,&dStack_80,PTR___sypN_11034f1a8 + 8,
                       PTR___s12CoreGraphics7CGFloatVN_1103513a8,6);
    if ((int)pdVar8 != 0) goto LAB_1049e4c98;
  }
  dStack_d0 = 0.9;
LAB_1049e4c98:
  if (dStack_d0 < 0.0) {
    dStack_d0 = 0.0;
  }
  dVar14 = 1.0;
  if (dStack_d0 <= 1.0) {
    dVar14 = dStack_d0;
  }
  *pdVar1 = dVar14;
  *(undefined1 *)(pdVar1 + 1) = 0;
  return dVar14;
}



/* Entry: 1049e4cd8; end: 1049e4d5b;  */

undefined1  [16] FUN_1049e4cd8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 unaff_x20;
  undefined1 auVar1 [16];
  
  param_2[1] = unaff_x20;
  FUN_1049e4a94();
  *param_2 = param_1;
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = 0x1049e4d0c;
  return auVar1;
}



/* Entry: 1049e4d5c; end: 1049e4d5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1049e4d5c(void)

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



/* Entry: 1049e4d60; end: 1049e4dff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e4d60(uint param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  if (lRam000000011309ff68 != -1) {
    _swift_once(0x11309ff68,FUN_1049e33d0);
  }
  uVar5 = uRam0000000113815988;
  uVar9 = (ulong)bRam0000000113815980;
  uVar7 = (ulong)(param_1 & 1);
  auStack_90[0] = (undefined1)(param_1 & 1);
  _objc_retain(unaff_x20,uRam0000000113815988,uRam0000000113815990);
  _swift_setAtReferenceWritableKeyPath(auStack_78,uVar5,auStack_90);
  _objc_release(unaff_x20);
  plVar1 = (long *)(unaff_x20 + _DAT_1130a3c60);
  _swift_beginAccess(plVar1,auStack_78,0,0);
  lVar2 = *plVar1;
  lVar6 = plVar1[1];
  lVar3 = plVar1[2];
  lVar4 = plVar1[3];
  lVar8 = plVar1[4];
  lVar10 = lVar3;
  lVar11 = lVar2;
  lVar12 = lVar4;
  lVar13 = lVar6;
  lVar14 = lVar8;
  if (lVar2 == 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_1130a3c68);
    _swift_beginAccess(plVar1,auStack_90,0,0);
    lVar11 = *plVar1;
    if (lVar11 == 0) goto LAB_1049e3b9c;
    lVar12 = plVar1[3];
    lVar14 = plVar1[4];
    lVar13 = plVar1[1];
    lVar10 = plVar1[2];
    _swift_unknownObjectRetain(lVar11);
    _swift_unknownObjectRetain(lVar13);
    _swift_unknownObjectRetain(lVar10);
    _swift_unknownObjectRetain(lVar12);
    _swift_unknownObjectRetain(lVar14);
  }
  FUN_1049e1a74(lVar2,lVar6,lVar3,lVar4,lVar8);
  _swift_unknownObjectRelease(lVar14);
  _swift_unknownObjectRelease(lVar12);
  _swift_unknownObjectRelease(lVar13);
  _swift_unknownObjectRelease(lVar11);
  __sSb10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(uVar7);
  func_0x0001049e3e50(uVar9);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(lVar6);
  _objc_msgSend(lVar10,PTR_s_fb_setObject_forKey__1125c5f88,uVar7,uVar9);
  _objc_release(uVar7);
  _objc_release(uVar9);
  _swift_unknownObjectRelease(lVar10);
LAB_1049e3b9c:
  FUN_1049e2748();
  return;
}



/* Entry: 1049e4e00; end: 1049e4e03;  */

void FUN_1049e4e00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  if (lRam000000011309ff68 != -1) {
    _swift_once(0x11309ff68,FUN_1049e33d0,param_3,uVar1);
  }
  func_0x0001049e3a00(uRam0000000113815980,uRam0000000113815988,uRam0000000113815990,uVar1);
  return;
}



/* Entry: 1049e4e04; end: 1049e4eaf;  */

undefined1  [16] FUN_1049e4e04(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x20;
  undefined1 auVar2 [16];
  
  *param_1 = unaff_x20;
  puVar1 = param_1;
  FUN_1049e1654();
  *(byte *)(param_1 + 1) = (byte)puVar1 & 1;
  auVar2._8_8_ = param_1 + 1;
  auVar2._0_8_ = 0x1049eaf14;
  return auVar2;
}



/* Entry: 1049e4eb0; end: 1049e4f87; -[FBSDKSettings isAutoLogAppEventsEnabledLocally] */

uint FUN_1049e4eb0(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = lRam000000011309ff68;
  _objc_retain();
  if (lVar1 != -1) {
    _swift_once(0x11309ff68,FUN_1049e33d0);
  }
  uVar2 = (uint)bRam0000000113815980;
  FUN_1049e368c(bRam0000000113815980,uRam0000000113815988,uRam0000000113815990);
  _objc_release(param_1);
  return uVar2 & 1;
}



/* Entry: 1049e4f88; end: 1049e5013;  */

undefined1  [16] FUN_1049e4f88(undefined8 *param_1)

{
  byte bVar1;
  undefined8 unaff_x20;
  undefined1 auVar2 [16];
  
  *param_1 = unaff_x20;
  if (lRam000000011309ff68 != -1) {
    _swift_once(0x11309ff68,FUN_1049e33d0);
  }
  bVar1 = bRam0000000113815980;
  *(byte *)((long)param_1 + 0x11) = bRam0000000113815980;
  param_1[1] = uRam0000000113815988;
  *(undefined1 *)((long)param_1 + 0x12) = uRam0000000113815990;
  FUN_1049e368c();
  *(byte *)(param_1 + 2) = bVar1 & 1;
  auVar2._8_8_ = param_1 + 2;
  auVar2._0_8_ = 0x1049eaf18;
  return auVar2;
}



/* Entry: 1049e5014; end: 1049e50df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1049e5014(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a3c78;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3c78,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Entry: 1049e50e0; end: 1049e512b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1049e50e0(void)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined *puVar4;
  byte bVar5;
  undefined8 uVar6;
  byte bVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  uint uVar17;
  long unaff_x20;
  long lVar18;
  long lVar19;
  long lVar20;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_108;
  long lStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  if (lRam000000011309ff78 != -1) {
    _swift_once(0x11309ff78,FUN_1049e35a8);
  }
  bVar7 = bRam00000001138159c0;
  uVar6 = uRam00000001138159b8;
  bVar5 = bRam00000001138159b0;
  uVar17 = (uint)bRam00000001138159c0;
  lVar8 = unaff_x20;
  _objc_retain();
  pcVar9 = (code *)&lStack_90;
  pbVar15 = &stack0xffffffffffffff10;
  _swift_readAtKeyPath(pcVar9,pbVar15,uVar6);
  bVar3 = *pbVar15;
  (*pcVar9)(&lStack_90,0);
  _objc_release(lVar8);
  if (bVar3 != 2) {
    uVar17 = (uint)bVar3;
    goto LAB_1049e39dc;
  }
  plVar13 = (long *)(lVar8 + _DAT_1130a3c60);
  puVar16 = auStack_a8;
  _swift_beginAccess(plVar13,puVar16,0,0);
  lVar18 = *plVar13;
  lVar1 = plVar13[1];
  lVar14 = plVar13[2];
  lVar2 = plVar13[3];
  lVar20 = plVar13[4];
  lVar19 = lVar14;
  lStack_128 = lVar2;
  lStack_120 = lVar1;
  lStack_118 = lVar18;
  lStack_108 = lVar20;
  if (lVar18 == 0) {
    plVar13 = (long *)(lVar8 + _DAT_1130a3c68);
    puVar16 = auStack_c0;
    _swift_beginAccess(plVar13,puVar16,0,0);
    lStack_118 = *plVar13;
    if (lStack_118 == 0) goto LAB_1049e39dc;
    lStack_108 = plVar13[4];
    lVar19 = plVar13[2];
    lStack_128 = plVar13[3];
    lStack_120 = plVar13[1];
    _swift_unknownObjectRetain();
    _swift_unknownObjectRetain(lStack_120);
    _swift_unknownObjectRetain(lVar19);
    _swift_unknownObjectRetain(lStack_128);
    _swift_unknownObjectRetain(lStack_108);
  }
  uVar17 = (uint)bVar7;
  uVar10 = (ulong)(uint)bVar5;
  func_0x0001049e3e50(uVar10);
  FUN_1049e1a74(lVar18,lVar1,lVar14,lVar2,lVar20);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar10,puVar16);
  _swift_bridgeObjectRelease(puVar16);
  lVar18 = lVar19;
  plVar13 = (long *)PTR_s_fb_objectForKey__1125c5f60;
  _objc_msgSend(lVar19,PTR_s_fb_objectForKey__1125c5f60,uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  if (lVar18 == 0) {
    uStack_e8 = 0;
    unaff_x20 = 0;
    lStack_d8 = 0;
    uStack_e0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&stack0xffffffffffffff10,lVar18);
    _swift_unknownObjectRelease(lVar18);
  }
  puVar4 = PTR___sypN_11034f1a8;
  uStack_88 = uStack_e8;
  lStack_78 = lStack_d8;
  uStack_80 = uStack_e0;
  lStack_90 = unaff_x20;
  if (lStack_d8 == 0) {
    func_0x00010006e7f4(&lStack_90);
LAB_1049e38b0:
    uVar10 = (ulong)(uint)bVar5;
    func_0x0001049e3e50(uVar10);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(plVar13);
    lVar18 = lStack_108;
    _objc_msgSend(lStack_108,PTR_s_fb_objectForInfoDictionaryKey__1125c5f58,uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    if (lVar18 == 0) {
      uStack_e8 = 0;
      unaff_x20 = 0;
      lStack_d8 = 0;
      uStack_e0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&stack0xffffffffffffff10,lVar18);
      _swift_unknownObjectRelease(lVar18);
    }
    uStack_88 = uStack_e8;
    lStack_78 = lStack_d8;
    uStack_80 = uStack_e0;
    lStack_90 = unaff_x20;
    if (lStack_d8 != 0) {
      uVar11 = 0;
      func_0x0001002ed07c(0);
      plVar13 = &lStack_c8;
      _swift_dynamicCast(plVar13,&lStack_90,puVar4 + 8,uVar11,6);
      lVar18 = lStack_c8;
      if ((int)plVar13 == 0) {
        lVar18 = 0;
      }
      goto joined_r0x0001049e3954;
    }
    func_0x00010006e7f4(&lStack_90);
    lVar18 = 0;
  }
  else {
    uVar11 = 0;
    func_0x0001002ed07c(0);
    plVar12 = &lStack_f8;
    plVar13 = &lStack_90;
    _swift_dynamicCast(plVar12,plVar13,puVar4 + 8,uVar11,6);
    lVar18 = lStack_f8;
    if (((ulong)plVar12 & 1) == 0) goto LAB_1049e38b0;
joined_r0x0001049e3954:
    if (lVar18 != 0) {
      lVar14 = lVar18;
      _objc_msgSend(lVar18,PTR_s_boolValue_1125a5698);
      uVar17 = (uint)lVar14;
    }
  }
  _objc_retain(lVar8);
  _swift_setAtReferenceWritableKeyPath(&lStack_90,uVar6,&stack0xffffffffffffff10);
  _objc_release(lVar8);
  _objc_release(lVar18);
  _swift_unknownObjectRelease(lStack_108);
  _swift_unknownObjectRelease(lStack_128);
  _swift_unknownObjectRelease(lVar19);
  _swift_unknownObjectRelease(lStack_120);
  _swift_unknownObjectRelease(lStack_118);
LAB_1049e39dc:
  return uVar17 & 1;
}



/* Entry: 1049e512c; end: 1049e5193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e512c(uint param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  if (lRam000000011309ff78 != -1) {
    _swift_once(0x11309ff78,FUN_1049e35a8);
  }
  uVar5 = uRam00000001138159b8;
  uVar9 = (ulong)bRam00000001138159b0;
  uVar7 = (ulong)(param_1 & 1);
  auStack_90[0] = (undefined1)(param_1 & 1);
  _objc_retain(unaff_x20,uRam00000001138159b8,uRam00000001138159c0);
  _swift_setAtReferenceWritableKeyPath(auStack_78,uVar5,auStack_90);
  _objc_release(unaff_x20);
  plVar1 = (long *)(unaff_x20 + _DAT_1130a3c60);
  _swift_beginAccess(plVar1,auStack_78,0,0);
  lVar2 = *plVar1;
  lVar6 = plVar1[1];
  lVar3 = plVar1[2];
  lVar4 = plVar1[3];
  lVar8 = plVar1[4];
  lVar10 = lVar3;
  lVar11 = lVar2;
  lVar12 = lVar4;
  lVar13 = lVar6;
  lVar14 = lVar8;
  if (lVar2 == 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_1130a3c68);
    _swift_beginAccess(plVar1,auStack_90,0,0);
    lVar11 = *plVar1;
    if (lVar11 == 0) goto LAB_1049e3b9c;
    lVar12 = plVar1[3];
    lVar14 = plVar1[4];
    lVar13 = plVar1[1];
    lVar10 = plVar1[2];
    _swift_unknownObjectRetain(lVar11);
    _swift_unknownObjectRetain(lVar13);
    _swift_unknownObjectRetain(lVar10);
    _swift_unknownObjectRetain(lVar12);
    _swift_unknownObjectRetain(lVar14);
  }
  FUN_1049e1a74(lVar2,lVar6,lVar3,lVar4,lVar8);
  _swift_unknownObjectRelease(lVar14);
  _swift_unknownObjectRelease(lVar12);
  _swift_unknownObjectRelease(lVar13);
  _swift_unknownObjectRelease(lVar11);
  __sSb10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(uVar7);
  func_0x0001049e3e50(uVar9);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(lVar6);
  _objc_msgSend(lVar10,PTR_s_fb_setObject_forKey__1125c5f88,uVar7,uVar9);
  _objc_release(uVar7);
  _objc_release(uVar9);
  _swift_unknownObjectRelease(lVar10);
LAB_1049e3b9c:
  FUN_1049e2748();
  return;
}



/* Entry: 1049e5194; end: 1049e521f;  */

undefined1  [16] FUN_1049e5194(undefined8 *param_1)

{
  byte bVar1;
  undefined8 unaff_x20;
  undefined1 auVar2 [16];
  
  *param_1 = unaff_x20;
  if (lRam000000011309ff78 != -1) {
    _swift_once(0x11309ff78,FUN_1049e35a8);
  }
  bVar1 = bRam00000001138159b0;
  *(byte *)((long)param_1 + 0x11) = bRam00000001138159b0;
  param_1[1] = uRam00000001138159b8;
  *(undefined1 *)((long)param_1 + 0x12) = uRam00000001138159c0;
  FUN_1049e368c();
  *(byte *)(param_1 + 2) = bVar1 & 1;
  auVar2._8_8_ = param_1 + 2;
  auVar2._0_8_ = FUN_1049e5220;
  return auVar2;
}



/* Entry: 1049e5220; end: 1049e5223;  */

void FUN_1049e5220(long param_1)

{
  func_0x0001049e3a00(*(undefined1 *)(param_1 + 0x11),*(undefined8 *)(param_1 + 8),
                      *(undefined1 *)(param_1 + 0x12),*(undefined1 *)(param_1 + 0x10));
  return;
}



/* Entry: 1049e5224; end: 1049e52af;  */

undefined1  [16] FUN_1049e5224(undefined8 *param_1)

{
  byte bVar1;
  undefined8 unaff_x20;
  undefined1 auVar2 [16];
  
  *param_1 = unaff_x20;
  if (lRam000000011309ff78 != -1) {
    _swift_once(0x11309ff78,FUN_1049e35a8);
  }
  bVar1 = bRam00000001138159b0;
  *(byte *)((long)param_1 + 0x11) = bRam00000001138159b0;
  param_1[1] = uRam00000001138159b8;
  *(undefined1 *)((long)param_1 + 0x12) = uRam00000001138159c0;
  FUN_1049e368c();
  *(byte *)(param_1 + 2) = bVar1 & 1;
  auVar2._8_8_ = param_1 + 2;
  auVar2._0_8_ = 0x1049eaf1c;
  return auVar2;
}



/* Entry: 1049e52b0; end: 1049e537b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1049e52b0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a3c80;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3c80,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Entry: 1049e537c; end: 1049e53c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1049e537c(void)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined *puVar4;
  byte bVar5;
  undefined8 uVar6;
  byte bVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  uint uVar17;
  long unaff_x20;
  long lVar18;
  long lVar19;
  long lVar20;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_108;
  long lStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  if (lRam000000011309ff70 != -1) {
    _swift_once(0x11309ff70,FUN_1049e34c0);
  }
  bVar7 = bRam00000001138159a8;
  uVar6 = uRam00000001138159a0;
  bVar5 = bRam0000000113815998;
  uVar17 = (uint)bRam00000001138159a8;
  lVar8 = unaff_x20;
  _objc_retain();
  pcVar9 = (code *)&lStack_90;
  pbVar15 = &stack0xffffffffffffff10;
  _swift_readAtKeyPath(pcVar9,pbVar15,uVar6);
  bVar3 = *pbVar15;
  (*pcVar9)(&lStack_90,0);
  _objc_release(lVar8);
  if (bVar3 != 2) {
    uVar17 = (uint)bVar3;
    goto LAB_1049e39dc;
  }
  plVar13 = (long *)(lVar8 + _DAT_1130a3c60);
  puVar16 = auStack_a8;
  _swift_beginAccess(plVar13,puVar16,0,0);
  lVar18 = *plVar13;
  lVar1 = plVar13[1];
  lVar14 = plVar13[2];
  lVar2 = plVar13[3];
  lVar20 = plVar13[4];
  lVar19 = lVar14;
  lStack_128 = lVar2;
  lStack_120 = lVar1;
  lStack_118 = lVar18;
  lStack_108 = lVar20;
  if (lVar18 == 0) {
    plVar13 = (long *)(lVar8 + _DAT_1130a3c68);
    puVar16 = auStack_c0;
    _swift_beginAccess(plVar13,puVar16,0,0);
    lStack_118 = *plVar13;
    if (lStack_118 == 0) goto LAB_1049e39dc;
    lStack_108 = plVar13[4];
    lVar19 = plVar13[2];
    lStack_128 = plVar13[3];
    lStack_120 = plVar13[1];
    _swift_unknownObjectRetain();
    _swift_unknownObjectRetain(lStack_120);
    _swift_unknownObjectRetain(lVar19);
    _swift_unknownObjectRetain(lStack_128);
    _swift_unknownObjectRetain(lStack_108);
  }
  uVar17 = (uint)bVar7;
  uVar10 = (ulong)(uint)bVar5;
  func_0x0001049e3e50(uVar10);
  FUN_1049e1a74(lVar18,lVar1,lVar14,lVar2,lVar20);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar10,puVar16);
  _swift_bridgeObjectRelease(puVar16);
  lVar18 = lVar19;
  plVar13 = (long *)PTR_s_fb_objectForKey__1125c5f60;
  _objc_msgSend(lVar19,PTR_s_fb_objectForKey__1125c5f60,uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  if (lVar18 == 0) {
    uStack_e8 = 0;
    unaff_x20 = 0;
    lStack_d8 = 0;
    uStack_e0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&stack0xffffffffffffff10,lVar18);
    _swift_unknownObjectRelease(lVar18);
  }
  puVar4 = PTR___sypN_11034f1a8;
  uStack_88 = uStack_e8;
  lStack_78 = lStack_d8;
  uStack_80 = uStack_e0;
  lStack_90 = unaff_x20;
  if (lStack_d8 == 0) {
    func_0x00010006e7f4(&lStack_90);
LAB_1049e38b0:
    uVar10 = (ulong)(uint)bVar5;
    func_0x0001049e3e50(uVar10);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(plVar13);
    lVar18 = lStack_108;
    _objc_msgSend(lStack_108,PTR_s_fb_objectForInfoDictionaryKey__1125c5f58,uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    if (lVar18 == 0) {
      uStack_e8 = 0;
      unaff_x20 = 0;
      lStack_d8 = 0;
      uStack_e0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&stack0xffffffffffffff10,lVar18);
      _swift_unknownObjectRelease(lVar18);
    }
    uStack_88 = uStack_e8;
    lStack_78 = lStack_d8;
    uStack_80 = uStack_e0;
    lStack_90 = unaff_x20;
    if (lStack_d8 != 0) {
      uVar11 = 0;
      func_0x0001002ed07c(0);
      plVar13 = &lStack_c8;
      _swift_dynamicCast(plVar13,&lStack_90,puVar4 + 8,uVar11,6);
      lVar18 = lStack_c8;
      if ((int)plVar13 == 0) {
        lVar18 = 0;
      }
      goto joined_r0x0001049e3954;
    }
    func_0x00010006e7f4(&lStack_90);
    lVar18 = 0;
  }
  else {
    uVar11 = 0;
    func_0x0001002ed07c(0);
    plVar12 = &lStack_f8;
    plVar13 = &lStack_90;
    _swift_dynamicCast(plVar12,plVar13,puVar4 + 8,uVar11,6);
    lVar18 = lStack_f8;
    if (((ulong)plVar12 & 1) == 0) goto LAB_1049e38b0;
joined_r0x0001049e3954:
    if (lVar18 != 0) {
      lVar14 = lVar18;
      _objc_msgSend(lVar18,PTR_s_boolValue_1125a5698);
      uVar17 = (uint)lVar14;
    }
  }
  _objc_retain(lVar8);
  _swift_setAtReferenceWritableKeyPath(&lStack_90,uVar6,&stack0xffffffffffffff10);
  _objc_release(lVar8);
  _objc_release(lVar18);
  _swift_unknownObjectRelease(lStack_108);
  _swift_unknownObjectRelease(lStack_128);
  _swift_unknownObjectRelease(lVar19);
  _swift_unknownObjectRelease(lStack_120);
  _swift_unknownObjectRelease(lStack_118);
LAB_1049e39dc:
  return uVar17 & 1;
}



/* Entry: 1049e53c8; end: 1049e542f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e53c8(uint param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  if (lRam000000011309ff70 != -1) {
    _swift_once(0x11309ff70,FUN_1049e34c0);
  }
  uVar5 = uRam00000001138159a0;
  uVar9 = (ulong)bRam0000000113815998;
  uVar7 = (ulong)(param_1 & 1);
  auStack_90[0] = (undefined1)(param_1 & 1);
  _objc_retain(unaff_x20,uRam00000001138159a0,uRam00000001138159a8);
  _swift_setAtReferenceWritableKeyPath(auStack_78,uVar5,auStack_90);
  _objc_release(unaff_x20);
  plVar1 = (long *)(unaff_x20 + _DAT_1130a3c60);
  _swift_beginAccess(plVar1,auStack_78,0,0);
  lVar2 = *plVar1;
  lVar6 = plVar1[1];
  lVar3 = plVar1[2];
  lVar4 = plVar1[3];
  lVar8 = plVar1[4];
  lVar10 = lVar3;
  lVar11 = lVar2;
  lVar12 = lVar4;
  lVar13 = lVar6;
  lVar14 = lVar8;
  if (lVar2 == 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_1130a3c68);
    _swift_beginAccess(plVar1,auStack_90,0,0);
    lVar11 = *plVar1;
    if (lVar11 == 0) goto LAB_1049e3b9c;
    lVar12 = plVar1[3];
    lVar14 = plVar1[4];
    lVar13 = plVar1[1];
    lVar10 = plVar1[2];
    _swift_unknownObjectRetain(lVar11);
    _swift_unknownObjectRetain(lVar13);
    _swift_unknownObjectRetain(lVar10);
    _swift_unknownObjectRetain(lVar12);
    _swift_unknownObjectRetain(lVar14);
  }
  FUN_1049e1a74(lVar2,lVar6,lVar3,lVar4,lVar8);
  _swift_unknownObjectRelease(lVar14);
  _swift_unknownObjectRelease(lVar12);
  _swift_unknownObjectRelease(lVar13);
  _swift_unknownObjectRelease(lVar11);
  __sSb10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(uVar7);
  func_0x0001049e3e50(uVar9);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(lVar6);
  _objc_msgSend(lVar10,PTR_s_fb_setObject_forKey__1125c5f88,uVar7,uVar9);
  _objc_release(uVar7);
  _objc_release(uVar9);
  _swift_unknownObjectRelease(lVar10);
LAB_1049e3b9c:
  FUN_1049e2748();
  return;
}



/* Entry: 1049e5430; end: 1049e5547;  */

undefined1  [16] FUN_1049e5430(undefined8 *param_1)

{
  byte bVar1;
  undefined8 unaff_x20;
  undefined1 auVar2 [16];
  
  *param_1 = unaff_x20;
  if (lRam000000011309ff70 != -1) {
    _swift_once(0x11309ff70,FUN_1049e34c0);
  }
  bVar1 = bRam0000000113815998;
  *(byte *)((long)param_1 + 0x11) = bRam0000000113815998;
  param_1[1] = uRam00000001138159a0;
  *(undefined1 *)((long)param_1 + 0x12) = uRam00000001138159a8;
  FUN_1049e368c();
  *(byte *)(param_1 + 2) = bVar1 & 1;
  auVar2._8_8_ = param_1 + 2;
  auVar2._0_8_ = 0x1049eaf20;
  return auVar2;
}



/* Entry: 1049e5548; end: 1049e5573;  */

void FUN_1049e5548(long param_1)

{
  func_0x0001049e3a00(*(undefined1 *)(param_1 + 0x11),*(undefined8 *)(param_1 + 8),
                      *(undefined1 *)(param_1 + 0x12),*(undefined1 *)(param_1 + 0x10));
  return;
}



/* Entry: 1049e5574; end: 1049e563f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1049e5574(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a3c88;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3c88,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Entry: 1049e5640; end: 1049e5647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1049e5640(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_1130a3c90;
  uVar2 = (uint)*(byte *)(unaff_x20 + _DAT_1130a3c90);
  if (*(byte *)(unaff_x20 + _DAT_1130a3c90) == 2) {
    lVar3 = unaff_x20;
    FUN_1049e58b0();
    uVar2 = (uint)lVar3;
    *(byte *)(unaff_x20 + lVar1) = (byte)lVar3 & 1;
  }
  return uVar2 & 1;
}



/* Entry: 1049e5648; end: 1049e57db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e5648(uint param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  *(char *)(unaff_x20 + _DAT_1130a3c90) = (char)param_1;
  plVar1 = (long *)(unaff_x20 + _DAT_1130a3c60);
  _swift_beginAccess(plVar1,auStack_78,0,0);
  lVar2 = *plVar1;
  lVar4 = plVar1[1];
  lVar3 = plVar1[2];
  lVar5 = plVar1[3];
  lVar8 = plVar1[4];
  lVar9 = lVar3;
  lVar10 = lVar2;
  lVar11 = lVar5;
  lVar12 = lVar4;
  lVar13 = lVar8;
  if (lVar2 == 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_1130a3c68);
    _swift_beginAccess(plVar1,auStack_90,0,0);
    lVar10 = *plVar1;
    if (lVar10 == 0) goto LAB_1049e57b8;
    lVar11 = plVar1[3];
    lVar13 = plVar1[4];
    lVar12 = plVar1[1];
    lVar9 = plVar1[2];
    _swift_unknownObjectRetain(lVar10);
    _swift_unknownObjectRetain(lVar12);
    _swift_unknownObjectRetain(lVar9);
    _swift_unknownObjectRetain(lVar11);
    _swift_unknownObjectRetain(lVar13);
  }
  FUN_1049e1a74(lVar2,lVar4,lVar3,lVar5,lVar8);
  _swift_unknownObjectRelease(lVar13);
  _swift_unknownObjectRelease(lVar11);
  _swift_unknownObjectRelease(lVar12);
  _swift_unknownObjectRelease(lVar10);
  uVar6 = (ulong)(param_1 & 1);
  __sSb10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(uVar6);
  uVar7 = 0xd000000000000020;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f223850);
  _objc_msgSend(lVar9,PTR_s_fb_setObject_forKey__1125c5f88,uVar6,uVar7);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _swift_unknownObjectRelease(lVar9);
LAB_1049e57b8:
  FUN_1049e2748();
  return;
}



/* Entry: 1049e57dc; end: 1049e58af;  */

undefined1  [16] FUN_1049e57dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x20;
  undefined1 auVar2 [16];
  
  *param_1 = unaff_x20;
  puVar1 = param_1;
  func_0x0001049e5838();
  *(byte *)(param_1 + 1) = (byte)puVar1 & 1;
  auVar2._8_8_ = param_1 + 1;
  auVar2._0_8_ = 0x1049e5814;
  return auVar2;
}



/* Entry: 1049e58b0; end: 1049e5c53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1049e58b0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_118;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  plVar1 = (long *)(param_1 + _DAT_1130a3c60);
  _swift_beginAccess(plVar1,auStack_a8,0,0);
  lVar6 = *plVar1;
  lVar12 = plVar1[1];
  lVar3 = plVar1[2];
  lVar4 = plVar1[3];
  lVar14 = plVar1[4];
  lVar8 = lVar3;
  lVar10 = lVar4;
  lVar11 = lVar14;
  lVar13 = lVar6;
  lStack_118 = lVar12;
  if (lVar6 == 0) {
    plVar2 = (long *)(param_1 + _DAT_1130a3c68);
    _swift_beginAccess(plVar2,auStack_c0,0,0);
    lVar13 = *plVar2;
    if (lVar13 != 0) {
      lVar10 = plVar2[3];
      lVar11 = plVar2[4];
      lStack_118 = plVar2[1];
      lVar8 = plVar2[2];
      _swift_unknownObjectRetain(lVar13);
      _swift_unknownObjectRetain(lStack_118);
      _swift_unknownObjectRetain(lVar8);
      _swift_unknownObjectRetain(lVar10);
      _swift_unknownObjectRetain(lVar11);
      goto LAB_1049e5998;
    }
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
LAB_1049e5a94:
    FUN_1049eab14(&uStack_90,0x11309c428);
  }
  else {
LAB_1049e5998:
    _swift_unknownObjectRetain(lVar8);
    FUN_1049e1a74(lVar6,lVar12,lVar3,lVar4,lVar14);
    _swift_unknownObjectRelease(lVar11);
    _swift_unknownObjectRelease(lVar10);
    _swift_unknownObjectRelease(lVar8);
    _swift_unknownObjectRelease(lStack_118);
    _swift_unknownObjectRelease(lVar13);
    uVar5 = 0xd000000000000020;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f223850);
    lVar6 = lVar8;
    _objc_msgSend(lVar8,PTR_s_fb_objectForKey__1125c5f60,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _swift_unknownObjectRelease(lVar8);
    if (lVar6 == 0) {
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_e8 = 0;
      uStack_f0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_100,lVar6);
      _swift_unknownObjectRelease(lVar6);
    }
    uStack_88 = uStack_f8;
    uStack_90 = uStack_100;
    lStack_78 = lStack_e8;
    uStack_80 = uStack_f0;
    if (lStack_e8 == 0) goto LAB_1049e5a94;
    puVar7 = &uStack_100;
    _swift_dynamicCast(puVar7,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
    if ((int)puVar7 != 0) goto LAB_1049e5c10;
  }
  lVar6 = *plVar1;
  lVar4 = plVar1[1];
  lVar3 = plVar1[2];
  lVar11 = plVar1[3];
  lVar9 = plVar1[4];
  lVar8 = lVar9;
  lVar14 = lVar6;
  lVar12 = lVar4;
  lVar13 = lVar3;
  lVar10 = lVar11;
  if (lVar6 == 0) {
    plVar1 = (long *)(param_1 + _DAT_1130a3c68);
    _swift_beginAccess(plVar1,auStack_d8,0,0);
    lVar14 = *plVar1;
    if (lVar14 == 0) {
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
      goto LAB_1049e5c20;
    }
    lVar10 = plVar1[3];
    lVar8 = plVar1[4];
    lVar12 = plVar1[1];
    lVar13 = plVar1[2];
    _swift_unknownObjectRetain(lVar14);
    _swift_unknownObjectRetain(lVar12);
    _swift_unknownObjectRetain(lVar13);
    _swift_unknownObjectRetain(lVar10);
    _swift_unknownObjectRetain(lVar8);
  }
  _swift_unknownObjectRetain(lVar8);
  FUN_1049e1a74(lVar6,lVar4,lVar3,lVar11,lVar9);
  _swift_unknownObjectRelease(lVar8);
  _swift_unknownObjectRelease(lVar10);
  _swift_unknownObjectRelease(lVar13);
  _swift_unknownObjectRelease(lVar12);
  _swift_unknownObjectRelease(lVar14);
  uVar5 = 0xd000000000000020;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f223850);
  lVar6 = lVar8;
  _objc_msgSend(lVar8,PTR_s_fb_objectForInfoDictionaryKey__1125c5f58,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _swift_unknownObjectRelease(lVar8);
  if (lVar6 == 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_e8 = 0;
    uStack_f0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_100,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_88 = uStack_f8;
  uStack_90 = uStack_100;
  lStack_78 = lStack_e8;
  uStack_80 = uStack_f0;
  if (lStack_e8 != 0) {
    puVar7 = &uStack_100;
    _swift_dynamicCast(puVar7,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
    if (((ulong)puVar7 & 1) == 0) {
      return 1;
    }
LAB_1049e5c10:
    return uStack_100 & 0xff;
  }
LAB_1049e5c20:
  FUN_1049eab14(&uStack_90,0x11309c428);
  return 1;
}



/* Entry: 1049e5c54; end: 1049e5c87; -[FBSDKSettings isEventDataUsageLimited] */

uint FUN_1049e5c54(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001049e5e54();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1049e5c88; end: 1049e5c8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1049e5c88(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  byte bVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_e0;
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
  
  lVar5 = _DAT_1130a3c98;
  bVar9 = *(byte *)(unaff_x20 + _DAT_1130a3c98);
  if (*(byte *)(unaff_x20 + _DAT_1130a3c98) != 2) goto LAB_1049e605c;
  plVar1 = (long *)(unaff_x20 + _DAT_1130a3c60);
  _swift_beginAccess(plVar1,auStack_98,0,0);
  lVar7 = *plVar1;
  lVar3 = plVar1[1];
  lVar2 = plVar1[2];
  lVar4 = plVar1[3];
  lVar13 = plVar1[4];
  lVar10 = lVar2;
  lVar11 = lVar13;
  lVar12 = lVar7;
  lVar14 = lVar4;
  lStack_e0 = lVar3;
  if (lVar7 == 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_1130a3c68);
    _swift_beginAccess(plVar1,auStack_b0,0,0);
    lVar12 = *plVar1;
    if (lVar12 != 0) {
      lVar14 = plVar1[3];
      lVar11 = plVar1[4];
      lStack_e0 = plVar1[1];
      lVar10 = plVar1[2];
      _swift_unknownObjectRetain(lVar12);
      _swift_unknownObjectRetain(lStack_e0);
      _swift_unknownObjectRetain(lVar10);
      _swift_unknownObjectRetain(lVar14);
      _swift_unknownObjectRetain(lVar11);
      goto LAB_1049e5f38;
    }
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
LAB_1049e6044:
    FUN_1049eab14(&uStack_80,0x11309c428);
  }
  else {
LAB_1049e5f38:
    _swift_unknownObjectRetain(lVar10);
    FUN_1049e1a74(lVar7,lVar3,lVar2,lVar4,lVar13);
    _swift_unknownObjectRelease(lVar11);
    _swift_unknownObjectRelease(lVar14);
    _swift_unknownObjectRelease(lVar10);
    _swift_unknownObjectRelease(lStack_e0);
    _swift_unknownObjectRelease(lVar12);
    uVar6 = 0xd000000000000034;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000034,0x800000010f2238c0);
    lVar7 = lVar10;
    _objc_msgSend(lVar10,PTR_s_fb_objectForKey__1125c5f60,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _swift_unknownObjectRelease(lVar10);
    if (lVar7 == 0) {
      uStack_c8 = 0;
      uStack_d0 = 0;
      lStack_b8 = 0;
      uStack_c0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_d0,lVar7);
      _swift_unknownObjectRelease(lVar7);
    }
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    lStack_68 = lStack_b8;
    uStack_70 = uStack_c0;
    if (lStack_b8 == 0) goto LAB_1049e6044;
    puVar8 = &uStack_d0;
    _swift_dynamicCast(puVar8,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
    if ((int)puVar8 != 0) {
      *(byte *)(unaff_x20 + lVar5) = (byte)uStack_d0;
      bVar9 = (byte)uStack_d0;
      goto LAB_1049e605c;
    }
  }
  bVar9 = 0;
  *(undefined1 *)(unaff_x20 + lVar5) = 0;
LAB_1049e605c:
  return bVar9 & 1;
}



/* Entry: 1049e5c8c; end: 1049e5cbb; -[FBSDKSettings setIsEventDataUsageLimited:] */

void FUN_1049e5c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_1049e5cbc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049e5cbc; end: 1049e607f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e5cbc(uint param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  *(char *)(unaff_x20 + _DAT_1130a3c98) = (char)param_1;
  plVar1 = (long *)(unaff_x20 + _DAT_1130a3c60);
  _swift_beginAccess(plVar1,auStack_78,0,0);
  lVar2 = *plVar1;
  lVar4 = plVar1[1];
  lVar3 = plVar1[2];
  lVar5 = plVar1[3];
  lVar8 = plVar1[4];
  lVar9 = lVar3;
  lVar10 = lVar2;
  lVar11 = lVar5;
  lVar12 = lVar4;
  lVar13 = lVar8;
  if (lVar2 == 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_1130a3c68);
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
  }
  FUN_1049e1a74(lVar2,lVar4,lVar3,lVar5,lVar8);
  _swift_unknownObjectRelease(lVar13);
  _swift_unknownObjectRelease(lVar11);
  _swift_unknownObjectRelease(lVar12);
  _swift_unknownObjectRelease(lVar10);
  uVar6 = (ulong)(param_1 & 1);
  __sSb10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(uVar6);
  uVar7 = 0xd000000000000034;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000034,0x800000010f2238c0);
  _objc_msgSend(lVar9,PTR_s_fb_setObject_forKey__1125c5f88,uVar6,uVar7);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _swift_unknownObjectRelease(lVar9);
  return;
}



/* Entry: 1049e6080; end: 1049e60db;  */

undefined1  [16] FUN_1049e6080(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x20;
  undefined1 auVar2 [16];
  
  *param_1 = unaff_x20;
  puVar1 = param_1;
  func_0x0001049e5e54();
  *(byte *)(param_1 + 1) = (byte)puVar1 & 1;
  auVar2._8_8_ = param_1 + 1;
  auVar2._0_8_ = 0x1049e60b8;
  return auVar2;
}



/* Entry: 1049e60dc; end: 1049e610f; -[FBSDKSettings shouldUseCachedValuesForExpensiveMetadata] */

uint FUN_1049e60dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001049e62dc();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1049e6110; end: 1049e6113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1049e6110(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  byte bVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_e0;
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
  
  lVar5 = _DAT_1130a3ca0;
  bVar9 = *(byte *)(unaff_x20 + _DAT_1130a3ca0);
  if (*(byte *)(unaff_x20 + _DAT_1130a3ca0) != 2) goto LAB_1049e64e4;
  plVar1 = (long *)(unaff_x20 + _DAT_1130a3c60);
  _swift_beginAccess(plVar1,auStack_98,0,0);
  lVar7 = *plVar1;
  lVar3 = plVar1[1];
  lVar2 = plVar1[2];
  lVar4 = plVar1[3];
  lVar13 = plVar1[4];
  lVar10 = lVar2;
  lVar11 = lVar13;
  lVar12 = lVar7;
  lVar14 = lVar4;
  lStack_e0 = lVar3;
  if (lVar7 == 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_1130a3c68);
    _swift_beginAccess(plVar1,auStack_b0,0,0);
    lVar12 = *plVar1;
    if (lVar12 != 0) {
      lVar14 = plVar1[3];
      lVar11 = plVar1[4];
      lStack_e0 = plVar1[1];
      lVar10 = plVar1[2];
      _swift_unknownObjectRetain(lVar12);
      _swift_unknownObjectRetain(lStack_e0);
      _swift_unknownObjectRetain(lVar10);
      _swift_unknownObjectRetain(lVar14);
      _swift_unknownObjectRetain(lVar11);
      goto LAB_1049e63c0;
    }
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
LAB_1049e64cc:
    FUN_1049eab14(&uStack_80,0x11309c428);
  }
  else {
LAB_1049e63c0:
    _swift_unknownObjectRetain(lVar10);
    FUN_1049e1a74(lVar7,lVar3,lVar2,lVar4,lVar13);
    _swift_unknownObjectRelease(lVar11);
    _swift_unknownObjectRelease(lVar14);
    _swift_unknownObjectRelease(lVar10);
    _swift_unknownObjectRelease(lStack_e0);
    _swift_unknownObjectRelease(lVar12);
    uVar6 = 0xd000000000000041;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000041,0x800000010f223900);
    lVar7 = lVar10;
    _objc_msgSend(lVar10,PTR_s_fb_objectForKey__1125c5f60,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _swift_unknownObjectRelease(lVar10);
    if (lVar7 == 0) {
      uStack_c8 = 0;
      uStack_d0 = 0;
      lStack_b8 = 0;
      uStack_c0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_d0,lVar7);
      _swift_unknownObjectRelease(lVar7);
    }
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    lStack_68 = lStack_b8;
    uStack_70 = uStack_c0;
    if (lStack_b8 == 0) goto LAB_1049e64cc;
    puVar8 = &uStack_d0;
    _swift_dynamicCast(puVar8,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
    if ((int)puVar8 != 0) {
      *(byte *)(unaff_x20 + lVar5) = (byte)uStack_d0;
      bVar9 = (byte)uStack_d0;
      goto LAB_1049e64e4;
    }
  }
  bVar9 = 0;
  *(undefined1 *)(unaff_x20 + lVar5) = 0;
LAB_1049e64e4:
  return bVar9 & 1;
}



/* Entry: 1049e6114; end: 1049e6143; -[FBSDKSettings setShouldUseCachedValuesForExpensiveMetadata:] */

void FUN_1049e6114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_1049e6144(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049e6144; end: 1049e6507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e6144(uint param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  *(char *)(unaff_x20 + _DAT_1130a3ca0) = (char)param_1;
  plVar1 = (long *)(unaff_x20 + _DAT_1130a3c60);
  _swift_beginAccess(plVar1,auStack_78,0,0);
  lVar2 = *plVar1;
  lVar4 = plVar1[1];
  lVar3 = plVar1[2];
  lVar5 = plVar1[3];
  lVar8 = plVar1[4];
  lVar9 = lVar3;
  lVar10 = lVar2;
  lVar11 = lVar5;
  lVar12 = lVar4;
  lVar13 = lVar8;
  if (lVar2 == 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_1130a3c68);
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
  }
  FUN_1049e1a74(lVar2,lVar4,lVar3,lVar5,lVar8);
  _swift_unknownObjectRelease(lVar13);
  _swift_unknownObjectRelease(lVar11);
  _swift_unknownObjectRelease(lVar12);
  _swift_unknownObjectRelease(lVar10);
  uVar6 = (ulong)(param_1 & 1);
  __sSb10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(uVar6);
  uVar7 = 0xd000000000000041;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000041,0x800000010f223900);
  _objc_msgSend(lVar9,PTR_s_fb_setObject_forKey__1125c5f88,uVar6,uVar7);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _swift_unknownObjectRelease(lVar9);
  return;
}



/* Entry: 1049e6508; end: 1049e6563;  */

undefined1  [16] FUN_1049e6508(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x20;
  undefined1 auVar2 [16];
  
  *param_1 = unaff_x20;
  puVar1 = param_1;
  func_0x0001049e62dc();
  *(byte *)(param_1 + 1) = (byte)puVar1 & 1;
  auVar2._8_8_ = param_1 + 1;
  auVar2._0_8_ = 0x1049e6540;
  return auVar2;
}



/* Entry: 1049e6564; end: 1049e65a7; -[FBSDKSettings isGraphErrorRecoveryEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1049e6564(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a3ca8;
  _swift_beginAccess(param_1 + _DAT_1130a3ca8,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 1049e65a8; end: 1049e65e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1049e65a8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a3ca8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3ca8,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Entry: 1049e65e8; end: 1049e6637; -[FBSDKSettings setIsGraphErrorRecoveryEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e65e8(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a3ca8;
  _swift_beginAccess(param_1 + _DAT_1130a3ca8,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1049e6638; end: 1049e66c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e6638(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a3ca8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3ca8,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 1049e66c4; end: 1049e66d3; -[FBSDKSettings appID] */

void FUN_1049e66c4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1049e67cc();
  _objc_release(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,param_2);
    _swift_bridgeObjectRelease(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1049e66d4; end: 1049e674b; -[FBSDKSettings setAppID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e66d4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_1130a3cb0);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  func_0x0001007742d4(lVar2,lVar3);
  FUN_1049e2748();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049e674c; end: 1049e677b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e674c(undefined8 param_1,undefined8 param_2)

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
  ulong uVar15;
  long unaff_x20;
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
  
  puVar13 = (undefined8 *)(unaff_x20 + _DAT_1130a3cb0);
  uVar5 = *puVar13;
  uVar11 = puVar13[1];
  *puVar13 = param_1;
  puVar13[1] = param_2;
  func_0x0001007742d4(uVar5,uVar11);
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



/* Entry: 1049e677c; end: 1049e67cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e677c(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_1[1];
  puVar1 = (undefined8 *)(*param_2 + _DAT_1130a3cb0);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  *puVar1 = *param_1;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRetain();
  func_0x0001007742d4(uVar2,uVar4);
  FUN_1049e2748();
  return;
}



/* Entry: 1049e67cc; end: 1049e6a47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049e67cc(void)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long unaff_x20;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3cb0);
  uVar3 = *puVar1;
  lVar6 = puVar1[1];
  uVar10 = uVar3;
  lVar11 = lVar6;
  if (lVar6 != 1) goto LAB_1049e6a14;
  plVar2 = (long *)(unaff_x20 + _DAT_1130a3c60);
  _swift_beginAccess(plVar2,auStack_a8,0,0);
  lVar11 = *plVar2;
  lVar7 = plVar2[1];
  lVar4 = plVar2[2];
  lVar8 = plVar2[3];
  lVar13 = plVar2[4];
  lVar14 = lVar13;
  lVar15 = lVar11;
  lVar16 = lVar8;
  lStack_f8 = lVar4;
  lStack_f0 = lVar7;
  if (lVar11 == 0) {
    plVar2 = (long *)(unaff_x20 + _DAT_1130a3c68);
    _swift_beginAccess(plVar2,auStack_c0,0,0);
    lVar15 = *plVar2;
    if (lVar15 != 0) {
      lVar16 = plVar2[3];
      lVar14 = plVar2[4];
      lStack_f0 = plVar2[1];
      lStack_f8 = plVar2[2];
      _swift_unknownObjectRetain(lVar15);
      _swift_unknownObjectRetain(lStack_f0);
      _swift_unknownObjectRetain(lStack_f8);
      _swift_unknownObjectRetain(lVar16);
      _swift_unknownObjectRetain(lVar14);
      goto LAB_1049e68d0;
    }
    lStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
LAB_1049e69e0:
    FUN_1049eab14(&uStack_90,0x11309c428);
LAB_1049e69f0:
    uVar10 = 0;
    lVar11 = 0;
  }
  else {
LAB_1049e68d0:
    _swift_unknownObjectRetain(lVar14);
    FUN_1049e1a74(lVar11,lVar7,lVar4,lVar8,lVar13);
    _swift_unknownObjectRelease(lVar14);
    _swift_unknownObjectRelease(lVar16);
    _swift_unknownObjectRelease(lStack_f8);
    _swift_unknownObjectRelease(lStack_f0);
    _swift_unknownObjectRelease(lVar15);
    uVar10 = 0x6b6f6f6265636146;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6b6f6f6265636146,0xed00004449707041);
    lVar11 = lVar14;
    _objc_msgSend(lVar14,PTR_s_fb_objectForInfoDictionaryKey__1125c5f58,uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _swift_unknownObjectRelease(lVar14);
    if (lVar11 == 0) {
      lStack_d8 = 0;
      uStack_e0 = 0;
      lStack_c8 = 0;
      uStack_d0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,lVar11);
      _swift_unknownObjectRelease(lVar11);
    }
    lStack_88 = lStack_d8;
    uStack_90 = uStack_e0;
    lStack_78 = lStack_c8;
    uStack_80 = uStack_d0;
    if (lStack_c8 == 0) goto LAB_1049e69e0;
    puVar12 = &uStack_e0;
    _swift_dynamicCast(puVar12,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar10 = uStack_e0;
    lVar11 = lStack_d8;
    if ((int)puVar12 == 0) goto LAB_1049e69f0;
  }
  uVar5 = *puVar1;
  uVar9 = puVar1[1];
  *puVar1 = uVar10;
  puVar1[1] = lVar11;
  _swift_bridgeObjectRetain(lVar11);
  func_0x0001007742d4(uVar5,uVar9);
LAB_1049e6a14:
  func_0x0001007742e8(uVar3,lVar6);
  auVar17._8_8_ = lVar11;
  auVar17._0_8_ = uVar10;
  return auVar17;
}



/* Entry: 1049e6a48; end: 1049e6a7b;  */

undefined1  [16] FUN_1049e6a48(long *param_1,long param_2)

{
  long *plVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[2] = unaff_x20;
  plVar1 = param_1;
  FUN_1049e67cc();
  *param_1 = (long)plVar1;
  param_1[1] = param_2;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_1049e6a7c;
  return auVar2;
}



/* Entry: 1049e6a7c; end: 1049e6af7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e6a7c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  puVar1 = (undefined8 *)(param_1[2] + _DAT_1130a3cb0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  *puVar1 = *param_1;
  puVar1[1] = uVar2;
  if ((param_2 & 1) != 0) {
    _swift_bridgeObjectRetain(uVar2);
    func_0x0001007742d4(uVar3,uVar4);
    FUN_1049e2748();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
    return;
  }
  func_0x0001007742d4(uVar3,uVar4);
  FUN_1049e2748();
  return;
}



/* Entry: 1049e6af8; end: 1049e6b37; -[FBSDKSettings appURLSchemeSuffix] */

void FUN_1049e6af8(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = lRam000000011309ff48;
  _objc_retain();
  if (lVar2 != -1) {
    _swift_once(0x11309ff48,FUN_1049e2e18);
  }
  uVar1 = (ulong)bRam0000000113815940;
  lVar2 = lRam0000000113815948;
  FUN_1049e30b0(uVar1);
  _objc_release(param_1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1049e6b38; end: 1049e6b77; -[FBSDKSettings setAppURLSchemeSuffix:] */

void FUN_1049e6b38(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  lVar1 = lRam000000011309ff48;
  _objc_retain();
  if (lVar1 != -1) {
    _swift_once(0x11309ff48,FUN_1049e2e18);
  }
  uVar2 = uRam0000000113815948;
  lStack_58 = param_3;
  uStack_50 = param_2;
  uStack_48 = param_1;
  _objc_retain();
  _swift_setAtReferenceWritableKeyPath(&uStack_48,uVar2,&lStack_58);
  _objc_release(param_1);
  FUN_1049e2748();
  _objc_release(param_1);
  return;
}



/* Entry: 1049e6b78; end: 1049e6c17;  */

undefined1  [16] FUN_1049e6b78(long *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong unaff_x20;
  undefined1 auVar4 [16];
  
  puVar1 = (ulong *)0x38;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x38,0xce95);
  }
  *param_1 = (long)puVar1;
  puVar1[5] = unaff_x20;
  if (lRam000000011309ff48 != -1) {
    _swift_once(0x11309ff48,FUN_1049e2e18);
  }
  uVar3 = uRam0000000113815948;
  puVar1[6] = uRam0000000113815948;
  uVar2 = (ulong)bRam0000000113815940;
  FUN_1049e30b0();
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  auVar4._8_8_ = puVar1;
  auVar4._0_8_ = 0x1049eaf28;
  return auVar4;
}



/* Entry: 1049e6c18; end: 1049e6c23; -[FBSDKSettings _appURLSchemeSuffix] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e6c18(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_1130a3cb8);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1049e6c24; end: 1049e6c2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049e6c24(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_1130a3cb8);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1049e6c30; end: 1049e6c3b; -[FBSDKSettings set_appURLSchemeSuffix:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e6c30(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_1130a3cb8);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 1049e6c3c; end: 1049e6c87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e6c3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3cb8);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1049e6c88; end: 1049e6cc7; -[FBSDKSettings clientToken] */

void FUN_1049e6c88(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = lRam000000011309ff50;
  _objc_retain();
  if (lVar2 != -1) {
    _swift_once(0x11309ff50,FUN_1049e2ea8);
  }
  uVar1 = (ulong)bRam0000000113815950;
  lVar2 = lRam0000000113815958;
  FUN_1049e30b0(uVar1);
  _objc_release(param_1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1049e6cc8; end: 1049e6d07; -[FBSDKSettings setClientToken:] */

void FUN_1049e6cc8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  lVar1 = lRam000000011309ff50;
  _objc_retain();
  if (lVar1 != -1) {
    _swift_once(0x11309ff50,FUN_1049e2ea8);
  }
  uVar2 = uRam0000000113815958;
  lStack_58 = param_3;
  uStack_50 = param_2;
  uStack_48 = param_1;
  _objc_retain();
  _swift_setAtReferenceWritableKeyPath(&uStack_48,uVar2,&lStack_58);
  _objc_release(param_1);
  FUN_1049e2748();
  _objc_release(param_1);
  return;
}



/* Entry: 1049e6d08; end: 1049e6da7;  */

undefined1  [16] FUN_1049e6d08(long *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong unaff_x20;
  undefined1 auVar4 [16];
  
  puVar1 = (ulong *)0x38;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x38,0xfa4c);
  }
  *param_1 = (long)puVar1;
  puVar1[5] = unaff_x20;
  if (lRam000000011309ff50 != -1) {
    _swift_once(0x11309ff50,FUN_1049e2ea8);
  }
  uVar3 = uRam0000000113815958;
  puVar1[6] = uRam0000000113815958;
  uVar2 = (ulong)bRam0000000113815950;
  FUN_1049e30b0();
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  auVar4._8_8_ = puVar1;
  auVar4._0_8_ = FUN_1049e6da8;
  return auVar4;
}



/* Entry: 1049e6da8; end: 1049e6dab;  */

void FUN_1049e6da8(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  param_1 = (undefined8 *)*param_1;
  puVar3 = param_1 + 2;
  *puVar3 = *param_1;
  uVar2 = param_1[5];
  uVar1 = param_1[6];
  puVar4 = param_1 + 4;
  *puVar4 = uVar2;
  param_1[3] = param_1[1];
  if ((param_2 & 1) == 0) {
    _objc_retain(uVar2);
    _swift_setAtReferenceWritableKeyPath(puVar4,uVar1,puVar3);
    _objc_release(uVar2);
    FUN_1049e2748();
  }
  else {
    _swift_bridgeObjectRetain();
    _objc_retain(uVar2);
    _swift_setAtReferenceWritableKeyPath(puVar4,uVar1,puVar3);
    _objc_release(uVar2);
    FUN_1049e2748();
    _swift_bridgeObjectRelease(param_1[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 1049e6dac; end: 1049e6db7; -[FBSDKSettings _clientToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e6dac(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_1130a3cc0);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1049e6db8; end: 1049e6dc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049e6db8(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_1130a3cc0);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1049e6dc4; end: 1049e6dcf; -[FBSDKSettings set_clientToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049e6dc4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_1130a3cc0);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}


