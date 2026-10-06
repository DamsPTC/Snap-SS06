/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 000cdb6c; end: 000ce0ef;  */

void FUN_000cdb6c(ulong *param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 *puVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong *puVar11;
  long unaff_x20;
  long unaff_x21;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong *puStack_f8;
  ulong uStack_f0;
  ulong *puStack_e8;
  undefined8 uStack_e0;
  undefined2 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  if (*(char *)(unaff_x20 + 0x21) != '\x02') {
    if (*(char *)(unaff_x20 + 0x21) != '\0') {
      return;
    }
    puVar11 = param_1;
    FUN_000cb85c();
    if (unaff_x21 != 0) {
      return;
    }
    uVar12 = *param_1;
    uVar8 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar12;
    if ((uVar8 & 1) == 0) {
      uVar4 = 0;
      FUN_000d642c(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
    }
    uVar8 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar8) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_000d642c(uVar12,uVar8 + 1,1,uVar4);
      uVar4 = uVar12;
    }
    *(ulong *)(uVar4 + 0x10) = uVar8 + 1;
    *(bool *)(uVar4 + uVar8 + 0x20) = puVar11 != (ulong *)0x0;
    *param_1 = uVar4;
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
    return;
  }
  uStack_58 = 0;
  puVar11 = &uStack_58;
  FUN_000cbc48();
  uVar8 = uStack_58;
  if (unaff_x21 != 0) {
    return;
  }
  if ((long)uStack_58 < 1) {
    lVar6 = 0;
    goto LAB_000cdea8;
  }
  if (uStack_58 < 8) {
    lVar6 = 0;
    uVar12 = 0;
  }
  else {
    if (uStack_58 < 0x20) {
      lVar6 = 0;
      uVar4 = 0;
    }
    else {
      lVar6 = 0;
      lVar10 = 0;
      lVar16 = 0;
      lVar17 = 0;
      uVar12 = uStack_58 & 0x7fffffffffffffe0;
      lVar18 = 0;
      lVar19 = 0;
      puVar7 = puVar11 + 2;
      lVar24 = 0;
      lVar25 = 0;
      lVar20 = 0;
      lVar21 = 0;
      lVar26 = 0;
      lVar27 = 0;
      lVar22 = 0;
      lVar23 = 0;
      lVar32 = 0;
      lVar33 = 0;
      lVar28 = 0;
      lVar29 = 0;
      lVar36 = 0;
      lVar37 = 0;
      lVar34 = 0;
      lVar35 = 0;
      lVar42 = 0;
      lVar43 = 0;
      lVar30 = 0;
      lVar31 = 0;
      lVar40 = 0;
      lVar41 = 0;
      lVar38 = 0;
      lVar39 = 0;
      lVar44 = 0;
      lVar45 = 0;
      uVar4 = uVar12;
      do {
        uVar49 = puVar7[-1];
        uVar48 = puVar7[-2];
        uVar47 = puVar7[1];
        uVar46 = *puVar7;
        lVar32 = lVar32 + (ulong)(-(-1 < (char)(uVar49 >> 0x30)) & 1);
        lVar33 = lVar33 + (ulong)(-(-1 < (long)uVar49) & 1);
        lVar22 = lVar22 + (ulong)(-(-1 < (char)(uVar49 >> 0x20)) & 1);
        lVar23 = lVar23 + (ulong)(-(-1 < (char)(uVar49 >> 0x28)) & 1);
        lVar26 = lVar26 + (ulong)(-(-1 < (char)(uVar49 >> 0x10)) & 1);
        lVar27 = lVar27 + (ulong)(-(-1 < (char)(uVar49 >> 0x18)) & 1);
        lVar24 = lVar24 + (ulong)(-(-1 < (char)(uVar48 >> 0x30)) & 1);
        lVar25 = lVar25 + (ulong)(-(-1 < (long)uVar48) & 1);
        lVar20 = lVar20 + (ulong)(-(-1 < (char)uVar49) & 1);
        lVar21 = lVar21 + (ulong)(-(-1 < (char)(uVar49 >> 8)) & 1);
        lVar18 = lVar18 + (ulong)(-(-1 < (char)(uVar48 >> 0x20)) & 1);
        lVar19 = lVar19 + (ulong)(-(-1 < (char)(uVar48 >> 0x28)) & 1);
        lVar16 = lVar16 + (ulong)(-(-1 < (char)(uVar48 >> 0x10)) & 1);
        lVar17 = lVar17 + (ulong)(-(-1 < (char)(uVar48 >> 0x18)) & 1);
        lVar6 = lVar6 + (ulong)(-(-1 < (char)uVar48) & 1);
        lVar10 = lVar10 + (ulong)(-(-1 < (char)(uVar48 >> 8)) & 1);
        lVar44 = lVar44 + (ulong)(-(-1 < (char)(uVar47 >> 0x30)) & 1);
        lVar45 = lVar45 + (ulong)(-(-1 < (long)uVar47) & 1);
        lVar38 = lVar38 + (ulong)(-(-1 < (char)(uVar47 >> 0x20)) & 1);
        lVar39 = lVar39 + (ulong)(-(-1 < (char)(uVar47 >> 0x28)) & 1);
        lVar40 = lVar40 + (ulong)(-(-1 < (char)(uVar47 >> 0x10)) & 1);
        lVar41 = lVar41 + (ulong)(-(-1 < (char)(uVar47 >> 0x18)) & 1);
        lVar42 = lVar42 + (ulong)(-(-1 < (char)(uVar46 >> 0x30)) & 1);
        lVar43 = lVar43 + (ulong)(-(-1 < (long)uVar46) & 1);
        lVar30 = lVar30 + (ulong)(-(-1 < (char)uVar47) & 1);
        lVar31 = lVar31 + (ulong)(-(-1 < (char)(uVar47 >> 8)) & 1);
        lVar34 = lVar34 + (ulong)(-(-1 < (char)(uVar46 >> 0x20)) & 1);
        lVar35 = lVar35 + (ulong)(-(-1 < (char)(uVar46 >> 0x28)) & 1);
        lVar36 = lVar36 + (ulong)(-(-1 < (char)(uVar46 >> 0x10)) & 1);
        lVar37 = lVar37 + (ulong)(-(-1 < (char)(uVar46 >> 0x18)) & 1);
        lVar28 = lVar28 + (ulong)(-(-1 < (char)uVar46) & 1);
        lVar29 = lVar29 + (ulong)(-(-1 < (char)(uVar46 >> 8)) & 1);
        puVar7 = puVar7 + 4;
        uVar4 = uVar4 - 0x20;
      } while (uVar4 != 0);
      lVar6 = lVar28 + lVar6 + lVar30 + lVar20 + lVar34 + lVar18 + lVar38 + lVar22 +
              lVar36 + lVar16 + lVar40 + lVar26 + lVar42 + lVar24 + lVar44 + lVar32 +
              lVar29 + lVar10 + lVar31 + lVar21 + lVar35 + lVar19 + lVar39 + lVar23 +
              lVar37 + lVar17 + lVar41 + lVar27 + lVar43 + lVar25 + lVar45 + lVar33;
      if (uStack_58 == uVar12) goto LAB_000cdea8;
      uVar4 = uVar12;
      if ((uStack_58 & 0x18) == 0) goto LAB_000cde88;
    }
    uVar12 = uStack_58 & 0x7ffffffffffffff8;
    lVar16 = 0;
    lVar17 = 0;
    lVar18 = 0;
    lVar10 = uVar4 - uVar12;
    lVar19 = 0;
    lVar20 = 0;
    lVar21 = 0;
    lVar22 = 0;
    plVar9 = (long *)((long)puVar11 + uVar4);
    do {
      lVar23 = *plVar9;
      lVar21 = lVar21 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x30)) & 1);
      lVar22 = lVar22 + (ulong)(-(-1 < lVar23) & 1);
      lVar19 = lVar19 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x20)) & 1);
      lVar20 = lVar20 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x28)) & 1);
      lVar16 = lVar16 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x10)) & 1);
      lVar17 = lVar17 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x18)) & 1);
      lVar6 = lVar6 + (ulong)(-(-1 < (char)lVar23) & 1);
      lVar18 = lVar18 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 8)) & 1);
      lVar10 = lVar10 + 8;
      plVar9 = plVar9 + 1;
    } while (lVar10 != 0);
    lVar6 = lVar6 + lVar19 + lVar16 + lVar21 + lVar18 + lVar20 + lVar17 + lVar22;
    if (uStack_58 == uVar12) goto LAB_000cdea8;
  }
LAB_000cde88:
  lVar10 = uStack_58 - uVar12;
  pbVar5 = (byte *)((long)puVar11 + uVar12);
  do {
    lVar6 = lVar6 + (ulong)(*pbVar5 >> 7 ^ 1);
    lVar10 = lVar10 + -1;
    pbVar5 = pbVar5 + 1;
  } while (lVar10 != 0);
LAB_000cdea8:
  puVar13 = (undefined1 *)*param_1;
  lVar10 = *(long *)(puVar13 + 0x10);
  if (SCARRY8(lVar10,lVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xce0f0);
    (*pcVar2)();
  }
  puVar3 = puVar13;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)puVar3 == 0) || ((long)(*(ulong *)(puVar13 + 0x18) >> 1) < lVar10 + lVar6)) {
    FUN_000d642c();
    puVar13 = puVar3;
  }
  uVar15 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar14 = *(undefined1 *)(unaff_x20 + 0x70);
  uStack_d8 = 1;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  uStack_98 = 1;
  uStack_70 = 0xf000000000000000;
  uStack_78 = 0;
  uStack_60 = 0xf000000000000000;
  uStack_68 = 0;
  uStack_f0 = uVar8;
  uStack_e0 = 0;
  puVar3 = (undefined1 *)(unaff_x20 + 0x30);
  puStack_f8 = puVar11;
  puStack_e8 = puVar11;
  func_0x000d4d64(puVar3,&uStack_c8);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_90 = uVar15;
  uStack_88 = uVar14;
  puVar7 = puStack_f8;
  uVar4 = uStack_f0;
  uStack_f0 = uVar8;
  while( true ) {
    puStack_f8 = puVar11;
    if (uStack_f0 == 0) {
      *param_1 = (ulong)puVar13;
      uStack_f0 = 0;
      func_0x000d4cac(&puStack_f8);
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
      return;
    }
    uVar8 = uStack_f0 - 1;
    if ((long)uStack_f0 < 1) break;
    puVar11 = (ulong *)((long)puStack_f8 + 1);
    uVar12 = (ulong)(char)*puStack_f8;
    if ((long)uVar12 < 0) {
      if (uStack_f0 == 1) {
        uVar14 = 3;
        goto LAB_000ce044;
      }
      uVar12 = uVar12 & 0x7f;
      puVar11 = (ulong *)((long)puStack_f8 + 2);
      uVar46 = 7;
      while (uVar12 = ((ulong)*(byte *)((long)puVar11 + -1) & 0x7f) << (uVar46 & 0x3f) | uVar12,
            (char)*(byte *)((long)puVar11 + -1) < '\0') {
        uVar14 = 3;
        if (uVar8 < 2) goto LAB_000ce044;
        puVar11 = (ulong *)((long)puVar11 + 1);
        uVar8 = uVar8 - 1;
        bVar1 = 0x38 < uVar46;
        uVar46 = uVar46 + 7;
        if (bVar1) goto LAB_000ce044;
      }
      uVar8 = uVar8 - 1;
    }
    uVar46 = *(ulong *)(puVar13 + 0x10);
    puStack_f8 = puVar7;
    uStack_f0 = uVar4;
    if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar46) {
      puVar3 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
      FUN_000d642c(puVar3,uVar46 + 1,1,puVar13);
      puVar13 = puVar3;
    }
    *(ulong *)(puVar13 + 0x10) = uVar46 + 1;
    puVar13[uVar46 + 0x20] = uVar12 != 0;
    puVar7 = puStack_f8;
    uVar4 = uStack_f0;
    uStack_f0 = uVar8;
  }
  uVar14 = 1;
LAB_000ce044:
  *param_1 = (ulong)puVar13;
  FUN_000d4ba8();
  _swift_allocError(&UNK_009ab010,puVar3,0,0);
  *puVar3 = uVar14;
  _swift_willThrow();
  func_0x000d4cac(&puStack_f8);
  return;
}



/* Entry: 000ce0f0; end: 000ce19f;  */

void FUN_000ce0f0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  long lStack_38;
  
  if (*(char *)(unaff_x20 + 0x21) == '\x02') {
    lStack_38 = 0;
    plVar1 = &lStack_38;
    FUN_000cbc48();
    if (unaff_x21 == 0) {
      lVar2 = lStack_38;
      FUN_00122abc();
      if (lVar2 == 0) {
        FUN_000d4ba8();
        _swift_allocError(&UNK_009ab010,plVar1,0,0);
        *(undefined1 *)plVar1 = 2;
        _swift_willThrow();
      }
      else {
        _swift_bridgeObjectRelease(param_1[1]);
        *param_1 = plVar1;
        param_1[1] = lVar2;
        *(undefined1 *)(unaff_x20 + 0x20) = 1;
      }
    }
  }
  return;
}



/* Entry: 000ce1a0; end: 000ce24f;  */

void FUN_000ce1a0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  long lStack_38;
  
  if (*(char *)(unaff_x20 + 0x21) == '\x02') {
    lStack_38 = 0;
    plVar1 = &lStack_38;
    FUN_000cbc48();
    if (unaff_x21 == 0) {
      lVar2 = lStack_38;
      FUN_00122abc();
      if (lVar2 == 0) {
        FUN_000d4ba8();
        _swift_allocError(&UNK_009ab010,plVar1,0,0);
        *(undefined1 *)plVar1 = 2;
        _swift_willThrow();
      }
      else {
        _swift_bridgeObjectRelease(param_1[1]);
        *param_1 = plVar1;
        param_1[1] = lVar2;
        *(undefined1 *)(unaff_x20 + 0x20) = 1;
      }
    }
  }
  return;
}



/* Entry: 000ce250; end: 000ce37f;  */

void FUN_000ce250(ulong *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x21;
  ulong uVar6;
  long lStack_38;
  
  if (*(char *)(unaff_x20 + 0x21) == '\x02') {
    lStack_38 = 0;
    plVar2 = &lStack_38;
    FUN_000cbc48();
    if (unaff_x21 == 0) {
      lVar5 = lStack_38;
      FUN_00122abc();
      if (lVar5 == 0) {
        FUN_000d4ba8();
        _swift_allocError(&UNK_009ab010,plVar2,0,0);
        *(undefined1 *)plVar2 = 2;
        _swift_willThrow();
      }
      else {
        uVar6 = *param_1;
        uVar3 = uVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar4 = uVar6;
        if ((uVar3 & 1) == 0) {
          uVar4 = 0;
          FUN_0002a0e4(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
        }
        uVar3 = *(ulong *)(uVar4 + 0x10);
        uVar6 = uVar4;
        if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
          uVar6 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
          FUN_0002a0e4(uVar6,uVar3 + 1,1,uVar4);
        }
        *(ulong *)(uVar6 + 0x10) = uVar3 + 1;
        lVar1 = uVar6 + uVar3 * 0x10;
        *(long **)(lVar1 + 0x20) = plVar2;
        *(long *)(lVar1 + 0x28) = lVar5;
        *param_1 = uVar6;
        *(undefined1 *)(unaff_x20 + 0x20) = 1;
      }
    }
  }
  return;
}



/* Entry: 000ce380; end: 000ce3fb;  */

void FUN_000ce380(long *param_1,code *param_2)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x21;
  long lStack_38;
  
  if (*(char *)(unaff_x20 + 0x21) == '\x02') {
    lStack_38 = 0;
    plVar1 = &lStack_38;
    FUN_000cbc48();
    if (unaff_x21 == 0) {
      (*param_2)(*param_1,param_1[1]);
      FUN_00135524();
      *param_1 = (long)plVar1;
      param_1[1] = lStack_38;
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
    }
  }
  return;
}



/* Entry: 000ce3fc; end: 000ce4ef;  */

void FUN_000ce3fc(ulong *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long unaff_x21;
  ulong uVar6;
  undefined8 uStack_38;
  
  if (*(char *)(unaff_x20 + 0x21) == '\x02') {
    uStack_38 = 0;
    puVar2 = &uStack_38;
    FUN_000cbc48();
    if (unaff_x21 == 0) {
      uVar5 = uStack_38;
      FUN_00135524();
      uVar6 = *param_1;
      uVar3 = uVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar4 = uVar6;
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
        func_0x000d651c(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
      }
      uVar3 = *(ulong *)(uVar4 + 0x10);
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        func_0x000d651c(uVar6,uVar3 + 1,1,uVar4);
        uVar4 = uVar6;
      }
      *(ulong *)(uVar4 + 0x10) = uVar3 + 1;
      lVar1 = uVar4 + uVar3 * 0x10;
      *(undefined8 **)(lVar1 + 0x20) = puVar2;
      *(undefined8 *)(lVar1 + 0x28) = uVar5;
      *param_1 = uVar4;
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
    }
  }
  return;
}



/* Entry: 000ce4f0; end: 000ce65f;  */

void FUN_000ce4f0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar4;
  long unaff_x20;
  long unaff_x21;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  
  lVar1 = 0;
  __sSqMa();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_70 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (*(char *)(unaff_x20 + 0x21) == '\0') {
    lVar2 = lVar1;
    FUN_000cb85c();
    if (unaff_x21 == 0) {
      (**(code **)(param_3 + 0x20))(puVar5,(long)(int)lVar2,param_2,param_3);
      puVar3 = puVar5;
      (**(code **)(lVar8 + 0x30))(puVar5,1,param_2);
      pcVar4 = *(code **)(lVar7 + 8);
      if ((int)puVar3 == 1) {
        (*pcVar4)(puVar5,lVar1);
      }
      else {
        (*pcVar4)(param_1,lVar1);
        pcVar4 = *(code **)(lVar8 + 0x20);
        (*pcVar4)(lVar6,puVar5,param_2);
        (*pcVar4)(param_1,lVar6,param_2);
        (**(code **)(lVar8 + 0x38))(param_1,0,1,param_2);
        *(undefined1 *)(unaff_x20 + 0x20) = 1;
      }
    }
  }
  return;
}



/* Entry: 000ce660; end: 000ce7bb;  */

void FUN_000ce660(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  
  lVar1 = 0;
  __sSqMa();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_70 + -extraout_x8;
  lVar7 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (*(char *)(unaff_x20 + 0x21) == '\0') {
    lVar2 = lVar1;
    FUN_000cb85c();
    if (unaff_x21 == 0) {
      (**(code **)(param_3 + 0x20))(puVar4,(long)(int)lVar2,param_2,param_3);
      puVar3 = puVar4;
      (**(code **)(lVar7 + 0x30))(puVar4,1,param_2);
      if ((int)puVar3 == 1) {
        (**(code **)(lVar8 + 8))(puVar4,lVar1);
      }
      else {
        (**(code **)(lVar7 + 8))(param_1,param_2);
        pcVar6 = *(code **)(lVar7 + 0x20);
        (*pcVar6)(lVar5,puVar4,param_2);
        (*pcVar6)(param_1,lVar5,param_2);
        *(undefined1 *)(unaff_x20 + 0x20) = 1;
      }
    }
  }
  return;
}



/* Entry: 000ce7bc; end: 000cf133;  */

void FUN_000ce7bc(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x8_00;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  long *plVar16;
  uint *puVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x13;
  undefined8 extraout_x14;
  undefined *extraout_x15;
  undefined *puVar18;
  undefined1 uVar19;
  long unaff_x20;
  undefined8 uVar20;
  long unaff_x21;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  ulong uVar54;
  ulong uVar55;
  ulong uVar56;
  ulong uVar57;
  undefined auStack_170 [8];
  undefined *puStack_168;
  long lStack_118;
  long lStack_110;
  ulong *puStack_108;
  ulong uStack_100;
  ulong *puStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  byte bStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_58;
  
  lVar6 = 0;
  __sSqMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar21 = auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar23 = (long)puVar21 - extraout_x12;
  lVar10 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar10 + 0x40));
  (*(code *)PTR____chkstk_darwin_00999f48)();
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar22 = ((lVar23 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_00) -
           extraout_x12_01;
  if (*(char *)(unaff_x20 + 0x21) != '\x02') {
    if (*(char *)(unaff_x20 + 0x21) != '\0') {
      return;
    }
    lVar24 = lVar6;
    FUN_000cb85c();
    if (unaff_x21 != 0) {
      return;
    }
    (**(code **)(param_3 + 0x20))(lVar23,(long)(int)lVar24,param_2,param_3);
    lVar24 = lVar23;
    (**(code **)(lVar10 + 0x30))(lVar23,1,param_2);
    if ((int)lVar24 == 1) {
      (**(code **)(extraout_x13 + 8))(lVar23,lVar6);
      return;
    }
    (**(code **)(lVar10 + 0x20))(lVar22,lVar23,param_2);
    (**(code **)(lVar10 + 0x10))(extraout_x14,lVar22,param_2);
    uVar8 = 0;
    __sSaMa(0,param_2);
    __sSa6appendyyxnF(extraout_x14,uVar8);
    (**(code **)(lVar10 + 8))(lVar22,param_2);
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
    return;
  }
  uStack_58 = 0;
  puVar7 = &uStack_58;
  FUN_000cbc48();
  uVar15 = uStack_58;
  if (unaff_x21 != 0) {
    return;
  }
  if ((long)uStack_58 < 1) {
    lVar22 = 0;
  }
  else {
    if (uStack_58 < 8) {
      lVar22 = 0;
      uVar11 = 0;
    }
    else {
      if (uStack_58 < 0x20) {
        lVar22 = 0;
        uVar13 = 0;
      }
      else {
        lVar22 = 0;
        lVar23 = 0;
        lVar24 = 0;
        lVar25 = 0;
        uVar11 = uStack_58 & 0x7fffffffffffffe0;
        lVar26 = 0;
        lVar27 = 0;
        puVar14 = puVar7 + 2;
        lVar32 = 0;
        lVar33 = 0;
        lVar28 = 0;
        lVar29 = 0;
        lVar34 = 0;
        lVar35 = 0;
        lVar30 = 0;
        lVar31 = 0;
        lVar40 = 0;
        lVar41 = 0;
        lVar36 = 0;
        lVar37 = 0;
        lVar44 = 0;
        lVar45 = 0;
        lVar42 = 0;
        lVar43 = 0;
        lVar50 = 0;
        lVar51 = 0;
        lVar38 = 0;
        lVar39 = 0;
        lVar48 = 0;
        lVar49 = 0;
        lVar46 = 0;
        lVar47 = 0;
        lVar52 = 0;
        lVar53 = 0;
        uVar13 = uVar11;
        do {
          uVar57 = puVar14[-1];
          uVar56 = puVar14[-2];
          uVar55 = puVar14[1];
          uVar54 = *puVar14;
          lVar40 = lVar40 + (ulong)(-(-1 < (char)(uVar57 >> 0x30)) & 1);
          lVar41 = lVar41 + (ulong)(-(-1 < (long)uVar57) & 1);
          lVar30 = lVar30 + (ulong)(-(-1 < (char)(uVar57 >> 0x20)) & 1);
          lVar31 = lVar31 + (ulong)(-(-1 < (char)(uVar57 >> 0x28)) & 1);
          lVar34 = lVar34 + (ulong)(-(-1 < (char)(uVar57 >> 0x10)) & 1);
          lVar35 = lVar35 + (ulong)(-(-1 < (char)(uVar57 >> 0x18)) & 1);
          lVar32 = lVar32 + (ulong)(-(-1 < (char)(uVar56 >> 0x30)) & 1);
          lVar33 = lVar33 + (ulong)(-(-1 < (long)uVar56) & 1);
          lVar28 = lVar28 + (ulong)(-(-1 < (char)uVar57) & 1);
          lVar29 = lVar29 + (ulong)(-(-1 < (char)(uVar57 >> 8)) & 1);
          lVar26 = lVar26 + (ulong)(-(-1 < (char)(uVar56 >> 0x20)) & 1);
          lVar27 = lVar27 + (ulong)(-(-1 < (char)(uVar56 >> 0x28)) & 1);
          lVar24 = lVar24 + (ulong)(-(-1 < (char)(uVar56 >> 0x10)) & 1);
          lVar25 = lVar25 + (ulong)(-(-1 < (char)(uVar56 >> 0x18)) & 1);
          lVar22 = lVar22 + (ulong)(-(-1 < (char)uVar56) & 1);
          lVar23 = lVar23 + (ulong)(-(-1 < (char)(uVar56 >> 8)) & 1);
          lVar52 = lVar52 + (ulong)(-(-1 < (char)(uVar55 >> 0x30)) & 1);
          lVar53 = lVar53 + (ulong)(-(-1 < (long)uVar55) & 1);
          lVar46 = lVar46 + (ulong)(-(-1 < (char)(uVar55 >> 0x20)) & 1);
          lVar47 = lVar47 + (ulong)(-(-1 < (char)(uVar55 >> 0x28)) & 1);
          lVar48 = lVar48 + (ulong)(-(-1 < (char)(uVar55 >> 0x10)) & 1);
          lVar49 = lVar49 + (ulong)(-(-1 < (char)(uVar55 >> 0x18)) & 1);
          lVar50 = lVar50 + (ulong)(-(-1 < (char)(uVar54 >> 0x30)) & 1);
          lVar51 = lVar51 + (ulong)(-(-1 < (long)uVar54) & 1);
          lVar38 = lVar38 + (ulong)(-(-1 < (char)uVar55) & 1);
          lVar39 = lVar39 + (ulong)(-(-1 < (char)(uVar55 >> 8)) & 1);
          lVar42 = lVar42 + (ulong)(-(-1 < (char)(uVar54 >> 0x20)) & 1);
          lVar43 = lVar43 + (ulong)(-(-1 < (char)(uVar54 >> 0x28)) & 1);
          lVar44 = lVar44 + (ulong)(-(-1 < (char)(uVar54 >> 0x10)) & 1);
          lVar45 = lVar45 + (ulong)(-(-1 < (char)(uVar54 >> 0x18)) & 1);
          lVar36 = lVar36 + (ulong)(-(-1 < (char)uVar54) & 1);
          lVar37 = lVar37 + (ulong)(-(-1 < (char)(uVar54 >> 8)) & 1);
          puVar14 = puVar14 + 4;
          uVar13 = uVar13 - 0x20;
        } while (uVar13 != 0);
        lVar22 = lVar36 + lVar22 + lVar38 + lVar28 + lVar42 + lVar26 + lVar46 + lVar30 +
                 lVar44 + lVar24 + lVar48 + lVar34 + lVar50 + lVar32 + lVar52 + lVar40 +
                 lVar37 + lVar23 + lVar39 + lVar29 + lVar43 + lVar27 + lVar47 + lVar31 +
                 lVar45 + lVar25 + lVar49 + lVar35 + lVar51 + lVar33 + lVar53 + lVar41;
        if (uStack_58 == uVar11) goto LAB_000cecb8;
        uVar13 = uVar11;
        if ((uStack_58 & 0x18) == 0) goto LAB_000cec98;
      }
      uVar11 = uStack_58 & 0x7ffffffffffffff8;
      lVar24 = 0;
      lVar25 = 0;
      lVar26 = 0;
      lVar23 = uVar13 - uVar11;
      lVar27 = 0;
      lVar28 = 0;
      lVar29 = 0;
      lVar30 = 0;
      plVar16 = (long *)((long)puVar7 + uVar13);
      do {
        lVar31 = *plVar16;
        lVar29 = lVar29 + (ulong)(-(-1 < (char)((ulong)lVar31 >> 0x30)) & 1);
        lVar30 = lVar30 + (ulong)(-(-1 < lVar31) & 1);
        lVar27 = lVar27 + (ulong)(-(-1 < (char)((ulong)lVar31 >> 0x20)) & 1);
        lVar28 = lVar28 + (ulong)(-(-1 < (char)((ulong)lVar31 >> 0x28)) & 1);
        lVar24 = lVar24 + (ulong)(-(-1 < (char)((ulong)lVar31 >> 0x10)) & 1);
        lVar25 = lVar25 + (ulong)(-(-1 < (char)((ulong)lVar31 >> 0x18)) & 1);
        lVar22 = lVar22 + (ulong)(-(-1 < (char)lVar31) & 1);
        lVar26 = lVar26 + (ulong)(-(-1 < (char)((ulong)lVar31 >> 8)) & 1);
        lVar23 = lVar23 + 8;
        plVar16 = plVar16 + 1;
      } while (lVar23 != 0);
      lVar22 = lVar22 + lVar27 + lVar24 + lVar29 + lVar26 + lVar28 + lVar25 + lVar30;
      if (uStack_58 == uVar11) goto LAB_000cecb8;
    }
LAB_000cec98:
    lVar23 = uStack_58 - uVar11;
    pbVar12 = (byte *)((long)puVar7 + uVar11);
    do {
      lVar22 = lVar22 + (ulong)(*pbVar12 >> 7 ^ 1);
      lVar23 = lVar23 + -1;
      pbVar12 = pbVar12 + 1;
    } while (lVar23 != 0);
  }
LAB_000cecb8:
  lVar23 = *param_1;
  __sSa5countSivg(lVar23,param_2);
  if (SCARRY8(lVar23,lVar22)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0xcf128);
    (*pcVar4)();
  }
  uVar8 = 0;
  __sSaMa(0,param_2);
  __sSa15reserveCapacityyySiF(lVar23 + lVar22);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x68);
  bVar3 = *(byte *)(unaff_x20 + 0x70);
  uStack_e8 = 1;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_a8 = 1;
  uStack_80 = 0xf000000000000000;
  uStack_88 = 0;
  uStack_70 = 0xf000000000000000;
  uStack_78 = 0;
  uStack_100 = uVar15;
  uStack_f0 = 0;
  puVar9 = (undefined *)(unaff_x20 + 0x30);
  puStack_108 = puVar7;
  puStack_f8 = puVar7;
  func_0x000d4d64(puVar9,&uStack_d8);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_a0 = uVar20;
  bStack_98 = bVar3;
  if (uVar15 != 0) {
    puStack_168 = (undefined *)0x0;
LAB_000cedd8:
    do {
      uVar13 = uVar15 - 1;
      if ((long)uVar15 < 1) {
        uVar19 = 1;
LAB_000cf00c:
        FUN_000d4ba8();
        _swift_allocError(&UNK_009ab010,puVar9,0,0);
        *puVar9 = uVar19;
        _swift_willThrow();
        func_0x000d4cac(&puStack_108);
        _swift_bridgeObjectRelease(puStack_168);
        return;
      }
      puVar14 = (ulong *)((long)puVar7 + 1);
      uVar11 = (ulong)(char)*puVar7;
      if ((long)uVar11 < 0) {
        if (uVar15 == 1) {
          uVar19 = 3;
          goto LAB_000cf00c;
        }
        uVar11 = uVar11 & 0x7f;
        puVar14 = (ulong *)((long)puVar7 + 2);
        uVar15 = 7;
        while (uVar11 = ((ulong)*(byte *)((long)puVar14 + -1) & 0x7f) << (uVar15 & 0x3f) | uVar11,
              (char)*(byte *)((long)puVar14 + -1) < '\0') {
          uVar19 = 3;
          if (uVar13 < 2) goto LAB_000cf00c;
          puVar14 = (ulong *)((long)puVar14 + 1);
          uVar13 = uVar13 - 1;
          bVar5 = 0x38 < uVar15;
          uVar15 = uVar15 + 7;
          if (bVar5) goto LAB_000cf00c;
        }
        uVar13 = uVar13 - 1;
      }
      puStack_108 = puVar14;
      uStack_100 = uVar13;
      (**(code **)(param_3 + 0x20))(puVar21,(long)(int)uVar11,param_2);
      puVar9 = puVar21;
      (**(code **)(lVar10 + 0x30))(puVar21,1,param_2);
      uVar15 = uVar13;
      puVar7 = puVar14;
      if ((int)puVar9 == 1) {
        puVar9 = puVar21;
        lVar22 = lVar6;
        (**(code **)(extraout_x13 + 8))();
        if ((bVar3 & 1) == 0) {
          puVar18 = PTR___swiftEmptyArrayStorage_0099b8f0;
          if (puStack_168 != (undefined *)0x0) {
            puVar18 = puStack_168;
          }
          puVar9 = puVar18;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar9 & 1) == 0) {
            lVar22 = *(long *)(puVar18 + 0x10) + 1;
            puVar9 = (undefined *)0x0;
            FUN_000d60f8(0,lVar22,1,puVar18);
            puVar18 = puVar9;
          }
          uVar54 = *(ulong *)(puVar18 + 0x10);
          lVar23 = uVar54 + 1;
          puStack_168 = puVar18;
          if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar54) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar18 + 0x18));
            lVar22 = lVar23;
            FUN_000d60f8(puVar9,lVar23,1,puVar18);
            puStack_168 = puVar9;
          }
          *(long *)(puStack_168 + 0x10) = lVar23;
          *(int *)(puStack_168 + uVar54 * 4 + 0x20) = (int)uVar11;
          if (uVar13 == 0) break;
          goto LAB_000cedd8;
        }
      }
      else {
        (**(code **)(lVar10 + 0x20))(extraout_x15,puVar21,param_2);
        (**(code **)(lVar10 + 0x10))(extraout_x14,extraout_x15,param_2);
        __sSa6appendyyxnF(extraout_x14,uVar8);
        puVar9 = extraout_x15;
        lVar22 = param_2;
        (**(code **)(lVar10 + 8))();
      }
    } while (uVar13 != 0);
    puVar21 = puStack_168;
    if (puStack_168 != (undefined *)0x0) {
      uVar1 = *(uint *)(unaff_x20 + 0x28);
      lVar6 = *(long *)(puStack_168 + 0x10);
      if (lVar6 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        puVar17 = (uint *)(puStack_168 + 0x20);
        do {
          uVar2 = *puVar17;
          if (uVar2 < 0x80) {
            lVar23 = 1;
          }
          else if ((int)uVar2 < 0) {
            lVar23 = 10;
          }
          else if (uVar2 < 0x200000) {
            if (uVar2 < 0x4000) {
              lVar23 = 2;
            }
            else {
              lVar23 = 3;
            }
          }
          else if (uVar2 >> 0x1c == 0) {
            lVar23 = 4;
          }
          else {
            lVar23 = 5;
          }
          bVar5 = SCARRY8(lVar10,lVar23);
          lVar10 = lVar10 + lVar23;
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0xcf12c);
            (*pcVar4)();
          }
          lVar6 = lVar6 + -1;
          puVar17 = puVar17 + 1;
        } while (lVar6 != 0);
      }
      lVar6 = 4;
      if ((uVar1 & 0x1fffffff) >> 0x19 != 0) {
        lVar6 = 5;
      }
      lVar23 = 3;
      if (0x1fffff < uVar1 << 3) {
        lVar23 = lVar6;
      }
      if ((uVar1 & 0x1fffffff) >> 0xb == 0) {
        lVar23 = 2;
      }
      lVar6 = 1;
      if (0x7f < uVar1 << 3) {
        lVar6 = lVar23;
      }
      lVar23 = lVar10;
      func_0x0013afac();
      if (SCARRY8(lVar6,lVar23)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0xcf130);
        (*pcVar4)();
      }
      lVar24 = lVar6 + lVar23 + lVar10;
      if (SCARRY8(lVar6 + lVar23,lVar10)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0xcf134);
        (*pcVar4)();
      }
      FUN_000d4dcc();
      lStack_118 = lVar24;
      lStack_110 = lVar22;
      _swift_bridgeObjectRetain(puVar21);
      FUN_000d4084(&lStack_118,uVar1 << 3 | 2,lVar10,puVar21);
      func_0x000d4cac(&puStack_108);
      lVar10 = lStack_110;
      lVar6 = lStack_118;
      FUN_00023344(*(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98));
      _swift_bridgeObjectRelease(puVar21);
      *(long *)(unaff_x20 + 0x90) = lVar6;
      *(long *)(unaff_x20 + 0x98) = lVar10;
      goto LAB_000ceff4;
    }
  }
  func_0x000d4cac(&puStack_108);
LAB_000ceff4:
  *(undefined1 *)(unaff_x20 + 0x20) = 1;
  return;
}



/* Entry: 000cf134; end: 000cf1e7;  */

void FUN_000cf134(byte *param_1,undefined8 param_2,uint param_3,ulong param_4,long param_5)

{
  uint uVar1;
  code *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_1 == (byte *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xcf1e8);
    (*pcVar2)();
  }
  uVar5 = (ulong)param_3;
  pbVar3 = param_1;
  uVar9 = uVar5;
  if (0x7f < param_3) {
    do {
      param_1 = pbVar3 + 1;
      *pbVar3 = (byte)uVar9 | 0x80;
      uVar5 = uVar9 >> 7;
      uVar8 = uVar9 >> 0xe;
      pbVar3 = param_1;
      uVar9 = uVar5;
    } while (uVar8 != 0);
  }
  pbVar3 = param_1 + 1;
  *param_1 = (byte)uVar5;
  pbVar4 = pbVar3;
  uVar9 = param_4;
  if (0x7f < param_4) {
    do {
      pbVar3 = pbVar4 + 1;
      *pbVar4 = (byte)uVar9 | 0x80;
      param_4 = uVar9 >> 7;
      uVar5 = uVar9 >> 0xe;
      pbVar4 = pbVar3;
      uVar9 = param_4;
    } while (uVar5 != 0);
  }
  *pbVar3 = (byte)param_4;
  lVar6 = *(long *)(param_5 + 0x10);
  if (lVar6 != 0) {
    lVar7 = 0;
    do {
      pbVar3 = pbVar3 + 1;
      uVar1 = *(uint *)(param_5 + 0x20 + lVar7 * 4);
      uVar9 = (ulong)(int)uVar1;
      pbVar4 = pbVar3;
      if (0x7f < uVar1) {
        do {
          pbVar3 = pbVar4 + 1;
          *pbVar4 = (byte)uVar9 | 0x80;
          uVar5 = uVar9 >> 0xe;
          uVar9 = uVar9 >> 7;
          pbVar4 = pbVar3;
        } while (uVar5 != 0);
      }
      lVar7 = lVar7 + 1;
      *pbVar3 = (byte)uVar9;
    } while (lVar7 != lVar6);
  }
  return;
}



/* Entry: 000cf1e8; end: 000cf427;  */

void FUN_000cf1e8(undefined8 param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar7;
  long unaff_x21;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 auStack_130 [8];
  long lStack_128;
  code *pcStack_120;
  undefined8 *puStack_118;
  long lStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_58;
  
  lVar3 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar9 + 0x40));
  puVar10 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar8 = (long)puVar10 - extraout_x12;
  if (*(char *)(unaff_x20 + 0x21) == '\x02') {
    uStack_58 = 0;
    puVar4 = &uStack_58;
    lStack_110 = param_3;
    FUN_000cbc48();
    if (unaff_x21 == 0) {
      puStack_118 = puVar4;
      (**(code **)(lVar9 + 0x10))(lVar8,param_1,lVar3);
      lStack_128 = *(long *)(param_2 + -8);
      pcStack_120 = *(code **)(lStack_128 + 0x30);
      lVar5 = lVar8;
      (*pcStack_120)(lVar8,1,param_2);
      (**(code **)(lVar9 + 8))(lVar8,lVar3);
      if ((int)lVar5 == 1) {
        (**(code **)(lStack_110 + 0x10))(puVar10,param_2);
        (**(code **)(lStack_128 + 0x38))(puVar10,0,1,param_2);
        (**(code **)(lVar9 + 0x28))(param_1,puVar10,lVar3);
      }
      uVar7 = *(undefined8 *)(unaff_x20 + 0x68);
      uVar1 = *(undefined1 *)(unaff_x20 + 0x70);
      uStack_e8 = 1;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_b0 = 0;
      uStack_a8 = 1;
      uStack_80 = 0xf000000000000000;
      uStack_88 = 0;
      uStack_70 = 0xf000000000000000;
      uStack_78 = 0;
      puStack_108 = puStack_118;
      uStack_100 = uStack_58;
      puStack_f8 = puStack_118;
      uStack_f0 = 0;
      func_0x000d4d64(unaff_x20 + 0x30,&uStack_d8);
      uStack_90 = *(undefined8 *)(unaff_x20 + 0x78);
      uVar6 = param_1;
      uStack_a0 = uVar7;
      uStack_98 = uVar1;
      (*pcStack_120)(param_1,1,param_2);
      if ((int)uVar6 == 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xcf428);
        (*pcVar2)();
      }
      FUN_000cf428(param_1,param_2,lStack_110);
      func_0x000d4cac(&puStack_108);
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
    }
  }
  return;
}



/* Entry: 000cf428; end: 000cf5cb;  */

void FUN_000cf428(undefined1 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 *unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  undefined1 auStack_70 [32];
  
  lVar1 = *(long *)(unaff_x20 + 0x78) + -1;
  if (SBORROW8(*(long *)(unaff_x20 + 0x78),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xcf57c);
    (*pcVar2)();
  }
  *(long *)(unaff_x20 + 0x78) = lVar1;
  if (lVar1 < 0) {
    uVar3 = 6;
  }
  else {
    param_1 = unaff_x20;
    (**(code **)(param_3 + 0x40))();
    if (unaff_x21 != 0) {
      return;
    }
    lVar1 = *(long *)(unaff_x20 + 0x78) + 1;
    if (SCARRY8(*(long *)(unaff_x20 + 0x78),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xcf580);
      (*pcVar2)();
    }
    *(long *)(unaff_x20 + 0x78) = lVar1;
    if (*(long *)(unaff_x20 + 0x68) < lVar1) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                ("Fatal error",0xb,2,0xd00000000000003b,0x80000000008b8ab0,
                 "SwiftProtobuf/BinaryDecoder.swift",0x21,2,0x5e,0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xcf5cc);
      (*pcVar2)();
    }
    if (*(long *)(unaff_x20 + 8) == 0) {
      uVar5 = *(ulong *)(unaff_x20 + 0x88);
      if (0xe < uVar5 >> 0x3c) {
        return;
      }
      uVar4 = *(undefined8 *)(unaff_x20 + 0x80);
      pcVar6 = *(code **)(param_3 + 0x38);
      func_0x00023304(uVar4,uVar5);
      pcVar2 = (code *)auStack_70;
      (*pcVar6)(pcVar2,param_2,param_3);
      __s10Foundation4DataV6appendyyACF(uVar4,uVar5);
      (*pcVar2)(auStack_70,0);
      FUN_00023344(uVar4,uVar5);
      return;
    }
    uVar3 = 0;
  }
  FUN_000d4ba8();
  _swift_allocError(&UNK_009ab010,param_1,0,0);
  *param_1 = uVar3;
  _swift_willThrow();
  return;
}



/* Entry: 000cf5cc; end: 000cf79b;  */

/* WARNING: Removing unreachable block (ram,0x000cf70c) */

void FUN_000cf5cc(undefined8 param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar3;
  long unaff_x21;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_120 [8];
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_58;
  
  lVar6 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar4 = (long)puVar5 - extraout_x12;
  if (*(char *)(unaff_x20 + 0x21) == '\x02') {
    uStack_58 = 0;
    puVar2 = &uStack_58;
    FUN_000cbc48();
    if (unaff_x21 == 0) {
      (**(code **)(param_3 + 0x10))(lVar4,param_2,param_3);
      uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
      uVar1 = *(undefined1 *)(unaff_x20 + 0x70);
      uStack_e8 = 1;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_b0 = 0;
      uStack_a8 = 1;
      uStack_80 = 0xf000000000000000;
      uStack_88 = 0;
      uStack_70 = 0xf000000000000000;
      uStack_78 = 0;
      uStack_100 = uStack_58;
      uStack_f0 = 0;
      puStack_108 = puVar2;
      puStack_f8 = puVar2;
      func_0x000d4d64(unaff_x20 + 0x30,&uStack_d8);
      uStack_90 = *(undefined8 *)(unaff_x20 + 0x78);
      uStack_a0 = uVar3;
      uStack_98 = uVar1;
      FUN_000cf428(lVar4,param_2,param_3);
      (**(code **)(lVar6 + 0x10))(puVar5,lVar4,param_2);
      uVar3 = 0;
      __sSaMa(0,param_2);
      __sSa6appendyyxnF(puVar5,uVar3);
      (**(code **)(lVar6 + 8))(lVar4,param_2);
      func_0x000d4cac(&puStack_108);
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
    }
  }
  return;
}



/* Entry: 000cf79c; end: 000cf963;  */

void FUN_000cf79c(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_70;
  
  lVar2 = 0;
  __sSqMa();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&uStack_70 - extraout_x8;
  lVar7 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar7 + 0x40));
  uVar8 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_70 = param_1;
  (**(code **)(lVar6 + 0x10))(lVar9,param_1,lVar2);
  pcVar5 = *(code **)(lVar7 + 0x30);
  lVar3 = lVar9;
  (*pcVar5)(lVar9,1,param_2);
  if ((int)lVar3 == 1) {
    (**(code **)(param_3 + 0x10))(uVar8,param_2,param_3);
    lVar3 = lVar9;
    (*pcVar5)(lVar9,1,param_2);
    if ((int)lVar3 != 1) {
      (**(code **)(lVar6 + 8))(lVar9,lVar2);
    }
  }
  else {
    (**(code **)(lVar7 + 0x20))(uVar8,lVar9,param_2);
  }
  uVar4 = uVar8;
  FUN_000cf964(uVar8,*(undefined8 *)(unaff_x20 + 0x28),param_2,param_3);
  uVar1 = uStack_70;
  if ((unaff_x21 == 0) && ((uVar4 & 1) != 0)) {
    (**(code **)(lVar6 + 8))(uStack_70,lVar2);
    (**(code **)(lVar7 + 0x20))(uVar1,uVar8,param_2);
    (**(code **)(lVar7 + 0x38))(uVar1,0,1,param_2);
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
  }
  else {
    (**(code **)(lVar7 + 8))(uVar8,param_2);
  }
  return;
}



/* Entry: 000cf964; end: 000cfbf7;  */

uint FUN_000cf964(undefined1 *param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  uint extraout_w8;
  uint uVar7;
  uint extraout_w8_00;
  long lVar8;
  long lVar9;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar10;
  undefined1 auStack_128 [32];
  undefined1 auStack_108 [8];
  long lStack_100;
  undefined1 uStack_e8;
  char cStack_e7;
  long lStack_e0;
  long lStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_88;
  ulong uStack_80;
  
  if (*(char *)((long)unaff_x20 + 0x21) == '\x03') {
    lVar8 = unaff_x20[0xf];
    lVar1 = lVar8 + -1;
    if (SBORROW8(lVar8,1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0xcfba0);
      (*pcVar5)();
    }
    unaff_x20[0xf] = lVar1;
    if (lVar1 < 0) {
      FUN_000d4ba8();
      _swift_allocError(&UNK_009ab010,param_1,0,0);
      *param_1 = 6;
      _swift_willThrow();
      uVar7 = extraout_w8;
    }
    else {
      func_0x000d4c78();
      uStack_a8 = 0;
      uStack_e8 = 1;
      lStack_b0 = param_2;
      FUN_00023344(uStack_88,uStack_80);
      uStack_80 = 0xf000000000000000;
      uStack_88 = 0;
      puVar6 = auStack_108;
      (**(code **)(param_4 + 0x40))(puVar6,&UNK_009aad60,&PTR_DAT_009aada8,param_3,param_4);
      uVar4 = uStack_80;
      uVar3 = uStack_88;
      if (unaff_x21 == 0) {
        if ((lStack_e0 == param_2) && (cStack_e7 == '\x04')) {
          if (uStack_80 >> 0x3c < 0xf) {
            pcVar10 = *(code **)(param_4 + 0x38);
            func_0x00023304(uStack_88,uStack_80);
            pcVar5 = (code *)auStack_128;
            (*pcVar10)(pcVar5,param_3,param_4);
            __s10Foundation4DataV6appendyyACF(uVar3,uVar4);
            (*pcVar5)(auStack_128,0);
            FUN_00023344(uVar3,uVar4);
          }
          lVar9 = unaff_x20[1];
          lVar2 = lVar9 - lStack_100;
          if (SBORROW8(lVar9,lStack_100)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0xcfba4);
            (*pcVar5)();
          }
          if (SBORROW8(lVar9,lVar2)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0xcfba8);
            (*pcVar5)();
          }
          *unaff_x20 = *unaff_x20 + lVar2;
          unaff_x20[1] = lVar9 - lVar2;
          if (SCARRY8(lVar1,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0xcfbac);
            (*pcVar5)();
          }
          unaff_x20[0xf] = lVar8;
          if (unaff_x20[0xd] < lVar8) {
            __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                      ("Fatal error",0xb,2,0xd00000000000003b,0x80000000008b8ab0,
                       "SwiftProtobuf/BinaryDecoder.swift",0x21,2,0x5e,0);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0xcfbf8);
            (*pcVar5)();
          }
          func_0x000d4cac(auStack_108);
          uVar7 = 1;
          goto LAB_000cfb78;
        }
        FUN_000d4ba8();
        _swift_allocError(&UNK_009ab010,puVar6,0,0);
        *puVar6 = 1;
        _swift_willThrow();
      }
      func_0x000d4cac(auStack_108);
      uVar7 = extraout_w8_00;
    }
  }
  else {
    uVar7 = 0;
  }
LAB_000cfb78:
  return uVar7 & 1;
}



/* Entry: 000cfbf8; end: 000cfd2f;  */

void FUN_000cfbf8(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long unaff_x21;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_2 + -8);
  lVar3 = param_2;
  lVar4 = param_3;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar5 = (long)puVar6 - extraout_x12;
  (**(code **)(lVar4 + 0x10))(uVar5,lVar3,lVar4);
  uVar1 = uVar5;
  FUN_000cf964(uVar5,*(undefined8 *)(unaff_x20 + 0x28),param_2,param_3);
  if ((unaff_x21 == 0) && ((uVar1 & 1) != 0)) {
    (**(code **)(lVar7 + 0x10))(puVar6,uVar5,param_2);
    uVar2 = 0;
    __sSaMa(0,param_2);
    __sSa6appendyyxnF(puVar6,uVar2);
    (**(code **)(lVar7 + 8))(uVar5,param_2);
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
  }
  else {
    (**(code **)(lVar7 + 8))(uVar5,param_2);
  }
  return;
}



/* Entry: 000cfd30; end: 000d060f;  */

/* WARNING: Removing unreachable block (ram,0x000d0604) */
/* WARNING: Removing unreachable block (ram,0x000d01a0) */

void FUN_000cfd30(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5
                 )

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar14;
  ulong uVar15;
  ulong *puVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar17;
  long extraout_x13;
  ulong uVar18;
  undefined8 extraout_x14;
  undefined1 uVar19;
  long unaff_x20;
  long unaff_x21;
  code *pcVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  long lStack_1b0;
  code *pcStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined1 *puStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  long lStack_178;
  undefined8 uStack_170;
  ulong *puStack_108;
  ulong uStack_100;
  ulong *puStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_58;
  
  lVar10 = *(long *)(param_4 + 8);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)&lStack_1b0 - extraout_x8;
  lVar11 = *(long *)(param_5 + 8);
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar11,param_3,&UNK_008441f0,&UNK_00844200);
  lVar5 = 0;
  __sSqMa(0,lVar4);
  lVar22 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar22 + 0x40));
  lVar14 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar25 = (undefined1 *)((lVar14 - extraout_x12) - extraout_x12_00);
  lVar6 = 0;
  __sSqMa(0,lVar3);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar24 = puVar25 + (-extraout_x12_01 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  if (*(char *)(unaff_x20 + 0x21) == '\x02') {
    lStack_178 = lVar14 - extraout_x12;
    uStack_170 = extraout_x14;
    (**(code **)(lVar12 + 0x38))(puVar24,1,1,lVar3);
    lVar23 = *(long *)(lVar4 + -8);
    pcVar20 = *(code **)(lVar23 + 0x38);
    (*pcVar20)(puVar25,1,1,lVar4);
    uStack_58 = 0;
    puVar7 = &uStack_58;
    FUN_000cbc48();
    uVar18 = uStack_58;
    if (unaff_x21 == 0) {
      uVar21 = *(undefined8 *)(unaff_x20 + 0x68);
      uVar19 = *(undefined1 *)(unaff_x20 + 0x70);
      uStack_e8 = 1;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_b0 = 0;
      uStack_a8 = 1;
      uStack_80 = 0xf000000000000000;
      uStack_88 = 0;
      uStack_70 = 0xf000000000000000;
      uStack_78 = 0;
      uStack_100 = uStack_58;
      uStack_f0 = 0;
      puVar8 = (undefined1 *)(unaff_x20 + 0x30);
      lStack_1b0 = lVar23;
      pcStack_1a8 = pcVar20;
      lStack_1a0 = lVar3;
      lStack_198 = lVar4;
      puStack_190 = puVar24;
      lStack_188 = lVar5;
      puStack_180 = puVar25;
      puStack_108 = puVar7;
      puStack_f8 = puVar7;
      func_0x000d4d64(puVar8,&uStack_d8);
      lVar4 = lStack_188;
      puVar24 = puStack_190;
      lVar3 = lStack_198;
      uStack_90 = *(undefined8 *)(unaff_x20 + 0x78);
      uStack_a0 = uVar21;
      uStack_98 = uVar19;
      puStack_f8 = puVar7;
      uVar21 = uStack_170;
      puVar7 = puStack_108;
      uVar15 = uStack_100;
joined_r0x000d0058:
      do {
        puStack_108 = puVar7;
        if ((long)uVar18 < 1) {
          uStack_f0 = 0;
          uStack_100 = uVar15;
          if (uVar18 == 0) {
            (**(code **)(extraout_x13 + 0x10))(uVar21,puVar24,lVar6);
            lVar5 = lStack_1a0;
            pcVar20 = *(code **)(lVar12 + 0x30);
            uVar9 = uVar21;
            (*pcVar20)(uVar21,1,lStack_1a0);
            if ((int)uVar9 == 1) {
              (**(code **)(lVar10 + 0x18))(lVar13,param_2);
              uVar9 = uVar21;
              (*pcVar20)(uVar21,1,lStack_1a0);
              if ((int)uVar9 != 1) {
                (**(code **)(extraout_x13 + 8))(uVar21,lVar6);
              }
            }
            else {
              (**(code **)(lVar12 + 0x20))(lVar13,uVar21,lVar5);
            }
            (**(code **)(lVar22 + 0x10))(lVar14,puStack_180,lVar4);
            lVar5 = lStack_1b0;
            pcVar20 = *(code **)(lStack_1b0 + 0x30);
            lVar23 = lVar14;
            (*pcVar20)(lVar14,1,lVar3);
            lVar12 = lStack_178;
            if ((int)lVar23 == 1) {
              (**(code **)(lVar11 + 0x18))(lStack_178,param_3);
              lVar5 = lVar14;
              (*pcVar20)(lVar14,1,lVar3);
              if ((int)lVar5 != 1) {
                (**(code **)(lVar22 + 8))(lVar14,lVar4);
              }
            }
            else {
              (**(code **)(lVar5 + 0x20))(lStack_178,lVar14,lVar3);
            }
            (*pcStack_1a8)(lVar12,0,1,lVar3);
            lVar5 = lStack_1a0;
            _swift_getAssociatedConformanceWitness
                      (lVar10,param_2,lStack_1a0,&UNK_008441f0,&UNK_008441f8);
            uVar21 = 0;
            __sSDMa(0,lVar5,lVar3,lVar10);
            __sSDyq_Sgxcis(lVar12,lVar13,uVar21);
            (**(code **)(lVar22 + 8))(puStack_180,lVar4);
            (**(code **)(extraout_x13 + 8))(puVar24,lVar6);
            func_0x000d4cac(&puStack_108);
            *(undefined1 *)(unaff_x20 + 0x20) = 1;
            return;
          }
          FUN_000d4ba8();
          _swift_allocError(&UNK_009ab010,puVar8,0,0);
          *puVar8 = 0;
LAB_000d03a0:
          _swift_willThrow();
          (**(code **)(lVar22 + 8))(puStack_180,lVar4);
          (**(code **)(extraout_x13 + 8))(puVar24,lVar6);
          func_0x000d4cac(&puStack_108);
          return;
        }
        uStack_f0 = 0;
        uVar17 = (ulong)(char)*puStack_f8;
        uStack_100 = uVar18 - 1;
        puStack_108 = (ulong *)((long)puStack_f8 + 1);
        if ((long)uVar17 < 0) {
          puStack_108 = puVar7;
          if (1 < uVar18) {
            uVar17 = uVar17 & 0x7f;
            puVar16 = (ulong *)((long)puStack_f8 + 2);
            uVar18 = 7;
            while (uVar17 = ((ulong)*(byte *)((long)puVar16 + -1) & 0x7f) << (uVar18 & 0x3f) |
                            uVar17, (char)*(byte *)((long)puVar16 + -1) < '\0') {
              if (uStack_100 < 2) goto LAB_000d0374;
              puVar16 = (ulong *)((long)puVar16 + 1);
              uStack_100 = uStack_100 - 1;
              bVar1 = 0x38 < uVar18;
              uVar18 = uVar18 + 7;
              if (bVar1) goto LAB_000d0374;
            }
            uStack_100 = uStack_100 - 1;
            puStack_108 = puVar16;
            uVar15 = uStack_100;
            if (uVar17 < 0xffffffff) goto LAB_000d0108;
          }
LAB_000d0374:
          uStack_100 = uVar15;
          FUN_000d4ba8();
          _swift_allocError(&UNK_009ab010,puVar8,0,0);
          *puVar8 = 3;
          goto LAB_000d03a0;
        }
LAB_000d0108:
        uVar2 = (uint)uVar17 & 7;
        uVar15 = uStack_100;
        if (uVar17 < 8 || 5 < uVar2) goto LAB_000d0374;
        uStack_e0 = uVar17 >> 3;
        if (uVar2 == 4) {
          uStack_e8 = CONCAT11(4,(undefined1)uStack_e8);
          goto LAB_000d0374;
        }
        uStack_e8 = CONCAT11((char)uVar2,(undefined1)uStack_e8);
        uStack_170 = uVar21;
        if (uStack_e0 == 2) {
          pcVar20 = *(code **)(lVar11 + 0x20);
          lVar5 = -0x20;
          puVar8 = puStack_180;
LAB_000d018c:
          (*pcVar20)(puVar8,&puStack_108,&UNK_009aad60,&PTR_DAT_009aada8,
                     *(undefined8 *)(&stack0xfffffffffffffef0 + lVar5));
          puStack_f8 = puStack_108;
          uVar21 = uStack_170;
          puVar7 = puStack_108;
          uVar15 = uStack_100;
          uVar18 = uStack_100;
          goto joined_r0x000d0058;
        }
        if (uStack_e0 == 1) {
          pcVar20 = *(code **)(lVar10 + 0x20);
          lVar5 = -0x10;
          puVar8 = puVar24;
          goto LAB_000d018c;
        }
        uVar18 = uStack_100 + ((long)puStack_108 - (long)puStack_f8);
        if (SCARRY8(uStack_100,(long)puStack_108 - (long)puStack_f8)) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0xd0610);
          (*pcVar20)();
        }
        uStack_100 = uVar18 - 1;
        puVar7 = puStack_f8;
        if ((long)uVar18 < 1) {
          uVar19 = 1;
LAB_000d05d8:
          uStack_100 = uVar18;
          puStack_108 = puVar7;
          FUN_000d4ba8();
          _swift_allocError(&UNK_009ab010,puVar8,0,0);
          *puVar8 = uVar19;
          goto LAB_000d03a0;
        }
        puVar8 = (undefined1 *)(long)(char)*puStack_f8;
        puStack_108 = (ulong *)((long)puStack_f8 + 1);
        if ((long)puVar8 < 0) {
          puStack_108 = puStack_f8;
          if (uVar18 != 1) {
            puVar8 = (undefined1 *)((ulong)puVar8 & 0x7f);
            puStack_108 = (ulong *)((long)puStack_f8 + 2);
            uVar15 = 7;
            while (puVar8 = (undefined1 *)
                            (((ulong)*(byte *)((long)puStack_108 + -1) & 0x7f) << (uVar15 & 0x3f) |
                            (ulong)puVar8), (char)*(byte *)((long)puStack_108 + -1) < '\0') {
              uVar19 = 3;
              if (uStack_100 < 2) goto LAB_000d05d8;
              puStack_108 = (ulong *)((long)puStack_108 + 1);
              uStack_100 = uStack_100 - 1;
              bVar1 = 0x38 < uVar15;
              uVar15 = uVar15 + 7;
              if (bVar1) goto LAB_000d05d8;
            }
            uStack_100 = uStack_100 - 1;
            uVar18 = uStack_100;
            if (puVar8 < (undefined1 *)0xffffffff) goto LAB_000d022c;
          }
LAB_000d05cc:
          uStack_100 = uVar18;
          uVar19 = 3;
          puVar7 = puStack_108;
          uVar18 = uStack_100;
          goto LAB_000d05d8;
        }
LAB_000d022c:
        uVar2 = (uint)puVar8 & 7;
        uVar18 = uStack_100;
        if (puVar8 < &MACH_HEADER.cpusubtype || 5 < uVar2) goto LAB_000d05cc;
        uStack_e8 = CONCAT11((char)uVar2,(undefined1)uStack_e8);
        uStack_e0 = (ulong)puVar8 >> 3;
        FUN_000d3828();
        puStack_f8 = puStack_108;
        uVar21 = uStack_170;
        puVar7 = puStack_108;
        uVar15 = uStack_100;
        uVar18 = uStack_100;
      } while( true );
    }
    (**(code **)(lVar22 + 8))(puVar25,lVar5);
    (**(code **)(extraout_x13 + 8))(puVar24,lVar6);
  }
  return;
}



/* Entry: 000d0610; end: 000d1293;  */

/* WARNING: Removing unreachable block (ram,0x000d0e44) */
/* WARNING: Removing unreachable block (ram,0x000d0ad4) */
/* WARNING: Removing unreachable block (ram,0x000d11d0) */

void FUN_000d0610(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long extraout_x8;
  undefined1 *puVar14;
  long lVar15;
  long extraout_x8_00;
  long lVar16;
  long lVar17;
  long extraout_x8_01;
  undefined1 *puVar18;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  ulong uVar26;
  undefined1 uVar27;
  long unaff_x20;
  long unaff_x21;
  code *pcVar28;
  code *pcVar29;
  code *pcVar30;
  undefined1 *puVar31;
  long lVar32;
  undefined8 uVar33;
  long lVar34;
  long lVar35;
  undefined1 auStack_1e0 [8];
  undefined1 *puStack_1d8;
  ulong *puStack_108;
  ulong uStack_100;
  ulong *puStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_58;
  
  lVar12 = *(long *)(param_4 + 8);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness();
  lVar13 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = auStack_1e0 + -extraout_x8;
  lVar15 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar15 + 0x40));
  lVar16 = (long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0xff;
  __sSqMa(0xff,param_3);
  lVar7 = 0;
  _swift_getTupleTypeMetadata2(0,lVar6,lVar6,0,0);
  lVar17 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar18 = (undefined1 *)(lVar16 - extraout_x8_01);
  lVar34 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar34 + 0x40));
  lVar19 = (long)puVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar20 = lVar19 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar21 = lVar20 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar22 = uVar21 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar35 = lVar22 - extraout_x12_02;
  lVar8 = 0;
  __sSqMa(0,lVar5);
  lVar32 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar32 + 0x40));
  lVar23 = lVar35 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar31 = (undefined1 *)(lVar23 - extraout_x12_03);
  if (*(char *)(unaff_x20 + 0x21) == '\x02') {
    (**(code **)(lVar13 + 0x38))(puVar31,1,1,lVar5);
    pcVar28 = *(code **)(lVar15 + 0x38);
    (*pcVar28)(lVar35,1,1,param_3);
    uStack_58 = 0;
    puVar9 = &uStack_58;
    FUN_000cbc48();
    uVar26 = uStack_58;
    if (unaff_x21 == 0) {
      uVar33 = *(undefined8 *)(unaff_x20 + 0x68);
      uVar27 = *(undefined1 *)(unaff_x20 + 0x70);
      uStack_e8 = 1;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_b0 = 0;
      uStack_a8 = 1;
      uStack_80 = 0xf000000000000000;
      uStack_88 = 0;
      uStack_70 = 0xf000000000000000;
      uStack_78 = 0;
      uStack_100 = uStack_58;
      uStack_f0 = 0;
      puVar10 = (undefined1 *)(unaff_x20 + 0x30);
      puStack_108 = puVar9;
      puStack_f8 = puVar9;
      func_0x000d4d64(puVar10,&uStack_d8);
      uStack_90 = *(undefined8 *)(unaff_x20 + 0x78);
      uStack_a0 = uVar33;
      uStack_98 = uVar27;
      puVar4 = puStack_108;
      uVar24 = uStack_100;
joined_r0x000d09b4:
      puStack_f8 = puVar9;
      puStack_108 = puVar4;
      if ((long)uVar26 < 1) {
        uStack_f0 = 0;
        uStack_100 = uVar24;
        if (uVar26 == 0) {
          (**(code **)(lVar32 + 0x10))(lVar23,puVar31,lVar8);
          pcVar30 = *(code **)(lVar13 + 0x30);
          lVar7 = lVar23;
          (*pcVar30)(lVar23,1,lVar5);
          if ((int)lVar7 == 1) {
            (**(code **)(lVar12 + 0x18))(puVar14,param_2);
            lVar7 = lVar23;
            (*pcVar30)(lVar23,1,lVar5);
            if ((int)lVar7 != 1) {
              (**(code **)(lVar32 + 8))(lVar23,lVar8);
            }
          }
          else {
            (**(code **)(lVar13 + 0x20))(puVar14,lVar23,lVar5);
          }
          (**(code **)(lVar34 + 0x10))(lVar19,lVar35,lVar6);
          pcVar30 = *(code **)(lVar15 + 0x30);
          lVar7 = lVar19;
          (*pcVar30)(lVar19,1,param_3);
          if ((int)lVar7 == 1) {
            (**(code **)(param_5 + 0x18))(lVar20,param_3);
            lVar7 = lVar19;
            (*pcVar30)(lVar19,1,param_3);
            if ((int)lVar7 != 1) {
              (**(code **)(lVar34 + 8))(lVar19,lVar6);
            }
          }
          else {
            (**(code **)(lVar15 + 0x20))(lVar20,lVar19,param_3);
          }
          (*pcVar28)(lVar20,0,1,param_3);
          _swift_getAssociatedConformanceWitness(lVar12,param_2,lVar5,&UNK_008441f0,&UNK_008441f8);
          uVar33 = 0;
          __sSDMa(0,lVar5,param_3,lVar12);
          __sSDyq_Sgxcis(lVar20,puVar14,uVar33);
          (**(code **)(lVar34 + 8))(lVar35,lVar6);
          (**(code **)(lVar32 + 8))(puVar31,lVar8);
          func_0x000d4cac(&puStack_108);
          *(undefined1 *)(unaff_x20 + 0x20) = 1;
          return;
        }
        FUN_000d4ba8();
        _swift_allocError(&UNK_009ab010,puVar10,0,0);
        *puVar10 = 0;
LAB_000d0fc0:
        _swift_willThrow();
        pcVar28 = *(code **)(lVar34 + 8);
LAB_000d0fe8:
        (*pcVar28)(lVar35,lVar6);
        pcVar28 = *(code **)(lVar32 + 8);
        goto LAB_000d0ffc;
      }
      uStack_f0 = 0;
      uVar25 = (ulong)(char)*puStack_f8;
      uStack_100 = uVar26 - 1;
      puStack_108 = (ulong *)((long)puStack_f8 + 1);
      if ((long)uVar25 < 0) {
        puStack_108 = puVar4;
        if (1 < uVar26) {
          uVar25 = uVar25 & 0x7f;
          puVar9 = (ulong *)((long)puStack_f8 + 2);
          uVar26 = 7;
          while (uVar25 = ((ulong)*(byte *)((long)puVar9 + -1) & 0x7f) << (uVar26 & 0x3f) | uVar25,
                (char)*(byte *)((long)puVar9 + -1) < '\0') {
            if (uStack_100 < 2) goto LAB_000d0f9c;
            puVar9 = (ulong *)((long)puVar9 + 1);
            uStack_100 = uStack_100 - 1;
            bVar1 = 0x38 < uVar26;
            uVar26 = uVar26 + 7;
            if (bVar1) goto LAB_000d0f9c;
          }
          uStack_100 = uStack_100 - 1;
          puStack_108 = puVar9;
          uVar24 = uStack_100;
          if (uVar25 < 0xffffffff) goto LAB_000d0a60;
        }
LAB_000d0f9c:
        uStack_100 = uVar24;
        FUN_000d4ba8();
        _swift_allocError(&UNK_009ab010,puVar10,0,0);
        *puVar10 = 3;
        goto LAB_000d0fc0;
      }
LAB_000d0a60:
      uVar2 = (uint)uVar25 & 7;
      uVar24 = uStack_100;
      if (uVar25 < 8 || 5 < uVar2) goto LAB_000d0f9c;
      uStack_e0 = uVar25 >> 3;
      if (uVar2 == 4) {
        uStack_e8 = CONCAT11(4,(undefined1)uStack_e8);
        goto LAB_000d0f9c;
      }
      uStack_e8 = CONCAT11((char)uVar2,(undefined1)uStack_e8);
      if (uStack_e0 != 2) {
        if (uStack_e0 == 1) {
          puVar10 = puVar31;
          (**(code **)(lVar12 + 0x20))(puVar31,&puStack_108,&UNK_009aad60,&PTR_DAT_009aada8,param_2)
          ;
          puVar9 = puStack_108;
          puVar4 = puStack_108;
          uVar24 = uStack_100;
          uVar26 = uStack_100;
          goto joined_r0x000d09b4;
        }
        uVar26 = uStack_100 + ((long)puStack_108 - (long)puStack_f8);
        if (SCARRY8(uStack_100,(long)puStack_108 - (long)puStack_f8)) {
                    /* WARNING: Does not return */
          pcVar28 = (code *)SoftwareBreakpoint(1,0xd1294);
          (*pcVar28)();
        }
        uStack_100 = uVar26 - 1;
        puVar9 = puStack_f8;
        if ((long)uVar26 < 1) {
          uVar27 = 1;
        }
        else {
          puVar10 = (undefined1 *)(long)(char)*puStack_f8;
          puStack_108 = (ulong *)((long)puStack_f8 + 1);
          if ((long)puVar10 < 0) {
            puStack_108 = puStack_f8;
            if (uVar26 != 1) {
              puVar10 = (undefined1 *)((ulong)puVar10 & 0x7f);
              puStack_108 = (ulong *)((long)puStack_f8 + 2);
              uVar24 = 7;
              while (puVar10 = (undefined1 *)
                               (((ulong)*(byte *)((long)puStack_108 + -1) & 0x7f) << (uVar24 & 0x3f)
                               | (ulong)puVar10), (char)*(byte *)((long)puStack_108 + -1) < '\0') {
                uVar27 = 3;
                if (uStack_100 < 2) goto LAB_000d1214;
                puStack_108 = (ulong *)((long)puStack_108 + 1);
                uStack_100 = uStack_100 - 1;
                bVar1 = 0x38 < uVar24;
                uVar24 = uVar24 + 7;
                if (bVar1) goto LAB_000d1214;
              }
              uStack_100 = uStack_100 - 1;
              uVar26 = uStack_100;
              if (puVar10 < (undefined1 *)0xffffffff) goto LAB_000d0e14;
            }
          }
          else {
LAB_000d0e14:
            uVar2 = (uint)puVar10 & 7;
            uVar26 = uStack_100;
            if ((undefined1 *)((long)&MACH_HEADER.cputype + 3) < puVar10 && uVar2 < 6) {
              uStack_e8 = CONCAT11((char)uVar2,(undefined1)uStack_e8);
              uStack_e0 = (ulong)puVar10 >> 3;
              FUN_000d3828();
              puVar9 = puStack_108;
              puVar4 = puStack_108;
              uVar24 = uStack_100;
              uVar26 = uStack_100;
              goto joined_r0x000d09b4;
            }
          }
          uStack_100 = uVar26;
          uVar27 = 3;
          puVar9 = puStack_108;
          uVar26 = uStack_100;
        }
LAB_000d1214:
        uStack_100 = uVar26;
        puStack_108 = puVar9;
        FUN_000d4ba8();
        _swift_allocError(&UNK_009ab010,puVar10,0,0);
        *puVar10 = uVar27;
        _swift_willThrow();
        pcVar28 = *(code **)(lVar34 + 8);
        goto LAB_000d0fe8;
      }
      FUN_000ce4f0(lVar35,param_3,param_5);
      puStack_1d8 = puVar31;
      (*pcVar28)(lVar22,1,1,param_3);
      iVar3 = *(int *)(lVar7 + 0x30);
      pcVar30 = *(code **)(lVar34 + 0x10);
      (*pcVar30)(puVar18,lVar35,lVar6);
      (*pcVar30)(puVar18 + iVar3,lVar22,lVar6);
      pcVar29 = *(code **)(lVar15 + 0x30);
      puVar31 = puVar18;
      (*pcVar29)(puVar18,1,param_3);
      puVar10 = puVar18;
      if ((int)puVar31 != 1) {
        (*pcVar30)(uVar21,puVar18,lVar6);
        puVar31 = puVar18 + iVar3;
        (*pcVar29)(puVar31,1,param_3);
        if ((int)puVar31 == 1) {
          (**(code **)(lVar34 + 8))(lVar22,lVar6);
          (**(code **)(lVar15 + 8))(uVar21,param_3);
LAB_000d0cb8:
          (**(code **)(lVar17 + 8))(puVar18,lVar7);
          puVar31 = puStack_1d8;
          puVar9 = puStack_108;
          puVar4 = puStack_108;
          uVar24 = uStack_100;
          uVar26 = uStack_100;
        }
        else {
          (**(code **)(lVar15 + 0x20))(lVar16,puVar18 + iVar3,param_3);
          uVar11 = uVar21;
          __sSQ2eeoiySbx_xtFZTj(uVar21,lVar16,param_3,*(undefined8 *)(*(long *)(param_5 + 8) + 8));
          pcVar29 = *(code **)(lVar15 + 8);
          (*pcVar29)(lVar16,param_3);
          pcVar30 = *(code **)(lVar34 + 8);
          (*pcVar30)(lVar22,lVar6);
          (*pcVar29)(uVar21,param_3);
          (*pcVar30)(puVar18,lVar6);
          puVar31 = puStack_1d8;
          puVar9 = puStack_108;
          puVar4 = puStack_108;
          uVar24 = uStack_100;
          uVar26 = uStack_100;
          if (((uVar25 & 7) == 0) && (puVar9 = puStack_108, (uVar11 & 1) != 0)) goto LAB_000d126c;
        }
        goto joined_r0x000d09b4;
      }
      pcVar30 = *(code **)(lVar34 + 8);
      (*pcVar30)(lVar22,lVar6);
      puVar31 = puVar18 + iVar3;
      (*pcVar29)(puVar31,1,param_3);
      if ((int)puVar31 != 1) goto LAB_000d0cb8;
      (*pcVar30)(puVar18,lVar6);
      puVar31 = puStack_1d8;
      puVar9 = puStack_108;
      puVar4 = puStack_108;
      uVar24 = uStack_100;
      uVar26 = uStack_100;
      if ((uVar25 & 7) != 0) goto joined_r0x000d09b4;
LAB_000d126c:
      (*pcVar30)(lVar35,lVar6);
      pcVar28 = *(code **)(lVar32 + 8);
      puVar31 = puStack_1d8;
LAB_000d0ffc:
      (*pcVar28)(puVar31,lVar8);
      func_0x000d4cac(&puStack_108);
    }
    else {
      (**(code **)(lVar34 + 8))(lVar35,lVar6);
      (**(code **)(lVar32 + 8))(puVar31,lVar8);
    }
  }
  return;
}



/* Entry: 000d1294; end: 000d1adf;  */

void FUN_000d1294(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5
                 ,long param_6)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long extraout_x8;
  undefined1 *puVar10;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar15;
  long extraout_x13;
  ulong uVar16;
  undefined8 extraout_x14;
  undefined1 uVar17;
  long unaff_x20;
  long unaff_x21;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  code *pcVar23;
  undefined1 auStack_1a0 [8];
  code *pcStack_198;
  ulong *puStack_108;
  ulong uStack_100;
  ulong *puStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_58;
  
  lVar8 = *(long *)(param_4 + 8);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_1a0 + -extraout_x8;
  lVar4 = 0;
  __sSqMa(0,param_3);
  lVar18 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar18 + 0x40));
  lVar11 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar22 = (undefined1 *)(lVar12 - extraout_x12_00);
  lVar5 = 0;
  __sSqMa(0,lVar3);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar21 = puVar22 + (-extraout_x12_01 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  if (*(char *)(unaff_x20 + 0x21) == '\x02') {
    (**(code **)(lVar9 + 0x38))(puVar21,1,1,lVar3);
    lVar19 = *(long *)(param_3 + -8);
    pcVar23 = *(code **)(lVar19 + 0x38);
    (*pcVar23)(puVar22,1,1,param_3);
    uStack_58 = 0;
    puVar6 = &uStack_58;
    FUN_000cbc48();
    uVar16 = uStack_58;
    if (unaff_x21 == 0) {
      uVar20 = *(undefined8 *)(unaff_x20 + 0x68);
      uVar17 = *(undefined1 *)(unaff_x20 + 0x70);
      uStack_e8 = 1;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_b0 = 0;
      uStack_a8 = 1;
      uStack_80 = 0xf000000000000000;
      uStack_88 = 0;
      uStack_70 = 0xf000000000000000;
      uStack_78 = 0;
      uStack_100 = uStack_58;
      uStack_f0 = 0;
      puVar7 = (undefined1 *)(unaff_x20 + 0x30);
      pcStack_198 = pcVar23;
      puStack_108 = puVar6;
      puStack_f8 = puVar6;
      func_0x000d4d64(puVar7,&uStack_d8);
      uStack_90 = *(undefined8 *)(unaff_x20 + 0x78);
      uStack_a0 = uVar20;
      uStack_98 = uVar17;
      puStack_f8 = puVar6;
      puVar6 = puStack_108;
      uVar13 = uStack_100;
joined_r0x000d1564:
      do {
        puStack_108 = puVar6;
        if ((long)uVar16 < 1) {
          uStack_f0 = 0;
          uStack_100 = uVar13;
          if (uVar16 == 0) {
            (**(code **)(extraout_x13 + 0x10))(extraout_x14,puVar21,lVar5);
            pcVar23 = *(code **)(lVar9 + 0x30);
            uVar20 = extraout_x14;
            (*pcVar23)(extraout_x14,1,lVar3);
            if ((int)uVar20 == 1) {
              (**(code **)(lVar8 + 0x18))(puVar10,param_2);
              uVar20 = extraout_x14;
              (*pcVar23)(extraout_x14,1,lVar3);
              if ((int)uVar20 != 1) {
                (**(code **)(extraout_x13 + 8))(extraout_x14,lVar5);
              }
            }
            else {
              (**(code **)(lVar9 + 0x20))(puVar10,extraout_x14,lVar3);
            }
            (**(code **)(lVar18 + 0x10))(lVar11,puVar22,lVar4);
            pcVar23 = *(code **)(lVar19 + 0x30);
            lVar9 = lVar11;
            (*pcVar23)(lVar11,1,param_3);
            if ((int)lVar9 == 1) {
              (**(code **)(param_6 + 0x10))(lVar12,param_3);
              lVar9 = lVar11;
              (*pcVar23)(lVar11,1,param_3);
              if ((int)lVar9 != 1) {
                (**(code **)(lVar18 + 8))(lVar11,lVar4);
              }
            }
            else {
              (**(code **)(lVar19 + 0x20))(lVar12,lVar11,param_3);
            }
            (*pcStack_198)(lVar12,0,1,param_3);
            _swift_getAssociatedConformanceWitness(lVar8,param_2,lVar3,&UNK_008441f0,&UNK_008441f8);
            uVar20 = 0;
            __sSDMa(0,lVar3,param_3,lVar8);
            __sSDyq_Sgxcis(lVar12,puVar10,uVar20);
            (**(code **)(lVar18 + 8))(puVar22,lVar4);
            (**(code **)(extraout_x13 + 8))(puVar21,lVar5);
            func_0x000d4cac(&puStack_108);
            *(undefined1 *)(unaff_x20 + 0x20) = 1;
            return;
          }
          FUN_000d4ba8();
          _swift_allocError(&UNK_009ab010,puVar7,0,0);
          *puVar7 = 0;
LAB_000d18a8:
          _swift_willThrow();
          (**(code **)(lVar18 + 8))(puVar22,lVar4);
          (**(code **)(extraout_x13 + 8))(puVar21,lVar5);
          func_0x000d4cac(&puStack_108);
          return;
        }
        uStack_f0 = 0;
        uVar15 = (ulong)(char)*puStack_f8;
        uStack_100 = uVar16 - 1;
        puStack_108 = (ulong *)((long)puStack_f8 + 1);
        if ((long)uVar15 < 0) {
          puStack_108 = puVar6;
          if (1 < uVar16) {
            uVar15 = uVar15 & 0x7f;
            puVar14 = (ulong *)((long)puStack_f8 + 2);
            uVar16 = 7;
            while (uVar15 = ((ulong)*(byte *)((long)puVar14 + -1) & 0x7f) << (uVar16 & 0x3f) |
                            uVar15, (char)*(byte *)((long)puVar14 + -1) < '\0') {
              if (uStack_100 < 2) goto LAB_000d1880;
              puVar14 = (ulong *)((long)puVar14 + 1);
              uStack_100 = uStack_100 - 1;
              bVar1 = 0x38 < uVar16;
              uVar16 = uVar16 + 7;
              if (bVar1) goto LAB_000d1880;
            }
            uStack_100 = uStack_100 - 1;
            puStack_108 = puVar14;
            uVar13 = uStack_100;
            if (uVar15 < 0xffffffff) goto LAB_000d160c;
          }
LAB_000d1880:
          uStack_100 = uVar13;
          FUN_000d4ba8();
          _swift_allocError(&UNK_009ab010,puVar7,0,0);
          *puVar7 = 3;
          goto LAB_000d18a8;
        }
LAB_000d160c:
        uVar2 = (uint)uVar15 & 7;
        uVar13 = uStack_100;
        if (uVar15 < 8 || 5 < uVar2) goto LAB_000d1880;
        uStack_e0 = uVar15 >> 3;
        if (uVar2 == 4) {
          uStack_e8 = CONCAT11(4,(undefined1)uStack_e8);
          goto LAB_000d1880;
        }
        uStack_e8 = CONCAT11((char)uVar2,(undefined1)uStack_e8);
        if (uStack_e0 == 2) {
          puVar7 = puVar22;
          FUN_000cf1e8(puVar22,param_3,param_6);
          puStack_f8 = puStack_108;
          puVar6 = puStack_108;
          uVar13 = uStack_100;
          uVar16 = uStack_100;
          goto joined_r0x000d1564;
        }
        if (uStack_e0 != 1) {
          uVar16 = uStack_100 + ((long)puStack_108 - (long)puStack_f8);
          if (SCARRY8(uStack_100,(long)puStack_108 - (long)puStack_f8)) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0xd1ae0);
            (*pcVar23)();
          }
          uStack_100 = uVar16 - 1;
          puVar6 = puStack_f8;
          if ((long)uVar16 < 1) {
            uVar17 = 1;
          }
          else {
            puVar7 = (undefined1 *)(long)(char)*puStack_f8;
            puStack_108 = (ulong *)((long)puStack_f8 + 1);
            if ((long)puVar7 < 0) {
              puStack_108 = puStack_f8;
              if (uVar16 != 1) {
                puVar7 = (undefined1 *)((ulong)puVar7 & 0x7f);
                puStack_108 = (ulong *)((long)puStack_f8 + 2);
                uVar13 = 7;
                while (puVar7 = (undefined1 *)
                                (((ulong)*(byte *)((long)puStack_108 + -1) & 0x7f) <<
                                 (uVar13 & 0x3f) | (ulong)puVar7),
                      (char)*(byte *)((long)puStack_108 + -1) < '\0') {
                  uVar17 = 3;
                  if (uStack_100 < 2) goto LAB_000d1ab4;
                  puStack_108 = (ulong *)((long)puStack_108 + 1);
                  uStack_100 = uStack_100 - 1;
                  bVar1 = 0x38 < uVar13;
                  uVar13 = uVar13 + 7;
                  if (bVar1) goto LAB_000d1ab4;
                }
                uStack_100 = uStack_100 - 1;
                uVar16 = uStack_100;
                if (puVar7 < (undefined1 *)0xffffffff) goto LAB_000d172c;
              }
            }
            else {
LAB_000d172c:
              uVar2 = (uint)puVar7 & 7;
              uVar16 = uStack_100;
              if ((undefined1 *)((long)&MACH_HEADER.cputype + 3) < puVar7 && uVar2 < 6) {
                uStack_e8 = CONCAT11((char)uVar2,(undefined1)uStack_e8);
                uStack_e0 = (ulong)puVar7 >> 3;
                FUN_000d3828();
                puStack_f8 = puStack_108;
                puVar6 = puStack_108;
                uVar13 = uStack_100;
                uVar16 = uStack_100;
                goto joined_r0x000d1564;
              }
            }
            uStack_100 = uVar16;
            uVar17 = 3;
            puVar6 = puStack_108;
            uVar16 = uStack_100;
          }
LAB_000d1ab4:
          uStack_100 = uVar16;
          puStack_108 = puVar6;
          FUN_000d4ba8();
          _swift_allocError(&UNK_009ab010,puVar7,0,0);
          *puVar7 = uVar17;
          goto LAB_000d18a8;
        }
        puVar7 = puVar21;
        (**(code **)(lVar8 + 0x20))(puVar21,&puStack_108,&UNK_009aad60,&PTR_DAT_009aada8,param_2);
        puStack_f8 = puStack_108;
        puVar6 = puStack_108;
        uVar13 = uStack_100;
        uVar16 = uStack_100;
      } while( true );
    }
    (**(code **)(lVar18 + 8))(puVar22,lVar4);
    (**(code **)(extraout_x13 + 8))(puVar21,lVar5);
  }
  return;
}



/* Entry: 000d1ae0; end: 000d1c53;  */

void FUN_000d1ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [40];
  
  lVar3 = *(long *)(unaff_x20 + 0x48);
  if (lVar3 == 0) {
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    lVar4 = *(long *)(unaff_x20 + 0x50);
    uStack_b8 = param_1;
    FUN_0001393c(unaff_x20 + 0x30,lVar3);
    lVar2 = *(long *)(lVar3 + -8);
    (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar2 + 0x40));
    (**(code **)(lVar2 + 0x10))(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(lVar4 + 8))(&uStack_b0,param_2,param_3,param_4,lVar3,lVar4);
    (**(code **)(lVar2 + 8))(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
    if (lStack_98 != 0) {
      FUN_000d4db4(&uStack_b0,auStack_88);
      pcVar1 = (code *)&uStack_b0;
      FUN_000d48b4(pcVar1,param_4);
      FUN_000d1c54(param_4);
      (*pcVar1)(&uStack_b0,0);
      FUN_00011670(auStack_88);
      return;
    }
  }
  FUN_000d4be8(&uStack_b0,0xaedb68,&UNK_007d7b30);
  return;
}



/* Entry: 000d1c54; end: 000d1dff;  */

void FUN_000d1c54(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long unaff_x21;
  long lVar4;
  long lVar5;
  undefined1 auStack_78 [24];
  long lStack_60;
  
  func_0x000d4cd8(param_1,auStack_78,0xaedb70,&UNK_007d8040);
  lVar4 = lStack_60;
  func_0x000d4be8(auStack_78,0xaedb70,&UNK_007d8040);
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x18);
    lVar4 = *(long *)(param_3 + 0x20);
    FUN_0001393c(param_3,uVar1);
    (**(code **)(lVar4 + 0x20))(auStack_78,param_2,&UNK_009aad60,&PTR_DAT_009aada8,uVar1,lVar4);
    if (unaff_x21 != 0) {
      return;
    }
    func_0x000d4c28(auStack_78,param_1);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xd1e00);
      (*pcVar2)();
    }
    lVar5 = *(long *)(param_1 + 0x20);
    FUN_000115f8(param_1,lVar4);
    (**(code **)(lVar5 + 0x28))(param_2,&UNK_009aad60,&PTR_DAT_009aada8,lVar4,lVar5);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    func_0x000d4cd8(param_1,auStack_78,0xaedb70,&UNK_007d8040);
    puVar3 = auStack_78;
    func_0x000d4be8(puVar3,0xaedb70,&UNK_007d8040);
    if (lStack_60 == 0) {
      FUN_000d4ba8();
      _swift_allocError(&UNK_009ab010,puVar3,0,0);
      *puVar3 = 5;
      _swift_willThrow();
    }
  }
  return;
}



/* Entry: 000d1e00; end: 000d2353;  */

/* WARNING: Removing unreachable block (ram,0x000d20a0) */
/* WARNING: Removing unreachable block (ram,0x000d2204) */

void FUN_000d1e00(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 **ppuVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  long *unaff_x20;
  long unaff_x21;
  long lVar8;
  long lVar9;
  undefined1 *puStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined1 auStack_b0 [32];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  ppuVar2 = &puStack_160;
  puVar3 = param_1;
  uVar5 = param_2;
  FUN_000cb0e8();
  puStack_158 = param_1;
  if (unaff_x21 == 0) {
    while (((uint)uVar5 & 0xff) != 1) {
      if ((puVar3 == (undefined8 *)((long)&MACH_HEADER.magic + 1)) &&
         (*(char *)((long)unaff_x20 + 0x21) == '\x03')) {
        lVar6 = unaff_x20[0xf];
        lVar9 = lVar6 + -1;
        if (SBORROW8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0xd22f0);
          (*pcVar1)();
        }
        unaff_x20[0xf] = lVar9;
        if (lVar9 < 0) {
          FUN_000d4ba8();
          _swift_allocError(&UNK_009ab010,puVar3,0,0);
          *(undefined1 *)puVar3 = 6;
          _swift_willThrow();
          return;
        }
        func_0x000d4c78();
        uStack_f8 = 1;
        uStack_f0 = 0;
        uStack_130 = 1;
        puVar3 = param_1;
        uVar5 = param_2;
        FUN_000d2354(param_1,param_2,param_3);
        if (((ulong)puVar3 & 0xff) == 0) {
          lVar7 = unaff_x20[1];
          lVar8 = lVar7 - lStack_148;
          if (SBORROW8(lVar7,lStack_148)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0xd22f8);
            (*pcVar1)();
          }
          if (SBORROW8(lVar7,lVar8)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0xd22fc);
            (*pcVar1)();
          }
          *unaff_x20 = *unaff_x20 + lVar8;
          unaff_x20[1] = lVar7 - lVar8;
          *(undefined1 *)(unaff_x20 + 4) = 1;
        }
        else if (((uint)puVar3 & 0xff) != 1) {
          FUN_000d4ba8();
          _swift_allocError(&UNK_009ab010,puVar3,0,0);
          *(undefined1 *)puVar3 = 3;
          _swift_willThrow();
          func_0x000d4cac(&uStack_150);
          return;
        }
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0xd22f4);
          (*pcVar1)();
        }
        unaff_x20[0xf] = lVar6;
        if (unaff_x20[0xd] < lVar6) {
          *(undefined4 *)((long)ppuVar2 + -8) = 0;
          *(undefined8 *)((long)ppuVar2 + -0x10) = 0x5e;
          __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                    ("Fatal error",0xb,2,0xd00000000000003b,0x80000000008b8ab0,
                     "SwiftProtobuf/BinaryDecoder.swift",0x21,2);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0xd2354);
          (*pcVar1)();
        }
        puVar3 = &uStack_150;
        func_0x000d4cac();
      }
      else if (*(char *)((long)unaff_x20 + 0x21) == '\x02') {
        lVar9 = unaff_x20[9];
        if (lVar9 == 0) {
          uStack_70 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          lStack_78 = 0;
          uStack_80 = 0;
        }
        else {
          lVar7 = unaff_x20[10];
          FUN_0001393c(unaff_x20 + 6,lVar9);
          lVar8 = *(long *)(lVar9 + -8);
          puStack_160 = (undefined1 *)ppuVar2;
          (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
          lVar6 = (long)ppuVar2 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
          (**(code **)(lVar8 + 0x10))(lVar6);
          (**(code **)(lVar7 + 8))(&uStack_90,param_2,param_3,puVar3,lVar9,lVar7);
          param_1 = puStack_158;
          (**(code **)(lVar8 + 8))(lVar6,lVar9);
          ppuVar2 = (undefined1 **)puStack_160;
          if (lStack_78 != 0) {
            FUN_000d4db4(&uStack_90,&uStack_150);
            pcVar1 = (code *)auStack_b0;
            FUN_000d48b4();
            func_0x000d4cd8(puVar3,&uStack_90,0xaedb70,&UNK_007d8040);
            lVar9 = lStack_78;
            func_0x000d4be8(&uStack_90,0xaedb70,&UNK_007d8040);
            if (lVar9 == 0) {
              lVar9 = CONCAT71(uStack_12f,uStack_130);
              FUN_0001393c(&uStack_150,uStack_138);
              (**(code **)(lVar9 + 0x20))(&uStack_90);
              func_0x000d4c28(&uStack_90,puVar3);
            }
            else {
              if (puVar3[3] == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0xd2300);
                (*pcVar1)();
              }
              lVar9 = puVar3[4];
              FUN_000115f8(puVar3,puVar3[3]);
              (**(code **)(lVar9 + 0x28))();
            }
            if ((char)unaff_x20[4] != '\x01') {
              puVar4 = auStack_b0;
              (*pcVar1)(puVar4,0);
              FUN_000d4ba8();
              _swift_allocError(&UNK_009ab010,puVar4,0,0);
              *puVar4 = 3;
              _swift_willThrow();
              FUN_00011670(&uStack_150);
              return;
            }
            func_0x000d4cd8(puVar3,&uStack_90,0xaedb70,&UNK_007d8040);
            lVar9 = lStack_78;
            puVar3 = &uStack_90;
            func_0x000d4be8(puVar3,0xaedb70,&UNK_007d8040);
            if (lVar9 == 0) {
              FUN_000d4ba8();
              _swift_allocError(&UNK_009ab010,puVar3,0,0);
              *(undefined1 *)puVar3 = 5;
              _swift_willThrow();
              (*pcVar1)(auStack_b0,0);
              FUN_00011670(&uStack_150);
              return;
            }
            uVar5 = 0;
            (*pcVar1)(auStack_b0);
            puVar3 = &uStack_150;
            FUN_00011670();
            param_1 = puStack_158;
            goto LAB_000d1e94;
          }
        }
        puVar3 = &uStack_90;
        uVar5 = 0xaedb68;
        func_0x000d4be8(puVar3,0xaedb68,&UNK_007d7b30);
      }
LAB_000d1e94:
      FUN_000cb0e8();
    }
  }
  return;
}



/* Entry: 000d2354; end: 000d35a3;  */

/* WARNING: Removing unreachable block (ram,0x000d349c) */
/* WARNING: Removing unreachable block (ram,0x000d2d9c) */
/* WARNING: Removing unreachable block (ram,0x000d2e90) */
/* WARNING: Removing unreachable block (ram,0x000d27f4) */
/* WARNING: Removing unreachable block (ram,0x000d2ef0) */
/* WARNING: Removing unreachable block (ram,0x000d34e0) */

void FUN_000d2354(undefined6 *param_1,code *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined6 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  uint uVar10;
  ulong uVar11;
  long extraout_x8;
  int iVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  long lVar20;
  char *pcVar21;
  long lVar22;
  undefined1 auStack_2a0 [8];
  code *pcStack_298;
  ulong uStack_290;
  code *pcStack_288;
  code *pcStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined8 uStack_258;
  undefined6 *puStack_250;
  code *pcStack_248;
  undefined1 uStack_23e;
  undefined1 uStack_23d;
  undefined1 uStack_23c;
  undefined1 uStack_23b;
  undefined1 uStack_23a;
  undefined1 uStack_239;
  undefined1 uStack_238;
  undefined1 uStack_237;
  undefined1 uStack_236;
  undefined1 uStack_235;
  undefined1 uStack_234;
  undefined1 uStack_233;
  undefined1 uStack_232;
  undefined1 uStack_231;
  undefined1 auStack_230 [32];
  undefined1 auStack_210 [24];
  long lStack_1f8;
  undefined1 auStack_1e0 [56];
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  undefined8 uStack_198;
  undefined6 uStack_170;
  undefined2 uStack_16a;
  uint6 uStack_168;
  byte bStack_162;
  undefined1 uStack_161;
  undefined1 *puStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [24];
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  puVar6 = param_1;
  pcVar4 = param_2;
  FUN_000cb0e8();
  if (unaff_x21 == 0) {
    lVar20 = 0;
    pcStack_248 = (code *)((ulong)pcStack_248 & 0xffffffff00000000);
    pcVar17 = (code *)0xf000000000000000;
    uStack_268 = 0xf000000000000000;
    uStack_270 = 0;
    pcStack_260 = param_2;
    uStack_258 = param_3;
    puStack_250 = param_1;
LAB_000d2420:
    do {
      if (((uint)pcVar4 & 0xff) == 1) goto LAB_000d321c;
      if (puVar6 != (undefined6 *)((long)&MACH_HEADER.magic + 2)) {
        if (puVar6 == (undefined6 *)((long)&MACH_HEADER.magic + 3)) {
          if (((ulong)pcStack_248 & 1) != 0) {
            if (*(char *)((long)unaff_x20 + 0x21) != '\x02') {
LAB_000d3250:
              FUN_000d4be8(&uStack_a0,0xaedb68,&UNK_007d7b30);
              FUN_00023344(lVar20,pcVar17);
              goto LAB_000d32fc;
            }
            if (unaff_x20[3] == 0) {
              pcVar21 = (char *)unaff_x20[2];
              lVar16 = unaff_x20[1] + (*unaff_x20 - (long)pcVar21);
              if (SCARRY8(unaff_x20[1],*unaff_x20 - (long)pcVar21)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0xd3570);
                (*pcVar4)();
              }
              *unaff_x20 = (long)pcVar21;
              unaff_x20[1] = lVar16;
              uVar11 = lVar16 - 1;
              if (lVar16 < 1) goto LAB_000d3284;
              puVar6 = (undefined6 *)(long)*pcVar21;
              if ((long)puVar6 < 0) {
                if (lVar16 != 1) {
                  puVar6 = (undefined6 *)((ulong)puVar6 & 0x7f);
                  pcVar21 = pcVar21 + 2;
                  uVar15 = 7;
                  while (puVar6 = (undefined6 *)
                                  (((ulong)(byte)pcVar21[-1] & 0x7f) << (uVar15 & 0x3f) |
                                  (ulong)puVar6), pcVar21[-1] < '\0') {
                    if (uVar11 < 2) goto LAB_000d31f4;
                    pcVar21 = pcVar21 + 1;
                    uVar11 = uVar11 - 1;
                    bVar5 = 0x38 < uVar15;
                    uVar15 = uVar15 + 7;
                    if (bVar5) goto LAB_000d31f4;
                  }
                  *unaff_x20 = (long)pcVar21;
                  unaff_x20[1] = uVar11 - 1;
                  if (puVar6 < (undefined6 *)0xffffffff) goto LAB_000d2ea8;
                }
              }
              else {
                *unaff_x20 = (long)(pcVar21 + 1);
                unaff_x20[1] = uVar11;
LAB_000d2ea8:
                uVar1 = (uint)puVar6 & 7;
                if ((undefined6 *)((long)&MACH_HEADER.cputype + 3) < puVar6 && uVar1 < 6) {
                  *(char *)((long)unaff_x20 + 0x21) = (char)uVar1;
                  unaff_x20[5] = (ulong)puVar6 >> 3;
                  FUN_000d3828();
                  unaff_x20[3] = *unaff_x20;
                  goto LAB_000d2ed8;
                }
              }
              goto LAB_000d31f4;
            }
            *unaff_x20 = unaff_x20[3];
LAB_000d2ed8:
            *(undefined1 *)(unaff_x20 + 4) = 1;
LAB_000d2ee0:
            FUN_000cb0e8();
            pcStack_248 = (code *)CONCAT44(pcStack_248._4_4_,1);
            goto LAB_000d2420;
          }
          func_0x000d4cd8(&uStack_a0,auStack_210,0xaedb68,&UNK_007d7b30);
          if (lStack_1f8 != 0) {
            lStack_278 = lVar20;
            FUN_000d4db4(auStack_210,&uStack_170);
            lVar20 = lStack_150;
            lVar16 = lStack_158;
            FUN_0001393c(&uStack_170,lStack_158);
            (**(code **)(lVar20 + 8))(lVar16,lVar20);
            pcVar4 = (code *)auStack_c8;
            FUN_000d48b4();
            pcStack_248 = pcVar4;
            func_0x000d4cd8(lVar16,auStack_210,0xaedb70,&UNK_007d8040);
            lVar20 = lStack_1f8;
            FUN_000d4be8(auStack_210,0xaedb70,&UNK_007d8040);
            lVar22 = lStack_150;
            if (lVar20 == 0) {
              FUN_0001393c(&uStack_170,lStack_158);
              (**(code **)(lVar22 + 0x20))(auStack_210);
              func_0x000d4c28(auStack_210,lVar16);
            }
            else {
              if (*(long *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0xd3598);
                (*pcVar4)();
              }
              lVar20 = *(long *)(lVar16 + 0x20);
              FUN_000115f8(lVar16,*(long *)(lVar16 + 0x18));
              (**(code **)(lVar20 + 0x28))();
            }
            lVar20 = lStack_278;
            if ((char)unaff_x20[4] == '\x01') {
              func_0x000d4cd8(lVar16,auStack_210,0xaedb70,&UNK_007d8040);
              lVar16 = lStack_1f8;
              puVar7 = auStack_210;
              FUN_000d4be8(puVar7,0xaedb70,&UNK_007d8040);
              if (lVar16 != 0) {
                pcVar4 = (code *)0x0;
                (*pcStack_248)(auStack_c8);
                puVar6 = &uStack_170;
                FUN_00011670();
                goto LAB_000d2ee0;
              }
              FUN_000d4ba8();
              _swift_allocError(&UNK_009ab010,puVar7,0,0);
              *puVar7 = 5;
              _swift_willThrow();
              (*pcStack_248)(auStack_c8,0);
              FUN_00023344(lVar20,pcVar17);
              FUN_000d4be8(&uStack_a0,0xaedb68,&UNK_007d7b30);
              puVar6 = &uStack_170;
LAB_000d3524:
              FUN_00011670(puVar6);
            }
            else {
              (*pcStack_248)(auStack_c8,0);
              FUN_000d4be8(&uStack_a0,0xaedb68,&UNK_007d7b30);
              FUN_00023344(lVar20,pcVar17);
              puVar6 = &uStack_170;
LAB_000d348c:
              FUN_00011670(puVar6);
            }
            goto LAB_000d32fc;
          }
          puVar7 = auStack_210;
          FUN_000d4be8(puVar7,0xaedb68,&UNK_007d7b30);
          if (*(char *)((long)unaff_x20 + 0x21) != '\x02') goto LAB_000d3250;
          lVar16 = unaff_x20[1];
          uVar11 = lVar16 - 1;
          if (lVar16 < 1) goto LAB_000d352c;
          pcVar13 = (char *)*unaff_x20;
          pcVar21 = pcVar13 + 1;
          uVar15 = (ulong)*pcVar13;
          if (-1 < (long)uVar15) {
            *unaff_x20 = (long)pcVar21;
            unaff_x20[1] = uVar11;
LAB_000d2fa0:
            if (uVar11 == 0) {
              if (uVar15 != 0) goto LAB_000d352c;
              *unaff_x20 = (long)pcVar21;
              unaff_x20[1] = 0;
LAB_000d3018:
              uVar11 = 0;
              puVar6 = (undefined6 *)0x0;
              *(undefined1 *)(unaff_x20 + 4) = 1;
              pcStack_248 = (code *)0xc000000000000000;
              lVar16 = 1;
            }
            else {
              if (uVar11 < uVar15) {
LAB_000d352c:
                uVar9 = 1;
                goto LAB_000d3538;
              }
              *unaff_x20 = (long)(pcVar21 + uVar15);
              unaff_x20[1] = uVar11 - uVar15;
              if (uVar15 == 0) goto LAB_000d3018;
              if (uVar15 < 0xf) {
                uStack_168 = 0;
                uStack_170 = 0;
                uStack_16a = 0;
                bStack_162 = (byte)uVar15;
                _memmove(&uStack_170,pcVar21,uVar15);
                puVar6 = (undefined6 *)CONCAT26(uStack_16a,uStack_170);
                uVar15 = (ulong)bStack_162;
                pcStack_248 = (code *)((ulong)pcStack_298 & 0xf00000000000000 | (ulong)uStack_168 |
                                      uVar15 << 0x30);
                pcStack_298 = pcStack_248;
              }
              else {
                __s10Foundation13__DataStorageCMa();
                _swift_allocObject();
                __s10Foundation13__DataStorageC5bytes6lengthACSVSg_Sitcfc(pcVar21,uVar15);
                puVar6 = (undefined6 *)(uVar15 << 0x20);
                pcStack_248 = (code *)((ulong)pcVar21 | 0x4000000000000000);
              }
              *(undefined1 *)(unaff_x20 + 4) = 1;
              if (uVar15 < 0x80) {
                lVar16 = 1;
              }
              else if (uVar15 < 0x200000) {
                if (uVar15 < 0x4000) {
                  lVar16 = 2;
                }
                else {
                  lVar16 = 3;
                }
              }
              else if (uVar15 >> 0x1c == 0) {
                lVar16 = 4;
              }
              else {
                lVar16 = 5;
              }
              uVar1 = (uint)((ulong)pcStack_248 >> 0x20);
              uVar10 = uVar1 >> 0x1e;
              if (uVar1 >> 0x1e < 2) {
                if (uVar10 == 0) {
                  uVar11 = (ulong)pcStack_248 >> 0x30 & 0xff;
                }
                else {
                  iVar12 = (int)((ulong)puVar6 >> 0x20);
                  if (SBORROW4(iVar12,(int)puVar6)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0xd3594);
                    (*pcVar4)();
                  }
                  uVar11 = (ulong)(iVar12 - (int)puVar6);
                }
              }
              else if (uVar10 == 2) {
                uVar11 = *(long *)(puVar6 + 3) - *(long *)(puVar6 + 2);
                if (SBORROW8(*(long *)(puVar6 + 3),*(long *)(puVar6 + 2))) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0xd3590);
                  (*pcVar4)();
                }
              }
              else {
                uVar11 = 0;
              }
            }
            uVar15 = lVar16 + uVar11;
            if (SCARRY8(lVar16,uVar11)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0xd3588);
              (*pcVar4)();
            }
            if (uVar15 == 0) {
              lVar16 = 0;
              uVar11 = 0xc000000000000000;
            }
            else if ((long)uVar15 < 0xf) {
              if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0xd358c);
                (*pcVar4)();
              }
              lVar16 = 0;
              uVar11 = uStack_290 & 0xf00000000000000 | (uVar15 & 0xff) << 0x30;
              uStack_290 = uVar11;
            }
            else {
              __s10Foundation13__DataStorageCMa();
              _swift_allocObject();
              uVar11 = uVar15;
              __s10Foundation13__DataStorageC6lengthACSi_tcfc();
              if (uVar15 < 0x7fffffff) {
                lVar16 = uVar15 << 0x20;
                uVar11 = uVar11 | 0x4000000000000000;
              }
              else {
                lVar16 = 0;
                __s10Foundation4DataV14RangeReferenceCMa();
                _swift_allocObject();
                *(undefined8 *)(lVar16 + 0x10) = 0;
                *(ulong *)(lVar16 + 0x18) = uVar15;
                uVar11 = uVar11 | 0x8000000000000000;
              }
            }
            pcVar4 = pcStack_248;
            uStack_170 = (undefined6)lVar16;
            uStack_16a = (undefined2)((ulong)lVar16 >> 0x30);
            uStack_168 = (uint6)uVar11;
            bStack_162 = (byte)(uVar11 >> 0x30);
            uStack_161 = (undefined1)(uVar11 >> 0x38);
            func_0x00023304(puVar6,pcStack_248);
            FUN_000d44a0(&uStack_170,puVar6,pcVar4);
            FUN_00023344(lVar20,pcVar17);
            FUN_00023358();
            lVar20 = CONCAT26(uStack_16a,uStack_170);
            pcVar17 = (code *)CONCAT17(uStack_161,CONCAT16(bStack_162,uStack_168));
            goto LAB_000d2ee0;
          }
          if (lVar16 != 1) {
            uVar15 = uVar15 & 0x7f;
            pcVar21 = pcVar13 + 2;
            uVar14 = 7;
            while (uVar15 = ((ulong)(byte)pcVar21[-1] & 0x7f) << (uVar14 & 0x3f) | uVar15,
                  pcVar21[-1] < '\0') {
              uVar9 = 3;
              if (uVar11 < 2) goto LAB_000d3538;
              pcVar21 = pcVar21 + 1;
              uVar11 = uVar11 - 1;
              bVar5 = 0x38 < uVar14;
              uVar14 = uVar14 + 7;
              if (bVar5) goto LAB_000d3538;
            }
            uVar11 = uVar11 - 1;
            *unaff_x20 = (long)pcVar21;
            unaff_x20[1] = uVar11;
            if (uVar15 < 0x7fffffff) goto LAB_000d2fa0;
          }
          uVar9 = 3;
LAB_000d3538:
          FUN_000d4ba8();
          _swift_allocError(&UNK_009ab010,puVar7,0,0);
          *puVar7 = uVar9;
          _swift_willThrow();
        }
        else {
          if (unaff_x20[3] != 0) {
            *unaff_x20 = unaff_x20[3];
LAB_000d2410:
            *(undefined1 *)(unaff_x20 + 4) = 1;
LAB_000d2414:
            FUN_000cb0e8();
            goto LAB_000d2420;
          }
          pcVar21 = (char *)unaff_x20[2];
          lVar16 = unaff_x20[1] + (*unaff_x20 - (long)pcVar21);
          if (SCARRY8(unaff_x20[1],*unaff_x20 - (long)pcVar21)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0xd349c);
            (*pcVar4)();
          }
          *unaff_x20 = (long)pcVar21;
          unaff_x20[1] = lVar16;
          uVar11 = lVar16 - 1;
          if (lVar16 < 1) {
LAB_000d3284:
            FUN_000d4ba8();
            _swift_allocError(&UNK_009ab010,puVar6,0,0);
            uVar9 = 1;
          }
          else {
            puVar6 = (undefined6 *)(long)*pcVar21;
            if ((long)puVar6 < 0) {
              if (lVar16 != 1) {
                puVar6 = (undefined6 *)((ulong)puVar6 & 0x7f);
                pcVar21 = pcVar21 + 2;
                uVar15 = 7;
                while (puVar6 = (undefined6 *)
                                (((ulong)(byte)pcVar21[-1] & 0x7f) << (uVar15 & 0x3f) |
                                (ulong)puVar6), pcVar21[-1] < '\0') {
                  if (uVar11 < 2) goto LAB_000d31f4;
                  pcVar21 = pcVar21 + 1;
                  uVar11 = uVar11 - 1;
                  bVar5 = 0x38 < uVar15;
                  uVar15 = uVar15 + 7;
                  if (bVar5) goto LAB_000d31f4;
                }
                *unaff_x20 = (long)pcVar21;
                unaff_x20[1] = uVar11 - 1;
                if (puVar6 < (undefined6 *)0xffffffff) goto LAB_000d25b0;
              }
            }
            else {
              *unaff_x20 = (long)(pcVar21 + 1);
              unaff_x20[1] = uVar11;
LAB_000d25b0:
              uVar1 = (uint)puVar6 & 7;
              if ((undefined6 *)((long)&MACH_HEADER.cputype + 3) < puVar6 && uVar1 < 6) {
                *(char *)((long)unaff_x20 + 0x21) = (char)uVar1;
                unaff_x20[5] = (ulong)puVar6 >> 3;
                FUN_000d3828();
                unaff_x20[3] = *unaff_x20;
                goto LAB_000d2410;
              }
            }
LAB_000d31f4:
            FUN_000d4ba8();
            _swift_allocError(&UNK_009ab010,puVar6,0,0);
            uVar9 = 3;
          }
          *(undefined1 *)puVar6 = uVar9;
LAB_000d32cc:
          _swift_willThrow();
        }
        FUN_00023344(lVar20,pcVar17);
        FUN_000d4be8(&uStack_a0,0xaedb68,&UNK_007d7b30);
        goto LAB_000d32fc;
      }
      if (*(char *)((long)unaff_x20 + 0x21) != '\0') goto LAB_000d3250;
      lVar16 = unaff_x20[1];
      uVar11 = lVar16 - 1;
      if (lVar16 < 1) {
        uVar9 = 1;
LAB_000d32ac:
        FUN_000d4ba8();
        _swift_allocError(&UNK_009ab010,puVar6,0,0);
        *(undefined1 *)puVar6 = uVar9;
        goto LAB_000d32cc;
      }
      pcVar21 = (char *)*unaff_x20;
      uVar15 = (ulong)*pcVar21;
      if ((long)uVar15 < 0) {
        if (lVar16 == 1) {
          uVar9 = 3;
          goto LAB_000d32ac;
        }
        uVar15 = uVar15 & 0x7f;
        pcVar21 = pcVar21 + 2;
        uVar14 = 7;
        while (uVar15 = ((ulong)(byte)pcVar21[-1] & 0x7f) << (uVar14 & 0x3f) | uVar15,
              pcVar21[-1] < '\0') {
          uVar9 = 3;
          if (uVar11 < 2) goto LAB_000d32ac;
          pcVar21 = pcVar21 + 1;
          uVar11 = uVar11 - 1;
          bVar5 = 0x38 < uVar14;
          uVar14 = uVar14 + 7;
          if (bVar5) goto LAB_000d32ac;
        }
        uVar11 = uVar11 - 1;
        *unaff_x20 = (long)pcVar21;
      }
      else {
        *unaff_x20 = (long)(pcVar21 + 1);
      }
      unaff_x20[1] = uVar11;
      *(undefined1 *)(unaff_x20 + 4) = 1;
      if ((int)uVar15 == 0) goto LAB_000d3250;
      pcVar4 = (code *)0xaedb68;
      func_0x000d4cd8(&uStack_a0,&uStack_170,0xaedb68,&UNK_007d7b30);
      lVar16 = lStack_158;
      puVar6 = &uStack_170;
      FUN_000d4be8(puVar6,0xaedb68,&UNK_007d7b30);
      if (lVar16 != 0) goto LAB_000d2414;
      lVar16 = unaff_x20[9];
      if (lVar16 == 0) {
        lStack_278 = lVar20;
        FUN_000d4be8(&uStack_a0,0xaedb68,&UNK_007d7b30);
        FUN_00023344(lStack_278,pcVar17);
        lStack_150 = 0;
        uStack_168 = 0;
        bStack_162 = 0;
        uStack_161 = 0;
        uStack_170 = 0;
        uStack_16a = 0;
        lStack_158 = 0;
        puStack_160 = (undefined1 *)0x0;
LAB_000d3378:
        FUN_000d4be8(&uStack_170,0xaedb68,&UNK_007d7b30);
        goto LAB_000d32fc;
      }
      lVar22 = unaff_x20[10];
      pcStack_280 = pcVar17;
      lStack_278 = lVar20;
      FUN_0001393c(unaff_x20 + 6,lVar16);
      lVar20 = *(long *)(lVar16 + -8);
      (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar20 + 0x40));
      (**(code **)(lVar20 + 0x10))(auStack_2a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(lVar22 + 8))(&uStack_170,pcStack_260,uStack_258,(long)(int)uVar15,lVar16,lVar22);
      (**(code **)(lVar20 + 8))(auStack_2a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar16);
      FUN_000d4be8(&uStack_a0,0xaedb68,&UNK_007d7b30);
      if (lStack_158 == 0) {
        FUN_00023344(lStack_278,pcStack_280);
        goto LAB_000d3378;
      }
      FUN_000d4db4(&uStack_170,auStack_c8);
      puVar7 = auStack_c8;
      pcVar4 = (code *)&uStack_a0;
      func_0x000d4d20();
      pcVar17 = pcStack_280;
      lVar20 = lStack_278;
      if ((ulong)pcStack_280 >> 0x3c < 0xf) {
        uVar1 = (uint)((ulong)pcStack_280 >> 0x20);
        uVar10 = uVar1 >> 0x1e;
        if (uVar1 >> 0x1e < 2) {
          if (uVar10 == 0) {
            uStack_23e = (undefined1)lStack_278;
            uStack_23d = (undefined1)((ulong)lStack_278 >> 8);
            uStack_23c = (undefined1)((ulong)lStack_278 >> 0x10);
            uStack_23b = (undefined1)((ulong)lStack_278 >> 0x18);
            uStack_23a = (undefined1)((ulong)lStack_278 >> 0x20);
            uStack_239 = (undefined1)((ulong)lStack_278 >> 0x28);
            uStack_238 = (undefined1)((ulong)lStack_278 >> 0x30);
            uStack_237 = (undefined1)((ulong)lStack_278 >> 0x38);
            uStack_236 = SUB81(pcStack_280,0);
            uStack_235 = (undefined1)((ulong)pcStack_280 >> 8);
            uStack_234 = (undefined1)((ulong)pcStack_280 >> 0x10);
            uStack_233 = (undefined1)((ulong)pcStack_280 >> 0x18);
            uStack_232 = (undefined1)((ulong)pcStack_280 >> 0x20);
            uVar11 = (ulong)pcStack_280 >> 0x30 & 0xff;
            uStack_231 = (undefined1)((ulong)pcStack_280 >> 0x28);
            if (uVar11 != 0) {
              func_0x000d4c78();
              uVar9 = uStack_1a0;
              uVar2 = uStack_1a8;
              uStack_140 = 0;
              uStack_148 = 0;
              uStack_130 = 0;
              uStack_138 = 0;
              uStack_120 = 0;
              uStack_128 = 0;
              uStack_118 = 0;
              uStack_110 = 1;
              uStack_e8 = uStack_268;
              uStack_f0 = uStack_270;
              uStack_d8 = uStack_268;
              uStack_e0 = uStack_270;
              puStack_160 = &uStack_23e;
              uStack_170 = SUB86(puStack_160,0);
              uStack_16a = (undefined2)((ulong)puStack_160 >> 0x30);
              uStack_168 = (uint6)uVar11;
              bStack_162 = 0;
              uStack_161 = 0;
              lStack_158 = 0;
              func_0x000d4d64(auStack_1e0,&uStack_140);
              uVar3 = uStack_198;
              uStack_108 = uVar2;
              uStack_100 = uVar9;
              func_0x000d4cac(auStack_210);
              lVar20 = lStack_a8;
              lVar16 = lStack_b0;
              uStack_f8 = uVar3;
              lStack_150 = CONCAT62(lStack_150._2_6_,0x200);
              FUN_0001393c(auStack_c8,lStack_b0);
              (**(code **)(lVar20 + 8))(lVar16,lVar20);
              pcVar4 = (code *)auStack_230;
              FUN_000d48b4();
              pcStack_288 = pcVar4;
              func_0x000d4cd8(lVar16,auStack_210,0xaedb70,&UNK_007d8040);
              lVar20 = lStack_1f8;
              FUN_000d4be8(auStack_210,0xaedb70,&UNK_007d8040);
              if (lVar20 != 0) {
                lVar20 = *(long *)(lVar16 + 0x18);
                if (lVar20 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0xd35a4);
                  (*pcVar4)();
                }
                goto LAB_000d2d4c;
              }
LAB_000d2da0:
              lVar22 = lStack_a8;
              lVar20 = lStack_b0;
              FUN_0001393c(auStack_c8,lStack_b0);
              (**(code **)(lVar22 + 0x20))
                        (auStack_210,&uStack_170,&UNK_009aad60,&PTR_DAT_009aada8,lVar20,lVar22);
              func_0x000d4c28(auStack_210,lVar16);
LAB_000d2e04:
              lVar20 = lStack_278;
              pcVar4 = pcStack_280;
              if ((char)lStack_150 == '\x01') {
                func_0x000d4cd8(lVar16,auStack_210,0xaedb70,&UNK_007d8040);
                lVar16 = lStack_1f8;
                puVar7 = auStack_210;
                FUN_000d4be8(puVar7,0xaedb70,&UNK_007d8040);
                if (lVar16 == 0) {
                  FUN_000d4ba8();
                  _swift_allocError(&UNK_009ab010,puVar7,0,0);
                  *puVar7 = 5;
                  _swift_willThrow();
                  (*pcStack_288)(auStack_230,0);
                  func_0x000d4cac(&uStack_170);
                  FUN_00023344(lVar20,pcVar4);
                  FUN_000d4be8(&uStack_a0,0xaedb68,&UNK_007d7b30);
                  puVar6 = (undefined6 *)auStack_c8;
                  goto LAB_000d3524;
                }
                (*pcStack_288)(auStack_230,0);
                func_0x000d4cac(&uStack_170);
                FUN_00023344(lVar20);
                pcVar17 = (code *)0xf000000000000000;
                lVar20 = 0;
                goto LAB_000d2e78;
              }
              (*pcStack_288)(auStack_230,0);
              func_0x000d4cac(&uStack_170);
              pcVar17 = pcVar4;
            }
          }
          else {
            lVar20 = (long)(int)lStack_278;
            puVar18 = (undefined1 *)((lStack_278 >> 0x20) - lVar20);
            if (lStack_278 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0xd3574);
              (*pcVar4)();
            }
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            if (puVar7 == (undefined1 *)0x0) {
              puVar19 = (undefined1 *)0x0;
            }
            else {
              puVar8 = puVar7;
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar20,(long)puVar8)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0xd3584);
                (*pcVar4)();
              }
              puVar19 = puVar7 + (lVar20 - (long)puVar8);
              puVar7 = puVar8;
            }
            __s10Foundation13__DataStorageC7_lengthSivg();
            if ((long)puVar18 <= (long)puVar7) {
              puVar7 = puVar18;
            }
            lVar20 = lStack_278;
            if ((puVar19 != (undefined1 *)0x0) && (puVar7 != (undefined1 *)0x0)) {
              func_0x000d4c78();
              uVar9 = uStack_1a0;
              uVar2 = uStack_1a8;
              uStack_140 = 0;
              uStack_148 = 0;
              uStack_130 = 0;
              uStack_138 = 0;
              uStack_120 = 0;
              uStack_128 = 0;
              uStack_118 = 0;
              uStack_110 = 1;
              uStack_e8 = uStack_268;
              uStack_f0 = uStack_270;
              uStack_d8 = uStack_268;
              uStack_e0 = uStack_270;
              uStack_170 = SUB86(puVar19,0);
              uStack_16a = (undefined2)((ulong)puVar19 >> 0x30);
              uStack_168 = (uint6)puVar7;
              bStack_162 = (byte)((ulong)puVar7 >> 0x30);
              uStack_161 = (undefined1)((ulong)puVar7 >> 0x38);
              lStack_158 = 0;
              puStack_160 = puVar19;
              func_0x000d4d64(auStack_1e0,&uStack_140);
              uVar3 = uStack_198;
              uStack_108 = uVar2;
              uStack_100 = uVar9;
              func_0x000d4cac(auStack_210);
              lVar20 = lStack_a8;
              lVar16 = lStack_b0;
              uStack_f8 = uVar3;
              lStack_150 = CONCAT62(lStack_150._2_6_,0x200);
              FUN_0001393c(auStack_c8,lStack_b0);
              (**(code **)(lVar20 + 8))(lVar16,lVar20);
              pcVar4 = (code *)auStack_230;
              FUN_000d48b4();
              pcStack_288 = pcVar4;
              func_0x000d4cd8(lVar16,auStack_210,0xaedb70,&UNK_007d8040);
              lVar20 = lStack_1f8;
              FUN_000d4be8(auStack_210,0xaedb70,&UNK_007d8040);
              if (lVar20 == 0) goto LAB_000d2da0;
              lVar20 = *(long *)(lVar16 + 0x18);
              if (lVar20 == 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0xd35a0);
                (*pcVar4)();
              }
LAB_000d2d4c:
              lVar22 = *(long *)(lVar16 + 0x20);
              FUN_000115f8(lVar16,lVar20);
              (**(code **)(lVar22 + 0x28))
                        (&uStack_170,&UNK_009aad60,&PTR_DAT_009aada8,lVar20,lVar22);
              goto LAB_000d2e04;
            }
          }
        }
        else if (uVar10 == 2) {
          lVar20 = *(long *)(lStack_278 + 0x10);
          lVar16 = *(long *)(lStack_278 + 0x18);
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          if (puVar7 == (undefined1 *)0x0) {
            puVar18 = (undefined1 *)0x0;
          }
          else {
            puVar19 = puVar7;
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8(lVar20,(long)puVar19)) goto LAB_000d357c;
            puVar18 = puVar7 + (lVar20 - (long)puVar19);
            puVar7 = puVar19;
          }
          puVar19 = (undefined1 *)(lVar16 - lVar20);
          if (SBORROW8(lVar16,lVar20)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0xd3578);
            (*pcVar4)();
          }
          __s10Foundation13__DataStorageC7_lengthSivg();
          if ((long)puVar19 <= (long)puVar7) {
            puVar7 = puVar19;
          }
          lVar20 = lStack_278;
          if ((puVar18 != (undefined1 *)0x0) && (puVar7 != (undefined1 *)0x0)) {
            func_0x000d4c78();
            uVar9 = uStack_1a0;
            uVar2 = uStack_1a8;
            uStack_140 = 0;
            uStack_148 = 0;
            uStack_130 = 0;
            uStack_138 = 0;
            uStack_120 = 0;
            uStack_128 = 0;
            uStack_118 = 0;
            uStack_110 = 1;
            uStack_e8 = uStack_268;
            uStack_f0 = uStack_270;
            uStack_d8 = uStack_268;
            uStack_e0 = uStack_270;
            uStack_170 = SUB86(puVar18,0);
            uStack_16a = (undefined2)((ulong)puVar18 >> 0x30);
            uStack_168 = (uint6)puVar7;
            bStack_162 = (byte)((ulong)puVar7 >> 0x30);
            uStack_161 = (undefined1)((ulong)puVar7 >> 0x38);
            lStack_158 = 0;
            puStack_160 = puVar18;
            func_0x000d4d64(auStack_1e0,&uStack_140);
            uVar3 = uStack_198;
            uStack_108 = uVar2;
            uStack_100 = uVar9;
            func_0x000d4cac(auStack_210);
            lVar20 = lStack_a8;
            lVar16 = lStack_b0;
            uStack_f8 = uVar3;
            lStack_150 = CONCAT62(lStack_150._2_6_,0x200);
            FUN_0001393c(auStack_c8,lStack_b0);
            (**(code **)(lVar20 + 8))(lVar16,lVar20);
            pcVar4 = (code *)auStack_230;
            FUN_000d48b4();
            pcStack_288 = pcVar4;
            func_0x000d4cd8(lVar16,auStack_210,0xaedb70,&UNK_007d8040);
            lVar20 = lStack_1f8;
            FUN_000d4be8(auStack_210,0xaedb70,&UNK_007d8040);
            if (lVar20 == 0) goto LAB_000d2da0;
            lVar20 = *(long *)(lVar16 + 0x18);
            if (lVar20 == 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0xd359c);
              (*pcVar4)();
            }
            goto LAB_000d2d4c;
          }
        }
        FUN_00023344(lVar20,pcVar17);
        FUN_000d4be8(&uStack_a0,0xaedb68,&UNK_007d7b30);
        puVar6 = (undefined6 *)auStack_c8;
        goto LAB_000d348c;
      }
LAB_000d2e78:
      puVar6 = (undefined6 *)auStack_c8;
      FUN_00011670();
      FUN_000cb0e8();
    } while( true );
  }
  FUN_000d4be8(&uStack_a0,0xaedb68,&UNK_007d7b30);
  FUN_00023344(0,0xf000000000000000);
LAB_000d32fc:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_000d357c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0xd3580);
  (*pcVar4)();
LAB_000d321c:
  FUN_000d4be8(&uStack_a0,0xaedb68,&UNK_007d7b30);
  FUN_00023344(lVar20,pcVar17);
  goto LAB_000d32fc;
}



/* Entry: 000d35a4; end: 000d3827;  */

void FUN_000d35a4(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  code *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  long *unaff_x20;
  long unaff_x21;
  byte bVar16;
  long lVar17;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_1 == (byte *)0x0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0xd3824);
    (*pcVar5)();
  }
  uVar2 = (uint)(param_4 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  iVar8 = (int)param_3;
  iVar12 = (int)((ulong)param_3 >> 0x20);
  if (uVar2 >> 0x1e < 2) {
    if (uVar10 == 0) {
      uVar13 = param_4 >> 0x30 & 0xff;
    }
    else {
      if (SBORROW4(iVar12,iVar8)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0xd3810);
        (*pcVar5)();
      }
      uVar13 = (ulong)(iVar12 - iVar8);
    }
joined_r0x000d3610:
    pbVar7 = param_1;
    uVar11 = uVar13;
    if (0x7f < uVar13) {
      do {
        param_1 = pbVar7 + 1;
        *pbVar7 = (byte)uVar11 | 0x80;
        uVar13 = uVar11 >> 7;
        uVar14 = uVar11 >> 0xe;
        pbVar7 = param_1;
        uVar11 = uVar13;
      } while (uVar14 != 0);
    }
    pbVar6 = param_1 + 1;
    *param_1 = (byte)uVar13;
    pbVar7 = pbVar6;
    if (uVar10 != 2) {
      if (uVar10 == 1) {
        lVar17 = (long)iVar8;
        pbVar4 = (byte *)((param_3 >> 0x20) - lVar17);
        if (param_3 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0xd3814);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        param_1 = pbVar7;
        if (pbVar7 != (byte *)0x0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,(long)param_1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0xd3820);
            (*pcVar5)();
          }
          pbVar7 = pbVar7 + (lVar17 - (long)param_1);
        }
        unaff_x20 = (long *)(param_4 & 0x3fffffffffffffff);
        __s10Foundation13__DataStorageC7_lengthSivg();
        pbVar9 = param_1;
        if ((long)pbVar4 <= (long)param_1) {
          pbVar9 = pbVar4;
        }
        if (pbVar7 != (byte *)0x0) goto LAB_000d3714;
      }
      else {
        uStack_66 = (undefined1)param_3;
        uStack_65 = (undefined1)((ulong)param_3 >> 8);
        uStack_64 = (undefined1)((ulong)param_3 >> 0x10);
        uStack_63 = (undefined1)((ulong)param_3 >> 0x18);
        uStack_62 = (undefined1)((ulong)param_3 >> 0x20);
        uStack_61 = (undefined1)((ulong)param_3 >> 0x28);
        uStack_60 = (undefined1)((ulong)param_3 >> 0x30);
        uStack_5f = (undefined1)((ulong)param_3 >> 0x38);
        uStack_5e = (undefined1)param_4;
        uStack_5d = (undefined1)(param_4 >> 8);
        uStack_5c = (undefined1)(param_4 >> 0x10);
        uStack_5b = (undefined1)(param_4 >> 0x18);
        uStack_5a = (undefined1)(param_4 >> 0x20);
        uStack_59 = (undefined1)(param_4 >> 0x28);
        param_1 = pbVar6;
        if ((param_4 >> 0x30 & 0xff) != 0) {
          _memmove(pbVar6,&uStack_66);
          param_1 = pbVar6;
        }
      }
      goto LAB_000d37d4;
    }
    lVar17 = *(long *)(param_3 + 0x10);
    lVar3 = *(long *)(param_3 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    param_1 = pbVar7;
    if (pbVar7 != (byte *)0x0) {
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar17,(long)param_1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0xd381c);
        (*pcVar5)();
      }
      pbVar7 = pbVar7 + (lVar17 - (long)param_1);
    }
    pbVar4 = (byte *)(lVar3 - lVar17);
    if (SBORROW8(lVar3,lVar17)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0xd3818);
      (*pcVar5)();
    }
    unaff_x20 = (long *)(param_4 & 0x3fffffffffffffff);
    __s10Foundation13__DataStorageC7_lengthSivg();
    pbVar9 = param_1;
    if ((long)pbVar4 <= (long)param_1) {
      pbVar9 = pbVar4;
    }
    if (pbVar7 == (byte *)0x0) goto LAB_000d37d4;
LAB_000d3714:
    unaff_x20 = (long *)(param_4 & 0x3fffffffffffffff);
    if (pbVar9 == (byte *)0x0) goto LAB_000d37d4;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x0077a864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memmove_0099a400)(pbVar6,pbVar7);
      return;
    }
  }
  else {
    if (uVar10 == 2) {
      uVar13 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
      if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0xd380c);
        (*pcVar5)();
      }
      goto joined_r0x000d3610;
    }
    *param_1 = 0;
LAB_000d37d4:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
      return;
    }
  }
  ___stack_chk_fail();
  uVar2 = (uint)param_1 & 7;
  if (uVar2 < 3) {
    if (((ulong)param_1 & 7) == 0) {
      FUN_000cb85c();
      return;
    }
    if (uVar2 == 1) {
      lVar17 = unaff_x20[1] + -8;
      if (7 < unaff_x20[1]) {
        pbVar7 = (byte *)(*unaff_x20 + 8);
        goto LAB_000d3a04;
      }
    }
    else {
      if (uVar2 != 2) {
LAB_000d3aa0:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0xd3aa4);
        (*pcVar5)();
      }
      FUN_000cb85c();
      if (unaff_x21 != 0) {
        return;
      }
      pbVar6 = (byte *)unaff_x20[1];
      if ((long)pbVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0xd3aac);
        (*pcVar5)();
      }
      if (pbVar6 == (byte *)0x0) {
        if (param_1 == (byte *)0x0) goto LAB_000d39f8;
      }
      else if (param_1 <= pbVar6) {
LAB_000d39f8:
        pbVar7 = param_1 + *unaff_x20;
        lVar17 = (long)pbVar6 - (long)param_1;
LAB_000d3a04:
        *unaff_x20 = (long)pbVar7;
        unaff_x20[1] = lVar17;
        return;
      }
    }
  }
  else if (uVar2 == 3) {
    lVar17 = unaff_x20[0xf] + -1;
    if (SBORROW8(unaff_x20[0xf],1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0xd3aa8);
      (*pcVar5)();
    }
    unaff_x20[0xf] = lVar17;
    if (lVar17 < 0) {
      bVar16 = 6;
      goto LAB_000d39c4;
    }
    uVar13 = unaff_x20[1];
    if (0 < (long)uVar13) {
      do {
        pcVar15 = (char *)*unaff_x20;
        uVar11 = (ulong)*pcVar15;
        uVar14 = uVar13 - 1;
        if ((long)uVar11 < 0) {
          if (1 < uVar13) {
            uVar11 = uVar11 & 0x7f;
            pcVar15 = pcVar15 + 2;
            uVar13 = 7;
            while (uVar11 = ((ulong)(byte)pcVar15[-1] & 0x7f) << (uVar13 & 0x3f) | uVar11,
                  pcVar15[-1] < '\0') {
              bVar16 = 3;
              if (uVar14 < 2) goto LAB_000d39c4;
              pcVar15 = pcVar15 + 1;
              uVar14 = uVar14 - 1;
              bVar1 = 0x38 < uVar13;
              uVar13 = uVar13 + 7;
              if (bVar1) goto LAB_000d39c4;
            }
            *unaff_x20 = (long)pcVar15;
            unaff_x20[1] = uVar14 - 1;
            if (uVar11 < 0xffffffff) goto LAB_000d3968;
          }
LAB_000d3a98:
          bVar16 = 3;
          break;
        }
        *unaff_x20 = (long)(pcVar15 + 1);
        unaff_x20[1] = uVar14;
LAB_000d3968:
        uVar2 = (uint)uVar11 & 7;
        if (uVar11 < 8 || 5 < uVar2) goto LAB_000d3a98;
        if (uVar2 == 4) {
          *(undefined1 *)((long)unaff_x20 + 0x21) = 4;
          uVar2 = (uint)uVar11 >> 3;
          unaff_x20[5] = (ulong)uVar2;
          if (uVar2 == (uint)param_1 >> 3) {
            lVar17 = unaff_x20[0xf] + 1;
            if (SCARRY8(unaff_x20[0xf],1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0xd3ab0);
              (*pcVar5)();
            }
            unaff_x20[0xf] = lVar17;
            if (lVar17 <= unaff_x20[0xd]) {
              return;
            }
            __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                      ("Fatal error",0xb,2,0xd00000000000003b,0x80000000008b8ab0,
                       "SwiftProtobuf/BinaryDecoder.swift",0x21,2,0x5e,0);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0xd3a98);
            (*pcVar5)();
          }
          goto LAB_000d3a98;
        }
        *(char *)((long)unaff_x20 + 0x21) = (char)uVar2;
        unaff_x20[5] = uVar11 >> 3;
        FUN_000d3828(uVar11);
        if (unaff_x21 != 0) {
          return;
        }
        uVar13 = unaff_x20[1];
        bVar16 = 1;
      } while (0 < (long)uVar13);
      goto LAB_000d39c4;
    }
  }
  else if (uVar2 != 4) {
    if (uVar2 != 5) goto LAB_000d3aa0;
    lVar17 = unaff_x20[1] + -4;
    if (3 < unaff_x20[1]) {
      pbVar7 = (byte *)(*unaff_x20 + 4);
      goto LAB_000d3a04;
    }
  }
  bVar16 = 1;
LAB_000d39c4:
  FUN_000d4ba8();
  _swift_allocError(&UNK_009ab010,param_1,0,0);
  *param_1 = bVar16;
  _swift_willThrow();
  return;
}



/* Entry: 000d3828; end: 000d3aaf;  */

void FUN_000d3828(undefined1 *param_1)

{
  bool bVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  char *pcVar10;
  long *unaff_x20;
  long unaff_x21;
  undefined1 uVar11;
  
  uVar2 = (uint)param_1 & 7;
  if (uVar2 < 3) {
    if (((ulong)param_1 & 7) == 0) {
      FUN_000cb85c();
      return;
    }
    if (uVar2 == 1) {
      lVar6 = unaff_x20[1] + -8;
      if (7 < unaff_x20[1]) {
        puVar8 = (undefined1 *)(*unaff_x20 + 8);
        goto LAB_000d3a04;
      }
    }
    else {
      if (uVar2 != 2) {
LAB_000d3aa0:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xd3aa4);
        (*pcVar3)();
      }
      FUN_000cb85c();
      if (unaff_x21 != 0) {
        return;
      }
      puVar4 = (undefined1 *)unaff_x20[1];
      if ((long)puVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xd3aac);
        (*pcVar3)();
      }
      if (puVar4 == (undefined1 *)0x0) {
        if (param_1 == (undefined1 *)0x0) goto LAB_000d39f8;
      }
      else if (param_1 <= puVar4) {
LAB_000d39f8:
        puVar8 = param_1 + *unaff_x20;
        lVar6 = (long)puVar4 - (long)param_1;
LAB_000d3a04:
        *unaff_x20 = (long)puVar8;
        unaff_x20[1] = lVar6;
        return;
      }
    }
  }
  else if (uVar2 == 3) {
    lVar6 = unaff_x20[0xf] + -1;
    if (SBORROW8(unaff_x20[0xf],1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xd3aa8);
      (*pcVar3)();
    }
    unaff_x20[0xf] = lVar6;
    if (lVar6 < 0) {
      uVar11 = 6;
      goto LAB_000d39c4;
    }
    uVar9 = unaff_x20[1];
    if (0 < (long)uVar9) {
      do {
        pcVar10 = (char *)*unaff_x20;
        uVar5 = (ulong)*pcVar10;
        uVar7 = uVar9 - 1;
        if ((long)uVar5 < 0) {
          if (1 < uVar9) {
            uVar5 = uVar5 & 0x7f;
            pcVar10 = pcVar10 + 2;
            uVar9 = 7;
            while (uVar5 = ((ulong)(byte)pcVar10[-1] & 0x7f) << (uVar9 & 0x3f) | uVar5,
                  pcVar10[-1] < '\0') {
              uVar11 = 3;
              if (uVar7 < 2) goto LAB_000d39c4;
              pcVar10 = pcVar10 + 1;
              uVar7 = uVar7 - 1;
              bVar1 = 0x38 < uVar9;
              uVar9 = uVar9 + 7;
              if (bVar1) goto LAB_000d39c4;
            }
            *unaff_x20 = (long)pcVar10;
            unaff_x20[1] = uVar7 - 1;
            if (uVar5 < 0xffffffff) goto LAB_000d3968;
          }
LAB_000d3a98:
          uVar11 = 3;
          break;
        }
        *unaff_x20 = (long)(pcVar10 + 1);
        unaff_x20[1] = uVar7;
LAB_000d3968:
        uVar2 = (uint)uVar5 & 7;
        if (uVar5 < 8 || 5 < uVar2) goto LAB_000d3a98;
        if (uVar2 == 4) {
          *(undefined1 *)((long)unaff_x20 + 0x21) = 4;
          uVar2 = (uint)uVar5 >> 3;
          unaff_x20[5] = (ulong)uVar2;
          if (uVar2 == (uint)param_1 >> 3) {
            lVar6 = unaff_x20[0xf] + 1;
            if (SCARRY8(unaff_x20[0xf],1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0xd3ab0);
              (*pcVar3)();
            }
            unaff_x20[0xf] = lVar6;
            if (lVar6 <= unaff_x20[0xd]) {
              return;
            }
            __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                      ("Fatal error",0xb,2,0xd00000000000003b,0x80000000008b8ab0,
                       "SwiftProtobuf/BinaryDecoder.swift",0x21,2,0x5e,0);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0xd3a98);
            (*pcVar3)();
          }
          goto LAB_000d3a98;
        }
        *(char *)((long)unaff_x20 + 0x21) = (char)uVar2;
        unaff_x20[5] = uVar5 >> 3;
        FUN_000d3828(uVar5);
        if (unaff_x21 != 0) {
          return;
        }
        uVar9 = unaff_x20[1];
        uVar11 = 1;
      } while (0 < (long)uVar9);
      goto LAB_000d39c4;
    }
  }
  else if (uVar2 != 4) {
    if (uVar2 != 5) goto LAB_000d3aa0;
    lVar6 = unaff_x20[1] + -4;
    if (3 < unaff_x20[1]) {
      puVar8 = (undefined1 *)(*unaff_x20 + 4);
      goto LAB_000d3a04;
    }
  }
  uVar11 = 1;
LAB_000d39c4:
  FUN_000d4ba8();
  _swift_allocError(&UNK_009ab010,param_1,0,0);
  *param_1 = uVar11;
  _swift_willThrow();
  return;
}



/* Entry: 000d3ab0; end: 000d3b5b;  */

void FUN_000d3ab0(undefined1 *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  long unaff_x21;
  
  if ((0 < *(long *)(unaff_x20 + 8)) && (FUN_000cb85c(), unaff_x21 == 0)) {
    if ((param_1 < (undefined1 *)0xffffffff) &&
       (func_0x000e81d8(), ((ulong)param_1 & 0xff00000000) != 0x100000000)) {
      puVar1 = param_1;
      func_0x000e8128();
      *(char *)(unaff_x20 + 0x21) = (char)puVar1;
      *(ulong *)(unaff_x20 + 0x28) = (ulong)param_1 >> 3 & 0x1fffffff;
    }
    else {
      FUN_000d4ba8();
      _swift_allocError(&UNK_009ab010,param_1,0,0);
      *param_1 = 3;
      _swift_willThrow();
    }
  }
  return;
}



/* Entry: 000d3b5c; end: 000d3b5f;  */

void FUN_000d3b5c(void)

{
  return;
}



/* Entry: 000d3b60; end: 000d3c73;  */

void FUN_000d3b60(void)

{
  FUN_000cb0e8();
  return;
}



/* Entry: 000d3c74; end: 000d3cab;  */

void FUN_000d3c74(undefined4 *param_1)

{
  undefined4 uVar1;
  long unaff_x20;
  long unaff_x21;
  
  uVar1 = SUB84(param_1,0);
  if (*(char *)(unaff_x20 + 0x21) == '\0') {
    FUN_000cb85c();
    if (unaff_x21 == 0) {
      *param_1 = uVar1;
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
    }
  }
  return;
}



/* Entry: 000d3cac; end: 000d3ce7;  */

void FUN_000d3cac(undefined4 *param_1)

{
  undefined4 uVar1;
  long unaff_x20;
  long unaff_x21;
  
  uVar1 = SUB84(param_1,0);
  if (*(char *)(unaff_x20 + 0x21) == '\0') {
    FUN_000cb85c();
    if (unaff_x21 == 0) {
      *param_1 = uVar1;
      *(undefined1 *)(param_1 + 1) = 0;
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
    }
  }
  return;
}



/* Entry: 000d3ce8; end: 000d3d03;  */

void FUN_000d3ce8(undefined8 param_1)

{
  FUN_000cbcec(param_1,FUN_000d630c);
  return;
}



/* Entry: 000d3d04; end: 000d3d3b;  */

void FUN_000d3d04(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  long unaff_x21;
  
  if ((*(char *)(unaff_x20 + 0x21) == '\0') && (puVar1 = param_1, FUN_000cb85c(), unaff_x21 == 0)) {
    *param_1 = puVar1;
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
  }
  return;
}



/* Entry: 000d3d3c; end: 000d3d77;  */

void FUN_000d3d3c(long *param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x21;
  
  if ((*(char *)(unaff_x20 + 0x21) == '\0') && (plVar1 = param_1, FUN_000cb85c(), unaff_x21 == 0)) {
    *param_1 = (long)plVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
  }
  return;
}



/* Entry: 000d3d78; end: 000d3eb7;  */

void FUN_000d3d78(undefined8 param_1)

{
  FUN_000cc26c(param_1,FUN_000d6418);
  return;
}



/* Entry: 000d3eb8; end: 000d3ef7;  */

void FUN_000d3eb8(long param_1)

{
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  
  if ((*(char *)(unaff_x20 + 0x21) == '\0') && (lVar1 = param_1, FUN_000cb85c(), unaff_x21 == 0)) {
    *(bool *)param_1 = lVar1 != 0;
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
  }
  return;
}



/* Entry: 000d3ef8; end: 000d4083;  */

void FUN_000d3ef8(void)

{
  FUN_000cdb6c();
  return;
}



/* Entry: 000d4084; end: 000d449f;  */

void FUN_000d4084(undefined8 param_1,long *param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined1 uVar2;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  uint7 uVar13;
  code *pcVar14;
  long lVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  byte abStack_78 [15];
  undefined1 uStack_69;
  long lStack_68;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar1 = *param_2;
  uVar18 = param_2[1];
  uVar12 = (uint)(uVar18 >> 0x20);
  uVar17 = uVar12 >> 0x1e;
  uVar2 = (undefined1)((ulong)lVar1 >> 8);
  uVar3 = (undefined1)((ulong)lVar1 >> 0x10);
  uVar4 = (undefined1)((ulong)lVar1 >> 0x18);
  uVar5 = (undefined1)((ulong)lVar1 >> 0x20);
  uVar6 = (undefined1)((ulong)lVar1 >> 0x28);
  uVar7 = (undefined1)((ulong)lVar1 >> 0x30);
  uVar8 = (undefined1)((ulong)lVar1 >> 0x38);
  if (uVar12 >> 0x1e < 2) {
    if (uVar17 == 0) {
      _swift_bridgeObjectRetain(param_5);
      FUN_00023358(lVar1,uVar18);
      abStack_78[8] = (byte)uVar18;
      abStack_78[9] = (byte)(uVar18 >> 8);
      abStack_78[10] = (byte)(uVar18 >> 0x10);
      abStack_78[0xb] = (byte)(uVar18 >> 0x18);
      abStack_78[0xc] = (byte)(uVar18 >> 0x20);
      abStack_78[0xd] = (byte)(uVar18 >> 0x28);
      abStack_78[0xe] = (byte)(uVar18 >> 0x30);
      abStack_78[0] = (byte)lVar1;
      abStack_78[1] = uVar2;
      abStack_78[2] = uVar3;
      abStack_78[3] = uVar4;
      abStack_78[4] = uVar5;
      abStack_78[5] = uVar6;
      abStack_78[6] = uVar7;
      abStack_78[7] = uVar8;
      FUN_000cf134(param_1,abStack_78,abStack_78 + abStack_78[0xe],param_3 & 0xffffffff,param_4,
                   param_5);
      lVar1 = CONCAT17(abStack_78[7],
                       CONCAT16(abStack_78[6],
                                CONCAT15(abStack_78[5],
                                         CONCAT14(abStack_78[4],
                                                  CONCAT13(abStack_78[3],
                                                           CONCAT12(abStack_78[2],
                                                                    CONCAT11(abStack_78[1],
                                                                             abStack_78[0])))))));
      uVar13 = CONCAT16(abStack_78[0xe],
                        CONCAT15(abStack_78[0xd],
                                 CONCAT14(abStack_78[0xc],
                                          CONCAT13(abStack_78[0xb],
                                                   CONCAT12(abStack_78[10],
                                                            CONCAT11(abStack_78[9],abStack_78[8]))))
                                ));
      _swift_bridgeObjectRelease_n(param_5,2);
      *param_2 = lVar1;
      param_2[1] = (ulong)uVar13;
    }
    else {
      uVar22 = uVar18 & 0x3fffffffffffffff;
      _swift_bridgeObjectRetain(param_5);
      func_0x00023304(lVar1,uVar18);
      FUN_00023358(lVar1,uVar18);
      param_2[1] = -0x4000000000000000;
      *param_2 = 0;
      FUN_00023358(0,0xc000000000000000);
      _swift_bridgeObjectRetain(param_5);
      uVar21 = uVar22;
      _swift_isUniquelyReferenced_nonNull_native();
      lVar20 = (long)(int)lVar1;
      lVar19 = lVar1 >> 0x20;
      uVar18 = uVar22;
      if ((uVar21 & 1) == 0) {
        if (lVar19 < lVar20) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0xd4488);
          (*pcVar14)();
        }
        _swift_retain();
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar18 == 0) {
          uVar18 = 0;
        }
        else {
          uVar21 = uVar18;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,uVar21)) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0xd448c);
            (*pcVar14)();
          }
          uVar18 = (lVar20 - uVar21) + uVar18;
        }
        uVar16 = 0;
        __s10Foundation13__DataStorageCMa();
        _swift_allocObject();
        __s10Foundation13__DataStorageC5bytes6length4copy11deallocator6offsetACSvSg_SiSbySv_SitcSgSitcfc
                  (uVar18,lVar19 - lVar20,1,0,0,lVar20,uVar16);
        _swift_release_n(uVar22,2);
      }
      if (lVar19 < lVar20) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0xd447c);
        (*pcVar14)();
      }
      uVar21 = uVar18;
      _swift_retain();
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (uVar21 == 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0xd44a0);
        (*pcVar14)();
      }
      uVar22 = uVar21;
      __s10Foundation13__DataStorageC7_offsetSivg();
      lVar11 = lVar20 - uVar22;
      if (SBORROW8(lVar20,uVar22)) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0xd4484);
        (*pcVar14)();
      }
      __s10Foundation13__DataStorageC7_lengthSivg();
      if (lVar19 - lVar20 <= (long)uVar22) {
        uVar22 = lVar19 - lVar20;
      }
      lVar11 = uVar21 + lVar11;
      FUN_000cf134(param_1,lVar11,lVar11 + uVar22,param_3 & 0xffffffff,param_4,param_5);
      _swift_bridgeObjectRelease_n(param_5,3);
      _swift_release(uVar18);
      *param_2 = lVar1;
      param_2[1] = uVar18 | 0x4000000000000000;
    }
  }
  else if (uVar17 == 2) {
    uVar21 = uVar18 & 0x3fffffffffffffff;
    _swift_bridgeObjectRetain(param_5);
    _swift_retain(lVar1);
    _swift_retain(uVar21);
    FUN_00023358(lVar1,uVar18);
    abStack_78[8] = (byte)uVar21;
    abStack_78[9] = (byte)(uVar21 >> 8);
    abStack_78[10] = (byte)(uVar21 >> 0x10);
    abStack_78[0xb] = (byte)(uVar21 >> 0x18);
    abStack_78[0xc] = (byte)(uVar21 >> 0x20);
    abStack_78[0xd] = (byte)(uVar21 >> 0x28);
    abStack_78[0xe] = (byte)(uVar21 >> 0x30);
    uStack_69 = (undefined1)(uVar21 >> 0x38);
    param_2[1] = -0x4000000000000000;
    *param_2 = 0;
    lVar19 = 0;
    abStack_78[0] = (byte)lVar1;
    abStack_78[1] = uVar2;
    abStack_78[2] = uVar3;
    abStack_78[3] = uVar4;
    abStack_78[4] = uVar5;
    abStack_78[5] = uVar6;
    abStack_78[6] = uVar7;
    abStack_78[7] = uVar8;
    FUN_00023358(0,0xc000000000000000);
    __s10Foundation4DataV10LargeSliceV21ensureUniqueReferenceyyF();
    lVar11 = CONCAT17(abStack_78[7],
                      CONCAT16(abStack_78[6],
                               CONCAT15(abStack_78[5],
                                        CONCAT14(abStack_78[4],
                                                 CONCAT13(abStack_78[3],
                                                          CONCAT12(abStack_78[2],
                                                                   CONCAT11(abStack_78[1],
                                                                            abStack_78[0])))))));
    uVar18 = CONCAT17(uStack_69,
                      CONCAT16(abStack_78[0xe],
                               CONCAT15(abStack_78[0xd],
                                        CONCAT14(abStack_78[0xc],
                                                 CONCAT13(abStack_78[0xb],
                                                          CONCAT12(abStack_78[10],
                                                                   CONCAT11(abStack_78[9],
                                                                            abStack_78[8])))))));
    lVar1 = *(long *)(lVar11 + 0x10);
    lVar20 = *(long *)(lVar11 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    if (lVar19 == 0) goto LAB_000d4490;
    lVar15 = lVar19;
    __s10Foundation13__DataStorageC7_offsetSivg();
    lVar9 = lVar1 - lVar15;
    if (SBORROW8(lVar1,lVar15)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0xd4478);
      (*pcVar14)();
    }
    lVar10 = lVar20 - lVar1;
    if (SBORROW8(lVar20,lVar1)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0xd4480);
      (*pcVar14)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if (lVar10 <= lVar15) {
      lVar15 = lVar10;
    }
    lVar19 = lVar19 + lVar9;
    FUN_000cf134(param_1,lVar19,lVar19 + lVar15,param_3 & 0xffffffff,param_4,param_5);
    _swift_bridgeObjectRelease_n(param_5,2);
    *param_2 = lVar11;
    param_2[1] = uVar18 | 0x8000000000000000;
  }
  else {
    abStack_78[8] = 0;
    abStack_78[9] = 0;
    abStack_78[10] = 0;
    abStack_78[0xb] = 0;
    abStack_78[0xc] = 0;
    abStack_78[0xd] = 0;
    abStack_78[0] = 0;
    abStack_78[1] = 0;
    abStack_78[2] = 0;
    abStack_78[3] = 0;
    abStack_78[4] = 0;
    abStack_78[5] = 0;
    abStack_78[6] = 0;
    abStack_78[7] = 0;
    FUN_000cf134(abStack_78,abStack_78,param_3,param_4,param_5);
    _swift_bridgeObjectRelease(param_5);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_000d4490:
  _swift_bridgeObjectRelease(param_5);
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0xd449c);
  (*pcVar14)();
}



/* Entry: 000d44a0; end: 000d47df;  */

void FUN_000d44a0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  uint7 uVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  byte abStack_78 [15];
  undefined1 uStack_69;
  long lStack_68;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar17 = *param_2;
  uVar2 = param_2[1];
  uVar13 = (uint)(uVar2 >> 0x20);
  uVar19 = uVar13 >> 0x1e;
  abStack_78[0] = (byte)lVar17;
  uVar4 = (undefined1)((ulong)lVar17 >> 8);
  uVar5 = (undefined1)((ulong)lVar17 >> 0x10);
  uVar6 = (undefined1)((ulong)lVar17 >> 0x18);
  uVar7 = (undefined1)((ulong)lVar17 >> 0x20);
  uVar8 = (undefined1)((ulong)lVar17 >> 0x28);
  uVar9 = (undefined1)((ulong)lVar17 >> 0x30);
  uVar10 = (undefined1)((ulong)lVar17 >> 0x38);
  abStack_78[1] = uVar4;
  abStack_78[2] = uVar5;
  abStack_78[3] = uVar6;
  abStack_78[4] = uVar7;
  abStack_78[5] = uVar8;
  abStack_78[6] = uVar9;
  abStack_78[7] = uVar10;
  if (uVar13 >> 0x1e < 2) {
    if (uVar19 == 0) {
      func_0x00023304(param_3,param_4);
      FUN_00023358(lVar17,uVar2);
      abStack_78[8] = (byte)uVar2;
      abStack_78[9] = (byte)(uVar2 >> 8);
      abStack_78[10] = (byte)(uVar2 >> 0x10);
      abStack_78[0xb] = (byte)(uVar2 >> 0x18);
      abStack_78[0xc] = (byte)(uVar2 >> 0x20);
      abStack_78[0xd] = (byte)(uVar2 >> 0x28);
      abStack_78[0xe] = (byte)(uVar2 >> 0x30);
      FUN_000d35a4(param_1,abStack_78,abStack_78 + abStack_78[0xe],param_3,param_4);
      lVar17 = CONCAT17(abStack_78[7],
                        CONCAT16(abStack_78[6],
                                 CONCAT15(abStack_78[5],
                                          CONCAT14(abStack_78[4],
                                                   CONCAT13(abStack_78[3],
                                                            CONCAT12(abStack_78[2],
                                                                     CONCAT11(abStack_78[1],
                                                                              abStack_78[0])))))));
      uVar15 = CONCAT16(abStack_78[0xe],
                        CONCAT15(abStack_78[0xd],
                                 CONCAT14(abStack_78[0xc],
                                          CONCAT13(abStack_78[0xb],
                                                   CONCAT12(abStack_78[10],
                                                            CONCAT11(abStack_78[9],abStack_78[8]))))
                                ));
      FUN_00023358(param_3,param_4);
      FUN_00023358(param_3,param_4);
      *param_2 = lVar17;
      param_2[1] = (ulong)uVar15;
    }
    else {
      uVar20 = uVar2 & 0x3fffffffffffffff;
      func_0x00023304(param_3,param_4);
      func_0x00023304(lVar17,uVar2);
      FUN_00023358(lVar17,uVar2);
      abStack_78[8] = (byte)uVar20;
      abStack_78[9] = (byte)(uVar20 >> 8);
      abStack_78[10] = (byte)(uVar20 >> 0x10);
      abStack_78[0xb] = (byte)(uVar20 >> 0x18);
      abStack_78[0xc] = (byte)(uVar20 >> 0x20);
      abStack_78[0xd] = (byte)(uVar20 >> 0x28);
      abStack_78[0xe] = (byte)(uVar20 >> 0x30);
      uStack_69 = (undefined1)(uVar20 >> 0x38);
      param_2[1] = -0x4000000000000000;
      *param_2 = 0;
      FUN_00023358(0,0xc000000000000000);
      FUN_000d47e0(param_1,abStack_78,param_3,param_4);
      FUN_00023358(param_3,param_4);
      *param_2 = CONCAT17(abStack_78[7],
                          CONCAT16(abStack_78[6],
                                   CONCAT15(abStack_78[5],
                                            CONCAT14(abStack_78[4],
                                                     CONCAT13(abStack_78[3],
                                                              CONCAT12(abStack_78[2],
                                                                       CONCAT11(abStack_78[1],
                                                                                abStack_78[0])))))))
      ;
      param_2[1] = CONCAT17(uStack_69,
                            CONCAT16(abStack_78[0xe],
                                     CONCAT15(abStack_78[0xd],
                                              CONCAT14(abStack_78[0xc],
                                                       CONCAT13(abStack_78[0xb],
                                                                CONCAT12(abStack_78[10],
                                                                         CONCAT11(abStack_78[9],
                                                                                  abStack_78[8])))))
                                    )) | 0x4000000000000000;
    }
  }
  else if (uVar19 == 2) {
    uVar20 = uVar2 & 0x3fffffffffffffff;
    func_0x00023304(param_3,param_4);
    _swift_retain(lVar17);
    _swift_retain(uVar20);
    FUN_00023358(lVar17,uVar2);
    abStack_78[8] = (byte)uVar20;
    abStack_78[9] = (byte)(uVar20 >> 8);
    abStack_78[10] = (byte)(uVar20 >> 0x10);
    abStack_78[0xb] = (byte)(uVar20 >> 0x18);
    abStack_78[0xc] = (byte)(uVar20 >> 0x20);
    abStack_78[0xd] = (byte)(uVar20 >> 0x28);
    abStack_78[0xe] = (byte)(uVar20 >> 0x30);
    uStack_69 = (undefined1)(uVar20 >> 0x38);
    param_2[1] = -0x4000000000000000;
    *param_2 = 0;
    lVar17 = 0;
    FUN_00023358(0,0xc000000000000000);
    __s10Foundation4DataV10LargeSliceV21ensureUniqueReferenceyyF();
    lVar14 = CONCAT17(abStack_78[7],
                      CONCAT16(abStack_78[6],
                               CONCAT15(abStack_78[5],
                                        CONCAT14(abStack_78[4],
                                                 CONCAT13(abStack_78[3],
                                                          CONCAT12(abStack_78[2],
                                                                   CONCAT11(abStack_78[1],
                                                                            abStack_78[0])))))));
    uVar2 = CONCAT17(uStack_69,
                     CONCAT16(abStack_78[0xe],
                              CONCAT15(abStack_78[0xd],
                                       CONCAT14(abStack_78[0xc],
                                                CONCAT13(abStack_78[0xb],
                                                         CONCAT12(abStack_78[10],
                                                                  CONCAT11(abStack_78[9],
                                                                           abStack_78[8])))))));
    lVar1 = *(long *)(lVar14 + 0x10);
    lVar3 = *(long *)(lVar14 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    if (lVar17 == 0) goto LAB_000d47d0;
    lVar18 = lVar17;
    __s10Foundation13__DataStorageC7_offsetSivg();
    lVar11 = lVar1 - lVar18;
    if (SBORROW8(lVar1,lVar18)) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0xd47c8);
      (*pcVar16)();
    }
    lVar12 = lVar3 - lVar1;
    if (SBORROW8(lVar3,lVar1)) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0xd47cc);
      (*pcVar16)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if (lVar12 <= lVar18) {
      lVar18 = lVar12;
    }
    lVar17 = lVar17 + lVar11;
    FUN_000d35a4(param_1,lVar17,lVar17 + lVar18,param_3,param_4);
    FUN_00023358(param_3,param_4);
    FUN_00023358(param_3,param_4);
    *param_2 = lVar14;
    param_2[1] = uVar2 | 0x8000000000000000;
  }
  else {
    abStack_78[8] = 0;
    abStack_78[9] = 0;
    abStack_78[10] = 0;
    abStack_78[0xb] = 0;
    abStack_78[0xc] = 0;
    abStack_78[0xd] = 0;
    abStack_78[0] = 0;
    abStack_78[1] = 0;
    abStack_78[2] = 0;
    abStack_78[3] = 0;
    abStack_78[4] = 0;
    abStack_78[5] = 0;
    abStack_78[6] = 0;
    abStack_78[7] = 0;
    FUN_000d35a4(abStack_78,abStack_78,param_3,param_4);
    FUN_00023358(param_3,param_4);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_000d47d0:
  FUN_00023358(param_3,param_4);
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0xd47e0);
  (*pcVar16)();
}



/* Entry: 000d47e0; end: 000d48b3;  */

void FUN_000d47e0(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  __s10Foundation4DataV11InlineSliceV21ensureUniqueReferenceyyF();
  lVar7 = (long)*param_2;
  iVar1 = param_2[1];
  if (iVar1 < *param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xd48ac);
    (*pcVar3)();
  }
  lVar6 = *(long *)(param_2 + 2);
  lVar4 = lVar6;
  _swift_retain();
  __s10Foundation13__DataStorageC6_bytesSvSgvg();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    __s10Foundation13__DataStorageC7_offsetSivg();
    lVar2 = lVar7 - lVar5;
    if (!SBORROW8(lVar7,lVar5)) {
      lVar7 = iVar1 - lVar7;
      __s10Foundation13__DataStorageC7_lengthSivg();
      if (lVar7 <= lVar5) {
        lVar5 = lVar7;
      }
      lVar4 = lVar4 + lVar2;
      FUN_000d35a4(param_1,lVar4,lVar4 + lVar5,param_3,param_4);
      _swift_release(lVar6);
      FUN_00023358(param_3,param_4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xd48b0);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0xd48b4);
  (*pcVar3)();
}



/* Entry: 000d48b4; end: 000d493b;  */

code * FUN_000d48b4(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x20;
  
  lVar1 = 0x50;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x50,&UNK_0000ede5);
  }
  *param_1 = lVar1;
  uVar2 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(uVar2);
  lVar3 = lVar1;
  FUN_000d4b84();
  *(long *)(lVar1 + 0x40) = lVar3;
  lVar3 = lVar1 + 0x20;
  FUN_000d4978(lVar3,param_2,uVar2);
  *(long *)(lVar1 + 0x48) = lVar3;
  return FUN_000d493c;
}



/* Entry: 000d493c; end: 000d4977;  */

void FUN_000d493c(long *param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *param_1;
  pcVar1 = *(code **)(lVar2 + 0x40);
  (**(code **)(lVar2 + 0x48))(lVar2 + 0x20,0);
  (*pcVar1)(lVar2,0);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar2);
  return;
}



/* Entry: 000d4978; end: 000d4aab;  */

undefined1  [16] FUN_000d4978(undefined8 *param_1,undefined *param_2,uint param_3)

{
  long lVar1;
  code *pcVar2;
  dword *pdVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  undefined1 auVar9 [16];
  
  pdVar3 = &section_00000068.offset;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    puVar5 = param_2;
    _malloc();
  }
  else {
    puVar5 = &UNK_00004d21;
    _swift_coroFrameAlloc();
  }
  *param_1 = pdVar3;
  *(undefined **)(pdVar3 + 0x1e) = param_2;
  *(long **)(pdVar3 + 0x20) = unaff_x20;
  lVar8 = *unaff_x20;
  puVar4 = param_2;
  FUN_000e1d94();
  *(byte *)(pdVar3 + 0x24) = (byte)puVar5 & 1;
  lVar6 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)puVar5 & 1;
  lVar1 = lVar6 + uVar7;
  if (SCARRY8(lVar6,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xd4a68);
    (*pcVar2)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar1) {
    param_3 = param_3 & 1;
    func_0x00121d20(lVar1);
    FUN_000e1d94();
    puVar4 = param_2;
    if (((uint)puVar5 & 1) != (param_3 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(PTR___sSiN_0099b2c0)
      ;
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xd4a3c);
      (*pcVar2)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x00121048();
    *(undefined **)(pdVar3 + 0x22) = puVar4;
    goto joined_r0x000d4a7c;
  }
  *(undefined **)(pdVar3 + 0x22) = puVar4;
joined_r0x000d4a7c:
  if (((ulong)puVar5 & 1) == 0) {
    *(undefined8 *)(pdVar3 + 8) = 0;
    *(undefined8 *)(pdVar3 + 2) = 0;
    *(undefined8 *)pdVar3 = 0;
    *(undefined8 *)(pdVar3 + 6) = 0;
    *(undefined8 *)(pdVar3 + 4) = 0;
  }
  else {
    FUN_000d4db4(*(long *)(*unaff_x20 + 0x38) + (long)puVar4 * 0x28,pdVar3);
  }
  auVar9._8_8_ = pdVar3;
  auVar9._0_8_ = FUN_000d4aac;
  return auVar9;
}



/* Entry: 000d4aac; end: 000d4b83;  */

void FUN_000d4aac(long *param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *param_1;
  func_0x000d4cd8(lVar2,lVar2 + 0x50,0xaedb70,&UNK_007d8040);
  bVar1 = *(byte *)(lVar2 + 0x90);
  if (*(long *)(lVar2 + 0x68) == 0) {
    func_0x000d4be8(lVar2 + 0x50,0xaedb70,&UNK_007d8040);
    if ((bVar1 & 1) != 0) {
      func_0x000f3eac(*(undefined8 *)(lVar2 + 0x88),**(undefined8 **)(lVar2 + 0x80));
    }
  }
  else {
    plVar3 = *(long **)(lVar2 + 0x80);
    FUN_000d4db4(lVar2 + 0x50,lVar2 + 0x28);
    if ((bVar1 & 1) == 0) {
      FUN_00120bd4(*(long *)(lVar2 + 0x88),*(undefined8 *)(lVar2 + 0x78),lVar2 + 0x28);
    }
    else {
      FUN_000d4db4(lVar2 + 0x28,*(long *)(*plVar3 + 0x38) + *(long *)(lVar2 + 0x88) * 0x28);
    }
  }
  func_0x000d4be8(lVar2,0xaedb70,&UNK_007d8040);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar2);
  return;
}



/* Entry: 000d4b84; end: 000d4ba7;  */

undefined1  [16] FUN_000d4b84(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined1 auVar1 [16];
  
  *param_1 = *unaff_x20;
  param_1[1] = unaff_x20;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = 0xd4b9c;
  return auVar1;
}



/* Entry: 000d4ba8; end: 000d4be7;  */

void FUN_000d4ba8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aedb60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d7ba8;
  _swift_getWitnessTable(&UNK_007d7ba8,&UNK_009ab010);
  puRam0000000000aedb60 = puVar1;
  return;
}



/* Entry: 000d4be8; end: 000d4db3;  */

undefined8 FUN_000d4be8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x000115a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 000d4db4; end: 000d4dcb;  */

undefined8 * FUN_000d4db4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 000d4dcc; end: 000d4e63;  */

void FUN_000d4dcc(ulong param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return;
  }
  if ((long)param_1 < 0xf) {
    FUN_00135504(param_1);
  }
  else {
    __s10Foundation13__DataStorageCMa();
    _swift_allocObject();
    __s10Foundation13__DataStorageC6lengthACSi_tcfc(param_1);
    if (0x7ffffffe < param_1) {
      lVar1 = 0;
      __s10Foundation4DataV14RangeReferenceCMa();
      _swift_allocObject();
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(ulong *)(lVar1 + 0x18) = param_1;
    }
  }
  return;
}



/* Entry: 000d4e64; end: 000d4ff3;  */

void FUN_000d4e64(void)

{
  func_0x000d3bec();
  return;
}



/* Entry: 000d4ff4; end: 000d5003;  */

bool FUN_000d4ff4(char param_1,char param_2)

{
  return param_1 == param_2;
}



/* Entry: 000d5004; end: 000d506b;  */

void FUN_000d5004(undefined8 param_1,undefined1 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 000d506c; end: 000d507f;  */

bool FUN_000d506c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 000d5080; end: 000d512b;  */

void FUN_000d5080(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000d512c; end: 000d512f;  */

void FUN_000d512c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aedb78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d7b40;
  _swift_getWitnessTable(&UNK_007d7b40,&UNK_009ab010);
  puRam0000000000aedb78 = puVar1;
  return;
}



/* Entry: 000d5130; end: 000d516f;  */

void FUN_000d5130(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aedb78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d7b40;
  _swift_getWitnessTable(&UNK_007d7b40,&UNK_009ab010);
  puRam0000000000aedb78 = puVar1;
  return;
}



/* Entry: 000d5170; end: 000d52e3;  */

void FUN_000d5170(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_0099b708)();
  return;
}



/* Entry: 000d52e4; end: 000d53db;  */

undefined1  [16] FUN_000d52e4(void)

{
  return ZEXT816(100);
}



/* Entry: 000d53dc; end: 000d53eb;  */

bool FUN_000d53dc(char param_1,char param_2)

{
  return param_1 == param_2;
}



/* Entry: 000d53ec; end: 000d5453;  */

void FUN_000d53ec(undefined8 param_1,undefined1 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 000d5454; end: 000d5467;  */

bool FUN_000d5454(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 000d5468; end: 000d5513;  */

void FUN_000d5468(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000d5514; end: 000d5523;  */

void FUN_000d5514(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_0099b708)();
  return;
}



/* Entry: 000d5524; end: 000d5723;  */

void FUN_000d5524(long param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long unaff_x21;
  undefined1 *puStack_48;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  FUN_0001393c(param_1,uVar2);
  uVar5 = 0xae8230;
  func_0x000115a8(0xae8230,&UNK_007d78c0);
  FUN_0010b7b8(&puStack_48,param_3,0,uVar2,uVar5,uVar3,&PTR_DAT_009ae8c0);
  if (unaff_x21 != 0) {
    return;
  }
  lVar14 = *(long *)(puStack_48 + 0x10);
  lVar6 = lVar14;
  func_0x0013b07c();
  puVar1 = (undefined1 *)(lVar6 + lVar14);
  if (SCARRY8(lVar6,lVar14)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0xd5720);
    (*pcVar4)();
  }
  if ((long)puVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0xd5724);
    (*pcVar4)();
  }
  puVar7 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar7 = puVar1;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (puVar1,PTR___ss5UInt8VN_0099b7a8);
    *(undefined1 **)(puVar7 + 0x10) = puVar1;
    _bzero(puVar7 + 0x20,puVar1);
  }
  pbVar9 = puVar7 + 0x20;
  uVar11 = *(ulong *)(puStack_48 + 0x10);
  pbVar10 = pbVar9;
  uVar12 = uVar11;
  if (0x7f < uVar11) {
    do {
      pbVar10 = pbVar9 + 1;
      *pbVar9 = (byte)uVar11 | 0x80;
      uVar12 = uVar11 >> 7;
      uVar13 = uVar11 >> 0xe;
      pbVar9 = pbVar10;
      uVar11 = uVar12;
    } while (uVar13 != 0);
  }
  *pbVar10 = (byte)uVar12;
  if (*(long *)(puStack_48 + 0x10) != 0) {
    _memmove(pbVar10 + 1,puStack_48 + 0x20);
  }
  _swift_bridgeObjectRelease();
  if (*(long *)(puVar7 + 0x10) == 0) {
    puVar8 = puStack_48;
    if (puVar1 == (undefined1 *)0x0) goto LAB_000d56d0;
  }
  else {
    puVar8 = param_2;
    func_0x00793c00();
    if (puVar8 == puVar1) {
LAB_000d56d0:
      _swift_bridgeObjectRelease(puVar7);
      return;
    }
    if (puVar8 == (undefined1 *)0xffffffffffffffff) {
      func_0x00791dc0();
      _objc_retainAutoreleasedReturnValue();
      if (param_2 == (undefined1 *)0x0) {
        FUN_000c88a0();
        _swift_allocError(&UNK_009ab1a0,param_2,0,0);
        *param_2 = 0;
      }
      goto LAB_000d56b8;
    }
  }
  FUN_000c88a0();
  _swift_allocError(&UNK_009ab1a0,puVar8,0,0);
  *puVar8 = 1;
LAB_000d56b8:
  _swift_willThrow();
  _swift_bridgeObjectRelease(puVar7);
  return;
}



/* Entry: 000d5724; end: 000d57d7;  */

void FUN_000d5724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9)

{
  long unaff_x21;
  
  (**(code **)(param_9 + 0x10))(param_8,param_9);
  FUN_000d57d8(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (unaff_x21 != 0) {
    (**(code **)(*(long *)(param_8 + -8) + 8))(param_1,param_8);
  }
  return;
}



/* Entry: 000d57d8; end: 000d5b63;  */

void FUN_000d57d8(undefined8 param_1,undefined1 *param_2,undefined8 param_3,uint param_4,
                 undefined8 param_5,uint param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x21;
  undefined *puVar11;
  long lVar12;
  undefined *puStack_58;
  
  puVar3 = param_2;
  FUN_000d5b64();
  if ((unaff_x21 == 0) && (puVar3 != (undefined1 *)0x0)) {
    if ((ulong)puVar3 >> 0x1f == 0) {
      puStack_58 = PTR___swiftEmptyArrayStorage_0099b8f0;
      puVar5 = puVar3;
      if ((undefined1 *)0xffffff < puVar3) {
        puVar5 = (undefined1 *)0x1000000;
      }
      puVar4 = puVar5;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                (puVar5,PTR___ss5UInt8VN_0099b7a8);
      *(undefined1 **)(puVar4 + 0x10) = puVar5;
      _bzero(puVar4 + 0x20,puVar5);
LAB_000d58d8:
      do {
        puVar5 = puVar4;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar5 & 1) == 0) {
          func_0x000c96e4();
          puVar5 = puVar4;
          if (*(long *)(puVar4 + 0x10) != 0) goto LAB_000d58f8;
LAB_000d5a20:
          FUN_000c88a0();
          _swift_allocError(&UNK_009ab1a0,puVar5,0,0);
          *puVar5 = 1;
LAB_000d5b2c:
          _swift_willThrow();
          puVar11 = puStack_58;
          _swift_bridgeObjectRelease(puVar4);
          _swift_bridgeObjectRelease(puVar11);
          return;
        }
        if (*(long *)(puVar4 + 0x10) == 0) goto LAB_000d5a20;
LAB_000d58f8:
        puVar6 = param_2;
        func_0x0078aec0();
        puVar11 = puStack_58;
        puVar5 = (undefined1 *)0x0;
        if (puVar6 == (undefined1 *)0x0) goto LAB_000d5a20;
        if (puVar6 == (undefined1 *)0xffffffffffffffff) {
          func_0x00791dc0();
          _objc_retainAutoreleasedReturnValue();
          if (param_2 == (undefined1 *)0x0) {
            FUN_000c88a0();
            _swift_allocError(&UNK_009ab1a0,param_2,0,0);
            *param_2 = 0;
          }
          goto LAB_000d5b2c;
        }
        uVar10 = *(ulong *)(puVar4 + 0x10);
        if ((long)uVar10 <= (long)puVar6) {
          lVar12 = *(long *)(puStack_58 + 0x10);
          if (SCARRY8(lVar12,uVar10)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0xd5b54);
            (*pcVar2)();
          }
          _swift_bridgeObjectRetain(puVar4);
          puVar7 = puVar11;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((int)puVar7 == 0) ||
             (uVar9 = *(ulong *)(puVar11 + 0x18) >> 1, (long)uVar9 < (long)(lVar12 + uVar10))) {
            FUN_000540b4();
            uVar9 = *(ulong *)(puVar7 + 0x18) >> 1;
            puVar11 = puVar7;
            if (*(long *)(puVar4 + 0x10) == 0) goto LAB_000d58ac;
LAB_000d59c8:
            if (uVar9 - *(long *)(puVar7 + 0x10) < uVar10) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0xd5b60);
              (*pcVar2)();
            }
            _memcpy(puVar7 + *(long *)(puVar7 + 0x10) + 0x20,puVar4 + 0x20,uVar10);
            _swift_bridgeObjectRelease(puVar4);
            if (uVar10 != 0) {
              if (SCARRY8(*(long *)(puVar7 + 0x10),uVar10)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0xd5b64);
                (*pcVar2)();
              }
              *(ulong *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + uVar10;
            }
          }
          else {
            puVar7 = puVar11;
            if (*(long *)(puVar4 + 0x10) != 0) goto LAB_000d59c8;
LAB_000d58ac:
            _swift_bridgeObjectRelease(puVar4);
            puVar7 = puVar11;
            if (uVar10 != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0xd5b5c);
              (*pcVar2)();
            }
          }
          puVar5 = puVar3 + -(long)puVar6;
          bVar1 = (long)puVar3 < (long)puVar6;
          puVar3 = puVar5;
          puStack_58 = puVar7;
          if (puVar5 == (undefined1 *)0x0 || bVar1) break;
          goto LAB_000d58d8;
        }
        if ((long)puVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0xd5b58);
          (*pcVar2)();
        }
        _swift_bridgeObjectRetain(puVar4);
        FUN_000c7cfc();
        puVar5 = puVar3 + -(long)puVar6;
        bVar1 = (long)puVar6 <= (long)puVar3;
        puVar3 = puVar5;
      } while (puVar5 != (undefined1 *)0x0 && bVar1);
      uVar8 = 0xae8230;
      func_0x000115a8(0xae8230,&UNK_007d78c0);
      FUN_0010ba38(&puStack_58,param_3,param_4 & 1,param_5,param_6 & 1,param_7,uVar8,param_8,
                   &PTR_DAT_009ae8c0);
      puVar11 = puStack_58;
      _swift_bridgeObjectRelease(puVar4);
      _swift_bridgeObjectRelease(puVar11);
    }
    else {
      FUN_000d4ba8();
      _swift_allocError(&UNK_009ab010,puVar3,0,0);
      *puVar3 = 3;
      _swift_willThrow();
    }
  }
  return;
}



/* Entry: 000d5b64; end: 000d5ec7;  */

ulong FUN_000d5b64(undefined8 *param_1)

{
  code *pcVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  
  uVar6 = 1;
  pbVar2 = (byte *)((long)&MACH_HEADER.magic + 1);
  _swift_slowAlloc(1,0xffffffffffffffff);
  puVar3 = param_1;
  func_0x0078aec0();
  if (puVar3 == (undefined8 *)0x0) {
    FUN_00124784();
    _swift_allocObject();
    *(undefined1 *)(puVar3 + 2) = 1;
    puVar3[3] = 0xd000000000000093;
    puVar3[4] = 0x80000000008b8b40;
    puVar3[5] = 0xd000000000000010;
    puVar3[6] = 0x80000000008b8af0;
    puVar3[7] = 0xd000000000000023;
    puVar3[8] = 0x80000000008b8b10;
    puVar3[9] = 0xf6;
    puVar4 = puVar3;
    FUN_000c7104();
    _swift_allocError(&UNK_009ae930,puVar4,0,0);
    *puVar4 = puVar3;
    goto LAB_000d5e64;
  }
  if (puVar3 == (undefined8 *)((long)&MACH_HEADER.magic + 1)) {
    uVar6 = (ulong)*pbVar2 & 0x7f;
    if (-1 < (char)*pbVar2) goto LAB_000d5bbc;
    puVar3 = param_1;
    func_0x0078aec0();
    if (puVar3 == (undefined8 *)0x0) {
LAB_000d5e40:
      puVar5 = (undefined1 *)0x0;
      FUN_000c88a0();
      _swift_allocError(&UNK_009ab1a0,puVar5,0,0);
      *puVar5 = 1;
      goto LAB_000d5e64;
    }
    if (puVar3 == (undefined8 *)((long)&MACH_HEADER.magic + 1)) {
      uVar6 = uVar6 | (ulong)((int)(char)*pbVar2 & 0x7f) << 7;
      if (-1 < (char)*pbVar2) goto LAB_000d5bbc;
      puVar3 = param_1;
      func_0x0078aec0();
      if (puVar3 == (undefined8 *)0x0) goto LAB_000d5e40;
      if (puVar3 == (undefined8 *)((long)&MACH_HEADER.magic + 1)) {
        uVar6 = uVar6 | (ulong)((int)(char)*pbVar2 & 0x7f) << 0xe;
        if (-1 < (char)*pbVar2) goto LAB_000d5bbc;
        puVar3 = param_1;
        func_0x0078aec0();
        if (puVar3 == (undefined8 *)0x0) goto LAB_000d5e40;
        if (puVar3 == (undefined8 *)((long)&MACH_HEADER.magic + 1)) {
          uVar6 = uVar6 | (ulong)((int)(char)*pbVar2 & 0x7f) << 0x15;
          if (-1 < (char)*pbVar2) goto LAB_000d5bbc;
          puVar3 = param_1;
          func_0x0078aec0();
          if (puVar3 == (undefined8 *)0x0) goto LAB_000d5e40;
          if (puVar3 == (undefined8 *)((long)&MACH_HEADER.magic + 1)) {
            uVar6 = uVar6 | (ulong)((int)(char)*pbVar2 & 0x7f) << 0x1c;
            if (-1 < (char)*pbVar2) goto LAB_000d5bbc;
            puVar3 = param_1;
            func_0x0078aec0();
            if (puVar3 == (undefined8 *)0x0) goto LAB_000d5e40;
            if (puVar3 == (undefined8 *)((long)&MACH_HEADER.magic + 1)) {
              uVar6 = uVar6 | (ulong)((int)(char)*pbVar2 & 0x7f) << 0x23;
              if (-1 < (char)*pbVar2) goto LAB_000d5bbc;
              puVar3 = param_1;
              func_0x0078aec0();
              if (puVar3 == (undefined8 *)0x0) goto LAB_000d5e40;
              if (puVar3 == (undefined8 *)((long)&MACH_HEADER.magic + 1)) {
                uVar6 = uVar6 | (ulong)((int)(char)*pbVar2 & 0x7f) << 0x2a;
                if (-1 < (char)*pbVar2) goto LAB_000d5bbc;
                puVar3 = param_1;
                func_0x0078aec0();
                if (puVar3 == (undefined8 *)0x0) goto LAB_000d5e40;
                if (puVar3 == (undefined8 *)((long)&MACH_HEADER.magic + 1)) {
                  uVar6 = uVar6 | (ulong)((int)(char)*pbVar2 & 0x7f) << 0x31;
                  if (-1 < (char)*pbVar2) goto LAB_000d5bbc;
                  puVar3 = param_1;
                  func_0x0078aec0();
                  if (puVar3 == (undefined8 *)0x0) goto LAB_000d5e40;
                  if (puVar3 == (undefined8 *)((long)&MACH_HEADER.magic + 1)) {
                    uVar6 = uVar6 | (ulong)((int)(char)*pbVar2 & 0x7f) << 0x38;
                    if (-1 < (char)*pbVar2) {
LAB_000d5bbc:
                      _swift_slowDealloc(pbVar2,0xffffffffffffffff,0xffffffffffffffff);
                      return uVar6;
                    }
                    puVar3 = param_1;
                    func_0x0078aec0();
                    if (puVar3 == (undefined8 *)0x0) goto LAB_000d5e40;
                    if (puVar3 == (undefined8 *)((long)&MACH_HEADER.magic + 1)) {
                      if ((char)*pbVar2 < '\0') {
                        FUN_000d4ba8();
                        _swift_allocError(&UNK_009ab010,puVar3,0,0);
                        *(undefined1 *)puVar3 = 3;
                        goto LAB_000d5e64;
                      }
                      uVar6 = uVar6 | (ulong)*pbVar2 << 0x3f;
                      goto LAB_000d5bbc;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (puVar3 != (undefined8 *)0xffffffffffffffff) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xd5e9c);
    (*pcVar1)();
  }
  func_0x00791dc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == (undefined8 *)0x0) {
    FUN_000c88a0();
    _swift_allocError(&UNK_009ab1a0,param_1,0,0);
    *(undefined1 *)param_1 = 0;
  }
LAB_000d5e64:
  _swift_willThrow();
  _swift_slowDealloc(pbVar2,0xffffffffffffffff,0xffffffffffffffff);
  return uVar6;
}



/* Entry: 000d5ec8; end: 000d5ed3;  */

undefined8 FUN_000d5ec8(void)

{
  long *unaff_x20;
  
  return *(undefined8 *)(*unaff_x20 + 0x10);
}



/* Entry: 000d5ed4; end: 000d60f7;  */

undefined * FUN_000d5ed4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0xd5ff0);
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
    puVar3 = (undefined *)0xaedbc8;
    func_0x000115a8(0xaedbc8,&UNK_007d7d40);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&UNK_009b4018);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x30 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 000d60f8; end: 000d610b;  */

undefined * FUN_000d60f8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  puVar2 = (undefined *)0xaed1c8;
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0xd6418);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar6) {
    uVar4 = uVar6;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar4 != 0) {
    func_0x000115a8(0xaed1c8,&UNK_007d69a0);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar5 = puVar3 + -0x1d;
    if (0x1f < (long)puVar3) {
      puVar5 = puVar3 + -0x20;
    }
    *(ulong *)(puVar2 + 0x10) = uVar6;
    *(long *)(puVar2 + 0x18) = ((long)puVar5 >> 2) << 1;
    puVar5 = puVar2;
  }
  puVar2 = puVar5 + 0x20;
  puVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar2,puVar3,uVar6 << 2);
  }
  else {
    if (puVar5 != param_4 || puVar3 + uVar6 * 4 <= puVar2) {
      _memmove(puVar2,puVar3,uVar6 << 2);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar5;
}



/* Entry: 000d610c; end: 000d630b;  */

undefined * FUN_000d610c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0xd620c);
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
    puVar3 = (undefined *)0xaedbb8;
    func_0x000115a8(0xaedbb8,&UNK_007d7d30);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x1d;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 2) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 2);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 4 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 2);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 000d630c; end: 000d631f;  */

undefined * FUN_000d630c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  puVar2 = (undefined *)0xaedba8;
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0xd6418);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar6) {
    uVar4 = uVar6;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar4 != 0) {
    func_0x000115a8(0xaedba8,&UNK_007d7d20);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar5 = puVar3 + -0x1d;
    if (0x1f < (long)puVar3) {
      puVar5 = puVar3 + -0x20;
    }
    *(ulong *)(puVar2 + 0x10) = uVar6;
    *(long *)(puVar2 + 0x18) = ((long)puVar5 >> 2) << 1;
    puVar5 = puVar2;
  }
  puVar2 = puVar5 + 0x20;
  puVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar2,puVar3,uVar6 << 2);
  }
  else {
    if (puVar5 != param_4 || puVar3 + uVar6 * 4 <= puVar2) {
      _memmove(puVar2,puVar3,uVar6 << 2);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar5;
}



/* Entry: 000d6320; end: 000d6417;  */

undefined *
FUN_000d6320(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
            undefined8 param_6)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xd6418);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar6) {
    uVar4 = uVar6;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar4 != 0) {
    func_0x000115a8(param_5,param_6);
    _swift_allocObject();
    puVar3 = param_5;
    _malloc_size();
    puVar5 = puVar3 + -0x1d;
    if (0x1f < (long)puVar3) {
      puVar5 = puVar3 + -0x20;
    }
    *(ulong *)(param_5 + 0x10) = uVar6;
    *(long *)(param_5 + 0x18) = ((long)puVar5 >> 2) << 1;
    puVar5 = param_5;
  }
  puVar3 = puVar5 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar3,puVar1,uVar6 << 2);
  }
  else {
    if (puVar5 != param_4 || puVar1 + uVar6 * 4 <= puVar3) {
      _memmove(puVar3,puVar1,uVar6 << 2);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar5;
}



/* Entry: 000d6418; end: 000d642b;  */

undefined * FUN_000d6418(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  puVar2 = (undefined *)0xaedba0;
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0xd6a74);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar6) {
    uVar4 = uVar6;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar4 != 0) {
    func_0x000115a8(0xaedba0,&UNK_007d7d18);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar5 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar5 = puVar3 + -0x20;
    }
    *(ulong *)(puVar2 + 0x10) = uVar6;
    *(long *)(puVar2 + 0x18) = ((long)puVar5 >> 3) << 1;
    puVar5 = puVar2;
  }
  puVar2 = puVar5 + 0x20;
  puVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar2,puVar3,uVar6 << 3);
  }
  else {
    if (puVar5 != param_4 || puVar3 + uVar6 * 8 <= puVar2) {
      _memmove(puVar2,puVar3,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar5;
}



/* Entry: 000d642c; end: 000d6823;  */

undefined * FUN_000d642c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0xd651c);
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
    puVar3 = (undefined *)0xaedb98;
    func_0x000115a8(0xaedb98,&UNK_007d7d10);
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



/* Entry: 000d6824; end: 000d6967;  */

undefined * FUN_000d6824(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0xd6968);
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
    puVar3 = (undefined *)0xaedbe0;
    func_0x000115a8(0xaedbe0,&UNK_007da290);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0xaedb58;
    func_0x000115a8(0xaedb58,&UNK_007d7b00);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 000d6968; end: 000d697b;  */

undefined * FUN_000d6968(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  puVar2 = (undefined *)0xaedb88;
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0xd6a74);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar6) {
    uVar4 = uVar6;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar4 != 0) {
    func_0x000115a8(0xaedb88,&UNK_007d7d00);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar5 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar5 = puVar3 + -0x20;
    }
    *(ulong *)(puVar2 + 0x10) = uVar6;
    *(long *)(puVar2 + 0x18) = ((long)puVar5 >> 3) << 1;
    puVar5 = puVar2;
  }
  puVar2 = puVar5 + 0x20;
  puVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar2,puVar3,uVar6 << 3);
  }
  else {
    if (puVar5 != param_4 || puVar3 + uVar6 * 8 <= puVar2) {
      _memmove(puVar2,puVar3,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar5;
}



/* Entry: 000d697c; end: 000d6a73;  */

undefined *
FUN_000d697c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
            undefined8 param_6)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xd6a74);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar6) {
    uVar4 = uVar6;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar4 != 0) {
    func_0x000115a8(param_5,param_6);
    _swift_allocObject();
    puVar3 = param_5;
    _malloc_size();
    puVar5 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar5 = puVar3 + -0x20;
    }
    *(ulong *)(param_5 + 0x10) = uVar6;
    *(long *)(param_5 + 0x18) = ((long)puVar5 >> 3) << 1;
    puVar5 = param_5;
  }
  puVar3 = puVar5 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar3,puVar1,uVar6 << 3);
  }
  else {
    if (puVar5 != param_4 || puVar1 + uVar6 * 8 <= puVar3) {
      _memmove(puVar3,puVar1,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar5;
}



/* Entry: 000d6a74; end: 000d6a77;  */

void FUN_000d6a74(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aedb80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d7c38;
  _swift_getWitnessTable(&UNK_007d7c38,&UNK_009ab1a0);
  puRam0000000000aedb80 = puVar1;
  return;
}



/* Entry: 000d6a78; end: 000d6ab7;  */

void FUN_000d6a78(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aedb80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d7c38;
  _swift_getWitnessTable(&UNK_007d7c38,&UNK_009ab1a0);
  puRam0000000000aedb80 = puVar1;
  return;
}



/* Entry: 000d6ab8; end: 000d6ccf;  */

undefined1  [16] FUN_000d6ab8(void)

{
  return ZEXT816(0x9ab110);
}



/* Entry: 000d6cd0; end: 000d6edf;  */

void FUN_000d6cd0(ulong param_1,ulong param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  ulong uVar9;
  ulong uStack_70;
  ulong uStack_68;
  
  if ((param_2 >> 0x3c & 1) != 0) {
    uVar8 = param_1;
    __sSS8UTF8ViewV13_foreignCountSiyF();
    pbVar4 = (byte *)*unaff_x20;
    uVar9 = uVar8;
    pbVar3 = pbVar4;
    if (0x7f < uVar8) {
      do {
        pbVar4 = pbVar3 + 1;
        *pbVar3 = (byte)uVar9 | 0x80;
        uVar8 = uVar9 >> 7;
        uVar6 = uVar9 >> 0xe;
        uVar9 = uVar8;
        pbVar3 = pbVar4;
      } while (uVar6 != 0);
    }
    *pbVar4 = (byte)uVar8;
    *unaff_x20 = (long)(pbVar4 + 1);
    uVar8 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar8 = param_2 >> 0x38 & 0xf;
    }
    if (uVar8 == 0) {
      return;
    }
    uVar9 = 0xf;
    do {
      if ((uVar9 & 0xc) == 4L << (param_1 >> 0x3b & 1)) {
        uVar6 = uVar9;
        FUN_0002269c(uVar9,param_1,param_2);
        if (uVar8 <= uVar6 >> 0x10) goto LAB_000d6edc;
        __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
        uVar2 = (undefined1)uVar6;
        FUN_0002269c(uVar9,param_1,param_2);
        uVar6 = uVar9 >> 0x10;
      }
      else {
        uVar6 = uVar9 >> 0x10;
        if (uVar8 <= uVar6) {
LAB_000d6edc:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0xd6ee0);
          (*pcVar1)();
        }
        uVar7 = uVar9;
        __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar9,param_1,param_2);
        uVar2 = (undefined1)uVar7;
      }
      if (uVar8 <= uVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0xd6ecc);
        (*pcVar1)();
      }
      __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF(uVar9,param_1,param_2);
      puVar5 = (undefined1 *)*unaff_x20;
      *puVar5 = uVar2;
      *unaff_x20 = (long)(puVar5 + 1);
      if (uVar8 * 4 - (uVar9 >> 0xe) == 0) {
        return;
      }
    } while( true );
  }
  if ((param_2 >> 0x3d & 1) == 0) {
    if ((param_1 >> 0x3c & 1) == 0) {
      __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
      uVar8 = param_2;
    }
    else {
      uVar8 = param_1 & 0xffffffffffff;
      param_1 = (param_2 & 0xfffffffffffffff) + 0x20;
    }
    pbVar3 = (byte *)*unaff_x20;
    pbVar4 = pbVar3;
    uVar9 = uVar8;
    uVar6 = uVar8;
    if (0x7f < uVar8) {
      do {
        pbVar4 = pbVar3 + 1;
        *pbVar3 = (byte)uVar9 | 0x80;
        uVar6 = uVar9 >> 7;
        uVar7 = uVar9 >> 0xe;
        pbVar3 = pbVar4;
        uVar9 = uVar6;
      } while (uVar7 != 0);
    }
    pbVar3 = pbVar4 + 1;
    *pbVar4 = (byte)uVar6;
    *unaff_x20 = (long)pbVar3;
    if (param_1 == 0) {
      uVar8 = 0;
      goto LAB_000d6d88;
    }
    if (uVar8 == 0) goto LAB_000d6d88;
    _memmove(pbVar3,param_1,uVar8);
  }
  else {
    uVar8 = param_2 >> 0x38 & 0xf;
    uStack_68 = param_2 & 0xffffffffffffff;
    pbVar3 = (undefined1 *)*unaff_x20 + 1;
    *(undefined1 *)*unaff_x20 = (char)uVar8;
    *unaff_x20 = (long)pbVar3;
    if (uVar8 == 0) goto LAB_000d6d88;
    uStack_70 = param_1;
    _memcpy(pbVar3,&uStack_70,uVar8);
  }
  pbVar3 = (byte *)*unaff_x20;
LAB_000d6d88:
  *unaff_x20 = (long)(pbVar3 + uVar8);
  return;
}



/* Entry: 000d6ee0; end: 000d6f87;  */

uint FUN_000d6ee0(long *param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 != 1) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + 2;
  }
  return (uint)(*param_1 == 0);
}



/* Entry: 000d6f88; end: 000d6fef;  */

void FUN_000d6f88(undefined8 param_1,undefined1 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 000d6ff0; end: 000d7013;  */

bool FUN_000d6ff0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 000d7014; end: 000d70bf;  */

void FUN_000d7014(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000d70c0; end: 000d70c3;  */

void FUN_000d70c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aedbe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d7d70;
  _swift_getWitnessTable(&UNK_007d7d70,&UNK_009ab310);
  puRam0000000000aedbe8 = puVar1;
  return;
}



/* Entry: 000d70c4; end: 000d7103;  */

void FUN_000d70c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aedbe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d7d70;
  _swift_getWitnessTable(&UNK_007d7d70,&UNK_009ab310);
  puRam0000000000aedbe8 = puVar1;
  return;
}



/* Entry: 000d7104; end: 000d7267;  */

int FUN_000d7104(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_000d7180;
        goto LAB_000d7164;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_000d7164:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_000d7180:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 000d7268; end: 000d73f3;  */

uint FUN_000d7268(uint param_1)

{
  return param_1 & 1;
}



/* Entry: 000d73f4; end: 000d774f;  */

undefined1  [16] FUN_000d73f4(void)

{
  return ZEXT816(0x9ab410);
}



/* Entry: 000d7750; end: 000d781f;  */

void FUN_000d7750(ulong param_1,ulong param_2,uint param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  
  if (param_3 << 3 < 0x80) {
    lVar4 = 1;
  }
  else if (param_3 << 3 < 0x4000) {
    lVar4 = 2;
  }
  else if ((param_3 & 0x1fffffff) >> 0x12 == 0) {
    lVar4 = 3;
  }
  else if ((param_3 & 0x1fffffff) >> 0x19 == 0) {
    lVar4 = 4;
  }
  else {
    lVar4 = 5;
  }
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      param_1 = param_1 & 0xffffffffffff;
    }
    else {
      param_1 = param_2 >> 0x38 & 0xf;
    }
  }
  else {
    __sSS8UTF8ViewV13_foreignCountSiyF();
  }
  uVar3 = param_1;
  func_0x0013afac();
  if (SCARRY8(lVar4,uVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xd7818);
    (*pcVar2)();
  }
  lVar1 = lVar4 + uVar3 + param_1;
  if (SCARRY8(lVar4 + uVar3,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xd781c);
    (*pcVar2)();
  }
  if (!SCARRY8(*unaff_x20,lVar1)) {
    *unaff_x20 = *unaff_x20 + lVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0xd7820);
  (*pcVar2)();
}



/* Entry: 000d7820; end: 000d7903;  */

void FUN_000d7820(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  long *unaff_x20;
  ulong uVar8;
  
  lVar1 = 4;
  if ((param_3 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar2 = 3;
  if (0x1fffff < param_3 << 3) {
    lVar2 = lVar1;
  }
  if ((param_3 & 0x1fffffff) >> 0xb == 0) {
    lVar2 = 2;
  }
  lVar1 = 1;
  if (0x7f < param_3 << 3) {
    lVar1 = lVar2;
  }
  uVar3 = (uint)(param_2 >> 0x20);
  uVar6 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar6 == 0) {
      uVar8 = param_2 >> 0x30 & 0xff;
    }
    else {
      iVar7 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar7,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0xd7904);
        (*pcVar4)();
      }
      uVar8 = (ulong)(iVar7 - (int)param_1);
    }
  }
  else if (uVar6 == 2) {
    uVar8 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0xd78a0);
      (*pcVar4)();
    }
  }
  else {
    uVar8 = 0;
  }
  uVar5 = uVar8;
  func_0x0013afac();
  if (SCARRY8(lVar1,uVar5)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0xd78f8);
    (*pcVar4)();
  }
  lVar2 = lVar1 + uVar5 + uVar8;
  if (SCARRY8(lVar1 + uVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0xd78fc);
    (*pcVar4)();
  }
  if (!SCARRY8(*unaff_x20,lVar2)) {
    *unaff_x20 = *unaff_x20 + lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0xd7900);
  (*pcVar4)();
}



/* Entry: 000d7904; end: 000d7f9f;  */

void FUN_000d7904(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  long *unaff_x20;
  
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar7 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar7 = lVar1;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar7 = 2;
  }
  lVar1 = 1;
  if (0x7f < param_2 << 3) {
    lVar1 = lVar7;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    puVar9 = (uint *)(param_1 + 0x20);
    lVar10 = lVar7;
    do {
      uVar4 = *puVar9;
      if ((int)uVar4 < 0) {
        bVar6 = SCARRY8(lVar8,10);
        lVar8 = lVar8 + 10;
        if (bVar6) goto LAB_000d79f4;
      }
      else if (uVar4 < 0x80) {
        bVar6 = SCARRY8(lVar8,1);
        lVar8 = lVar8 + 1;
        if (bVar6) {
LAB_000d79f4:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0xd79f8);
          (*pcVar5)();
        }
      }
      else {
        lVar2 = 4;
        if (uVar4 >> 0x1c != 0) {
          lVar2 = 5;
        }
        lVar3 = 3;
        if (0x1fffff < uVar4) {
          lVar3 = lVar2;
        }
        if (uVar4 >> 0xe == 0) {
          lVar3 = 2;
        }
        bVar6 = SCARRY8(lVar8,lVar3);
        lVar8 = lVar8 + lVar3;
        if (bVar6) goto LAB_000d79f4;
      }
      lVar10 = lVar10 + -1;
      puVar9 = puVar9 + 1;
    } while (lVar10 != 0);
  }
  lVar10 = lVar1 * lVar7;
  if (SUB168(SEXT816(lVar1) * SEXT816(lVar7),8) != lVar10 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0xd79fc);
    (*pcVar5)();
  }
  if (SCARRY8(lVar10,lVar8)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0xd7a00);
    (*pcVar5)();
  }
  if (SCARRY8(*unaff_x20,lVar10 + lVar8)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0xd7a04);
    (*pcVar5)();
  }
  *unaff_x20 = *unaff_x20 + lVar10 + lVar8;
  return;
}



/* Entry: 000d7fa0; end: 000d8117;  */

void FUN_000d7fa0(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  ulong *puVar10;
  
  lVar8 = 0;
  lVar2 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar2 = 5;
  }
  lVar6 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar6 = lVar2;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar6 = 2;
  }
  lVar2 = 1;
  if (0x7f < param_2 << 3) {
    lVar2 = lVar6;
  }
  lVar9 = *(long *)(param_1 + 0x10);
  puVar10 = (ulong *)(param_1 + 0x28);
  lVar6 = lVar9 + 1;
  do {
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
      lVar6 = lVar2 * lVar9;
      if (SUB168(SEXT816(lVar2) * SEXT816(lVar9),8) != lVar6 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xd8110);
        (*pcVar3)();
      }
      if (SCARRY8(lVar6,lVar8)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xd8114);
        (*pcVar3)();
      }
      if (SCARRY8(*unaff_x20,lVar6 + lVar8)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xd8118);
        (*pcVar3)();
      }
      *unaff_x20 = *unaff_x20 + lVar6 + lVar8;
      return;
    }
    uVar4 = puVar10[-1];
    uVar7 = *puVar10;
    if ((uVar7 >> 0x3c & 1) == 0) {
      if ((uVar7 >> 0x3d & 1) == 0) {
        uVar4 = uVar4 & 0xffffffffffff;
        if (0x7f < uVar4) goto LAB_000d8020;
      }
      else {
        uVar4 = uVar7 >> 0x38 & 0xf;
      }
LAB_000d8048:
      lVar5 = 1;
    }
    else {
      __sSS8UTF8ViewV13_foreignCountSiyF();
      if (uVar4 < 0x80) goto LAB_000d8048;
LAB_000d8020:
      if ((long)uVar4 < 0) {
        lVar5 = 10;
      }
      else if (uVar4 >> 0x23 == 0) {
        if (uVar4 < 0x200000) {
          lVar5 = 2;
          if (uVar4 < 0x4000) goto LAB_000d804c;
        }
        else {
          lVar5 = 4;
          uVar7 = uVar4;
LAB_000d8098:
          if (uVar7 >> 0x1c == 0) goto LAB_000d804c;
        }
LAB_000d80a8:
        lVar5 = lVar5 + 1;
      }
      else {
        if (uVar4 >> 0x31 != 0) {
          uVar7 = uVar4 >> 0x1c;
          lVar5 = 8;
          goto LAB_000d8098;
        }
        if (uVar4 >> 0x2a != 0) {
          lVar5 = 6;
          goto LAB_000d80a8;
        }
        lVar5 = 6;
      }
    }
LAB_000d804c:
    lVar1 = lVar8 + lVar5;
    if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xd8108);
      (*pcVar3)();
    }
    puVar10 = puVar10 + 2;
    lVar8 = lVar1 + uVar4;
    if (SCARRY8(lVar1,uVar4)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xd810c);
      (*pcVar3)();
    }
  } while( true );
}



/* Entry: 000d8118; end: 000d829f;  */

void FUN_000d8118(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long *unaff_x20;
  
  lVar5 = 0;
  lVar2 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar2 = 5;
  }
  lVar8 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar8 = lVar2;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar8 = 2;
  }
  lVar2 = 1;
  if (0x7f < param_2 << 3) {
    lVar2 = lVar8;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  puVar7 = (ulong *)(param_1 + 0x28);
  lVar8 = lVar6 + 1;
  do {
    lVar8 = lVar8 + -1;
    if (lVar8 == 0) {
      lVar8 = lVar2 * lVar6;
      if (SUB168(SEXT816(lVar2) * SEXT816(lVar6),8) != lVar8 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0xd8298);
        (*pcVar4)();
      }
      if (!SCARRY8(lVar8,lVar5)) {
        if (!SCARRY8(*unaff_x20,lVar8 + lVar5)) {
          *unaff_x20 = *unaff_x20 + lVar8 + lVar5;
          return;
        }
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0xd82a0);
        (*pcVar4)();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0xd829c);
      (*pcVar4)();
    }
    uVar13 = puVar7[-1];
    uVar3 = (uint)(*puVar7 >> 0x20);
    uVar12 = uVar3 >> 0x1e;
    if (uVar3 >> 0x1e < 2) {
      if (uVar12 == 0) {
        uVar9 = *puVar7 >> 0x30 & 0xff;
      }
      else {
        iVar10 = (int)(uVar13 >> 0x20);
        if (SBORROW4(iVar10,(int)uVar13)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0xd8290);
          (*pcVar4)();
        }
        uVar9 = (ulong)(iVar10 - (int)uVar13);
      }
joined_r0x000d81a8:
      if (uVar9 < 0x80) {
        lVar11 = 1;
      }
      else if ((long)uVar9 < 0) {
        lVar11 = 10;
      }
      else if (uVar9 >> 0x23 == 0) {
        if (uVar9 < 0x200000) {
          lVar11 = 2;
          if (uVar9 < 0x4000) goto LAB_000d8244;
        }
        else {
          lVar11 = 4;
          uVar13 = uVar9;
LAB_000d8230:
          if (uVar13 >> 0x1c == 0) goto LAB_000d8244;
        }
LAB_000d8240:
        lVar11 = lVar11 + 1;
      }
      else {
        if (uVar9 >> 0x31 != 0) {
          uVar13 = uVar9 >> 0x1c;
          lVar11 = 8;
          goto LAB_000d8230;
        }
        if (uVar9 >> 0x2a != 0) {
          lVar11 = 6;
          goto LAB_000d8240;
        }
        lVar11 = 6;
      }
    }
    else {
      if (uVar12 == 2) {
        uVar9 = *(long *)(uVar13 + 0x18) - *(long *)(uVar13 + 0x10);
        if (SBORROW8(*(long *)(uVar13 + 0x18),*(long *)(uVar13 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0xd8294);
          (*pcVar4)();
        }
        goto joined_r0x000d81a8;
      }
      uVar9 = 0;
      lVar11 = 1;
    }
LAB_000d8244:
    lVar1 = lVar5 + lVar11;
    if (SCARRY8(lVar5,lVar11)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0xd828c);
      (*pcVar4)();
    }
    puVar7 = puVar7 + 2;
    lVar5 = lVar1 + uVar9;
    if (SCARRY8(lVar1,uVar9)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0xd825c);
      (*pcVar4)();
    }
  } while( true );
}



/* Entry: 000d82a0; end: 000d83bf;  */

void FUN_000d82a0(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  uint *puVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar2 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar2 = 5;
  }
  lVar7 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar7 = lVar2;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar7 = 2;
  }
  lVar2 = 1;
  if (0x7f < param_2 << 3) {
    lVar2 = lVar7;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    puVar8 = (uint *)(param_1 + 0x20);
    do {
      uVar4 = *puVar8;
      if ((int)uVar4 < 0) {
        bVar6 = SCARRY8(lVar9,10);
        lVar9 = lVar9 + 10;
        if (bVar6) goto LAB_000d83b0;
      }
      else if (uVar4 < 0x80) {
        bVar6 = SCARRY8(lVar9,1);
        lVar9 = lVar9 + 1;
        if (bVar6) {
LAB_000d83b0:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0xd83b4);
          (*pcVar5)();
        }
      }
      else {
        lVar1 = 4;
        if (uVar4 >> 0x1c != 0) {
          lVar1 = 5;
        }
        lVar3 = 3;
        if (0x1fffff < uVar4) {
          lVar3 = lVar1;
        }
        if (uVar4 >> 0xe == 0) {
          lVar3 = 2;
        }
        bVar6 = SCARRY8(lVar9,lVar3);
        lVar9 = lVar9 + lVar3;
        if (bVar6) goto LAB_000d83b0;
      }
      lVar7 = lVar7 + -1;
      puVar8 = puVar8 + 1;
    } while (lVar7 != 0);
  }
  lVar7 = lVar9;
  func_0x0013afac();
  if (SCARRY8(lVar2,lVar7)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0xd83b8);
    (*pcVar5)();
  }
  lVar1 = lVar2 + lVar7 + lVar9;
  if (SCARRY8(lVar2 + lVar7,lVar9)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0xd83bc);
    (*pcVar5)();
  }
  if (SCARRY8(*unaff_x20,lVar1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0xd83c0);
    (*pcVar5)();
  }
  *unaff_x20 = *unaff_x20 + lVar1;
  return;
}



/* Entry: 000d83c0; end: 000d84cf;  */

void FUN_000d83c0(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar5 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar5 = lVar1;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar5 = 2;
  }
  lVar1 = 1;
  if (0x7f < param_2 << 3) {
    lVar1 = lVar5;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    piVar6 = (int *)(param_1 + 0x20);
    do {
      uVar2 = *piVar6 << 1 ^ *piVar6 >> 0x1f;
      if (uVar2 < 0x80) {
        lVar7 = 1;
      }
      else if (uVar2 >> 0xe == 0) {
        lVar7 = 2;
      }
      else if (uVar2 < 0x200000) {
        lVar7 = 3;
      }
      else {
        lVar7 = 4;
        if (uVar2 >> 0x1c != 0) {
          lVar7 = 5;
        }
      }
      bVar4 = SCARRY8(lVar8,lVar7);
      lVar8 = lVar8 + lVar7;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xd84c4);
        (*pcVar3)();
      }
      lVar5 = lVar5 + -1;
      piVar6 = piVar6 + 1;
    } while (lVar5 != 0);
  }
  lVar5 = lVar8;
  func_0x0013afac();
  if (SCARRY8(lVar1,lVar5)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xd84c8);
    (*pcVar3)();
  }
  lVar7 = lVar1 + lVar5 + lVar8;
  if (SCARRY8(lVar1 + lVar5,lVar8)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xd84cc);
    (*pcVar3)();
  }
  if (SCARRY8(*unaff_x20,lVar7)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xd84d0);
    (*pcVar3)();
  }
  *unaff_x20 = *unaff_x20 + lVar7;
  return;
}



/* Entry: 000d84d0; end: 000d8617;  */

void FUN_000d84d0(long param_1,uint param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar4 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar4 = lVar1;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar4 = 2;
  }
  lVar1 = 1;
  if (0x7f < param_2 << 3) {
    lVar1 = lVar4;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    plVar5 = (long *)(param_1 + 0x20);
    do {
      uVar6 = *plVar5 << 1 ^ *plVar5 >> 0x3f;
      if (uVar6 < 0x80) {
        lVar7 = 1;
      }
      else if ((long)uVar6 < 0) {
        lVar7 = 10;
      }
      else if (uVar6 >> 0x23 == 0) {
        if (uVar6 < 0x200000) {
          lVar7 = 2;
          if (uVar6 < 0x4000) goto LAB_000d85b4;
        }
        else {
          lVar7 = 4;
          uVar6 = uVar6 >> 0x1c;
joined_r0x000d85ac:
          if (uVar6 == 0) goto LAB_000d85b4;
        }
LAB_000d85b0:
        lVar7 = lVar7 + 1;
      }
      else {
        if (uVar6 >> 0x31 != 0) {
          lVar7 = 8;
          uVar6 = uVar6 >> 0x38;
          goto joined_r0x000d85ac;
        }
        lVar7 = 6;
        if (uVar6 >> 0x2a != 0) goto LAB_000d85b0;
      }
LAB_000d85b4:
      bVar3 = SCARRY8(lVar8,lVar7);
      lVar8 = lVar8 + lVar7;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xd860c);
        (*pcVar2)();
      }
      lVar4 = lVar4 + -1;
      plVar5 = plVar5 + 1;
    } while (lVar4 != 0);
  }
  lVar4 = lVar8;
  func_0x0013afac();
  if (SCARRY8(lVar1,lVar4)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xd8610);
    (*pcVar2)();
  }
  lVar7 = lVar1 + lVar4 + lVar8;
  if (!SCARRY8(lVar1 + lVar4,lVar8)) {
    if (!SCARRY8(*unaff_x20,lVar7)) {
      *unaff_x20 = *unaff_x20 + lVar7;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xd8618);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0xd8614);
  (*pcVar2)();
}



/* Entry: 000d8618; end: 000d871b;  */

void FUN_000d8618(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar2 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar2 = 5;
  }
  lVar6 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar6 = lVar2;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar6 = 2;
  }
  lVar2 = 1;
  if (0x7f < param_2 << 3) {
    lVar2 = lVar6;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    puVar7 = (uint *)(param_1 + 0x20);
    do {
      uVar3 = *puVar7;
      if (uVar3 < 0x80) {
        lVar8 = 1;
      }
      else {
        lVar1 = 4;
        if (uVar3 >> 0x1c != 0) {
          lVar1 = 5;
        }
        lVar8 = 3;
        if (0x1fffff < uVar3) {
          lVar8 = lVar1;
        }
        if (uVar3 >> 0xe == 0) {
          lVar8 = 2;
        }
      }
      bVar5 = SCARRY8(lVar9,lVar8);
      lVar9 = lVar9 + lVar8;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0xd8710);
        (*pcVar4)();
      }
      lVar6 = lVar6 + -1;
      puVar7 = puVar7 + 1;
    } while (lVar6 != 0);
  }
  lVar6 = lVar9;
  func_0x0013afac();
  if (SCARRY8(lVar2,lVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0xd8714);
    (*pcVar4)();
  }
  lVar1 = lVar2 + lVar6 + lVar9;
  if (SCARRY8(lVar2 + lVar6,lVar9)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0xd8718);
    (*pcVar4)();
  }
  if (SCARRY8(*unaff_x20,lVar1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0xd871c);
    (*pcVar4)();
  }
  *unaff_x20 = *unaff_x20 + lVar1;
  return;
}



/* Entry: 000d871c; end: 000d885b;  */

void FUN_000d871c(long param_1,uint param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar4 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar4 = lVar1;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar4 = 2;
  }
  lVar1 = 1;
  if (0x7f < param_2 << 3) {
    lVar1 = lVar4;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    puVar5 = (ulong *)(param_1 + 0x20);
    do {
      uVar6 = *puVar5;
      if (uVar6 < 0x80) {
        lVar7 = 1;
      }
      else if ((long)uVar6 < 0) {
        lVar7 = 10;
      }
      else if (uVar6 >> 0x23 == 0) {
        if (uVar6 < 0x200000) {
          lVar7 = 2;
          if (uVar6 < 0x4000) goto LAB_000d87f8;
        }
        else {
          lVar7 = 4;
          uVar6 = uVar6 >> 0x1c;
joined_r0x000d87f0:
          if (uVar6 == 0) goto LAB_000d87f8;
        }
LAB_000d87f4:
        lVar7 = lVar7 + 1;
      }
      else {
        if (uVar6 >> 0x31 != 0) {
          lVar7 = 8;
          uVar6 = uVar6 >> 0x38;
          goto joined_r0x000d87f0;
        }
        lVar7 = 6;
        if (uVar6 >> 0x2a != 0) goto LAB_000d87f4;
      }
LAB_000d87f8:
      bVar3 = SCARRY8(lVar8,lVar7);
      lVar8 = lVar8 + lVar7;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xd8850);
        (*pcVar2)();
      }
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar4 != 0);
  }
  lVar4 = lVar8;
  func_0x0013afac();
  if (SCARRY8(lVar1,lVar4)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xd8854);
    (*pcVar2)();
  }
  lVar7 = lVar1 + lVar4 + lVar8;
  if (!SCARRY8(lVar1 + lVar4,lVar8)) {
    if (!SCARRY8(*unaff_x20,lVar7)) {
      *unaff_x20 = *unaff_x20 + lVar7;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xd885c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0xd8858);
  (*pcVar2)();
}


