/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00127f18; end: 00128047;  */

void FUN_00127f18(undefined1 *param_1,long param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + -8);
  puVar2 = param_1;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar4 + 0x40));
  FUN_00138a3c();
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 == *(char **)(unaff_x20 + 0x30)) || (*pcVar1 != ':')) {
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,puVar2,0,0);
    *puVar2 = 0;
    _swift_willThrow();
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_00138a3c();
    FUN_00127cbc(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,
                 param_3);
    if (unaff_x21 == 0) {
      lVar3 = 0;
      __sSqMa(0,param_2);
      (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
      (**(code **)(lVar4 + 0x20))
                (param_1,&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                 param_2);
      (**(code **)(lVar4 + 0x38))(param_1,0,1,param_2);
    }
  }
  return;
}



/* Entry: 00128048; end: 0012814f;  */

void FUN_00128048(undefined1 *param_1,long param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + -8);
  puVar2 = param_1;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar3 + 0x40));
  FUN_00138a3c();
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 == *(char **)(unaff_x20 + 0x30)) || (*pcVar1 != ':')) {
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,puVar2,0,0);
    *puVar2 = 0;
    _swift_willThrow();
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_00138a3c();
    FUN_00127cbc(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,
                 param_3);
    if (unaff_x21 == 0) {
      (**(code **)(lVar3 + 8))(param_1,param_2);
      (**(code **)(lVar3 + 0x20))
                (param_1,&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                 param_2);
    }
  }
  return;
}



/* Entry: 00128150; end: 001284a7;  */

void FUN_00128150(undefined1 *param_1,long param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  byte *pbVar7;
  byte *pbVar8;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long unaff_x21;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined1 *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)(param_2 + -8);
  puStack_70 = param_1;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_68 + 0x40));
  puVar10 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lStack_78 = (long)puVar10 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar9 = (undefined1 *)(((long)puVar10 - extraout_x12) - extraout_x12_00);
  FUN_00138a3c();
  pbVar7 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar7 == pbVar1) || (*pbVar7 != 0x3a)) {
LAB_001283cc:
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,param_1,0,0);
    *param_1 = 0;
    _swift_willThrow();
  }
  else {
    *(byte **)(unaff_x20 + 0x28) = pbVar7 + 1;
    FUN_00138a3c();
    pbVar7 = *(byte **)(unaff_x20 + 0x28);
    if ((pbVar7 != pbVar1) && (*pbVar7 == 0x5b)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar7 + 1;
      FUN_00138a3c();
      bVar3 = true;
      do {
        pbVar7 = *(byte **)(unaff_x20 + 0x28);
        if (pbVar7 == pbVar1) {
          if (!bVar3) goto LAB_00128354;
        }
        else {
          bVar2 = *pbVar7;
          if (bVar2 == 0x5d) {
            *(byte **)(unaff_x20 + 0x28) = pbVar7 + 1;
            FUN_00138a3c();
            return;
          }
          if (!bVar3) {
            if (bVar2 < 0x24) {
              do {
                if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar2 != 0x23) break;
                  pbVar8 = pbVar7 + 1;
                  while (pbVar7 = pbVar1, pbVar8 != pbVar1) {
                    pbVar7 = pbVar8 + 1;
                    bVar2 = *pbVar8;
                    if ((bVar2 == 10) || (pbVar8 = pbVar7, bVar2 == 0xd)) break;
                  }
                }
                else {
                  pbVar7 = pbVar7 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar7;
                if ((pbVar7 == pbVar1) || (bVar2 = *pbVar7, 0x23 < bVar2)) break;
              } while( true );
            }
LAB_00128354:
            if ((pbVar7 != pbVar1) && (*pbVar7 == 0x2c)) {
              do {
                pbVar7 = pbVar7 + 1;
LAB_0012836c:
                *(byte **)(unaff_x20 + 0x28) = pbVar7;
                if ((pbVar7 == pbVar1) || (bVar2 = *pbVar7, 0x23 < bVar2)) goto LAB_001282e0;
              } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
              if ((ulong)bVar2 != 0x23) goto LAB_001282e0;
              pbVar8 = pbVar7 + 1;
              while (pbVar7 = pbVar1, pbVar8 != pbVar1) {
                pbVar7 = pbVar8 + 1;
                bVar2 = *pbVar8;
                if ((bVar2 == 10) || (pbVar8 = pbVar7, bVar2 == 0xd)) break;
              }
              goto LAB_0012836c;
            }
            goto LAB_001283cc;
          }
        }
LAB_001282e0:
        FUN_00127cbc(puVar9,param_2,param_3);
        lVar5 = lStack_68;
        lVar4 = lStack_78;
        if (unaff_x21 != 0) {
          return;
        }
        (**(code **)(lStack_68 + 0x10))(lStack_78,puVar9,param_2);
        uVar6 = 0;
        __sSaMa(0,param_2);
        __sSa6appendyyxnF(lVar4,uVar6);
        param_1 = puVar9;
        (**(code **)(lVar5 + 8))(puVar9,param_2);
        bVar3 = false;
      } while( true );
    }
    FUN_00127cbc(puVar10,param_2,param_3);
    lVar5 = lStack_68;
    lVar4 = lStack_78;
    if (unaff_x21 == 0) {
      (**(code **)(lStack_68 + 0x10))(lStack_78,puVar10,param_2);
      uVar6 = 0;
      __sSaMa(0,param_2);
      __sSa6appendyyxnF(lVar4,uVar6);
      (**(code **)(lVar5 + 8))(puVar10,param_2);
    }
  }
  return;
}



/* Entry: 001284a8; end: 00128c5b;  */

/* WARNING: Removing unreachable block (ram,0x00128c24) */

void FUN_001284a8(undefined8 param_1,undefined *param_2,long param_3)

{
  char *pcVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  long extraout_x8;
  undefined1 *puVar16;
  long extraout_x8_00;
  code *pcVar17;
  code *pcVar18;
  byte *pbVar19;
  long lVar20;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long unaff_x21;
  long lVar21;
  long lVar22;
  byte *pbVar23;
  long lVar24;
  code *pcVar25;
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  byte *pbStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  undefined1 uStack_19f;
  undefined6 uStack_19e;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  undefined8 uStack_118;
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
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar15 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar15 + 0x40));
  puVar16 = &stack0xfffffffffffffd90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  __sSqMa();
  lVar24 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar24 + 0x40));
  lVar20 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar21 = lVar20 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar22 = lVar21 - extraout_x12_00;
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 != *(char **)(unaff_x20 + 0x30)) && (*pcVar1 == ':')) {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_00138a3c();
  }
  pcVar17 = *(code **)(lVar24 + 0x10);
  (*pcVar17)(lVar22,param_1,lVar6);
  pcVar25 = *(code **)(lVar15 + 0x30);
  lVar7 = lVar22;
  (*pcVar25)(lVar22,1,param_2);
  pcVar18 = *(code **)(lVar24 + 8);
  (*pcVar18)(lVar22,lVar6);
  uVar5 = (undefined1)lVar22;
  if ((int)lVar7 == 1) {
    (**(code **)(param_3 + 0x10))(lVar21,param_2);
    (**(code **)(lVar15 + 0x38))(lVar21,0,1,param_2);
    uVar8 = param_1;
    (**(code **)(lVar24 + 0x28))(param_1,lVar21,lVar6);
    uVar5 = (undefined1)uVar8;
  }
  FUN_00135bd4();
  if (unaff_x21 != 0) {
    return;
  }
  uStack_1a8 = 0;
  FUN_000c727c(unaff_x20,&uStack_200);
  uStack_19f = 0;
  puVar9 = param_2;
  uStack_1a0 = uVar5;
  _swift_conformsToProtocol(param_2,&DAT_00844958);
  if (puVar9 == (undefined *)0x0) {
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,puVar9,0,0);
    *puVar9 = 6;
    _swift_willThrow();
    func_0x000c72b8(&uStack_200);
    return;
  }
  (**(code **)(puVar9 + 8))(&uStack_a0,param_2,puVar9);
  uStack_180 = uStack_88;
  uStack_188 = uStack_90;
  uStack_190 = uStack_98;
  uStack_198 = uStack_a0;
  uStack_170 = uStack_78;
  uStack_178 = uStack_80;
  uStack_108 = uStack_1b8;
  uStack_110 = uStack_1c0;
  uStack_f8 = uStack_1a8;
  uStack_100 = uStack_1b0;
  uStack_148 = uStack_1f8;
  uStack_150 = uStack_200;
  uStack_138 = uStack_1e8;
  uStack_140 = uStack_1f0;
  pbStack_128 = (byte *)CONCAT71(uStack_1d7,uStack_1d8);
  uStack_130 = uStack_1e0;
  uStack_118 = uStack_1c8;
  pbStack_120 = pbStack_1d0;
  uStack_c8 = uStack_80;
  uStack_d0 = uStack_88;
  uStack_c0 = uStack_78;
  uStack_f0 = CONCAT62(uStack_19e,CONCAT11(uStack_19f,uStack_1a0));
  uStack_e8 = uStack_a0;
  uStack_d8 = uStack_90;
  uStack_e0 = uStack_98;
  puStack_168 = param_2;
  puStack_b8 = param_2;
  lStack_b0 = param_3;
  if (param_2 == &UNK_009af680) {
    (*pcVar17)(lVar20,param_1,lVar6);
    lVar22 = lVar20;
    (*pcVar25)(lVar20,1,&UNK_009af680);
    if ((int)lVar22 == 1) {
      (*pcVar18)(lVar20,lVar6);
    }
    else {
      (**(code **)(lVar15 + 0x20))(puVar16,lVar20,&UNK_009af680);
      _swift_dynamicCast(&uStack_200,puVar16,&UNK_009af680,&UNK_009af680,7);
      pbVar4 = pbStack_120;
      uVar3 = uStack_1f8;
      uVar8 = uStack_200;
      if (uStack_1f0 != 0) {
        do {
          if ((pbStack_128 == pbStack_120) || (bVar2 = *pbStack_128, 0x23 < bVar2))
          goto LAB_0012887c;
          if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
            if ((ulong)bVar2 != 0x23) goto LAB_0012887c;
            pbVar10 = pbStack_128 + 1;
            do {
              pbStack_128 = pbStack_120;
              if (pbVar10 == pbStack_120) break;
              pbStack_128 = pbVar10 + 1;
              bVar2 = *pbVar10;
              pbVar10 = pbStack_128;
            } while (bVar2 != 10 && bVar2 != 0xd);
          }
          else {
            pbStack_128 = pbStack_128 + 1;
          }
        } while( true );
      }
    }
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x128c5c);
    (*pcVar17)();
  }
  (*pcVar25)(param_1,1,param_2);
  if ((int)param_1 == 1) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x128c4c);
    (*pcVar17)();
  }
  (**(code **)(param_3 + 0x40))(&uStack_150,&UNK_009aec48,&PTR_DAT_009aec70,param_2);
  goto LAB_00128b9c;
LAB_00128bd4:
  uVar11 = uStack_1f0;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar11 & 1) == 0) {
    uVar13 = 0;
    FUN_000c6ae4(0);
    _swift_allocObject();
    FUN_000c2fc4(uStack_1f0,uVar13);
    uVar12 = uStack_1f0;
  }
  FUN_000c3b7c(pbVar10,lVar22,&uStack_150);
  _swift_bridgeObjectRelease(lVar22);
  goto LAB_00128a60;
LAB_0012887c:
  uVar12 = uStack_1f0;
  if ((pbStack_128 != pbStack_120) && (*pbStack_128 == 0x5b)) {
    pbVar10 = pbStack_128 + 1;
    pbVar19 = pbVar10;
    if ((pbVar10 != pbStack_120) && ((*pbVar10 & 0xffffffdf) - 0x41 < 0x1a)) {
      for (pbVar23 = pbStack_128 + 2; pbVar19 = pbVar23, pbVar23 != pbStack_120;
          pbVar23 = pbVar23 + 1) {
        bVar2 = *pbVar23;
        if (((9 < bVar2 - 0x30 && 0x19 < (bVar2 & 0xffffffdf) - 0x41) &&
            (uVar14 = (uint)bVar2, 1 < uVar14 - 0x2e)) && (uVar14 != 0x5f)) {
          if (uVar14 != 0x5d) goto LAB_00128acc;
          break;
        }
      }
      if ((pbVar23 != pbStack_120) && (*pbVar23 == 0x5d)) {
        lVar22 = (long)pbVar23 - (long)pbVar10;
        pbStack_128 = pbVar23;
        FUN_00122abc();
        pbVar19 = pbStack_128;
        if (lVar22 != 0) {
          pbStack_128 = pbVar23 + 1;
          do {
            if ((pbStack_128 == pbVar4) || (bVar2 = *pbStack_128, 0x23 < bVar2)) goto LAB_00128bd4;
            if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
              if ((ulong)bVar2 != 0x23) goto LAB_00128bd4;
              pbVar19 = pbStack_128 + 1;
              do {
                pbStack_128 = pbVar4;
                if (pbVar19 == pbVar4) break;
                pbStack_128 = pbVar19 + 1;
                bVar2 = *pbVar19;
                pbVar19 = pbStack_128;
              } while (bVar2 != 10 && bVar2 != 0xd);
            }
            else {
              pbStack_128 = pbStack_128 + 1;
            }
          } while( true );
        }
      }
    }
LAB_00128acc:
    pbStack_128 = pbVar19;
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,pbVar10,0,0);
    *pbVar10 = 0;
    _swift_willThrow();
    func_0x000c72ec(&uStack_150);
    func_0x0012cec0(uVar8,uVar3,uStack_1f0);
    return;
  }
  uVar11 = uStack_1f0;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar11 & 1) == 0) {
    uVar13 = 0;
    FUN_000c6ae4(0);
    _swift_allocObject();
    FUN_000c2fc4(uStack_1f0,uVar13);
    uVar12 = uStack_1f0;
  }
  _swift_beginAccess(uVar12 + 0x10,auStack_218,1,0);
  uVar13 = *(undefined8 *)(uVar12 + 0x18);
  *(undefined8 *)(uVar12 + 0x10) = 0;
  *(undefined8 *)(uVar12 + 0x18) = 0xe000000000000000;
  _swift_bridgeObjectRelease(uVar13);
  uVar11 = uVar12;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar11 & 1) == 0) {
    uVar13 = 0;
    FUN_000c6ae4(0);
    _swift_allocObject();
    FUN_000c2fc4(uVar12,uVar13);
  }
  uStack_1f8 = 0xc000000000000000;
  uStack_200 = 0;
  uStack_1d8 = 0;
  _swift_beginAccess(uVar12 + 0x20,auStack_230,0x21,0);
  FUN_000c70d0(&uStack_200,uVar12 + 0x20);
  _swift_endAccess(auStack_230);
  uVar11 = uVar12;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar11 & 1) == 0) {
    uVar13 = 0;
    FUN_000c6ae4(0);
    _swift_allocObject();
    FUN_000c2fc4(uVar12,uVar13);
  }
  FUN_000ea1ac(uVar12,&uStack_150);
LAB_00128a60:
  (*pcVar18)(param_1,lVar6);
  if (uVar12 == 0) {
    pcVar17 = *(code **)(lVar15 + 0x38);
  }
  else {
    uStack_200 = uVar8;
    uStack_1f8 = uVar3;
    func_0x00023304(uVar8,uVar3);
    _swift_retain(uVar12);
    _swift_dynamicCast(param_1,&uStack_200,&UNK_009af680,&UNK_009af680,7);
    pcVar17 = *(code **)(lVar15 + 0x38);
  }
  (*pcVar17)(param_1,uVar12 == 0,1,&UNK_009af680);
  func_0x0012cec0(uVar8,uVar3,uVar12);
LAB_00128b9c:
  func_0x000c7320(&uStack_150,unaff_x20);
  func_0x000c72ec(&uStack_150);
  return;
}



/* Entry: 00128c5c; end: 0012a0fb;  */

/* WARNING: Removing unreachable block (ram,0x0012a0a0) */
/* WARNING: Removing unreachable block (ram,0x001299e8) */
/* WARNING: Removing unreachable block (ram,0x00129fc0) */

void FUN_00128c5c(undefined8 **param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  undefined8 **ppuVar15;
  uint uVar16;
  long extraout_x8;
  char *pcVar17;
  byte *pbVar18;
  byte *pbVar19;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 extraout_x13;
  undefined1 uVar20;
  long unaff_x20;
  long lVar21;
  long unaff_x21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined1 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  undefined8 *puStack_3b0;
  undefined1 *puStack_3a8;
  ulong uStack_398;
  long lStack_390;
  undefined8 **ppuStack_388;
  long lStack_380;
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined8 *puStack_260;
  undefined1 *puStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined7 uStack_237;
  byte *pbStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined1 uStack_200;
  undefined1 uStack_1ff;
  undefined6 uStack_1fe;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined8 *puStack_1b0;
  undefined1 *puStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 *puStack_118;
  long lStack_110;
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
  
  lStack_390 = *(long *)(param_2 + -8);
  ppuStack_388 = param_1;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_390 + 0x40));
  lVar21 = (long)&puStack_3d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lStack_380 = (lVar21 - extraout_x12) - extraout_x12_00;
  pcVar17 = *(char **)(unaff_x20 + 0x28);
  pcVar2 = *(char **)(unaff_x20 + 0x30);
  if ((pcVar17 != pcVar2) && (*pcVar17 == ':')) {
    *(char **)(unaff_x20 + 0x28) = pcVar17 + 1;
    FUN_00138a3c();
    pcVar17 = *(char **)(unaff_x20 + 0x28);
  }
  if ((pcVar17 != pcVar2) && (*pcVar17 == '[')) {
    *(char **)(unaff_x20 + 0x28) = pcVar17 + 1;
    uStack_3c0 = extraout_x13;
    FUN_00138a3c();
    puStack_3a8 = (undefined1 *)0xc000000000000000;
    puStack_3b0 = (undefined8 *)0x0;
    bVar5 = true;
    lStack_3b8 = param_3;
LAB_00128d84:
    pbVar19 = *(byte **)(unaff_x20 + 0x28);
    pbVar14 = *(byte **)(unaff_x20 + 0x30);
    if (pbVar19 == pbVar14) {
      if (!bVar5) goto LAB_00128ea8;
LAB_00128e10:
      lVar21 = *(long *)(unaff_x20 + 0x50) + -1;
      if (SBORROW8(*(long *)(unaff_x20 + 0x50),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x12a0dc);
        (*pcVar7)();
      }
      *(long *)(unaff_x20 + 0x50) = lVar21;
      if (lVar21 < 0) {
        FUN_000c723c();
        _swift_allocError(&UNK_009aeed8,param_1,0,0);
        *(undefined1 *)param_1 = 0xb;
        goto LAB_00129e10;
      }
      if (pbVar19 != pbVar14) {
        bVar3 = *pbVar19;
        pbVar19 = pbVar19 + 1;
        do {
          *(byte **)(unaff_x20 + 0x28) = pbVar19;
          if ((pbVar19 == pbVar14) || (bVar4 = *pbVar19, 0x23 < bVar4)) goto LAB_00128e90;
          if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) {
            if ((ulong)bVar4 != 0x23) goto LAB_00128e90;
            pbVar18 = pbVar19 + 1;
            while (pbVar19 = pbVar14, pbVar18 != pbVar14) {
              pbVar19 = pbVar18 + 1;
              bVar4 = *pbVar18;
              if ((bVar4 == 10) || (pbVar18 = pbVar19, bVar4 == 0xd)) break;
            }
          }
          else {
            pbVar19 = pbVar19 + 1;
          }
        } while( true );
      }
    }
    else {
      bVar3 = *pbVar19;
      if (bVar3 == 0x5d) {
        *(byte **)(unaff_x20 + 0x28) = pbVar19 + 1;
        FUN_00138a3c();
        return;
      }
      if (bVar5) goto LAB_00128e10;
      if (bVar3 < 0x24) {
        do {
          if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
            if ((ulong)bVar3 != 0x23) break;
            pbVar18 = pbVar19 + 1;
            while (pbVar19 = pbVar14, pbVar18 != pbVar14) {
              pbVar19 = pbVar18 + 1;
              bVar3 = *pbVar18;
              if ((bVar3 == 10) || (pbVar18 = pbVar19, bVar3 == 0xd)) break;
            }
          }
          else {
            pbVar19 = pbVar19 + 1;
          }
          *(byte **)(unaff_x20 + 0x28) = pbVar19;
          if ((pbVar19 == pbVar14) || (bVar3 = *pbVar19, 0x23 < bVar3)) break;
        } while( true );
      }
LAB_00128ea8:
      if ((pbVar19 != pbVar14) && (*pbVar19 == 0x2c)) {
        do {
          pbVar19 = pbVar19 + 1;
LAB_00128ec0:
          *(byte **)(unaff_x20 + 0x28) = pbVar19;
          if ((pbVar19 == pbVar14) || (bVar3 = *pbVar19, 0x23 < bVar3)) goto LAB_00128e10;
        } while ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) != 0);
        if ((ulong)bVar3 != 0x23) goto LAB_00128e10;
        pbVar18 = pbVar19 + 1;
        while (pbVar19 = pbVar14, pbVar18 != pbVar14) {
          pbVar19 = pbVar18 + 1;
          bVar3 = *pbVar18;
          if ((bVar3 == 10) || (pbVar18 = pbVar19, bVar3 == 0xd)) break;
        }
        goto LAB_00128ec0;
      }
    }
    goto LAB_00129a6c;
  }
  FUN_00135bd4();
  if (unaff_x21 != 0) {
    return;
  }
  lStack_208 = 0;
  FUN_000c727c();
  uStack_200 = SUB81(param_1,0);
  uStack_1ff = 0;
  puVar12 = param_2;
  _swift_conformsToProtocol(param_2,&DAT_00844958);
  if (puVar12 == (undefined1 *)0x0) {
LAB_00129a00:
    puVar12 = (undefined1 *)0x0;
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,puVar12,0,0);
    *puVar12 = 6;
    _swift_willThrow();
    func_0x000c72b8(&puStack_260);
    return;
  }
  puVar13 = param_2;
  (**(code **)(puVar12 + 8))(&uStack_d0,param_2,puVar12);
  lVar6 = lStack_380;
  uStack_1e0 = uStack_b8;
  uStack_1e8 = uStack_c0;
  uStack_1f0 = uStack_c8;
  uStack_1f8 = uStack_d0;
  uStack_1d0 = uStack_a8;
  uStack_1d8 = uStack_b0;
  uStack_168 = uStack_218;
  uStack_170 = uStack_220;
  lStack_158 = lStack_208;
  uStack_160 = uStack_210;
  puStack_1a8 = puStack_258;
  puStack_1b0 = puStack_260;
  uStack_198 = uStack_248;
  uStack_1a0 = uStack_250;
  pbStack_188 = (byte *)CONCAT71(uStack_237,uStack_238);
  uStack_190 = uStack_240;
  uStack_178 = uStack_228;
  pbStack_180 = pbStack_230;
  uStack_128 = uStack_b0;
  uStack_130 = uStack_b8;
  uStack_120 = uStack_a8;
  uStack_150 = CONCAT62(uStack_1fe,CONCAT11(uStack_1ff,uStack_200));
  uStack_148 = uStack_d0;
  uStack_138 = uStack_c0;
  uStack_140 = uStack_c8;
  lStack_110 = param_3;
  if (param_2 == &UNK_009af680) {
    puStack_118 = param_2;
    puStack_1c8 = param_2;
    if (lRam0000000000aed8b0 != -1) {
      puVar13 = (undefined1 *)0xaed8b0;
      _swift_once(0xaed8b0,FUN_000c2f84);
    }
    do {
      pbVar19 = pbStack_180;
      uVar10 = uRam0000000000b64ad0;
      if ((pbStack_188 == pbStack_180) || (bVar3 = *pbStack_188, 0x23 < bVar3)) goto LAB_00129b2c;
      if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar3 != 0x23) goto LAB_00129b2c;
        pbVar19 = pbStack_188 + 1;
        do {
          pbStack_188 = pbStack_180;
          if (pbVar19 == pbStack_180) break;
          pbStack_188 = pbVar19 + 1;
          bVar3 = *pbVar19;
          pbVar19 = pbStack_188;
        } while (bVar3 != 10 && bVar3 != 0xd);
      }
      else {
        pbStack_188 = pbStack_188 + 1;
      }
    } while( true );
  }
  puStack_1c8 = param_2;
  puStack_118 = param_2;
  (**(code **)(param_3 + 0x10))(lVar21,param_2,param_3);
  (**(code **)(param_3 + 0x40))(&puStack_1b0,&UNK_009aec48,&PTR_DAT_009aec70,param_2,param_3);
  lVar1 = lStack_380;
  lVar6 = lStack_390;
  (**(code **)(lStack_390 + 0x10))(lStack_380,lVar21,param_2);
  uVar11 = 0;
  __sSaMa(0,param_2);
  __sSa6appendyyxnF(lVar1,uVar11);
  (**(code **)(lVar6 + 8))(lVar21,param_2);
  goto LAB_00129dd8;
LAB_00128e90:
  if (bVar3 == 0x3c) {
    uVar20 = 0x3e;
  }
  else {
    if (bVar3 != 0x7b) {
LAB_00129a6c:
      FUN_000c723c();
      _swift_allocError(&UNK_009aeed8,param_1,0,0);
      *(undefined1 *)param_1 = 0;
LAB_00129e10:
      _swift_willThrow();
      return;
    }
    uVar20 = 0x7d;
  }
  lStack_208 = 0;
  FUN_000c727c();
  uStack_1ff = 0;
  puVar12 = param_2;
  uStack_200 = uVar20;
  _swift_conformsToProtocol(param_2,&DAT_00844958);
  if (puVar12 == (undefined1 *)0x0) goto LAB_00129a00;
  puVar13 = param_2;
  (**(code **)(puVar12 + 8))(&uStack_100,param_2,puVar12);
  uVar11 = uStack_3c0;
  uStack_1e0 = uStack_e8;
  uStack_1e8 = uStack_f0;
  uStack_1f0 = uStack_f8;
  uStack_1f8 = uStack_100;
  uStack_1d0 = uStack_d8;
  uStack_1d8 = uStack_e0;
  uStack_168 = uStack_218;
  uStack_170 = uStack_220;
  lStack_158 = lStack_208;
  uStack_160 = uStack_210;
  puStack_1a8 = puStack_258;
  puStack_1b0 = puStack_260;
  uStack_198 = uStack_248;
  uStack_1a0 = uStack_250;
  pbStack_188 = (byte *)CONCAT71(uStack_237,uStack_238);
  uStack_190 = uStack_240;
  uStack_178 = uStack_228;
  pbStack_180 = pbStack_230;
  uStack_128 = uStack_e0;
  uStack_130 = uStack_e8;
  uStack_120 = uStack_d8;
  uStack_150 = CONCAT62(uStack_1fe,CONCAT11(uStack_1ff,uStack_200));
  uStack_148 = uStack_100;
  uStack_138 = uStack_f0;
  uStack_140 = uStack_f8;
  lStack_110 = param_3;
  if (param_2 != &UNK_009af680) {
    puStack_1c8 = param_2;
    puStack_118 = param_2;
    (**(code **)(param_3 + 0x10))(uStack_3c0,param_2,param_3);
    (**(code **)(param_3 + 0x40))(&puStack_1b0,&UNK_009aec48,&PTR_DAT_009aec70,param_2,param_3);
    lVar6 = lStack_380;
    lVar21 = lStack_390;
    if (unaff_x21 != 0) {
      (**(code **)(lStack_390 + 8))(uVar11,param_2);
LAB_00129a5c:
      func_0x000c72ec(&puStack_1b0);
      return;
    }
    (**(code **)(lStack_390 + 0x10))(lStack_380,uVar11,param_2);
    uVar8 = 0;
    __sSaMa(0,param_2);
    __sSa6appendyyxnF(lVar6,uVar8);
    param_3 = lStack_3b8;
    (**(code **)(lVar21 + 8))(uVar11,param_2);
    goto LAB_001298b4;
  }
  puStack_118 = param_2;
  puStack_1c8 = param_2;
  if (lRam0000000000aed8b0 != -1) {
    puVar13 = (undefined1 *)0xaed8b0;
    _swift_once(0xaed8b0,FUN_000c2f84);
  }
  while( true ) {
    while( true ) {
      pbVar19 = pbStack_180;
      uVar10 = uRam0000000000b64ad0;
      if ((pbStack_188 == pbStack_180) || (bVar3 = *pbStack_188, 0x23 < bVar3)) goto LAB_001290f0;
      if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) break;
      pbStack_188 = pbStack_188 + 1;
    }
    if ((ulong)bVar3 != 0x23) break;
    pbVar14 = pbStack_188 + 1;
    do {
      if (pbVar14 == pbStack_180) {
        pbStack_188 = pbStack_180;
        goto LAB_001290f0;
      }
      pbStack_188 = pbVar14 + 1;
      bVar3 = *pbVar14;
    } while ((bVar3 != 10) && (pbVar14 = pbStack_188, bVar3 != 0xd));
  }
LAB_001290f0:
  if ((pbStack_188 != pbStack_180) && (*pbStack_188 == 0x5b)) {
    pbVar14 = pbStack_188 + 1;
    pbVar18 = pbVar14;
    if ((pbVar14 != pbStack_180) && ((*pbVar14 & 0xffffffdf) - 0x41 < 0x1a)) {
      for (pbVar18 = pbStack_188 + 2; pbVar18 != pbStack_180; pbVar18 = pbVar18 + 1) {
        bVar3 = *pbVar18;
        if (((9 < bVar3 - 0x30 && 0x19 < (bVar3 & 0xffffffdf) - 0x41) &&
            (uVar16 = (uint)bVar3, 1 < uVar16 - 0x2e)) && (uVar16 != 0x5f)) {
          if (uVar16 != 0x5d) goto LAB_00129e38;
          break;
        }
      }
      if ((pbVar18 != pbStack_180) && (*pbVar18 == 0x5d)) {
        lVar21 = (long)pbVar18 - (long)pbVar14;
        uStack_398 = uRam0000000000b64ad0;
        pbStack_188 = pbVar18;
        _swift_retain(uRam0000000000b64ad0);
        FUN_00122abc();
        uVar10 = uStack_398;
        if (lVar21 != 0) {
          pbStack_188 = pbVar18 + 1;
          do {
            if ((pbStack_188 == pbVar19) || (bVar3 = *pbStack_188, 0x23 < bVar3)) goto LAB_001297cc;
            if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
              if ((ulong)bVar3 != 0x23) goto LAB_001297cc;
              pbVar18 = pbStack_188 + 1;
              while (pbStack_188 = pbVar19, pbVar18 != pbVar19) {
                pbStack_188 = pbVar18 + 1;
                bVar3 = *pbVar18;
                if ((bVar3 == 10) || (pbVar18 = pbStack_188, bVar3 == 0xd)) break;
              }
            }
            else {
              pbStack_188 = pbStack_188 + 1;
            }
          } while( true );
        }
        FUN_000c723c();
        _swift_allocError(&UNK_009aeed8,pbVar14,0,0);
        *pbVar14 = 0;
        _swift_willThrow();
        uVar10 = uStack_398;
        goto LAB_00129a48;
      }
    }
LAB_00129e38:
    pbStack_188 = pbVar18;
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,puVar13,0,0);
    *puVar13 = 0;
    _swift_willThrow();
    _swift_retain(uVar10);
    goto LAB_00129a48;
  }
  uVar23 = uRam0000000000b64ad0;
  _swift_retain();
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar23 & 1) == 0) {
    uVar23 = 0;
    FUN_000c6ae4();
    _swift_allocObject();
    puVar22 = (undefined8 *)(uVar23 + 0x10);
    *puVar22 = 0;
    *(undefined8 *)(uVar23 + 0x18) = 0xe000000000000000;
    puVar24 = (undefined8 *)(uVar23 + 0x20);
    *(undefined1 **)(uVar23 + 0x28) = puStack_3a8;
    *puVar24 = puStack_3b0;
    *(undefined1 *)(uVar23 + 0x48) = 0;
    _swift_beginAccess(uVar10 + 0x10,auStack_278,0,0);
    uVar11 = *(undefined8 *)(uVar10 + 0x10);
    uVar8 = *(undefined8 *)(uVar10 + 0x18);
    _swift_beginAccess(puVar22,auStack_290,1,0);
    *puVar22 = uVar11;
    *(undefined8 *)(uVar23 + 0x18) = uVar8;
    _swift_beginAccess(uVar10 + 0x20,auStack_2a8,0,0);
    FUN_000c6ee0(uVar10 + 0x20,&puStack_260);
    _swift_beginAccess(puVar24,auStack_2c0,0x21,0);
    _swift_bridgeObjectRetain(uVar8);
    FUN_000c70d0(&puStack_260,puVar24);
    _swift_endAccess(auStack_2c0);
    _swift_release(uVar10);
    uVar10 = uVar23;
  }
  _swift_beginAccess(uVar10 + 0x10,auStack_2d8,1,0);
  uVar11 = *(undefined8 *)(uVar10 + 0x18);
  *(undefined8 *)(uVar10 + 0x10) = 0;
  *(undefined8 *)(uVar10 + 0x18) = 0xe000000000000000;
  _swift_bridgeObjectRelease(uVar11);
  uVar23 = uVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar9 = uVar10;
  if ((uVar23 & 1) == 0) {
    uVar9 = 0;
    FUN_000c6ae4();
    _swift_allocObject();
    puVar22 = (undefined8 *)(uVar9 + 0x10);
    *puVar22 = 0;
    *(undefined8 *)(uVar9 + 0x18) = 0xe000000000000000;
    puVar24 = (undefined8 *)(uVar9 + 0x20);
    *(undefined1 **)(uVar9 + 0x28) = puStack_3a8;
    *puVar24 = puStack_3b0;
    *(undefined1 *)(uVar9 + 0x48) = 0;
    _swift_beginAccess(uVar10 + 0x10,auStack_2f0,0,0);
    uVar11 = *(undefined8 *)(uVar10 + 0x10);
    uVar8 = *(undefined8 *)(uVar10 + 0x18);
    _swift_beginAccess(puVar22,auStack_308,1,0);
    *puVar22 = uVar11;
    *(undefined8 *)(uVar9 + 0x18) = uVar8;
    _swift_beginAccess(uVar10 + 0x20,auStack_320,0,0);
    FUN_000c6ee0(uVar10 + 0x20,&puStack_260);
    _swift_beginAccess(puVar24,auStack_2c0,0x21,0);
    _swift_bridgeObjectRetain(uVar8);
    FUN_000c70d0(&puStack_260,puVar24);
    _swift_endAccess(auStack_2c0);
    _swift_release(uVar10);
  }
  puStack_258 = puStack_3a8;
  puStack_260 = puStack_3b0;
  uStack_238 = 0;
  _swift_beginAccess(uVar9 + 0x20,auStack_2c0,0x21,0);
  FUN_000c70d0(&puStack_260,uVar9 + 0x20);
  _swift_endAccess(auStack_2c0);
  uVar10 = uVar9;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar10 & 1) == 0) {
    uVar10 = 0;
    FUN_000c6ae4();
    _swift_allocObject();
    puVar22 = (undefined8 *)(uVar10 + 0x10);
    *puVar22 = 0;
    *(undefined8 *)(uVar10 + 0x18) = 0xe000000000000000;
    puVar24 = (undefined8 *)(uVar10 + 0x20);
    *(undefined1 **)(uVar10 + 0x28) = puStack_3a8;
    *puVar24 = puStack_3b0;
    *(undefined1 *)(uVar10 + 0x48) = 0;
    _swift_beginAccess(uVar9 + 0x10,auStack_338,0,0);
    uVar11 = *(undefined8 *)(uVar9 + 0x10);
    uVar8 = *(undefined8 *)(uVar9 + 0x18);
    _swift_beginAccess(puVar22,auStack_350,1,0);
    *puVar22 = uVar11;
    *(undefined8 *)(uVar10 + 0x18) = uVar8;
    _swift_beginAccess(uVar9 + 0x20,auStack_368,0,0);
    FUN_000c6ee0(uVar9 + 0x20,&puStack_260);
    _swift_beginAccess(puVar24,auStack_2c0,0x21,0);
    _swift_bridgeObjectRetain(uVar8);
    FUN_000c70d0(&puStack_260,puVar24);
    _swift_endAccess(auStack_2c0);
    _swift_release(uVar9);
    uVar9 = uVar10;
  }
  uStack_398 = uVar9;
  lVar21 = lStack_110;
  puVar12 = puStack_118;
  uStack_98 = uStack_140;
  uStack_a0 = uStack_148;
  uStack_88 = uStack_130;
  uStack_90 = uStack_138;
  uStack_78 = uStack_120;
  uStack_80 = uStack_128;
  uVar23 = uStack_150 & 0xffff;
LAB_00129550:
  lVar6 = lStack_158;
  if (((0 < lStack_158) && (pbStack_188 != pbStack_180)) &&
     ((*pbStack_188 == 0x3b || (*pbStack_188 == 0x2c)))) {
    pbStack_188 = pbStack_188 + 1;
    FUN_00138a3c();
  }
  puVar22 = &uStack_a0;
  puVar13 = puVar12;
  FUN_00135ce4(puVar22,puVar12,lVar21,uVar23);
  uVar10 = uStack_398;
  if (unaff_x21 != 0) goto LAB_00129a48;
  if (((uint)puVar13 & 0xff) != 1) {
    lVar1 = lVar6 + 1;
    if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x12a040);
      (*pcVar7)();
    }
    lStack_158 = lVar1;
    if (puVar22 == (undefined8 *)((long)&MACH_HEADER.magic + 2)) {
      FUN_000c2a40();
      while( true ) {
        while( true ) {
          if ((pbStack_188 == pbStack_180) || (bVar3 = *pbStack_188, 0x23 < bVar3))
          goto LAB_001296ec;
          if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) break;
          pbStack_188 = pbStack_188 + 1;
        }
        if ((ulong)bVar3 != 0x23) break;
        pbVar19 = pbStack_188 + 1;
        do {
          if (pbVar19 == pbStack_180) {
            pbStack_188 = pbStack_180;
            goto LAB_001296ec;
          }
          pbStack_188 = pbVar19 + 1;
          bVar3 = *pbVar19;
          pbVar19 = pbStack_188;
        } while (bVar3 != 10 && bVar3 != 0xd);
      }
LAB_001296ec:
      puStack_3c8 = puVar22;
      if ((pbStack_188 != pbStack_180) && (*pbStack_188 == 0x3a)) {
        do {
          pbStack_188 = pbStack_188 + 1;
LAB_00129704:
          if ((pbStack_188 == pbStack_180) || (bVar3 = *pbStack_188, 0x23 < bVar3)) {
LAB_00129760:
            puStack_3d0 = puVar13;
            FUN_00136a64();
            FUN_00023358(puStack_3c8,puStack_3d0);
            uVar10 = uStack_398;
            uStack_238 = 0;
            puStack_260 = puVar22;
            puStack_258 = puVar13;
            _swift_beginAccess(uStack_398 + 0x20,auStack_2c0,0x21,0);
            FUN_000c70d0(&puStack_260,uVar10 + 0x20);
            _swift_endAccess(auStack_2c0);
            goto LAB_00129550;
          }
        } while ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) != 0);
        if ((ulong)bVar3 != 0x23) goto LAB_00129760;
        pbVar19 = pbStack_188 + 1;
        do {
          pbStack_188 = pbStack_180;
          if (pbVar19 == pbStack_180) break;
          pbStack_188 = pbVar19 + 1;
          bVar3 = *pbVar19;
          pbVar19 = pbStack_188;
        } while (bVar3 != 10 && bVar3 != 0xd);
        goto LAB_00129704;
      }
      FUN_000c723c();
      _swift_allocError(&UNK_009aeed8,puVar22,0,0);
      *(undefined1 *)puVar22 = 0;
      _swift_willThrow();
      uVar10 = uStack_398;
      puStack_260 = puStack_3c8;
      uStack_238 = 0;
      puStack_258 = puVar13;
      _swift_beginAccess(uStack_398 + 0x20,auStack_2c0,0x21,0);
      FUN_000c70d0(&puStack_260,uVar10 + 0x20);
      _swift_endAccess(auStack_2c0);
      goto LAB_00129a48;
    }
    if (puVar22 == (undefined8 *)((long)&MACH_HEADER.magic + 1)) {
      puVar13 = (undefined1 *)(uStack_398 + 0x10);
      ppuVar15 = &puStack_260;
      _swift_beginAccess(puVar13,ppuVar15,0x21,0);
      FUN_00138a3c();
      if ((pbStack_188 == pbStack_180) || (*pbStack_188 != 0x3a)) {
        FUN_000c723c();
        _swift_allocError(&UNK_009aeed8,puVar13,0,0);
        *puVar13 = 0;
        _swift_willThrow();
        _swift_endAccess(&puStack_260);
        uVar10 = uStack_398;
        goto LAB_00129a48;
      }
      pbStack_188 = pbStack_188 + 1;
      FUN_00138a3c();
      FUN_00136880();
      uVar11 = *(undefined8 *)(uStack_398 + 0x18);
      *(undefined1 **)(uStack_398 + 0x10) = puVar13;
      *(undefined8 ***)(uStack_398 + 0x18) = ppuVar15;
      _swift_endAccess(&puStack_260);
      _swift_bridgeObjectRelease(uVar11);
    }
    goto LAB_00129550;
  }
LAB_00129838:
  uVar10 = uStack_398;
  puStack_258 = puStack_3a8;
  puStack_260 = puStack_3b0;
  uStack_250 = uStack_398;
  func_0x00023304(0,0xc000000000000000);
  _swift_retain(uVar10);
  lVar21 = lStack_380;
  _swift_dynamicCast(lStack_380,&puStack_260,&UNK_009af680,&UNK_009af680,7);
  uVar11 = 0;
  __sSaMa(0,&UNK_009af680);
  __sSa6appendyyxnF(lVar21,uVar11);
  FUN_00023358(0,0xc000000000000000);
  _swift_release(uVar10);
  param_3 = lStack_3b8;
LAB_001298b4:
  func_0x000c7320(&puStack_1b0);
  param_1 = &puStack_1b0;
  func_0x000c72ec();
  bVar5 = false;
  goto LAB_00128d84;
LAB_001297cc:
  uVar23 = uStack_398;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar23 & 1) == 0) {
    uVar11 = 0;
    FUN_000c6ae4(0);
    _swift_allocObject();
    FUN_000c2fc4(uVar10,uVar11);
  }
  FUN_000c3b7c(pbVar14,lVar21,&puStack_1b0);
  if (unaff_x21 != 0) {
    _swift_bridgeObjectRelease(lVar21);
LAB_00129a48:
    FUN_00023358(0,0xc000000000000000);
    _swift_release(uVar10);
    goto LAB_00129a5c;
  }
  uStack_398 = uVar10;
  _swift_bridgeObjectRelease(lVar21);
  goto LAB_00129838;
LAB_00129b2c:
  if ((pbStack_188 != pbStack_180) && (*pbStack_188 == 0x5b)) {
    pbVar14 = pbStack_188 + 1;
    pbVar18 = pbVar14;
    if ((pbVar14 == pbStack_180) || (0x19 < (*pbVar14 & 0xffffffdf) - 0x41)) {
LAB_00129e70:
      pbStack_188 = pbVar18;
      FUN_000c723c();
      _swift_allocError(&UNK_009aeed8,puVar13,0,0);
      *puVar13 = 0;
      _swift_willThrow();
      _swift_retain(uVar10);
    }
    else {
      for (pbVar18 = pbStack_188 + 2; pbVar18 != pbStack_180; pbVar18 = pbVar18 + 1) {
        bVar3 = *pbVar18;
        if (((9 < bVar3 - 0x30 && 0x19 < (bVar3 & 0xffffffdf) - 0x41) &&
            (uVar16 = (uint)bVar3, 1 < uVar16 - 0x2e)) && (uVar16 != 0x5f)) {
          if (uVar16 != 0x5d) goto LAB_00129e70;
          break;
        }
      }
      if ((pbVar18 == pbStack_180) || (*pbVar18 != 0x5d)) goto LAB_00129e70;
      lVar21 = (long)pbVar18 - (long)pbVar14;
      pbStack_188 = pbVar18;
      _swift_retain(uRam0000000000b64ad0);
      FUN_00122abc();
      if (lVar21 != 0) {
        pbStack_188 = pbVar18 + 1;
        do {
          if ((pbStack_188 == pbVar19) || (bVar3 = *pbStack_188, 0x23 < bVar3)) goto LAB_0012a040;
          if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
            if ((ulong)bVar3 != 0x23) goto LAB_0012a040;
            pbVar18 = pbStack_188 + 1;
            do {
              pbStack_188 = pbVar19;
              if (pbVar18 == pbVar19) break;
              pbStack_188 = pbVar18 + 1;
              bVar3 = *pbVar18;
              pbVar18 = pbStack_188;
            } while (bVar3 != 10 && bVar3 != 0xd);
          }
          else {
            pbStack_188 = pbStack_188 + 1;
          }
        } while( true );
      }
      FUN_000c723c();
      _swift_allocError(&UNK_009aeed8,pbVar14,0,0);
      *pbVar14 = 0;
      _swift_willThrow();
    }
    FUN_00023358(0,0xc000000000000000);
    _swift_release(uVar10);
    goto LAB_00129eb8;
  }
  uVar23 = uRam0000000000b64ad0;
  _swift_retain();
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar23 & 1) == 0) {
    FUN_000c6ae4(0);
    _swift_allocObject();
    FUN_000c2fc4();
  }
  _swift_beginAccess(uVar10 + 0x10,auStack_278,1,0);
  uVar11 = *(undefined8 *)(uVar10 + 0x18);
  *(undefined8 *)(uVar10 + 0x10) = 0;
  *(undefined8 *)(uVar10 + 0x18) = 0xe000000000000000;
  _swift_bridgeObjectRelease(uVar11);
  uVar23 = uVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar23 & 1) == 0) {
    FUN_000c6ae4(0);
    _swift_allocObject();
    FUN_000c2fc4();
  }
  puStack_258 = (undefined1 *)0xc000000000000000;
  puStack_260 = (undefined8 *)0x0;
  uStack_238 = 0;
  _swift_beginAccess(uVar10 + 0x20,auStack_290,0x21,0);
  FUN_000c70d0(&puStack_260,uVar10 + 0x20);
  _swift_endAccess(auStack_290);
  uVar23 = uVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar23 & 1) == 0) {
    FUN_000c6ae4(0);
    _swift_allocObject();
    FUN_000c2fc4();
  }
  FUN_000ea1ac(uVar10,&puStack_1b0);
  goto LAB_00129d18;
LAB_0012a040:
  uVar23 = uVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar23 & 1) == 0) {
    FUN_000c6ae4(0);
    _swift_allocObject();
    FUN_000c2fc4();
  }
  FUN_000c3b7c(pbVar14,lVar21,&puStack_1b0);
  _swift_bridgeObjectRelease(lVar21);
LAB_00129d18:
  puStack_258 = (undefined1 *)0xc000000000000000;
  puStack_260 = (undefined8 *)0x0;
  uStack_250 = uVar10;
  func_0x00023304(0,0xc000000000000000);
  _swift_retain(uVar10);
  _swift_dynamicCast(lVar6,&puStack_260,&UNK_009af680,&UNK_009af680,7);
  uVar11 = 0;
  __sSaMa(0,&UNK_009af680);
  __sSa6appendyyxnF(lVar6,uVar11);
  FUN_00023358(0,0xc000000000000000);
  _swift_release(uVar10);
LAB_00129dd8:
  func_0x000c7320(&puStack_1b0);
LAB_00129eb8:
  func_0x000c72ec(&puStack_1b0);
  return;
}



/* Entry: 0012a0fc; end: 0012a123;  */

void FUN_0012a0fc(void)

{
  FUN_001284a8();
  return;
}



/* Entry: 0012a124; end: 0012abaf;  */

void FUN_0012a124(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5
                 )

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar16;
  code *pcVar17;
  undefined1 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar18;
  byte *pbVar19;
  long lVar20;
  undefined1 *puVar21;
  long lVar22;
  undefined8 uStack_130;
  undefined4 auStack_128 [2];
  code *pcStack_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  uint uStack_84;
  
  lStack_d0 = *(long *)(param_5 + 8);
  lVar4 = 0;
  uStack_c8 = param_3;
  uStack_b0 = param_1;
  _swift_getAssociatedTypeWitness();
  lStack_90 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lStack_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(param_4 + 8);
  lVar5 = 0;
  lStack_e8 = (long)&pcStack_120 - extraout_x8;
  _swift_getAssociatedTypeWitness(0,lVar12,param_2,&UNK_008441f0,&UNK_00844200);
  lVar16 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar16 + 0x40));
  lVar15 = ((long)&pcStack_120 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_e0 = lVar15;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar15 = lVar15 - extraout_x12;
  lVar6 = 0;
  lStack_c0 = lVar15;
  __sSqMa(0,lVar4);
  lVar22 = *(long *)(lVar6 + -8);
  lStack_a0 = lVar6;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar22 + 0x40));
  lVar15 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_f0 = lVar15;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar18 = (undefined1 *)(lVar15 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar15 = (long)puVar18 - extraout_x12_01;
  lVar6 = 0;
  __sSqMa(0,lVar5);
  lStack_a8 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_a8 + 0x40));
  puVar21 = (undefined1 *)(lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar7 = (long)puVar21 - extraout_x12_02;
  lStack_d8 = lVar16;
  (**(code **)(lVar16 + 0x38))(lVar7,1,1,lVar5);
  pcVar17 = *(code **)(lStack_90 + 0x38);
  puVar10 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  lStack_b8 = lVar4;
  lStack_98 = lVar15;
  (*pcVar17)(lVar15,1,1,lVar4);
  uVar3 = (uint)lVar15;
  FUN_00135bd4();
  lVar15 = lStack_b8;
  lVar4 = lStack_c0;
  lVar16 = lStack_a8;
  lVar20 = lStack_a0;
  if (unaff_x21 != 0) {
LAB_0012a874:
    (**(code **)(lVar22 + 8))(lStack_98,lVar20);
    pcVar17 = *(code **)(lVar16 + 8);
LAB_0012a88c:
    (*pcVar17)(lVar7,lVar6);
    return;
  }
  bVar1 = unaff_x20[0x49];
  pbVar13 = *(byte **)(unaff_x20 + 0x28);
  pbVar19 = *(byte **)(unaff_x20 + 0x30);
  pcStack_120 = pcVar17;
  puStack_118 = puVar21;
  puStack_110 = puVar18;
  lStack_108 = lVar5;
  lStack_100 = lVar22;
  lStack_f8 = lVar6;
  uStack_84 = uVar3;
LAB_0012a388:
  if ((pbVar13 == pbVar19) || ((uint)*pbVar13 != (uStack_84 & 0xff))) {
    puVar18 = (undefined1 *)(ulong)(uint)bVar1;
    FUN_00136f34();
    if (puVar10 != (undefined1 *)0x0) {
      if ((puVar18 == &UNK_0079656b) && (puVar10 == (undefined1 *)0xe300000000000000)) {
LAB_0012a440:
        _swift_bridgeObjectRelease(puVar10);
        pcVar17 = *(code **)(lVar12 + 0x20);
        lVar22 = lVar7;
      }
      else {
        puVar8 = &UNK_0079656b;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (&UNK_0079656b,0xe300000000000000,puVar18,puVar10,0);
        if ((((ulong)puVar8 & 1) != 0) ||
           ((puVar18 == segment_command_00000020.segname + 9 &&
            (puVar10 == (undefined1 *)0xe100000000000000)))) goto LAB_0012a440;
        uVar9 = 0x31;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x31,0xe100000000000000,puVar18,puVar10,0);
        if ((uVar9 & 1) != 0) goto LAB_0012a440;
        if ((puVar18 != (undefined1 *)0x65756c6176) || (puVar10 != (undefined1 *)0xe500000000000000)
           ) {
          uVar9 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x65756c6176,0xe500000000000000,puVar18,puVar10,0);
          if (((uVar9 & 1) == 0) &&
             (puVar18 != segment_command_00000020.segname + 10 ||
              puVar10 != (undefined1 *)0xe100000000000000)) {
            uVar9 = 0;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x32,0xe100000000000000,puVar18,puVar10,0);
            if ((uVar9 & 1) == 0) {
              if (bVar1 != 0) {
                uVar9 = 0x5b;
                puVar21 = (undefined1 *)0xe100000000000000;
                __sSS9hasPrefixySbSSF(0x5b,0xe100000000000000,puVar18,puVar10);
                if ((uVar9 & 1) != 0) {
                  _swift_bridgeObjectRelease();
                  pbVar13 = *(byte **)(unaff_x20 + 0x28);
                  do {
                    if ((pbVar13 == pbVar19) || (bVar2 = *pbVar13, 0x23 < bVar2)) goto LAB_0012a5e8;
                    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                      if ((ulong)bVar2 != 0x23) goto LAB_0012a5e8;
                      pbVar14 = pbVar13 + 1;
                      do {
                        if (pbVar14 == pbVar19) {
                          *(byte **)(unaff_x20 + 0x28) = pbVar19;
                          pbVar13 = pbVar19;
                          goto LAB_0012a5e8;
                        }
                        pbVar13 = pbVar14 + 1;
                        bVar2 = *pbVar14;
                        pbVar14 = pbVar13;
                      } while (bVar2 != 10 && bVar2 != 0xd);
                    }
                    else {
                      pbVar13 = pbVar13 + 1;
                    }
                    *(byte **)(unaff_x20 + 0x28) = pbVar13;
                  } while( true );
                }
              }
              if (unaff_x20[0x48] == '\x01') {
                uVar9 = 0x5b;
                puVar21 = (undefined1 *)0xe100000000000000;
                __sSS9hasPrefixySbSSF(0x5b,0xe100000000000000,puVar18,puVar10);
                _swift_bridgeObjectRelease();
                lVar16 = lStack_a8;
                if ((uVar9 & 1) == 0) {
                  pbVar14 = *(byte **)(unaff_x20 + 0x28);
                  do {
                    if ((pbVar14 == pbVar19) || (bVar2 = *pbVar14, 0x23 < bVar2)) goto LAB_0012a6a4;
                    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                      if ((ulong)bVar2 != 0x23) goto LAB_0012a6a4;
                      pbVar13 = pbVar14 + 1;
                      do {
                        if (pbVar13 == pbVar19) {
                          *(byte **)(unaff_x20 + 0x28) = pbVar19;
                          pbVar14 = pbVar19;
                          goto LAB_0012a6a4;
                        }
                        pbVar14 = pbVar13 + 1;
                        bVar2 = *pbVar13;
                        pbVar13 = pbVar14;
                      } while (bVar2 != 10 && bVar2 != 0xd);
                    }
                    else {
                      pbVar14 = pbVar14 + 1;
                    }
                    *(byte **)(unaff_x20 + 0x28) = pbVar14;
                  } while( true );
                }
              }
              else {
                _swift_bridgeObjectRelease();
              }
              FUN_000c723c();
              _swift_allocError(&UNK_009aeed8,puVar10,0,0);
              *puVar10 = 7;
              goto LAB_0012a860;
            }
          }
        }
        _swift_bridgeObjectRelease(puVar10);
        pcVar17 = *(code **)(lStack_d0 + 0x20);
        lVar22 = lStack_98;
      }
      puVar21 = unaff_x20;
      (*pcVar17)(lVar22);
      goto LAB_0012a474;
    }
LAB_0012a83c:
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,puVar18,0,0);
    *puVar18 = 0;
LAB_0012a860:
    _swift_willThrow();
    lVar16 = lStack_a8;
    lVar20 = lStack_a0;
    lVar6 = lStack_f8;
    lVar22 = lStack_100;
  }
  else {
    *(byte **)(unaff_x20 + 0x28) = pbVar13 + 1;
    FUN_00138a3c();
    lVar16 = lStack_a8;
    lVar20 = lStack_d8;
    lVar6 = lStack_f8;
    puVar10 = puStack_118;
    lVar22 = *(long *)(unaff_x20 + 0x50) + 1;
    if (SCARRY8(*(long *)(unaff_x20 + 0x50),1)) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x12ab5c);
      (*pcVar17)();
    }
    *(long *)(unaff_x20 + 0x50) = lVar22;
    if (*(long *)(unaff_x20 + 0x40) < lVar22) {
      *(undefined4 *)(lVar7 + -8) = 0;
      *(undefined8 *)(lVar7 + -0x10) = 0x119;
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                ("Fatal error",0xb,2,0xd00000000000003f,0x80000000008b9020,
                 "SwiftProtobuf/TextFormatScanner.swift",0x25,2);
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x12abb0);
      (*pcVar17)();
    }
    (**(code **)(lStack_a8 + 0x10))(puStack_118,lVar7,lStack_f8);
    lVar5 = lStack_108;
    puVar21 = puVar10;
    (**(code **)(lVar20 + 0x30))(puVar10,1);
    puVar18 = puStack_110;
    if ((int)puVar21 == 1) {
      (**(code **)(lVar16 + 8))(puVar10,lVar6);
      puVar18 = puVar10;
      lVar20 = lStack_a0;
      lVar22 = lStack_100;
    }
    else {
      (**(code **)(lStack_d8 + 0x20))(lVar4,puVar10,lVar5);
      lVar22 = lStack_100;
      (**(code **)(lStack_100 + 0x10))(puVar18,lStack_98,lStack_a0);
      lVar20 = lStack_90;
      puVar10 = puVar18;
      (**(code **)(lStack_90 + 0x30))(puVar18,1,lVar15);
      lVar6 = lStack_e8;
      if ((int)puVar10 != 1) {
        (**(code **)(lVar20 + 0x20))(lStack_e8,puVar18,lVar15);
        (**(code **)(lStack_d8 + 0x10))(lStack_e0,lVar4,lVar5);
        lVar22 = lStack_f0;
        (**(code **)(lVar20 + 0x10))(lStack_f0,lVar6,lVar15);
        (*pcStack_120)(lVar22,0,1,lVar15);
        _swift_getAssociatedConformanceWitness(lVar12,param_2,lVar5,&UNK_008441f0,&UNK_008441f8);
        uVar11 = 0;
        __sSDMa(0,lVar5,lVar15,lVar12);
        __sSDyq_Sgxcis(lVar22,lStack_e0,uVar11);
        (**(code **)(lVar20 + 8))(lVar6,lVar15);
        (**(code **)(lStack_d8 + 8))(lVar4,lVar5);
        (**(code **)(lStack_100 + 8))(lStack_98,lStack_a0);
        pcVar17 = *(code **)(lVar16 + 8);
        lVar6 = lStack_f8;
        goto LAB_0012a88c;
      }
      (**(code **)(lStack_d8 + 8))(lVar4,lVar5);
      lVar20 = lStack_a0;
      (**(code **)(lVar22 + 8))(puVar18,lStack_a0);
      lVar6 = lStack_f8;
    }
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,puVar18,0,0);
    *puVar18 = 0;
    _swift_willThrow();
  }
  goto LAB_0012a874;
LAB_0012a5e8:
  if ((pbVar13 != pbVar19) && (*pbVar13 == 0x3a)) {
    do {
      pbVar13 = pbVar13 + 1;
LAB_0012a600:
      *(byte **)(unaff_x20 + 0x28) = pbVar13;
      if ((pbVar13 == pbVar19) || (bVar2 = *pbVar13, 0x23 < bVar2)) {
LAB_0012a7fc:
        puVar18 = puVar10;
        if (pbVar13 == pbVar19) goto LAB_0012a83c;
        goto LAB_0012a804;
      }
    } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar2 != 0x23) goto LAB_0012a7fc;
    pbVar14 = pbVar13 + 1;
    do {
      pbVar13 = pbVar19;
      if (pbVar14 == pbVar19) break;
      pbVar13 = pbVar14 + 1;
      bVar2 = *pbVar14;
      pbVar14 = pbVar13;
    } while (bVar2 != 10 && bVar2 != 0xd);
    goto LAB_0012a600;
  }
  goto LAB_0012a818;
LAB_0012a6a4:
  if ((pbVar14 != pbVar19) && (pbVar13 = pbVar14 + 1, *pbVar14 == 0x3a)) {
    *(byte **)(unaff_x20 + 0x28) = pbVar13;
    do {
      if ((pbVar13 == pbVar19) || (bVar2 = *pbVar13, 0x23 < bVar2)) goto LAB_0012a7f0;
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar2 != 0x23) goto LAB_0012a7f0;
        pbVar14 = pbVar13 + 1;
        do {
          pbVar13 = pbVar19;
          if (pbVar14 == pbVar19) break;
          pbVar13 = pbVar14 + 1;
          bVar2 = *pbVar14;
          pbVar14 = pbVar13;
        } while (bVar2 != 10 && bVar2 != 0xd);
      }
      else {
        pbVar13 = pbVar13 + 1;
      }
      *(byte **)(unaff_x20 + 0x28) = pbVar13;
    } while( true );
  }
  goto LAB_0012a818;
LAB_0012a7f0:
  if (pbVar13 == pbVar19) {
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,puVar10,0,0);
    *puVar10 = 0;
    _swift_willThrow();
    lVar20 = lStack_a0;
    lVar6 = lStack_f8;
    lVar22 = lStack_100;
    goto LAB_0012a874;
  }
LAB_0012a804:
  if ((*pbVar13 != 0x3c) && (*pbVar13 != 0x7b)) {
    FUN_00139b6c(1);
    goto LAB_0012a474;
  }
LAB_0012a818:
  FUN_00139e50();
LAB_0012a474:
  pbVar13 = *(byte **)(unaff_x20 + 0x28);
  pbVar19 = *(byte **)(unaff_x20 + 0x30);
  puVar10 = puVar21;
  if ((pbVar13 != pbVar19) && ((*pbVar13 == 0x3b || (*pbVar13 == 0x2c)))) {
    do {
      pbVar13 = pbVar13 + 1;
LAB_0012a4bc:
      *(byte **)(unaff_x20 + 0x28) = pbVar13;
      if ((pbVar13 == pbVar19) || (bVar2 = *pbVar13, 0x23 < bVar2)) goto LAB_0012a388;
    } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar2 != 0x23) goto LAB_0012a388;
    pbVar14 = pbVar13 + 1;
    while (pbVar13 = pbVar19, pbVar14 != pbVar19) {
      pbVar13 = pbVar14 + 1;
      bVar2 = *pbVar14;
      if ((bVar2 == 10) || (pbVar14 = pbVar13, bVar2 == 0xd)) break;
    }
    goto LAB_0012a4bc;
  }
  goto LAB_0012a388;
}



/* Entry: 0012abb0; end: 0012b5e3;  */

void FUN_0012abb0(undefined8 param_1,undefined8 param_2,undefined1 *param_3,long param_4,
                 undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar16;
  undefined1 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar17;
  byte *pbVar18;
  long lVar19;
  undefined1 *puVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  undefined8 uStack_130;
  undefined4 auStack_128 [2];
  undefined1 auStack_120 [8];
  code *pcStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  uint uStack_84;
  
  lVar21 = *(long *)(param_3 + -8);
  uStack_d0 = param_5;
  uStack_b0 = param_1;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar21 + 0x40));
  lVar12 = *(long *)(param_4 + 8);
  lVar5 = 0;
  puStack_e0 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _swift_getAssociatedTypeWitness();
  lVar19 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar19 + 0x40));
  lVar15 = (long)(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_d8 = lVar15;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar15 = lVar15 - extraout_x12;
  lVar6 = 0;
  lStack_b8 = lVar15;
  __sSqMa(0,param_3);
  lVar16 = *(long *)(lVar6 + -8);
  lStack_98 = lVar6;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar16 + 0x40));
  lVar15 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_e8 = lVar15;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar17 = (undefined1 *)(lVar15 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar15 = (long)puVar17 - extraout_x12_01;
  lVar6 = 0;
  __sSqMa(0,lVar5);
  lStack_a0 = *(long *)(lVar6 + -8);
  lStack_a8 = lVar6;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar20 = (undefined1 *)(lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar7 = (long)puVar20 - extraout_x12_02;
  (**(code **)(lVar19 + 0x38))(lVar7,1,1,lVar5);
  pcVar22 = *(code **)(lVar21 + 0x38);
  puVar10 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  lStack_c8 = lVar21;
  puStack_c0 = param_3;
  lStack_90 = lVar15;
  (*pcVar22)(lVar15,1,1,param_3);
  uVar4 = (uint)lVar15;
  FUN_00135bd4();
  lVar15 = lStack_b8;
  puVar3 = puStack_c0;
  lVar6 = lStack_c8;
  lVar21 = lStack_a8;
  lVar23 = lStack_a0;
  if (unaff_x21 == 0) {
    bVar1 = unaff_x20[0x49];
    pbVar13 = *(byte **)(unaff_x20 + 0x28);
    pbVar18 = *(byte **)(unaff_x20 + 0x30);
    pcStack_118 = pcVar22;
    puStack_110 = puVar17;
    puStack_108 = puVar20;
    lStack_100 = lVar19;
    lStack_f8 = lVar5;
    lStack_f0 = lVar16;
    uStack_84 = uVar4;
LAB_0012adec:
    if ((pbVar13 != pbVar18) && ((uint)*pbVar13 == (uStack_84 & 0xff))) {
      *(byte **)(unaff_x20 + 0x28) = pbVar13 + 1;
      FUN_00138a3c();
      lVar23 = lStack_a0;
      lVar21 = lStack_a8;
      lVar19 = lStack_f8;
      lVar5 = lStack_100;
      puVar10 = puStack_108;
      lVar16 = *(long *)(unaff_x20 + 0x50) + 1;
      if (SCARRY8(*(long *)(unaff_x20 + 0x50),1)) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x12b590);
        (*pcVar22)();
      }
      *(long *)(unaff_x20 + 0x50) = lVar16;
      if (*(long *)(unaff_x20 + 0x40) < lVar16) {
        *(undefined4 *)(lVar7 + -8) = 0;
        *(undefined8 *)(lVar7 + -0x10) = 0x119;
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd00000000000003f,0x80000000008b9020,
                   "SwiftProtobuf/TextFormatScanner.swift",0x25,2);
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x12b5e4);
        (*pcVar22)();
      }
      (**(code **)(lStack_a0 + 0x10))(puStack_108,lVar7,lStack_a8);
      puVar17 = puVar10;
      (**(code **)(lVar5 + 0x30))(puVar10,1,lVar19);
      if ((int)puVar17 == 1) {
        (**(code **)(lVar23 + 8))(puVar10,lVar21);
        lVar16 = lStack_f0;
      }
      else {
        (**(code **)(lVar5 + 0x20))(lVar15,puVar10,lVar19);
        lVar16 = lStack_f0;
        puVar10 = puStack_110;
        (**(code **)(lStack_f0 + 0x10))(puStack_110,lStack_90,lStack_98);
        puVar20 = puVar10;
        (**(code **)(lVar6 + 0x30))(puVar10,1,puVar3);
        puVar17 = puStack_e0;
        if ((int)puVar20 != 1) {
          (**(code **)(lVar6 + 0x20))(puStack_e0,puVar10,puVar3);
          (**(code **)(lVar5 + 0x10))(lStack_d8,lVar15,lVar19);
          lVar16 = lStack_e8;
          (**(code **)(lVar6 + 0x10))(lStack_e8,puVar17,puVar3);
          (*pcStack_118)(lVar16,0,1,puVar3);
          _swift_getAssociatedConformanceWitness(lVar12,param_2,lVar19,&UNK_008441f0,&UNK_008441f8);
          uVar11 = 0;
          __sSDMa(0,lVar19,puVar3,lVar12);
          __sSDyq_Sgxcis(lVar16,lStack_d8,uVar11);
          (**(code **)(lVar6 + 8))(puVar17,puVar3);
          (**(code **)(lVar5 + 8))(lStack_b8,lVar19);
          (**(code **)(lStack_f0 + 8))(lStack_90,lStack_98);
          pcVar22 = *(code **)(lStack_a0 + 8);
          goto LAB_0012b2e8;
        }
        (**(code **)(lVar5 + 8))(lVar15,lVar19);
        (**(code **)(lVar16 + 8))(puVar10,lStack_98);
        lVar23 = lStack_a0;
      }
      FUN_000c723c();
      _swift_allocError(&UNK_009aeed8,puVar10,0,0);
      *puVar10 = 0;
      _swift_willThrow();
      goto LAB_0012b2dc;
    }
    puVar17 = (undefined1 *)(ulong)(uint)bVar1;
    FUN_00136f34();
    if (puVar10 == (undefined1 *)0x0) goto LAB_0012b2a4;
    if ((puVar17 == &UNK_0079656b) && (puVar10 == (undefined1 *)0xe300000000000000)) {
LAB_0012aea0:
      _swift_bridgeObjectRelease(puVar10);
      puVar20 = unaff_x20;
      (**(code **)(lVar12 + 0x20))(lVar7);
      goto LAB_0012aed4;
    }
    puVar8 = &UNK_0079656b;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (&UNK_0079656b,0xe300000000000000,puVar17,puVar10,0);
    if ((((ulong)puVar8 & 1) != 0) ||
       ((puVar17 == segment_command_00000020.segname + 9 &&
        (puVar10 == (undefined1 *)0xe100000000000000)))) goto LAB_0012aea0;
    uVar9 = 0x31;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x31,0xe100000000000000,puVar17,puVar10,0);
    if ((uVar9 & 1) != 0) goto LAB_0012aea0;
    if ((puVar17 != (undefined1 *)0x65756c6176) || (puVar10 != (undefined1 *)0xe500000000000000)) {
      uVar9 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x65756c6176,0xe500000000000000,puVar17,puVar10,0);
      if (((uVar9 & 1) == 0) &&
         (puVar17 != segment_command_00000020.segname + 10 ||
          puVar10 != (undefined1 *)0xe100000000000000)) {
        uVar9 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x32,0xe100000000000000,puVar17,puVar10,0);
        if ((uVar9 & 1) == 0) {
          if (bVar1 != 0) {
            uVar9 = 0x5b;
            puVar20 = (undefined1 *)0xe100000000000000;
            __sSS9hasPrefixySbSSF(0x5b,0xe100000000000000,puVar17,puVar10);
            if ((uVar9 & 1) != 0) {
              _swift_bridgeObjectRelease();
              pbVar13 = *(byte **)(unaff_x20 + 0x28);
              do {
                if ((pbVar13 == pbVar18) || (bVar2 = *pbVar13, 0x23 < bVar2)) goto LAB_0012b050;
                if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar2 != 0x23) goto LAB_0012b050;
                  pbVar14 = pbVar13 + 1;
                  do {
                    if (pbVar14 == pbVar18) {
                      *(byte **)(unaff_x20 + 0x28) = pbVar18;
                      pbVar13 = pbVar18;
                      goto LAB_0012b050;
                    }
                    pbVar13 = pbVar14 + 1;
                    bVar2 = *pbVar14;
                    pbVar14 = pbVar13;
                  } while (bVar2 != 10 && bVar2 != 0xd);
                }
                else {
                  pbVar13 = pbVar13 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar13;
              } while( true );
            }
          }
          if (unaff_x20[0x48] == '\x01') {
            uVar9 = 0x5b;
            puVar20 = (undefined1 *)0xe100000000000000;
            __sSS9hasPrefixySbSSF(0x5b,0xe100000000000000,puVar17,puVar10);
            _swift_bridgeObjectRelease();
            lVar23 = lStack_a0;
            if ((uVar9 & 1) == 0) {
              pbVar14 = *(byte **)(unaff_x20 + 0x28);
              do {
                if ((pbVar14 == pbVar18) || (bVar2 = *pbVar14, 0x23 < bVar2)) goto LAB_0012b10c;
                if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar2 != 0x23) goto LAB_0012b10c;
                  pbVar13 = pbVar14 + 1;
                  do {
                    if (pbVar13 == pbVar18) {
                      *(byte **)(unaff_x20 + 0x28) = pbVar18;
                      pbVar14 = pbVar18;
                      goto LAB_0012b10c;
                    }
                    pbVar14 = pbVar13 + 1;
                    bVar2 = *pbVar13;
                    pbVar13 = pbVar14;
                  } while (bVar2 != 10 && bVar2 != 0xd);
                }
                else {
                  pbVar14 = pbVar14 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar14;
              } while( true );
            }
          }
          else {
            _swift_bridgeObjectRelease();
          }
          FUN_000c723c();
          _swift_allocError(&UNK_009aeed8,puVar10,0,0);
          *puVar10 = 7;
          goto LAB_0012b2c8;
        }
      }
    }
    _swift_bridgeObjectRelease(puVar10);
    puVar20 = puVar3;
    FUN_00127f18(lStack_90,puVar3,uStack_d0);
    goto LAB_0012aed4;
  }
  goto LAB_0012b2dc;
LAB_0012b050:
  if ((pbVar13 != pbVar18) && (*pbVar13 == 0x3a)) {
    do {
      pbVar13 = pbVar13 + 1;
LAB_0012b068:
      *(byte **)(unaff_x20 + 0x28) = pbVar13;
      if ((pbVar13 == pbVar18) || (bVar2 = *pbVar13, 0x23 < bVar2)) {
LAB_0012b264:
        puVar17 = puVar10;
        if (pbVar13 == pbVar18) goto LAB_0012b2a4;
        goto LAB_0012b26c;
      }
    } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar2 != 0x23) goto LAB_0012b264;
    pbVar14 = pbVar13 + 1;
    do {
      pbVar13 = pbVar18;
      if (pbVar14 == pbVar18) break;
      pbVar13 = pbVar14 + 1;
      bVar2 = *pbVar14;
      pbVar14 = pbVar13;
    } while (bVar2 != 10 && bVar2 != 0xd);
    goto LAB_0012b068;
  }
  goto LAB_0012b280;
LAB_0012b10c:
  if ((pbVar14 != pbVar18) && (pbVar13 = pbVar14 + 1, *pbVar14 == 0x3a)) {
    *(byte **)(unaff_x20 + 0x28) = pbVar13;
    do {
      if ((pbVar13 == pbVar18) || (bVar2 = *pbVar13, 0x23 < bVar2)) goto LAB_0012b258;
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar2 != 0x23) goto LAB_0012b258;
        pbVar14 = pbVar13 + 1;
        do {
          pbVar13 = pbVar18;
          if (pbVar14 == pbVar18) break;
          pbVar13 = pbVar14 + 1;
          bVar2 = *pbVar14;
          pbVar14 = pbVar13;
        } while (bVar2 != 10 && bVar2 != 0xd);
      }
      else {
        pbVar13 = pbVar13 + 1;
      }
      *(byte **)(unaff_x20 + 0x28) = pbVar13;
    } while( true );
  }
  goto LAB_0012b280;
LAB_0012b258:
  if (pbVar13 == pbVar18) {
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,puVar10,0,0);
    *puVar10 = 0;
    _swift_willThrow();
    lVar16 = lStack_f0;
    lVar21 = lStack_a8;
    goto LAB_0012b2dc;
  }
LAB_0012b26c:
  if ((*pbVar13 != 0x3c) && (*pbVar13 != 0x7b)) {
    FUN_00139b6c(1);
    goto LAB_0012aed4;
  }
LAB_0012b280:
  FUN_00139e50();
LAB_0012aed4:
  pbVar13 = *(byte **)(unaff_x20 + 0x28);
  pbVar18 = *(byte **)(unaff_x20 + 0x30);
  puVar10 = puVar20;
  if ((pbVar13 != pbVar18) && ((*pbVar13 == 0x3b || (*pbVar13 == 0x2c)))) {
    do {
      pbVar13 = pbVar13 + 1;
LAB_0012af18:
      *(byte **)(unaff_x20 + 0x28) = pbVar13;
      if ((pbVar13 == pbVar18) || (bVar2 = *pbVar13, 0x23 < bVar2)) goto LAB_0012adec;
    } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar2 != 0x23) goto LAB_0012adec;
    pbVar14 = pbVar13 + 1;
    while (pbVar13 = pbVar18, pbVar14 != pbVar18) {
      pbVar13 = pbVar14 + 1;
      bVar2 = *pbVar14;
      if ((bVar2 == 10) || (pbVar14 = pbVar13, bVar2 == 0xd)) break;
    }
    goto LAB_0012af18;
  }
  goto LAB_0012adec;
LAB_0012b2a4:
  FUN_000c723c();
  _swift_allocError(&UNK_009aeed8,puVar17,0,0);
  *puVar17 = 0;
LAB_0012b2c8:
  _swift_willThrow();
  lVar16 = lStack_f0;
  lVar21 = lStack_a8;
  lVar23 = lStack_a0;
LAB_0012b2dc:
  (**(code **)(lVar16 + 8))(lStack_90,lStack_98);
  pcVar22 = *(code **)(lVar23 + 8);
LAB_0012b2e8:
  (*pcVar22)(lVar7,lVar21);
  return;
}



/* Entry: 0012b5e4; end: 0012b757;  */

void FUN_0012b5e4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,code *param_6)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  long unaff_x20;
  long unaff_x21;
  
  pcVar3 = *(char **)(unaff_x20 + 0x28);
  pcVar1 = *(char **)(unaff_x20 + 0x30);
  if ((pcVar3 != pcVar1) && (*pcVar3 == ':')) {
    *(char **)(unaff_x20 + 0x28) = pcVar3 + 1;
    FUN_00138a3c();
    pcVar3 = *(char **)(unaff_x20 + 0x28);
  }
  if ((pcVar3 == pcVar1) || (*pcVar3 != '[')) {
    (*param_6)(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar3 + 1;
    FUN_00138a3c();
    pcVar3 = *(char **)(unaff_x20 + 0x28);
    if ((pcVar3 == *(char **)(unaff_x20 + 0x30)) || (*pcVar3 != ']')) {
      while (puVar2 = param_1, (*param_6)(param_1,param_2,param_3,param_4,param_5), unaff_x21 == 0)
      {
        pcVar3 = *(char **)(unaff_x20 + 0x28);
        pcVar1 = *(char **)(unaff_x20 + 0x30);
        if ((pcVar3 != pcVar1) && (*pcVar3 == ']')) goto LAB_0012b67c;
        FUN_00138a3c();
        pcVar3 = *(char **)(unaff_x20 + 0x28);
        if ((pcVar3 == pcVar1) || (*pcVar3 != ',')) {
          FUN_000c723c();
          _swift_allocError(&UNK_009aeed8,puVar2,0,0);
          *puVar2 = 0;
          _swift_willThrow();
          return;
        }
        *(char **)(unaff_x20 + 0x28) = pcVar3 + 1;
        FUN_00138a3c();
      }
    }
    else {
LAB_0012b67c:
      *(char **)(unaff_x20 + 0x28) = pcVar3 + 1;
      FUN_00138a3c();
    }
  }
  return;
}



/* Entry: 0012b758; end: 0012c18b;  */

void FUN_0012b758(undefined8 param_1,undefined8 param_2,undefined1 *param_3,long param_4,
                 undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar16;
  undefined1 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar17;
  byte *pbVar18;
  long lVar19;
  undefined1 *puVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  undefined8 uStack_130;
  undefined4 auStack_128 [2];
  undefined1 auStack_120 [8];
  code *pcStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  uint uStack_84;
  
  lVar21 = *(long *)(param_3 + -8);
  uStack_d0 = param_6;
  uStack_b0 = param_1;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar21 + 0x40));
  lVar12 = *(long *)(param_4 + 8);
  lVar5 = 0;
  puStack_e0 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _swift_getAssociatedTypeWitness();
  lVar19 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar19 + 0x40));
  lVar15 = (long)(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_d8 = lVar15;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar15 = lVar15 - extraout_x12;
  lVar6 = 0;
  lStack_b8 = lVar15;
  __sSqMa(0,param_3);
  lVar16 = *(long *)(lVar6 + -8);
  lStack_98 = lVar6;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar16 + 0x40));
  lVar15 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_e8 = lVar15;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar17 = (undefined1 *)(lVar15 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar15 = (long)puVar17 - extraout_x12_01;
  lVar6 = 0;
  __sSqMa(0,lVar5);
  lStack_a0 = *(long *)(lVar6 + -8);
  lStack_a8 = lVar6;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar20 = (undefined1 *)(lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar7 = (long)puVar20 - extraout_x12_02;
  (**(code **)(lVar19 + 0x38))(lVar7,1,1,lVar5);
  pcVar22 = *(code **)(lVar21 + 0x38);
  puVar10 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  lStack_c8 = lVar21;
  puStack_c0 = param_3;
  lStack_90 = lVar15;
  (*pcVar22)(lVar15,1,1,param_3);
  uVar4 = (uint)lVar15;
  FUN_00135bd4();
  lVar15 = lStack_b8;
  puVar3 = puStack_c0;
  lVar6 = lStack_c8;
  lVar21 = lStack_a8;
  lVar23 = lStack_a0;
  if (unaff_x21 == 0) {
    bVar1 = unaff_x20[0x49];
    pbVar13 = *(byte **)(unaff_x20 + 0x28);
    pbVar18 = *(byte **)(unaff_x20 + 0x30);
    pcStack_118 = pcVar22;
    puStack_110 = puVar17;
    puStack_108 = puVar20;
    lStack_100 = lVar19;
    lStack_f8 = lVar5;
    lStack_f0 = lVar16;
    uStack_84 = uVar4;
LAB_0012b994:
    if ((pbVar13 != pbVar18) && ((uint)*pbVar13 == (uStack_84 & 0xff))) {
      *(byte **)(unaff_x20 + 0x28) = pbVar13 + 1;
      FUN_00138a3c();
      lVar23 = lStack_a0;
      lVar21 = lStack_a8;
      lVar19 = lStack_f8;
      lVar5 = lStack_100;
      puVar10 = puStack_108;
      lVar16 = *(long *)(unaff_x20 + 0x50) + 1;
      if (SCARRY8(*(long *)(unaff_x20 + 0x50),1)) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x12c138);
        (*pcVar22)();
      }
      *(long *)(unaff_x20 + 0x50) = lVar16;
      if (*(long *)(unaff_x20 + 0x40) < lVar16) {
        *(undefined4 *)(lVar7 + -8) = 0;
        *(undefined8 *)(lVar7 + -0x10) = 0x119;
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd00000000000003f,0x80000000008b9020,
                   "SwiftProtobuf/TextFormatScanner.swift",0x25,2);
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x12c18c);
        (*pcVar22)();
      }
      (**(code **)(lStack_a0 + 0x10))(puStack_108,lVar7,lStack_a8);
      puVar17 = puVar10;
      (**(code **)(lVar5 + 0x30))(puVar10,1,lVar19);
      if ((int)puVar17 == 1) {
        (**(code **)(lVar23 + 8))(puVar10,lVar21);
        lVar16 = lStack_f0;
      }
      else {
        (**(code **)(lVar5 + 0x20))(lVar15,puVar10,lVar19);
        lVar16 = lStack_f0;
        puVar10 = puStack_110;
        (**(code **)(lStack_f0 + 0x10))(puStack_110,lStack_90,lStack_98);
        puVar20 = puVar10;
        (**(code **)(lVar6 + 0x30))(puVar10,1,puVar3);
        puVar17 = puStack_e0;
        if ((int)puVar20 != 1) {
          (**(code **)(lVar6 + 0x20))(puStack_e0,puVar10,puVar3);
          (**(code **)(lVar5 + 0x10))(lStack_d8,lVar15,lVar19);
          lVar16 = lStack_e8;
          (**(code **)(lVar6 + 0x10))(lStack_e8,puVar17,puVar3);
          (*pcStack_118)(lVar16,0,1,puVar3);
          _swift_getAssociatedConformanceWitness(lVar12,param_2,lVar19,&UNK_008441f0,&UNK_008441f8);
          uVar11 = 0;
          __sSDMa(0,lVar19,puVar3,lVar12);
          __sSDyq_Sgxcis(lVar16,lStack_d8,uVar11);
          (**(code **)(lVar6 + 8))(puVar17,puVar3);
          (**(code **)(lVar5 + 8))(lStack_b8,lVar19);
          (**(code **)(lStack_f0 + 8))(lStack_90,lStack_98);
          pcVar22 = *(code **)(lStack_a0 + 8);
          goto LAB_0012be90;
        }
        (**(code **)(lVar5 + 8))(lVar15,lVar19);
        (**(code **)(lVar16 + 8))(puVar10,lStack_98);
        lVar23 = lStack_a0;
      }
      FUN_000c723c();
      _swift_allocError(&UNK_009aeed8,puVar10,0,0);
      *puVar10 = 0;
      _swift_willThrow();
      goto LAB_0012be84;
    }
    puVar17 = (undefined1 *)(ulong)(uint)bVar1;
    FUN_00136f34();
    if (puVar10 == (undefined1 *)0x0) goto LAB_0012be4c;
    if ((puVar17 == &UNK_0079656b) && (puVar10 == (undefined1 *)0xe300000000000000)) {
LAB_0012ba48:
      _swift_bridgeObjectRelease(puVar10);
      puVar20 = unaff_x20;
      (**(code **)(lVar12 + 0x20))(lVar7);
      goto LAB_0012ba7c;
    }
    puVar8 = &UNK_0079656b;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (&UNK_0079656b,0xe300000000000000,puVar17,puVar10,0);
    if ((((ulong)puVar8 & 1) != 0) ||
       ((puVar17 == segment_command_00000020.segname + 9 &&
        (puVar10 == (undefined1 *)0xe100000000000000)))) goto LAB_0012ba48;
    uVar9 = 0x31;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x31,0xe100000000000000,puVar17,puVar10,0);
    if ((uVar9 & 1) != 0) goto LAB_0012ba48;
    if ((puVar17 != (undefined1 *)0x65756c6176) || (puVar10 != (undefined1 *)0xe500000000000000)) {
      uVar9 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x65756c6176,0xe500000000000000,puVar17,puVar10,0);
      if (((uVar9 & 1) == 0) &&
         (puVar17 != segment_command_00000020.segname + 10 ||
          puVar10 != (undefined1 *)0xe100000000000000)) {
        uVar9 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x32,0xe100000000000000,puVar17,puVar10,0);
        if ((uVar9 & 1) == 0) {
          if (bVar1 != 0) {
            uVar9 = 0x5b;
            puVar20 = (undefined1 *)0xe100000000000000;
            __sSS9hasPrefixySbSSF(0x5b,0xe100000000000000,puVar17,puVar10);
            if ((uVar9 & 1) != 0) {
              _swift_bridgeObjectRelease();
              pbVar13 = *(byte **)(unaff_x20 + 0x28);
              do {
                if ((pbVar13 == pbVar18) || (bVar2 = *pbVar13, 0x23 < bVar2)) goto LAB_0012bbf8;
                if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar2 != 0x23) goto LAB_0012bbf8;
                  pbVar14 = pbVar13 + 1;
                  do {
                    if (pbVar14 == pbVar18) {
                      *(byte **)(unaff_x20 + 0x28) = pbVar18;
                      pbVar13 = pbVar18;
                      goto LAB_0012bbf8;
                    }
                    pbVar13 = pbVar14 + 1;
                    bVar2 = *pbVar14;
                    pbVar14 = pbVar13;
                  } while (bVar2 != 10 && bVar2 != 0xd);
                }
                else {
                  pbVar13 = pbVar13 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar13;
              } while( true );
            }
          }
          if (unaff_x20[0x48] == '\x01') {
            uVar9 = 0x5b;
            puVar20 = (undefined1 *)0xe100000000000000;
            __sSS9hasPrefixySbSSF(0x5b,0xe100000000000000,puVar17,puVar10);
            _swift_bridgeObjectRelease();
            lVar23 = lStack_a0;
            if ((uVar9 & 1) == 0) {
              pbVar14 = *(byte **)(unaff_x20 + 0x28);
              do {
                if ((pbVar14 == pbVar18) || (bVar2 = *pbVar14, 0x23 < bVar2)) goto LAB_0012bcb4;
                if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar2 != 0x23) goto LAB_0012bcb4;
                  pbVar13 = pbVar14 + 1;
                  do {
                    if (pbVar13 == pbVar18) {
                      *(byte **)(unaff_x20 + 0x28) = pbVar18;
                      pbVar14 = pbVar18;
                      goto LAB_0012bcb4;
                    }
                    pbVar14 = pbVar13 + 1;
                    bVar2 = *pbVar13;
                    pbVar13 = pbVar14;
                  } while (bVar2 != 10 && bVar2 != 0xd);
                }
                else {
                  pbVar14 = pbVar14 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar14;
              } while( true );
            }
          }
          else {
            _swift_bridgeObjectRelease();
          }
          FUN_000c723c();
          _swift_allocError(&UNK_009aeed8,puVar10,0,0);
          *puVar10 = 7;
          goto LAB_0012be70;
        }
      }
    }
    _swift_bridgeObjectRelease(puVar10);
    puVar20 = puVar3;
    FUN_001284a8(lStack_90,puVar3,uStack_d0);
    goto LAB_0012ba7c;
  }
  goto LAB_0012be84;
LAB_0012bbf8:
  if ((pbVar13 != pbVar18) && (*pbVar13 == 0x3a)) {
    do {
      pbVar13 = pbVar13 + 1;
LAB_0012bc10:
      *(byte **)(unaff_x20 + 0x28) = pbVar13;
      if ((pbVar13 == pbVar18) || (bVar2 = *pbVar13, 0x23 < bVar2)) {
LAB_0012be0c:
        puVar17 = puVar10;
        if (pbVar13 == pbVar18) goto LAB_0012be4c;
        goto LAB_0012be14;
      }
    } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar2 != 0x23) goto LAB_0012be0c;
    pbVar14 = pbVar13 + 1;
    do {
      pbVar13 = pbVar18;
      if (pbVar14 == pbVar18) break;
      pbVar13 = pbVar14 + 1;
      bVar2 = *pbVar14;
      pbVar14 = pbVar13;
    } while (bVar2 != 10 && bVar2 != 0xd);
    goto LAB_0012bc10;
  }
  goto LAB_0012be28;
LAB_0012bcb4:
  if ((pbVar14 != pbVar18) && (pbVar13 = pbVar14 + 1, *pbVar14 == 0x3a)) {
    *(byte **)(unaff_x20 + 0x28) = pbVar13;
    do {
      if ((pbVar13 == pbVar18) || (bVar2 = *pbVar13, 0x23 < bVar2)) goto LAB_0012be00;
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar2 != 0x23) goto LAB_0012be00;
        pbVar14 = pbVar13 + 1;
        do {
          pbVar13 = pbVar18;
          if (pbVar14 == pbVar18) break;
          pbVar13 = pbVar14 + 1;
          bVar2 = *pbVar14;
          pbVar14 = pbVar13;
        } while (bVar2 != 10 && bVar2 != 0xd);
      }
      else {
        pbVar13 = pbVar13 + 1;
      }
      *(byte **)(unaff_x20 + 0x28) = pbVar13;
    } while( true );
  }
  goto LAB_0012be28;
LAB_0012be00:
  if (pbVar13 == pbVar18) {
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,puVar10,0,0);
    *puVar10 = 0;
    _swift_willThrow();
    lVar16 = lStack_f0;
    lVar21 = lStack_a8;
    goto LAB_0012be84;
  }
LAB_0012be14:
  if ((*pbVar13 != 0x3c) && (*pbVar13 != 0x7b)) {
    FUN_00139b6c(1);
    goto LAB_0012ba7c;
  }
LAB_0012be28:
  FUN_00139e50();
LAB_0012ba7c:
  pbVar13 = *(byte **)(unaff_x20 + 0x28);
  pbVar18 = *(byte **)(unaff_x20 + 0x30);
  puVar10 = puVar20;
  if ((pbVar13 != pbVar18) && ((*pbVar13 == 0x3b || (*pbVar13 == 0x2c)))) {
    do {
      pbVar13 = pbVar13 + 1;
LAB_0012bac0:
      *(byte **)(unaff_x20 + 0x28) = pbVar13;
      if ((pbVar13 == pbVar18) || (bVar2 = *pbVar13, 0x23 < bVar2)) goto LAB_0012b994;
    } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar2 != 0x23) goto LAB_0012b994;
    pbVar14 = pbVar13 + 1;
    while (pbVar13 = pbVar18, pbVar14 != pbVar18) {
      pbVar13 = pbVar14 + 1;
      bVar2 = *pbVar14;
      if ((bVar2 == 10) || (pbVar14 = pbVar13, bVar2 == 0xd)) break;
    }
    goto LAB_0012bac0;
  }
  goto LAB_0012b994;
LAB_0012be4c:
  FUN_000c723c();
  _swift_allocError(&UNK_009aeed8,puVar17,0,0);
  *puVar17 = 0;
LAB_0012be70:
  _swift_willThrow();
  lVar16 = lStack_f0;
  lVar21 = lStack_a8;
  lVar23 = lStack_a0;
LAB_0012be84:
  (**(code **)(lVar16 + 8))(lStack_90,lStack_98);
  pcVar22 = *(code **)(lVar23 + 8);
LAB_0012be90:
  (*pcVar22)(lVar7,lVar21);
  return;
}



/* Entry: 0012c18c; end: 0012c307;  */

void FUN_0012c18c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  long unaff_x20;
  long unaff_x21;
  
  pcVar3 = *(char **)(unaff_x20 + 0x28);
  pcVar1 = *(char **)(unaff_x20 + 0x30);
  if ((pcVar3 != pcVar1) && (*pcVar3 == ':')) {
    *(char **)(unaff_x20 + 0x28) = pcVar3 + 1;
    FUN_00138a3c();
    pcVar3 = *(char **)(unaff_x20 + 0x28);
  }
  if ((pcVar3 == pcVar1) || (*pcVar3 != '[')) {
    FUN_0012b758(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar3 + 1;
    FUN_00138a3c();
    pcVar3 = *(char **)(unaff_x20 + 0x28);
    if ((pcVar3 == *(char **)(unaff_x20 + 0x30)) || (*pcVar3 != ']')) {
      while (puVar2 = param_1, FUN_0012b758(param_1,param_2,param_3,param_4,param_5,param_6),
            unaff_x21 == 0) {
        pcVar3 = *(char **)(unaff_x20 + 0x28);
        pcVar1 = *(char **)(unaff_x20 + 0x30);
        if ((pcVar3 != pcVar1) && (*pcVar3 == ']')) goto LAB_0012c224;
        FUN_00138a3c();
        pcVar3 = *(char **)(unaff_x20 + 0x28);
        if ((pcVar3 == pcVar1) || (*pcVar3 != ',')) {
          FUN_000c723c();
          _swift_allocError(&UNK_009aeed8,puVar2,0,0);
          *puVar2 = 0;
          _swift_willThrow();
          return;
        }
        *(char **)(unaff_x20 + 0x28) = pcVar3 + 1;
        FUN_00138a3c();
      }
    }
    else {
LAB_0012c224:
      *(char **)(unaff_x20 + 0x28) = pcVar3 + 1;
      FUN_00138a3c();
    }
  }
  return;
}



/* Entry: 0012c308; end: 0012c453;  */

void FUN_0012c308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 auStack_c8 [24];
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [40];
  
  FUN_0012ce38();
  if (lStack_b0 == 0) {
    func_0x0012ce80(auStack_c8,0xaed1d8,&UNK_007d78b0);
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = 0;
  }
  else {
    FUN_0001393c(auStack_c8,lStack_b0);
    (**(code **)(lStack_a8 + 8))(&uStack_a0,param_2,param_3,param_4,lStack_b0,lStack_a8);
    FUN_00011670(auStack_c8);
    if (lStack_88 != 0) {
      FUN_000dfbb8(&uStack_a0,auStack_78);
      pcVar1 = (code *)&uStack_a0;
      FUN_000d48b4(pcVar1,param_4);
      FUN_0012c454(param_4);
      (*pcVar1)(&uStack_a0,0);
      FUN_00011670(auStack_78);
      return;
    }
  }
  func_0x0012ce80(&uStack_a0,0xaedb68,&UNK_007d7b30);
  return;
}



/* Entry: 0012c454; end: 0012c5fb;  */

void FUN_0012c454(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long unaff_x21;
  long lVar4;
  long lVar5;
  undefined1 auStack_78 [24];
  long lStack_60;
  
  FUN_0012ce38(param_1,auStack_78,0xaedb70,&UNK_007d8040);
  lVar4 = lStack_60;
  func_0x0012ce80(auStack_78,0xaedb70,&UNK_007d8040);
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x18);
    lVar4 = *(long *)(param_3 + 0x20);
    FUN_0001393c(param_3,uVar1);
    (**(code **)(lVar4 + 0x20))(auStack_78,param_2,&UNK_009aec48,&PTR_DAT_009aec70,uVar1,lVar4);
    if (unaff_x21 != 0) {
      return;
    }
    func_0x000d4c28(auStack_78,param_1);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x12c5fc);
      (*pcVar2)();
    }
    lVar5 = *(long *)(param_1 + 0x20);
    FUN_000115f8(param_1,lVar4);
    (**(code **)(lVar5 + 0x28))(param_2,&UNK_009aec48,&PTR_DAT_009aec70,lVar4,lVar5);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_0012ce38(param_1,auStack_78,0xaedb70,&UNK_007d8040);
  puVar3 = auStack_78;
  func_0x0012ce80(puVar3,0xaedb70,&UNK_007d8040);
  if (lStack_60 == 0) {
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,puVar3,0,0);
    *puVar3 = 10;
    _swift_willThrow();
  }
  return;
}



/* Entry: 0012c5fc; end: 0012c647;  */

void FUN_0012c5fc(undefined1 *param_1)

{
  FUN_000c723c();
  _swift_allocError(&UNK_009aeed8,param_1,0,0);
  *param_1 = 9;
  _swift_willThrow();
  return;
}



/* Entry: 0012c648; end: 0012c97f;  */

void FUN_0012c648(void)

{
  FUN_00125218();
  return;
}



/* Entry: 0012c980; end: 0012ca0b;  */

long FUN_0012c980(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 0012ca0c; end: 0012cb13;  */

undefined8 * FUN_0012ca0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar2 = param_2[3];
  if (lVar2 == 0) {
    uVar3 = *param_2;
    uVar8 = param_2[3];
    uVar7 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    param_1[3] = uVar8;
    param_1[2] = uVar7;
    param_1[4] = param_2[4];
  }
  else {
    uVar3 = param_2[4];
    param_1[3] = lVar2;
    param_1[4] = uVar3;
    (*(code *)**(undefined8 **)(lVar2 + -8))(param_1,param_2);
  }
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  uVar3 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar3;
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 9);
  uVar3 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  uVar3 = param_2[0xd];
  uVar8 = param_2[0xe];
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar8;
  uVar7 = param_2[0xf];
  uVar1 = param_2[0x10];
  param_1[0xf] = uVar7;
  param_1[0x10] = uVar1;
  uVar5 = param_2[0x11];
  param_1[0x11] = uVar5;
  uVar4 = param_2[0x14];
  uVar6 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar6;
  param_1[0x14] = uVar4;
  _swift_retain();
  _swift_retain(uVar3);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  return param_1;
}



/* Entry: 0012cb14; end: 0012cc8b;  */

undefined8 * FUN_0012cb14(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_2[3];
  if (param_1[3] == 0) {
    if (lVar1 != 0) {
      param_1[3] = lVar1;
      param_1[4] = param_2[4];
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
      goto LAB_0012cb88;
    }
  }
  else {
    if (lVar1 != 0) {
      FUN_0004037c(param_1,param_2);
      goto LAB_0012cb88;
    }
    FUN_00011670(param_1);
  }
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
LAB_0012cb88:
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  uVar2 = param_1[7];
  param_1[7] = param_2[7];
  _swift_retain();
  _swift_release(uVar2);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  uVar2 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_retain();
  _swift_release(uVar2);
  uVar2 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[0x11];
  param_1[0x11] = param_2[0x11];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[0x12];
  param_1[0x12] = param_2[0x12];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar2;
  return param_1;
}



/* Entry: 0012cc8c; end: 0012cd77;  */

undefined8 * FUN_0012cc8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1[3] != 0) {
    FUN_00011670(param_1);
  }
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_release(uVar1);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
  uVar1 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar1;
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_release(uVar1);
  uVar1 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0x11];
  param_1[0x11] = param_2[0x11];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0x12];
  param_1[0x12] = param_2[0x12];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar1;
  return param_1;
}



/* Entry: 0012cd78; end: 0012ce37;  */

int FUN_0012cd78(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x2a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0xe);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 0012ce38; end: 0012ceeb;  */

undefined8 FUN_0012ce38(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x000115a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 0012ceec; end: 0012d16b;  */

void FUN_0012ceec(void)

{
  func_0x0012c6d4();
  return;
}



/* Entry: 0012d16c; end: 0012d17b;  */

bool FUN_0012d16c(char param_1,char param_2)

{
  return param_1 == param_2;
}



/* Entry: 0012d17c; end: 0012d1e3;  */

void FUN_0012d17c(undefined8 param_1,undefined1 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 0012d1e4; end: 0012d1f7;  */

bool FUN_0012d1e4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 0012d1f8; end: 0012d2a3;  */

void FUN_0012d1f8(void)

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



/* Entry: 0012d2a4; end: 0012d2a7;  */

void FUN_0012d2a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af04d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007da6b0;
  _swift_getWitnessTable(&UNK_007da6b0,&UNK_009aeed8);
  puRam0000000000af04d8 = puVar1;
  return;
}



/* Entry: 0012d2a8; end: 0012d2e7;  */

void FUN_0012d2a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af04d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007da6b0;
  _swift_getWitnessTable(&UNK_007da6b0,&UNK_009aeed8);
  puRam0000000000af04d8 = puVar1;
  return;
}



/* Entry: 0012d2e8; end: 0012d45b;  */

void FUN_0012d2e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_0099b708)();
  return;
}



/* Entry: 0012d45c; end: 0012d577;  */

undefined1  [16] FUN_0012d45c(void)

{
  return ZEXT816(100);
}



/* Entry: 0012d578; end: 0012d5b7;  */

void FUN_0012d578(void)

{
  long lVar1;
  
  lVar1 = 2;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
            (2,PTR___ss5UInt8VN_0099b7a8);
  *(undefined8 *)(lVar1 + 0x10) = 2;
  *(undefined2 *)(lVar1 + 0x20) = 0x2020;
  lRam0000000000af04e0 = lVar1;
  return;
}



/* Entry: 0012d5b8; end: 0012d91f;  */

void FUN_0012d5b8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  _swift_bridgeObjectRetain(unaff_x20[1]);
  FUN_00053fc4();
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x5b;
  *unaff_x20 = uVar3;
  _swift_bridgeObjectRetain(param_2);
  func_0x000c79f0(param_1,param_2);
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x5d;
  *unaff_x20 = uVar3;
  return;
}



/* Entry: 0012d920; end: 0012da0f;  */

/* WARNING: Possible PIC construction at 0x0012d72c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0012d730) */

void FUN_0012d920(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 *unaff_x19;
  ulong *unaff_x20;
  ulong uVar10;
  undefined1 *puVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 unaff_x23;
  ulong uVar15;
  undefined8 unaff_x24;
  ulong uVar16;
  ulong uVar17;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar7 = param_2;
  puVar8 = param_3;
  puVar11 = param_3;
  FUN_000dfdd8();
  if (((uint)puVar11 & 0xff) != 1) {
    uVar5 = (long)puVar8 - (long)puVar7;
    uVar6 = 0;
    if (puVar7 != (undefined1 *)0x0) {
      uVar6 = uVar5;
    }
    uVar10 = *unaff_x20;
    lVar13 = *(long *)(uVar10 + 0x10);
    if (SCARRY8(lVar13,uVar6)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xc77a0);
      (*pcVar3)();
    }
    uVar16 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((int)uVar16 != 0) {
      uVar15 = *(ulong *)(uVar10 + 0x18);
      uVar9 = uVar15 >> 1;
      if ((long)(lVar13 + uVar6) <= (long)uVar9) goto LAB_000c770c;
    }
    FUN_000540b4();
    uVar15 = *(ulong *)(uVar16 + 0x18);
    uVar9 = uVar15 >> 1;
    uVar10 = uVar16;
LAB_000c770c:
    uVar16 = *(ulong *)(uVar10 + 0x10);
    uVar17 = uVar9 - uVar16;
    uVar14 = 0;
    if ((((puVar7 != (undefined1 *)0x0) && (puVar8 != (undefined1 *)0x0)) && (puVar7 < puVar8)) &&
       (uVar9 != uVar16)) {
      if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xc7840);
        (*pcVar3)();
      }
      uVar14 = uVar5;
      if (uVar17 <= uVar5) {
        uVar14 = uVar17;
      }
      _memmove(uVar10 + uVar16 + 0x20,puVar7,uVar14);
      puVar7 = puVar7 + uVar14;
    }
    if ((long)uVar14 < (long)uVar6) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xc77a4);
      (*pcVar3)();
    }
    if (uVar14 != 0) {
      bVar4 = SCARRY8(uVar16,uVar14);
      uVar16 = uVar16 + uVar14;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xc77a8);
        (*pcVar3)();
      }
      *(ulong *)(uVar10 + 0x10) = uVar16;
    }
    if ((uVar14 != uVar17 || puVar7 == (undefined1 *)0x0) || puVar7 == puVar8) {
LAB_000c777c:
      *unaff_x20 = uVar10;
      return;
    }
    puVar11 = puVar7 + 1;
    uVar12 = *puVar7;
    uVar6 = uVar10;
    do {
      while( true ) {
        uVar5 = uVar15 >> 1;
        if ((long)(uVar16 + 1) <= (long)uVar5) break;
        uVar10 = (ulong)(1 < uVar15);
        FUN_000540b4(uVar10,uVar16 + 1,1,uVar6);
        uVar15 = *(ulong *)(uVar10 + 0x18);
        uVar5 = uVar15 >> 1;
        if ((long)uVar5 <= (long)uVar16) goto LAB_000c77b0;
LAB_000c77cc:
        lVar13 = uVar16 + 0x20;
        puVar7 = puVar11;
        do {
          *(undefined1 *)(uVar10 + lVar13) = uVar12;
          if (puVar7 == puVar8) {
            *(long *)(uVar10 + 0x10) = lVar13 + -0x1f;
            goto LAB_000c777c;
          }
          puVar11 = puVar7 + 1;
          uVar12 = *puVar7;
          lVar13 = lVar13 + 1;
          puVar7 = puVar11;
        } while (lVar13 - uVar5 != 0x20);
        uVar15 = *(ulong *)(uVar10 + 0x18);
        *(ulong *)(uVar10 + 0x10) = uVar5;
        uVar6 = uVar10;
        uVar16 = uVar5;
      }
      uVar10 = uVar6;
      if ((long)uVar16 < (long)uVar5) goto LAB_000c77cc;
LAB_000c77b0:
      *(ulong *)(uVar10 + 0x10) = uVar16;
      uVar6 = uVar10;
    } while( true );
  }
  (**(code **)(param_3 + 0x28))(param_2,param_3);
  if ((long)param_2 < 0) {
    uVar10 = *unaff_x20;
    uVar6 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar10;
    if ((uVar6 & 1) == 0) {
      uVar5 = 0;
      FUN_000540b4(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
    }
    uVar6 = *(ulong *)(uVar5 + 0x10);
    uVar10 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar6) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_000540b4(uVar10,uVar6 + 1,1,uVar5);
    }
    *(ulong *)(uVar10 + 0x10) = uVar6 + 1;
    *(undefined1 *)(uVar10 + uVar6 + 0x20) = 0x2d;
    *unaff_x20 = uVar10;
    param_2 = (undefined1 *)-(long)param_2;
  }
  while( true ) {
    puVar7 = param_2;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (puVar7 < section_000003d8.segname) break;
    unaff_x30 = 0x12d730;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    param_2 = (undefined1 *)((ulong)puVar7 / 1000);
    unaff_x19 = puVar7;
  }
  if (puVar7 < &segment_command_00000020.flags) {
    uVar6 = *unaff_x20;
    if (puVar7 < (undefined1 *)((long)&MACH_HEADER.cpusubtype + 2)) goto LAB_0012d7f4;
  }
  else {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (ulong)puVar7 / 100;
    uVar10 = *unaff_x20;
    uVar6 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar10;
    if ((uVar6 & 1) == 0) {
      uVar5 = 0;
      FUN_000540b4(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
    }
    uVar10 = *(ulong *)(uVar5 + 0x10);
    uVar6 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar10) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_000540b4(uVar6,uVar10 + 1,1,uVar5);
    }
    *(ulong *)(uVar6 + 0x10) = uVar10 + 1;
    *(byte *)(uVar6 + uVar10 + 0x20) =
         (char)((ulong)puVar7 / 100) + SUB161(auVar1 * ZEXT816(0x199999999999999a),8) * -10 | 0x30;
    *unaff_x20 = uVar6;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (ulong)puVar7 / 10;
  uVar5 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar10 = uVar6;
  if ((uVar5 & 1) == 0) {
    uVar10 = 0;
    FUN_000540b4(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
  }
  uVar5 = *(ulong *)(uVar10 + 0x10);
  uVar6 = uVar10;
  if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar5) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
    FUN_000540b4(uVar6,uVar5 + 1,1,uVar10);
  }
  *(ulong *)(uVar6 + 0x10) = uVar5 + 1;
  *(byte *)(uVar6 + uVar5 + 0x20) =
       (char)((ulong)puVar7 / 10) + SUB161(auVar2 * ZEXT816(0x199999999999999a),8) * -10 | 0x30;
  *unaff_x20 = uVar6;
LAB_0012d7f4:
  uVar5 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar10 = uVar6;
  if ((uVar5 & 1) == 0) {
    uVar10 = 0;
    FUN_000540b4(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
  }
  uVar6 = *(ulong *)(uVar10 + 0x10);
  uVar5 = uVar10;
  if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar6) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
    FUN_000540b4(uVar5,uVar6 + 1,1,uVar10);
  }
  *(ulong *)(uVar5 + 0x10) = uVar6 + 1;
  *(byte *)(uVar5 + uVar6 + 0x20) = (char)puVar7 + (char)((ulong)puVar7 / 10) * -10 | 0x30;
  *unaff_x20 = uVar5;
  return;
}



/* Entry: 0012da10; end: 0012dadf;  */

void FUN_0012da10(float param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  char cVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  if ((((uint)param_1 ^ 0xffffffff) & 0x7f800000) != 0) {
    __sSf16debugDescriptionSSvg();
    if ((param_3 >> 0x3c & 1) == 0) {
      uVar8 = param_2 & 0xffffffffffff;
      if ((param_3 & 0x2000000000000000) != 0) {
        uVar8 = param_3 >> 0x38 & 0xf;
      }
    }
    else {
      uVar8 = param_2;
      __sSS8UTF8ViewV13_foreignCountSiyF(param_2,param_3);
    }
    uVar14 = *unaff_x20;
    lVar3 = *(long *)(uVar14 + 0x10);
    if (SCARRY8(lVar3,uVar8)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc7af8);
      (*pcVar1)();
    }
    uVar4 = uVar14;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)uVar4 == 0) ||
       (uVar13 = *(ulong *)(uVar14 + 0x18) >> 1, (long)uVar13 < (long)(lVar3 + uVar8))) {
      FUN_000540b4();
      uVar13 = *(ulong *)(uVar4 + 0x18) >> 1;
      uVar14 = uVar4;
    }
    lVar11 = uVar13 - *(long *)(uVar14 + 0x10);
    lVar3 = uVar14 + *(long *)(uVar14 + 0x10) + 0x20;
    __ss11_StringGutsV8copyUTF84intoSiSgSrys5UInt8VG_tF(lVar3,lVar11,param_2,param_3);
    if (((uint)lVar11 & 0xff) != 1) {
      _swift_bridgeObjectRelease(param_3);
      if (lVar3 < (long)uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0xc7afc);
        (*pcVar1)();
      }
      if (0 < lVar3) {
        if (SCARRY8(*(long *)(uVar14 + 0x10),lVar3)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0xc7b00);
          (*pcVar1)();
        }
        *(long *)(uVar14 + 0x10) = *(long *)(uVar14 + 0x10) + lVar3;
      }
      *unaff_x20 = uVar14;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xc7b04);
    (*pcVar1)();
  }
  if (((uint)param_1 & 0x7fffff) == 0) {
    if (0.0 <= param_1) {
      pcVar6 = "inf";
      goto LAB_0012da6c;
    }
    pcVar6 = "-inf";
    lVar3 = 4;
  }
  else {
    pcVar6 = "nan";
LAB_0012da6c:
    lVar3 = 3;
  }
  uVar8 = *unaff_x20;
  lVar11 = *(long *)(uVar8 + 0x10);
  if (SCARRY8(lVar11,lVar3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xc7944);
    (*pcVar1)();
  }
  uVar14 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((int)uVar14 != 0) {
    uVar13 = *(ulong *)(uVar8 + 0x18);
    uVar4 = uVar13 >> 1;
    if (lVar11 + lVar3 <= (long)uVar4) goto LAB_000c78ac;
  }
  FUN_000540b4();
  uVar13 = *(ulong *)(uVar14 + 0x18);
  uVar4 = uVar13 >> 1;
  uVar8 = uVar14;
LAB_000c78ac:
  uVar14 = *(ulong *)(uVar8 + 0x10);
  lVar11 = uVar4 - uVar14;
  if ((lVar3 == 0) || (lVar11 == 0)) {
    pcVar5 = (char *)0x0;
    if (pcVar6 != (char *)0x0) {
      pcVar5 = pcVar6;
    }
    pcVar10 = (char *)0x0;
    if (pcVar6 != (char *)0x0) {
      pcVar10 = pcVar6 + lVar3;
    }
    lVar12 = 0;
  }
  else {
    lVar12 = lVar3;
    if (lVar11 <= lVar3) {
      lVar12 = lVar11;
    }
    _memcpy(uVar8 + uVar14 + 0x20,pcVar6,lVar12);
    pcVar5 = pcVar6 + lVar12;
    pcVar10 = pcVar6 + lVar3;
  }
  if (lVar12 < lVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xc7948);
    (*pcVar1)();
  }
  if (0 < lVar12) {
    bVar2 = SCARRY8(uVar14,lVar12);
    uVar14 = uVar14 + lVar12;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc794c);
      (*pcVar1)();
    }
    *(ulong *)(uVar8 + 0x10) = uVar14;
  }
  if ((lVar12 != lVar11 || pcVar5 == (char *)0x0) || pcVar10 == pcVar5) {
LAB_000c7924:
    *unaff_x20 = uVar8;
    return;
  }
  pcVar6 = pcVar5 + 1;
  cVar9 = *pcVar5;
  uVar4 = uVar8;
  do {
    while( true ) {
      uVar7 = uVar13 >> 1;
      if ((long)(uVar14 + 1) <= (long)uVar7) break;
      uVar8 = (ulong)(1 < uVar13);
      FUN_000540b4(uVar8,uVar14 + 1,1,uVar4);
      uVar13 = *(ulong *)(uVar8 + 0x18);
      uVar7 = uVar13 >> 1;
      if ((long)uVar7 <= (long)uVar14) goto LAB_000c7954;
LAB_000c7970:
      lVar3 = uVar14 + 0x20;
      pcVar5 = pcVar6;
      do {
        *(char *)(uVar8 + lVar3) = cVar9;
        if (pcVar5 == pcVar10) {
          *(long *)(uVar8 + 0x10) = lVar3 + -0x1f;
          goto LAB_000c7924;
        }
        cVar9 = *pcVar5;
        pcVar6 = pcVar6 + 1;
        lVar3 = lVar3 + 1;
        pcVar5 = pcVar5 + 1;
      } while (lVar3 - uVar7 != 0x20);
      uVar13 = *(ulong *)(uVar8 + 0x18);
      *(ulong *)(uVar8 + 0x10) = uVar7;
      uVar4 = uVar8;
      uVar14 = uVar7;
    }
    uVar8 = uVar4;
    if ((long)uVar14 < (long)uVar7) goto LAB_000c7970;
LAB_000c7954:
    *(ulong *)(uVar8 + 0x10) = uVar14;
    uVar4 = uVar8;
  } while( true );
}



/* Entry: 0012dae0; end: 0012dbcf;  */

void FUN_0012dae0(ulong param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *unaff_x20;
  char cVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  if (param_2 != 0) {
    if (SBORROW8(param_2,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x12db90);
      (*pcVar3)();
    }
    FUN_0012dae0(param_1 >> 4,param_2 + -1);
    uVar1 = (uint)param_1 & 0xf;
    bVar2 = (byte)param_1 & 0xf | 0x30;
    if (9 < uVar1) {
      bVar2 = (char)uVar1 + 0x37;
    }
    uVar10 = *unaff_x20;
    uVar9 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar10;
    if ((uVar9 & 1) == 0) {
      uVar5 = 0;
      FUN_000540b4(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
    }
    uVar9 = *(ulong *)(uVar5 + 0x10);
    uVar10 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar9) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_000540b4(uVar10,uVar9 + 1,1,uVar5);
    }
    *(ulong *)(uVar10 + 0x10) = uVar9 + 1;
    *(byte *)(uVar10 + uVar9 + 0x20) = bVar2;
    *unaff_x20 = uVar10;
    return;
  }
  uVar9 = *unaff_x20;
  lVar12 = *(long *)(uVar9 + 0x10);
  if (SCARRY8(lVar12,2)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xc7944);
    (*pcVar3)();
  }
  uVar5 = uVar9;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((int)uVar5 != 0) {
    uVar14 = *(ulong *)(uVar9 + 0x18);
    uVar10 = uVar14 >> 1;
    if (lVar12 + 2 <= (long)uVar10) goto LAB_000c78ac;
  }
  FUN_000540b4();
  uVar14 = *(ulong *)(uVar5 + 0x18);
  uVar10 = uVar14 >> 1;
  uVar9 = uVar5;
LAB_000c78ac:
  uVar5 = *(ulong *)(uVar9 + 0x10);
  lVar12 = uVar10 - uVar5;
  if (lVar12 == 0) {
    pcVar6 = "0x";
    lVar13 = 0;
  }
  else {
    lVar13 = 2;
    if (lVar12 < 3) {
      lVar13 = lVar12;
    }
    _memcpy(uVar9 + uVar5 + 0x20,"0x",lVar13);
    pcVar6 = "0x" + lVar13;
  }
  if (lVar13 < 2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xc7948);
    (*pcVar3)();
  }
  if (0 < lVar13) {
    bVar4 = SCARRY8(uVar5,lVar13);
    uVar5 = uVar5 + lVar13;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xc794c);
      (*pcVar3)();
    }
    *(ulong *)(uVar9 + 0x10) = uVar5;
  }
  if ((lVar13 != lVar12 || pcVar6 == (char *)0x0) || pcVar6 == "") {
LAB_000c7924:
    *unaff_x20 = uVar9;
    return;
  }
  pcVar7 = pcVar6 + 1;
  cVar11 = *pcVar6;
  uVar10 = uVar9;
  do {
    while( true ) {
      uVar8 = uVar14 >> 1;
      if ((long)uVar8 < (long)(uVar5 + 1)) break;
      uVar9 = uVar10;
      if ((long)uVar8 <= (long)uVar5) goto LAB_000c7954;
LAB_000c7970:
      lVar12 = uVar5 + 0x20;
      pcVar6 = pcVar7;
      do {
        *(char *)(uVar9 + lVar12) = cVar11;
        if (pcVar6 == "") {
          *(long *)(uVar9 + 0x10) = lVar12 + -0x1f;
          goto LAB_000c7924;
        }
        cVar11 = *pcVar6;
        pcVar7 = pcVar7 + 1;
        lVar12 = lVar12 + 1;
        pcVar6 = pcVar6 + 1;
      } while (lVar12 - uVar8 != 0x20);
      uVar14 = *(ulong *)(uVar9 + 0x18);
      *(ulong *)(uVar9 + 0x10) = uVar8;
      uVar10 = uVar9;
      uVar5 = uVar8;
    }
    uVar9 = (ulong)(1 < uVar14);
    FUN_000540b4(uVar9,uVar5 + 1,1,uVar10);
    uVar14 = *(ulong *)(uVar9 + 0x18);
    uVar8 = uVar14 >> 1;
    if ((long)uVar5 < (long)uVar8) goto LAB_000c7970;
LAB_000c7954:
    *(ulong *)(uVar9 + 0x10) = uVar5;
    uVar10 = uVar9;
  } while( true );
}



/* Entry: 0012dbd0; end: 0012e3db;  */

void FUN_0012dbd0(dword *param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  dword *pdVar5;
  ulong uVar6;
  byte bVar7;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong *unaff_x20;
  ulong uVar12;
  undefined1 *puVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  dword *pdStack_70;
  ulong uStack_68;
  
  uVar12 = *unaff_x20;
  uVar2 = uVar12;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar6 = uVar12;
  if ((uVar2 & 1) == 0) {
    uVar6 = 0;
    FUN_000540b4(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
  }
  uVar2 = *(ulong *)(uVar6 + 0x10);
  uVar12 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar2) {
    uVar12 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    FUN_000540b4(uVar12,uVar2 + 1,1,uVar6);
  }
  *(ulong *)(uVar12 + 0x10) = uVar2 + 1;
  *(undefined1 *)(uVar12 + uVar2 + 0x20) = 0x22;
  *unaff_x20 = uVar12;
  uVar2 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    _swift_bridgeObjectRetain(param_2);
    puVar13 = (undefined1 *)0x0;
    do {
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          pdVar5 = (dword *)((param_2 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_1 >> 0x3c & 1) == 0) {
            pdVar5 = param_1;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
          }
        }
        else {
          pdStack_70 = param_1;
          uStack_68 = param_2 & 0xffffffffffffff;
          pdVar5 = (dword *)&pdStack_70;
        }
        pbVar8 = (byte *)((long)pdVar5 + (long)puVar13);
        uVar14 = (uint)*pbVar8;
        if ((char)*pbVar8 < '\0') {
          uVar10 = (uint)LZCOUNT(uVar14 << 0x18 ^ 0xffffffff);
          if (uVar10 < 3) {
            if (uVar10 != 1) {
              uVar14 = pbVar8[1] & 0x3f | (uVar14 & 0x1f) << 6;
              pdVar5 = (dword *)((long)&MACH_HEADER.magic + 2);
              goto joined_r0x0012dd90;
            }
            goto LAB_0012dcf4;
          }
          if (uVar10 == 3) {
            uVar14 = (uVar14 & 0xf) << 0xc | (pbVar8[1] & 0x3f) << 6 | pbVar8[2] & 0x3f;
            pdVar5 = (dword *)((long)&MACH_HEADER.magic + 3);
joined_r0x0012dd90:
            if (uVar14 < 0xc) goto LAB_0012dcbc;
            goto LAB_0012dd00;
          }
          uVar14 = (uVar14 & 0xf) << 0x12 | (pbVar8[1] & 0x3f) << 0xc | (pbVar8[2] & 0x3f) << 6 |
                   pbVar8[3] & 0x3f;
          pdVar5 = &MACH_HEADER.cputype;
        }
        else {
LAB_0012dcf4:
          pdVar5 = (dword *)((long)&MACH_HEADER.magic + 1);
        }
        if (0xb < uVar14) goto LAB_0012dd00;
LAB_0012dcbc:
        if (9 < (int)uVar14) {
          if (uVar14 == 10) {
            pcVar4 = "\\n";
            goto LAB_0012dc70;
          }
          if (uVar14 == 0xb) {
            pcVar4 = "\\v";
            goto LAB_0012dc70;
          }
          goto LAB_0012ddbc;
        }
        if (uVar14 == 8) {
          pcVar4 = "\\b";
        }
        else {
          if (uVar14 != 9) goto LAB_0012ddbc;
          pcVar4 = "\\t";
        }
LAB_0012dc70:
        FUN_000c7840(pcVar4,2);
      }
      else {
        lVar3 = (long)puVar13 << 0x10;
        pdVar5 = param_1;
        __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                  (lVar3,param_1,param_2);
        uVar14 = (uint)lVar3;
        if ((int)uVar14 < 0xc) goto LAB_0012dcbc;
LAB_0012dd00:
        if ((int)uVar14 < 0x22) {
          if (uVar14 == 0xc) {
            pcVar4 = "\\f";
          }
          else {
            if (uVar14 != 0xd) goto LAB_0012ddbc;
            pcVar4 = "\\r";
          }
          goto LAB_0012dc70;
        }
        if (uVar14 == 0x22) {
          pcVar4 = "\\\"";
          goto LAB_0012dc70;
        }
        if (uVar14 == 0x5c) {
          pcVar4 = "\\\\";
          goto LAB_0012dc70;
        }
LAB_0012ddbc:
        bVar7 = (byte)uVar14;
        if ((uVar14 < 0x20) || (uVar14 == 0x7f)) {
          uVar15 = *unaff_x20;
          uVar6 = uVar15;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar12 = uVar15;
          if ((uVar6 & 1) == 0) {
            uVar12 = 0;
            FUN_000540b4(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
          }
          uVar6 = *(ulong *)(uVar12 + 0x10);
          uVar15 = *(ulong *)(uVar12 + 0x18);
          uVar11 = uVar15 >> 1;
          lVar3 = uVar6 + 1;
          uVar9 = uVar12;
          if (uVar11 <= uVar6) {
            uVar9 = (ulong)(1 < uVar15);
            FUN_000540b4(uVar9,lVar3,1,uVar12);
            uVar15 = *(ulong *)(uVar9 + 0x18);
            uVar11 = uVar15 >> 1;
          }
          *(long *)(uVar9 + 0x10) = lVar3;
          *(undefined1 *)(uVar9 + uVar6 + 0x20) = 0x5c;
          lVar16 = uVar6 + 2;
          uVar12 = uVar9;
          if ((long)uVar11 < lVar16) {
            uVar12 = (ulong)(1 < uVar15);
            FUN_000540b4(uVar12,lVar16,1,uVar9);
            uVar15 = *(ulong *)(uVar12 + 0x18);
            uVar11 = uVar15 >> 1;
          }
          *(long *)(uVar12 + 0x10) = lVar16;
          *(byte *)(uVar12 + lVar3 + 0x20) = (byte)(uVar14 >> 6) | 0x30;
          lVar3 = uVar6 + 3;
          uVar9 = uVar12;
          if ((long)uVar11 < lVar3) {
            uVar9 = (ulong)(1 < uVar15);
            FUN_000540b4(uVar9,lVar3,1,uVar12);
            uVar15 = *(ulong *)(uVar9 + 0x18);
            uVar11 = uVar15 >> 1;
          }
          *(long *)(uVar9 + 0x10) = lVar3;
          *(byte *)(uVar9 + lVar16 + 0x20) = (byte)(uVar14 >> 3) & 7 | 0x30;
          lVar16 = uVar6 + 4;
          uVar6 = uVar9;
          if ((long)uVar11 < lVar16) {
            uVar6 = (ulong)(1 < uVar15);
            FUN_000540b4(uVar6,lVar16,1,uVar9);
          }
          bVar7 = bVar7 & 7 | 0x30;
LAB_0012df3c:
          *(long *)(uVar6 + 0x10) = lVar16;
          lVar3 = uVar6 + lVar3;
LAB_0012df44:
          *(byte *)(lVar3 + 0x20) = bVar7;
          *unaff_x20 = uVar6;
        }
        else {
          if (0x7f < uVar14) {
            if (uVar14 < 0x800) {
              uVar15 = *unaff_x20;
              uVar6 = uVar15;
              _swift_isUniquelyReferenced_nonNull_native();
              uVar12 = uVar15;
              if ((uVar6 & 1) == 0) {
                uVar12 = 0;
                FUN_000540b4(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
              }
              uVar15 = *(ulong *)(uVar12 + 0x10);
              uVar9 = *(ulong *)(uVar12 + 0x18);
              uVar11 = uVar9 >> 1;
              lVar3 = uVar15 + 1;
              uVar6 = uVar12;
              if (uVar11 <= uVar15) {
                uVar6 = (ulong)(1 < uVar9);
                FUN_000540b4(uVar6,lVar3,1,uVar12);
                uVar9 = *(ulong *)(uVar6 + 0x18);
                uVar11 = uVar9 >> 1;
              }
              *(long *)(uVar6 + 0x10) = lVar3;
              *(byte *)(uVar6 + uVar15 + 0x20) = (byte)(uVar14 >> 6) | 0xc0;
              lVar16 = uVar15 + 2;
              if ((long)uVar11 < lVar16) {
LAB_0012e064:
                uVar12 = (ulong)(1 < uVar9);
                FUN_000540b4(uVar12,lVar16,1,uVar6);
                uVar6 = uVar12;
              }
LAB_0012df34:
              bVar7 = bVar7 & 0x3f | 0x80;
              goto LAB_0012df3c;
            }
            if (uVar14 >> 0x10 != 0) {
              uVar10 = (uVar14 >> 0x12 & 0xff) + 0xf0;
              if (uVar10 >> 8 != 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x12e35c);
                (*pcVar1)();
              }
              uVar15 = *unaff_x20;
              uVar6 = uVar15;
              _swift_isUniquelyReferenced_nonNull_native();
              uVar12 = uVar15;
              if ((uVar6 & 1) == 0) {
                uVar12 = 0;
                FUN_000540b4(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
              }
              uVar15 = *(ulong *)(uVar12 + 0x10);
              uVar9 = *(ulong *)(uVar12 + 0x18);
              uVar11 = uVar9 >> 1;
              lVar3 = uVar15 + 1;
              uVar6 = uVar12;
              if (uVar11 <= uVar15) {
                uVar6 = (ulong)(1 < uVar9);
                FUN_000540b4(uVar6,lVar3,1,uVar12);
                uVar9 = *(ulong *)(uVar6 + 0x18);
                uVar11 = uVar9 >> 1;
              }
              *(long *)(uVar6 + 0x10) = lVar3;
              *(char *)(uVar6 + uVar15 + 0x20) = (char)uVar10;
              lVar16 = uVar15 + 2;
              uVar12 = uVar6;
              if ((long)uVar11 < lVar16) {
                uVar12 = (ulong)(1 < uVar9);
                FUN_000540b4(uVar12,lVar16,1,uVar6);
                uVar9 = *(ulong *)(uVar12 + 0x18);
                uVar11 = uVar9 >> 1;
              }
              *(long *)(uVar12 + 0x10) = lVar16;
              *(byte *)(uVar12 + lVar3 + 0x20) = (byte)(uVar14 >> 0xc) & 0x3f | 0x80;
              lVar3 = uVar15 + 3;
              uVar6 = uVar12;
              if ((long)uVar11 < lVar3) {
                uVar6 = (ulong)(1 < uVar9);
                FUN_000540b4(uVar6,lVar3,1,uVar12);
                uVar9 = *(ulong *)(uVar6 + 0x18);
                uVar11 = uVar9 >> 1;
              }
              *(long *)(uVar6 + 0x10) = lVar3;
              *(byte *)(uVar6 + lVar16 + 0x20) = (byte)(uVar14 >> 6) & 0x3f | 0x80;
              lVar16 = uVar15 + 4;
              if ((long)uVar11 < lVar16) goto LAB_0012e064;
              goto LAB_0012df34;
            }
            uVar15 = *unaff_x20;
            uVar6 = uVar15;
            _swift_isUniquelyReferenced_nonNull_native();
            uVar12 = uVar15;
            if ((uVar6 & 1) == 0) {
              uVar12 = 0;
              FUN_000540b4(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
            }
            uVar6 = *(ulong *)(uVar12 + 0x10);
            uVar15 = *(ulong *)(uVar12 + 0x18);
            uVar11 = uVar15 >> 1;
            lVar16 = uVar6 + 1;
            uVar9 = uVar12;
            if (uVar11 <= uVar6) {
              uVar9 = (ulong)(1 < uVar15);
              FUN_000540b4(uVar9,lVar16,1,uVar12);
              uVar15 = *(ulong *)(uVar9 + 0x18);
              uVar11 = uVar15 >> 1;
            }
            *(long *)(uVar9 + 0x10) = lVar16;
            *(byte *)(uVar9 + uVar6 + 0x20) = (byte)(uVar14 >> 0xc) | 0xe0;
            lVar3 = uVar6 + 2;
            uVar12 = uVar9;
            if ((long)uVar11 < lVar3) {
              uVar12 = (ulong)(1 < uVar15);
              FUN_000540b4(uVar12,lVar3,1,uVar9);
              uVar15 = *(ulong *)(uVar12 + 0x18);
              uVar11 = uVar15 >> 1;
            }
            *(long *)(uVar12 + 0x10) = lVar3;
            *(byte *)(uVar12 + lVar16 + 0x20) = (byte)(uVar14 >> 6) & 0x3f | 0x80;
            lVar16 = uVar6 + 3;
            uVar6 = uVar12;
            if ((long)uVar11 < lVar16) {
              uVar6 = (ulong)(1 < uVar15);
              FUN_000540b4(uVar6,lVar16,1,uVar12);
            }
            bVar7 = bVar7 & 0x3f | 0x80;
            *(long *)(uVar6 + 0x10) = lVar16;
            lVar3 = uVar6 + lVar3;
            goto LAB_0012df44;
          }
          uVar15 = *unaff_x20;
          uVar6 = uVar15;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar12 = uVar15;
          if ((uVar6 & 1) == 0) {
            uVar12 = 0;
            FUN_000540b4(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
          }
          uVar6 = *(ulong *)(uVar12 + 0x10);
          uVar15 = uVar12;
          if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar6) {
            uVar15 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
            FUN_000540b4(uVar15,uVar6 + 1,1,uVar12);
          }
          *(ulong *)(uVar15 + 0x10) = uVar6 + 1;
          *(byte *)(uVar15 + uVar6 + 0x20) = bVar7;
          *unaff_x20 = uVar15;
        }
      }
      puVar13 = (undefined1 *)((long)pdVar5 + (long)puVar13);
    } while ((long)puVar13 < (long)uVar2);
    _swift_bridgeObjectRelease(param_2);
    uVar12 = *unaff_x20;
  }
  uVar2 = uVar12;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar6 = uVar12;
  if ((uVar2 & 1) == 0) {
    uVar6 = 0;
    FUN_000540b4(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
  }
  uVar2 = *(ulong *)(uVar6 + 0x10);
  uVar12 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar2) {
    uVar12 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    FUN_000540b4(uVar12,uVar2 + 1,1,uVar6);
  }
  *(ulong *)(uVar12 + 0x10) = uVar2 + 1;
  *(undefined1 *)(uVar12 + uVar2 + 0x20) = 0x22;
  *unaff_x20 = uVar12;
  return;
}



/* Entry: 0012e3dc; end: 0012e6ab;  */

void FUN_0012e3dc(long param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  uint uVar12;
  ulong *unaff_x20;
  byte *pbVar13;
  undefined1 *puVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  puVar5 = auStack_60;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar14 = (undefined1 *)*unaff_x20;
  puVar6 = puVar14;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar6 & 1) == 0) {
    puVar6 = (undefined1 *)0x0;
    FUN_000540b4(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
    puVar14 = puVar6;
  }
  uVar9 = *(ulong *)(puVar14 + 0x10);
  if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar9) {
    puVar6 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
    FUN_000540b4(puVar6,uVar9 + 1,1,puVar14);
    puVar14 = puVar6;
  }
  *(ulong *)(puVar14 + 0x10) = uVar9 + 1;
  puVar14[uVar9 + 0x20] = 0x22;
  *unaff_x20 = (ulong)puVar14;
  uVar17 = (uint)(param_2 >> 0x20);
  uVar12 = uVar17 >> 0x1e;
  if (uVar17 >> 0x1e < 2) {
    if (uVar12 == 0) {
      auStack_60[0] = (undefined1)param_1;
      auStack_60[1] = (undefined1)((ulong)param_1 >> 8);
      auStack_60[2] = (undefined1)((ulong)param_1 >> 0x10);
      auStack_60[3] = (undefined1)((ulong)param_1 >> 0x18);
      auStack_60[4] = (undefined1)((ulong)param_1 >> 0x20);
      auStack_60[5] = (undefined1)((ulong)param_1 >> 0x28);
      auStack_60[6] = (undefined1)((ulong)param_1 >> 0x30);
      auStack_60[7] = (undefined1)((ulong)param_1 >> 0x38);
      auStack_60[8] = (undefined1)param_2;
      auStack_60[9] = (undefined1)(param_2 >> 8);
      auStack_60[10] = (undefined1)(param_2 >> 0x10);
      auStack_60[0xb] = (undefined1)(param_2 >> 0x18);
      auStack_60[0xc] = (undefined1)(param_2 >> 0x20);
      auStack_60[0xd] = (undefined1)(param_2 >> 0x28);
      puVar5 = auStack_60;
      puVar14 = auStack_60 + (param_2 >> 0x30 & 0xff);
    }
    else {
      lVar15 = (long)(int)param_1;
      puVar5 = (undefined1 *)((param_1 >> 0x20) - lVar15);
      if (param_1 >> 0x20 < lVar15) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x12e69c);
        (*pcVar3)();
      }
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (puVar6 == (undefined1 *)0x0) {
        __s10Foundation13__DataStorageC7_lengthSivg();
        puVar5 = (undefined1 *)0x0;
        puVar14 = (undefined1 *)0x0;
      }
      else {
        puVar4 = puVar6;
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar15,(long)puVar4)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x12e6a8);
          (*pcVar3)();
        }
        puVar6 = puVar6 + (lVar15 - (long)puVar4);
        __s10Foundation13__DataStorageC7_lengthSivg();
        if ((long)puVar5 <= (long)puVar4) {
          puVar4 = puVar5;
        }
        puVar5 = (undefined1 *)0x0;
        if (puVar6 != (undefined1 *)0x0) {
          puVar5 = puVar6;
        }
        puVar14 = (undefined1 *)0x0;
        if (puVar6 != (undefined1 *)0x0) {
          puVar14 = puVar4 + (long)puVar6;
        }
      }
    }
  }
  else if (uVar12 == 2) {
    lVar15 = *(long *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    puVar4 = puVar6;
    puVar5 = puVar6;
    if (puVar6 != (undefined1 *)0x0) {
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar15,(long)puVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x12e6a4);
        (*pcVar3)();
      }
      puVar5 = puVar6 + (lVar15 - (long)puVar4);
    }
    puVar6 = (undefined1 *)(lVar1 - lVar15);
    if (SBORROW8(lVar1,lVar15)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x12e6a0);
      (*pcVar3)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if ((long)puVar6 <= (long)puVar4) {
      puVar4 = puVar6;
    }
    puVar14 = (undefined1 *)0x0;
    if (puVar5 != (undefined1 *)0x0) {
      puVar14 = puVar4 + (long)puVar5;
    }
  }
  else {
    auStack_60[8] = 0;
    auStack_60[9] = 0;
    auStack_60[10] = 0;
    auStack_60[0xb] = 0;
    auStack_60[0xc] = 0;
    auStack_60[0xd] = 0;
    auStack_60[0] = 0;
    auStack_60[1] = 0;
    auStack_60[2] = 0;
    auStack_60[3] = 0;
    auStack_60[4] = 0;
    auStack_60[5] = 0;
    auStack_60[6] = 0;
    auStack_60[7] = 0;
    puVar14 = auStack_60;
  }
  puVar11 = unaff_x20;
  FUN_0012e6ac(puVar5);
  pbVar13 = (byte *)*unaff_x20;
  pbVar7 = pbVar13;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)pbVar7 & 1) == 0) {
    puVar14 = (undefined1 *)(*(long *)(pbVar13 + 0x10) + 1);
    pbVar7 = (byte *)0x0;
    puVar11 = (ulong *)((long)&MACH_HEADER.magic + 1);
    FUN_000540b4();
    pbVar13 = pbVar7;
  }
  uVar9 = *(ulong *)(pbVar13 + 0x10);
  if (*(ulong *)(pbVar13 + 0x18) >> 1 <= uVar9) {
    pbVar7 = (byte *)(ulong)(1 < *(ulong *)(pbVar13 + 0x18));
    puVar11 = (ulong *)((long)&MACH_HEADER.magic + 1);
    puVar14 = (undefined1 *)(uVar9 + 1);
    FUN_000540b4();
    pbVar13 = pbVar7;
  }
  *(undefined1 **)(pbVar13 + 0x10) = (undefined1 *)(uVar9 + 1);
  pbVar13[uVar9 + 0x20] = 0x22;
  *unaff_x20 = (ulong)pbVar13;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (pbVar7 != (byte *)0x0) {
    lVar15 = (long)puVar14 - (long)pbVar7;
    for (; lVar15 != 0; lVar15 = lVar15 + -1) {
      bVar2 = *pbVar7;
      uVar17 = (uint)bVar2;
      if (bVar2 < 0xc) {
        if (uVar17 != 9 && 8 < bVar2) {
          if (uVar17 == 10) {
            pcVar8 = "\\n";
          }
          else {
            if (uVar17 != 0xb) goto LAB_0012e7d0;
            pcVar8 = "\\v";
          }
          goto LAB_0012e714;
        }
        if (uVar17 == 8) {
          pcVar8 = "\\b";
          goto LAB_0012e714;
        }
        if (uVar17 == 9) {
          pcVar8 = "\\t";
          goto LAB_0012e714;
        }
LAB_0012e7d0:
        uVar16 = *puVar11;
        uVar9 = uVar16;
        _swift_isUniquelyReferenced_nonNull_native();
        *puVar11 = uVar16;
        if (uVar17 - 0x20 < 0x5f) {
          uVar10 = uVar16;
          if ((uVar9 & 1) == 0) {
            uVar10 = 0;
            FUN_000540b4(0,*(long *)(uVar16 + 0x10) + 1,1,uVar16);
            *puVar11 = uVar10;
          }
          uVar9 = *(ulong *)(uVar10 + 0x10);
          uVar16 = uVar10;
          if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar9) {
            uVar16 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
            FUN_000540b4(uVar16,uVar9 + 1,1,uVar10);
            *puVar11 = uVar16;
          }
          *(ulong *)(uVar16 + 0x10) = uVar9 + 1;
          *(byte *)(uVar16 + uVar9 + 0x20) = bVar2;
        }
        else {
          uVar10 = uVar16;
          if ((uVar9 & 1) == 0) {
            uVar10 = 0;
            FUN_000540b4(0,*(long *)(uVar16 + 0x10) + 1,1,uVar16);
            *puVar11 = uVar10;
          }
          uVar9 = *(ulong *)(uVar10 + 0x10);
          uVar16 = uVar10;
          if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar9) {
            uVar16 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
            FUN_000540b4(uVar16,uVar9 + 1,1,uVar10);
            *puVar11 = uVar16;
          }
          *(ulong *)(uVar16 + 0x10) = uVar9 + 1;
          *(undefined1 *)(uVar16 + uVar9 + 0x20) = 0x5c;
          uVar16 = *puVar11;
          uVar9 = *(ulong *)(uVar16 + 0x10);
          if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar9) {
            uVar16 = (ulong)(1 < *(ulong *)(uVar16 + 0x18));
            FUN_000540b4(uVar16,uVar9 + 1,1);
            *puVar11 = uVar16;
          }
          *(ulong *)(uVar16 + 0x10) = uVar9 + 1;
          *(byte *)(uVar16 + uVar9 + 0x20) = bVar2 >> 6 | 0x30;
          uVar16 = *puVar11;
          uVar9 = *(ulong *)(uVar16 + 0x10);
          if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar9) {
            uVar16 = (ulong)(1 < *(ulong *)(uVar16 + 0x18));
            FUN_000540b4(uVar16,uVar9 + 1,1);
            *puVar11 = uVar16;
          }
          *(ulong *)(uVar16 + 0x10) = uVar9 + 1;
          *(byte *)(uVar16 + uVar9 + 0x20) = bVar2 >> 3 & 7 | 0x30;
          uVar16 = *puVar11;
          uVar9 = *(ulong *)(uVar16 + 0x10);
          if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar9) {
            uVar16 = (ulong)(1 < *(ulong *)(uVar16 + 0x18));
            FUN_000540b4(uVar16,uVar9 + 1,1);
            *puVar11 = uVar16;
          }
          *(ulong *)(uVar16 + 0x10) = uVar9 + 1;
          *(byte *)(uVar16 + uVar9 + 0x20) = bVar2 & 7 | 0x30;
        }
      }
      else {
        if (uVar17 == 0x21 || bVar2 < 0x21) {
          if (uVar17 == 0xc) {
            pcVar8 = "\\f";
          }
          else {
            if (uVar17 != 0xd) goto LAB_0012e7d0;
            pcVar8 = "\\r";
          }
        }
        else if (uVar17 == 0x22) {
          pcVar8 = "\\\"";
        }
        else {
          if (uVar17 != 0x5c) goto LAB_0012e7d0;
          pcVar8 = "\\\\";
        }
LAB_0012e714:
        FUN_000c7840(pcVar8,2);
      }
      pbVar7 = pbVar7 + 1;
    }
  }
  return;
}



/* Entry: 0012e6ac; end: 0012e99f;  */

void FUN_0012e6ac(byte *param_1,long param_2,ulong *param_3)

{
  byte bVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  if (param_1 != (byte *)0x0) {
    param_2 = param_2 - (long)param_1;
    for (; param_2 != 0; param_2 = param_2 + -1) {
      bVar1 = *param_1;
      uVar6 = (uint)bVar1;
      if (bVar1 < 0xc) {
        if (uVar6 != 9 && 8 < bVar1) {
          if (uVar6 == 10) {
            pcVar2 = "\\n";
          }
          else {
            if (uVar6 != 0xb) goto LAB_0012e7d0;
            pcVar2 = "\\v";
          }
          goto LAB_0012e714;
        }
        if (uVar6 == 8) {
          pcVar2 = "\\b";
          goto LAB_0012e714;
        }
        if (uVar6 == 9) {
          pcVar2 = "\\t";
          goto LAB_0012e714;
        }
LAB_0012e7d0:
        uVar5 = *param_3;
        uVar3 = uVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        *param_3 = uVar5;
        if (uVar6 - 0x20 < 0x5f) {
          uVar4 = uVar5;
          if ((uVar3 & 1) == 0) {
            uVar4 = 0;
            FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
            *param_3 = uVar4;
          }
          uVar3 = *(ulong *)(uVar4 + 0x10);
          uVar5 = uVar4;
          if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
            FUN_000540b4(uVar5,uVar3 + 1,1,uVar4);
            *param_3 = uVar5;
          }
          *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
          *(byte *)(uVar5 + uVar3 + 0x20) = bVar1;
        }
        else {
          uVar4 = uVar5;
          if ((uVar3 & 1) == 0) {
            uVar4 = 0;
            FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
            *param_3 = uVar4;
          }
          uVar3 = *(ulong *)(uVar4 + 0x10);
          uVar5 = uVar4;
          if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
            FUN_000540b4(uVar5,uVar3 + 1,1,uVar4);
            *param_3 = uVar5;
          }
          *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
          *(undefined1 *)(uVar5 + uVar3 + 0x20) = 0x5c;
          uVar5 = *param_3;
          uVar3 = *(ulong *)(uVar5 + 0x10);
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
            FUN_000540b4(uVar5,uVar3 + 1,1);
            *param_3 = uVar5;
          }
          *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
          *(byte *)(uVar5 + uVar3 + 0x20) = bVar1 >> 6 | 0x30;
          uVar5 = *param_3;
          uVar3 = *(ulong *)(uVar5 + 0x10);
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
            FUN_000540b4(uVar5,uVar3 + 1,1);
            *param_3 = uVar5;
          }
          *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
          *(byte *)(uVar5 + uVar3 + 0x20) = bVar1 >> 3 & 7 | 0x30;
          uVar5 = *param_3;
          uVar3 = *(ulong *)(uVar5 + 0x10);
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
            FUN_000540b4(uVar5,uVar3 + 1,1);
            *param_3 = uVar5;
          }
          *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
          *(byte *)(uVar5 + uVar3 + 0x20) = bVar1 & 7 | 0x30;
        }
      }
      else {
        if (uVar6 == 0x21 || bVar1 < 0x21) {
          if (uVar6 == 0xc) {
            pcVar2 = "\\f";
          }
          else {
            if (uVar6 != 0xd) goto LAB_0012e7d0;
            pcVar2 = "\\r";
          }
        }
        else if (uVar6 == 0x22) {
          pcVar2 = "\\\"";
        }
        else {
          if (uVar6 != 0x5c) goto LAB_0012e7d0;
          pcVar2 = "\\\\";
        }
LAB_0012e714:
        FUN_000c7840(pcVar2,2);
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}



/* Entry: 0012e9a0; end: 0012e9a3;  */

undefined8 * FUN_0012e9a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Entry: 0012e9a4; end: 0012e9ff;  */

void FUN_0012e9a4(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_1[1]);
  return;
}



/* Entry: 0012ea00; end: 0012ea5b;  */

undefined8 * FUN_0012ea00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 0012ea5c; end: 0012ea97;  */

undefined8 * FUN_0012ea5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 0012ea98; end: 0012eb33;  */

int FUN_0012ea98(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 0012eb34; end: 0012ecbf;  */

undefined8 FUN_0012eb34(void)

{
  return 1;
}



/* Entry: 0012ecc0; end: 0012ed57;  */

long FUN_0012ecc0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 0012ed58; end: 0012efff;  */

undefined8 * FUN_0012ed58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  lVar3 = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar5);
  if (lVar3 == 0) {
    lVar3 = param_2[2];
    uVar6 = param_2[5];
    uVar5 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = lVar3;
    param_1[5] = uVar6;
    param_1[4] = uVar5;
    uVar5 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar5;
  }
  else {
    uVar5 = param_2[3];
    uVar1 = param_2[4];
    param_1[2] = lVar3;
    param_1[3] = uVar5;
    uVar6 = param_2[5];
    uVar2 = param_2[6];
    param_1[4] = uVar1;
    param_1[5] = uVar6;
    uVar4 = param_2[7];
    param_1[6] = uVar2;
    param_1[7] = uVar4;
    _swift_retain(lVar3);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRetain(uVar4);
  }
  uVar5 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar5;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar5);
  return param_1;
}



/* Entry: 0012f000; end: 0012f023;  */

void FUN_0012f000(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar6 = param_2[9];
  uVar5 = param_2[8];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[9] = uVar6;
  param_1[8] = uVar5;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  return;
}



/* Entry: 0012f024; end: 0012f11f;  */

undefined8 * FUN_0012f024(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRelease(uVar1);
  plVar2 = param_1 + 2;
  if (*plVar2 != 0) {
    if (param_2[2] != 0) {
      param_1[2] = param_2[2];
      _swift_release();
      uVar1 = param_1[3];
      param_1[3] = param_2[3];
      _swift_bridgeObjectRelease(uVar1);
      uVar1 = param_1[4];
      param_1[4] = param_2[4];
      _swift_bridgeObjectRelease(uVar1);
      uVar1 = param_1[5];
      param_1[5] = param_2[5];
      _swift_bridgeObjectRelease(uVar1);
      uVar1 = param_1[6];
      param_1[6] = param_2[6];
      _swift_bridgeObjectRelease(uVar1);
      uVar1 = param_1[7];
      param_1[7] = param_2[7];
      _swift_bridgeObjectRelease(uVar1);
      goto LAB_0012f0e4;
    }
    FUN_000fd7b4(plVar2);
  }
  lVar3 = param_2[2];
  uVar4 = param_2[5];
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  *plVar2 = lVar3;
  param_1[5] = uVar4;
  param_1[4] = uVar1;
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
LAB_0012f0e4:
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  return param_1;
}



/* Entry: 0012f120; end: 0012f1cf;  */

int FUN_0012f120(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x51) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 0012f1d0; end: 0012f563;  */

void FUN_0012f1d0(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  uVar7 = 0;
  func_0x000115a8(0xaf0500);
  lVar3 = 2;
  __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
  uVar4 = 1;
  FUN_000e1d94();
  if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x12f2ec);
    (*pcVar2)();
  }
  lVar1 = lVar3 + 0x40;
  uVar5 = uVar4 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar5) = *(ulong *)(lVar1 + uVar5) | 1L << (uVar4 & 0x3f);
  *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar4 * 8) = 1;
  puVar6 = (undefined8 *)(*(long *)(lVar3 + 0x38) + uVar4 * 0x18);
  *puVar6 = "key";
  puVar6[1] = 3;
  *(undefined1 *)(puVar6 + 2) = 2;
  if (SCARRY8(*(long *)(lVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x12f2f0);
    (*pcVar2)();
  }
  *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
  uVar4 = 2;
  FUN_000e1d94();
  if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x12f2f4);
    (*pcVar2)();
  }
  uVar7 = uVar4 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) | 1L << (uVar4 & 0x3f);
  *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar4 * 8) = 2;
  puVar6 = (undefined8 *)(*(long *)(lVar3 + 0x38) + uVar4 * 0x18);
  *puVar6 = "value";
  puVar6[1] = 5;
  *(undefined1 *)(puVar6 + 2) = 2;
  if (!SCARRY8(*(long *)(lVar3 + 0x10),1)) {
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
    lRam0000000000af04f8 = lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x12f2f8);
  (*pcVar2)();
}



/* Entry: 0012f564; end: 0012f7bb;  */

void FUN_0012f564(long param_1,ulong param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long extraout_x8;
  ulong uVar8;
  ulong *unaff_x20;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb0;
  
  if (((unaff_x20[2] == 0) || (uVar9 = unaff_x20[3], *(long *)(uVar9 + 0x10) == 0)) ||
     (lVar6 = param_1, FUN_000e1d94(), (param_2 & 1) == 0)) {
    uVar9 = unaff_x20[8];
    if ((*(long *)(uVar9 + 0x10) == 0) || (lVar6 = param_1, FUN_000e1d94(), (param_2 & 1) == 0)) {
      uVar9 = unaff_x20[9];
      if (uVar9 != 0) {
        if ((*(long *)(uVar9 + 0x10) == 0) ||
           (lVar6 = param_1, FUN_000e1d94(param_1), (param_2 & 1) == 0)) {
          uStack_68 = 0;
          uStack_70 = 0;
        }
        else {
          FUN_00135928(*(long *)(uVar9 + 0x38) + lVar6 * 0x28,&uStack_70);
          if (in_stack_ffffffffffffffa8 != 0) {
            FUN_0001393c(&uStack_70,in_stack_ffffffffffffffa8);
            lVar6 = *(long *)(in_stack_ffffffffffffffa8 + -8);
            (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar6 + 0x40));
            (**(code **)(lVar6 + 0x10))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
            func_0x0013596c(&uStack_70,0xaedb70,&UNK_007d8040);
            (**(code **)(in_stack_ffffffffffffffb0 + 0x18))
                      (auStack_98,in_stack_ffffffffffffffa8,in_stack_ffffffffffffffb0);
            (**(code **)(lVar6 + 8))
                      (auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                       in_stack_ffffffffffffffa8);
            FUN_0001393c(auStack_98,uStack_80);
            uVar3 = uStack_80;
            lVar6 = lStack_78;
            (**(code **)(lStack_78 + 0x10))(uStack_80,lStack_78);
            FUN_00011670(auStack_98);
            FUN_0012d5b8(uVar3,lVar6);
            _swift_bridgeObjectRelease(lVar6);
            return;
          }
        }
        func_0x0013596c(&uStack_70,0xaedb70,&UNK_007d8040);
      }
      _swift_bridgeObjectRetain(unaff_x20[1]);
      FUN_00053fc4();
      if (-1 < param_1) {
        func_0x0012d6f0(param_1);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x12f7b4);
      (*pcVar1)();
    }
    puVar7 = (undefined8 *)(*(long *)(uVar9 + 0x38) + lVar6 * 0x18);
    if ((*(byte *)(puVar7 + 2) & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x12f7b8);
      (*pcVar1)();
    }
    puVar11 = (undefined1 *)*puVar7;
    if (puVar11 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x12f7bc);
      (*pcVar1)();
    }
    lVar6 = puVar7[1];
    _swift_bridgeObjectRetain(unaff_x20[1]);
    FUN_00053fc4();
    puVar4 = puVar11 + lVar6;
  }
  else {
    lVar6 = *(long *)(uVar9 + 0x38) + lVar6 * 0x28;
    puVar11 = *(undefined1 **)(lVar6 + 0x18);
    puVar4 = *(undefined1 **)(lVar6 + 0x20);
    _swift_bridgeObjectRetain(unaff_x20[1]);
    FUN_00053fc4();
  }
  uVar17 = (long)puVar4 - (long)puVar11;
  uVar9 = 0;
  if (puVar11 != (undefined1 *)0x0) {
    uVar9 = uVar17;
  }
  uVar8 = *unaff_x20;
  lVar6 = *(long *)(uVar8 + 0x10);
  if (SCARRY8(lVar6,uVar9)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xc77a0);
    (*pcVar1)();
  }
  uVar15 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((int)uVar15 != 0) {
    uVar14 = *(ulong *)(uVar8 + 0x18);
    uVar5 = uVar14 >> 1;
    if ((long)(lVar6 + uVar9) <= (long)uVar5) goto LAB_000c770c;
  }
  FUN_000540b4();
  uVar14 = *(ulong *)(uVar15 + 0x18);
  uVar5 = uVar14 >> 1;
  uVar8 = uVar15;
LAB_000c770c:
  uVar15 = *(ulong *)(uVar8 + 0x10);
  uVar16 = uVar5 - uVar15;
  uVar13 = 0;
  if ((((puVar11 != (undefined1 *)0x0) && (puVar4 != (undefined1 *)0x0)) && (puVar11 < puVar4)) &&
     (uVar5 != uVar15)) {
    if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc7840);
      (*pcVar1)();
    }
    uVar13 = uVar17;
    if (uVar16 <= uVar17) {
      uVar13 = uVar16;
    }
    _memmove(uVar8 + uVar15 + 0x20,puVar11,uVar13);
    puVar11 = puVar11 + uVar13;
  }
  if ((long)uVar13 < (long)uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xc77a4);
    (*pcVar1)();
  }
  if (uVar13 != 0) {
    bVar2 = SCARRY8(uVar15,uVar13);
    uVar15 = uVar15 + uVar13;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc77a8);
      (*pcVar1)();
    }
    *(ulong *)(uVar8 + 0x10) = uVar15;
  }
  if ((uVar13 != uVar16 || puVar11 == (undefined1 *)0x0) || puVar11 == puVar4) {
LAB_000c777c:
    *unaff_x20 = uVar8;
    return;
  }
  puVar10 = puVar11 + 1;
  uVar12 = *puVar11;
  uVar9 = uVar8;
  do {
    while( true ) {
      uVar17 = uVar14 >> 1;
      if ((long)uVar17 < (long)(uVar15 + 1)) break;
      uVar8 = uVar9;
      if ((long)uVar17 <= (long)uVar15) goto LAB_000c77b0;
LAB_000c77cc:
      lVar6 = uVar15 + 0x20;
      puVar11 = puVar10;
      do {
        *(undefined1 *)(uVar8 + lVar6) = uVar12;
        if (puVar11 == puVar4) {
          *(long *)(uVar8 + 0x10) = lVar6 + -0x1f;
          goto LAB_000c777c;
        }
        puVar10 = puVar11 + 1;
        uVar12 = *puVar11;
        lVar6 = lVar6 + 1;
        puVar11 = puVar10;
      } while (lVar6 - uVar17 != 0x20);
      uVar14 = *(ulong *)(uVar8 + 0x18);
      *(ulong *)(uVar8 + 0x10) = uVar17;
      uVar9 = uVar8;
      uVar15 = uVar17;
    }
    uVar8 = (ulong)(1 < uVar14);
    FUN_000540b4(uVar8,uVar15 + 1,1,uVar9);
    uVar14 = *(ulong *)(uVar8 + 0x18);
    uVar17 = uVar14 >> 1;
    if ((long)uVar15 < (long)uVar17) goto LAB_000c77cc;
LAB_000c77b0:
    *(ulong *)(uVar8 + 0x10) = uVar15;
    uVar9 = uVar8;
  } while( true );
}



/* Entry: 0012f7bc; end: 0012f883;  */

void FUN_0012f7bc(long param_1,long param_2)

{
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined2 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((param_1 != 0) && (lStack_c8 = param_2 - param_1, lStack_c8 != 0)) {
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_b0 = 1;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_78 = 0;
    uStack_70 = 1;
    uStack_48 = 0xf000000000000000;
    uStack_50 = 0;
    uStack_38 = 0xf000000000000000;
    uStack_40 = 0;
    uStack_b8 = 0;
    lStack_d0 = param_1;
    lStack_c0 = param_1;
    func_0x001358a0(&uStack_100,&uStack_a0,0xaed1d8,&UNK_007d78b0);
    uStack_68 = 100;
    uStack_60 = 1;
    uStack_58 = 100;
    FUN_0012f884(&lStack_d0,10);
    func_0x000d4cac(&lStack_d0);
  }
  return;
}



/* Entry: 00130880; end: 001309c3;  */

void FUN_00130880(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  FUN_0012f564(param_2);
  FUN_000c7840(": ",2);
  if (param_1 < 0) {
    uVar3 = *unaff_x20;
    uVar1 = uVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar2 = uVar3;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
    }
    uVar1 = *(ulong *)(uVar2 + 0x10);
    uVar3 = uVar2;
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
      uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
    }
    *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x2d;
    *unaff_x20 = uVar3;
    param_1 = -param_1;
  }
  func_0x0012d6f0(param_1);
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar3 + uVar1 + 0x20) = 10;
  *unaff_x20 = uVar3;
  return;
}



/* Entry: 001309c4; end: 00130a9f;  */

void FUN_001309c4(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  
  FUN_0012f564(param_2);
  FUN_000c7840(": ",2);
  bVar3 = (param_1 & 1) == 0;
  pcVar2 = "true";
  if (bVar3) {
    pcVar2 = "false";
  }
  uVar1 = 4;
  if (bVar3) {
    uVar1 = 5;
  }
  FUN_000c7840(pcVar2,uVar1);
  uVar6 = *unaff_x20;
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar5 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    FUN_000540b4(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
  }
  uVar4 = *(ulong *)(uVar5 + 0x10);
  uVar6 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_000540b4(uVar6,uVar4 + 1,1,uVar5);
  }
  *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
  *(undefined1 *)(uVar6 + uVar4 + 0x20) = 10;
  *unaff_x20 = uVar6;
  return;
}



/* Entry: 00130aa0; end: 00130b6f;  */

void FUN_00130aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  FUN_0012f564(param_2);
  FUN_000c7840(": ",2);
  FUN_0012d920(param_1,param_3,param_4);
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar3 + uVar1 + 0x20) = 10;
  *unaff_x20 = uVar3;
  return;
}



/* Entry: 00130b70; end: 00130fa3;  */

void FUN_00130b70(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  unkbyte9 *pVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  unkbyte9 Var13;
  unkbyte9 Var14;
  unkbyte9 Var15;
  unkbyte9 Var16;
  unkbyte9 Var17;
  unkbyte9 Var18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined *puVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar25;
  long unaff_x21;
  long lVar26;
  undefined8 uVar27;
  code *pcVar28;
  long lVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 auVar46 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar26 = *(long *)(param_3 + -8);
  lStack_130 = param_4;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar26 + 0x40));
  lVar29 = (long)&uStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  FUN_0012f564(param_2);
  pVar1 = (unkbyte9 *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)pVar1;
  Var16 = *pVar1;
  Var15 = *pVar1;
  pVar1 = (unkbyte9 *)(unaff_x20 + 0x30);
  uVar11 = *(undefined8 *)pVar1;
  uVar12 = *(undefined8 *)(unaff_x20 + 0x38);
  Var14 = *pVar1;
  Var13 = *pVar1;
  pVar1 = (unkbyte9 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)pVar1;
  Var18 = *pVar1;
  Var17 = *pVar1;
  uVar25 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar27 = *(undefined8 *)(unaff_x20 + 0x48);
  lVar21 = param_3;
  _swift_conformsToProtocol(param_3,&DAT_00844958);
  if ((param_3 == 0) || (lVar21 == 0)) {
    _swift_bridgeObjectRetain(uVar27);
    _swift_bridgeObjectRetain(uVar25);
    uVar30 = 0;
    uVar31 = 0;
    uVar32 = 0;
    uVar33 = 0;
    uVar34 = 0;
    uVar35 = 0;
    uVar36 = 0;
    uVar37 = 0;
    uVar38 = 0;
    uVar39 = 0;
    uVar40 = 0;
    uVar41 = 0;
    uVar42 = 0;
    uVar43 = 0;
    uVar44 = 0;
    uVar45 = 0;
    auStack_90 = ZEXT216(0);
    uStack_80 = 0;
    uStack_78 = 0;
  }
  else {
    pcVar28 = *(code **)(lVar21 + 8);
    _swift_bridgeObjectRetain(uVar27);
    _swift_bridgeObjectRetain(uVar25);
    (*pcVar28)(auStack_a0,param_3,lVar21);
    uVar38 = (undefined1)auStack_a0._8_8_;
    uVar39 = SUB81(auStack_a0._8_8_,1);
    uVar40 = SUB81(auStack_a0._8_8_,2);
    uVar41 = SUB81(auStack_a0._8_8_,3);
    uVar42 = SUB81(auStack_a0._8_8_,4);
    uVar43 = SUB81(auStack_a0._8_8_,5);
    uVar44 = SUB81(auStack_a0._8_8_,6);
    uVar45 = SUB81(auStack_a0._8_8_,7);
    uVar30 = (undefined1)auStack_a0._0_8_;
    uVar31 = SUB81(auStack_a0._0_8_,1);
    uVar32 = SUB81(auStack_a0._0_8_,2);
    uVar33 = SUB81(auStack_a0._0_8_,3);
    uVar34 = SUB81(auStack_a0._0_8_,4);
    uVar35 = SUB81(auStack_a0._0_8_,5);
    uVar36 = SUB81(auStack_a0._0_8_,6);
    uVar37 = SUB81(auStack_a0._0_8_,7);
  }
  *(ulong *)(unaff_x20 + 0x18) =
       CONCAT17(uVar45,CONCAT16(uVar44,CONCAT15(uVar43,CONCAT14(uVar42,CONCAT13(uVar41,CONCAT12(
                                                  uVar40,CONCAT11(uVar39,uVar38)))))));
  *(ulong *)(unaff_x20 + 0x10) =
       CONCAT17(uVar37,CONCAT16(uVar36,CONCAT15(uVar35,CONCAT14(uVar34,CONCAT13(uVar33,CONCAT12(
                                                  uVar32,CONCAT11(uVar31,uVar30)))))));
  *(long *)(unaff_x20 + 0x28) = auStack_90._8_8_;
  *(long *)(unaff_x20 + 0x20) = auStack_90._0_8_;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_80;
  puVar22 = PTR___swiftEmptyArrayStorage_0099b8f0;
  FUN_0019bc8c();
  uStack_118 = uVar25;
  _swift_bridgeObjectRelease(uVar25);
  *(undefined **)(unaff_x20 + 0x40) = puVar22;
  pcVar28 = *(code **)(lVar26 + 0x10);
  (*pcVar28)(lVar29 - extraout_x12,param_1,param_3);
  uVar25 = 0xaef4a0;
  func_0x000115a8(0xaef4a0,&UNK_007d9aa8);
  puVar23 = &uStack_d0;
  _swift_dynamicCast(puVar23,lVar29 - extraout_x12,param_3,uVar25,0xe);
  lVar21 = lStack_b0;
  uVar25 = uStack_b8;
  if ((int)puVar23 == 0) {
    lStack_b0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    func_0x0013596c(&uStack_d0,0xaef4a8,&UNK_007d9ab0);
    uVar25 = 0;
  }
  else {
    FUN_0001393c(&uStack_d0,uStack_b8);
    (**(code **)(lVar21 + 0x10))(uVar25,lVar21);
    FUN_00011670(&uStack_d0);
  }
  _swift_bridgeObjectRelease(uVar27);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar25;
  FUN_000c7840(" {\n",3);
  if (lRam0000000000af04e8 != -1) {
    _swift_once(0xaf04e8,FUN_0012d578);
  }
  _swift_bridgeObjectRetain(uRam0000000000af04e0);
  FUN_00053fc4();
  (*pcVar28)(lVar29,param_1,param_3);
  puVar23 = &uStack_d0;
  _swift_dynamicCast(puVar23,lVar29,param_3,&UNK_009af680,6);
  uVar20 = uStack_c0;
  uVar19 = uStack_c8;
  uVar25 = uStack_d0;
  if ((int)puVar23 == 0) {
    (**(code **)(lStack_130 + 0x48))();
    if (unaff_x21 != 0) {
      _swift_bridgeObjectRelease(uStack_118);
      _swift_bridgeObjectRelease(uVar27);
      _swift_unexpectedError(unaff_x21,"SwiftProtobuf/TextFormatEncodingVisitor.swift",0x2d,1,0x121)
      ;
                    /* WARNING: Does not return */
      pcVar28 = (code *)SoftwareBreakpoint(1,0x130fa4);
      (*pcVar28)();
    }
  }
  else {
    FUN_000c3f78();
    FUN_0014ca0c();
    if (unaff_x21 != 0) {
      _swift_unexpectedError
                (unaff_x21,"SwiftProtobuf/Google_Protobuf_Any+Extensions.swift",0x32,1,0x84);
                    /* WARNING: Does not return */
      pcVar28 = (code *)SoftwareBreakpoint(1,0x130f70);
      (*pcVar28)();
    }
    FUN_00023358(uVar25,uVar19);
    _swift_release(uVar20);
  }
  uVar24 = *(ulong *)(*(long *)(unaff_x20 + 8) + 0x10);
  if (1 < uVar24) {
    uVar30 = (undefined1)((ulong)uVar12 >> 8);
    uVar31 = (undefined1)((ulong)uVar12 >> 0x10);
    uVar32 = (undefined1)((ulong)uVar12 >> 0x18);
    uVar33 = (undefined1)((ulong)uVar12 >> 0x20);
    uVar34 = (undefined1)((ulong)uVar12 >> 0x28);
    uVar35 = (undefined1)((ulong)uVar12 >> 0x30);
    uVar36 = (undefined1)((ulong)uVar12 >> 0x38);
    auVar46[9] = uVar30;
    auVar46._0_9_ = Var13;
    auVar46[10] = uVar31;
    auVar46[0xb] = uVar32;
    auVar46[0xc] = uVar33;
    auVar46[0xd] = uVar34;
    auVar46[0xe] = uVar35;
    auVar46[0xf] = uVar36;
    auVar2[9] = uVar30;
    auVar2._0_9_ = Var14;
    auVar2[10] = uVar31;
    auVar2[0xb] = uVar32;
    auVar2[0xc] = uVar33;
    auVar2[0xd] = uVar34;
    auVar2[0xe] = uVar35;
    auVar2[0xf] = uVar36;
    auVar46 = NEON_ext(auVar46,auVar2,8,1);
    uStack_138 = auVar46._8_8_;
    uStack_140 = auVar46._0_8_;
    uVar30 = (undefined1)((ulong)uVar9 >> 8);
    uVar31 = (undefined1)((ulong)uVar9 >> 0x10);
    uVar32 = (undefined1)((ulong)uVar9 >> 0x18);
    uVar33 = (undefined1)((ulong)uVar9 >> 0x20);
    uVar34 = (undefined1)((ulong)uVar9 >> 0x28);
    uVar35 = (undefined1)((ulong)uVar9 >> 0x30);
    uVar36 = (undefined1)((ulong)uVar9 >> 0x38);
    auVar3[9] = uVar30;
    auVar3._0_9_ = Var15;
    auVar3[10] = uVar31;
    auVar3[0xb] = uVar32;
    auVar3[0xc] = uVar33;
    auVar3[0xd] = uVar34;
    auVar3[0xe] = uVar35;
    auVar3[0xf] = uVar36;
    auVar4[9] = uVar30;
    auVar4._0_9_ = Var16;
    auVar4[10] = uVar31;
    auVar4[0xb] = uVar32;
    auVar4[0xc] = uVar33;
    auVar4[0xd] = uVar34;
    auVar4[0xe] = uVar35;
    auVar4[0xf] = uVar36;
    auVar46 = NEON_ext(auVar3,auVar4,8,1);
    uStack_128 = auVar46._8_8_;
    lStack_130 = auVar46._0_8_;
    uVar30 = (undefined1)((ulong)uVar10 >> 8);
    uVar31 = (undefined1)((ulong)uVar10 >> 0x10);
    uVar32 = (undefined1)((ulong)uVar10 >> 0x18);
    uVar33 = (undefined1)((ulong)uVar10 >> 0x20);
    uVar34 = (undefined1)((ulong)uVar10 >> 0x28);
    uVar35 = (undefined1)((ulong)uVar10 >> 0x30);
    uVar36 = (undefined1)((ulong)uVar10 >> 0x38);
    auVar5[9] = uVar30;
    auVar5._0_9_ = Var17;
    auVar5[10] = uVar31;
    auVar5[0xb] = uVar32;
    auVar5[0xc] = uVar33;
    auVar5[0xd] = uVar34;
    auVar5[0xe] = uVar35;
    auVar5[0xf] = uVar36;
    auVar6[9] = uVar30;
    auVar6._0_9_ = Var18;
    auVar6[10] = uVar31;
    auVar6[0xb] = uVar32;
    auVar6[0xc] = uVar33;
    auVar6[0xd] = uVar34;
    auVar6[0xe] = uVar35;
    auVar6[0xf] = uVar36;
    auVar46 = NEON_ext(auVar5,auVar6,8,1);
    FUN_0013566c(uVar24 - 2);
    _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 8));
    FUN_00053fc4();
    FUN_000c7840(&UNK_009105ae,2);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
    *(undefined8 *)(unaff_x20 + 0x48) = uVar27;
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
    *(undefined8 *)(unaff_x20 + 0x40) = uStack_118;
    FUN_000fd388(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                 *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                 *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
    *(long *)(unaff_x20 + 0x28) = lStack_130;
    *(undefined8 *)(unaff_x20 + 0x20) = uVar7;
    *(undefined8 *)(unaff_x20 + 0x38) = uStack_140;
    *(undefined8 *)(unaff_x20 + 0x30) = uVar11;
    *(long *)(unaff_x20 + 0x18) = auVar46._0_8_;
    *(undefined8 *)(unaff_x20 + 0x10) = uVar8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar28 = (code *)SoftwareBreakpoint(1,0x130f50);
  (*pcVar28)();
}



/* Entry: 00130fa4; end: 00131157;  */

void FUN_00130fa4(long param_1,undefined8 param_2)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  float *pfVar5;
  ulong *unaff_x20;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  
  uVar8 = unaff_x20[1];
  func_0x0012f2f8(param_2);
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    pfVar5 = (float *)(param_1 + 0x20);
    do {
      fVar9 = *pfVar5;
      _swift_bridgeObjectRetain(uVar8);
      FUN_00053fc4();
      _swift_bridgeObjectRetain(param_2);
      FUN_00053fc4();
      FUN_000c7840(": ",2);
      if ((((uint)fVar9 ^ 0xffffffff) & 0x7f800000) == 0) {
        if (((uint)fVar9 & 0x7fffff) == 0) {
          if (0.0 <= fVar9) {
            pcVar1 = "inf";
            goto LAB_001310a0;
          }
          pcVar1 = "-inf";
          uVar4 = 4;
        }
        else {
          pcVar1 = "nan";
LAB_001310a0:
          uVar4 = 3;
        }
        FUN_000c7840(pcVar1,uVar4);
      }
      else {
        __sSf16debugDescriptionSSvg(fVar9);
        func_0x000c79f0();
      }
      uVar6 = *unaff_x20;
      uVar2 = uVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar3 = uVar6;
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
        FUN_000540b4(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
      }
      uVar2 = *(ulong *)(uVar3 + 0x10);
      uVar6 = uVar3;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_000540b4(uVar6,uVar2 + 1,1,uVar3);
      }
      *(ulong *)(uVar6 + 0x10) = uVar2 + 1;
      *(undefined1 *)(uVar6 + uVar2 + 0x20) = 10;
      *unaff_x20 = uVar6;
      lVar7 = lVar7 + -1;
      pfVar5 = pfVar5 + 1;
    } while (lVar7 != 0);
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Entry: 00131158; end: 0013130b;  */

void FUN_00131158(long param_1,undefined8 param_2)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  double *pdVar5;
  ulong *unaff_x20;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  double dVar9;
  
  uVar8 = unaff_x20[1];
  func_0x0012f2f8(param_2);
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    pdVar5 = (double *)(param_1 + 0x20);
    do {
      dVar9 = *pdVar5;
      _swift_bridgeObjectRetain(uVar8);
      FUN_00053fc4();
      _swift_bridgeObjectRetain(param_2);
      FUN_00053fc4();
      FUN_000c7840(": ",2);
      if ((((ulong)dVar9 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
        if (((ulong)dVar9 & 0xfffffffffffff) == 0) {
          if (0.0 <= dVar9) {
            pcVar1 = "inf";
            goto LAB_00131254;
          }
          pcVar1 = "-inf";
          uVar4 = 4;
        }
        else {
          pcVar1 = "nan";
LAB_00131254:
          uVar4 = 3;
        }
        FUN_000c7840(pcVar1,uVar4);
      }
      else {
        __sSd16debugDescriptionSSvg(dVar9);
        func_0x000c79f0();
      }
      uVar6 = *unaff_x20;
      uVar2 = uVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar3 = uVar6;
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
        FUN_000540b4(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
      }
      uVar2 = *(ulong *)(uVar3 + 0x10);
      uVar6 = uVar3;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_000540b4(uVar6,uVar2 + 1,1,uVar3);
      }
      *(ulong *)(uVar6 + 0x10) = uVar2 + 1;
      *(undefined1 *)(uVar6 + uVar2 + 0x20) = 10;
      *unaff_x20 = uVar6;
      lVar7 = lVar7 + -1;
      pdVar5 = pdVar5 + 1;
    } while (lVar7 != 0);
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Entry: 0013130c; end: 001314df;  */

void FUN_0013130c(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  
  func_0x0012f2f8(param_2);
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    piVar7 = (int *)(param_1 + 0x20);
    do {
      iVar1 = *piVar7;
      lVar5 = (long)iVar1;
      _swift_bridgeObjectRetain(unaff_x20[1]);
      FUN_00053fc4();
      _swift_bridgeObjectRetain(param_2);
      FUN_00053fc4();
      FUN_000c7840(": ",2);
      if (iVar1 < 0) {
        uVar4 = *unaff_x20;
        uVar2 = uVar4;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar3 = uVar4;
        if ((uVar2 & 1) == 0) {
          uVar3 = 0;
          FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
        }
        uVar2 = *(ulong *)(uVar3 + 0x10);
        uVar4 = uVar3;
        if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
          uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
          FUN_000540b4(uVar4,uVar2 + 1,1,uVar3);
        }
        *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
        *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x2d;
        *unaff_x20 = uVar4;
        lVar5 = -lVar5;
      }
      func_0x0012d6f0(lVar5);
      uVar4 = *unaff_x20;
      uVar2 = uVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar3 = uVar4;
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
        FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
      }
      uVar2 = *(ulong *)(uVar3 + 0x10);
      uVar4 = uVar3;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_000540b4(uVar4,uVar2 + 1,1,uVar3);
      }
      *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
      *(undefined1 *)(uVar4 + uVar2 + 0x20) = 10;
      *unaff_x20 = uVar4;
      lVar6 = lVar6 + -1;
      piVar7 = piVar7 + 1;
    } while (lVar6 != 0);
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Entry: 001314e0; end: 001316b3;  */

void FUN_001314e0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  func_0x0012f2f8(param_2);
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    plVar6 = (long *)(param_1 + 0x20);
    do {
      lVar4 = *plVar6;
      _swift_bridgeObjectRetain(unaff_x20[1]);
      FUN_00053fc4();
      _swift_bridgeObjectRetain(param_2);
      FUN_00053fc4();
      FUN_000c7840(": ",2);
      if (lVar4 < 0) {
        uVar3 = *unaff_x20;
        uVar1 = uVar3;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar2 = uVar3;
        if ((uVar1 & 1) == 0) {
          uVar2 = 0;
          FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
        }
        uVar1 = *(ulong *)(uVar2 + 0x10);
        uVar3 = uVar2;
        if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
          uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
          FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
        }
        *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
        *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x2d;
        *unaff_x20 = uVar3;
        lVar4 = -lVar4;
      }
      func_0x0012d6f0(lVar4);
      uVar3 = *unaff_x20;
      uVar1 = uVar3;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar2 = uVar3;
      if ((uVar1 & 1) == 0) {
        uVar2 = 0;
        FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
      }
      uVar1 = *(ulong *)(uVar2 + 0x10);
      uVar3 = uVar2;
      if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
        uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
        FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
      }
      *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
      *(undefined1 *)(uVar3 + uVar1 + 0x20) = 10;
      *unaff_x20 = uVar3;
      lVar5 = lVar5 + -1;
      plVar6 = plVar6 + 1;
    } while (lVar5 != 0);
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Entry: 001316b4; end: 00131803;  */

void FUN_001316b4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  
  func_0x0012f2f8(param_2);
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    puVar6 = (undefined4 *)(param_1 + 0x20);
    do {
      uVar1 = *puVar6;
      _swift_bridgeObjectRetain(unaff_x20[1]);
      FUN_00053fc4();
      _swift_bridgeObjectRetain(param_2);
      FUN_00053fc4();
      FUN_000c7840(": ",2);
      func_0x0012d6f0(uVar1);
      uVar4 = *unaff_x20;
      uVar2 = uVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar3 = uVar4;
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
        FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
      }
      uVar2 = *(ulong *)(uVar3 + 0x10);
      uVar4 = uVar3;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_000540b4(uVar4,uVar2 + 1,1,uVar3);
      }
      *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
      *(undefined1 *)(uVar4 + uVar2 + 0x20) = 10;
      *unaff_x20 = uVar4;
      lVar5 = lVar5 + -1;
      puVar6 = puVar6 + 1;
    } while (lVar5 != 0);
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Entry: 00131804; end: 00131953;  */

void FUN_00131804(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  func_0x0012f2f8(param_2);
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)(param_1 + 0x20);
    do {
      uVar4 = *puVar6;
      _swift_bridgeObjectRetain(unaff_x20[1]);
      FUN_00053fc4();
      _swift_bridgeObjectRetain(param_2);
      FUN_00053fc4();
      FUN_000c7840(": ",2);
      func_0x0012d6f0(uVar4);
      uVar3 = *unaff_x20;
      uVar1 = uVar3;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar2 = uVar3;
      if ((uVar1 & 1) == 0) {
        uVar2 = 0;
        FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
      }
      uVar1 = *(ulong *)(uVar2 + 0x10);
      uVar3 = uVar2;
      if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
        uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
        FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
      }
      *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
      *(undefined1 *)(uVar3 + uVar1 + 0x20) = 10;
      *unaff_x20 = uVar3;
      lVar5 = lVar5 + -1;
      puVar6 = puVar6 + 1;
    } while (lVar5 != 0);
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Entry: 00131954; end: 00131ac3;  */

void FUN_00131954(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  
  uVar9 = unaff_x20[1];
  func_0x0012f2f8(param_2);
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    pcVar8 = (char *)(param_1 + 0x20);
    do {
      cVar3 = *pcVar8;
      _swift_bridgeObjectRetain(uVar9);
      FUN_00053fc4();
      _swift_bridgeObjectRetain(param_2);
      FUN_00053fc4();
      FUN_000c7840(": ",2);
      pcVar2 = "true";
      if (cVar3 == '\0') {
        pcVar2 = "false";
      }
      uVar1 = 4;
      if (cVar3 == '\0') {
        uVar1 = 5;
      }
      FUN_000c7840(pcVar2,uVar1);
      uVar6 = *unaff_x20;
      uVar4 = uVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar5 = uVar6;
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
        FUN_000540b4(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
      }
      uVar4 = *(ulong *)(uVar5 + 0x10);
      uVar6 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_000540b4(uVar6,uVar4 + 1,1,uVar5);
      }
      *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
      *(undefined1 *)(uVar6 + uVar4 + 0x20) = 10;
      *unaff_x20 = uVar6;
      pcVar8 = pcVar8 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Entry: 00131ac4; end: 00131c2b;  */

void FUN_00131ac4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong *unaff_x20;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  uVar8 = unaff_x20[1];
  func_0x0012f2f8(param_2);
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar5[-1];
      uVar2 = *puVar5;
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar8);
      FUN_00053fc4();
      _swift_bridgeObjectRetain(param_2);
      FUN_00053fc4();
      FUN_000c7840(": ",2);
      FUN_0012dbd0(uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      uVar6 = *unaff_x20;
      uVar3 = uVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar4 = uVar6;
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
        FUN_000540b4(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
      }
      uVar3 = *(ulong *)(uVar4 + 0x10);
      uVar6 = uVar4;
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_000540b4(uVar6,uVar3 + 1,1,uVar4);
      }
      puVar5 = puVar5 + 2;
      *(ulong *)(uVar6 + 0x10) = uVar3 + 1;
      *(undefined1 *)(uVar6 + uVar3 + 0x20) = 10;
      *unaff_x20 = uVar6;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Entry: 00131c2c; end: 0013202b;  */

void FUN_00131c2c(ulong param_1,ulong param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  uint uVar9;
  long extraout_x8;
  ulong uVar10;
  long extraout_x12;
  long lVar11;
  ulong *unaff_x20;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  ulong *unaff_x24;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong uVar16;
  undefined1 auStack_1d0 [8];
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong *puStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined1 uStack_160;
  ulong uStack_150;
  long lStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong *puStack_128;
  undefined1 auStack_d0 [16];
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_78 = unaff_x20[9];
  uStack_80 = unaff_x20[8];
  uStack_70 = (undefined1)unaff_x20[10];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  puVar5 = &uStack_c0;
  uVar7 = param_2;
  func_0x0012f2f8();
  uVar6 = uStack_b8;
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 != 0) {
    unaff_x24 = (ulong *)(param_1 + 0x28);
    do {
      unaff_x26 = unaff_x24[-1];
      unaff_x27 = *unaff_x24;
      func_0x00023304(unaff_x26,unaff_x27);
      _swift_bridgeObjectRetain(uVar6);
      FUN_00053fc4();
      _swift_bridgeObjectRetain(param_2);
      FUN_00053fc4();
      FUN_000c7840(": ",2);
      puVar12 = (ulong *)*unaff_x20;
      puVar5 = puVar12;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar5 & 1) == 0) {
        puVar5 = (ulong *)0x0;
        FUN_000540b4(0,puVar12[2] + 1,1);
        param_4 = puVar12;
        puVar12 = puVar5;
      }
      uVar7 = puVar12[2];
      if (puVar12[3] >> 1 <= uVar7) {
        puVar5 = (ulong *)(ulong)(1 < puVar12[3]);
        FUN_000540b4(puVar5,uVar7 + 1,1);
        param_4 = puVar12;
        puVar12 = puVar5;
      }
      puVar12[2] = uVar7 + 1;
      *(undefined1 *)((long)puVar12 + uVar7 + 0x20) = 0x22;
      *unaff_x20 = (ulong)puVar12;
      uVar2 = (uint)(unaff_x27 >> 0x20);
      uVar9 = uVar2 >> 0x1e;
      if (uVar2 >> 0x1e < 2) {
        if (uVar9 == 0) {
          auStack_d0[0] = (undefined1)unaff_x26;
          auStack_d0[1] = (undefined1)(unaff_x26 >> 8);
          auStack_d0[2] = (undefined1)(unaff_x26 >> 0x10);
          auStack_d0[3] = (undefined1)(unaff_x26 >> 0x18);
          auStack_d0[4] = (undefined1)(unaff_x26 >> 0x20);
          auStack_d0[5] = (undefined1)(unaff_x26 >> 0x28);
          auStack_d0[6] = (undefined1)(unaff_x26 >> 0x30);
          auStack_d0[7] = (undefined1)(unaff_x26 >> 0x38);
          auStack_d0[8] = (undefined1)unaff_x27;
          auStack_d0[9] = (undefined1)(unaff_x27 >> 8);
          auStack_d0[10] = (undefined1)(unaff_x27 >> 0x10);
          auStack_d0[0xb] = (undefined1)(unaff_x27 >> 0x18);
          auStack_d0[0xc] = (undefined1)(unaff_x27 >> 0x20);
          auStack_d0[0xd] = (undefined1)(unaff_x27 >> 0x28);
          puVar8 = auStack_d0 + (unaff_x27 >> 0x30 & 0xff);
          puVar4 = auStack_d0;
        }
        else {
          lVar15 = (long)(int)unaff_x26;
          puVar12 = (ulong *)(((long)unaff_x26 >> 0x20) - lVar15);
          if ((long)unaff_x26 >> 0x20 < lVar15) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x13201c);
            (*pcVar3)();
          }
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          if (puVar5 == (ulong *)0x0) {
            __s10Foundation13__DataStorageC7_lengthSivg();
            puVar4 = (undefined1 *)0x0;
          }
          else {
            puVar13 = puVar5;
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8(lVar15,(long)puVar13)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x132028);
              (*pcVar3)();
            }
            puVar4 = (undefined1 *)((lVar15 - (long)puVar13) + (long)puVar5);
            __s10Foundation13__DataStorageC7_lengthSivg();
            if (puVar4 != (undefined1 *)0x0) {
              if ((long)puVar12 <= (long)puVar13) {
                puVar13 = puVar12;
              }
              puVar8 = (undefined1 *)((long)puVar13 + (long)puVar4);
              goto LAB_00131eb0;
            }
          }
          puVar8 = (undefined1 *)0x0;
        }
      }
      else if (uVar9 == 2) {
        lVar15 = *(long *)(unaff_x26 + 0x10);
        lVar1 = *(long *)(unaff_x26 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        puVar12 = puVar5;
        if (puVar5 == (ulong *)0x0) {
          puVar4 = (undefined1 *)0x0;
        }
        else {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar15,(long)puVar12)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x132024);
            (*pcVar3)();
          }
          puVar4 = (undefined1 *)((lVar15 - (long)puVar12) + (long)puVar5);
        }
        if (SBORROW8(lVar1,lVar15)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x132020);
          (*pcVar3)();
        }
        puVar5 = (ulong *)(lVar1 - lVar15);
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (puVar4 == (undefined1 *)0x0) {
          puVar8 = (undefined1 *)0x0;
        }
        else {
          if ((long)puVar5 <= (long)puVar12) {
            puVar12 = puVar5;
          }
          puVar8 = (undefined1 *)((long)puVar12 + (long)puVar4);
        }
      }
      else {
        auStack_d0[8] = 0;
        auStack_d0[9] = 0;
        auStack_d0[10] = 0;
        auStack_d0[0xb] = 0;
        auStack_d0[0xc] = 0;
        auStack_d0[0xd] = 0;
        auStack_d0[0] = 0;
        auStack_d0[1] = 0;
        auStack_d0[2] = 0;
        auStack_d0[3] = 0;
        auStack_d0[4] = 0;
        auStack_d0[5] = 0;
        auStack_d0[6] = 0;
        auStack_d0[7] = 0;
        puVar4 = auStack_d0;
        puVar8 = auStack_d0;
      }
LAB_00131eb0:
      param_3 = unaff_x20;
      FUN_0012e6ac(puVar4,puVar8);
      puVar13 = (ulong *)*unaff_x20;
      puVar5 = puVar13;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar12 = puVar13;
      if (((ulong)puVar5 & 1) == 0) {
        puVar12 = (ulong *)0x0;
        param_3 = (ulong *)((long)&MACH_HEADER.magic + 1);
        FUN_000540b4(0,puVar13[2] + 1);
        param_4 = puVar13;
      }
      uVar7 = puVar12[2];
      uVar16 = puVar12[3];
      uVar10 = uVar16 >> 1;
      puVar13 = puVar12;
      if (uVar10 <= uVar7) {
        puVar13 = (ulong *)(ulong)(1 < uVar16);
        param_3 = (ulong *)((long)&MACH_HEADER.magic + 1);
        FUN_000540b4(puVar13,uVar7 + 1);
        uVar16 = puVar13[3];
        uVar10 = uVar16 >> 1;
        param_4 = puVar12;
      }
      puVar13[2] = uVar7 + 1;
      *(undefined1 *)((long)puVar13 + uVar7 + 0x20) = 0x22;
      param_1 = uVar7 + 2;
      puVar5 = puVar13;
      if ((long)uVar10 < (long)param_1) {
        puVar5 = (ulong *)(ulong)(1 < uVar16);
        param_3 = (ulong *)((long)&MACH_HEADER.magic + 1);
        FUN_000540b4(puVar5,param_1);
        param_4 = puVar13;
      }
      unaff_x24 = unaff_x24 + 2;
      puVar5[2] = param_1;
      *(undefined1 *)((long)puVar5 + uVar7 + 0x21) = 10;
      uVar7 = unaff_x27;
      FUN_00023358(unaff_x26,unaff_x27);
      *unaff_x20 = (ulong)puVar5;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  uVar6 = param_2;
  _swift_bridgeObjectRelease();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar16 = param_3[-1];
  puStack_1b8 = param_4;
  uStack_150 = param_2;
  uStack_140 = unaff_x27;
  uStack_138 = unaff_x26;
  uStack_130 = param_1;
  puStack_128 = unaff_x24;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(uVar16 + 0x40));
  puVar8 = auStack_1d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lStack_148 = (long)puVar8 - extraout_x12;
  uStack_188 = puVar5[5];
  uStack_190 = puVar5[4];
  uStack_178 = puVar5[7];
  uStack_180 = puVar5[6];
  uStack_168 = puVar5[9];
  uStack_170 = puVar5[8];
  uStack_160 = (undefined1)puVar5[10];
  uStack_1a8 = puVar5[1];
  uStack_1b0 = *puVar5;
  uStack_198 = puVar5[3];
  uStack_1a0 = puVar5[2];
  func_0x0012f2f8(uVar7);
  uVar10 = uVar6;
  __sSa8endIndexSivg(uVar6,param_3);
  if (uVar10 == 0) {
    _swift_bridgeObjectRelease(uVar7);
  }
  else {
    lVar11 = 0;
    uStack_1c8 = uVar16;
    uStack_1c0 = uVar6;
    do {
      lVar15 = lStack_148;
      __sSayxSicig(lStack_148,lVar11,uVar6,param_3);
      uVar10 = lVar11 + 1;
      if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x132250);
        (*pcVar3)();
      }
      (**(code **)(uVar16 + 0x20))(puVar8,lVar15,param_3);
      _swift_bridgeObjectRetain(puVar5[1]);
      FUN_00053fc4();
      _swift_bridgeObjectRetain(uVar7);
      FUN_00053fc4();
      FUN_000c7840(": ",2);
      FUN_0012d920(puVar8,param_3,puStack_1b8);
      uVar14 = *puVar5;
      uVar6 = uVar14;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar16 = uVar14;
      if ((uVar6 & 1) == 0) {
        uVar16 = 0;
        FUN_000540b4(0,*(long *)(uVar14 + 0x10) + 1,1,uVar14);
      }
      uVar6 = *(ulong *)(uVar16 + 0x10);
      uVar14 = uVar16;
      if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar6) {
        uVar14 = (ulong)(1 < *(ulong *)(uVar16 + 0x18));
        FUN_000540b4(uVar14,uVar6 + 1,1,uVar16);
      }
      uVar16 = uStack_1c8;
      *(ulong *)(uVar14 + 0x10) = uVar6 + 1;
      *(undefined1 *)(uVar14 + uVar6 + 0x20) = 10;
      (**(code **)(uStack_1c8 + 8))(puVar8,param_3);
      uVar6 = uStack_1c0;
      *puVar5 = uVar14;
      uVar14 = uStack_1c0;
      __sSa8endIndexSivg(uStack_1c0,param_3);
      lVar11 = lVar11 + 1;
    } while (uVar10 != uVar14);
    _swift_bridgeObjectRelease(uVar7);
  }
  return;
}



/* Entry: 0013202c; end: 0013224f;  */

void FUN_0013202c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x12;
  long lVar6;
  ulong *unaff_x20;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar9 + 0x40));
  puVar8 = &stack0xffffffffffffff20 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  func_0x0012f2f8(param_2);
  lVar6 = param_1;
  __sSa8endIndexSivg(param_1,param_3);
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_2);
  }
  else {
    lVar6 = 0;
    do {
      __sSayxSicig((long)puVar8 - extraout_x12,lVar6,param_1,param_3);
      lVar1 = lVar6 + 1;
      if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x132250);
        (*pcVar2)();
      }
      (**(code **)(lVar9 + 0x20))(puVar8,(long)puVar8 - extraout_x12,param_3);
      _swift_bridgeObjectRetain(unaff_x20[1]);
      FUN_00053fc4();
      _swift_bridgeObjectRetain(param_2);
      FUN_00053fc4();
      FUN_000c7840(": ",2);
      FUN_0012d920(puVar8,param_3,param_4);
      uVar7 = *unaff_x20;
      uVar3 = uVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar5 = uVar7;
      if ((uVar3 & 1) == 0) {
        uVar5 = 0;
        FUN_000540b4(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
      }
      uVar3 = *(ulong *)(uVar5 + 0x10);
      uVar7 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
        uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_000540b4(uVar7,uVar3 + 1,1,uVar5);
      }
      *(ulong *)(uVar7 + 0x10) = uVar3 + 1;
      *(undefined1 *)(uVar7 + uVar3 + 0x20) = 10;
      (**(code **)(lVar9 + 8))(puVar8,param_3);
      *unaff_x20 = uVar7;
      lVar4 = param_1;
      __sSa8endIndexSivg(param_1,param_3);
      lVar6 = lVar6 + 1;
    } while (lVar1 != lVar4);
    _swift_bridgeObjectRelease(param_2);
  }
  return;
}



/* Entry: 00132250; end: 0013280b;  */

void FUN_00132250(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  long extraout_x12;
  long extraout_x13;
  long extraout_x13_00;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_1c0 [8];
  undefined8 *puStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined1 *puStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [64];
  
  lVar10 = *(long *)(param_3 + -8);
  lStack_1a8 = param_4;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar10 + 0x40));
  puStack_198 = auStack_1c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = (long)(auStack_1c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x13;
  lStack_1a0 = lVar6;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lStack_190 = lVar6 - extraout_x13_00;
  uVar12 = unaff_x20[7];
  uVar11 = unaff_x20[6];
  uVar3 = unaff_x20[9];
  uVar8 = unaff_x20[8];
  *(undefined8 *)(extraout_x12 + 0x38) = uVar12;
  *(undefined8 *)(extraout_x12 + 0x30) = uVar11;
  *(undefined8 *)(extraout_x12 + 0x48) = uVar3;
  *(undefined8 *)(extraout_x12 + 0x40) = uVar8;
  uStack_f8 = unaff_x20[3];
  uStack_100 = unaff_x20[2];
  uVar3 = unaff_x20[5];
  uVar8 = unaff_x20[4];
  *(undefined8 *)(extraout_x12 + 0x28) = uVar3;
  *(undefined8 *)(extraout_x12 + 0x20) = uVar8;
  uStack_c0 = *(undefined1 *)(unaff_x20 + 10);
  uStack_108 = unaff_x20[1];
  uStack_110 = *unaff_x20;
  *(undefined8 *)(extraout_x12 + 0x78) = uStack_f8;
  *(undefined8 *)(extraout_x12 + 0x70) = uStack_100;
  *(undefined8 *)(extraout_x12 + 0x88) = uVar3;
  *(undefined8 *)(extraout_x12 + 0x80) = uVar8;
  *(undefined8 *)(extraout_x12 + 0x98) = uVar12;
  *(undefined8 *)(extraout_x12 + 0x90) = uVar11;
  uStack_b0 = uStack_c8;
  uStack_a8 = uStack_d0;
  func_0x0012f2f8();
  lVar6 = param_3;
  uStack_188 = param_2;
  _swift_conformsToProtocol(param_3,&DAT_00844958);
  if ((param_3 == 0) || (lVar6 == 0)) {
    FUN_001359f8(&uStack_a8,&uStack_140,0xaf0508,&UNK_007da838);
    FUN_001359f8(&uStack_b0,&uStack_140,0xaf0510,&UNK_007da840);
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
  }
  else {
    pcVar9 = *(code **)(lVar6 + 8);
    FUN_001359f8(&uStack_a8,&uStack_140,0xaf0508,&UNK_007da838);
    FUN_001359f8(&uStack_b0,&uStack_140,0xaf0510,&UNK_007da840);
    (*pcVar9)(&uStack_140,param_3,lVar6);
  }
  unaff_x20[3] = uStack_138;
  unaff_x20[2] = uStack_140;
  unaff_x20[5] = uStack_128;
  unaff_x20[4] = uStack_130;
  unaff_x20[7] = uStack_118;
  unaff_x20[6] = uStack_120;
  puVar2 = PTR___swiftEmptyArrayStorage_0099b8f0;
  FUN_0019bc8c();
  func_0x0013596c(&uStack_a8,0xaf0508,&UNK_007da838);
  unaff_x20[8] = puVar2;
  uVar3 = 0;
  lStack_178 = param_1;
  __sSaMa(0,param_3);
  _swift_bridgeObjectRetain(param_1);
  uVar8 = 0xaef4a0;
  func_0x000115a8(0xaef4a0,&UNK_007d9aa8);
  puVar4 = &uStack_170;
  _swift_dynamicCast(puVar4,&lStack_178,uVar3,uVar8,0xe);
  lVar6 = lStack_150;
  uVar8 = uStack_158;
  if ((int)puVar4 == 0) {
    lStack_150 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    func_0x0013596c(&uStack_170,0xaef4a8,&UNK_007d9ab0);
    func_0x0013596c(&uStack_b0,0xaf0510,&UNK_007da840);
    uVar8 = 0;
  }
  else {
    FUN_0001393c(&uStack_170,uStack_158);
    (**(code **)(lVar6 + 0x10))(uVar8,lVar6);
    FUN_00011670(&uStack_170);
    func_0x0013596c(&uStack_b0,0xaf0510,&UNK_007da840);
  }
  lVar6 = lStack_1a0;
  puStack_1b8 = unaff_x20 + 9;
  *puStack_1b8 = uVar8;
  lVar7 = param_1;
  __sSa8endIndexSivg(param_1,param_3);
  if (lVar7 != 0) {
    lVar7 = 0;
    uVar8 = uStack_108;
    lStack_1b0 = lVar10;
    do {
      lVar5 = lStack_190;
      __sSayxSicig(lStack_190,lVar7,param_1,param_3);
      if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x132790);
        (*pcVar9)();
      }
      lStack_180 = lVar7 + 1;
      (**(code **)(lVar10 + 0x20))(lVar6,lVar5,param_3);
      _swift_bridgeObjectRetain(uVar8);
      FUN_00053fc4();
      _swift_bridgeObjectRetain(uStack_188);
      FUN_00053fc4();
      FUN_000c7840(" {\n",3);
      if (lRam0000000000af04e8 != -1) {
        _swift_once(0xaf04e8,FUN_0012d578);
      }
      _swift_bridgeObjectRetain(uRam0000000000af04e0);
      FUN_00053fc4();
      puVar1 = puStack_198;
      (**(code **)(lVar10 + 0x10))(puStack_198,lVar6,param_3);
      puVar4 = &uStack_170;
      _swift_dynamicCast(puVar4,puVar1,param_3,&UNK_009af680,6);
      uVar11 = uStack_160;
      uVar3 = uStack_168;
      uVar8 = uStack_170;
      if ((int)puVar4 == 0) {
        (**(code **)(lStack_1a8 + 0x48))(unaff_x20,&UNK_009af138,&PTR_DAT_009af160,param_3);
        if (unaff_x21 != 0) {
          func_0x0013596c(&uStack_b0,0xaf0510,&UNK_007da840);
          func_0x0013596c(&uStack_a8,0xaf0508,&UNK_007da838);
          _swift_bridgeObjectRelease(uStack_188);
          _swift_unexpectedError
                    (unaff_x21,"SwiftProtobuf/TextFormatEncodingVisitor.swift",0x2d,1,0x1ed);
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x13280c);
          (*pcVar9)();
        }
      }
      else {
        FUN_000c3f78(unaff_x20);
        FUN_0014ca0c(unaff_x20,uVar8,uVar3);
        if (unaff_x21 != 0) {
          _swift_unexpectedError
                    (unaff_x21,"SwiftProtobuf/Google_Protobuf_Any+Extensions.swift",0x32,1,0x84);
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1327b4);
          (*pcVar9)();
        }
        FUN_00023358(uVar8,uVar3);
        _swift_release(uVar11);
        lVar6 = lStack_1a0;
        lVar10 = lStack_1b0;
      }
      if (*(ulong *)(unaff_x20[1] + 0x10) < 2) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x132794);
        (*pcVar9)();
      }
      FUN_0013566c(*(ulong *)(unaff_x20[1] + 0x10) - 2);
      uVar8 = unaff_x20[1];
      _swift_bridgeObjectRetain(uVar8);
      FUN_00053fc4();
      FUN_000c7840(&UNK_009105ae,2);
      (**(code **)(lVar10 + 8))(lVar6,param_3);
      lVar5 = param_1;
      __sSa8endIndexSivg(param_1,param_3);
      lVar7 = lVar7 + 1;
    } while (lStack_180 != lVar5);
  }
  _swift_bridgeObjectRelease(uStack_188);
  func_0x001358a0(&uStack_b0,puStack_1b8,0xaf0510,&UNK_007da840);
  _swift_bridgeObjectRelease(unaff_x20[8]);
  unaff_x20[8] = uStack_a8;
  func_0x001358a0(auStack_a0,unaff_x20 + 2,0xaf0518,&UNK_007da848);
  return;
}



/* Entry: 0013280c; end: 00132aeb;  */

void FUN_0013280c(long param_1,undefined8 param_2,code *param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x12;
  ulong uVar5;
  ulong *unaff_x20;
  long lVar6;
  code *pcVar7;
  code *pcVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  
  lVar6 = *(long *)(param_5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar6 + 0x40));
  puVar9 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = (long)puVar9 - extraout_x12;
  FUN_0012f564(param_2);
  FUN_000c7840(": ",2);
  uVar5 = *unaff_x20;
  uVar4 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = uVar5;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  uVar5 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_000540b4(uVar5,uVar4 + 1,1,uVar3);
  }
  *(ulong *)(uVar5 + 0x10) = uVar4 + 1;
  *(undefined1 *)(uVar5 + uVar4 + 0x20) = 0x5b;
  *unaff_x20 = uVar5;
  lVar1 = param_1;
  __sSa8endIndexSivg(param_1,param_5);
  if (lVar1 != 0) {
    __sSayxSicig(lVar10,0,param_1,param_5);
    pcVar8 = *(code **)(lVar6 + 0x20);
    (*pcVar8)(puVar9,lVar10,param_5);
    (*param_3)(puVar9,unaff_x20);
    pcVar7 = *(code **)(lVar6 + 8);
    (*pcVar7)(puVar9,param_5);
    lVar6 = param_1;
    __sSa8endIndexSivg(param_1,param_5);
    if (lVar6 != 1) {
      lVar6 = 1;
      do {
        __sSayxSicig(lVar10,lVar6,param_1,param_5);
        lVar1 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x132a4c);
          (*pcVar7)();
        }
        (*pcVar8)(puVar9,lVar10,param_5);
        FUN_000c7840(", ",2);
        (*param_3)(puVar9,unaff_x20);
        (*pcVar7)(puVar9,param_5);
        lVar2 = param_1;
        __sSa8endIndexSivg(param_1,param_5);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar2);
    }
  }
  uVar5 = *unaff_x20;
  uVar4 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = uVar5;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  lVar6 = uVar4 + 1;
  uVar5 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_000540b4(uVar5,lVar6,1,uVar3);
  }
  *(long *)(uVar5 + 0x10) = lVar6;
  *(undefined1 *)(uVar5 + uVar4 + 0x20) = 0x5d;
  *unaff_x20 = uVar5;
  lVar10 = uVar4 + 2;
  uVar4 = uVar5;
  if ((long)(*(ulong *)(uVar5 + 0x18) >> 1) < lVar10) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_000540b4(uVar4,lVar10,1,uVar5);
  }
  *(long *)(uVar4 + 0x10) = lVar10;
  *(undefined1 *)(uVar4 + lVar6 + 0x20) = 10;
  *unaff_x20 = uVar4;
  return;
}



/* Entry: 00132aec; end: 00132d7b;  */

void FUN_00132aec(long param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  float fVar9;
  
  FUN_0012f564(param_2);
  FUN_000c7840(": ",2);
  uVar6 = *unaff_x20;
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    FUN_000540b4(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  uVar6 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_000540b4(uVar6,uVar4 + 1,1,uVar3);
  }
  *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
  *(undefined1 *)(uVar6 + uVar4 + 0x20) = 0x5b;
  *unaff_x20 = uVar6;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) goto LAB_00132bd4;
  fVar9 = *(float *)(param_1 + 0x20);
  if ((((uint)fVar9 ^ 0xffffffff) & 0x7f800000) == 0) {
    if (((uint)fVar9 & 0x7fffff) == 0) {
      if (0.0 <= fVar9) {
        pcVar2 = "inf";
        goto LAB_00132bc0;
      }
      pcVar2 = "-inf";
      uVar5 = 4;
    }
    else {
      pcVar2 = "nan";
LAB_00132bc0:
      uVar5 = 3;
    }
    FUN_000c7840(pcVar2,uVar5);
  }
  else {
    __sSf16debugDescriptionSSvg();
    func_0x000c79f0();
  }
  if (lVar7 != 1) {
    lVar7 = lVar7 + -1;
    pfVar8 = (float *)(param_1 + 0x24);
    do {
      fVar9 = *pfVar8;
      FUN_000c7840(", ",2);
      if ((((uint)fVar9 ^ 0xffffffff) & 0x7f800000) == 0) {
        pcVar2 = "nan";
        if ((((uint)fVar9 & 0x7fffff) != 0) || (pcVar2 = "inf", 0.0 <= fVar9)) {
          FUN_000c7840(pcVar2,3);
        }
        else {
          FUN_000c7840(&UNK_009107cf,4);
        }
      }
      else {
        __sSf16debugDescriptionSSvg(fVar9);
        func_0x000c79f0();
      }
      lVar7 = lVar7 + -1;
      pfVar8 = pfVar8 + 1;
    } while (lVar7 != 0);
  }
  uVar6 = *unaff_x20;
LAB_00132bd4:
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    FUN_000540b4(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  lVar7 = uVar4 + 1;
  uVar6 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_000540b4(uVar6,lVar7,1,uVar3);
  }
  *(long *)(uVar6 + 0x10) = lVar7;
  *(undefined1 *)(uVar6 + uVar4 + 0x20) = 0x5d;
  *unaff_x20 = uVar6;
  lVar1 = uVar4 + 2;
  uVar4 = uVar6;
  if ((long)(*(ulong *)(uVar6 + 0x18) >> 1) < lVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    FUN_000540b4(uVar4,lVar1,1,uVar6);
  }
  *(long *)(uVar4 + 0x10) = lVar1;
  *(undefined1 *)(uVar4 + lVar7 + 0x20) = 10;
  *unaff_x20 = uVar4;
  return;
}



/* Entry: 00132d7c; end: 0013300b;  */

void FUN_00132d7c(long param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  long lVar7;
  double *pdVar8;
  double dVar9;
  
  FUN_0012f564(param_2);
  FUN_000c7840(": ",2);
  uVar6 = *unaff_x20;
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    FUN_000540b4(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  uVar6 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_000540b4(uVar6,uVar4 + 1,1,uVar3);
  }
  *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
  *(undefined1 *)(uVar6 + uVar4 + 0x20) = 0x5b;
  *unaff_x20 = uVar6;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) goto LAB_00132e64;
  dVar9 = *(double *)(param_1 + 0x20);
  if ((((ulong)dVar9 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
    if (((ulong)dVar9 & 0xfffffffffffff) == 0) {
      if (0.0 <= dVar9) {
        pcVar2 = "inf";
        goto LAB_00132e50;
      }
      pcVar2 = "-inf";
      uVar5 = 4;
    }
    else {
      pcVar2 = "nan";
LAB_00132e50:
      uVar5 = 3;
    }
    FUN_000c7840(pcVar2,uVar5);
  }
  else {
    __sSd16debugDescriptionSSvg();
    func_0x000c79f0();
  }
  if (lVar7 != 1) {
    lVar7 = lVar7 + -1;
    pdVar8 = (double *)(param_1 + 0x28);
    do {
      dVar9 = *pdVar8;
      FUN_000c7840(", ",2);
      if ((((ulong)dVar9 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
        pcVar2 = "nan";
        if ((((ulong)dVar9 & 0xfffffffffffff) != 0) || (pcVar2 = "inf", 0.0 <= dVar9)) {
          FUN_000c7840(pcVar2,3);
        }
        else {
          FUN_000c7840(&UNK_009107cf,4);
        }
      }
      else {
        __sSd16debugDescriptionSSvg(dVar9);
        func_0x000c79f0();
      }
      lVar7 = lVar7 + -1;
      pdVar8 = pdVar8 + 1;
    } while (lVar7 != 0);
  }
  uVar6 = *unaff_x20;
LAB_00132e64:
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    FUN_000540b4(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  lVar7 = uVar4 + 1;
  uVar6 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_000540b4(uVar6,lVar7,1,uVar3);
  }
  *(long *)(uVar6 + 0x10) = lVar7;
  *(undefined1 *)(uVar6 + uVar4 + 0x20) = 0x5d;
  *unaff_x20 = uVar6;
  lVar1 = uVar4 + 2;
  uVar4 = uVar6;
  if ((long)(*(ulong *)(uVar6 + 0x18) >> 1) < lVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    FUN_000540b4(uVar4,lVar1,1,uVar6);
  }
  *(long *)(uVar4 + 0x10) = lVar1;
  *(undefined1 *)(uVar4 + lVar7 + 0x20) = 10;
  *unaff_x20 = uVar4;
  return;
}



/* Entry: 0013300c; end: 001331c7;  */

void FUN_0013300c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  
  FUN_0012f564(param_2);
  FUN_000c7840(": ",2);
  uVar5 = *unaff_x20;
  uVar4 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = uVar5;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  uVar5 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_000540b4(uVar5,uVar4 + 1,1,uVar3);
  }
  *(ulong *)(uVar5 + 0x10) = uVar4 + 1;
  *(undefined1 *)(uVar5 + uVar4 + 0x20) = 0x5b;
  *unaff_x20 = uVar5;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    func_0x0012d6f0(*(undefined4 *)(param_1 + 0x20));
    lVar6 = lVar6 + -1;
    if (lVar6 != 0) {
      puVar7 = (undefined4 *)(param_1 + 0x24);
      do {
        uVar2 = *puVar7;
        FUN_000c7840(", ",2);
        func_0x0012d6f0(uVar2);
        lVar6 = lVar6 + -1;
        puVar7 = puVar7 + 1;
      } while (lVar6 != 0);
    }
    uVar5 = *unaff_x20;
  }
  uVar4 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = uVar5;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  lVar6 = uVar4 + 1;
  uVar5 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_000540b4(uVar5,lVar6,1,uVar3);
  }
  *(long *)(uVar5 + 0x10) = lVar6;
  *(undefined1 *)(uVar5 + uVar4 + 0x20) = 0x5d;
  *unaff_x20 = uVar5;
  lVar1 = uVar4 + 2;
  uVar4 = uVar5;
  if ((long)(*(ulong *)(uVar5 + 0x18) >> 1) < lVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_000540b4(uVar4,lVar1,1,uVar5);
  }
  *(long *)(uVar4 + 0x10) = lVar1;
  *(undefined1 *)(uVar4 + lVar6 + 0x20) = 10;
  *unaff_x20 = uVar4;
  return;
}



/* Entry: 001331c8; end: 00133383;  */

void FUN_001331c8(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  FUN_0012f564(param_2);
  FUN_000c7840(": ",2);
  uVar4 = *unaff_x20;
  uVar3 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
    FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
  }
  uVar3 = *(ulong *)(uVar2 + 0x10);
  uVar4 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar3) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_000540b4(uVar4,uVar3 + 1,1,uVar2);
  }
  *(ulong *)(uVar4 + 0x10) = uVar3 + 1;
  *(undefined1 *)(uVar4 + uVar3 + 0x20) = 0x5b;
  *unaff_x20 = uVar4;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    func_0x0012d6f0(*(undefined8 *)(param_1 + 0x20));
    lVar6 = lVar6 + -1;
    if (lVar6 != 0) {
      puVar7 = (undefined8 *)(param_1 + 0x28);
      do {
        uVar5 = *puVar7;
        FUN_000c7840(", ",2);
        func_0x0012d6f0(uVar5);
        lVar6 = lVar6 + -1;
        puVar7 = puVar7 + 1;
      } while (lVar6 != 0);
    }
    uVar4 = *unaff_x20;
  }
  uVar3 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
    FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
  }
  uVar3 = *(ulong *)(uVar2 + 0x10);
  lVar6 = uVar3 + 1;
  uVar4 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar3) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_000540b4(uVar4,lVar6,1,uVar2);
  }
  *(long *)(uVar4 + 0x10) = lVar6;
  *(undefined1 *)(uVar4 + uVar3 + 0x20) = 0x5d;
  *unaff_x20 = uVar4;
  lVar1 = uVar3 + 2;
  uVar3 = uVar4;
  if ((long)(*(ulong *)(uVar4 + 0x18) >> 1) < lVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_000540b4(uVar3,lVar1,1,uVar4);
  }
  *(long *)(uVar3 + 0x10) = lVar1;
  *(undefined1 *)(uVar3 + lVar6 + 0x20) = 10;
  *unaff_x20 = uVar3;
  return;
}



/* Entry: 00133384; end: 00133653;  */

void FUN_00133384(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  
  FUN_0012f564(param_2);
  FUN_000c7840(": ",2);
  uVar4 = *unaff_x20;
  uVar3 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
    FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
  }
  uVar3 = *(ulong *)(uVar2 + 0x10);
  uVar4 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar3) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_000540b4(uVar4,uVar3 + 1,1,uVar2);
  }
  *(ulong *)(uVar4 + 0x10) = uVar3 + 1;
  *(undefined1 *)(uVar4 + uVar3 + 0x20) = 0x5b;
  *unaff_x20 = uVar4;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    lVar5 = (long)*(int *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x20) < 0) {
      uVar3 = uVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar2 = uVar4;
      if ((uVar3 & 1) == 0) {
        uVar2 = 0;
        FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
      }
      uVar3 = *(ulong *)(uVar2 + 0x10);
      uVar4 = uVar2;
      if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar3) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
        FUN_000540b4(uVar4,uVar3 + 1,1,uVar2);
      }
      *(ulong *)(uVar4 + 0x10) = uVar3 + 1;
      *(undefined1 *)(uVar4 + uVar3 + 0x20) = 0x2d;
      *unaff_x20 = uVar4;
      lVar5 = -lVar5;
    }
    func_0x0012d6f0(lVar5);
    lVar6 = lVar6 + -1;
    if (lVar6 != 0) {
      piVar7 = (int *)(param_1 + 0x24);
      do {
        iVar1 = *piVar7;
        lVar5 = (long)iVar1;
        FUN_000c7840(", ",2);
        if (iVar1 < 0) {
          uVar4 = *unaff_x20;
          uVar3 = uVar4;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar2 = uVar4;
          if ((uVar3 & 1) == 0) {
            uVar2 = 0;
            FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
          }
          uVar3 = *(ulong *)(uVar2 + 0x10);
          uVar4 = uVar2;
          if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar3) {
            uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
            FUN_000540b4(uVar4,uVar3 + 1,1,uVar2);
          }
          *(ulong *)(uVar4 + 0x10) = uVar3 + 1;
          *(undefined1 *)(uVar4 + uVar3 + 0x20) = 0x2d;
          *unaff_x20 = uVar4;
          lVar5 = -lVar5;
        }
        func_0x0012d6f0(lVar5);
        lVar6 = lVar6 + -1;
        piVar7 = piVar7 + 1;
      } while (lVar6 != 0);
    }
    uVar4 = *unaff_x20;
  }
  uVar3 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
    FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
  }
  uVar3 = *(ulong *)(uVar2 + 0x10);
  lVar6 = uVar3 + 1;
  uVar4 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar3) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_000540b4(uVar4,lVar6,1,uVar2);
  }
  *(long *)(uVar4 + 0x10) = lVar6;
  *(undefined1 *)(uVar4 + uVar3 + 0x20) = 0x5d;
  *unaff_x20 = uVar4;
  lVar5 = uVar3 + 2;
  uVar3 = uVar4;
  if ((long)(*(ulong *)(uVar4 + 0x18) >> 1) < lVar5) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_000540b4(uVar3,lVar5,1,uVar4);
  }
  *(long *)(uVar3 + 0x10) = lVar5;
  *(undefined1 *)(uVar3 + lVar6 + 0x20) = 10;
  *unaff_x20 = uVar3;
  return;
}



/* Entry: 00133654; end: 00133923;  */

void FUN_00133654(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  FUN_0012f564(param_2);
  FUN_000c7840(": ",2);
  uVar3 = *unaff_x20;
  uVar2 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar1 = uVar3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
    FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar2 = *(ulong *)(uVar1 + 0x10);
  uVar3 = uVar1;
  if (*(ulong *)(uVar1 + 0x18) >> 1 <= uVar2) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar1 + 0x18));
    FUN_000540b4(uVar3,uVar2 + 1,1,uVar1);
  }
  *(ulong *)(uVar3 + 0x10) = uVar2 + 1;
  *(undefined1 *)(uVar3 + uVar2 + 0x20) = 0x5b;
  *unaff_x20 = uVar3;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 < 0) {
      uVar2 = uVar3;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar1 = uVar3;
      if ((uVar2 & 1) == 0) {
        uVar1 = 0;
        FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
      }
      uVar2 = *(ulong *)(uVar1 + 0x10);
      uVar3 = uVar1;
      if (*(ulong *)(uVar1 + 0x18) >> 1 <= uVar2) {
        uVar3 = (ulong)(1 < *(ulong *)(uVar1 + 0x18));
        FUN_000540b4(uVar3,uVar2 + 1,1,uVar1);
      }
      *(ulong *)(uVar3 + 0x10) = uVar2 + 1;
      *(undefined1 *)(uVar3 + uVar2 + 0x20) = 0x2d;
      *unaff_x20 = uVar3;
      lVar4 = -lVar4;
    }
    func_0x0012d6f0(lVar4);
    lVar5 = lVar5 + -1;
    if (lVar5 != 0) {
      plVar6 = (long *)(param_1 + 0x28);
      do {
        lVar4 = *plVar6;
        FUN_000c7840(", ",2);
        if (lVar4 < 0) {
          uVar3 = *unaff_x20;
          uVar2 = uVar3;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar1 = uVar3;
          if ((uVar2 & 1) == 0) {
            uVar1 = 0;
            FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
          }
          uVar2 = *(ulong *)(uVar1 + 0x10);
          uVar3 = uVar1;
          if (*(ulong *)(uVar1 + 0x18) >> 1 <= uVar2) {
            uVar3 = (ulong)(1 < *(ulong *)(uVar1 + 0x18));
            FUN_000540b4(uVar3,uVar2 + 1,1,uVar1);
          }
          *(ulong *)(uVar3 + 0x10) = uVar2 + 1;
          *(undefined1 *)(uVar3 + uVar2 + 0x20) = 0x2d;
          *unaff_x20 = uVar3;
          lVar4 = -lVar4;
        }
        func_0x0012d6f0(lVar4);
        lVar5 = lVar5 + -1;
        plVar6 = plVar6 + 1;
      } while (lVar5 != 0);
    }
    uVar3 = *unaff_x20;
  }
  uVar2 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar1 = uVar3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
    FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar2 = *(ulong *)(uVar1 + 0x10);
  lVar5 = uVar2 + 1;
  uVar3 = uVar1;
  if (*(ulong *)(uVar1 + 0x18) >> 1 <= uVar2) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar1 + 0x18));
    FUN_000540b4(uVar3,lVar5,1,uVar1);
  }
  *(long *)(uVar3 + 0x10) = lVar5;
  *(undefined1 *)(uVar3 + uVar2 + 0x20) = 0x5d;
  *unaff_x20 = uVar3;
  lVar4 = uVar2 + 2;
  uVar2 = uVar3;
  if ((long)(*(ulong *)(uVar3 + 0x18) >> 1) < lVar4) {
    uVar2 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_000540b4(uVar2,lVar4,1,uVar3);
  }
  *(long *)(uVar2 + 0x10) = lVar4;
  *(undefined1 *)(uVar2 + lVar5 + 0x20) = 10;
  *unaff_x20 = uVar2;
  return;
}



/* Entry: 00133924; end: 00133b13;  */

void FUN_00133924(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  
  FUN_0012f564(param_2);
  FUN_000c7840(": ",2);
  uVar8 = *unaff_x20;
  uVar7 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar6 = uVar8;
  if ((uVar7 & 1) == 0) {
    uVar6 = 0;
    FUN_000540b4(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
  }
  uVar7 = *(ulong *)(uVar6 + 0x10);
  uVar8 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar7) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    FUN_000540b4(uVar8,uVar7 + 1,1,uVar6);
  }
  *(ulong *)(uVar8 + 0x10) = uVar7 + 1;
  *(undefined1 *)(uVar8 + uVar7 + 0x20) = 0x5b;
  *unaff_x20 = uVar8;
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 != 0) {
    bVar5 = *(char *)(param_1 + 0x20) == '\0';
    pcVar9 = "true";
    if (bVar5) {
      pcVar9 = "false";
    }
    uVar2 = 4;
    if (bVar5) {
      uVar2 = 5;
    }
    FUN_000c7840(pcVar9,uVar2);
    lVar10 = lVar10 + -1;
    if (lVar10 != 0) {
      pcVar9 = (char *)(param_1 + 0x21);
      do {
        cVar4 = *pcVar9;
        FUN_000c7840(", ",2);
        pcVar3 = "true";
        if (cVar4 == '\0') {
          pcVar3 = "false";
        }
        uVar2 = 4;
        if (cVar4 == '\0') {
          uVar2 = 5;
        }
        FUN_000c7840(pcVar3,uVar2);
        lVar10 = lVar10 + -1;
        pcVar9 = pcVar9 + 1;
      } while (lVar10 != 0);
    }
    uVar8 = *unaff_x20;
  }
  uVar7 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar6 = uVar8;
  if ((uVar7 & 1) == 0) {
    uVar6 = 0;
    FUN_000540b4(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
  }
  uVar7 = *(ulong *)(uVar6 + 0x10);
  lVar10 = uVar7 + 1;
  uVar8 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar7) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    FUN_000540b4(uVar8,lVar10,1,uVar6);
  }
  *(long *)(uVar8 + 0x10) = lVar10;
  *(undefined1 *)(uVar8 + uVar7 + 0x20) = 0x5d;
  *unaff_x20 = uVar8;
  lVar1 = uVar7 + 2;
  uVar7 = uVar8;
  if ((long)(*(ulong *)(uVar8 + 0x18) >> 1) < lVar1) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
    FUN_000540b4(uVar7,lVar1,1,uVar8);
  }
  *(long *)(uVar7 + 0x10) = lVar1;
  *(undefined1 *)(uVar7 + lVar10 + 0x20) = 10;
  *unaff_x20 = uVar7;
  return;
}



/* Entry: 00133b14; end: 00133b43;  */

void FUN_00133b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_30 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_4;
  FUN_0013280c(param_1,param_2,FUN_00135878,auStack_30,param_3);
  return;
}



/* Entry: 00133b44; end: 0013419b;  */

void FUN_00133b44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 code *param_5,undefined8 param_6,long param_7,long param_8,code *param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  code *pcVar14;
  undefined8 uVar15;
  long lVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar17;
  long unaff_x20;
  long unaff_x21;
  long lVar18;
  code *pcVar19;
  long lVar20;
  ulong uVar21;
  undefined1 *puVar22;
  undefined1 auStack_1a0 [8];
  long lStack_198;
  undefined1 *puStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  undefined1 auStack_a0 [16];
  long lStack_90;
  long lStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  pcStack_e8 = param_9;
  lVar20 = *(long *)(param_8 + -8);
  lVar11 = param_7;
  lVar16 = param_8;
  uStack_160 = param_2;
  pcStack_158 = param_5;
  uStack_150 = param_6;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar20 + 0x40));
  puVar22 = auStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_e0 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_e0 + 0x40));
  lVar18 = (long)puVar22 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,lVar11,lVar16,"key value ",0);
  lVar11 = 0;
  lStack_120 = lVar10;
  __sSqMa();
  lStack_138 = *(long *)(lVar11 + -8);
  lStack_130 = lVar11;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_138 + 0x40));
  lVar11 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_110 = lVar11;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lStack_140 = lVar11 - extraout_x12;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x48);
  pcStack_80 = param_9;
  lStack_90 = param_7;
  lStack_88 = param_8;
  uStack_78 = param_3;
  uStack_70 = param_4;
  FUN_001357a4();
  uVar12 = 0;
  __sSDMa(0,param_7,param_8,pcStack_e8);
  uStack_128 = uVar15;
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uStack_118);
  puVar13 = PTR___sSDyxq_GSTsMc_0099af00;
  _swift_getWitnessTable(PTR___sSDyxq_GSTsMc_0099af00,uVar12);
  pcVar9 = FUN_00135778;
  __sSTsE6sorted2bySay7ElementQzGSbAD_ADtKXE_tKF(FUN_00135778,auStack_a0,uVar12,puVar13);
  lStack_170 = unaff_x20 + 8;
  pcVar19 = (code *)0x0;
  lStack_198 = param_7;
  puStack_190 = puVar22;
  lStack_188 = lVar18;
  lStack_180 = lVar20;
  lStack_178 = param_8;
  puStack_168 = (undefined8 *)(unaff_x20 + 0x10);
  pcStack_148 = pcVar9;
  while( true ) {
    lVar11 = lStack_120;
    pcVar9 = pcStack_148;
    pcVar14 = pcStack_148;
    __sSa8endIndexSivg(pcStack_148,lStack_120);
    if (pcVar19 == pcVar14) {
      uVar15 = 1;
      pcStack_e8 = pcVar19;
    }
    else {
      __sSayxSicig(lStack_110,pcVar19,pcVar9,lVar11);
      if (SCARRY8((long)pcVar19,1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x134198);
        (*pcVar9)();
      }
      uVar15 = 0;
      pcStack_e8 = pcVar19 + 1;
    }
    lVar10 = lStack_110;
    lVar17 = *(long *)(lVar11 + -8);
    (**(code **)(lVar17 + 0x38))(lStack_110,uVar15,1,lVar11);
    lVar16 = lStack_140;
    (**(code **)(lStack_138 + 0x20))(lStack_140,lVar10,lStack_130);
    lVar10 = lVar16;
    (**(code **)(lVar17 + 0x30))(lVar16,1,lVar11);
    if ((int)lVar10 == 1) break;
    iVar7 = *(int *)(lVar11 + 0x30);
    (**(code **)(lStack_e0 + 0x20))(lVar18,lVar16,param_7);
    (**(code **)(lVar20 + 0x20))(puVar22,lVar16 + iVar7,param_8);
    FUN_0012f564(uStack_160);
    FUN_000c7840(" {\n",3);
    if (lRam0000000000af04e8 != -1) {
      _swift_once(0xaf04e8,FUN_0012d578);
    }
    _swift_bridgeObjectRetain(uRam0000000000af04e0);
    FUN_00053fc4();
    FUN_000fd388(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
    uVar15 = uStack_128;
    puStack_168[3] = 0;
    puStack_168[2] = 0;
    puStack_168[5] = 0;
    puStack_168[4] = 0;
    puStack_168[1] = 0;
    *puStack_168 = 0;
    if (lRam0000000000af04f0 != -1) {
      _swift_once(0xaf04f0,FUN_0012f1d0);
    }
    uVar12 = uRam0000000000af04f8;
    _swift_bridgeObjectRetain(uRam0000000000af04f8);
    uVar8 = uStack_118;
    _swift_bridgeObjectRelease(uStack_118);
    _swift_bridgeObjectRelease(uVar15);
    *(undefined8 *)(unaff_x20 + 0x40) = uVar12;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    (*pcStack_158)();
    if (unaff_x21 != 0) {
      _swift_bridgeObjectRelease(pcStack_148);
      FUN_000fd388(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
      _swift_bridgeObjectRelease(uVar8);
      _swift_bridgeObjectRelease(uVar15);
      (**(code **)(lVar20 + 8))(puVar22,param_8);
      (**(code **)(lStack_e0 + 8))(lVar18,param_7);
      return;
    }
    uVar12 = *(undefined8 *)(unaff_x20 + 0x48);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRelease(uVar12);
    *(undefined8 *)(unaff_x20 + 0x48) = uVar8;
    uVar12 = *(undefined8 *)(unaff_x20 + 0x40);
    _swift_bridgeObjectRetain(uVar15);
    _swift_bridgeObjectRelease(uVar12);
    *(undefined8 *)(unaff_x20 + 0x40) = uVar15;
    uStack_f0 = *(undefined8 *)(unaff_x20 + 0x10);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_100 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_108 = *(undefined8 *)(unaff_x20 + 0x38);
    FUN_001357a4(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
    FUN_000fd388(uStack_f0,uStack_f8,uVar15,uVar12,uStack_100,uStack_108);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
    *(undefined8 *)(unaff_x20 + 0x18) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
    *(undefined8 *)(unaff_x20 + 0x28) = uVar5;
    *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x38) = uVar6;
    lVar18 = *(long *)(unaff_x20 + 8);
    uVar21 = *(ulong *)(lVar18 + 0x10);
    if (uVar21 < 2) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x13419c);
      (*pcVar9)();
    }
    lVar20 = lVar18;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)lVar20 == 0) || (*(ulong *)(lVar18 + 0x18) >> 1 < uVar21 - 2)) {
      FUN_000540b4();
      lVar18 = lVar20;
    }
    lVar11 = lStack_e0;
    pcVar19 = pcStack_e8;
    puVar22 = puStack_190;
    param_7 = lStack_198;
    _memmove(lVar18 + uVar21 + 0x1e,lVar18 + uVar21 + 0x20,*(long *)(lVar18 + 0x10) - uVar21);
    *(long *)(lVar18 + 0x10) = *(long *)(lVar18 + 0x10) + -2;
    *(long *)(unaff_x20 + 8) = lVar18;
    _swift_bridgeObjectRetain(lVar18);
    FUN_00053fc4();
    FUN_000c7840(&UNK_009105ae,2);
    param_8 = lStack_178;
    lVar20 = lStack_180;
    (**(code **)(lStack_180 + 8))(puVar22,lStack_178);
    lVar18 = lStack_188;
    (**(code **)(lVar11 + 8))(lStack_188,param_7);
  }
  FUN_000fd388(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
  _swift_bridgeObjectRelease(pcStack_148);
  _swift_bridgeObjectRelease(uStack_118);
  _swift_bridgeObjectRelease(uStack_128);
  return;
}



/* Entry: 0013419c; end: 001342a7;  */

void FUN_0013419c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  uVar3 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  uStack_c0 = param_3;
  uStack_b8 = param_4;
  lStack_b0 = param_5;
  lStack_a8 = param_6;
  uStack_90 = param_3;
  uStack_88 = param_4;
  lStack_80 = param_5;
  lStack_78 = param_6;
  uStack_70 = param_3;
  _swift_getAssociatedTypeWitness(0,uVar3,param_3,&UNK_008441f0,&UNK_00844200);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_6 + 8),param_4,&UNK_008441f0,&UNK_00844200);
  _swift_getAssociatedConformanceWitness(uVar3,param_3,uVar1,&UNK_008441f0,&UNK_008441f8);
  FUN_00133b44(param_1,param_2,FUN_00135a40,auStack_a0,0x13585c,auStack_d0,uVar1,uVar2,uVar3);
  return;
}



/* Entry: 001342a8; end: 00134343;  */

void FUN_001342a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,long param_7)

{
  long unaff_x21;
  
  (**(code **)(*(long *)(param_6 + 8) + 0x30))
            (param_2,1,param_1,&UNK_009af138,&PTR_DAT_009af160,param_4);
  if (unaff_x21 == 0) {
    (**(code **)(*(long *)(param_7 + 8) + 0x30))
              (param_3,2,param_1,&UNK_009af138,&PTR_DAT_009af160,param_5);
  }
  return;
}



/* Entry: 00134344; end: 0013441b;  */

void FUN_00134344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar2 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  uStack_b0 = param_3;
  uStack_a8 = param_4;
  lStack_a0 = param_5;
  uStack_98 = param_6;
  uStack_80 = param_3;
  uStack_78 = param_4;
  lStack_70 = param_5;
  uStack_68 = param_6;
  uStack_60 = param_3;
  _swift_getAssociatedTypeWitness(0,uVar2,param_3,&UNK_008441f0,&UNK_00844200);
  _swift_getAssociatedConformanceWitness(uVar2,param_3,uVar1,&UNK_008441f0,&UNK_008441f8);
  FUN_00133b44(param_1,param_2,FUN_00135810,auStack_90,FUN_00135840,auStack_c0,uVar1,param_4,uVar2);
  return;
}



/* Entry: 0013441c; end: 0013449f;  */

void FUN_0013441c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7)

{
  long unaff_x21;
  
  (**(code **)(*(long *)(param_6 + 8) + 0x30))
            (param_2,1,param_1,&UNK_009af138,&PTR_DAT_009af160,param_4);
  if (unaff_x21 == 0) {
    FUN_00130aa0(param_3,2,param_5,param_7);
  }
  return;
}



/* Entry: 001344a0; end: 0013457b;  */

void FUN_001344a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar2 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  uStack_c0 = param_3;
  uStack_b8 = param_4;
  lStack_b0 = param_5;
  uStack_a8 = param_6;
  uStack_a0 = param_7;
  uStack_80 = param_3;
  uStack_78 = param_4;
  lStack_70 = param_5;
  uStack_68 = param_6;
  uStack_60 = param_7;
  uStack_58 = param_3;
  _swift_getAssociatedTypeWitness(0,uVar2,param_3,&UNK_008441f0,&UNK_00844200);
  _swift_getAssociatedConformanceWitness(uVar2,param_3,uVar1,&UNK_008441f0,&UNK_008441f8);
  FUN_00133b44(param_1,param_2,FUN_00135728,auStack_90,FUN_00135758,auStack_d0,uVar1,param_4,uVar2);
  return;
}



/* Entry: 0013457c; end: 001345ff;  */

void FUN_0013457c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x21;
  
  (**(code **)(*(long *)(param_6 + 8) + 0x30))
            (param_2,1,param_1,&UNK_009af138,&PTR_DAT_009af160,param_4);
  if (unaff_x21 == 0) {
    FUN_00130b70(param_3,2,param_5,param_8);
  }
  return;
}



/* Entry: 00134600; end: 001346c3;  */

void FUN_00134600(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  FUN_0012f564();
  FUN_000c7840(": ",2);
  FUN_0012da10(param_1);
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar3 + uVar1 + 0x20) = 10;
  *unaff_x20 = uVar3;
  return;
}



/* Entry: 001346c4; end: 00134787;  */

void FUN_001346c4(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  FUN_0012f564();
  FUN_000c7840(": ",2);
  func_0x0012da78(param_1);
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar3 + uVar1 + 0x20) = 10;
  *unaff_x20 = uVar3;
  return;
}



/* Entry: 00134788; end: 0013479b;  */

void FUN_00134788(void)

{
  FUN_00130880();
  return;
}



/* Entry: 0013479c; end: 0013485b;  */

void FUN_0013479c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  FUN_0012f564(param_2);
  FUN_000c7840(": ",2);
  func_0x0012d6f0(param_1);
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar3 + uVar1 + 0x20) = 10;
  *unaff_x20 = uVar3;
  return;
}



/* Entry: 0013485c; end: 001348a7;  */

void FUN_0013485c(void)

{
  FUN_001309c4();
  return;
}



/* Entry: 001348a8; end: 00134973;  */

void FUN_001348a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,code *param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  FUN_0012f564(param_3);
  FUN_000c7840(": ",2);
  (*param_6)(param_1,param_2);
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar3 + uVar1 + 0x20) = 10;
  *unaff_x20 = uVar3;
  return;
}



/* Entry: 00134974; end: 00134b77;  */

void FUN_00134974(void)

{
  FUN_00130aa0();
  return;
}



/* Entry: 00134b78; end: 00134d43;  */

void FUN_00134b78(undefined6 *param_1,undefined6 *param_2,undefined *param_3,undefined *param_4)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined6 *puVar5;
  undefined6 *puVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  uint uVar8;
  undefined6 *puVar9;
  undefined1 uStack_11e;
  undefined1 uStack_11d;
  undefined1 uStack_11c;
  undefined1 uStack_11b;
  undefined1 uStack_11a;
  undefined1 uStack_119;
  undefined1 uStack_118;
  undefined1 uStack_117;
  undefined1 uStack_116;
  undefined1 uStack_115;
  undefined1 uStack_114;
  undefined1 uStack_113;
  undefined1 uStack_112;
  undefined1 uStack_111;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined6 uStack_e8;
  undefined2 uStack_e2;
  undefined6 uStack_e0;
  undefined2 uStack_da;
  undefined1 *puStack_d8;
  undefined8 uStack_d0;
  undefined2 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar8 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    iVar4 = (int)param_1;
    if (uVar8 == 0) {
      uStack_11e = SUB81(param_1,0);
      uStack_11d = (undefined1)((ulong)param_1 >> 8);
      uStack_11c = (undefined1)((ulong)param_1 >> 0x10);
      uStack_11b = (undefined1)((ulong)param_1 >> 0x18);
      uStack_11a = (undefined1)((ulong)param_1 >> 0x20);
      uStack_119 = (undefined1)((ulong)param_1 >> 0x28);
      uStack_118 = (undefined1)((ulong)param_1 >> 0x30);
      uStack_117 = (undefined1)((ulong)param_1 >> 0x38);
      uStack_116 = SUB81(param_2,0);
      uStack_115 = (undefined1)((ulong)param_2 >> 8);
      uStack_114 = (undefined1)((ulong)param_2 >> 0x10);
      uStack_113 = (undefined1)((ulong)param_2 >> 0x18);
      uStack_112 = (undefined1)((ulong)param_2 >> 0x20);
      uVar7 = (ulong)param_2 >> 0x30 & 0xff;
      uStack_111 = (undefined1)((ulong)param_2 >> 0x28);
      puVar9 = param_2;
      if (uVar7 != 0) {
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_c8 = 1;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_90 = 0;
        uStack_88 = 1;
        uStack_60 = 0xf000000000000000;
        uStack_68 = 0;
        uStack_50 = 0xf000000000000000;
        uStack_58 = 0;
        puStack_d8 = &uStack_11e;
        uStack_f0 = 0;
        uStack_e8 = SUB86(puStack_d8,0);
        uStack_e2 = (undefined2)((ulong)puStack_d8 >> 0x30);
        uStack_e0 = (undefined6)uVar7;
        uStack_da = 0;
        uStack_d0 = 0;
        param_4 = &UNK_007d78b0;
        func_0x001358a0(&uStack_110,&uStack_b8,0xaed1d8,&UNK_007d78b0);
        uStack_80 = 100;
        uStack_78 = 1;
        uStack_70 = 100;
        puVar9 = (undefined6 *)((long)&MACH_HEADER.cpusubtype + 2);
        FUN_0012f884(&uStack_e8);
        param_1 = &uStack_e8;
        func_0x000d4cac();
      }
      goto LAB_00134d0c;
    }
    puVar9 = (undefined6 *)((long)param_1 >> 0x20);
    param_1 = (undefined6 *)(long)iVar4;
    if ((long)puVar9 < (long)iVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x134d40);
      (*pcVar3)();
    }
  }
  else {
    if (uVar8 != 2) {
      uStack_e0 = 0;
      uStack_e8 = 0;
      uStack_e2 = 0;
      param_1 = &uStack_e8;
      puVar9 = &uStack_e8;
      FUN_0012f7bc(param_1,puVar9,param_3);
      goto LAB_00134d0c;
    }
    puVar9 = *(undefined6 **)(param_1 + 3);
    param_1 = *(undefined6 **)(param_1 + 2);
  }
  FUN_00134d44(param_1,puVar9,(ulong)param_2 & 0x3fffffffffffffff,param_3);
  param_4 = param_3;
LAB_00134d0c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = param_1;
  __s10Foundation13__DataStorageC6_bytesSvSgvg();
  puVar6 = puVar5;
  if (puVar5 != (undefined6 *)0x0) {
    __s10Foundation13__DataStorageC7_offsetSivg();
    if (SBORROW8((long)param_1,(long)puVar6)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x134de4);
      (*pcVar3)();
    }
    puVar5 = (undefined6 *)(((long)param_1 - (long)puVar6) + (long)puVar5);
  }
  if (!SBORROW8((long)puVar9,(long)param_1)) {
    __s10Foundation13__DataStorageC7_lengthSivg();
    if ((long)puVar9 - (long)param_1 <= (long)puVar6) {
      puVar6 = (undefined6 *)((long)puVar9 - (long)param_1);
    }
    lVar1 = 0;
    if (puVar5 != (undefined6 *)0x0) {
      lVar1 = (long)puVar6 + (long)puVar5;
    }
    FUN_0012f7bc(extraout_x8,puVar5,lVar1,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x134de0);
  (*pcVar3)();
}



/* Entry: 00134d44; end: 00134de3;  */

void FUN_00134d44(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_2;
  __s10Foundation13__DataStorageC6_bytesSvSgvg();
  lVar4 = lVar3;
  if (lVar3 != 0) {
    __s10Foundation13__DataStorageC7_offsetSivg();
    if (SBORROW8(param_2,lVar4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x134de4);
      (*pcVar2)();
    }
    lVar3 = (param_2 - lVar4) + lVar3;
  }
  if (!SBORROW8(param_3,param_2)) {
    __s10Foundation13__DataStorageC7_lengthSivg();
    if (param_3 - param_2 <= lVar4) {
      lVar4 = param_3 - param_2;
    }
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = lVar4 + lVar3;
    }
    FUN_0012f7bc(param_1,lVar3,lVar1,param_5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x134de0);
  (*pcVar2)();
}



/* Entry: 00134de4; end: 001351d3;  */

/* WARNING: Removing unreachable block (ram,0x00135184) */
/* WARNING: Removing unreachable block (ram,0x001351a4) */

void FUN_00134de4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5
                 ,long param_6)

{
  unkbyte9 *pVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  unkbyte9 Var13;
  unkbyte9 Var14;
  unkbyte9 Var15;
  unkbyte9 Var16;
  unkbyte9 Var17;
  unkbyte9 Var18;
  long lVar19;
  long lVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined8 uVar27;
  code *pcVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 auVar63 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lStack_90 = param_5;
  lStack_88 = param_6;
  func_0x00016cc8(auStack_a8);
  (**(code **)(*(long *)(param_5 + -8) + 0x10))();
  FUN_0012d5b8(param_2,param_3);
  FUN_000c7840(" {\n",3);
  if (lRam0000000000af04e8 != -1) {
    _swift_once(0xaf04e8,FUN_0012d578);
  }
  _swift_bridgeObjectRetain(uRam0000000000af04e0);
  FUN_00053fc4();
  pVar1 = (unkbyte9 *)(param_4 + 0x20);
  uVar8 = *(undefined8 *)(param_4 + 0x28);
  uVar6 = *(undefined8 *)pVar1;
  Var16 = *pVar1;
  Var15 = *pVar1;
  pVar1 = (unkbyte9 *)(param_4 + 0x30);
  uVar11 = *(undefined8 *)pVar1;
  uVar12 = *(undefined8 *)(param_4 + 0x38);
  Var18 = *pVar1;
  Var17 = *pVar1;
  pVar1 = (unkbyte9 *)(param_4 + 0x10);
  uVar9 = *(undefined8 *)(param_4 + 0x18);
  uVar7 = *(undefined8 *)pVar1;
  Var14 = *pVar1;
  Var13 = *pVar1;
  uVar2 = *(undefined8 *)(param_4 + 0x40);
  uVar3 = *(undefined8 *)(param_4 + 0x48);
  puVar21 = auStack_a8;
  FUN_0001393c(puVar21,lStack_90);
  _swift_getDynamicType();
  puVar22 = puVar21;
  _swift_conformsToProtocol();
  if ((puVar22 == (undefined1 *)0x0) || (puVar21 == (undefined1 *)0x0)) {
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar2);
    uVar29 = 0;
    uVar30 = 0;
    uVar31 = 0;
    uVar32 = 0;
    uVar33 = 0;
    uVar34 = 0;
    uVar35 = 0;
    uVar36 = 0;
    uVar37 = 0;
    uVar38 = 0;
    uVar39 = 0;
    uVar40 = 0;
    uVar41 = 0;
    uVar42 = 0;
    uVar43 = 0;
    uVar44 = 0;
    auStack_70 = ZEXT216(0);
    uVar47 = 0;
    uVar48 = 0;
    uVar49 = 0;
    uVar50 = 0;
    uVar51 = 0;
    uVar52 = 0;
    uVar53 = 0;
    uVar54 = 0;
    uVar55 = 0;
    uVar56 = 0;
    uVar57 = 0;
    uVar58 = 0;
    uVar59 = 0;
    uVar60 = 0;
    uVar61 = 0;
    uVar62 = 0;
  }
  else {
    pcVar28 = *(code **)(puVar22 + 8);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar2);
    (*pcVar28)(auStack_80,puVar21,puVar22);
    uVar37 = (undefined1)auStack_80._8_8_;
    uVar38 = SUB81(auStack_80._8_8_,1);
    uVar39 = SUB81(auStack_80._8_8_,2);
    uVar40 = SUB81(auStack_80._8_8_,3);
    uVar41 = SUB81(auStack_80._8_8_,4);
    uVar42 = SUB81(auStack_80._8_8_,5);
    uVar43 = SUB81(auStack_80._8_8_,6);
    uVar44 = SUB81(auStack_80._8_8_,7);
    uVar29 = (undefined1)auStack_80._0_8_;
    uVar30 = SUB81(auStack_80._0_8_,1);
    uVar31 = SUB81(auStack_80._0_8_,2);
    uVar32 = SUB81(auStack_80._0_8_,3);
    uVar33 = SUB81(auStack_80._0_8_,4);
    uVar34 = SUB81(auStack_80._0_8_,5);
    uVar35 = SUB81(auStack_80._0_8_,6);
    uVar36 = SUB81(auStack_80._0_8_,7);
    uVar55 = (undefined1)uStack_58;
    uVar56 = (undefined1)((ulong)uStack_58 >> 8);
    uVar57 = (undefined1)((ulong)uStack_58 >> 0x10);
    uVar58 = (undefined1)((ulong)uStack_58 >> 0x18);
    uVar59 = (undefined1)((ulong)uStack_58 >> 0x20);
    uVar60 = (undefined1)((ulong)uStack_58 >> 0x28);
    uVar61 = (undefined1)((ulong)uStack_58 >> 0x30);
    uVar62 = (undefined1)((ulong)uStack_58 >> 0x38);
    uVar47 = (undefined1)uStack_60;
    uVar48 = (undefined1)((ulong)uStack_60 >> 8);
    uVar49 = (undefined1)((ulong)uStack_60 >> 0x10);
    uVar50 = (undefined1)((ulong)uStack_60 >> 0x18);
    uVar51 = (undefined1)((ulong)uStack_60 >> 0x20);
    uVar52 = (undefined1)((ulong)uStack_60 >> 0x28);
    uVar53 = (undefined1)((ulong)uStack_60 >> 0x30);
    uVar54 = (undefined1)((ulong)uStack_60 >> 0x38);
  }
  *(ulong *)(param_4 + 0x18) =
       CONCAT17(uVar44,CONCAT16(uVar43,CONCAT15(uVar42,CONCAT14(uVar41,CONCAT13(uVar40,CONCAT12(
                                                  uVar39,CONCAT11(uVar38,uVar37)))))));
  *(ulong *)(param_4 + 0x10) =
       CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar34,CONCAT14(uVar33,CONCAT13(uVar32,CONCAT12(
                                                  uVar31,CONCAT11(uVar30,uVar29)))))));
  *(long *)(param_4 + 0x28) = auStack_70._8_8_;
  *(long *)(param_4 + 0x20) = auStack_70._0_8_;
  *(ulong *)(param_4 + 0x38) =
       CONCAT17(uVar62,CONCAT16(uVar61,CONCAT15(uVar60,CONCAT14(uVar59,CONCAT13(uVar58,CONCAT12(
                                                  uVar57,CONCAT11(uVar56,uVar55)))))));
  *(ulong *)(param_4 + 0x30) =
       CONCAT17(uVar54,CONCAT16(uVar53,CONCAT15(uVar52,CONCAT14(uVar51,CONCAT13(uVar50,CONCAT12(
                                                  uVar49,CONCAT11(uVar48,uVar47)))))));
  puVar23 = PTR___swiftEmptyArrayStorage_0099b8f0;
  FUN_0019bc8c();
  _swift_bridgeObjectRelease(uVar2);
  *(undefined **)(param_4 + 0x40) = puVar23;
  FUN_00135928(auStack_a8,&uStack_f8);
  uVar24 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  uVar27 = 0xaef4a0;
  func_0x000115a8(0xaef4a0,&UNK_007d9aa8);
  puVar25 = &uStack_d0;
  _swift_dynamicCast(puVar25,&uStack_f8,uVar24,uVar27,0xe);
  lVar19 = lStack_b0;
  uVar27 = uStack_b8;
  if ((int)puVar25 == 0) {
    lStack_b0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    func_0x0013596c(&uStack_d0,0xaef4a8,&UNK_007d9ab0);
    _swift_bridgeObjectRelease(uVar3);
    uVar27 = 0;
  }
  else {
    FUN_0001393c(&uStack_d0,uStack_b8);
    (**(code **)(lVar19 + 0x10))(uVar27,lVar19);
    FUN_00011670(&uStack_d0);
    _swift_bridgeObjectRelease(uVar3);
  }
  *(undefined8 *)(param_4 + 0x48) = uVar27;
  FUN_00135928(auStack_a8,&uStack_d0);
  puVar25 = &uStack_f8;
  _swift_dynamicCast(puVar25,&uStack_d0,uVar24,&UNK_009af680,6);
  lVar20 = lStack_88;
  lVar19 = lStack_90;
  if ((int)puVar25 == 0) {
    FUN_0001393c(auStack_a8,lStack_90);
    (**(code **)(lVar20 + 0x48))(param_4,&UNK_009af138,&PTR_DAT_009af160,lVar19,lVar20);
  }
  else {
    FUN_000c3f78(param_4);
    FUN_0014ca0c(param_4,uStack_f8,uStack_f0);
    FUN_00023358(uStack_f8,uStack_f0);
    _swift_release(uStack_e8);
  }
  uVar29 = (undefined1)((ulong)uVar8 >> 8);
  uVar30 = (undefined1)((ulong)uVar8 >> 0x10);
  uVar31 = (undefined1)((ulong)uVar8 >> 0x18);
  uVar32 = (undefined1)((ulong)uVar8 >> 0x20);
  uVar33 = (undefined1)((ulong)uVar8 >> 0x28);
  uVar34 = (undefined1)((ulong)uVar8 >> 0x30);
  uVar35 = (undefined1)((ulong)uVar8 >> 0x38);
  uVar36 = (undefined1)((ulong)uVar12 >> 8);
  uVar37 = (undefined1)((ulong)uVar12 >> 0x10);
  uVar38 = (undefined1)((ulong)uVar12 >> 0x18);
  uVar39 = (undefined1)((ulong)uVar12 >> 0x20);
  uVar40 = (undefined1)((ulong)uVar12 >> 0x28);
  uVar41 = (undefined1)((ulong)uVar12 >> 0x30);
  uVar42 = (undefined1)((ulong)uVar12 >> 0x38);
  auVar63[9] = uVar36;
  auVar63._0_9_ = Var17;
  auVar63[10] = uVar37;
  auVar63[0xb] = uVar38;
  auVar63[0xc] = uVar39;
  auVar63[0xd] = uVar40;
  auVar63[0xe] = uVar41;
  auVar63[0xf] = uVar42;
  auVar10[9] = uVar36;
  auVar10._0_9_ = Var18;
  auVar10[10] = uVar37;
  auVar10[0xb] = uVar38;
  auVar10[0xc] = uVar39;
  auVar10[0xd] = uVar40;
  auVar10[0xe] = uVar41;
  auVar10[0xf] = uVar42;
  auVar63 = NEON_ext(auVar63,auVar10,8,1);
  auVar45[9] = uVar29;
  auVar45._0_9_ = Var15;
  auVar45[10] = uVar30;
  auVar45[0xb] = uVar31;
  auVar45[0xc] = uVar32;
  auVar45[0xd] = uVar33;
  auVar45[0xe] = uVar34;
  auVar45[0xf] = uVar35;
  auVar46[9] = uVar29;
  auVar46._0_9_ = Var16;
  auVar46[10] = uVar30;
  auVar46[0xb] = uVar31;
  auVar46[0xc] = uVar32;
  auVar46[0xd] = uVar33;
  auVar46[0xe] = uVar34;
  auVar46[0xf] = uVar35;
  auVar45 = NEON_ext(auVar45,auVar46,8,1);
  uVar29 = (undefined1)((ulong)uVar9 >> 8);
  uVar30 = (undefined1)((ulong)uVar9 >> 0x10);
  uVar31 = (undefined1)((ulong)uVar9 >> 0x18);
  uVar32 = (undefined1)((ulong)uVar9 >> 0x20);
  uVar33 = (undefined1)((ulong)uVar9 >> 0x28);
  uVar34 = (undefined1)((ulong)uVar9 >> 0x30);
  uVar35 = (undefined1)((ulong)uVar9 >> 0x38);
  auVar4[9] = uVar29;
  auVar4._0_9_ = Var13;
  auVar4[10] = uVar30;
  auVar4[0xb] = uVar31;
  auVar4[0xc] = uVar32;
  auVar4[0xd] = uVar33;
  auVar4[0xe] = uVar34;
  auVar4[0xf] = uVar35;
  auVar5[9] = uVar29;
  auVar5._0_9_ = Var14;
  auVar5[10] = uVar30;
  auVar5[0xb] = uVar31;
  auVar5[0xc] = uVar32;
  auVar5[0xd] = uVar33;
  auVar5[0xe] = uVar34;
  auVar5[0xf] = uVar35;
  auVar46 = NEON_ext(auVar4,auVar5,8,1);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_4 + 0x48));
  *(undefined8 *)(param_4 + 0x48) = uVar3;
  _swift_bridgeObjectRelease(*(undefined8 *)(param_4 + 0x40));
  *(undefined8 *)(param_4 + 0x40) = uVar2;
  FUN_000fd388(*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18),
               *(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x28),
               *(undefined8 *)(param_4 + 0x30),*(undefined8 *)(param_4 + 0x38));
  *(long *)(param_4 + 0x28) = auVar45._0_8_;
  *(undefined8 *)(param_4 + 0x20) = uVar6;
  *(long *)(param_4 + 0x38) = auVar63._0_8_;
  *(undefined8 *)(param_4 + 0x30) = uVar11;
  *(long *)(param_4 + 0x18) = auVar46._0_8_;
  *(undefined8 *)(param_4 + 0x10) = uVar7;
  uVar26 = *(ulong *)(*(long *)(param_4 + 8) + 0x10);
  if (uVar26 < 2) {
                    /* WARNING: Does not return */
    pcVar28 = (code *)SoftwareBreakpoint(1,0x135184);
    (*pcVar28)();
  }
  FUN_0013566c(uVar26 - 2);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_4 + 8));
  FUN_00053fc4();
  FUN_000c7840(&UNK_009105ae,2);
  FUN_00011670(auStack_a8);
  return;
}



/* Entry: 001351d4; end: 00135503;  */

void FUN_001351d4(undefined8 *param_1,undefined8 param_2,byte param_3,long param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  byte bStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  byte bStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [24];
  long lStack_d0;
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
  
  lStack_d0 = param_4;
  uStack_c8 = param_5;
  func_0x00016cc8(auStack_e8);
  (**(code **)(*(long *)(param_4 + -8) + 0x20))();
  FUN_00135928(auStack_e8,&puStack_1c0);
  uVar6 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  uVar7 = 0xaf0528;
  func_0x000115a8(0xaf0528,&UNK_007da858);
  puVar3 = &uStack_220;
  _swift_dynamicCast(puVar3,&puStack_1c0,uVar6,uVar7,6);
  if ((int)puVar3 == 0) {
    uStack_200 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    func_0x0013596c(&uStack_220,0xaf0530,&UNK_007da860);
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    FUN_001359e0(&uStack_220,&puStack_168);
    FUN_0001393c(&puStack_168,uStack_150);
    _swift_getDynamicType();
    (**(code **)(lStack_148 + 8))(&uStack_c0);
    FUN_00011670(&puStack_168);
    uStack_78 = uStack_b0;
    auStack_70[0] = uStack_b8;
    uStack_88 = uStack_a0;
    uStack_80 = uStack_a8;
    uStack_90 = uStack_98;
    _swift_retain(uStack_c0);
    FUN_001359f8(auStack_70,&puStack_1c0,0xaeddc0,&UNK_007d9aa0);
    FUN_001359f8(&uStack_78,&puStack_1c0,0xaeddc8,&UNK_007da040);
    FUN_001359f8(&uStack_80,&puStack_1c0,0xaeddc8,&UNK_007da040);
    FUN_001359f8(&uStack_88,&puStack_1c0,0xae6938,&UNK_007cdb30);
    FUN_001359f8(&uStack_90,&puStack_1c0,0xaeddd0,&UNK_007da050);
    uVar7 = uStack_c0;
    uVar8 = uStack_b8;
    uVar9 = uStack_b0;
    uVar10 = uStack_a8;
    uVar11 = uStack_a0;
    uVar12 = uStack_98;
  }
  FUN_00135928(auStack_e8,&puStack_168);
  uVar4 = 0xaef4a0;
  func_0x000115a8(0xaef4a0,&UNK_007d9aa8);
  puVar3 = &uStack_110;
  _swift_dynamicCast(puVar3,&puStack_168,uVar6,uVar4,0xe);
  lVar2 = lStack_f0;
  uVar6 = uStack_f8;
  if ((int)puVar3 == 0) {
    lStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    func_0x0013596c(&uStack_110,0xaef4a8,&UNK_007d9ab0);
    uVar6 = 0;
  }
  else {
    FUN_0001393c(&uStack_110,uStack_f8);
    (**(code **)(lVar2 + 0x10))(uVar6,lVar2);
    FUN_00011670(&uStack_110);
  }
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  puVar5 = PTR___swiftEmptyArrayStorage_0099b8f0;
  FUN_0019bc8c();
  FUN_000fd388(uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
  FUN_00011670(auStack_e8);
  bStack_170 = param_3 & 1;
  puStack_1c0 = puVar1;
  puStack_1b8 = puVar1;
  puStack_168 = puVar1;
  puStack_160 = puVar1;
  uStack_1b0 = uVar7;
  uStack_1a8 = uVar8;
  uStack_1a0 = uVar9;
  uStack_198 = uVar10;
  uStack_190 = uVar11;
  uStack_188 = uVar12;
  puStack_180 = puVar5;
  uStack_178 = uVar6;
  uStack_158 = uVar7;
  uStack_150 = uVar8;
  lStack_148 = uVar9;
  uStack_140 = uVar10;
  uStack_138 = uVar11;
  uStack_130 = uVar12;
  puStack_128 = puVar5;
  uStack_120 = uVar6;
  bStack_118 = bStack_170;
  func_0x001359ac(&puStack_1c0,&uStack_220);
  FUN_0010f3e8(&puStack_168);
  param_1[5] = uStack_198;
  param_1[4] = uStack_1a0;
  param_1[7] = uStack_188;
  param_1[6] = uStack_190;
  param_1[9] = uStack_178;
  param_1[8] = puStack_180;
  *(byte *)(param_1 + 10) = bStack_170;
  param_1[1] = puStack_1b8;
  *param_1 = puStack_1c0;
  param_1[3] = uStack_1a8;
  param_1[2] = uStack_1b0;
  return;
}



/* Entry: 00135504; end: 00135523;  */

undefined1  [16] FUN_00135504(ulong param_1)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x135520);
    (*pcVar2)();
  }
  if (param_1 < 0x100) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_1 << 0x30;
    return auVar1 << 0x40;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x135524);
  (*pcVar2)();
}



/* Entry: 00135524; end: 001355cb;  */

undefined1  [16] FUN_00135524(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  if (param_2 != 0) {
    if (param_2 < 0xf) {
      param_2 = param_1 + param_2;
      FUN_000541a4(param_1,param_2);
      param_2 = param_2 & 0xffffffffffffff;
      uVar2 = param_1;
    }
    else {
      uVar1 = 0;
      __s10Foundation13__DataStorageCMa();
      _swift_allocObject();
      __s10Foundation13__DataStorageC5bytes6lengthACSVSg_Sitcfc(param_1,param_2,uVar1);
      if (param_2 < 0x7fffffff) {
        uVar2 = param_2 << 0x20;
        param_2 = param_1 | 0x4000000000000000;
      }
      else {
        uVar2 = 0;
        __s10Foundation4DataV14RangeReferenceCMa();
        _swift_allocObject();
        *(undefined8 *)(uVar2 + 0x10) = 0;
        *(ulong *)(uVar2 + 0x18) = param_2;
        param_2 = param_1 | 0x8000000000000000;
      }
    }
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = uVar2;
    return auVar3;
  }
  return ZEXT816(0xc000000000000000) << 0x40;
}



/* Entry: 001355cc; end: 0013566b;  */

void FUN_001355cc(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *unaff_x20;
  long lVar6;
  
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x13565c);
    (*pcVar5)();
  }
  lVar3 = param_3 - (param_2 - param_1);
  if (SBORROW8(param_3,param_2 - param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x135660);
    (*pcVar5)();
  }
  if (lVar3 != 0) {
    lVar6 = *unaff_x20;
    lVar4 = *(long *)(lVar6 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar6 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x135664);
      (*pcVar5)();
    }
    uVar1 = lVar6 + 0x20 + param_1 + param_3;
    uVar2 = lVar6 + 0x20 + param_2;
    if (uVar1 != uVar2 || uVar2 + lVar4 <= uVar1) {
      _memmove(uVar1,uVar2,lVar4);
    }
    if (SCARRY8(*(long *)(lVar6 + 0x10),lVar3)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x135668);
      (*pcVar5)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + lVar3;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x13566c);
  (*pcVar5)();
}



/* Entry: 0013566c; end: 00135727;  */

void FUN_0013566c(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x135718);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x13571c);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x135720);
    (*pcVar2)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (!SCARRY8(lVar5,lVar1)) {
      lVar3 = lVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar5 + lVar1)) {
        FUN_000540b4();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      FUN_001355cc(param_1,param_2,0);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x135728);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x135724);
  (*pcVar2)();
}



/* Entry: 00135728; end: 00135757;  */

uint FUN_00135728(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x10))
            (param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Entry: 00135758; end: 00135777;  */

void FUN_00135758(void)

{
  FUN_0013457c();
  return;
}


