/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1015f176c; end: 1015f186f;  */

void FUN_1015f176c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = unaff_x20[4];
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015f1870; end: 1015f18b7;  */

uint FUN_1015f1870(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_1015f1ed0(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1015f18b8; end: 1015f1923;  */

undefined8 FUN_1015f18b8(undefined8 param_1)

{
  FUN_1015f39d8(param_1,&UNK_1103e6410);
  return param_1;
}



/* Entry: 1015f1924; end: 1015f1e1b;  */

uint FUN_1015f1924(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  double *pdVar4;
  double *pdVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  ulong uVar12;
  ulong uVar13;
  double adStack_148 [3];
  double dStack_130;
  ulong uStack_128;
  ulong uStack_120;
  double dStack_110;
  ulong uStack_108;
  ulong uStack_100;
  double dStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  double dStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  double dStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  double dStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uVar3;
  
  uVar12 = param_1[3];
  dVar10 = (double)param_1[2];
  uVar6 = param_1[4];
  uVar13 = param_2[3];
  dVar11 = (double)param_2[2];
  uVar9 = param_2[4];
  dStack_b0 = dVar11;
  uStack_a8 = uVar13;
  uStack_a0 = uVar9;
  dStack_90 = dVar10;
  uStack_88 = uVar12;
  uStack_80 = uVar6;
  if (uVar6 >> 0x3c < 0xf) {
    if (0xe < uVar9 >> 0x3c) goto LAB_1015f19d8;
    if (dVar10 == dVar11) {
      func_0x0001015f45ac(&dStack_90,&dStack_d0,0x112db6f70,&UNK_10d964940);
      func_0x0001015f45ac(&dStack_b0,&dStack_d0,0x112db6f70,&UNK_10d964940);
      uVar2 = uVar12;
      FUN_100e25fcc(uVar12,uVar6,uVar13,uVar9);
      func_0x000100cb6648(dVar11,uVar13,uVar9);
      if ((uVar2 & 1) != 0) goto LAB_1015f1a7c;
    }
    else {
      func_0x0001015f45ac(&dStack_90,&dStack_d0,0x112db6f70,&UNK_10d964940);
      pdVar4 = &dStack_b0;
      pdVar5 = &dStack_d0;
LAB_1015f1dc8:
      func_0x0001015f45ac(pdVar4,pdVar5,0x112db6f70,&UNK_10d964940);
      func_0x000100cb6648(dVar11,uVar13,uVar9);
    }
  }
  else {
    if (0xe < uVar9 >> 0x3c) {
      func_0x0001015f45ac(&dStack_90,&dStack_d0,0x112db6f70,&UNK_10d964940);
      func_0x0001015f45ac(&dStack_b0,&dStack_d0,0x112db6f70,&UNK_10d964940);
LAB_1015f1a7c:
      FUN_100cb6644(dVar10,uVar12,uVar6);
      uVar12 = param_1[6];
      dVar10 = (double)param_1[5];
      uVar6 = param_1[7];
      uVar13 = param_2[6];
      dVar11 = (double)param_2[5];
      uVar9 = param_2[7];
      dStack_f0 = dVar11;
      uStack_e8 = uVar13;
      uStack_e0 = uVar9;
      dStack_d0 = dVar10;
      uStack_c8 = uVar12;
      uStack_c0 = uVar6;
      if (uVar6 >> 0x3c < 0xf) {
        if (0xe < uVar9 >> 0x3c) goto LAB_1015f1b14;
        if (dVar10 != dVar11) {
          func_0x0001015f45ac(&dStack_d0,&dStack_110,0x112db6f70,&UNK_10d964940);
          pdVar4 = &dStack_f0;
          pdVar5 = &dStack_110;
          goto LAB_1015f1dc8;
        }
        func_0x0001015f45ac(&dStack_d0,&dStack_110,0x112db6f70,&UNK_10d964940);
        func_0x0001015f45ac(&dStack_f0,&dStack_110,0x112db6f70,&UNK_10d964940);
        uVar2 = uVar12;
        FUN_100e25fcc(uVar12,uVar6,uVar13,uVar9);
        func_0x000100cb6648(dVar11,uVar13,uVar9);
        if ((uVar2 & 1) == 0) goto LAB_1015f1df0;
      }
      else {
        if (uVar9 >> 0x3c < 0xf) {
LAB_1015f1b14:
          func_0x0001015f45ac(&dStack_d0,&dStack_110,0x112db6f70,&UNK_10d964940);
          pdVar4 = &dStack_f0;
          pdVar5 = &dStack_110;
          uVar2 = uVar6;
          uVar7 = uVar12;
          dVar8 = dVar10;
          uVar6 = uVar9;
          uVar12 = uVar13;
          dVar10 = dVar11;
          goto LAB_1015f1cac;
        }
        func_0x0001015f45ac(&dStack_d0,&dStack_110,0x112db6f70,&UNK_10d964940);
        func_0x0001015f45ac(&dStack_f0,&dStack_110,0x112db6f70,&UNK_10d964940);
      }
      func_0x000100cb6648(dVar10,uVar12,uVar6);
      uVar12 = param_1[9];
      dVar10 = (double)param_1[8];
      uVar6 = param_1[10];
      uVar13 = param_2[9];
      dVar11 = (double)param_2[8];
      uVar9 = param_2[10];
      dStack_130 = dVar11;
      uStack_128 = uVar13;
      uStack_120 = uVar9;
      dStack_110 = dVar10;
      uStack_108 = uVar12;
      uStack_100 = uVar6;
      if (uVar6 >> 0x3c < 0xf) {
        if (0xe < uVar9 >> 0x3c) goto LAB_1015f1c80;
        if (dVar10 != dVar11) {
          func_0x0001015f45ac(&dStack_110,adStack_148,0x112db6f70,&UNK_10d964940);
          pdVar4 = &dStack_130;
          pdVar5 = adStack_148;
          goto LAB_1015f1dc8;
        }
        func_0x0001015f45ac(&dStack_110,adStack_148,0x112db6f70,&UNK_10d964940);
        func_0x0001015f45ac(&dStack_130,adStack_148,0x112db6f70,&UNK_10d964940);
        uVar2 = uVar12;
        FUN_100e25fcc(uVar12,uVar6,uVar13,uVar9);
        func_0x000100cb6648(dVar11,uVar13,uVar9);
        if ((uVar2 & 1) == 0) goto LAB_1015f1df0;
      }
      else {
        if (uVar9 >> 0x3c < 0xf) {
LAB_1015f1c80:
          func_0x0001015f45ac(&dStack_110,adStack_148,0x112db6f70,&UNK_10d964940);
          pdVar4 = &dStack_130;
          pdVar5 = adStack_148;
          uVar2 = uVar6;
          uVar7 = uVar12;
          dVar8 = dVar10;
          uVar6 = uVar9;
          uVar12 = uVar13;
          dVar10 = dVar11;
          goto LAB_1015f1cac;
        }
        func_0x0001015f45ac(&dStack_110,adStack_148,0x112db6f70,&UNK_10d964940);
        func_0x0001015f45ac(&dStack_130,adStack_148,0x112db6f70,&UNK_10d964940);
      }
      func_0x000100cb6648(dVar10,uVar12,uVar6);
      uVar3 = *param_1;
      FUN_100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar3;
      goto LAB_1015f1df8;
    }
LAB_1015f19d8:
    func_0x0001015f45ac(&dStack_90,&dStack_d0,0x112db6f70,&UNK_10d964940);
    pdVar4 = &dStack_b0;
    pdVar5 = &dStack_d0;
    uVar2 = uVar6;
    uVar7 = uVar12;
    dVar8 = dVar10;
    uVar6 = uVar9;
    uVar12 = uVar13;
    dVar10 = dVar11;
LAB_1015f1cac:
    func_0x0001015f45ac(pdVar4,pdVar5,0x112db6f70,&UNK_10d964940);
    func_0x000100cb6648(dVar8,uVar7,uVar2);
  }
LAB_1015f1df0:
  func_0x000100cb6648(dVar10,uVar12,uVar6);
  uVar1 = 0;
LAB_1015f1df8:
  return uVar1 & 1;
}



/* Entry: 1015f1e1c; end: 1015f1ecf;  */

void FUN_1015f1e1c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  func_0x00010006c00c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3 & 0x7fffffffffffffff);
  return;
}



/* Entry: 1015f1ed0; end: 1015f28c7;  */

uint FUN_1015f1ed0(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar9 = param_1[1];
  uVar7 = *param_1;
  uVar5 = param_1[2];
  uVar10 = param_2[1];
  uVar8 = *param_2;
  uVar6 = param_2[2];
  bVar1 = ((uVar10 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0;
  bVar2 = ((uVar6 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0;
  uStack_a0 = uVar8;
  uStack_98 = uVar10;
  uStack_90 = uVar6;
  uStack_80 = uVar7;
  uStack_78 = uVar9;
  uStack_70 = uVar5;
  if ((((uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     ((uVar5 & 0xf000000000000007) == 0xf000000000000007)) {
    if (bVar1 || bVar2) {
LAB_1015f1fa4:
      func_0x0001015f45ac(&uStack_80,auStack_b8,0x112db8f00,&UNK_10d969fc8);
      func_0x0001015f45ac(&uStack_a0,auStack_b8,0x112db8f00,&UNK_10d969fc8);
      func_0x0001015d55dc(uVar7,uVar9,uVar5);
      uVar7 = uVar8;
      uVar9 = uVar10;
      uVar5 = uVar6;
LAB_1015f1ff8:
      func_0x0001015d55dc(uVar7,uVar9,uVar5);
LAB_1015f1ffc:
      uVar3 = 0;
      goto LAB_1015f2158;
    }
    func_0x0001015f45ac(&uStack_80,auStack_b8,0x112db8f00,&UNK_10d969fc8);
    func_0x0001015f45ac(&uStack_a0,auStack_b8,0x112db8f00,&UNK_10d969fc8);
    FUN_1015d55d8(uVar7,uVar9,uVar5);
  }
  else {
    if (!bVar1 && !bVar2) goto LAB_1015f1fa4;
    uVar4 = uVar7;
    if ((long)uVar5 < 0) {
      if (-1 < (long)uVar6) goto LAB_1015f2070;
      func_0x0001015f45ac(&uStack_80,auStack_b8,0x112db8f00,&UNK_10d969fc8);
      func_0x0001015f45ac(&uStack_a0,auStack_b8,0x112db8f00,&UNK_10d969fc8);
      FUN_101646fd8(uVar7,uVar9,uVar5 & 0x7fffffffffffffff,uVar8,uVar10,uVar6 & 0x7fffffffffffffff);
    }
    else {
      if ((long)uVar6 < 0) {
LAB_1015f2070:
        func_0x0001015f45ac(&uStack_80,auStack_b8,0x112db8f00,&UNK_10d969fc8);
        func_0x0001015f45ac(&uStack_a0,auStack_b8,0x112db8f00,&UNK_10d969fc8);
        func_0x0001015d55dc(uVar8,uVar10,uVar6);
        goto LAB_1015f1ff8;
      }
      func_0x0001015f45ac(&uStack_80,auStack_b8,0x112db8f00,&UNK_10d969fc8);
      func_0x0001015f45ac(&uStack_a0,auStack_b8,0x112db8f00,&UNK_10d969fc8);
      func_0x000103586e1c(uVar7,uVar9,uVar5,uVar8,uVar10,uVar6);
    }
    func_0x0001015d55dc(uVar8,uVar10,uVar6);
    func_0x0001015d55dc(uVar7,uVar9,uVar5);
    if ((uVar4 & 1) == 0) goto LAB_1015f1ffc;
  }
  uVar7 = param_1[3];
  FUN_100e25fcc(uVar7,param_1[4],param_2[3],param_2[4]);
  uVar3 = (uint)uVar7;
LAB_1015f2158:
  return uVar3 & 1;
}



/* Entry: 1015f28c8; end: 1015f2987;  */

void FUN_1015f28c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8e68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d969c00;
  func_0x000107c61520(&UNK_10d969c00,&UNK_1103e6378);
  puRam0000000112db8e68 = puVar1;
  return;
}



/* Entry: 1015f2988; end: 1015f29ab;  */

void FUN_1015f2988(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015f29ac();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015f29ac; end: 1015f29eb;  */

void FUN_1015f29ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8e90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d969bd8;
  func_0x000107c61520(&UNK_10d969bd8,&UNK_1103e6378);
  puRam0000000112db8e90 = puVar1;
  return;
}



/* Entry: 1015f29ec; end: 1015f2a03;  */

void FUN_1015f29ec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015f28c8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1015d5360)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015f2a04; end: 1015f2a43;  */

void FUN_1015f2a04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8e98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d969c40;
  func_0x000107c61520(&UNK_10d969c40,&UNK_1103e6378);
  puRam0000000112db8e98 = puVar1;
  return;
}



/* Entry: 1015f2a44; end: 1015f2a67;  */

void FUN_1015f2a44(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015f2a68();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015f2a68; end: 1015f2aa7;  */

void FUN_1015f2a68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8ea0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d969cb0;
  func_0x000107c61520(&UNK_10d969cb0,&UNK_1103e6410);
  puRam0000000112db8ea0 = puVar1;
  return;
}



/* Entry: 1015f2aa8; end: 1015f2abb;  */

void FUN_1015f2aa8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1015f2908)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1015f2abc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015f2abc; end: 1015f2afb;  */

void FUN_1015f2abc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8ea8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d969c68;
  func_0x000107c61520(&DAT_10d969c68,&UNK_1103e6410);
  puRam0000000112db8ea8 = puVar1;
  return;
}



/* Entry: 1015f2afc; end: 1015f2aff;  */

void FUN_1015f2afc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8eb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d969d18;
  func_0x000107c61520(&UNK_10d969d18,&UNK_1103e6410);
  puRam0000000112db8eb0 = puVar1;
  return;
}



/* Entry: 1015f2b00; end: 1015f2b3f;  */

void FUN_1015f2b00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8eb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d969d18;
  func_0x000107c61520(&UNK_10d969d18,&UNK_1103e6410);
  puRam0000000112db8eb0 = puVar1;
  return;
}



/* Entry: 1015f2b40; end: 1015f2b63;  */

void FUN_1015f2b40(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015f2b64();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015f2b64; end: 1015f2ba3;  */

void FUN_1015f2b64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8eb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d969d88;
  func_0x000107c61520(&UNK_10d969d88,&UNK_1103e6498);
  puRam0000000112db8eb8 = puVar1;
  return;
}



/* Entry: 1015f2ba4; end: 1015f2bb7;  */

void FUN_1015f2ba4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1015f2948)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1015f2be8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015f2bb8; end: 1015f2be7;  */

void FUN_1015f2bb8(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015f2be8; end: 1015f2c27;  */

void FUN_1015f2be8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8ec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d969d40;
  func_0x000107c61520(&DAT_10d969d40,&UNK_1103e6498);
  puRam0000000112db8ec0 = puVar1;
  return;
}



/* Entry: 1015f2c28; end: 1015f2c2b;  */

void FUN_1015f2c28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8ec8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d969df0;
  func_0x000107c61520(&UNK_10d969df0,&UNK_1103e6498);
  puRam0000000112db8ec8 = puVar1;
  return;
}



/* Entry: 1015f2c2c; end: 1015f2c6b;  */

void FUN_1015f2c2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8ec8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d969df0;
  func_0x000107c61520(&UNK_10d969df0,&UNK_1103e6498);
  puRam0000000112db8ec8 = puVar1;
  return;
}



/* Entry: 1015f2c6c; end: 1015f2d6f;  */

/* WARNING: Possible PIC construction at 0x0001015f2c98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015f2cc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015f2cf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015f2ccc) */
/* WARNING: Removing unreachable block (ram,0x0001015f2cdc) */
/* WARNING: Removing unreachable block (ram,0x0001015f2ce4) */
/* WARNING: Removing unreachable block (ram,0x0001015f2cfc) */
/* WARNING: Removing unreachable block (ram,0x0001015f2d0c) */
/* WARNING: Removing unreachable block (ram,0x0001015f2cf4) */
/* WARNING: Removing unreachable block (ram,0x0001015f2c9c) */
/* WARNING: Removing unreachable block (ram,0x0001015f2cac) */
/* WARNING: Removing unreachable block (ram,0x0001015f2cb4) */
/* WARNING: Removing unreachable block (ram,0x0001015f2d14) */
/* WARNING: Removing unreachable block (ram,0x0001015f2d30) */
/* WARNING: Removing unreachable block (ram,0x0001015f2d34) */
/* WARNING: Removing unreachable block (ram,0x0001015f2d64) */
/* WARNING: Removing unreachable block (ram,0x0001015f2d38) */
/* WARNING: Removing unreachable block (ram,0x0001015f2d40) */
/* WARNING: Removing unreachable block (ram,0x0001015f2d4c) */
/* WARNING: Removing unreachable block (ram,0x0001015f2d54) */
/* WARNING: Removing unreachable block (ram,0x0001015f2cc4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1015f2c6c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(ulong *)(param_1 + 0x30);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x38) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x38) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1015f2d70; end: 1015f35cb;  */

undefined8 * FUN_1015f2d70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar5 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar5;
  uVar6 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar6;
  uVar4 = param_2[6];
  uVar1 = param_2[7];
  func_0x000107c61434();
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  func_0x00010006c00c(uVar4,uVar1);
  param_1[6] = uVar4;
  param_1[7] = uVar1;
  uVar3 = param_2[10];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = param_2[9];
    param_1[8] = param_2[8];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[9] = uVar4;
    param_1[10] = uVar3;
  }
  else {
    uVar4 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar4;
    param_1[10] = param_2[10];
  }
  uVar3 = param_2[0xc];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = param_2[0xb];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[0xb] = uVar4;
    param_1[0xc] = uVar3;
    uVar3 = param_2[0xf];
    if (uVar3 >> 0x3c < 0xf) {
      uVar4 = param_2[0xe];
      param_1[0xd] = param_2[0xd];
      func_0x00010006c00c(uVar4,uVar3);
      param_1[0xe] = uVar4;
      param_1[0xf] = uVar3;
    }
    else {
      uVar4 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar4;
      param_1[0xf] = param_2[0xf];
    }
    uVar3 = param_2[0x12];
    if (uVar3 >> 0x3c < 0xf) {
      uVar4 = param_2[0x11];
      param_1[0x10] = param_2[0x10];
      func_0x00010006c00c(uVar4,uVar3);
      param_1[0x11] = uVar4;
      param_1[0x12] = uVar3;
    }
    else {
      uVar4 = param_2[0x10];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar4;
      param_1[0x12] = param_2[0x12];
    }
    uVar3 = param_2[0x15];
    if (uVar3 >> 0x3c < 0xf) {
      uVar4 = param_2[0x14];
      param_1[0x13] = param_2[0x13];
      func_0x00010006c00c(uVar4,uVar3);
      param_1[0x14] = uVar4;
      param_1[0x15] = uVar3;
    }
    else {
      uVar4 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar4;
      param_1[0x15] = param_2[0x15];
    }
  }
  else {
    uVar4 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar4;
    uVar4 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar4;
    uVar4 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar4;
    param_1[0x15] = param_2[0x15];
    uVar4 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar4;
    uVar4 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar4;
  }
  uVar3 = param_2[0x17];
  uVar2 = param_2[0x18];
  if (((uVar3 & 0x3000000000000000) == 0x3000000000000000) &&
     ((uVar2 & 0xf000000000000007) == 0x7000000000000007)) {
    uVar4 = param_2[0x16];
    uVar6 = param_2[0x19];
    uVar5 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar4;
    param_1[0x19] = uVar6;
    param_1[0x18] = uVar5;
    param_1[0x1a] = param_2[0x1a];
  }
  else {
    if (((uVar3 & 0x3000000000000000) == 0x3000000000000000) &&
       ((uVar2 & 0xf000000000000007) == 0xf000000000000007)) {
      uVar4 = param_2[0x16];
      param_1[0x17] = param_2[0x17];
      param_1[0x16] = uVar4;
      param_1[0x18] = param_2[0x18];
    }
    else {
      uVar4 = param_2[0x16];
      FUN_1015f1e1c(uVar4,uVar3,uVar2);
      param_1[0x16] = uVar4;
      param_1[0x17] = uVar3;
      param_1[0x18] = uVar2;
    }
    uVar4 = param_2[0x19];
    uVar5 = param_2[0x1a];
    func_0x00010006c00c(uVar4,uVar5);
    param_1[0x19] = uVar4;
    param_1[0x1a] = uVar5;
  }
  return param_1;
}



/* Entry: 1015f35cc; end: 1015f390b;  */

undefined8 * FUN_1015f35cc(undefined8 *param_1)

{
  func_0x0001015f1eac(*param_1,param_1[1],param_1[2]);
  return param_1;
}



/* Entry: 1015f390c; end: 1015f39d7;  */

int FUN_1015f390c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x36] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1015f39d8; end: 1015f3a4f;  */

/* WARNING: Possible PIC construction at 0x0001015f39f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015f3a20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015f39f4) */
/* WARNING: Removing unreachable block (ram,0x0001015f3a04) */
/* WARNING: Removing unreachable block (ram,0x0001015f3a0c) */
/* WARNING: Removing unreachable block (ram,0x0001015f3a24) */
/* WARNING: Removing unreachable block (ram,0x0001015f3a40) */
/* WARNING: Removing unreachable block (ram,0x0001015f3a34) */
/* WARNING: Removing unreachable block (ram,0x0001015f3a1c) */

void FUN_1015f39d8(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 1015f3a50; end: 1015f3e9f;  */

undefined8 * FUN_1015f3a50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar3,uVar1);
  *param_1 = uVar3;
  param_1[1] = uVar1;
  uVar2 = param_2[4];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = param_2[3];
    param_1[2] = param_2[2];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[3] = uVar3;
    param_1[4] = uVar2;
  }
  else {
    uVar3 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar3;
    param_1[4] = param_2[4];
  }
  uVar2 = param_2[7];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = param_2[6];
    param_1[5] = param_2[5];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[6] = uVar3;
    param_1[7] = uVar2;
  }
  else {
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    param_1[7] = param_2[7];
  }
  uVar2 = param_2[10];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = param_2[9];
    param_1[8] = param_2[8];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[9] = uVar3;
    param_1[10] = uVar2;
  }
  else {
    uVar3 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar3;
    param_1[10] = param_2[10];
  }
  return param_1;
}



/* Entry: 1015f3ea0; end: 1015f3f67;  */

int FUN_1015f3ea0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x16] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1015f3f68; end: 1015f3faf;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1015f3f68(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (((param_1[1] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 ||
      (param_1[2] & 0xf000000000000007) != 0xf000000000000007) {
    func_0x0001015f1eac(*param_1);
  }
  uVar1 = param_1[3];
  uVar2 = (uint)((ulong)param_1[4] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[4] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1015f3fb0; end: 1015f414f;  */

undefined8 * FUN_1015f3fb0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  if (((uVar1 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0 &&
      (uVar2 & 0xf000000000000007) == 0xf000000000000007) {
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    param_1[2] = param_2[2];
  }
  else {
    uVar4 = *param_2;
    FUN_1015f1e1c(uVar4,uVar1,uVar2);
    *param_1 = uVar4;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
  }
  uVar4 = param_2[3];
  uVar3 = param_2[4];
  func_0x00010006c00c(uVar4,uVar3);
  param_1[3] = uVar4;
  param_1[4] = uVar3;
  return param_1;
}



/* Entry: 1015f4150; end: 1015f41eb;  */

undefined8 * FUN_1015f4150(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (((param_1[1] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 ||
      (param_1[2] & 0xf000000000000007) != 0xf000000000000007) {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    if (((uVar1 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 ||
        (uVar2 & 0xf000000000000007) != 0xf000000000000007) {
      uVar4 = *param_1;
      *param_1 = *param_2;
      param_1[1] = uVar1;
      param_1[2] = uVar2;
      func_0x0001015f1eac(uVar4);
      goto LAB_1015f41cc;
    }
    FUN_1015f35cc(param_1);
  }
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[2] = param_2[2];
LAB_1015f41cc:
  uVar4 = param_1[3];
  uVar3 = param_1[4];
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar5;
  func_0x00010006c090(uVar4,uVar3);
  return param_1;
}



/* Entry: 1015f41ec; end: 1015f42db;  */

int FUN_1015f41ec(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x1fd < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0x1fe;
  }
  uVar3 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x3c) & 3 |
          ((uint)*(undefined8 *)(param_1 + 4) & 7) << 2 | uVar3 >> 0x17 & 0xe0;
  iVar2 = 0x1fe - (uVar3 >> 0x1f | uVar1 << 1);
  if (uVar1 == 0) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1015f42dc; end: 1015f4377;  */

undefined8 * FUN_1015f42dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  FUN_1015f1e1c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return param_1;
}



/* Entry: 1015f4378; end: 1015f43b7;  */

undefined8 * FUN_1015f4378(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[2];
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[2] = uVar4;
  func_0x0001015f1eac(uVar3,uVar1,uVar2);
  return param_1;
}



/* Entry: 1015f43b8; end: 1015f44bf;  */

int FUN_1015f43b8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x1fe < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x1ff;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uVar1 >> 0x1f |
          ((uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x3c) & 3 |
           ((uint)*(undefined8 *)(param_1 + 4) & 7) << 2 | uVar1 >> 0x17 & 0xe0) << 1) ^ 0x1ff;
  if (0x1fd < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1015f44c0; end: 1015f457f;  */

void FUN_1015f44c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8ed8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d969d5c;
  func_0x000107c61520(&DAT_10d969d5c,&UNK_1103e6498);
  puRam0000000112db8ed8 = puVar1;
  return;
}



/* Entry: 1015f4580; end: 1015f45f3;  */

void FUN_1015f4580(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010006c090();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_3);
    return;
  }
  return;
}



/* Entry: 1015f45f4; end: 1015f4607;  */

long FUN_1015f45f4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1015f4608; end: 1015f469b;  */

bool FUN_1015f4608(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  lStack_40 = lVar3;
  if (lVar3 == 0) {
    FUN_1015f48b0(&uStack_50,auStack_68,0x112db8f08,&UNK_10d969fd0);
  }
  else {
    FUN_1015f48b0(&uStack_50,auStack_68,0x112db8f08,&UNK_10d969fd0);
    FUN_1015f469c(uVar1,uVar2,lVar3);
    uVar1 = 0;
    uVar2 = 0;
  }
  FUN_1015f469c(uVar1,uVar2,0);
  return lVar3 != 0;
}



/* Entry: 1015f469c; end: 1015f46c7;  */

void FUN_1015f469c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010006c090();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_3);
    return;
  }
  return;
}



/* Entry: 1015f46c8; end: 1015f475b;  */

bool FUN_1015f46c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar3 = *(long *)(unaff_x20 + 0x48);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  lStack_40 = lVar3;
  if (lVar3 == 0) {
    FUN_1015f48b0(&uStack_50,auStack_68,0x112db8f10,&UNK_10d969fd8);
  }
  else {
    FUN_1015f48b0(&uStack_50,auStack_68,0x112db8f10,&UNK_10d969fd8);
    FUN_1015f469c(uVar1,uVar2,lVar3);
    uVar1 = 0;
    uVar2 = 0;
  }
  FUN_1015f469c(uVar1,uVar2,0);
  return lVar3 != 0;
}



/* Entry: 1015f475c; end: 1015f47a3;  */

void FUN_1015f475c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96a280,7,2);
  uRam00000001138011d0 = uStack_38;
  uRam00000001138011c8 = uStack_40;
  uRam00000001138011e0 = uStack_28;
  uRam00000001138011d8 = uStack_30;
  uRam00000001138011f0 = uStack_18;
  uRam00000001138011e8 = uStack_20;
  return;
}



/* Entry: 1015f47a4; end: 1015f4827;  */

void FUN_1015f47a4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x150))();
    }
  }
  return;
}



/* Entry: 1015f4828; end: 1015f48af;  */

void FUN_1015f4828(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  long unaff_x21;
  
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_7 + 0x70))(param_2,param_3,1,param_6,param_7), unaff_x21 == 0)) {
    func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 1015f48b0; end: 1015f48f7;  */

undefined8 FUN_1015f48b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1015f48f8; end: 1015f4933;  */

void FUN_1015f48f8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 1015f4934; end: 1015f4963;  */

undefined1  [16] FUN_1015f4934(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 1015f4964; end: 1015f4997;  */

void FUN_1015f4964(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1015f4998; end: 1015f49ab;  */

undefined1  [16] FUN_1015f4998(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1015f49a8;
  return auVar1;
}



/* Entry: 1015f49ac; end: 1015f49e3;  */

void FUN_1015f49ac(void)

{
  FUN_1015f47a4();
  return;
}



/* Entry: 1015f49e4; end: 1015f49e7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015f49e4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 1015f49e8; end: 1015f4a1f;  */

uint FUN_1015f49e8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x0001015f64a0();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 1015f4a20; end: 1015f4b37;  */

/* WARNING: Possible PIC construction at 0x0001015f4a54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001015f4a58) */
/* WARNING: Removing unreachable block (ram,0x0001015f4a80) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015f4a20(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  byte *unaff_x19;
  long lVar23;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar24;
  ulong unaff_x22;
  long lVar25;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined1 auVar42 [16];
  
  lVar23 = param_1[2];
  uVar15 = param_1[3];
  pbVar9 = (byte *)unaff_x20[2];
  pbVar24 = (byte *)unaff_x20[3];
  pbVar11 = (byte *)*unaff_x20;
  pbVar13 = (byte *)unaff_x20[1];
  pbVar14 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  if ((byte *)*unaff_x20 != (byte *)*param_1 || (byte *)unaff_x20[1] != (byte *)param_1[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar11,pbVar13,pbVar14,pbVar16,0);
    return pbVar11;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar24 >> 0x20);
    uVar17 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar15 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar12 = pbVar24;
    if ((ulong)pbVar24 >> 0x3e == 3) {
      uVar19 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar24 != (byte *)0xc000000000000000)) ||
          (uVar15 >> 0x3e < 3)) || ((uVar19 = 0, lVar23 != 0 || (uVar15 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar17 == 0) {
        uVar19 = (ulong)pbVar24 >> 0x30 & 0xff;
      }
      else {
        iVar18 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar18,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar19 = (ulong)(iVar18 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar20 == 0) {
        uVar21 = uVar15 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar18 = (int)((ulong)lVar23 >> 0x20);
      if (SBORROW4(iVar18,(int)lVar23)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar19 == (long)(iVar18 - (int)lVar23)) goto LAB_100e26094;
LAB_100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar17 == 2) {
        uVar19 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar19 = 0;
      if (uVar20 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar20 == 2) {
        uVar21 = *(long *)(lVar23 + 0x18) - *(long *)(lVar23 + 0x10);
        if (SBORROW8(*(long *)(lVar23 + 0x18),*(long *)(lVar23 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar19 != uVar21) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar19 < 1) goto LAB_100e26128;
        if (uVar17 < 2) {
          if (uVar17 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar24;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar24 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar24 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar24 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar24 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar24 >> 0x28);
            pbVar12 = (byte *)((long)register0x00000008 + (((ulong)pbVar24 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar24;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar12 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar12);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar12) {
                pbVar12 = unaff_x23;
              }
              pbVar12 = pbVar12 + (long)pbVar9;
              goto LAB_100e262a4;
            }
          }
          pbVar12 = (byte *)0x0;
        }
        else {
          if (uVar17 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar12 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
          }
          lVar25 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar12 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar25 - (long)pbVar12);
          }
          unaff_x23 = unaff_x24 + -lVar25;
          if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar24;
          if (pbVar9 == (byte *)0x0) {
            pbVar12 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar12) {
              pbVar12 = unaff_x23;
            }
            pbVar12 = pbVar12 + (long)pbVar9;
          }
        }
LAB_100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar24 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar23,uVar15)
        ;
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar15;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar19 == 0);
      }
    }
LAB_100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar22 = *(byte **)(pbVar8 + 0x18);
    bVar26 = pbVar8[0x28];
    pbVar24 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar13 = pbVar9;
    if (bVar26 < 3) {
      if (bVar26 == 0) {
        if (pbVar12[0x28] == 0) {
          lVar23 = *(long *)pbVar12;
          uVar10 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar23,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar26 == 1) {
        if (pbVar12[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar16 = *(byte **)(pbVar12 + 0x10);
        lVar23 = *(long *)pbVar12;
        uVar10 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar23,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar13 = pbVar24;
        if ((pbVar9 == pbVar14) && (pbVar24 == pbVar16)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar12[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar16 = *(byte **)(pbVar12 + 8);
        lVar23 = *(long *)(pbVar12 + 0x18);
        if ((pbVar11 == pbVar14) && (pbVar9 == pbVar16)) {
          if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar22 != (byte *)0x0) {
            if (lVar23 == 0) {
              return (byte *)0x0;
            }
            FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar23);
            func_0x000107c61174();
            pbVar9 = pbVar22;
            func_0x000107c60118();
            func_0x000107c61170(pbVar22);
            func_0x000107c61170(lVar23);
            pbVar22 = pbVar9;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar23 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar25 = *(long *)(pbVar8 + 0x20);
    if (bVar26 < 5) {
      if (bVar26 != 3) {
        if (pbVar12[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar16 = *(byte **)(pbVar12 + 8);
        if (((pbVar11 == pbVar14) && (pbVar9 == pbVar16)) &&
           (pbVar11 = pbVar24, pbVar13 = pbVar22, pbVar14 = *(byte **)(pbVar12 + 0x10),
           pbVar16 = *(byte **)(pbVar12 + 0x18),
           pbVar24 == *(byte **)(pbVar12 + 0x10) && pbVar22 == *(byte **)(pbVar12 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar12[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar12 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar16 = *(byte **)(pbVar12 + 0x10);
      lVar23 = *(long *)(pbVar12 + 0x20);
      if (pbVar24 == (byte *)0x0) {
        if (pbVar16 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar16 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar11 = pbVar9;
        pbVar13 = pbVar24;
        if ((pbVar9 != pbVar14) || (pbVar24 != pbVar16)) goto code_r0x000107c605b8;
      }
      if (lVar25 != 0) {
        if (lVar23 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar22 == *(byte **)(pbVar12 + 0x18)) && (lVar25 == lVar23)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar22,lVar25,*(byte **)(pbVar12 + 0x18),lVar23,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar22 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar26 != 5) {
      if ((((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar25 == 0) && pbVar24 == (byte *)0x0) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar25 = *(long *)(pbVar12 + 0x20);
        lVar23 = *(long *)(pbVar12 + 0x18);
        bVar26 = pbVar12[8] | (byte)lVar23;
        bVar27 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
        bVar28 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
        bVar29 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
        bVar30 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
        bVar31 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
        bVar32 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
        bVar33 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
        bVar34 = pbVar12[0x10] | (byte)lVar25;
        bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
        bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
        bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
        bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
        bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
        bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
        bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
        auVar42[1] = bVar27;
        auVar42[0] = bVar26;
        auVar42[2] = bVar28;
        auVar42[3] = bVar29;
        auVar42[4] = bVar30;
        auVar42[5] = bVar31;
        auVar42[6] = bVar32;
        auVar42[7] = bVar33;
        auVar42[8] = bVar34;
        auVar42[9] = bVar35;
        auVar42[10] = bVar36;
        auVar42[0xb] = bVar37;
        auVar42[0xc] = bVar38;
        auVar42[0xd] = bVar39;
        auVar42[0xe] = bVar40;
        auVar42[0xf] = bVar41;
        auVar3[1] = bVar27;
        auVar3[0] = bVar26;
        auVar3[2] = bVar28;
        auVar3[3] = bVar29;
        auVar3[4] = bVar30;
        auVar3[5] = bVar31;
        auVar3[6] = bVar32;
        auVar3[7] = bVar33;
        auVar3[8] = bVar34;
        auVar3[9] = bVar35;
        auVar3[10] = bVar36;
        auVar3[0xb] = bVar37;
        auVar3[0xc] = bVar38;
        auVar3[0xd] = bVar39;
        auVar3[0xe] = bVar40;
        auVar3[0xf] = bVar41;
        auVar42 = NEON_ext(auVar42,auVar3,8,1);
        if (CONCAT17(bVar33 | auVar42[7],
                     CONCAT16(bVar32 | auVar42[6],
                              CONCAT15(bVar31 | auVar42[5],
                                       CONCAT14(bVar30 | auVar42[4],
                                                CONCAT13(bVar29 | auVar42[3],
                                                         CONCAT12(bVar28 | auVar42[2],
                                                                  CONCAT11(bVar27 | auVar42[1],
                                                                           bVar26 | auVar42[0]))))))
                    ) == 0 && *(long *)pbVar12 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar24 == (byte *)0x0) &&
          lVar25 == 0)) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 2) {
          return (byte *)0x0;
        }
      }
      lVar25 = *(long *)(pbVar12 + 0x20);
      lVar23 = *(long *)(pbVar12 + 0x18);
      bVar26 = pbVar12[8] | (byte)lVar23;
      bVar27 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
      bVar28 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
      bVar29 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
      bVar30 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
      bVar31 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
      bVar32 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
      bVar33 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
      bVar34 = pbVar12[0x10] | (byte)lVar25;
      bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
      bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
      bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
      bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
      bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
      bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
      bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
      auVar1[1] = bVar27;
      auVar1[0] = bVar26;
      auVar1[2] = bVar28;
      auVar1[3] = bVar29;
      auVar1[4] = bVar30;
      auVar1[5] = bVar31;
      auVar1[6] = bVar32;
      auVar1[7] = bVar33;
      auVar1[8] = bVar34;
      auVar1[9] = bVar35;
      auVar1[10] = bVar36;
      auVar1[0xb] = bVar37;
      auVar1[0xc] = bVar38;
      auVar1[0xd] = bVar39;
      auVar1[0xe] = bVar40;
      auVar1[0xf] = bVar41;
      auVar2[1] = bVar27;
      auVar2[0] = bVar26;
      auVar2[2] = bVar28;
      auVar2[3] = bVar29;
      auVar2[4] = bVar30;
      auVar2[5] = bVar31;
      auVar2[6] = bVar32;
      auVar2[7] = bVar33;
      auVar2[8] = bVar34;
      auVar2[9] = bVar35;
      auVar2[10] = bVar36;
      auVar2[0xb] = bVar37;
      auVar2[0xc] = bVar38;
      auVar2[0xd] = bVar39;
      auVar2[0xe] = bVar40;
      auVar2[0xf] = bVar41;
      auVar42 = NEON_ext(auVar1,auVar2,8,1);
      lVar23 = CONCAT17(bVar33 | auVar42[7],
                        CONCAT16(bVar32 | auVar42[6],
                                 CONCAT15(bVar31 | auVar42[5],
                                          CONCAT14(bVar30 | auVar42[4],
                                                   CONCAT13(bVar29 | auVar42[3],
                                                            CONCAT12(bVar28 | auVar42[2],
                                                                     CONCAT11(bVar27 | auVar42[1],
                                                                              bVar26 | auVar42[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar12[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar23 = *(long *)(pbVar12 + 8);
    uVar15 = *(ulong *)(pbVar12 + 0x10);
    lVar25 = *(long *)pbVar12;
    uVar10 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar25,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 1015f4b38; end: 1015f4b73;  */

void FUN_1015f4b38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db8f78;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db8f78,&UNK_10d96a228);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015f4b74; end: 1015f4cef;  */

void FUN_1015f4b74(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = *unaff_x20;
  uStack_48 = unaff_x20[1];
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015f4cf0; end: 1015f4d37;  */

void FUN_1015f4cf0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96a230,0x49,2);
  uRam0000000113801200 = uStack_38;
  uRam00000001138011f8 = uStack_40;
  uRam0000000113801210 = uStack_28;
  uRam0000000113801208 = uStack_30;
  uRam0000000113801220 = uStack_18;
  uRam0000000113801218 = uStack_20;
  return;
}



/* Entry: 1015f4d38; end: 1015f4e6f;  */

/* WARNING: Removing unreachable block (ram,0x0001015f4e4c) */

void FUN_1015f4d38(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015d51e0();
          lVar2 = unaff_x20 + 0x20;
          puVar3 = &UNK_1103ed2f8;
        }
        else {
          if (lVar1 != 2) goto LAB_1015f4dd4;
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015d5160();
          lVar2 = unaff_x20 + 0x38;
          puVar3 = &UNK_110666f08;
        }
LAB_1015f4dc0:
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_1015f5ad8();
          lVar2 = unaff_x20 + 0x50;
          puVar3 = &UNK_1103e6760;
          goto LAB_1015f4dc0;
        }
        if (lVar1 == 4) {
          (**(code **)(param_3 + 0x168))();
        }
      }
LAB_1015f4dd4:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 1015f4e70; end: 1015f4f53;  */

void FUN_1015f4e70(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_1015f4f54();
  if (unaff_x21 != 0) {
    return;
  }
  FUN_1015f4fd4();
  FUN_1015f5054();
  lVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)lVar1;
      lVar6 = lVar1 >> 0x20;
      goto LAB_1015f4f10;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto LAB_1015f4f30;
  }
  else {
    if (uVar4 != 2) goto LAB_1015f4f30;
    lVar5 = *(long *)(lVar1 + 0x10);
    lVar6 = *(long *)(lVar1 + 0x18);
LAB_1015f4f10:
    if (lVar5 == lVar6) goto LAB_1015f4f30;
  }
  (**(code **)(param_3 + 0x78))(lVar1,uVar2,4,param_2,param_3);
LAB_1015f4f30:
  func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  return;
}



/* Entry: 1015f4f54; end: 1015f4fd3;  */

void FUN_1015f4f54(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  lStack_50 = *(long *)(param_1 + 0x30);
  if (lStack_50 != 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d51e0();
    (*pcVar1)(&uStack_60,1,&UNK_1103ed2f8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015f4fd4; end: 1015f5053;  */

void FUN_1015f4fd4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  lStack_50 = *(long *)(param_1 + 0x48);
  if (lStack_50 != 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x40);
    uStack_60 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5160();
    (*pcVar1)(&uStack_60,2,&UNK_110666f08,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015f5054; end: 1015f50d7;  */

void FUN_1015f5054(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x58);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    uStack_48 = *(undefined8 *)(param_1 + 0x68);
    uStack_50 = *(undefined8 *)(param_1 + 0x60);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1015f5ad8();
    (*pcVar1)(&uStack_60,3,&UNK_1103e6760,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015f50d8; end: 1015f511f;  */

uint FUN_1015f50d8(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_140 [32];
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar11 = param_1[5];
  uVar8 = param_1[4];
  uVar6 = param_1[6];
  uVar12 = param_2[5];
  uVar9 = param_2[4];
  lVar7 = param_2[6];
  uStack_a0 = uVar9;
  uStack_98 = uVar12;
  lStack_90 = lVar7;
  uStack_80 = uVar8;
  uStack_78 = uVar11;
  uStack_70 = uVar6;
  if (uVar6 == 0) {
    if (lVar7 != 0) goto LAB_1015f5620;
    FUN_1015f48b0(&uStack_80,&uStack_100,0x112db8f08,&UNK_10d969fd0);
    FUN_1015f48b0(&uStack_a0,&uStack_100,0x112db8f08,&UNK_10d969fd0);
    FUN_1015f469c(uVar8,uVar11,0);
LAB_1015f5694:
    uVar11 = param_1[8];
    uVar8 = param_1[7];
    uVar6 = param_1[9];
    uVar12 = param_2[8];
    uVar9 = param_2[7];
    lVar7 = param_2[9];
    uStack_e0 = uVar9;
    uStack_d8 = uVar12;
    lStack_d0 = lVar7;
    uStack_c0 = uVar8;
    uStack_b8 = uVar11;
    uStack_b0 = uVar6;
    if (uVar6 == 0) {
      if (lVar7 != 0) goto LAB_1015f5748;
      FUN_1015f48b0(&uStack_c0,&uStack_100,0x112db8f10,&UNK_10d969fd8);
      FUN_1015f48b0(&uStack_e0,&uStack_100,0x112db8f10,&UNK_10d969fd8);
      FUN_1015f469c(uVar8,uVar11,0);
    }
    else {
      if (lVar7 == 0) {
LAB_1015f5748:
        uVar4 = 0x112db8f10;
        puVar5 = &UNK_10d969fd8;
        FUN_1015f48b0(&uStack_c0,&uStack_100,0x112db8f10,&UNK_10d969fd8);
        puVar2 = &uStack_e0;
        goto LAB_1015f5770;
      }
      FUN_1015f48b0(&uStack_c0,&uStack_100,0x112db8f10,&UNK_10d969fd8);
      FUN_1015f48b0(&uStack_e0,&uStack_100,0x112db8f10,&UNK_10d969fd8);
      uVar15 = uVar8;
      func_0x000103586e1c(uVar8,uVar11,uVar6,uVar9,uVar12,lVar7);
      FUN_1015f469c(uVar9,uVar12,lVar7);
      FUN_1015f469c(uVar8,uVar11,uVar6);
      if ((uVar15 & 1) == 0) goto LAB_1015f57a0;
    }
    uVar8 = param_1[0xb];
    uVar11 = param_1[10];
    uVar15 = param_1[0xd];
    uVar6 = param_1[0xc];
    uVar13 = param_2[0xb];
    uVar10 = param_2[10];
    uVar16 = param_2[0xd];
    uVar14 = param_2[0xc];
    uStack_120 = uVar10;
    uStack_118 = uVar13;
    uStack_110 = uVar14;
    uStack_108 = uVar16;
    uStack_100 = uVar11;
    uStack_f8 = uVar8;
    uStack_f0 = uVar6;
    uStack_e8 = uVar15;
    if (uVar8 == 0) {
      if (uVar13 != 0) goto LAB_1015f58ec;
      FUN_1015f48b0(&uStack_100,auStack_140,0x112db8f18,&UNK_10d969fe0);
      FUN_1015f48b0(&uStack_120,auStack_140,0x112db8f18,&UNK_10d969fe0);
LAB_1015f598c:
      func_0x0001015dd4ac(uVar11,uVar8,uVar6,uVar15);
      uVar11 = *param_1;
      FUN_100e25fcc(uVar11,param_1[1],*param_2,param_2[1]);
      if ((uVar11 & 1) != 0) {
        uVar11 = param_1[2];
        FUN_100e25fcc(uVar11,param_1[3],param_2[2],param_2[3]);
        uVar1 = (uint)uVar11;
        goto LAB_1015f57a4;
      }
    }
    else {
      if (uVar13 == 0) {
LAB_1015f58ec:
        FUN_1015f48b0(&uStack_100,auStack_140,0x112db8f18,&UNK_10d969fe0);
        FUN_1015f48b0(&uStack_120,auStack_140,0x112db8f18,&UNK_10d969fe0);
        func_0x0001015dd4ac(uVar11,uVar8,uVar6,uVar15);
        uVar11 = uVar10;
        uVar8 = uVar13;
        uVar6 = uVar14;
        uVar15 = uVar16;
      }
      else if (((uVar11 == uVar10) && (uVar8 == uVar13)) ||
              (uVar3 = uVar11, func_0x000107c605b8(uVar11,uVar8,uVar10,uVar13,0), (uVar3 & 1) != 0))
      {
        FUN_1015f48b0(&uStack_100,auStack_140,0x112db8f18,&UNK_10d969fe0);
        FUN_1015f48b0(&uStack_120,auStack_140,0x112db8f18,&UNK_10d969fe0);
        uVar3 = uVar6;
        FUN_100e25fcc(uVar6,uVar15,uVar14,uVar16);
        func_0x0001015dd4ac(uVar10,uVar13,uVar14,uVar16);
        if ((uVar3 & 1) != 0) goto LAB_1015f598c;
      }
      else {
        FUN_1015f48b0(&uStack_100,auStack_140,0x112db8f18,&UNK_10d969fe0);
        FUN_1015f48b0(&uStack_120,auStack_140,0x112db8f18,&UNK_10d969fe0);
        func_0x0001015dd4ac(uVar10,uVar13,uVar14,uVar16);
      }
      func_0x0001015dd4ac(uVar11,uVar8,uVar6,uVar15);
    }
  }
  else if (lVar7 == 0) {
LAB_1015f5620:
    uVar4 = 0x112db8f08;
    puVar5 = &UNK_10d969fd0;
    FUN_1015f48b0(&uStack_80,&uStack_100,0x112db8f08,&UNK_10d969fd0);
    puVar2 = &uStack_a0;
LAB_1015f5770:
    FUN_1015f48b0(puVar2,&uStack_100,uVar4,puVar5);
    FUN_1015f469c(uVar8,uVar11,uVar6);
    FUN_1015f469c(uVar9,uVar12,lVar7);
  }
  else {
    FUN_1015f48b0(&uStack_80,&uStack_100,0x112db8f08,&UNK_10d969fd0);
    FUN_1015f48b0(&uStack_a0,&uStack_100,0x112db8f08,&UNK_10d969fd0);
    uVar15 = uVar8;
    FUN_101646fd8(uVar8,uVar11,uVar6,uVar9,uVar12,lVar7);
    FUN_1015f469c(uVar9,uVar12,lVar7);
    FUN_1015f469c(uVar8,uVar11,uVar6);
    if ((uVar15 & 1) != 0) goto LAB_1015f5694;
  }
LAB_1015f57a0:
  uVar1 = 0;
LAB_1015f57a4:
  return uVar1 & 1;
}



/* Entry: 1015f5120; end: 1015f514f;  */

undefined1  [16] FUN_1015f5120(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 1015f5150; end: 1015f5183;  */

void FUN_1015f5150(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1015f5184; end: 1015f5197;  */

undefined1  [16] FUN_1015f5184(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1015f5194;
  return auVar1;
}



/* Entry: 1015f5198; end: 1015f51ab;  */

void FUN_1015f5198(void)

{
  FUN_1015f4d38();
  return;
}



/* Entry: 1015f51ac; end: 1015f51f3;  */

void FUN_1015f51ac(void)

{
  FUN_1015f4e70();
  return;
}



/* Entry: 1015f51f4; end: 1015f51f7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015f51f4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 1015f51f8; end: 1015f522f;  */

uint FUN_1015f51f8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_1015f6460();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 1015f5230; end: 1015f5297;  */

uint FUN_1015f5230(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_28 = param_1[0xb];
  uStack_30 = param_1[10];
  uStack_18 = param_1[0xd];
  uStack_20 = param_1[0xc];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  FUN_1015f5544(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 1015f5298; end: 1015f5337;  */

/* WARNING: Possible PIC construction at 0x0001015f52e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015f52f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015f52e8) */
/* WARNING: Removing unreachable block (ram,0x0001015f52f8) */

void FUN_1015f5298(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db8f30 != -1) {
    func_0x000107c61568(0x112db8f30,FUN_1015f4cf0);
  }
  uVar5 = uRam0000000113801220;
  uVar4 = uRam0000000113801218;
  uVar3 = uRam0000000113801210;
  uVar2 = uRam0000000113801208;
  uVar1 = uRam0000000113801200;
  *param_1 = uRam00000001138011f8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1015f5338; end: 1015f5373;  */

void FUN_1015f5338(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db8f68;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db8f68,&UNK_10d96a220);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015f5374; end: 1015f549f;  */

void FUN_1015f5374(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_e8 [72];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
  uStack_38 = unaff_x20[0xd];
  uStack_40 = unaff_x20[0xc];
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  func_0x000107c6068c(auStack_e8,0);
  func_0x000107c5fa50(auStack_e8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015f54a0; end: 1015f5543;  */

uint FUN_1015f54a0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_18 = param_2[0xd];
  uStack_20 = param_2[0xc];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  FUN_1015f5544(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 1015f5544; end: 1015f5a1f;  */

uint FUN_1015f5544(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_140 [32];
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar11 = param_1[5];
  uVar8 = param_1[4];
  uVar6 = param_1[6];
  uVar12 = param_2[5];
  uVar9 = param_2[4];
  lVar7 = param_2[6];
  uStack_a0 = uVar9;
  uStack_98 = uVar12;
  lStack_90 = lVar7;
  uStack_80 = uVar8;
  uStack_78 = uVar11;
  uStack_70 = uVar6;
  if (uVar6 == 0) {
    if (lVar7 != 0) goto LAB_1015f5620;
    FUN_1015f48b0(&uStack_80,&uStack_100,0x112db8f08,&UNK_10d969fd0);
    FUN_1015f48b0(&uStack_a0,&uStack_100,0x112db8f08,&UNK_10d969fd0);
    FUN_1015f469c(uVar8,uVar11,0);
LAB_1015f5694:
    uVar11 = param_1[8];
    uVar8 = param_1[7];
    uVar6 = param_1[9];
    uVar12 = param_2[8];
    uVar9 = param_2[7];
    lVar7 = param_2[9];
    uStack_e0 = uVar9;
    uStack_d8 = uVar12;
    lStack_d0 = lVar7;
    uStack_c0 = uVar8;
    uStack_b8 = uVar11;
    uStack_b0 = uVar6;
    if (uVar6 == 0) {
      if (lVar7 != 0) goto LAB_1015f5748;
      FUN_1015f48b0(&uStack_c0,&uStack_100,0x112db8f10,&UNK_10d969fd8);
      FUN_1015f48b0(&uStack_e0,&uStack_100,0x112db8f10,&UNK_10d969fd8);
      FUN_1015f469c(uVar8,uVar11,0);
    }
    else {
      if (lVar7 == 0) {
LAB_1015f5748:
        uVar4 = 0x112db8f10;
        puVar5 = &UNK_10d969fd8;
        FUN_1015f48b0(&uStack_c0,&uStack_100,0x112db8f10,&UNK_10d969fd8);
        puVar2 = &uStack_e0;
        goto LAB_1015f5770;
      }
      FUN_1015f48b0(&uStack_c0,&uStack_100,0x112db8f10,&UNK_10d969fd8);
      FUN_1015f48b0(&uStack_e0,&uStack_100,0x112db8f10,&UNK_10d969fd8);
      uVar15 = uVar8;
      func_0x000103586e1c(uVar8,uVar11,uVar6,uVar9,uVar12,lVar7);
      FUN_1015f469c(uVar9,uVar12,lVar7);
      FUN_1015f469c(uVar8,uVar11,uVar6);
      if ((uVar15 & 1) == 0) goto LAB_1015f57a0;
    }
    uVar8 = param_1[0xb];
    uVar11 = param_1[10];
    uVar15 = param_1[0xd];
    uVar6 = param_1[0xc];
    uVar13 = param_2[0xb];
    uVar10 = param_2[10];
    uVar16 = param_2[0xd];
    uVar14 = param_2[0xc];
    uStack_120 = uVar10;
    uStack_118 = uVar13;
    uStack_110 = uVar14;
    uStack_108 = uVar16;
    uStack_100 = uVar11;
    uStack_f8 = uVar8;
    uStack_f0 = uVar6;
    uStack_e8 = uVar15;
    if (uVar8 == 0) {
      if (uVar13 != 0) goto LAB_1015f58ec;
      FUN_1015f48b0(&uStack_100,auStack_140,0x112db8f18,&UNK_10d969fe0);
      FUN_1015f48b0(&uStack_120,auStack_140,0x112db8f18,&UNK_10d969fe0);
LAB_1015f598c:
      func_0x0001015dd4ac(uVar11,uVar8,uVar6,uVar15);
      uVar11 = *param_1;
      FUN_100e25fcc(uVar11,param_1[1],*param_2,param_2[1]);
      if ((uVar11 & 1) != 0) {
        uVar11 = param_1[2];
        FUN_100e25fcc(uVar11,param_1[3],param_2[2],param_2[3]);
        uVar1 = (uint)uVar11;
        goto LAB_1015f57a4;
      }
    }
    else {
      if (uVar13 == 0) {
LAB_1015f58ec:
        FUN_1015f48b0(&uStack_100,auStack_140,0x112db8f18,&UNK_10d969fe0);
        FUN_1015f48b0(&uStack_120,auStack_140,0x112db8f18,&UNK_10d969fe0);
        func_0x0001015dd4ac(uVar11,uVar8,uVar6,uVar15);
        uVar11 = uVar10;
        uVar8 = uVar13;
        uVar6 = uVar14;
        uVar15 = uVar16;
      }
      else if (((uVar11 == uVar10) && (uVar8 == uVar13)) ||
              (uVar3 = uVar11, func_0x000107c605b8(uVar11,uVar8,uVar10,uVar13,0), (uVar3 & 1) != 0))
      {
        FUN_1015f48b0(&uStack_100,auStack_140,0x112db8f18,&UNK_10d969fe0);
        FUN_1015f48b0(&uStack_120,auStack_140,0x112db8f18,&UNK_10d969fe0);
        uVar3 = uVar6;
        FUN_100e25fcc(uVar6,uVar15,uVar14,uVar16);
        func_0x0001015dd4ac(uVar10,uVar13,uVar14,uVar16);
        if ((uVar3 & 1) != 0) goto LAB_1015f598c;
      }
      else {
        FUN_1015f48b0(&uStack_100,auStack_140,0x112db8f18,&UNK_10d969fe0);
        FUN_1015f48b0(&uStack_120,auStack_140,0x112db8f18,&UNK_10d969fe0);
        func_0x0001015dd4ac(uVar10,uVar13,uVar14,uVar16);
      }
      func_0x0001015dd4ac(uVar11,uVar8,uVar6,uVar15);
    }
  }
  else if (lVar7 == 0) {
LAB_1015f5620:
    uVar4 = 0x112db8f08;
    puVar5 = &UNK_10d969fd0;
    FUN_1015f48b0(&uStack_80,&uStack_100,0x112db8f08,&UNK_10d969fd0);
    puVar2 = &uStack_a0;
LAB_1015f5770:
    FUN_1015f48b0(puVar2,&uStack_100,uVar4,puVar5);
    FUN_1015f469c(uVar8,uVar11,uVar6);
    FUN_1015f469c(uVar9,uVar12,lVar7);
  }
  else {
    FUN_1015f48b0(&uStack_80,&uStack_100,0x112db8f08,&UNK_10d969fd0);
    FUN_1015f48b0(&uStack_a0,&uStack_100,0x112db8f08,&UNK_10d969fd0);
    uVar15 = uVar8;
    FUN_101646fd8(uVar8,uVar11,uVar6,uVar9,uVar12,lVar7);
    FUN_1015f469c(uVar9,uVar12,lVar7);
    FUN_1015f469c(uVar8,uVar11,uVar6);
    if ((uVar15 & 1) != 0) goto LAB_1015f5694;
  }
LAB_1015f57a0:
  uVar1 = 0;
LAB_1015f57a4:
  return uVar1 & 1;
}



/* Entry: 1015f5a20; end: 1015f5a5f;  */

void FUN_1015f5a20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8f38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96a130;
  func_0x000107c61520(&UNK_10d96a130,&UNK_1103e67e0);
  puRam0000000112db8f38 = puVar1;
  return;
}



/* Entry: 1015f5a60; end: 1015f5a83;  */

void FUN_1015f5a60(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015f5a84();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015f5a84; end: 1015f5ac3;  */

void FUN_1015f5a84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8f40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96a030;
  func_0x000107c61520(&UNK_10d96a030,&UNK_1103e6760);
  puRam0000000112db8f40 = puVar1;
  return;
}



/* Entry: 1015f5ac4; end: 1015f5ad7;  */

void FUN_1015f5ac4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1015f5504)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1015f5ad8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015f5ad8; end: 1015f5b17;  */

void FUN_1015f5ad8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8f48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d969fe8;
  func_0x000107c61520(&DAT_10d969fe8,&UNK_1103e6760);
  puRam0000000112db8f48 = puVar1;
  return;
}



/* Entry: 1015f5b18; end: 1015f5b1b;  */

void FUN_1015f5b18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8f50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96a098;
  func_0x000107c61520(&UNK_10d96a098,&UNK_1103e6760);
  puRam0000000112db8f50 = puVar1;
  return;
}



/* Entry: 1015f5b1c; end: 1015f5b5b;  */

void FUN_1015f5b1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8f50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96a098;
  func_0x000107c61520(&UNK_10d96a098,&UNK_1103e6760);
  puRam0000000112db8f50 = puVar1;
  return;
}



/* Entry: 1015f5b5c; end: 1015f5b7f;  */

void FUN_1015f5b5c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015f5b80();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015f5b80; end: 1015f5bbf;  */

void FUN_1015f5b80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8f58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96a108;
  func_0x000107c61520(&UNK_10d96a108,&UNK_1103e67e0);
  puRam0000000112db8f58 = puVar1;
  return;
}



/* Entry: 1015f5bc0; end: 1015f5bd3;  */

void FUN_1015f5bc0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015f5a20();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1015d5320)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015f5bd4; end: 1015f5c03;  */

void FUN_1015f5bd4(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015f5c04; end: 1015f5c07;  */

void FUN_1015f5c04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8f60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96a170;
  func_0x000107c61520(&UNK_10d96a170,&UNK_1103e67e0);
  puRam0000000112db8f60 = puVar1;
  return;
}



/* Entry: 1015f5c08; end: 1015f5c47;  */

void FUN_1015f5c08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8f60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96a170;
  func_0x000107c61520(&UNK_10d96a170,&UNK_1103e67e0);
  puRam0000000112db8f60 = puVar1;
  return;
}



/* Entry: 1015f5c48; end: 1015f5c6f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1015f5c48(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x18) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x18) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1015f5c70; end: 1015f5d1f;  */

undefined8 * FUN_1015f5c70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 1015f5d20; end: 1015f5d63;  */

undefined8 * FUN_1015f5d20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 1015f5d64; end: 1015f5dfb;  */

int FUN_1015f5d64(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1015f5dfc; end: 1015f5e77;  */

/* WARNING: Possible PIC construction at 0x0001015f5e14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015f5e2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015f5e44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015f5e48) */
/* WARNING: Removing unreachable block (ram,0x0001015f5e30) */
/* WARNING: Removing unreachable block (ram,0x0001015f5e18) */
/* WARNING: Removing unreachable block (ram,0x0001015f5e38) */
/* WARNING: Removing unreachable block (ram,0x0001015f5e50) */
/* WARNING: Removing unreachable block (ram,0x0001015f5e6c) */
/* WARNING: Removing unreachable block (ram,0x0001015f5e58) */
/* WARNING: Removing unreachable block (ram,0x0001015f5e40) */
/* WARNING: Removing unreachable block (ram,0x0001015f5e28) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1015f5dfc(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = (uint)(param_1[1] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[1] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1015f5e78; end: 1015f5f87;  */

undefined8 * FUN_1015f5e78(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar2,uVar3);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  func_0x00010006c00c(uVar2,uVar3);
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  lVar1 = param_2[6];
  if (lVar1 == 0) {
    uVar2 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[6] = param_2[6];
    lVar1 = param_2[9];
  }
  else {
    uVar2 = param_2[4];
    uVar3 = param_2[5];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[4] = uVar2;
    param_1[5] = uVar3;
    param_1[6] = lVar1;
    func_0x000107c6157c(lVar1);
    lVar1 = param_2[9];
  }
  if (lVar1 == 0) {
    uVar2 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar2;
    param_1[9] = param_2[9];
    lVar1 = param_2[0xb];
  }
  else {
    uVar2 = param_2[7];
    uVar3 = param_2[8];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[7] = uVar2;
    param_1[8] = uVar3;
    param_1[9] = lVar1;
    func_0x000107c6157c(lVar1);
    lVar1 = param_2[0xb];
  }
  if (lVar1 == 0) {
    uVar2 = param_2[10];
    uVar4 = param_2[0xd];
    uVar3 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar2;
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar3;
  }
  else {
    param_1[10] = param_2[10];
    param_1[0xb] = lVar1;
    uVar2 = param_2[0xc];
    uVar3 = param_2[0xd];
    func_0x000107c61434();
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0xc] = uVar2;
    param_1[0xd] = uVar3;
  }
  return param_1;
}



/* Entry: 1015f5f88; end: 1015f61bb;  */

undefined8 * FUN_1015f5f88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *param_2;
  uVar5 = param_2[1];
  func_0x00010006c00c(uVar2,uVar5);
  uVar4 = *param_1;
  uVar1 = param_1[1];
  *param_1 = uVar2;
  param_1[1] = uVar5;
  func_0x00010006c090(uVar4,uVar1);
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  func_0x00010006c00c(uVar2,uVar5);
  uVar4 = param_1[2];
  uVar1 = param_1[3];
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  func_0x00010006c090(uVar4,uVar1);
  if (param_1[6] == 0) {
    if (param_2[6] == 0) {
      uVar4 = param_2[5];
      uVar2 = param_2[4];
      param_1[6] = param_2[6];
      param_1[5] = uVar4;
      param_1[4] = uVar2;
    }
    else {
      uVar2 = param_2[4];
      uVar4 = param_2[5];
      func_0x00010006c00c(uVar2,uVar4);
      param_1[4] = uVar2;
      param_1[5] = uVar4;
      param_1[6] = param_2[6];
      func_0x000107c6157c();
    }
  }
  else if (param_2[6] == 0) {
    func_0x0001015f61bc(param_1 + 4);
    uVar2 = param_2[6];
    uVar4 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    param_1[6] = uVar2;
  }
  else {
    uVar2 = param_2[4];
    uVar5 = param_2[5];
    func_0x00010006c00c(uVar2,uVar5);
    uVar4 = param_1[4];
    uVar1 = param_1[5];
    param_1[4] = uVar2;
    param_1[5] = uVar5;
    func_0x00010006c090(uVar4,uVar1);
    uVar2 = param_1[6];
    param_1[6] = param_2[6];
    func_0x000107c6157c();
    func_0x000107c61574(uVar2);
  }
  if (param_1[9] == 0) {
    if (param_2[9] == 0) {
      uVar4 = param_2[8];
      uVar2 = param_2[7];
      param_1[9] = param_2[9];
      param_1[8] = uVar4;
      param_1[7] = uVar2;
    }
    else {
      uVar2 = param_2[7];
      uVar4 = param_2[8];
      func_0x00010006c00c(uVar2,uVar4);
      param_1[7] = uVar2;
      param_1[8] = uVar4;
      param_1[9] = param_2[9];
      func_0x000107c6157c();
    }
  }
  else if (param_2[9] == 0) {
    func_0x0001015f61f0(param_1 + 7);
    uVar2 = param_2[9];
    uVar4 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar4;
    param_1[9] = uVar2;
  }
  else {
    uVar2 = param_2[7];
    uVar5 = param_2[8];
    func_0x00010006c00c(uVar2,uVar5);
    uVar4 = param_1[7];
    uVar1 = param_1[8];
    param_1[7] = uVar2;
    param_1[8] = uVar5;
    func_0x00010006c090(uVar4,uVar1);
    uVar2 = param_1[9];
    param_1[9] = param_2[9];
    func_0x000107c6157c();
    func_0x000107c61574(uVar2);
  }
  lVar3 = param_1[0xb];
  if (lVar3 == 0) {
    if (param_2[0xb] == 0) {
      uVar2 = param_2[10];
      uVar5 = param_2[0xd];
      uVar4 = param_2[0xc];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar2;
      param_1[0xd] = uVar5;
      param_1[0xc] = uVar4;
    }
    else {
      param_1[10] = param_2[10];
      param_1[0xb] = param_2[0xb];
      uVar2 = param_2[0xc];
      uVar4 = param_2[0xd];
      func_0x000107c61434();
      func_0x00010006c00c(uVar2,uVar4);
      param_1[0xc] = uVar2;
      param_1[0xd] = uVar4;
    }
  }
  else if (param_2[0xb] == 0) {
    func_0x0001015f6224(param_1 + 10);
    uVar5 = param_2[10];
    uVar4 = param_2[0xd];
    uVar2 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar5;
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar2;
  }
  else {
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xb];
    func_0x000107c61434();
    func_0x000107c6142c(lVar3);
    uVar2 = param_2[0xc];
    uVar5 = param_2[0xd];
    func_0x00010006c00c(uVar2,uVar5);
    uVar4 = param_1[0xc];
    uVar1 = param_1[0xd];
    param_1[0xc] = uVar2;
    param_1[0xd] = uVar5;
    func_0x00010006c090(uVar4,uVar1);
  }
  return param_1;
}



/* Entry: 1015f61bc; end: 1015f6253;  */

undefined8 FUN_1015f61bc(undefined8 param_1)

{
  FUN_10164a104();
  return param_1;
}



/* Entry: 1015f6254; end: 1015f6383;  */

undefined8 * FUN_1015f6254(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if (param_1[6] == 0) {
LAB_1015f62d0:
    uVar1 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar1;
    param_1[6] = param_2[6];
    lVar3 = param_1[9];
  }
  else {
    lVar3 = param_2[6];
    if (lVar3 == 0) {
      func_0x0001015f61bc(param_1 + 4);
      goto LAB_1015f62d0;
    }
    uVar1 = param_1[4];
    uVar2 = param_1[5];
    uVar4 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    func_0x00010006c090(uVar1,uVar2);
    uVar1 = param_1[6];
    param_1[6] = lVar3;
    func_0x000107c61574(uVar1);
    lVar3 = param_1[9];
  }
  if (lVar3 != 0) {
    lVar3 = param_2[9];
    if (lVar3 != 0) {
      uVar1 = param_1[7];
      uVar2 = param_1[8];
      uVar4 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      uVar1 = param_1[9];
      param_1[9] = lVar3;
      func_0x000107c61574(uVar1);
      lVar3 = param_1[0xb];
      goto joined_r0x0001015f6310;
    }
    func_0x0001015f61f0(param_1 + 7);
  }
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  param_1[9] = param_2[9];
  lVar3 = param_1[0xb];
joined_r0x0001015f6310:
  if (lVar3 != 0) {
    lVar3 = param_2[0xb];
    if (lVar3 != 0) {
      param_1[10] = param_2[10];
      param_1[0xb] = lVar3;
      func_0x000107c6142c();
      uVar1 = param_1[0xc];
      uVar2 = param_1[0xd];
      uVar4 = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      return param_1;
    }
    func_0x0001015f6224(param_1 + 10);
  }
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar2 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar1;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar2;
  return param_1;
}


