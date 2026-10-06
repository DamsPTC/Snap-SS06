/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102fd49ac; end: 102fd4c9b;  */

ulong FUN_102fd49ac(ulong param_1,ulong param_2,undefined8 param_3)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  
  uVar15 = param_1;
  uVar9 = param_2;
  func_0x00010846a2f4();
  func_0x000107c61180();
  uVar7 = uVar15;
  func_0x000107c5faec();
  func_0x000107c61170(uVar15);
  uVar12 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61438(param_1,2);
  lVar16 = 0;
  do {
    while( true ) {
      do {
        do {
          while (uVar15 == 0) {
            bVar6 = SCARRY8(lVar16,1);
            lVar16 = lVar16 + 1;
            if (bVar6) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x102fd4c84);
              (*pcVar5)();
            }
            if ((long)(uVar12 + 0x3f >> 6) <= lVar16) {
              func_0x000107c61574(param_1);
              func_0x000107c6142c(uVar9);
              return param_1;
            }
            uVar15 = ((ulong *)(param_1 + 0x40))[lVar16];
          }
          uVar4 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
          uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
          uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
          uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
          uVar15 = uVar15 - 1 & uVar15;
          uVar11 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) | lVar16 << 6;
          puVar1 = (ulong *)(*(long *)(param_1 + 0x30) + uVar11 * 0x10);
          uVar4 = *puVar1;
          uVar3 = puVar1[1];
        } while (uVar4 == uVar7 && uVar3 == uVar9);
        uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar11 * 8);
        uVar11 = uVar4;
        func_0x000107c605b8(uVar4,uVar3,uVar7,uVar9,0);
      } while ((uVar11 & 1) != 0);
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar11 = param_2;
      func_0x000107c5fadc(param_2,param_3);
      func_0x000107c5345c(uVar14);
      func_0x000107c61170(uVar11);
      func_0x000107c61174();
      uVar8 = param_1;
      func_0x000107c61558();
      uVar11 = uVar4;
      uVar10 = uVar3;
      func_0x000100029284();
      uVar13 = (ulong)~(uint)uVar10 & 1;
      lVar2 = *(long *)(param_1 + 0x10) + uVar13;
      if (SCARRY8(*(long *)(param_1 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102fd4c88);
        (*pcVar5)();
      }
      if (*(long *)(param_1 + 0x18) < lVar2) break;
      if ((uVar8 & 1) == 0) {
        func_0x000102fd2abc(0x112f281c0,&UNK_10db63bf0);
        goto joined_r0x000102fd4bf8;
      }
      if ((uVar10 & 1) != 0) goto LAB_102fd4ba8;
LAB_102fd4bfc:
      lVar2 = param_1 + (uVar11 >> 6) * 8;
      *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (uVar11 & 0x3f);
      puVar1 = (ulong *)(*(long *)(param_1 + 0x30) + uVar11 * 0x10);
      *puVar1 = uVar4;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar11 * 8) = uVar14;
      func_0x000107c61170();
      if (SCARRY8(*(long *)(param_1 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102fd4c8c);
        (*pcVar5)();
      }
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
    }
    func_0x000102fd2eb8(lVar2,uVar8 & 0xffffffff,0x112f281c0,&UNK_10db63bf0);
    uVar11 = uVar4;
    uVar8 = uVar3;
    func_0x000100029284();
    if (((uint)uVar10 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102fd4c9c);
      (*pcVar5)();
    }
joined_r0x000102fd4bf8:
    if ((uVar10 & 1) == 0) goto LAB_102fd4bfc;
LAB_102fd4ba8:
    uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar11 * 8);
    *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar11 * 8) = uVar14;
    func_0x000107c61170();
    func_0x000107c6142c(uVar3);
    func_0x000107c61170(uVar17);
  } while( true );
}



/* Entry: 102fd4c9c; end: 102fd4cc7;  */

void FUN_102fd4c9c(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102fd4cc8; end: 102fd4cf3;  */

void FUN_102fd4cc8(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))(0xc);
  }
  return;
}



/* Entry: 102fd4cf4; end: 102fd4d43;  */

void FUN_102fd4cf4(void)

{
  long unaff_x20;
  
  FUN_102fc8b2c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102fd4d44; end: 102fd4d5b;  */

void FUN_102fd4d44(void)

{
  return;
}



/* Entry: 102fd4d5c; end: 102fd4d7b;  */

void FUN_102fd4d5c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102fd4d7c; end: 102fd4d93;  */

void FUN_102fd4d7c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long unaff_x20;
  code *pcVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  ppuVar1 = &puStack_60;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_102fca994;
  puStack_48 = &UNK_1105f8580;
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c60bc4(&puStack_60);
  pcVar3 = *(code **)(lVar2 + 0x10);
  func_0x000107c6157c(param_2);
  (*pcVar3)(lVar2,ppuVar1);
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c61574(uStack_38);
  return;
}



/* Entry: 102fd4d94; end: 102fd4ddb;  */

undefined8 FUN_102fd4d94(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102fd4ddc; end: 102fd4ecb;  */

void FUN_102fd4ddc(void)

{
  long unaff_x20;
  
  FUN_102fd1398(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 102fd4ecc; end: 102fd4f8f;  */

void FUN_102fd4ecc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102fd4f90; end: 102fd4fa3;  */

void FUN_102fd4f90(void)

{
  func_0x000102fd4d28();
  return;
}



/* Entry: 102fd4fa4; end: 102fd5037;  */

void FUN_102fd4fa4(long param_1,long param_2)

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



/* Entry: 102fd5038; end: 102fd5103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102fd5038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  uVar1 = *(undefined8 *)(param_5 + _DAT_112ff58a0);
  func_0x000107c61174();
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_10;
  *(undefined8 *)(unaff_x20 + 0x48) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_12;
  *(undefined8 *)(unaff_x20 + 0x58) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_13;
  return unaff_x20;
}



/* Entry: 102fd5104; end: 102fd5203;  */

/* WARNING: Possible PIC construction at 0x000102fd5110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fd5120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fd5130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fd5140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fd5150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fd5160: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fd5154) */
/* WARNING: Removing unreachable block (ram,0x000102fd5144) */
/* WARNING: Removing unreachable block (ram,0x000102fd5134) */
/* WARNING: Removing unreachable block (ram,0x000102fd5124) */
/* WARNING: Removing unreachable block (ram,0x000102fd5114) */
/* WARNING: Removing unreachable block (ram,0x000102fd5164) */

void FUN_102fd5104(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102fd5204; end: 102fd5227;  */

void FUN_102fd5204(undefined8 *param_1,undefined8 param_2)

{
  func_0x000100728548();
  *param_1 = param_2;
  return;
}



/* Entry: 102fd5228; end: 102fd5687;  */

void FUN_102fd5228(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f118170);
  func_0x000107c4c270();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 102fd5688; end: 102fd63f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102fd5688(ulong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long extraout_x8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long extraout_x12;
  long lVar13;
  uint uVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  byte bVar23;
  long lVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined1 *puVar28;
  uint uVar29;
  undefined1 auVar30 [16];
  undefined8 uStack_140;
  byte abStack_138 [8];
  long alStack_130 [2];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [12];
  uint uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  uint uStack_e8;
  uint uStack_e4;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined1 *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  uint uStack_94;
  ulong uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *apuStack_70 [2];
  
  lVar9 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  puStack_c8 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lStack_c0 = lVar9;
  func_0x0001000d224c(apuStack_70);
  uStack_94 = (uint)(byte)apuStack_70[0];
  lStack_b0 = *(long *)(param_1 + _DAT_113076880);
  if ((lStack_b0 == 0) || (uVar16 = *(ulong *)(lStack_b0 + _DAT_1130769b0), uVar16 == 0)) {
LAB_102fd5784:
    uStack_a0 = 0;
  }
  else {
    if (uVar16 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar4 = uVar16;
      if (-1 < (long)uVar16) {
        uVar4 = uVar16 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
    }
    if (uVar4 == 0) goto LAB_102fd5784;
    uStack_a0 = uVar16;
    func_0x000107c61434(uVar16);
  }
  uVar16 = *(ulong *)(param_1 + _DAT_113076888);
  uStack_90 = param_1;
  if (uVar16 == 0) {
    puStack_88 = (undefined *)0x0;
    puVar26 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar4 = uVar16 & 0xffffffffffffff8;
    puVar26 = (undefined *)(uVar16 >> 0x3e);
    if (puVar26 == (undefined *)0x0) {
      uVar20 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      uVar20 = uVar4;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar20 = uVar16;
      }
      func_0x000107c60480();
    }
    if (uVar20 == 0) {
      puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar12 = 0;
      do {
        while( true ) {
          if ((uVar16 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar4 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102fd5a1c);
              (*pcVar3)();
            }
            uVar5 = *(ulong *)(uVar16 + uVar12 * 8 + 0x20);
            func_0x000107c61174();
            puVar6 = puStack_88;
          }
          else {
            uVar5 = uVar12;
            func_0x000102f02c38(uVar12,uVar16);
            puVar6 = puStack_88;
          }
          puStack_88 = puVar6;
          if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102fd5a18);
            (*pcVar3)();
          }
          uVar17 = uVar12 + 1;
          if (*(ulong *)(uVar5 + _DAT_113076ae0) < 0xb &&
              (1L << (*(ulong *)(uVar5 + _DAT_113076ae0) & 0x3f) & 0x4c0U) != 0) break;
          puVar15 = puVar6;
          puStack_78 = (undefined *)uVar5;
          func_0x000107c61558();
          puStack_80 = puVar26;
          apuStack_70[0] = puVar6;
          if (((ulong)puVar15 & 1) == 0) {
            func_0x000102f031cc(0,*(long *)(puVar6 + 0x10) + 1,1);
          }
          uVar12 = *(ulong *)(apuStack_70[0] + 0x10);
          puStack_88 = (undefined *)(uVar12 + 1);
          if (*(ulong *)(apuStack_70[0] + 0x18) >> 1 <= uVar12) {
            func_0x000102f031cc(1 < *(ulong *)(apuStack_70[0] + 0x18),puStack_88,1);
          }
          *(undefined **)(apuStack_70[0] + 0x10) = puStack_88;
          *(undefined **)(apuStack_70[0] + uVar12 * 8 + 0x20) = puStack_78;
          uVar12 = uVar17;
          puVar26 = puStack_80;
          puStack_88 = apuStack_70[0];
          if (uVar17 == uVar20) goto LAB_102fd58f8;
        }
        func_0x000107c61170();
        uVar12 = uVar12 + 1;
      } while (uVar17 != uVar20);
    }
LAB_102fd58f8:
    if (puVar26 == (undefined *)0x0) {
      uVar20 = *(ulong *)(uVar4 + 0x10);
      puVar26 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar20 = uVar4;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar20 = uVar16;
      }
      func_0x000107c60480();
      puVar26 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar26;
    if (uVar20 != 0) {
      uVar12 = 0;
      do {
        while( true ) {
          if ((uVar16 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar4 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102fd5a24);
              (*pcVar3)();
            }
            uVar5 = *(ulong *)(uVar16 + uVar12 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar5 = uVar12;
            func_0x000102f02c38(uVar12,uVar16);
          }
          if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102fd5a20);
            (*pcVar3)();
          }
          uVar17 = uVar12 + 1;
          if (10 < *(ulong *)(uVar5 + _DAT_113076ae0) ||
              (1L << (*(ulong *)(uVar5 + _DAT_113076ae0) & 0x3f) & 0x4c0U) == 0) break;
          puVar6 = puVar26;
          puStack_78 = (undefined *)uVar5;
          func_0x000107c61558();
          apuStack_70[0] = puVar26;
          if (((ulong)puVar6 & 1) == 0) {
            func_0x000102f031cc(0,*(long *)(puVar26 + 0x10) + 1,1);
          }
          uVar12 = *(ulong *)(apuStack_70[0] + 0x10);
          if (*(ulong *)(apuStack_70[0] + 0x18) >> 1 <= uVar12) {
            func_0x000102f031cc(1 < *(ulong *)(apuStack_70[0] + 0x18),uVar12 + 1,1);
          }
          *(ulong *)(apuStack_70[0] + 0x10) = uVar12 + 1;
          *(undefined **)(apuStack_70[0] + uVar12 * 8 + 0x20) = puStack_78;
          uVar12 = uVar17;
          puVar26 = apuStack_70[0];
          if (uVar17 == uVar20) goto LAB_102fd5a58;
        }
        func_0x000107c61170();
        uVar12 = uVar12 + 1;
      } while (uVar17 != uVar20);
    }
  }
LAB_102fd5a58:
  uVar16 = *(ulong *)(uStack_90 + _DAT_113076890);
  if (uVar16 == 0) {
    puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar4 = uVar16 & 0xffffffffffffff8;
    if (uVar16 >> 0x3e == 0) {
      uVar20 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      uVar20 = uVar4;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar20 = uVar16;
      }
      func_0x000107c60480();
    }
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_80 = puVar26;
    if (uVar20 != 0) {
      uVar12 = 0;
      do {
        while( true ) {
          if ((uVar16 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar4 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102fd5f14);
              (*pcVar3)();
            }
            uVar5 = *(ulong *)(uVar16 + uVar12 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar5 = uVar12;
            func_0x000102f02c38(uVar12,uVar16);
          }
          if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102fd5f10);
            (*pcVar3)();
          }
          uVar17 = uVar12 + 1;
          if (*(ulong *)(uVar5 + _DAT_113076ae0) < 0xb &&
              (1L << (*(ulong *)(uVar5 + _DAT_113076ae0) & 0x3f) & 0x4c0U) != 0) break;
          puVar26 = puVar6;
          puStack_78 = (undefined *)uVar5;
          func_0x000107c61558();
          apuStack_70[0] = puVar6;
          if (((ulong)puVar26 & 1) == 0) {
            func_0x000102f031cc(0,*(long *)(puVar6 + 0x10) + 1,1);
          }
          uVar5 = *(ulong *)(apuStack_70[0] + 0x10);
          uVar12 = uVar5 + 1;
          if (*(ulong *)(apuStack_70[0] + 0x18) >> 1 <= uVar5) {
            uStack_a8 = uVar12;
            func_0x000102f031cc(1 < *(ulong *)(apuStack_70[0] + 0x18),uVar12,1);
            uVar12 = uStack_a8;
          }
          *(ulong *)(apuStack_70[0] + 0x10) = uVar12;
          *(undefined **)(apuStack_70[0] + uVar5 * 8 + 0x20) = puStack_78;
          uVar12 = uVar17;
          puVar6 = apuStack_70[0];
          if (uVar17 == uVar20) goto joined_r0x000102fd5bd0;
        }
        func_0x000107c61170();
        uVar12 = uVar12 + 1;
      } while (uVar17 != uVar20);
    }
joined_r0x000102fd5bd0:
    if (uVar16 >> 0x3e == 0) {
      uVar20 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      uVar20 = uVar4;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar20 = uVar16;
      }
      func_0x000107c60480();
    }
    puVar26 = puStack_80;
    puStack_b8 = puVar6;
    if (uVar20 == 0) {
      puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar12 = 0;
      do {
        while( true ) {
          if ((uVar16 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar4 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102fd5f1c);
              (*pcVar3)();
            }
            uVar5 = *(ulong *)(uVar16 + uVar12 * 8 + 0x20);
            func_0x000107c61174();
            puVar6 = puStack_78;
          }
          else {
            uVar5 = uVar12;
            func_0x000102f02c38(uVar12,uVar16);
            puVar6 = puStack_78;
          }
          puStack_78 = puVar6;
          if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102fd5f18);
            (*pcVar3)();
          }
          uVar17 = uVar12 + 1;
          if (10 < *(ulong *)(uVar5 + _DAT_113076ae0) ||
              (1L << (*(ulong *)(uVar5 + _DAT_113076ae0) & 0x3f) & 0x4c0U) == 0) break;
          puVar26 = puVar6;
          uStack_a8 = uVar5;
          func_0x000107c61558();
          apuStack_70[0] = puVar6;
          if (((ulong)puVar26 & 1) == 0) {
            func_0x000102f031cc(0,*(long *)(puVar6 + 0x10) + 1,1);
          }
          uVar12 = *(ulong *)(apuStack_70[0] + 0x10);
          if (*(ulong *)(apuStack_70[0] + 0x18) >> 1 <= uVar12) {
            func_0x000102f031cc(1 < *(ulong *)(apuStack_70[0] + 0x18),uVar12 + 1,1);
          }
          *(ulong *)(apuStack_70[0] + 0x10) = uVar12 + 1;
          *(ulong *)(apuStack_70[0] + uVar12 * 8 + 0x20) = uStack_a8;
          uVar12 = uVar17;
          puVar26 = puStack_80;
          puStack_78 = apuStack_70[0];
          if (uVar17 == uVar20) goto LAB_102fd5d30;
        }
        func_0x000107c61170();
        uVar12 = uVar12 + 1;
      } while (uVar17 != uVar20);
    }
  }
LAB_102fd5d30:
  puVar6 = puStack_88;
  uVar4 = uStack_90;
  uVar16 = uStack_a0;
  lVar8 = lStack_b0;
  lVar24 = *(long *)(uStack_90 + _DAT_1138135d8);
  if (*(char *)(uStack_90 + _DAT_1138135d0) == '\x01') {
    if (lVar24 == 0) {
      uVar18 = 0;
      uVar27 = 0;
      lVar24 = 0;
      uVar10 = 1;
      uVar11 = uStack_94;
      goto LAB_102fd5eb4;
    }
    uVar10 = (uint)(*(long *)(lVar24 + 0x10) == 0);
    if ((uStack_94 & 1) != 0) {
LAB_102fd5d90:
      lVar13 = *(long *)(lVar24 + 0x10);
      uVar11 = uVar10;
      if (lVar13 != 0) {
        uVar11 = 1;
      }
      func_0x000107c61434(lVar24);
      if (lVar13 == 0) {
        uVar27 = 0;
        uVar18 = 0;
      }
      else {
        uVar27 = *(undefined8 *)(uVar4 + _DAT_1138135e0);
        uVar18 = *(undefined8 *)(uVar4 + _DAT_1138135c0);
        func_0x000107c61434(uVar18);
        func_0x000107c61434(uVar27);
        uVar11 = 1;
      }
      goto LAB_102fd5eb4;
    }
LAB_102fd5dfc:
    uVar29 = (uint)(*(long *)(lVar24 + 0x10) != 0);
    if ((*(byte *)(uStack_90 + _DAT_113076868) & 1) == 0) {
      func_0x000107c61434(lVar24);
      uVar18 = 0;
      uVar27 = 0;
      uVar11 = 0;
      lVar13 = 0;
      goto joined_r0x000102fd5ee8;
    }
    func_0x000107c61434(lVar24);
    uVar11 = 0;
    uVar18 = 0;
    uVar14 = 1;
    uVar27 = 0;
    lVar13 = 0;
joined_r0x000102fd5f04:
    if ((long)puVar26 < 0) goto LAB_102fd6078;
LAB_102fd5f84:
    if (((ulong)puVar26 >> 0x3e & 1) != 0) goto LAB_102fd6078;
    puVar15 = *(undefined **)(((ulong)puVar26 & 0xffffffffffffff8) + 0x10);
    if (puVar15 == (undefined *)0x0) goto LAB_102fd5f94;
LAB_102fd60cc:
    lVar22 = 0;
    uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar29);
    uStack_104 = uVar10;
    uStack_f8 = uVar27;
    puStack_f0 = puVar15;
    uStack_e8 = uVar14;
    uStack_e4 = uVar11;
    lStack_e0 = lVar13;
    uStack_d8 = uVar18;
    lStack_d0 = lVar24;
    puStack_80 = puVar26;
    if ((lVar8 != 0) && (uVar16 != 0)) {
      func_0x000107c61174();
      lVar22 = lVar8;
      FUN_102fd69b8();
      func_0x000107c61170(lVar8);
    }
    lVar24 = lStack_c0;
    lVar8 = _DAT_1138135b8;
    uVar19 = *(undefined8 *)(uVar4 + _DAT_113076870);
    uVar25 = *(undefined8 *)(uVar4 + _DAT_113076878);
    uVar21 = *(undefined8 *)(uVar4 + _DAT_113076898);
    func_0x0001009f0578(uVar4 + _DAT_1138135b8,lStack_c0);
    uVar1 = *(undefined1 *)(uVar4 + _DAT_1138135c8);
    uVar2 = *(undefined1 *)(uVar4 + _DAT_1138135e8);
    uVar27 = 0;
    func_0x0001043f3574(0);
    func_0x000107c610f8();
    uVar18 = uVar21;
    func_0x000107c61174();
    uStack_100 = uVar18;
    func_0x000107c61174(uVar19);
    lVar13 = lVar22;
    func_0x000107c61174();
    lStack_b0 = lVar13;
    *(undefined1 *)(lVar9 + -0x10) = uVar2;
    *(undefined8 *)(lVar9 + -0x18) = uStack_f8;
    *(long *)(lVar9 + -0x20) = lStack_e0;
    *(char *)(lVar9 + -0x27) = (char)uStack_e4;
    *(undefined1 *)(lVar9 + -0x28) = uVar1;
    *(undefined8 *)(lVar9 + -0x30) = uStack_d8;
    uVar4 = (ulong)uStack_e8;
    func_0x0001043f13a8(uVar4,uVar19,uVar25,lVar22,puStack_88,puStack_b8,uVar21,lVar24);
    uVar16 = uStack_90;
    puVar28 = puStack_c8;
    lVar24 = lStack_d0;
    uVar10 = uStack_104;
    if ((uStack_a8 & 1) == 0) {
      if (puStack_f0 == (undefined *)0x0) {
        if (((uStack_94 | uStack_104 ^ 0xffffffff) & 1) != 0) {
          func_0x000107c6142c(puStack_78);
          func_0x000107c6142c(lVar24);
          func_0x000107c61170(lStack_b0);
          func_0x000107c6142c(puStack_80);
          func_0x000107c6142c(uStack_a0);
          goto LAB_102fd62d4;
        }
        func_0x000107c6142c(puStack_80);
        puStack_80 = (undefined *)0x0;
      }
      puVar28 = puStack_c8;
      func_0x0001009f0578(uVar16 + lVar8,puStack_c8);
      uVar19 = 0;
      uVar18 = 0;
      bVar23 = ((byte)uStack_94 ^ 1) & (byte)uVar10;
    }
    else {
      if (puStack_f0 == (undefined *)0x0) {
        func_0x000107c6142c(puStack_80);
        puStack_80 = (undefined *)0x0;
      }
      uVar16 = uStack_90;
      func_0x0001009f0578(uStack_90 + lVar8,puVar28);
      uVar19 = *(undefined8 *)(uVar16 + _DAT_1138135c0);
      uVar18 = *(undefined8 *)(uVar16 + _DAT_1138135e0);
      func_0x000107c61434(uVar18);
      func_0x000107c61434(uVar19);
      bVar23 = 1;
    }
    func_0x000107c610f8(uVar27);
    func_0x000107c61174(uStack_100);
    *(undefined1 *)(lVar9 + -0x10) = 0;
    *(long *)(lVar9 + -0x20) = lVar24;
    *(undefined8 *)(lVar9 + -0x18) = uVar18;
    *(byte *)(lVar9 + -0x27) = bVar23;
    *(undefined1 *)(lVar9 + -0x28) = uVar1;
    *(undefined8 *)(lVar9 + -0x30) = uVar19;
    uVar20 = 0;
    func_0x0001043f13a8(0,0,0,0,puStack_80,puStack_78,uVar21,puVar28);
    func_0x000107c61170(lStack_b0);
    func_0x000107c6142c(uStack_a0);
    uVar16 = uVar4;
    uVar4 = uVar20;
  }
  else {
    if (uStack_94 == 0) {
      uVar10 = 0;
      if (lVar24 != 0) goto LAB_102fd5dfc;
    }
    else {
      uVar10 = 0;
      if (lVar24 != 0) goto LAB_102fd5d90;
    }
    uVar11 = 0;
    uVar18 = 0;
    uVar27 = 0;
    lVar24 = 0;
    uVar10 = 0;
LAB_102fd5eb4:
    lVar13 = lVar24;
    if (*(char *)(uVar4 + _DAT_113076868) == '\x01') {
      uVar29 = 0;
      uVar14 = 1;
      lVar24 = 0;
    }
    else {
      uVar29 = 0;
      lVar24 = 0;
joined_r0x000102fd5ee8:
      if (puVar6 != (undefined *)0x0) {
        if ((ulong)puVar6 >> 0x3e == 0) {
          puVar15 = *(undefined **)((undefined *)((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar15 = puVar6;
          if (-1 < (long)puVar6) {
            puVar15 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
          }
          uStack_a8._4_4_ = (undefined4)(uStack_a8 >> 0x20);
          uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar29);
          func_0x000107c60480();
          uVar29 = (uint)uStack_a8;
          lVar8 = lStack_b0;
        }
        if (puVar15 != (undefined *)0x0) {
          uVar14 = 0;
          goto joined_r0x000102fd5f04;
        }
      }
      if (uVar11 == 0) {
        func_0x000107c6142c(puVar26);
        func_0x000107c6142c(puStack_78);
        func_0x000107c6142c(puStack_b8);
        func_0x000107c6142c(lVar24);
        func_0x000107c6142c(uVar18);
        func_0x000107c6142c(uVar27);
        func_0x000107c6142c(lVar13);
        func_0x000107c6142c(puVar6);
        func_0x000107c6142c(uVar16);
        func_0x000107c61174(uVar4);
        uVar16 = 0;
        goto LAB_102fd6374;
      }
      uVar14 = 0;
      uVar11 = 1;
    }
    if (-1 < (long)puVar26) goto LAB_102fd5f84;
LAB_102fd6078:
    uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar29);
    puVar15 = (undefined *)((ulong)puVar26 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar26) {
      puVar15 = puVar26;
    }
    puStack_88 = puVar6;
    func_0x000107c60480();
    puVar6 = puStack_88;
    lVar8 = lStack_b0;
    uVar29 = (uint)uStack_a8;
    if (puVar15 != (undefined *)0x0) goto LAB_102fd60cc;
LAB_102fd5f94:
    if ((ulong)puStack_78 >> 0x3e == 0) {
      puVar7 = *(undefined **)(((ulong)puStack_78 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar7 = (undefined *)((ulong)puStack_78 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puStack_78) {
        puVar7 = puStack_78;
      }
      uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar29);
      uStack_a0 = uVar16;
      puStack_88 = puVar6;
      func_0x000107c60480();
      uVar16 = uStack_a0;
      puVar6 = puStack_88;
      lVar8 = lStack_b0;
      uVar29 = (uint)uStack_a8;
    }
    if ((puVar7 == (undefined *)0x0 & uStack_94) != 1) goto LAB_102fd60cc;
    func_0x000107c6142c(puVar26);
    func_0x000107c6142c(puStack_b8);
    func_0x000107c6142c(puStack_78);
    func_0x000107c6142c(lVar24);
    func_0x000107c6142c(uVar18);
    func_0x000107c6142c(uVar27);
    func_0x000107c6142c(lVar13);
    func_0x000107c6142c(puVar6);
    func_0x000107c6142c(uVar16);
    func_0x000107c61174(uVar4);
LAB_102fd62d4:
    uVar16 = uVar4;
    uVar4 = 0;
  }
LAB_102fd6374:
  auVar30._8_8_ = uVar4;
  auVar30._0_8_ = uVar16;
  return auVar30;
}



/* Entry: 102fd63f4; end: 102fd64d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102fd63f4(ulong param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x000102fd5540();
  if ((uVar2 & 1) == 0) {
    func_0x000103bdb2e4(0);
    func_0x000107c610f8();
    uVar2 = 0;
    param_1 = 0;
    param_2 = 0;
  }
  else {
    FUN_102fd5688();
    uVar2 = (ulong)(param_1 != 0);
    func_0x000103bdb2e4(0);
    func_0x000107c610f8();
  }
  func_0x000103bdb09c(uVar2,param_1,param_2);
  if (*(char *)(uVar2 + _DAT_112ff5860) == '\x01') {
    lVar1 = *(long *)(uVar2 + _DAT_112ff5870);
    func_0x000107c61174(lVar1);
    func_0x000107c61170(uVar2);
    if (lVar1 == 0) {
      return 1;
    }
  }
  func_0x000107c61170();
  return 0;
}



/* Entry: 102fd64d4; end: 102fd651f;  */

void FUN_102fd64d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102fd6520; end: 102fd6647;  */

uint FUN_102fd6520(uint param_1)

{
  func_0x000102fd54b4();
  return param_1 & 1;
}



/* Entry: 102fd6648; end: 102fd66d3;  */

void FUN_102fd6648(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x000102fd5540();
  if ((uVar2 & 1) == 0) {
    func_0x000103bdb2e4(0);
    func_0x000107c610f8();
    bVar1 = false;
    param_1 = 0;
    param_2 = 0;
  }
  else {
    FUN_102fd5688(param_1);
    bVar1 = param_1 != 0;
    func_0x000103bdb2e4(0);
    func_0x000107c610f8();
  }
  func_0x000103bdb09c(bVar1,param_1,param_2);
  return;
}



/* Entry: 102fd66d4; end: 102fd66f7;  */

uint FUN_102fd66d4(uint param_1)

{
  FUN_102fd63f4();
  return param_1 & 1;
}



/* Entry: 102fd66f8; end: 102fd676f;  */

void FUN_102fd66f8(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102fd6bc0(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102fd6770; end: 102fd67b7;  */

undefined * FUN_102fd6770(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = (undefined *)0x112d670c8;
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_102fd66f8(0x112d670c8,&PTR_PTR_1126d7ab8,0x112ea4790,&UNK_10dab79a0);
    func_0x000107c613fc();
    puVar2 = puVar1;
    func_0x000107c610a4();
    puVar3 = puVar2 + -0x19;
    if (0x1f < (long)puVar2) {
      puVar3 = puVar2 + -0x20;
    }
    *(long *)(puVar1 + 0x10) = param_1;
    *(ulong *)(puVar1 + 0x18) = ((long)puVar3 >> 3) << 1 | 1;
    puVar3 = puVar1;
  }
  return puVar3;
}



/* Entry: 102fd67b8; end: 102fd6847;  */

undefined *
FUN_102fd67b8(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_102fd66f8(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 102fd6848; end: 102fd6863;  */

void FUN_102fd6848(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102fd6864();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102fd6864; end: 102fd69b7;  */

undefined * FUN_102fd6864(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102fd69b8);
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
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112d670c8;
    FUN_102fd66f8(0x112d670c8,&PTR_PTR_1126d7ab8,0x112ea4790,&UNK_10dab79a0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_102fd6bc0(0,0x112d670c8,&PTR_PTR_1126d7ab8);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102fd69b8; end: 102fd6b8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fd69b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113076980);
  uVar6 = ((undefined8 *)(param_1 + _DAT_113076980))[1];
  uVar2 = *(undefined8 *)(param_1 + _DAT_113076988);
  uVar7 = ((undefined8 *)(param_1 + _DAT_113076988))[1];
  uVar3 = *(undefined8 *)(param_1 + _DAT_113076990);
  uVar8 = ((undefined8 *)(param_1 + _DAT_113076990))[1];
  uVar12 = *(undefined8 *)(param_1 + _DAT_1130769a8);
  uVar4 = *(undefined8 *)(param_1 + _DAT_113076998);
  uVar9 = ((undefined8 *)(param_1 + _DAT_113076998))[1];
  uVar11 = *(undefined1 *)(param_1 + _DAT_1130769b8);
  uVar13 = *(undefined8 *)(param_1 + _DAT_1130769c0);
  uVar15 = *(undefined8 *)(param_1 + _DAT_1130769c8);
  uVar16 = *(undefined8 *)(param_1 + _DAT_1130769d8);
  uVar5 = *(undefined8 *)(param_1 + _DAT_1130769a0);
  uVar10 = ((undefined8 *)(param_1 + _DAT_1130769a0))[1];
  uVar14 = *(undefined8 *)(param_1 + _DAT_1130769e0);
  func_0x0001043f6328();
  func_0x000107c610f8();
  func_0x000107c61174(uVar14);
  func_0x000107c61434(param_2);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar9);
  func_0x000107c61434(uVar10);
  func_0x000107c61434(uVar12);
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar15);
  func_0x000107c61434(uVar16);
  func_0x0001043f3a50(uVar1,uVar6,uVar2,uVar7,uVar3,uVar8,uVar4,uVar9,uVar5,uVar10,uVar12,param_2,
                      uVar11);
  return;
}



/* Entry: 102fd6b90; end: 102fd6bbf;  */

void FUN_102fd6b90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f118170);
  func_0x000107c4c270();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 102fd6bc0; end: 102fd6bff;  */

void FUN_102fd6bc0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102fd6c00; end: 102fd6e33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fd6c00(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long unaff_x20;
  undefined1 *puVar6;
  undefined1 auStack_70 [16];
  
  puVar4 = auStack_70;
  func_0x000100087bd4(FUN_102fd792c,puVar4,PTR___sytN_11034f1b0 + 8);
  lVar5 = *(long *)(unaff_x20 + _DAT_112f2f9e0);
  lVar2 = lVar5;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c4c964();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar3 == 0) goto LAB_102fd6cd0;
    lVar2 = lVar3;
    func_0x000107c5ee30(lVar3);
    puVar6 = puVar4;
    func_0x000107c61170(lVar3);
    func_0x000107c4c930();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar3 = lVar5;
      func_0x000107c4e168();
LAB_102fd6d74:
      func_0x000107c61180();
      func_0x000107c615e8(lVar5);
      if (lVar3 != 0) {
        lVar5 = lVar3;
        func_0x000107c5ee30(lVar3);
        func_0x000107c61170(lVar3);
        goto LAB_102fd6dac;
      }
    }
LAB_102fd6da4:
    lVar5 = 0;
    puVar6 = (undefined1 *)0xf000000000000000;
LAB_102fd6dac:
    func_0x00010006c00c(lVar2,puVar4);
    FUN_102fd70ec(lVar2,puVar4,lVar5,puVar6);
    func_0x00010006c090(lVar2,puVar4);
    func_0x0001000b44c0(lVar5,puVar6);
    func_0x00010006c090(lVar2,puVar4);
    return;
  }
LAB_102fd6cd0:
  lVar2 = lVar5;
  func_0x000107c42a00();
  if (lVar2 == -7) goto LAB_102fd6e04;
  lVar2 = lVar5;
  func_0x000107c5d3e0();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102fd6e34);
    (*pcVar1)();
  }
  func_0x000107c3d740();
  func_0x000107c61170(lVar2);
  lVar2 = lVar5;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c4c964();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x000107c5ee30(lVar3);
      puVar6 = puVar4;
      func_0x000107c61170(lVar3);
      func_0x000107c4c930();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar3 = lVar5;
        func_0x000107c4e168();
        goto LAB_102fd6d74;
      }
      goto LAB_102fd6da4;
    }
  }
  func_0x000107c42a00();
  if (lVar5 != -7) {
    return;
  }
LAB_102fd6e04:
  FUN_102fd70ec(0,0x2000000000000000,0,0);
  return;
}



/* Entry: 102fd6e34; end: 102fd6e47;  */

bool FUN_102fd6e34(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102fd6e48; end: 102fd6ef3;  */

void FUN_102fd6e48(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102fd6ef4; end: 102fd6f67;  */

void FUN_102fd6ef4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102fd6f68; end: 102fd707b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fd6f68(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  code *pcStack_40;
  undefined8 uStack_38;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f2f9e0);
  func_0x000107c5d3e0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4ff64();
    func_0x000107c61170(lVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f2f9e8);
    func_0x000107c6157c(uVar4);
    uVar3 = 0x112f2fa20;
    func_0x0001000285a8(0x112f2fa20,&UNK_10db747c0);
    func_0x000100087bd4(&pcStack_40,FUN_102fd787c,&uStack_80,uVar3);
    func_0x000107c61574(uVar4);
    if (pcStack_40 != (code *)0x0) {
      uStack_78 = 0x2000000000000000;
      uStack_80 = 2;
      func_0x000107c6157c(uStack_38);
      (*pcStack_40)(&uStack_80);
      func_0x000100d2f694(pcStack_40,uStack_38);
      func_0x000100d2f694(pcStack_40,uStack_38);
    }
    func_0x000107c61154(&stack0xffffffffffffffa8,PTR_s_dealloc_112525b20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fd707c);
  (*pcVar1)();
}



/* Entry: 102fd707c; end: 102fd709f; -[_TtC33SpotlightAutoShareServiceProvider26SpotlightMediaBytesAwaiter dealloc] */

void FUN_102fd707c(void)

{
  func_0x000107c61174();
  FUN_102fd6f68();
  return;
}



/* Entry: 102fd70a0; end: 102fd70eb; -[_TtC33SpotlightAutoShareServiceProvider26SpotlightMediaBytesAwaiter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102fd70cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fd70d0) */
/* WARNING: Removing unreachable block (ram,0x000100d2f694) */
/* WARNING: Removing unreachable block (ram,0x000100d2f6a0) */
/* WARNING: Removing unreachable block (ram,0x000100d2f698) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fd70a0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f2f9e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f2f9e8));
  return;
}



/* Entry: 102fd70ec; end: 102fd71df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fd70ec(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  code *pcStack_50;
  undefined8 uStack_48;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f2f9e0);
  func_0x000107c5d3e0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4ff64();
    func_0x000107c61170(lVar2);
    uVar3 = 0x112f2fa20;
    func_0x0001000285a8(0x112f2fa20,&UNK_10db747c0);
    func_0x000100087bd4(&pcStack_50,FUN_102fd77f4,&uStack_80,uVar3);
    if (pcStack_50 != (code *)0x0) {
      uStack_80 = param_1;
      uStack_78 = param_2;
      func_0x000107c6157c(uStack_48);
      (*pcStack_50)(&uStack_80);
      func_0x000100d2f694(pcStack_50,uStack_48);
      func_0x000100d2f694(pcStack_50,uStack_48);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fd71e0);
  (*pcVar1)();
}



/* Entry: 102fd71e0; end: 102fd722b; -[_TtC33SpotlightAutoShareServiceProvider26SpotlightMediaBytesAwaiter init] */

void FUN_102fd71e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightAutoShareServiceProvider.SpotlightMediaBytesAwaiter",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fd720c);
  (*pcVar1)();
}



/* Entry: 102fd722c; end: 102fd7363;  */

/* WARNING: Possible PIC construction at 0x000102fd7334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fd7338) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fd722c(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  code *pcStack_50;
  undefined8 uStack_48;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102fd7364);
    (*pcVar1)();
  }
  uVar2 = param_1;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (uVar2 == 0) {
code_r0x000102fd70ec:
    lVar3 = *(long *)(unaff_x20 + _DAT_112f2f9e0);
    func_0x000107c5d3e0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c4ff64();
      func_0x000107c61170(lVar3);
      uVar4 = 0x112f2fa20;
      func_0x0001000285a8(0x112f2fa20,&UNK_10db747c0);
      func_0x000100087bd4(&pcStack_50,FUN_102fd77f4,&uStack_80,uVar4);
      if (pcStack_50 != (code *)0x0) {
        uStack_80 = 1;
        uStack_78 = 0x2000000000000000;
        uStack_70 = 0;
        uStack_68 = 0;
        func_0x000107c6157c(uStack_48);
        (*pcStack_50)(&uStack_80);
        func_0x000100d2f694(pcStack_50,uStack_48);
        func_0x000100d2f694(pcStack_50,uStack_48);
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102fd71e0);
    (*pcVar1)();
  }
  uVar5 = uVar2;
  func_0x000107c4c964();
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
  if (uVar5 == 0) goto code_r0x000102fd70ec;
  uVar2 = uVar5;
  func_0x000107c5ee30();
  uVar8 = param_2;
  func_0x000107c61170(uVar5);
  func_0x000107c4c930();
  func_0x000107c61180();
  if (param_1 != 0) {
    uVar5 = param_1;
    func_0x000107c4e168();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
    if (uVar5 != 0) {
      uVar7 = uVar5;
      func_0x000107c5ee30(uVar5);
      func_0x000107c61170(uVar5);
      goto code_r0x00010006c090;
    }
  }
  uVar7 = 0;
  uVar8 = 0xf000000000000000;
code_r0x00010006c090:
  func_0x00010006c00c(uVar2,param_2);
  FUN_102fd70ec(uVar2,param_2,uVar7,uVar8);
  uVar6 = (uint)(param_2 >> 0x3e);
  if (uVar6 == 1) {
    uVar2 = param_2 & 0x3fffffffffffffff;
  }
  else {
    if (uVar6 != 2) {
      return;
    }
    uStack_48 = 0x102fd7338;
    pcStack_50 = (code *)&stack0xfffffffffffffff0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102fd7364; end: 102fd736f; -[_TtC33SpotlightAutoShareServiceProvider26SpotlightMediaBytesAwaiter ephemeralMediaVideoProcessingDidSucceedForMedia:] */

void FUN_102fd7364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102fd722c(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102fd7370; end: 102fd73a7; -[_TtC33SpotlightAutoShareServiceProvider26SpotlightMediaBytesAwaiter ephemeralMediaVideoProcessingDidFailForMedia:] */

void FUN_102fd7370(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102fd70ec(0,0x2000000000000000,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102fd73a8; end: 102fd74cf;  */

/* WARNING: Possible PIC construction at 0x000102fd74a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fd74a4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102fd73a8(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102fd74d0);
    (*pcVar1)();
  }
  uVar2 = param_1;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (uVar2 == 0) {
    return;
  }
  uVar3 = uVar2;
  func_0x000107c4c964();
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
  if (uVar3 == 0) {
    return;
  }
  uVar2 = uVar3;
  func_0x000107c5ee30();
  uVar6 = param_2;
  func_0x000107c61170(uVar3);
  func_0x000107c4c930();
  func_0x000107c61180();
  if (param_1 != 0) {
    uVar3 = param_1;
    func_0x000107c4e168();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
    if (uVar3 != 0) {
      uVar5 = uVar3;
      func_0x000107c5ee30(uVar3);
      func_0x000107c61170(uVar3);
      goto code_r0x00010006c090;
    }
  }
  uVar5 = 0;
  uVar6 = 0xf000000000000000;
code_r0x00010006c090:
  func_0x00010006c00c(uVar2,param_2);
  FUN_102fd70ec(uVar2,param_2,uVar5,uVar6);
  uVar4 = (uint)(param_2 >> 0x3e);
  if (uVar4 == 1) {
    uVar2 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar4 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102fd74d0; end: 102fd74db; -[_TtC33SpotlightAutoShareServiceProvider26SpotlightMediaBytesAwaiter ephemeralMediaImageProcessingDidCompleteForMedia:] */

void FUN_102fd74d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102fd73a8(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102fd74dc; end: 102fd752f;  */

void FUN_102fd74dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*param_4)(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102fd7530; end: 102fd7533; -[_TtC33SpotlightAutoShareServiceProvider26SpotlightMediaBytesAwaiter ephemeralMediaUploadDidStartForMedia:] */

void FUN_102fd7530(void)

{
  return;
}



/* Entry: 102fd7534; end: 102fd7537; -[_TtC33SpotlightAutoShareServiceProvider26SpotlightMediaBytesAwaiter ephemeralMediaUploadDidSucceedForMedia:] */

void FUN_102fd7534(void)

{
  return;
}



/* Entry: 102fd7538; end: 102fd753b; -[_TtC33SpotlightAutoShareServiceProvider26SpotlightMediaBytesAwaiter ephemeralMediaUploadDidFailForMedia:] */

void FUN_102fd7538(void)

{
  return;
}



/* Entry: 102fd753c; end: 102fd7567;  */

long FUN_102fd753c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102fd7568; end: 102fd7597;  */

void FUN_102fd7568(undefined8 *param_1)

{
  FUN_102fd7598(*param_1,param_1[1],param_1[2],param_1[3],&SUB_10006c090,&SUB_1000b44c0);
  return;
}



/* Entry: 102fd7598; end: 102fd75db;  */

void FUN_102fd7598(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,code *UNRECOVERED_JUMPTABLE)

{
  if ((param_2 >> 0x3d & 1) == 0) {
    (*param_5)();
                    /* WARNING: Could not recover jumptable at 0x000102fd75d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_3,param_4);
    return;
  }
  return;
}



/* Entry: 102fd75dc; end: 102fd76bf;  */

undefined8 * FUN_102fd75dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  FUN_102fd7598(uVar1,uVar3,uVar2,uVar4,&SUB_10006c00c,&SUB_100de78a0);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  return param_1;
}



/* Entry: 102fd76c0; end: 102fd770b;  */

undefined8 * FUN_102fd76c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  FUN_102fd7598(uVar3,uVar1,uVar2,uVar4,&SUB_10006c090,&SUB_1000b44c0);
  return param_1;
}



/* Entry: 102fd770c; end: 102fd77f3;  */

int FUN_102fd770c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((2 < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 3;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = ((uVar1 >> 0x1c & 1) << 1 | uVar1 >> 0x1d & 1) ^ 3;
  if (1 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102fd77f4; end: 102fd7877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fd77f4(undefined8 *param_1)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  
  plVar1 = (long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f2f9f0);
  lVar6 = plVar1[1];
  lVar5 = *plVar1;
  lVar4 = *plVar1;
  *plVar1 = 0;
  plVar1[1] = 0;
  if (lVar4 == 0) {
    pcVar3 = (code *)0x0;
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_1105f8930;
    func_0x000107c613fc(&UNK_1105f8930,0x20,7);
    *(long *)(puVar2 + 0x18) = lVar6;
    *(long *)(puVar2 + 0x10) = lVar5;
    pcVar3 = FUN_102fd7878;
  }
  *param_1 = pcVar3;
  param_1[1] = puVar2;
  return;
}



/* Entry: 102fd7878; end: 102fd787b;  */

void FUN_102fd7878(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],param_1[2],param_1[3]);
  return;
}



/* Entry: 102fd787c; end: 102fd792b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fd787c(undefined8 *param_1)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  
  plVar1 = (long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f2f9f0);
  lVar6 = plVar1[1];
  lVar5 = *plVar1;
  lVar4 = *plVar1;
  *plVar1 = 0;
  plVar1[1] = 0;
  if (lVar4 == 0) {
    pcVar3 = (code *)0x0;
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_1105f8958;
    func_0x000107c613fc(&UNK_1105f8958,0x20,7);
    *(long *)(puVar2 + 0x18) = lVar6;
    *(long *)(puVar2 + 0x10) = lVar5;
    pcVar3 = FUN_102fd7b20;
  }
  *param_1 = pcVar3;
  param_1[1] = puVar2;
  return;
}



/* Entry: 102fd792c; end: 102fd7977;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fd792c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f2f9f0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar1[1] = *(undefined8 *)(unaff_x20 + 0x20);
  *puVar1 = uVar5;
  func_0x000100d2f694(uVar2,uVar3);
  func_0x000107c6157c(uVar4);
  return;
}



/* Entry: 102fd7978; end: 102fd7adf;  */

int FUN_102fd7978(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102fd79f4;
        goto LAB_102fd79d8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102fd79d8:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_102fd79f4:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102fd7ae0; end: 102fd7b1f;  */

void FUN_102fd7ae0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2fa28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db74894;
  func_0x000107c61520(&UNK_10db74894,&UNK_1105f89f0);
  puRam0000000112f2fa28 = puVar1;
  return;
}



/* Entry: 102fd7b20; end: 102fd7b37;  */

void FUN_102fd7b20(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],param_1[2],param_1[3]);
  return;
}



/* Entry: 102fd7b38; end: 102fd7c0f;  */

void FUN_102fd7b38(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102fd7c10; end: 102fd7c2f;  */

void FUN_102fd7c10(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 102fd7c30; end: 102fd7c6f;  */

void FUN_102fd7c30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2fa30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db748c0;
  func_0x000107c61520(&UNK_10db748c0,&UNK_1105f8b28);
  puRam0000000112f2fa30 = puVar1;
  return;
}



/* Entry: 102fd7c70; end: 102fd7c7f;  */

undefined1  [16] FUN_102fd7c70(void)

{
  return ZEXT816(0x1105f8b28);
}



/* Entry: 102fd7c80; end: 102fd7c8f; -[_TtC41SCSpotlightSharingLensTranscodingServices41SCSpotlightSharingLensTranscodingServices spotlightSharingLensTranscoder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fd7c80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f2fa38));
  return;
}



/* Entry: 102fd7c90; end: 102fd7cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fd7c90(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f2fa38) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102fd7cdc; end: 102fd7d3b; -[_TtC41SCSpotlightSharingLensTranscodingServices41SCSpotlightSharingLensTranscodingServices init] */

void FUN_102fd7cdc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpotlightSharingLensTranscodingServices.SCSpotlightSharingLensTranscodingServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fd7d08);
  (*pcVar1)();
}



/* Entry: 102fd7d3c; end: 102fd7d4b; -[_TtC41SCSpotlightSharingLensTranscodingServices41SCSpotlightSharingLensTranscodingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fd7d3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f2fa38));
  return;
}



/* Entry: 102fd7d4c; end: 102fd7e2f; -[_TtC33SCOffPlatformShareFeatureProvider36SCOffPlatformShareClosureServiceImpl handleShareDestination:completion:] */

/* WARNING: Possible PIC construction at 0x000102fd7e00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fd7e04) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fd7d4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  func_0x000107c60bc4();
  puVar4 = &UNK_1105f8c48;
  func_0x000107c613fc(&UNK_1105f8c48,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_4;
  lVar5 = *(long *)(param_1 + _DAT_112f2fa80);
  if (lVar5 != 0) {
    puVar1 = (undefined8 *)(param_1 + _DAT_112f2fa90);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = FUN_102fd7fa0;
    puVar1[1] = puVar4;
    func_0x000107c61174(param_1);
    func_0x000107c615f0(lVar5);
    func_0x000107c6157c(puVar4);
    func_0x00010058d43c(uVar2,uVar3);
    func_0x000107c4464c(lVar5);
    func_0x000107c615e8(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 102fd7e30; end: 102fd7e8b; -[_TtC33SCOffPlatformShareFeatureProvider36SCOffPlatformShareClosureServiceImpl init] */

void FUN_102fd7e30(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCOffPlatformShareFeatureProvider.SCOffPlatformShareClosureServiceImpl",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fd7e5c);
  (*pcVar1)();
}



/* Entry: 102fd7e8c; end: 102fd7f07; -[_TtC33SCOffPlatformShareFeatureProvider36SCOffPlatformShareClosureServiceImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fd7e8c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2fa68));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2fa70));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2fa78));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f2fa80));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f2fa88));
  if (*(long *)(param_1 + _DAT_112f2fa90) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112f2fa90))[1]);
    return;
  }
  return;
}



/* Entry: 102fd7f08; end: 102fd7f27;  */

void FUN_102fd7f08(void)

{
  func_0x000107c61168(&PTR_PTR_1128ae218);
  return;
}



/* Entry: 102fd7f28; end: 102fd7f2f; -[_TtC33SCOffPlatformShareFeatureProvider36SCOffPlatformShareClosureServiceImpl handleShareDestination:standardExternalContentShareScope:] */

undefined8 FUN_102fd7f28(void)

{
  return 0;
}



/* Entry: 102fd7f30; end: 102fd7f9f; -[_TtC33SCOffPlatformShareFeatureProvider36SCOffPlatformShareClosureServiceImpl shareSheetDismissedWithShareDestination:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fd7f30(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112f2fa90);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f2fa90))[1];
  func_0x000107c61174();
  func_0x000100b64c10(pcVar1,uVar2);
  (*pcVar1)();
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102fd7fa0; end: 102fd7fab;  */

void FUN_102fd7fa0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102fd7fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 102fd7fac; end: 102fd89e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fd7fac(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x20;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar4 = _DAT_112f2fb58;
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f2fb58);
  *(undefined **)(unaff_x20 + _DAT_112f2fb58) = puVar2;
  func_0x000107c61170();
  func_0x00010011df08();
  func_0x000107c61180();
  uVar5 = uVar13;
  func_0x000107c5faec();
  func_0x000107c61170(uVar13);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f2fb60);
  uVar13 = puVar1[1];
  *puVar1 = uVar5;
  puVar1[1] = param_2;
  func_0x000107c6142c(uVar13);
  lVar6 = param_1;
  func_0x000107c51ec0();
  func_0x000107c61180();
  if (lVar6 == 0) {
LAB_102fd832c:
    puVar2 = PTR_PTR_1126b5690;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar7 = PTR_PTR_1126b5688;
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar6 = 0;
    FUN_102fd9a74();
    lVar4 = lVar6;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar4 + _DAT_112f2fb90);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined **)(lVar4 + _DAT_112f2fb98) = puVar2;
    *(undefined **)(lVar4 + _DAT_112f2fba0) = puVar7;
    lStack_78 = lVar4;
    lStack_70 = lVar6;
    func_0x000107c61154(&lStack_78,PTR_s_init_1125d9248);
    return;
  }
  func_0x000107c61174();
  lVar3 = param_1;
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar6);
    goto LAB_102fd832c;
  }
  lVar4 = *(long *)(unaff_x20 + lVar4);
  if ((lVar4 == 0) || (lVar20 = puVar1[1], lVar20 == 0)) {
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar6);
    puVar2 = PTR_PTR_1126b5690;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar7 = PTR_PTR_1126b5688;
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar6 = 0;
    FUN_102fd9a74();
    lVar4 = lVar6;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar4 + _DAT_112f2fb90);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined **)(lVar4 + _DAT_112f2fb98) = puVar2;
    *(undefined **)(lVar4 + _DAT_112f2fba0) = puVar7;
    lStack_88 = lVar4;
    lStack_80 = lVar6;
    func_0x000107c61154(&lStack_88,PTR_s_init_1125d9248);
    func_0x000107c615e8(lVar3);
    return;
  }
  uVar14 = *puVar1;
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f2fb08);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61434(lVar20);
  func_0x000107c5a978();
  func_0x000107c5a984(param_1);
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112f2faf0);
  uVar24 = *(undefined8 *)(unaff_x20 + _DAT_112f2fac0);
  puVar2 = PTR_PTR_1126b5680;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c615f4(uVar24,2);
  func_0x000107c61174();
  uVar5 = uVar14;
  lVar8 = lVar20;
  func_0x000107c5fadc(uVar14);
  func_0x000107c493fc();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar16);
  func_0x000107c615e8(uVar24);
  func_0x000107c61170(uVar5);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f2fb48);
  *(undefined **)(unaff_x20 + _DAT_112f2fb48) = puVar2;
  func_0x000107c61170(uVar5);
  func_0x000107c5a978();
  func_0x000107c5a984();
  lVar12 = param_1;
  func_0x000107c5a96c();
  func_0x000107c61180();
  uVar13 = *(undefined8 *)(lVar12 + _DAT_113034af8);
  func_0x000107c61174();
  func_0x000107c61170(lVar12);
  uVar5 = uVar13;
  func_0x000107c42304();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  lVar12 = param_1;
  func_0x000107c5a96c();
  func_0x000107c61180();
  lVar17 = *(long *)(lVar12 + _DAT_113034b08);
  lVar21 = lVar17;
  func_0x000107c61174();
  func_0x000107c61170(lVar12);
  if (lVar17 == 0) {
    lVar21 = 0;
    lVar12 = 0;
    lVar17 = lVar8;
  }
  else {
    lVar12 = lVar21;
    func_0x000107c4ebfc();
    func_0x000107c61180();
    func_0x000107c61170(lVar21);
    if (lVar12 == 0) {
      lVar21 = 0;
      lVar12 = 0;
      lVar17 = lVar8;
    }
    else {
      lVar21 = lVar12;
      func_0x000107c5faec();
      lVar17 = lVar8;
      func_0x000107c61170(lVar12);
      lVar12 = lVar8;
    }
  }
  lVar8 = param_1;
  func_0x000107c5a96c();
  func_0x000107c61180();
  lVar19 = *(long *)(lVar8 + _DAT_113034b08);
  lVar15 = lVar19;
  func_0x000107c61174();
  func_0x000107c61170(lVar8);
  if (lVar19 != 0) {
    lVar8 = lVar15;
    func_0x000107c5b2d0();
    func_0x000107c61180();
    func_0x000107c61170(lVar15);
    if (lVar8 != 0) {
      lVar15 = lVar8;
      func_0x000107c5faec();
      func_0x000107c61170(lVar8);
      goto LAB_102fd842c;
    }
  }
  lVar15 = 0;
  lVar17 = 0;
LAB_102fd842c:
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f2fb20);
  func_0x000107c61174();
  lVar8 = param_1;
  func_0x000107c5a96c();
  func_0x000107c61180();
  uVar10 = *(undefined8 *)(lVar8 + _DAT_113034b08);
  func_0x000107c61174();
  func_0x000107c61170(lVar8);
  func_0x000107c61174();
  uVar13 = uVar14;
  func_0x000107c5fadc(uVar14,lVar20);
  if (lVar12 == 0) {
    lVar21 = 0;
  }
  else {
    func_0x000107c5fadc(lVar21,lVar12);
    func_0x000107c6142c(lVar12);
  }
  if (lVar17 == 0) {
    lVar15 = 0;
  }
  else {
    func_0x000107c5fadc(lVar15,lVar17);
    func_0x000107c6142c(lVar17);
  }
  puVar2 = PTR_PTR_1126b5698;
  func_0x000107c610f8();
  func_0x000107c4866c();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar15);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f2fb50);
  *(undefined **)(unaff_x20 + _DAT_112f2fb50) = puVar2;
  func_0x000107c61170(uVar5);
  lVar6 = param_1;
  func_0x000107c5d17c(param_1);
  func_0x000107c61180();
  uVar23 = *(undefined8 *)(unaff_x20 + _DAT_112f2fae8);
  func_0x000107c61174();
  lVar12 = param_1;
  func_0x000107c5a96c();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(lVar12 + _DAT_113034af0);
  func_0x000107c61174();
  func_0x000107c61170(lVar12);
  uVar13 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f2fb28) + _DAT_1130807f0);
  func_0x000107c615f0(uVar13);
  func_0x000107c615f0(lVar3);
  func_0x000107c5a978();
  puVar7 = PTR_PTR_1126b5688;
  func_0x000107c610f8();
  func_0x000107c615f0(lVar3);
  func_0x000107c4902c();
  func_0x000107c615e8(lVar6);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(lVar3);
  func_0x000107c615e8(uVar13);
  lVar6 = param_1;
  func_0x000107c5d17c(param_1);
  func_0x000107c61180();
  func_0x000107c61174();
  lVar12 = param_1;
  func_0x000107c5a96c();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(lVar12 + _DAT_113034af0);
  func_0x000107c61174();
  func_0x000107c61170(lVar12);
  lVar12 = param_1;
  func_0x000107c5a96c();
  func_0x000107c61180();
  uVar13 = *(undefined8 *)(lVar12 + _DAT_113034af8);
  func_0x000107c61174();
  func_0x000107c61170(lVar12);
  func_0x000107c5a96c();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(param_1 + _DAT_113034b00);
  func_0x000107c61174();
  func_0x000107c61170(param_1);
  func_0x000107c5a984();
  func_0x000107c5a978();
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f2fad0);
  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112f2fb10);
  uVar25 = *(undefined8 *)(unaff_x20 + _DAT_112f2fb18);
  uVar22 = *(undefined8 *)(unaff_x20 + _DAT_112f2fb30);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c43d48();
  func_0x000107c61180();
  puVar11 = PTR_PTR_1126b5690;
  func_0x000107c610f8();
  func_0x000107c49054();
  func_0x000107c615e8(lVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar25);
  func_0x000107c615e8(uVar24);
  func_0x000107c615e8(lVar3);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar22);
  lVar12 = 0;
  FUN_102fd9a74();
  lVar6 = lVar12;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar6 + _DAT_112f2fb90);
  *puVar1 = uVar14;
  puVar1[1] = lVar20;
  *(undefined **)(lVar6 + _DAT_112f2fb98) = puVar11;
  *(undefined **)(lVar6 + _DAT_112f2fba0) = puVar7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_98 = lVar6;
  lStack_90 = lVar12;
  func_0x000107c61174(puVar7);
  func_0x000107c61174(puVar11);
  func_0x000107c61154(&lStack_98,puVar2);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar7);
  func_0x000107c615e8(lVar3);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 102fd89e4; end: 102fd8a3f; -[_TtC33SCOffPlatformShareFeatureProvider33SCOffPlatformShareFeatureProvider createOffPlatformSharingServiceWithConfig:] */

void FUN_102fd89e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102fd7fac(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102fd8a40; end: 102fd942b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102fd8a40(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long unaff_x20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lStack_158;
  long lStack_78;
  long lStack_70;
  
  uVar22 = *(undefined8 *)(unaff_x20 + _DAT_112f2fac0);
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112f2fad0);
  uVar23 = *(undefined8 *)(unaff_x20 + _DAT_112f2fae8);
  uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112f2faf0);
  uVar28 = *(undefined8 *)(unaff_x20 + _DAT_112f2fb08);
  uVar25 = *(undefined8 *)(unaff_x20 + _DAT_112f2fb10);
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112f2fb18);
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112f2fb20);
  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112f2fb30);
  uVar27 = *(undefined8 *)(unaff_x20 + _DAT_112f2fb38);
  lVar2 = 0;
  FUN_102fd7f08();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar20 = _DAT_112f2fa70;
  *(undefined8 *)(lVar3 + _DAT_112f2fa70) = 0;
  lVar13 = _DAT_112f2fa78;
  *(undefined8 *)(lVar3 + _DAT_112f2fa78) = 0;
  *(undefined8 *)(lVar3 + _DAT_112f2fa80) = 0;
  *(undefined8 *)(lVar3 + _DAT_112f2fa88) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112f2fa90);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c615f0(uVar22);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  lVar21 = param_1;
  func_0x000107c51ec0();
  func_0x000107c61180();
  if (lVar21 == 0) {
    func_0x00010011df08();
    func_0x000107c61180();
  }
  lVar4 = lVar21;
  func_0x000107c5faec();
  lVar26 = param_2;
  func_0x000107c61170();
  func_0x00010011df08();
  func_0x000107c61180();
  lVar5 = lVar21;
  lVar6 = lVar21;
  if (lVar21 == 0) {
    func_0x000107c5faec();
    lVar11 = lVar26;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar26);
    lVar6 = 0;
    func_0x000107c5faec(0);
    lVar26 = lVar11;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar11);
  }
  puVar7 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c61174(lVar21);
  func_0x000107c453e4();
  lVar21 = _DAT_112f2fa68;
  *(undefined **)(lVar3 + _DAT_112f2fa68) = puVar7;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5a978(param_1);
  func_0x000107c5a984(param_1);
  puVar8 = PTR_PTR_1126b5680;
  func_0x000107c610f8();
  func_0x000107c615f0(uVar22);
  func_0x000107c61174();
  func_0x000107c493fc();
  func_0x000107c61170(uVar28);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar19);
  func_0x000107c615e8(uVar22);
  func_0x000107c61170(lVar6);
  uVar28 = *(undefined8 *)(lVar3 + lVar20);
  *(undefined **)(lVar3 + lVar20) = puVar8;
  func_0x000107c61170(uVar28);
  func_0x000107c5a978();
  func_0x000107c5a984();
  uVar9 = *(undefined8 *)(lVar3 + lVar21);
  func_0x000107c61174();
  lVar20 = param_1;
  func_0x000107c5a96c();
  func_0x000107c61180();
  uVar10 = *(undefined8 *)(lVar20 + _DAT_113034af8);
  func_0x000107c61174();
  func_0x000107c61170(lVar20);
  uVar28 = uVar10;
  func_0x000107c42304();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  lVar20 = param_1;
  func_0x000107c5a96c();
  func_0x000107c61180();
  lVar6 = *(long *)(lVar20 + _DAT_113034b08);
  lVar21 = lVar6;
  func_0x000107c61174();
  func_0x000107c61170(lVar20);
  lVar20 = lVar26;
  if (lVar6 == 0) {
LAB_102fd8e48:
    lVar21 = 0;
    lVar26 = 0;
  }
  else {
    lVar6 = lVar21;
    func_0x000107c4ebfc();
    func_0x000107c61180();
    func_0x000107c61170(lVar21);
    lVar20 = lVar26;
    if (lVar6 == 0) goto LAB_102fd8e48;
    lVar21 = lVar6;
    func_0x000107c5faec();
    lVar20 = lVar26;
    func_0x000107c61170(lVar6);
  }
  lVar6 = param_1;
  func_0x000107c5a96c();
  func_0x000107c61180();
  lVar24 = *(long *)(lVar6 + _DAT_113034b08);
  lVar11 = lVar24;
  func_0x000107c61174();
  func_0x000107c61170(lVar6);
  if (lVar24 != 0) {
    lVar6 = lVar11;
    func_0x000107c5b2d0();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    if (lVar6 != 0) {
      lStack_158 = lVar6;
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
      goto LAB_102fd8ec8;
    }
  }
  lStack_158 = 0;
  lVar20 = 0;
LAB_102fd8ec8:
  func_0x000107c615f0(uVar22);
  func_0x000107c61174();
  lVar6 = param_1;
  func_0x000107c5a96c();
  func_0x000107c61180();
  uVar10 = *(undefined8 *)(lVar6 + _DAT_113034b08);
  func_0x000107c61174();
  func_0x000107c61170(lVar6);
  func_0x000107c61174();
  lVar6 = lVar4;
  func_0x000107c5fadc(lVar4,param_2);
  func_0x000107c5fadc(lVar4,param_2);
  func_0x000107c6142c(param_2);
  if (lVar26 == 0) {
    lVar21 = 0;
  }
  else {
    func_0x000107c5fadc(lVar21,lVar26);
    func_0x000107c6142c(lVar26);
  }
  if (lVar20 == 0) {
    lStack_158 = 0;
  }
  else {
    func_0x000107c5fadc(lStack_158,lVar20);
    func_0x000107c6142c(lVar20);
  }
  puVar7 = PTR_PTR_1126b5698;
  func_0x000107c610f8();
  func_0x000107c4866c();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar17);
  func_0x000107c615e8(uVar22);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lStack_158);
  uVar28 = *(undefined8 *)(lVar3 + lVar13);
  *(undefined **)(lVar3 + lVar13) = puVar7;
  func_0x000107c61170(uVar28);
  plVar12 = &lStack_78;
  lStack_78 = lVar3;
  lStack_70 = lVar2;
  func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
  func_0x000107c61180();
  func_0x000107c61174();
  lVar13 = param_1;
  func_0x000107c5d17c(param_1);
  func_0x000107c61180();
  lVar20 = _DAT_112f2fa68;
  uVar28 = *(undefined8 *)((long)plVar12 + _DAT_112f2fa68);
  func_0x000107c615f0(uVar22);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar28);
  lVar3 = param_1;
  func_0x000107c5a96c();
  func_0x000107c61180();
  uVar17 = *(undefined8 *)(lVar3 + _DAT_113034af0);
  func_0x000107c61174();
  func_0x000107c61170(lVar3);
  plVar14 = plVar12;
  func_0x000107c61174();
  func_0x000107c5a978();
  puVar7 = PTR_PTR_1126b5688;
  func_0x000107c610f8();
  func_0x000107c4902c();
  func_0x000107c615e8(lVar13);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar19);
  func_0x000107c615e8(uVar22);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(plVar14);
  uVar28 = *(undefined8 *)((long)plVar14 + _DAT_112f2fa88);
  *(undefined **)((long)plVar14 + _DAT_112f2fa88) = puVar7;
  func_0x000107c61174();
  func_0x000107c615e8(uVar28);
  lVar13 = param_1;
  func_0x000107c5d17c();
  func_0x000107c61180();
  func_0x000107c61174();
  lVar3 = param_1;
  func_0x000107c5a96c();
  func_0x000107c61180();
  uVar28 = *(undefined8 *)(lVar3 + _DAT_113034af0);
  func_0x000107c61174();
  func_0x000107c61170(lVar3);
  lVar3 = param_1;
  func_0x000107c5a96c();
  func_0x000107c61180();
  uVar17 = *(undefined8 *)(lVar3 + _DAT_113034af8);
  func_0x000107c61174(uVar17);
  func_0x000107c61170(lVar3);
  func_0x000107c5a96c();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(param_1 + _DAT_113034b00);
  func_0x000107c61174();
  func_0x000107c61170(param_1);
  func_0x000107c5a984();
  func_0x000107c5a978();
  uVar10 = *(undefined8 *)((long)plVar12 + lVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c43d48();
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126b5690;
  func_0x000107c610f8();
  func_0x000107c49054();
  func_0x000107c615e8(lVar13);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar16);
  func_0x000107c615e8(uVar22);
  func_0x000107c61170(plVar14);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar27);
  uVar25 = *(undefined8 *)((long)plVar14 + _DAT_112f2fa80);
  *(undefined **)((long)plVar14 + _DAT_112f2fa80) = puVar8;
  func_0x000107c61170(plVar14);
  func_0x000107c615e8(uVar25);
  return plVar14;
}



/* Entry: 102fd942c; end: 102fd9487; -[_TtC33SCOffPlatformShareFeatureProvider33SCOffPlatformShareFeatureProvider createOffPlatformSharingClosureServiceWithConfig:] */

void FUN_102fd942c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102fd8a40(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102fd9488; end: 102fd94e3; -[_TtC33SCOffPlatformShareFeatureProvider33SCOffPlatformShareFeatureProvider init] */

void FUN_102fd9488(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCOffPlatformShareFeatureProvider.SCOffPlatformShareFeatureProvider",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fd94b4);
  (*pcVar1)();
}



/* Entry: 102fd94e4; end: 102fd964f; -[_TtC33SCOffPlatformShareFeatureProvider33SCOffPlatformShareFeatureProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fd94e4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f2fac0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2fac8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2fad0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2fad8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2fae0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2fae8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2faf0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2faf8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2fb00));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2fb08));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2fb10));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2fb18));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2fb20));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2fb28));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2fb30));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2fb38));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2fb40));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2fb48));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2fb50));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2fb58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f2fb60 + 8))
  ;
  return;
}



/* Entry: 102fd9650; end: 102fd966f;  */

void FUN_102fd9650(void)

{
  func_0x000107c61168(&PTR_PTR_1128ae380);
  return;
}



/* Entry: 102fd9670; end: 102fd967f; -[_TtC33SCOffPlatformShareFeatureProvider29SCOffPlatformShareServiceImpl handleShareDestination:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fd9670(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd26f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112f2fb98),PTR_s_handleShareDestination__1125d2360);
  return;
}



/* Entry: 102fd9680; end: 102fd968f; -[_TtC33SCOffPlatformShareFeatureProvider29SCOffPlatformShareServiceImpl handleDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fd9680(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112f2fb98),PTR_s_handleDismiss_1125d1d40);
  return;
}



/* Entry: 102fd9690; end: 102fd97a3; -[_TtC33SCOffPlatformShareFeatureProvider29SCOffPlatformShareServiceImpl presentTextOnlyForShareDestination:textConfiguration:mediaConfiguration:phoneNumber:shareIdOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fd9690(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  
  if (param_7 == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112f2fba0);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    func_0x000107c61174(param_1);
    param_7 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_7);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112f2fba0);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    func_0x000107c61174(param_1);
    func_0x000107c5fadc(param_7,param_2);
  }
  func_0x000107c4eff0(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102fd97a4; end: 102fd98b7; -[_TtC33SCOffPlatformShareFeatureProvider29SCOffPlatformShareServiceImpl presentSingleMediaForShareDestination:textConfiguration:mediaConfiguration:phoneNumber:shareIdOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fd97a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  
  if (param_7 == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112f2fba0);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    func_0x000107c61174(param_1);
    param_7 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_7);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112f2fba0);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    func_0x000107c61174(param_1);
    func_0x000107c5fadc(param_7,param_2);
  }
  func_0x000107c4efe0(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102fd98b8; end: 102fd99cb; -[_TtC33SCOffPlatformShareFeatureProvider29SCOffPlatformShareServiceImpl presentMultipleMediaForShareDestination:textConfiguration:mediaConfiguration:phoneNumber:shareIdOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fd98b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  
  if (param_7 == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112f2fba0);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    func_0x000107c61174(param_1);
    param_7 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_7);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112f2fba0);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    func_0x000107c61174(param_1);
    func_0x000107c5fadc(param_7,param_2);
  }
  func_0x000107c4ef7c(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102fd99cc; end: 102fd9a27; -[_TtC33SCOffPlatformShareFeatureProvider29SCOffPlatformShareServiceImpl init] */

void FUN_102fd99cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCOffPlatformShareFeatureProvider.SCOffPlatformShareServiceImpl",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fd99f8);
  (*pcVar1)();
}



/* Entry: 102fd9a28; end: 102fd9a73; -[_TtC33SCOffPlatformShareFeatureProvider29SCOffPlatformShareServiceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102fd9a58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fd9a5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fd9a28(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f2fb90 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f2fb98));
  return;
}



/* Entry: 102fd9a74; end: 102fd9a93;  */

void FUN_102fd9a74(void)

{
  func_0x000107c61168(&PTR_PTR_1128ae550);
  return;
}



/* Entry: 102fd9a94; end: 102fda0af;  */

void FUN_102fd9a94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_1105f8c70;
  func_0x000107c613fc(&UNK_1105f8c70,0x98,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  *(undefined8 *)(puVar2 + 0x38) = param_13;
  *(undefined8 *)(puVar2 + 0x40) = param_8;
  *(undefined8 *)(puVar2 + 0x48) = param_7;
  *(undefined8 *)(puVar2 + 0x50) = param_9;
  *(undefined8 *)(puVar2 + 0x58) = param_10;
  *(undefined8 *)(puVar2 + 0x60) = param_11;
  *(undefined8 *)(puVar2 + 0x68) = param_12;
  *(undefined8 *)(puVar2 + 0x70) = param_14;
  *(undefined8 *)(puVar2 + 0x78) = param_15;
  *(undefined8 *)(puVar2 + 0x80) = param_16;
  *(undefined8 *)(puVar2 + 0x88) = param_17;
  *(undefined8 *)(puVar2 + 0x90) = param_18;
  pcStack_78 = FUN_102fda0b0;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  pcStack_88 = FUN_102fda0b4;
  puStack_80 = &UNK_1105f8c88;
  ppuVar3 = &puStack_98;
  puStack_70 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_70;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174();
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar2 = PTR_PTR_1126ac940;
  func_0x000107c610f8();
  func_0x000107c46860();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_18);
  func_0x000107c61170(puVar1);
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  return;
}



/* Entry: 102fda0b0; end: 102fda0b3;  */

void FUN_102fda0b0(void)

{
  long unaff_x20;
  
  func_0x000102fd9da0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 102fda0b4; end: 102fda0eb;  */

void FUN_102fda0b4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102fda0ec; end: 102fda0f3;  */

void FUN_102fda0ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 102fda0f4; end: 102fda1db;  */

void FUN_102fda0f4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102fda1dc; end: 102fda1e3;  */

void FUN_102fda1dc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102fda1e4; end: 102fda207;  */

void FUN_102fda1e4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102fda208; end: 102fda21b;  */

void FUN_102fda208(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102fda21c; end: 102fda2df;  */

void FUN_102fda21c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f2fcd0;
  func_0x0001000285a8(0x112f2fcd0,&UNK_10db74ae0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}


