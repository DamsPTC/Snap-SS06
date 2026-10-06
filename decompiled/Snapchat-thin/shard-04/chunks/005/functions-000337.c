/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10358ff18; end: 10358ff57;  */

void FUN_10358ff18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a2d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdeb98;
  func_0x000107c61520(&UNK_10dbdeb98,&UNK_1106673e8);
  puRam0000000112f7a2d8 = puVar1;
  return;
}



/* Entry: 10358ff58; end: 10358ff7b;  */

void FUN_10358ff58(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10358ff7c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10358ff7c; end: 10358ffbb;  */

void FUN_10358ff7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a2e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdec08;
  func_0x000107c61520(&UNK_10dbdec08,&UNK_110667468);
  puRam0000000112f7a2e0 = puVar1;
  return;
}



/* Entry: 10358ffbc; end: 10358ffcf;  */

void FUN_10358ffbc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10358fd30();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103589d7c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10358ffd0; end: 10358ffff;  */

void FUN_10358ffd0(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103590000; end: 103590003;  */

void FUN_103590000(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a2e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdec70;
  func_0x000107c61520(&UNK_10dbdec70,&UNK_110667468);
  puRam0000000112f7a2e8 = puVar1;
  return;
}



/* Entry: 103590004; end: 103590043;  */

void FUN_103590004(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a2e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdec70;
  func_0x000107c61520(&UNK_10dbdec70,&UNK_110667468);
  puRam0000000112f7a2e8 = puVar1;
  return;
}



/* Entry: 103590044; end: 1035900e3;  */

int FUN_103590044(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1035900e4; end: 10359010f;  */

void FUN_1035900e4(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 103590110; end: 1035901bb;  */

undefined8 * FUN_103590110(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 1035901bc; end: 103590203;  */

undefined8 * FUN_1035901bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 103590204; end: 10359029b;  */

int FUN_103590204(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10359029c; end: 1035902f7;  */

long FUN_10359029c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1035902f8; end: 1035903cf;  */

undefined8 * FUN_1035902f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  uVar3 = param_2[4];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar2,uVar3);
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  return param_1;
}



/* Entry: 1035903d0; end: 103590423;  */

undefined8 * FUN_1035903d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103590424; end: 1035904c3;  */

int FUN_103590424(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1035904c4; end: 103590543;  */

void FUN_1035904c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a738 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbdebdc;
  func_0x000107c61520(&DAT_10dbdebdc,&UNK_110667468);
  puRam0000000112f7a738 = puVar1;
  return;
}



/* Entry: 103590544; end: 103590583;  */

undefined8 FUN_103590544(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103590584; end: 10359058b;  */

undefined8 * FUN_103590584(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 10359058c; end: 10359076b;  */

bool FUN_10359058c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(unaff_x20 + 0x20);
  uVar4 = uVar3 >> 0x3c;
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_40 = uVar3;
  if (uVar4 < 0xf) {
    FUN_103590f0c(&uStack_50,auStack_68,0x112db6358,&UNK_10d961e20);
    func_0x000100d56000(uVar1,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0xf000000000000000;
  }
  else {
    FUN_103590f0c(&uStack_50,auStack_68,0x112db6358,&UNK_10d961e20);
  }
  func_0x000100d56000(uVar1,uVar2,uVar3);
  return uVar4 < 0xf;
}



/* Entry: 10359076c; end: 1035907b3;  */

void FUN_10359076c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbdf240,0x2e,2);
  uRam0000000113808c48 = uStack_38;
  uRam0000000113808c40 = uStack_40;
  uRam0000000113808c58 = uStack_28;
  uRam0000000113808c50 = uStack_30;
  uRam0000000113808c68 = uStack_18;
  uRam0000000113808c60 = uStack_20;
  return;
}



/* Entry: 1035907b4; end: 1035908b7;  */

void FUN_1035907b4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001015c5cfc();
        lVar2 = unaff_x20 + 0x40;
LAB_103590838:
        puVar3 = &UNK_110790a00;
LAB_10359083c:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
          lVar2 = unaff_x20 + 0x28;
          goto LAB_103590838;
        }
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_110790980;
          goto LAB_10359083c;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1035908b8; end: 103590943;  */

void FUN_1035908b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_103590944();
  if (unaff_x21 == 0) {
    FUN_1035909cc();
    FUN_103590a54();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 103590944; end: 1035909cb;  */

void FUN_103590944(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x20);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,1,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035909cc; end: 103590a53;  */

void FUN_1035909cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x38);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,2,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103590a54; end: 103590adb;  */

void FUN_103590a54(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x50);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,3,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103590adc; end: 103590b2b;  */

uint FUN_103590adc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long alStack_148 [3];
  long lStack_130;
  ulong uStack_128;
  ulong uStack_120;
  long lStack_110;
  ulong uStack_108;
  ulong uStack_100;
  long lStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  long lStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  long lStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar13 = param_1[3];
  lVar11 = param_1[2];
  uVar7 = param_1[4];
  uVar14 = param_2[3];
  lVar12 = param_2[2];
  uVar10 = param_2[4];
  lStack_b0 = lVar12;
  uStack_a8 = uVar14;
  uStack_a0 = uVar10;
  lStack_90 = lVar11;
  uStack_88 = uVar13;
  uStack_80 = uVar7;
  if (uVar7 >> 0x3c < 0xf) {
    if (0xe < uVar10 >> 0x3c) goto LAB_103591008;
    if ((float)lVar11 == (float)lVar12) {
      FUN_103590f0c(&lStack_90,&lStack_d0,0x112db6358,&UNK_10d961e20);
      FUN_103590f0c(&lStack_b0,&lStack_d0,0x112db6358,&UNK_10d961e20);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
      func_0x000100d56000(lVar12,uVar14,uVar10);
      if ((uVar2 & 1) != 0) goto LAB_1035910ac;
    }
    else {
      uVar5 = 0x112db6358;
      puVar6 = &UNK_10d961e20;
      FUN_103590f0c(&lStack_90,&lStack_d0,0x112db6358,&UNK_10d961e20);
      plVar3 = &lStack_b0;
      plVar4 = &lStack_d0;
LAB_1035913e8:
      FUN_103590f0c(plVar3,plVar4,uVar5,puVar6);
      func_0x000100d56000(lVar12,uVar14,uVar10);
    }
  }
  else {
    if (0xe < uVar10 >> 0x3c) {
      FUN_103590f0c(&lStack_90,&lStack_d0,0x112db6358,&UNK_10d961e20);
      FUN_103590f0c(&lStack_b0,&lStack_d0,0x112db6358,&UNK_10d961e20);
LAB_1035910ac:
      func_0x000100d56000(lVar11,uVar13,uVar7);
      uVar13 = param_1[6];
      lVar11 = param_1[5];
      uVar7 = param_1[7];
      uVar14 = param_2[6];
      lVar12 = param_2[5];
      uVar10 = param_2[7];
      lStack_f0 = lVar12;
      uStack_e8 = uVar14;
      uStack_e0 = uVar10;
      lStack_d0 = lVar11;
      uStack_c8 = uVar13;
      uStack_c0 = uVar7;
      if (uVar7 >> 0x3c < 0xf) {
        if (0xe < uVar10 >> 0x3c) goto LAB_1035911e8;
        if (lVar11 != lVar12) {
          uVar5 = 0x112db6f48;
          puVar6 = &UNK_10d969b40;
          FUN_103590f0c(&lStack_d0,&lStack_110,0x112db6f48,&UNK_10d969b40);
          plVar3 = &lStack_f0;
          plVar4 = &lStack_110;
          goto LAB_1035913e8;
        }
        FUN_103590f0c(&lStack_d0,&lStack_110,0x112db6f48,&UNK_10d969b40);
        FUN_103590f0c(&lStack_f0,&lStack_110,0x112db6f48,&UNK_10d969b40);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
        func_0x000100d56000(lVar11,uVar14,uVar10);
        if ((uVar2 & 1) == 0) goto LAB_103591410;
      }
      else {
        if (uVar10 >> 0x3c < 0xf) {
LAB_1035911e8:
          uVar5 = 0x112db6f48;
          puVar6 = &UNK_10d969b40;
          FUN_103590f0c(&lStack_d0,&lStack_110,0x112db6f48,&UNK_10d969b40);
          plVar3 = &lStack_f0;
          plVar4 = &lStack_110;
          uVar2 = uVar7;
          uVar8 = uVar13;
          lVar9 = lVar11;
          uVar7 = uVar10;
          uVar13 = uVar14;
          lVar11 = lVar12;
          goto LAB_1035912f0;
        }
        FUN_103590f0c(&lStack_d0,&lStack_110,0x112db6f48,&UNK_10d969b40);
        FUN_103590f0c(&lStack_f0,&lStack_110,0x112db6f48,&UNK_10d969b40);
      }
      func_0x000100d56000(lVar11,uVar13,uVar7);
      uVar13 = param_1[9];
      lVar11 = param_1[8];
      uVar7 = param_1[10];
      uVar14 = param_2[9];
      lVar12 = param_2[8];
      uVar10 = param_2[10];
      lStack_130 = lVar12;
      uStack_128 = uVar14;
      uStack_120 = uVar10;
      lStack_110 = lVar11;
      uStack_108 = uVar13;
      uStack_100 = uVar7;
      if (uVar7 >> 0x3c < 0xf) {
        if (0xe < uVar10 >> 0x3c) goto LAB_1035912c4;
        if (lVar11 != lVar12) {
          uVar5 = 0x112db6f48;
          puVar6 = &UNK_10d969b40;
          FUN_103590f0c(&lStack_110,alStack_148,0x112db6f48,&UNK_10d969b40);
          plVar3 = &lStack_130;
          plVar4 = alStack_148;
          goto LAB_1035913e8;
        }
        FUN_103590f0c(&lStack_110,alStack_148,0x112db6f48,&UNK_10d969b40);
        FUN_103590f0c(&lStack_130,alStack_148,0x112db6f48,&UNK_10d969b40);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
        func_0x000100d56000(lVar11,uVar14,uVar10);
        if ((uVar2 & 1) == 0) goto LAB_103591410;
      }
      else {
        if (uVar10 >> 0x3c < 0xf) {
LAB_1035912c4:
          uVar5 = 0x112db6f48;
          puVar6 = &UNK_10d969b40;
          FUN_103590f0c(&lStack_110,alStack_148,0x112db6f48,&UNK_10d969b40);
          plVar3 = &lStack_130;
          plVar4 = alStack_148;
          uVar2 = uVar7;
          uVar8 = uVar13;
          lVar9 = lVar11;
          uVar7 = uVar10;
          uVar13 = uVar14;
          lVar11 = lVar12;
          goto LAB_1035912f0;
        }
        FUN_103590f0c(&lStack_110,alStack_148,0x112db6f48,&UNK_10d969b40);
        FUN_103590f0c(&lStack_130,alStack_148,0x112db6f48,&UNK_10d969b40);
      }
      func_0x000100d56000(lVar11,uVar13,uVar7);
      uVar5 = *param_1;
      func_0x000100e25fcc(uVar5,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar5;
      goto LAB_103591418;
    }
LAB_103591008:
    uVar5 = 0x112db6358;
    puVar6 = &UNK_10d961e20;
    FUN_103590f0c(&lStack_90,&lStack_d0,0x112db6358,&UNK_10d961e20);
    plVar3 = &lStack_b0;
    plVar4 = &lStack_d0;
    uVar2 = uVar7;
    uVar8 = uVar13;
    lVar9 = lVar11;
    uVar7 = uVar10;
    uVar13 = uVar14;
    lVar11 = lVar12;
LAB_1035912f0:
    FUN_103590f0c(plVar3,plVar4,uVar5,puVar6);
    func_0x000100d56000(lVar9,uVar8,uVar2);
  }
LAB_103591410:
  func_0x000100d56000(lVar11,uVar13,uVar7);
  uVar1 = 0;
LAB_103591418:
  return uVar1 & 1;
}



/* Entry: 103590b2c; end: 103590b5b;  */

undefined1  [16] FUN_103590b2c(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 103590b5c; end: 103590b8f;  */

void FUN_103590b5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 103590b90; end: 103590ba3;  */

undefined8 FUN_103590b90(void)

{
  return 0x103590ba0;
}



/* Entry: 103590ba4; end: 103590bb7;  */

void FUN_103590ba4(void)

{
  FUN_1035907b4();
  return;
}



/* Entry: 103590bb8; end: 103590bff;  */

void FUN_103590bb8(void)

{
  FUN_1035908b8();
  return;
}



/* Entry: 103590c00; end: 103590c03;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103590c00(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103590c04; end: 103590c3b;  */

uint FUN_103590c04(long param_1,long param_2)

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
  FUN_103591b08();
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



/* Entry: 103590c3c; end: 103590ca3;  */

uint FUN_103590c3c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  
  uVar1 = 0;
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_20 = param_1[10];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  FUN_103590f54(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 103590ca4; end: 103590d43;  */

/* WARNING: Possible PIC construction at 0x000103590cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103590d00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103590cf4) */
/* WARNING: Removing unreachable block (ram,0x000103590d04) */

void FUN_103590ca4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7a750 != -1) {
    func_0x000107c61568(0x112f7a750,FUN_10359076c);
  }
  uVar5 = uRam0000000113808c68;
  uVar4 = uRam0000000113808c60;
  uVar3 = uRam0000000113808c58;
  uVar2 = uRam0000000113808c50;
  uVar1 = uRam0000000113808c48;
  *param_1 = uRam0000000113808c40;
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



/* Entry: 103590d44; end: 103590d7f;  */

void FUN_103590d44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7a770;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7a770,&UNK_10dbdf230);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103590d80; end: 103590ea3;  */

void FUN_103590d80(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_d8 [72];
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
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
  uStack_40 = unaff_x20[10];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  func_0x000107c6068c(auStack_d8,0);
  func_0x000107c5fa50(auStack_d8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103590ea4; end: 103590f0b;  */

uint FUN_103590ea4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_103590f54(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 103590f0c; end: 103590f53;  */

undefined8 FUN_103590f0c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103590f54; end: 10359143b;  */

uint FUN_103590f54(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long alStack_148 [3];
  long lStack_130;
  ulong uStack_128;
  ulong uStack_120;
  long lStack_110;
  ulong uStack_108;
  ulong uStack_100;
  long lStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  long lStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  long lStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar13 = param_1[3];
  lVar11 = param_1[2];
  uVar7 = param_1[4];
  uVar14 = param_2[3];
  lVar12 = param_2[2];
  uVar10 = param_2[4];
  lStack_b0 = lVar12;
  uStack_a8 = uVar14;
  uStack_a0 = uVar10;
  lStack_90 = lVar11;
  uStack_88 = uVar13;
  uStack_80 = uVar7;
  if (uVar7 >> 0x3c < 0xf) {
    if (0xe < uVar10 >> 0x3c) goto LAB_103591008;
    if ((float)lVar11 == (float)lVar12) {
      FUN_103590f0c(&lStack_90,&lStack_d0,0x112db6358,&UNK_10d961e20);
      FUN_103590f0c(&lStack_b0,&lStack_d0,0x112db6358,&UNK_10d961e20);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
      func_0x000100d56000(lVar12,uVar14,uVar10);
      if ((uVar2 & 1) != 0) goto LAB_1035910ac;
    }
    else {
      uVar5 = 0x112db6358;
      puVar6 = &UNK_10d961e20;
      FUN_103590f0c(&lStack_90,&lStack_d0,0x112db6358,&UNK_10d961e20);
      plVar3 = &lStack_b0;
      plVar4 = &lStack_d0;
LAB_1035913e8:
      FUN_103590f0c(plVar3,plVar4,uVar5,puVar6);
      func_0x000100d56000(lVar12,uVar14,uVar10);
    }
  }
  else {
    if (0xe < uVar10 >> 0x3c) {
      FUN_103590f0c(&lStack_90,&lStack_d0,0x112db6358,&UNK_10d961e20);
      FUN_103590f0c(&lStack_b0,&lStack_d0,0x112db6358,&UNK_10d961e20);
LAB_1035910ac:
      func_0x000100d56000(lVar11,uVar13,uVar7);
      uVar13 = param_1[6];
      lVar11 = param_1[5];
      uVar7 = param_1[7];
      uVar14 = param_2[6];
      lVar12 = param_2[5];
      uVar10 = param_2[7];
      lStack_f0 = lVar12;
      uStack_e8 = uVar14;
      uStack_e0 = uVar10;
      lStack_d0 = lVar11;
      uStack_c8 = uVar13;
      uStack_c0 = uVar7;
      if (uVar7 >> 0x3c < 0xf) {
        if (0xe < uVar10 >> 0x3c) goto LAB_1035911e8;
        if (lVar11 != lVar12) {
          uVar5 = 0x112db6f48;
          puVar6 = &UNK_10d969b40;
          FUN_103590f0c(&lStack_d0,&lStack_110,0x112db6f48,&UNK_10d969b40);
          plVar3 = &lStack_f0;
          plVar4 = &lStack_110;
          goto LAB_1035913e8;
        }
        FUN_103590f0c(&lStack_d0,&lStack_110,0x112db6f48,&UNK_10d969b40);
        FUN_103590f0c(&lStack_f0,&lStack_110,0x112db6f48,&UNK_10d969b40);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
        func_0x000100d56000(lVar11,uVar14,uVar10);
        if ((uVar2 & 1) == 0) goto LAB_103591410;
      }
      else {
        if (uVar10 >> 0x3c < 0xf) {
LAB_1035911e8:
          uVar5 = 0x112db6f48;
          puVar6 = &UNK_10d969b40;
          FUN_103590f0c(&lStack_d0,&lStack_110,0x112db6f48,&UNK_10d969b40);
          plVar3 = &lStack_f0;
          plVar4 = &lStack_110;
          uVar2 = uVar7;
          uVar8 = uVar13;
          lVar9 = lVar11;
          uVar7 = uVar10;
          uVar13 = uVar14;
          lVar11 = lVar12;
          goto LAB_1035912f0;
        }
        FUN_103590f0c(&lStack_d0,&lStack_110,0x112db6f48,&UNK_10d969b40);
        FUN_103590f0c(&lStack_f0,&lStack_110,0x112db6f48,&UNK_10d969b40);
      }
      func_0x000100d56000(lVar11,uVar13,uVar7);
      uVar13 = param_1[9];
      lVar11 = param_1[8];
      uVar7 = param_1[10];
      uVar14 = param_2[9];
      lVar12 = param_2[8];
      uVar10 = param_2[10];
      lStack_130 = lVar12;
      uStack_128 = uVar14;
      uStack_120 = uVar10;
      lStack_110 = lVar11;
      uStack_108 = uVar13;
      uStack_100 = uVar7;
      if (uVar7 >> 0x3c < 0xf) {
        if (0xe < uVar10 >> 0x3c) goto LAB_1035912c4;
        if (lVar11 != lVar12) {
          uVar5 = 0x112db6f48;
          puVar6 = &UNK_10d969b40;
          FUN_103590f0c(&lStack_110,alStack_148,0x112db6f48,&UNK_10d969b40);
          plVar3 = &lStack_130;
          plVar4 = alStack_148;
          goto LAB_1035913e8;
        }
        FUN_103590f0c(&lStack_110,alStack_148,0x112db6f48,&UNK_10d969b40);
        FUN_103590f0c(&lStack_130,alStack_148,0x112db6f48,&UNK_10d969b40);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
        func_0x000100d56000(lVar11,uVar14,uVar10);
        if ((uVar2 & 1) == 0) goto LAB_103591410;
      }
      else {
        if (uVar10 >> 0x3c < 0xf) {
LAB_1035912c4:
          uVar5 = 0x112db6f48;
          puVar6 = &UNK_10d969b40;
          FUN_103590f0c(&lStack_110,alStack_148,0x112db6f48,&UNK_10d969b40);
          plVar3 = &lStack_130;
          plVar4 = alStack_148;
          uVar2 = uVar7;
          uVar8 = uVar13;
          lVar9 = lVar11;
          uVar7 = uVar10;
          uVar13 = uVar14;
          lVar11 = lVar12;
          goto LAB_1035912f0;
        }
        FUN_103590f0c(&lStack_110,alStack_148,0x112db6f48,&UNK_10d969b40);
        FUN_103590f0c(&lStack_130,alStack_148,0x112db6f48,&UNK_10d969b40);
      }
      func_0x000100d56000(lVar11,uVar13,uVar7);
      uVar5 = *param_1;
      func_0x000100e25fcc(uVar5,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar5;
      goto LAB_103591418;
    }
LAB_103591008:
    uVar5 = 0x112db6358;
    puVar6 = &UNK_10d961e20;
    FUN_103590f0c(&lStack_90,&lStack_d0,0x112db6358,&UNK_10d961e20);
    plVar3 = &lStack_b0;
    plVar4 = &lStack_d0;
    uVar2 = uVar7;
    uVar8 = uVar13;
    lVar9 = lVar11;
    uVar7 = uVar10;
    uVar13 = uVar14;
    lVar11 = lVar12;
LAB_1035912f0:
    FUN_103590f0c(plVar3,plVar4,uVar5,puVar6);
    func_0x000100d56000(lVar9,uVar8,uVar2);
  }
LAB_103591410:
  func_0x000100d56000(lVar11,uVar13,uVar7);
  uVar1 = 0;
LAB_103591418:
  return uVar1 & 1;
}



/* Entry: 10359143c; end: 10359147b;  */

void FUN_10359143c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a758 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdf170;
  func_0x000107c61520(&UNK_10dbdf170,&UNK_110667660);
  puRam0000000112f7a758 = puVar1;
  return;
}



/* Entry: 10359147c; end: 10359149f;  */

void FUN_10359147c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035914a0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035914a0; end: 1035914df;  */

void FUN_1035914a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a760 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdf148;
  func_0x000107c61520(&UNK_10dbdf148,&UNK_110667660);
  puRam0000000112f7a760 = puVar1;
  return;
}



/* Entry: 1035914e0; end: 10359150b;  */

void FUN_1035914e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10359143c();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103589e7c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10359150c; end: 10359150f;  */

void FUN_10359150c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdf1b0;
  func_0x000107c61520(&UNK_10dbdf1b0,&UNK_110667660);
  puRam0000000112f7a768 = puVar1;
  return;
}



/* Entry: 103591510; end: 10359154f;  */

void FUN_103591510(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdf1b0;
  func_0x000107c61520(&UNK_10dbdf1b0,&UNK_110667660);
  puRam0000000112f7a768 = puVar1;
  return;
}



/* Entry: 103591550; end: 1035915f3;  */

long FUN_103591550(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1035915f4; end: 103591a3f;  */

undefined8 * FUN_1035915f4(undefined8 *param_1,undefined8 *param_2)

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
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    uVar3 = param_2[3];
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



/* Entry: 103591a40; end: 103591b07;  */

int FUN_103591a40(int *param_1,uint param_2)

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



/* Entry: 103591b08; end: 103591b47;  */

void FUN_103591b08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a778 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbdf11c;
  func_0x000107c61520(&DAT_10dbdf11c,&UNK_110667660);
  puRam0000000112f7a778 = puVar1;
  return;
}



/* Entry: 103591b48; end: 103591bd7;  */

bool FUN_103591b48(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(ulong *)(unaff_x20 + 0x30);
  uVar4 = uVar3 >> 0x3c;
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_40 = uVar3;
  if (uVar4 < 0xf) {
    func_0x00010161ef18(&uStack_50,auStack_68);
    func_0x000101553ccc(uVar1,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0xf000000000000000;
  }
  else {
    func_0x00010161ef18(&uStack_50,auStack_68);
  }
  func_0x000101553ccc(uVar1,uVar2,uVar3);
  return uVar4 < 0xf;
}



/* Entry: 103591bd8; end: 103591c1f;  */

void FUN_103591bd8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbdf3a0,0x17,2);
  uRam0000000113808c78 = uStack_38;
  uRam0000000113808c70 = uStack_40;
  uRam0000000113808c88 = uStack_28;
  uRam0000000113808c80 = uStack_30;
  uRam0000000113808c98 = uStack_18;
  uRam0000000113808c90 = uStack_20;
  return;
}



/* Entry: 103591c20; end: 103591cf3;  */

/* WARNING: Removing unreachable block (ram,0x000103591cf0) */

void FUN_103591c20(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        (*pcVar4)(unaff_x20 + 0x20,&UNK_110790980,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        (**(code **)(param_3 + 0x150))();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103591cf4; end: 103591d7f;  */

void FUN_103591cf4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  FUN_103591d80();
  if (unaff_x21 == 0) {
    uVar2 = unaff_x20[1];
    uVar1 = *unaff_x20 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,2,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 103591d80; end: 103591e07;  */

void FUN_103591d80(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x30);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,1,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103591e08; end: 103591e53;  */

uint FUN_103591e08(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar7 = param_1[5];
  uVar5 = param_1[4];
  uVar3 = param_1[6];
  uVar8 = param_2[5];
  uVar6 = param_2[4];
  uVar4 = param_2[6];
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  uStack_90 = uVar4;
  uStack_80 = uVar5;
  uStack_78 = uVar7;
  uStack_70 = uVar3;
  if (uVar3 >> 0x3c < 0xf) {
    if (0xe < uVar4 >> 0x3c) goto LAB_103592294;
    if ((float)uVar5 == (float)uVar6) {
      func_0x00010161ef18(&uStack_80,auStack_b8);
      func_0x00010161ef18(&uStack_a0,auStack_b8);
      uVar2 = uVar7;
      func_0x000100e25fcc(uVar7,uVar3,uVar8,uVar4);
      func_0x000101553ccc(uVar6,uVar8,uVar4);
      if ((uVar2 & 1) != 0) goto LAB_103592320;
    }
    else {
      func_0x00010161ef18(&uStack_80,auStack_b8);
      func_0x00010161ef18(&uStack_a0,auStack_b8);
      func_0x000101553ccc(uVar6,uVar8,uVar4);
    }
  }
  else {
    if (0xe < uVar4 >> 0x3c) {
      func_0x00010161ef18(&uStack_80,auStack_b8);
      func_0x00010161ef18(&uStack_a0,auStack_b8);
LAB_103592320:
      func_0x000101553ccc(uVar5,uVar7,uVar3);
      uVar5 = *param_1;
      if ((uVar5 != *param_2) || (param_1[1] != param_2[1])) {
        func_0x000107c605b8();
        uVar1 = 0;
        if ((uVar5 & 1) == 0) goto LAB_1035923a0;
      }
      uVar5 = param_1[2];
      func_0x000100e25fcc(uVar5,param_1[3],param_2[2],param_2[3]);
      uVar1 = (uint)uVar5;
      goto LAB_1035923a0;
    }
LAB_103592294:
    func_0x00010161ef18(&uStack_80,auStack_b8);
    func_0x00010161ef18(&uStack_a0,auStack_b8);
    func_0x000101553ccc(uVar5,uVar7,uVar3);
    uVar5 = uVar6;
    uVar7 = uVar8;
    uVar3 = uVar4;
  }
  func_0x000101553ccc(uVar5,uVar7,uVar3);
  uVar1 = 0;
LAB_1035923a0:
  return uVar1 & 1;
}



/* Entry: 103591e54; end: 103591e83;  */

undefined1  [16] FUN_103591e54(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 103591e84; end: 103591eb7;  */

void FUN_103591e84(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 103591eb8; end: 103591ecb;  */

undefined1  [16] FUN_103591eb8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x103591ec8;
  return auVar1;
}



/* Entry: 103591ecc; end: 103591edf;  */

void FUN_103591ecc(void)

{
  FUN_103591c20();
  return;
}



/* Entry: 103591ee0; end: 103591f1f;  */

void FUN_103591ee0(void)

{
  FUN_103591cf4();
  return;
}



/* Entry: 103591f20; end: 103591f23;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103591f20(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103591f24; end: 103591f5b;  */

uint FUN_103591f24(long param_1,long param_2)

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
  FUN_10359281c();
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



/* Entry: 103591f5c; end: 103591fb3;  */

uint FUN_103591f5c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_60 = unaff_x20[6];
  FUN_103592204(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103591fb4; end: 103592053;  */

/* WARNING: Possible PIC construction at 0x000103592000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103592010: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103592004) */
/* WARNING: Removing unreachable block (ram,0x000103592014) */

void FUN_103591fb4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7a780 != -1) {
    func_0x000107c61568(0x112f7a780,FUN_103591bd8);
  }
  uVar5 = uRam0000000113808c98;
  uVar4 = uRam0000000113808c90;
  uVar3 = uRam0000000113808c88;
  uVar2 = uRam0000000113808c80;
  uVar1 = uRam0000000113808c78;
  *param_1 = uRam0000000113808c70;
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



/* Entry: 103592054; end: 10359208f;  */

void FUN_103592054(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7a7a0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7a7a0,&UNK_10dbdf398);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103592090; end: 1035921ab;  */

void FUN_103592090(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b0 [72];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = *unaff_x20;
  uStack_60 = unaff_x20[1];
  uStack_38 = unaff_x20[6];
  uStack_50 = unaff_x20[3];
  uStack_58 = unaff_x20[2];
  uStack_40 = unaff_x20[5];
  uStack_48 = unaff_x20[4];
  func_0x000107c6068c(auStack_b0,0);
  func_0x000107c5fa50(auStack_b0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035921ac; end: 103592203;  */

uint FUN_1035921ac(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = param_2[6];
  FUN_103592204(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103592204; end: 1035923c3;  */

uint FUN_103592204(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar7 = param_1[5];
  uVar5 = param_1[4];
  uVar3 = param_1[6];
  uVar8 = param_2[5];
  uVar6 = param_2[4];
  uVar4 = param_2[6];
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  uStack_90 = uVar4;
  uStack_80 = uVar5;
  uStack_78 = uVar7;
  uStack_70 = uVar3;
  if (uVar3 >> 0x3c < 0xf) {
    if (0xe < uVar4 >> 0x3c) goto LAB_103592294;
    if ((float)uVar5 == (float)uVar6) {
      func_0x00010161ef18(&uStack_80,auStack_b8);
      func_0x00010161ef18(&uStack_a0,auStack_b8);
      uVar2 = uVar7;
      func_0x000100e25fcc(uVar7,uVar3,uVar8,uVar4);
      func_0x000101553ccc(uVar6,uVar8,uVar4);
      if ((uVar2 & 1) != 0) goto LAB_103592320;
    }
    else {
      func_0x00010161ef18(&uStack_80,auStack_b8);
      func_0x00010161ef18(&uStack_a0,auStack_b8);
      func_0x000101553ccc(uVar6,uVar8,uVar4);
    }
  }
  else {
    if (0xe < uVar4 >> 0x3c) {
      func_0x00010161ef18(&uStack_80,auStack_b8);
      func_0x00010161ef18(&uStack_a0,auStack_b8);
LAB_103592320:
      func_0x000101553ccc(uVar5,uVar7,uVar3);
      uVar5 = *param_1;
      if ((uVar5 != *param_2) || (param_1[1] != param_2[1])) {
        func_0x000107c605b8();
        uVar1 = 0;
        if ((uVar5 & 1) == 0) goto LAB_1035923a0;
      }
      uVar5 = param_1[2];
      func_0x000100e25fcc(uVar5,param_1[3],param_2[2],param_2[3]);
      uVar1 = (uint)uVar5;
      goto LAB_1035923a0;
    }
LAB_103592294:
    func_0x00010161ef18(&uStack_80,auStack_b8);
    func_0x00010161ef18(&uStack_a0,auStack_b8);
    func_0x000101553ccc(uVar5,uVar7,uVar3);
    uVar5 = uVar6;
    uVar7 = uVar8;
    uVar3 = uVar4;
  }
  func_0x000101553ccc(uVar5,uVar7,uVar3);
  uVar1 = 0;
LAB_1035923a0:
  return uVar1 & 1;
}



/* Entry: 1035923c4; end: 103592403;  */

void FUN_1035923c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a788 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdf2e8;
  func_0x000107c61520(&UNK_10dbdf2e8,&UNK_110667810);
  puRam0000000112f7a788 = puVar1;
  return;
}



/* Entry: 103592404; end: 103592427;  */

void FUN_103592404(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103592428();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103592428; end: 103592467;  */

void FUN_103592428(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a790 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdf2c0;
  func_0x000107c61520(&UNK_10dbdf2c0,&UNK_110667810);
  puRam0000000112f7a790 = puVar1;
  return;
}



/* Entry: 103592468; end: 103592493;  */

void FUN_103592468(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035923c4();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103589e3c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103592494; end: 103592497;  */

void FUN_103592494(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a798 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdf328;
  func_0x000107c61520(&UNK_10dbdf328,&UNK_110667810);
  puRam0000000112f7a798 = puVar1;
  return;
}



/* Entry: 103592498; end: 1035924d7;  */

void FUN_103592498(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a798 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdf328;
  func_0x000107c61520(&UNK_10dbdf328,&UNK_110667810);
  puRam0000000112f7a798 = puVar1;
  return;
}



/* Entry: 1035924d8; end: 10359254f;  */

long FUN_1035924d8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103592550; end: 1035926df;  */

undefined8 * FUN_103592550(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[2];
  uVar1 = param_2[3];
  func_0x000107c61434();
  func_0x00010006c00c(uVar2,uVar1);
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  uVar3 = param_2[6];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    uVar2 = param_2[5];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[5] = uVar2;
    param_1[6] = uVar3;
  }
  else {
    uVar2 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[6] = param_2[6];
  }
  return param_1;
}



/* Entry: 1035926e0; end: 103592777;  */

undefined8 * FUN_1035926e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[2];
  uVar1 = param_1[3];
  uVar4 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  func_0x00010006c090(uVar2,uVar1);
  if ((ulong)param_1[6] >> 0x3c < 0xf) {
    uVar3 = param_2[6];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
      uVar2 = param_1[5];
      param_1[5] = param_2[5];
      param_1[6] = uVar3;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    func_0x000101599dcc(param_1 + 4);
  }
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 103592778; end: 10359281b;  */

int FUN_103592778(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10359281c; end: 10359285b;  */

void FUN_10359281c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a7a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbdf294;
  func_0x000107c61520(&DAT_10dbdf294,&UNK_110667810);
  puRam0000000112f7a7a8 = puVar1;
  return;
}



/* Entry: 10359285c; end: 1035928fb;  */

bool FUN_10359285c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar3 = *(ulong *)(unaff_x20 + 0x90);
  uVar4 = uVar3 >> 0x3c;
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_40 = uVar3;
  if (uVar4 < 0xf) {
    FUN_10359336c(&uStack_50,auStack_68,0x112db6358,&UNK_10d961e20);
    func_0x000101553ccc(uVar1,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0xf000000000000000;
  }
  else {
    FUN_10359336c(&uStack_50,auStack_68,0x112db6358,&UNK_10d961e20);
  }
  func_0x000101553ccc(uVar1,uVar2,uVar3);
  return uVar4 < 0xf;
}



/* Entry: 1035928fc; end: 1035929af;  */

bool FUN_1035928fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar4 = *(ulong *)(unaff_x20 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar5 = uVar4 >> 0x3c;
  uStack_60 = uVar1;
  uStack_58 = uVar2;
  uStack_50 = uVar3;
  uStack_48 = uVar4;
  if (uVar5 < 0xf) {
    FUN_10359336c(&uStack_60,auStack_80,0x112db7158,&UNK_10d964998);
    func_0x000101553d58(uVar1,uVar2,uVar3,uVar4);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0xf000000000000000;
  }
  else {
    FUN_10359336c(&uStack_60,auStack_80,0x112db7158,&UNK_10d964998);
  }
  func_0x000101553d58(uVar1,uVar2,uVar3,uVar4);
  return uVar5 < 0xf;
}



/* Entry: 1035929b0; end: 1035929f7;  */

void FUN_1035929b0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbdf500,0x5f,2);
  uRam0000000113808ca8 = uStack_38;
  uRam0000000113808ca0 = uStack_40;
  uRam0000000113808cb8 = uStack_28;
  uRam0000000113808cb0 = uStack_30;
  uRam0000000113808cc8 = uStack_18;
  uRam0000000113808cc0 = uStack_20;
  return;
}



/* Entry: 1035929f8; end: 103592b5b;  */

/* WARNING: Removing unreachable block (ram,0x000103592b10) */

void FUN_1035929f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  long unaff_x21;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0x80;
        puVar3 = &UNK_110790980;
        goto code_r0x000103592afc;
      case 2:
        pcVar4 = *(code **)(param_3 + 0x150);
        break;
      case 3:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015c5dbc();
        lVar2 = unaff_x20 + 0x98;
        puVar3 = &UNK_110734ce8;
code_r0x000103592afc:
        (*pcVar4)(lVar2,puVar3,uVar1,param_2,param_3);
        goto LAB_103592a80;
      case 4:
        pcVar4 = *(code **)(param_3 + 0x150);
        break;
      case 5:
        pcVar4 = *(code **)(param_3 + 0x150);
        break;
      case 6:
        pcVar4 = *(code **)(param_3 + 0x150);
        break;
      case 7:
        pcVar4 = *(code **)(param_3 + 0x150);
        break;
      case 8:
        pcVar4 = *(code **)(param_3 + 0x150);
        break;
      case 9:
        pcVar4 = *(code **)(param_3 + 0x60);
        break;
      case 10:
        pcVar4 = *(code **)(param_3 + 0x60);
        break;
      default:
        goto LAB_103592a80;
      }
      (*pcVar4)();
LAB_103592a80:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 103592b5c; end: 103592d33;  */

void FUN_103592b5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  FUN_103592d34();
  if (unaff_x21 == 0) {
    uVar2 = unaff_x20[1];
    uVar1 = *unaff_x20 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,2,param_2,param_3);
    }
    FUN_103592dbc();
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,4,param_2,param_3);
    }
    uVar2 = unaff_x20[5];
    uVar1 = unaff_x20[4] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,5,param_2,param_3);
    }
    uVar2 = unaff_x20[7];
    uVar1 = unaff_x20[6] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[6],uVar2,6,param_2,param_3);
    }
    uVar2 = unaff_x20[9];
    uVar1 = unaff_x20[8] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[8],uVar2,7,param_2,param_3);
    }
    uVar2 = unaff_x20[0xb];
    uVar1 = unaff_x20[10] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[10],uVar2,8,param_2,param_3);
    }
    if (unaff_x20[0xc] != 0) {
      (**(code **)(param_3 + 0x20))(unaff_x20[0xc],9,param_2,param_3);
    }
    if (unaff_x20[0xd] != 0) {
      (**(code **)(param_3 + 0x20))(unaff_x20[0xd],10,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[0xe],unaff_x20[0xf],param_2,param_3);
  }
  return;
}



/* Entry: 103592d34; end: 103592dbb;  */

void FUN_103592d34(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x90);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x88);
    uStack_60 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,1,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103592dbc; end: 103592e47;  */

void FUN_103592dbc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0xb0);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xa0);
    uStack_60 = *(undefined8 *)(param_1 + 0x98);
    uStack_50 = *(undefined8 *)(param_1 + 0xa8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5dbc();
    (*pcVar1)(&uStack_60,3,&UNK_110734ce8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103592e48; end: 103592eaf;  */

uint FUN_103592e48(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_100 [32];
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar7 = param_1[0x11];
  uVar5 = param_1[0x10];
  uVar3 = param_1[0x12];
  uVar8 = param_2[0x11];
  uVar6 = param_2[0x10];
  uVar4 = param_2[0x12];
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  uStack_90 = uVar4;
  uStack_80 = uVar5;
  uStack_78 = uVar7;
  uStack_70 = uVar3;
  if (uVar3 >> 0x3c < 0xf) {
    if (0xe < uVar4 >> 0x3c) goto LAB_103593460;
    if ((float)uVar5 == (float)uVar6) {
      FUN_10359336c(&uStack_80,&uStack_c0,0x112db6358,&UNK_10d961e20);
      FUN_10359336c(&uStack_a0,&uStack_c0,0x112db6358,&UNK_10d961e20);
      uVar9 = uVar7;
      func_0x000100e25fcc(uVar7,uVar3,uVar8,uVar4);
      func_0x000101553ccc(uVar6,uVar8,uVar4);
      if ((uVar9 & 1) != 0) goto LAB_10359352c;
    }
    else {
      FUN_10359336c(&uStack_80,&uStack_c0,0x112db6358,&UNK_10d961e20);
      FUN_10359336c(&uStack_a0,&uStack_c0,0x112db6358,&UNK_10d961e20);
      func_0x000101553ccc(uVar6,uVar8,uVar4);
    }
LAB_103593790:
    func_0x000101553ccc(uVar5,uVar7,uVar3);
  }
  else {
    if (uVar4 >> 0x3c < 0xf) {
LAB_103593460:
      FUN_10359336c(&uStack_80,&uStack_c0,0x112db6358,&UNK_10d961e20);
      FUN_10359336c(&uStack_a0,&uStack_c0,0x112db6358,&UNK_10d961e20);
      func_0x000101553ccc(uVar5,uVar7,uVar3);
      uVar5 = uVar6;
      uVar7 = uVar8;
      uVar3 = uVar4;
      goto LAB_103593790;
    }
    FUN_10359336c(&uStack_80,&uStack_c0,0x112db6358,&UNK_10d961e20);
    FUN_10359336c(&uStack_a0,&uStack_c0,0x112db6358,&UNK_10d961e20);
LAB_10359352c:
    func_0x000101553ccc(uVar5,uVar7,uVar3);
    uVar5 = *param_1;
    if (((uVar5 == *param_2) && (param_1[1] == param_2[1])) ||
       (func_0x000107c605b8(), (uVar5 & 1) != 0)) {
      uVar7 = param_1[0x14];
      uVar5 = param_1[0x13];
      uVar4 = param_1[0x16];
      uVar3 = param_1[0x15];
      uVar8 = param_2[0x14];
      uVar6 = param_2[0x13];
      uVar10 = param_2[0x16];
      uVar9 = param_2[0x15];
      uStack_e0 = uVar6;
      uStack_d8 = uVar8;
      uStack_d0 = uVar9;
      uStack_c8 = uVar10;
      uStack_c0 = uVar5;
      uStack_b8 = uVar7;
      uStack_b0 = uVar3;
      uStack_a8 = uVar4;
      if (uVar4 >> 0x3c < 0xf) {
        if (0xe < uVar10 >> 0x3c) goto LAB_1035936dc;
        if ((((int)uVar5 == (int)uVar6) && ((uVar6 ^ uVar5) >> 0x20 == 0)) &&
           ((int)uVar7 == (int)uVar8)) {
          FUN_10359336c(&uStack_c0,auStack_100,0x112db7158,&UNK_10d964998);
          FUN_10359336c(&uStack_e0,auStack_100,0x112db7158,&UNK_10d964998);
          uVar2 = uVar3;
          func_0x000100e25fcc(uVar3,uVar4,uVar9,uVar10);
          func_0x000101553d58(uVar6,uVar8,uVar9,uVar10);
          if ((uVar2 & 1) != 0) goto LAB_1035935d8;
        }
        else {
          FUN_10359336c(&uStack_c0,auStack_100,0x112db7158,&UNK_10d964998);
          FUN_10359336c(&uStack_e0,auStack_100,0x112db7158,&UNK_10d964998);
          func_0x000101553d58(uVar6,uVar8,uVar9,uVar10);
        }
      }
      else {
        if (0xe < uVar10 >> 0x3c) {
          FUN_10359336c(&uStack_c0,auStack_100,0x112db7158,&UNK_10d964998);
          FUN_10359336c(&uStack_e0,auStack_100,0x112db7158,&UNK_10d964998);
LAB_1035935d8:
          func_0x000101553d58(uVar5,uVar7,uVar3,uVar4);
          uVar5 = param_1[2];
          if (((uVar5 == param_2[2]) && (param_1[3] == param_2[3])) ||
             (func_0x000107c605b8(), (uVar5 & 1) != 0)) {
            uVar5 = param_1[4];
            if (((uVar5 == param_2[4]) && (param_1[5] == param_2[5])) ||
               (func_0x000107c605b8(), (uVar5 & 1) != 0)) {
              uVar5 = param_1[6];
              if (((uVar5 == param_2[6]) && (param_1[7] == param_2[7])) ||
                 (func_0x000107c605b8(), (uVar5 & 1) != 0)) {
                uVar5 = param_1[8];
                if (((uVar5 == param_2[8]) && (param_1[9] == param_2[9])) ||
                   (func_0x000107c605b8(), (uVar5 & 1) != 0)) {
                  uVar5 = param_1[10];
                  if ((((uVar5 == param_2[10]) && (param_1[0xb] == param_2[0xb])) ||
                      (func_0x000107c605b8(), (uVar5 & 1) != 0)) &&
                     ((param_1[0xc] == param_2[0xc] && (param_1[0xd] == param_2[0xd])))) {
                    uVar5 = param_1[0xe];
                    func_0x000100e25fcc(uVar5,param_1[0xf],param_2[0xe],param_2[0xf]);
                    uVar1 = (uint)uVar5;
                    goto LAB_103593888;
                  }
                }
              }
            }
          }
          goto LAB_103593884;
        }
LAB_1035936dc:
        FUN_10359336c(&uStack_c0,auStack_100,0x112db7158,&UNK_10d964998);
        FUN_10359336c(&uStack_e0,auStack_100,0x112db7158,&UNK_10d964998);
        func_0x000101553d58(uVar5,uVar7,uVar3,uVar4);
        uVar5 = uVar6;
        uVar7 = uVar8;
        uVar3 = uVar9;
        uVar4 = uVar10;
      }
      func_0x000101553d58(uVar5,uVar7,uVar3,uVar4);
    }
  }
LAB_103593884:
  uVar1 = 0;
LAB_103593888:
  return uVar1 & 1;
}



/* Entry: 103592eb0; end: 103592edf;  */

undefined1  [16] FUN_103592eb0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x70);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x70),
                      *(undefined8 *)(unaff_x20 + 0x78));
  return auVar1;
}



/* Entry: 103592ee0; end: 103592f13;  */

void FUN_103592ee0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  *(undefined8 *)(unaff_x20 + 0x70) = param_1;
  *(undefined8 *)(unaff_x20 + 0x78) = param_2;
  return;
}



/* Entry: 103592f14; end: 103592f27;  */

undefined1  [16] FUN_103592f14(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x70;
  auVar1._0_8_ = 0x103592f24;
  return auVar1;
}



/* Entry: 103592f28; end: 103592f3b;  */

void FUN_103592f28(void)

{
  FUN_1035929f8();
  return;
}



/* Entry: 103592f3c; end: 103592f9b;  */

void FUN_103592f3c(void)

{
  FUN_103592b5c();
  return;
}



/* Entry: 103592f9c; end: 103592f9f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103592f9c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103592fa0; end: 103592fd7;  */

uint FUN_103592fa0(long param_1,long param_2)

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
  FUN_103594034();
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



/* Entry: 103592fd8; end: 103593077;  */

uint FUN_103592fd8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
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
  
  uVar1 = 0;
  uStack_58 = param_1[0x11];
  uStack_60 = param_1[0x10];
  uStack_48 = param_1[0x13];
  uStack_50 = param_1[0x12];
  uStack_38 = param_1[0x15];
  uStack_40 = param_1[0x14];
  uStack_30 = param_1[0x16];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_78 = param_1[0xd];
  uStack_80 = param_1[0xc];
  uStack_68 = param_1[0xf];
  uStack_70 = param_1[0xe];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_118 = unaff_x20[0x11];
  uStack_120 = unaff_x20[0x10];
  uStack_108 = unaff_x20[0x13];
  uStack_110 = unaff_x20[0x12];
  uStack_f8 = unaff_x20[0x15];
  uStack_100 = unaff_x20[0x14];
  uStack_f0 = unaff_x20[0x16];
  uStack_158 = unaff_x20[9];
  uStack_160 = unaff_x20[8];
  uStack_148 = unaff_x20[0xb];
  uStack_150 = unaff_x20[10];
  uStack_138 = unaff_x20[0xd];
  uStack_140 = unaff_x20[0xc];
  uStack_128 = unaff_x20[0xf];
  uStack_130 = unaff_x20[0xe];
  uStack_198 = unaff_x20[1];
  uStack_1a0 = *unaff_x20;
  uStack_188 = unaff_x20[3];
  uStack_190 = unaff_x20[2];
  uStack_178 = unaff_x20[5];
  uStack_180 = unaff_x20[4];
  uStack_168 = unaff_x20[7];
  uStack_170 = unaff_x20[6];
  FUN_1035933b4(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 103593078; end: 103593117;  */

/* WARNING: Possible PIC construction at 0x0001035930c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035930d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035930c8) */
/* WARNING: Removing unreachable block (ram,0x0001035930d8) */

void FUN_103593078(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7a7b0 != -1) {
    func_0x000107c61568(0x112f7a7b0,FUN_1035929b0);
  }
  uVar5 = uRam0000000113808cc8;
  uVar4 = uRam0000000113808cc0;
  uVar3 = uRam0000000113808cb8;
  uVar2 = uRam0000000113808cb0;
  uVar1 = uRam0000000113808ca8;
  *param_1 = uRam0000000113808ca0;
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



/* Entry: 103593118; end: 103593153;  */

void FUN_103593118(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7a7d0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7a7d0,&UNK_10dbdf4f8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103593154; end: 1035932af;  */

void FUN_103593154(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_138 [72];
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
  
  uStack_68 = unaff_x20[0x11];
  uStack_70 = unaff_x20[0x10];
  uStack_58 = unaff_x20[0x13];
  uStack_60 = unaff_x20[0x12];
  uStack_48 = unaff_x20[0x15];
  uStack_50 = unaff_x20[0x14];
  uStack_40 = unaff_x20[0x16];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_78 = unaff_x20[0xf];
  uStack_80 = unaff_x20[0xe];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  func_0x000107c6068c(auStack_138,0);
  func_0x000107c5fa50(auStack_138,param_1,param_2);
  func_0x000107c606a8();
  return;
}


