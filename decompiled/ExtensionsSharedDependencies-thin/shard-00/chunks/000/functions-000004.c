/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 000282c8; end: 00028307;  */

void FUN_000282c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae67b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cd978;
  _swift_getWitnessTable(&UNK_007cd978,&UNK_0099e190);
  puRam0000000000ae67b8 = puVar1;
  return;
}



/* Entry: 00028308; end: 00028503;  */

int FUN_00028308(byte *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x11] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  iVar1 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar1 = -1;
  }
  return iVar1 + 1;
}



/* Entry: 00028504; end: 00028543;  */

undefined8 * FUN_00028504(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(uint *)(*(long *)(param_1 + -8) + 0x50);
  puVar2 = param_2;
  if ((uVar1 >> 0x11 & 1) != 0) {
    puVar2 = *(undefined8 **)(*(long *)(param_1 + -8) + 0x40);
    _swift_slowAlloc(puVar2,uVar1 & 0xff);
    *param_2 = puVar2;
  }
  return puVar2;
}



/* Entry: 00028544; end: 00028deb;  */

undefined8 * FUN_00028544(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 00028dec; end: 00028e2f;  */

long FUN_00028dec(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  _swift_allocObject();
  _swift_defaultActor_initialize();
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(unaff_x20 + 0x70) = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(unaff_x20 + 0x78) = puVar1;
  *(undefined **)(unaff_x20 + 0x80) = puVar1;
  return unaff_x20;
}



/* Entry: 00028e30; end: 00028fff;  */

void FUN_00028e30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x70,auStack_68,0x21,0);
  uVar4 = *(ulong *)(unaff_x20 + 0x70);
  _swift_bridgeObjectRetain(param_2);
  uVar1 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(unaff_x20 + 0x70) = uVar4;
  uVar2 = uVar4;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_00029fa0(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    *(ulong *)(unaff_x20 + 0x70) = uVar2;
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar4 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_00029fa0(uVar4,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
  lVar3 = uVar4 + uVar1 * 0x18;
  *(undefined8 *)(lVar3 + 0x20) = param_1;
  *(undefined8 *)(lVar3 + 0x28) = param_2;
  *(undefined8 *)(lVar3 + 0x30) = param_3;
  *(ulong *)(unaff_x20 + 0x70) = uVar4;
  _swift_endAccess(auStack_68);
  return;
}



/* Entry: 00029000; end: 000290d3;  */

void FUN_00029000(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x80,auStack_58,0x21,0);
  uVar4 = *(ulong *)(unaff_x20 + 0x80);
  _swift_bridgeObjectRetain(param_2);
  uVar2 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(unaff_x20 + 0x80) = uVar4;
  uVar3 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_0002a0e4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    *(ulong *)(unaff_x20 + 0x80) = uVar3;
  }
  uVar2 = *(ulong *)(uVar3 + 0x10);
  uVar4 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_0002a0e4(uVar4,uVar2 + 1,1,uVar3);
  }
  *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
  lVar1 = uVar4 + uVar2 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  *(ulong *)(unaff_x20 + 0x80) = uVar4;
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 000290d4; end: 00029e77;  */

/* WARNING: Removing unreachable block (ram,0x00029c9c) */
/* WARNING: Removing unreachable block (ram,0x00029b48) */
/* WARNING: Removing unreachable block (ram,0x00029c0c) */
/* WARNING: Removing unreachable block (ram,0x00029d30) */

void FUN_000290d4(undefined8 *param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  uint uVar15;
  long lVar16;
  long extraout_x8;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  code *pcVar21;
  long lVar22;
  long unaff_x20;
  undefined *puVar23;
  undefined8 *puVar24;
  undefined **ppuVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  undefined **ppuStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 *puStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_b8;
  undefined *apuStack_b0 [3];
  undefined *apuStack_98 [3];
  undefined1 auStack_80 [32];
  
  lVar4 = 0;
  puStack_100 = param_1;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lStack_f8 = (long)&ppuStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_d0 = PTR___swiftEmptyArrayStorage_0099b8f0;
  FUN_0002c99c();
  _swift_beginAccess(unaff_x20 + 0x70,auStack_80,0,0);
  lVar4 = *(long *)(unaff_x20 + 0x70);
  uVar17 = *(ulong *)(lVar4 + 0x10);
  if (uVar17 == 0) {
    pcStack_108 = (code *)0x0;
  }
  else {
    _swift_bridgeObjectRetain(lVar4);
    pcVar21 = (code *)0x0;
    uVar29 = 0;
    puVar24 = (undefined8 *)(lVar4 + 0x30);
    do {
      if (*(ulong *)(lVar4 + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x29e34);
        (*pcVar21)();
      }
      uVar8 = puVar24[-2];
      uVar7 = puVar24[-1];
      uVar26 = *puVar24;
      _swift_bridgeObjectRetain(uVar7);
      FUN_0002a790(pcVar21,0);
      puVar23 = puStack_d0;
      _swift_isUniquelyReferenced_nonNull_native();
      apuStack_98[0] = puStack_d0;
      uVar5 = 0x494a4f4d544942;
      uVar20 = 0;
      FUN_000202c0();
      uVar18 = (ulong)~(uint)uVar20 & 1;
      lVar28 = *(long *)(puStack_d0 + 0x10) + uVar18;
      if (SCARRY8(*(long *)(puStack_d0 + 0x10),uVar18)) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x29e38);
        (*pcVar21)();
      }
      if (*(long *)(puStack_d0 + 0x18) < lVar28) {
        FUN_0003297c(lVar28,puVar23);
        puStack_d0 = apuStack_98[0];
        uVar5 = 0x494a4f4d544942;
        uVar15 = 0;
        FUN_000202c0();
        if (((uint)uVar20 & 1) != (uVar15 & 1)) goto LAB_00029e68;
      }
      else if (((ulong)puVar23 & 1) == 0) {
        FUN_00032560();
        puStack_d0 = apuStack_98[0];
      }
      if ((uVar20 & 1) == 0) {
        *(ulong *)(puStack_d0 + (uVar5 >> 6) * 8 + 0x40) =
             *(ulong *)(puStack_d0 + (uVar5 >> 6) * 8 + 0x40) | 1L << (uVar5 & 0x3f);
        puVar2 = (undefined8 *)(*(long *)(puStack_d0 + 0x30) + uVar5 * 0x10);
        *puVar2 = 0x494a4f4d544942;
        puVar2[1] = 0xe700000000000000;
        *(undefined **)(*(long *)(puStack_d0 + 0x38) + uVar5 * 8) =
             PTR___swiftEmptyDictionarySingleton_0099b8f8;
        if (SCARRY8(*(long *)(puStack_d0 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x29e58);
          (*pcVar21)();
        }
        *(long *)(puStack_d0 + 0x10) = *(long *)(puStack_d0 + 0x10) + 1;
      }
      lVar27 = *(long *)(puStack_d0 + 0x38);
      uVar6 = *(ulong *)(lVar27 + uVar5 * 8);
      _swift_isUniquelyReferenced_nonNull_native();
      puVar23 = *(undefined **)(lVar27 + uVar5 * 8);
      *(undefined8 *)(lVar27 + uVar5 * 8) = 0x8000000000000000;
      uVar20 = uVar8;
      uVar18 = uVar7;
      apuStack_98[0] = puVar23;
      FUN_000202c0();
      uVar19 = (ulong)~(uint)uVar18 & 1;
      lVar28 = *(long *)(puVar23 + 0x10) + uVar19;
      if (SCARRY8(*(long *)(puVar23 + 0x10),uVar19)) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x29e3c);
        (*pcVar21)();
      }
      if (*(long *)(puVar23 + 0x18) < lVar28) {
        FUN_000326e8(lVar28,uVar6);
        uVar20 = uVar8;
        uVar6 = uVar7;
        FUN_000202c0();
        if (((uint)uVar18 & 1) != ((uint)uVar6 & 1)) goto LAB_00029e68;
LAB_00029378:
        if ((uVar18 & 1) != 0) goto LAB_00029180;
LAB_00029380:
        *(ulong *)(apuStack_98[0] + (uVar20 >> 6) * 8 + 0x40) =
             *(ulong *)(apuStack_98[0] + (uVar20 >> 6) * 8 + 0x40) | 1L << (uVar20 & 0x3f);
        puVar1 = (ulong *)(*(long *)(apuStack_98[0] + 0x30) + uVar20 * 0x10);
        *puVar1 = uVar8;
        puVar1[1] = uVar7;
        *(undefined8 *)(*(long *)(apuStack_98[0] + 0x38) + uVar20 * 8) = uVar26;
        if (SCARRY8(*(long *)(apuStack_98[0] + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x29e5c);
          (*pcVar21)();
        }
        *(long *)(apuStack_98[0] + 0x10) = *(long *)(apuStack_98[0] + 0x10) + 1;
        puVar23 = apuStack_98[0];
      }
      else {
        if ((uVar6 & 1) != 0) goto LAB_00029378;
        FUN_000323f8();
        if ((uVar18 & 1) == 0) goto LAB_00029380;
LAB_00029180:
        puVar23 = apuStack_98[0];
        *(undefined8 *)(*(long *)(apuStack_98[0] + 0x38) + uVar20 * 8) = uVar26;
        _swift_bridgeObjectRelease(uVar7);
      }
      uVar29 = uVar29 + 1;
      uVar26 = *(undefined8 *)(lVar27 + uVar5 * 8);
      *(undefined **)(lVar27 + uVar5 * 8) = puVar23;
      _swift_bridgeObjectRelease(uVar26);
      puVar24 = puVar24 + 3;
      pcVar21 = FUN_00029e78;
    } while (uVar17 != uVar29);
    _swift_bridgeObjectRelease(lVar4);
    pcStack_108 = FUN_00029e78;
  }
  puStack_c8 = PTR___swiftEmptyArrayStorage_0099b8f0;
  FUN_0002caa4();
  lVar4 = *(long *)(unaff_x20 + 0x70);
  uVar17 = *(ulong *)(lVar4 + 0x10);
  if (uVar17 == 0) {
    uStack_110 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar4);
    uVar26 = 0;
    uVar29 = 0;
    puVar24 = (undefined8 *)(lVar4 + 0x28);
    do {
      if (*(ulong *)(lVar4 + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x29e40);
        (*pcVar21)();
      }
      uVar10 = puVar24[-1];
      uVar3 = *puVar24;
      _swift_bridgeObjectRetain(uVar3);
      FUN_0002a790(uVar26,0);
      puVar23 = puStack_c8;
      _swift_isUniquelyReferenced_nonNull_native();
      apuStack_98[0] = puStack_c8;
      uVar7 = 0x494a4f4d544942;
      uVar8 = 0;
      FUN_000202c0();
      uVar20 = (ulong)~(uint)uVar8 & 1;
      lVar28 = *(long *)(puStack_c8 + 0x10) + uVar20;
      if (SCARRY8(*(long *)(puStack_c8 + 0x10),uVar20)) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x29e44);
        (*pcVar21)();
      }
      if (*(long *)(puStack_c8 + 0x18) < lVar28) {
        FUN_000326d4(lVar28,puVar23);
        puStack_c8 = apuStack_98[0];
        uVar7 = 0x494a4f4d544942;
        uVar15 = 0;
        FUN_000202c0();
        if (((uint)uVar8 & 1) != (uVar15 & 1)) goto LAB_00029e68;
      }
      else if (((ulong)puVar23 & 1) == 0) {
        FUN_000323e4();
        puStack_c8 = apuStack_98[0];
      }
      if ((uVar8 & 1) == 0) {
        *(ulong *)(puStack_c8 + (uVar7 >> 6) * 8 + 0x40) =
             *(ulong *)(puStack_c8 + (uVar7 >> 6) * 8 + 0x40) | 1L << (uVar7 & 0x3f);
        puVar2 = (undefined8 *)(*(long *)(puStack_c8 + 0x30) + uVar7 * 0x10);
        *puVar2 = 0x494a4f4d544942;
        puVar2[1] = 0xe700000000000000;
        *(undefined **)(*(long *)(puStack_c8 + 0x38) + uVar7 * 8) =
             PTR___swiftEmptyArrayStorage_0099b8f0;
        if (SCARRY8(*(long *)(puStack_c8 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x29e60);
          (*pcVar21)();
        }
        *(long *)(puStack_c8 + 0x10) = *(long *)(puStack_c8 + 0x10) + 1;
      }
      lVar28 = *(long *)(puStack_c8 + 0x38);
      uVar5 = *(ulong *)(lVar28 + uVar7 * 8);
      uVar8 = uVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(lVar28 + uVar7 * 8) = uVar5;
      uVar20 = uVar5;
      if ((uVar8 & 1) == 0) {
        uVar20 = 0;
        FUN_0002a0e4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
        *(ulong *)(lVar28 + uVar7 * 8) = uVar20;
      }
      uVar8 = *(ulong *)(uVar20 + 0x10);
      uVar5 = uVar20;
      if (*(ulong *)(uVar20 + 0x18) >> 1 <= uVar8) {
        uVar5 = (ulong)(1 < *(ulong *)(uVar20 + 0x18));
        FUN_0002a0e4(uVar5,uVar8 + 1,1,uVar20);
        *(ulong *)(lVar28 + uVar7 * 8) = uVar5;
      }
      uVar29 = uVar29 + 1;
      *(ulong *)(uVar5 + 0x10) = uVar8 + 1;
      lVar28 = uVar5 + uVar8 * 0x10;
      *(undefined8 *)(lVar28 + 0x20) = uVar10;
      *(undefined8 *)(lVar28 + 0x28) = uVar3;
      puVar24 = puVar24 + 3;
      uVar26 = 0x2a8ec;
    } while (uVar17 != uVar29);
    _swift_bridgeObjectRelease(lVar4);
    uStack_110 = 0x2a8ec;
  }
  puVar23 = PTR___swiftEmptyArrayStorage_0099b8f0;
  FUN_0002caa4();
  _swift_beginAccess(unaff_x20 + 0x78,apuStack_98,0,0);
  lVar4 = *(long *)(unaff_x20 + 0x78);
  uVar17 = *(ulong *)(lVar4 + 0x10);
  if (uVar17 == 0) {
    pcStack_118 = (code *)0x0;
  }
  else {
    _swift_bridgeObjectRetain();
    pcVar21 = (code *)0x0;
    uVar29 = 0;
    puVar24 = (undefined8 *)(lVar4 + 0x28);
    do {
      if (*(ulong *)(lVar4 + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x29e48);
        (*pcVar21)();
      }
      uVar26 = puVar24[-1];
      uVar10 = *puVar24;
      _swift_bridgeObjectRetain(uVar10);
      FUN_0002a790(pcVar21,0);
      puVar9 = puVar23;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar7 = 0x494a4f4d544942;
      uVar8 = 0;
      apuStack_b0[0] = puVar23;
      FUN_000202c0();
      uVar20 = (ulong)~(uint)uVar8 & 1;
      lVar28 = *(long *)(puVar23 + 0x10) + uVar20;
      if (SCARRY8(*(long *)(puVar23 + 0x10),uVar20)) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x29e4c);
        (*pcVar21)();
      }
      if (*(long *)(puVar23 + 0x18) < lVar28) {
        FUN_000326d4(lVar28,puVar9);
        puVar23 = apuStack_b0[0];
        uVar7 = 0x494a4f4d544942;
        uVar15 = 0;
        FUN_000202c0();
        if (((uint)uVar8 & 1) != (uVar15 & 1)) goto LAB_00029e68;
      }
      else if (((ulong)puVar9 & 1) == 0) {
        FUN_000323e4();
        puVar23 = apuStack_b0[0];
      }
      if ((uVar8 & 1) == 0) {
        *(ulong *)(puVar23 + (uVar7 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar23 + (uVar7 >> 6) * 8 + 0x40) | 1L << (uVar7 & 0x3f);
        puVar2 = (undefined8 *)(*(long *)(puVar23 + 0x30) + uVar7 * 0x10);
        *puVar2 = 0x494a4f4d544942;
        puVar2[1] = 0xe700000000000000;
        *(undefined **)(*(long *)(puVar23 + 0x38) + uVar7 * 8) =
             PTR___swiftEmptyArrayStorage_0099b8f0;
        if (SCARRY8(*(long *)(puVar23 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x29e64);
          (*pcVar21)();
        }
        *(long *)(puVar23 + 0x10) = *(long *)(puVar23 + 0x10) + 1;
      }
      lVar28 = *(long *)(puVar23 + 0x38);
      uVar5 = *(ulong *)(lVar28 + uVar7 * 8);
      uVar8 = uVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(lVar28 + uVar7 * 8) = uVar5;
      uVar20 = uVar5;
      if ((uVar8 & 1) == 0) {
        uVar20 = 0;
        FUN_0002a0e4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
        *(ulong *)(lVar28 + uVar7 * 8) = uVar20;
      }
      uVar8 = *(ulong *)(uVar20 + 0x10);
      uVar5 = uVar20;
      if (*(ulong *)(uVar20 + 0x18) >> 1 <= uVar8) {
        uVar5 = (ulong)(1 < *(ulong *)(uVar20 + 0x18));
        FUN_0002a0e4(uVar5,uVar8 + 1,1,uVar20);
        *(ulong *)(lVar28 + uVar7 * 8) = uVar5;
      }
      uVar29 = uVar29 + 1;
      *(ulong *)(uVar5 + 0x10) = uVar8 + 1;
      lVar28 = uVar5 + uVar8 * 0x10;
      *(undefined8 *)(lVar28 + 0x20) = uVar26;
      *(undefined8 *)(lVar28 + 0x28) = uVar10;
      puVar24 = puVar24 + 3;
      pcVar21 = FUN_0002a8e8;
    } while (uVar17 != uVar29);
    _swift_bridgeObjectRelease();
    pcStack_118 = FUN_0002a8e8;
  }
  puStack_d8 = PTR___swiftEmptyArrayStorage_0099b8f0;
  FUN_0002caa4();
  _swift_beginAccess(unaff_x20 + 0x80,apuStack_b0,0,0);
  lVar4 = *(long *)(unaff_x20 + 0x80);
  uVar17 = *(ulong *)(lVar4 + 0x10);
  if (uVar17 == 0) {
    uStack_e0 = 0;
  }
  else {
    _swift_bridgeObjectRetain();
    uVar26 = 0;
    uVar29 = 0;
    puVar24 = (undefined8 *)(lVar4 + 0x28);
    lStack_f0 = lVar4;
    do {
      if (*(ulong *)(lStack_f0 + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x29e50);
        (*pcVar21)();
      }
      uVar10 = puVar24[-1];
      uVar3 = *puVar24;
      _swift_bridgeObjectRetain(uVar3);
      FUN_0002a790(uVar26,0);
      puVar9 = puStack_d8;
      _swift_isUniquelyReferenced_nonNull_native();
      puStack_b8 = puStack_d8;
      uVar7 = 0x494a4f4d544942;
      uVar8 = 0;
      FUN_000202c0();
      uVar20 = (ulong)~(uint)uVar8 & 1;
      lVar4 = *(long *)(puStack_d8 + 0x10) + uVar20;
      if (SCARRY8(*(long *)(puStack_d8 + 0x10),uVar20)) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x29e54);
        (*pcVar21)();
      }
      if (*(long *)(puStack_d8 + 0x18) < lVar4) {
        FUN_000326d4(lVar4,puVar9);
        puStack_d8 = puStack_b8;
        uVar7 = 0x494a4f4d544942;
        uVar15 = 0;
        FUN_000202c0();
        if (((uint)uVar8 & 1) != (uVar15 & 1)) {
LAB_00029e68:
          __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                    (PTR___sSSN_0099b040);
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x29e78);
          (*pcVar21)();
        }
      }
      else if (((ulong)puVar9 & 1) == 0) {
        FUN_000323e4();
        puStack_d8 = puStack_b8;
      }
      if ((uVar8 & 1) == 0) {
        *(ulong *)(puStack_d8 + (uVar7 >> 6) * 8 + 0x40) =
             *(ulong *)(puStack_d8 + (uVar7 >> 6) * 8 + 0x40) | 1L << (uVar7 & 0x3f);
        puVar2 = (undefined8 *)(*(long *)(puStack_d8 + 0x30) + uVar7 * 0x10);
        *puVar2 = 0x494a4f4d544942;
        puVar2[1] = 0xe700000000000000;
        *(undefined **)(*(long *)(puStack_d8 + 0x38) + uVar7 * 8) =
             PTR___swiftEmptyArrayStorage_0099b8f0;
        if (SCARRY8(*(long *)(puStack_d8 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x29e68);
          (*pcVar21)();
        }
        *(long *)(puStack_d8 + 0x10) = *(long *)(puStack_d8 + 0x10) + 1;
      }
      lVar4 = *(long *)(puStack_d8 + 0x38);
      uVar5 = *(ulong *)(lVar4 + uVar7 * 8);
      uVar8 = uVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(lVar4 + uVar7 * 8) = uVar5;
      uVar20 = uVar5;
      if ((uVar8 & 1) == 0) {
        uVar20 = 0;
        FUN_0002a0e4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
        *(ulong *)(lVar4 + uVar7 * 8) = uVar20;
      }
      uVar8 = *(ulong *)(uVar20 + 0x10);
      uVar5 = uVar20;
      if (*(ulong *)(uVar20 + 0x18) >> 1 <= uVar8) {
        uVar5 = (ulong)(1 < *(ulong *)(uVar20 + 0x18));
        FUN_0002a0e4(uVar5,uVar8 + 1,1,uVar20);
        *(ulong *)(lVar4 + uVar7 * 8) = uVar5;
      }
      uVar29 = uVar29 + 1;
      *(ulong *)(uVar5 + 0x10) = uVar8 + 1;
      lVar4 = uVar5 + uVar8 * 0x10;
      *(undefined8 *)(lVar4 + 0x20) = uVar10;
      *(undefined8 *)(lVar4 + 0x28) = uVar3;
      puVar24 = puVar24 + 2;
      uVar26 = 0x2a8f0;
    } while (uVar17 != uVar29);
    _swift_bridgeObjectRelease();
    uStack_e0 = 0x2a8f0;
  }
  uVar10 = 0;
  __s10Foundation11JSONEncoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONEncoderCACycfc();
  puStack_b8 = puStack_d0;
  lVar4 = 0xae6900;
  func_0x000115a8(0xae6900,&UNK_007cdb18);
  uVar26 = 0xae6908;
  FUN_0002a810(0xae6908,0xae6900,&UNK_007cdb18,FUN_0002a7a0);
  ppuVar11 = &puStack_b8;
  __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(ppuVar11,lVar4,uVar26);
  lVar28 = lStack_f8;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(lStack_f8);
  ppuVar12 = ppuVar11;
  lVar27 = lVar4;
  __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(ppuVar11,lVar4,lVar28);
  FUN_00023358(ppuVar11,lVar4);
  ppuVar11 = (undefined **)&UNK_00007d7b;
  if (lVar27 != 0) {
    ppuVar11 = ppuVar12;
  }
  lVar4 = -0x1e00000000000000;
  if (lVar27 != 0) {
    lVar4 = lVar27;
  }
  lVar28 = 0xae6920;
  puStack_b8 = puVar23;
  func_0x000115a8(0xae6920,&UNK_007cdb28);
  uVar26 = 0xae6928;
  FUN_0002a810(0xae6928,0xae6920,&UNK_007cdb28,FUN_0002a880);
  ppuVar12 = &puStack_b8;
  lVar16 = lVar28;
  __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(ppuVar12,lVar28,uVar26);
  lVar27 = lStack_f8;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(lStack_f8);
  ppuVar13 = ppuVar12;
  lVar22 = lVar16;
  __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(ppuVar12,lVar16,lVar27);
  FUN_00023358(ppuVar12,lVar16);
  ppuVar12 = (undefined **)&UNK_00007d7b;
  if (lVar22 != 0) {
    ppuVar12 = ppuVar13;
  }
  lStack_f0 = -0x1e00000000000000;
  if (lVar22 != 0) {
    lStack_f0 = lVar22;
  }
  puStack_b8 = puStack_c8;
  ppuVar25 = &puStack_b8;
  lVar16 = lVar28;
  __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(ppuVar25,lVar28,uVar26);
  lVar27 = lStack_f8;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(lStack_f8);
  ppuVar13 = ppuVar25;
  lVar22 = lVar16;
  __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(ppuVar25,lVar16,lVar27);
  ppuStack_120 = ppuVar13;
  FUN_00023358(ppuVar25,lVar16);
  ppuVar13 = (undefined **)&UNK_00007d7b;
  if (lVar22 != 0) {
    ppuVar13 = ppuStack_120;
  }
  lVar27 = -0x1e00000000000000;
  if (lVar22 != 0) {
    lVar27 = lVar22;
  }
  puStack_b8 = puStack_d8;
  ppuVar14 = &puStack_b8;
  __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(ppuVar14,lVar28,uVar26);
  lVar16 = lStack_f8;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(lStack_f8);
  ppuVar25 = ppuVar14;
  lVar22 = lVar28;
  __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(ppuVar14,lVar28,lVar16);
  FUN_00023358(ppuVar14,lVar28);
  if (lVar22 == 0) {
    _swift_bridgeObjectRelease(puStack_d8);
    _swift_release(uVar10);
    lVar22 = -0x1e00000000000000;
    ppuVar25 = (undefined **)&UNK_00007d7b;
  }
  else {
    _swift_bridgeObjectRelease(puStack_d8);
    _swift_release(uVar10);
  }
  lVar28 = lStack_f0;
  pcVar21 = pcStack_118;
  _swift_bridgeObjectRelease(puStack_d0);
  _swift_bridgeObjectRelease(puStack_c8);
  _swift_bridgeObjectRelease(puVar23);
  FUN_0002a790(pcStack_108,0);
  FUN_0002a790(uStack_110,0);
  FUN_0002a790(pcVar21,0);
  FUN_0002a790(uStack_e0,0);
  *puStack_100 = ppuVar11;
  puStack_100[1] = lVar4;
  puStack_100[2] = ppuVar12;
  puStack_100[3] = lVar28;
  puStack_100[4] = ppuVar13;
  puStack_100[5] = lVar27;
  puStack_100[6] = ppuVar25;
  puStack_100[7] = lVar22;
  return;
}



/* Entry: 00029e78; end: 00029ea3;  */

void FUN_00029e78(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  FUN_0002c9b0();
  *param_1 = puVar1;
  return;
}



/* Entry: 00029ea4; end: 00029eb3;  */

void FUN_00029ea4(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  return;
}



/* Entry: 00029eb4; end: 00029f5f;  */

void FUN_00029eb4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_000290d4(&uStack_70);
  _swift_beginAccess(unaff_x20 + 0x70,auStack_88,1,0);
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined **)(unaff_x20 + 0x70) = PTR___swiftEmptyArrayStorage_0099b8f0;
  _swift_bridgeObjectRelease(uVar2);
  _swift_beginAccess(unaff_x20 + 0x78,auStack_a0,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined **)(unaff_x20 + 0x78) = puVar1;
  _swift_bridgeObjectRelease(uVar2);
  _swift_beginAccess(unaff_x20 + 0x80,auStack_b8,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined **)(unaff_x20 + 0x80) = puVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[1] = uStack_68;
  *param_1 = uStack_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  param_1[5] = uStack_48;
  param_1[4] = uStack_50;
  param_1[7] = uStack_38;
  param_1[6] = uStack_40;
  return;
}



/* Entry: 00029f60; end: 00029f93;  */

void FUN_00029f60(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x78));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x80));
  _swift_defaultActor_destroy();
                    /* WARNING: Could not recover jumptable at 0x0077b2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_0099c080)();
  return;
}



/* Entry: 00029f94; end: 00029f9f;  */

void FUN_00029f94(void)

{
  return;
}



/* Entry: 00029fa0; end: 0002a0e3;  */

undefined * FUN_00029fa0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x2a0e4);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0xae6948;
    func_0x000115a8(0xae6948,&UNK_007cdb40);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0xae6950;
    func_0x000115a8(0xae6950,&UNK_007cdb48);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 0002a0e4; end: 0002a1eb;  */

undefined * FUN_0002a0e4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x2a1ec);
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
  puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0xae6940;
    func_0x000115a8(0xae6940,&UNK_007da060);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___sSSN_0099b040);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 0002a1ec; end: 0002a20b;  */

void FUN_0002a1ec(void)

{
  _objc_opt_self(&PTR_PTR_00ae6800);
  return;
}



/* Entry: 0002a20c; end: 0002a333;  */

ulong FUN_0002a20c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x2a334);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_0002a5d4(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x2a330);
      (*pcVar1)();
    }
    FUN_0002a654(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 0002a334; end: 0002a457;  */

undefined * FUN_0002a334(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x2a458);
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
  puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0xae68f8;
    func_0x000115a8(0xae68f8,&UNK_007cdb10);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x68) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&UNK_009a3000);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x68 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x68);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 0002a458; end: 0002a5d3;  */

undefined * FUN_0002a458(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x2a5d4);
        (*pcVar3)();
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
  puVar4 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0xae68e8;
    func_0x000115a8(0xae68e8,&UNK_007cdb08);
    lVar5 = 0;
    __s23ExtensionsStickerPicker09ExtensionB0VMa();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x2a5cc);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x2a5d0);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      _swift_arrayInitWithTakeFrontToBack(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar4;
}



/* Entry: 0002a5d4; end: 0002a653;  */

undefined * FUN_0002a5d4(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_0003bc2c();
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 0002a654; end: 0002a74b;  */

long FUN_0002a654(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x2a748);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x2a74c);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_0002a74c(0);
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
      FUN_0002a74c(0);
      _swift_arrayInitWithCopy
                (param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,param_2 - param_1,uVar4)
      ;
      _swift_bridgeObjectRelease(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x2a744);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00778e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_0099b580)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 0002a74c; end: 0002a78f;  */

void FUN_0002a74c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae68f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_00ac2838;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam0000000000ae68f0 = puVar1;
  return;
}



/* Entry: 0002a790; end: 0002a79f;  */

void FUN_0002a790(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(param_2);
    return;
  }
  return;
}



/* Entry: 0002a7a0; end: 0002a80f;  */

void FUN_0002a7a0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_20;
  undefined *puStack_18;
  
  if (puRam0000000000ae6910 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae6918;
  FUN_00016c74(0xae6918,&UNK_007cdb20);
  puStack_20 = PTR___sSSSEsWP_0099b048;
  puStack_18 = PTR___sSiSEsWP_0099b2c8;
  puVar2 = PTR___sSDyxq_GSEsSERzSER_rlMc_0099aef8;
  _swift_getWitnessTable(PTR___sSDyxq_GSEsSERzSER_rlMc_0099aef8,uVar1,&puStack_20);
  puRam0000000000ae6910 = puVar2;
  return;
}



/* Entry: 0002a810; end: 0002a87f;  */

void FUN_0002a810(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    FUN_00016c74(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puStack_40 = PTR___sSSSEsWP_0099b048;
    puVar2 = PTR___sSDyxq_GSEsSERzSER_rlMc_0099aef8;
    uStack_38 = uVar1;
    _swift_getWitnessTable(PTR___sSDyxq_GSEsSERzSER_rlMc_0099aef8,param_2,&puStack_40);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 0002a880; end: 0002a8e7;  */

void FUN_0002a880(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_18;
  
  if (puRam0000000000ae6930 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae6938;
  FUN_00016c74(0xae6938,&UNK_007cdb30);
  puStack_18 = PTR___sSSSEsWP_0099b048;
  puVar2 = PTR___sSayxGSEsSERzlMc_0099b1d8;
  _swift_getWitnessTable(PTR___sSayxGSEsSERzlMc_0099b1d8,uVar1,&puStack_18);
  puRam0000000000ae6930 = puVar2;
  return;
}



/* Entry: 0002a8e8; end: 0002a8f3;  */

void FUN_0002a8e8(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  return;
}



/* Entry: 0002a8f4; end: 0002a9ef;  */

long FUN_0002a8f4(undefined8 param_1,undefined1 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar6 + 0x40));
  _swift_allocObject();
  lVar3 = 0;
  FUN_0002a1ec();
  uVar5 = 0x88;
  _swift_allocObject();
  _swift_defaultActor_initialize();
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar3 + 0x70) = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar3 + 0x78) = puVar1;
  *(undefined **)(lVar3 + 0x80) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(long *)(unaff_x20 + 0x18) = lVar3;
  uVar4 = param_1;
  _swift_retain();
  __s10Foundation4UUIDVACycfC(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  __s10Foundation4UUIDV10uuidStringSSvg();
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  _swift_release(param_1);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar5;
  *(undefined1 *)(unaff_x20 + 0x30) = param_2;
  return unaff_x20;
}



/* Entry: 0002a9f0; end: 0002aa1f;  */

undefined8
__s23ExtensionsStickerPicker28StickersBlizzardEventTrackerC6logger13extensionTypeAcA0dE6LoggerC_AA09ExtensionJ0Otcfc
          (undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_0002b5f0();
  _swift_release(param_1);
  return uVar1;
}



/* Entry: 0002aa20; end: 0002ad47;  */

void __s23ExtensionsStickerPicker28StickersBlizzardEventTrackerC016logExtensionOpenF0yyF(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar2 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_60 + -extraout_x8;
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  if (lRam0000000000ae6798 != -1) {
    _swift_once(0xae6798,0x27fa0);
  }
  FUN_00028010();
  __s10Foundation4DateVACycfC(puVar6);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar6,0,1,lVar3);
  _swift_beginAccess(lVar2,auStack_58,0x21,0);
  FUN_00013a14(puVar6,lVar2);
  _swift_endAccess(auStack_58);
  puVar4 = PTR_PTR_00ac2840;
  _objc_allocWithZone(PTR_PTR_00ac2840);
  func_0x007849a0();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,uVar1);
  func_0x0078ea60(puVar4);
  _objc_release(uVar5);
  func_0x0078de80(puVar4);
  func_0x0078dba0(puVar4);
  func_0x00788ac0(*(undefined8 *)(lVar7 + 0x10));
  func_0x00783860(*(undefined8 *)(lVar7 + 0x10));
  _objc_release(puVar4);
  return;
}



/* Entry: 0002ad48; end: 0002afa7;  */

void __s23ExtensionsStickerPicker28StickersBlizzardEventTrackerC016logExtensionSendF07sticker5index11selectedTag11isSearchingyAA0iB0V_SiAA04PillN0OSgSbtF
               (undefined8 *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  uint uVar16;
  byte bVar17;
  undefined1 extraout_w15;
  undefined1 uVar18;
  long unaff_x20;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  undefined1 *puVar23;
  ulong auStack_c0 [4];
  ulong *puStack_a0;
  ulong uStack_98;
  undefined1 auStack_90 [8];
  ulong uStack_88;
  ulong *apuStack_80 [2];
  byte bStack_70;
  undefined1 uStack_6f;
  undefined *puStack_68;
  ulong *puStack_60;
  undefined1 uStack_58;
  
  puVar23 = &stack0xfffffffffffffff0;
  lVar2 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  lVar19 = *(long *)(lVar2 + -8);
  lVar22 = *(long *)(lVar19 + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar2 = -(lVar22 + 0xfU & 0xfffffffffffffff0);
  puVar1 = (undefined1 *)((long)&puStack_a0 + lVar2);
  FUN_0002b824(param_1,puVar1);
  uVar9 = (ulong)*(byte *)(lVar19 + 0x50);
  uVar20 = uVar9 + 0x18 & (uVar9 ^ 0xffffffffffffffff);
  puVar13 = &UNK_0099e470;
  _swift_allocObject(&UNK_0099e470,uVar20 + lVar22,uVar9 | 7);
  *(long *)(puVar13 + 0x10) = unaff_x20;
  FUN_0002b8f0(puVar1,puVar13 + uVar20);
  _swift_retain();
  *(undefined **)((long)auStack_c0 + lVar2 + 0x10) = PTR___sytN_0099b8e0 + 8;
  uVar3 = 2;
  uVar4 = 0;
  uVar5 = 0x10;
  uVar6 = 4;
  uVar7 = 0;
  uVar8 = 0;
  __s15SnapConcurrency12AttachedTask_8priority19asyncSpanNameSuffix9operationScTyxs5NeverOG0A11Attribution010AttributedD0O_AA0aD8PriorityOSgSSSgxyYaYbcts8SendableRzlF
            ();
  _swift_release(puVar13);
  _swift_release();
  puVar10 = (ulong *)0xe200000000000000;
  puVar13 = &UNK_00006968;
  puVar12 = (undefined *)0x0;
  puVar15 = (ulong *)&UNK_007cdb50;
  bVar17 = (&UNK_007cdb50)[param_3 & 0xff];
  uVar9 = (ulong)bVar17 * 4 + 0x2ae70;
  puVar14 = (ulong *)0x0;
  puVar11 = puVar10;
  uVar21 = uVar20;
  uVar18 = extraout_w15;
  switch(param_3 & 0xff) {
  case 0:
  case 9:
    goto code_r0x0002aee8;
  case 1:
    break;
  default:
    puVar10 = (ulong *)0xe400000000000000;
    puVar13 = &UNK_00006f6c;
  case 0xf0:
    puVar13 = (undefined *)(ulong)((uint)puVar13 | 0x65760000);
    goto code_r0x0002ae7c;
  case 3:
    puVar10 = (ulong *)0xe400000000000000;
    puVar13 = &UNK_00006168;
  case 0xd:
    puVar13 = (undefined *)(ulong)((uint)puVar13 | 0x61680000);
    goto code_r0x0002ae8c;
  case 4:
  case 0xc:
    puVar10 = (ulong *)0xe300000000000000;
    puVar13 = (undefined *)0x646173;
    break;
  case 5:
    puVar10 = (ulong *)0xe300000000000000;
  case 0x10:
    puVar13 = &UNK_00796179;
    goto code_r0x0002aed0;
  case 6:
    puVar10 = (ulong *)0xe300000000000000;
    puVar13 = (undefined *)0x736579;
  case 0x78:
  case 0xc0:
    break;
  case 7:
    puVar10 = (ulong *)0xe300000000000000;
    puVar13 = &UNK_00006f77;
  case 0xe:
    puVar13 = (undefined *)(ulong)((uint)puVar13 | 0x770000);
    break;
  case 8:
  case 0x71:
    puVar10 = (ulong *)0xe500000000000000;
  case 0x69:
    puVar13 = (undefined *)0x72726f73;
    goto code_r0x0002ae9c;
  case 0xb:
    goto code_r0x0002af14;
  case 0xf:
  case 0x2c:
  case 0x34:
  case 0x38:
  case 0x44:
  case 0x88:
  case 0xb4:
  case 0xbc:
    goto code_r0x0002aef0;
  case 0x11:
    goto code_r0x0002af04;
  case 0x12:
    goto code_r0x0002ae9c;
  case 0x20:
    goto code_r0x0002afd0;
  case 0x21:
    *(undefined1 *)(param_4 + 0xb8) = uVar8;
  case 0x49:
    *(undefined8 *)(param_4 + 0xa8) = uVar6;
    *(undefined8 *)(param_4 + 0xb0) = uVar7;
    goto code_r0x0002b1d0;
  case 0x22:
  case 0x2a:
  case 0x32:
  case 0x3a:
  case 0x42:
  case 0x4a:
  case 0x5a:
  case 0xb2:
  case 0xba:
    goto code_r0x0002b084;
  case 0x23:
  case 0x2b:
  case 0x33:
  case 0x3b:
  case 0x43:
  case 0x4b:
  case 0x5b:
  case 0xb3:
  case 0xbb:
    goto code_r0x0002b26c;
  case 0x24:
    uVar4 = 0x646173;
    goto code_r0x0002b1a0;
  case 0x28:
    goto code_r0x0002b010;
  case 0x29:
    goto code_r0x0002b1dc;
  case 0x30:
    goto code_r0x0002af00;
  case 0x31:
    goto code_r0x0002b1e0;
  case 0x39:
    goto code_r0x0002b1c0;
  case 0x3c:
  case 0x4c:
  case 0x5c:
  case 0x6c:
  case 0x90:
  case 0xd0:
    goto _swift_task_switch;
  case 0x40:
    uVar4 = 0;
    goto code_r0x0002b1a0;
  case 0x41:
    puVar23 = (undefined1 *)((ulong)puVar23 | 0x1000000000000000);
  case 0xb1:
  case 0xb9:
    puVar1 = (undefined1 *)((long)auStack_c0 + lVar2);
    *(ulong *)((long)auStack_c0 + lVar2) = param_2;
    *(undefined1 **)((long)auStack_c0 + lVar2 + 0x10) = puVar23;
    *(undefined8 *)((long)auStack_c0 + lVar2 + 0x18) = 0x2ae44;
code_r0x0002b1f0:
    *(ulong *)(puVar1 + 8) = param_4;
    lVar2 = *(long *)(param_4 + 0x98);
    FUN_000290d4(param_4 + 0x10);
    _swift_beginAccess(lVar2 + 0x70,param_4 + 0x50,1,0);
    puVar13 = PTR___swiftEmptyArrayStorage_0099b8f0;
    uVar4 = *(undefined8 *)(lVar2 + 0x70);
    *(undefined **)(lVar2 + 0x70) = PTR___swiftEmptyArrayStorage_0099b8f0;
    _swift_bridgeObjectRelease(uVar4);
    _swift_beginAccess(lVar2 + 0x78,param_4 + 0x68,1,0);
    uVar4 = *(undefined8 *)(lVar2 + 0x78);
    *(undefined **)(lVar2 + 0x78) = puVar13;
    _swift_bridgeObjectRelease(uVar4);
    _swift_beginAccess(lVar2 + 0x80,param_4 + 0x80,1,0);
    uVar4 = *(undefined8 *)(lVar2 + 0x80);
    *(undefined **)(lVar2 + 0x80) = puVar13;
    _swift_bridgeObjectRelease(uVar4);
code_r0x0002b26c:
    goto _swift_task_switch;
  case 0x48:
    goto code_r0x0002af50;
  case 0x58:
  case 0xb0:
    goto code_r0x0002af80;
  case 0x59:
    goto code_r0x0002b1d0;
  case 0x68:
    goto code_r0x0002af54;
  case 0x6a:
  case 0x72:
    goto code_r0x0002aee4;
  case 0x6d:
  case 0xf8:
    goto code_r0x0002ae7c;
  case 0x6e:
    goto code_r0x0002ae8c;
  case 0x70:
    param_2 = 0xe300000000000000;
    uVar4 = 0x776f77;
code_r0x0002b1a0:
    FUN_0002bde4(*(undefined8 *)(uVar20 + 0x10),*(undefined8 *)(uVar20 + 0x20),
                 *(undefined8 *)(uVar20 + 0x28),*(undefined1 *)(uVar20 + 0x30),uVar4,param_2);
code_r0x0002b1c0:
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)();
    return;
  case 0x80:
    goto code_r0x0002aed0;
  case 0x91:
  case 0xa4:
  case 0xd1:
    goto code_r0x0002b040;
  case 0x92:
  case 0x9a:
  case 0xd2:
  case 0xda:
    goto code_r0x0002b014;
  case 0x93:
  case 0xa8:
  case 0xd3:
    goto code_r0x0002affc;
  case 0x94:
  case 0xa9:
  case 0xd4:
    goto code_r0x0002b01c;
  case 0x95:
  case 0xa2:
  case 0xaa:
  case 0xd5:
  case 0xe4:
    goto code_r0x0002b004;
  case 0x96:
  case 0x9e:
  case 0xa6:
  case 0xab:
  case 0xd6:
  case 0xde:
  case 0xe5:
    goto code_r0x0002b038;
  case 0x97:
  case 0xd7:
    goto LAB_0002b03c;
  case 0x98:
  case 0xd8:
    goto code_r0x0002af78;
  case 0x99:
  case 0xd9:
    goto code_r0x0002b020;
  case 0x9b:
  case 0x9c:
  case 0xdb:
  case 0xdc:
    goto code_r0x0002b058;
  case 0x9d:
  case 0xa7:
  case 0xdd:
    *(undefined8 **)(auStack_90 + lVar2 + -8) = param_1;
    *(ulong *)(auStack_90 + lVar2) = param_2;
    *(undefined1 **)((long)apuStack_80 + lVar2) = puVar23;
    *(undefined8 *)((long)apuStack_80 + lVar2 + 8) = 0x2ae44;
    goto code_r0x0002affc;
  case 0x9f:
  case 0xdf:
    goto code_r0x0002b000;
  case 0xa0:
    goto code_r0x0002af84;
  case 0xa1:
    goto code_r0x0002b048;
  case 0xa3:
    goto code_r0x0002b028;
  case 0xa5:
    puVar10 = *(ulong **)(param_4 + 0x30);
    *(undefined8 *)(param_4 + 0x38) = *(undefined8 *)(*(long *)(param_4 + 0x28) + 0x18);
    puVar12 = (undefined *)*puVar10;
    goto code_r0x0002afd0;
  case 0xb8:
    goto code_r0x0002b1f0;
  case 0xe0:
    goto code_r0x0002afa0;
  case 0xe1:
    goto code_r0x0002b02c;
  case 0xe2:
  case 0xe3:
    goto code_r0x0002b00c;
  }
code_r0x0002aee0:
  puVar12 = puVar13;
code_r0x0002aee4:
  puVar14 = puVar10;
  goto code_r0x0002aee8;
code_r0x0002affc:
  *(ulong *)((long)&uStack_88 + lVar2) = param_4;
code_r0x0002b000:
code_r0x0002b004:
  param_1 = *(undefined8 **)(param_4 + 0x38);
code_r0x0002b00c:
code_r0x0002b010:
code_r0x0002b014:
code_r0x0002b01c:
  _swift_beginAccess();
code_r0x0002b020:
  uVar20 = param_1[0x10];
code_r0x0002b028:
  _swift_bridgeObjectRetain();
code_r0x0002b02c:
  uVar3 = uVar20;
  _swift_isUniquelyReferenced_nonNull_native();
  param_1[0x10] = uVar20;
code_r0x0002b038:
  if ((uVar3 & 1) == 0) {
    puVar10 = *(ulong **)(uVar20 + 0x10);
    uVar21 = uVar20;
code_r0x0002b084:
    uVar20 = 0;
    FUN_0002a0e4(0,(long)puVar10 + 1,1,uVar21);
    param_1[0x10] = uVar20;
  }
LAB_0002b03c:
  param_3 = *(ulong *)(uVar20 + 0x10);
  puVar10 = *(ulong **)(uVar20 + 0x18);
code_r0x0002b040:
  param_2 = param_3 + 1;
  in_CY = (ulong)puVar10 >> 1 <= param_3;
  uVar21 = uVar20;
  goto code_r0x0002b048;
code_r0x0002b1d0:
  *(undefined8 *)(param_4 + 0x98) = uVar4;
  *(undefined8 *)(param_4 + 0xa0) = uVar5;
code_r0x0002b1dc:
code_r0x0002b1e0:
  goto _swift_task_switch;
code_r0x0002ae9c:
  puVar13 = (undefined *)((ulong)puVar13 | 0x7900000000);
  goto code_r0x0002aee0;
code_r0x0002aed0:
  goto code_r0x0002aee0;
code_r0x0002ae8c:
  goto code_r0x0002aee0;
code_r0x0002ae7c:
  goto code_r0x0002aee0;
code_r0x0002aee8:
  puVar10 = (ulong *)*param_1;
  uVar3 = param_1[1];
  puVar13 = (undefined *)(ulong)*(byte *)(param_1 + 2);
code_r0x0002aef0:
  in_ZR = *(char *)(unaff_x20 + 0x30) == '\x01';
  puVar15 = (ulong *)0x73654d69;
code_r0x0002af00:
  puVar15 = (ulong *)((ulong)puVar15 | 0x617300000000);
code_r0x0002af04:
  puVar15 = (ulong *)((ulong)puVar15 | 0x6567000000000000);
  uVar9 = 0x616f6279654b;
  puVar11 = puVar10;
code_r0x0002af14:
  apuStack_80[0] = (ulong *)(uVar9 | 0x6472000000000000);
  if (!(bool)in_ZR) {
    apuStack_80[0] = puVar15;
  }
  uVar16 = 4;
  if ((param_3 & 0xff) != 0) {
    uVar16 = 0;
  }
  uVar9 = (ulong)uVar16;
  uVar18 = *(undefined1 *)((long)param_1 + 0x11);
  bVar17 = 1;
  if ((param_4 & 1) == 0) {
    bVar17 = 2;
  }
  if (puVar14 != (ulong *)0x0) {
    bVar17 = 0;
  }
  auStack_90[0] = SUB81(puVar13,0);
  puVar10 = (ulong *)0xe800000000000000;
  puStack_a0 = puVar11;
  uStack_98 = uVar3;
  uStack_88 = param_2;
code_r0x0002af50:
  apuStack_80[1] = puVar10;
code_r0x0002af54:
  uStack_58 = uVar18;
  uStack_6f = (undefined1)uVar9;
  bStack_70 = bVar17;
  puStack_68 = puVar12;
  puStack_60 = puVar14;
  _swift_bridgeObjectRetain();
code_r0x0002af78:
code_r0x0002af80:
  FUN_0002bc80();
  goto code_r0x0002af84;
code_r0x0002b048:
  uVar20 = uVar21;
  if ((bool)in_CY) {
    uVar20 = (ulong)((ulong *)((long)&MACH_HEADER.magic + 1) < puVar10);
    FUN_0002a0e4(uVar20,param_2,1,uVar21);
  }
  puVar12 = *(undefined **)(param_4 + 0x40);
  puVar10 = *(ulong **)(param_4 + 0x48);
  *(ulong *)(uVar20 + 0x10) = param_2;
  puVar13 = (undefined *)(uVar20 + param_3 * 0x10);
code_r0x0002b058:
  *(undefined **)(puVar13 + 0x20) = puVar12;
  *(ulong **)(puVar13 + 0x28) = puVar10;
  param_1[0x10] = uVar20;
  _swift_endAccess(param_4 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0002b07c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 8))();
  return;
code_r0x0002afd0:
  *(undefined **)(param_4 + 0x40) = puVar12;
  *(ulong *)(param_4 + 0x48) = puVar10[1];
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)();
  return;
code_r0x0002af84:
  FUN_0002b9ec(&puStack_a0);
code_r0x0002afa0:
  return;
}



/* Entry: 0002afa8; end: 0002afeb;  */

void FUN_0002afa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(0x2afc0,0,0);
  return;
}



/* Entry: 0002afec; end: 0002b0c3;  */

void FUN_0002afec(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar7 = *(long *)(unaff_x22 + 0x38);
  _swift_beginAccess(lVar7 + 0x80,unaff_x22 + 0x10,0x21,0);
  uVar6 = *(ulong *)(lVar7 + 0x80);
  _swift_bridgeObjectRetain(uVar5);
  uVar3 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar7 + 0x80) = uVar6;
  uVar4 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
    FUN_0002a0e4(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
    *(ulong *)(lVar7 + 0x80) = uVar4;
  }
  uVar3 = *(ulong *)(uVar4 + 0x10);
  uVar6 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_0002a0e4(uVar6,uVar3 + 1,1,uVar4);
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  *(ulong *)(uVar6 + 0x10) = uVar3 + 1;
  lVar1 = uVar6 + uVar3 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  *(ulong *)(lVar7 + 0x80) = uVar6;
  _swift_endAccess(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0002b07c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 0002b0c4; end: 0002b1c7;  */

void __s23ExtensionsStickerPicker28StickersBlizzardEventTrackerC018logExtensionSearchF011selectedTag11isSearching12resultsCountyAA04PillL0OSg_SbSitF
               (code *UNRECOVERED_JUMPTABLE,undefined *param_2,ulong param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  code *unaff_x20;
  ulong uVar9;
  code *pcVar10;
  long unaff_x21;
  long lVar11;
  long unaff_x22;
  ulong unaff_x23;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  
  puVar1 = &stack0xffffffffffffffe0;
  puVar12 = &stack0xfffffffffffffff0;
  puVar8 = (undefined *)0xe200000000000000;
  puVar4 = &UNK_00006968;
  uVar6 = (ulong)UNRECOVERED_JUMPTABLE & 0xff;
  iVar5 = 0;
  uVar3 = param_3;
  pcVar10 = unaff_x20;
  switch(uVar6) {
  default:
    puVar8 = (undefined *)0x0;
    puVar4 = (undefined *)0x0;
  case 0xe6:
    in_ZR = ((ulong)param_2 & 1) == 0;
    goto code_r0x0002b108;
  case 1:
    break;
  case 2:
    iVar5 = 0;
    puVar8 = (undefined *)0xe400000000000000;
    puVar4 = (undefined *)0x65766f6c;
    break;
  case 3:
  case 100:
    puVar8 = (undefined *)0xe400000000000000;
    goto code_r0x0002b11c;
  case 4:
    puVar8 = (undefined *)0xe300000000000000;
  case 0x60:
  case 0x68:
    iVar5 = 0;
    puVar4 = (undefined *)0x646173;
    break;
  case 5:
  case 0x22:
  case 0x2a:
  case 0x2e:
  case 0x3a:
  case 0x7e:
  case 0xaa:
  case 0xb2:
    puVar8 = (undefined *)0xe300000000000000;
    puVar4 = &UNK_00796179;
  case 0x26:
    iVar5 = 0;
    break;
  case 6:
    puVar8 = (undefined *)0xe300000000000000;
  case 0x76:
    iVar5 = 0;
    puVar4 = (undefined *)0x736579;
    break;
  case 7:
    iVar5 = 0;
    puVar8 = (undefined *)0xe300000000000000;
    puVar4 = (undefined *)0x776f77;
    break;
  case 8:
    puVar4 = (undefined *)0x7972726f73;
    puVar8 = (undefined *)0xe500000000000000;
  case 0x6e:
  case 0xb6:
    iVar5 = 0;
    break;
  case 0x16:
    goto code_r0x0002b25c;
  case 0x18:
  case 0x20:
  case 0x28:
  case 0x30:
  case 0x38:
  case 0x40:
  case 0x50:
  case 0xa8:
  case 0xb0:
    lVar11 = *(long *)(unaff_x22 + 0x48);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
    _swift_beginAccess(lVar11 + 0x70,unaff_x22 + 0x10,0x21,0,param_5,0,param_3);
    uVar9 = *(ulong *)(lVar11 + 0x70);
    _swift_bridgeObjectRetain(uVar2);
    uVar6 = uVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar11 + 0x70) = uVar9;
    uVar3 = uVar9;
    if ((uVar6 & 1) == 0) {
      uVar3 = 0;
      FUN_00029fa0(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
      *(ulong *)(lVar11 + 0x70) = uVar3;
    }
    uVar6 = *(ulong *)(uVar3 + 0x10);
    uVar9 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar6) {
      uVar9 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_00029fa0(uVar9,uVar6 + 1,1,uVar3);
    }
    uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x30);
    *(ulong *)(uVar9 + 0x10) = uVar6 + 1;
    lVar7 = uVar9 + uVar6 * 0x18;
    *(undefined8 *)(lVar7 + 0x28) = uVar14;
    *(undefined8 *)(lVar7 + 0x20) = uVar13;
    *(undefined8 *)(lVar7 + 0x30) = uVar2;
    *(ulong *)(lVar11 + 0x70) = uVar9;
    UNRECOVERED_JUMPTABLE = (code *)(unaff_x22 + 0x10);
  case 0x36:
    _swift_endAccess(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x0002b3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  case 0x19:
  case 0x21:
  case 0x29:
  case 0x31:
  case 0x39:
  case 0x41:
  case 0x51:
  case 0xa9:
  case 0xb1:
    goto code_r0x0002b4f8;
  case 0x1a:
    param_2 = (undefined *)0x0;
    param_3 = 0;
    goto _swift_task_switch;
  case 0x1e:
    goto code_r0x0002b29c;
  case 0x1f:
    goto code_r0x0002b468;
  case 0x27:
    goto code_r0x0002b46c;
  case 0x2f:
    uVar3 = 0x21;
    puVar4 = (undefined *)0x0;
  case 0x17:
    _swift_beginAccess(UNRECOVERED_JUMPTABLE,param_2,uVar3,puVar4,param_5,0,param_3);
code_r0x0002b458:
    unaff_x20 = *(code **)(unaff_x21 + 0x78);
code_r0x0002b45c:
    UNRECOVERED_JUMPTABLE = unaff_x20;
    _swift_bridgeObjectRetain(0xe200000000000000);
    unaff_x20 = UNRECOVERED_JUMPTABLE;
code_r0x0002b468:
    _swift_isUniquelyReferenced_nonNull_native();
code_r0x0002b46c:
    *(code **)(unaff_x21 + 0x78) = unaff_x20;
    pcVar10 = unaff_x20;
code_r0x0002b470:
    unaff_x20 = pcVar10;
    if (((ulong)UNRECOVERED_JUMPTABLE & 1) == 0) {
      unaff_x20 = (code *)0x0;
      FUN_00029fa0(0,*(long *)(pcVar10 + 0x10) + 1,1,pcVar10);
      *(code **)(unaff_x21 + 0x78) = unaff_x20;
    }
LAB_0002b474:
    unaff_x23 = *(ulong *)(unaff_x20 + 0x10);
    uVar6 = *(ulong *)(unaff_x20 + 0x18);
    puVar8 = (undefined *)(unaff_x23 + 1);
code_r0x0002b47c:
    param_2 = puVar8;
    if (uVar6 >> 1 <= unaff_x23) {
      UNRECOVERED_JUMPTABLE = (code *)(ulong)(1 < uVar6);
      param_3 = 1;
      puVar8 = param_2;
code_r0x0002b4f8:
      FUN_00029fa0(UNRECOVERED_JUMPTABLE,param_2,param_3,unaff_x20);
      param_2 = puVar8;
      unaff_x20 = UNRECOVERED_JUMPTABLE;
    }
    uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined **)(unaff_x20 + 0x10) = param_2;
    *(undefined8 *)(unaff_x20 + unaff_x23 * 0x18 + 0x28) = uVar14;
    *(undefined8 *)(unaff_x20 + unaff_x23 * 0x18 + 0x20) = uVar13;
    *(undefined8 *)(unaff_x20 + unaff_x23 * 0x18 + 0x30) = uVar2;
    *(code **)(unaff_x21 + 0x78) = unaff_x20;
    _swift_endAccess(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0002b4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  case 0x32:
  case 0x42:
  case 0x52:
  case 0x62:
    goto code_r0x0002b23c;
  case 0x37:
    goto code_r0x0002b470;
  case 0x3e:
    param_3 = 0;
  case 0x5e:
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_0099c0e8)(UNRECOVERED_JUMPTABLE,param_2,param_3);
    return;
  case 0x3f:
    goto code_r0x0002b458;
  case 0x4e:
  case 0xa6:
    goto code_r0x0002b20c;
  case 0x4f:
    goto code_r0x0002b45c;
  case 0x5f:
    goto code_r0x0002b120;
  case 99:
  case 0xee:
    goto code_r0x0002b108;
  case 0x66:
    param_3 = 0;
    goto _swift_task_switch;
  case 0x67:
    goto code_r0x0002b11c;
  case 0x86:
  case 0xc6:
    goto code_r0x0002b248;
  case 0x87:
  case 0x9a:
  case 199:
    goto code_r0x0002b2cc;
  case 0x88:
  case 0x90:
  case 200:
  case 0xd0:
    goto code_r0x0002b2a0;
  case 0x89:
  case 0x9e:
  case 0xc9:
    goto code_r0x0002b288;
  case 0x8a:
  case 0x9f:
  case 0xca:
    goto code_r0x0002b2a8;
  case 0x8b:
  case 0x98:
  case 0xa0:
  case 0xcb:
  case 0xda:
    goto code_r0x0002b290;
  case 0x8c:
  case 0x94:
  case 0x9c:
  case 0xa1:
  case 0xcc:
  case 0xd4:
  case 0xdb:
    goto code_r0x0002b2c4;
  case 0x8d:
  case 0xcd:
    goto code_r0x0002b2c8;
  case 0x8e:
  case 0xce:
    UNRECOVERED_JUMPTABLE = unaff_x20 + 0x70;
    param_2 = (undefined *)(unaff_x22 + 0x50);
    goto code_r0x0002b20c;
  case 0x8f:
  case 0xcf:
    goto code_r0x0002b2ac;
  case 0x91:
  case 0x92:
  case 0xd1:
  case 0xd2:
    goto code_r0x0002b2e4;
  case 0x93:
  case 0x9d:
  case 0xd3:
    goto code_r0x0002b280;
  case 0x95:
  case 0xd5:
    puVar12 = (undefined1 *)((ulong)puVar12 | 0x1000000000000000);
    goto code_r0x0002b290;
  case 0x96:
    goto code_r0x0002b210;
  case 0x97:
    *(undefined **)(unaff_x22 + 0x28) = param_2;
    *(ulong *)(unaff_x22 + 0x30) = param_3;
    UNRECOVERED_JUMPTABLE = (code *)0x2b2ec;
    param_2 = (undefined *)0x0;
    goto code_r0x0002b2e4;
  case 0x99:
    goto code_r0x0002b2b4;
  case 0x9b:
    goto code_r0x0002b24c;
  case 0xa7:
  case 0xaf:
    goto LAB_0002b474;
  case 0xae:
    goto code_r0x0002b47c;
  case 0xd6:
    goto code_r0x0002b22c;
  case 0xd7:
    goto code_r0x0002b2b8;
  case 0xd8:
  case 0xd9:
    goto code_r0x0002b298;
  case 0xf6:
    goto code_r0x0002b110;
  case 0xfe:
    goto code_r0x0002b10c;
  }
code_r0x0002b1a0:
  FUN_0002bde4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x20),
               *(undefined8 *)(unaff_x20 + 0x28),unaff_x20[0x30],puVar4,puVar8,iVar5);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(puVar8);
  return;
code_r0x0002b2e4:
  param_3 = 0;
  goto _swift_task_switch;
code_r0x0002b20c:
  uVar3 = 1;
code_r0x0002b210:
  _swift_beginAccess(UNRECOVERED_JUMPTABLE,param_2,uVar3,0,param_5,0,param_3);
  puVar8 = PTR___swiftEmptyArrayStorage_0099b8f0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined **)(unaff_x20 + 0x70) = PTR___swiftEmptyArrayStorage_0099b8f0;
  _swift_bridgeObjectRelease(uVar2);
code_r0x0002b22c:
  UNRECOVERED_JUMPTABLE = unaff_x20 + 0x78;
  param_2 = (undefined *)(unaff_x22 + 0x68);
  param_3 = 1;
  puVar4 = (undefined *)0x0;
code_r0x0002b23c:
  _swift_beginAccess(UNRECOVERED_JUMPTABLE,param_2,param_3,puVar4);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x78);
  *(undefined **)(unaff_x20 + 0x78) = puVar8;
code_r0x0002b248:
  _swift_bridgeObjectRelease(UNRECOVERED_JUMPTABLE);
code_r0x0002b24c:
  UNRECOVERED_JUMPTABLE = unaff_x20 + 0x80;
  param_2 = (undefined *)(unaff_x22 + 0x80);
  param_3 = 1;
  puVar4 = (undefined *)0x0;
code_r0x0002b25c:
  _swift_beginAccess(UNRECOVERED_JUMPTABLE,param_2,param_3,puVar4);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined **)(unaff_x20 + 0x80) = puVar8;
  _swift_bridgeObjectRelease(uVar2);
  UNRECOVERED_JUMPTABLE = FUN_0002b28c;
  param_2 = (undefined *)0x0;
  param_3 = 0;
code_r0x0002b280:
code_r0x0002b288:
  goto _swift_task_switch;
code_r0x0002b11c:
  puVar4 = &UNK_00006168;
code_r0x0002b120:
  iVar5 = 0;
  puVar4 = (undefined *)(ulong)((uint)puVar4 | 0x61680000);
  goto code_r0x0002b1a0;
code_r0x0002b108:
  uVar6 = 1;
code_r0x0002b10c:
  iVar5 = (int)uVar6;
  if ((bool)in_ZR) {
    iVar5 = iVar5 + 1;
  }
code_r0x0002b110:
  goto code_r0x0002b1a0;
code_r0x0002b290:
  puVar1 = auStack_40;
  puStack_30 = puVar12;
code_r0x0002b298:
  *(long *)(puVar1 + 8) = unaff_x22;
code_r0x0002b29c:
code_r0x0002b2a0:
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0xa8);
  param_2 = *(undefined **)(unaff_x22 + 0xb0);
code_r0x0002b2a8:
  param_3 = (ulong)*(byte *)(unaff_x22 + 0xb8);
code_r0x0002b2ac:
  FUN_0002bee8(UNRECOVERED_JUMPTABLE,param_2,param_3,unaff_x22 + 0x10);
code_r0x0002b2b4:
  UNRECOVERED_JUMPTABLE = (code *)(unaff_x22 + 0x10);
code_r0x0002b2b8:
  FUN_0002bb60(UNRECOVERED_JUMPTABLE);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
code_r0x0002b2c4:
code_r0x0002b2c8:
code_r0x0002b2cc:
                    /* WARNING: Could not recover jumptable at 0x0002b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 0002b1c8; end: 0002b1e3;  */

void FUN_0002b1c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xb8) = param_6;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0002b1e4,param_2,0);
  return;
}



/* Entry: 0002b1e4; end: 0002b28b;  */

void FUN_0002b1e4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x98);
  FUN_000290d4(unaff_x22 + 0x10);
  _swift_beginAccess(lVar3 + 0x70,unaff_x22 + 0x50,1,0);
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  uVar2 = *(undefined8 *)(lVar3 + 0x70);
  *(undefined **)(lVar3 + 0x70) = PTR___swiftEmptyArrayStorage_0099b8f0;
  _swift_bridgeObjectRelease(uVar2);
  _swift_beginAccess(lVar3 + 0x78,unaff_x22 + 0x68,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x78);
  *(undefined **)(lVar3 + 0x78) = puVar1;
  _swift_bridgeObjectRelease(uVar2);
  _swift_beginAccess(lVar3 + 0x80,unaff_x22 + 0x80,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x80);
  *(undefined **)(lVar3 + 0x80) = puVar1;
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0002b28c,0,0);
  return;
}



/* Entry: 0002b28c; end: 0002b2cf;  */

void FUN_0002b28c(void)

{
  long unaff_x22;
  
  FUN_0002bee8(*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0),
               *(undefined1 *)(unaff_x22 + 0xb8),unaff_x22 + 0x10);
  FUN_0002bb60(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0002b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 0002b2d0; end: 0002b307;  */

void FUN_0002b2d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(0x2b2ec,0,0);
  return;
}



/* Entry: 0002b308; end: 0002b3eb;  */

void FUN_0002b308(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_beginAccess(lVar6 + 0x70,unaff_x22 + 0x10,0x21,0);
  uVar5 = *(ulong *)(lVar6 + 0x70);
  _swift_bridgeObjectRetain(uVar4);
  uVar1 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar6 + 0x70) = uVar5;
  uVar2 = uVar5;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_00029fa0(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    *(ulong *)(lVar6 + 0x70) = uVar2;
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar5 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_00029fa0(uVar5,uVar1 + 1,1,uVar2);
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
  *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
  lVar3 = uVar5 + uVar1 * 0x18;
  *(undefined8 *)(lVar3 + 0x28) = uVar8;
  *(undefined8 *)(lVar3 + 0x20) = uVar7;
  *(undefined8 *)(lVar3 + 0x30) = uVar4;
  *(ulong *)(lVar6 + 0x70) = uVar5;
  _swift_endAccess(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0002b3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 0002b3ec; end: 0002b423;  */

void FUN_0002b3ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(0x2b408,0,0);
  return;
}



/* Entry: 0002b424; end: 0002b507;  */

void FUN_0002b424(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_beginAccess(lVar6 + 0x78,unaff_x22 + 0x10,0x21,0);
  uVar5 = *(ulong *)(lVar6 + 0x78);
  _swift_bridgeObjectRetain(uVar4);
  uVar1 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar6 + 0x78) = uVar5;
  uVar2 = uVar5;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_00029fa0(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    *(ulong *)(lVar6 + 0x78) = uVar2;
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar5 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_00029fa0(uVar5,uVar1 + 1,1,uVar2);
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
  *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
  lVar3 = uVar5 + uVar1 * 0x18;
  *(undefined8 *)(lVar3 + 0x28) = uVar8;
  *(undefined8 *)(lVar3 + 0x20) = uVar7;
  *(undefined8 *)(lVar3 + 0x30) = uVar4;
  *(ulong *)(lVar6 + 0x78) = uVar5;
  _swift_endAccess(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0002b4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 0002b508; end: 0002b53b;  */

void FUN_0002b508(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_0099b9a0;
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0002b7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 0002b53c; end: 0002b5ef;  */

void FUN_0002b53c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *unaff_x20;
  _swift_allocObject(param_6,0x30,7);
  *(undefined8 *)(param_6 + 0x10) = uVar1;
  *(undefined8 *)(param_6 + 0x18) = param_1;
  *(undefined8 *)(param_6 + 0x20) = param_2;
  *(undefined8 *)(param_6 + 0x28) = param_3;
  _swift_retain(uVar1);
  _swift_bridgeObjectRetain(param_2);
  uVar1 = 2;
  __s15SnapConcurrency12AttachedTask_8priority19asyncSpanNameSuffix9operationScTyxs5NeverOG0A11Attribution010AttributedD0O_AA0aD8PriorityOSgSSSgxyYaYbcts8SendableRzlF
            (2,0,0x10,4,0,0,param_7,param_6,PTR___sytN_0099b8e0 + 8);
  _swift_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar1);
  return;
}



/* Entry: 0002b5f0; end: 0002b6d3;  */

void FUN_0002b5f0(undefined8 param_1,undefined1 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar5 + 0x40));
  lVar3 = 0;
  FUN_0002a1ec();
  uVar4 = 0x88;
  _swift_allocObject();
  _swift_defaultActor_initialize();
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar3 + 0x70) = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar3 + 0x78) = puVar1;
  *(undefined **)(lVar3 + 0x80) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(long *)(unaff_x20 + 0x18) = lVar3;
  _swift_retain();
  __s10Foundation4UUIDVACycfC(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  __s10Foundation4UUIDV10uuidStringSSvg();
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar4;
  *(undefined1 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 0002b6d4; end: 0002b6df;  */

void FUN_0002b6d4(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocObject_0099b9a8;
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0002b7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 0002b6e0; end: 0002b75f;  */

void FUN_0002b6e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  char *pcVar6;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar6 = section_000000b8.sectname + 8;
  uVar5 = *(undefined1 *)(unaff_x20 + 0x30);
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar6;
  *(long *)pcVar6 = unaff_x22;
  *(code **)(pcVar6 + 8) = FUN_0002bb94;
  pcVar6[0xb8] = uVar5;
  *(undefined8 *)(pcVar6 + 0xa8) = uVar2;
  *(undefined8 *)(pcVar6 + 0xb0) = uVar4;
  *(undefined8 *)(pcVar6 + 0x98) = uVar1;
  *(undefined8 *)(pcVar6 + 0xa0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0002b1e4,uVar1,0);
  return;
}



/* Entry: 0002b760; end: 0002b7a3;  */

void FUN_0002b760(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0002b7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 0002b7a4; end: 0002b823;  */

void FUN_0002b7a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  char *pcVar6;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar6 = section_000000b8.sectname + 8;
  uVar5 = *(undefined1 *)(unaff_x20 + 0x30);
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar6;
  *(long *)pcVar6 = unaff_x22;
  pcVar6[8] = -0x68;
  pcVar6[9] = -0x45;
  pcVar6[10] = '\x02';
  pcVar6[0xb] = '\0';
  pcVar6[0xc] = '\0';
  pcVar6[0xd] = '\0';
  pcVar6[0xe] = '\0';
  pcVar6[0xf] = '\0';
  pcVar6[0xb8] = uVar5;
  *(undefined8 *)(pcVar6 + 0xa8) = uVar2;
  *(undefined8 *)(pcVar6 + 0xb0) = uVar4;
  *(undefined8 *)(pcVar6 + 0x98) = uVar1;
  *(undefined8 *)(pcVar6 + 0xa0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0002b1e4,uVar1,0);
  return;
}



/* Entry: 0002b824; end: 0002b867;  */

undefined8 FUN_0002b824(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 0002b868; end: 0002b8ef;  */

void FUN_0002b868(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  
  lVar3 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  lVar1 = unaff_x20 + (uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  iVar2 = *(int *)(lVar3 + 0x1c);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 8))(lVar1 + iVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0002b8f0; end: 0002b933;  */

undefined8 FUN_0002b8f0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 0002b934; end: 0002b9af;  */

void FUN_0002b934(void)

{
  long lVar1;
  qword *pqVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  qword unaff_x22;
  
  lVar1 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  pqVar2 = &segment_command_00000020.filesize;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x10) = pqVar2;
  *pqVar2 = unaff_x22;
  pqVar2[1] = (qword)FUN_0002b9b0;
  pqVar2[5] = uVar4;
  pqVar2[6] = unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff));
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(0x2afc0,0,0);
  return;
}



/* Entry: 0002b9b0; end: 0002b9eb;  */

void FUN_0002b9b0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0002b9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 0002b9ec; end: 0002ba1f;  */

undefined8 FUN_0002b9ec(undefined8 param_1)

{
  (*(code *)(undefined *)0x288bc)();
  return param_1;
}



/* Entry: 0002ba20; end: 0002ba23;  */

void FUN_0002ba20(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0002ba24; end: 0002ba43;  */

void __s23ExtensionsStickerPicker28StickersBlizzardEventTrackerCMa(void)

{
  _objc_opt_self(&PTR_PTR_00ae6998);
  return;
}



/* Entry: 0002ba44; end: 0002babb;  */

void FUN_0002ba44(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  qword *pqVar5;
  long unaff_x20;
  qword unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  pqVar5 = &segment_command_00000020.filesize;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x10) = pqVar5;
  *pqVar5 = unaff_x22;
  pqVar5[1] = 0x2bb9c;
  pqVar5[7] = uVar2;
  pqVar5[8] = uVar4;
  pqVar5[5] = uVar1;
  pqVar5[6] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(0x2b408,0,0);
  return;
}



/* Entry: 0002babc; end: 0002bae7;  */

void FUN_0002babc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0002bae8; end: 0002bb5f;  */

void FUN_0002bae8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  qword *pqVar5;
  long unaff_x20;
  qword unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  pqVar5 = &segment_command_00000020.filesize;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x10) = pqVar5;
  *pqVar5 = unaff_x22;
  pqVar5[1] = 0x2bba0;
  pqVar5[7] = uVar2;
  pqVar5[8] = uVar4;
  pqVar5[5] = uVar1;
  pqVar5[6] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(0x2b2ec,0,0);
  return;
}



/* Entry: 0002bb60; end: 0002bb93;  */

undefined8 FUN_0002bb60(undefined8 param_1)

{
  (*(code *)(undefined *)0x28b84)();
  return param_1;
}



/* Entry: 0002bb94; end: 0002bbaf;  */

void FUN_0002bb94(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0002b9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 0002bbb0; end: 0002bc7f;  */

void FUN_0002bbb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char in_w5;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = PTR_PTR_00ac2840;
  _objc_allocWithZone(PTR_PTR_00ac2840);
  func_0x007849a0();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  func_0x0078ea60(puVar1);
  _objc_release(param_1);
  func_0x0078de80(puVar1);
  func_0x0078dba0(puVar1);
  if (in_w5 != '\x01') {
    func_0x0078dbc0(puVar1);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x00788ac0(uVar2);
  func_0x00783860(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 0002bc80; end: 0002bde3;  */

void FUN_0002bc80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = PTR_PTR_00ac2848;
  _objc_allocWithZone(PTR_PTR_00ac2848);
  func_0x007849a0();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  func_0x0078ea60(puVar1);
  _objc_release(param_1);
  func_0x0078de80(puVar1);
  uVar2 = *param_4;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,param_4[1]);
  func_0x00790680(puVar1);
  _objc_release(uVar2);
  func_0x007907e0(puVar1);
  func_0x0078f740(puVar1);
  uVar2 = param_4[4];
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,param_4[5]);
  func_0x00790780(puVar1);
  _objc_release(uVar2);
  func_0x007904e0(puVar1);
  func_0x00790740(puVar1);
  if (param_4[8] != 0) {
    uVar2 = param_4[7];
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    func_0x0078f6e0(puVar1);
    _objc_release(uVar2);
  }
  func_0x0078e7a0(puVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x00788ac0(uVar2);
  func_0x00783860(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 0002bde4; end: 0002bee7;  */

void FUN_0002bde4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = PTR_PTR_00ac2850;
  _objc_allocWithZone(PTR_PTR_00ac2850);
  func_0x007849a0();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  func_0x0078ea60(puVar1);
  _objc_release(param_1);
  func_0x0078de80(puVar1);
  uVar2 = 0;
  if (param_5 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_4,param_5);
    uVar2 = param_4;
  }
  func_0x0078f6e0(puVar1);
  _objc_release(uVar2);
  func_0x00790700(puVar1);
  func_0x00790720(puVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x00788ac0(uVar2);
  func_0x00783860(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 0002bee8; end: 0002c003;  */

void FUN_0002bee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_00ac2858;
  _objc_allocWithZone(PTR_PTR_00ac2858);
  func_0x007849a0();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  func_0x0078ea60(puVar1);
  _objc_release(param_1);
  func_0x0078de80(puVar1);
  uVar2 = *param_4;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,param_4[1]);
  func_0x007906a0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_4[2];
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,param_4[3]);
  func_0x007906e0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_4[4];
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,param_4[5]);
  func_0x007906c0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_4[6];
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,param_4[7]);
  func_0x00790760(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x00788ac0(uVar2);
  func_0x00783860(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 0002c004; end: 0002c033;  */

void FUN_0002c004(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 0002c034; end: 0002c03f;  */

void __s23ExtensionsStickerPicker22StickersBlizzardLoggerC6loggerACSo019SCBlizzardExtensionF0C_tcfc
               (undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 0002c040; end: 0002c083;  */

void FUN_0002c040(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0002c084; end: 0002c0c3;  */

void FUN_0002c084(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined1 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 0002c0c4; end: 0002c0d3;  */

void __s23ExtensionsStickerPicker22StickersGrapheneLoggerC08grapheneF013extensionTypeACSo019SCGrapheneExtensionF0C_AA0kI0Otcfc
               (undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined1 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 0002c0d4; end: 0002c263;  */

void __s23ExtensionsStickerPicker22StickersGrapheneLoggerC20logExtensionLaunched4withySS_tF
               (undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  lVar2 = 0xae64c8;
  func_0x000115a8(0xae64c8,&UNK_007cd140);
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined8 *)(lVar2 + 0x20) = 0x74735f7972746e65;
  *(undefined8 *)(lVar2 + 0x28) = 0xeb00000000657461;
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  *(undefined8 *)(lVar2 + 0x38) = param_2;
  _swift_bridgeObjectRetain(param_2);
  lVar3 = lVar2;
  func_0x00020958(lVar2);
  _swift_setDeallocating(lVar2);
  FUN_00025424((undefined8 *)(lVar2 + 0x20));
  pcVar1 = " unarchive object for key \'";
  if (*(char *)(unaff_x20 + 0x18) != '\x01') {
    pcVar1 = "keyboard_extension";
  }
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0);
  uVar5 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (0xd000000000000012,(ulong)pcVar1 | 0x8000000000000000);
  _swift_bridgeObjectRelease((ulong)pcVar1 | 0x8000000000000000);
  uVar6 = 0x646568636e75616c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x646568636e75616c,0xe800000000000000);
  lVar2 = lVar3;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar3,PTR___sSSN_0099b040,PTR___sSSN_0099b040,PTR___sSSSHsWP_0099b050);
  _swift_bridgeObjectRelease(lVar3);
  func_0x00786420(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(lVar2);
  func_0x00784860(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release(puVar4);
  return;
}



/* Entry: 0002c264; end: 0002c5f3;  */

void FUN_0002c264(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  lVar2 = 0xae64c8;
  func_0x000115a8(0xae64c8,&UNK_007cd140);
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined8 *)(lVar2 + 0x20) = 0x746e696f70646e65;
  *(undefined8 *)(lVar2 + 0x28) = 0xe800000000000000;
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  *(undefined8 *)(lVar2 + 0x38) = param_2;
  _swift_bridgeObjectRetain(param_2);
  lVar3 = lVar2;
  func_0x00020958(lVar2);
  _swift_setDeallocating(lVar2);
  FUN_00025424((undefined8 *)(lVar2 + 0x20));
  pcVar1 = " unarchive object for key \'";
  if (*(char *)(unaff_x20 + 0x18) != '\x01') {
    pcVar1 = "keyboard_extension";
  }
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0);
  uVar5 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (0xd000000000000012,(ulong)pcVar1 | 0x8000000000000000);
  _swift_bridgeObjectRelease((ulong)pcVar1 | 0x8000000000000000);
  uVar6 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x80000000008b55b0);
  lVar2 = lVar3;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar3,PTR___sSSN_0099b040,PTR___sSSN_0099b040,PTR___sSSSHsWP_0099b050);
  _swift_bridgeObjectRelease(lVar3);
  func_0x00786420(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(lVar2);
  func_0x00784860(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release(puVar4);
  return;
}



/* Entry: 0002c5f4; end: 0002c8bb;  */

void __s23ExtensionsStickerPicker22StickersGrapheneLoggerC12logFirstOpenyyF(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  
  pcVar1 = " unarchive object for key \'";
  if (*(char *)(unaff_x20 + 0x18) != '\x01') {
    pcVar1 = "keyboard_extension";
  }
  puVar2 = PTR___swiftEmptyArrayStorage_0099b8f0;
  func_0x00020958(PTR___swiftEmptyArrayStorage_0099b8f0);
  puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0);
  uVar4 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (0xd000000000000012,(ulong)pcVar1 | 0x8000000000000000);
  _swift_bridgeObjectRelease((ulong)pcVar1 | 0x8000000000000000);
  uVar5 = 0x706f5f7473726966;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x706f5f7473726966,0xea00000000006e65);
  puVar6 = puVar2;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar2,PTR___sSSN_0099b040,PTR___sSSN_0099b040,PTR___sSSSHsWP_0099b050);
  _swift_bridgeObjectRelease(puVar2);
  func_0x00786420(puVar3);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(puVar6);
  func_0x00784860(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar3);
  return;
}



/* Entry: 0002c8bc; end: 0002c977;  */

void __s23ExtensionsStickerPicker22StickersGrapheneLoggerC5flush10completionyyyc_tF
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_0099e508;
  _swift_allocObject(&UNK_0099e508,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  pcStack_40 = FUN_0002cadc;
  puStack_60 = PTR___NSConcreteStackBlock_00999f30;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_0001d1e4;
  puStack_48 = &UNK_0099e520;
  puStack_38 = puVar1;
  __Block_copy(&puStack_60);
  puVar1 = puStack_38;
  _swift_retain(param_2);
  _swift_release(puVar1);
  func_0x00783880(uVar3);
  __Block_release(ppuVar2);
  return;
}



/* Entry: 0002c978; end: 0002c99b;  */

void FUN_0002c978(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0002c99c; end: 0002c9af;  */

undefined * FUN_0002c99c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  if (puVar8 != (undefined *)0x0) {
    func_0x000115a8(0xae6b68,&UNK_007cdce8);
    puVar5 = puVar8;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      FUN_000202c0();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x2cc5c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x2cc60);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Entry: 0002c9b0; end: 0002caa3;  */

undefined * FUN_0002c9b0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  if (puVar8 != (undefined *)0x0) {
    func_0x000115a8(0xae6b60,&UNK_007cdce0);
    puVar5 = puVar8;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar9 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar9[-2];
      uVar3 = puVar9[-1];
      uVar10 = *puVar9;
      _swift_bridgeObjectRetain(uVar3);
      uVar6 = uVar2;
      uVar7 = uVar3;
      FUN_000202c0();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x2caa0);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x2caa4);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar9 = puVar9 + 3;
    } while (puVar8 != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Entry: 0002caa4; end: 0002cab7;  */

undefined * FUN_0002caa4(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  if (puVar8 != (undefined *)0x0) {
    func_0x000115a8(0xae6b58,&UNK_007cdcd8);
    puVar5 = puVar8;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      FUN_000202c0();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x2cc5c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x2cc60);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Entry: 0002cab8; end: 0002cadb;  */

void FUN_0002cab8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0002cadc; end: 0002cb1b;  */

void FUN_0002cadc(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000031,0x80000000008b55f0);
  _objc_release();
  (*pcVar1)();
  return;
}



/* Entry: 0002cb1c; end: 0002cb37;  */

void FUN_0002cb1c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_0099bb30)(uVar1);
  return;
}



/* Entry: 0002cb38; end: 0002cb57;  */

void __s23ExtensionsStickerPicker22StickersGrapheneLoggerCMa(void)

{
  _objc_opt_self(&PTR_PTR_00ae6ae8);
  return;
}



/* Entry: 0002cb58; end: 0002cb6b;  */

undefined * FUN_0002cb58(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  if (puVar8 != (undefined *)0x0) {
    func_0x000115a8(0xae6b50,&UNK_007ce280);
    puVar5 = puVar8;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      FUN_000202c0();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x2cc5c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x2cc60);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Entry: 0002cb6c; end: 0002cc5f;  */

undefined * FUN_0002cb6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  if (puVar8 != (undefined *)0x0) {
    func_0x000115a8(param_2,param_3);
    puVar5 = puVar8;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      FUN_000202c0();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x2cc5c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x2cc60);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Entry: 0002cc60; end: 0002cc73;  */

bool FUN_0002cc60(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 0002cc74; end: 0002ceff;  */

void FUN_0002cc74(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar2 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar5 = 0xec00000073736563;
  uVar3 = 0x63416c6c75466f6e;
  if (bVar2 != 2) {
    uVar5 = 0xea0000000000676e;
    uVar3 = 0x69746e6573657270;
  }
  uVar1 = 0xe900000000000074;
  uVar4 = 0x754f646567676f6c;
  if (bVar2 != 0) {
    uVar1 = 0xeb00000000746553;
    uVar4 = 0x7261746176416f6e;
  }
  if (bVar2 < 2) {
    uVar5 = uVar1;
    uVar3 = uVar4;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar3,uVar5);
  _swift_bridgeObjectRelease(uVar5);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0002cf00; end: 0002cf97;  */

void FUN_0002cf00(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  uVar5 = 0xec00000073736563;
  uVar3 = 0x63416c6c75466f6e;
  if (bVar2 != 2) {
    uVar5 = 0xea0000000000676e;
    uVar3 = 0x69746e6573657270;
  }
  uVar1 = 0xe900000000000074;
  uVar4 = 0x754f646567676f6c;
  if (bVar2 != 0) {
    uVar1 = 0xeb00000000746553;
    uVar4 = 0x7261746176416f6e;
  }
  if (bVar2 < 2) {
    uVar5 = uVar1;
    uVar3 = uVar4;
  }
  *param_1 = uVar3;
  param_1[1] = uVar5;
  return;
}



/* Entry: 0002cf98; end: 0002cffb;  */

ulong FUN_0002cf98(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0xae6580;
  func_0x000115a8(0xae6580,&UNK_007cd4b0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 0002cffc; end: 0002cfff;  */

void FUN_0002cffc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae6b70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cdcf0;
  _swift_getWitnessTable(&UNK_007cdcf0,&__s23ExtensionsStickerPicker10EntryStateON);
  puRam0000000000ae6b70 = puVar1;
  return;
}



/* Entry: 0002d000; end: 0002d03f;  */

void FUN_0002d000(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae6b70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cdcf0;
  _swift_getWitnessTable(&UNK_007cdcf0,&__s23ExtensionsStickerPicker10EntryStateON);
  puRam0000000000ae6b70 = puVar1;
  return;
}



/* Entry: 0002d040; end: 0002d1a3;  */

int FUN_0002d040(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_0002d0bc;
        goto LAB_0002d0a0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_0002d0a0:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_0002d0bc:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 0002d1a4; end: 0002d1cf;  */

undefined1  [16] FUN_0002d1a4(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  _swift_bridgeObjectRetain(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 0002d1d0; end: 0002d207;  */

void __s23ExtensionsStickerPicker09ExtensionB0VMa(undefined8 param_1)

{
  if (lRam0000000000ae6c68 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&__s23ExtensionsStickerPicker09ExtensionB0VMn);
  return;
}



/* Entry: 0002d208; end: 0002d213;  */

void FUN_0002d208(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = unaff_x20[1];
  *param_1 = *unaff_x20;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)();
  return;
}



/* Entry: 0002d214; end: 0002d3e7;  */

void FUN_0002d214(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_78,*unaff_x20,unaff_x20[1]);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + 2));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)unaff_x20 + 0x11));
  uVar1 = 0;
  __s10Foundation3URLVMa(0);
  uVar2 = 0xae6c00;
  FUN_0002d4ac(0xae6c00,PTR___s10Foundation3URLVMa_0099c2f8,PTR___s10Foundation3URLVSHAAMc_0099c308)
  ;
  __sSH4hash4intoys6HasherVz_tFTj(auStack_78,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0002d3e8; end: 0002d3eb;  */

long FUN_0002d3e8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *param_1;
  if ((((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar1 & 1) != 0)) && ((char)param_1[2] == (char)param_2[2])) &&
     (*(char *)((long)param_1 + 0x11) == *(char *)((long)param_2 + 0x11))) {
    lVar2 = 0;
    __s23ExtensionsStickerPicker09ExtensionB0VMa();
    lVar3 = (long)param_1 + (long)*(int *)(lVar2 + 0x1c);
                    /* WARNING: Could not recover jumptable at 0x00777924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___s10Foundation3URLV2eeoiySbAC_ACtFZ_0099c2d0)
              (lVar3,(long)param_2 + (long)*(int *)(lVar2 + 0x1c));
    return lVar3;
  }
  return 0;
}



/* Entry: 0002d3ec; end: 0002d473;  */

long FUN_0002d3ec(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *param_1;
  if ((((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar1 & 1) != 0)) && ((char)param_1[2] == (char)param_2[2])) &&
     (*(char *)((long)param_1 + 0x11) == *(char *)((long)param_2 + 0x11))) {
    lVar2 = 0;
    __s23ExtensionsStickerPicker09ExtensionB0VMa();
    lVar3 = (long)param_1 + (long)*(int *)(lVar2 + 0x1c);
                    /* WARNING: Could not recover jumptable at 0x00777924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___s10Foundation3URLV2eeoiySbAC_ACtFZ_0099c2d0)
              (lVar3,(long)param_2 + (long)*(int *)(lVar2 + 0x1c));
    return lVar3;
  }
  return 0;
}



/* Entry: 0002d474; end: 0002d47f;  */

undefined * FUN_0002d474(void)

{
  return PTR___sSSSHsWP_0099b050;
}



/* Entry: 0002d480; end: 0002d4ab;  */

void FUN_0002d480(void)

{
  FUN_0002d4ac(0xae6c08,__s23ExtensionsStickerPicker09ExtensionB0VMa,&UNK_007cde28);
  return;
}



/* Entry: 0002d4ac; end: 0002d4eb;  */

void FUN_0002d4ac(long *param_1,code *param_2,long param_3)

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


