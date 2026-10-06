/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100086024; end: 10008602b;  */

undefined8 FUN_100086024(void)

{
  return 1;
}



/* Entry: 10008602c; end: 1000860d3;  */

void FUN_10008602c(void)

{
  FUN_100086024();
  return;
}



/* Entry: 1000860d4; end: 100086a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000860d4(undefined8 *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  byte *pbVar16;
  long *plVar17;
  long *plVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  long unaff_x20;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  uint uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  uint uStack_a0;
  undefined1 auStack_98 [56];
  
  lVar12 = _DAT_11307c858;
  if ((*(byte *)(unaff_x20 + _DAT_11307c858) & 1) != 0) {
    return;
  }
  puVar13 = param_1;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar14 = *puVar13;
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_11307c878);
  uVar6 = ((undefined8 *)(unaff_x20 + _DAT_11307c878))[1];
  func_0x000107c61174(uVar14);
  func_0x000100029b28(uVar15,uVar6);
  func_0x000107c61170(uVar14);
  *(undefined8 *)(unaff_x20 + _DAT_11307c880) = uVar15;
  *(undefined1 *)(unaff_x20 + lVar12) = 1;
  func_0x00010008637c(param_1);
  puVar1 = (ulong *)(unaff_x20 + _DAT_11307c860);
  func_0x000107c61428(puVar1,auStack_98,0,0);
  uVar22 = puVar1[7];
  if (uVar22 != 0) {
    uVar2 = *puVar1;
    uVar7 = puVar1[1];
    uVar3 = puVar1[2];
    uVar8 = puVar1[3];
    uVar4 = puVar1[4];
    uVar9 = puVar1[5];
    uVar24 = puVar1[6];
    uVar5 = puVar1[8];
    uVar10 = puVar1[9];
    uVar23 = puVar1[10];
    uVar11 = puVar1[0xb];
    uStack_f8 = uVar2;
    uStack_f0 = uVar7;
    uStack_e8 = uVar3;
    uStack_e0 = uVar8;
    uStack_d8 = uVar4;
    uStack_d0 = uVar9;
    uStack_c8 = uVar24;
    uStack_c0 = uVar22;
    uStack_b8 = uVar5;
    uStack_b0 = uVar10;
    uStack_a8 = uVar23;
    uStack_a0 = (uint)uVar11;
    func_0x00010008718c(&uStack_f8,&uStack_158);
    if (lRam000000011307c830 != -1) {
      func_0x000107c61568(0x11307c830,FUN_100087328);
    }
    uStack_158 = uVar2 & 0x701;
    uStack_128 = uVar24 & 1;
    uStack_100 = (uint)uVar11 & 0x1010101;
    uStack_150 = uVar7;
    uStack_148 = uVar3;
    uStack_140 = uVar8;
    uStack_138 = uVar4;
    uStack_130 = uVar9;
    uStack_120 = uVar22;
    uStack_118 = uVar5;
    uStack_110 = uVar10;
    uStack_108 = uVar23;
    FUN_100087c34(&uStack_158);
    func_0x0001000880fc(&uStack_158);
    pbVar16 = (byte *)0x113813670;
    func_0x000107c61428(0x113813670,&uStack_158,0,0);
    plVar17 = plRam0000000113813670;
    if (plRam0000000113813670 != (long *)0x0) {
      FUN_1000285a8(0x112da1598,&UNK_10d9d0cd0);
      func_0x000107c61174();
      plVar18 = plVar17;
      func_0x0001000b637c();
      puVar19 = &UNK_1107752e8;
      func_0x000107c613fc(&UNK_1107752e8,0x18,7);
      func_0x000107c61614(puVar19 + 0x10);
      puVar20 = &UNK_1044732a8;
      puVar21 = puVar19;
      (**(code **)(*plVar18 + 0x60))();
      func_0x000107c61574(plVar18);
      func_0x000107c61574(puVar19);
      uVar15 = puRam000000011307c840;
      puRam000000011307c840 = puVar20;
      puRam000000011307c848 = puVar21;
      func_0x000107c61170(plVar17);
      func_0x000107c615e8(uVar15);
      return;
    }
    if (((uint)param_1 & 0xff) != 4) {
      return;
    }
    FUN_100028eb0();
    if ((*pbVar16 & 1) != 0) {
      return;
    }
  }
  *(undefined1 *)(unaff_x20 + lVar12) = 0;
  return;
}



/* Entry: 100086a0c; end: 100086a4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100086a0c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_11309bf58;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4102c();
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 100086a50; end: 100086a53;  */

void FUN_100086a50(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = param_1;
  func_0x000107c60690(param_1);
  func_0x000107c606a8();
  FUN_100086bd4(param_1,uVar1);
  return;
}



/* Entry: 100086a54; end: 100086b6b;  */

void FUN_100086a54(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_100086a50();
  lVar4 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar6;
  if (SCARRY8(lVar4,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100086b00);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    func_0x000100086c38(lVar5);
    uVar2 = param_2;
    FUN_100086a50();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      FUN_100086eb8(0);
      func_0x000107c60624();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100086ae4);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_10008989c();
    lVar5 = *unaff_x20;
    goto joined_r0x000100086b14;
  }
  lVar5 = *unaff_x20;
joined_r0x000100086b14:
  if ((uVar3 & 1) == 0) {
    lVar4 = lVar5 + (uVar2 >> 6) * 8;
    *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
    *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
    if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100086b6c);
      (*pcVar1)();
    }
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  }
  else {
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  }
  return;
}



/* Entry: 100086b6c; end: 100086b6f;  */

void FUN_100086b6c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = param_1;
  func_0x000107c60690(param_1);
  func_0x000107c606a8();
  FUN_100086bd4(param_1,uVar1);
  return;
}



/* Entry: 100086b70; end: 100086bd3;  */

void FUN_100086b70(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = param_1;
  func_0x000107c60690(param_1);
  func_0x000107c606a8();
  FUN_100086bd4(param_1,uVar1);
  return;
}



/* Entry: 100086bd4; end: 100086c4b;  */

void FUN_100086bd4(long param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(long *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 100086c4c; end: 100086eb7;  */

void FUN_100086c4c(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auStack_a8 [72];
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  FUN_1000285a8(param_3,param_4);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,param_3);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_100086e84:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar11 + 0x40);
  uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar12 = uVar12 & *puVar13;
  lVar1 = lVar4 + 0x40;
  lVar6 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar15 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100086eb4);
          (*pcVar3)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar12 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar13 = -1L << (uVar12 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar13,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_100086e84;
        }
        uVar12 = puVar13[lVar15];
        lVar6 = lVar6 + 1;
      } while (uVar12 == 0);
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar15 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5) | lVar15 << 6;
    uVar14 = *(ulong *)(*(long *)(lVar11 + 0x30) + uVar5 * 8);
    uVar16 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar5 * 8);
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar4 + 0x28));
    uVar9 = uVar14;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar9 = uVar9 & (uVar10 ^ 0xffffffffffffffff);
    uVar7 = uVar9 >> 6;
    uVar5 = -1L << (uVar9 & 0x3f) & (*(ulong *)(lVar1 + uVar7 * 8) ^ 0xffffffffffffffff);
    if (uVar5 == 0) {
      bVar2 = false;
      uVar5 = 0x3f - uVar10 >> 6;
      do {
        uVar9 = uVar7 + 1;
        if ((uVar9 == uVar5) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100086eb8);
          (*pcVar3)();
        }
        uVar7 = 0;
        if (uVar9 != uVar5) {
          uVar7 = uVar9;
        }
        bVar2 = (bool)(uVar9 == uVar5 | bVar2);
        uVar9 = *(ulong *)(lVar1 + uVar7 * 8);
      } while (uVar9 == 0xffffffffffffffff);
      uVar9 = ~uVar9;
      uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
    }
    else {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = 1L << (uVar5 & 0x3f) | *(ulong *)(lVar1 + uVar7);
    *(ulong *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = uVar14;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 8) = uVar16;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar6 = lVar15;
  } while( true );
}



/* Entry: 100086eb8; end: 100086ecb;  */

void FUN_100086eb8(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1107431e8;
  if (lRam000000011305f3f8 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam000000011305f3f8 = param_1;
  }
  return;
}



/* Entry: 100086ecc; end: 100086f4f;  */

void FUN_100086ecc(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 100086f50; end: 100086f7b;  */

void FUN_100086f50(void)

{
  func_0x000100086f10(0x11305f418,FUN_100086eb8,&UNK_10dcd46ec);
  return;
}



/* Entry: 100086f7c; end: 1000870fb;  */

/* WARNING: Removing unreachable block (ram,0x000100087134) */
/* WARNING: Removing unreachable block (ram,0x000100087184) */
/* WARNING: Removing unreachable block (ram,0x000100087144) */
/* WARNING: Removing unreachable block (ram,0x000100087150) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_100086f7c(long param_1,ulong param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  bVar1 = *(byte *)(param_1 + 1);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      return 0;
    }
    lVar8 = *(long *)(param_1 + 0x40);
    if (*(long *)(lVar8 + 0x10) != 0) {
      lVar4 = 0x2f;
      FUN_100086a50();
      if (((param_2 & 1) != 0) && (*(long *)(lVar8 + 0x10) != 0)) {
        lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + lVar4 * 8);
        lVar4 = 0x37;
        FUN_100086a50();
        if (((param_2 & 1) != 0) &&
           (lVar4 = *(long *)(*(long *)(lVar8 + 0x38) + lVar4 * 8), lVar4 != 0)) {
          FUN_1000870fc();
          if (lVar4 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000870f4);
            (*pcVar2)();
          }
          if (*(long *)(lVar8 + 0x10) != 0) {
            lVar5 = 0x55;
            FUN_100086a50();
            if ((param_2 & 1) != 0) {
              lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + lVar5 * 8);
              FUN_1000870fc();
              if (SBORROW8(lVar7,lVar8)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1000870f8);
                (*pcVar2)();
              }
              bVar3 = SCARRY8(lVar4,lVar7 - lVar8);
              lVar4 = lVar4 + (lVar7 - lVar8);
              if (bVar3) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1000870fc);
                (*pcVar2)();
              }
            }
          }
          if (SBORROW8(lVar7,lVar4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100087074);
            (*pcVar2)();
          }
          return lVar7 - lVar4;
        }
      }
    }
  }
  else {
    if (bVar1 == 2) {
      lVar8 = *(long *)(param_1 + 0x40);
      if ((*(long *)(lVar8 + 0x10) != 0) && (FUN_100086a50(), (param_2 & 1) != 0))
      goto LAB_1000870c4;
      if ((*(byte *)(param_1 + 0x5b) & 1) == 0) {
        return 0;
      }
      if (*(long *)(lVar8 + 0x10) == 0) {
        return 0;
      }
      FUN_100086a50();
    }
    else if (bVar1 == 3) {
      lVar8 = *(long *)(param_1 + 0x40);
      if ((((*(byte *)(param_1 + 0x5b) & 1) != 0) && (*(long *)(lVar8 + 0x10) != 0)) &&
         (FUN_100086a50(), (param_2 & 1) != 0)) goto LAB_1000870c4;
      if (*(long *)(lVar8 + 0x10) == 0) {
        return 0;
      }
      FUN_100086a50();
    }
    else {
      if (*(long *)(*(long *)(param_1 + 0x40) + 0x10) == 0) {
        return 0;
      }
      FUN_100086a50();
    }
    if ((param_2 & 1) != 0) {
LAB_1000870c4:
      lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      func_0x000107c6109c(&stack0xffffffffffffffd0);
      uVar6 = 0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
        func_0x000107c60e78(0);
        (*(code *)(undefined *)0x1000871c8)(param_2,uVar6);
        return param_2;
      }
      return uVar6;
    }
  }
  return 0;
}



/* Entry: 1000870fc; end: 1000872cf;  */

ulong FUN_1000870fc(ulong param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  ulong uVar4;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0;
  func_0x000107c6109c(&uStack_30);
  if (uStack_30._4_4_ == 0) {
    uVar4 = 0;
  }
  else {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_1;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uStack_30 & 0xffffffff;
    if (SUB168(auVar1 * auVar2,8) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100087188);
      (*pcVar3)();
    }
    uVar4 = 0;
    if ((ulong)uStack_30._4_4_ * 1000 != 0) {
      uVar4 = (param_1 * (uStack_30 & 0xffffffff)) / ((ulong)uStack_30._4_4_ * 1000);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    func_0x000107c60e78(uVar4);
    (*(code *)(undefined *)0x1000871c8)(param_2,uVar4);
    return param_2;
  }
  return uVar4;
}



/* Entry: 1000872d0; end: 100087327;  */

undefined1  [16] FUN_1000872d0(void)

{
  return ZEXT816(0x110775298);
}



/* Entry: 100087328; end: 100087373;  */

void FUN_100087328(void)

{
  undefined8 uVar1;
  
  FUN_1000285a8(0x11307c8b8,&UNK_10dd04b78);
  func_0x000107c613fc();
  uVar1 = 1;
  FUN_10008747c();
  uRam000000011307c838 = uVar1;
  return;
}



/* Entry: 100087374; end: 100087393;  */

undefined1  [16] FUN_100087374(void)

{
  return ZEXT816(0x1107751e8);
}



/* Entry: 100087394; end: 100087437;  */

void FUN_100087394(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_58 = *(long *)(lVar1 + -8) + 0x40;
    puStack_50 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_48 = PTR___sBbWV_11034d660 + 0x40;
    puStack_40 = &UNK_10dd3caa0;
    puStack_38 = PTR___sBoWV_11034d678 + 0x40;
    puStack_30 = puStack_38;
    puStack_28 = puStack_38;
    func_0x000107c61524(param_1,0,7,&lStack_58,param_1 + 0x90);
  }
  return;
}



/* Entry: 100087438; end: 100087447;  */

void FUN_100087438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e821794);
  return;
}



/* Entry: 100087448; end: 10008747b;  */

void FUN_100087448(long param_1)

{
  undefined1 auStack_18 [8];
  
  func_0x000107c61524(param_1,0,0,auStack_18,param_1 + 0x58);
  return;
}



/* Entry: 10008747c; end: 10008758f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008747c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_48;
  
  lVar6 = *unaff_x20;
  func_0x000107c5eec4((long)unaff_x20 + _DAT_113815508);
  lVar1 = _DAT_113096c18;
  uVar7 = *(undefined8 *)(lVar6 + 0x88);
  uVar2 = uVar7;
  func_0x000107c5f9d0();
  *(undefined8 *)((long)unaff_x20 + lVar1) = uVar2;
  *(undefined1 *)((long)unaff_x20 + _DAT_113096c20) = 0;
  lVar1 = _DAT_113096c00;
  uVar2 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)((long)unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_113096c10;
  uVar3 = 0;
  FUN_100087590(0,uVar7);
  uVar2 = uVar3;
  func_0x000100087628();
  *(undefined8 *)((long)unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)((long)unaff_x20 + _DAT_113096c28) = param_1;
  FUN_100087768(0,uVar7);
  puVar4 = &DAT_10dd3c840;
  uStack_48 = uVar2;
  func_0x000107c61520(&DAT_10dd3c840,uVar3);
  puVar5 = &uStack_48;
  FUN_1000877c8(puVar5,uVar3,puVar4);
  *(undefined8 **)((long)unaff_x20 + _DAT_113096c08) = puVar5;
  FUN_100087bcc();
  return;
}



/* Entry: 100087590; end: 10008759f;  */

void FUN_100087590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e821ac4);
  return;
}



/* Entry: 1000875a0; end: 10008765b;  */

void FUN_1000875a0(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBoWV_11034d678 + 0x40;
    puStack_28 = PTR___sBbWV_11034d660 + 0x40;
    func_0x000107c61524(param_1,0,3,&lStack_38,param_1 + 0x58);
  }
  return;
}



/* Entry: 10008765c; end: 1000876db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008765c(void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = *unaff_x20;
  func_0x000107c5eec4((long)unaff_x20 + _DAT_1138154e0);
  lVar1 = _DAT_113096858;
  uVar2 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)((long)unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_113096860;
  uVar2 = 0;
  FUN_1000876dc(0,*(undefined8 *)(lVar3 + 0x50));
  func_0x000107c5f9d0();
  *(undefined8 *)((long)unaff_x20 + lVar1) = uVar2;
  return;
}



/* Entry: 1000876dc; end: 1000876eb;  */

void FUN_1000876dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e821b14);
  return;
}



/* Entry: 1000876ec; end: 100087767;  */

void FUN_1000876ec(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___syycWV_11034f1c0 + 0x40;
    puStack_28 = puStack_30;
    func_0x000107c61524(param_1,0,3,&lStack_38,param_1 + 0x58);
  }
  return;
}



/* Entry: 100087768; end: 100087777;  */

void FUN_100087768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e821a74);
  return;
}



/* Entry: 100087778; end: 1000877c7;  */

void FUN_100087778(long param_1)

{
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_28 = PTR___sBoWV_11034d678 + 0x40;
  puStack_20 = &UNK_10dd3c798;
  puStack_18 = puStack_28;
  func_0x000107c61524(param_1,0,3,&puStack_28,param_1 + 0x58);
  return;
}



/* Entry: 1000877c8; end: 100087817;  */

void FUN_1000877c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c613fc();
  FUN_100087818(param_1,param_2,param_3);
  return;
}



/* Entry: 100087818; end: 10008789f;  */

void FUN_100087818(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  *(undefined1 *)(unaff_x20 + 3) = 0;
  lVar1 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  unaff_x20[4] = lVar1;
  FUN_1000876dc(0,*(undefined8 *)(lVar2 + 0x50));
  FUN_1000878a0(param_1,param_2,param_3);
  unaff_x20[2] = param_1;
  return;
}



/* Entry: 1000878a0; end: 1000878ef;  */

void FUN_1000878a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c613fc();
  FUN_1000878f0(param_1,param_2,param_3);
  return;
}



/* Entry: 1000878f0; end: 100087b7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000878f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = *unaff_x20;
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  uVar6 = *(undefined8 *)(lVar5 + 0x50);
  uVar3 = param_1;
  uVar4 = uVar6;
  func_0x0001000879f0(param_1,uVar6,param_2,param_3);
  puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_113096910);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  func_0x000100087ab8(param_1,uVar6,param_2,param_3);
  puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_113096918);
  *puVar1 = param_1;
  puVar1[1] = uVar6;
  (**(code **)(param_3 + 0x10))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,param_3);
  (**(code **)(lVar7 + 0x20))
            ((long)unaff_x20 + _DAT_1138154e8,
             &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  return;
}



/* Entry: 100087b80; end: 100087bcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100087b80(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_1138154e0;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  func_0x000107c5eec8();
                    /* WARNING: Could not recover jumptable at 0x000100087bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 100087bcc; end: 100087bd3;  */

void FUN_100087bcc(void)

{
  return;
}



/* Entry: 100087bd4; end: 100087c33;  */

void FUN_100087bd4(undefined8 param_1,code *param_2)

{
  long unaff_x20;
  
  func_0x000107c611ec(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_2)(param_1);
  func_0x000107c611f0(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100087c34; end: 100087ca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100087c34(undefined8 param_1)

{
  undefined1 auStack_50 [16];
  
  FUN_100087bd4(FUN_100087e00,auStack_50,PTR___sytN_11034f1b0 + 8);
  FUN_100087f24(param_1);
  return;
}



/* Entry: 100087ca8; end: 100087dff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100087ca8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar6 = *(long *)(*param_1 + 0x88);
  lVar8 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar8 + 0x10))(puVar7);
  lVar1 = _DAT_113096c18;
  func_0x000107c61428((long)param_1 + _DAT_113096c18,auStack_78,0x21,0);
  uVar2 = 0;
  func_0x000107c5fc80(0,lVar6);
  func_0x000107c5fc78(puVar7,uVar2);
  func_0x000107c614a8(auStack_78);
  lVar5 = *(long *)((long)param_1 + lVar1);
  lVar3 = lVar5;
  func_0x000107c61434();
  func_0x000107c5fc74();
  func_0x000107c6142c(lVar5);
  if (*(long *)((long)param_1 + _DAT_113096c28) < lVar3) {
    func_0x000107c61428((long)param_1 + lVar1,auStack_78,0x21,0);
    puVar4 = PTR___sSayxGSmsMc_11034dd28;
    func_0x000107c61520(PTR___sSayxGSmsMc_11034dd28,uVar2);
    func_0x000107c5fedc(puVar7,uVar2,puVar4);
    func_0x000107c614a8(auStack_78);
    (**(code **)(lVar8 + 8))(puVar7,lVar6);
  }
  return;
}



/* Entry: 100087e00; end: 100087e17;  */

void FUN_100087e00(void)

{
  long unaff_x20;
  
  FUN_100087ca8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 100087e18; end: 100087e3f;  */

/* WARNING: Possible PIC construction at 0x000100087e2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100087e30) */

void FUN_100087e18(void)

{
  undefined8 in_x7;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(in_x7);
  return;
}



/* Entry: 100087e40; end: 100087eff;  */

undefined8 * FUN_100087e40(undefined8 *param_1,undefined8 *param_2)

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
  undefined4 uVar11;
  undefined8 uVar12;
  
  uVar1 = *param_2;
  uVar6 = param_2[1];
  uVar2 = param_2[2];
  uVar7 = param_2[3];
  uVar3 = param_2[4];
  uVar8 = param_2[5];
  uVar4 = param_2[6];
  uVar9 = param_2[7];
  uVar5 = param_2[8];
  uVar10 = param_2[9];
  uVar12 = param_2[10];
  uVar11 = *(undefined4 *)(param_2 + 0xb);
  FUN_100087e18(uVar1,uVar6,uVar2,uVar7,uVar3,uVar8,uVar4,uVar9,uVar5,uVar10,uVar12,uVar11);
  *param_1 = uVar1;
  param_1[1] = uVar6;
  param_1[2] = uVar2;
  param_1[3] = uVar7;
  param_1[4] = uVar3;
  param_1[5] = uVar8;
  param_1[6] = uVar4;
  param_1[7] = uVar9;
  param_1[8] = uVar5;
  param_1[9] = uVar10;
  param_1[10] = uVar12;
  *(undefined4 *)(param_1 + 0xb) = uVar11;
  return param_1;
}



/* Entry: 100087f00; end: 100087f23;  */

void FUN_100087f00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
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
  uVar7 = *(undefined8 *)((long)param_2 + 0x4c);
  *(undefined8 *)((long)param_1 + 0x54) = *(undefined8 *)((long)param_2 + 0x54);
  *(undefined8 *)((long)param_1 + 0x4c) = uVar7;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[9] = uVar6;
  param_1[8] = uVar5;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  return;
}



/* Entry: 100087f24; end: 100087fb3;  */

void FUN_100087f24(undefined8 param_1)

{
  byte bVar1;
  long unaff_x20;
  
  FUN_10006c804();
  bVar1 = *(byte *)(unaff_x20 + 0x18);
  FUN_100070bfc();
  if ((bVar1 & 1) == 0) {
    func_0x000100087f6c(param_1);
  }
  return;
}



/* Entry: 100087fb4; end: 1000880a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100087fb4(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar6 = *unaff_x20;
  FUN_10006c804();
  lVar7 = _DAT_113096860;
  func_0x000107c61428((long)unaff_x20 + _DAT_113096860,auStack_58,0,0);
  lVar5 = *(long *)((long)unaff_x20 + lVar7);
  func_0x000107c61434(lVar5);
  FUN_100070bfc();
  uVar3 = 0;
  FUN_1000876dc(0,*(undefined8 *)(lVar6 + 0x50));
  lVar7 = lVar5;
  func_0x000107c5fc7c(lVar5,uVar3);
  if (lVar7 != 0) {
    lVar7 = 0;
    do {
      func_0x000107c5fc98(&uStack_60,lVar7,lVar5,uVar3);
      uVar1 = uStack_60;
      lVar6 = lVar7 + 1;
      if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000880a4);
        (*pcVar2)();
      }
      func_0x000100087f6c(param_1);
      func_0x000107c61574(uVar1);
      lVar4 = lVar5;
      func_0x000107c5fc7c(lVar5,uVar3);
      lVar7 = lVar7 + 1;
    } while (lVar6 != lVar4);
  }
  func_0x000107c6142c(lVar5);
  return;
}



/* Entry: 1000880a4; end: 100088157;  */

void FUN_1000880a4(void)

{
  FUN_100087fb4();
  return;
}



/* Entry: 100088158; end: 10008819f;  */

void FUN_100088158(undefined8 *param_1)

{
  func_0x000100088130(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                      param_1[7],param_1[8],param_1[9],param_1[10],*(undefined4 *)(param_1 + 0xb));
  return;
}



/* Entry: 1000881a0; end: 1000881a7;  */

void FUN_1000881a0(long param_1,long param_2)

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



/* Entry: 1000881a8; end: 100088267; -[SCLegacyAuthFlowProxy initWithLegacyUserLifecycle:appSession:] */

undefined1 *
FUN_1000881a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e9ce0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170();
    func_0x0001000882bc();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100088268; end: 100088413;  */

void FUN_100088268(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136ca0d0 != -1) {
    FUN_10002a2fc(0x1136ca0d0,&PTR___NSConcreteGlobalBlock_110994960);
  }
  uVar1 = uRam00000001136ca0c8;
  func_0x000107c61174(uRam00000001136ca0c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100088414; end: 10008843f;  */

void FUN_100088414(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c61160();
  uVar1 = puRam00000001136ca0c8;
  puRam00000001136ca0c8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100088440; end: 10008853f; +[User createUser] */

void FUN_100088440(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b85c8;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126d5420;
  func_0x000107c61158(PTR_PTR_1126d5420);
  func_0x000107c60b14();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126d5420;
  func_0x000107c4e430(PTR_PTR_1126d5420);
  func_0x000107c61180();
  puVar4 = puVar1;
  func_0x000107c4b754(puVar1,param_2,puVar2,puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  if (puVar4 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c4a28c();
    func_0x000107c61170(puVar1);
    if ((int)puVar2 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126d5420;
      func_0x000107c610fc(PTR_PTR_1126d5420);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100088540; end: 100088593; +[SCArchiveUtils shared] */

void FUN_100088540(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f9008 != -1) {
    FUN_10002a2fc(0x1137f9008,&PTR___NSConcreteGlobalBlock_110d5b270);
  }
  uVar1 = uRam00000001137f9000;
  func_0x000107c61174(uRam00000001137f9000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100088594; end: 1000885bf;  */

void FUN_100088594(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b85c8;
  func_0x000107c610fc();
  uVar1 = puRam00000001137f9000;
  puRam00000001137f9000 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000885c0; end: 100088623; -[SCArchiveUtils init] */

undefined1 * FUN_1000885c0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270a4a0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126e06d0;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100088624; end: 100088697; -[SCGrapheneStorageMetric2 init] */

undefined1 * FUN_100088624(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e1a8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100088698; end: 1000886eb; +[User path] */

void FUN_100088698(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b85c8;
  func_0x000107c5a9bc(PTR_PTR_1126b85c8);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4e450();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1000886ec; end: 10008874f; -[SCArchiveUtils pathWithFileName:] */

void FUN_1000886ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  FUN_100088750();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c168();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100088750; end: 10008881b;  */

void FUN_100088750(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fdf10 != -1) {
    FUN_10002a2fc(0x1137fdf10,&PTR___NSConcreteGlobalBlock_110d98828);
  }
  uVar1 = uRam00000001137fdf08;
  func_0x000107c61174(uRam00000001137fdf08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10008881c; end: 100088943; -[SCArchiveUtils loadObjectOfType:fromPath:] */

void FUN_10008881c(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_4;
  FUN_100088944();
  func_0x000107c61180();
  lVar2 = param_3;
  func_0x000107c60af0();
  func_0x000107c61174(uVar1);
  if ((lVar2 == 0) || (uVar3 = uVar1, func_0x000107c6115c(uVar1,lVar2), (uVar3 & 1) == 0)) {
    func_0x000107c61170(uVar1);
LAB_100088898:
    lVar2 = param_3;
    func_0x000107c60b00();
    func_0x000107c61180();
    func_0x000107c61174(uVar1);
    if (lVar2 == 0) {
      func_0x000107c61170();
      func_0x000107c61170(0);
      uVar3 = 0;
    }
    else {
      uVar4 = uVar1;
      FUN_10010fab4(uVar1,lVar2);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(lVar2);
      uVar3 = 0;
      if (((int)uVar4 != 0) && (uVar1 != 0)) goto LAB_100088900;
    }
  }
  else {
    uVar3 = uVar1;
    if (uVar1 == 0) goto LAB_100088898;
  }
  func_0x000107c61170(uVar1);
  uVar1 = uVar3;
LAB_100088900:
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100088944; end: 100088c23;  */

void FUN_100088944(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  
  func_0x000107c61174();
  puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c415e0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  func_0x000107c61180();
  func_0x000107c43418();
  func_0x000107c61170(puVar8);
  if (lRam0000000113846a88 != -1) {
    FUN_10002a2fc(0x113846a88,&PTR___NSConcreteGlobalBlock_110d96538);
  }
  if (cRam0000000113846a90 == '\x01') {
    lVar7 = param_1;
    func_0x000107c5c16c();
    func_0x000107c61180();
    lVar3 = lVar7;
    func_0x000107c61178();
    iVar2 = (int)lVar3;
    func_0x000107c3ac4c();
    func_0x000107c60ec0();
    if (iVar2 == 0) {
      puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x000107c415e0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      func_0x000107c61180();
      func_0x000107c4ff4c();
      func_0x000107c61170(puVar8);
      func_0x000107c61178(lVar7);
      func_0x000107c3ac4c();
      func_0x000107c616a4();
      puVar8 = (undefined *)0x0;
      goto LAB_100088bc0;
    }
    FUN_100080a14(lVar7);
  }
  else {
    lVar7 = 0;
  }
  if (lRam00000001137f9018 != -1) {
    FUN_10002a2fc(0x1137f9018,&PTR___NSConcreteGlobalBlock_110d5b290);
  }
  cVar1 = cRam00000001137f9010;
  puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x000107c412f0();
  func_0x000107c61180();
  if (cVar1 == '\x01') {
    if (puVar4 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR_PTR_1126bdbc0;
      func_0x000107c4d9f0();
      func_0x000107c61180();
      if (puVar8 == (undefined *)0x0) {
        puVar5 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
        func_0x000107c610f4();
        func_0x000107c45424();
        func_0x000107c57e2c();
        puVar8 = puVar5;
        func_0x000107c41478();
        func_0x000107c61180();
        if (puVar8 != (undefined *)0x0) {
          func_0x000107c30958(puVar8,param_1);
        }
        func_0x000107c61170(puVar5);
      }
    }
    if (lVar7 != 0) {
      func_0x000107c61178(lVar7);
      func_0x000107c3ac4c();
      func_0x000107c616a4();
    }
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    func_0x000107c610f4();
    func_0x000107c45424();
    func_0x000107c57e2c();
    puVar8 = puVar5;
    func_0x000107c41478();
    func_0x000107c61180();
    if (puVar8 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c412f0();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar8 = PTR_PTR_1126bdbc0;
        func_0x000107c4d9f0();
        func_0x000107c61180();
        if (puVar8 != (undefined *)0x0) {
          func_0x000107c30958(puVar8,param_1);
        }
        func_0x000107c61170(puVar6);
      }
    }
    if (lVar7 != 0) {
      func_0x000107c61178(lVar7);
      func_0x000107c3ac4c();
      func_0x000107c616a4();
    }
    func_0x000107c61170(puVar5);
  }
  func_0x000107c61170(puVar4);
LAB_100088bc0:
  func_0x000107c61170(lVar7);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 100088c24; end: 100088c4f;  */

void FUN_100088c24(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3c00;
  func_0x000107c49820();
  uRam00000001137f9010 = ppuVar1 != (undefined **)0x2;
  return;
}



/* Entry: 100088c50; end: 100088d27; -[SCClientEncryption initWithCoder:] */

undefined1 * FUN_100088c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270aef8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c41478();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_3;
    func_0x000107c41478();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_3;
    func_0x000107c41478();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100088d28; end: 100088e83; -[User initWithCoder:] */

undefined1 * FUN_100088d28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126f8cd8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c41478(param_3);
    func_0x000107c61180();
    func_0x000107c5a430(puVar1);
    func_0x000107c61170(uVar2);
    uVar2 = param_3;
    func_0x000107c41478(param_3);
    func_0x000107c61180();
    uVar3 = param_3;
    func_0x000107c41478();
    func_0x000107c61180();
    uVar5 = uVar3;
    func_0x000107c40794();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar5;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    uVar3 = param_3;
    func_0x000107c41478();
    func_0x000107c61180();
    uVar5 = uVar3;
    func_0x000107c40794();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar5;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    uVar3 = param_3;
    func_0x000107c41478();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    func_0x000107c61170(uVar5);
    func_0x000107c42908(puVar1);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100088e84; end: 100088e8b; -[User setUsernameDisplayOnly_LEGACY_DO_NOT_USE:] */

void FUN_100088e84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 100088e8c; end: 100088eeb; -[User ensureNonNilObjects] */

/* WARNING: Possible PIC construction at 0x000100088eac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100088eb0) */
/* WARNING: Removing unreachable block (ram,0x000100088ec0) */
/* WARNING: Removing unreachable block (ram,0x000100088eb4) */

void FUN_100088e8c(void)

{
  func_0x000107c3fb70();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100088eec; end: 100088ef3; -[User clientEncryption] */

undefined8 FUN_100088eec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100088ef4; end: 100088f03; -[_TtC13SCSystemScope13SCSystemScope setLegacyAuthFlowProxy:] */

void FUN_100088ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setAssociatedObject_11034d300)(param_1,&UNK_10f2ec3e5,param_3,1);
  return;
}



/* Entry: 100088f04; end: 1000892ef; -[SCMainAppDelegate _application:didFinishLaunchingWithOptions:appLaunchSignaler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_100088f04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar1 = PTR_PTR_1126ae520;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3dfc0();
  func_0x000107c61170(puVar1);
  puVar1 = PTR_PTR_1126b6b68;
  func_0x000107c610f4();
  func_0x000107c456bc();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112720910);
  *(undefined **)(param_1 + _DAT_112720910) = puVar1;
  func_0x000107c61170(uVar4);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c3e814();
  func_0x000107c61170(puVar1);
  lVar5 = param_1;
  func_0x000107c3b7c8(param_1,param_2,param_4,param_3);
  func_0x000107c61180();
  lVar7 = (long)_DAT_112720914;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  *(long *)(param_1 + lVar7) = lVar5;
  func_0x000107c61170(uVar4);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
  func_0x000107c61170(puVar1);
  lVar5 = (long)_DAT_1127208e8;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x000107c3de60(uVar4);
  func_0x000107c61180();
  func_0x000107c527b8();
  func_0x000107c61170(uVar4);
  func_0x000107c5b000(param_5);
  FUN_100089ac0(puVar2 == (undefined *)0x2);
  if (puVar2 == (undefined *)0x2) {
    puVar1 = PTR_PTR_1126af680;
    func_0x000107c5a9f0(PTR_PTR_1126af680);
    func_0x000107c61180();
    func_0x000107c50540();
    func_0x000107c61170(puVar1);
  }
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c3e814();
  func_0x000107c61170(puVar1);
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127208f0);
  uVar3 = *(undefined8 *)(param_1 + lVar7);
  func_0x000107c5b654(uVar3);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5c74c();
  lVar7 = *(long *)(param_1 + lVar7);
  func_0x000107c5b654(lVar7);
  func_0x000107c61180();
  func_0x000107c405d4(uVar6,param_2,0,uVar4,lVar7 != 0,puVar2 == (undefined *)0x1);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(uVar3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
  func_0x000107c61170(puVar1);
  puVar1 = PTR_PTR_1126b6ac0;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4f2bc();
  func_0x000107c61170(puVar1);
  if ((int)puVar2 != 0) {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c3e814();
    func_0x000107c61170(puVar1);
    func_0x000107c3ed0c(*(undefined8 *)(param_1 + lVar5),param_2,
                        *(undefined8 *)(param_1 + _DAT_1127208e4));
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127208dc);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x000107c5bcac(uVar4);
    func_0x000107c61180();
    func_0x000107c59824(uVar3,param_2,uVar4);
    func_0x000107c61170(uVar4);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c42888();
    func_0x000107c61170(puVar1);
  }
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x000107c3dfa8();
  func_0x000107c61180();
  lVar5 = (long)_DAT_11272090c;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar4;
  func_0x000107c61170(uVar3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c3e814();
  func_0x000107c61170(puVar1);
  func_0x000107c3df64(*(undefined8 *)(param_1 + lVar5),param_2,param_3,param_4);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
  func_0x000107c61170(puVar1);
  func_0x000107c5b004(param_5);
  func_0x000100c1dca0();
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return 1;
}



/* Entry: 1000892f0; end: 100089363; -[SCAppDelegateDeepLinkHandler initWithAppDelegateProperties:] */

undefined1 * FUN_1000892f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e7300;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100089364; end: 1000894a7; -[SCMainAppDelegate _generateAppStartupState:application:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100089364(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c4d9e8(param_3,param_2,
                      *(undefined8 *)PTR__UIApplicationLaunchOptionsRemoteNotificationKey_110345a48)
  ;
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = lVar1;
    FUN_1000894a8();
    if ((int)lVar2 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar2 = param_3;
      func_0x000107c4d9e8(param_3,param_2,
                          *(undefined8 *)
                           PTR__UIApplicationLaunchOptionsLocalNotificationKey_110345a38);
      func_0x000107c61180();
      if (lVar2 == 0) {
        puVar5 = (undefined *)0x0;
      }
      else {
        puVar5 = PTR_PTR_1126b1370;
        func_0x000107c610f4(PTR_PTR_1126b1370);
        lVar3 = lVar2;
        func_0x000107c5d9a4(lVar2);
        func_0x000107c61180();
        func_0x000107c47b2c(puVar5,param_2,lVar3,2);
        func_0x000107c61170(lVar3);
      }
      func_0x000107c61170(lVar2);
    }
  }
  else {
    puVar5 = PTR_PTR_1126b1370;
    func_0x000107c610f4(PTR_PTR_1126b1370);
    func_0x000107c47b2c();
  }
  puVar4 = PTR_PTR_1126b6b70;
  func_0x000107c610f4(PTR_PTR_1126b6b70);
  func_0x000107c488dc();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1000894a8; end: 1000894b7;  */

undefined * FUN_1000894a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e1960;
  func_0x000107c61174(0);
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110f98518);
  func_0x000107c5a9f0(puVar1);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3ebd4();
  func_0x000107c61170(0);
  func_0x000107c61170(&PTR____CFConstantStringClassReference_110f98518);
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 1000894b8; end: 100089583; -[SCAppStartupState initWithSourceNotification:appDelegateProperties:launchOptions:] */

undefined1 *
FUN_1000894b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1127057b0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100089584; end: 100089593; -[SCSystemServicesProviderImplementation appStartupStateService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100089584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d7f130));
  return;
}



/* Entry: 100089594; end: 1000895e3; -[_TtC30AppStartupStateServiceProvider36AppStartupStateServiceImplementation setAppStartupState:] */

/* WARNING: Possible PIC construction at 0x0001000895cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000895d0) */

void FUN_100089594(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1000895e4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1000895e4; end: 1000896d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000895e4(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  FUN_10006c804();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11307cd58);
  *(undefined8 *)(unaff_x20 + _DAT_11307cd58) = param_1;
  func_0x000107c61170(uVar3);
  lVar1 = _DAT_11307cd60;
  func_0x000107c61428(unaff_x20 + _DAT_11307cd60,auStack_58,1,0);
  lVar4 = *(long *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c61174();
  FUN_100070bfc();
  uVar6 = *(ulong *)(lVar4 + 0x10);
  uStack_60 = param_1;
  if (uVar6 != 0) {
    uVar5 = 0;
    puVar7 = (undefined8 *)(lVar4 + 0x28);
    do {
      if (*(ulong *)(lVar4 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000896d4);
        (*pcVar2)();
      }
      uVar5 = uVar5 + 1;
      pcVar2 = (code *)puVar7[-1];
      uVar3 = *puVar7;
      func_0x000107c6157c(uVar3);
      (*pcVar2)(&uStack_60);
      func_0x000107c61574(uVar3);
      puVar7 = puVar7 + 2;
    } while (uVar6 != uVar5);
  }
  func_0x000107c6142c(lVar4);
  return;
}



/* Entry: 1000896d4; end: 1000896fb; -[SCAppLaunchSignaler signalScopeGraphSetupBegin] */

void FUN_1000896d4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1000896fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1000896fc; end: 10008989b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000896fc(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  long unaff_x20;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  uint uStack_d0;
  ulong uStack_c8;
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
  uint uStack_70;
  
  if (*(char *)(unaff_x20 + _DAT_11307c858) != '\x01') {
    return;
  }
  puVar1 = (ulong *)(unaff_x20 + _DAT_11307c860);
  puVar12 = &uStack_c8;
  puVar11 = puVar1;
  func_0x000107c61428(puVar1,puVar12,0x21,0);
  if (puVar1[7] != 0) {
    func_0x000107c6106c();
    uVar13 = puVar1[8];
    if (*(long *)(uVar13 + 0x10) != 0) {
      FUN_100086a50(0x35);
      if (((ulong)puVar12 & 1) != 0) goto LAB_1000897a8;
      uVar13 = puVar1[8];
    }
    func_0x000107c61558(uVar13);
    uStack_128 = puVar1[8];
    FUN_100086a54(puVar11,0x35,uVar13);
    puVar1[8] = uStack_128;
  }
LAB_1000897a8:
  func_0x000107c614a8(&uStack_c8);
  uVar13 = puVar1[7];
  if (uVar13 != 0) {
    uVar2 = *puVar1;
    uVar6 = puVar1[1];
    uVar3 = puVar1[2];
    uVar7 = puVar1[3];
    uVar4 = puVar1[4];
    uVar8 = puVar1[5];
    uVar15 = puVar1[6];
    uVar5 = puVar1[8];
    uVar9 = puVar1[9];
    uVar14 = puVar1[10];
    uVar10 = puVar1[0xb];
    uStack_c8 = uVar2;
    uStack_c0 = uVar6;
    uStack_b8 = uVar3;
    uStack_b0 = uVar7;
    uStack_a8 = uVar4;
    uStack_a0 = uVar8;
    uStack_98 = uVar15;
    uStack_90 = uVar13;
    uStack_88 = uVar5;
    uStack_80 = uVar9;
    uStack_78 = uVar14;
    uStack_70 = (uint)uVar10;
    func_0x00010008718c(&uStack_c8,&uStack_128);
    if (lRam000000011307c830 != -1) {
      func_0x000107c61568(0x11307c830,FUN_100087328);
    }
    uStack_128 = uVar2 & 0x701;
    uStack_f8 = uVar15 & 1;
    uStack_d0 = (uint)uVar10 & 0x1010101 | 0x40000000;
    uStack_120 = uVar6;
    uStack_118 = uVar3;
    uStack_110 = uVar7;
    uStack_108 = uVar4;
    uStack_100 = uVar8;
    uStack_f0 = uVar13;
    uStack_e8 = uVar5;
    uStack_e0 = uVar9;
    uStack_d8 = uVar14;
    FUN_100087c34(&uStack_128);
    func_0x0001000880fc(&uStack_128);
  }
  return;
}



/* Entry: 10008989c; end: 1000898af;  */

void FUN_10008989c(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *unaff_x20;
  long lVar10;
  
  FUN_1000285a8(0x11305f7c8,&UNK_10dcd4bb0);
  lVar10 = *unaff_x20;
  lVar3 = lVar10;
  func_0x000107c6048c();
  if (*(long *)(lVar10 + 0x10) != 0) {
    lVar1 = lVar10 + 0x40;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar10 || lVar1 + uVar4 * 8 <= lVar3 + 0x40U) {
      func_0x000107c610b8(lVar3 + 0x40U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar10 + 0x40);
    lVar7 = lVar5;
    if (uVar4 == 0) goto LAB_100089978;
    do {
      uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 - 1 & uVar4;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      while( true ) {
        uVar9 = *(undefined8 *)(*(long *)(lVar10 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar10 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar8 * 8) = uVar9;
        lVar7 = lVar5;
        if (uVar4 != 0) break;
LAB_100089978:
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000899ec);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_1000899cc;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
    } while( true );
  }
LAB_1000899cc:
  func_0x000107c61574(lVar10);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 1000898b0; end: 1000899eb;  */

void FUN_1000898b0(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *unaff_x20;
  long lVar10;
  
  FUN_1000285a8();
  lVar10 = *unaff_x20;
  lVar3 = lVar10;
  func_0x000107c6048c();
  if (*(long *)(lVar10 + 0x10) != 0) {
    lVar1 = lVar10 + 0x40;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar10 || lVar1 + uVar4 * 8 <= lVar3 + 0x40U) {
      func_0x000107c610b8(lVar3 + 0x40U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar10 + 0x40);
    lVar7 = lVar5;
    if (uVar4 == 0) goto LAB_100089978;
    do {
      uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 - 1 & uVar4;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      while( true ) {
        uVar9 = *(undefined8 *)(*(long *)(lVar10 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar10 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar8 * 8) = uVar9;
        lVar7 = lVar5;
        if (uVar4 != 0) break;
LAB_100089978:
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000899ec);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_1000899cc;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
    } while( true );
  }
LAB_1000899cc:
  func_0x000107c61574(lVar10);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 1000899ec; end: 100089abf;  */

void FUN_1000899ec(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x5c) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x5c) = 0;
    }
    if (param_2 != 0) {
      *param_1 = ((ulong)-param_2 & 0xffffff80) << 4 | ((ulong)-param_2 & 0x7f) << 1;
      param_1[2] = 0;
      param_1[1] = 0;
      param_1[4] = 0;
      param_1[3] = 0;
      param_1[6] = 0;
      param_1[5] = 0;
      param_1[8] = 0;
      param_1[7] = 0;
      param_1[10] = 0;
      param_1[9] = 0;
      *(undefined4 *)(param_1 + 0xb) = 0;
      return;
    }
  }
  return;
}



/* Entry: 100089ac0; end: 100089c43;  */

void FUN_100089ac0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x000107c6106c();
  uRam0000000113839478 = uVar1;
  FUN_100089c44();
  puVar2 = PTR_PTR_1126ae4f8;
  uRam0000000113839488 = uVar1;
  func_0x000107c5a9bc(PTR_PTR_1126ae4f8);
  func_0x000107c61180();
  func_0x000107c5afd0();
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3e750();
  puRam0000000113839430 = puVar3;
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3e750();
  puRam0000000113839438 = puVar3;
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3e750();
  puRam0000000113839440 = puVar3;
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3e750();
  puRam0000000113839448 = puVar3;
  func_0x000107c61170(puVar2);
  uRam00000001138394e8 = 3;
  if (cRam0000000113839536 == '\0') {
    uRam00000001138394e8 = 0;
  }
  uRam0000000113839528 = 2;
  uRam0000000113839538 = 0xffffffffffffffff;
  uRam00000001138394f0 = 0;
  uRam00000001138394f8 = 0xffffffffffffffff;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61160();
  uVar1 = puRam0000000113839510;
  puRam0000000113839510 = puVar2;
  func_0x000107c61170(uVar1);
  uRam0000000113839508 = 0;
  uRam0000000113839518 = 0;
  uRam0000000113839520 = 0;
  if ((int)param_1 != 0) {
    uRam00000001138394e8 = 2;
    func_0x000107c35020();
    uRam0000000113839500 = 0;
    uRam0000000113839530 = 0;
    uRam0000000113839533 = 0;
    uRam00000001138394f0 = 0;
    uRam00000001138394f8 = 0xffffffffffffffff;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar2 = puRam0000000113839510;
    puRam0000000113839510 = puVar3;
    _objc_release(puVar2);
    uRam0000000113839508 = 0;
    uRam0000000113839518 = 0;
    uRam0000000113839520 = 0;
    return;
  }
  return;
}



/* Entry: 100089c44; end: 100089cab;  */

undefined8 FUN_100089c44(int param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61098();
  func_0x000107c61688();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



/* Entry: 100089cac; end: 100089cb3; -[SCStartupJournalManager signalAppDidFinishLaunching] */

/* WARNING: Removing unreachable block (ram,0x000100074c04) */

void FUN_100089cac(undefined8 param_1)

{
  undefined1 auStack_90 [96];
  
  func_0x000107c61174();
  FUN_100074c20(auStack_90,3,1);
  FUN_100074ef8(auStack_90);
  func_0x000107c61170(param_1);
  FUN_100076b30(auStack_90);
  return;
}



/* Entry: 100089cb4; end: 10008a0fb;  */

void FUN_100089cb4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *unaff_x20;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined1 auStack_2b0 [96];
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
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
  undefined8 uStack_f0;
  long lStack_e8;
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
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar11 = ((ulong)unaff_x20[3] >> 1) - unaff_x20[2];
  if (SBORROW8((ulong)unaff_x20[3] >> 1,unaff_x20[2])) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10008a0f8);
    (*pcVar3)();
  }
  uVar14 = *(ulong *)(param_1 + 0x20);
  uVar17 = *(ulong *)(param_1 + 0x18) >> 1;
  if (uVar14 == uVar17) {
    lStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x10);
    if ((long)uVar14 < lVar8 || (long)uVar17 <= (long)uVar14) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10008a0fc);
      (*pcVar3)();
    }
    lVar12 = *(long *)(param_1 + 8);
    puVar9 = (undefined8 *)(lVar12 + uVar14 * 0x60);
    uStack_128 = puVar9[1];
    uStack_130 = *puVar9;
    uStack_118 = puVar9[3];
    uStack_120 = puVar9[2];
    uStack_108 = puVar9[5];
    uStack_110 = puVar9[4];
    uStack_f8 = puVar9[7];
    uStack_100 = puVar9[6];
    lStack_e8 = puVar9[9];
    uStack_f0 = puVar9[8];
    uStack_d8 = puVar9[0xb];
    uStack_e0 = puVar9[10];
    lStack_88 = puVar9[9];
    uStack_90 = puVar9[8];
    uStack_78 = puVar9[0xb];
    uStack_80 = puVar9[10];
    uStack_a8 = puVar9[5];
    uStack_b0 = puVar9[4];
    uStack_98 = puVar9[7];
    uStack_a0 = puVar9[6];
    uStack_c8 = puVar9[1];
    uStack_d0 = *puVar9;
    uStack_b8 = puVar9[3];
    uStack_c0 = puVar9[2];
    FUN_100074ff8(&uStack_130,&uStack_190);
    if (lStack_88 != 0) {
      uVar14 = uVar14 + 1;
      do {
        lVar7 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10008a0dc);
          (*pcVar3)();
        }
        lVar4 = lVar11;
        func_0x0001045330f4(lVar11,lVar7,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
        lVar5 = lVar4;
        lStack_198 = lVar4;
        func_0x0001045332ac();
        func_0x000104532e30(&lStack_198,lVar11,0,lVar5,lVar7);
        func_0x000107c61574(lVar7);
        func_0x000107c61574(lVar4);
        lVar7 = unaff_x20[2];
        uVar2 = unaff_x20[3];
        uVar10 = uVar2 >> 1;
        lVar4 = uVar10 - lVar7;
        if (SBORROW8(uVar10,lVar7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10008a0e0);
          (*pcVar3)();
        }
        puVar1 = (undefined *)*unaff_x20;
        lVar5 = unaff_x20[1];
        lVar16 = lVar4;
        if ((uVar2 & 1) != 0) {
          func_0x000107c605fc(0);
          puVar6 = puVar1;
          func_0x000107c615f0();
          func_0x000107c61480();
          if (puVar6 == (undefined *)0x0) {
            func_0x000107c615e8(puVar1);
            puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          lVar13 = *(long *)(puVar6 + 0x10);
          if ((undefined *)(lVar5 + lVar7 * 0x60 + lVar4 * 0x60) == puVar6 + lVar13 * 0x60 + 0x20) {
            uVar15 = *(ulong *)(puVar6 + 0x18);
            func_0x000107c61574();
            lVar13 = (uVar15 >> 1) - lVar13;
            lVar16 = lVar4 + lVar13;
            if (SCARRY8(lVar4,lVar13)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10008a0f4);
              (*pcVar3)();
            }
          }
          else {
            func_0x000107c61574();
          }
        }
        uVar15 = uVar14;
        if ((lStack_88 != 0) && (lVar11 < lVar16)) {
          puVar9 = (undefined8 *)(lVar12 + uVar14 * 0x60);
          puVar18 = (undefined8 *)(lVar5 + lVar7 * 0x60 + lVar11 * 0x60 + 0x50);
          do {
            lVar7 = lStack_88;
            lVar11 = lVar11 + 1;
            uStack_168 = uStack_a8;
            uStack_170 = uStack_b0;
            uStack_158 = uStack_98;
            uStack_160 = uStack_a0;
            lStack_148 = lStack_88;
            uStack_150 = uStack_90;
            uStack_138 = uStack_78;
            uStack_140 = uStack_80;
            uStack_188 = uStack_c8;
            uStack_190 = uStack_d0;
            uStack_178 = uStack_b8;
            uStack_180 = uStack_c0;
            uStack_108 = uStack_a8;
            uStack_110 = uStack_b0;
            uStack_f8 = uStack_98;
            uStack_100 = uStack_a0;
            uStack_128 = uStack_c8;
            uStack_130 = uStack_d0;
            uStack_118 = uStack_b8;
            uStack_120 = uStack_c0;
            uStack_f0 = uStack_90;
            lStack_e8 = lStack_88;
            uStack_d8 = uStack_78;
            uStack_e0 = uStack_80;
            uStack_1f0 = uStack_80;
            uStack_1e8 = uStack_78;
            uStack_1e0 = uStack_d0;
            uStack_1d8 = uStack_c8;
            uStack_1d0 = uStack_c0;
            uStack_1c8 = uStack_b8;
            uStack_1c0 = uStack_b0;
            uStack_1b8 = uStack_a8;
            uStack_1b0 = uStack_a0;
            uStack_1a8 = uStack_98;
            uStack_1a0 = uStack_90;
            FUN_100074ff8(&uStack_130,&uStack_250);
            FUN_10006c168(&uStack_190,0x113084440,&UNK_10dd15958);
            puVar18[-5] = uStack_1b8;
            puVar18[-6] = uStack_1c0;
            puVar18[-3] = uStack_1a8;
            puVar18[-4] = uStack_1b0;
            puVar18[-9] = uStack_1d8;
            puVar18[-10] = uStack_1e0;
            puVar18[-7] = uStack_1c8;
            puVar18[-8] = uStack_1d0;
            puVar18[-2] = uStack_1a0;
            puVar18[-1] = lVar7;
            puVar18[1] = uStack_1e8;
            *puVar18 = uStack_1f0;
            if (uVar17 == uVar15) {
              lStack_88 = 0;
              uStack_90 = 0;
              uStack_78 = 0;
              uStack_80 = 0;
              uStack_a8 = 0;
              uStack_b0 = 0;
              uStack_98 = 0;
              uStack_a0 = 0;
              uStack_c8 = 0;
              uStack_d0 = 0;
              uStack_b8 = 0;
              uStack_c0 = 0;
              lVar7 = lVar11 - lVar4;
              uVar14 = uVar17;
              if (!SBORROW8(lVar11,lVar4)) goto LAB_10008a014;
              goto LAB_10008a0e0;
            }
            if (((long)uVar14 < lVar8) || ((long)uVar17 <= (long)uVar15)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10008a0d8);
              (*pcVar3)();
            }
            uStack_248 = puVar9[1];
            uStack_250 = *puVar9;
            uStack_238 = puVar9[3];
            uStack_240 = puVar9[2];
            uStack_228 = puVar9[5];
            uStack_230 = puVar9[4];
            uStack_218 = puVar9[7];
            uStack_220 = puVar9[6];
            uStack_208 = puVar9[9];
            uStack_210 = puVar9[8];
            uStack_1f8 = puVar9[0xb];
            uStack_200 = puVar9[10];
            lStack_88 = puVar9[9];
            uStack_90 = puVar9[8];
            uStack_78 = puVar9[0xb];
            uStack_80 = puVar9[10];
            uStack_a8 = puVar9[5];
            uStack_b0 = puVar9[4];
            uStack_98 = puVar9[7];
            uStack_a0 = puVar9[6];
            uStack_c8 = puVar9[1];
            uStack_d0 = *puVar9;
            uStack_b8 = puVar9[3];
            uStack_c0 = puVar9[2];
            uVar15 = uVar15 + 1;
            FUN_100074ff8(&uStack_250,auStack_2b0);
          } while ((lStack_88 != 0) &&
                  (puVar9 = puVar9 + 0xc, puVar18 = puVar18 + 0xc, lVar11 < lVar16));
        }
        lVar7 = lVar11 - lVar4;
        uVar14 = uVar15;
        if (SBORROW8(lVar11,lVar4)) {
LAB_10008a0e0:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10008a0e4);
          uStack_1f0 = uStack_80;
          uStack_1e8 = uStack_78;
          uStack_1e0 = uStack_d0;
          uStack_1d8 = uStack_c8;
          uStack_1d0 = uStack_c0;
          uStack_1c8 = uStack_b8;
          uStack_1c0 = uStack_b0;
          uStack_1b8 = uStack_a8;
          uStack_1b0 = uStack_a0;
          uStack_1a8 = uStack_98;
          uStack_1a0 = uStack_90;
          (*pcVar3)();
        }
LAB_10008a014:
        lVar4 = lStack_88;
        uStack_1f0 = uStack_80;
        uStack_1e8 = uStack_78;
        uStack_1e0 = uStack_d0;
        uStack_1d8 = uStack_c8;
        uStack_1d0 = uStack_c0;
        uStack_1c8 = uStack_b8;
        uStack_1c0 = uStack_b0;
        uStack_1b8 = uStack_a8;
        uStack_1b0 = uStack_a0;
        uStack_1a8 = uStack_98;
        uStack_1a0 = uStack_90;
        if (lVar7 != 0) {
          func_0x000107c605fc(0);
          puVar6 = puVar1;
          func_0x000107c615f0();
          func_0x000107c61480();
          if (puVar6 == (undefined *)0x0) {
            func_0x000107c615e8(puVar1);
            puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          if (SCARRY8(*(long *)(puVar6 + 0x10),lVar7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10008a0e8);
            (*pcVar3)();
          }
          *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + lVar7;
          func_0x000107c61574();
          if (SCARRY8(uVar10,lVar7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10008a0ec);
            (*pcVar3)();
          }
          if ((long)(uVar10 + lVar7) < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10008a0f0);
            (*pcVar3)();
          }
          unaff_x20[3] = uVar2 & 1 | (uVar10 + lVar7) * 2;
        }
      } while (lVar4 != 0);
    }
  }
  FUN_10006c168(param_1,0x113084438,&UNK_10dd15950);
  FUN_10006c168(&uStack_d0,0x113084440,&UNK_10dd15958);
  return;
}



/* Entry: 10008a0fc; end: 10008a147; -[SCTracer beginAsyncTrace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008a0fc(long param_1)

{
  param_1 = param_1 + _DAT_11309bf58;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c3e750();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 10008a148; end: 10008a14f; -[SCAppStartupState sourceNotification] */

undefined8 FUN_10008a148(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10008a150; end: 10008a1bf; -[SCDelayedEntryPointHandlerContextStreamImpl contextReadyWithStartupType:targetScreen:fromNotification:foregroundLaunch:] */

void FUN_10008a150(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6bd0;
  func_0x000107c610f4(PTR_PTR_1126b6bd0);
  func_0x000107c48c4c();
  func_0x000107c4d664(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10008a1c0; end: 10008a223; -[SCDelayedEntryPointHandlerContext initWithTargetScreen:startupType:fromNotification:foregroundLaunch:] */

void FUN_10008a1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e7348;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
  }
  return;
}



/* Entry: 10008a224; end: 10008a26f; -[SCBehaviorSubject next:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008a224(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c567d0(param_1,param_2,param_3);
  func_0x000107c4d664(*(undefined8 *)(param_1 + _DAT_1127967f8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10008a270; end: 10008a27b; -[SCBehaviorSubject setMostRecentValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008a270(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10008a27c; end: 10008a283; -[SCAssertingObserver next:] */

void FUN_10008a27c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_next__112614028);
  return;
}



/* Entry: 10008a284; end: 10008a333; -[SCMulticastObserver next:] */

void FUN_10008a284(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lStack_48;
  long lStack_40;
  
  func_0x000107c61174(param_3);
  func_0x000107c3c044(&lStack_48,param_1);
  for (lVar2 = lStack_48; lVar2 != lStack_40; lVar2 = lVar2 + 8) {
    lVar1 = lVar2;
    func_0x000107c61148(lVar2);
    func_0x000107c4d664();
    func_0x000107c61170(lVar1);
  }
  FUN_10008a518(&lStack_48);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10008a334; end: 10008a3e7; -[SCMulticastObserver _observersCopy] */

void FUN_10008a334(ulong *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  
  func_0x000107c60d88(param_2 + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar5 = *(long *)(param_2 + 0x48);
  lVar1 = *(long *)(param_2 + 0x50);
  lVar2 = lVar1 - lVar5;
  if (lVar2 != 0) {
    uVar4 = lVar2 >> 3;
    if (uVar4 >> 0x3d != 0) {
      func_0x000107c312c0();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10008a3cc);
      (*pcVar3)();
    }
    FUN_10007eed0();
    *param_1 = uVar4;
    param_1[2] = uVar4 + param_3 * 8;
    do {
      func_0x000107c6111c(uVar4,lVar5);
      lVar5 = lVar5 + 8;
      uVar4 = uVar4 + 8;
    } while (lVar5 != lVar1);
    param_1[1] = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 8);
  return;
}



/* Entry: 10008a3e8; end: 10008a473; -[SCTakeObserver next:] */

void FUN_10008a3e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c60d88(param_1 + 0x20);
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar1 = *(long *)(param_1 + 0x18) + 1;
  *(ulong *)(param_1 + 0x18) = uVar1;
  func_0x000107c60d8c(param_1 + 0x20);
  if ((uVar1 <= uVar2) &&
     (func_0x000107c4d664(*(undefined8 *)(param_1 + 8),param_2,param_3), uVar1 == uVar2)) {
    func_0x000107c3fedc(*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10008a474; end: 10008a48b; -[SCAnonymousObserver next:] */

void FUN_10008a474(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010008a484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 10008a48c; end: 10008a4d3;  */

/* WARNING: Possible PIC construction at 0x00010008a4c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010008a4c4) */

void FUN_10008a48c(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3ccb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10008a4d4; end: 10008a503; -[SCDelayedEntryPointHandler _updateStartupContext:] */

void FUN_10008a4d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10008a504; end: 10008a517; -[SCAnonymousObserver complete] */

void FUN_10008a504(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010008a510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10008a518; end: 10008a57f;  */

void FUN_10008a518(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        func_0x000107c61120(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10008a580; end: 10008a5cf; -[SCSystemServicesProviderImplementation buildSystemServicesWithSystemScope:] */

/* WARNING: Possible PIC construction at 0x00010008a5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010008a5bc) */

void FUN_10008a580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10008a5d0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


