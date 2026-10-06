/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103504058; end: 10350408f;  */

uint FUN_103504058(long param_1,long param_2)

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
  FUN_103504d14();
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



/* Entry: 103504090; end: 1035040e7;  */

uint FUN_103504090(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
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
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  FUN_103504378(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 1035040e8; end: 103504187;  */

/* WARNING: Possible PIC construction at 0x000103504134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103504144: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103504138) */
/* WARNING: Removing unreachable block (ram,0x000103504148) */

void FUN_1035040e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f74ec8 != -1) {
    func_0x000107c61568(0x112f74ec8,FUN_103503c8c);
  }
  uVar5 = uRam0000000113807558;
  uVar4 = uRam0000000113807550;
  uVar3 = uRam0000000113807548;
  uVar2 = uRam0000000113807540;
  uVar1 = uRam0000000113807538;
  *param_1 = uRam0000000113807530;
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



/* Entry: 103504188; end: 1035041c3;  */

void FUN_103504188(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f74ee8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f74ee8,&UNK_10dbd16a8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035041c4; end: 1035042d7;  */

void FUN_1035041c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_c8 [72];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  func_0x000107c6068c(auStack_c8,0);
  func_0x000107c5fa50(auStack_c8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035042d8; end: 10350432f;  */

uint FUN_1035042d8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
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
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_103504378(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103504330; end: 103504377;  */

undefined8 FUN_103504330(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103504378; end: 103504783;  */

uint FUN_103504378(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_100 [32];
  ulong uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  
  uVar7 = param_1[3];
  uVar5 = param_1[2];
  uVar3 = param_1[4];
  uVar8 = param_2[3];
  uVar6 = param_2[2];
  uVar4 = param_2[4];
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  uStack_90 = uVar4;
  uStack_80 = uVar5;
  uStack_78 = uVar7;
  uStack_70 = uVar3;
  if ((uVar5 & 0xff) == 2) {
    if ((uVar6 & 0xff) == 2) {
      FUN_103504330(&uStack_80,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      FUN_103504330(&uStack_a0,&uStack_c0,0x112db94f0,&UNK_10d96af00);
LAB_103504418:
      func_0x000101556278(uVar5,uVar7,uVar3);
      lVar9 = param_1[6];
      uVar5 = param_1[5];
      uVar3 = param_1[8];
      uVar7 = param_1[7];
      lVar10 = param_2[6];
      uVar6 = param_2[5];
      uVar4 = param_2[8];
      uVar8 = param_2[7];
      uStack_e0 = uVar6;
      lStack_d8 = lVar10;
      uStack_d0 = uVar8;
      uStack_c8 = uVar4;
      uStack_c0 = uVar5;
      lStack_b8 = lVar9;
      uStack_b0 = uVar7;
      uStack_a8 = uVar3;
      if (lVar9 == 0) {
        if (lVar10 == 0) {
          FUN_103504330(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
          FUN_103504330(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
LAB_1035046e0:
          func_0x000101597ae4(uVar5,lVar9,uVar7,uVar3);
          uVar3 = *param_1;
          func_0x000100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
          uVar1 = (uint)uVar3;
          goto LAB_103504700;
        }
LAB_10350463c:
        FUN_103504330(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
        FUN_103504330(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
        func_0x000101597ae4(uVar5,lVar9,uVar7,uVar3);
        uVar5 = uVar6;
        lVar9 = lVar10;
        uVar7 = uVar8;
        uVar3 = uVar4;
      }
      else {
        if (lVar10 == 0) goto LAB_10350463c;
        if (((uVar5 == uVar6) && (lVar9 == lVar10)) ||
           (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar9,uVar6,lVar10,0), (uVar2 & 1) != 0)) {
          FUN_103504330(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
          FUN_103504330(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
          uVar2 = uVar7;
          func_0x000100e25fcc(uVar7,uVar3,uVar8,uVar4);
          func_0x000101597ae4(uVar6,lVar10,uVar8,uVar4);
          if ((uVar2 & 1) != 0) goto LAB_1035046e0;
        }
        else {
          FUN_103504330(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
          FUN_103504330(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
          func_0x000101597ae4(uVar6,lVar10,uVar8,uVar4);
        }
      }
      func_0x000101597ae4(uVar5,lVar9,uVar7,uVar3);
      uVar1 = 0;
      goto LAB_103504700;
    }
LAB_103504510:
    FUN_103504330(&uStack_80,&uStack_c0,0x112db94f0,&UNK_10d96af00);
    FUN_103504330(&uStack_a0,&uStack_c0,0x112db94f0,&UNK_10d96af00);
    func_0x000101556278(uVar5,uVar7,uVar3);
    uVar5 = uVar6;
    uVar7 = uVar8;
    uVar3 = uVar4;
  }
  else {
    if ((uVar6 & 0xff) == 2) goto LAB_103504510;
    if ((((uint)uVar6 ^ (uint)uVar5) & 1) == 0) {
      FUN_103504330(&uStack_80,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      FUN_103504330(&uStack_a0,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      uVar2 = uVar7;
      func_0x000100e25fcc(uVar7,uVar3,uVar8,uVar4);
      func_0x000101556278(uVar6,uVar8,uVar4);
      if ((uVar2 & 1) != 0) goto LAB_103504418;
    }
    else {
      FUN_103504330(&uStack_80,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      FUN_103504330(&uStack_a0,&uStack_c0,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar6,uVar8,uVar4);
    }
  }
  func_0x000101556278(uVar5,uVar7,uVar3);
  uVar1 = 0;
LAB_103504700:
  return uVar1 & 1;
}



/* Entry: 103504784; end: 1035047c3;  */

void FUN_103504784(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f74ed0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd15d0;
  func_0x000107c61520(&UNK_10dbd15d0,&UNK_11065dfc0);
  puRam0000000112f74ed0 = puVar1;
  return;
}



/* Entry: 1035047c4; end: 1035047e7;  */

void FUN_1035047c4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035047e8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035047e8; end: 103504827;  */

void FUN_1035047e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f74ed8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd15a8;
  func_0x000107c61520(&UNK_10dbd15a8,&UNK_11065dfc0);
  puRam0000000112f74ed8 = puVar1;
  return;
}



/* Entry: 103504828; end: 103504853;  */

void FUN_103504828(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103504784();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103502d14();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103504854; end: 103504857;  */

void FUN_103504854(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f74ee0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd1610;
  func_0x000107c61520(&UNK_10dbd1610,&UNK_11065dfc0);
  puRam0000000112f74ee0 = puVar1;
  return;
}



/* Entry: 103504858; end: 103504897;  */

void FUN_103504858(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f74ee0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd1610;
  func_0x000107c61520(&UNK_10dbd1610,&UNK_11065dfc0);
  puRam0000000112f74ee0 = puVar1;
  return;
}



/* Entry: 103504898; end: 10350491b;  */

long FUN_103504898(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10350491c; end: 103504c43;  */

undefined8 * FUN_10350491c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar4,uVar1);
  *param_1 = uVar4;
  param_1[1] = uVar1;
  cVar2 = *(char *)(param_2 + 2);
  if (cVar2 == '\x02') {
    uVar4 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar4;
    param_1[4] = param_2[4];
    lVar3 = param_2[6];
  }
  else {
    *(char *)(param_1 + 2) = cVar2;
    uVar4 = param_2[3];
    uVar1 = param_2[4];
    func_0x00010006c00c(uVar4,uVar1);
    param_1[3] = uVar4;
    param_1[4] = uVar1;
    lVar3 = param_2[6];
  }
  if (lVar3 == 0) {
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    uVar4 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar4;
  }
  else {
    param_1[5] = param_2[5];
    param_1[6] = lVar3;
    uVar4 = param_2[7];
    uVar1 = param_2[8];
    func_0x000107c61434();
    func_0x00010006c00c(uVar4,uVar1);
    param_1[7] = uVar4;
    param_1[8] = uVar1;
  }
  return param_1;
}



/* Entry: 103504c44; end: 103504d13;  */

int FUN_103504c44(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0xc);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103504d14; end: 103504d9b;  */

void FUN_103504d14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f74ef0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd157c;
  func_0x000107c61520(&DAT_10dbd157c,&UNK_11065dfc0);
  puRam0000000112f74ef0 = puVar1;
  return;
}



/* Entry: 103504d9c; end: 103504ed3;  */

void FUN_103504d9c(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000101568c04();
          lVar2 = unaff_x20 + 0x10;
          goto LAB_103504e10;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000101568c04();
          lVar2 = unaff_x20 + 0x30;
          goto LAB_103504e10;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000101568c04();
          lVar2 = unaff_x20 + 0x50;
        }
        else if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000101568c04();
          lVar2 = unaff_x20 + 0x70;
        }
        else {
          if (lVar1 != 5) goto LAB_103504e28;
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000101568c04();
          lVar2 = unaff_x20 + 0x90;
        }
LAB_103504e10:
        (*pcVar4)(lVar2,&UNK_110790c80,lVar1,param_2,param_3);
      }
LAB_103504e28:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103504ed4; end: 103504f8f;  */

void FUN_103504ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_103504f90();
  if (unaff_x21 == 0) {
    FUN_103505014();
    FUN_103505098();
    FUN_10350511c();
    FUN_1035051a0();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 103504f90; end: 103505013;  */

void FUN_103504f90(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x18);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    uStack_48 = *(undefined8 *)(param_1 + 0x28);
    uStack_50 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,1,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103505014; end: 103505097;  */

void FUN_103505014(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x38);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    uStack_48 = *(undefined8 *)(param_1 + 0x48);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,2,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103505098; end: 10350511b;  */

void FUN_103505098(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,3,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10350511c; end: 10350519f;  */

void FUN_10350511c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x78);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x70);
    uStack_48 = *(undefined8 *)(param_1 + 0x88);
    uStack_50 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,4,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035051a0; end: 103505223;  */

void FUN_1035051a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x98);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x90);
    uStack_48 = *(undefined8 *)(param_1 + 0xa8);
    uStack_50 = *(undefined8 *)(param_1 + 0xa0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,5,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103505224; end: 103505273;  */

uint FUN_103505224(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong auStack_210 [4];
  ulong uStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  long lStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  long lStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  long lStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  lVar7 = param_1[3];
  uVar5 = param_1[2];
  uVar11 = param_1[5];
  uVar9 = param_1[4];
  lVar8 = param_2[3];
  uVar6 = param_2[2];
  uVar12 = param_2[5];
  uVar10 = param_2[4];
  uStack_b0 = uVar6;
  lStack_a8 = lVar8;
  uStack_a0 = uVar10;
  uStack_98 = uVar12;
  uStack_90 = uVar5;
  lStack_88 = lVar7;
  uStack_80 = uVar9;
  uStack_78 = uVar11;
  if (lVar7 == 0) {
    if (lVar8 != 0) goto LAB_1035057b0;
    func_0x000101627928(&uStack_90,&uStack_1f0);
    func_0x000101627928(&uStack_b0,&uStack_1f0);
LAB_1035057f8:
    func_0x000101597ae4(uVar5,lVar7,uVar9,uVar11);
    lVar7 = param_1[7];
    uVar5 = param_1[6];
    uVar11 = param_1[9];
    uVar9 = param_1[8];
    lVar8 = param_2[7];
    uVar6 = param_2[6];
    uVar12 = param_2[9];
    uVar10 = param_2[8];
    uStack_f0 = uVar6;
    lStack_e8 = lVar8;
    uStack_e0 = uVar10;
    uStack_d8 = uVar12;
    uStack_d0 = uVar5;
    lStack_c8 = lVar7;
    uStack_c0 = uVar9;
    uStack_b8 = uVar11;
    if (lVar7 == 0) {
      if (lVar8 != 0) goto LAB_1035058b8;
      func_0x000101627928(&uStack_d0,&uStack_1f0);
      func_0x000101627928(&uStack_f0,&uStack_1f0);
    }
    else {
      if (lVar8 == 0) {
LAB_1035058b8:
        uStack_1f0 = uVar5;
        lStack_1e8 = lVar7;
        uStack_1e0 = uVar9;
        uStack_1d8 = uVar11;
        uStack_1d0 = uVar6;
        lStack_1c8 = lVar8;
        uStack_1c0 = uVar10;
        uStack_1b8 = uVar12;
        func_0x000101627928(&uStack_d0,&uStack_110);
        puVar3 = &uStack_f0;
        puVar4 = &uStack_110;
        goto LAB_103505c24;
      }
      if (((uVar5 != uVar6) || (lVar7 != lVar8)) &&
         (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar7,uVar6,lVar8,0), (uVar2 & 1) == 0)) {
        func_0x000101627928(&uStack_d0,&uStack_1f0);
        puVar3 = &uStack_f0;
        goto LAB_103505c9c;
      }
      func_0x000101627928(&uStack_d0,&uStack_1f0);
      func_0x000101627928(&uStack_f0,&uStack_1f0);
      uVar2 = uVar9;
      func_0x000100e25fcc(uVar9,uVar11,uVar10,uVar12);
      func_0x000101597ae4(uVar6,lVar8,uVar10,uVar12);
      if ((uVar2 & 1) == 0) goto LAB_103505cb8;
    }
    func_0x000101597ae4(uVar5,lVar7,uVar9,uVar11);
    lVar7 = param_1[0xb];
    uVar5 = param_1[10];
    uVar11 = param_1[0xd];
    uVar9 = param_1[0xc];
    lVar8 = param_2[0xb];
    uVar6 = param_2[10];
    uVar12 = param_2[0xd];
    uVar10 = param_2[0xc];
    uStack_130 = uVar6;
    lStack_128 = lVar8;
    uStack_120 = uVar10;
    uStack_118 = uVar12;
    uStack_110 = uVar5;
    lStack_108 = lVar7;
    uStack_100 = uVar9;
    uStack_f8 = uVar11;
    if (lVar7 == 0) {
      if (lVar8 != 0) goto LAB_1035059d0;
      func_0x000101627928(&uStack_110,&uStack_1f0);
      func_0x000101627928(&uStack_130,&uStack_1f0);
    }
    else {
      if (lVar8 == 0) {
LAB_1035059d0:
        uStack_1f0 = uVar5;
        lStack_1e8 = lVar7;
        uStack_1e0 = uVar9;
        uStack_1d8 = uVar11;
        uStack_1d0 = uVar6;
        lStack_1c8 = lVar8;
        uStack_1c0 = uVar10;
        uStack_1b8 = uVar12;
        func_0x000101627928(&uStack_110,&uStack_150);
        puVar3 = &uStack_130;
        puVar4 = &uStack_150;
        goto LAB_103505c24;
      }
      if (((uVar5 != uVar6) || (lVar7 != lVar8)) &&
         (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar7,uVar6,lVar8,0), (uVar2 & 1) == 0)) {
        func_0x000101627928(&uStack_110,&uStack_1f0);
        puVar3 = &uStack_130;
        goto LAB_103505c9c;
      }
      func_0x000101627928(&uStack_110,&uStack_1f0);
      func_0x000101627928(&uStack_130,&uStack_1f0);
      uVar2 = uVar9;
      func_0x000100e25fcc(uVar9,uVar11,uVar10,uVar12);
      func_0x000101597ae4(uVar6,lVar8,uVar10,uVar12);
      if ((uVar2 & 1) == 0) goto LAB_103505cb8;
    }
    func_0x000101597ae4(uVar5,lVar7,uVar9,uVar11);
    lVar7 = param_1[0xf];
    uVar5 = param_1[0xe];
    uVar11 = param_1[0x11];
    uVar9 = param_1[0x10];
    lVar8 = param_2[0xf];
    uVar6 = param_2[0xe];
    uVar12 = param_2[0x11];
    uVar10 = param_2[0x10];
    uStack_170 = uVar6;
    lStack_168 = lVar8;
    uStack_160 = uVar10;
    uStack_158 = uVar12;
    uStack_150 = uVar5;
    lStack_148 = lVar7;
    uStack_140 = uVar9;
    uStack_138 = uVar11;
    if (lVar7 == 0) {
      if (lVar8 != 0) goto LAB_103505ae8;
      func_0x000101627928(&uStack_150,&uStack_1f0);
      func_0x000101627928(&uStack_170,&uStack_1f0);
    }
    else {
      if (lVar8 == 0) {
LAB_103505ae8:
        uStack_1f0 = uVar5;
        lStack_1e8 = lVar7;
        uStack_1e0 = uVar9;
        uStack_1d8 = uVar11;
        uStack_1d0 = uVar6;
        lStack_1c8 = lVar8;
        uStack_1c0 = uVar10;
        uStack_1b8 = uVar12;
        func_0x000101627928(&uStack_150,&uStack_190);
        puVar3 = &uStack_170;
        puVar4 = &uStack_190;
        goto LAB_103505c24;
      }
      if (((uVar5 != uVar6) || (lVar7 != lVar8)) &&
         (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar7,uVar6,lVar8,0), (uVar2 & 1) == 0)) {
        func_0x000101627928(&uStack_150,&uStack_1f0);
        puVar3 = &uStack_170;
        goto LAB_103505c9c;
      }
      func_0x000101627928(&uStack_150,&uStack_1f0);
      func_0x000101627928(&uStack_170,&uStack_1f0);
      uVar2 = uVar9;
      func_0x000100e25fcc(uVar9,uVar11,uVar10,uVar12);
      func_0x000101597ae4(uVar6,lVar8,uVar10,uVar12);
      if ((uVar2 & 1) == 0) goto LAB_103505cb8;
    }
    func_0x000101597ae4(uVar5,lVar7,uVar9,uVar11);
    lVar7 = param_1[0x13];
    uVar5 = param_1[0x12];
    uVar11 = param_1[0x15];
    uVar9 = param_1[0x14];
    lVar8 = param_2[0x13];
    uVar6 = param_2[0x12];
    uVar12 = param_2[0x15];
    uVar10 = param_2[0x14];
    uStack_1b0 = uVar6;
    lStack_1a8 = lVar8;
    uStack_1a0 = uVar10;
    uStack_198 = uVar12;
    uStack_190 = uVar5;
    lStack_188 = lVar7;
    uStack_180 = uVar9;
    uStack_178 = uVar11;
    if (lVar7 == 0) {
      if (lVar8 != 0) goto LAB_103505c00;
      func_0x000101627928(&uStack_190,&uStack_1f0);
      func_0x000101627928(&uStack_1b0,&uStack_1f0);
    }
    else {
      if (lVar8 == 0) {
LAB_103505c00:
        uStack_1f0 = uVar5;
        lStack_1e8 = lVar7;
        uStack_1e0 = uVar9;
        uStack_1d8 = uVar11;
        uStack_1d0 = uVar6;
        lStack_1c8 = lVar8;
        uStack_1c0 = uVar10;
        uStack_1b8 = uVar12;
        func_0x000101627928(&uStack_190,auStack_210);
        puVar3 = &uStack_1b0;
        puVar4 = auStack_210;
        goto LAB_103505c24;
      }
      if (((uVar5 != uVar6) || (lVar7 != lVar8)) &&
         (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar7,uVar6,lVar8,0), (uVar2 & 1) == 0)) {
        func_0x000101627928(&uStack_190,&uStack_1f0);
        puVar3 = &uStack_1b0;
        goto LAB_103505c9c;
      }
      func_0x000101627928(&uStack_190,&uStack_1f0);
      func_0x000101627928(&uStack_1b0,&uStack_1f0);
      uVar2 = uVar9;
      func_0x000100e25fcc(uVar9,uVar11,uVar10,uVar12);
      func_0x000101597ae4(uVar6,lVar8,uVar10,uVar12);
      if ((uVar2 & 1) == 0) goto LAB_103505cb8;
    }
    func_0x000101597ae4(uVar5,lVar7,uVar9,uVar11);
    uVar11 = *param_1;
    func_0x000100e25fcc(uVar11,param_1[1],*param_2,param_2[1]);
    uVar1 = (uint)uVar11;
  }
  else {
    if (lVar8 == 0) {
LAB_1035057b0:
      uStack_1f0 = uVar5;
      lStack_1e8 = lVar7;
      uStack_1e0 = uVar9;
      uStack_1d8 = uVar11;
      uStack_1d0 = uVar6;
      lStack_1c8 = lVar8;
      uStack_1c0 = uVar10;
      uStack_1b8 = uVar12;
      func_0x000101627928(&uStack_90,&uStack_d0);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_103505c24:
      func_0x000101627928(puVar3,puVar4);
      func_0x000101628968(&uStack_1f0);
    }
    else {
      if (((uVar5 == uVar6) && (lVar7 == lVar8)) ||
         (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar7,uVar6,lVar8,0), (uVar2 & 1) != 0)) {
        func_0x000101627928(&uStack_90,&uStack_1f0);
        func_0x000101627928(&uStack_b0,&uStack_1f0);
        uVar2 = uVar9;
        func_0x000100e25fcc(uVar9,uVar11,uVar10,uVar12);
        func_0x000101597ae4(uVar6,lVar8,uVar10,uVar12);
        if ((uVar2 & 1) != 0) goto LAB_1035057f8;
      }
      else {
        func_0x000101627928(&uStack_90,&uStack_1f0);
        puVar3 = &uStack_b0;
LAB_103505c9c:
        func_0x000101627928(puVar3,&uStack_1f0);
        func_0x000101597ae4(uVar6,lVar8,uVar10,uVar12);
      }
LAB_103505cb8:
      func_0x000101597ae4(uVar5,lVar7,uVar9,uVar11);
    }
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 103505274; end: 1035052a3;  */

undefined1  [16] FUN_103505274(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1035052a4; end: 1035052d7;  */

void FUN_1035052a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1035052d8; end: 1035052eb;  */

undefined8 FUN_1035052d8(void)

{
  return 0x1035052e8;
}



/* Entry: 1035052ec; end: 1035052ff;  */

void FUN_1035052ec(void)

{
  FUN_103504d9c();
  return;
}



/* Entry: 103505300; end: 103505357;  */

void FUN_103505300(void)

{
  FUN_103504ed4();
  return;
}



/* Entry: 103505358; end: 10350535b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103505358(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10350535c; end: 103505393;  */

uint FUN_10350535c(long param_1,long param_2)

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
  FUN_1035065ec();
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



/* Entry: 103505394; end: 103505423;  */

uint FUN_103505394(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  
  uVar1 = 0;
  uStack_48 = param_1[0x11];
  uStack_50 = param_1[0x10];
  uStack_38 = param_1[0x13];
  uStack_40 = param_1[0x12];
  uStack_28 = param_1[0x15];
  uStack_30 = param_1[0x14];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_68 = param_1[0xd];
  uStack_70 = param_1[0xc];
  uStack_58 = param_1[0xf];
  uStack_60 = param_1[0xe];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_f8 = unaff_x20[0x11];
  uStack_100 = unaff_x20[0x10];
  uStack_e8 = unaff_x20[0x13];
  uStack_f0 = unaff_x20[0x12];
  uStack_d8 = unaff_x20[0x15];
  uStack_e0 = unaff_x20[0x14];
  uStack_138 = unaff_x20[9];
  uStack_140 = unaff_x20[8];
  uStack_128 = unaff_x20[0xb];
  uStack_130 = unaff_x20[10];
  uStack_118 = unaff_x20[0xd];
  uStack_120 = unaff_x20[0xc];
  uStack_108 = unaff_x20[0xf];
  uStack_110 = unaff_x20[0xe];
  uStack_178 = unaff_x20[1];
  uStack_180 = *unaff_x20;
  uStack_168 = unaff_x20[3];
  uStack_170 = unaff_x20[2];
  uStack_158 = unaff_x20[5];
  uStack_160 = unaff_x20[4];
  uStack_148 = unaff_x20[7];
  uStack_150 = unaff_x20[6];
  FUN_1035056dc(&uStack_180,&uStack_d0);
  return uVar1 & 1;
}



/* Entry: 103505424; end: 1035054c3;  */

/* WARNING: Possible PIC construction at 0x000103505470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103505480: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103505474) */
/* WARNING: Removing unreachable block (ram,0x000103505484) */

void FUN_103505424(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f74ef8 != -1) {
    func_0x000107c61568(0x112f74ef8,0x103504d54);
  }
  uVar5 = uRam0000000113807588;
  uVar4 = uRam0000000113807580;
  uVar3 = uRam0000000113807578;
  uVar2 = uRam0000000113807570;
  uVar1 = uRam0000000113807568;
  *param_1 = uRam0000000113807560;
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



/* Entry: 1035054c4; end: 1035054ff;  */

void FUN_1035054c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f74f18;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f74f18,&UNK_10dbd1810);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103505500; end: 10350564b;  */

void FUN_103505500(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_128 [72];
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
  
  uStack_58 = unaff_x20[0x11];
  uStack_60 = unaff_x20[0x10];
  uStack_48 = unaff_x20[0x13];
  uStack_50 = unaff_x20[0x12];
  uStack_38 = unaff_x20[0x15];
  uStack_40 = unaff_x20[0x14];
  uStack_98 = unaff_x20[9];
  uStack_a0 = unaff_x20[8];
  uStack_88 = unaff_x20[0xb];
  uStack_90 = unaff_x20[10];
  uStack_78 = unaff_x20[0xd];
  uStack_80 = unaff_x20[0xc];
  uStack_68 = unaff_x20[0xf];
  uStack_70 = unaff_x20[0xe];
  uStack_d8 = unaff_x20[1];
  uStack_e0 = *unaff_x20;
  uStack_c8 = unaff_x20[3];
  uStack_d0 = unaff_x20[2];
  uStack_b8 = unaff_x20[5];
  uStack_c0 = unaff_x20[4];
  uStack_a8 = unaff_x20[7];
  uStack_b0 = unaff_x20[6];
  func_0x000107c6068c(auStack_128,0);
  func_0x000107c5fa50(auStack_128,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10350564c; end: 1035056db;  */

uint FUN_10350564c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  
  uVar1 = 0;
  uStack_f8 = param_1[0x11];
  uStack_100 = param_1[0x10];
  uStack_e8 = param_1[0x13];
  uStack_f0 = param_1[0x12];
  uStack_d8 = param_1[0x15];
  uStack_e0 = param_1[0x14];
  uStack_138 = param_1[9];
  uStack_140 = param_1[8];
  uStack_128 = param_1[0xb];
  uStack_130 = param_1[10];
  uStack_118 = param_1[0xd];
  uStack_120 = param_1[0xc];
  uStack_108 = param_1[0xf];
  uStack_110 = param_1[0xe];
  uStack_178 = param_1[1];
  uStack_180 = *param_1;
  uStack_168 = param_1[3];
  uStack_170 = param_1[2];
  uStack_158 = param_1[5];
  uStack_160 = param_1[4];
  uStack_148 = param_1[7];
  uStack_150 = param_1[6];
  uStack_48 = param_2[0x11];
  uStack_50 = param_2[0x10];
  uStack_38 = param_2[0x13];
  uStack_40 = param_2[0x12];
  uStack_28 = param_2[0x15];
  uStack_30 = param_2[0x14];
  uStack_88 = param_2[9];
  uStack_90 = param_2[8];
  uStack_78 = param_2[0xb];
  uStack_80 = param_2[10];
  uStack_68 = param_2[0xd];
  uStack_70 = param_2[0xc];
  uStack_58 = param_2[0xf];
  uStack_60 = param_2[0xe];
  uStack_c8 = param_2[1];
  uStack_d0 = *param_2;
  uStack_b8 = param_2[3];
  uStack_c0 = param_2[2];
  uStack_a8 = param_2[5];
  uStack_b0 = param_2[4];
  uStack_98 = param_2[7];
  uStack_a0 = param_2[6];
  FUN_1035056dc(&uStack_180,&uStack_d0);
  return uVar1 & 1;
}



/* Entry: 1035056dc; end: 103505cf3;  */

uint FUN_1035056dc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong auStack_210 [4];
  ulong uStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  long lStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  long lStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  long lStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  lVar7 = param_1[3];
  uVar5 = param_1[2];
  uVar11 = param_1[5];
  uVar9 = param_1[4];
  lVar8 = param_2[3];
  uVar6 = param_2[2];
  uVar12 = param_2[5];
  uVar10 = param_2[4];
  uStack_b0 = uVar6;
  lStack_a8 = lVar8;
  uStack_a0 = uVar10;
  uStack_98 = uVar12;
  uStack_90 = uVar5;
  lStack_88 = lVar7;
  uStack_80 = uVar9;
  uStack_78 = uVar11;
  if (lVar7 == 0) {
    if (lVar8 != 0) goto LAB_1035057b0;
    func_0x000101627928(&uStack_90,&uStack_1f0);
    func_0x000101627928(&uStack_b0,&uStack_1f0);
LAB_1035057f8:
    func_0x000101597ae4(uVar5,lVar7,uVar9,uVar11);
    lVar7 = param_1[7];
    uVar5 = param_1[6];
    uVar11 = param_1[9];
    uVar9 = param_1[8];
    lVar8 = param_2[7];
    uVar6 = param_2[6];
    uVar12 = param_2[9];
    uVar10 = param_2[8];
    uStack_f0 = uVar6;
    lStack_e8 = lVar8;
    uStack_e0 = uVar10;
    uStack_d8 = uVar12;
    uStack_d0 = uVar5;
    lStack_c8 = lVar7;
    uStack_c0 = uVar9;
    uStack_b8 = uVar11;
    if (lVar7 == 0) {
      if (lVar8 != 0) goto LAB_1035058b8;
      func_0x000101627928(&uStack_d0,&uStack_1f0);
      func_0x000101627928(&uStack_f0,&uStack_1f0);
    }
    else {
      if (lVar8 == 0) {
LAB_1035058b8:
        uStack_1f0 = uVar5;
        lStack_1e8 = lVar7;
        uStack_1e0 = uVar9;
        uStack_1d8 = uVar11;
        uStack_1d0 = uVar6;
        lStack_1c8 = lVar8;
        uStack_1c0 = uVar10;
        uStack_1b8 = uVar12;
        func_0x000101627928(&uStack_d0,&uStack_110);
        puVar3 = &uStack_f0;
        puVar4 = &uStack_110;
        goto LAB_103505c24;
      }
      if (((uVar5 != uVar6) || (lVar7 != lVar8)) &&
         (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar7,uVar6,lVar8,0), (uVar2 & 1) == 0)) {
        func_0x000101627928(&uStack_d0,&uStack_1f0);
        puVar3 = &uStack_f0;
        goto LAB_103505c9c;
      }
      func_0x000101627928(&uStack_d0,&uStack_1f0);
      func_0x000101627928(&uStack_f0,&uStack_1f0);
      uVar2 = uVar9;
      func_0x000100e25fcc(uVar9,uVar11,uVar10,uVar12);
      func_0x000101597ae4(uVar6,lVar8,uVar10,uVar12);
      if ((uVar2 & 1) == 0) goto LAB_103505cb8;
    }
    func_0x000101597ae4(uVar5,lVar7,uVar9,uVar11);
    lVar7 = param_1[0xb];
    uVar5 = param_1[10];
    uVar11 = param_1[0xd];
    uVar9 = param_1[0xc];
    lVar8 = param_2[0xb];
    uVar6 = param_2[10];
    uVar12 = param_2[0xd];
    uVar10 = param_2[0xc];
    uStack_130 = uVar6;
    lStack_128 = lVar8;
    uStack_120 = uVar10;
    uStack_118 = uVar12;
    uStack_110 = uVar5;
    lStack_108 = lVar7;
    uStack_100 = uVar9;
    uStack_f8 = uVar11;
    if (lVar7 == 0) {
      if (lVar8 != 0) goto LAB_1035059d0;
      func_0x000101627928(&uStack_110,&uStack_1f0);
      func_0x000101627928(&uStack_130,&uStack_1f0);
    }
    else {
      if (lVar8 == 0) {
LAB_1035059d0:
        uStack_1f0 = uVar5;
        lStack_1e8 = lVar7;
        uStack_1e0 = uVar9;
        uStack_1d8 = uVar11;
        uStack_1d0 = uVar6;
        lStack_1c8 = lVar8;
        uStack_1c0 = uVar10;
        uStack_1b8 = uVar12;
        func_0x000101627928(&uStack_110,&uStack_150);
        puVar3 = &uStack_130;
        puVar4 = &uStack_150;
        goto LAB_103505c24;
      }
      if (((uVar5 != uVar6) || (lVar7 != lVar8)) &&
         (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar7,uVar6,lVar8,0), (uVar2 & 1) == 0)) {
        func_0x000101627928(&uStack_110,&uStack_1f0);
        puVar3 = &uStack_130;
        goto LAB_103505c9c;
      }
      func_0x000101627928(&uStack_110,&uStack_1f0);
      func_0x000101627928(&uStack_130,&uStack_1f0);
      uVar2 = uVar9;
      func_0x000100e25fcc(uVar9,uVar11,uVar10,uVar12);
      func_0x000101597ae4(uVar6,lVar8,uVar10,uVar12);
      if ((uVar2 & 1) == 0) goto LAB_103505cb8;
    }
    func_0x000101597ae4(uVar5,lVar7,uVar9,uVar11);
    lVar7 = param_1[0xf];
    uVar5 = param_1[0xe];
    uVar11 = param_1[0x11];
    uVar9 = param_1[0x10];
    lVar8 = param_2[0xf];
    uVar6 = param_2[0xe];
    uVar12 = param_2[0x11];
    uVar10 = param_2[0x10];
    uStack_170 = uVar6;
    lStack_168 = lVar8;
    uStack_160 = uVar10;
    uStack_158 = uVar12;
    uStack_150 = uVar5;
    lStack_148 = lVar7;
    uStack_140 = uVar9;
    uStack_138 = uVar11;
    if (lVar7 == 0) {
      if (lVar8 != 0) goto LAB_103505ae8;
      func_0x000101627928(&uStack_150,&uStack_1f0);
      func_0x000101627928(&uStack_170,&uStack_1f0);
    }
    else {
      if (lVar8 == 0) {
LAB_103505ae8:
        uStack_1f0 = uVar5;
        lStack_1e8 = lVar7;
        uStack_1e0 = uVar9;
        uStack_1d8 = uVar11;
        uStack_1d0 = uVar6;
        lStack_1c8 = lVar8;
        uStack_1c0 = uVar10;
        uStack_1b8 = uVar12;
        func_0x000101627928(&uStack_150,&uStack_190);
        puVar3 = &uStack_170;
        puVar4 = &uStack_190;
        goto LAB_103505c24;
      }
      if (((uVar5 != uVar6) || (lVar7 != lVar8)) &&
         (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar7,uVar6,lVar8,0), (uVar2 & 1) == 0)) {
        func_0x000101627928(&uStack_150,&uStack_1f0);
        puVar3 = &uStack_170;
        goto LAB_103505c9c;
      }
      func_0x000101627928(&uStack_150,&uStack_1f0);
      func_0x000101627928(&uStack_170,&uStack_1f0);
      uVar2 = uVar9;
      func_0x000100e25fcc(uVar9,uVar11,uVar10,uVar12);
      func_0x000101597ae4(uVar6,lVar8,uVar10,uVar12);
      if ((uVar2 & 1) == 0) goto LAB_103505cb8;
    }
    func_0x000101597ae4(uVar5,lVar7,uVar9,uVar11);
    lVar7 = param_1[0x13];
    uVar5 = param_1[0x12];
    uVar11 = param_1[0x15];
    uVar9 = param_1[0x14];
    lVar8 = param_2[0x13];
    uVar6 = param_2[0x12];
    uVar12 = param_2[0x15];
    uVar10 = param_2[0x14];
    uStack_1b0 = uVar6;
    lStack_1a8 = lVar8;
    uStack_1a0 = uVar10;
    uStack_198 = uVar12;
    uStack_190 = uVar5;
    lStack_188 = lVar7;
    uStack_180 = uVar9;
    uStack_178 = uVar11;
    if (lVar7 == 0) {
      if (lVar8 != 0) goto LAB_103505c00;
      func_0x000101627928(&uStack_190,&uStack_1f0);
      func_0x000101627928(&uStack_1b0,&uStack_1f0);
    }
    else {
      if (lVar8 == 0) {
LAB_103505c00:
        uStack_1f0 = uVar5;
        lStack_1e8 = lVar7;
        uStack_1e0 = uVar9;
        uStack_1d8 = uVar11;
        uStack_1d0 = uVar6;
        lStack_1c8 = lVar8;
        uStack_1c0 = uVar10;
        uStack_1b8 = uVar12;
        func_0x000101627928(&uStack_190,auStack_210);
        puVar3 = &uStack_1b0;
        puVar4 = auStack_210;
        goto LAB_103505c24;
      }
      if (((uVar5 != uVar6) || (lVar7 != lVar8)) &&
         (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar7,uVar6,lVar8,0), (uVar2 & 1) == 0)) {
        func_0x000101627928(&uStack_190,&uStack_1f0);
        puVar3 = &uStack_1b0;
        goto LAB_103505c9c;
      }
      func_0x000101627928(&uStack_190,&uStack_1f0);
      func_0x000101627928(&uStack_1b0,&uStack_1f0);
      uVar2 = uVar9;
      func_0x000100e25fcc(uVar9,uVar11,uVar10,uVar12);
      func_0x000101597ae4(uVar6,lVar8,uVar10,uVar12);
      if ((uVar2 & 1) == 0) goto LAB_103505cb8;
    }
    func_0x000101597ae4(uVar5,lVar7,uVar9,uVar11);
    uVar11 = *param_1;
    func_0x000100e25fcc(uVar11,param_1[1],*param_2,param_2[1]);
    uVar1 = (uint)uVar11;
  }
  else {
    if (lVar8 == 0) {
LAB_1035057b0:
      uStack_1f0 = uVar5;
      lStack_1e8 = lVar7;
      uStack_1e0 = uVar9;
      uStack_1d8 = uVar11;
      uStack_1d0 = uVar6;
      lStack_1c8 = lVar8;
      uStack_1c0 = uVar10;
      uStack_1b8 = uVar12;
      func_0x000101627928(&uStack_90,&uStack_d0);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_103505c24:
      func_0x000101627928(puVar3,puVar4);
      func_0x000101628968(&uStack_1f0);
    }
    else {
      if (((uVar5 == uVar6) && (lVar7 == lVar8)) ||
         (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar7,uVar6,lVar8,0), (uVar2 & 1) != 0)) {
        func_0x000101627928(&uStack_90,&uStack_1f0);
        func_0x000101627928(&uStack_b0,&uStack_1f0);
        uVar2 = uVar9;
        func_0x000100e25fcc(uVar9,uVar11,uVar10,uVar12);
        func_0x000101597ae4(uVar6,lVar8,uVar10,uVar12);
        if ((uVar2 & 1) != 0) goto LAB_1035057f8;
      }
      else {
        func_0x000101627928(&uStack_90,&uStack_1f0);
        puVar3 = &uStack_b0;
LAB_103505c9c:
        func_0x000101627928(puVar3,&uStack_1f0);
        func_0x000101597ae4(uVar6,lVar8,uVar10,uVar12);
      }
LAB_103505cb8:
      func_0x000101597ae4(uVar5,lVar7,uVar9,uVar11);
    }
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 103505cf4; end: 103505d33;  */

void FUN_103505cf4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f74f00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd1758;
  func_0x000107c61520(&UNK_10dbd1758,&UNK_11065e170);
  puRam0000000112f74f00 = puVar1;
  return;
}



/* Entry: 103505d34; end: 103505d57;  */

void FUN_103505d34(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103505d58();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103505d58; end: 103505d97;  */

void FUN_103505d58(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f74f08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd1730;
  func_0x000107c61520(&UNK_10dbd1730,&UNK_11065e170);
  puRam0000000112f74f08 = puVar1;
  return;
}



/* Entry: 103505d98; end: 103505dc3;  */

void FUN_103505d98(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103505cf4();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103502f14();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103505dc4; end: 103505dc7;  */

void FUN_103505dc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f74f10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd1798;
  func_0x000107c61520(&UNK_10dbd1798,&UNK_11065e170);
  puRam0000000112f74f10 = puVar1;
  return;
}



/* Entry: 103505dc8; end: 103505e07;  */

void FUN_103505dc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f74f10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd1798;
  func_0x000107c61520(&UNK_10dbd1798,&UNK_11065e170);
  puRam0000000112f74f10 = puVar1;
  return;
}



/* Entry: 103505e08; end: 103505ec7;  */

long FUN_103505e08(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103505ec8; end: 1035064ff;  */

undefined8 * FUN_103505ec8(undefined8 *param_1,undefined8 *param_2)

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
  lVar1 = param_2[3];
  if (lVar1 == 0) {
    uVar2 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
    lVar1 = param_2[7];
  }
  else {
    param_1[2] = param_2[2];
    param_1[3] = lVar1;
    uVar2 = param_2[4];
    uVar3 = param_2[5];
    func_0x000107c61434();
    func_0x00010006c00c(uVar2,uVar3);
    param_1[4] = uVar2;
    param_1[5] = uVar3;
    lVar1 = param_2[7];
  }
  if (lVar1 == 0) {
    uVar2 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
    lVar1 = param_2[0xb];
  }
  else {
    param_1[6] = param_2[6];
    param_1[7] = lVar1;
    uVar2 = param_2[8];
    uVar3 = param_2[9];
    func_0x000107c61434();
    func_0x00010006c00c(uVar2,uVar3);
    param_1[8] = uVar2;
    param_1[9] = uVar3;
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
    lVar1 = param_2[0xf];
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
    lVar1 = param_2[0xf];
  }
  if (lVar1 == 0) {
    uVar2 = param_2[0xe];
    uVar4 = param_2[0x11];
    uVar3 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar2;
    param_1[0x11] = uVar4;
    param_1[0x10] = uVar3;
    lVar1 = param_2[0x13];
  }
  else {
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = lVar1;
    uVar2 = param_2[0x10];
    uVar3 = param_2[0x11];
    func_0x000107c61434();
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x10] = uVar2;
    param_1[0x11] = uVar3;
    lVar1 = param_2[0x13];
  }
  if (lVar1 == 0) {
    uVar2 = param_2[0x12];
    uVar4 = param_2[0x15];
    uVar3 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar2;
    param_1[0x15] = uVar4;
    param_1[0x14] = uVar3;
  }
  else {
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = lVar1;
    uVar2 = param_2[0x14];
    uVar3 = param_2[0x15];
    func_0x000107c61434();
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x14] = uVar2;
    param_1[0x15] = uVar3;
  }
  return param_1;
}



/* Entry: 103506500; end: 1035065eb;  */

int FUN_103506500(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x2c] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1035065ec; end: 10350662b;  */

void FUN_1035065ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f74f20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd1704;
  func_0x000107c61520(&DAT_10dbd1704,&UNK_11065e170);
  puRam0000000112f74f20 = puVar1;
  return;
}



/* Entry: 10350662c; end: 1035066cf;  */

void FUN_10350662c(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_103507d80();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1035066d0; end: 1035066f3;  */

bool FUN_1035066d0(long param_1,undefined8 param_2,long param_3)

{
  return param_1 == param_3;
}



/* Entry: 1035066f4; end: 103506733;  */

void FUN_1035066f4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f75050;
  func_0x0001000285a8(0x112f75050,&UNK_10dbd1890);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103506734; end: 10350674f;  */

void FUN_103506734(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 103506750; end: 1035067d3;  */

void FUN_103506750(void)

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



/* Entry: 1035067d4; end: 10350681b;  */

void FUN_1035067d4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd1e60,0x8f,2);
  uRam0000000113807598 = uStack_38;
  uRam0000000113807590 = uStack_40;
  uRam00000001138075a8 = uStack_28;
  uRam00000001138075a0 = uStack_30;
  uRam00000001138075b8 = uStack_18;
  uRam00000001138075b0 = uStack_20;
  return;
}



/* Entry: 10350681c; end: 1035069fb;  */

/* WARNING: Removing unreachable block (ram,0x0001035069f8) */

void FUN_10350681c(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 5) {
        if (lVar1 < 3) {
          puVar3 = &UNK_110790980;
          if (lVar1 == 1) {
            pcVar5 = *(code **)(param_3 + 0x198);
            func_0x00010157193c();
            lVar2 = unaff_x20 + 0x40;
          }
          else {
            if (lVar1 != 2) goto LAB_1035068bc;
            pcVar5 = *(code **)(param_3 + 0x198);
            func_0x00010157193c();
            lVar2 = unaff_x20 + 0x58;
          }
          goto LAB_1035068a8;
        }
        if (lVar1 == 3) {
          (**(code **)(param_3 + 0x168))();
        }
        else if (lVar1 == 4) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015fdfec();
          lVar2 = unaff_x20 + 0x70;
          puVar3 = &UNK_110790c00;
          goto LAB_1035068a8;
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar5 = *(code **)(param_3 + 0x180);
            FUN_103507dd4();
            lVar2 = unaff_x20 + 0x10;
            puVar3 = &UNK_11065e4f0;
          }
          else {
            if (lVar1 != 6) goto LAB_1035068bc;
            pcVar5 = *(code **)(param_3 + 0x198);
            func_0x000103509fb0();
            lVar2 = unaff_x20 + 0x88;
            puVar3 = &UNK_11066a6c0;
          }
        }
        else if (lVar1 == 7) {
          pcVar5 = *(code **)(param_3 + 0x180);
          func_0x000103507e14();
          lVar2 = unaff_x20 + 0x20;
          puVar3 = &UNK_11065e580;
        }
        else {
          if (lVar1 != 8) goto LAB_1035068bc;
          pcVar5 = *(code **)(param_3 + 0x198);
          FUN_103508c8c();
          lVar2 = unaff_x20 + 0xd8;
          puVar3 = &UNK_11065e5f8;
        }
LAB_1035068a8:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_1035068bc:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1035069fc; end: 103506bbb;  */

void FUN_1035069fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar6;
  long lStack_50;
  undefined1 uStack_48;
  
  FUN_103506bbc();
  if (unaff_x21 != 0) {
    return;
  }
  FUN_103506c44();
  lVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar5 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((uVar2 & 0xff000000000000) == 0) goto LAB_103506ab4;
    }
    else if ((long)(int)lVar1 == lVar1 >> 0x20) goto LAB_103506ab4;
  }
  else if ((uVar5 != 2) || (*(long *)(lVar1 + 0x10) == *(long *)(lVar1 + 0x18))) goto LAB_103506ab4;
  (**(code **)(param_3 + 0x78))(lVar1,uVar2,3,param_2,param_3);
LAB_103506ab4:
  plVar4 = unaff_x20;
  FUN_103506ccc();
  if (unaff_x20[2] != 0) {
    uStack_48 = (undefined1)unaff_x20[3];
    pcVar6 = *(code **)(param_3 + 0x80);
    lStack_50 = unaff_x20[2];
    FUN_103507dd4();
    (*pcVar6)(&lStack_50,5,&UNK_11065e4f0,plVar4,param_2,param_3);
  }
  plVar4 = unaff_x20;
  FUN_103506d54();
  if (unaff_x20[4] != 0) {
    uStack_48 = (undefined1)unaff_x20[5];
    pcVar6 = *(code **)(param_3 + 0x80);
    lStack_50 = unaff_x20[4];
    func_0x000103507e14();
    (*pcVar6)(&lStack_50,7,&UNK_11065e580,plVar4,param_2,param_3);
  }
  FUN_103506df0();
  func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
  return;
}



/* Entry: 103506bbc; end: 103506c43;  */

void FUN_103506bbc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,1,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103506c44; end: 103506ccb;  */

void FUN_103506c44(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x68);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x60);
    uStack_60 = *(undefined8 *)(param_1 + 0x58);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,2,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103506ccc; end: 103506d53;  */

void FUN_103506ccc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x70);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x80);
    uStack_50 = *(undefined8 *)(param_1 + 0x78);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,4,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103506d54; end: 103506def;  */

void FUN_103506d54(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_88 = *(ulong *)(param_1 + 0x90);
  if (uStack_88 >> 0x3c < 0xf) {
    uStack_90 = *(undefined8 *)(param_1 + 0x88);
    uStack_78 = *(undefined8 *)(param_1 + 0xa0);
    uStack_80 = *(undefined8 *)(param_1 + 0x98);
    uStack_68 = *(undefined8 *)(param_1 + 0xb0);
    uStack_70 = *(undefined8 *)(param_1 + 0xa8);
    uStack_58 = *(undefined8 *)(param_1 + 0xc0);
    uStack_60 = *(undefined8 *)(param_1 + 0xb8);
    uStack_48 = *(undefined8 *)(param_1 + 0xd0);
    uStack_50 = *(undefined8 *)(param_1 + 200);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103509fb0();
    (*pcVar1)(&uStack_90,6,&UNK_11066a6c0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103506df0; end: 103506e7f;  */

void FUN_103506df0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_70 = *(long *)(param_1 + 0xe0);
  if (lStack_70 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0xd8);
    uStack_60 = *(undefined8 *)(param_1 + 0xf0);
    uStack_68 = *(undefined8 *)(param_1 + 0xe8);
    uStack_50 = *(undefined8 *)(param_1 + 0x100);
    uStack_58 = *(undefined8 *)(param_1 + 0xf8);
    uStack_48 = *(undefined8 *)(param_1 + 0x108);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103508c8c();
    (*pcVar1)(&uStack_78,8,&UNK_11065e5f8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103506e80; end: 103506f17;  */

uint FUN_103506e80(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  undefined1 auStack_3d8 [56];
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  undefined8 uStack_350;
  ulong uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
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
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
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
  
  uVar3 = param_1[9];
  uVar5 = param_1[8];
  uVar4 = param_1[10];
  uVar8 = param_2[9];
  uVar7 = param_2[8];
  uVar6 = param_2[10];
  uStack_100 = uVar7;
  uStack_f8 = uVar8;
  uStack_f0 = uVar6;
  uStack_e0 = uVar5;
  uStack_d8 = uVar3;
  uStack_d0 = uVar4;
  if (uVar4 >> 0x3c < 0xf) {
    if (0xe < uVar6 >> 0x3c) goto LAB_103507f00;
    if ((float)uVar5 == (float)uVar7) {
      FUN_103507d8c(&uStack_e0,&uStack_300,0x112db6358,&UNK_10d961e20);
      FUN_103507d8c(&uStack_100,&uStack_300,0x112db6358,&UNK_10d961e20);
      uVar9 = uVar3;
      func_0x000100e25fcc(uVar3,uVar4,uVar8,uVar6);
      func_0x000100d54e0c(uVar7,uVar8,uVar6);
      if ((uVar9 & 1) != 0) goto LAB_103507fa0;
    }
    else {
      FUN_103507d8c(&uStack_e0,&uStack_300,0x112db6358,&UNK_10d961e20);
      puVar2 = &uStack_100;
LAB_10350832c:
      FUN_103507d8c(puVar2,&uStack_300,0x112db6358,&UNK_10d961e20);
      func_0x000100d54e0c(uVar7,uVar8,uVar6);
    }
LAB_103508358:
    func_0x000100d54e0c(uVar5,uVar3,uVar4);
  }
  else {
    if (uVar6 >> 0x3c < 0xf) {
LAB_103507f00:
      FUN_103507d8c(&uStack_e0,&uStack_300,0x112db6358,&UNK_10d961e20);
      puVar2 = &uStack_100;
      uVar9 = uVar4;
      uVar10 = uVar3;
      uVar11 = uVar5;
      uVar4 = uVar6;
      uVar3 = uVar8;
      uVar5 = uVar7;
LAB_103508064:
      FUN_103507d8c(puVar2,&uStack_300,0x112db6358,&UNK_10d961e20);
      func_0x000100d54e0c(uVar11,uVar10,uVar9);
      goto LAB_103508358;
    }
    FUN_103507d8c(&uStack_e0,&uStack_300,0x112db6358,&UNK_10d961e20);
    FUN_103507d8c(&uStack_100,&uStack_300,0x112db6358,&UNK_10d961e20);
LAB_103507fa0:
    func_0x000100d54e0c(uVar5,uVar3,uVar4);
    uVar3 = param_1[0xc];
    uVar5 = param_1[0xb];
    uVar4 = param_1[0xd];
    uVar8 = param_2[0xc];
    uVar7 = param_2[0xb];
    uVar6 = param_2[0xd];
    uStack_140 = uVar7;
    uStack_138 = uVar8;
    uStack_130 = uVar6;
    uStack_120 = uVar5;
    uStack_118 = uVar3;
    uStack_110 = uVar4;
    if (uVar4 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_10350803c;
      if ((float)uVar5 != (float)uVar7) {
        FUN_103507d8c(&uStack_120,&uStack_300,0x112db6358,&UNK_10d961e20);
        puVar2 = &uStack_140;
        goto LAB_10350832c;
      }
      FUN_103507d8c(&uStack_120,&uStack_300,0x112db6358,&UNK_10d961e20);
      FUN_103507d8c(&uStack_140,&uStack_300,0x112db6358,&UNK_10d961e20);
      uVar9 = uVar3;
      func_0x000100e25fcc(uVar3,uVar4,uVar8,uVar6);
      func_0x000100d54e0c(uVar7,uVar8,uVar6);
      if ((uVar9 & 1) == 0) goto LAB_103508358;
    }
    else {
      if (uVar6 >> 0x3c < 0xf) {
LAB_10350803c:
        FUN_103507d8c(&uStack_120,&uStack_300,0x112db6358,&UNK_10d961e20);
        puVar2 = &uStack_140;
        uVar9 = uVar4;
        uVar10 = uVar3;
        uVar11 = uVar5;
        uVar4 = uVar6;
        uVar3 = uVar8;
        uVar5 = uVar7;
        goto LAB_103508064;
      }
      FUN_103507d8c(&uStack_120,&uStack_300,0x112db6358,&UNK_10d961e20);
      FUN_103507d8c(&uStack_140,&uStack_300,0x112db6358,&UNK_10d961e20);
    }
    func_0x000100d54e0c(uVar5,uVar3,uVar4);
    uVar4 = *param_1;
    func_0x000100e25fcc(uVar4,param_1[1],*param_2,param_2[1]);
    if ((uVar4 & 1) == 0) goto LAB_10350835c;
    uVar3 = param_1[0xf];
    uVar4 = param_1[0xe];
    uVar5 = param_1[0x10];
    uVar7 = param_2[0xf];
    uVar8 = param_2[0xe];
    uVar6 = param_2[0x10];
    uStack_180 = uVar8;
    uStack_178 = uVar7;
    uStack_170 = uVar6;
    uStack_160 = uVar4;
    uStack_158 = uVar3;
    uStack_150 = uVar5;
    if ((uVar4 & 0xff) == 2) {
      if ((uVar8 & 0xff) != 2) {
LAB_10350838c:
        FUN_103507d8c(&uStack_160,&uStack_300,0x112db94f0,&UNK_10d96af00);
        FUN_103507d8c(&uStack_180,&uStack_300,0x112db94f0,&UNK_10d96af00);
        func_0x000101556278(uVar4,uVar3,uVar5);
        uVar4 = uVar8;
        uVar3 = uVar7;
        uVar5 = uVar6;
        goto LAB_1035084a8;
      }
      FUN_103507d8c(&uStack_160,&uStack_300,0x112db94f0,&UNK_10d96af00);
      FUN_103507d8c(&uStack_180,&uStack_300,0x112db94f0,&UNK_10d96af00);
LAB_1035081d4:
      func_0x000101556278(uVar4,uVar3,uVar5);
      uVar4 = param_1[2];
      FUN_1035066d0(uVar4,(char)param_1[3],param_2[2],*(undefined1 *)(param_2 + 3));
      if ((uVar4 & 1) != 0) {
        uStack_1b8 = param_1[0x14];
        uStack_1c0 = param_1[0x13];
        uStack_1a8 = param_1[0x16];
        uStack_1b0 = param_1[0x15];
        uStack_198 = param_1[0x18];
        uStack_1a0 = param_1[0x17];
        uStack_188 = param_1[0x1a];
        uStack_190 = param_1[0x19];
        uStack_1c8 = param_1[0x12];
        uStack_1d0 = param_1[0x11];
        uStack_208 = param_2[0x14];
        uStack_210 = param_2[0x13];
        uStack_1f8 = param_2[0x16];
        uStack_200 = param_2[0x15];
        uStack_1e8 = param_2[0x18];
        uStack_1f0 = param_2[0x17];
        uStack_1d8 = param_2[0x1a];
        uStack_1e0 = param_2[0x19];
        uStack_218 = param_2[0x12];
        uStack_220 = param_2[0x11];
        uStack_2e8 = param_1[0x14];
        uStack_2f0 = param_1[0x13];
        uStack_2d8 = param_1[0x16];
        uStack_2e0 = param_1[0x15];
        uStack_2c8 = param_1[0x18];
        uStack_2d0 = param_1[0x17];
        uStack_2b8 = param_1[0x1a];
        uStack_2c0 = param_1[0x19];
        uStack_2f8 = param_1[0x12];
        uStack_300 = param_1[0x11];
        uStack_338 = param_2[0x14];
        uStack_340 = param_2[0x13];
        uStack_328 = param_2[0x16];
        uStack_330 = param_2[0x15];
        uStack_318 = param_2[0x18];
        uStack_320 = param_2[0x17];
        uStack_348 = param_2[0x12];
        uStack_350 = param_2[0x11];
        uStack_308 = param_2[0x1a];
        uStack_310 = param_2[0x19];
        uStack_2b0 = uStack_350;
        uStack_2a8 = uStack_348;
        uStack_2a0 = uStack_340;
        uStack_298 = uStack_338;
        uStack_290 = uStack_330;
        uStack_288 = uStack_328;
        uStack_280 = uStack_320;
        uStack_278 = uStack_318;
        uStack_270 = uStack_310;
        uStack_268 = uStack_308;
        if (uStack_2f8 >> 0x3c < 0xf) {
          if (0xe < uStack_348 >> 0x3c) goto LAB_1035084b8;
          uStack_418 = param_2[0x14];
          uStack_420 = param_2[0x13];
          uStack_408 = param_2[0x16];
          uStack_410 = param_2[0x15];
          uStack_3f8 = param_2[0x18];
          uStack_400 = param_2[0x17];
          uStack_3e8 = param_2[0x1a];
          uStack_3f0 = param_2[0x19];
          uStack_428 = param_2[0x12];
          uStack_430 = param_2[0x11];
          uStack_b8 = param_1[0x12];
          uStack_c0 = param_1[0x11];
          uStack_a8 = param_1[0x14];
          uStack_b0 = param_1[0x13];
          uStack_98 = param_1[0x16];
          uStack_a0 = param_1[0x15];
          uStack_88 = param_1[0x18];
          uStack_90 = param_1[0x17];
          uStack_78 = param_1[0x1a];
          uStack_80 = param_1[0x19];
          uStack_3a0 = uStack_430;
          uStack_398 = uStack_428;
          uStack_390 = uStack_420;
          uStack_388 = uStack_418;
          uStack_380 = uStack_410;
          uStack_378 = uStack_408;
          uStack_370 = uStack_400;
          uStack_368 = uStack_3f8;
          uStack_360 = uStack_3f0;
          uStack_358 = uStack_3e8;
          FUN_103507d8c(&uStack_1d0,&uStack_480,0x112f730a8,&UNK_10dbd1870);
          FUN_103507d8c(&uStack_220,&uStack_480,0x112f730a8,&UNK_10dbd1870);
          puVar2 = &uStack_c0;
          FUN_1035c4a34(puVar2,&uStack_3a0);
          func_0x000103507b00(&uStack_430,0x112f730a8,&UNK_10dbd1870);
          func_0x000103507b00(&uStack_300,0x112f730a8,&UNK_10dbd1870);
          if (((ulong)puVar2 & 1) != 0) goto LAB_1035085ec;
        }
        else if (uStack_348 >> 0x3c < 0xf) {
LAB_1035084b8:
          uStack_3a0 = uStack_300;
          uStack_398 = uStack_2f8;
          uStack_390 = uStack_2f0;
          uStack_388 = uStack_2e8;
          uStack_380 = uStack_2e0;
          uStack_378 = uStack_2d8;
          uStack_370 = uStack_2d0;
          uStack_368 = uStack_2c8;
          uStack_360 = uStack_2c0;
          uStack_358 = uStack_2b8;
          FUN_103507d8c(&uStack_1d0,&uStack_c0,0x112f730a8,&UNK_10dbd1870);
          FUN_103507d8c(&uStack_220,&uStack_c0,0x112f730a8,&UNK_10dbd1870);
          func_0x000103507b00(&uStack_3a0,0x112f74f28,&UNK_10dbdb200);
        }
        else {
          uStack_388 = param_1[0x14];
          uStack_390 = param_1[0x13];
          uStack_378 = param_1[0x16];
          uStack_380 = param_1[0x15];
          uStack_368 = param_1[0x18];
          uStack_370 = param_1[0x17];
          uStack_358 = param_1[0x1a];
          uStack_360 = param_1[0x19];
          uStack_398 = param_1[0x12];
          uStack_3a0 = param_1[0x11];
          FUN_103507d8c(&uStack_1d0,&uStack_c0,0x112f730a8,&UNK_10dbd1870);
          FUN_103507d8c(&uStack_220,&uStack_c0,0x112f730a8,&UNK_10dbd1870);
          func_0x000103507b00(&uStack_3a0,0x112f730a8,&UNK_10dbd1870);
LAB_1035085ec:
          uVar4 = param_1[4];
          uVar3 = param_2[4];
          if (*(char *)(param_2 + 5) == '\x01') {
            if (uVar3 == 0) {
              if (uVar4 == 0) goto LAB_103508634;
            }
            else if (uVar3 == 1) {
              if (uVar4 == 1) {
LAB_103508634:
                uVar9 = param_1[0x1c];
                uVar5 = param_1[0x1b];
                uVar15 = param_1[0x1e];
                uVar13 = param_1[0x1d];
                uVar10 = param_1[0x20];
                uVar6 = param_1[0x1f];
                uVar4 = param_1[0x21];
                uVar11 = param_2[0x1c];
                uVar8 = param_2[0x1b];
                uVar16 = param_2[0x1e];
                uVar14 = param_2[0x1d];
                uVar12 = param_2[0x20];
                uVar7 = param_2[0x1f];
                uVar3 = param_2[0x21];
                uStack_480 = uVar5;
                uStack_478 = uVar9;
                uStack_470 = uVar13;
                uStack_468 = uVar15;
                uStack_460 = uVar6;
                uStack_458 = uVar10;
                uStack_450 = uVar4;
                uStack_260 = uVar8;
                uStack_258 = uVar11;
                uStack_250 = uVar14;
                uStack_248 = uVar16;
                uStack_240 = uVar7;
                uStack_238 = uVar12;
                uStack_230 = uVar3;
                if (uVar9 == 0) {
                  if (uVar11 == 0) {
                    FUN_103507d8c(&uStack_480,&uStack_300,0x112f74f30,&UNK_10dbd1880);
                    FUN_103507d8c(&uStack_260,&uStack_300,0x112f74f30,&UNK_10dbd1880);
                    func_0x000103501774(uVar5,0,uVar13,uVar15,uVar6,uVar10,uVar4);
LAB_10350884c:
                    uVar4 = param_1[6];
                    func_0x000100e25fcc(uVar4,param_1[7],param_2[6],param_2[7]);
                    uVar1 = (uint)uVar4;
                    goto LAB_103508360;
                  }
                }
                else if (uVar11 != 0) {
                  uStack_430 = uVar5;
                  uStack_428 = uVar9;
                  uStack_420 = uVar13;
                  uStack_418 = uVar15;
                  uStack_410 = uVar6;
                  uStack_408 = uVar10;
                  uStack_400 = uVar4;
                  uStack_300 = uVar8;
                  uStack_2f8 = uVar11;
                  uStack_2f0 = uVar14;
                  uStack_2e8 = uVar16;
                  uStack_2e0 = uVar7;
                  uStack_2d8 = uVar12;
                  uStack_2d0 = uVar3;
                  FUN_103507d8c(&uStack_480,auStack_3d8,0x112f74f30,&UNK_10dbd1880);
                  FUN_103507d8c(&uStack_260,auStack_3d8,0x112f74f30,&UNK_10dbd1880);
                  puVar2 = &uStack_430;
                  FUN_103507b40(puVar2,&uStack_300);
                  func_0x000103501774(uVar8,uVar11,uVar14,uVar16,uVar7,uVar12,uVar3);
                  func_0x000103501774(uVar5,uVar9,uVar13,uVar15,uVar6,uVar10,uVar4);
                  if (((ulong)puVar2 & 1) != 0) goto LAB_10350884c;
                  goto LAB_10350835c;
                }
                FUN_103507d8c(&uStack_480,&uStack_300,0x112f74f30,&UNK_10dbd1880);
                FUN_103507d8c(&uStack_260,&uStack_300,0x112f74f30,&UNK_10dbd1880);
                func_0x000103501774(uVar5,uVar9,uVar13,uVar15,uVar6,uVar10,uVar4);
                func_0x000103501774(uVar8,uVar11,uVar14,uVar16,uVar7,uVar12,uVar3);
              }
            }
            else if (uVar4 == 2) goto LAB_103508634;
          }
          else if (uVar4 == uVar3) goto LAB_103508634;
        }
      }
    }
    else {
      if ((uVar8 & 0xff) == 2) goto LAB_10350838c;
      if ((((uint)uVar8 ^ (uint)uVar4) & 1) == 0) {
        FUN_103507d8c(&uStack_160,&uStack_300,0x112db94f0,&UNK_10d96af00);
        FUN_103507d8c(&uStack_180,&uStack_300,0x112db94f0,&UNK_10d96af00);
        uVar9 = uVar3;
        func_0x000100e25fcc(uVar3,uVar5,uVar7,uVar6);
        func_0x000101556278(uVar8,uVar7,uVar6);
        if ((uVar9 & 1) != 0) goto LAB_1035081d4;
      }
      else {
        FUN_103507d8c(&uStack_160,&uStack_300,0x112db94f0,&UNK_10d96af00);
        FUN_103507d8c(&uStack_180,&uStack_300,0x112db94f0,&UNK_10d96af00);
        func_0x000101556278(uVar8,uVar7,uVar6);
      }
LAB_1035084a8:
      func_0x000101556278(uVar4,uVar3,uVar5);
    }
  }
LAB_10350835c:
  uVar1 = 0;
LAB_103508360:
  return uVar1 & 1;
}



/* Entry: 103506f18; end: 103506f47;  */

undefined1  [16] FUN_103506f18(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Entry: 103506f48; end: 103506f7b;  */

void FUN_103506f48(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 103506f7c; end: 103506f8f;  */

undefined1  [16] FUN_103506f7c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x103506f8c;
  return auVar1;
}



/* Entry: 103506f90; end: 103506fa3;  */

void FUN_103506f90(void)

{
  FUN_10350681c();
  return;
}



/* Entry: 103506fa4; end: 10350700b;  */

void FUN_103506fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_150 [272];
  
  func_0x000107c610b4(auStack_150);
  FUN_1035069fc(param_1,param_2,param_3);
  return;
}



/* Entry: 10350700c; end: 10350700f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10350700c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103507010; end: 103507047;  */

uint FUN_103507010(long param_1,long param_2)

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
  func_0x000103509f70();
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



/* Entry: 103507048; end: 103507097;  */

uint FUN_103507048(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_240 [272];
  undefined1 auStack_130 [272];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_130,param_1,0x110);
  func_0x000107c610b4(auStack_240);
  FUN_103507e54(auStack_240,auStack_130);
  return uVar1 & 1;
}



/* Entry: 103507098; end: 103507137;  */

/* WARNING: Possible PIC construction at 0x0001035070e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035070f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035070e8) */
/* WARNING: Removing unreachable block (ram,0x0001035070f8) */

void FUN_103507098(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f75058 != -1) {
    func_0x000107c61568(0x112f75058,FUN_1035067d4);
  }
  uVar5 = uRam00000001138075b8;
  uVar4 = uRam00000001138075b0;
  uVar3 = uRam00000001138075a8;
  uVar2 = uRam00000001138075a0;
  uVar1 = uRam0000000113807598;
  *param_1 = uRam0000000113807590;
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



/* Entry: 103507138; end: 103507173;  */

void FUN_103507138(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f75120;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f75120,&UNK_10dbd1d48);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103507174; end: 10350727f;  */

void FUN_103507174(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_188 [72];
  undefined1 auStack_140 [272];
  
  func_0x000107c610b4(auStack_140);
  func_0x000107c6068c(auStack_188,0);
  func_0x000107c5fa50(auStack_188,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103507280; end: 1035072d3;  */

uint FUN_103507280(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_240 [272];
  undefined1 auStack_130 [272];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_240,param_1,0x110);
  func_0x000107c610b4(auStack_130,param_2,0x110);
  FUN_103507e54(auStack_240,auStack_130);
  return uVar1 & 1;
}



/* Entry: 1035072d4; end: 10350731b;  */

void FUN_1035072d4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd1db0,0xa3,2);
  uRam00000001138075c8 = uStack_38;
  uRam00000001138075c0 = uStack_40;
  uRam00000001138075d8 = uStack_28;
  uRam00000001138075d0 = uStack_30;
  uRam00000001138075e8 = uStack_18;
  uRam00000001138075e0 = uStack_20;
  return;
}



/* Entry: 10350731c; end: 1035073bb;  */

/* WARNING: Possible PIC construction at 0x000103507368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103507378: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010350736c) */
/* WARNING: Removing unreachable block (ram,0x00010350737c) */

void FUN_10350731c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f75078 != -1) {
    func_0x000107c61568(0x112f75078,FUN_1035072d4);
  }
  uVar5 = uRam00000001138075e8;
  uVar4 = uRam00000001138075e0;
  uVar3 = uRam00000001138075d8;
  uVar2 = uRam00000001138075d0;
  uVar1 = uRam00000001138075c8;
  *param_1 = uRam00000001138075c0;
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



/* Entry: 1035073bc; end: 103507403;  */

void FUN_1035073bc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd1d80,0x2f,2);
  uRam00000001138075f8 = uStack_38;
  uRam00000001138075f0 = uStack_40;
  uRam0000000113807608 = uStack_28;
  uRam0000000113807600 = uStack_30;
  uRam0000000113807618 = uStack_18;
  uRam0000000113807610 = uStack_20;
  return;
}



/* Entry: 103507404; end: 1035074a3;  */

/* WARNING: Possible PIC construction at 0x000103507450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103507460: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103507454) */
/* WARNING: Removing unreachable block (ram,0x000103507464) */

void FUN_103507404(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f75080 != -1) {
    func_0x000107c61568(0x112f75080,FUN_1035073bc);
  }
  uVar5 = uRam0000000113807618;
  uVar4 = uRam0000000113807610;
  uVar3 = uRam0000000113807608;
  uVar2 = uRam0000000113807600;
  uVar1 = uRam00000001138075f8;
  *param_1 = uRam00000001138075f0;
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



/* Entry: 1035074a4; end: 1035074eb;  */

void FUN_1035074a4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd1d50,0x26,2);
  uRam0000000113807628 = uStack_38;
  uRam0000000113807620 = uStack_40;
  uRam0000000113807638 = uStack_28;
  uRam0000000113807630 = uStack_30;
  uRam0000000113807648 = uStack_18;
  uRam0000000113807640 = uStack_20;
  return;
}



/* Entry: 1035074ec; end: 1035075bf;  */

/* WARNING: Removing unreachable block (ram,0x0001035075bc) */

void FUN_1035074ec(undefined8 param_1,long param_2,long param_3)

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
        (**(code **)(param_3 + 0x150))();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015d5420();
        (*pcVar4)(unaff_x20 + 0x20,&UNK_110790b00,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1035075c0; end: 10350764b;  */

void FUN_1035075c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (((uVar1 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_10350764c(), unaff_x21 == 0)) {
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 10350764c; end: 1035076d3;  */

void FUN_10350764c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,2,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035076d4; end: 10350771b;  */

void FUN_1035076d4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xf000000000000000;
  return;
}



/* Entry: 10350771c; end: 10350774b;  */

undefined1  [16] FUN_10350771c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 10350774c; end: 10350777f;  */

void FUN_10350774c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 103507780; end: 103507793;  */

undefined1  [16] FUN_103507780(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x103507790;
  return auVar1;
}



/* Entry: 103507794; end: 1035077a7;  */

void FUN_103507794(void)

{
  FUN_1035074ec();
  return;
}



/* Entry: 1035077a8; end: 1035077e7;  */

void FUN_1035077a8(void)

{
  FUN_1035075c0();
  return;
}



/* Entry: 1035077e8; end: 1035077eb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035077e8(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035077ec; end: 103507823;  */

uint FUN_1035077ec(long param_1,long param_2)

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
  FUN_103509f30();
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



/* Entry: 103507824; end: 10350787b;  */

uint FUN_103507824(undefined8 *param_1)

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
  FUN_103507b40(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10350787c; end: 10350791b;  */

/* WARNING: Possible PIC construction at 0x0001035078c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035078d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035078cc) */
/* WARNING: Removing unreachable block (ram,0x0001035078dc) */

void FUN_10350787c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f75088 != -1) {
    func_0x000107c61568(0x112f75088,FUN_1035074a4);
  }
  uVar5 = uRam0000000113807648;
  uVar4 = uRam0000000113807640;
  uVar3 = uRam0000000113807638;
  uVar2 = uRam0000000113807630;
  uVar1 = uRam0000000113807628;
  *param_1 = uRam0000000113807620;
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



/* Entry: 10350791c; end: 103507957;  */

void FUN_10350791c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f75110;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f75110,&UNK_10dbd1d40);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103507958; end: 103507a73;  */

void FUN_103507958(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103507a74; end: 103507acb;  */

uint FUN_103507a74(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103507b40(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103507acc; end: 103507b3f;  */

undefined8 FUN_103507acc(undefined8 param_1)

{
  FUN_1035c5cb8();
  return param_1;
}



/* Entry: 103507b40; end: 103507d7f;  */

uint FUN_103507b40(ulong *param_1,ulong *param_2)

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
  
  uVar2 = *param_1;
  if (uVar2 != *param_2 || param_1[1] != param_2[1]) {
    func_0x000107c605b8();
    uVar1 = 0;
    if ((uVar2 & 1) == 0) goto LAB_103507d5c;
  }
  uVar7 = param_1[5];
  uVar2 = param_1[4];
  uVar4 = param_1[6];
  uVar8 = param_2[5];
  uVar6 = param_2[4];
  uVar5 = param_2[6];
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  uStack_90 = uVar5;
  uStack_80 = uVar2;
  uStack_78 = uVar7;
  uStack_70 = uVar4;
  if (uVar4 >> 0x3c < 0xf) {
    if (0xe < uVar5 >> 0x3c) goto LAB_103507c38;
    if ((int)uVar2 == (int)uVar6) {
      FUN_103507d8c(&uStack_80,auStack_b8,0x112db80f8,&UNK_10d9671e0);
      FUN_103507d8c(&uStack_a0,auStack_b8,0x112db80f8,&UNK_10d9671e0);
      uVar3 = uVar7;
      func_0x000100e25fcc(uVar7,uVar4,uVar8,uVar5);
      func_0x000100d54e0c(uVar6,uVar8,uVar5);
      if ((uVar3 & 1) != 0) goto LAB_103507c0c;
    }
    else {
      FUN_103507d8c(&uStack_80,auStack_b8,0x112db80f8,&UNK_10d9671e0);
      FUN_103507d8c(&uStack_a0,auStack_b8,0x112db80f8,&UNK_10d9671e0);
      func_0x000100d54e0c(uVar6,uVar8,uVar5);
    }
  }
  else {
    if (0xe < uVar5 >> 0x3c) {
      FUN_103507d8c(&uStack_80,auStack_b8,0x112db80f8,&UNK_10d9671e0);
      FUN_103507d8c(&uStack_a0,auStack_b8,0x112db80f8,&UNK_10d9671e0);
LAB_103507c0c:
      func_0x000100d54e0c(uVar2,uVar7,uVar4);
      uVar2 = param_1[2];
      func_0x000100e25fcc(uVar2,param_1[3],param_2[2],param_2[3]);
      uVar1 = (uint)uVar2;
      goto LAB_103507d5c;
    }
LAB_103507c38:
    FUN_103507d8c(&uStack_80,auStack_b8,0x112db80f8,&UNK_10d9671e0);
    FUN_103507d8c(&uStack_a0,auStack_b8,0x112db80f8,&UNK_10d9671e0);
    func_0x000100d54e0c(uVar2,uVar7,uVar4);
    uVar2 = uVar6;
    uVar7 = uVar8;
    uVar4 = uVar5;
  }
  func_0x000100d54e0c(uVar2,uVar7,uVar4);
  uVar1 = 0;
LAB_103507d5c:
  return uVar1 & 1;
}



/* Entry: 103507d80; end: 103507d8b;  */

void FUN_103507d80(void)

{
  return;
}



/* Entry: 103507d8c; end: 103507dd3;  */

undefined8 FUN_103507d8c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}


