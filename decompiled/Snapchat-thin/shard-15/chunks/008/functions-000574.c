/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bcff078; end: 10bcff0ab;  */

long FUN_10bcff078(long param_1)

{
  func_0x000107c278a8(param_1 + 0x40);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  return param_1;
}



/* Entry: 10bcff0ac; end: 10bcff23f;  */

void FUN_10bcff0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  byte ******ppppppbVar3;
  long extraout_x8;
  long lVar4;
  byte ******ppppppbVar5;
  byte ******ppppppbVar6;
  byte ******ppppppbVar7;
  byte ******extraout_x10;
  byte ******extraout_x10_00;
  long extraout_x11;
  undefined8 *unaff_x19;
  long lStack_c0;
  int iStack_b8;
  long lStack_90;
  int iStack_88;
  byte *****apppppbStack_60 [2];
  undefined1 uStack_50;
  byte *****pppppbStack_48;
  long lStack_40;
  byte bStack_31;
  
  func_0x00010bd0a9fc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&pppppbStack_48,param_3);
  ppppppbVar6 = (byte ******)((long)pppppbStack_48 + lStack_40);
  if (-1 < (char)bStack_31) {
    ppppppbVar6 = (byte ******)((long)&pppppbStack_48 + (ulong)bStack_31);
    pppppbStack_48 = (byte *****)&pppppbStack_48;
  }
  do {
    cVar1 = SBORROW8((long)ppppppbVar6,(long)pppppbStack_48);
    cVar2 = (long)ppppppbVar6 - (long)pppppbStack_48 < 0;
    ppppppbVar5 = (byte ******)pppppbStack_48;
    if (ppppppbVar6 == (byte ******)pppppbStack_48) break;
    ppppppbVar7 = (byte ******)((long)ppppppbVar6 + -1);
    ppppppbVar5 = ppppppbVar6;
    ppppppbVar6 = ppppppbVar7;
  } while (((byte)(&UNK_10e52ca36)[*(byte *)ppppppbVar7] >> 3 & 1) != 0);
  func_0x00010bd0bfc0(&pppppbStack_48,(long)ppppppbVar5 - (long)pppppbStack_48);
  func_0x00010bd0c498();
  lVar4 = extraout_x11;
  ppppppbVar6 = extraout_x10;
  if (cVar2 == cVar1) {
    lVar4 = extraout_x8;
    ppppppbVar6 = &pppppbStack_48;
  }
  ppppppbVar7 = (byte ******)((long)ppppppbVar6 + lVar4);
  ppppppbVar5 = ppppppbVar6;
  while ((ppppppbVar3 = ppppppbVar7, lVar4 != 0 &&
         (ppppppbVar3 = ppppppbVar5, ((byte)(&UNK_10e52ca36)[*(byte *)ppppppbVar5] >> 3 & 1) != 0)))
  {
    ppppppbVar5 = (byte ******)((long)ppppppbVar5 + 1);
    lVar4 = lVar4 + -1;
  }
  func_0x000107c28070(&pppppbStack_48,ppppppbVar6,ppppppbVar3);
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  func_0x00010bd0c498();
  apppppbStack_60[0] = (byte *****)extraout_x10_00;
  if (cVar2 == cVar1) {
    apppppbStack_60[0] = (byte *****)&pppppbStack_48;
  }
  uStack_50 = 10;
  func_0x0001089d9414(&lStack_90,apppppbStack_60);
  func_0x00010b249bc8(&lStack_c0,apppppbStack_60);
  while (iStack_88 != iStack_b8 || lStack_90 != lStack_c0) {
    func_0x00010bd0ac5c();
    FUN_10bcf1384();
    func_0x000107c34be0(&lStack_90);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppbStack_48);
  return;
}



/* Entry: 10bcff240; end: 10bcff467;  */

long ** FUN_10bcff240(long **param_1,undefined ***param_2,undefined *param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  byte bVar5;
  undefined8 *****pppppuVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined ***pppuVar11;
  undefined *puVar12;
  undefined ***pppuVar13;
  undefined1 **ppuVar14;
  undefined8 *puVar15;
  long **pplVar16;
  undefined **ppuVar17;
  undefined ***pppuVar18;
  undefined1 *puVar19;
  int extraout_w8;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined8 extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  long extraout_x9;
  undefined1 *extraout_x10;
  undefined1 *extraout_x10_00;
  undefined8 *extraout_x10_01;
  int extraout_w11;
  undefined *extraout_x11;
  undefined1 *extraout_x12;
  long *unaff_x19;
  undefined8 unaff_x20;
  long *plVar22;
  uint uVar23;
  undefined1 auStack_1a0 [24];
  undefined8 ****ppppuStack_188;
  ulong uStack_180;
  byte bStack_171;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  long *plStack_150;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined *puStack_110;
  undefined1 *puStack_108;
  undefined8 uStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined2 uStack_d0;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined *puStack_b8;
  undefined ***pppuStack_b0;
  undefined1 auStack_a8 [24];
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_70;
  
  pppuVar11 = param_2;
  FUN_10bd2b4f4();
  puVar20 = pppuVar11[2][3];
  cVar7 = SBORROW8((long)puVar20,(long)param_3);
  cVar8 = (long)puVar20 - (long)param_3 < 0;
  if (puVar20 != param_3) {
    pppuVar11 = param_2;
    FUN_10bd2b4f4();
    ppuVar21 = pppuVar11[1];
    puVar20 = (undefined *)(long)*(char *)((long)ppuVar21 + 0x2f);
    if ((long)puVar20 < 0) {
      ppuVar17 = (undefined **)ppuVar21[3];
      puVar20 = ppuVar21[4];
    }
    else {
      ppuVar17 = ppuVar21 + 3;
    }
    puVar12 = param_3;
    FUN_10bcede94(param_3,ppuVar17,puVar20);
    if (puVar12 != (undefined *)0x0) {
      ppuStack_90 = &PTR_FUN_110d9cda0;
      uStack_88 = 0;
      uStack_80 = 0;
      func_0x000107c3a6bc();
      *(undefined8 *)(extraout_x9 + 0x28) = 0;
      *(undefined8 *)(extraout_x9 + 0x20) = 0;
      *(undefined8 *)(extraout_x9 + 0x38) = 0;
      *(undefined8 *)(extraout_x9 + 0x30) = 0;
      pppuVar11 = &ppuStack_90;
      FUN_10bd18758();
      func_0x00010bd0bf80((*pppuVar11)[2]);
      func_0x00010b4d1804(auStack_a8,param_2);
      func_0x00010bd0c668();
      iVar2 = extraout_w11;
      puStack_f8 = extraout_x10;
      if (cVar8 == cVar7) {
        iVar2 = extraout_w8;
        puStack_f8 = auStack_a8;
      }
      puStack_f0 = puStack_f8 + iVar2;
      uStack_e8 = 0;
      uStack_dc = 0;
      uStack_d8 = 0;
      uStack_d4 = (uint)uStack_d4._3_1_ << 0x18;
      uStack_cc = 0x7ff8000000000000;
      uStack_c4 = uRam0000000113375758;
      uStack_c0 = uRam0000000113375758;
      pppuStack_b0 = &ppuStack_90;
      pppuVar13 = pppuVar11;
      puStack_b8 = param_3;
      func_0x00010b4d15a0(pppuVar11,&puStack_f8);
      pppuVar18 = pppuVar11;
      if (((ulong)pppuVar13 & 1) == 0) {
        func_0x00010bd0a968();
        func_0x00010bdb2988(&puStack_108);
        ppuVar14 = &puStack_108;
        func_0x00010b4bf630(ppuVar14,&UNK_10f8330f1);
        pppuVar13 = param_2;
        FUN_10bd2b4f4();
        func_0x00010ae6c448(ppuVar14,pppuVar13[1] + 3);
        FUN_10bdb2990(&puStack_108);
        pppuVar18 = param_2;
      }
      FUN_10bcff468(param_1,pppuVar18,param_4);
      func_0x00010b4d3fe8(&puStack_f8);
      func_0x00010bd0b3d8();
      if (pppuVar11 != (undefined ***)0x0) {
        func_0x00010bd0bb90();
      }
      FUN_10bd18664(&ppuStack_90);
      return param_1;
    }
  }
  func_0x00010bd0b108(param_1,param_2,param_4);
  func_0x00010bd0a30c();
  uStack_70 = extraout_x8;
  func_0x000107c278b0(param_4);
  FUN_10bd2b4f4(unaff_x20);
  func_0x00010bd0c500(param_2);
  FUN_10bd1d54c();
  for (plVar22 = plStack_158; plVar22 != plStack_150; plVar22 = plVar22 + 1) {
    puVar20 = (undefined *)*plVar22;
    bVar5 = puVar20[1];
    if ((bVar5 >> 5 & 1) == 0) {
      uVar10 = 1;
    }
    else {
      pppuVar11 = param_2;
      FUN_10bd1d250(param_2,unaff_x20,puVar20);
      uVar10 = (uint)pppuVar11;
    }
    for (uVar23 = 0; (uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU)) != uVar23; uVar23 = uVar23 + 1)
    {
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_160 = 0;
      puVar12 = puVar20;
      func_0x00010b91adc8();
      if ((int)puVar12 == 10) {
        puStack_110 = (undefined *)0x0;
        puStack_108 = (undefined1 *)0x0;
        uStack_100 = 0;
        FUN_10bd2e8e8(&iStack_e0);
        _uStack_d0 = CONCAT12(1,uStack_d0);
        cVar8 = '\0';
        cVar7 = '\0';
        iStack_e0 = (int)param_1 + 1;
        FUN_10bd2fd44();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                  (&uStack_170,&DAT_10f38bea1);
        func_0x000107c27fc4(&uStack_170,&puStack_110);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc
                  (&uStack_170,(long)((int)param_1 << 1),0x20);
        puVar12 = &DAT_10f2da10d;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(&uStack_170);
        FUN_10bcff750(&iStack_e0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_110);
      }
      else {
        cVar8 = '\0';
        cVar7 = '\0';
        uVar4 = uVar23;
        if ((bVar5 & 0x20) == 0) {
          uVar4 = 0xffffffff;
        }
        puVar12 = puVar20;
        FUN_10bd30380(unaff_x20,puVar20,uVar4,&uStack_170);
      }
      func_0x00010bd0c520();
      if (((byte)puVar20[1] >> 3 & 1) == 0) {
        puVar19 = *(undefined1 **)(puVar20 + 8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&ppppuStack_188);
      }
      else {
        puVar15 = (undefined8 *)&UNK_10f833117;
        func_0x000107c284bc();
        iStack_e0 = (int)puVar15;
        uStack_dc = (undefined4)((ulong)puVar15 >> 0x20);
        uStack_d8 = SUB84(puVar12,0);
        uStack_d4 = (int)((ulong)puVar12 >> 0x20);
        func_0x00010bd09fa8(*(undefined8 *)(puVar20 + 8));
        puStack_108 = extraout_x12;
        if (cVar8 == cVar7) {
          puStack_108 = extraout_x10_00;
        }
        puStack_110 = extraout_x8_00;
        func_0x00010bd0bf1c();
        puStack_140 = puVar15;
        puStack_138 = puVar12;
        func_0x00010bd0b5ec();
        puVar19 = auStack_1a0;
        func_0x000107c27b9c(&ppppuStack_188);
        func_0x00010bd0aad4();
      }
      cVar8 = (char)bStack_171 < '\0';
      cVar7 = '\0';
      uVar3 = uStack_180;
      pppppuVar6 = (undefined8 *****)ppppuStack_188;
      if (!(bool)cVar8) {
        uVar3 = (ulong)bStack_171;
        pppppuVar6 = &ppppuStack_188;
      }
      iStack_e0 = (int)pppppuVar6;
      uStack_dc = (undefined4)((ulong)pppppuVar6 >> 0x20);
      uStack_d8 = (undefined4)uVar3;
      uStack_d4 = (int)(uVar3 >> 0x20);
      puVar12 = &UNK_10f48d1ff;
      func_0x000107c284bc();
      puStack_110 = puVar12;
      puStack_108 = puVar19;
      func_0x00010bd0c794();
      puStack_138 = extraout_x11;
      puStack_140 = extraout_x10_01;
      if (cVar8 == cVar7) {
        puStack_138 = extraout_x8_01;
        puStack_140 = &uStack_170;
      }
      func_0x00010bd0b5ec();
      func_0x000107c27940(unaff_x19,auStack_1a0);
      func_0x00010bd0aad4();
      func_0x00010bd0b0e8();
      func_0x00010bd0b6a4();
    }
  }
  uVar9 = *unaff_x19 == unaff_x19[1];
  bVar1 = !(bool)uVar9;
  FUN_10bce0514();
  func_0x000107c3a64c(uStack_70);
  if (!(bool)uVar9) {
    ___stack_chk_fail();
    pplVar16 = &plStack_158;
    FUN_10bce0514(pplVar16);
    func_0x00010bd0a974();
    FUN_10bcff784(pplVar16 + 9);
    FUN_10bcff814(pplVar16 + 5);
    func_0x00010bcff87c(pplVar16 + 4);
    return pplVar16;
  }
  return (long **)(ulong)bVar1;
}



/* Entry: 10bcff468; end: 10bcff74f;  */

long ** FUN_10bcff468(int param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 ****ppppuVar7;
  long **pplVar8;
  undefined1 *puVar9;
  undefined8 extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined1 *extraout_x10;
  undefined8 ****extraout_x10_00;
  undefined *extraout_x11;
  undefined1 *extraout_x12;
  long *unaff_x19;
  long *plVar10;
  uint uVar11;
  undefined *puVar12;
  undefined1 auStack_1a0 [24];
  undefined8 ****ppppuStack_188;
  ulong uStack_180;
  byte bStack_171;
  undefined8 **ppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  long *plStack_150;
  undefined8 ***pppuStack_140;
  undefined *puStack_138;
  undefined *puStack_110;
  undefined1 *puStack_108;
  undefined8 uStack_100;
  undefined8 ****ppppuStack_e0;
  undefined *puStack_d8;
  undefined1 uStack_ce;
  undefined8 uStack_70;
  
  func_0x00010bd0b108();
  func_0x00010bd0a30c();
  uStack_70 = extraout_x8;
  func_0x000107c278b0(param_3);
  FUN_10bd2b4f4();
  func_0x00010bd0c500(param_2);
  FUN_10bd1d54c();
  for (plVar10 = plStack_158; plVar10 != plStack_150; plVar10 = plVar10 + 1) {
    puVar12 = (undefined *)*plVar10;
    if (((byte)puVar12[1] >> 5 & 1) == 0) {
      uVar5 = 1;
    }
    else {
      uVar5 = (uint)param_2;
      FUN_10bd1d250();
    }
    for (uVar11 = 0; (uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) != uVar11; uVar11 = uVar11 + 1) {
      ppuStack_170 = (undefined8 **)0x0;
      uStack_168 = 0;
      uStack_160 = 0;
      puVar6 = puVar12;
      func_0x00010b91adc8();
      if ((int)puVar6 == 10) {
        puStack_110 = (undefined *)0x0;
        puStack_108 = (undefined1 *)0x0;
        uStack_100 = 0;
        FUN_10bd2e8e8(&ppppuStack_e0);
        uStack_ce = 1;
        ppppuStack_e0 = (undefined8 ****)CONCAT44(ppppuStack_e0._4_4_,param_1 + 1);
        cVar2 = '\0';
        cVar3 = '\0';
        FUN_10bd2fd44();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                  (&ppuStack_170,&DAT_10f38bea1);
        func_0x000107c27fc4(&ppuStack_170,&puStack_110);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc
                  (&ppuStack_170,(long)(param_1 << 1),0x20);
        puVar6 = &DAT_10f2da10d;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(&ppuStack_170);
        FUN_10bcff750(&ppppuStack_e0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_110);
      }
      else {
        cVar2 = '\0';
        cVar3 = '\0';
        puVar6 = puVar12;
        FUN_10bd30380();
      }
      func_0x00010bd0c520();
      if (((byte)puVar12[1] >> 3 & 1) == 0) {
        puVar9 = *(undefined1 **)(puVar12 + 8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&ppppuStack_188);
      }
      else {
        ppppuVar7 = (undefined8 ****)&UNK_10f833117;
        func_0x000107c284bc();
        ppppuStack_e0 = ppppuVar7;
        puStack_d8 = puVar6;
        func_0x00010bd09fa8(*(undefined8 *)(puVar12 + 8));
        puStack_108 = extraout_x12;
        if (cVar2 == cVar3) {
          puStack_108 = extraout_x10;
        }
        puStack_110 = extraout_x8_00;
        func_0x00010bd0bf1c();
        pppuStack_140 = ppppuVar7;
        puStack_138 = puVar6;
        func_0x00010bd0b5ec();
        puVar9 = auStack_1a0;
        func_0x000107c27b9c(&ppppuStack_188);
        func_0x00010bd0aad4();
      }
      cVar2 = (char)bStack_171 < '\0';
      cVar3 = '\0';
      puStack_d8 = (undefined *)uStack_180;
      ppppuStack_e0 = ppppuStack_188;
      if (!(bool)cVar2) {
        puStack_d8 = (undefined *)(ulong)bStack_171;
        ppppuStack_e0 = &ppppuStack_188;
      }
      puVar6 = &UNK_10f48d1ff;
      func_0x000107c284bc();
      puStack_110 = puVar6;
      puStack_108 = puVar9;
      func_0x00010bd0c794();
      puStack_138 = extraout_x11;
      pppuStack_140 = extraout_x10_00;
      if (cVar2 == cVar3) {
        puStack_138 = extraout_x8_01;
        pppuStack_140 = &ppuStack_170;
      }
      func_0x00010bd0b5ec();
      func_0x000107c27940();
      func_0x00010bd0aad4();
      func_0x00010bd0b0e8();
      func_0x00010bd0b6a4();
    }
  }
  uVar4 = *unaff_x19 == unaff_x19[1];
  bVar1 = !(bool)uVar4;
  FUN_10bce0514();
  func_0x000107c3a64c(uStack_70);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    pplVar8 = &plStack_158;
    FUN_10bce0514(pplVar8);
    func_0x00010bd0a974();
    FUN_10bcff784(pplVar8 + 9);
    FUN_10bcff814(pplVar8 + 5);
    func_0x00010bcff87c(pplVar8 + 4);
    return pplVar8;
  }
  return (long **)(ulong)bVar1;
}



/* Entry: 10bcff750; end: 10bcff783;  */

long FUN_10bcff750(long param_1)

{
  FUN_10bcff784(param_1 + 0x48);
  FUN_10bcff814(param_1 + 0x28);
  func_0x00010bcff87c(param_1 + 0x20);
  return param_1;
}



/* Entry: 10bcff784; end: 10bcff7b3;  */

void FUN_10bcff784(void)

{
  long extraout_x8;
  
  func_0x00010bd0afb0();
  if (extraout_x8 != 0) {
    FUN_10bcff7b4();
    func_0x00010bd0a3fc();
  }
  return;
}



/* Entry: 10bcff7b4; end: 10bcff813;  */

void FUN_10bcff7b4(void)

{
  long unaff_x19;
  char *unaff_x20;
  
  func_0x00010bd0bc64();
  for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + -1) {
    if (-1 < *unaff_x20) {
      func_0x00010bcff7ec();
    }
    unaff_x20 = unaff_x20 + 1;
  }
  return;
}



/* Entry: 10bcff814; end: 10bcff843;  */

void FUN_10bcff814(void)

{
  long extraout_x8;
  
  func_0x00010bd0afb0();
  if (extraout_x8 != 0) {
    FUN_10bcff844();
    func_0x00010bd0a3fc();
  }
  return;
}



/* Entry: 10bcff844; end: 10bcff8d7;  */

void FUN_10bcff844(void)

{
  long unaff_x19;
  char *unaff_x20;
  
  func_0x00010bd0bc64();
  for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + -1) {
    if (-1 < *unaff_x20) {
      func_0x00010bcff87c();
    }
    unaff_x20 = unaff_x20 + 1;
  }
  return;
}



/* Entry: 10bcff8d8; end: 10bcff8eb;  */

void FUN_10bcff8d8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar5 = (undefined8 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (puVar5 != puVar2) {
    if ((char)*(byte *)((long)puVar5 + 0x17) < '\0') {
      uVar3 = puVar5[1];
    }
    else {
      uVar3 = (ulong)*(byte *)((long)puVar5 + 0x17);
    }
    puVar8 = puVar5 + 3;
    for (puVar1 = puVar8; puVar1 != puVar2; puVar1 = puVar1 + 3) {
      if ((char)*(byte *)((long)puVar1 + 0x17) < '\0') {
        uVar6 = puVar1[1];
      }
      else {
        uVar6 = (ulong)*(byte *)((long)puVar1 + 0x17);
      }
      uVar3 = uVar3 + param_4 + uVar6;
    }
    if (uVar3 != 0) {
      func_0x000100066b68(param_1);
      puVar1 = (undefined8 *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        puVar1 = param_1;
      }
      if ((char)*(byte *)((long)puVar5 + 0x17) < '\0') {
        puVar4 = (undefined8 *)*puVar5;
        uVar3 = puVar5[1];
      }
      else {
        uVar3 = (ulong)*(byte *)((long)puVar5 + 0x17);
        puVar4 = puVar5;
      }
      func_0x000107c610b4(puVar1,puVar4,uVar3);
      if ((char)*(byte *)((long)puVar5 + 0x17) < '\0') {
        uVar3 = puVar5[1];
      }
      else {
        uVar3 = (ulong)*(byte *)((long)puVar5 + 0x17);
      }
      if (puVar8 != puVar2) {
        lVar7 = (long)puVar1 + uVar3;
        do {
          func_0x000107c610b4(lVar7,param_3,param_4);
          if ((char)*(byte *)((long)puVar8 + 0x17) < '\0') {
            puVar5 = (undefined8 *)*puVar8;
            uVar3 = puVar8[1];
          }
          else {
            uVar3 = (ulong)*(byte *)((long)puVar8 + 0x17);
            puVar5 = puVar8;
          }
          func_0x000107c610b4(lVar7 + param_4,puVar5,uVar3);
          if ((char)*(byte *)((long)puVar8 + 0x17) < '\0') {
            uVar3 = puVar8[1];
          }
          else {
            uVar3 = (ulong)*(byte *)((long)puVar8 + 0x17);
          }
          lVar7 = lVar7 + param_4 + uVar3;
          puVar8 = puVar8 + 3;
        } while (puVar8 != puVar2);
      }
    }
  }
  return;
}



/* Entry: 10bcff8ec; end: 10bcff92f;  */

long FUN_10bcff8ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  
  func_0x00010bd0a9ec();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 1) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_3,*unaff_x21);
    param_3 = param_3 + 0x18;
    unaff_x19 = unaff_x19 + 0x18;
  }
  return unaff_x19;
}



/* Entry: 10bcff930; end: 10bcff9af;  */

void FUN_10bcff930(long param_1)

{
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010bd0b108();
  func_0x00010b4d7a40();
  *(undefined8 *)(param_1 + 0x90) = unaff_x20;
  *(undefined8 *)(param_1 + 0x98) = unaff_x19;
  func_0x000107c3a6bc();
  *(undefined8 *)(param_1 + 0xa0) = extraout_x8;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  return;
}



/* Entry: 10bcff9b0; end: 10bcff9e7;  */

void FUN_10bcff9b0(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_10bd12650();
  }
  return;
}



/* Entry: 10bcff9e8; end: 10bcffb7b;  */

/* WARNING: Possible PIC construction at 0x00010bcffae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bcffc50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bcffae4) */
/* WARNING: Removing unreachable block (ram,0x00010bcffb00) */
/* WARNING: Removing unreachable block (ram,0x00010bcffb38) */
/* WARNING: Removing unreachable block (ram,0x00010bcffb40) */
/* WARNING: Removing unreachable block (ram,0x00010bcffb44) */
/* WARNING: Removing unreachable block (ram,0x00010bcffb4c) */
/* WARNING: Removing unreachable block (ram,0x00010bcffb54) */
/* WARNING: Removing unreachable block (ram,0x00010bcffc54) */
/* WARNING: Type propagation algorithm not settling */

ulong * FUN_10bcff9e8(void)

{
  long *plVar1;
  ulong *puVar2;
  uint uVar3;
  long *plVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 in_ZR;
  bool bVar8;
  char cVar9;
  char cVar10;
  undefined1 uVar11;
  bool bVar12;
  int iVar13;
  ulong *puVar14;
  ulong *puVar15;
  undefined8 extraout_x8;
  ulong uVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  uint uVar19;
  long *extraout_x9;
  ulong uVar20;
  long extraout_x9_00;
  ulong extraout_x9_01;
  long *extraout_x9_02;
  long extraout_x9_03;
  ulong extraout_x9_04;
  ulong *extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  ulong extraout_x10;
  undefined1 *extraout_x10_00;
  undefined1 *extraout_x10_01;
  ulong extraout_x11;
  ulong extraout_x11_00;
  uint extraout_w12;
  ulong extraout_x12;
  ulong *unaff_x19;
  long *unaff_x20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *******pppppppuVar25;
  undefined8 uVar26;
  undefined1 auStack_1e0 [32];
  undefined8 *******pppppppuStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [31];
  undefined1 uStack_161;
  ulong auStack_160 [4];
  undefined1 *puStack_140;
  undefined1 *puStack_130;
  undefined8 auStack_120 [2];
  undefined8 *******pppppppuStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [32];
  undefined8 uStack_90;
  long *plStack_80;
  undefined8 *******pppppppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [32];
  
  puVar7 = auStack_60;
  func_0x00010bd0aa10();
  puVar18 = unaff_x19;
  func_0x00010bcf65d0();
  func_0x00010bd0ad9c((int)unaff_x20[1]);
  func_0x00010bd0b15c(*unaff_x20);
  plVar4 = unaff_x20;
  if (!(bool)in_ZR) {
    plVar4 = extraout_x9;
  }
  plVar1 = plVar4 + (int)unaff_x20[1];
  uVar11 = plVar4 == plVar1;
  if ((bool)uVar11) {
    return puVar18;
  }
  lVar23 = *plVar4;
  if ((*(byte *)(lVar23 + 0x10) >> 1 & 1) == 0) {
LAB_10bcffa58:
    FUN_10bcff9e8(lVar23 + 0x30);
    FUN_10bcffc78(lVar23 + 0x18);
    FUN_10bcffc78(lVar23 + 0x78);
    puVar18 = unaff_x19;
    func_0x00010bcf65f8();
    func_0x00010bd0af0c();
    uVar20 = *unaff_x19;
    uVar16 = (long)*(int *)(lVar23 + 0x68) & 0x1fffffffffffffff;
    while (uVar16 != 0) {
      func_0x00010bd0c694();
      if ((extraout_x12 & 1) != 0) {
        if (extraout_x9_00 != 0) goto LAB_10bcffb70;
        *(int *)((long)unaff_x19 + 0x94) = extraout_w10 + 1;
      }
      func_0x00010bd0c414();
      uVar20 = extraout_x9_01;
      uVar16 = extraout_x11;
    }
    if (uVar20 != 0) goto LAB_10bcffb70;
    *(int *)(unaff_x19 + 0xe) = (int)unaff_x19[0xe] + *(int *)(lVar23 + 0xb0) * 8;
    iVar13 = *(int *)(lVar23 + 200);
    uVar26 = 0x10bcffae4;
    pppppppuVar25 = (undefined8 *******)&stack0xfffffffffffffff0;
  }
  else {
    if (*unaff_x19 == 0) {
      *(int *)((long)unaff_x19 + 0x84) = *(int *)((long)unaff_x19 + 0x84) + 1;
      goto LAB_10bcffa58;
    }
LAB_10bcffb70:
    func_0x00010bd0a31c();
    func_0x00010bd0a0b8();
    func_0x00010bd0aa9c();
    puVar7 = auStack_b0;
    uStack_90 = 0x38;
    pcStack_68 = FUN_10bcffb7c;
    pppppppuVar25 = &pppppppuStack_70;
    plStack_80 = plVar1;
    pppppppuStack_70 = (undefined8 *******)&stack0xfffffffffffffff0;
    func_0x00010bd0aa10();
    puVar14 = (ulong *)(ulong)(uint)puVar18[1];
    puVar18 = unaff_x19;
    func_0x00010bcf6580();
    func_0x00010bd0ad9c((int)plVar1[1]);
    func_0x00010bd0b15c(*plVar1);
    plVar4 = plVar1;
    if (!(bool)uVar11) {
      plVar4 = extraout_x9_02;
    }
    uVar11 = plVar4 == plVar4 + (int)plVar1[1];
    if ((bool)uVar11) {
      return puVar18;
    }
    lVar23 = *plVar4;
    if ((*(byte *)(lVar23 + 0x10) >> 1 & 1) == 0) {
LAB_10bcffbe4:
      puVar14 = (ulong *)(ulong)*(uint *)(lVar23 + 0x20);
      puVar18 = unaff_x19;
      func_0x00010bcf65a8();
      func_0x00010bd0ad9c(*(undefined4 *)(lVar23 + 0x20));
      func_0x00010bd0af0c();
      uVar20 = *unaff_x19;
      uVar16 = (long)*(int *)(lVar23 + 0x20) & 0x1fffffffffffffff;
      while (uVar16 != 0) {
        func_0x00010bd0c694();
        if ((extraout_w12 >> 1 & 1) != 0) {
          if (extraout_x9_03 != 0) goto LAB_10bcffc6c;
          *(int *)(unaff_x19 + 0x12) = extraout_w10_00 + 1;
        }
        func_0x00010bd0c414();
        uVar20 = extraout_x9_04;
        uVar16 = extraout_x11_00;
      }
      if (uVar20 == 0) {
        *(int *)(unaff_x19 + 0xe) = (int)unaff_x19[0xe] + *(int *)(lVar23 + 0x38) * 8;
        iVar13 = *(int *)(lVar23 + 0x50);
        uVar26 = 0x10bcffc54;
        goto SUB_10bcfff9c;
      }
    }
    else if (*unaff_x19 == 0) {
      *(int *)((long)unaff_x19 + 0x8c) = *(int *)((long)unaff_x19 + 0x8c) + 1;
      goto LAB_10bcffbe4;
    }
LAB_10bcffc6c:
    unaff_x19 = puVar18;
    func_0x00010bd0a31c();
    func_0x00010bd0a0b8();
    func_0x00010bd0aa9c();
    pcStack_b8 = FUN_10bcffc78;
    pppppppuStack_c0 = pppppppuVar25;
    func_0x00010bd0a30c();
    if (*puVar14 != 0) goto LAB_10bcfff20;
    *(int *)(puVar14 + 0xe) = (int)puVar14[0xe] + (int)unaff_x19[1] * 0x58;
    puVar15 = puVar14;
    auStack_120[0] = extraout_x8;
    func_0x00010bd0b15c(*unaff_x19);
    puVar18 = unaff_x19;
    if (!(bool)uVar11) {
      puVar18 = extraout_x9_05;
    }
    puVar2 = puVar18 + (int)unaff_x19[1];
    while( true ) {
      iVar13 = (int)puVar15;
      bVar12 = puVar18 == puVar2;
      if (bVar12) break;
      uVar20 = *puVar18;
      uVar19 = *(uint *)(uVar20 + 0x10);
      uVar16 = *puVar14;
      if ((uVar19 >> 5 & 1) != 0) {
        if (uVar16 != 0) {
          func_0x00010bd0ac88();
          func_0x00010bd0a968();
          func_0x00010bd0c18c();
LAB_10bcfff18:
          do {
            func_0x00010ae6c700(auStack_160);
LAB_10bcfff20:
            func_0x00010bd0ac88();
            func_0x00010bd0a968();
            func_0x00010bd0c18c();
          } while( true );
        }
        *(int *)(puVar14 + 0x11) = (int)puVar14[0x11] + 1;
        uVar19 = *(uint *)(uVar20 + 0x10);
      }
      uVar21 = *(ulong *)(uVar20 + 0x18) & 0xfffffffffffffffc;
      unaff_x19 = puVar14;
      if ((uVar19 >> 4 & 1) == 0) {
        if (uVar16 != 0) {
LAB_10bcffeec:
          func_0x00010bd0ac88();
          func_0x00010bd0a968();
          FUN_10bdb2a88(auStack_160);
          goto LAB_10bcfff18;
        }
LAB_10bcffd38:
        uVar16 = uVar21;
        FUN_10bcfffc8();
        iVar13 = (int)uVar16;
        cVar9 = SBORROW4(iVar13,1);
        cVar10 = iVar13 + -1 < 0;
        if (iVar13 == 1) {
          puVar15 = (ulong *)0x3;
          func_0x00010bcf6550();
        }
        else {
          if (iVar13 != 0) {
            uVar16 = 0;
            bVar12 = true;
            goto LAB_10bcffd70;
          }
          func_0x00010bd0b1d0();
        }
      }
      else {
        if (uVar16 != 0) goto LAB_10bcffeec;
        uVar16 = *(ulong *)(uVar20 + 0x38) & 0xfffffffffffffffc;
        cVar10 = (long)uVar16 < 0;
        cVar9 = false;
        if (uVar16 == 0) goto LAB_10bcffd38;
        bVar12 = false;
LAB_10bcffd70:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_180,uVar21)
        ;
        func_0x00010ae87db0(auStack_180);
        FUN_10bcfccd0(auStack_198,uVar21,1);
        if (bVar12) {
          FUN_10bcfc628(auStack_1b0,uVar21);
        }
        else {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (auStack_1b0,uVar16);
        }
        func_0x00010bd0c628();
        auStack_160[0] = extraout_x10;
        if (cVar10 == cVar9) {
          auStack_160[0] = uVar21;
        }
        func_0x00010bd0be14();
        func_0x00010bd0abf8();
        puStack_140 = extraout_x10_00;
        if (cVar10 == cVar9) {
          puStack_140 = auStack_198;
        }
        func_0x00010bd0a58c();
        puStack_130 = extraout_x10_01;
        if (cVar10 == cVar9) {
          puStack_130 = auStack_1b0;
        }
        unaff_x19 = auStack_160;
        func_0x0001077453c0(unaff_x19,auStack_120,&uStack_161);
        lVar23 = 0;
        while (lVar22 = lVar23, puVar17 = auStack_120, lVar22 != 0x30) {
          unaff_x19 = *(ulong **)((long)auStack_160 + lVar22);
          func_0x00010bd00054(unaff_x19,*(undefined8 *)((long)auStack_160 + lVar22 + 8),
                              *(undefined8 *)((long)auStack_160 + lVar22 + 0x10),
                              *(undefined8 *)((long)auStack_160 + lVar22 + 0x18));
          lVar23 = lVar22 + 0x10;
          if ((int)unaff_x19 != 0) {
            puVar17 = (undefined8 *)((long)auStack_160 + lVar22);
            do {
              puVar6 = (undefined8 *)((long)auStack_160 + lVar23 + 0x10);
              do {
                puVar24 = puVar6;
                if (lVar23 == 0x30) {
                  puVar17 = puVar17 + 2;
                  goto LAB_10bcffe70;
                }
                unaff_x19 = (ulong *)*puVar17;
                func_0x00010bd00054(unaff_x19,puVar17[1],*puVar24,puVar24[1]);
                lVar23 = lVar23 + 0x10;
                puVar6 = puVar24 + 2;
              } while (((ulong)unaff_x19 & 1) != 0);
              uVar26 = *puVar24;
              puVar17[3] = puVar24[1];
              puVar17[2] = uVar26;
              puVar17 = puVar17 + 2;
            } while( true );
          }
        }
LAB_10bcffe70:
        puVar15 = (ulong *)(ulong)((int)((ulong)((long)puVar17 - (long)auStack_160) >> 4) + 1);
        func_0x00010bd0b214();
        func_0x00010bd0aaa4();
        func_0x00010bd0aacc();
        func_0x00010bd0afec();
      }
      if ((((*(uint *)(uVar20 + 0x10) ^ 0xffffffff) & 0x408) == 0) &&
         (*(int *)(uVar20 + 0x58) == 0xc || *(int *)(uVar20 + 0x58) == 9)) {
        puVar15 = (ulong *)0x1;
        unaff_x19 = puVar14;
        func_0x00010bcf6550();
      }
      puVar18 = puVar18 + 1;
    }
    func_0x000107c3a64c(auStack_120[0]);
    if (bVar12) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    func_0x00010bd0afec();
    func_0x00010bd0a974();
    if (*unaff_x19 == 0) {
      iVar13 = (int)unaff_x19[0xe] + (iVar13 * 4 + 7U & 0xfffffff8);
      goto LAB_10bd0b194;
    }
    puVar7 = auStack_1e0;
    uStack_1b8 = 0x10bcfff64;
    pppppppuVar25 = &pppppppuStack_1c0;
    pppppppuStack_1c0 = &pppppppuStack_c0;
    func_0x00010bd0a31c();
    func_0x00010bd0a0b8();
    uVar26 = 0x10bcfff9c;
    func_0x00010bd0aa9c();
  }
SUB_10bcfff9c:
  if (*unaff_x19 != 0) {
    *(undefined8 ********)(puVar7 + -0x10) = pppppppuVar25;
    *(undefined8 *)(puVar7 + -8) = uVar26;
    func_0x00010bd0a31c();
    func_0x00010bd0a0b8();
    func_0x00010bd0aa9c();
    uVar16 = (ulong)(char)*(byte *)((long)unaff_x19 + 0x17);
    if ((long)uVar16 < 0) {
      puVar18 = (ulong *)*unaff_x19;
      if (0x19 < (byte)*puVar18 - 0x61) {
        return (ulong *)0x2;
      }
      uVar16 = unaff_x19[1];
    }
    else {
      puVar18 = unaff_x19;
      if (0x19 < (byte)*unaff_x19 - 0x61) {
        return (ulong *)0x2;
      }
    }
    puVar14 = (ulong *)0x0;
    while( true ) {
      if (uVar16 == 0) {
        return puVar14;
      }
      bVar5 = (byte)*puVar18;
      bVar12 = 0x19 < bVar5 - 0x61;
      bVar8 = 9 < bVar5 - 0x30;
      if (bVar5 != 0x5f && (bVar12 && bVar8)) break;
      uVar19 = (uint)puVar14;
      if (bVar5 == 0x5f) {
        uVar19 = 1;
      }
      uVar3 = (uint)puVar14;
      if (bVar12 && bVar8) {
        uVar3 = uVar19;
      }
      puVar14 = (ulong *)(ulong)uVar3;
      uVar16 = uVar16 - 1;
      puVar18 = (ulong *)((long)puVar18 + 1);
    }
    return (ulong *)0x2;
  }
  iVar13 = (int)unaff_x19[0xe] + iVar13 * 8;
LAB_10bd0b194:
  *(int *)(unaff_x19 + 0xe) = iVar13;
  return unaff_x19;
}



/* Entry: 10bcffb7c; end: 10bcffc77;  */

/* WARNING: Possible PIC construction at 0x00010bcffc50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bcffc54) */
/* WARNING: Type propagation algorithm not settling */

ulong * FUN_10bcffb7c(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 in_ZR;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  ulong *puVar13;
  ulong *puVar14;
  undefined8 extraout_x8;
  ulong uVar15;
  undefined8 *puVar16;
  ulong *puVar17;
  uint uVar18;
  long *extraout_x9;
  ulong uVar19;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong *extraout_x9_02;
  int extraout_w10;
  ulong extraout_x10;
  undefined1 *extraout_x10_00;
  undefined1 *extraout_x10_01;
  ulong extraout_x11;
  uint extraout_w12;
  ulong *unaff_x19;
  long *unaff_x20;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *******pppppppuVar24;
  undefined8 uVar25;
  undefined1 auStack_180 [32];
  undefined8 *******pppppppuStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [31];
  undefined1 uStack_101;
  ulong auStack_100 [4];
  undefined1 *puStack_e0;
  undefined1 *puStack_d0;
  undefined8 auStack_c0 [2];
  undefined8 *******pppppppuStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [32];
  
  puVar6 = auStack_50;
  pppppppuVar24 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010bd0aa10();
  puVar13 = (ulong *)(ulong)*(uint *)(param_1 + 8);
  puVar17 = unaff_x19;
  func_0x00010bcf6580();
  func_0x00010bd0ad9c((int)unaff_x20[1]);
  func_0x00010bd0b15c(*unaff_x20);
  plVar3 = unaff_x20;
  if (!(bool)in_ZR) {
    plVar3 = extraout_x9;
  }
  uVar10 = plVar3 == plVar3 + (int)unaff_x20[1];
  if ((bool)uVar10) {
    return puVar17;
  }
  lVar22 = *plVar3;
  if ((*(byte *)(lVar22 + 0x10) >> 1 & 1) == 0) {
LAB_10bcffbe4:
    puVar13 = (ulong *)(ulong)*(uint *)(lVar22 + 0x20);
    puVar17 = unaff_x19;
    func_0x00010bcf65a8();
    func_0x00010bd0ad9c(*(undefined4 *)(lVar22 + 0x20));
    func_0x00010bd0af0c();
    uVar19 = *unaff_x19;
    uVar15 = (long)*(int *)(lVar22 + 0x20) & 0x1fffffffffffffff;
    while (uVar15 != 0) {
      func_0x00010bd0c694();
      if ((extraout_w12 >> 1 & 1) != 0) {
        if (extraout_x9_00 != 0) goto LAB_10bcffc6c;
        *(int *)(unaff_x19 + 0x12) = extraout_w10 + 1;
      }
      func_0x00010bd0c414();
      uVar19 = extraout_x9_01;
      uVar15 = extraout_x11;
    }
    if (uVar19 != 0) goto LAB_10bcffc6c;
    *(int *)(unaff_x19 + 0xe) = (int)unaff_x19[0xe] + *(int *)(lVar22 + 0x38) * 8;
    iVar12 = *(int *)(lVar22 + 0x50);
    uVar25 = 0x10bcffc54;
  }
  else {
    if (*unaff_x19 == 0) {
      *(int *)((long)unaff_x19 + 0x8c) = *(int *)((long)unaff_x19 + 0x8c) + 1;
      goto LAB_10bcffbe4;
    }
LAB_10bcffc6c:
    unaff_x19 = puVar17;
    func_0x00010bd0a31c();
    func_0x00010bd0a0b8();
    func_0x00010bd0aa9c();
    pcStack_58 = FUN_10bcffc78;
    pppppppuStack_60 = pppppppuVar24;
    func_0x00010bd0a30c();
    if (*puVar13 != 0) goto LAB_10bcfff20;
    *(int *)(puVar13 + 0xe) = (int)puVar13[0xe] + (int)unaff_x19[1] * 0x58;
    puVar14 = puVar13;
    auStack_c0[0] = extraout_x8;
    func_0x00010bd0b15c(*unaff_x19);
    puVar17 = unaff_x19;
    if (!(bool)uVar10) {
      puVar17 = extraout_x9_02;
    }
    puVar1 = puVar17 + (int)unaff_x19[1];
    while( true ) {
      iVar12 = (int)puVar14;
      bVar11 = puVar17 == puVar1;
      if (bVar11) break;
      uVar19 = *puVar17;
      uVar18 = *(uint *)(uVar19 + 0x10);
      uVar15 = *puVar13;
      if ((uVar18 >> 5 & 1) != 0) {
        if (uVar15 != 0) {
          func_0x00010bd0ac88();
          func_0x00010bd0a968();
          func_0x00010bd0c18c();
LAB_10bcfff18:
          do {
            func_0x00010ae6c700(auStack_100);
LAB_10bcfff20:
            func_0x00010bd0ac88();
            func_0x00010bd0a968();
            func_0x00010bd0c18c();
          } while( true );
        }
        *(int *)(puVar13 + 0x11) = (int)puVar13[0x11] + 1;
        uVar18 = *(uint *)(uVar19 + 0x10);
      }
      uVar20 = *(ulong *)(uVar19 + 0x18) & 0xfffffffffffffffc;
      unaff_x19 = puVar13;
      if ((uVar18 >> 4 & 1) == 0) {
        if (uVar15 != 0) {
LAB_10bcffeec:
          func_0x00010bd0ac88();
          func_0x00010bd0a968();
          FUN_10bdb2a88(auStack_100);
          goto LAB_10bcfff18;
        }
LAB_10bcffd38:
        uVar15 = uVar20;
        FUN_10bcfffc8();
        iVar12 = (int)uVar15;
        cVar8 = SBORROW4(iVar12,1);
        cVar9 = iVar12 + -1 < 0;
        if (iVar12 == 1) {
          puVar14 = (ulong *)0x3;
          func_0x00010bcf6550();
        }
        else {
          if (iVar12 != 0) {
            uVar15 = 0;
            bVar11 = true;
            goto LAB_10bcffd70;
          }
          func_0x00010bd0b1d0();
        }
      }
      else {
        if (uVar15 != 0) goto LAB_10bcffeec;
        uVar15 = *(ulong *)(uVar19 + 0x38) & 0xfffffffffffffffc;
        cVar9 = (long)uVar15 < 0;
        cVar8 = false;
        if (uVar15 == 0) goto LAB_10bcffd38;
        bVar11 = false;
LAB_10bcffd70:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_120,uVar20)
        ;
        func_0x00010ae87db0(auStack_120);
        FUN_10bcfccd0(auStack_138,uVar20,1);
        if (bVar11) {
          FUN_10bcfc628(auStack_150,uVar20);
        }
        else {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (auStack_150,uVar15);
        }
        func_0x00010bd0c628();
        auStack_100[0] = extraout_x10;
        if (cVar9 == cVar8) {
          auStack_100[0] = uVar20;
        }
        func_0x00010bd0be14();
        func_0x00010bd0abf8();
        puStack_e0 = extraout_x10_00;
        if (cVar9 == cVar8) {
          puStack_e0 = auStack_138;
        }
        func_0x00010bd0a58c();
        puStack_d0 = extraout_x10_01;
        if (cVar9 == cVar8) {
          puStack_d0 = auStack_150;
        }
        unaff_x19 = auStack_100;
        func_0x0001077453c0(unaff_x19,auStack_c0,&uStack_101);
        lVar22 = 0;
        while (lVar21 = lVar22, puVar16 = auStack_c0, lVar21 != 0x30) {
          unaff_x19 = *(ulong **)((long)auStack_100 + lVar21);
          func_0x00010bd00054(unaff_x19,*(undefined8 *)((long)auStack_100 + lVar21 + 8),
                              *(undefined8 *)((long)auStack_100 + lVar21 + 0x10),
                              *(undefined8 *)((long)auStack_100 + lVar21 + 0x18));
          lVar22 = lVar21 + 0x10;
          if ((int)unaff_x19 != 0) {
            puVar16 = (undefined8 *)((long)auStack_100 + lVar21);
            do {
              puVar5 = (undefined8 *)((long)auStack_100 + lVar22 + 0x10);
              do {
                puVar23 = puVar5;
                if (lVar22 == 0x30) {
                  puVar16 = puVar16 + 2;
                  goto LAB_10bcffe70;
                }
                unaff_x19 = (ulong *)*puVar16;
                func_0x00010bd00054(unaff_x19,puVar16[1],*puVar23,puVar23[1]);
                lVar22 = lVar22 + 0x10;
                puVar5 = puVar23 + 2;
              } while (((ulong)unaff_x19 & 1) != 0);
              uVar25 = *puVar23;
              puVar16[3] = puVar23[1];
              puVar16[2] = uVar25;
              puVar16 = puVar16 + 2;
            } while( true );
          }
        }
LAB_10bcffe70:
        puVar14 = (ulong *)(ulong)((int)((ulong)((long)puVar16 - (long)auStack_100) >> 4) + 1);
        func_0x00010bd0b214();
        func_0x00010bd0aaa4();
        func_0x00010bd0aacc();
        func_0x00010bd0afec();
      }
      if ((((*(uint *)(uVar19 + 0x10) ^ 0xffffffff) & 0x408) == 0) &&
         (*(int *)(uVar19 + 0x58) == 0xc || *(int *)(uVar19 + 0x58) == 9)) {
        puVar14 = (ulong *)0x1;
        unaff_x19 = puVar13;
        func_0x00010bcf6550();
      }
      puVar17 = puVar17 + 1;
    }
    func_0x000107c3a64c(auStack_c0[0]);
    if (bVar11) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    func_0x00010bd0afec();
    func_0x00010bd0a974();
    if (*unaff_x19 == 0) {
      iVar12 = (int)unaff_x19[0xe] + (iVar12 * 4 + 7U & 0xfffffff8);
      goto LAB_10bd0b194;
    }
    puVar6 = auStack_180;
    uStack_158 = 0x10bcfff64;
    pppppppuVar24 = &pppppppuStack_160;
    pppppppuStack_160 = &pppppppuStack_60;
    func_0x00010bd0a31c();
    func_0x00010bd0a0b8();
    uVar25 = 0x10bcfff9c;
    func_0x00010bd0aa9c();
  }
  if (*unaff_x19 != 0) {
    *(undefined8 ********)(puVar6 + -0x10) = pppppppuVar24;
    *(undefined8 *)(puVar6 + -8) = uVar25;
    func_0x00010bd0a31c();
    func_0x00010bd0a0b8();
    func_0x00010bd0aa9c();
    uVar15 = (ulong)(char)*(byte *)((long)unaff_x19 + 0x17);
    if ((long)uVar15 < 0) {
      puVar17 = (ulong *)*unaff_x19;
      if (0x19 < (byte)*puVar17 - 0x61) {
        return (ulong *)0x2;
      }
      uVar15 = unaff_x19[1];
    }
    else {
      puVar17 = unaff_x19;
      if (0x19 < (byte)*unaff_x19 - 0x61) {
        return (ulong *)0x2;
      }
    }
    puVar13 = (ulong *)0x0;
    while( true ) {
      if (uVar15 == 0) {
        return puVar13;
      }
      bVar4 = (byte)*puVar17;
      bVar11 = 0x19 < bVar4 - 0x61;
      bVar7 = 9 < bVar4 - 0x30;
      if (bVar4 != 0x5f && (bVar11 && bVar7)) break;
      uVar18 = (uint)puVar13;
      if (bVar4 == 0x5f) {
        uVar18 = 1;
      }
      uVar2 = (uint)puVar13;
      if (bVar11 && bVar7) {
        uVar2 = uVar18;
      }
      puVar13 = (ulong *)(ulong)uVar2;
      uVar15 = uVar15 - 1;
      puVar17 = (ulong *)((long)puVar17 + 1);
    }
    return (ulong *)0x2;
  }
  iVar12 = (int)unaff_x19[0xe] + iVar12 * 8;
LAB_10bd0b194:
  *(int *)(unaff_x19 + 0xe) = iVar12;
  return unaff_x19;
}



/* Entry: 10bcffc78; end: 10bcfff63;  */

ulong * FUN_10bcffc78(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  uint uVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined1 in_ZR;
  bool bVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  ulong *puVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  uint uVar14;
  ulong *extraout_x9;
  ulong extraout_x10;
  undefined1 *extraout_x10_00;
  undefined1 *extraout_x10_01;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [31];
  undefined1 uStack_b1;
  ulong auStack_b0 [4];
  undefined1 *puStack_90;
  undefined1 *puStack_80;
  undefined8 auStack_70 [2];
  
  func_0x00010bd0a30c();
  if (*param_2 != 0) goto LAB_10bcfff20;
  *(int *)(param_2 + 0xe) = (int)param_2[0xe] + (int)param_1[1] * 0x58;
  puVar10 = param_2;
  auStack_70[0] = extraout_x8;
  func_0x00010bd0b15c(*param_1);
  puVar13 = param_1;
  if (!(bool)in_ZR) {
    puVar13 = extraout_x9;
  }
  puVar1 = puVar13 + (int)param_1[1];
  do {
    iVar9 = (int)puVar10;
    bVar8 = puVar13 == puVar1;
    if (bVar8) {
      func_0x000107c3a64c(auStack_70[0]);
      if (bVar8) {
        return param_1;
      }
      ___stack_chk_fail();
      func_0x00010bd0afec();
      func_0x00010bd0a974();
      if (*param_1 == 0) {
        iVar9 = (int)param_1[0xe] + (iVar9 * 4 + 7U & 0xfffffff8);
      }
      else {
        func_0x00010bd0a31c();
        func_0x00010bd0a0b8();
        func_0x00010bd0aa9c();
        if (*param_1 != 0) {
          func_0x00010bd0a31c();
          func_0x00010bd0a0b8();
          func_0x00010bd0aa9c();
          uVar11 = (ulong)(char)*(byte *)((long)param_1 + 0x17);
          if ((long)uVar11 < 0) {
            puVar13 = (ulong *)*param_1;
            if (0x19 < (byte)*puVar13 - 0x61) {
              return (ulong *)0x2;
            }
            uVar11 = param_1[1];
          }
          else {
            puVar13 = param_1;
            if (0x19 < (byte)*param_1 - 0x61) {
              return (ulong *)0x2;
            }
          }
          puVar10 = (ulong *)0x0;
          while( true ) {
            if (uVar11 == 0) {
              return puVar10;
            }
            bVar3 = (byte)*puVar13;
            bVar8 = 0x19 < bVar3 - 0x61;
            bVar5 = 9 < bVar3 - 0x30;
            if (bVar3 != 0x5f && (bVar8 && bVar5)) break;
            uVar14 = (uint)puVar10;
            if (bVar3 == 0x5f) {
              uVar14 = 1;
            }
            uVar2 = (uint)puVar10;
            if (bVar8 && bVar5) {
              uVar2 = uVar14;
            }
            puVar10 = (ulong *)(ulong)uVar2;
            uVar11 = uVar11 - 1;
            puVar13 = (ulong *)((long)puVar13 + 1);
          }
          return (ulong *)0x2;
        }
        iVar9 = (int)param_1[0xe] + iVar9 * 8;
      }
      *(int *)(param_1 + 0xe) = iVar9;
      return param_1;
    }
    uVar19 = *puVar13;
    uVar14 = *(uint *)(uVar19 + 0x10);
    uVar11 = *param_2;
    if ((uVar14 >> 5 & 1) != 0) {
      if (uVar11 != 0) {
        func_0x00010bd0ac88();
        func_0x00010bd0a968();
        func_0x00010bd0c18c();
LAB_10bcfff18:
        do {
          func_0x00010ae6c700(auStack_b0);
LAB_10bcfff20:
          func_0x00010bd0ac88();
          func_0x00010bd0a968();
          func_0x00010bd0c18c();
        } while( true );
      }
      *(int *)(param_2 + 0x11) = (int)param_2[0x11] + 1;
      uVar14 = *(uint *)(uVar19 + 0x10);
    }
    uVar15 = *(ulong *)(uVar19 + 0x18) & 0xfffffffffffffffc;
    param_1 = param_2;
    if ((uVar14 >> 4 & 1) == 0) {
      if (uVar11 != 0) {
LAB_10bcffeec:
        func_0x00010bd0ac88();
        func_0x00010bd0a968();
        FUN_10bdb2a88(auStack_b0);
        goto LAB_10bcfff18;
      }
LAB_10bcffd38:
      uVar11 = uVar15;
      FUN_10bcfffc8();
      iVar9 = (int)uVar11;
      cVar6 = SBORROW4(iVar9,1);
      cVar7 = iVar9 + -1 < 0;
      if (iVar9 == 1) {
        puVar10 = (ulong *)0x3;
        func_0x00010bcf6550();
      }
      else {
        if (iVar9 != 0) {
          uVar11 = 0;
          bVar8 = true;
          goto LAB_10bcffd70;
        }
        func_0x00010bd0b1d0();
      }
    }
    else {
      if (uVar11 != 0) goto LAB_10bcffeec;
      uVar11 = *(ulong *)(uVar19 + 0x38) & 0xfffffffffffffffc;
      cVar7 = (long)uVar11 < 0;
      cVar6 = false;
      if (uVar11 == 0) goto LAB_10bcffd38;
      bVar8 = false;
LAB_10bcffd70:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_d0,uVar15);
      func_0x00010ae87db0(auStack_d0);
      FUN_10bcfccd0(auStack_e8,uVar15,1);
      if (bVar8) {
        FUN_10bcfc628(auStack_100,uVar15);
      }
      else {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_100,uVar11)
        ;
      }
      func_0x00010bd0c628();
      auStack_b0[0] = extraout_x10;
      if (cVar7 == cVar6) {
        auStack_b0[0] = uVar15;
      }
      func_0x00010bd0be14();
      func_0x00010bd0abf8();
      puStack_90 = extraout_x10_00;
      if (cVar7 == cVar6) {
        puStack_90 = auStack_e8;
      }
      func_0x00010bd0a58c();
      puStack_80 = extraout_x10_01;
      if (cVar7 == cVar6) {
        puStack_80 = auStack_100;
      }
      param_1 = auStack_b0;
      func_0x0001077453c0(param_1,auStack_70,&uStack_b1);
      lVar17 = 0;
      while (lVar16 = lVar17, puVar12 = auStack_70, lVar16 != 0x30) {
        param_1 = *(ulong **)((long)auStack_b0 + lVar16);
        func_0x00010bd00054(param_1,*(undefined8 *)((long)auStack_b0 + lVar16 + 8),
                            *(undefined8 *)((long)auStack_b0 + lVar16 + 0x10),
                            *(undefined8 *)((long)auStack_b0 + lVar16 + 0x18));
        lVar17 = lVar16 + 0x10;
        if ((int)param_1 != 0) {
          puVar12 = (undefined8 *)((long)auStack_b0 + lVar16);
          do {
            puVar4 = (undefined8 *)((long)auStack_b0 + lVar17 + 0x10);
            do {
              puVar18 = puVar4;
              if (lVar17 == 0x30) {
                puVar12 = puVar12 + 2;
                goto LAB_10bcffe70;
              }
              param_1 = (ulong *)*puVar12;
              func_0x00010bd00054(param_1,puVar12[1],*puVar18,puVar18[1]);
              lVar17 = lVar17 + 0x10;
              puVar4 = puVar18 + 2;
            } while (((ulong)param_1 & 1) != 0);
            uVar20 = *puVar18;
            puVar12[3] = puVar18[1];
            puVar12[2] = uVar20;
            puVar12 = puVar12 + 2;
          } while( true );
        }
      }
LAB_10bcffe70:
      puVar10 = (ulong *)(ulong)((int)((ulong)((long)puVar12 - (long)auStack_b0) >> 4) + 1);
      func_0x00010bd0b214();
      func_0x00010bd0aaa4();
      func_0x00010bd0aacc();
      func_0x00010bd0afec();
    }
    if ((((*(uint *)(uVar19 + 0x10) ^ 0xffffffff) & 0x408) == 0) &&
       (*(int *)(uVar19 + 0x58) == 0xc || *(int *)(uVar19 + 0x58) == 9)) {
      puVar10 = (ulong *)0x1;
      param_1 = param_2;
      func_0x00010bcf6550();
    }
    puVar13 = puVar13 + 1;
  } while( true );
}



/* Entry: 10bcfff64; end: 10bcfffc7;  */

byte * FUN_10bcfff64(byte *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  
  if (*(long *)param_1 == 0) {
    iVar6 = *(int *)(param_1 + 0x70) + (param_2 * 4 + 7U & 0xfffffff8);
  }
  else {
    func_0x00010bd0a31c();
    func_0x00010bd0a0b8();
    func_0x00010bd0aa9c();
    if (*(long *)param_1 != 0) {
      func_0x00010bd0a31c();
      func_0x00010bd0a0b8();
      func_0x00010bd0aa9c();
      lVar9 = (long)(char)param_1[0x17];
      if (lVar9 < 0) {
        pbVar7 = *(byte **)param_1;
        if (0x19 < *pbVar7 - 0x61) {
          return (byte *)0x2;
        }
        lVar9 = *(long *)(param_1 + 8);
      }
      else {
        pbVar7 = param_1;
        if (0x19 < *param_1 - 0x61) {
          return (byte *)0x2;
        }
      }
      pbVar8 = (byte *)0x0;
      while( true ) {
        if (lVar9 == 0) {
          return pbVar8;
        }
        bVar3 = *pbVar7;
        bVar4 = 0x19 < bVar3 - 0x61;
        bVar5 = 9 < bVar3 - 0x30;
        if (bVar3 != 0x5f && (bVar4 && bVar5)) break;
        uVar2 = (uint)pbVar8;
        if (bVar3 == 0x5f) {
          uVar2 = 1;
        }
        uVar1 = (uint)pbVar8;
        if (bVar4 && bVar5) {
          uVar1 = uVar2;
        }
        pbVar8 = (byte *)(ulong)uVar1;
        lVar9 = lVar9 + -1;
        pbVar7 = pbVar7 + 1;
      }
      return (byte *)0x2;
    }
    iVar6 = *(int *)(param_1 + 0x70) + param_2 * 8;
  }
  *(int *)(param_1 + 0x70) = iVar6;
  return param_1;
}



/* Entry: 10bcfffc8; end: 10bd00057;  */

undefined4 FUN_10bcfffc8(byte *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  byte *pbVar6;
  long lVar7;
  
  lVar7 = (long)(char)param_1[0x17];
  if (lVar7 < 0) {
    pbVar6 = *(byte **)param_1;
    if (0x19 < *pbVar6 - 0x61) {
      return 2;
    }
    lVar7 = *(long *)(param_1 + 8);
  }
  else {
    pbVar6 = param_1;
    if (0x19 < *param_1 - 0x61) {
      return 2;
    }
  }
  uVar5 = 0;
  while( true ) {
    if (lVar7 == 0) {
      return uVar5;
    }
    bVar2 = *pbVar6;
    bVar3 = 0x19 < bVar2 - 0x61;
    bVar4 = 9 < bVar2 - 0x30;
    if (bVar2 != 0x5f && (bVar3 && bVar4)) break;
    uVar1 = uVar5;
    if (bVar2 == 0x5f) {
      uVar1 = 1;
    }
    if (bVar3 && bVar4) {
      uVar5 = uVar1;
    }
    lVar7 = lVar7 + -1;
    pbVar6 = pbVar6 + 1;
  }
  return 2;
}



/* Entry: 10bd00058; end: 10bd0006f;  */

void FUN_10bd00058(long param_1)

{
  if (param_1 != 0) {
    FUN_10bd12c58();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd00070; end: 10bd0007b;  */

undefined8 * FUN_10bd00070(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110d9bfd0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x00010bd0c7a8(param_1,0,param_2);
  FUN_10bd000b8();
  return param_1;
}



/* Entry: 10bd0007c; end: 10bd000b7;  */

undefined8 * FUN_10bd0007c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110d9bfd0;
  param_1[1] = param_2;
  param_1[2] = param_2;
  func_0x00010bd0c7a8();
  FUN_10bd000b8();
  return param_1;
}



/* Entry: 10bd000b8; end: 10bd0011b;  */

long FUN_10bd000b8(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010bd12944(param_1);
    }
    else {
      func_0x00010bd12914(param_1);
    }
  }
  return param_1;
}



/* Entry: 10bd0011c; end: 10bd001b7;  */

void FUN_10bd0011c(long param_1)

{
  func_0x000107c27a18(param_1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10bd001b8; end: 10bd001fb;  */

void FUN_10bd001b8(void)

{
  char *pcVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010bd0be98();
  if (unaff_x20 != 0) {
    pcVar1 = (char *)*unaff_x19;
    while (unaff_x20 != 0) {
      if (-1 < *pcVar1) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
      func_0x00010bd0af28();
    }
    func_0x00010bd0a3fc();
  }
  return;
}



/* Entry: 10bd001fc; end: 10bd002a3;  */

undefined8 FUN_10bd001fc(undefined8 param_1,long param_2)

{
  func_0x00010bd0a948();
  if (param_2 != 0) {
    func_0x00010bd0bd60();
    func_0x000104ab30b8();
  }
  return param_1;
}



/* Entry: 10bd002a4; end: 10bd00327;  */

void FUN_10bd002a4(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x24;
  long unaff_x25;
  undefined8 uVar7;
  
  func_0x000107c3a6d8();
  lVar1 = *param_1;
  puVar5 = (undefined8 *)param_1[1];
  lVar6 = param_1[2];
  param_1[2] = param_2;
  func_0x000104ab30b8();
  func_0x000107c3a6a0();
  for (; lVar6 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(lVar1 + unaff_x24)) {
      plVar3 = param_1;
      FUN_10bd00328(param_1,*puVar5,puVar5[1]);
      plVar4 = plVar3;
      func_0x000107c3a660();
      func_0x000107c3a638((uint)plVar3 & 0x7f);
      uVar7 = *puVar5;
      puVar2 = (undefined8 *)(unaff_x25 + (long)plVar4 * 0x10);
      puVar2[1] = puVar5[1];
      *puVar2 = uVar7;
    }
    puVar5 = puVar5 + 2;
  }
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10bd00328; end: 10bd00337;  */

void FUN_10bd00328(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  func_0x000100062cf8(&uStack_20);
  return;
}



/* Entry: 10bd00338; end: 10bd00343;  */

void FUN_10bd00338(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  int iVar10;
  int extraout_w8;
  int iVar11;
  ulong uVar12;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  ulong extraout_x8_11;
  ulong extraout_x8_12;
  int extraout_w9;
  ulong uVar13;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  ulong extraout_x9_06;
  ulong extraout_x9_07;
  ulong extraout_x9_08;
  int iVar14;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  ulong *extraout_x10;
  ulong *extraout_x10_00;
  ulong *extraout_x10_01;
  ulong *extraout_x10_02;
  ulong *extraout_x10_03;
  int extraout_w11;
  int extraout_w11_00;
  uint uVar15;
  int extraout_w11_01;
  int extraout_w11_02;
  ulong uVar16;
  ulong extraout_x11;
  ulong extraout_x11_00;
  uint extraout_w12;
  uint extraout_w12_00;
  uint extraout_w12_01;
  uint extraout_w12_02;
  int iVar17;
  ulong *extraout_x12;
  ulong *extraout_x12_00;
  ulong uVar18;
  ulong uVar19;
  int extraout_w13;
  int extraout_w13_00;
  long lVar20;
  ulong uVar21;
  uint extraout_w14;
  uint extraout_w14_00;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong *unaff_x19;
  ulong *unaff_x20;
  
  func_0x00010bd0a5f0();
  func_0x00010bd0bbbc();
  func_0x00010bd0aa10();
  do {
    puVar8 = unaff_x19 + -1;
    puVar7 = unaff_x20;
LAB_10bd00374:
    unaff_x20 = puVar7;
    uVar12 = (long)unaff_x19 - (long)unaff_x20 >> 3;
    switch(uVar12) {
    case 0:
    case 1:
      goto LAB_10bd0a218;
    case 2:
      func_0x00010bd0a578(unaff_x19[-1]);
      uVar15 = extraout_w10;
      if ((int)extraout_x8_04 != (int)extraout_x9_00) {
        uVar15 = (uint)((int)extraout_x8_04 < (int)extraout_x9_00);
      }
      if (uVar15 != 1) {
        return;
      }
      *unaff_x20 = extraout_x8_04;
      unaff_x19[-1] = extraout_x9_00;
      return;
    case 3:
      puVar7 = unaff_x20 + 1;
      func_0x00010bd0b600();
      uVar13 = *puVar7;
      uVar12 = *unaff_x20;
      iVar14 = (int)(uVar12 >> 0x20);
      iVar17 = (int)(uVar13 >> 0x20);
      iVar11 = (int)uVar12;
      iVar10 = (int)uVar13;
      bVar1 = iVar17 < iVar14;
      if (iVar10 != iVar11) {
        bVar1 = iVar10 < iVar11;
      }
      uVar16 = *puVar8;
      bVar2 = (int)(uVar16 >> 0x20) < iVar17;
      if ((int)uVar16 != iVar10) {
        bVar2 = (int)uVar16 < iVar10;
      }
      if (bVar1) {
        if (bVar2) {
          *unaff_x20 = uVar16;
        }
        else {
          *unaff_x20 = uVar13;
          *puVar7 = uVar12;
          uVar13 = *puVar8;
          bVar1 = (int)(uVar13 >> 0x20) < iVar14;
          if ((int)uVar13 != iVar11) {
            bVar1 = (int)uVar13 < iVar11;
          }
          if (!bVar1) {
            return;
          }
          *puVar7 = uVar13;
        }
        *puVar8 = uVar12;
      }
      else if (bVar2) {
        *puVar7 = uVar16;
        *puVar8 = uVar13;
        func_0x00010bd0a578(*puVar7);
        uVar15 = extraout_w10_00;
        if ((int)extraout_x8_05 != (int)extraout_x9_01) {
          uVar15 = (uint)((int)extraout_x8_05 < (int)extraout_x9_01);
        }
        if (uVar15 == 1) {
          *unaff_x20 = extraout_x8_05;
          *puVar7 = extraout_x9_01;
          return;
        }
      }
      return;
    case 4:
      puVar7 = puVar8;
      func_0x00010bd0b600(unaff_x20,unaff_x20 + 1,unaff_x20 + 2);
      func_0x00010bd0a9cc();
      FUN_10bd00ab8();
      func_0x00010bd0a578(*puVar7);
      uVar15 = extraout_w10_01;
      if ((int)extraout_x8_06 != (int)extraout_x9_02) {
        uVar15 = (uint)((int)extraout_x8_06 < (int)extraout_x9_02);
      }
      if (uVar15 == 1) {
        *puVar8 = extraout_x8_06;
        *puVar7 = extraout_x9_02;
        func_0x00010bd0a578(*puVar8);
        uVar15 = extraout_w10_02;
        if ((int)extraout_x8_07 != (int)extraout_x9_03) {
          uVar15 = (uint)((int)extraout_x8_07 < (int)extraout_x9_03);
        }
        if (uVar15 == 1) {
          *unaff_x19 = extraout_x8_07;
          *puVar8 = extraout_x9_03;
          func_0x00010bd0a578(*unaff_x19);
          uVar15 = extraout_w10_03;
          if ((int)extraout_x8_08 != (int)extraout_x9_04) {
            uVar15 = (uint)((int)extraout_x8_08 < (int)extraout_x9_04);
          }
          if (uVar15 == 1) {
            *unaff_x20 = extraout_x8_08;
            *unaff_x19 = extraout_x9_04;
          }
        }
      }
      return;
    case 5:
      puVar7 = unaff_x20 + 3;
      puVar9 = puVar8;
      func_0x00010bd0b600(unaff_x20,unaff_x20 + 1,unaff_x20 + 2);
      func_0x00010bd0a9cc();
      FUN_10bd00b80();
      func_0x00010bd0a578(*puVar9);
      uVar15 = extraout_w10_04;
      if ((int)extraout_x8_09 != (int)extraout_x9_05) {
        uVar15 = (uint)((int)extraout_x8_09 < (int)extraout_x9_05);
      }
      if (uVar15 == 1) {
        *puVar7 = extraout_x8_09;
        *puVar9 = extraout_x9_05;
        func_0x00010bd0a578(*puVar7);
        uVar15 = extraout_w10_05;
        if ((int)extraout_x8_10 != (int)extraout_x9_06) {
          uVar15 = (uint)((int)extraout_x8_10 < (int)extraout_x9_06);
        }
        if (uVar15 == 1) {
          *puVar8 = extraout_x8_10;
          *puVar7 = extraout_x9_06;
          func_0x00010bd0a578(*puVar8);
          uVar15 = extraout_w10_06;
          if ((int)extraout_x8_11 != (int)extraout_x9_07) {
            uVar15 = (uint)((int)extraout_x8_11 < (int)extraout_x9_07);
          }
          if (uVar15 == 1) {
            *unaff_x19 = extraout_x8_11;
            *puVar8 = extraout_x9_07;
            func_0x00010bd0a578(*unaff_x19);
            uVar15 = extraout_w10_07;
            if ((int)extraout_x8_12 != (int)extraout_x9_08) {
              uVar15 = (uint)((int)extraout_x8_12 < (int)extraout_x9_08);
            }
            if (uVar15 == 1) {
              *unaff_x20 = extraout_x8_12;
              *unaff_x19 = extraout_x9_08;
            }
          }
        }
      }
      return;
    }
    if ((long)uVar12 < 0x18) {
      if ((param_4 & 1) == 0) {
        puVar7 = unaff_x20;
        if (unaff_x20 == unaff_x19) {
          return;
        }
        while( true ) {
          unaff_x20 = unaff_x20 + 1;
          puVar8 = puVar7 + 1;
          if (puVar8 == unaff_x19) break;
          uVar12 = *puVar7;
          uVar13 = puVar7[1];
          iVar10 = (int)(uVar13 >> 0x20);
          iVar11 = (int)uVar13;
          bVar1 = iVar10 < (int)(uVar12 >> 0x20);
          if (iVar11 != (int)uVar12) {
            bVar1 = iVar11 < (int)uVar12;
          }
          puVar9 = unaff_x20;
          puVar7 = puVar8;
          if (bVar1) {
            do {
              *puVar9 = uVar12;
              uVar12 = puVar9[-2];
              bVar1 = iVar10 < (int)(uVar12 >> 0x20);
              if (iVar11 != (int)uVar12) {
                bVar1 = iVar11 < (int)uVar12;
              }
              puVar9 = puVar9 + -1;
            } while (bVar1);
            *puVar9 = uVar13;
          }
        }
        return;
      }
      if (unaff_x20 == unaff_x19) {
        return;
      }
      lVar20 = 8;
      puVar7 = unaff_x20;
      break;
    }
    if (param_3 == 0) {
      if (unaff_x20 == unaff_x19) {
        return;
      }
      uVar16 = uVar12 - 2 >> 1;
      uVar13 = uVar16;
      goto LAB_10bd007e4;
    }
    puVar7 = unaff_x20 + (uVar12 >> 1);
    if (uVar12 < 0x81) {
      func_0x00010bd0c184(puVar7,unaff_x20);
    }
    else {
      func_0x00010bd0c184(unaff_x20,puVar7);
      FUN_10bd00ab8(unaff_x20 + 1,puVar7 + -1,unaff_x19 + -2);
      FUN_10bd00ab8(unaff_x20 + 2,puVar7 + 1,unaff_x19 + -3);
      FUN_10bd00ab8(puVar7 + -1,puVar7,puVar7 + 1);
      uVar12 = *unaff_x20;
      *unaff_x20 = *puVar7;
      *puVar7 = uVar12;
    }
    param_3 = param_3 + -1;
    uVar12 = *unaff_x20;
    uVar13 = uVar12 >> 0x20;
    iVar11 = (int)uVar12;
    iVar10 = (int)(uVar12 >> 0x20);
    if ((param_4 & 1) == 0) {
      bVar1 = *(int *)((long)unaff_x20 + -4) < iVar10;
      if ((int)unaff_x20[-1] != iVar11) {
        bVar1 = (int)unaff_x20[-1] < iVar11;
      }
      if (!bVar1) {
        bVar1 = iVar10 < *(int *)((long)unaff_x19 + -4);
        if (iVar11 != (int)*puVar8) {
          bVar1 = iVar11 < (int)*puVar8;
        }
        puVar7 = unaff_x20;
        if (bVar1) {
          do {
            puVar7 = puVar7 + 1;
            iVar14 = (int)*puVar7;
            bVar1 = iVar10 < (int)(*puVar7 >> 0x20);
            if (iVar11 != iVar14) {
              bVar1 = iVar11 < iVar14;
            }
          } while (!bVar1);
        }
        else {
          puVar9 = unaff_x20 + 1;
          do {
            puVar7 = puVar9;
            if (unaff_x19 <= puVar7) break;
            func_0x00010bd0b4b4();
            uVar15 = extraout_w12;
            if ((int)extraout_x8_01 != extraout_w11) {
              uVar15 = (uint)((int)extraout_x8_01 < extraout_w11);
            }
            uVar12 = extraout_x8_01;
            puVar9 = extraout_x10_01;
          } while (uVar15 != 1);
        }
        puVar9 = unaff_x19;
        if (puVar7 < unaff_x19) {
          do {
            func_0x00010bd0b4b4();
            uVar15 = extraout_w12_00;
            if ((int)extraout_x8_02 != extraout_w11_00) {
              uVar15 = (uint)((int)extraout_x8_02 < extraout_w11_00);
            }
            uVar12 = extraout_x8_02;
            puVar9 = extraout_x10_02;
          } while ((uVar15 & 1) != 0);
        }
        while (puVar7 < puVar9) {
          uVar12 = *puVar7;
          *puVar7 = *puVar9;
          *puVar9 = uVar12;
          do {
            puVar7 = puVar7 + 1;
            func_0x00010bd0b4b4();
            uVar15 = extraout_w12_01;
            if (extraout_w8 != extraout_w11_01) {
              uVar15 = (uint)(extraout_w8 < extraout_w11_01);
            }
          } while (uVar15 != 1);
          do {
            func_0x00010bd0b4b4();
            uVar15 = extraout_w12_02;
            if ((int)extraout_x8_03 != extraout_w11_02) {
              uVar15 = (uint)((int)extraout_x8_03 < extraout_w11_02);
            }
            uVar12 = extraout_x8_03;
            puVar9 = extraout_x10_03;
          } while ((uVar15 & 1) != 0);
        }
        puVar9 = puVar7 + -1;
        if (unaff_x20 != puVar9) {
          *unaff_x20 = *puVar9;
        }
        param_4 = 0;
        *puVar9 = uVar12;
        goto LAB_10bd00374;
      }
    }
    lVar20 = 0;
    do {
      uVar16 = *(ulong *)((long)unaff_x20 + lVar20 + 8);
      bVar1 = (int)(uVar16 >> 0x20) < iVar10;
      if (iVar11 != (int)uVar16) {
        bVar1 = (int)uVar16 < iVar11;
      }
      lVar20 = lVar20 + 8;
    } while (bVar1);
    puVar7 = (ulong *)((long)unaff_x20 + lVar20);
    puVar9 = unaff_x19;
    if (lVar20 == 8) {
      do {
        iVar11 = (int)uVar13;
        puVar5 = puVar9;
        puVar6 = puVar7;
        if (puVar9 <= puVar7) break;
        func_0x00010bd0c70c();
        iVar11 = (int)extraout_x9;
        uVar15 = extraout_w14_00;
        if ((int)extraout_x8_00 != extraout_w13_00) {
          uVar15 = (uint)(extraout_w13_00 < (int)extraout_x8_00);
        }
        uVar12 = extraout_x8_00;
        uVar13 = extraout_x9;
        puVar7 = extraout_x10_00;
        uVar16 = extraout_x11_00;
        puVar9 = extraout_x12_00;
        puVar5 = extraout_x12_00;
        puVar6 = extraout_x10_00;
      } while ((uVar15 & 1) == 0);
    }
    else {
      do {
        func_0x00010bd0c70c();
        uVar15 = extraout_w14;
        if ((int)extraout_x8 != extraout_w13) {
          uVar15 = (uint)(extraout_w13 < (int)extraout_x8);
        }
        uVar16 = extraout_x11;
        puVar9 = extraout_x12;
        puVar7 = extraout_x10;
        iVar11 = extraout_w9;
        puVar5 = extraout_x12;
        puVar6 = extraout_x10;
        uVar12 = extraout_x8;
      } while (uVar15 != 1);
    }
    while (puVar7 < puVar9) {
      *puVar7 = *puVar9;
      *puVar9 = uVar16;
      do {
        puVar7 = puVar7 + 1;
        uVar16 = *puVar7;
        iVar10 = (int)uVar12;
        bVar1 = (int)(uVar16 >> 0x20) < iVar11;
        if (iVar10 != (int)uVar16) {
          bVar1 = (int)uVar16 < iVar10;
        }
      } while (bVar1);
      do {
        puVar9 = puVar9 + -1;
        iVar14 = (int)*puVar9;
        bVar1 = (int)(*puVar9 >> 0x20) < iVar11;
        if (iVar10 != iVar14) {
          bVar1 = iVar14 < iVar10;
        }
      } while (!bVar1);
    }
    puVar9 = puVar7 + -1;
    if (unaff_x20 != puVar9) {
      *unaff_x20 = *puVar9;
    }
    *puVar9 = uVar12;
    if (puVar6 < puVar5) goto LAB_10bd0054c;
    puVar5 = unaff_x20;
    FUN_10bd00ce8(unaff_x20,puVar9);
    puVar6 = puVar7;
    FUN_10bd00ce8(puVar7,unaff_x19);
    if ((int)puVar6 == 0) goto code_r0x00010bd00548;
    unaff_x19 = puVar9;
    if (((ulong)puVar5 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10bd00744:
  if (puVar7 + 1 == unaff_x19) {
    return;
  }
  uVar12 = *puVar7;
  uVar13 = puVar7[1];
  iVar10 = (int)(uVar13 >> 0x20);
  iVar11 = (int)uVar13;
  bVar1 = iVar10 < (int)(uVar12 >> 0x20);
  if (iVar11 != (int)uVar12) {
    bVar1 = iVar11 < (int)uVar12;
  }
  lVar22 = lVar20;
  if (bVar1) {
    do {
      *(ulong *)((long)unaff_x20 + lVar22) = uVar12;
      lVar4 = lVar22 + -8;
      puVar8 = unaff_x20;
      if (lVar4 == 0) goto LAB_10bd007bc;
      uVar12 = *(ulong *)((long)unaff_x20 + lVar22 + -0x10);
      bVar1 = iVar10 < (int)(uVar12 >> 0x20);
      if (iVar11 != (int)uVar12) {
        bVar1 = iVar11 < (int)uVar12;
      }
      lVar22 = lVar4;
    } while (bVar1);
    puVar8 = (ulong *)((long)unaff_x20 + lVar4);
LAB_10bd007bc:
    *puVar8 = uVar13;
  }
  lVar20 = lVar20 + 8;
  puVar7 = puVar7 + 1;
  goto LAB_10bd00744;
LAB_10bd007e4:
  do {
    if ((long)uVar13 <= (long)uVar16) {
      uVar3 = (uVar13 & 0x3fffffffffffffff) << 1 | 1;
      puVar7 = unaff_x20 + uVar3;
      uVar21 = uVar13 * 2 + 2;
      uVar18 = *puVar7;
      puVar8 = puVar7;
      uVar24 = uVar18;
      uVar23 = uVar3;
      if ((long)uVar21 < (long)uVar12) {
        uVar24 = puVar7[1];
        bVar1 = (int)(uVar18 >> 0x20) < (int)(uVar24 >> 0x20);
        if ((int)uVar18 != (int)uVar24) {
          bVar1 = (int)uVar18 < (int)uVar24;
        }
        puVar8 = puVar7 + 1;
        uVar23 = uVar21;
        if (!bVar1) {
          puVar8 = puVar7;
          uVar24 = uVar18;
          uVar23 = uVar3;
        }
      }
      uVar21 = unaff_x20[uVar13];
      iVar10 = (int)(uVar21 >> 0x20);
      iVar11 = (int)uVar21;
      bVar1 = (int)(uVar24 >> 0x20) < iVar10;
      if ((int)uVar24 != iVar11) {
        bVar1 = (int)uVar24 < iVar11;
      }
      puVar7 = unaff_x20 + uVar13;
      if (!bVar1) {
        do {
          puVar9 = puVar8;
          *puVar7 = uVar24;
          if ((long)uVar16 < (long)uVar23) break;
          uVar18 = uVar23 << 1 | 1;
          puVar7 = unaff_x20 + uVar18;
          uVar3 = uVar23 * 2 + 2;
          uVar19 = *puVar7;
          puVar8 = puVar7;
          uVar24 = uVar19;
          uVar23 = uVar18;
          if ((long)uVar3 < (long)uVar12) {
            uVar24 = puVar7[1];
            bVar1 = (int)(uVar19 >> 0x20) < (int)(uVar24 >> 0x20);
            if ((int)uVar19 != (int)uVar24) {
              bVar1 = (int)uVar19 < (int)uVar24;
            }
            puVar8 = puVar7 + 1;
            uVar23 = uVar3;
            if (!bVar1) {
              puVar8 = puVar7;
              uVar24 = uVar19;
              uVar23 = uVar18;
            }
          }
          bVar1 = (int)(uVar24 >> 0x20) < iVar10;
          if ((int)uVar24 != iVar11) {
            bVar1 = (int)uVar24 < iVar11;
          }
          puVar7 = puVar9;
        } while (!bVar1);
        *puVar9 = uVar21;
      }
    }
    uVar13 = uVar13 - 1;
  } while (-1 < (long)uVar13);
  do {
    if ((long)uVar12 < 2) {
LAB_10bd0a218:
      return;
    }
    uVar16 = *unaff_x20;
    puVar7 = unaff_x20;
    uVar13 = 0;
    do {
      puVar9 = puVar7 + uVar13 + 1;
      uVar18 = *puVar9;
      uVar3 = uVar13 << 1 | 1;
      uVar21 = uVar13 * 2 + 2;
      puVar8 = puVar9;
      uVar24 = uVar18;
      uVar23 = uVar3;
      if ((long)uVar21 < (long)uVar12) {
        uVar24 = puVar7[uVar13 + 2];
        bVar1 = (int)(uVar18 >> 0x20) < (int)(uVar24 >> 0x20);
        if ((int)uVar18 != (int)uVar24) {
          bVar1 = (int)uVar18 < (int)uVar24;
        }
        puVar8 = puVar7 + uVar13 + 2;
        uVar23 = uVar21;
        if (!bVar1) {
          puVar8 = puVar9;
          uVar24 = uVar18;
          uVar23 = uVar3;
        }
      }
      *puVar7 = uVar24;
      puVar7 = puVar8;
      uVar13 = uVar23;
    } while ((long)uVar23 <= (long)(uVar12 - 2 >> 1));
    unaff_x19 = unaff_x19 + -1;
    if (puVar8 == unaff_x19) {
      *puVar8 = uVar16;
    }
    else {
      *puVar8 = *unaff_x19;
      *unaff_x19 = uVar16;
      lVar20 = (long)puVar8 + (8 - (long)unaff_x20) >> 3;
      if (1 < lVar20) {
        uVar13 = lVar20 - 2U >> 1;
        uVar21 = unaff_x20[uVar13];
        uVar16 = *puVar8;
        iVar10 = (int)(uVar16 >> 0x20);
        iVar11 = (int)uVar16;
        bVar1 = (int)(uVar21 >> 0x20) < iVar10;
        if ((int)uVar21 != iVar11) {
          bVar1 = (int)uVar21 < iVar11;
        }
        puVar7 = unaff_x20 + uVar13;
        if (bVar1) {
          do {
            puVar9 = puVar7;
            *puVar8 = uVar21;
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1 >> 1;
            uVar21 = unaff_x20[uVar13];
            bVar1 = (int)(uVar21 >> 0x20) < iVar10;
            if ((int)uVar21 != iVar11) {
              bVar1 = (int)uVar21 < iVar11;
            }
            puVar8 = puVar9;
            puVar7 = unaff_x20 + uVar13;
          } while (bVar1);
          *puVar9 = uVar16;
        }
      }
    }
    uVar12 = uVar12 - 1;
  } while( true );
code_r0x00010bd00548:
  if (((ulong)puVar5 & 1) == 0) {
LAB_10bd0054c:
    FUN_10bd00344(unaff_x20,puVar9,param_3,(uint)param_4 & 1);
    param_4 = 0;
  }
  goto LAB_10bd00374;
}



/* Entry: 10bd00344; end: 10bd00ab7;  */

void FUN_10bd00344(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  int iVar10;
  int extraout_w8;
  int iVar11;
  ulong uVar12;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  ulong extraout_x8_11;
  ulong extraout_x8_12;
  int extraout_w9;
  ulong uVar13;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  ulong extraout_x9_06;
  ulong extraout_x9_07;
  ulong extraout_x9_08;
  int iVar14;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  ulong *extraout_x10;
  ulong *extraout_x10_00;
  ulong *extraout_x10_01;
  ulong *extraout_x10_02;
  ulong *extraout_x10_03;
  int extraout_w11;
  int extraout_w11_00;
  uint uVar15;
  int extraout_w11_01;
  int extraout_w11_02;
  ulong uVar16;
  ulong extraout_x11;
  ulong extraout_x11_00;
  uint extraout_w12;
  uint extraout_w12_00;
  uint extraout_w12_01;
  uint extraout_w12_02;
  int iVar17;
  ulong *extraout_x12;
  ulong *extraout_x12_00;
  ulong uVar18;
  ulong uVar19;
  int extraout_w13;
  int extraout_w13_00;
  long lVar20;
  ulong uVar21;
  uint extraout_w14;
  uint extraout_w14_00;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong *unaff_x19;
  ulong *unaff_x20;
  
  func_0x00010bd0bbbc();
  func_0x00010bd0aa10();
  do {
    puVar8 = unaff_x19 + -1;
    puVar7 = unaff_x20;
LAB_10bd00374:
    unaff_x20 = puVar7;
    uVar12 = (long)unaff_x19 - (long)unaff_x20 >> 3;
    switch(uVar12) {
    case 0:
    case 1:
      goto LAB_10bd0a218;
    case 2:
      func_0x00010bd0a578(unaff_x19[-1]);
      uVar15 = extraout_w10;
      if ((int)extraout_x8_04 != (int)extraout_x9_00) {
        uVar15 = (uint)((int)extraout_x8_04 < (int)extraout_x9_00);
      }
      if (uVar15 != 1) {
        return;
      }
      *unaff_x20 = extraout_x8_04;
      unaff_x19[-1] = extraout_x9_00;
      return;
    case 3:
      puVar7 = unaff_x20 + 1;
      func_0x00010bd0b600();
      uVar13 = *puVar7;
      uVar12 = *unaff_x20;
      iVar14 = (int)(uVar12 >> 0x20);
      iVar17 = (int)(uVar13 >> 0x20);
      iVar11 = (int)uVar12;
      iVar10 = (int)uVar13;
      bVar1 = iVar17 < iVar14;
      if (iVar10 != iVar11) {
        bVar1 = iVar10 < iVar11;
      }
      uVar16 = *puVar8;
      bVar2 = (int)(uVar16 >> 0x20) < iVar17;
      if ((int)uVar16 != iVar10) {
        bVar2 = (int)uVar16 < iVar10;
      }
      if (bVar1) {
        if (bVar2) {
          *unaff_x20 = uVar16;
        }
        else {
          *unaff_x20 = uVar13;
          *puVar7 = uVar12;
          uVar13 = *puVar8;
          bVar1 = (int)(uVar13 >> 0x20) < iVar14;
          if ((int)uVar13 != iVar11) {
            bVar1 = (int)uVar13 < iVar11;
          }
          if (!bVar1) {
            return;
          }
          *puVar7 = uVar13;
        }
        *puVar8 = uVar12;
      }
      else if (bVar2) {
        *puVar7 = uVar16;
        *puVar8 = uVar13;
        func_0x00010bd0a578(*puVar7);
        uVar15 = extraout_w10_00;
        if ((int)extraout_x8_05 != (int)extraout_x9_01) {
          uVar15 = (uint)((int)extraout_x8_05 < (int)extraout_x9_01);
        }
        if (uVar15 == 1) {
          *unaff_x20 = extraout_x8_05;
          *puVar7 = extraout_x9_01;
          return;
        }
      }
      return;
    case 4:
      puVar7 = puVar8;
      func_0x00010bd0b600(unaff_x20,unaff_x20 + 1,unaff_x20 + 2);
      func_0x00010bd0a9cc();
      FUN_10bd00ab8();
      func_0x00010bd0a578(*puVar7);
      uVar15 = extraout_w10_01;
      if ((int)extraout_x8_06 != (int)extraout_x9_02) {
        uVar15 = (uint)((int)extraout_x8_06 < (int)extraout_x9_02);
      }
      if (uVar15 == 1) {
        *puVar8 = extraout_x8_06;
        *puVar7 = extraout_x9_02;
        func_0x00010bd0a578(*puVar8);
        uVar15 = extraout_w10_02;
        if ((int)extraout_x8_07 != (int)extraout_x9_03) {
          uVar15 = (uint)((int)extraout_x8_07 < (int)extraout_x9_03);
        }
        if (uVar15 == 1) {
          *unaff_x19 = extraout_x8_07;
          *puVar8 = extraout_x9_03;
          func_0x00010bd0a578(*unaff_x19);
          uVar15 = extraout_w10_03;
          if ((int)extraout_x8_08 != (int)extraout_x9_04) {
            uVar15 = (uint)((int)extraout_x8_08 < (int)extraout_x9_04);
          }
          if (uVar15 == 1) {
            *unaff_x20 = extraout_x8_08;
            *unaff_x19 = extraout_x9_04;
          }
        }
      }
      return;
    case 5:
      puVar7 = unaff_x20 + 3;
      puVar9 = puVar8;
      func_0x00010bd0b600(unaff_x20,unaff_x20 + 1,unaff_x20 + 2);
      func_0x00010bd0a9cc();
      FUN_10bd00b80();
      func_0x00010bd0a578(*puVar9);
      uVar15 = extraout_w10_04;
      if ((int)extraout_x8_09 != (int)extraout_x9_05) {
        uVar15 = (uint)((int)extraout_x8_09 < (int)extraout_x9_05);
      }
      if (uVar15 == 1) {
        *puVar7 = extraout_x8_09;
        *puVar9 = extraout_x9_05;
        func_0x00010bd0a578(*puVar7);
        uVar15 = extraout_w10_05;
        if ((int)extraout_x8_10 != (int)extraout_x9_06) {
          uVar15 = (uint)((int)extraout_x8_10 < (int)extraout_x9_06);
        }
        if (uVar15 == 1) {
          *puVar8 = extraout_x8_10;
          *puVar7 = extraout_x9_06;
          func_0x00010bd0a578(*puVar8);
          uVar15 = extraout_w10_06;
          if ((int)extraout_x8_11 != (int)extraout_x9_07) {
            uVar15 = (uint)((int)extraout_x8_11 < (int)extraout_x9_07);
          }
          if (uVar15 == 1) {
            *unaff_x19 = extraout_x8_11;
            *puVar8 = extraout_x9_07;
            func_0x00010bd0a578(*unaff_x19);
            uVar15 = extraout_w10_07;
            if ((int)extraout_x8_12 != (int)extraout_x9_08) {
              uVar15 = (uint)((int)extraout_x8_12 < (int)extraout_x9_08);
            }
            if (uVar15 == 1) {
              *unaff_x20 = extraout_x8_12;
              *unaff_x19 = extraout_x9_08;
            }
          }
        }
      }
      return;
    }
    if ((long)uVar12 < 0x18) {
      if ((param_4 & 1) == 0) {
        puVar7 = unaff_x20;
        if (unaff_x20 == unaff_x19) {
          return;
        }
        while( true ) {
          unaff_x20 = unaff_x20 + 1;
          puVar8 = puVar7 + 1;
          if (puVar8 == unaff_x19) break;
          uVar12 = *puVar7;
          uVar13 = puVar7[1];
          iVar10 = (int)(uVar13 >> 0x20);
          iVar11 = (int)uVar13;
          bVar1 = iVar10 < (int)(uVar12 >> 0x20);
          if (iVar11 != (int)uVar12) {
            bVar1 = iVar11 < (int)uVar12;
          }
          puVar9 = unaff_x20;
          puVar7 = puVar8;
          if (bVar1) {
            do {
              *puVar9 = uVar12;
              uVar12 = puVar9[-2];
              bVar1 = iVar10 < (int)(uVar12 >> 0x20);
              if (iVar11 != (int)uVar12) {
                bVar1 = iVar11 < (int)uVar12;
              }
              puVar9 = puVar9 + -1;
            } while (bVar1);
            *puVar9 = uVar13;
          }
        }
        return;
      }
      if (unaff_x20 == unaff_x19) {
        return;
      }
      lVar20 = 8;
      puVar7 = unaff_x20;
      break;
    }
    if (param_3 == 0) {
      if (unaff_x20 == unaff_x19) {
        return;
      }
      uVar16 = uVar12 - 2 >> 1;
      uVar13 = uVar16;
      goto LAB_10bd007e4;
    }
    puVar7 = unaff_x20 + (uVar12 >> 1);
    if (uVar12 < 0x81) {
      func_0x00010bd0c184(puVar7,unaff_x20);
    }
    else {
      func_0x00010bd0c184(unaff_x20,puVar7);
      FUN_10bd00ab8(unaff_x20 + 1,puVar7 + -1,unaff_x19 + -2);
      FUN_10bd00ab8(unaff_x20 + 2,puVar7 + 1,unaff_x19 + -3);
      FUN_10bd00ab8(puVar7 + -1,puVar7,puVar7 + 1);
      uVar12 = *unaff_x20;
      *unaff_x20 = *puVar7;
      *puVar7 = uVar12;
    }
    param_3 = param_3 + -1;
    uVar12 = *unaff_x20;
    uVar13 = uVar12 >> 0x20;
    iVar11 = (int)uVar12;
    iVar10 = (int)(uVar12 >> 0x20);
    if ((param_4 & 1) == 0) {
      bVar1 = *(int *)((long)unaff_x20 + -4) < iVar10;
      if ((int)unaff_x20[-1] != iVar11) {
        bVar1 = (int)unaff_x20[-1] < iVar11;
      }
      if (!bVar1) {
        bVar1 = iVar10 < *(int *)((long)unaff_x19 + -4);
        if (iVar11 != (int)*puVar8) {
          bVar1 = iVar11 < (int)*puVar8;
        }
        puVar7 = unaff_x20;
        if (bVar1) {
          do {
            puVar7 = puVar7 + 1;
            iVar14 = (int)*puVar7;
            bVar1 = iVar10 < (int)(*puVar7 >> 0x20);
            if (iVar11 != iVar14) {
              bVar1 = iVar11 < iVar14;
            }
          } while (!bVar1);
        }
        else {
          puVar9 = unaff_x20 + 1;
          do {
            puVar7 = puVar9;
            if (unaff_x19 <= puVar7) break;
            func_0x00010bd0b4b4();
            uVar15 = extraout_w12;
            if ((int)extraout_x8_01 != extraout_w11) {
              uVar15 = (uint)((int)extraout_x8_01 < extraout_w11);
            }
            uVar12 = extraout_x8_01;
            puVar9 = extraout_x10_01;
          } while (uVar15 != 1);
        }
        puVar9 = unaff_x19;
        if (puVar7 < unaff_x19) {
          do {
            func_0x00010bd0b4b4();
            uVar15 = extraout_w12_00;
            if ((int)extraout_x8_02 != extraout_w11_00) {
              uVar15 = (uint)((int)extraout_x8_02 < extraout_w11_00);
            }
            uVar12 = extraout_x8_02;
            puVar9 = extraout_x10_02;
          } while ((uVar15 & 1) != 0);
        }
        while (puVar7 < puVar9) {
          uVar12 = *puVar7;
          *puVar7 = *puVar9;
          *puVar9 = uVar12;
          do {
            puVar7 = puVar7 + 1;
            func_0x00010bd0b4b4();
            uVar15 = extraout_w12_01;
            if (extraout_w8 != extraout_w11_01) {
              uVar15 = (uint)(extraout_w8 < extraout_w11_01);
            }
          } while (uVar15 != 1);
          do {
            func_0x00010bd0b4b4();
            uVar15 = extraout_w12_02;
            if ((int)extraout_x8_03 != extraout_w11_02) {
              uVar15 = (uint)((int)extraout_x8_03 < extraout_w11_02);
            }
            uVar12 = extraout_x8_03;
            puVar9 = extraout_x10_03;
          } while ((uVar15 & 1) != 0);
        }
        puVar9 = puVar7 + -1;
        if (unaff_x20 != puVar9) {
          *unaff_x20 = *puVar9;
        }
        param_4 = 0;
        *puVar9 = uVar12;
        goto LAB_10bd00374;
      }
    }
    lVar20 = 0;
    do {
      uVar16 = *(ulong *)((long)unaff_x20 + lVar20 + 8);
      bVar1 = (int)(uVar16 >> 0x20) < iVar10;
      if (iVar11 != (int)uVar16) {
        bVar1 = (int)uVar16 < iVar11;
      }
      lVar20 = lVar20 + 8;
    } while (bVar1);
    puVar7 = (ulong *)((long)unaff_x20 + lVar20);
    puVar9 = unaff_x19;
    if (lVar20 == 8) {
      do {
        iVar11 = (int)uVar13;
        puVar5 = puVar9;
        puVar6 = puVar7;
        if (puVar9 <= puVar7) break;
        func_0x00010bd0c70c();
        iVar11 = (int)extraout_x9;
        uVar15 = extraout_w14_00;
        if ((int)extraout_x8_00 != extraout_w13_00) {
          uVar15 = (uint)(extraout_w13_00 < (int)extraout_x8_00);
        }
        uVar12 = extraout_x8_00;
        uVar13 = extraout_x9;
        puVar7 = extraout_x10_00;
        uVar16 = extraout_x11_00;
        puVar9 = extraout_x12_00;
        puVar5 = extraout_x12_00;
        puVar6 = extraout_x10_00;
      } while ((uVar15 & 1) == 0);
    }
    else {
      do {
        func_0x00010bd0c70c();
        uVar15 = extraout_w14;
        if ((int)extraout_x8 != extraout_w13) {
          uVar15 = (uint)(extraout_w13 < (int)extraout_x8);
        }
        uVar16 = extraout_x11;
        puVar9 = extraout_x12;
        puVar7 = extraout_x10;
        iVar11 = extraout_w9;
        puVar5 = extraout_x12;
        puVar6 = extraout_x10;
        uVar12 = extraout_x8;
      } while (uVar15 != 1);
    }
    while (puVar7 < puVar9) {
      *puVar7 = *puVar9;
      *puVar9 = uVar16;
      do {
        puVar7 = puVar7 + 1;
        uVar16 = *puVar7;
        iVar10 = (int)uVar12;
        bVar1 = (int)(uVar16 >> 0x20) < iVar11;
        if (iVar10 != (int)uVar16) {
          bVar1 = (int)uVar16 < iVar10;
        }
      } while (bVar1);
      do {
        puVar9 = puVar9 + -1;
        iVar14 = (int)*puVar9;
        bVar1 = (int)(*puVar9 >> 0x20) < iVar11;
        if (iVar10 != iVar14) {
          bVar1 = iVar14 < iVar10;
        }
      } while (!bVar1);
    }
    puVar9 = puVar7 + -1;
    if (unaff_x20 != puVar9) {
      *unaff_x20 = *puVar9;
    }
    *puVar9 = uVar12;
    if (puVar6 < puVar5) goto LAB_10bd0054c;
    puVar5 = unaff_x20;
    FUN_10bd00ce8(unaff_x20,puVar9);
    puVar6 = puVar7;
    FUN_10bd00ce8(puVar7,unaff_x19);
    if ((int)puVar6 == 0) goto code_r0x00010bd00548;
    unaff_x19 = puVar9;
    if (((ulong)puVar5 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10bd00744:
  if (puVar7 + 1 == unaff_x19) {
    return;
  }
  uVar12 = *puVar7;
  uVar13 = puVar7[1];
  iVar10 = (int)(uVar13 >> 0x20);
  iVar11 = (int)uVar13;
  bVar1 = iVar10 < (int)(uVar12 >> 0x20);
  if (iVar11 != (int)uVar12) {
    bVar1 = iVar11 < (int)uVar12;
  }
  lVar22 = lVar20;
  if (bVar1) {
    do {
      *(ulong *)((long)unaff_x20 + lVar22) = uVar12;
      lVar4 = lVar22 + -8;
      puVar8 = unaff_x20;
      if (lVar4 == 0) goto LAB_10bd007bc;
      uVar12 = *(ulong *)((long)unaff_x20 + lVar22 + -0x10);
      bVar1 = iVar10 < (int)(uVar12 >> 0x20);
      if (iVar11 != (int)uVar12) {
        bVar1 = iVar11 < (int)uVar12;
      }
      lVar22 = lVar4;
    } while (bVar1);
    puVar8 = (ulong *)((long)unaff_x20 + lVar4);
LAB_10bd007bc:
    *puVar8 = uVar13;
  }
  lVar20 = lVar20 + 8;
  puVar7 = puVar7 + 1;
  goto LAB_10bd00744;
LAB_10bd007e4:
  do {
    if ((long)uVar13 <= (long)uVar16) {
      uVar3 = (uVar13 & 0x3fffffffffffffff) << 1 | 1;
      puVar7 = unaff_x20 + uVar3;
      uVar21 = uVar13 * 2 + 2;
      uVar18 = *puVar7;
      puVar8 = puVar7;
      uVar24 = uVar18;
      uVar23 = uVar3;
      if ((long)uVar21 < (long)uVar12) {
        uVar24 = puVar7[1];
        bVar1 = (int)(uVar18 >> 0x20) < (int)(uVar24 >> 0x20);
        if ((int)uVar18 != (int)uVar24) {
          bVar1 = (int)uVar18 < (int)uVar24;
        }
        puVar8 = puVar7 + 1;
        uVar23 = uVar21;
        if (!bVar1) {
          puVar8 = puVar7;
          uVar24 = uVar18;
          uVar23 = uVar3;
        }
      }
      uVar21 = unaff_x20[uVar13];
      iVar10 = (int)(uVar21 >> 0x20);
      iVar11 = (int)uVar21;
      bVar1 = (int)(uVar24 >> 0x20) < iVar10;
      if ((int)uVar24 != iVar11) {
        bVar1 = (int)uVar24 < iVar11;
      }
      puVar7 = unaff_x20 + uVar13;
      if (!bVar1) {
        do {
          puVar9 = puVar8;
          *puVar7 = uVar24;
          if ((long)uVar16 < (long)uVar23) break;
          uVar18 = uVar23 << 1 | 1;
          puVar7 = unaff_x20 + uVar18;
          uVar3 = uVar23 * 2 + 2;
          uVar19 = *puVar7;
          puVar8 = puVar7;
          uVar24 = uVar19;
          uVar23 = uVar18;
          if ((long)uVar3 < (long)uVar12) {
            uVar24 = puVar7[1];
            bVar1 = (int)(uVar19 >> 0x20) < (int)(uVar24 >> 0x20);
            if ((int)uVar19 != (int)uVar24) {
              bVar1 = (int)uVar19 < (int)uVar24;
            }
            puVar8 = puVar7 + 1;
            uVar23 = uVar3;
            if (!bVar1) {
              puVar8 = puVar7;
              uVar24 = uVar19;
              uVar23 = uVar18;
            }
          }
          bVar1 = (int)(uVar24 >> 0x20) < iVar10;
          if ((int)uVar24 != iVar11) {
            bVar1 = (int)uVar24 < iVar11;
          }
          puVar7 = puVar9;
        } while (!bVar1);
        *puVar9 = uVar21;
      }
    }
    uVar13 = uVar13 - 1;
  } while (-1 < (long)uVar13);
  do {
    if ((long)uVar12 < 2) {
LAB_10bd0a218:
      return;
    }
    uVar16 = *unaff_x20;
    puVar7 = unaff_x20;
    uVar13 = 0;
    do {
      puVar9 = puVar7 + uVar13 + 1;
      uVar18 = *puVar9;
      uVar3 = uVar13 << 1 | 1;
      uVar21 = uVar13 * 2 + 2;
      puVar8 = puVar9;
      uVar24 = uVar18;
      uVar23 = uVar3;
      if ((long)uVar21 < (long)uVar12) {
        uVar24 = puVar7[uVar13 + 2];
        bVar1 = (int)(uVar18 >> 0x20) < (int)(uVar24 >> 0x20);
        if ((int)uVar18 != (int)uVar24) {
          bVar1 = (int)uVar18 < (int)uVar24;
        }
        puVar8 = puVar7 + uVar13 + 2;
        uVar23 = uVar21;
        if (!bVar1) {
          puVar8 = puVar9;
          uVar24 = uVar18;
          uVar23 = uVar3;
        }
      }
      *puVar7 = uVar24;
      puVar7 = puVar8;
      uVar13 = uVar23;
    } while ((long)uVar23 <= (long)(uVar12 - 2 >> 1));
    unaff_x19 = unaff_x19 + -1;
    if (puVar8 == unaff_x19) {
      *puVar8 = uVar16;
    }
    else {
      *puVar8 = *unaff_x19;
      *unaff_x19 = uVar16;
      lVar20 = (long)puVar8 + (8 - (long)unaff_x20) >> 3;
      if (1 < lVar20) {
        uVar13 = lVar20 - 2U >> 1;
        uVar21 = unaff_x20[uVar13];
        uVar16 = *puVar8;
        iVar10 = (int)(uVar16 >> 0x20);
        iVar11 = (int)uVar16;
        bVar1 = (int)(uVar21 >> 0x20) < iVar10;
        if ((int)uVar21 != iVar11) {
          bVar1 = (int)uVar21 < iVar11;
        }
        puVar7 = unaff_x20 + uVar13;
        if (bVar1) {
          do {
            puVar9 = puVar7;
            *puVar8 = uVar21;
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1 >> 1;
            uVar21 = unaff_x20[uVar13];
            bVar1 = (int)(uVar21 >> 0x20) < iVar10;
            if ((int)uVar21 != iVar11) {
              bVar1 = (int)uVar21 < iVar11;
            }
            puVar8 = puVar9;
            puVar7 = unaff_x20 + uVar13;
          } while (bVar1);
          *puVar9 = uVar16;
        }
      }
    }
    uVar12 = uVar12 - 1;
  } while( true );
code_r0x00010bd00548:
  if (((ulong)puVar5 & 1) == 0) {
LAB_10bd0054c:
    FUN_10bd00344(unaff_x20,puVar9,param_3,(uint)param_4 & 1);
    param_4 = 0;
  }
  goto LAB_10bd00374;
}



/* Entry: 10bd00ab8; end: 10bd00b7f;  */

void FUN_10bd00ab8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  int iVar5;
  undefined8 uVar6;
  undefined8 extraout_x9;
  int iVar7;
  uint extraout_w10;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  
  uVar6 = *param_2;
  uVar4 = *param_1;
  iVar7 = (int)((ulong)uVar4 >> 0x20);
  iVar10 = (int)((ulong)uVar6 >> 0x20);
  iVar3 = (int)uVar4;
  iVar5 = (int)uVar6;
  bVar1 = iVar10 < iVar7;
  if (iVar5 != iVar3) {
    bVar1 = iVar5 < iVar3;
  }
  uVar9 = *param_3;
  bVar2 = (int)((ulong)uVar9 >> 0x20) < iVar10;
  if ((int)uVar9 != iVar5) {
    bVar2 = (int)uVar9 < iVar5;
  }
  if (bVar1) {
    if (bVar2) {
      *param_1 = uVar9;
    }
    else {
      *param_1 = uVar6;
      *param_2 = uVar4;
      uVar6 = *param_3;
      bVar1 = (int)((ulong)uVar6 >> 0x20) < iVar7;
      if ((int)uVar6 != iVar3) {
        bVar1 = (int)uVar6 < iVar3;
      }
      if (!bVar1) {
        return;
      }
      *param_2 = uVar6;
    }
    *param_3 = uVar4;
  }
  else if (bVar2) {
    *param_2 = uVar9;
    *param_3 = uVar6;
    func_0x00010bd0a578(*param_2);
    uVar8 = extraout_w10;
    if ((int)extraout_x8 != (int)extraout_x9) {
      uVar8 = (uint)((int)extraout_x8 < (int)extraout_x9);
    }
    if (uVar8 == 1) {
      *param_1 = extraout_x8;
      *param_2 = extraout_x9;
      return;
    }
  }
  return;
}



/* Entry: 10bd00b80; end: 10bd00c1b;  */

void FUN_10bd00b80(void)

{
  undefined8 *in_x3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  
  func_0x00010bd0a9cc();
  FUN_10bd00ab8();
  func_0x00010bd0a578(*in_x3);
  uVar1 = extraout_w10;
  if ((int)extraout_x8 != (int)extraout_x9) {
    uVar1 = (uint)((int)extraout_x8 < (int)extraout_x9);
  }
  if (uVar1 == 1) {
    *unaff_x21 = extraout_x8;
    *in_x3 = extraout_x9;
    func_0x00010bd0a578(*unaff_x21);
    uVar1 = extraout_w10_00;
    if ((int)extraout_x8_00 != (int)extraout_x9_00) {
      uVar1 = (uint)((int)extraout_x8_00 < (int)extraout_x9_00);
    }
    if (uVar1 == 1) {
      *unaff_x19 = extraout_x8_00;
      *unaff_x21 = extraout_x9_00;
      func_0x00010bd0a578(*unaff_x19);
      uVar1 = extraout_w10_01;
      if ((int)extraout_x8_01 != (int)extraout_x9_01) {
        uVar1 = (uint)((int)extraout_x8_01 < (int)extraout_x9_01);
      }
      if (uVar1 == 1) {
        *unaff_x20 = extraout_x8_01;
        *unaff_x19 = extraout_x9_01;
      }
    }
  }
  return;
}



/* Entry: 10bd00c1c; end: 10bd00ce7;  */

void FUN_10bd00c1c(void)

{
  undefined8 *in_x3;
  undefined8 *in_x4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 extraout_x9_02;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  
  func_0x00010bd0a9cc();
  FUN_10bd00b80();
  func_0x00010bd0a578(*in_x4);
  uVar1 = extraout_w10;
  if ((int)extraout_x8 != (int)extraout_x9) {
    uVar1 = (uint)((int)extraout_x8 < (int)extraout_x9);
  }
  if (uVar1 == 1) {
    *in_x3 = extraout_x8;
    *in_x4 = extraout_x9;
    func_0x00010bd0a578(*in_x3);
    uVar1 = extraout_w10_00;
    if ((int)extraout_x8_00 != (int)extraout_x9_00) {
      uVar1 = (uint)((int)extraout_x8_00 < (int)extraout_x9_00);
    }
    if (uVar1 == 1) {
      *unaff_x21 = extraout_x8_00;
      *in_x3 = extraout_x9_00;
      func_0x00010bd0a578(*unaff_x21);
      uVar1 = extraout_w10_01;
      if ((int)extraout_x8_01 != (int)extraout_x9_01) {
        uVar1 = (uint)((int)extraout_x8_01 < (int)extraout_x9_01);
      }
      if (uVar1 == 1) {
        *unaff_x19 = extraout_x8_01;
        *unaff_x21 = extraout_x9_01;
        func_0x00010bd0a578(*unaff_x19);
        uVar1 = extraout_w10_02;
        if ((int)extraout_x8_02 != (int)extraout_x9_02) {
          uVar1 = (uint)((int)extraout_x8_02 < (int)extraout_x9_02);
        }
        if (uVar1 == 1) {
          *unaff_x20 = extraout_x8_02;
          *unaff_x19 = extraout_x9_02;
        }
      }
    }
  }
  return;
}



/* Entry: 10bd00ce8; end: 10bd00e73;  */

void FUN_10bd00ce8(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long lVar4;
  uint extraout_w10;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar13;
  
  func_0x00010bd0a9fc();
  switch(param_2 - param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x00010bd0a578(unaff_x20[-1],1);
    uVar5 = extraout_w10;
    if ((int)extraout_x8 != (int)extraout_x9) {
      uVar5 = (uint)((int)extraout_x8 < (int)extraout_x9);
    }
    if (uVar5 == 1) {
      *unaff_x19 = extraout_x8;
      unaff_x20[-1] = extraout_x9;
    }
    break;
  case 3:
    FUN_10bd00ab8();
    break;
  case 4:
    FUN_10bd00b80();
    break;
  case 5:
    FUN_10bd00c1c();
    break;
  default:
    func_0x00010bd0c184();
    iVar3 = 0;
    lVar4 = 0x18;
    puVar10 = unaff_x19 + 3;
    puVar13 = unaff_x19 + 2;
    while (puVar7 = puVar10, puVar7 != unaff_x20) {
      uVar8 = *puVar7;
      uVar11 = *puVar13;
      iVar9 = (int)((ulong)uVar8 >> 0x20);
      iVar6 = (int)uVar8;
      bVar1 = iVar9 < (int)((ulong)uVar11 >> 0x20);
      if (iVar6 != (int)uVar11) {
        bVar1 = iVar6 < (int)uVar11;
      }
      lVar12 = lVar4;
      if (bVar1) {
        do {
          *(undefined8 *)((long)unaff_x19 + lVar12) = uVar11;
          lVar2 = lVar12 + -8;
          puVar10 = unaff_x19;
          if (lVar2 == 0) goto LAB_10bd00e1c;
          uVar11 = *(undefined8 *)((long)unaff_x19 + lVar12 + -0x10);
          bVar1 = iVar9 < (int)((ulong)uVar11 >> 0x20);
          if (iVar6 != (int)uVar11) {
            bVar1 = iVar6 < (int)uVar11;
          }
          lVar12 = lVar2;
        } while (bVar1);
        puVar10 = (undefined8 *)((long)unaff_x19 + lVar2);
LAB_10bd00e1c:
        *puVar10 = uVar8;
        iVar3 = iVar3 + 1;
        if (iVar3 == 8) {
          return;
        }
      }
      lVar4 = lVar4 + 8;
      puVar13 = puVar7;
      puVar10 = puVar7 + 1;
    }
  }
  return;
}



/* Entry: 10bd00e74; end: 10bd00e8b;  */

void FUN_10bd00e74(long param_1)

{
  if (param_1 != 0) {
    FUN_10bcdb950();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd00e8c; end: 10bd00f1b;  */

void FUN_10bd00e8c(void)

{
  char *pcVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010bd0be98();
  if (unaff_x20 != 0) {
    pcVar1 = (char *)*unaff_x19;
    while (unaff_x20 != 0) {
      if (-1 < *pcVar1) {
        func_0x000107c27a18();
      }
      func_0x00010bd0af28();
    }
    func_0x00010bd0a3fc();
  }
  return;
}



/* Entry: 10bd00f1c; end: 10bd00f43;  */

/* WARNING: Possible PIC construction at 0x00010bd00f30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd00f34) */

long FUN_10bd00f1c(long param_1)

{
  func_0x000100292090(param_1 + 0x18);
  func_0x0001002920c4();
  return param_1;
}



/* Entry: 10bd00f44; end: 10bd02293;  */

void FUN_10bd00f44(long param_1,undefined ******param_2,uint param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined ****ppppuVar3;
  ulong uVar4;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  undefined *****pppppuVar10;
  ulong *puVar11;
  int *piVar12;
  undefined ******ppppppuVar13;
  ulong uVar14;
  undefined ******ppppppuVar15;
  undefined8 uVar16;
  undefined *****pppppuVar17;
  undefined1 *puVar18;
  undefined1 **ppuVar19;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long lVar20;
  undefined ******extraout_x8_01;
  undefined ******ppppppuVar21;
  long *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long *plVar22;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  ulong extraout_x8_12;
  ulong extraout_x8_13;
  ulong extraout_x8_14;
  ulong extraout_x8_15;
  undefined8 extraout_x8_16;
  undefined8 *extraout_x8_17;
  undefined8 *extraout_x8_18;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  uint extraout_w9_02;
  uint extraout_w9_03;
  uint extraout_w9_04;
  uint extraout_w9_05;
  long *extraout_x9;
  ulong uVar23;
  long *extraout_x9_00;
  ulong extraout_x9_01;
  undefined8 extraout_x9_02;
  long lVar24;
  undefined ******extraout_x10;
  undefined ******extraout_x10_00;
  undefined8 extraout_x10_01;
  undefined1 *extraout_x10_02;
  undefined1 *extraout_x10_03;
  undefined ******extraout_x11;
  long *extraout_x11_00;
  undefined8 extraout_x12;
  undefined *****extraout_x13;
  undefined8 extraout_x13_00;
  long *unaff_x19;
  undefined ******unaff_x20;
  undefined ******ppppppuVar25;
  ulong uVar26;
  undefined ******ppppppuVar27;
  ulong unaff_x21;
  int iVar28;
  ulong uVar29;
  undefined8 *puVar30;
  long lVar31;
  undefined ******ppppppuVar32;
  long lVar33;
  float fVar34;
  undefined8 in_stack_00000070;
  undefined1 auStack_328 [40];
  undefined *****pppppuStack_300;
  undefined1 *puStack_2f8;
  undefined1 *puStack_2f0;
  undefined *****pppppuStack_2e8;
  undefined8 **ppuStack_2e0;
  code *pcStack_2d8;
  undefined1 auStack_2c8 [24];
  undefined1 auStack_2b0 [24];
  undefined1 *apuStack_298 [6];
  undefined1 auStack_268 [48];
  undefined1 *puStack_238;
  undefined *****pppppuStack_1d0;
  ulong uStack_1c8;
  undefined *****pppppuStack_1c0;
  undefined *****pppppuStack_1b8;
  undefined8 *puStack_1b0;
  code *pcStack_1a8;
  undefined ****ppppuStack_190;
  undefined8 *puStack_188;
  undefined *****pppppuStack_180;
  undefined *****pppppuStack_178;
  ulong *puStack_170;
  uint uStack_168;
  int iStack_164;
  undefined *****pppppuStack_160;
  int iStack_154;
  ulong uStack_150;
  long lStack_148;
  undefined *****pppppuStack_138;
  ulong uStack_130;
  undefined ****ppppuStack_128;
  undefined8 uStack_120;
  undefined ****ppppuStack_110;
  ulong uStack_108;
  byte bStack_f9;
  undefined *****pppppuStack_f8;
  undefined *****pppppuStack_f0;
  undefined8 uStack_e8;
  undefined *****pppppuStack_e0;
  undefined *****pppppuStack_d8;
  undefined *****pppppuStack_d0;
  undefined1 auStack_c8 [16];
  undefined **ppuStack_b8;
  long lStack_b0;
  undefined *****pppppuStack_a8;
  undefined *****pppppuStack_a0;
  undefined *****pppppuStack_98;
  undefined8 uStack_90;
  undefined *****pppppuStack_70;
  undefined *****pppppuStack_68;
  undefined *****pppppuStack_60;
  undefined8 uStack_58;
  undefined *****pppppuStack_40;
  
  uStack_168 = param_3;
  func_0x000107c3a6a4();
  ppppppuVar13 = param_2;
  func_0x000107c3a650();
  pppppuStack_160 = ppppppuVar13[9];
  ppppppuVar32 = (undefined ******)ppppppuVar13[10];
  puVar30 = (undefined8 *)(param_1 + 8);
  *puVar30 = ppppppuVar13;
  pppppuStack_138 = (undefined *****)ppppppuVar32;
  func_0x00010bd0b0e0();
  func_0x00010bd0ad40();
  ppppppuVar27 = param_2;
  if (param_1 == 0) {
    func_0x00010bd0a968();
    FUN_10bdb2a08(&pppppuStack_40);
    func_0x00010bd0bfd4();
  }
  else {
    func_0x00010bd0b0e0();
    FUN_10bd1cac8(ppppppuVar13,ppppppuVar32,param_1);
    ppppppuVar13 = param_2 + 6;
    func_0x000107c28bb4(&uStack_150);
    pppppuStack_40 = (undefined *****)CONCAT44(pppppuStack_40._4_4_,*(undefined4 *)(param_1 + 4));
    puVar11 = &uStack_150;
    func_0x00010bd0beb0();
    func_0x00010bd0c210();
    func_0x00010bd0ad40();
    if (puVar11 != (ulong *)0x0) {
      func_0x00010bd0c210();
      ppppppuVar25 = (undefined ******)pppppuStack_160;
      FUN_10bd1d250(ppppppuVar13,pppppuStack_160,puVar11);
      iStack_164 = (int)ppppppuVar13;
      iStack_154 = 0;
      puStack_170 = puVar11;
LAB_10bd01000:
      ppppppuVar27 = (undefined ******)&UNK_10f830393;
      in_OV = SBORROW4(iStack_154,iStack_164);
      in_NG = iStack_154 - iStack_164 < 0;
      in_ZR = iStack_154 == iStack_164;
      if (iStack_164 <= iStack_154) goto LAB_10bd01b74;
      piVar12 = &iStack_154;
      func_0x000107c284b4(&uStack_150);
      func_0x00010bd0c210();
      ppppppuVar25 = (undefined ******)pppppuStack_160;
      func_0x00010bd203bc(piVar12,pppppuStack_160,puStack_170,iStack_154);
      unaff_x19[2] = (long)piVar12;
      if (piVar12[8] == 0) {
        if ((uStack_168 & 1) != 0) goto LAB_10bd01b24;
        func_0x00010bd0a6f8();
        goto LAB_10bd01f24;
      }
      plVar22 = (long *)(piVar12 + 6);
      func_0x00010bd0b15c(*plVar22);
      if (!(bool)in_ZR) {
        plVar22 = extraout_x9;
      }
      ppppppuVar13 = (undefined ******)(*(ulong *)(*plVar22 + 0x18) & 0xfffffffffffffffc);
      ppppppuVar25 = ppppppuVar27;
      func_0x000107c27cf4();
      if ((int)ppppppuVar13 != 0) {
        if ((uStack_168 & 1) == 0) {
          func_0x00010bd0a6f8();
          goto LAB_10bd01f24;
        }
        goto LAB_10bd01b24;
      }
      func_0x00010bd0af0c();
      uVar8 = (uint)*(byte *)(*extraout_x8_00 + 0x20);
      in_OV = SBORROW4(uStack_168,uVar8);
      in_NG = (int)(uStack_168 - uVar8) < 0;
      in_ZR = uStack_168 == uVar8;
      if ((bool)in_ZR) goto LAB_10bd01b24;
      ppppppuVar25 = (undefined ******)*unaff_x19;
      func_0x00010bd0b0e0();
      func_0x00010bd0aa90(ppppppuVar13[1]);
      FUN_10bcf5bc4();
      ppppppuVar27 = ppppppuVar13;
      func_0x00010bd0adc4();
      if ((!(bool)in_ZR) &&
         (func_0x00010bd0b0e0(), ppppppuVar13 = ppppppuVar27, ppppppuVar27 == (undefined ******)0x0)
         ) {
        func_0x00010bd0a968();
        FUN_10bdb2a88(&pppppuStack_40);
LAB_10bd01eec:
        func_0x00010ae6c700();
        ppppppuVar27 = ppppppuVar25;
code_r0x00010bd01ef0:
        pppppuStack_40 = (undefined *****)&pppppuStack_d0;
        func_0x00010bd0a430();
        goto LAB_10bd01f14;
      }
      pppppuStack_e0 = (undefined *****)0x0;
      pppppuStack_f8 = (undefined *****)0x0;
      pppppuStack_f0 = (undefined *****)0x0;
      uStack_e8 = 0;
      pppppuStack_d8 = (undefined *****)ppppppuVar13;
      func_0x00010bd0b5a0(&ppppuStack_110);
      func_0x000107c278b8();
      ppppppuVar15 = param_2 + 6;
      func_0x000107c28bb4(&ppppuStack_128);
      lVar31 = 0;
      lVar33 = 8;
      while( true ) {
        ppppppuVar27 = (undefined ******)pppppuStack_e0;
        ppppppuVar21 = (undefined ******)pppppuStack_f8;
        lVar20 = (long)*(int *)(unaff_x19[2] + 0x20);
        in_OV = SBORROW8(lVar31,lVar20);
        in_NG = lVar31 - lVar20 < 0;
        in_ZR = lVar31 == lVar20;
        if (lVar20 <= lVar31) break;
        ppppppuVar27 = (undefined ******)(*unaff_x19 + 0x138);
        func_0x000107c27fa8();
        lVar20 = unaff_x19[2];
        uVar23 = *(ulong *)(lVar20 + 0x18);
        lVar24 = uVar23 - 1;
        uVar23 = uVar23 & 1;
        puVar11 = (ulong *)(lVar20 + 0x18);
        if (uVar23 != 0) {
          puVar11 = (ulong *)(lVar24 + lVar33);
        }
        uVar26 = *(ulong *)(*puVar11 + 0x18);
        uVar14 = uStack_108;
        if (-1 < (char)bStack_f9) {
          uVar14 = (ulong)bStack_f9;
        }
        if (uVar14 != 0) {
          func_0x00010bd0a408();
          pppppuStack_40 = (undefined *****)ppppppuVar27;
          func_0x00010bd0bea4();
          lVar20 = unaff_x19[2];
          uVar23 = *(ulong *)(lVar20 + 0x18) & 1;
          lVar24 = *(ulong *)(lVar20 + 0x18) - 1;
        }
        ppppppuVar27 = (undefined ******)(uVar26 & 0xfffffffffffffffc);
        plVar22 = (long *)(lVar20 + 0x18);
        if (uVar23 != 0) {
          plVar22 = (long *)(lVar24 + lVar33);
        }
        uVar8 = (uint)*(byte *)(*plVar22 + 0x20);
        cVar5 = SBORROW4(uVar8,1);
        cVar6 = (int)(uVar8 - 1) < 0;
        uVar7 = uVar8 == 1;
        if ((bool)uVar7) {
          ppppppuVar25 = (undefined ******)&DAT_10f68e8ec;
          func_0x000107c284bc();
          pppppuStack_40 = (undefined *****)ppppppuVar25;
          func_0x00010bd0a5b4();
          pppppuStack_70 = (undefined *****)extraout_x10;
          pppppuStack_68 = (undefined *****)extraout_x11;
          if (cVar6 == cVar5) {
            pppppuStack_70 = (undefined *****)ppppppuVar27;
            pppppuStack_68 = (undefined *****)extraout_x8_01;
          }
          func_0x00010bd0bf1c();
          pppppuStack_a0 = (undefined *****)ppppppuVar25;
          pppppuStack_98 = (undefined *****)ppppppuVar15;
          func_0x00010ae8c9e4(&ppppuStack_110,&pppppuStack_40,&pppppuStack_70,&pppppuStack_a0);
          ppppppuVar21 = (undefined ******)*unaff_x19;
          ppppppuVar15 = ppppppuVar27;
          func_0x00010bd0bee4();
          func_0x00010bd0c5b0();
          pppppuStack_e0 = (undefined *****)ppppppuVar21;
          ppppppuVar25 = ppppppuVar13;
          if ((bool)uVar7) goto LAB_10bd01224;
          pppppuStack_e0 = (undefined *****)0x0;
          ppppppuVar13 = ppppppuVar21;
LAB_10bd013bc:
          plVar22 = (long *)*unaff_x19;
          uVar8 = (uint)*(byte *)(*plVar22 + 0x32);
          in_OV = SBORROW4(uVar8,1);
          in_NG = (int)(uVar8 - 1) < 0;
          in_ZR = uVar8 == 1;
          if ((bool)in_ZR) {
LAB_10bd013d0:
            ppppppuVar25 = (undefined ******)unaff_x19[2];
            func_0x00010bd0b0e0();
            func_0x00010bd0ad40();
            if (ppppppuVar13 != (undefined ******)0x0) {
              func_0x00010bd0b0e0();
              FUN_10bd20468(ppppppuVar15,ppppppuVar32,ppppppuVar13,0);
              FUN_10bd2b348();
              goto LAB_10bd01b10;
            }
            func_0x00010bd0a968();
            FUN_10bdb2a88(&pppppuStack_40);
            goto LAB_10bd01eec;
          }
          lVar31 = (long)*(char *)((long)plVar22 + 0x14f);
          if (lVar31 < 0) {
            lVar31 = plVar22[0x28];
          }
          pppppuStack_40 = &ppppuStack_110;
          if (lVar31 == 0) {
            func_0x00010bd0a6f8();
          }
          else {
            func_0x00010bd0a6f8();
          }
          goto LAB_10bd01f18;
        }
        func_0x00010bd0a5b4();
        pppppuStack_40 = (undefined *****)extraout_x10_00;
        if (cVar6 == cVar5) {
          pppppuStack_40 = (undefined *****)ppppppuVar27;
        }
        func_0x00010bd0bea4();
        if ((char)*(byte *)((long)ppppppuVar27 + 0x17) < '\0') {
          ppppppuVar27 = (undefined ******)*ppppppuVar27;
        }
        ppppppuVar15 = ppppppuVar27;
        FUN_10bcee480();
        pppppuStack_e0 = (undefined *****)ppppppuVar13;
        ppppppuVar25 = (undefined ******)pppppuStack_d8;
        if (ppppppuVar13 == (undefined ******)0x0) goto LAB_10bd013bc;
LAB_10bd01224:
        ppppppuVar21 = (undefined ******)pppppuStack_e0[4];
        in_OV = SBORROW8((long)ppppppuVar21,(long)ppppppuVar25);
        in_NG = (long)ppppppuVar21 - (long)ppppppuVar25 < 0;
        in_ZR = ppppppuVar21 == ppppppuVar25;
        if (!(bool)in_ZR) {
          if ((ppppppuVar21 != (undefined ******)0x0) &&
             (ppppppuVar13 = (undefined ******)pppppuStack_e0, ((ulong)*ppppppuVar21 & 0x100) != 0))
          goto LAB_10bd013d0;
          pppppuStack_40 = &ppppuStack_110;
          func_0x00010bd0a6f8();
          goto LAB_10bd01f18;
        }
        pppppuStack_40 =
             (undefined *****)
             CONCAT44(pppppuStack_40._4_4_,*(undefined4 *)((long)pppppuStack_e0 + 4));
        func_0x00010bd0beb0(&ppppuStack_128);
        pppppuVar10 = (undefined *****)pppppuStack_e0[2];
        pppppuVar17 = *(undefined ******)(*unaff_x19 + 0xa8);
        lVar20 = unaff_x19[2];
        in_OV = SBORROW8((long)pppppuVar10,(long)pppppuVar17);
        in_NG = (long)pppppuVar10 - (long)pppppuVar17 < 0;
        in_ZR = pppppuVar10 == pppppuVar17;
        if ((bool)in_ZR) {
          func_0x00010bd0af0c();
          uVar8 = (uint)*(undefined8 *)(*extraout_x8_02 + 0x18) & 0xfffffffc;
          ppppppuVar15 = (undefined ******)&DAT_10f2dd3d4;
          func_0x000107c27cf4();
          lVar20 = unaff_x19[2];
          if (uVar8 != 0) {
            func_0x00010bd0c480();
            plVar22 = extraout_x9_00;
            if (!(bool)in_ZR) {
              plVar22 = extraout_x11_00;
            }
            lVar20 = extraout_x8_03;
            if ((*(byte *)(*plVar22 + 0x20) & 1) == 0) {
              pppppuStack_40 = &ppppuStack_110;
              func_0x00010bd0a6f8();
              goto LAB_10bd01f18;
            }
          }
        }
        if (lVar31 < (long)*(int *)(lVar20 + 0x20) + -1) {
          ppppppuVar13 = (undefined ******)pppppuStack_e0;
          func_0x00010b91adc8();
          iVar9 = (int)ppppppuVar13;
          in_OV = SBORROW4(iVar9,10);
          in_NG = iVar9 + -10 < 0;
          in_ZR = iVar9 == 10;
          if (!(bool)in_ZR) {
            pppppuStack_40 = &ppppuStack_110;
            func_0x00010bd0a6f8();
            goto LAB_10bd01f18;
          }
          if ((*(byte *)((long)pppppuStack_e0 + 1) >> 5 & 1) != 0) {
            pppppuStack_40 = &ppppuStack_110;
            func_0x00010bd0a6f8();
            goto LAB_10bd01f18;
          }
          ppppppuVar15 = &pppppuStack_e0;
          FUN_10bce036c(&pppppuStack_f8);
          ppppppuVar25 = (undefined ******)pppppuStack_e0;
          FUN_10bcee28c();
          pppppuStack_d8 = (undefined *****)ppppppuVar25;
        }
        lVar31 = lVar31 + 1;
        lVar33 = lVar33 + 8;
        ppppppuVar13 = ppppppuVar25;
      }
      ppppppuVar25 = ppppppuVar15;
      if ((*(byte *)((long)pppppuStack_e0 + 1) >> 5 & 1) == 0) {
        func_0x00010bd0b0e0();
        FUN_10bd1b89c(ppppppuVar15,ppppppuVar32);
        plVar22 = unaff_x19;
        FUN_10bcfcea4();
        ppppppuVar25 = ppppppuVar21;
        if (((ulong)plVar22 & 1) != 0) goto LAB_10bd01334;
        goto LAB_10bd01f18;
      }
LAB_10bd01334:
      uVar14 = 0x18;
      pppppuStack_180 = (undefined *****)param_2;
      pppppuStack_178 = (undefined *****)ppppppuVar32;
      __Znwm();
      uVar23 = uVar14;
      func_0x000107c3a6e8();
      ppppppuVar13 = (undefined ******)pppppuStack_e0;
      pppppuStack_d0 = pppppuStack_e0;
      unaff_x20 = (undefined ******)pppppuStack_e0;
      uStack_130 = uVar23;
      func_0x00010b91adc8();
      iVar9 = (int)unaff_x20 + -1;
      in_OV = SBORROW4(iVar9,9);
      in_NG = (int)unaff_x20 + -10 < 0;
      in_ZR = iVar9 == 9;
      ppppppuVar32 = (undefined ******)pppppuStack_f0;
      ppppppuVar15 = (undefined ******)pppppuStack_178;
      switch(iVar9) {
      case 0:
        func_0x00010bd0c5e0();
        if ((extraout_w9 >> 3 & 1) == 0) {
          if ((extraout_w9 >> 4 & 1) == 0) {
            pppppuStack_40 = (undefined *****)&pppppuStack_d0;
            func_0x00010bd0a430();
          }
          else {
            param_2 = *(undefined *******)(extraout_x8_04 + 0x50);
            in_OV = SBORROW8((long)param_2,-0x80000001);
            in_NG = (long)((long)param_2 + 0x80000001) < 0;
            in_ZR = param_2 == (undefined ******)0xffffffff7fffffff;
            if (-0x80000001 < (long)param_2) {
              uVar8 = *(uint *)((long)ppppppuVar13 + 4);
              func_0x00010bd0b4d8();
              ppppppuVar27 = param_2;
              goto code_r0x00010bd016ec;
            }
            pppppuStack_40 = (undefined *****)&pppppuStack_d0;
            func_0x00010bd0a430();
          }
        }
        else {
          param_2 = *(undefined *******)(extraout_x8_04 + 0x48);
          if ((ulong)param_2 >> 0x1f == 0) {
            uVar8 = *(uint *)((long)ppppppuVar13 + 4);
            func_0x00010bd0b4d8();
            ppppppuVar27 = param_2;
code_r0x00010bd016ec:
            ppppppuVar25 = (undefined ******)(ulong)uVar8;
            iVar9 = (int)unaff_x20;
            iVar28 = (int)ppppppuVar27;
            if (iVar9 != 0x11) {
              if (iVar9 == 0xf) goto code_r0x00010bd01800;
              in_OV = SBORROW4(iVar9,5);
              in_NG = iVar9 + -5 < 0;
              in_ZR = iVar9 == 5;
              if ((bool)in_ZR) {
                ppppppuVar27 = (undefined ******)(long)iVar28;
                goto code_r0x00010bd017b8;
              }
              func_0x00010bd0a968();
              FUN_10bdb2a00(&pppppuStack_40);
              func_0x00010b4bf630();
              ppppppuVar13 = unaff_x20;
              FUN_10bcfd07c();
              goto LAB_10bd02264;
            }
            ppppppuVar27 = (undefined ******)(ulong)(uint)(iVar28 << 1 ^ iVar28 >> 0x1f);
            goto code_r0x00010bd017b8;
          }
          pppppuStack_40 = (undefined *****)&pppppuStack_d0;
          func_0x00010bd0a430();
        }
        break;
      case 1:
        func_0x00010bd0c5e0();
        iVar9 = (int)unaff_x20;
        if ((extraout_w9_03 >> 3 & 1) == 0) {
          if ((extraout_w9_03 >> 4 & 1) != 0) {
            uVar8 = *(uint *)((long)ppppppuVar13 + 4);
            ppppppuVar27 = *(undefined *******)(extraout_x8_08 + 0x50);
            func_0x00010bd0b4d8();
code_r0x00010bd01720:
            ppppppuVar25 = (undefined ******)(ulong)uVar8;
            if (iVar9 != 3) {
              if (iVar9 == 0x10) goto code_r0x00010bd017dc;
              in_OV = SBORROW4(iVar9,0x12);
              in_NG = iVar9 + -0x12 < 0;
              in_ZR = iVar9 == 0x12;
              if ((bool)in_ZR) {
                ppppppuVar27 = (undefined ******)
                               ((long)ppppppuVar27 << 1 ^ (long)ppppppuVar27 >> 0x3f);
                goto code_r0x00010bd017b8;
              }
              func_0x00010bd0a968();
              FUN_10bdb2a00(&pppppuStack_40);
              ppppppuVar13 = (undefined ******)&UNK_10f832df6;
              func_0x00010b4bf630();
              func_0x00010bd0bf90();
              unaff_x20 = ppppppuVar27;
              ppppppuVar27 = param_2;
              goto LAB_10bd02264;
            }
            goto code_r0x00010bd017b8;
          }
          pppppuStack_40 = (undefined *****)&pppppuStack_d0;
          func_0x00010bd0a430();
        }
        else {
          ppppppuVar27 = *(undefined *******)(extraout_x8_08 + 0x48);
          if (-1 < (long)ppppppuVar27) {
            uVar8 = *(uint *)((long)ppppppuVar13 + 4);
            func_0x00010bd0b4d8();
            goto code_r0x00010bd01720;
          }
          pppppuStack_40 = (undefined *****)&pppppuStack_d0;
          func_0x00010bd0a430();
        }
        break;
      case 2:
        func_0x00010bd0c5ec();
        iVar9 = (int)unaff_x20;
        if ((extraout_w9_01 >> 3 & 1) == 0) {
          pppppuStack_40 = (undefined *****)&pppppuStack_d0;
          func_0x00010bd0a430();
        }
        else {
          ppppppuVar27 = *(undefined *******)(extraout_x8_06 + 0x48);
          if ((ulong)ppppppuVar27 >> 0x20 == 0) {
            ppppppuVar25 = (undefined ******)(ulong)*(uint *)((long)ppppppuVar13 + 4);
            func_0x00010bd0b4d8();
            if (iVar9 == 7) goto code_r0x00010bd01800;
            in_OV = SBORROW4(iVar9,0xd);
            in_NG = iVar9 + -0xd < 0;
            in_ZR = iVar9 == 0xd;
            if ((bool)in_ZR) goto code_r0x00010bd017b8;
            func_0x00010bd0a968();
            FUN_10bdb2a00(&pppppuStack_40);
            ppppppuVar13 = (undefined ******)&UNK_10f832e1c;
            func_0x00010b4d184c();
            func_0x00010bd0bf90();
            unaff_x20 = ppppppuVar27;
            ppppppuVar27 = param_2;
            goto LAB_10bd02264;
          }
          pppppuStack_40 = (undefined *****)&pppppuStack_d0;
          func_0x00010bd0a430();
        }
        break;
      case 3:
        func_0x00010bd0c5ec();
        iVar9 = (int)unaff_x20;
        if ((extraout_w9_02 >> 3 & 1) != 0) {
          ppppppuVar25 = (undefined ******)(ulong)*(uint *)((long)ppppppuVar13 + 4);
          ppppppuVar27 = *(undefined *******)(extraout_x8_07 + 0x48);
          func_0x00010bd0b4d8();
          if (iVar9 == 4) goto code_r0x00010bd017b8;
          in_OV = SBORROW4(iVar9,6);
          in_NG = iVar9 + -6 < 0;
          if (iVar9 == 6) goto code_r0x00010bd017dc;
          in_ZR = 0;
          goto code_r0x00010bd02078;
        }
        pppppuStack_40 = (undefined *****)&pppppuStack_d0;
        func_0x00010bd0a430();
        break;
      case 4:
        func_0x00010bd0c5e0();
        if ((extraout_w9_00 >> 5 & 1) == 0) {
          if ((extraout_w9_00 >> 3 & 1) == 0) {
            if ((extraout_w9_00 >> 4 & 1) == 0) goto code_r0x00010bd01ef0;
            ppppppuVar27 = (undefined ******)(double)*(long *)(extraout_x8_05 + 0x50);
          }
          else {
            ppppppuVar27 = (undefined ******)NEON_ucvtf(*(undefined8 *)(extraout_x8_05 + 0x48));
          }
        }
        else {
          ppppppuVar27 = *(undefined *******)(extraout_x8_05 + 0x58);
        }
        ppppppuVar25 = (undefined ******)(ulong)*(uint *)((long)ppppppuVar13 + 4);
code_r0x00010bd017dc:
        func_0x00010bd36a60(uVar14,ppppppuVar25,ppppppuVar27);
        ppppppuVar32 = (undefined ******)pppppuStack_f0;
        ppppppuVar15 = (undefined ******)pppppuStack_178;
      default:
LAB_10bd01898:
        while (param_2 = ppppppuVar15, ppppppuVar32 != (undefined ******)pppppuStack_f8) {
          ppppppuVar25 = (undefined ******)0x18;
          __Znwm();
          ppppppuVar13 = ppppppuVar25;
          func_0x000107c3a6e8();
          ppppppuVar27 = ppppppuVar32 + -1;
          iVar9 = (int)*ppppppuVar27;
          pppppuStack_70 = (undefined *****)ppppppuVar13;
          func_0x00010787827c();
          if (iVar9 == 10) {
            func_0x00010bd36ac4(ppppppuVar25,*(undefined4 *)((long)*ppppppuVar27 + 4));
            FUN_10bd36884();
          }
          else {
            in_OV = SBORROW4(iVar9,0xb);
            in_NG = iVar9 + -0xb < 0;
            in_ZR = iVar9 == 0xb;
            if (!(bool)in_ZR) {
              func_0x00010bd0a968();
              FUN_10bdb2a00(&pppppuStack_40);
              FUN_10bcfd050();
              pppppuVar10 = ppppppuVar32[-1];
              func_0x00010787827c(pppppuVar10);
              FUN_10bcfd07c(&pppppuStack_40,pppppuVar10);
              goto LAB_10bd01eec;
            }
            ppppppuVar13 = ppppppuVar25;
            FUN_10bd36a90(ppppppuVar25,*(undefined4 *)((long)*ppppppuVar27 + 4));
            uVar23 = uStack_130;
            FUN_10bd36c30(uStack_130,ppppppuVar13);
            if ((uVar23 & 1) == 0) {
              func_0x00010bd0a968();
              FUN_10bdb2a08(&pppppuStack_40);
              func_0x00010ae6bd08();
              func_0x00010ae6c448(&pppppuStack_40,&ppppuStack_110);
              ppppppuVar13 = (undefined ******)&UNK_10f830b29;
              FUN_10bcf57f4();
              unaff_x20 = ppppppuVar25;
              ppppppuVar27 = param_2;
              goto LAB_10bd02264;
            }
          }
          pppppuStack_70 = (undefined *****)0x0;
          FUN_10bd09244(&uStack_130);
          func_0x00010bd09224(&pppppuStack_70);
          ppppppuVar32 = ppppppuVar27;
          ppppppuVar15 = param_2;
        }
        FUN_10bd2b4f4(param_2);
        func_0x00010bd1b8b8(ppppppuVar25,pppppuStack_178);
        FUN_10bd36884();
        uVar23 = unaff_x21;
        puStack_188 = puVar30;
        if ((*(byte *)((long)pppppuStack_e0 + 1) >> 5 & 1) != 0) {
          Hint_Prefetch(unaff_x19[7],0,2,0);
          pppppuVar10 = &ppppuStack_128;
          func_0x00010bd092dc(unaff_x19[7]);
          uVar16 = uStack_120;
          ppppuVar3 = ppppuStack_128;
          lVar31 = 0;
          uVar14 = unaff_x19[9];
          uVar23 = (ulong)unaff_x19[7] >> 0xc ^ (ulong)pppppuVar10 >> 7;
          while( true ) {
            uVar23 = uVar23 & uVar14;
            func_0x000107c3a6b8();
            for (uVar26 = extraout_x8_12 & 0x8080808080808080; uVar26 != 0;
                uVar26 = uVar26 - 1 & uVar26) {
              uVar29 = (uVar26 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                       (uVar26 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
              lVar33 = unaff_x19[8];
              plVar22 = (long *)(uVar23 + ((ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3) &
                                uVar14);
              puVar11 = (ulong *)(lVar33 + (long)plVar22 * 0x20);
              uVar29 = *puVar11;
              ppppuStack_190 = (undefined ****)pppppuVar10;
              FUN_10bd09318(uVar29,puVar11[1],ppppuVar3,uVar16);
              if ((uVar29 & 1) != 0) goto LAB_10bd01a20;
              pppppuVar10 = (undefined *****)ppppuStack_190;
            }
            func_0x000107c3a674();
            if ((extraout_x8_13 & 1) != 0) break;
            lVar31 = lVar31 + 8;
            uVar23 = lVar31 + uVar23;
          }
          plVar22 = unaff_x19 + 7;
          func_0x00010bd0926c();
          lVar31 = unaff_x19[8] + (long)plVar22 * 0x20;
          func_0x000107c28bb4(lVar31,&ppppuStack_128);
          *(undefined4 *)(lVar31 + 0x18) = 0;
          lVar33 = unaff_x19[8];
LAB_10bd01a20:
          lVar33 = lVar33 + (long)plVar22 * 0x20;
          iVar9 = *(int *)(lVar33 + 0x18);
          *(int *)(lVar33 + 0x18) = iVar9 + 1;
          pppppuStack_40 = (undefined *****)CONCAT44(pppppuStack_40._4_4_,iVar9);
          func_0x000107c284b4(&ppppuStack_128,&pppppuStack_40);
        }
        Hint_Prefetch(unaff_x19[3],0,2,0);
        puVar11 = &uStack_150;
        func_0x00010bd092dc(unaff_x19[3]);
        lVar33 = lStack_148;
        uVar26 = uStack_150;
        lVar31 = 0;
        uVar29 = unaff_x19[5];
        uVar14 = (ulong)unaff_x19[3] >> 0xc ^ (ulong)puVar11 >> 7;
        while( true ) {
          uVar14 = uVar14 & uVar29;
          func_0x000107c3a6b8();
          uVar4 = extraout_x8_14 & 0x8080808080808080;
          pppppuVar17 = extraout_x13;
          pppppuVar10 = (undefined *****)ppppuStack_190;
          while (ppppuStack_190 = (undefined ****)pppppuVar17, unaff_x21 = uVar4, unaff_x21 != 0) {
            uVar23 = (unaff_x21 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                     (unaff_x21 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            lVar20 = unaff_x19[4];
            plVar22 = (long *)(uVar14 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3) &
                              uVar29);
            uVar23 = uVar26;
            FUN_10bd09470(uVar26,lVar33,lVar20 + (long)plVar22 * 0x30);
            puVar30 = puStack_188;
            if ((uVar23 & 1) != 0) goto LAB_10bd01af4;
            pppppuVar17 = (undefined *****)ppppuStack_190;
            uVar23 = unaff_x21;
            pppppuVar10 = (undefined *****)ppppuStack_190;
            uVar4 = unaff_x21 - 1 & unaff_x21;
          }
          ppppuStack_190 = (undefined ****)pppppuVar10;
          func_0x000107c3a674();
          if ((extraout_x8_15 & 1) != 0) break;
          lVar31 = lVar31 + 8;
          uVar14 = lVar31 + uVar14;
        }
        plVar22 = unaff_x19 + 3;
        FUN_10bd09400(plVar22,extraout_x13_00);
        puVar30 = puStack_188;
        lVar31 = unaff_x19[4] + (long)plVar22 * 0x30;
        func_0x000107c28bb4(lVar31,&uStack_150);
        *(undefined8 *)(lVar31 + 0x18) = 0;
        *(undefined8 *)(lVar31 + 0x20) = 0;
        *(undefined8 *)(lVar31 + 0x28) = 0;
        lVar20 = unaff_x19[4];
        unaff_x21 = uVar23;
LAB_10bd01af4:
        ppppppuVar25 = (undefined ******)&ppppuStack_128;
        func_0x00010872611c(lVar20 + (long)plVar22 * 0x30 + 0x18);
        func_0x00010bd0bfb0();
        param_2 = (undefined ******)pppppuStack_180;
        ppppppuVar32 = (undefined ******)pppppuStack_178;
LAB_10bd01b10:
        func_0x00010bd0bfec();
        func_0x00010bd0b868();
        func_0x00010bd0c1bc();
LAB_10bd01b24:
        lStack_148 = lStack_148 + -4;
        iStack_154 = iStack_154 + 1;
        goto LAB_10bd01000;
      case 5:
        func_0x00010bd0c5e0();
        if ((extraout_w9_04 >> 5 & 1) == 0) {
          if ((extraout_w9_04 >> 3 & 1) == 0) {
            if ((extraout_w9_04 >> 4 & 1) == 0) {
              pppppuStack_40 = (undefined *****)&pppppuStack_d0;
              func_0x00010bd0a430();
              break;
            }
            fVar34 = (float)*(long *)(extraout_x8_09 + 0x50);
          }
          else {
            fVar34 = (float)*(ulong *)(extraout_x8_09 + 0x48);
          }
        }
        else {
          fVar34 = (float)*(double *)(extraout_x8_09 + 0x58);
        }
        ppppppuVar25 = (undefined ******)(ulong)*(uint *)((long)ppppppuVar13 + 4);
        ppppppuVar27 = (undefined ******)(ulong)(uint)fVar34;
code_r0x00010bd01800:
        FUN_10bd36a30(uVar14,ppppppuVar25,ppppppuVar27);
        ppppppuVar32 = (undefined ******)pppppuStack_f0;
        ppppppuVar15 = (undefined ******)pppppuStack_178;
        goto LAB_10bd01898;
      case 6:
        func_0x00010bd0c5ec();
        if ((extraout_x9_01 & 1) != 0) {
          uVar23 = *(ulong *)(extraout_x8_10 + 0x30) & 0xfffffffffffffffc;
          func_0x000107c27cf4(uVar23,"true");
          if ((uVar23 & 1) == 0) {
            uVar23 = 0;
            func_0x00010bd0c61c();
            func_0x000107c27cf4();
            if ((uVar23 & 1) == 0) {
              pppppuStack_40 = (undefined *****)&pppppuStack_d0;
              func_0x00010bd0a430();
              break;
            }
            ppppppuVar27 = (undefined ******)0x0;
          }
          else {
            ppppppuVar27 = (undefined ******)0x1;
          }
          ppppppuVar25 = (undefined ******)(ulong)*(uint *)((long)ppppppuVar13 + 4);
code_r0x00010bd017b8:
          FUN_10bd369c4(uVar14,ppppppuVar25,ppppppuVar27);
          ppppppuVar32 = (undefined ******)pppppuStack_f0;
          ppppppuVar15 = (undefined ******)pppppuStack_178;
          goto LAB_10bd01898;
        }
        pppppuStack_40 = (undefined *****)&pppppuStack_d0;
        func_0x00010bd0a430();
        break;
      case 7:
        if ((*(byte *)(unaff_x19[2] + 0x10) & 1) == 0) {
          pppppuStack_40 = (undefined *****)&pppppuStack_d0;
          func_0x00010bd0a430();
        }
        else {
          FUN_10bcefa5c();
          param_2 = *(undefined *******)(unaff_x19[2] + 0x30);
          ppppppuVar25 = (undefined ******)ppppppuVar13[2][3];
          ppppppuVar27 = ppppppuVar13;
          pppppuStack_a0 = (undefined *****)ppppppuVar13;
          FUN_10bcedc88();
          ppppppuVar32 = (undefined ******)((ulong)param_2 & 0xfffffffffffffffc);
          in_OV = SBORROW8((long)ppppppuVar25,(long)ppppppuVar27);
          in_NG = (long)ppppppuVar25 - (long)ppppppuVar27 < 0;
          in_ZR = ppppppuVar25 == ppppppuVar27;
          if ((bool)in_ZR) {
            pppppuVar10 = (undefined *****)(long)*(char *)((long)ppppppuVar32 + 0x17);
            if ((long)pppppuVar10 < 0) {
              pppppuVar10 = ppppppuVar32[1];
              ppppppuVar32 = (undefined ******)*ppppppuVar32;
            }
            ppppppuVar15 = ppppppuVar13;
            FUN_10bcee5b4(ppppppuVar13,ppppppuVar32,pppppuVar10);
            ppppppuVar27 = ppppppuVar13;
          }
          else {
            func_0x00010bd0b6e4(ppppppuVar13[1],&pppppuStack_40);
            func_0x000107c281b8();
            func_0x000107c27fc4(&pppppuStack_40,ppppppuVar32);
            ppppppuVar15 = (undefined ******)*unaff_x19;
            FUN_10bcf5bc4(ppppppuVar15,&pppppuStack_40,1);
            bVar1 = *(byte *)ppppppuVar15;
            if (bVar1 == 5) {
code_r0x00010bd01618:
              ppppppuVar27 = (undefined ******)ppppppuVar15[2];
              in_OV = SBORROW8((long)ppppppuVar27,(long)ppppppuVar13);
              in_NG = (long)ppppppuVar27 - (long)ppppppuVar13 < 0;
              in_ZR = ppppppuVar27 == ppppppuVar13;
              if ((bool)in_ZR) goto code_r0x00010bd01858;
              pppppuStack_70 = (undefined *****)&pppppuStack_a0;
              pppppuStack_68 = (undefined *****)ppppppuVar32;
              pppppuStack_60 = (undefined *****)&pppppuStack_d0;
              func_0x00010bcfd0f4();
              ppppppuVar15 = (undefined ******)0x0;
              ppppppuVar27 = (undefined ******)0x0;
            }
            else {
              in_OV = SBORROW4((uint)bVar1,6);
              in_NG = (int)(bVar1 - 6) < 0;
              if (bVar1 == 6) {
                ppppppuVar15 = (undefined ******)((long)ppppppuVar15 + -1);
                goto code_r0x00010bd01618;
              }
              ppppppuVar15 = (undefined ******)0x0;
              in_ZR = false;
code_r0x00010bd01858:
              ppppppuVar27 = (undefined ******)0x1;
            }
            func_0x00010bd0b18c();
            if ((int)ppppppuVar27 == 0) break;
          }
          if (ppppppuVar15 != (undefined ******)0x0) {
            ppppppuVar25 = (undefined ******)(ulong)*(uint *)((long)pppppuStack_d0 + 4);
            FUN_10bd369c4(uVar14,ppppppuVar25,(long)*(int *)((long)ppppppuVar15 + 4));
            ppppppuVar32 = (undefined ******)pppppuStack_f0;
            ppppppuVar15 = (undefined ******)pppppuStack_178;
            goto LAB_10bd01898;
          }
          pppppuStack_40 = (undefined *****)&pppppuStack_d0;
          func_0x00010bd0a430();
        }
        break;
      case 8:
        func_0x00010bd0c5ec();
        if ((extraout_w9_05 >> 1 & 1) != 0) {
          ppppppuVar25 = (undefined ******)(ulong)*(uint *)((long)ppppppuVar13 + 4);
          FUN_10bcfd104(uVar14,ppppppuVar25,*(ulong *)(extraout_x8_11 + 0x38) & 0xfffffffffffffffc);
          ppppppuVar32 = (undefined ******)pppppuStack_f0;
          ppppppuVar15 = (undefined ******)pppppuStack_178;
          goto LAB_10bd01898;
        }
        pppppuStack_40 = (undefined *****)&pppppuStack_d0;
        func_0x00010bd0a430();
        break;
      case 9:
        pppppuStack_a8 = (undefined *****)ppppppuVar13;
        if ((*(byte *)(unaff_x19[2] + 0x10) >> 2 & 1) == 0) {
          pppppuStack_40 = (undefined *****)&pppppuStack_a8;
          func_0x00010bd0a430();
        }
        else {
          FUN_10bcee28c();
          plVar22 = unaff_x19 + 0xb;
          FUN_10bd18758();
          func_0x00010bd0bf80(*(undefined8 *)(*plVar22 + 0x10));
          if (plVar22 == (long *)0x0) {
            func_0x00010bd0a968();
            ppppppuVar27 = &pppppuStack_70;
            FUN_10bdb2a08(ppppppuVar27);
            func_0x00010bcfd128();
            unaff_x20 = (undefined ******)pppppuStack_a8;
            uVar16 = 0;
            pppppuStack_a0 = (undefined *****)((ulong)pppppuStack_a0 & 0xffffffffff000000);
            pppppuStack_40 = (undefined *****)0x0;
            if ((*(byte *)((long)pppppuStack_a8 + 1) >> 3 & 1) != 0) {
              func_0x00010bd09fdc(pppppuStack_a8[4]);
              uVar16 = extraout_x12;
              uVar2 = extraout_x9_02;
              if (in_NG == in_OV) {
                uVar16 = extraout_x10_01;
                uVar2 = extraout_x8_16;
              }
              FUN_10bcefbcc(&pppppuStack_40,&UNK_10f831b92,0xd,uVar2,uVar16);
              uVar16 = 1;
            }
            FUN_10bcf0dc0(unaff_x20,uVar16,&pppppuStack_40,&pppppuStack_a0);
            if ((*(byte *)((long)unaff_x20 + 1) >> 3 & 1) != 0) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                        (&pppppuStack_40,&DAT_10f38bf4b);
            }
            ppppppuVar13 = &pppppuStack_40;
            func_0x00010ae6c448(ppppppuVar27,ppppppuVar13);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(&pppppuStack_40);
            ppppppuVar32 = &pppppuStack_70;
            func_0x00010ae6c700();
            goto code_r0x00010bd0227c;
          }
          pppppuStack_70 = (undefined *****)&PTR_FUN_110d9ba98;
          pppppuStack_40 = (undefined *****)&pppppuStack_70;
          pppppuStack_60 = (undefined *****)0x0;
          uStack_58 = 0;
          pppppuStack_68 = (undefined *****)0x0;
          lStack_b0 = *unaff_x19;
          ppuStack_b8 = &PTR_FUN_110d9bae0;
          param_2 = &pppppuStack_70;
          func_0x00010bd0b7fc(*(undefined8 *)(unaff_x19[2] + 0x40));
          ppppppuVar27 = &pppppuStack_40;
          FUN_10bd2e230();
          if (((ulong)ppppppuVar27 & 1) == 0) {
            pppppuStack_a0 = (undefined *****)&pppppuStack_a8;
            ppppppuVar25 = &pppppuStack_a0;
            pppppuStack_98 = (undefined *****)param_2;
            func_0x00010bcfd0f4();
          }
          else {
            pppppuStack_a0 = (undefined *****)0x0;
            pppppuStack_98 = (undefined *****)0x0;
            uStack_90 = 0;
            func_0x000107c30364(plVar22,&pppppuStack_a0);
            ppppppuVar13 = (undefined ******)pppppuStack_a8;
            func_0x00010787827c();
            iVar9 = (int)ppppppuVar13;
            in_OV = SBORROW4(iVar9,0xb);
            in_NG = iVar9 + -0xb < 0;
            in_ZR = iVar9 == 0xb;
            if ((bool)in_ZR) {
              ppppppuVar25 = (undefined ******)(ulong)*(uint *)((long)pppppuStack_a8 + 4);
              FUN_10bcfd104(uVar14,ppppppuVar25,&pppppuStack_a0);
            }
            else {
              ppppppuVar13 = (undefined ******)pppppuStack_a8;
              func_0x00010787827c();
              iVar9 = (int)ppppppuVar13;
              in_OV = SBORROW4(iVar9,10);
              in_NG = iVar9 + -10 < 0;
              in_ZR = iVar9 == 10;
              if (!(bool)in_ZR) {
                func_0x00010ae6a960((ulong)ppppppuVar13 & 0xffffffff,10,&UNK_10f832d9c);
                func_0x00010bd0a968();
                FUN_10bdb2a88(auStack_c8);
                func_0x00010ae6c700(auStack_c8);
                goto LAB_10bd02074;
              }
              func_0x00010bd36ac4(uVar14,*(undefined4 *)((long)pppppuStack_a8 + 4));
              ppppppuVar25 = &pppppuStack_a0;
              FUN_10bcfd0d8();
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppuStack_a0);
          }
          FUN_10bcfd158(&pppppuStack_70);
          func_0x00010bd0bbac();
          ppppppuVar32 = (undefined ******)pppppuStack_f0;
          ppppppuVar15 = (undefined ******)pppppuStack_178;
          if (((ulong)ppppppuVar27 & 1) != 0) goto LAB_10bd01898;
        }
      }
LAB_10bd01f14:
      func_0x00010bd0bfb0();
LAB_10bd01f18:
      func_0x00010bd0bfec();
      func_0x00010bd0b868();
      func_0x00010bd0c1bc();
LAB_10bd01f24:
      *puVar30 = 0;
      puVar30[1] = 0;
      uVar7 = in_ZR;
      goto LAB_10bd01f28;
    }
    func_0x00010bd0a968();
    FUN_10bdb2a08(&pppppuStack_40);
    func_0x00010bd0bfd4();
    unaff_x20 = (undefined ******)0x0;
  }
  goto LAB_10bd02264;
LAB_10bd01b74:
  *puVar30 = 0;
  puVar30[1] = 0;
  ppppppuVar27 = ppppppuVar32;
  func_0x00010bd0bf80((*ppppppuVar32)[2]);
  pppppuStack_a0 = (undefined *****)ppppppuVar27;
  func_0x00010bd0b0e0();
  FUN_10bd1beb4(ppppppuVar25,ppppppuVar27,ppppppuVar32);
  pppppuStack_40 = (undefined *****)0x0;
  ppppppuVar13 = ppppppuVar27;
  func_0x000107c30360(ppppppuVar27,&pppppuStack_40);
  if ((int)ppppppuVar13 == 0) {
LAB_10bd01be4:
    pppppuStack_70 = (undefined *****)&pppppuStack_a0;
    pppppuStack_68 = (undefined *****)&pppppuStack_138;
    ppppppuVar13 = param_2 + 3;
    FUN_10bcf56d0(*unaff_x19,ppppppuVar13,pppppuStack_160,0xb,&pppppuStack_70,FUN_10bd02294);
    FUN_10bd2b4f4(pppppuStack_138);
    FUN_10bd1beb4(ppppppuVar13,pppppuStack_a0,pppppuStack_138);
  }
  else {
    in_NG = '\0';
    in_ZR = 1;
    in_OV = '\0';
    func_0x000107c30344(ppppppuVar32,&pppppuStack_40,0);
    if (((ulong)ppppppuVar32 & 1) == 0) goto LAB_10bd01be4;
  }
  func_0x00010bd0b18c();
  pppppuVar10 = pppppuStack_a0;
  pppppuStack_a0 = (undefined *****)0x0;
  uVar7 = in_ZR;
  if ((undefined ******)pppppuVar10 != (undefined ******)0x0) {
    func_0x00010bd0b3f8();
    uVar7 = in_ZR;
  }
LAB_10bd01f28:
  func_0x000107c27a18(&uStack_150);
  func_0x000107c3a64c(extraout_x8);
  in_ZR = 0;
  if ((bool)uVar7) {
    func_0x00010bd0ae04();
    return;
  }
LAB_10bd02074:
  ___stack_chk_fail();
code_r0x00010bd02078:
  func_0x00010bd0a968();
  FUN_10bdb2a00(&pppppuStack_40);
  ppppppuVar13 = (undefined ******)&UNK_10f832e43;
  func_0x00010b4d184c();
  func_0x00010bd0bf90();
  unaff_x20 = ppppppuVar27;
  ppppppuVar27 = param_2;
LAB_10bd02264:
  ppppppuVar32 = &pppppuStack_40;
  func_0x00010ae6c700();
  func_0x00010bd09224(&pppppuStack_70);
  func_0x00010bd0bfb0();
  param_2 = ppppppuVar27;
code_r0x00010bd0227c:
  func_0x00010bd0bfec();
  func_0x00010bd0b868();
  func_0x00010bd0c1bc();
  func_0x000107c27a18(&uStack_150);
  func_0x00010bd0a974();
  pcStack_1a8 = FUN_10bd02294;
  pppppuStack_1d0 = (undefined *****)param_2;
  uStack_1c8 = unaff_x21;
  pppppuStack_1c0 = (undefined *****)unaff_x20;
  pppppuStack_1b8 = (undefined *****)ppppppuVar32;
  puStack_1b0 = &stack0x00000070;
  func_0x00010bd0a10c();
  func_0x000107c284bc(&UNK_10f8331eb);
  func_0x00010bd0b558();
  FUN_10bd2de14(auStack_2b0,*extraout_x8_17);
  func_0x00010bd0abbc();
  puStack_238 = extraout_x10_02;
  if (in_NG == in_OV) {
    puStack_238 = auStack_2b0;
  }
  func_0x000107c284bc(&UNK_10f833260);
  func_0x00010bd0bd3c();
  puVar30 = (undefined8 *)*extraout_x8_18;
  FUN_10bd2de14(auStack_2c8);
  func_0x00010bd0ac0c();
  apuStack_298[0] = extraout_x10_03;
  if (in_NG == in_OV) {
    apuStack_298[0] = auStack_2c8;
  }
  func_0x00010bd0b33c();
  puVar18 = auStack_268;
  ppuVar19 = apuStack_298;
  func_0x00010ae8c6d8(ppppppuVar32);
  func_0x00010bd0aab8();
  func_0x00010bd0aad4();
  func_0x00010bd09ff8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bd0a780();
  func_0x00010bd0aad4();
  func_0x00010bd0a974();
  pcStack_2d8 = FUN_10bd02364;
  pppppuStack_300 = (undefined *****)param_2;
  puStack_2f8 = auStack_2b0;
  puStack_2f0 = auStack_2c8;
  pppppuStack_2e8 = (undefined *****)ppppppuVar32;
  ppuStack_2e0 = &puStack_1b0;
  func_0x00010bd0a9fc(*puVar30,puVar30[1] + 0x18,puVar30[2],ppppppuVar13,puVar18,ppuVar19);
  func_0x00010bd0c084();
  pppppuVar10 = ppppppuVar32[3];
  if (pppppuVar10 == (undefined *****)0x0) {
    if (((ulong)ppppppuVar32[0x11] & 1) == 0) {
      func_0x00010bd0a968();
      func_0x00010bdb2988(auStack_328);
      FUN_10bce1854(auStack_328,&UNK_10f831d50);
      func_0x00010ae6c448();
      FUN_10bcf57f4();
      func_0x00010bd0b678();
    }
    func_0x00010bd0a968();
    func_0x00010bdb2988(auStack_328);
    FUN_10bcf57f4(auStack_328,&DAT_10f4944be);
    func_0x00010ae6c448();
    func_0x00010bd0c054();
    func_0x00010ae6c448();
    func_0x00010bd0b678();
  }
  else {
    pppppuVar17 = (undefined *****)(long)*(char *)((long)ppppppuVar32 + 0xa7);
    if ((long)pppppuVar17 < 0) {
      ppppppuVar13 = (undefined ******)ppppppuVar32[0x12];
      pppppuVar17 = ppppppuVar32[0x13];
    }
    else {
      ppppppuVar13 = ppppppuVar32 + 0x12;
    }
    func_0x00010bd0a5b4(pppppuVar10,ppppppuVar13,pppppuVar17);
    func_0x00010bd0a844();
    (*(code *)(*pppppuVar10)[2])();
  }
  *(undefined1 *)(ppppppuVar32 + 0x11) = 1;
  func_0x00010bd0b1ac();
  return;
}



/* Entry: 10bd02294; end: 10bd02363;  */

void FUN_10bd02294(undefined8 param_1,undefined8 param_2)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *extraout_x10;
  undefined1 *extraout_x10_00;
  long unaff_x19;
  undefined1 auStack_188 [40];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 *apuStack_f8 [6];
  undefined1 auStack_c8 [48];
  undefined1 *puStack_98;
  
  func_0x00010bd0a10c();
  func_0x000107c284bc(&UNK_10f8331eb);
  func_0x00010bd0b558();
  FUN_10bd2de14(auStack_110,*extraout_x8);
  func_0x00010bd0abbc();
  puStack_98 = extraout_x10;
  if (in_NG == in_OV) {
    puStack_98 = auStack_110;
  }
  func_0x000107c284bc(&UNK_10f833260);
  func_0x00010bd0bd3c();
  puVar2 = (undefined8 *)*extraout_x8_00;
  FUN_10bd2de14(auStack_128);
  func_0x00010bd0ac0c();
  apuStack_f8[0] = extraout_x10_00;
  if (in_NG == in_OV) {
    apuStack_f8[0] = auStack_128;
  }
  func_0x00010bd0b33c();
  puVar5 = auStack_c8;
  ppuVar6 = apuStack_f8;
  func_0x00010ae8c6d8();
  func_0x00010bd0aab8();
  func_0x00010bd0aad4();
  func_0x00010bd09ff8();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bd0a780();
    func_0x00010bd0aad4();
    func_0x00010bd0a974();
    func_0x00010bd0a9fc(*puVar2,puVar2[1] + 0x18,puVar2[2],param_2,puVar5,ppuVar6);
    func_0x00010bd0c084();
    plVar1 = *(long **)(unaff_x19 + 0x18);
    if (plVar1 == (long *)0x0) {
      if ((*(byte *)(unaff_x19 + 0x88) & 1) == 0) {
        func_0x00010bd0a968();
        func_0x00010bdb2988(auStack_188);
        FUN_10bce1854(auStack_188,&UNK_10f831d50);
        func_0x00010ae6c448();
        FUN_10bcf57f4();
        func_0x00010bd0b678();
      }
      func_0x00010bd0a968();
      func_0x00010bdb2988(auStack_188);
      FUN_10bcf57f4(auStack_188,&DAT_10f4944be);
      func_0x00010ae6c448();
      func_0x00010bd0c054();
      func_0x00010ae6c448();
      func_0x00010bd0b678();
    }
    else {
      lVar4 = (long)*(char *)(unaff_x19 + 0xa7);
      if (lVar4 < 0) {
        lVar3 = *(long *)(unaff_x19 + 0x90);
        lVar4 = *(long *)(unaff_x19 + 0x98);
      }
      else {
        lVar3 = unaff_x19 + 0x90;
      }
      func_0x00010bd0a5b4(plVar1,lVar3,lVar4);
      func_0x00010bd0a844();
      (**(code **)(*plVar1 + 0x10))();
    }
    *(undefined1 *)(unaff_x19 + 0x88) = 1;
    func_0x00010bd0b1ac();
    return;
  }
  return;
}



/* Entry: 10bd02364; end: 10bd02383;  */

void FUN_10bd02364(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined1 auStack_58 [40];
  
  func_0x00010bd0a9fc(*param_1,param_1[1] + 0x18,param_1[2],param_2,param_3,param_4);
  func_0x00010bd0c084();
  plVar1 = *(long **)(unaff_x19 + 0x18);
  if (plVar1 == (long *)0x0) {
    if ((*(byte *)(unaff_x19 + 0x88) & 1) == 0) {
      func_0x00010bd0a968();
      func_0x00010bdb2988(auStack_58);
      FUN_10bce1854(auStack_58,&UNK_10f831d50);
      func_0x00010ae6c448();
      FUN_10bcf57f4();
      func_0x00010bd0b678();
    }
    func_0x00010bd0a968();
    func_0x00010bdb2988(auStack_58);
    FUN_10bcf57f4(auStack_58,&DAT_10f4944be);
    func_0x00010ae6c448();
    func_0x00010bd0c054();
    func_0x00010ae6c448();
    func_0x00010bd0b678();
  }
  else {
    lVar3 = (long)*(char *)(unaff_x19 + 0xa7);
    if (lVar3 < 0) {
      lVar2 = *(long *)(unaff_x19 + 0x90);
      lVar3 = *(long *)(unaff_x19 + 0x98);
    }
    else {
      lVar2 = unaff_x19 + 0x90;
    }
    func_0x00010bd0a5b4(plVar1,lVar2,lVar3);
    func_0x00010bd0a844();
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined1 *)(unaff_x19 + 0x88) = 1;
  func_0x00010bd0b1ac();
  return;
}



/* Entry: 10bd02384; end: 10bd023ab;  */

undefined8 FUN_10bd02384(undefined8 param_1)

{
  FUN_10bd023ac();
  func_0x000107c3a6d4();
  FUN_10bd023e8();
  return param_1;
}



/* Entry: 10bd023ac; end: 10bd023bf;  */

void FUN_10bd023ac(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (*param_1 != param_1[1]) {
    lVar1 = (param_1[1] - *param_1) * 0x10000000 >> 0x20;
    lVar2 = lVar1 + 1;
    lVar1 = lVar1 * 0x10;
    do {
      lVar1 = lVar1 + -0x10;
      FUN_10bd36708(*param_1 + lVar1);
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
    param_1[1] = *param_1;
    return;
  }
  return;
}



/* Entry: 10bd023c0; end: 10bd023e7;  */

undefined8 FUN_10bd023c0(undefined8 param_1)

{
  func_0x000107c3a6d4();
  FUN_10bd023e8();
  return param_1;
}



/* Entry: 10bd023e8; end: 10bd023fb;  */

void FUN_10bd023e8(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10bd023fc; end: 10bd0240f;  */

void FUN_10bd023fc(void)

{
  FUN_10bcfd158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd02410; end: 10bd02473;  */

void FUN_10bd02410(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  func_0x000107c3a650();
  lVar1 = (long)*(char *)(param_1 + 0x1f);
  if (lVar1 < 0) {
    lVar1 = *(long *)(unaff_x19 + 0x10);
  }
  if (lVar1 != 0) {
    func_0x000107c284bc();
    func_0x00010bd0c260();
  }
  func_0x00010bd0c260();
  func_0x00010bd09ff8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10bd02474; end: 10bd0247b;  */

void FUN_10bd02474(void)

{
  return;
}



/* Entry: 10bd0247c; end: 10bd0254b;  */

long FUN_10bd0247c(long param_1)

{
  undefined1 in_ZR;
  bool bVar1;
  long lVar2;
  long lVar3;
  int extraout_w8;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar4;
  
  func_0x00010bd0a9ec();
  func_0x00010bd0c344(*(undefined8 *)(param_1 + 8));
  FUN_10bd2b4f4();
  lVar2 = *(long *)(unaff_x21 + 8);
  func_0x00010bd0c300();
  lVar3 = lVar2;
  func_0x00010bd0c5b0();
  if (!(bool)in_ZR) {
    bVar1 = extraout_w8 == 1;
    if ((bVar1) && (func_0x00010bd0bde4(*(undefined8 *)(unaff_x20 + 0x20)), bVar1)) {
      func_0x00010bd0b174();
      for (; unaff_x23 < *(int *)(lVar2 + 0x8c); unaff_x23 = unaff_x23 + 1) {
        lVar4 = *(long *)(lVar2 + 0x60);
        if (*(long *)(lVar4 + unaff_x22 + 0x20) == unaff_x20) {
          func_0x00010bd0b120();
          bVar1 = (int)lVar3 == 0xb;
          if (((bVar1) && (func_0x00010bd0b814(*(undefined1 *)(lVar4 + unaff_x22 + 1)), bVar1)) &&
             (func_0x00010bd0af68(), lVar3 == lVar2)) {
            return lVar4 + unaff_x22;
          }
        }
        unaff_x22 = unaff_x22 + 0x58;
      }
    }
    lVar2 = 0;
  }
  return lVar2;
}



/* Entry: 10bd0254c; end: 10bd025bf;  */

undefined8 FUN_10bd0254c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  func_0x000107c27cf4(param_3,&UNK_10e5b484d);
  if (((uVar1 & 1) == 0) && (func_0x000107c27cf4(param_3,&UNK_10e5b4862), (int)param_3 == 0)) {
    uVar2 = 0;
  }
  else {
    func_0x00010bd0c344(*(undefined8 *)(param_1 + 8));
    uVar2 = *(undefined8 *)(param_1 + 8);
    FUN_10bcf5cb4(uVar2,param_4,1);
    func_0x00010bd0adc4();
    if (!(bool)in_ZR) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* Entry: 10bd025c0; end: 10bd025cb;  */

void FUN_10bd025c0(undefined8 *param_1)

{
  code *pcVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (((uint)*param_1 >> 3 & 1) != 0) {
    return;
  }
  func_0x00010ae7d970();
  func_0x00010ae87b7c(3,&UNK_10f6d2185,0x9a7,&UNK_10f6d24a4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ae7d970);
  (*pcVar1)();
}



/* Entry: 10bd025cc; end: 10bd025eb;  */

void FUN_10bd025cc(void)

{
  func_0x00010bd0bba0();
  FUN_10bd025ec();
  return;
}



/* Entry: 10bd025ec; end: 10bd02603;  */

void FUN_10bd025ec(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(1,lVar1,lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10bd02604; end: 10bd0263b;  */

void FUN_10bd02604(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    (**(code **)(param_2 + 0x10))(1,param_2,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10bd0263c; end: 10bd026a3;  */

void FUN_10bd0263c(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long *unaff_x19;
  long *unaff_x20;
  
  puVar3 = param_3;
  func_0x00010bd0a9fc();
  FUN_10bcdb584();
  uVar2 = SUB81(puVar3,0);
  if (((ulong)puVar3 & 1) != 0) {
    func_0x00010bd0c740(unaff_x20[1] + param_2 * 0x18,*param_3);
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
  }
  lVar1 = unaff_x20[1];
  *unaff_x19 = *unaff_x20 + param_2;
  unaff_x19[1] = lVar1 + param_2 * 0x18;
  *(undefined1 *)(unaff_x19 + 2) = uVar2;
  return;
}



/* Entry: 10bd026a4; end: 10bd026b3;  */

void FUN_10bd026a4(undefined8 param_1,undefined8 param_2)

{
  char in_NG;
  char in_OV;
  undefined8 extraout_x10;
  undefined8 auStack_20 [2];
  
  func_0x0001000632f8();
  auStack_20[0] = extraout_x10;
  if (in_NG == in_OV) {
    auStack_20[0] = param_2;
  }
  func_0x000100062cf8(auStack_20);
  return;
}



/* Entry: 10bd026b4; end: 10bd026d3;  */

void FUN_10bd026b4(void)

{
  FUN_10bcfe45c();
  func_0x00010bd0ba80();
  return;
}



/* Entry: 10bd026d4; end: 10bd0271b;  */

bool FUN_10bd026d4(undefined8 *param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  
  FUN_10bcfe45c(param_2);
  uVar3 = *param_1;
  FUN_10bcfe45c();
  lVar4 = param_2;
  func_0x00010bd0b808();
  iVar1 = (int)&stack0xffffffffffffffe0;
  if (param_2 == lVar4) {
    func_0x000100067218(&stack0xffffffffffffffe0,uVar3,lVar4);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 10bd0271c; end: 10bd0274b;  */

bool FUN_10bd0271c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  if (param_2 == param_1) {
    return true;
  }
  plVar7 = *(long **)(param_2 + 8);
  plVar6 = *(long **)(param_1 + 8);
  bVar3 = *(byte *)((long)plVar7 + 0x17);
  uVar1 = plVar7[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  bVar4 = *(byte *)((long)plVar6 + 0x17);
  uVar2 = plVar6[1];
  if (-1 < (char)bVar4) {
    uVar2 = (ulong)bVar4;
  }
  if (uVar1 == uVar2) {
    plVar5 = (long *)*plVar7;
    if (-1 < (char)bVar3) {
      plVar5 = plVar7;
    }
    plVar7 = (long *)*plVar6;
    if (-1 < (char)bVar4) {
      plVar7 = plVar6;
    }
    func_0x000107c610b0(plVar5,plVar7);
    return (int)plVar5 == 0;
  }
  return false;
}



/* Entry: 10bd0274c; end: 10bd028bb;  */

void FUN_10bd0274c(long *param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x19;
  uint uVar4;
  long lVar5;
  undefined4 uStack_28;
  
  func_0x000107c3a6ac();
  uVar4 = *(uint *)(unaff_x19 + 1);
  if (*(char *)((long)param_1 + 0xb) != '\0') {
    uVar4 = uVar4 + 1;
    *(uint *)(unaff_x19 + 1) = uVar4;
    bVar1 = *(byte *)((long)param_1 + 10);
    if ((int)uVar4 < (int)(uint)bVar1) {
      return;
    }
    if (*(char *)((long)param_1 + 0xb) != '\0') {
      lVar5 = unaff_x19[1];
      lVar2 = *unaff_x19;
      while( true ) {
        if (uVar4 != bVar1) {
          return;
        }
        plVar3 = (long *)*param_1;
        if (*(char *)((long)plVar3 + 0xb) != '\0') break;
        uVar4 = (uint)*(byte *)(param_1 + 1);
        *(uint *)(unaff_x19 + 1) = uVar4;
        *unaff_x19 = (long)plVar3;
        bVar1 = *(byte *)((long)plVar3 + 10);
        param_1 = plVar3;
      }
      *unaff_x19 = lVar2;
      uStack_28 = (undefined4)lVar5;
      *(undefined4 *)(unaff_x19 + 1) = uStack_28;
      return;
    }
  }
  FUN_10bcfdc4c();
  lVar2 = param_1[uVar4 + 1 & 0xff];
  while (*unaff_x19 = lVar2, *(char *)(lVar2 + 0xb) == '\0') {
    func_0x00010bcfdbe8();
  }
  *(undefined4 *)(unaff_x19 + 1) = 0;
  return;
}



/* Entry: 10bd028bc; end: 10bd02997;  */

void FUN_10bd028bc(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x9;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  func_0x000107c3a6d8();
  bVar2 = *(byte *)(param_1 + 10);
  uVar4 = (ulong)(param_3 + param_2);
  uVar1 = param_3 + param_2 & 0xff;
  lVar6 = (ulong)uVar1 * 0x18 + 0x10;
  lVar3 = param_1;
  if ((ulong)bVar2 * 0x18 + (ulong)uVar1 * -0x18 != 0) {
    do {
      func_0x00010bd0b30c(lVar6);
      lVar6 = extraout_x8 + 0x18;
    } while (extraout_x9 != 0x18);
  }
  if (*(char *)(param_1 + 0xb) == '\0') {
    for (uVar5 = 0; param_3 != uVar5; uVar5 = uVar5 + 1) {
      func_0x00010bd0ba48();
      lVar3 = *(long *)(lVar3 + ((ulong)(uint)(param_2 + 1 + (int)uVar5) & 0xff) * 8);
      FUN_10bcfdb00();
    }
    while( true ) {
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar1;
      if ((uint)bVar2 < (uVar1 & 0xff)) break;
      func_0x00010bd0ba48();
      lVar6 = *(long *)(lVar3 + (uVar4 & 0xff) * 8);
      lVar3 = param_1;
      FUN_10bd02bcc();
      *(long *)(lVar3 + ((ulong)(uVar1 - param_3) & 0xff) * 8) = lVar6;
      *(char *)(lVar6 + 8) = (char)(uVar1 - param_3);
    }
  }
  *(byte *)(param_1 + 10) = bVar2 - (char)param_3;
  return;
}



/* Entry: 10bd02998; end: 10bd02bcb;  */

undefined1  [16] FUN_10bd02998(undefined **param_1,undefined **param_2,ulong param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined *extraout_x8;
  undefined **unaff_x19;
  ulong unaff_x20;
  undefined **ppuVar6;
  undefined **unaff_x24;
  undefined **ppuVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined **ppuStack_70;
  ulong uStack_68;
  
  func_0x00010bd0c5d4();
  bVar9 = true;
  ppuVar5 = param_1;
  ppuStack_70 = param_2;
  uStack_68 = param_3;
  while( true ) {
    uVar10 = (uint)unaff_x20;
    ppuVar6 = (undefined **)*param_1;
    if (param_2 == ppuVar6) break;
    bVar2 = *(byte *)((long)param_2 + 10);
    if (4 < bVar2) goto LAB_10bd02b78;
    ppuVar6 = (undefined **)*param_2;
    bVar3 = *(byte *)(param_2 + 1);
    uVar10 = (uint)bVar2;
    iVar8 = (int)param_3;
    if (bVar3 == 0) {
LAB_10bd02a14:
      uVar11 = (uint)bVar2;
      ppuVar7 = param_2;
      if (bVar3 < *(byte *)((long)ppuVar6 + 10)) {
        unaff_x24 = (undefined **)(ulong)(bVar3 + 1);
        FUN_10bcfdc4c();
        bVar2 = ppuVar6[(ulong)unaff_x24 & 0xff][10];
        if (uVar10 + bVar2 + 1 < 0xb) {
          func_0x00010bd0c650();
          FUN_10bd02c04();
          bVar4 = true;
          goto LAB_10bd02b0c;
        }
        if ((uVar11 != 0) && (ppuVar5 = ppuVar6, iVar8 < 1)) goto LAB_10bd02a84;
        uVar11 = (int)(bVar2 - uVar11) / 2;
        uVar10 = bVar2 - 1 & 0xff;
        if ((uVar11 & 0xff) <= uVar10) {
          uVar10 = uVar11 & 0xff;
        }
        ppuVar6 = param_2;
        func_0x00010bd02d04(param_2,uVar10);
      }
      else {
LAB_10bd02a84:
        ppuVar6 = ppuVar5;
        if (bVar3 != 0) {
          func_0x00010bd0becc();
          ppuVar6 = (undefined **)ppuVar6[(ulong)unaff_x24 & 0xff];
          bVar2 = *(byte *)((long)ppuVar6 + 10);
          if ((5 < bVar2) && ((uVar11 == 0 || (iVar8 < (int)uVar11)))) {
            uVar10 = bVar2 - uVar10;
            uVar11 = bVar2 - 1 & 0xff;
            if ((uVar10 & 0xfe) >> 1 <= uVar11) {
              uVar11 = uVar10 >> 1 & 0x7f;
            }
            func_0x00010bd02e68(ppuVar6,(ulong)uVar11,param_2);
            bVar4 = false;
            param_3 = param_3 + uVar11;
            goto LAB_10bd02b0c;
          }
        }
      }
      bVar4 = false;
    }
    else {
      func_0x00010bd0becc();
      ppuVar7 = (undefined **)ppuVar5[(ulong)unaff_x24 & 0xff];
      iVar1 = *(byte *)((long)ppuVar7 + 10) + 1;
      unaff_x24 = ppuVar7;
      if (10 < iVar1 + uVar10) goto LAB_10bd02a14;
      param_3 = (ulong)(uint)(iVar1 + iVar8);
      ppuVar6 = param_1;
      FUN_10bd02c04(param_1,ppuVar7,param_2);
      bVar4 = true;
    }
LAB_10bd02b0c:
    if (bVar9) {
      uStack_68 = CONCAT44(uStack_68._4_4_,(int)param_3);
      unaff_x19 = ppuVar7;
      unaff_x20 = param_3;
      ppuStack_70 = ppuVar7;
    }
    uVar10 = (uint)unaff_x20;
    if (!bVar4) goto LAB_10bd02b78;
    bVar9 = false;
    param_3 = (ulong)*(byte *)(ppuVar7 + 1);
    param_2 = (undefined **)*ppuVar7;
    ppuVar5 = ppuVar6;
  }
  if (*(char *)((long)ppuVar6 + 10) == '\0') {
    if (*(char *)((long)ppuVar6 + 0xb) == '\0') {
      ppuVar5 = ppuVar6;
      func_0x00010bcfdbe8();
      func_0x00010bd0b0f0();
      *ppuVar5 = extraout_x8;
    }
    else {
      ppuVar5 = &PTR_LOOP_110d9b970;
      param_1[1] = (undefined *)&PTR_LOOP_110d9b970;
    }
    *param_1 = (undefined *)ppuVar5;
    FUN_10bcfdb00(ppuVar6);
  }
  if (param_1[2] == (undefined *)0x0) {
    unaff_x19 = (undefined **)param_1[1];
    uStack_68 = (ulong)*(byte *)((long)unaff_x19 + 10);
  }
  else {
LAB_10bd02b78:
    if (uVar10 == *(byte *)((long)unaff_x19 + 10)) {
      uStack_68 = CONCAT44(uStack_68._4_4_,uVar10 - 1);
      FUN_10bd0274c(&ppuStack_70);
      unaff_x19 = ppuStack_70;
    }
  }
  auVar12._8_8_ = uStack_68;
  auVar12._0_8_ = unaff_x19;
  return auVar12;
}



/* Entry: 10bd02bcc; end: 10bd02c03;  */

long FUN_10bd02bcc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bd0b438(1,4);
  FUN_10bcfdc24();
  return param_1 + lVar1;
}



/* Entry: 10bd02c04; end: 10bd02d03;  */

void FUN_10bd02c04(undefined8 param_1,long *param_2,long param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  byte bVar5;
  long lVar6;
  
  func_0x00010bd0a9cc();
  bVar5 = *(byte *)((long)param_2 + 10);
  lVar4 = *param_2 + (ulong)*(byte *)(param_2 + 1) * 0x18;
  lVar3 = *(long *)(lVar4 + 0x20);
  lVar6 = *(long *)(lVar4 + 0x10);
  param_2[(ulong)bVar5 * 3 + 3] = *(long *)(lVar4 + 0x18);
  param_2[(ulong)bVar5 * 3 + 2] = lVar6;
  param_2[(ulong)bVar5 * 3 + 4] = lVar3;
  if ((ulong)*(byte *)(param_3 + 10) * 3 != 0) {
    do {
      func_0x00010bd0b30c();
    } while (extraout_x8 != 0x18);
  }
  cVar1 = *(char *)((long)unaff_x19 + 10);
  if (*(char *)((long)unaff_x19 + 0xb) == '\0') {
    func_0x00010bd0bae0();
    bVar5 = 0;
    while( true ) {
      bVar2 = *(byte *)(unaff_x21 + 10);
      if (bVar2 < bVar5) break;
      func_0x00010bd0b710();
      bVar5 = bVar5 + 1;
    }
    cVar1 = *(char *)((long)unaff_x19 + 10);
  }
  else {
    bVar2 = *(byte *)(unaff_x21 + 10);
  }
  *(byte *)((long)unaff_x19 + 10) = bVar2 + cVar1 + '\x01';
  *(undefined1 *)(unaff_x21 + 10) = 0;
  FUN_10bd028bc(*unaff_x19,*(undefined1 *)(unaff_x19 + 1),1);
  if (*(long *)(unaff_x20 + 8) == unaff_x21) {
    *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  }
  return;
}



/* Entry: 10bd02d04; end: 10bd02fdf;  */

void FUN_10bd02d04(long *param_1,ulong param_2,long param_3)

{
  byte bVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  long extraout_x9_00;
  long lVar3;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x000107c3a6d8();
  func_0x00010bd0bc74();
  bVar1 = *(byte *)((long)param_1 + 10);
  lVar2 = *param_1 + (ulong)*(byte *)(param_1 + 1) * 0x18;
  lVar3 = *(long *)(lVar2 + 0x20);
  lVar6 = *(long *)(lVar2 + 0x10);
  param_1[(ulong)bVar1 * 3 + 3] = *(long *)(lVar2 + 0x18);
  param_1[(ulong)bVar1 * 3 + 2] = lVar6;
  param_1[(ulong)bVar1 * 3 + 4] = lVar3;
  lVar2 = (param_2 & 0xffffffff) * 0x18 + -0x18;
  param_3 = param_3 + lVar2;
  if (lVar2 != 0) {
    do {
      func_0x00010bd0b520();
      param_3 = extraout_x8;
    } while (extraout_x9 != 0x18);
  }
  lVar2 = *unaff_x21 + (ulong)*(byte *)(unaff_x21 + 1) * 0x18;
  uVar8 = *(undefined8 *)(param_3 + 0x18);
  uVar7 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(lVar2 + 0x18) = uVar8;
  *(undefined8 *)(lVar2 + 0x10) = uVar7;
  if ((ulong)*(byte *)(unaff_x19 + 10) * 0x18 + (param_2 & 0xffffffff) * -0x18 != 0) {
    do {
      func_0x00010bd0b30c();
    } while (extraout_x9_00 != 0x18);
  }
  if (*(char *)((long)unaff_x21 + 0xb) == '\0') {
    for (uVar5 = 0; (param_2 & 0xffffffff) != uVar5; uVar5 = uVar5 + 1) {
      func_0x00010bd0b718();
      FUN_10bd02fe0();
    }
    for (uVar4 = 0; (int)(uVar4 & 0xff) <= (int)((uint)*(byte *)(unaff_x19 + 10) - unaff_w20);
        uVar4 = uVar4 + 1) {
      func_0x00010bd0b718();
      func_0x00010bd0b710();
    }
  }
  *(char *)((long)unaff_x21 + 10) = *(char *)((long)unaff_x21 + 10) + (char)unaff_w20;
  *(char *)(unaff_x19 + 10) = *(char *)(unaff_x19 + 10) - (char)unaff_w20;
  return;
}



/* Entry: 10bd02fe0; end: 10bd0300b;  */

void FUN_10bd02fe0(long param_1)

{
  undefined8 *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  
  func_0x00010bd0bc74();
  FUN_10bd02bcc();
  *(undefined8 **)(param_1 + (unaff_x20 & 0xffffffff) * 8) = unaff_x19;
  *(char *)(unaff_x19 + 1) = (char)unaff_x20;
  *unaff_x19 = unaff_x21;
  return;
}



/* Entry: 10bd0300c; end: 10bd03047;  */

void FUN_10bd0300c(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  long extraout_x9;
  long extraout_x10;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x00010bd0ba24();
    *param_1 = extraout_x8;
    param_1[1] = extraout_x9 + extraout_x10 * 8;
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 10bd03048; end: 10bd030b7;  */

void FUN_10bd03048(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar1;
  long extraout_x9;
  undefined8 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c3a644();
  func_0x000107c3a698();
  if ((extraout_x9 == 0) && (func_0x000107c3a69c(), !(bool)in_ZR)) {
    func_0x000107c3a694();
    if (((bool)in_CY) && (func_0x000107c3a654(), (bool)in_CY)) {
      func_0x00010bd0a56c();
    }
    else {
      func_0x000107c3a664();
      FUN_10bd030b8();
    }
    func_0x000107c3a660();
  }
  func_0x000107c3a634();
  func_0x000107c3a63c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c3a6d8();
  func_0x000107c3a658();
  func_0x000107c3a6a0();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      puVar1 = unaff_x20;
      func_0x00010bcfec44();
      func_0x000107c3a65c();
      func_0x000107c3a638(unaff_w21 & 0x7f);
      puVar1 = (undefined8 *)(unaff_x25 + (long)puVar1 * 0x20);
      uVar2 = *unaff_x20;
      uVar4 = unaff_x20[3];
      uVar3 = unaff_x20[2];
      puVar1[1] = unaff_x20[1];
      *puVar1 = uVar2;
      puVar1[3] = uVar4;
      puVar1[2] = uVar3;
    }
    func_0x000107c3a6c8();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10bd030b8; end: 10bd03123;  */

void FUN_10bd030b8(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c3a6d8();
  func_0x000107c3a658();
  func_0x000107c3a6a0();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      puVar1 = unaff_x20;
      func_0x00010bcfec44();
      func_0x000107c3a65c();
      func_0x000107c3a638(unaff_w21 & 0x7f);
      puVar1 = (undefined8 *)(unaff_x25 + (long)puVar1 * 0x20);
      uVar2 = *unaff_x20;
      uVar4 = unaff_x20[3];
      uVar3 = unaff_x20[2];
      puVar1[1] = unaff_x20[1];
      *puVar1 = uVar2;
      puVar1[3] = uVar4;
      puVar1[2] = uVar3;
    }
    func_0x000107c3a6c8();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10bd03124; end: 10bd0312f;  */

ulong FUN_10bd03124(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  ulong extraout_x8;
  ulong extraout_x10;
  
  ppuVar2 = &PTR_LOOP_110c8acd8;
  func_0x0001053abb9c(&PTR_LOOP_110c8acd8);
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x000100062d4c();
  func_0x000100061c28((long)ppuVar2 + lVar1);
  return extraout_x8 ^ extraout_x10;
}



/* Entry: 10bd03130; end: 10bd034e3;  */

int * FUN_10bd03130(undefined8 param_1,long param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  long lVar17;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long extraout_x9_08;
  long extraout_x9_09;
  long extraout_x9_10;
  long extraout_x9_11;
  long extraout_x9_12;
  undefined8 extraout_x10;
  ulong uVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 in_register_00005008;
  undefined1 auStack_88 [16];
  undefined8 *puStack_78;
  
  iVar1 = *param_3;
  iVar2 = iVar1 + param_3[1] * 0x18;
  iVar3 = iVar2 + param_3[2] * 0x30;
  iVar4 = iVar3 + param_3[3] * 200;
  iVar5 = iVar4 + param_3[4] * 0x48;
  iVar6 = iVar5 + param_3[5] * 0x58;
  iVar7 = iVar6 + param_3[6] * 0x98;
  iVar8 = iVar7 + param_3[7] * 0x58;
  iVar9 = iVar8 + param_3[8] * 0x60;
  uVar10 = iVar9 + param_3[9] * 0x70;
  uVar18 = (ulong)uVar10;
  iVar11 = uVar10 + param_3[10] * 0x50;
  iVar12 = iVar11 + param_3[0xb] * 0x58;
  iVar13 = iVar12 + param_3[0xc] * 0x58;
  iVar14 = iVar13 + param_3[0xd] * 0xb0;
  piVar15 = (int *)((long)iVar14 + 0x38);
  __Znwm();
  iVar1 = iVar1 + 0x38;
  iVar2 = iVar2 + 0x38;
  *piVar15 = iVar1;
  piVar15[1] = iVar2;
  piVar15[2] = iVar3 + 0x38;
  piVar15[3] = iVar4 + 0x38;
  piVar15[4] = iVar5 + 0x38;
  piVar15[5] = iVar6 + 0x38;
  piVar15[6] = iVar7 + 0x38;
  piVar15[7] = iVar8 + 0x38;
  piVar15[8] = iVar9 + 0x38;
  piVar15[9] = uVar10 + 0x38;
  piVar15[10] = iVar11 + 0x38;
  piVar15[0xb] = iVar12 + 0x38;
  piVar15[0xc] = iVar13 + 0x38;
  piVar15[0xd] = iVar14 + 0x38;
  for (lVar17 = (long)iVar1; iVar2 != lVar17; lVar17 = lVar17 + 0x18) {
    puVar20 = (undefined8 *)((long)piVar15 + lVar17);
    *puVar20 = 0;
    puVar20[1] = 0;
    puVar20[2] = 0;
  }
  piVar16 = piVar15;
  func_0x00010bd0b594();
  puVar20 = extraout_x8;
  for (lVar17 = extraout_x9; lVar17 != 0; lVar17 = lVar17 + -0x30) {
    *puVar20 = &PTR_FUN_110d9c160;
    puVar20[1] = 0;
    puVar20[3] = 0;
    puVar20[4] = 0;
    puVar20[2] = 0;
    *(undefined4 *)(puVar20 + 5) = 0;
    puVar20 = puVar20 + 6;
  }
  func_0x00010bd0c6ac((long)piVar15[2]);
  for (; uVar18 != 0; uVar18 = uVar18 - 200) {
    FUN_10bcec794();
    piVar16 = piVar16 + 0x32;
  }
  func_0x00010bd0b594();
  func_0x00010bd0b7d0();
  puVar20 = extraout_x8_00;
  for (lVar17 = extraout_x9_00; lVar17 != 0; lVar17 = lVar17 + -0x48) {
    puVar20[1] = 0;
    puVar20[2] = 0;
    *puVar20 = extraout_x10;
    *(undefined4 *)(puVar20 + 3) = 0;
    puVar20[5] = in_register_00005008;
    puVar20[4] = param_1;
    puVar20[7] = in_register_00005008;
    puVar20[6] = param_1;
    puVar20[8] = 0;
    puVar20 = puVar20 + 9;
  }
  func_0x00010bd0b594();
  func_0x00010bd0b7d0();
  lVar17 = extraout_x9_01;
  while (lVar17 != 0) {
    func_0x00010bd0a468();
    *(undefined8 *)(extraout_x8_01 + 0x4d) = 0;
    func_0x00010bd0c6a0();
    lVar17 = extraout_x9_02;
  }
  func_0x00010bd0c6ac((long)piVar15[5]);
  for (lVar17 = 0; lVar17 != 0; lVar17 = lVar17 + -0x98) {
    func_0x00010bd1085c();
    piVar16 = piVar16 + 0x26;
  }
  func_0x00010bd0b594();
  func_0x00010bd0b7d0();
  lVar17 = extraout_x9_03;
  while (lVar17 != 0) {
    func_0x00010bd0a468();
    *(undefined4 *)(extraout_x8_02 + 0x4f) = 0;
    func_0x00010bd0c6a0();
    lVar17 = extraout_x9_04;
  }
  func_0x00010bd0b594();
  func_0x00010bd0b7d0();
  if (extraout_x9_05 != 0) {
    do {
      func_0x00010bd0a468();
      *(undefined8 *)(extraout_x8_03 + 0x52) = in_register_00005008;
      *(undefined8 *)(extraout_x8_03 + 0x4a) = param_1;
    } while (extraout_x9_06 != 0x60);
  }
  func_0x00010bd0c6ac((long)piVar15[8]);
  for (lVar17 = 0; lVar17 != 0; lVar17 = lVar17 + -0x70) {
    FUN_10bd0de6c();
    piVar16 = piVar16 + 0x1c;
  }
  func_0x00010bd0b594();
  func_0x00010bd0b7d0();
  if (extraout_x9_07 != 0) {
    do {
      func_0x00010bd0a468();
    } while (extraout_x9_08 != 0x50);
  }
  func_0x00010bd0b594();
  func_0x00010bd0b7d0();
  lVar17 = extraout_x9_09;
  while (lVar17 != 0) {
    func_0x00010bd0a468();
    *(undefined1 *)(extraout_x8_04 + 0x50) = 0;
    func_0x00010bd0c6a0();
    lVar17 = extraout_x9_10;
  }
  func_0x00010bd0b594();
  func_0x00010bd0b7d0();
  lVar17 = extraout_x9_11;
  while (lVar17 != 0) {
    func_0x00010bd0a468();
    *(undefined8 *)(extraout_x8_05 + 0x50) = 0;
    func_0x00010bd0c6a0();
    lVar17 = extraout_x9_12;
  }
  func_0x00010bd0c6ac((long)piVar15[0xc]);
  for (lVar17 = 0; lVar17 != 0; lVar17 = lVar17 + -0xb0) {
    func_0x000107c315ec();
    piVar16 = piVar16 + 0x2c;
  }
  puVar20 = *(undefined8 **)(param_2 + 0xb8);
  if (puVar20 < *(undefined8 **)(param_2 + 0xc0)) {
    puVar21 = puVar20 + 1;
    *puVar20 = piVar15;
  }
  else {
    plVar19 = (long *)(param_2 + 0xb0);
    func_0x00010bd0c6ec(*plVar19);
    FUN_10bcfe2a4();
    FUN_10bcfe2cc(auStack_88,piVar16,*(long *)(param_2 + 0xb8) - *plVar19 >> 3,
                  (undefined8 *)(param_2 + 0xc0));
    *puStack_78 = piVar15;
    puStack_78 = puStack_78 + 1;
    func_0x00010bcfe324(plVar19,auStack_88);
    puVar21 = *(undefined8 **)(param_2 + 0xb8);
    FUN_10bcfe344(auStack_88);
  }
  *(undefined8 **)(param_2 + 0xb8) = puVar21;
  return piVar15;
}



/* Entry: 10bd034e4; end: 10bd035cb;  */

void FUN_10bd034e4(long *param_1,int *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *param_2;
  iVar5 = param_2[1];
  piVar1 = (int *)0x0;
  if ((long)iVar4 != 0x38) {
    piVar1 = param_2 + 0xe;
  }
  lVar2 = 0;
  if (iVar4 != iVar5) {
    lVar2 = (long)param_2 + (long)iVar4;
  }
  *param_1 = (long)piVar1;
  param_1[1] = lVar2;
  iVar4 = param_2[2];
  iVar6 = param_2[3];
  lVar2 = 0;
  if (iVar5 != iVar4) {
    lVar2 = (long)param_2 + (long)iVar5;
  }
  lVar3 = 0;
  if (iVar4 != iVar6) {
    lVar3 = (long)param_2 + (long)iVar4;
  }
  param_1[2] = lVar2;
  param_1[3] = lVar3;
  iVar4 = param_2[4];
  iVar5 = param_2[5];
  lVar2 = 0;
  if (iVar6 != iVar4) {
    lVar2 = (long)param_2 + (long)iVar6;
  }
  lVar3 = 0;
  if (iVar4 != iVar5) {
    lVar3 = (long)param_2 + (long)iVar4;
  }
  param_1[4] = lVar2;
  param_1[5] = lVar3;
  iVar4 = param_2[6];
  iVar6 = param_2[7];
  lVar2 = 0;
  if (iVar5 != iVar4) {
    lVar2 = (long)param_2 + (long)iVar5;
  }
  lVar3 = 0;
  if (iVar4 != iVar6) {
    lVar3 = (long)param_2 + (long)iVar4;
  }
  param_1[6] = lVar2;
  param_1[7] = lVar3;
  iVar4 = param_2[8];
  iVar5 = param_2[9];
  lVar2 = 0;
  if (iVar6 != iVar4) {
    lVar2 = (long)param_2 + (long)iVar6;
  }
  lVar3 = 0;
  if (iVar4 != iVar5) {
    lVar3 = (long)param_2 + (long)iVar4;
  }
  param_1[8] = lVar2;
  param_1[9] = lVar3;
  iVar4 = param_2[10];
  iVar6 = param_2[0xb];
  lVar2 = 0;
  if (iVar5 != iVar4) {
    lVar2 = (long)param_2 + (long)iVar5;
  }
  lVar3 = 0;
  if (iVar4 != iVar6) {
    lVar3 = (long)param_2 + (long)iVar4;
  }
  param_1[10] = lVar2;
  param_1[0xb] = lVar3;
  iVar4 = param_2[0xc];
  lVar2 = 0;
  if (iVar6 != iVar4) {
    lVar2 = (long)param_2 + (long)iVar6;
  }
  lVar3 = 0;
  if (iVar4 != param_2[0xd]) {
    lVar3 = (long)param_2 + (long)iVar4;
  }
  param_1[0xc] = lVar2;
  param_1[0xd] = lVar3;
  return;
}



/* Entry: 10bd035cc; end: 10bd0363f;  */

void FUN_10bd035cc(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  uint uVar1;
  long extraout_x9;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uStack_28;
  
  func_0x00010bd0a084();
  func_0x000107c3a698();
  if ((extraout_x9 == 0) && (func_0x000107c3a69c(), !(bool)in_ZR)) {
    func_0x000107c3a694();
    if (((bool)in_CY) && (func_0x000107c3a654(), (bool)in_CY)) {
      func_0x00010bd0a670();
    }
    else {
      func_0x000107c3a664();
      FUN_10bd03640();
    }
    func_0x000107c3a660();
  }
  func_0x000107c3a634();
  func_0x000107c3a64c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c3a6d8();
  func_0x00010bd0a2f8();
  func_0x000107c3a6a0();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      uVar1 = *(uint *)(*unaff_x22 + 4);
      FUN_10bd036b0(uVar1,*(undefined8 *)(*unaff_x22 + 0x10));
      func_0x000107c3a660();
      func_0x000107c3a638(uVar1 & 0x7f);
      func_0x00010bd0bb84();
    }
    func_0x00010bd0b98c();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 10bd03640; end: 10bd036af;  */

void FUN_10bd03640(void)

{
  uint uVar1;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107c3a6d8();
  func_0x00010bd0a2f8();
  func_0x000107c3a6a0();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      uVar1 = *(uint *)(*unaff_x22 + 4);
      FUN_10bd036b0(uVar1,*(undefined8 *)(*unaff_x22 + 0x10));
      func_0x000107c3a660();
      func_0x000107c3a638(uVar1 & 0x7f);
      func_0x00010bd0bb84();
    }
    func_0x00010bd0b98c();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 10bd036b0; end: 10bd036cf;  */

void FUN_10bd036b0(void)

{
  func_0x00010bd0b69c();
  return;
}



/* Entry: 10bd036d0; end: 10bd036df;  */

void FUN_10bd036d0(void)

{
  func_0x00010bd0b69c();
  return;
}



/* Entry: 10bd036e0; end: 10bd03753;  */

void FUN_10bd036e0(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 uVar1;
  long extraout_x9;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uStack_28;
  
  func_0x00010bd0a084();
  func_0x000107c3a698();
  if ((extraout_x9 == 0) && (func_0x000107c3a69c(), !(bool)in_ZR)) {
    func_0x000107c3a694();
    if (((bool)in_CY) && (func_0x000107c3a654(), (bool)in_CY)) {
      func_0x00010bd0a670();
    }
    else {
      func_0x000107c3a664();
      FUN_10bd03754();
    }
    func_0x000107c3a660();
  }
  func_0x000107c3a634();
  func_0x000107c3a64c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c3a6d8();
  func_0x00010bd0a2f8();
  func_0x000107c3a6a0();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      uVar1 = *unaff_x22;
      FUN_10bd026b4(uVar1);
      func_0x000107c3a660();
      func_0x000107c3a638((uint)uVar1 & 0x7f);
      func_0x00010bd0bb84();
    }
    func_0x00010bd0b98c();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 10bd03754; end: 10bd037bb;  */

void FUN_10bd03754(void)

{
  undefined8 uVar1;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107c3a6d8();
  func_0x00010bd0a2f8();
  func_0x000107c3a6a0();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      uVar1 = *unaff_x22;
      FUN_10bd026b4(uVar1);
      func_0x000107c3a660();
      func_0x000107c3a638((uint)uVar1 & 0x7f);
      func_0x00010bd0bb84();
    }
    func_0x00010bd0b98c();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 10bd037bc; end: 10bd037c3;  */

void FUN_10bd037bc(void)

{
  FUN_10bcfe45c();
  func_0x00010bd0ba80();
  return;
}



/* Entry: 10bd037c4; end: 10bd037ef;  */

void FUN_10bd037c4(undefined8 param_1)

{
  undefined1 auStack_28 [24];
  
  FUN_10bcfec74(auStack_28,param_1);
  func_0x00010bcfed58(auStack_28);
  return;
}



/* Entry: 10bd037f0; end: 10bd03863;  */

void FUN_10bd037f0(void)

{
  char *pcVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar2;
  long extraout_x9;
  long unaff_x19;
  undefined8 *unaff_x20;
  uint unaff_w21;
  char *unaff_x22;
  long unaff_x23;
  long lVar3;
  long lVar4;
  undefined8 uStack_28;
  
  func_0x00010bd0a084();
  func_0x000107c3a698();
  if ((extraout_x9 == 0) && (func_0x000107c3a69c(), !(bool)in_ZR)) {
    func_0x000107c3a694();
    if (((bool)in_CY) && (func_0x000107c3a654(), (bool)in_CY)) {
      func_0x00010bd0a670();
    }
    else {
      func_0x000107c3a664();
      FUN_10bd03864();
    }
    func_0x000107c3a660();
  }
  func_0x000107c3a634();
  func_0x000107c3a64c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c3a6d8();
    func_0x00010bd0a33c();
    func_0x000107c28444();
    lVar3 = *(long *)(unaff_x19 + 8);
    pcVar1 = unaff_x22;
    for (lVar4 = unaff_x23; lVar4 != 0; lVar4 = lVar4 + -1) {
      if (-1 < *pcVar1) {
        puVar2 = unaff_x20;
        FUN_10bd037c4();
        func_0x000107c3a65c();
        func_0x000107c3a638(unaff_w21 & 0x7f);
        *(undefined8 *)(lVar3 + (long)puVar2 * 8) = *unaff_x20;
      }
      pcVar1 = pcVar1 + 1;
      unaff_x20 = unaff_x20 + 1;
    }
    if (unaff_x23 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10bd03864; end: 10bd038db;  */

void FUN_10bd03864(void)

{
  char *pcVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  uint unaff_w21;
  char *unaff_x22;
  long unaff_x23;
  long lVar3;
  long lVar4;
  
  func_0x000107c3a6d8();
  func_0x00010bd0a33c();
  func_0x000107c28444();
  lVar3 = *(long *)(unaff_x19 + 8);
  pcVar1 = unaff_x22;
  for (lVar4 = unaff_x23; lVar4 != 0; lVar4 = lVar4 + -1) {
    if (-1 < *pcVar1) {
      puVar2 = unaff_x20;
      FUN_10bd037c4();
      func_0x000107c3a65c();
      func_0x000107c3a638(unaff_w21 & 0x7f);
      *(undefined8 *)(lVar3 + (long)puVar2 * 8) = *unaff_x20;
    }
    pcVar1 = pcVar1 + 1;
    unaff_x20 = unaff_x20 + 1;
  }
  if (unaff_x23 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
  return;
}



/* Entry: 10bd038dc; end: 10bd038e3;  */

void FUN_10bd038dc(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_28 [24];
  
  FUN_10bcfec74(auStack_28,param_2);
  func_0x00010bcfed58(auStack_28);
  return;
}



/* Entry: 10bd038e4; end: 10bd03957;  */

void FUN_10bd038e4(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 uVar1;
  long extraout_x9;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uStack_28;
  
  func_0x00010bd0a084();
  func_0x000107c3a698();
  if ((extraout_x9 == 0) && (func_0x000107c3a69c(), !(bool)in_ZR)) {
    func_0x000107c3a694();
    if (((bool)in_CY) && (func_0x000107c3a654(), (bool)in_CY)) {
      func_0x00010bd0a670();
    }
    else {
      func_0x000107c3a664();
      FUN_10bd03958();
    }
    func_0x000107c3a660();
  }
  func_0x000107c3a634();
  func_0x000107c3a64c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c3a6d8();
  func_0x00010bd0a2f8();
  func_0x000107c3a6a0();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      uVar1 = *(undefined8 *)(*unaff_x22 + 8);
      func_0x00010bd0273c(uVar1);
      func_0x000107c3a660();
      func_0x000107c3a638((uint)uVar1 & 0x7f);
      func_0x00010bd0bb84();
    }
    func_0x00010bd0b98c();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 10bd03958; end: 10bd039c3;  */

void FUN_10bd03958(void)

{
  undefined8 uVar1;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107c3a6d8();
  func_0x00010bd0a2f8();
  func_0x000107c3a6a0();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      uVar1 = *(undefined8 *)(*unaff_x22 + 8);
      func_0x00010bd0273c(uVar1);
      func_0x000107c3a660();
      func_0x000107c3a638((uint)uVar1 & 0x7f);
      func_0x00010bd0bb84();
    }
    func_0x00010bd0b98c();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 10bd039c4; end: 10bd039c7;  */

ulong FUN_10bd039c4(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  ulong extraout_x8;
  ulong extraout_x10;
  
  puVar4 = *(undefined8 **)(*param_2 + 8);
  ppuVar3 = &PTR_LOOP_110c8acd8;
  uVar1 = puVar4[1];
  puVar2 = (undefined8 *)*puVar4;
  if (-1 < (char)*(byte *)((long)puVar4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)puVar4 + 0x17);
    puVar2 = puVar4;
  }
  func_0x000100062d4c(&PTR_LOOP_110c8acd8,puVar2);
  func_0x000100061c28((long)ppuVar3 + uVar1);
  return extraout_x8 ^ extraout_x10;
}



/* Entry: 10bd039c8; end: 10bd03a3b;  */

void FUN_10bd039c8(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  uint uVar1;
  long extraout_x9;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uStack_28;
  
  func_0x00010bd0a084();
  func_0x000107c3a698();
  if ((extraout_x9 == 0) && (func_0x000107c3a69c(), !(bool)in_ZR)) {
    func_0x000107c3a694();
    if (((bool)in_CY) && (func_0x000107c3a654(), (bool)in_CY)) {
      func_0x00010bd0a670();
    }
    else {
      func_0x000107c3a664();
      FUN_10bd03a3c();
    }
    func_0x000107c3a660();
  }
  func_0x000107c3a634();
  func_0x000107c3a64c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c3a6d8();
  func_0x00010bd0a2f8();
  func_0x000107c3a6a0();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      uVar1 = *(uint *)(*unaff_x22 + 4);
      FUN_10bd03aac(uVar1,*(undefined8 *)(*unaff_x22 + 0x20));
      func_0x000107c3a660();
      func_0x000107c3a638(uVar1 & 0x7f);
      func_0x00010bd0bb84();
    }
    func_0x00010bd0b98c();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 10bd03a3c; end: 10bd03aab;  */

void FUN_10bd03a3c(void)

{
  uint uVar1;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107c3a6d8();
  func_0x00010bd0a2f8();
  func_0x000107c3a6a0();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      uVar1 = *(uint *)(*unaff_x22 + 4);
      FUN_10bd03aac(uVar1,*(undefined8 *)(*unaff_x22 + 0x20));
      func_0x000107c3a660();
      func_0x000107c3a638(uVar1 & 0x7f);
      func_0x00010bd0bb84();
    }
    func_0x00010bd0b98c();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 10bd03aac; end: 10bd03acb;  */

void FUN_10bd03aac(void)

{
  func_0x00010bd0b69c();
  return;
}



/* Entry: 10bd03acc; end: 10bd03adb;  */

void FUN_10bd03acc(void)

{
  func_0x00010bd0b69c();
  return;
}



/* Entry: 10bd03adc; end: 10bd03b0f;  */

void FUN_10bd03adc(uint param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_1;
  FUN_10bcfdbb0();
  FUN_10bd03b10();
  *(ulong *)uVar1 = uVar1;
  *(undefined2 *)(uVar1 + 8) = 0;
  *(undefined1 *)(uVar1 + 10) = 0;
  *(char *)(uVar1 + 0xb) = (char)param_1;
  return;
}



/* Entry: 10bd03b10; end: 10bd03b33;  */

void FUN_10bd03b10(long param_1)

{
  undefined1 uStack_11;
  
  func_0x000107c27d24(&uStack_11,param_1 + 7U >> 3);
  return;
}



/* Entry: 10bd03b34; end: 10bd03d2b;  */

void FUN_10bd03b34(ulong *param_1,undefined8 *param_2)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int extraout_w8;
  int extraout_w8_00;
  int iVar7;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w10;
  uint extraout_w10_00;
  ulong *unaff_x19;
  long *unaff_x20;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  
  func_0x00010bd0aa10();
  plVar11 = (long *)*param_2;
  lVar9 = *plVar11;
  uVar5 = (long *)*param_1 <= plVar11;
  uVar6 = plVar11 == (long *)*param_1;
  if ((bool)uVar6) {
    lVar10 = 0;
    FUN_10bd03d2c(0,lVar9);
    FUN_10bd02fe0();
    *unaff_x20 = lVar10;
    plVar11 = (long *)*unaff_x19;
LAB_10bd03c8c:
    bVar3 = (char)plVar11[1] + 1;
    if (*(char *)((long)plVar11 + 0xb) == '\0') {
      plVar8 = (long *)(ulong)bVar3;
      FUN_10bd03d2c(plVar8,lVar10);
      func_0x00010bd0bad0();
    }
    else {
      plVar8 = (long *)0xa;
      FUN_10bcfdbb0();
      FUN_10bd03b10();
      *plVar8 = lVar10;
      *(byte *)(plVar8 + 1) = bVar3;
      *(undefined2 *)((long)plVar8 + 9) = 0;
      *(undefined1 *)((long)plVar8 + 0xb) = 10;
      func_0x00010bd0bad0();
      if (unaff_x20[1] == *unaff_x19) {
        unaff_x20[1] = (long)plVar8;
      }
    }
  }
  else {
    bVar3 = *(byte *)(plVar11 + 1);
    if (bVar3 != 0) {
      plVar8 = (long *)(ulong)(bVar3 - 1);
      func_0x00010bd0ba90();
      func_0x00010bd0c63c();
      if (!(bool)uVar5 || (bool)uVar6) {
        func_0x00010bd0c3c4();
        uVar12 = extraout_w9 >> ((extraout_w10 & 0xfe) < 10);
        if (uVar12 < 2) {
          uVar12 = 1;
        }
        if (uVar12 <= (extraout_w10 & 0xff) || (uVar12 + extraout_w8 & 0xff) < 10) {
          FUN_10bd02d04(plVar8,uVar12,plVar11);
          iVar7 = (byte)unaff_x19[1] - uVar12;
          *(int *)(unaff_x19 + 1) = iVar7;
          if (-1 < iVar7) {
            return;
          }
          iVar7 = iVar7 + (uint)*(byte *)((long)plVar8 + 10) + 1;
          goto LAB_10bd03d0c;
        }
      }
    }
    bVar4 = *(byte *)(lVar9 + 10);
    uVar12 = (uint)bVar3;
    uVar5 = bVar4 <= uVar12;
    uVar6 = uVar12 == bVar4;
    if ((bool)uVar5) {
LAB_10bd03c40:
      lVar10 = lVar9;
      if (bVar4 == 10) {
        FUN_10bd03b34();
        plVar11 = (long *)*unaff_x19;
        lVar10 = *plVar11;
      }
      goto LAB_10bd03c8c;
    }
    plVar8 = (long *)(ulong)(uVar12 + 1);
    func_0x00010bd0ba90();
    func_0x00010bd0c63c();
    if ((bool)uVar5 && !(bool)uVar6) goto LAB_10bd03c40;
    func_0x00010bd0c3c4();
    uVar12 = extraout_w9_00 >> (0 < (int)extraout_w10_00);
    if (uVar12 < 2) {
      uVar12 = 1;
    }
    uVar2 = uVar12 + extraout_w8_00 & 0xff;
    bVar1 = (int)(extraout_w10_00 & 0xff) <= (int)(*(byte *)((long)plVar11 + 10) - uVar12);
    if ((!bVar1 && 8 < uVar2) && (bVar1 || uVar2 != 9)) goto LAB_10bd03c40;
    func_0x00010bd02e68(plVar11,uVar12,plVar8);
  }
  if ((int)unaff_x19[1] <= (int)(uint)*(byte *)(*unaff_x19 + 10)) {
    return;
  }
  iVar7 = (int)unaff_x19[1] + ~(uint)*(byte *)(*unaff_x19 + 10);
LAB_10bd03d0c:
  *(int *)(unaff_x19 + 1) = iVar7;
  *unaff_x19 = (ulong)plVar8;
  return;
}



/* Entry: 10bd03d2c; end: 10bd03d77;  */

void FUN_10bd03d2c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010bd0b438(1,4);
  FUN_10bcfdc00();
  FUN_10bd03b10();
  *puVar1 = param_2;
  *(char *)(puVar1 + 1) = (char)param_1;
  *(undefined2 *)((long)puVar1 + 9) = 0;
  *(undefined1 *)((long)puVar1 + 0xb) = 0;
  return;
}



/* Entry: 10bd03d78; end: 10bd03f43;  */

void FUN_10bd03d78(long *param_1,int param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  byte bVar4;
  ulong uVar5;
  long *plVar6;
  long *extraout_x9;
  long extraout_x10;
  long *plVar7;
  long lVar8;
  long extraout_x11;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  
  func_0x000107c3a6d8();
  if (param_2 == 10) {
    bVar4 = 0;
  }
  else if (param_2 == 0) {
    bVar4 = *(char *)((long)param_1 + 10) - 1;
  }
  else {
    bVar4 = *(byte *)((long)param_1 + 10) >> 1;
  }
  *(byte *)(param_3 + 10) = bVar4;
  *(byte *)((long)param_1 + 10) = *(char *)((long)param_1 + 10) - bVar4;
  plVar6 = param_1 + 2;
  lVar11 = (ulong)*(byte *)(param_3 + 10) * -0x18;
  lVar8 = 0x10;
  plVar3 = param_1;
  while (lVar11 + lVar8 != 0x10) {
    func_0x00010bd0b520();
    plVar6 = extraout_x9;
    lVar11 = extraout_x10;
    lVar8 = extraout_x11 + 0x18;
  }
  bVar4 = *(char *)((long)param_1 + 10) - 1;
  *(byte *)((long)param_1 + 10) = bVar4;
  plVar10 = (long *)*param_1;
  bVar2 = *(byte *)(param_1 + 1);
  uVar5 = (ulong)bVar2;
  plVar6 = plVar6 + (ulong)bVar4 * 3;
  bVar4 = *(byte *)((long)plVar10 + 10);
  if (bVar2 < bVar4) {
    uVar9 = (ulong)((uint)bVar4 - (uint)bVar2) & 0xff;
    plVar7 = plVar10 + uVar5 * 3 + uVar9 * 3 + -1;
    for (lVar8 = uVar9 * -0x18; lVar8 != 0; lVar8 = lVar8 + 0x18) {
      plVar7[4] = plVar7[1];
      plVar7[3] = *plVar7;
      plVar7[5] = plVar7[2];
      plVar7 = plVar7 + -3;
    }
    bVar4 = *(byte *)((long)plVar10 + 10);
  }
  lVar11 = plVar6[1];
  lVar8 = *plVar6;
  plVar10[uVar5 * 3 + 4] = plVar6[2];
  plVar10[uVar5 * 3 + 3] = lVar11;
  plVar10[uVar5 * 3 + 2] = lVar8;
  bVar4 = bVar4 + 1;
  *(byte *)((long)plVar10 + 10) = bVar4;
  if ((*(char *)((long)plVar10 + 0xb) == '\0') && (uVar1 = bVar2 + 1, uVar1 < bVar4)) {
    while (uVar1 < bVar4) {
      func_0x00010bd0bae0();
      lVar8 = plVar3[(byte)(bVar4 - 1)];
      plVar3 = plVar10;
      FUN_10bd02bcc();
      plVar3[bVar4] = lVar8;
      *(byte *)(lVar8 + 8) = bVar4;
      bVar4 = bVar4 - 1;
    }
  }
  lVar8 = *param_1;
  bVar4 = *(byte *)(param_1 + 1);
  FUN_10bd02bcc();
  *(long *)(lVar8 + ((ulong)(bVar4 + 1) & 0xff) * 8) = param_3;
  if (*(char *)((long)param_1 + 0xb) == '\0') {
    func_0x00010bd0ba48();
    for (bVar4 = 0; bVar4 <= *(byte *)(param_3 + 10); bVar4 = bVar4 + 1) {
      func_0x00010bd0b710();
    }
  }
  return;
}



/* Entry: 10bd03f44; end: 10bd03fb3;  */

void FUN_10bd03f44(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x9;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107c3a644();
  func_0x000107c3a698();
  if ((extraout_x9 == 0) && (func_0x000107c3a69c(), !(bool)in_ZR)) {
    func_0x000107c3a694();
    if (((bool)in_CY) && (func_0x000107c3a654(), (bool)in_CY)) {
      func_0x00010bd0a56c();
    }
    else {
      func_0x000107c3a664();
      FUN_10bd03fb4();
    }
    func_0x000107c3a660();
  }
  func_0x000107c3a634();
  func_0x000107c3a63c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c3a6d8();
  func_0x000107c3a658();
  func_0x000107c3a6a0();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x000107c3a68c();
      FUN_10bd0401c();
      func_0x000107c3a65c();
      func_0x000107c3a638(unaff_w21 & 0x7f);
      func_0x000107c3a6d0();
      func_0x00010bd04034();
    }
    func_0x000107c3a6c8();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10bd03fb4; end: 10bd0401b;  */

void FUN_10bd03fb4(void)

{
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107c3a6d8();
  func_0x000107c3a658();
  func_0x000107c3a6a0();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x000107c3a68c();
      FUN_10bd0401c();
      func_0x000107c3a65c();
      func_0x000107c3a638(unaff_w21 & 0x7f);
      func_0x000107c3a6d0();
      func_0x00010bd04034();
    }
    func_0x000107c3a6c8();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10bd0401c; end: 10bd0406b;  */

void FUN_10bd0401c(undefined8 param_1,undefined8 param_2)

{
  char in_NG;
  char in_OV;
  undefined8 extraout_x10;
  undefined8 auStack_20 [2];
  
  func_0x000107c3a6b0();
  auStack_20[0] = extraout_x10;
  if (in_NG == in_OV) {
    auStack_20[0] = param_2;
  }
  func_0x000100062cf8(auStack_20);
  return;
}



/* Entry: 10bd0406c; end: 10bd0408b;  */

void FUN_10bd0406c(void)

{
  func_0x00010bd0bba0();
  FUN_10bd0408c();
  return;
}



/* Entry: 10bd0408c; end: 10bd040b3;  */

void FUN_10bd0408c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10bd12650();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10bd040b4; end: 10bd0415f;  */

undefined8 * FUN_10bd040b4(void)

{
  int iVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long extraout_x9;
  undefined8 *puStack_d0;
  ulong uStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined8 auStack_58 [7];
  
  func_0x00010bd0a0d0();
  puVar2 = auStack_58;
  func_0x0001089ac660();
  puVar3 = auStack_58;
  func_0x00010bd0c2b4();
  func_0x000107c3a63c();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  uStack_68 = 0x10bd040f0;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x000107c3a644();
  func_0x000107c3a698();
  if ((extraout_x9 == 0) && (func_0x000107c3a69c(), !(bool)in_ZR)) {
    func_0x000107c3a694();
    if (((bool)in_CY) && (func_0x000107c3a654(), (bool)in_CY)) {
      puVar3 = (undefined8 *)&UNK_110d9bc28;
      func_0x00010bd0a56c();
    }
    else {
      func_0x000107c3a664();
      FUN_10bd0418c();
    }
    func_0x000107c3a660();
  }
  func_0x000107c3a634();
  func_0x000107c3a63c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uVar5 = (ulong)*(char *)((long)puVar2 + 0x17);
    puVar4 = puVar2;
    if ((long)uVar5 < 0) {
      puVar4 = (undefined8 *)*puVar2;
      uVar5 = puVar2[1];
    }
    uStack_c8 = puVar3[1];
    puStack_d0 = (undefined8 *)*puVar3;
    if (-1 < (char)*(byte *)((long)puVar3 + 0x17)) {
      uStack_c8 = (ulong)*(byte *)((long)puVar3 + 0x17);
      puStack_d0 = puVar3;
    }
    iVar1 = (int)&puStack_d0;
    pcStack_b8 = FUN_10bd04160;
    if (uStack_c8 == uVar5) {
      ppuStack_c0 = &puStack_70;
      func_0x000100067218(&puStack_d0,puVar4,uVar5);
      puVar2 = (undefined8 *)(ulong)(iVar1 == 0);
    }
    else {
      puVar2 = (undefined8 *)0x0;
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 10bd04160; end: 10bd0418b;  */

bool FUN_10bd04160(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puStack_20;
  ulong uStack_18;
  
  uVar4 = (ulong)*(char *)((long)param_1 + 0x17);
  puVar3 = param_1;
  if ((long)uVar4 < 0) {
    puVar3 = (undefined8 *)*param_1;
    uVar4 = param_1[1];
  }
  uStack_18 = param_2[1];
  puStack_20 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uStack_18 = (ulong)*(byte *)((long)param_2 + 0x17);
    puStack_20 = param_2;
  }
  iVar1 = (int)&puStack_20;
  if (uStack_18 == uVar4) {
    func_0x000100067218(&puStack_20,puVar3,uVar4);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


