/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107478ae8; end: 107478aef;  */

void FUN_107478ae8(void)

{
  return;
}



/* Entry: 107478af0; end: 107478b1f;  */

void FUN_107478af0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010747a070();
  func_0x000107479c38(&PTR_FUN_1109b3740);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  return;
}



/* Entry: 107478b20; end: 107478b4b;  */

void FUN_107478b20(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_FUN_1109b3740;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107478b4c; end: 107478bb7;  */

void FUN_107478b4c(long param_1)

{
  long unaff_x19;
  undefined1 unaff_w20;
  undefined1 auStack_38 [24];
  
  func_0x000107479cac();
  FUN_1073c67e4(auStack_38,*(undefined8 *)(param_1 + 0x18));
  func_0x0001001684f0();
  func_0x00010778196c();
  FUN_10746f344();
  **(undefined1 **)(unaff_x19 + 8) = unaff_w20;
  FUN_10747758c(auStack_38);
  return;
}



/* Entry: 107478bb8; end: 107478bdf;  */

void FUN_107478bb8(undefined8 param_1)

{
  func_0x000107479cd8();
  func_0x000107479ca4(param_1,&PTR_DAT_1109b37a0);
  func_0x000107479b00();
  return;
}



/* Entry: 107478be0; end: 107478bf3;  */

undefined ** FUN_107478be0(void)

{
  return &PTR_DAT_1109b37a0;
}



/* Entry: 107478bf4; end: 107478c17;  */

void FUN_107478bf4(void)

{
  func_0x00010747a224();
  func_0x000107479c38(&PTR_DAT_1109b37c0);
  return;
}



/* Entry: 107478c18; end: 107478c33;  */

void FUN_107478c18(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109b37c0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107478c34; end: 107478e63;  */

void FUN_107478c34(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  undefined1 **ppuVar6;
  long *plVar7;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long *unaff_x21;
  long lVar8;
  long lStack_168;
  long lStack_160;
  undefined1 uStack_149;
  undefined1 *puStack_148;
  long lStack_140;
  undefined1 auStack_138 [48];
  undefined4 uStack_108;
  undefined4 uStack_104;
  long *plStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined1 uStack_a0;
  long *plStack_98;
  long alStack_90 [7];
  undefined8 uStack_58;
  
  func_0x000107479adc();
  uVar3 = *(byte *)(param_3 + 0x158) - 3;
  uVar5 = uVar3 == 1;
  uStack_58 = extraout_x8;
  if (uVar3 < 2) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x000104c2fe00(alStack_90,**(undefined8 **)(param_1 + 8));
    unaff_x21 = &lStack_140;
    FUN_107478ef8(&lStack_140,alStack_90);
    FUN_10746eb20(&lStack_168,param_3);
    lVar4 = lStack_160;
    for (; lVar8 = lVar4, lStack_168 != lVar4; lStack_168 = lStack_168 + 0x88) {
      uVar3 = *(uint *)(lStack_168 + 0x80);
      lVar8 = lStack_168;
      if (uVar3 == 0xffffffff || (uint)uStack_c0 != uVar3) {
        if ((uint)uStack_c0 == uVar3) break;
      }
      else {
        ppuVar6 = &puStack_148;
        puStack_148 = &uStack_149;
        (*(code *)(&PTR_DAT_1109b3820)[uVar3])(ppuVar6,lStack_168 + 8,auStack_138);
        if (((ulong)ppuVar6 & 1) != 0) break;
      }
    }
    FUN_10747305c(&lStack_168);
    FUN_1074730f4();
    func_0x00010747a7f0();
    uVar5 = lStack_160 == lVar8;
    if (!(bool)uVar5) {
      func_0x000107479fdc(&lStack_140);
      cVar2 = *(char *)(*(long *)(lStack_140 + 0x10) + 0x98);
      unaff_x21 = &lStack_140;
      func_0x0001074737a0(&lStack_140);
      uVar5 = cVar2 == '\0';
      uStack_108 = 1;
      if (!(bool)uVar5) {
        uStack_108 = 2;
      }
      plVar7 = &lStack_140;
      func_0x000104c2fe00(plVar7,param_3 + 0xc0);
      uStack_104 = *(undefined4 *)(param_3 + 0xf8);
      func_0x00010747a8ec();
      func_0x00010747a8ac();
      func_0x000107479fdc(alStack_90);
      func_0x000107479cc8(*(undefined8 *)(alStack_90[0] + 0x2b0));
      (*extraout_x8_00)();
      uStack_c8 = 1;
      uStack_a0 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      plStack_d0 = plVar7;
      __ZNSt3__16chrono12steady_clock3nowEv();
      plStack_98 = plVar7;
      func_0x0001074737a0(alStack_90);
      FUN_10746b934(*(undefined8 *)(lVar1 + 0x248),&lStack_140);
      FUN_107470bbc(lVar1 + 0x328,&lStack_140);
      func_0x000107470ee8();
    }
  }
  func_0x000107479a9c(uStack_58);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001074737a0(alStack_90);
  func_0x0001056d1ce4(unaff_x21 + 0xb);
  func_0x00010747a8f8();
  func_0x000104c2f714(&lStack_140);
  func_0x000107479c68();
  func_0x000107479cd8();
  func_0x000107479ca4();
  func_0x000107479b00();
  return;
}



/* Entry: 107478e64; end: 107478e8b;  */

void FUN_107478e64(undefined8 param_1)

{
  func_0x000107479cd8();
  func_0x000107479ca4(param_1,&PTR_DAT_1109b3840);
  func_0x000107479b00();
  return;
}



/* Entry: 107478e8c; end: 107478e9b;  */

undefined ** FUN_107478e8c(void)

{
  return &PTR_DAT_1109b3840;
}



/* Entry: 107478e9c; end: 107478eef;  */

/* WARNING: Possible PIC construction at 0x000107478ec4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107478ec8) */
/* WARNING: Removing unreachable block (ram,0x000107478ecc) */

bool FUN_107478e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  long *plVar7;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010747a684();
  func_0x000104c32db4(param_2,param_3);
  if ((int)param_2 == 0) {
    return false;
  }
  cVar6 = *(char *)(unaff_x20 + 0x50);
  if (cVar6 != *(char *)(unaff_x19 + 0x50) || cVar6 == '\0') {
    return cVar6 == *(char *)(unaff_x19 + 0x50);
  }
  bVar4 = *(byte *)(unaff_x20 + 0x4f);
  uVar1 = *(ulong *)(unaff_x20 + 0x40);
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)(unaff_x19 + 0x4f);
  uVar2 = *(ulong *)(unaff_x19 + 0x40);
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar7 = (long *)*(long *)(unaff_x20 + 0x38);
    if (-1 < (char)bVar4) {
      plVar7 = (long *)(unaff_x20 + 0x38);
    }
    plVar3 = (long *)*(long *)(unaff_x19 + 0x38);
    if (-1 < (char)bVar5) {
      plVar3 = (long *)(unaff_x19 + 0x38);
    }
    func_0x000107c610b0(plVar7,plVar3);
    return (int)plVar7 == 0;
  }
  return false;
}



/* Entry: 107478ef0; end: 107478ef7;  */

bool FUN_107478ef0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000104c2fe38(param_2,param_3);
  func_0x000104c345b0();
  func_0x000104c2fe38();
  return unaff_x20 == param_2;
}



/* Entry: 107478ef8; end: 107478f1f;  */

long FUN_107478ef8(long param_1)

{
  FUN_107478f20(param_1 + 8);
  return param_1;
}



/* Entry: 107478f20; end: 107478f3b;  */

void FUN_107478f20(long param_1)

{
  func_0x000104c318bc();
  *(undefined4 *)(param_1 + 0x78) = 3;
  return;
}



/* Entry: 107478f3c; end: 107478f43;  */

void FUN_107478f3c(void)

{
  return;
}



/* Entry: 107478f44; end: 107478f63;  */

void FUN_107478f44(undefined8 *param_1)

{
  func_0x00010747a0a0();
  *param_1 = &PTR_FUN_1109b3860;
  return;
}



/* Entry: 107478f64; end: 107478f87;  */

void FUN_107478f64(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109b3860;
  return;
}



/* Entry: 107478f88; end: 107478faf;  */

void FUN_107478f88(undefined8 param_1)

{
  func_0x000107479cd8();
  func_0x000107479ca4(param_1,&PTR_DAT_1109b38d0);
  func_0x000107479b00();
  return;
}



/* Entry: 107478fb0; end: 107478fbb;  */

undefined ** FUN_107478fb0(void)

{
  return &PTR_DAT_1109b38d0;
}



/* Entry: 107478fbc; end: 10747900f;  */

void FUN_107478fbc(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x000107479bd0();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x000107479b8c(uVar1);
  return;
}



/* Entry: 107479010; end: 107479247;  */

void FUN_107479010(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4,
                  long param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if (1 < param_3) {
    if (param_3 == 2) {
      puVar12 = param_2 + -5;
      puVar5 = puVar12;
      func_0x000107479260(puVar12,param_1);
      if ((int)puVar5 != 0) {
        uVar22 = param_1[1];
        uVar21 = *param_1;
        uVar24 = param_1[3];
        uVar23 = param_1[2];
        uVar7 = param_1[4];
        uVar9 = param_2[-1];
        uVar27 = *puVar12;
        uVar26 = param_2[-2];
        uVar25 = param_2[-3];
        param_1[1] = param_2[-4];
        *param_1 = uVar27;
        param_1[3] = uVar26;
        param_1[2] = uVar25;
        param_1[4] = uVar9;
        param_2[-1] = uVar7;
        param_2[-4] = uVar22;
        *puVar12 = uVar21;
        param_2[-2] = uVar24;
        param_2[-3] = uVar23;
      }
    }
    else if ((long)param_3 < 0x81) {
      if (param_1 != param_2) {
        lVar16 = 0;
        puVar5 = param_1;
        while (puVar12 = puVar5 + 5, puVar12 != param_2) {
          puVar2 = puVar12;
          func_0x000107479260();
          if ((int)puVar2 != 0) {
            uStack_88 = puVar5[6];
            uStack_90 = *puVar12;
            uStack_78 = puVar5[8];
            uStack_80 = puVar5[7];
            uStack_70 = puVar5[9];
            lVar18 = lVar16;
            do {
              lVar13 = lVar18;
              puVar5 = (undefined8 *)((long)param_1 + lVar13);
              puVar5[6] = puVar5[1];
              puVar5[5] = *puVar5;
              puVar5[8] = puVar5[3];
              puVar5[7] = puVar5[2];
              puVar5[9] = puVar5[4];
              puVar5 = param_1;
              if (lVar13 == 0) goto LAB_10747910c;
              puVar5 = &uStack_90;
              func_0x000107479260(puVar5,lVar13 + -0x28 + (long)param_1);
              lVar18 = lVar13 + -0x28;
            } while (((ulong)puVar5 & 1) != 0);
            puVar5 = (undefined8 *)((long)param_1 + lVar13);
LAB_10747910c:
            puVar5[1] = uStack_88;
            *puVar5 = uStack_90;
            puVar5[3] = uStack_78;
            puVar5[2] = uStack_80;
            puVar5[4] = uStack_70;
          }
          lVar16 = lVar16 + 0x28;
          puVar5 = puVar12;
        }
      }
    }
    else {
      uVar17 = param_3 >> 1;
      puVar5 = param_1 + uVar17 * 5;
      lVar16 = param_3 - (param_3 >> 1);
      if (param_5 < (long)param_3) {
        FUN_107479010();
        FUN_107479010(puVar5,param_2,lVar16,param_4,param_5);
        do {
          puVar12 = param_1;
          uVar20 = uVar17;
          puVar2 = puVar5;
          lVar18 = lVar16;
          if (lVar16 == 0) {
            return;
          }
          while( true ) {
            param_1 = puVar12;
            uVar1 = uVar20;
            if (lVar18 <= param_5 || (long)uVar20 <= param_5) {
              if ((long)uVar20 <= lVar18) {
                lVar16 = -(long)param_4;
                puVar3 = param_4;
                for (puVar5 = puVar12; puVar5 != puVar2; puVar5 = puVar5 + 5) {
                  uVar9 = puVar5[1];
                  uVar7 = *puVar5;
                  uVar22 = puVar5[3];
                  uVar21 = puVar5[2];
                  puVar3[4] = puVar5[4];
                  puVar3[1] = uVar9;
                  *puVar3 = uVar7;
                  puVar3[3] = uVar22;
                  puVar3[2] = uVar21;
                  puVar3 = puVar3 + 5;
                  lVar16 = lVar16 + -0x28;
                }
                while( true ) {
                  if (puVar3 == param_4) {
                    return;
                  }
                  if (puVar2 == param_2) break;
                  puVar5 = puVar2;
                  func_0x000107479260(puVar2,param_4);
                  if ((int)puVar5 == 0) {
                    uVar9 = param_4[1];
                    uVar7 = *param_4;
                    uVar22 = param_4[3];
                    uVar21 = param_4[2];
                    puVar12[4] = param_4[4];
                    puVar12[1] = uVar9;
                    *puVar12 = uVar7;
                    puVar12[3] = uVar22;
                    puVar12[2] = uVar21;
                    param_4 = param_4 + 5;
                  }
                  else {
                    func_0x00010747aaf8();
                    puVar2 = puVar2 + 5;
                  }
                  puVar12 = puVar12 + 5;
                }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)PTR__memmove_11034c660)(puVar12,param_4,-((long)param_4 + lVar16));
                return;
              }
              lVar16 = 0;
              while( true ) {
                puVar5 = (undefined8 *)((long)puVar2 + lVar16);
                puVar3 = (undefined8 *)((long)param_4 + lVar16);
                if (puVar5 == param_2) break;
                uVar9 = puVar5[1];
                uVar7 = *puVar5;
                uVar22 = puVar5[3];
                uVar21 = puVar5[2];
                puVar3[4] = puVar5[4];
                puVar3[1] = uVar9;
                *puVar3 = uVar7;
                puVar3[3] = uVar22;
                puVar3[2] = uVar21;
                lVar16 = lVar16 + 0x28;
              }
              while( true ) {
                puVar5 = param_2 + -5;
                if (puVar3 == param_4) {
                  return;
                }
                if (puVar2 == puVar12) break;
                puVar14 = puVar2 + -5;
                puVar15 = puVar3 + -5;
                puVar6 = puVar15;
                FUN_1074799c0(puVar15,puVar14);
                puVar4 = puVar14;
                if ((int)puVar6 == 0) {
                  puVar3 = puVar15;
                  puVar14 = puVar2;
                  puVar4 = puVar15;
                }
                puVar2 = puVar14;
                uVar7 = puVar4[4];
                uVar22 = *puVar4;
                uVar21 = puVar4[3];
                uVar9 = puVar4[2];
                param_2[-4] = puVar4[1];
                *puVar5 = uVar22;
                param_2[-2] = uVar21;
                param_2[-3] = uVar9;
                param_2[-1] = uVar7;
                param_2 = puVar5;
              }
              for (; puVar3 != param_4; puVar3 = puVar3 + -5) {
                uVar9 = puVar3[-4];
                uVar7 = puVar3[-5];
                uVar22 = puVar3[-2];
                uVar21 = puVar3[-3];
                puVar5[4] = puVar3[-1];
                puVar5[1] = uVar9;
                *puVar5 = uVar7;
                puVar5[3] = uVar22;
                puVar5[2] = uVar21;
                puVar5 = puVar5 + -5;
              }
              return;
            }
            while( true ) {
              if (uVar1 == 0) {
                return;
              }
              puVar5 = puVar2;
              func_0x00010747a3e8();
              if (((ulong)puVar5 & 1) != 0) break;
              puVar12 = puVar12 + 5;
              param_1 = param_1 + 5;
              uVar1 = uVar1 - 1;
            }
            if ((long)uVar1 < lVar18) {
              lVar16 = lVar18 / 2;
              puVar3 = puVar2 + lVar16 * 5;
              uVar17 = ((long)puVar2 - (long)puVar12) / 0x28;
              puVar5 = param_1;
              while (uVar17 != 0) {
                uVar19 = uVar17 >> 1;
                puVar4 = puVar3;
                FUN_1074799c0(puVar3,puVar5 + uVar19 * 5);
                uVar20 = uVar17 + (uVar17 >> 1 ^ 0xffffffffffffffff);
                uVar17 = uVar19;
                if ((int)puVar4 == 0) {
                  uVar17 = uVar20;
                  puVar5 = puVar5 + uVar19 * 5 + 5;
                }
              }
              uVar17 = ((long)puVar5 - (long)puVar12) / 0x28;
            }
            else {
              if (uVar1 == 1) {
                uStack_88 = param_1[1];
                uStack_90 = *param_1;
                uStack_78 = param_1[3];
                uStack_80 = param_1[2];
                uStack_70 = param_1[4];
                func_0x00010747aaf8();
                puVar2[4] = uStack_70;
                puVar2[1] = uStack_88;
                *puVar2 = uStack_90;
                puVar2[3] = uStack_78;
                puVar2[2] = uStack_80;
                return;
              }
              uVar17 = (long)uVar1 / 2;
              puVar5 = param_1 + uVar17 * 5;
              puVar12 = puVar2;
              uVar20 = ((long)param_2 - (long)puVar2) / 0x28;
              while (puVar3 = puVar12, uVar20 != 0) {
                uVar19 = uVar20 >> 1;
                puVar12 = puVar3 + uVar19 * 5;
                puVar4 = puVar12;
                func_0x000107479260(puVar12,puVar5);
                puVar12 = puVar12 + 5;
                uVar20 = uVar20 + (uVar20 >> 1 ^ 0xffffffffffffffff);
                if ((int)puVar4 == 0) {
                  puVar12 = puVar3;
                  uVar20 = uVar19;
                }
              }
              lVar16 = ((long)puVar3 - (long)puVar2) / 0x28;
            }
            puVar12 = puVar3;
            if ((puVar5 != puVar2) && (puVar12 = puVar5, puVar2 != puVar3)) {
              if (puVar5 + 5 == puVar2) {
                uStack_88 = puVar5[1];
                uStack_90 = *puVar5;
                uStack_78 = puVar5[3];
                uStack_80 = puVar5[2];
                uStack_70 = puVar5[4];
                _memmove(puVar5,puVar5 + 5,(long)puVar3 - (long)puVar2);
                puVar12 = (undefined8 *)((long)puVar5 + ((long)puVar3 - (long)puVar2));
                puVar12[1] = uStack_88;
                *puVar12 = uStack_90;
                puVar12[3] = uStack_78;
                puVar12[2] = uStack_80;
                puVar12[4] = uStack_70;
              }
              else if (puVar2 + 5 == puVar3) {
                uStack_88 = puVar3[-4];
                uStack_90 = puVar3[-5];
                uStack_78 = puVar3[-2];
                uStack_80 = puVar3[-3];
                uStack_70 = puVar3[-1];
                lVar13 = (long)puVar3 + (-0x28 - (long)puVar5);
                if (lVar13 != 0) {
                  _memmove(puVar3 + (lVar13 / -0x28) * 5,puVar5);
                }
                puVar5[4] = uStack_70;
                puVar5[1] = uStack_88;
                *puVar5 = uStack_90;
                puVar5[3] = uStack_78;
                puVar5[2] = uStack_80;
                puVar12 = puVar3 + (lVar13 / -0x28) * 5;
              }
              else {
                lVar8 = (long)puVar2 - (long)puVar5;
                lVar13 = ((long)puVar3 - (long)puVar2) / 0x28;
                puVar4 = puVar2;
                puVar6 = puVar5;
                lVar10 = lVar8 / 0x28;
                if (lVar8 / 0x28 == lVar13) {
                  for (; puVar12 = puVar2, puVar6 != puVar2 && puVar4 != puVar3; puVar6 = puVar6 + 5
                      ) {
                    uStack_88 = puVar6[1];
                    uStack_90 = *puVar6;
                    uStack_78 = puVar6[3];
                    uStack_80 = puVar6[2];
                    uStack_70 = puVar6[4];
                    uVar9 = puVar4[1];
                    uVar7 = *puVar4;
                    uVar22 = puVar4[3];
                    uVar21 = puVar4[2];
                    puVar6[4] = puVar4[4];
                    puVar6[1] = uVar9;
                    *puVar6 = uVar7;
                    puVar6[3] = uVar22;
                    puVar6[2] = uVar21;
                    puVar4[4] = uStack_70;
                    puVar4[1] = uStack_88;
                    *puVar4 = uStack_90;
                    puVar4[3] = uStack_78;
                    puVar4[2] = uStack_80;
                    puVar4 = puVar4 + 5;
                  }
                }
                else {
                  do {
                    lVar11 = lVar13;
                    lVar13 = 0;
                    if (lVar11 != 0) {
                      lVar13 = lVar10 / lVar11;
                    }
                    lVar13 = lVar10 - lVar13 * lVar11;
                    lVar10 = lVar11;
                  } while (lVar13 != 0);
                  puVar12 = puVar5 + lVar11 * 5;
                  while (puVar12 != puVar5) {
                    puVar6 = puVar12 + -5;
                    uStack_88 = puVar12[-4];
                    uStack_90 = puVar12[-5];
                    uStack_78 = puVar12[-2];
                    uStack_80 = puVar12[-3];
                    uStack_70 = puVar12[-1];
                    puVar4 = puVar6;
                    puVar12 = (undefined8 *)(lVar8 + (long)puVar6);
                    do {
                      puVar14 = puVar12;
                      uVar9 = puVar14[1];
                      uVar7 = *puVar14;
                      uVar22 = puVar14[3];
                      uVar21 = puVar14[2];
                      puVar4[4] = puVar14[4];
                      puVar4[1] = uVar9;
                      *puVar4 = uVar7;
                      puVar4[3] = uVar22;
                      puVar4[2] = uVar21;
                      puVar12 = (undefined8 *)((long)puVar14 + lVar8);
                      if ((long)puVar3 - (long)puVar14 <= lVar8) {
                        puVar12 = (undefined8 *)((long)puVar2 - ((long)puVar3 - (long)puVar14));
                      }
                      puVar4 = puVar14;
                    } while (puVar12 != puVar6);
                    puVar14[4] = uStack_70;
                    puVar14[1] = uStack_88;
                    *puVar14 = uStack_90;
                    puVar14[3] = uStack_78;
                    puVar14[2] = uStack_80;
                    puVar12 = puVar6;
                  }
                  puVar12 = (undefined8 *)(((long)puVar3 - (long)puVar2) + (long)puVar5);
                }
              }
            }
            uVar20 = uVar1 - uVar17;
            lVar13 = lVar18 - lVar16;
            if ((long)((lVar18 - (uVar17 + lVar16)) + uVar1) <= (long)(uVar17 + lVar16)) break;
            FUN_10747947c(param_1,puVar5,puVar12,uVar17,lVar16,param_4,param_5);
            puVar2 = puVar3;
            lVar18 = lVar13;
            if (lVar13 == 0) {
              return;
            }
          }
          FUN_10747947c(puVar12,puVar3,param_2,uVar20,lVar13,param_4,param_5);
          param_2 = puVar12;
        } while( true );
      }
      FUN_1074792a4(param_1,puVar5,uVar17);
      puVar12 = param_4 + uVar17 * 5;
      FUN_1074792a4(puVar5,param_2,lVar16,puVar12);
      puVar2 = param_4 + param_3 * 5;
      puVar5 = puVar12;
      while (param_4 != puVar12) {
        if (puVar5 == puVar2) {
          for (; param_4 != puVar12; param_4 = param_4 + 5) {
            func_0x000107479b58();
          }
          return;
        }
        puVar3 = puVar5;
        func_0x00010747a3e8();
        if ((int)puVar3 == 0) {
          func_0x000107479b58();
          param_4 = param_4 + 5;
        }
        else {
          func_0x00010747ab2c();
          func_0x000107479ec0();
          puVar5 = puVar5 + 5;
        }
      }
      for (; puVar5 != puVar2; puVar5 = puVar5 + 5) {
        func_0x00010747ab2c();
        func_0x000107479ec0();
      }
    }
  }
  return;
}



/* Entry: 107479248; end: 1074792a3;  */

void FUN_107479248(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074792a4; end: 10747947b;  */

void FUN_1074792a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  int iVar6;
  undefined8 *unaff_x21;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 in_register_00005008;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_register_00005028;
  undefined8 uVar12;
  
  if (param_5 != 0) {
    uVar3 = param_5;
    func_0x0001006ad934();
    if (uVar3 == 2) {
      iVar6 = (int)unaff_x21 + -0x28;
      func_0x00010747a3e8();
      if (iVar6 == 0) {
        func_0x000107479b58();
        func_0x00010747ab2c();
        uVar4 = extraout_x8;
      }
      else {
        func_0x00010747ab2c();
        func_0x000107479ec0();
        in_register_00005008 = unaff_x20[1];
        param_1 = *unaff_x20;
        in_register_00005028 = unaff_x20[3];
        param_2 = unaff_x20[2];
        uVar4 = unaff_x20[4];
      }
      param_6[9] = uVar4;
      param_6[8] = in_register_00005028;
      param_6[7] = param_2;
      param_6[6] = in_register_00005008;
      param_6[5] = param_1;
    }
    else if (param_5 == 1) {
      func_0x000107479b58();
    }
    else if ((long)param_5 < 9) {
      if (unaff_x20 != unaff_x21) {
        lVar8 = 0;
        func_0x000107479b58();
        puVar7 = param_6;
        while (puVar1 = unaff_x20 + 5, puVar1 != unaff_x21) {
          puVar2 = puVar7 + 5;
          func_0x00010747a9f4();
          puVar5 = puVar2;
          if ((int)param_3 != 0) {
            puVar7[6] = puVar7[1];
            *puVar2 = *puVar7;
            puVar7[8] = puVar7[3];
            puVar7[7] = puVar7[2];
            puVar7[9] = puVar7[4];
            for (lVar9 = lVar8; puVar5 = param_6, lVar9 != 0; lVar9 = lVar9 + -0x28) {
              puVar7 = (undefined8 *)((long)param_6 + lVar9);
              func_0x00010747a9f4();
              if ((int)param_3 == 0) {
                puVar5 = (undefined8 *)((long)param_6 + lVar9);
                break;
              }
              puVar7[1] = puVar7[-4];
              *puVar7 = puVar7[-5];
              puVar7[3] = puVar7[-2];
              puVar7[2] = puVar7[-3];
              puVar7[4] = puVar7[-1];
            }
          }
          uVar10 = unaff_x20[6];
          uVar4 = *puVar1;
          uVar12 = unaff_x20[8];
          uVar11 = unaff_x20[7];
          puVar5[4] = unaff_x20[9];
          puVar5[1] = uVar10;
          *puVar5 = uVar4;
          puVar5[3] = uVar12;
          puVar5[2] = uVar11;
          lVar8 = lVar8 + 0x28;
          unaff_x20 = puVar1;
          puVar7 = puVar2;
        }
      }
    }
    else {
      puVar1 = unaff_x20 + (param_5 >> 1) * 4 + (param_5 >> 1);
      FUN_107479010();
      FUN_107479010(puVar1);
      puVar7 = puVar1;
      while (unaff_x20 != puVar1) {
        if (puVar7 == unaff_x21) {
          for (; unaff_x20 != puVar1; unaff_x20 = unaff_x20 + 5) {
            func_0x000107479b58();
          }
          return;
        }
        puVar2 = puVar7;
        func_0x00010747a3e8();
        if ((int)puVar2 == 0) {
          func_0x000107479b58();
          unaff_x20 = unaff_x20 + 5;
        }
        else {
          func_0x000107479ec0(puVar7[4],*puVar7,puVar7[2]);
          puVar7 = puVar7 + 5;
        }
      }
      for (; puVar7 != unaff_x21; puVar7 = puVar7 + 5) {
        func_0x000107479ec0(puVar7[4],*puVar7,puVar7[2]);
      }
    }
  }
  return;
}



/* Entry: 10747947c; end: 1074799bf;  */

void FUN_10747947c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                  long param_5,undefined8 *param_6,long param_7)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  do {
    puVar10 = param_1;
    lVar18 = param_4;
    puVar14 = param_2;
    lVar15 = param_5;
    if (param_5 == 0) {
      return;
    }
    while( true ) {
      param_1 = puVar10;
      lVar2 = lVar18;
      if (lVar15 <= param_7 || lVar18 <= param_7) {
        if (lVar18 <= lVar15) {
          lVar18 = -(long)param_6;
          puVar3 = param_6;
          for (puVar4 = puVar10; puVar4 != puVar14; puVar4 = puVar4 + 5) {
            uVar19 = puVar4[1];
            uVar8 = *puVar4;
            uVar22 = puVar4[3];
            uVar20 = puVar4[2];
            puVar3[4] = puVar4[4];
            puVar3[1] = uVar19;
            *puVar3 = uVar8;
            puVar3[3] = uVar22;
            puVar3[2] = uVar20;
            puVar3 = puVar3 + 5;
            lVar18 = lVar18 + -0x28;
          }
          while( true ) {
            if (puVar3 == param_6) {
              return;
            }
            if (puVar14 == param_3) break;
            puVar4 = puVar14;
            func_0x000107479260(puVar14,param_6);
            if ((int)puVar4 == 0) {
              uVar19 = param_6[1];
              uVar8 = *param_6;
              uVar22 = param_6[3];
              uVar20 = param_6[2];
              puVar10[4] = param_6[4];
              puVar10[1] = uVar19;
              *puVar10 = uVar8;
              puVar10[3] = uVar22;
              puVar10[2] = uVar20;
              param_6 = param_6 + 5;
            }
            else {
              func_0x00010747aaf8();
              puVar14 = puVar14 + 5;
            }
            puVar10 = puVar10 + 5;
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memmove_11034c660)(puVar10,param_6,-((long)param_6 + lVar18));
          return;
        }
        lVar18 = 0;
        while( true ) {
          puVar4 = (undefined8 *)((long)puVar14 + lVar18);
          puVar3 = (undefined8 *)((long)param_6 + lVar18);
          if (puVar4 == param_3) break;
          uVar19 = puVar4[1];
          uVar8 = *puVar4;
          uVar22 = puVar4[3];
          uVar20 = puVar4[2];
          puVar3[4] = puVar4[4];
          puVar3[1] = uVar19;
          *puVar3 = uVar8;
          puVar3[3] = uVar22;
          puVar3[2] = uVar20;
          lVar18 = lVar18 + 0x28;
        }
        while( true ) {
          puVar4 = param_3 + -5;
          if (puVar3 == param_6) {
            return;
          }
          if (puVar14 == puVar10) break;
          puVar12 = puVar14 + -5;
          puVar13 = puVar3 + -5;
          puVar5 = puVar13;
          FUN_1074799c0(puVar13,puVar12);
          puVar7 = puVar12;
          if ((int)puVar5 == 0) {
            puVar3 = puVar13;
            puVar12 = puVar14;
            puVar7 = puVar13;
          }
          puVar14 = puVar12;
          uVar8 = puVar7[4];
          uVar22 = *puVar7;
          uVar20 = puVar7[3];
          uVar19 = puVar7[2];
          param_3[-4] = puVar7[1];
          *puVar4 = uVar22;
          param_3[-2] = uVar20;
          param_3[-3] = uVar19;
          param_3[-1] = uVar8;
          param_3 = puVar4;
        }
        for (; puVar3 != param_6; puVar3 = puVar3 + -5) {
          uVar19 = puVar3[-4];
          uVar8 = puVar3[-5];
          uVar22 = puVar3[-2];
          uVar20 = puVar3[-3];
          puVar4[4] = puVar3[-1];
          puVar4[1] = uVar19;
          *puVar4 = uVar8;
          puVar4[3] = uVar22;
          puVar4[2] = uVar20;
          puVar4 = puVar4 + -5;
        }
        return;
      }
      while( true ) {
        if (lVar2 == 0) {
          return;
        }
        puVar4 = puVar14;
        func_0x00010747a3e8();
        if (((ulong)puVar4 & 1) != 0) break;
        puVar10 = puVar10 + 5;
        param_1 = param_1 + 5;
        lVar2 = lVar2 + -1;
      }
      if (lVar2 < lVar15) {
        param_5 = lVar15 / 2;
        puVar4 = puVar14 + param_5 * 5;
        uVar1 = ((long)puVar14 - (long)puVar10) / 0x28;
        param_2 = param_1;
        while (uVar1 != 0) {
          uVar16 = uVar1 >> 1;
          puVar3 = puVar4;
          FUN_1074799c0(puVar4,param_2 + uVar16 * 5);
          uVar17 = uVar1 + (uVar1 >> 1 ^ 0xffffffffffffffff);
          uVar1 = uVar16;
          if ((int)puVar3 == 0) {
            uVar1 = uVar17;
            param_2 = param_2 + uVar16 * 5 + 5;
          }
        }
        param_4 = ((long)param_2 - (long)puVar10) / 0x28;
      }
      else {
        if (lVar2 == 1) {
          uVar20 = param_1[1];
          uVar19 = *param_1;
          uVar23 = param_1[3];
          uVar22 = param_1[2];
          uVar8 = param_1[4];
          func_0x00010747aaf8();
          puVar14[4] = uVar8;
          puVar14[1] = uVar20;
          *puVar14 = uVar19;
          puVar14[3] = uVar23;
          puVar14[2] = uVar22;
          return;
        }
        param_4 = lVar2 / 2;
        param_2 = param_1 + param_4 * 5;
        uVar1 = ((long)param_3 - (long)puVar14) / 0x28;
        puVar10 = puVar14;
        while (puVar4 = puVar10, uVar1 != 0) {
          uVar17 = uVar1 >> 1;
          puVar10 = puVar4 + uVar17 * 5;
          puVar3 = puVar10;
          func_0x000107479260(puVar10,param_2);
          uVar1 = uVar1 + (uVar1 >> 1 ^ 0xffffffffffffffff);
          puVar10 = puVar10 + 5;
          if ((int)puVar3 == 0) {
            uVar1 = uVar17;
            puVar10 = puVar4;
          }
        }
        param_5 = ((long)puVar4 - (long)puVar14) / 0x28;
      }
      puVar10 = puVar4;
      if ((param_2 != puVar14) && (puVar10 = param_2, puVar14 != puVar4)) {
        if (param_2 + 5 == puVar14) {
          uVar20 = param_2[1];
          uVar19 = *param_2;
          uVar23 = param_2[3];
          uVar22 = param_2[2];
          uVar8 = param_2[4];
          _memmove(param_2,param_2 + 5,(long)puVar4 - (long)puVar14);
          puVar10 = (undefined8 *)((long)param_2 + ((long)puVar4 - (long)puVar14));
          puVar10[1] = uVar20;
          *puVar10 = uVar19;
          puVar10[3] = uVar23;
          puVar10[2] = uVar22;
          puVar10[4] = uVar8;
        }
        else if (puVar14 + 5 == puVar4) {
          uVar20 = puVar4[-4];
          uVar19 = puVar4[-5];
          uVar23 = puVar4[-2];
          uVar22 = puVar4[-3];
          uVar8 = puVar4[-1];
          lVar18 = (long)puVar4 + (-0x28 - (long)param_2);
          if (lVar18 != 0) {
            _memmove(puVar4 + (lVar18 / -0x28) * 5,param_2);
          }
          param_2[4] = uVar8;
          param_2[1] = uVar20;
          *param_2 = uVar19;
          param_2[3] = uVar23;
          param_2[2] = uVar22;
          puVar10 = puVar4 + (lVar18 / -0x28) * 5;
        }
        else {
          lVar6 = (long)puVar14 - (long)param_2;
          lVar18 = ((long)puVar4 - (long)puVar14) / 0x28;
          puVar3 = puVar14;
          puVar7 = param_2;
          lVar11 = lVar6 / 0x28;
          if (lVar6 / 0x28 == lVar18) {
            for (; puVar10 = puVar14, puVar7 != puVar14 && puVar3 != puVar4; puVar7 = puVar7 + 5) {
              uVar22 = puVar7[1];
              uVar19 = *puVar7;
              uVar25 = puVar7[3];
              uVar21 = puVar7[2];
              uVar8 = puVar7[4];
              uVar23 = puVar3[1];
              uVar20 = *puVar3;
              uVar26 = puVar3[3];
              uVar24 = puVar3[2];
              puVar7[4] = puVar3[4];
              puVar7[1] = uVar23;
              *puVar7 = uVar20;
              puVar7[3] = uVar26;
              puVar7[2] = uVar24;
              puVar3[4] = uVar8;
              puVar3[1] = uVar22;
              *puVar3 = uVar19;
              puVar3[3] = uVar25;
              puVar3[2] = uVar21;
              puVar3 = puVar3 + 5;
            }
          }
          else {
            do {
              lVar9 = lVar18;
              lVar18 = 0;
              if (lVar9 != 0) {
                lVar18 = lVar11 / lVar9;
              }
              lVar18 = lVar11 - lVar18 * lVar9;
              lVar11 = lVar9;
            } while (lVar18 != 0);
            puVar10 = param_2 + lVar9 * 5;
            while (puVar10 != param_2) {
              puVar7 = puVar10 + -5;
              uVar20 = puVar10[-4];
              uVar19 = puVar10[-5];
              uVar23 = puVar10[-2];
              uVar22 = puVar10[-3];
              uVar8 = puVar10[-1];
              puVar3 = puVar7;
              puVar10 = (undefined8 *)(lVar6 + (long)puVar7);
              do {
                puVar5 = puVar10;
                uVar24 = puVar5[1];
                uVar21 = *puVar5;
                uVar26 = puVar5[3];
                uVar25 = puVar5[2];
                puVar3[4] = puVar5[4];
                puVar3[1] = uVar24;
                *puVar3 = uVar21;
                puVar3[3] = uVar26;
                puVar3[2] = uVar25;
                puVar10 = (undefined8 *)((long)puVar5 + lVar6);
                if ((long)puVar4 - (long)puVar5 <= lVar6) {
                  puVar10 = (undefined8 *)((long)puVar14 - ((long)puVar4 - (long)puVar5));
                }
                puVar3 = puVar5;
              } while (puVar10 != puVar7);
              puVar5[4] = uVar8;
              puVar5[1] = uVar20;
              *puVar5 = uVar19;
              puVar5[3] = uVar23;
              puVar5[2] = uVar22;
              puVar10 = puVar7;
            }
            puVar10 = (undefined8 *)(((long)puVar4 - (long)puVar14) + (long)param_2);
          }
        }
      }
      lVar18 = lVar2 - param_4;
      lVar11 = lVar15 - param_5;
      if ((lVar15 - (param_4 + param_5)) + lVar2 <= param_4 + param_5) break;
      FUN_10747947c(param_1,param_2,puVar10,param_4,param_5,param_6,param_7);
      puVar14 = puVar4;
      lVar15 = lVar11;
      if (lVar11 == 0) {
        return;
      }
    }
    FUN_10747947c(puVar10,puVar4,param_3,lVar18,lVar11,param_6,param_7);
    param_3 = puVar10;
  } while( true );
}



/* Entry: 1074799c0; end: 107479a03;  */

bool FUN_1074799c0(long param_1,long param_2)

{
  bool bVar1;
  
  if (*(uint *)(param_1 + 8) != *(uint *)(param_2 + 8)) {
    return *(uint *)(param_2 + 8) < *(uint *)(param_1 + 8);
  }
  bVar1 = *(float *)(param_1 + 0x18) < *(float *)(param_2 + 0x18);
  if ((*(float *)(param_1 + 0x18) == *(float *)(param_2 + 0x18)) &&
     (bVar1 = *(double *)(param_1 + 0x10) < *(double *)(param_2 + 0x10),
     *(double *)(param_1 + 0x10) == *(double *)(param_2 + 0x10))) {
    return *(long *)(param_2 + 0x20) < *(long *)(param_1 + 0x20);
  }
  return bVar1;
}



/* Entry: 107479a04; end: 107479a3b;  */

void FUN_107479a04(long param_1)

{
  long unaff_x19;
  
  if (param_1 != 0) {
    func_0x000107479eb4();
    FUN_107479a04();
    FUN_107479a04(*(undefined8 *)(unaff_x19 + 8));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x19 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107479a3c; end: 107479a53;  */

void FUN_107479a3c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107479a54; end: 107479a9b;  */

long FUN_107479a54(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x00010747a078();
    func_0x00010747a0e0();
  }
  else {
    func_0x000107479d28();
    *(long *)(param_1 + 0x18) = lVar1;
  }
  return param_1;
}



/* Entry: 107479a9c; end: 10747ac3b;  */

void FUN_107479a9c(void)

{
  return;
}



/* Entry: 10747ac3c; end: 10747ad5f;  */

undefined1 * FUN_10747ac3c(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 **)(param_1 + 8) = param_1 + 0x10;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined1 **)(param_1 + 0x20) = param_1 + 0x28;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined1 **)(param_1 + 0x38) = param_1 + 0x40;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined **)(param_1 + 0x50) = &UNK_10e52b660;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  func_0x00010747e6e0(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  *(undefined **)(param_1 + 0xa8) = &UNK_10e52b660;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd0) = param_2;
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  func_0x00010726ed14(param_1 + 0xe0);
  *(undefined1 **)(param_1 + 0xf0) = param_1;
  return param_1;
}



/* Entry: 10747ad60; end: 10747adbb;  */

long FUN_10747ad60(long param_1)

{
  FUN_10747e7b8(param_1 + 0xe0);
  func_0x000107261dac(param_1 + 0xa8);
  FUN_10747c9d8(param_1 + 0x80);
  FUN_1073e0028(param_1 + 0x70);
  FUN_10747ca6c(param_1 + 0x50);
  func_0x00010747e75c(param_1 + 0x38);
  func_0x00010747e704(param_1 + 0x20);
  func_0x00010747e704(param_1 + 8);
  return param_1;
}



/* Entry: 10747adbc; end: 10747ae2f;  */

void FUN_10747adbc(byte *param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if ((*param_1 != param_2) && (*param_1 = (byte)param_2, param_2 != 0)) {
    pbVar3 = param_1 + 8;
    pbVar4 = *(byte **)pbVar3;
    while (pbVar4 != param_1 + 0x10) {
      pbVar1 = pbVar4 + 0x20;
      pbVar2 = pbVar4 + 0x28;
      pbVar4 = param_1;
      FUN_10747ae30(param_1,*(undefined8 *)pbVar1,pbVar2);
      func_0x0001074800d0();
    }
    pbVar4 = param_1 + 0x10;
    func_0x00010747e724(pbVar3,*(undefined8 *)pbVar4);
    *(byte **)pbVar3 = pbVar4;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    pbVar4[4] = 0;
    pbVar4[5] = 0;
    pbVar4[6] = 0;
    pbVar4[7] = 0;
    return;
  }
  return;
}



/* Entry: 10747ae30; end: 10747b0df;  */

void FUN_10747ae30(undefined1 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  long *plVar6;
  undefined1 auStack_a0 [16];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_58;
  
  lVar3 = param_3;
  func_0x00010747fe5c();
  func_0x000107480288();
  plVar4 = (long *)(lVar3 + 0x10);
  plVar5 = plVar4;
  while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
    uVar1 = (int)plVar5 + 0x10;
    func_0x000104c2d614();
    param_1 = (undefined1 *)(unaff_x20 + 0x50);
    FUN_10747b6f8(param_1,plVar5 + 2);
    if (param_1 != (undefined1 *)0x0) {
      uVar1 = 1;
    }
    if ((uVar1 & 1) == 0) {
      param_1 = auStack_a0;
      FUN_10746ff98(param_1,plVar5 + 2);
    }
  }
  if (lStack_88 == 0) {
    while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
      func_0x00010747ff70();
      if ((undefined1 *)(unaff_x20 + 0x40) != param_1) {
        func_0x0001074801bc();
        FUN_10747d378();
        param_1 = (undefined1 *)(unaff_x19 + 0x10);
        FUN_10747e5c0(param_1,plVar4 + 2);
      }
    }
    if (*(long *)(unaff_x19 + 0x20) == 0) {
      FUN_10747fa48(unaff_x20 + 0x20,&stack0xffffffffffffff90);
    }
    func_0x00010747ff48();
    FUN_10747bdac();
  }
  else {
    plVar4 = (long *)(unaff_x20 + 0x20);
    FUN_10747f7a4(plVar4,&uStack_58,&stack0xffffffffffffff58);
    if (*plVar4 == 0) {
      plVar5 = plVar4;
      func_0x000107480038();
      plVar5[4] = unaff_x19;
      FUN_10746fee4(plVar5 + 5,param_3);
      plVar5[10] = *(long *)(param_3 + 0x28);
      FUN_10747f7f4(unaff_x20 + 0x20,uStack_58,plVar4,plVar5);
      plVar4 = (long *)&stack0xffffffffffffff90;
      func_0x00010747f81c();
    }
    for (plVar5 = (long *)lStack_90; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      func_0x00010747ff70();
      if ((long *)(unaff_x20 + 0x40) == plVar4) {
        func_0x0001074801bc();
        func_0x0001074801b4();
        plVar4 = (long *)(unaff_x19 + 0x10);
        FUN_10747e3ac(plVar4,plVar5 + 2);
      }
      else {
        if (plVar4[0xd] != 0) {
          plVar6 = (long *)(*(long *)(plVar4[0xb] + 0x20) + 0x18);
          while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
            uVar2 = (ulong)(plVar5 + 2);
            func_0x000104c2fc44(uVar2,plVar6 + 4);
            if ((uVar2 & 1) == 0) {
              lVar3 = (long)(plVar6 + 4);
              func_0x000104c2fc44(lVar3,plVar5 + 2);
              if ((int)lVar3 == 0) {
                FUN_10747e3ac(unaff_x19 + 0x10,plVar5 + 2);
                plVar4 = plVar4 + 0xb;
                func_0x0001074801b4();
                goto LAB_10747aff4;
              }
              plVar6 = plVar6 + 1;
            }
          }
        }
        plVar4 = plVar4 + 0xb;
        func_0x0001074801b4();
      }
      func_0x00010747ff70();
      if ((long *)(unaff_x20 + 0x40) != plVar4) {
        plVar6 = (long *)plVar4[0xb];
        while (plVar6 != plVar4 + 0xc) {
          FUN_10747e5c0(plVar6[4] + 0x10,plVar5 + 2);
          func_0x00010002c7d4();
        }
      }
      plVar4 = *(long **)(unaff_x20 + 200);
      (**(code **)(*plVar4 + 0x10))(plVar4,&UNK_10de72b2c);
LAB_10747aff4:
    }
  }
  func_0x0001074800a4();
  return;
}



/* Entry: 10747b0e0; end: 10747b18f;  */

void FUN_10747b0e0(ulong param_1,long *param_2,ulong param_3,long *param_4,undefined8 param_5)

{
  byte bVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  ulong *puVar7;
  int *piVar8;
  long *plVar9;
  long *plVar10;
  ulong *puVar11;
  uint uVar12;
  uint uVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong unaff_x23;
  ulong *puVar18;
  byte bVar19;
  uint6 uVar20;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  undefined8 uVar21;
  byte bVar27;
  int iStack_1dc;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  ulong uStack_1b0;
  ulong uStack_1a8;
  uint uStack_1a0;
  undefined4 auStack_198 [2];
  undefined **ppuStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined1 uStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  int aiStack_138 [2];
  undefined4 uStack_130;
  undefined8 uStack_100;
  ulong auStack_68 [3];
  long lStack_50;
  long lStack_48;
  undefined8 uStack_38;
  
  uVar17 = (uint)param_3;
  func_0x00010747fe04();
  lStack_48 = param_2[1];
  lStack_50 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_38 = extraout_x8;
  FUN_10747cb10(auStack_68,&lStack_50,1);
  puVar11 = auStack_68;
  plVar5 = param_4;
  uVar12 = uVar17;
  FUN_10747b190(param_1);
  uVar13 = (uint)plVar5;
  func_0x00010747030c(auStack_68);
  plVar5 = &lStack_50;
  func_0x00010725af58();
  func_0x00010747fdb8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010747030c(auStack_68);
  plVar6 = &lStack_50;
  func_0x00010725af58();
  func_0x00010747fe68();
  func_0x00010747fe04();
  uVar2 = *puVar11 == puVar11[1];
  plVar10 = plVar6;
  uStack_100 = extraout_x8_00;
  if (!(bool)uVar2) {
    FUN_10747e83c(plVar6 + 0x10,plVar6[0x13] + ((long)(puVar11[1] - *puVar11) >> 4));
    plVar5 = plVar6 + 0xe;
    FUN_10747b534(plVar5,*(long *)(*plVar5 + 0x18) + ((long)(puVar11[1] - *puVar11) >> 4));
    plVar10 = plVar6 + 10;
    uVar15 = plVar6[0xd] + ((long)(puVar11[1] - *puVar11) >> 4);
    if ((ulong)(*(long *)(*plVar10 + -8) + plVar6[0xd]) < uVar15) {
      if (uVar15 == 7) {
        lVar14 = 8;
      }
      else {
        lVar14 = (long)(uVar15 - 1) / 7 + uVar15;
      }
      uVar15 = 0xffffffffffffffff >> (LZCOUNT(lVar14) & 0x3fU);
      if (lVar14 == 0) {
        uVar15 = 1;
      }
      FUN_10747cdb4(plVar10,uVar15);
    }
    uStack_1b0 = uStack_1b0 & 0xffffffffffffff00;
    iVar3 = (int)plVar6[0x1b] + 0x150;
    puVar7 = &uStack_1b0;
    func_0x00010724e2c8();
    iStack_1dc = 0;
    puVar18 = (ulong *)*puVar11;
    puVar11 = (ulong *)puVar11[1];
    while( true ) {
      uVar17 = (uint)param_3;
      uVar2 = puVar18 == puVar11;
      if ((bool)uVar2) break;
      func_0x000104c2fe00(aiStack_138,*puVar18);
      puVar7 = (ulong *)*puVar18;
      func_0x00010778196c();
      uStack_1b0 = *puVar7;
      uStack_1a8 = uStack_1a8 & 0xffffffffffffff00;
      uStack_1a0 = uStack_1a0 & 0xffffff00;
      FUN_10747b720(plVar6 + 0x10,aiStack_138,&uStack_1b0);
      func_0x000104c2fe00(&uStack_1b0,aiStack_138);
      FUN_10747cc88(&uStack_1c8,plVar5,&uStack_1b0);
      func_0x000104c2f714(&uStack_1b0);
      uStack_1a8 = puVar18[1];
      uStack_1b0 = *puVar18;
      *puVar18 = 0;
      puVar18[1] = 0;
      uStack_1a0 = uVar12;
      func_0x0001073b2ef8(auStack_198,param_5);
      lStack_178 = (ulong)uVar13 << 0x20;
      uStack_170 = *(undefined8 *)plVar6[0x1a];
      Hint_Prefetch(plVar6[10],0,2,0);
      piVar8 = aiStack_138;
      func_0x000104c2fe38(plVar6[10]);
      param_4 = (long *)0x0;
      param_3 = plVar6[10];
      param_1 = plVar6[0xc];
      uVar15 = param_3 >> 0xc ^ (ulong)piVar8 >> 7;
      bVar1 = (byte)piVar8;
      uVar20 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1)))))
               & 0x7f7f7f7f7f7f;
      while( true ) {
        unaff_x23 = uVar15 & param_1;
        uVar21 = *(undefined8 *)(param_3 + unaff_x23);
        cVar22 = (char)((ulong)uVar21 >> 8);
        cVar23 = (char)((ulong)uVar21 >> 0x10);
        cVar24 = (char)((ulong)uVar21 >> 0x18);
        cVar25 = (char)((ulong)uVar21 >> 0x20);
        cVar26 = (char)((ulong)uVar21 >> 0x28);
        bVar19 = (byte)((ulong)uVar21 >> 0x30);
        bVar27 = (byte)((ulong)uVar21 >> 0x38);
        for (uVar15 = CONCAT17(-(bVar27 == (bVar1 & 0x7f)),
                               CONCAT16(-(bVar19 == (bVar1 & 0x7f)),
                                        CONCAT15(-(cVar26 == (char)(uVar20 >> 0x28)),
                                                 CONCAT14(-(cVar25 == (char)(uVar20 >> 0x20)),
                                                          CONCAT13(-(cVar24 ==
                                                                    (char)(uVar20 >> 0x18)),
                                                                   CONCAT12(-(cVar23 ==
                                                                             (char)(uVar20 >> 0x10))
                                                                            ,CONCAT11(-(cVar22 ==
                                                                                       (char)(uVar20
                                                                                             >> 8)),
                                                                                      -((char)uVar21
                                                                                       == (char)
                                                  uVar20)))))))) & 0x8080808080808080; uVar15 != 0;
            uVar15 = uVar15 - 1 & uVar15) {
          uVar16 = plVar6[0xb];
          puVar7 = (ulong *)aiStack_138;
          func_0x000104c32db4();
          if ((uVar16 & 1) != 0) goto LAB_10747b3f0;
        }
        bVar19 = NEON_umaxv(CONCAT17(-(bVar27 == 0x80),
                                     CONCAT16(-(bVar19 == 0x80),
                                              CONCAT15(-(cVar26 == -0x80),
                                                       CONCAT14(-(cVar25 == -0x80),
                                                                CONCAT13(-(cVar24 == -0x80),
                                                                         CONCAT12(-(cVar23 == -0x80)
                                                                                  ,CONCAT11(-(cVar22
                                                                                             == 
                                                  -0x80),-((char)uVar21 == -0x80)))))))),1);
        if ((bVar19 & 1) != 0) break;
        param_4 = param_4 + 1;
        uVar15 = (long)param_4 + unaff_x23;
      }
      plVar9 = plVar10;
      FUN_10747ccc0(plVar10,piVar8);
      lVar14 = plVar6[0xb] + (long)plVar9 * 0x80;
      func_0x000104c2fe00(lVar14,aiStack_138);
      puVar7 = &uStack_1b0;
      func_0x00010747ceec(lVar14 + 0x38);
LAB_10747b3f0:
      func_0x00010747d044(&uStack_1b0);
      if (iVar3 != 0) {
        iVar4 = (int)plVar6 + 0xa8;
        puVar7 = (ulong *)aiStack_138;
        func_0x0001072a02dc();
        iStack_1dc = iStack_1dc + iVar4;
      }
      func_0x000104c2f714(aiStack_138);
      puVar18 = puVar18 + 2;
    }
    puVar11 = puVar7;
    if (iVar3 != 0) {
      uStack_1b0 = CONCAT44(uStack_1b0._4_4_,199);
      auStack_198[0] = 0;
      uStack_180 = 0;
      lStack_178 = 0;
      ppuStack_190 = &PTR_DAT_110996720;
      uStack_188 = 0;
      uStack_170 = CONCAT44(uStack_170._4_4_,199);
      uStack_168 = 0;
      uStack_164 = 1;
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_160 = 0;
      aiStack_138[0] = iStack_1dc;
      uStack_130 = 1;
      uStack_1c8 = *(undefined8 *)plVar6[0x1a];
      uStack_1c0 = 3;
      puVar11 = &uStack_1b0;
      FUN_10743fa9c((undefined8 *)plVar6[0x1a],puVar11,aiStack_138,&uStack_1c8,7);
      func_0x000107262330(&uStack_1b0);
    }
    plVar10 = (long *)plVar6[0x19];
    func_0x0001074801a8(*(undefined8 *)(*plVar10 + 0x10));
    plVar5 = plVar6;
  }
  func_0x00010747fdb8(uStack_100);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107480188();
  func_0x000107262330();
  func_0x00010747fe68();
  if (puVar11 <= *(ulong **)(*plVar10 + 0x10)) {
    return;
  }
  func_0x00010747fe5c();
  func_0x00010745f964();
  param_4 = (long *)*param_4;
  if (plVar5 <= (long *)(*(long *)(*param_4 + -8) + param_4[3])) {
    return;
  }
  if (plVar5 == (long *)0x7) {
    lVar14 = 8;
  }
  else {
    lVar14 = ((long)plVar5 + -1) / 7 + (long)plVar5;
  }
  uVar15 = 0xffffffffffffffff >> (LZCOUNT(lVar14) & 0x3fU);
  if (lVar14 == 0) {
    uVar15 = 1;
  }
  func_0x000107274f98(param_4,uVar15);
  func_0x00010726210c();
  for (uVar15 = 0; unaff_x23 != uVar15; uVar15 = uVar15 + 1) {
    if (-1 < *(char *)(param_1 + uVar15)) {
      func_0x00010727575c();
      func_0x0001072749d4();
      func_0x0001072742a4(uVar17 & 0x7f);
      func_0x000107275324();
      func_0x0001072621bc();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1 - 8);
    return;
  }
  return;
}



/* Entry: 10747b190; end: 10747b533;  */

void FUN_10747b190(long *param_1,ulong *param_2,uint param_3,uint param_4,undefined8 param_5)

{
  ulong *puVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  ulong *puVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  undefined8 extraout_x8;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x19;
  long *unaff_x20;
  uint uVar14;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong *puVar15;
  byte bVar16;
  uint6 uVar17;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  undefined8 uVar18;
  byte bVar24;
  int iStack_16c;
  undefined8 uStack_158;
  undefined4 uStack_150;
  ulong uStack_140;
  ulong uStack_138;
  uint uStack_130;
  undefined4 auStack_128 [2];
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  int aiStack_c8 [2];
  undefined4 uStack_c0;
  undefined8 uStack_90;
  
  uVar14 = (uint)unaff_x21;
  func_0x00010747fe04();
  uVar3 = *param_2 == param_2[1];
  plVar9 = param_1;
  uStack_90 = extraout_x8;
  if (!(bool)uVar3) {
    FUN_10747e83c(param_1 + 0x10,param_1[0x13] + ((long)(param_2[1] - *param_2) >> 4));
    plVar9 = param_1 + 0xe;
    FUN_10747b534(plVar9,*(long *)(*plVar9 + 0x18) + ((long)(param_2[1] - *param_2) >> 4));
    plVar10 = param_1 + 10;
    uVar12 = param_1[0xd] + ((long)(param_2[1] - *param_2) >> 4);
    if ((ulong)(*(long *)(*plVar10 + -8) + param_1[0xd]) < uVar12) {
      if (uVar12 == 7) {
        lVar11 = 8;
      }
      else {
        lVar11 = (long)(uVar12 - 1) / 7 + uVar12;
      }
      uVar12 = 0xffffffffffffffff >> (LZCOUNT(lVar11) & 0x3fU);
      if (lVar11 == 0) {
        uVar12 = 1;
      }
      FUN_10747cdb4(plVar10,uVar12);
    }
    uStack_140 = uStack_140 & 0xffffffffffffff00;
    iVar4 = (int)param_1[0x1b] + 0x150;
    puVar6 = &uStack_140;
    func_0x00010724e2c8();
    iStack_16c = 0;
    puVar15 = (ulong *)*param_2;
    puVar1 = (ulong *)param_2[1];
    while( true ) {
      uVar14 = (uint)unaff_x21;
      uVar3 = puVar15 == puVar1;
      if ((bool)uVar3) break;
      func_0x000104c2fe00(aiStack_c8,*puVar15);
      puVar6 = (ulong *)*puVar15;
      func_0x00010778196c();
      uStack_140 = *puVar6;
      uStack_138 = uStack_138 & 0xffffffffffffff00;
      uStack_130 = uStack_130 & 0xffffff00;
      FUN_10747b720(param_1 + 0x10,aiStack_c8,&uStack_140);
      func_0x000104c2fe00(&uStack_140,aiStack_c8);
      FUN_10747cc88(&uStack_158,plVar9,&uStack_140);
      func_0x000104c2f714(&uStack_140);
      uStack_138 = puVar15[1];
      uStack_140 = *puVar15;
      *puVar15 = 0;
      puVar15[1] = 0;
      uStack_130 = param_3;
      func_0x0001073b2ef8(auStack_128,param_5);
      lStack_108 = (ulong)param_4 << 0x20;
      uStack_100 = *(undefined8 *)param_1[0x1a];
      Hint_Prefetch(param_1[10],0,2,0);
      piVar7 = aiStack_c8;
      func_0x000104c2fe38(param_1[10]);
      unaff_x20 = (long *)0x0;
      unaff_x21 = param_1[10];
      unaff_x22 = param_1[0xc];
      uVar12 = unaff_x21 >> 0xc ^ (ulong)piVar7 >> 7;
      bVar2 = (byte)piVar7;
      uVar17 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2)))))
               & 0x7f7f7f7f7f7f;
      while( true ) {
        unaff_x23 = uVar12 & unaff_x22;
        uVar18 = *(undefined8 *)(unaff_x21 + unaff_x23);
        cVar19 = (char)((ulong)uVar18 >> 8);
        cVar20 = (char)((ulong)uVar18 >> 0x10);
        cVar21 = (char)((ulong)uVar18 >> 0x18);
        cVar22 = (char)((ulong)uVar18 >> 0x20);
        cVar23 = (char)((ulong)uVar18 >> 0x28);
        bVar16 = (byte)((ulong)uVar18 >> 0x30);
        bVar24 = (byte)((ulong)uVar18 >> 0x38);
        for (uVar12 = CONCAT17(-(bVar24 == (bVar2 & 0x7f)),
                               CONCAT16(-(bVar16 == (bVar2 & 0x7f)),
                                        CONCAT15(-(cVar23 == (char)(uVar17 >> 0x28)),
                                                 CONCAT14(-(cVar22 == (char)(uVar17 >> 0x20)),
                                                          CONCAT13(-(cVar21 ==
                                                                    (char)(uVar17 >> 0x18)),
                                                                   CONCAT12(-(cVar20 ==
                                                                             (char)(uVar17 >> 0x10))
                                                                            ,CONCAT11(-(cVar19 ==
                                                                                       (char)(uVar17
                                                                                             >> 8)),
                                                                                      -((char)uVar18
                                                                                       == (char)
                                                  uVar17)))))))) & 0x8080808080808080; uVar12 != 0;
            uVar12 = uVar12 - 1 & uVar12) {
          uVar13 = param_1[0xb];
          puVar6 = (ulong *)aiStack_c8;
          func_0x000104c32db4();
          if ((uVar13 & 1) != 0) goto LAB_10747b3f0;
        }
        bVar16 = NEON_umaxv(CONCAT17(-(bVar24 == 0x80),
                                     CONCAT16(-(bVar16 == 0x80),
                                              CONCAT15(-(cVar23 == -0x80),
                                                       CONCAT14(-(cVar22 == -0x80),
                                                                CONCAT13(-(cVar21 == -0x80),
                                                                         CONCAT12(-(cVar20 == -0x80)
                                                                                  ,CONCAT11(-(cVar19
                                                                                             == 
                                                  -0x80),-((char)uVar18 == -0x80)))))))),1);
        if ((bVar16 & 1) != 0) break;
        unaff_x20 = unaff_x20 + 1;
        uVar12 = (long)unaff_x20 + unaff_x23;
      }
      plVar8 = plVar10;
      FUN_10747ccc0(plVar10,piVar7);
      lVar11 = param_1[0xb] + (long)plVar8 * 0x80;
      func_0x000104c2fe00(lVar11,aiStack_c8);
      puVar6 = &uStack_140;
      func_0x00010747ceec(lVar11 + 0x38);
LAB_10747b3f0:
      func_0x00010747d044(&uStack_140);
      if (iVar4 != 0) {
        iVar5 = (int)param_1 + 0xa8;
        puVar6 = (ulong *)aiStack_c8;
        func_0x0001072a02dc();
        iStack_16c = iStack_16c + iVar5;
      }
      func_0x000104c2f714(aiStack_c8);
      puVar15 = puVar15 + 2;
    }
    param_2 = puVar6;
    if (iVar4 != 0) {
      uStack_140 = CONCAT44(uStack_140._4_4_,199);
      auStack_128[0] = 0;
      uStack_110 = 0;
      lStack_108 = 0;
      ppuStack_120 = &PTR_DAT_110996720;
      uStack_118 = 0;
      uStack_100 = CONCAT44(uStack_100._4_4_,199);
      uStack_f8 = 0;
      uStack_f4 = 1;
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_f0 = 0;
      aiStack_c8[0] = iStack_16c;
      uStack_c0 = 1;
      uStack_158 = *(undefined8 *)param_1[0x1a];
      uStack_150 = 3;
      param_2 = &uStack_140;
      FUN_10743fa9c((undefined8 *)param_1[0x1a],param_2,aiStack_c8,&uStack_158,7);
      func_0x000107262330(&uStack_140);
    }
    plVar9 = (long *)param_1[0x19];
    func_0x0001074801a8(*(undefined8 *)(*plVar9 + 0x10));
    unaff_x19 = param_1;
  }
  func_0x00010747fdb8(uStack_90);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107480188();
  func_0x000107262330();
  func_0x00010747fe68();
  if (param_2 <= *(ulong **)(*plVar9 + 0x10)) {
    return;
  }
  func_0x00010747fe5c();
  func_0x00010745f964();
  plVar9 = (long *)*unaff_x20;
  if (unaff_x19 <= (long *)(*(long *)(*plVar9 + -8) + plVar9[3])) {
    return;
  }
  if (unaff_x19 == (long *)0x7) {
    lVar11 = 8;
  }
  else {
    lVar11 = ((long)unaff_x19 + -1) / 7 + (long)unaff_x19;
  }
  uVar12 = 0xffffffffffffffff >> (LZCOUNT(lVar11) & 0x3fU);
  if (lVar11 == 0) {
    uVar12 = 1;
  }
  func_0x000107274f98(plVar9,uVar12);
  func_0x00010726210c();
  for (uVar12 = 0; unaff_x23 != uVar12; uVar12 = uVar12 + 1) {
    if (-1 < *(char *)(unaff_x22 + uVar12)) {
      func_0x00010727575c();
      func_0x0001072749d4();
      func_0x0001072742a4(uVar14 & 0x7f);
      func_0x000107275324();
      func_0x0001072621bc();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 - 8);
    return;
  }
  return;
}



/* Entry: 10747b534; end: 10747b56f;  */

void FUN_10747b534(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong unaff_x19;
  long *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  
  if (param_2 <= *(ulong *)(*param_1 + 0x10)) {
    return;
  }
  func_0x00010747fe5c();
  func_0x00010745f964();
  plVar1 = (long *)*unaff_x20;
  if (unaff_x19 <= (ulong)(*(long *)(*plVar1 + -8) + plVar1[3])) {
    return;
  }
  if (unaff_x19 == 7) {
    lVar2 = 8;
  }
  else {
    lVar2 = (long)(unaff_x19 - 1) / 7 + unaff_x19;
  }
  uVar3 = 0xffffffffffffffff >> (LZCOUNT(lVar2) & 0x3fU);
  if (lVar2 == 0) {
    uVar3 = 1;
  }
  func_0x000107274f98(plVar1,uVar3);
  func_0x00010726210c();
  for (lVar2 = 0; unaff_x23 != lVar2; lVar2 = lVar2 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar2)) {
      func_0x00010727575c();
      func_0x0001072749d4();
      func_0x0001072742a4(unaff_w21 & 0x7f);
      func_0x000107275324();
      func_0x0001072621bc();
    }
  }
  if (unaff_x23 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
  return;
}



/* Entry: 10747b570; end: 10747b6f7;  */

ulong FUN_10747b570(long param_1,ulong *param_2,undefined4 param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  undefined1 in_ZR;
  uint *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  uint *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  byte bVar17;
  uint6 uVar18;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  undefined8 uVar19;
  byte bVar25;
  ulong uStack_a0;
  ulong uStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [32];
  int iStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar9 = &uStack_a0;
  lVar12 = param_1;
  puVar6 = param_2;
  func_0x00010747fe04();
  uVar11 = *puVar6;
  lVar12 = lVar12 + 0x50;
  uStack_58 = extraout_x8;
  FUN_10747b6f8();
  puVar8 = (uint *)0x0;
  if (lVar12 == 0) {
LAB_10747b618:
    uVar14 = 0;
  }
  else {
    unaff_x20 = (undefined8 *)(uVar11 + 0x38);
    puVar5 = (uint *)*unaff_x20;
    func_0x000107781a5c();
    puVar6 = (ulong *)*param_2;
    func_0x00010778196c();
    if ((char)puVar5[1] == '\x01') {
      uVar14 = *puVar6;
      puVar8 = puVar5;
      FUN_107361fc8();
      in_ZR = (uint)uVar14 == *puVar8;
      if (*puVar8 <= (uint)uVar14 && !(bool)in_ZR) goto LAB_10747b618;
    }
    if ((char)puVar5[3] == '\x01') {
      uVar2 = *(uint *)((long)puVar6 + 4);
      puVar8 = puVar5 + 2;
      FUN_107361fc8();
      in_ZR = uVar2 == *puVar8;
      if (*puVar8 < uVar2) goto LAB_10747b618;
    }
    puVar7 = *(undefined8 **)(uVar11 + 0x38);
    func_0x00010778196c();
    uStack_98 = *puVar7;
    uVar14 = 1;
    in_ZR = false;
    if ((uint)*puVar6 == (uint)uStack_98) {
      in_ZR = *(uint *)((long)puVar6 + 4) == (uint)(uStack_98 >> 0x20);
      uVar14 = (ulong)!(bool)in_ZR;
    }
    iVar3 = *(int *)(uVar11 + 0x70);
    uStack_a0 = *puVar6;
    uStack_90 = CONCAT31(uStack_90._1_3_,1);
    FUN_10747b720(param_1 + 0x80,*param_2,&uStack_a0);
    uStack_98 = param_2[1];
    uStack_a0 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    uStack_90 = param_3;
    func_0x0001073b2ef8(auStack_88,uVar11 + 0x50);
    iStack_68 = iVar3 + 1;
    uStack_64 = *(undefined4 *)(uVar11 + 0x74);
    uStack_60 = 0;
    FUN_10747b738(unaff_x20,&uStack_a0);
    func_0x00010747d044(&uStack_a0);
    puVar8 = *(uint **)(param_1 + 200);
    func_0x0001074801a8(*(undefined8 *)(*(long *)puVar8 + 0x10));
  }
  func_0x00010747fdb8(uStack_58);
  if ((bool)in_ZR) {
    return uVar14;
  }
  ___stack_chk_fail();
  func_0x00010725af58();
  func_0x00010747fe68();
  func_0x00010747fe5c();
  func_0x000107480084();
  puVar6 = puVar9;
  func_0x00010747ff48();
  func_0x00010747ff54();
  lVar12 = 0;
  uVar14 = puVar9[1];
  uVar1 = puVar9[2];
  uVar13 = *puVar9;
  uVar11 = uVar13 >> 0xc ^ (ulong)puVar6 >> 7;
  bVar4 = (byte)puVar6;
  uVar18 = CONCAT15(bVar4,CONCAT14(bVar4,CONCAT13(bVar4,CONCAT12(bVar4,CONCAT11(bVar4,bVar4))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar11 = uVar11 & uVar1;
    uVar19 = *(undefined8 *)(uVar13 + uVar11);
    cVar20 = (char)((ulong)uVar19 >> 8);
    cVar21 = (char)((ulong)uVar19 >> 0x10);
    cVar22 = (char)((ulong)uVar19 >> 0x18);
    cVar23 = (char)((ulong)uVar19 >> 0x20);
    cVar24 = (char)((ulong)uVar19 >> 0x28);
    bVar17 = (byte)((ulong)uVar19 >> 0x30);
    bVar25 = (byte)((ulong)uVar19 >> 0x38);
    for (uVar15 = CONCAT17(-(bVar25 == (bVar4 & 0x7f)),
                           CONCAT16(-(bVar17 == (bVar4 & 0x7f)),
                                    CONCAT15(-(cVar24 == (char)(uVar18 >> 0x28)),
                                             CONCAT14(-(cVar23 == (char)(uVar18 >> 0x20)),
                                                      CONCAT13(-(cVar22 == (char)(uVar18 >> 0x18)),
                                                               CONCAT12(-(cVar21 ==
                                                                         (char)(uVar18 >> 0x10)),
                                                                        CONCAT11(-(cVar20 ==
                                                                                  (char)(uVar18 >> 8
                                                                                        )),
                                                                                 -((char)uVar19 ==
                                                                                  (char)uVar18))))))
                                   )) & 0x8080808080808080; uVar15 != 0;
        uVar15 = uVar15 - 1 & uVar15) {
      uVar16 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar16 = uVar11 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & uVar1;
      lVar10 = uVar14 + uVar16 * 0x80;
      func_0x000104c32db4(lVar10,unaff_x20);
      if ((int)lVar10 != 0) {
        return *(long *)puVar8 + uVar16;
      }
    }
    bVar17 = NEON_umaxv(CONCAT17(-(bVar25 == 0x80),
                                 CONCAT16(-(bVar17 == 0x80),
                                          CONCAT15(-(cVar24 == -0x80),
                                                   CONCAT14(-(cVar23 == -0x80),
                                                            CONCAT13(-(cVar22 == -0x80),
                                                                     CONCAT12(-(cVar21 == -0x80),
                                                                              CONCAT11(-(cVar20 ==
                                                                                        -0x80),-((
                                                  char)uVar19 == -0x80)))))))),1);
    if ((bVar17 & 1) != 0) break;
    lVar12 = lVar12 + 8;
    uVar11 = lVar12 + uVar11;
  }
  return 0;
}



/* Entry: 10747b6f8; end: 10747b71f;  */

long FUN_10747b6f8(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  long *unaff_x19;
  undefined8 unaff_x20;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  uint6 uVar12;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  undefined8 uVar13;
  byte bVar19;
  
  func_0x00010747fe5c();
  func_0x000107480084();
  puVar5 = param_1;
  func_0x00010747ff48();
  func_0x00010747ff54();
  lVar7 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar8 = *param_1;
  uVar6 = uVar8 >> 0xc ^ (ulong)puVar5 >> 7;
  bVar3 = (byte)puVar5;
  uVar12 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar6 = uVar6 & uVar2;
    uVar13 = *(undefined8 *)(uVar8 + uVar6);
    cVar14 = (char)((ulong)uVar13 >> 8);
    cVar15 = (char)((ulong)uVar13 >> 0x10);
    cVar16 = (char)((ulong)uVar13 >> 0x18);
    cVar17 = (char)((ulong)uVar13 >> 0x20);
    cVar18 = (char)((ulong)uVar13 >> 0x28);
    bVar11 = (byte)((ulong)uVar13 >> 0x30);
    bVar19 = (byte)((ulong)uVar13 >> 0x38);
    for (uVar9 = CONCAT17(-(bVar19 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar11 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar18 == (char)(uVar12 >> 0x28)),
                                            CONCAT14(-(cVar17 == (char)(uVar12 >> 0x20)),
                                                     CONCAT13(-(cVar16 == (char)(uVar12 >> 0x18)),
                                                              CONCAT12(-(cVar15 ==
                                                                        (char)(uVar12 >> 0x10)),
                                                                       CONCAT11(-(cVar14 ==
                                                                                 (char)(uVar12 >> 8)
                                                                                 ),-((char)uVar13 ==
                                                                                    (char)uVar12))))
                                                    )))) & 0x8080808080808080; uVar9 != 0;
        uVar9 = uVar9 - 1 & uVar9) {
      uVar10 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar6 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar2;
      lVar4 = uVar1 + uVar10 * 0x80;
      func_0x000104c32db4(lVar4,unaff_x20);
      if ((int)lVar4 != 0) {
        return *unaff_x19 + uVar10;
      }
    }
    bVar11 = NEON_umaxv(CONCAT17(-(bVar19 == 0x80),
                                 CONCAT16(-(bVar11 == 0x80),
                                          CONCAT15(-(cVar18 == -0x80),
                                                   CONCAT14(-(cVar17 == -0x80),
                                                            CONCAT13(-(cVar16 == -0x80),
                                                                     CONCAT12(-(cVar15 == -0x80),
                                                                              CONCAT11(-(cVar14 ==
                                                                                        -0x80),-((
                                                  char)uVar13 == -0x80)))))))),1);
    if ((bVar11 & 1) != 0) break;
    lVar7 = lVar7 + 8;
    uVar6 = lVar7 + uVar6;
  }
  return 0;
}



/* Entry: 10747b720; end: 10747b737;  */

void FUN_10747b720(void)

{
  func_0x00010747ea18();
  return;
}



/* Entry: 10747b738; end: 10747b76b;  */

void FUN_10747b738(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010747fe5c();
  FUN_10747cf60();
  *(undefined4 *)(unaff_x20 + 0x10) = *(undefined4 *)(unaff_x19 + 0x10);
  FUN_10747cf3c(unaff_x20 + 0x18,unaff_x19 + 0x18);
  func_0x00010748012c();
  return;
}



/* Entry: 10747b76c; end: 10747b85f;  */

void FUN_10747b76c(long param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x00010747fe5c();
  param_1 = param_1 + 0x50;
  FUN_10747b6f8(param_1);
  lVar1 = unaff_x20 + 0x38;
  FUN_10747ed9c(lVar1,*(undefined8 *)(param_2 + 0x38));
  if (unaff_x20 + 0x40 != lVar1) {
    FUN_10747ee34(unaff_x20 + 0x38,lVar1);
  }
  FUN_10747ee94(unaff_x20 + 0x38,*(undefined8 *)(param_2 + 0x38));
  func_0x00010724b810(param_2 + 0x50);
  func_0x00010747b828(unaff_x20 + 0x50,param_1,param_2);
  FUN_10747b860(unaff_x20 + 0x70);
  auStack_48[0] = 0;
  lVar1 = *(long *)(unaff_x20 + 0xd8) + 0x150;
  func_0x00010724e2c8(lVar1,auStack_48);
  if ((int)lVar1 != 0) {
    func_0x0001072628ec(auStack_48,unaff_x20 + 0xa8);
  }
  FUN_10747eed8(unaff_x20 + 0x80);
  return;
}



/* Entry: 10747b860; end: 10747b8db;  */

void FUN_10747b860(void)

{
  long lVar1;
  long lVar2;
  undefined8 unaff_x19;
  long *unaff_x20;
  
  func_0x00010747fe5c();
  func_0x00010745f964();
  lVar2 = *unaff_x20;
  lVar1 = lVar2;
  FUN_10735af34();
  if (lVar1 != 0) {
    FUN_10735af54(lVar2,lVar1,unaff_x19);
  }
  return;
}



/* Entry: 10747b8dc; end: 10747b937;  */

void FUN_10747b8dc(void)

{
  func_0x00010747b8f8();
  return;
}



/* Entry: 10747b938; end: 10747bc9b;  */

void FUN_10747b938(long param_1,undefined8 param_2,long ****param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  undefined1 uVar4;
  uint uVar5;
  long ****pppplVar6;
  long ******pppppplVar7;
  long lVar8;
  long *plVar9;
  byte *pbVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long ****pppplVar14;
  undefined8 *puVar15;
  undefined8 extraout_x8;
  long *plVar16;
  undefined8 extraout_x8_00;
  ulong uVar17;
  long unaff_x19;
  long ****unaff_x20;
  undefined8 *puVar18;
  long unaff_x21;
  long ******pppppplVar19;
  undefined8 *puVar20;
  long ***unaff_x23;
  undefined8 *puVar21;
  long unaff_x24;
  long ****pppplVar22;
  long *plVar23;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long ****pppplStack_1e8;
  undefined4 auStack_1e0 [4];
  long *plStack_1d0;
  long lStack_1c8;
  long *****ppppplStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long ***ppplStack_178;
  long *plStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  long ****pppplStack_158;
  undefined1 *puStack_150;
  undefined8 uStack_148;
  long lStack_138;
  byte abStack_130 [48];
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 in_stack_ffffffffffffff18;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  ulong uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined4 uStack_a0;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  func_0x00010747ff9c();
  func_0x00010747fe04();
  uStack_70 = extraout_x8;
  func_0x000107480288();
  param_1 = param_1 + 8;
  FUN_10747f124(param_1,&stack0xffffffffffffff40);
  lStack_138 = unaff_x19 + 0x10;
  uVar4 = lStack_138 == param_1;
  if (!(bool)uVar4) {
    FUN_10747f190(abStack_130,param_1 + 0x28);
  }
  plVar23 = (long *)(unaff_x21 + 0x10);
  lVar1 = unaff_x19 + 0x40;
  while (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0) {
    lVar8 = unaff_x19 + 0x38;
    FUN_10747ed9c(lVar8,plVar23 + 2);
    uVar4 = lVar1 == lVar8;
    if ((bool)uVar4) {
      uStack_f8 = 0;
      uStack_f0 = 0;
      puStack_100 = &uStack_f8;
      FUN_10747d140(&puStack_100,&uStack_f8,&stack0xffffffffffffff38);
      func_0x000104c2fe00(&stack0xffffffffffffff40,plVar23 + 2);
      lStack_80 = 0;
      lStack_78 = 0;
      puVar20 = puStack_100;
      plStack_88 = &lStack_80;
      while (uVar4 = puVar20 == &uStack_f8, !(bool)uVar4) {
        FUN_10747d140(&plStack_88,&lStack_80,puVar20 + 4);
        func_0x00010002c7d4();
      }
      plVar9 = (long *)(unaff_x19 + 0x38);
      FUN_10747d06c(plVar9,&stack0xffffffffffffff18,&stack0xffffffffffffff40);
      if (*plVar9 == 0) {
        unaff_x24 = 0x70;
        __Znwm();
        uStack_d0 = 1;
        lStack_d8 = lVar1;
        func_0x000104c2fe00(unaff_x24 + 0x20,&stack0xffffffffffffff40);
        plVar16 = (long *)(unaff_x24 + 0x60);
        *plVar16 = lStack_80;
        *(long **)(unaff_x24 + 0x58) = plStack_88;
        *(long *)(unaff_x24 + 0x68) = lStack_78;
        if (lStack_78 == 0) {
          *(long **)(unaff_x24 + 0x58) = plVar16;
        }
        else {
          *(long **)(lStack_80 + 0x10) = plVar16;
          lStack_80 = 0;
          lStack_78 = 0;
          plStack_88 = &lStack_80;
        }
        FUN_10747d0d4(unaff_x19 + 0x38,in_stack_ffffffffffffff18,plVar9,unaff_x24);
        uStack_e0 = 0;
        func_0x00010747d0fc(&uStack_e0);
      }
      func_0x00010747d350(&stack0xffffffffffffff40);
      func_0x00010747d2fc(&puStack_100);
    }
    else {
      FUN_10747c5a0(unaff_x19 + 0x38,plVar23 + 2);
      FUN_10747d378();
      param_3 = unaff_x20;
    }
    bVar2 = *(byte *)(plVar23 + 9);
    unaff_x23 = (long ***)(ulong)bVar2;
    pbVar10 = abStack_130;
    FUN_10747d3b8(pbVar10,plVar23 + 2);
    *pbVar10 = bVar2;
  }
  FUN_10746fee4(&stack0xffffffffffffff40,abStack_130);
  puVar20 = (undefined8 *)(unaff_x19 + 8);
  puVar15 = (undefined8 *)&stack0xffffffffffffff18;
  FUN_10747f7a4(puVar20,&puStack_100);
  puVar18 = (undefined8 *)*puVar20;
  puVar21 = &uStack_f8;
  if (puVar18 == (undefined8 *)0x0) {
    puVar18 = puVar20;
    func_0x000107480038();
    lStack_d8 = lStack_138;
    uStack_d0 = 1;
    puVar18[4] = unaff_x20;
    puVar18[6] = 0;
    puVar18[5] = 0;
    puVar18[8] = 0;
    puVar18[7] = 0;
    puVar18[9] = 0;
    puVar18[10] = 0;
    *(undefined4 *)(puVar18 + 9) = 0x3f800000;
    puVar15 = puVar20;
    FUN_10747f7f4(unaff_x19 + 8,puStack_100,puVar20,puVar18);
    uStack_e0 = 0;
    func_0x00010747f81c(&uStack_e0);
    puVar21 = puVar20;
  }
  FUN_10747d634(puVar18 + 5);
  FUN_1073de718(puVar18 + 5);
  puVar18[7] = lStack_b0;
  puVar18[6] = uStack_b8;
  puVar18[8] = lStack_a8;
  *(undefined4 *)(puVar18 + 9) = uStack_a0;
  if (lStack_a8 != 0) {
    uVar17 = *(ulong *)(lStack_b0 + 8);
    if ((uStack_b8 & uStack_b8 - 1) == 0) {
      uVar17 = uVar17 & uStack_b8 - 1;
      uVar4 = true;
    }
    else {
      uVar4 = uVar17 == uStack_b8;
      if (uStack_b8 <= uVar17) {
        uVar3 = 0;
        if (uStack_b8 != 0) {
          uVar3 = uVar17 / uStack_b8;
        }
        uVar17 = uVar17 - uVar3 * uStack_b8;
      }
    }
    *(undefined8 **)(puVar18[5] + uVar17 * 8) = puVar18 + 7;
  }
  puVar18[10] = 1;
  ppppplVar11 = (long *****)&stack0xffffffffffffff40;
  func_0x0001074701f4();
  func_0x0001074800a4();
  func_0x00010747fdb8(uStack_70);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  ppppplVar12 = (long *****)&stack0xffffffffffffff40;
  func_0x0001074701f4();
  func_0x0001074800a4();
  func_0x00010747fe68();
  uStack_148 = 0x10747bc9c;
  ppppplVar13 = ppppplVar12;
  pppplVar14 = param_3;
  plStack_170 = &lStack_80;
  puStack_168 = puVar21;
  puStack_160 = puVar18;
  pppplStack_158 = (long ****)ppppplVar11;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010747bd38();
  if (((ulong)*ppppplVar12 & 1) == 0) {
    puVar20 = puVar15 + 2;
    while (puVar20 = (undefined8 *)*puVar20, puVar20 != (undefined8 *)0x0) {
      ppppplVar13 = ppppplVar12 + 10;
      pppplVar14 = (long ****)(puVar20 + 2);
      FUN_10747b6f8();
      if (ppppplVar13 == (long *****)0x0) {
        ppplStack_178 = (long ***)param_3;
        FUN_10747bef0(ppppplVar12 + 1,&ppplStack_178,puVar15);
        return;
      }
    }
    func_0x000107480264();
    puVar20 = puVar15;
    lStack_180 = lVar1;
    ppplStack_178 = (long ***)&stack0xffffffffffffff40;
    func_0x00010747fe04();
    uStack_1f8 = 0;
    uStack_200 = 0;
    pppplStack_1e8 = (long ****)0x0;
    uStack_1f0 = 0;
    auStack_1e0[0] = 0x3f800000;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_210 = 0x3f800000;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_240 = 0x3f800000;
    puVar20 = puVar20 + 2;
    uStack_188 = extraout_x8_00;
    while (puVar20 = (undefined8 *)*puVar20, puVar20 != (undefined8 *)0x0) {
      ppppplVar11 = ppppplVar13 + 10;
      func_0x00010747b8b4(ppppplVar11,puVar20 + 2);
      if (ppppplVar11 != (long *****)0x0) {
        uVar4 = *(char *)(puVar20 + 9) == '\x01';
        if ((bool)uVar4) {
          FUN_10747e678(&plStack_1d0);
          FUN_10747c648(&uStack_230,&plStack_1d0);
        }
        else {
          FUN_10747e678(&plStack_1d0);
          FUN_10747c648(&uStack_200,&plStack_1d0);
        }
        func_0x00010747e6b8(&plStack_1d0);
      }
    }
    (*(code *)(*pppplVar14)[2])(pppplVar14,&uStack_200,&uStack_230,&uStack_260,puVar15[5]);
    func_0x0001072bb790(&uStack_260);
    func_0x000107473b50(&uStack_230);
    func_0x000107473b50(&uStack_200);
    func_0x00010747fdb8(uStack_188);
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072bb790(&uStack_260);
    func_0x000107473b50(&uStack_230);
    func_0x000107473b50(&uStack_200);
    func_0x00010747fe68();
    FUN_10747f888();
    return;
  }
  func_0x000107480264();
  pppplVar14 = pppplStack_158;
  puVar18 = puStack_160;
  uStack_188 = 1;
  puVar20 = puVar15;
  lStack_190 = (long)plVar23;
  lStack_180 = unaff_x24;
  ppplStack_178 = unaff_x23;
  func_0x00010747fe5c();
  func_0x000107480288();
  puVar20 = puVar20 + 2;
  puVar21 = puVar20;
  while (puVar21 = (undefined8 *)*puVar21, puVar21 != (undefined8 *)0x0) {
    uVar5 = (int)puVar21 + 0x10;
    func_0x000104c2d614();
    ppppplVar13 = (long *****)(puVar18 + 10);
    FUN_10747b6f8(ppppplVar13,puVar21 + 2);
    if (ppppplVar13 != (long *****)0x0) {
      uVar5 = 1;
    }
    if ((uVar5 & 1) == 0) {
      ppppplVar13 = (long *****)auStack_1e0;
      FUN_10746ff98(ppppplVar13,puVar21 + 2);
    }
  }
  if (lStack_1c8 == 0) {
    while (puVar20 = (undefined8 *)*puVar20, puVar20 != (undefined8 *)0x0) {
      func_0x00010747ff70();
      if ((long *****)(puVar18 + 8) != ppppplVar13) {
        func_0x0001074801bc();
        ppppplStack_1b0 = (long *****)pppplVar14;
        FUN_10747d378();
        ppppplVar13 = (long *****)(pppplVar14 + 2);
        FUN_10747e5c0(ppppplVar13,puVar20 + 2);
      }
    }
    if ((long ****)pppplVar14[4] == (long ****)0x0) {
      ppppplStack_1b0 = (long *****)pppplVar14;
      FUN_10747fa48(puVar18 + 4,&ppppplStack_1b0);
    }
    func_0x00010747ff48();
    FUN_10747bdac();
  }
  else {
    pppplStack_1e8 = pppplVar14;
    pppppplVar7 = (long ******)(puVar18 + 4);
    FUN_10747f7a4(pppppplVar7,&uStack_198,&pppplStack_1e8);
    pppplVar22 = pppplStack_1e8;
    if (*pppppplVar7 == (long *****)0x0) {
      pppppplVar19 = pppppplVar7;
      func_0x000107480038();
      puStack_1a8 = puVar18 + 5;
      uStack_1a0 = 0;
      pppppplVar19[4] = (long *****)pppplVar22;
      ppppplStack_1b0 = (long *****)pppppplVar19;
      FUN_10746fee4(pppppplVar19 + 5,puVar15);
      pppppplVar19[10] = (long *****)puVar15[5];
      uStack_1a0 = CONCAT71(uStack_1a0._1_7_,1);
      FUN_10747f7f4(puVar18 + 4,uStack_198,pppppplVar7,pppppplVar19);
      ppppplStack_1b0 = (long *****)0x0;
      pppppplVar7 = &ppppplStack_1b0;
      func_0x00010747f81c();
    }
    for (plVar23 = plStack_1d0; plVar23 != (long *)0x0; plVar23 = (long *)*plVar23) {
      func_0x00010747ff70();
      if ((long ******)(puVar18 + 8) == pppppplVar7) {
        func_0x0001074801bc();
        func_0x0001074801b4();
        pppppplVar7 = (long ******)(pppplVar14 + 2);
        FUN_10747e3ac(pppppplVar7,plVar23 + 2);
      }
      else {
        if (pppppplVar7[0xd] != (long *****)0x0) {
          pppplVar22 = pppppplVar7[0xb][4] + 3;
          while (pppplVar22 = (long ****)*pppplVar22, pppplVar22 != (long ****)0x0) {
            uVar17 = (ulong)(plVar23 + 2);
            func_0x000104c2fc44(uVar17,pppplVar22 + 4);
            if ((uVar17 & 1) == 0) {
              pppplVar6 = pppplVar22 + 4;
              func_0x000104c2fc44(pppplVar6,plVar23 + 2);
              if ((int)pppplVar6 == 0) {
                FUN_10747e3ac(pppplStack_1e8 + 2,plVar23 + 2);
                pppppplVar7 = pppppplVar7 + 0xb;
                func_0x0001074801b4();
                goto LAB_10747aff4;
              }
              pppplVar22 = pppplVar22 + 1;
            }
          }
        }
        pppppplVar7 = pppppplVar7 + 0xb;
        func_0x0001074801b4();
      }
      func_0x00010747ff70();
      if ((long ******)(puVar18 + 8) != pppppplVar7) {
        pppppplVar19 = (long ******)pppppplVar7[0xb];
        while (pppppplVar19 != pppppplVar7 + 0xc) {
          FUN_10747e5c0(pppppplVar19[4] + 2,plVar23 + 2);
          func_0x00010002c7d4();
        }
      }
      pppppplVar7 = (long ******)puVar18[0x19];
      (*(code *)(*pppppplVar7)[2])(pppppplVar7,&UNK_10de72b2c);
LAB_10747aff4:
    }
  }
  func_0x0001074800a4();
  return;
}



/* Entry: 10747bc9c; end: 10747bdab;  */

void FUN_10747bc9c(long *****param_1,long *param_2,long param_3)

{
  undefined1 in_ZR;
  uint uVar1;
  ulong uVar2;
  long ****pppplVar3;
  long ******pppppplVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long lVar7;
  undefined8 extraout_x8;
  long *****unaff_x19;
  long unaff_x20;
  long ******pppppplVar8;
  long *plVar9;
  long *plVar10;
  long ****pppplVar11;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long ****pppplStack_a8;
  undefined4 auStack_a0 [4];
  long *plStack_90;
  long lStack_88;
  long *****ppppplStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppppplVar5 = param_1;
  func_0x00010747bd38();
  if (((ulong)*param_1 & 1) == 0) {
    plVar9 = (long *)(param_3 + 0x10);
    while (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) {
      ppppplVar5 = param_1 + 10;
      param_2 = plVar9 + 2;
      FUN_10747b6f8();
      if (ppppplVar5 == (long *****)0x0) {
        FUN_10747bef0(param_1 + 1,&stack0xffffffffffffffc8,param_3);
        return;
      }
    }
    func_0x000107480264();
    lVar7 = param_3;
    func_0x00010747fe04();
    uStack_b8 = 0;
    uStack_c0 = 0;
    pppplStack_a8 = (long ****)0x0;
    uStack_b0 = 0;
    auStack_a0[0] = 0x3f800000;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_d0 = 0x3f800000;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_100 = 0x3f800000;
    plVar9 = (long *)(lVar7 + 0x10);
    while (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) {
      ppppplVar6 = ppppplVar5 + 10;
      func_0x00010747b8b4(ppppplVar6,plVar9 + 2);
      if (ppppplVar6 != (long *****)0x0) {
        in_ZR = *(char *)(plVar9 + 9) == '\x01';
        if ((bool)in_ZR) {
          FUN_10747e678(&plStack_90);
          FUN_10747c648(&uStack_f0,&plStack_90);
        }
        else {
          FUN_10747e678(&plStack_90);
          FUN_10747c648(&uStack_c0,&plStack_90);
        }
        func_0x00010747e6b8(&plStack_90);
      }
    }
    (**(code **)(*param_2 + 0x10))
              (param_2,&uStack_c0,&uStack_f0,&uStack_120,*(undefined8 *)(param_3 + 0x28));
    func_0x0001072bb790(&uStack_120);
    func_0x000107473b50(&uStack_f0);
    func_0x000107473b50(&uStack_c0);
    func_0x00010747fdb8(extraout_x8);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072bb790(&uStack_120);
    func_0x000107473b50(&uStack_f0);
    func_0x000107473b50(&uStack_c0);
    func_0x00010747fe68();
    FUN_10747f888();
    return;
  }
  func_0x000107480264();
  lVar7 = param_3;
  func_0x00010747fe5c();
  func_0x000107480288();
  plVar9 = (long *)(lVar7 + 0x10);
  plVar10 = plVar9;
  while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
    uVar1 = (int)plVar10 + 0x10;
    func_0x000104c2d614();
    ppppplVar5 = (long *****)(unaff_x20 + 0x50);
    FUN_10747b6f8(ppppplVar5,plVar10 + 2);
    if (ppppplVar5 != (long *****)0x0) {
      uVar1 = 1;
    }
    if ((uVar1 & 1) == 0) {
      ppppplVar5 = (long *****)auStack_a0;
      FUN_10746ff98(ppppplVar5,plVar10 + 2);
    }
  }
  if (lStack_88 == 0) {
    while (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) {
      func_0x00010747ff70();
      if ((long *****)(unaff_x20 + 0x40) != ppppplVar5) {
        func_0x0001074801bc();
        ppppplStack_70 = unaff_x19;
        FUN_10747d378();
        ppppplVar5 = unaff_x19 + 2;
        FUN_10747e5c0(ppppplVar5,plVar9 + 2);
      }
    }
    if (unaff_x19[4] == (long ****)0x0) {
      ppppplStack_70 = unaff_x19;
      FUN_10747fa48(unaff_x20 + 0x20,&ppppplStack_70);
    }
    func_0x00010747ff48();
    FUN_10747bdac();
  }
  else {
    pppppplVar4 = (long ******)(unaff_x20 + 0x20);
    pppplStack_a8 = (long ****)unaff_x19;
    FUN_10747f7a4(pppppplVar4,&uStack_58,&pppplStack_a8);
    pppplVar11 = pppplStack_a8;
    if (*pppppplVar4 == (long *****)0x0) {
      pppppplVar8 = pppppplVar4;
      func_0x000107480038();
      lStack_68 = unaff_x20 + 0x28;
      uStack_60 = 0;
      pppppplVar8[4] = (long *****)pppplVar11;
      ppppplStack_70 = (long *****)pppppplVar8;
      FUN_10746fee4(pppppplVar8 + 5,param_3);
      pppppplVar8[10] = *(long ******)(param_3 + 0x28);
      uStack_60 = CONCAT71(uStack_60._1_7_,1);
      FUN_10747f7f4(unaff_x20 + 0x20,uStack_58,pppppplVar4,pppppplVar8);
      ppppplStack_70 = (long *****)0x0;
      pppppplVar4 = &ppppplStack_70;
      func_0x00010747f81c();
    }
    for (plVar9 = plStack_90; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      func_0x00010747ff70();
      if ((long ******)(unaff_x20 + 0x40) == pppppplVar4) {
        func_0x0001074801bc();
        func_0x0001074801b4();
        pppppplVar4 = (long ******)(unaff_x19 + 2);
        FUN_10747e3ac(pppppplVar4,plVar9 + 2);
      }
      else {
        if (pppppplVar4[0xd] != (long *****)0x0) {
          pppplVar11 = pppppplVar4[0xb][4] + 3;
          while (pppplVar11 = (long ****)*pppplVar11, pppplVar11 != (long ****)0x0) {
            uVar2 = (ulong)(plVar9 + 2);
            func_0x000104c2fc44(uVar2,pppplVar11 + 4);
            if ((uVar2 & 1) == 0) {
              pppplVar3 = pppplVar11 + 4;
              func_0x000104c2fc44(pppplVar3,plVar9 + 2);
              if ((int)pppplVar3 == 0) {
                FUN_10747e3ac(pppplStack_a8 + 2,plVar9 + 2);
                pppppplVar4 = pppppplVar4 + 0xb;
                func_0x0001074801b4();
                goto LAB_10747aff4;
              }
              pppplVar11 = pppplVar11 + 1;
            }
          }
        }
        pppppplVar4 = pppppplVar4 + 0xb;
        func_0x0001074801b4();
      }
      func_0x00010747ff70();
      if ((long ******)(unaff_x20 + 0x40) != pppppplVar4) {
        pppppplVar8 = (long ******)pppppplVar4[0xb];
        while (pppppplVar8 != pppppplVar4 + 0xc) {
          FUN_10747e5c0(pppppplVar8[4] + 2,plVar9 + 2);
          func_0x00010002c7d4();
        }
      }
      pppppplVar4 = *(long *******)(unaff_x20 + 200);
      (*(code *)(*pppppplVar4)[2])(pppppplVar4,&UNK_10de72b2c);
LAB_10747aff4:
    }
  }
  func_0x0001074800a4();
  return;
}



/* Entry: 10747bdac; end: 10747beef;  */

void FUN_10747bdac(long param_1,long *param_2,long param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  long *plVar2;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  
  lVar1 = param_3;
  func_0x00010747fe04();
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0x3f800000;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0x3f800000;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_100 = 0x3f800000;
  plVar2 = (long *)(lVar1 + 0x10);
  uStack_48 = extraout_x8;
  while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    lVar1 = param_1 + 0x50;
    func_0x00010747b8b4(lVar1,plVar2 + 2);
    if (lVar1 != 0) {
      in_ZR = *(char *)(plVar2 + 9) == '\x01';
      if ((bool)in_ZR) {
        FUN_10747e678(auStack_90);
        FUN_10747c648(&uStack_f0,auStack_90);
      }
      else {
        FUN_10747e678(auStack_90);
        FUN_10747c648(&uStack_c0,auStack_90);
      }
      func_0x00010747e6b8(auStack_90);
    }
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,&uStack_c0,&uStack_f0,&uStack_120,*(undefined8 *)(param_3 + 0x28));
  func_0x0001072bb790(&uStack_120);
  func_0x000107473b50(&uStack_f0);
  func_0x000107473b50(&uStack_c0);
  func_0x00010747fdb8(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072bb790(&uStack_120);
  func_0x000107473b50(&uStack_f0);
  func_0x000107473b50(&uStack_c0);
  func_0x00010747fe68();
  FUN_10747f888();
  return;
}



/* Entry: 10747bef0; end: 10747bf07;  */

void FUN_10747bef0(void)

{
  FUN_10747f888();
  return;
}



/* Entry: 10747bf08; end: 10747bf6b;  */

void FUN_10747bf08(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  lVar2 = *(long *)(param_1 + 0x20);
  while (lVar2 != param_1 + 0x28) {
    if (*(long *)(*(long *)(lVar2 + 0x20) + 0x20) == 0) {
      lVar1 = param_1;
      FUN_10747bdac(param_1,*(long *)(lVar2 + 0x20),lVar2 + 0x28);
      func_0x000107480264();
      func_0x00010747fa84();
      lVar2 = lVar1;
    }
    else {
      func_0x0001074800d0();
      lVar2 = lVar1;
    }
  }
  return;
}



/* Entry: 10747bf6c; end: 10747bfbf;  */

long FUN_10747bf6c(long param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x50;
  FUN_10747fbe0();
  lVar1 = 0;
  lStack_30 = param_1;
  lStack_28 = param_2;
  while (lStack_30 != 0) {
    func_0x00010778196c(*(undefined8 *)(lStack_28 + 0x38));
    func_0x00010748027c();
    lVar1 = lVar1 + extraout_x8 * 4;
    func_0x00010747d688(&lStack_30);
  }
  return lVar1;
}



/* Entry: 10747bfc0; end: 10747bfc7;  */

void FUN_10747bfc0(undefined4 *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  long lStack_d0;
  code *apcStack_b8 [7];
  undefined4 uStack_80;
  int iStack_7c;
  long lStack_78;
  undefined8 uStack_70;
  
  lVar10 = param_2;
  func_0x00010747fe04();
  lStack_f8 = 0;
  lStack_f0 = 0;
  uStack_e8 = 0;
  uStack_70 = extraout_x8;
  func_0x0001072dd514(&lStack_f8,*(undefined8 *)(lVar10 + 0x48));
  uVar11 = **(undefined8 **)(param_2 + 0xd0);
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uVar5 = *(ulong *)(param_2 + 0x48);
  if (uVar5 != 0) {
    if (0x38e38e38e38e38e < uVar5) goto LAB_10747c2f4;
    FUN_10747d724(apcStack_b8,uVar5,0,&uStack_100);
    FUN_10747d794(&uStack_110,apcStack_b8);
    FUN_10747d83c(apcStack_b8);
  }
  lVar10 = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  lVar9 = *(long *)(param_2 + 0x38);
  while (lVar9 != param_2 + 0x40) {
    if (*(long *)(lVar9 + 0x68) == 0) {
      lVar8 = param_2 + 0x50;
      lVar6 = lVar9 + 0x20;
      FUN_10747b6f8();
      if (lVar8 != 0) {
        if (*(int *)(lVar6 + 0x48) == 0) {
          func_0x00010778196c(*(undefined8 *)(lVar6 + 0x38));
          func_0x00010748027c();
          func_0x0001072d17f4(&lStack_f8,lVar9 + 0x20);
        }
        else if (*(int *)(lVar6 + 0x48) == 1) {
          func_0x00010778196c(*(undefined8 *)(lVar6 + 0x38));
          func_0x00010748027c();
          lVar8 = extraout_x8_00 * 4;
          iVar1 = *(int *)(lVar6 + 0x78);
          func_0x000104c2fe00(apcStack_b8,lVar9 + 0x20);
          iStack_7c = (int)uVar11 - iVar1;
          uStack_80 = *(undefined4 *)(lVar6 + 0x74);
          lStack_78 = lVar8;
          if (uStack_108 < uStack_100) {
            func_0x00010747d884(uStack_108,apcStack_b8);
            uVar5 = uStack_108 + 0x48;
          }
          else {
            lVar6 = (long)(uStack_108 - uStack_110) / 0x48;
            uVar5 = lVar6 + 1;
            if (0x38e38e38e38e38e < uVar5) {
              func_0x00010747ff60();
              FUN_10747d710();
              goto LAB_10747c2f8;
            }
            uVar2 = (long)(uStack_100 - uStack_110) / 0x48;
            uVar7 = uVar2 * 2;
            if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
              uVar7 = uVar5;
            }
            if (0x1c71c71c71c71c6 < uVar2) {
              uVar7 = 0x38e38e38e38e38e;
            }
            FUN_10747d724(auStack_e0,uVar7,lVar6,&uStack_100);
            func_0x00010747d884(lStack_d0,apcStack_b8);
            lStack_d0 = lStack_d0 + 0x48;
            FUN_10747d794(&uStack_110,auStack_e0);
            uVar5 = uStack_108;
            FUN_10747d83c(auStack_e0);
          }
          uStack_108 = uVar5;
          func_0x00010747fed4();
          lVar10 = lVar8 + lVar10;
        }
      }
    }
    func_0x00010002c7d4();
  }
  func_0x00010747ff60();
  if (lVar10 != 0) {
    apcStack_b8[0] = FUN_10747c424;
    uVar7 = uStack_110;
    uVar5 = uStack_108;
    if (uStack_110 != uStack_108) {
      func_0x00010748017c();
      FUN_10747d8a8();
      uVar7 = uStack_110;
      uVar5 = uStack_108;
    }
    for (; uVar7 != uVar5; uVar7 = uVar7 + 0x48) {
      if (lVar10 != 0) {
        lVar9 = *(long *)(uVar7 + 0x40);
        FUN_10747b76c(param_2,uVar7);
        lVar10 = lVar10 - lVar9;
      }
    }
    func_0x00010748014c();
  }
  uVar4 = lStack_f8 == lStack_f0;
  if (!(bool)uVar4) {
    (**(code **)(**(long **)(param_2 + 200) + 0x18))(*(long **)(param_2 + 200),&lStack_f8);
  }
  FUN_10747c444(&uStack_110);
  func_0x00010726e078(&lStack_f8);
  func_0x00010747fdb8(uStack_70);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
LAB_10747c2f4:
  FUN_10747d710();
LAB_10747c2f8:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10747c2fc);
  (*pcVar3)();
}



/* Entry: 10747bfc8; end: 10747c357;  */

void FUN_10747bfc8(undefined4 *param_1,long param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  long lStack_d0;
  code *apcStack_b8 [7];
  undefined4 uStack_80;
  int iStack_7c;
  long lStack_78;
  undefined8 uStack_70;
  
  lVar9 = param_2;
  func_0x00010747fe04();
  lStack_f8 = 0;
  lStack_f0 = 0;
  uStack_e8 = 0;
  uStack_70 = extraout_x8;
  func_0x0001072dd514(&lStack_f8,*(undefined8 *)(lVar9 + 0x48));
  uVar11 = **(undefined8 **)(param_2 + 0xd0);
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uVar5 = *(ulong *)(param_2 + 0x48);
  if (uVar5 != 0) {
    if (0x38e38e38e38e38e < uVar5) goto LAB_10747c2f4;
    FUN_10747d724(apcStack_b8,uVar5,0,&uStack_100);
    FUN_10747d794(&uStack_110,apcStack_b8);
    FUN_10747d83c(apcStack_b8);
  }
  uVar5 = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  lVar9 = *(long *)(param_2 + 0x38);
  while (lVar9 != param_2 + 0x40) {
    if (*(long *)(lVar9 + 0x68) == 0) {
      lVar8 = param_2 + 0x50;
      lVar6 = lVar9 + 0x20;
      FUN_10747b6f8();
      if (lVar8 != 0) {
        if (*(int *)(lVar6 + 0x48) == 0) {
          func_0x00010778196c(*(undefined8 *)(lVar6 + 0x38));
          func_0x00010748027c();
          func_0x0001072d17f4(&lStack_f8,lVar9 + 0x20);
        }
        else if (*(int *)(lVar6 + 0x48) == 1) {
          func_0x00010778196c(*(undefined8 *)(lVar6 + 0x38));
          func_0x00010748027c();
          lVar8 = extraout_x8_00 * 4;
          iVar1 = *(int *)(lVar6 + 0x78);
          func_0x000104c2fe00(apcStack_b8,lVar9 + 0x20);
          iStack_7c = (int)uVar11 - iVar1;
          uStack_80 = *(undefined4 *)(lVar6 + 0x74);
          lStack_78 = lVar8;
          if (uStack_108 < uStack_100) {
            func_0x00010747d884(uStack_108,apcStack_b8);
            uVar10 = uStack_108 + 0x48;
          }
          else {
            lVar6 = (long)(uStack_108 - uStack_110) / 0x48;
            uVar10 = lVar6 + 1;
            if (0x38e38e38e38e38e < uVar10) {
              func_0x00010747ff60();
              FUN_10747d710();
              goto LAB_10747c2f8;
            }
            uVar2 = (long)(uStack_100 - uStack_110) / 0x48;
            uVar7 = uVar2 * 2;
            if (uVar7 < uVar10 || uVar7 - uVar10 == 0) {
              uVar7 = uVar10;
            }
            if (0x1c71c71c71c71c6 < uVar2) {
              uVar7 = 0x38e38e38e38e38e;
            }
            FUN_10747d724(auStack_e0,uVar7,lVar6,&uStack_100);
            func_0x00010747d884(lStack_d0,apcStack_b8);
            lStack_d0 = lStack_d0 + 0x48;
            FUN_10747d794(&uStack_110,auStack_e0);
            uVar10 = uStack_108;
            FUN_10747d83c(auStack_e0);
          }
          uStack_108 = uVar10;
          func_0x00010747fed4();
          uVar5 = lVar8 + uVar5;
        }
      }
    }
    func_0x00010002c7d4();
  }
  func_0x00010747ff60();
  if (param_3 < uVar5) {
    apcStack_b8[0] = FUN_10747c424;
    if (uStack_110 != uStack_108) {
      func_0x00010748017c();
      FUN_10747d8a8();
    }
    uVar7 = uStack_108;
    for (uVar10 = uStack_110; uVar10 != uVar7; uVar10 = uVar10 + 0x48) {
      if (param_3 < uVar5) {
        lVar9 = *(long *)(uVar10 + 0x40);
        FUN_10747b76c(param_2,uVar10);
        uVar5 = uVar5 - lVar9;
      }
    }
    func_0x00010748014c();
  }
  uVar4 = lStack_f8 == lStack_f0;
  if (!(bool)uVar4) {
    (**(code **)(**(long **)(param_2 + 200) + 0x18))(*(long **)(param_2 + 200),&lStack_f8);
  }
  FUN_10747c444(&uStack_110);
  func_0x00010726e078(&lStack_f8);
  func_0x00010747fdb8(uStack_70);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
LAB_10747c2f4:
  FUN_10747d710();
LAB_10747c2f8:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10747c2fc);
  (*pcVar3)();
}



/* Entry: 10747c358; end: 10747c423;  */

void FUN_10747c358(undefined1 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  ulong uVar5;
  undefined4 uStack_44;
  
  uVar5 = 0;
  lVar4 = *(long *)(param_2 + 0x38);
  while (lVar4 != param_2 + 0x40) {
    lVar1 = param_2 + 0x50;
    lVar3 = lVar4 + 0x20;
    FUN_10747b6f8();
    lVar4 = 0;
    if (lVar1 != 0) {
      lVar4 = *(long *)(lVar3 + 0x38);
      func_0x00010778196c();
      func_0x00010748027c();
      uVar5 = uVar5 + extraout_x8 * 4;
    }
    func_0x0001074800d0();
  }
  uVar2 = *(long *)(param_2 + 0xd8) + 400;
  func_0x0001072b86c8(uVar2,&UNK_10de72adc);
  if ((uVar2 & 0xffffffff) < uVar5) {
    uStack_44 = 0;
    lVar4 = *(long *)(param_2 + 0xd8) + 0x180;
    func_0x0001072b86c8(lVar4,&uStack_44);
    FUN_10747bfc8(param_1,param_2,lVar4);
  }
  else {
    *param_1 = 0;
  }
  param_1[0x30] = (uVar2 & 0xffffffff) < uVar5;
  return;
}



/* Entry: 10747c424; end: 10747c443;  */

bool FUN_10747c424(long param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = *(uint *)(param_1 + 0x38) < *(uint *)(param_2 + 0x38);
  if (*(uint *)(param_1 + 0x3c) != *(uint *)(param_2 + 0x3c)) {
    bVar1 = *(uint *)(param_2 + 0x3c) < *(uint *)(param_1 + 0x3c);
  }
  return bVar1;
}



/* Entry: 10747c444; end: 10747c493;  */

long * FUN_10747c444(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x48;
      func_0x000104c2f714(lVar1);
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10747c494; end: 10747c4af;  */

void FUN_10747c494(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x19;
  long *unaff_x20;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  func_0x00010747fe5c();
  *param_1 = 0;
  *unaff_x19 = 0;
  FUN_10747e9e4();
  func_0x000107480164();
  FUN_10747e9e4();
  lVar3 = unaff_x20[2];
  lVar4 = unaff_x20[1];
  lVar6 = unaff_x19[2];
  unaff_x20[1] = unaff_x19[1];
  unaff_x20[2] = lVar6;
  unaff_x19[1] = lVar4;
  unaff_x19[2] = lVar3;
  lVar4 = unaff_x20[3];
  unaff_x20[3] = unaff_x19[3];
  unaff_x19[3] = lVar4;
  lVar3 = unaff_x20[4];
  *(int *)(unaff_x20 + 4) = (int)unaff_x19[4];
  *(int *)(unaff_x19 + 4) = (int)lVar3;
  if (unaff_x20[3] != 0) {
    uVar1 = unaff_x20[1];
    uVar5 = *(ulong *)(unaff_x20[2] + 8);
    if ((uVar1 & uVar1 - 1) == 0) {
      uVar5 = uVar1 - 1 & uVar5;
    }
    else if (uVar1 <= uVar5) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar5 / uVar1;
      }
      uVar5 = uVar5 - uVar2 * uVar1;
    }
    *(long **)(*unaff_x20 + uVar5 * 8) = unaff_x20 + 2;
  }
  if (lVar4 != 0) {
    uVar1 = unaff_x19[1];
    uVar5 = *(ulong *)(unaff_x19[2] + 8);
    if ((uVar1 & uVar1 - 1) == 0) {
      uVar5 = uVar1 - 1 & uVar5;
    }
    else if (uVar1 <= uVar5) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar5 / uVar1;
      }
      uVar5 = uVar5 - uVar2 * uVar1;
    }
    *(long **)(*unaff_x19 + uVar5 * 8) = unaff_x19 + 2;
  }
  return;
}



/* Entry: 10747c4b0; end: 10747c55f;  */

void FUN_10747c4b0(undefined1 *param_1)

{
  func_0x00010747c4e4(param_1 + 0x50);
  func_0x00010747c528(param_1 + 0x70);
  FUN_10747fcf8(param_1 + 0x38);
  *param_1 = 0;
  return;
}



/* Entry: 10747c560; end: 10747c59f;  */

void FUN_10747c560(long *param_1)

{
  func_0x00010747ff54();
  FUN_10747d284();
  if (*param_1 == 0) {
    func_0x000107480104();
    func_0x00010747fedc();
    func_0x00010747fff8();
  }
  return;
}



/* Entry: 10747c5a0; end: 10747c647;  */

long FUN_10747c5a0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar1 = param_1;
  FUN_10747d06c(param_1,&uStack_48,param_2);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    lVar2 = 0x70;
    __Znwm();
    uStack_50 = 1;
    plStack_58 = param_1 + 1;
    func_0x000104c2fe00(lVar2 + 0x20,param_2);
    *(undefined8 *)(lVar2 + 0x68) = 0;
    *(undefined8 *)(lVar2 + 0x60) = 0;
    *(undefined8 **)(lVar2 + 0x58) = (undefined8 *)(lVar2 + 0x60);
    FUN_10747d0d4(param_1,uStack_48,plVar1,lVar2);
    uStack_60 = 0;
    func_0x00010747d0fc(&uStack_60);
  }
  return lVar2 + 0x58;
}



/* Entry: 10747c648; end: 10747c82f;  */

void FUN_10747c648(long *param_1,long param_2)

{
  ulong uVar1;
  undefined1 in_NG;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *unaff_x19;
  ulong uVar5;
  long *plVar6;
  long *unaff_x24;
  long *plVar7;
  
  func_0x000107480004();
  plVar6 = (long *)unaff_x19[1];
  plVar2 = param_1;
  if (plVar6 != (long *)0x0) {
    uVar5 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar5) == 0) {
      unaff_x24 = (long *)(uVar5 & (ulong)param_1);
      in_NG = false;
    }
    else {
      in_NG = (long)param_1 - (long)plVar6 < 0;
      unaff_x24 = param_1;
      if (plVar6 <= param_1) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)param_1 / (ulong)plVar6;
        }
        unaff_x24 = (long *)((long)param_1 - uVar1 * (long)plVar6);
      }
    }
    plVar7 = *(long **)(*unaff_x19 + (long)unaff_x24 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_10747c700;
          plVar3 = (long *)plVar7[1];
          in_NG = (long)plVar3 - (long)param_1 < 0;
          if (plVar3 != param_1) break;
          plVar2 = plVar7 + 2;
          func_0x000104c32db4(plVar2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            return;
          }
        }
        if (((ulong)plVar6 & uVar5) == 0) {
          plVar3 = (long *)((ulong)plVar3 & uVar5);
        }
        else if (plVar6 <= plVar3) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar3 / (ulong)plVar6;
          }
          plVar3 = (long *)((long)plVar3 - uVar1 * (long)plVar6);
        }
        in_NG = (long)plVar3 - (long)unaff_x24 < 0;
      } while (plVar3 == unaff_x24);
    }
  }
LAB_10747c700:
  plVar7 = unaff_x19 + 2;
  func_0x000107480038();
  *plVar2 = 0;
  plVar2[1] = (long)param_1;
  func_0x000104c318bc(plVar2 + 2,param_2);
  lVar4 = *(long *)(param_2 + 0x38);
  plVar2[10] = *(long *)(param_2 + 0x40);
  plVar2[9] = lVar4;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  func_0x00010747ffcc();
  if ((plVar6 == (long *)0x0) || (func_0x000107480270(), (bool)in_NG)) {
    func_0x00010747fe14((long)plVar6 << 1);
    FUN_107474d00();
    plVar6 = (long *)unaff_x19[1];
    if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
      unaff_x24 = (long *)((long)plVar6 - 1U & (ulong)param_1);
    }
    else {
      unaff_x24 = param_1;
      if (plVar6 <= param_1) {
        uVar5 = 0;
        if (plVar6 != (long *)0x0) {
          uVar5 = (ulong)param_1 / (ulong)plVar6;
        }
        unaff_x24 = (long *)((long)param_1 - uVar5 * (long)plVar6);
      }
    }
  }
  lVar4 = *unaff_x19;
  plVar3 = *(long **)(lVar4 + (long)unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    *plVar2 = *plVar7;
    *plVar7 = (long)plVar2;
    *(long **)(lVar4 + (long)unaff_x24 * 8) = plVar7;
    if (*plVar2 != 0) {
      plVar7 = *(long **)(*plVar2 + 8);
      if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar6 - 1U);
      }
      else if (plVar6 <= plVar7) {
        uVar5 = 0;
        if (plVar6 != (long *)0x0) {
          uVar5 = (ulong)plVar7 / (ulong)plVar6;
        }
        plVar7 = (long *)((long)plVar7 - uVar5 * (long)plVar6);
      }
      *(long **)(lVar4 + (long)plVar7 * 8) = plVar2;
    }
  }
  else {
    *plVar2 = *plVar3;
    *plVar3 = (long)plVar2;
  }
  func_0x00010747febc();
  FUN_107474e94();
  return;
}



/* Entry: 10747c830; end: 10747c88f;  */

void FUN_10747c830(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010747fd28(param_1,&uStack_30,param_2[2]);
  func_0x000107480228();
  return;
}



/* Entry: 10747c890; end: 10747c917;  */

long * FUN_10747c890(long *param_1,long param_2)

{
  long *plVar1;
  
  *param_1 = (long)&PTR_DAT_1109b3908;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = (long)(param_1 + 3);
  param_1[4] = 0;
  plVar1 = param_1;
  FUN_1073af260();
  (**(code **)(*plVar1 + 0x20))(param_1 + 5);
  FUN_10747c830(param_1 + 8,param_1[1] + 0xe0);
  return param_1;
}



/* Entry: 10747c918; end: 10747c9d7;  */

undefined8 * FUN_10747c918(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  puVar4 = param_1 + 5;
  *param_1 = &PTR_DAT_1109b3908;
  func_0x000107284284(auStack_40,puVar4);
  func_0x000107469f18(auStack_50,param_1 + 8);
  puVar2 = puVar4;
  func_0x0001072842e4();
  if ((int)puVar2 != 0) {
    puVar2 = puVar4;
    func_0x00010728433c();
    puVar3 = puVar2;
    FUN_1073af260();
    if (puVar2 == puVar3) {
      iVar1 = (int)param_1 + 0x40;
      FUN_107469f78();
      if (iVar1 != 0) {
        func_0x00010747bd38(param_1[1],param_1);
      }
    }
  }
  func_0x000107270b00(auStack_50);
  func_0x000107270b00(auStack_40);
  func_0x00010725b1d4(param_1 + 8);
  func_0x00010725b1d4(puVar4);
  func_0x00010747fd60(param_1 + 2);
  return param_1;
}



/* Entry: 10747c9d8; end: 10747ca53;  */

undefined8 FUN_10747c9d8(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010747ca00(param_1,*(undefined8 *)(param_1 + 0x10));
  func_0x000107480194(param_1);
  FUN_10747ca54();
  return unaff_x19;
}



/* Entry: 10747ca54; end: 10747ca6b;  */

void FUN_10747ca54(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10747ca6c; end: 10747caa7;  */

long * FUN_10747ca6c(long *param_1)

{
  if (param_1[2] != 0) {
    FUN_10747caa8(param_1);
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 10747caa8; end: 10747cb0b;  */

void FUN_10747caa8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      func_0x00010747cae4(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x80;
  }
  return;
}



/* Entry: 10747cb0c; end: 10747cb0f;  */

void FUN_10747cb0c(void)

{
  return;
}



/* Entry: 10747cb10; end: 10747cb3f;  */

undefined8 * FUN_10747cb10(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10747cb40(param_1,param_2,param_2 + param_3 * 0x10,param_3);
  return param_1;
}



/* Entry: 10747cb40; end: 10747cbb3;  */

void FUN_10747cb40(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_107471fe4(param_1,param_4);
    FUN_10747cbb4(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  func_0x0001074720d0(&uStack_40);
  return;
}



/* Entry: 10747cbb4; end: 10747cbe7;  */

void FUN_10747cbb4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_10747cbe8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10747cbe8; end: 10747cbfb;  */

void FUN_10747cbe8(void)

{
  FUN_10747cbfc();
  return;
}



/* Entry: 10747cbfc; end: 10747cc87;  */

undefined8 *
FUN_10747cbfc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puVar5 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    lVar4 = param_2[1];
    uVar6 = *param_2;
    puVar5[1] = param_2[1];
    *puVar5 = uVar6;
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar5 = puVar5 + 2;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  puStack_28 = puVar5;
  FUN_1074707dc(&uStack_50);
  return puVar5;
}



/* Entry: 10747cc88; end: 10747ccbf;  */

void FUN_10747cc88(void)

{
  undefined8 extraout_x8;
  
  func_0x00010747fe5c();
  func_0x00010745f964();
  FUN_10732f3cc(extraout_x8,&stack0xffffffffffffffe8);
  return;
}



/* Entry: 10747ccc0; end: 10747cdb3;  */

void FUN_10747ccc0(long *param_1,undefined *param_2)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  undefined8 extraout_x8;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x19;
  byte unaff_w20;
  long lVar8;
  long lVar9;
  long lVar10;
  
  func_0x00010747ff54();
  func_0x00010747fe04();
  func_0x000100061de0();
  lVar5 = *unaff_x19;
  if ((*(long *)(lVar5 + -8) == 0) && (*(char *)(lVar5 + (long)param_1) != -2)) {
    uVar6 = unaff_x19[2];
    param_1 = unaff_x19;
    if ((uVar6 < 9) || (uVar6 * 0x19 < (ulong)(unaff_x19[3] << 5))) {
      param_2 = (undefined *)(uVar6 << 1 | 1);
      FUN_10747cdb4();
    }
    else {
      param_2 = &UNK_1109b3940;
      func_0x00010ae6c914();
    }
    func_0x000107480020();
    func_0x000100061de0();
    lVar5 = *unaff_x19;
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  bVar3 = *(char *)(lVar5 + (long)param_1) == -0x80;
  *(ulong *)(lVar5 + -8) = *(long *)(lVar5 + -8) - (ulong)bVar3;
  uVar6 = unaff_x19[2];
  *(byte *)(lVar5 + (long)param_1) = unaff_w20 & 0x7f;
  *(byte *)(lVar5 + (uVar6 & (long)param_1 - 7U) + (uVar6 & 7)) = unaff_w20 & 0x7f;
  func_0x00010747fdb8(extraout_x8);
  if (bVar3) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = *param_1;
  lVar8 = param_1[1];
  lVar9 = param_1[2];
  param_1[2] = (long)param_2;
  FUN_10747ce70();
  lVar10 = param_1[1];
  for (lVar5 = 0; lVar9 != lVar5; lVar5 = lVar5 + 1) {
    if (-1 < *(char *)(lVar1 + lVar5)) {
      lVar7 = lVar8;
      func_0x000104c2fe38();
      lVar4 = lVar7;
      func_0x000107480164();
      func_0x000100061de0();
      bVar2 = (byte)lVar7 & 0x7f;
      uVar6 = param_1[2];
      lVar7 = *param_1;
      *(byte *)(lVar7 + lVar4) = bVar2;
      *(byte *)(lVar7 + (lVar4 - 7U & uVar6) + (uVar6 & 7)) = bVar2;
      func_0x00010747cebc(lVar10 + lVar4 * 0x80,lVar8);
    }
    lVar8 = lVar8 + 0x80;
  }
  if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10747cdb4; end: 10747ce6f;  */

void FUN_10747cdb4(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = *param_1;
  lVar6 = param_1[1];
  lVar7 = param_1[2];
  param_1[2] = param_2;
  FUN_10747ce70();
  lVar9 = param_1[1];
  for (lVar8 = 0; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar5 = lVar6;
      func_0x000104c2fe38();
      lVar3 = lVar5;
      func_0x000107480164();
      func_0x000100061de0();
      bVar2 = (byte)lVar5 & 0x7f;
      uVar4 = param_1[2];
      lVar5 = *param_1;
      *(byte *)(lVar5 + lVar3) = bVar2;
      *(byte *)(lVar5 + (lVar3 - 7U & uVar4) + (uVar4 & 7)) = bVar2;
      func_0x00010747cebc(lVar9 + lVar3 * 0x80,lVar6);
    }
    lVar6 = lVar6 + 0x80;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10747ce70; end: 10747cf27;  */

void FUN_10747ce70(long *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 uStack_21;
  
  uVar2 = param_1[2] + 0x17U & 0xfffffffffffffff8;
  puVar1 = &uStack_21;
  func_0x000100063148(puVar1,uVar2 + param_1[2] * 0x80);
  *param_1 = (long)(puVar1 + 8);
  param_1[1] = (long)(puVar1 + uVar2);
  func_0x0001000631d0(param_1,0x80);
  return;
}



/* Entry: 10747cf28; end: 10747cf3b;  */

long FUN_10747cf28(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 10747cf3c; end: 10747cf5f;  */

undefined8 FUN_10747cf3c(undefined8 param_1)

{
  func_0x00010747cf9c();
  return param_1;
}



/* Entry: 10747cf60; end: 10747d06b;  */

undefined8 * FUN_10747cf60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010725af58(&uStack_30);
  return param_1;
}



/* Entry: 10747d06c; end: 10747d0d3;  */

long * FUN_10747d06c(long *param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar2;
  long *unaff_x22;
  long *plVar3;
  
  func_0x00010747fe5c();
  lVar1 = *(long *)(unaff_x20 + 8);
  plVar2 = (long *)(unaff_x20 + 8);
  while (plVar3 = plVar2, lVar1 != 0) {
    while (func_0x0001074800d8(), (int)param_1 == 0) {
      param_1 = unaff_x22 + 4;
      func_0x00010748007c();
      plVar3 = unaff_x22;
      if (((int)param_1 == 0) || (plVar2 = unaff_x22 + 1, *plVar2 == 0)) goto LAB_10747d0c4;
    }
    plVar2 = unaff_x22;
    lVar1 = *unaff_x22;
  }
LAB_10747d0c4:
  *unaff_x19 = plVar3;
  return plVar2;
}



/* Entry: 10747d0d4; end: 10747d13f;  */

void FUN_10747d0d4(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010747fde8();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x00010747fe70();
  func_0x000107480010();
  return;
}



/* Entry: 10747d140; end: 10747d25b;  */

void FUN_10747d140(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *unaff_x19;
  ulong *unaff_x20;
  long *unaff_x21;
  
  func_0x00010747ff9c();
  plVar1 = param_1 + 1;
  if (param_2 == plVar1) {
LAB_10747d178:
    plVar1 = unaff_x21;
    if ((unaff_x21 == (long *)*unaff_x19) || (func_0x00010002c810(), (ulong)plVar1[4] < *unaff_x20))
    {
      if (*unaff_x21 == 0) goto LAB_10747d210;
      param_1 = plVar1 + 1;
    }
    else {
LAB_10747d1f4:
      FUN_10747d284();
      param_1 = unaff_x19;
    }
  }
  else {
    if (*unaff_x20 < (ulong)unaff_x21[4]) goto LAB_10747d178;
    if (*unaff_x20 <= (ulong)unaff_x21[4]) {
      return;
    }
    func_0x0001074800d0();
    if ((plVar1 != param_1) && ((ulong)param_1[4] <= *unaff_x20)) goto LAB_10747d1f4;
    if (unaff_x21[1] == 0) goto LAB_10747d210;
  }
  if (*param_1 != 0) {
    return;
  }
LAB_10747d210:
  lVar2 = 0x28;
  __Znwm();
  *(ulong *)(lVar2 + 0x20) = *unaff_x20;
  func_0x000107480164();
  FUN_10747d25c();
  func_0x00010747fff8();
  return;
}



/* Entry: 10747d25c; end: 10747d283;  */

void FUN_10747d25c(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010747fde8();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x00010747fe70();
  func_0x000107480010();
  return;
}



/* Entry: 10747d284; end: 10747d2cf;  */

long * FUN_10747d284(long param_1,undefined8 *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = (long *)(param_1 + 8);
  while (plVar2 = plVar1, plVar3 != (long *)0x0) {
    while (plVar2 = plVar3, (ulong)plVar2[4] <= param_3) {
      if (param_3 <= (ulong)plVar2[4]) goto LAB_10747d2c8;
      plVar1 = plVar2 + 1;
      plVar3 = (long *)*plVar1;
      if ((long *)*plVar1 == (long *)0x0) goto LAB_10747d2c8;
    }
    plVar1 = plVar2;
    plVar3 = (long *)*plVar2;
  }
LAB_10747d2c8:
  *param_2 = plVar2;
  return plVar1;
}



/* Entry: 10747d2d0; end: 10747d377;  */

long * FUN_10747d2d0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10747d378; end: 10747d3b7;  */

void FUN_10747d378(long *param_1)

{
  func_0x00010747ff54();
  FUN_10747d284();
  if (*param_1 == 0) {
    func_0x000107480104();
    func_0x00010747fedc();
    func_0x00010747fff8();
  }
  return;
}



/* Entry: 10747d3b8; end: 10747d3eb;  */

long FUN_10747d3b8(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10747d3ec(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x48;
}



/* Entry: 10747d3ec; end: 10747d5cf;  */

undefined1  [16]
FUN_10747d3ec(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined1 in_NG;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x19;
  long *plVar6;
  ulong uVar7;
  ulong unaff_x27;
  ulong uVar8;
  undefined1 auVar9 [16];
  long *aplStack_78 [3];
  
  func_0x000107480004();
  uVar7 = unaff_x19[1];
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    if ((uVar7 & uVar8) == 0) {
      unaff_x27 = uVar8 & param_3;
      in_NG = false;
    }
    else {
      in_NG = (long)(param_3 - uVar7) < 0;
      unaff_x27 = param_3;
      if (uVar7 <= param_3) {
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = param_3 / uVar7;
        }
        unaff_x27 = param_3 - uVar4 * uVar7;
      }
    }
    plVar6 = *(long **)(*unaff_x19 + unaff_x27 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_10747d4b4;
          uVar4 = plVar6[1];
          in_NG = (long)(uVar4 - param_3) < 0;
          if (uVar4 != param_3) break;
          plVar2 = plVar6 + 2;
          func_0x000104c32db4(plVar2,param_4);
          if (((ulong)plVar2 & 1) != 0) {
            uVar3 = 0;
            aplStack_78[0] = plVar6;
            goto LAB_10747d5b8;
          }
        }
        if ((uVar7 & uVar8) == 0) {
          uVar4 = uVar4 & uVar8;
        }
        else if (uVar7 <= uVar4) {
          uVar1 = 0;
          if (uVar7 != 0) {
            uVar1 = uVar4 / uVar7;
          }
          uVar4 = uVar4 - uVar1 * uVar7;
        }
        in_NG = (long)(uVar4 - unaff_x27) < 0;
      } while (uVar4 == unaff_x27);
    }
  }
LAB_10747d4b4:
  func_0x000107480020(aplStack_78);
  FUN_10747d5d0();
  func_0x00010747ffcc();
  if ((uVar7 == 0) || (func_0x000107480270(param_1,param_2,(float)uVar7), (bool)in_NG)) {
    func_0x00010747fe14(uVar7 << 1);
    FUN_1073de554();
    uVar7 = unaff_x19[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x27 = uVar7 - 1 & param_3;
    }
    else {
      unaff_x27 = param_3;
      if (uVar7 <= param_3) {
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = param_3 / uVar7;
        }
        unaff_x27 = param_3 - uVar8 * uVar7;
      }
    }
  }
  lVar5 = *unaff_x19;
  plVar6 = *(long **)(lVar5 + unaff_x27 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = unaff_x19 + 2;
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
    *(long **)(lVar5 + unaff_x27 * 8) = plVar6;
    if (*aplStack_78[0] != 0) {
      uVar8 = *(ulong *)(*aplStack_78[0] + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar8 = uVar8 & uVar7 - 1;
      }
      else if (uVar7 <= uVar8) {
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = uVar8 / uVar7;
        }
        uVar8 = uVar8 - uVar4 * uVar7;
      }
      *(long **)(lVar5 + uVar8 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
  }
  func_0x00010747febc();
  FUN_1073de74c();
  uVar3 = 1;
LAB_10747d5b8:
  auVar9._8_8_ = uVar3;
  auVar9._0_8_ = aplStack_78[0];
  return auVar9;
}



/* Entry: 10747d5d0; end: 10747d61b;  */

void FUN_10747d5d0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  puVar2 = puVar1 + 2;
  *puVar1 = 0;
  puVar1[1] = param_3;
  func_0x000104c2fe00(puVar2,*param_5);
  *(undefined1 *)(puVar2 + 7) = 0;
  return;
}



/* Entry: 10747d61c; end: 10747d633;  */

void FUN_10747d61c(long param_1)

{
  func_0x000104c2fe00();
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 10747d634; end: 10747d6bb;  */

void FUN_10747d634(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x000107470218(param_1,param_1[2]);
    param_1[2] = 0;
    lVar2 = param_1[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10747d6bc; end: 10747d70f;  */

void FUN_10747d6bc(long *param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    uVar3 = *(undefined8 *)pcVar1;
    uVar2 = CONCAT17(-(-2 < (char)((ulong)uVar3 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar3 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar3 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar3 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar3 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar3 >> 0x10
                                                                               )),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar3 >> 8)),-(-2 < (char)uVar3))))))));
    uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
    pcVar1 = pcVar1 + (uVar2 >> 3);
    *param_1 = (long)pcVar1;
    param_1[1] = param_1[1] + (uVar2 >> 3) * 0x80;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 10747d710; end: 10747d723;  */

void FUN_10747d710(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *unaff_x19;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x00010747ff54();
  plVar2[3] = 0;
  plVar2[4] = param_4;
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    if ((long *)0x38e38e38e38e38e < unaff_x20) {
      func_0x000104bd35f4();
      func_0x00010747fe5c();
      lVar5 = *plVar2;
      lVar1 = plVar2[1];
      lVar6 = *(long *)(param_2 + 8) + ((lVar1 - lVar5) / -0x48) * 0x48;
      lVar4 = lVar6;
      for (lVar3 = lVar5; lVar3 != lVar1; lVar3 = lVar3 + 0x48) {
        func_0x00010748009c(lVar4);
        lVar4 = lVar4 + 0x48;
      }
      for (; lVar5 != lVar1; lVar5 = lVar5 + 0x48) {
        func_0x000104c2f714(lVar5);
      }
      unaff_x19[1] = lVar6;
      lVar3 = *unaff_x20;
      *unaff_x20 = lVar6;
      unaff_x20[1] = lVar3;
      unaff_x19[1] = lVar3;
      lVar3 = unaff_x20[1];
      unaff_x20[1] = unaff_x19[2];
      unaff_x19[2] = lVar3;
      lVar3 = unaff_x20[2];
      unaff_x20[2] = unaff_x19[3];
      unaff_x19[3] = lVar3;
      *unaff_x19 = unaff_x19[1];
      return;
    }
    lVar3 = (long)unaff_x20 * 0x48;
    __Znwm();
  }
  lVar4 = lVar3 + param_3 * 0x48;
  *unaff_x19 = lVar3;
  unaff_x19[1] = lVar4;
  unaff_x19[2] = lVar4;
  unaff_x19[3] = lVar3 + (long)unaff_x20 * 0x48;
  return;
}



/* Entry: 10747d724; end: 10747d793;  */

void FUN_10747d724(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x00010747ff54();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if ((long *)0x38e38e38e38e38e < unaff_x20) {
      func_0x000104bd35f4();
      func_0x00010747fe5c();
      lVar4 = *param_1;
      lVar1 = param_1[1];
      lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0x48) * 0x48;
      lVar3 = lVar5;
      for (lVar2 = lVar4; lVar2 != lVar1; lVar2 = lVar2 + 0x48) {
        func_0x00010748009c(lVar3);
        lVar3 = lVar3 + 0x48;
      }
      for (; lVar4 != lVar1; lVar4 = lVar4 + 0x48) {
        func_0x000104c2f714(lVar4);
      }
      unaff_x19[1] = lVar5;
      lVar2 = *unaff_x20;
      *unaff_x20 = lVar5;
      unaff_x20[1] = lVar2;
      unaff_x19[1] = lVar2;
      lVar2 = unaff_x20[1];
      unaff_x20[1] = unaff_x19[2];
      unaff_x19[2] = lVar2;
      lVar2 = unaff_x20[2];
      unaff_x20[2] = unaff_x19[3];
      unaff_x19[3] = lVar2;
      *unaff_x19 = unaff_x19[1];
      return;
    }
    lVar2 = (long)unaff_x20 * 0x48;
    __Znwm();
  }
  lVar3 = lVar2 + param_3 * 0x48;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar3;
  unaff_x19[2] = lVar3;
  unaff_x19[3] = lVar2 + (long)unaff_x20 * 0x48;
  return;
}



/* Entry: 10747d794; end: 10747d83b;  */

void FUN_10747d794(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x00010747fe5c();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0x48) * 0x48;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x48) {
    func_0x00010748009c(lVar2);
    lVar2 = lVar2 + 0x48;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x48) {
    func_0x000104c2f714(lVar4);
  }
  unaff_x19[1] = lVar5;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar3;
  unaff_x19[1] = lVar3;
  lVar3 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = lVar3;
  lVar3 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = lVar3;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10747d83c; end: 10747d8a7;  */

long * FUN_10747d83c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x48;
    func_0x000104c2f714();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10747d8a8; end: 10747dfb3;  */

/* WARNING: Possible PIC construction at 0x00010747e35c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010747de44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010747dec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010747dc8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010747df28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010747dc90) */
/* WARNING: Removing unreachable block (ram,0x00010747de48) */
/* WARNING: Removing unreachable block (ram,0x00010747de58) */
/* WARNING: Removing unreachable block (ram,0x00010747de78) */
/* WARNING: Removing unreachable block (ram,0x00010747de80) */
/* WARNING: Removing unreachable block (ram,0x00010747de90) */
/* WARNING: Removing unreachable block (ram,0x00010747deac) */
/* WARNING: Removing unreachable block (ram,0x00010747dec8) */
/* WARNING: Removing unreachable block (ram,0x00010747e360) */
/* WARNING: Removing unreachable block (ram,0x00010747e388) */
/* WARNING: Removing unreachable block (ram,0x00010747e37c) */
/* WARNING: Removing unreachable block (ram,0x000107480230) */
/* WARNING: Removing unreachable block (ram,0x00010747df2c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10747d8a8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 extraout_x8;
  ulong uVar14;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  undefined8 *unaff_x20;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *******pppppppuVar18;
  undefined8 uVar19;
  undefined1 auStack_190 [48];
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *******pppppppuStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [8];
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined1 auStack_100 [72];
  undefined8 auStack_b8 [9];
  undefined8 uStack_70;
  
  puVar3 = auStack_120;
  pppppppuVar18 = (undefined8 *******)&stack0xfffffffffffffff0;
  puVar6 = param_1;
  puVar8 = param_2;
  puVar12 = param_3;
  puVar13 = param_4;
  func_0x00010747fe04();
  uStack_70 = extraout_x8;
  do {
    puVar16 = param_2 + -9;
    puStack_110 = param_2 + -0x12;
    puStack_118 = param_2 + -0x1b;
LAB_10747d8fc:
    uVar14 = (long)param_2 - (long)param_1;
    uVar10 = (long)uVar14 / 0x48;
    uVar4 = uVar10 == 5;
    switch(uVar10) {
    case 0:
    case 1:
      goto LAB_10747df34;
    case 2:
      puVar6 = puVar16;
      func_0x000107480074(*param_3);
      if ((int)puVar6 != 0) {
        puVar6 = param_1;
        puVar8 = puVar16;
        FUN_10747e330();
      }
      goto LAB_10747df34;
    case 3:
      puVar8 = param_1 + 9;
      puVar6 = param_1;
      puVar12 = puVar16;
      func_0x00010747ff7c(param_1,puVar8,puVar16);
      goto LAB_10747df34;
    case 4:
      puVar8 = param_1 + 9;
      puVar12 = param_1 + 0x12;
      puVar6 = param_1;
      puVar13 = puVar16;
      func_0x00010747e060(param_1,puVar8,puVar12,puVar16,param_3);
      goto LAB_10747df34;
    case 5:
      puVar8 = param_1 + 9;
      puVar12 = param_1 + 0x12;
      puVar13 = param_1 + 0x1b;
      puVar6 = param_1;
      func_0x00010747e0d8(param_1,puVar8,puVar12,puVar13,puVar16,param_3);
      goto LAB_10747df34;
    }
    if ((long)uVar14 < 0x6c0) {
      uVar4 = param_1 == param_2;
      if ((param_5 & 1) == 0) {
        if (!(bool)uVar4) goto LAB_10747dee0;
        break;
      }
      if ((bool)uVar4) break;
      param_4 = (undefined8 *)0x0;
      puVar8 = param_1;
      goto LAB_10747dc24;
    }
    if (param_4 == (undefined8 *)0x0) {
      uVar4 = 1;
      if (param_1 == param_2) break;
      uVar17 = uVar10 - 2 >> 1;
      uVar14 = uVar17;
      puStack_108 = param_2;
      goto LAB_10747dcc0;
    }
    puVar6 = param_1 + (uVar10 >> 1) * 9;
    if (uVar14 < 0x2401) {
      func_0x000107480264();
      puVar12 = puVar16;
      func_0x00010747ff7c();
    }
    else {
      func_0x00010748002c();
      func_0x00010747ff7c();
      func_0x00010747ff7c(param_1 + 9,puVar6 + -9,puStack_110);
      func_0x00010747ff7c(param_1 + 0x12,puVar6 + 9,puStack_118);
      puVar12 = puVar6 + 9;
      func_0x00010747ff7c(puVar6 + -9,puVar6,puVar12);
      func_0x00010748002c();
      FUN_10747e330();
      puVar8 = puVar6;
    }
    param_4 = (undefined8 *)((long)param_4 - 1);
    if ((param_5 & 1) == 0) {
      puVar6 = param_1 + -9;
      func_0x000107480074(*param_3);
      if (((ulong)puVar6 & 1) != 0) goto LAB_10747d9a0;
      func_0x00010747ffc0();
      puVar6 = auStack_b8;
      func_0x000107480094(*param_3);
      puVar7 = param_1;
      if (((ulong)puVar6 & 1) == 0) {
        do {
          puVar7 = puVar7 + 9;
          if (param_2 <= puVar7) break;
          func_0x00010747ffb4(*param_3);
        } while ((int)puVar6 == 0);
      }
      else {
        do {
          puVar7 = puVar7 + 9;
          func_0x00010747ffb4(*param_3);
        } while (((ulong)puVar6 & 1) == 0);
      }
      puVar11 = param_2;
      if (puVar7 < param_2) {
        do {
          puVar11 = puVar11 + -9;
          func_0x000107480200(*param_3);
        } while (((ulong)puVar6 & 1) != 0);
      }
      while (puVar7 < puVar11) {
        puVar6 = puVar7;
        puVar8 = puVar11;
        FUN_10747e330();
        do {
          puVar7 = puVar7 + 9;
          func_0x00010747ffb4(*param_3);
        } while ((int)puVar6 == 0);
        do {
          puVar11 = puVar11 + -9;
          func_0x000107480200(*param_3);
        } while (((ulong)puVar6 & 1) != 0);
      }
      unaff_x20 = puVar7 + -9;
      if (param_1 != unaff_x20) {
        func_0x00010747ffac();
        puVar6 = param_1;
      }
      func_0x0001074801d4();
      func_0x00010747fed4();
      param_1 = puVar7;
      goto LAB_10747db74;
    }
LAB_10747d9a0:
    func_0x00010747ffc0();
    lVar15 = 0;
    do {
      puVar7 = (undefined8 *)((long)param_1 + lVar15 + 0x48);
      puVar8 = auStack_b8;
      (*(code *)*param_3)();
      lVar15 = lVar15 + 0x48;
    } while (((ulong)puVar7 & 1) != 0);
    puVar12 = (undefined8 *)((long)param_1 + lVar15);
    puVar6 = param_2;
    puVar11 = puVar12;
    if (lVar15 == 0x48) {
      do {
        puVar9 = puVar6;
        if (puVar6 <= puVar12) break;
        puVar6 = puVar6 + -9;
        func_0x0001074801ec(*param_3);
        puVar9 = puVar6;
      } while (((ulong)puVar7 & 1) == 0);
    }
    else {
      do {
        puVar6 = puVar6 + -9;
        func_0x0001074801ec(*param_3);
        puVar9 = puVar6;
      } while ((int)puVar7 == 0);
    }
    while (puVar11 < puVar6) {
      FUN_10747e330(puVar11,puVar6);
      do {
        puVar11 = puVar11 + 9;
        puVar8 = auStack_b8;
        puVar7 = puVar11;
        (*(code *)*param_3)();
      } while (((ulong)puVar7 & 1) != 0);
      do {
        puVar6 = puVar6 + -9;
        func_0x0001074801c8(*param_3);
      } while (((ulong)puVar7 & 1) == 0);
    }
    unaff_x20 = puVar11 + -9;
    if (param_1 != unaff_x20) {
      puVar7 = param_1;
      func_0x00010747ffac();
    }
    func_0x0001074801d4();
    func_0x00010747fed4();
    uVar4 = puVar12 == puVar9;
    puVar6 = puVar7;
    if (puVar12 < puVar9) goto LAB_10747da9c;
    func_0x00010748002c();
    FUN_10747e174();
    puVar6 = puVar11;
    puVar8 = param_2;
    puVar12 = param_3;
    FUN_10747e174(puVar11,param_2,param_3);
    if ((int)puVar6 == 0) goto code_r0x00010747da98;
    param_2 = unaff_x20;
  } while (((ulong)puVar7 & 1) == 0);
  goto LAB_10747df34;
  while (puVar6 = param_1, func_0x00010747ff1c(*param_3), (int)puVar6 == 0) {
LAB_10747dee0:
    unaff_x20 = param_1;
    param_1 = unaff_x20 + 9;
    uVar4 = 1;
    if (param_1 == param_2) goto LAB_10747df34;
  }
  func_0x00010747ffc0();
  do {
    func_0x00010747ffac(unaff_x20 + 9);
    unaff_x20 = unaff_x20 + -9;
    uVar10 = 0;
    func_0x00010747ff1c(*param_3);
  } while ((uVar10 & 1) != 0);
  uVar19 = 0x10747df2c;
  goto SUB_10747e38c;
LAB_10747dc24:
  puVar16 = puVar8 + 9;
  uVar4 = 1;
  if (puVar16 == param_2) goto LAB_10747df34;
  puVar6 = puVar16;
  (*(code *)*param_3)();
  if ((int)puVar6 != 0) {
    func_0x00010748009c(auStack_b8);
    goto LAB_10747dc50;
  }
  param_4 = param_4 + 9;
  puVar8 = puVar16;
  goto LAB_10747dc24;
  while( true ) {
    puVar8 = auStack_b8;
    (*(code *)*param_3)(puVar8,unaff_x20 + -9);
    param_4 = param_4 + -9;
    if (((ulong)puVar8 & 1) == 0) break;
LAB_10747dc50:
    unaff_x20 = (undefined8 *)((long)param_1 + (long)param_4);
    func_0x00010747ffac(unaff_x20 + 9);
    if (param_4 == (undefined8 *)0x0) break;
  }
  uVar19 = 0x10747dc90;
  puVar3 = auStack_120;
  goto SUB_10747e38c;
code_r0x00010747da98:
  param_1 = puVar11;
  if (((ulong)puVar7 & 1) == 0) {
LAB_10747da9c:
    func_0x00010748002c();
    puVar12 = param_3;
    puVar13 = param_4;
    FUN_10747d8a8();
    param_1 = puVar11;
LAB_10747db74:
    param_5 = 0;
  }
  goto LAB_10747d8fc;
LAB_10747dcc0:
  do {
    if ((long)uVar14 <= (long)uVar17) {
      puVar6 = (undefined8 *)((uVar14 & 0x3fffffffffffffff) << 1 | 1);
      puVar11 = param_1 + (long)puVar6 * 9;
      param_4 = (undefined8 *)(uVar14 * 2 + 2);
      puVar16 = puVar11;
      puVar7 = puVar6;
      if ((long)param_4 < (long)uVar10) {
        puVar9 = puVar11;
        func_0x00010747ff1c(*param_3);
        puVar16 = puVar11 + 9;
        puVar7 = param_4;
        if ((int)puVar9 == 0) {
          puVar16 = puVar11;
          puVar7 = puVar6;
        }
      }
      puVar11 = param_1 + uVar14 * 9;
      puVar6 = puVar16;
      func_0x00010747ff1c(*param_3);
      if (((ulong)puVar6 & 1) == 0) {
        puVar6 = auStack_b8;
        func_0x00010747d884();
        do {
          param_4 = puVar16;
          func_0x000107480214();
          puVar16 = param_4;
          if ((long)uVar17 < (long)puVar7) break;
          puVar6 = (undefined8 *)((long)puVar7 << 1 | 1);
          puVar11 = param_1 + (long)puVar6 * 9;
          puVar8 = (undefined8 *)((long)puVar7 * 2 + 2);
          puVar16 = puVar11;
          puVar7 = puVar6;
          if ((long)puVar8 < (long)uVar10) {
            puVar9 = puVar11;
            func_0x00010747ff1c(*param_3);
            puVar16 = puVar11 + 9;
            puVar7 = puVar8;
            if ((int)puVar9 == 0) {
              puVar16 = puVar11;
              puVar7 = puVar6;
            }
          }
          puVar11 = auStack_b8;
          puVar6 = puVar16;
          (*(code *)*param_3)();
        } while ((int)puVar6 == 0);
        func_0x0001074801e0();
        func_0x00010747fed4();
        puVar8 = puVar11;
        param_2 = puStack_108;
      }
    }
    uVar14 = uVar14 - 1;
  } while (-1 < (long)uVar14);
  unaff_x20 = (undefined8 *)(uVar10 - 2);
  uVar4 = unaff_x20 == (undefined8 *)0x0;
  if (1 < (long)uVar10) {
    puVar3 = auStack_100;
    puStack_108 = param_2;
    func_0x00010747d884(puVar3,param_1);
    uVar14 = 0;
    do {
      uVar1 = uVar14 << 1 | 1;
      uVar17 = uVar14 * 2 + 2;
      puVar8 = param_1 + uVar14 * 9 + 9;
      uVar2 = uVar1;
      if ((long)uVar17 < (long)uVar10) {
        func_0x00010748017c(*param_3);
        (*extraout_x8_00)();
        puVar8 = param_1 + uVar14 * 9 + 0x12;
        uVar2 = uVar17;
        if ((int)puVar3 == 0) {
          puVar8 = param_1 + uVar14 * 9 + 9;
          uVar2 = uVar1;
        }
      }
      uVar14 = uVar2;
      param_1 = puVar8;
      func_0x000107480214();
    } while ((long)uVar14 <= (long)((ulong)unaff_x20 >> 1));
    unaff_x20 = puStack_108 + -9;
    if (param_1 == unaff_x20) {
      uVar19 = 0x10747dec8;
      puVar3 = auStack_120;
    }
    else {
      func_0x00010747ffac(param_1);
      uVar19 = 0x10747de48;
      puVar3 = auStack_120;
    }
    goto SUB_10747e38c;
  }
LAB_10747df34:
  func_0x00010747fdb8(uStack_70);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = auStack_b8;
  func_0x000104c2f714();
  func_0x00010747fe68();
  uStack_128 = 0x10747dfb4;
  puVar11 = puVar8;
  puStack_160 = param_2;
  puStack_158 = param_4;
  puStack_150 = puVar16;
  puStack_148 = param_1;
  puStack_140 = unaff_x20;
  puStack_138 = puVar6;
  pppppppuStack_130 = pppppppuVar18;
  func_0x000107480074(*puVar13);
  iVar5 = (int)puVar11;
  func_0x00010747ff48(*puVar13);
  (*extraout_x8_01)();
  if (((ulong)puVar11 & 1) == 0) {
    if (iVar5 == 0) {
      return;
    }
    func_0x000107480020();
    FUN_10747e330();
    puVar12 = puVar8;
    func_0x000107480074(*puVar13);
    iVar5 = (int)puVar12;
    puVar12 = puVar8;
joined_r0x00010747e01c:
    if (iVar5 == 0) {
      return;
    }
  }
  else if (iVar5 == 0) {
    FUN_10747e330(puVar7,puVar8);
    iVar5 = (int)puVar7;
    func_0x00010747ff48(*puVar13);
    (*extraout_x8_02)();
    puVar7 = puVar8;
    goto joined_r0x00010747e01c;
  }
  param_3 = puStack_138;
  unaff_x20 = puStack_140;
  pppppppuVar18 = &pppppppuStack_130;
  func_0x00010747fe5c(puVar7,puVar12);
  func_0x00010747fe04();
  func_0x00010747d884(auStack_190,unaff_x20);
  func_0x00010747ff48();
  uVar19 = 0x10747e360;
  puVar3 = auStack_190;
SUB_10747e38c:
  *(undefined8 **)(puVar3 + -0x20) = unaff_x20;
  *(undefined8 **)(puVar3 + -0x18) = param_3;
  *(undefined8 ********)(puVar3 + -0x10) = pppppppuVar18;
  *(undefined8 *)(puVar3 + -8) = uVar19;
  func_0x00010747fe5c();
  func_0x000104c2f1f0();
  func_0x00010748012c();
  return;
}



/* Entry: 10747dfb4; end: 10747e173;  */

/* WARNING: Possible PIC construction at 0x00010747e35c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010747e034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010747e00c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010747e038) */
/* WARNING: Removing unreachable block (ram,0x00010747e048) */
/* WARNING: Removing unreachable block (ram,0x00010747e360) */
/* WARNING: Removing unreachable block (ram,0x00010747e388) */
/* WARNING: Removing unreachable block (ram,0x00010747e37c) */
/* WARNING: Removing unreachable block (ram,0x000107480230) */
/* WARNING: Removing unreachable block (ram,0x00010747e010) */
/* WARNING: Removing unreachable block (ram,0x00010747e020) */

void FUN_10747dfb4(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  uVar3 = param_2;
  func_0x000107480074(*param_4);
  iVar2 = (int)uVar3;
  func_0x00010747ff48(*param_4);
  (*extraout_x8)();
  if ((uVar3 & 1) == 0) {
    if (iVar2 == 0) {
      return;
    }
    func_0x000107480020();
    unaff_x30 = 0x10747e010;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x19 = param_2;
    unaff_x20 = param_3;
    unaff_x29 = puVar1;
  }
  else if (iVar2 == 0) {
    unaff_x30 = 0x10747e038;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x19 = param_2;
    unaff_x20 = param_3;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010747fe5c();
  func_0x00010747fe04();
  *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8_00;
  func_0x00010747d884((undefined1 *)((long)register0x00000008 + -0x70),unaff_x20);
  func_0x00010747ff48();
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x88) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0x10747e360;
  func_0x00010747fe5c();
  func_0x000104c2f1f0();
  func_0x00010748012c();
  return;
}



/* Entry: 10747e174; end: 10747e32f;  */

/* WARNING: Possible PIC construction at 0x00010747e27c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010747e2b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010747e35c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010747e1e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010747e360) */
/* WARNING: Removing unreachable block (ram,0x00010747e388) */
/* WARNING: Removing unreachable block (ram,0x00010747e37c) */
/* WARNING: Removing unreachable block (ram,0x000107480230) */
/* WARNING: Removing unreachable block (ram,0x00010747e2b8) */
/* WARNING: Removing unreachable block (ram,0x00010747e308) */
/* WARNING: Removing unreachable block (ram,0x00010747e280) */
/* WARNING: Removing unreachable block (ram,0x00010747e2ac) */
/* WARNING: Removing unreachable block (ram,0x00010747e288) */
/* WARNING: Removing unreachable block (ram,0x00010747e2a0) */
/* WARNING: Removing unreachable block (ram,0x00010747e2b0) */
/* WARNING: Removing unreachable block (ram,0x00010747e1e8) */

void FUN_10747e174(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long lVar5;
  code *extraout_x8_01;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 ***pppuVar6;
  undefined8 uVar7;
  undefined1 auStack_110 [80];
  undefined8 *puStack_c0;
  long lStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [72];
  undefined8 uStack_58;
  
  puVar1 = auStack_a0;
  func_0x00010747ff9c();
  func_0x00010747fe04();
  lVar5 = (param_2 - param_1) / 0x48;
  uVar2 = lVar5 == 5;
  iVar3 = 1;
  uStack_58 = extraout_x8;
  switch(lVar5) {
  case 0:
  case 1:
    break;
  case 2:
    uVar7 = *unaff_x20;
    unaff_x20 = (undefined8 *)(unaff_x21 + -0x48);
    func_0x00010747ff48(uVar7);
    (*extraout_x8_00)();
    if (iVar3 != 0) {
      func_0x000107480020();
      uVar7 = 0x10747e1e8;
      goto FUN_10747e330;
    }
    break;
  case 3:
    FUN_10747dfb4();
    break;
  case 4:
    func_0x00010747e060();
    break;
  case 5:
    func_0x00010747e0d8();
    break;
  default:
    lVar4 = unaff_x19;
    FUN_10747dfb4();
    for (lVar5 = unaff_x19 + 0xd8; uVar2 = lVar5 == unaff_x21, !(bool)uVar2; lVar5 = lVar5 + 0x48) {
      func_0x00010748017c(*unaff_x20);
      (*extraout_x8_01)();
      if ((int)lVar4 != 0) {
        func_0x00010748009c(auStack_a0);
        uVar7 = 0x10747e280;
        pppuVar6 = (undefined8 ***)&stack0xfffffffffffffff0;
        goto SUB_10747e38c;
      }
    }
  }
  unaff_x19 = 1;
  func_0x00010747fdb8(uStack_58);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = 0x10747e330;
  func_0x00010747fe68();
FUN_10747e330:
  puVar1 = auStack_110;
  pppuVar6 = &ppuStack_b0;
  puStack_c0 = unaff_x20;
  lStack_b8 = unaff_x19;
  ppuStack_b0 = (undefined8 **)&stack0xfffffffffffffff0;
  uStack_a8 = uVar7;
  func_0x00010747fe5c();
  func_0x00010747fe04();
  func_0x00010747d884(auStack_110,unaff_x20);
  func_0x00010747ff48();
  uVar7 = 0x10747e360;
SUB_10747e38c:
  *(undefined8 **)(puVar1 + -0x20) = unaff_x20;
  *(long *)(puVar1 + -0x18) = unaff_x19;
  *(undefined8 ****)(puVar1 + -0x10) = pppuVar6;
  *(undefined8 *)(puVar1 + -8) = uVar7;
  func_0x00010747fe5c();
  func_0x000104c2f1f0();
  func_0x00010748012c();
  return;
}


