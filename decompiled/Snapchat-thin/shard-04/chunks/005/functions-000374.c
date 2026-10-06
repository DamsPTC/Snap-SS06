/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10363ab04; end: 10363ab07;  */

void FUN_10363ab04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81050 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf0480;
  func_0x000107c61520(&UNK_10dbf0480,&UNK_110673aa8);
  puRam0000000112f81050 = puVar1;
  return;
}



/* Entry: 10363ab08; end: 10363ab47;  */

void FUN_10363ab08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81050 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf0480;
  func_0x000107c61520(&UNK_10dbf0480,&UNK_110673aa8);
  puRam0000000112f81050 = puVar1;
  return;
}



/* Entry: 10363ab48; end: 10363abe7;  */

long FUN_10363ab48(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10363abe8; end: 10363b02f;  */

undefined8 * FUN_10363abe8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  ulong uVar3;
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
  }
  else {
    *(char *)(param_1 + 2) = cVar2;
    uVar4 = param_2[3];
    uVar1 = param_2[4];
    func_0x00010006c00c(uVar4,uVar1);
    param_1[3] = uVar4;
    param_1[4] = uVar1;
  }
  uVar3 = param_2[7];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = param_2[6];
    param_1[5] = param_2[5];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[6] = uVar4;
    param_1[7] = uVar3;
  }
  else {
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    param_1[7] = param_2[7];
  }
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
  return param_1;
}



/* Entry: 10363b030; end: 10363b0f7;  */

int FUN_10363b030(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && ((char)param_1[0x16] != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = 0xfffffffe;
  if (1 < *(byte *)(param_1 + 4)) {
    uVar1 = (*(byte *)(param_1 + 4) + 0x7ffffffe & 0x7fffffff) - 1;
  }
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10363b0f8; end: 10363b137;  */

void FUN_10363b0f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81060 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf03ec;
  func_0x000107c61520(&DAT_10dbf03ec,&UNK_110673aa8);
  puRam0000000112f81060 = puVar1;
  return;
}



/* Entry: 10363b138; end: 10363b19b;  */

void FUN_10363b138(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[1] = 0;
  param_1[2] = 0xe000000000000000;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf000000000000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0xf000000000000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xf000000000000000;
  return;
}



/* Entry: 10363b19c; end: 10363b1e3;  */

void FUN_10363b19c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf0820,0x1b,2);
  uRam000000011380ad38 = uStack_38;
  uRam000000011380ad30 = uStack_40;
  uRam000000011380ad48 = uStack_28;
  uRam000000011380ad40 = uStack_30;
  uRam000000011380ad58 = uStack_18;
  uRam000000011380ad50 = uStack_20;
  return;
}



/* Entry: 10363b1e4; end: 10363b2c7;  */

void FUN_10363b1e4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
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
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x00010363c0c4();
LAB_10363b26c:
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015c5cfc();
        goto LAB_10363b26c;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10363b2c8; end: 10363b373;  */

void FUN_10363b2c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  lVar2 = *unaff_x20;
  if (*(long *)(lVar2 + 0x10) != 0) {
    pcVar3 = *(code **)(param_3 + 0x118);
    uVar1 = param_1;
    func_0x00010363c0c4();
    (*pcVar3)(lVar2,1,&UNK_110673d70,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_10363b374();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 10363b374; end: 10363b3fb;  */

void FUN_10363b374(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x28);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x20);
    uStack_60 = *(undefined8 *)(param_1 + 0x18);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,2,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10363b3fc; end: 10363b44b;  */

uint FUN_10363b3fc(long *param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_1e8 [24];
  long lStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  long lStack_160;
  ulong uStack_158;
  ulong uStack_150;
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
  
  lVar5 = *param_1;
  lVar4 = *param_2;
  lVar7 = *(long *)(lVar5 + 0x10);
  if (lVar7 == *(long *)(lVar4 + 0x10)) {
    if (lVar7 != 0 && lVar5 != lVar4) {
      puVar8 = (undefined8 *)(lVar5 + 0x20);
      puVar10 = (undefined8 *)(lVar4 + 0x20);
      do {
        uStack_138 = puVar8[1];
        uStack_140 = *puVar8;
        uStack_128 = puVar8[3];
        uStack_130 = puVar8[2];
        uStack_118 = puVar8[5];
        uStack_120 = puVar8[4];
        uStack_108 = puVar8[7];
        uStack_110 = puVar8[6];
        uStack_f8 = puVar8[9];
        uStack_100 = puVar8[8];
        uStack_e8 = puVar8[0xb];
        uStack_f0 = puVar8[10];
        uStack_d8 = puVar8[0xd];
        uStack_e0 = puVar8[0xc];
        uStack_78 = puVar10[0xb];
        uStack_80 = puVar10[10];
        uStack_68 = puVar10[0xd];
        uStack_70 = puVar10[0xc];
        uStack_98 = puVar10[7];
        uStack_a0 = puVar10[6];
        uStack_88 = puVar10[9];
        uStack_90 = puVar10[8];
        uStack_c8 = puVar10[1];
        uStack_d0 = *puVar10;
        uStack_b8 = puVar10[3];
        uStack_c0 = puVar10[2];
        uStack_a8 = puVar10[5];
        uStack_b0 = puVar10[4];
        func_0x0001034bbbb4(&uStack_140,&lStack_1d0);
        func_0x0001034bbbb4(&uStack_d0,&lStack_1d0);
        puVar2 = &uStack_140;
        FUN_10363c104(puVar2,&uStack_d0);
        func_0x0001034bbbf0(&uStack_d0);
        func_0x0001034bbbf0(&uStack_140);
        if (((ulong)puVar2 & 1) == 0) goto LAB_10363c734;
        puVar10 = puVar10 + 0xe;
        puVar8 = puVar8 + 0xe;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    uVar11 = param_1[4];
    lVar7 = param_1[3];
    uVar6 = param_1[5];
    uVar12 = param_2[4];
    lVar4 = param_2[3];
    uVar9 = param_2[5];
    lStack_1d0 = lVar7;
    uStack_1c8 = uVar11;
    uStack_1c0 = uVar6;
    lStack_160 = lVar4;
    uStack_158 = uVar12;
    uStack_150 = uVar9;
    if (uVar6 >> 0x3c < 0xf) {
      if (0xe < uVar9 >> 0x3c) goto LAB_10363c67c;
      if (lVar7 == lVar4) {
        FUN_10362da98(&lStack_1d0,auStack_1e8);
        FUN_10362da98(&lStack_160,auStack_1e8);
        uVar3 = uVar11;
        func_0x000100e25fcc(uVar11,uVar6,uVar12,uVar9);
        func_0x00010159fa64(lVar7,uVar12,uVar9);
        if ((uVar3 & 1) != 0) goto LAB_10363c650;
      }
      else {
        FUN_10362da98(&lStack_1d0,auStack_1e8);
        FUN_10362da98(&lStack_160,auStack_1e8);
        func_0x00010159fa64(lVar4,uVar12,uVar9);
      }
    }
    else {
      if (0xe < uVar9 >> 0x3c) {
        FUN_10362da98(&lStack_1d0,auStack_1e8);
        FUN_10362da98(&lStack_160,auStack_1e8);
LAB_10363c650:
        func_0x00010159fa64(lVar7,uVar11,uVar6);
        lVar7 = param_1[1];
        func_0x000100e25fcc(lVar7,param_1[2],param_2[1],param_2[2]);
        uVar1 = (uint)lVar7;
        goto LAB_10363c738;
      }
LAB_10363c67c:
      FUN_10362da98(&lStack_1d0,auStack_1e8);
      FUN_10362da98(&lStack_160,auStack_1e8);
      func_0x00010159fa64(lVar7,uVar11,uVar6);
      lVar7 = lVar4;
      uVar11 = uVar12;
      uVar6 = uVar9;
    }
    func_0x00010159fa64(lVar7,uVar11,uVar6);
  }
LAB_10363c734:
  uVar1 = 0;
LAB_10363c738:
  return uVar1 & 1;
}



/* Entry: 10363b44c; end: 10363b47b;  */

undefined1  [16] FUN_10363b44c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 10363b47c; end: 10363b4af;  */

void FUN_10363b47c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 10363b4b0; end: 10363b4c3;  */

undefined1  [16] FUN_10363b4b0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x10363b4c0;
  return auVar1;
}



/* Entry: 10363b4c4; end: 10363b4d7;  */

void FUN_10363b4c4(void)

{
  FUN_10363b1e4();
  return;
}



/* Entry: 10363b4d8; end: 10363b50f;  */

void FUN_10363b4d8(void)

{
  FUN_10363b2c8();
  return;
}



/* Entry: 10363b510; end: 10363b513;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10363b510(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10363b514; end: 10363b54b;  */

uint FUN_10363b514(long param_1,long param_2)

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
  func_0x00010363d2b4();
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



/* Entry: 10363b54c; end: 10363b593;  */

uint FUN_10363b54c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_18 = param_1[5];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  func_0x00010363c514(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10363b594; end: 10363b633;  */

/* WARNING: Possible PIC construction at 0x00010363b5e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010363b5f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010363b5e4) */
/* WARNING: Removing unreachable block (ram,0x00010363b5f4) */

void FUN_10363b594(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f81068 != -1) {
    func_0x000107c61568(0x112f81068,FUN_10363b19c);
  }
  uVar5 = uRam000000011380ad58;
  uVar4 = uRam000000011380ad50;
  uVar3 = uRam000000011380ad48;
  uVar2 = uRam000000011380ad40;
  uVar1 = uRam000000011380ad38;
  *param_1 = uRam000000011380ad30;
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



/* Entry: 10363b634; end: 10363b66f;  */

void FUN_10363b634(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f810c8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f810c8,&UNK_10dbf07a0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10363b670; end: 10363b793;  */

void FUN_10363b670(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = *unaff_x20;
  uStack_38 = unaff_x20[5];
  uStack_50 = unaff_x20[2];
  uStack_58 = unaff_x20[1];
  uStack_40 = unaff_x20[4];
  uStack_48 = unaff_x20[3];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10363b794; end: 10363b7d7;  */

uint FUN_10363b794(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  func_0x00010363c514(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10363b7d8; end: 10363b84b;  */

void FUN_10363b7d8(void)

{
  func_0x000107c5fb78(0x6f6974736575512e,0xef726577736e416e);
  uRam000000011380ad60 = 0xd000000000000028;
  uRam000000011380ad68 = 0x800000010f156a40;
  return;
}



/* Entry: 10363b84c; end: 10363b893;  */

void FUN_10363b84c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf07b0,0x6a,2);
  uRam000000011380ad78 = uStack_38;
  uRam000000011380ad70 = uStack_40;
  uRam000000011380ad88 = uStack_28;
  uRam000000011380ad80 = uStack_30;
  uRam000000011380ad98 = uStack_18;
  uRam000000011380ad90 = uStack_20;
  return;
}



/* Entry: 10363b894; end: 10363b9c3;  */

/* WARNING: Removing unreachable block (ram,0x00010363b9c0) */

void FUN_10363b894(undefined8 param_1,long param_2,long param_3)

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
          pcVar4 = *(code **)(param_3 + 0x58);
          goto LAB_10363b9b0;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
          lVar2 = unaff_x20 + 0x28;
          goto LAB_10363b908;
        }
      }
      else if (lVar1 == 3) {
        pcVar4 = *(code **)(param_3 + 0x150);
LAB_10363b9b0:
        (*pcVar4)();
      }
      else {
        if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
          lVar2 = unaff_x20 + 0x40;
        }
        else {
          if (lVar1 != 5) goto LAB_10363b920;
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
          lVar2 = unaff_x20 + 0x58;
        }
LAB_10363b908:
        (*pcVar4)(lVar2,&UNK_110790a00,lVar1,param_2,param_3);
      }
LAB_10363b920:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10363b9c4; end: 10363baa7;  */

void FUN_10363b9c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *unaff_x20;
  long unaff_x21;
  
  if (((*(long *)(*unaff_x20 + 0x10) == 0) ||
      ((**(code **)(param_3 + 0x138))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_10363baa8(), unaff_x21 == 0)) {
    uVar2 = unaff_x20[2];
    uVar1 = unaff_x20[1] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[1],uVar2,3,param_2,param_3);
    }
    FUN_10363bb30();
    FUN_10363bbb8();
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}



/* Entry: 10363baa8; end: 10363bb2f;  */

void FUN_10363baa8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 10363bb30; end: 10363bbb7;  */

void FUN_10363bb30(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    (*pcVar1)(&uStack_60,4,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10363bbb8; end: 10363bc3f;  */

void FUN_10363bbb8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,5,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10363bc40; end: 10363bc7b;  */

void FUN_10363bc40(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[1] = 0;
  param_1[2] = 0xe000000000000000;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf000000000000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0xf000000000000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xf000000000000000;
  return;
}



/* Entry: 10363bc7c; end: 10363bcd7;  */

undefined1  [16] FUN_10363bc7c(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112f81080 != -1) {
    func_0x000107c61568(0x112f81080,FUN_10363b7d8);
  }
  auVar1._8_8_ = uRam000000011380ad68;
  auVar1._0_8_ = uRam000000011380ad60;
  func_0x000107c61434(uRam000000011380ad68);
  return auVar1;
}



/* Entry: 10363bcd8; end: 10363bcdf;  */

undefined8 FUN_10363bcd8(void)

{
  return 1;
}



/* Entry: 10363bce0; end: 10363bd0f;  */

undefined1  [16] FUN_10363bce0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 10363bd10; end: 10363bd43;  */

void FUN_10363bd10(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 10363bd44; end: 10363bd57;  */

undefined1  [16] FUN_10363bd44(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x10363bd54;
  return auVar1;
}



/* Entry: 10363bd58; end: 10363bd6b;  */

void FUN_10363bd58(void)

{
  FUN_10363b894();
  return;
}



/* Entry: 10363bd6c; end: 10363bdb3;  */

void FUN_10363bd6c(void)

{
  FUN_10363b9c4();
  return;
}



/* Entry: 10363bdb4; end: 10363bdb7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10363bdb4(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10363bdb8; end: 10363bdef;  */

uint FUN_10363bdb8(long param_1,long param_2)

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
  FUN_10363d274();
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



/* Entry: 10363bdf0; end: 10363be57;  */

uint FUN_10363bdf0(undefined8 *param_1)

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
  FUN_10363c104(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 10363be58; end: 10363bef7;  */

/* WARNING: Possible PIC construction at 0x00010363bea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010363beb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010363bea8) */
/* WARNING: Removing unreachable block (ram,0x00010363beb8) */

void FUN_10363be58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f81088 != -1) {
    func_0x000107c61568(0x112f81088,FUN_10363b84c);
  }
  uVar5 = uRam000000011380ad98;
  uVar4 = uRam000000011380ad90;
  uVar3 = uRam000000011380ad88;
  uVar2 = uRam000000011380ad80;
  uVar1 = uRam000000011380ad78;
  *param_1 = uRam000000011380ad70;
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



/* Entry: 10363bef8; end: 10363bf33;  */

void FUN_10363bef8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f810b8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f810b8,&UNK_10dbf0798);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10363bf34; end: 10363c05f;  */

void FUN_10363bf34(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10363c060; end: 10363c103;  */

uint FUN_10363c060(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10363c104(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 10363c104; end: 10363c75b;  */

uint FUN_10363c104(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long alStack_138 [3];
  long lStack_120;
  ulong uStack_118;
  ulong uStack_110;
  long lStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  long lStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  long lStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  lVar6 = *param_1;
  lVar8 = *param_2;
  lVar5 = *(long *)(lVar6 + 0x10);
  if (lVar5 == *(long *)(lVar8 + 0x10)) {
    if (lVar5 != 0 && lVar6 != lVar8) {
      piVar7 = (int *)(lVar6 + 0x20);
      piVar9 = (int *)(lVar8 + 0x20);
      do {
        if (*piVar7 != *piVar9) goto LAB_10363c3d4;
        lVar5 = lVar5 + -1;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      } while (lVar5 != 0);
    }
    uVar13 = param_1[6];
    lVar5 = param_1[5];
    uVar10 = param_1[7];
    uVar14 = param_2[6];
    lVar6 = param_2[5];
    uVar12 = param_2[7];
    lStack_a0 = lVar6;
    uStack_98 = uVar14;
    uStack_90 = uVar12;
    lStack_80 = lVar5;
    uStack_78 = uVar13;
    uStack_70 = uVar10;
    if (uVar10 >> 0x3c < 0xf) {
      if (0xe < uVar12 >> 0x3c) goto LAB_10363c30c;
      if (lVar5 == lVar6) {
        FUN_10362da98(&lStack_80,&lStack_c0);
        FUN_10362da98(&lStack_a0,&lStack_c0);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar10,uVar14,uVar12);
        func_0x00010159fa64(lVar5,uVar14,uVar12);
        if ((uVar2 & 1) != 0) goto LAB_10363c1cc;
      }
      else {
        FUN_10362da98(&lStack_80,&lStack_c0);
        plVar3 = &lStack_a0;
        plVar4 = &lStack_c0;
LAB_10363c3b0:
        FUN_10362da98(plVar3,plVar4);
        func_0x00010159fa64(lVar6,uVar14,uVar12);
      }
    }
    else {
      if (0xe < uVar12 >> 0x3c) {
        FUN_10362da98(&lStack_80,&lStack_c0);
        FUN_10362da98(&lStack_a0,&lStack_c0);
LAB_10363c1cc:
        func_0x00010159fa64(lVar5,uVar13,uVar10);
        uVar10 = param_1[1];
        if (((uVar10 != param_2[1]) || (param_1[2] != param_2[2])) &&
           (func_0x000107c605b8(), (uVar10 & 1) == 0)) goto LAB_10363c3d4;
        uVar13 = param_1[9];
        lVar5 = param_1[8];
        uVar10 = param_1[10];
        uVar14 = param_2[9];
        lVar6 = param_2[8];
        uVar12 = param_2[10];
        lStack_e0 = lVar6;
        uStack_d8 = uVar14;
        uStack_d0 = uVar12;
        lStack_c0 = lVar5;
        uStack_b8 = uVar13;
        uStack_b0 = uVar10;
        if (uVar10 >> 0x3c < 0xf) {
          if (0xe < uVar12 >> 0x3c) goto LAB_10363c408;
          if (lVar5 != lVar6) {
            FUN_10362da98(&lStack_c0,&lStack_100);
            plVar3 = &lStack_e0;
            plVar4 = &lStack_100;
            goto LAB_10363c3b0;
          }
          FUN_10362da98(&lStack_c0,&lStack_100);
          FUN_10362da98(&lStack_e0,&lStack_100);
          uVar2 = uVar13;
          func_0x000100e25fcc(uVar13,uVar10,uVar14,uVar12);
          func_0x00010159fa64(lVar5,uVar14,uVar12);
          if ((uVar2 & 1) == 0) goto LAB_10363c3d0;
        }
        else {
          if (uVar12 >> 0x3c < 0xf) {
LAB_10363c408:
            FUN_10362da98(&lStack_c0,&lStack_100);
            plVar3 = &lStack_e0;
            plVar4 = &lStack_100;
            uVar2 = uVar10;
            uVar11 = uVar13;
            lVar8 = lVar5;
            uVar10 = uVar12;
            uVar13 = uVar14;
            lVar5 = lVar6;
            goto LAB_10363c320;
          }
          FUN_10362da98(&lStack_c0,&lStack_100);
          FUN_10362da98(&lStack_e0,&lStack_100);
        }
        func_0x00010159fa64(lVar5,uVar13,uVar10);
        uVar13 = param_1[0xc];
        lVar5 = param_1[0xb];
        uVar10 = param_1[0xd];
        uVar14 = param_2[0xc];
        lVar6 = param_2[0xb];
        uVar12 = param_2[0xd];
        lStack_120 = lVar6;
        uStack_118 = uVar14;
        uStack_110 = uVar12;
        lStack_100 = lVar5;
        uStack_f8 = uVar13;
        uStack_f0 = uVar10;
        if (uVar10 >> 0x3c < 0xf) {
          if (0xe < uVar12 >> 0x3c) goto LAB_10363c484;
          if (lVar5 != lVar6) {
            FUN_10362da98(&lStack_100,alStack_138);
            plVar3 = &lStack_120;
            plVar4 = alStack_138;
            goto LAB_10363c3b0;
          }
          FUN_10362da98(&lStack_100,alStack_138);
          FUN_10362da98(&lStack_120,alStack_138);
          uVar2 = uVar13;
          func_0x000100e25fcc(uVar13,uVar10,uVar14,uVar12);
          func_0x00010159fa64(lVar5,uVar14,uVar12);
          if ((uVar2 & 1) == 0) goto LAB_10363c3d0;
        }
        else {
          if (uVar12 >> 0x3c < 0xf) {
LAB_10363c484:
            FUN_10362da98(&lStack_100,alStack_138);
            plVar3 = &lStack_120;
            plVar4 = alStack_138;
            uVar2 = uVar10;
            uVar11 = uVar13;
            lVar8 = lVar5;
            uVar10 = uVar12;
            uVar13 = uVar14;
            lVar5 = lVar6;
            goto LAB_10363c320;
          }
          FUN_10362da98(&lStack_100,alStack_138);
          FUN_10362da98(&lStack_120,alStack_138);
        }
        func_0x00010159fa64(lVar5,uVar13,uVar10);
        lVar5 = param_1[3];
        func_0x000100e25fcc(lVar5,param_1[4],param_2[3],param_2[4]);
        uVar1 = (uint)lVar5;
        goto LAB_10363c3d8;
      }
LAB_10363c30c:
      FUN_10362da98(&lStack_80,&lStack_c0);
      plVar3 = &lStack_a0;
      plVar4 = &lStack_c0;
      uVar2 = uVar10;
      uVar11 = uVar13;
      lVar8 = lVar5;
      uVar10 = uVar12;
      uVar13 = uVar14;
      lVar5 = lVar6;
LAB_10363c320:
      FUN_10362da98(plVar3,plVar4);
      func_0x00010159fa64(lVar8,uVar11,uVar2);
    }
LAB_10363c3d0:
    func_0x00010159fa64(lVar5,uVar13,uVar10);
  }
LAB_10363c3d4:
  uVar1 = 0;
LAB_10363c3d8:
  return uVar1 & 1;
}



/* Entry: 10363c75c; end: 10363c7db;  */

void FUN_10363c75c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81078 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf05f8;
  func_0x000107c61520(&UNK_10dbf05f8,&UNK_110673ce8);
  puRam0000000112f81078 = puVar1;
  return;
}



/* Entry: 10363c7dc; end: 10363c7ff;  */

void FUN_10363c7dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10363c800();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10363c800; end: 10363c83f;  */

void FUN_10363c800(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf05d0;
  func_0x000107c61520(&UNK_10dbf05d0,&UNK_110673ce8);
  puRam0000000112f81098 = puVar1;
  return;
}



/* Entry: 10363c840; end: 10363c857;  */

void FUN_10363c840(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10363c75c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035a99e8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10363c858; end: 10363c897;  */

void FUN_10363c858(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f810a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf0638;
  func_0x000107c61520(&UNK_10dbf0638,&UNK_110673ce8);
  puRam0000000112f810a0 = puVar1;
  return;
}



/* Entry: 10363c898; end: 10363c8bb;  */

void FUN_10363c898(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10363c8bc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10363c8bc; end: 10363c8fb;  */

void FUN_10363c8bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f810a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf06a8;
  func_0x000107c61520(&UNK_10dbf06a8,&UNK_110673d70);
  puRam0000000112f810a8 = puVar1;
  return;
}



/* Entry: 10363c8fc; end: 10363c90f;  */

void FUN_10363c8fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10363c79c)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10363c0c4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10363c910; end: 10363c93f;  */

void FUN_10363c910(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10363c940; end: 10363c943;  */

void FUN_10363c940(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f810b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf0710;
  func_0x000107c61520(&UNK_10dbf0710,&UNK_110673d70);
  puRam0000000112f810b0 = puVar1;
  return;
}



/* Entry: 10363c944; end: 10363c983;  */

void FUN_10363c944(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f810b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf0710;
  func_0x000107c61520(&UNK_10dbf0710,&UNK_110673d70);
  puRam0000000112f810b0 = puVar1;
  return;
}



/* Entry: 10363c984; end: 10363c9cf;  */

/* WARNING: Possible PIC construction at 0x00010363c9a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010363c9a4) */
/* WARNING: Removing unreachable block (ram,0x00010363c9c0) */
/* WARNING: Removing unreachable block (ram,0x00010363c9b4) */

void FUN_10363c984(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[2];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(param_1[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 10363c9d0; end: 10363cb53;  */

undefined8 * FUN_10363c9d0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x000107c61434();
  func_0x00010006c00c(uVar3,uVar2);
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[5];
  if (uVar1 >> 0x3c < 0xf) {
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[4] = uVar3;
    param_1[5] = uVar1;
  }
  else {
    uVar3 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar3;
    param_1[5] = param_2[5];
  }
  return param_1;
}



/* Entry: 10363cb54; end: 10363cbe7;  */

undefined8 * FUN_10363cb54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  func_0x00010006c090(uVar1,uVar4);
  if ((ulong)param_1[5] >> 0x3c < 0xf) {
    uVar2 = param_2[5];
    if (uVar2 >> 0x3c < 0xf) {
      uVar1 = param_1[4];
      uVar4 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = uVar4;
      param_1[5] = uVar2;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    func_0x00010159d670(param_1 + 3);
  }
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 10363cbe8; end: 10363cc8b;  */

int FUN_10363cbe8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10363cc8c; end: 10363cd0f;  */

/* WARNING: Possible PIC construction at 0x00010363ccb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010363cce0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010363ccb4) */
/* WARNING: Removing unreachable block (ram,0x00010363ccc4) */
/* WARNING: Removing unreachable block (ram,0x00010363cccc) */
/* WARNING: Removing unreachable block (ram,0x00010363cce4) */
/* WARNING: Removing unreachable block (ram,0x00010363cd00) */
/* WARNING: Removing unreachable block (ram,0x00010363ccf4) */
/* WARNING: Removing unreachable block (ram,0x00010363ccdc) */

void FUN_10363cc8c(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  func_0x000107c6142c(param_1[2]);
  uVar1 = param_1[4];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(param_1[3]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 10363cd10; end: 10363ce27;  */

undefined8 * FUN_10363cd10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar4 = param_2[2];
  uVar1 = param_2[3];
  param_1[2] = uVar4;
  uVar3 = param_2[4];
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[3] = uVar1;
  param_1[4] = uVar3;
  uVar2 = param_2[7];
  if (uVar2 >> 0x3c < 0xf) {
    uVar4 = param_2[6];
    param_1[5] = param_2[5];
    func_0x00010006c00c(uVar4,uVar2);
    param_1[6] = uVar4;
    param_1[7] = uVar2;
  }
  else {
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    param_1[7] = param_2[7];
  }
  uVar2 = param_2[10];
  if (uVar2 >> 0x3c < 0xf) {
    uVar4 = param_2[9];
    param_1[8] = param_2[8];
    func_0x00010006c00c(uVar4,uVar2);
    param_1[9] = uVar4;
    param_1[10] = uVar2;
  }
  else {
    uVar4 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar4;
    param_1[10] = param_2[10];
  }
  uVar2 = param_2[0xd];
  if (uVar2 >> 0x3c < 0xf) {
    uVar4 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    func_0x00010006c00c(uVar4,uVar2);
    param_1[0xc] = uVar4;
    param_1[0xd] = uVar2;
  }
  else {
    uVar4 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar4;
    param_1[0xd] = param_2[0xd];
  }
  return param_1;
}



/* Entry: 10363ce28; end: 10363d07b;  */

undefined8 * FUN_10363ce28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar3);
  param_1[1] = param_2[1];
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar3);
  uVar3 = param_2[3];
  uVar1 = param_2[4];
  func_0x00010006c00c(uVar3,uVar1);
  uVar4 = param_1[3];
  uVar2 = param_1[4];
  param_1[3] = uVar3;
  param_1[4] = uVar1;
  func_0x00010006c090(uVar4,uVar2);
  if ((ulong)param_1[7] >> 0x3c < 0xf) {
    if ((ulong)param_2[7] >> 0x3c < 0xf) {
      param_1[5] = param_2[5];
      uVar3 = param_2[6];
      uVar1 = param_2[7];
      func_0x00010006c00c(uVar3,uVar1);
      uVar4 = param_1[6];
      uVar2 = param_1[7];
      param_1[6] = uVar3;
      param_1[7] = uVar1;
      func_0x00010006c090(uVar4,uVar2);
    }
    else {
      func_0x00010159d670(param_1 + 5);
      uVar3 = param_2[7];
      uVar4 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar4;
      param_1[7] = uVar3;
    }
  }
  else if ((ulong)param_2[7] >> 0x3c < 0xf) {
    param_1[5] = param_2[5];
    uVar3 = param_2[6];
    uVar4 = param_2[7];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[6] = uVar3;
    param_1[7] = uVar4;
  }
  else {
    uVar4 = param_2[6];
    uVar3 = param_2[5];
    param_1[7] = param_2[7];
    param_1[6] = uVar4;
    param_1[5] = uVar3;
  }
  if ((ulong)param_1[10] >> 0x3c < 0xf) {
    if ((ulong)param_2[10] >> 0x3c < 0xf) {
      param_1[8] = param_2[8];
      uVar3 = param_2[9];
      uVar1 = param_2[10];
      func_0x00010006c00c(uVar3,uVar1);
      uVar4 = param_1[9];
      uVar2 = param_1[10];
      param_1[9] = uVar3;
      param_1[10] = uVar1;
      func_0x00010006c090(uVar4,uVar2);
    }
    else {
      func_0x00010159d670(param_1 + 8);
      uVar3 = param_2[10];
      uVar4 = param_2[8];
      param_1[9] = param_2[9];
      param_1[8] = uVar4;
      param_1[10] = uVar3;
    }
  }
  else if ((ulong)param_2[10] >> 0x3c < 0xf) {
    param_1[8] = param_2[8];
    uVar3 = param_2[9];
    uVar4 = param_2[10];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[9] = uVar3;
    param_1[10] = uVar4;
  }
  else {
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[10] = param_2[10];
    param_1[9] = uVar4;
    param_1[8] = uVar3;
  }
  if ((ulong)param_1[0xd] >> 0x3c < 0xf) {
    if ((ulong)param_2[0xd] >> 0x3c < 0xf) {
      param_1[0xb] = param_2[0xb];
      uVar3 = param_2[0xc];
      uVar1 = param_2[0xd];
      func_0x00010006c00c(uVar3,uVar1);
      uVar4 = param_1[0xc];
      uVar2 = param_1[0xd];
      param_1[0xc] = uVar3;
      param_1[0xd] = uVar1;
      func_0x00010006c090(uVar4,uVar2);
    }
    else {
      func_0x00010159d670(param_1 + 0xb);
      uVar3 = param_2[0xd];
      uVar4 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar4;
      param_1[0xd] = uVar3;
    }
  }
  else if ((ulong)param_2[0xd] >> 0x3c < 0xf) {
    param_1[0xb] = param_2[0xb];
    uVar3 = param_2[0xc];
    uVar4 = param_2[0xd];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0xc] = uVar3;
    param_1[0xd] = uVar4;
  }
  else {
    uVar4 = param_2[0xc];
    uVar3 = param_2[0xb];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar4;
    param_1[0xb] = uVar3;
  }
  return param_1;
}



/* Entry: 10363d07c; end: 10363d1bf;  */

undefined8 * FUN_10363d07c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  uVar4 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if ((ulong)param_1[7] >> 0x3c < 0xf) {
    uVar3 = param_2[7];
    if (0xe < uVar3 >> 0x3c) {
      func_0x00010159d670(param_1 + 5);
      goto LAB_10363d0e8;
    }
    uVar1 = param_1[6];
    uVar2 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[7] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_10363d0e8:
    uVar1 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar1;
    param_1[7] = param_2[7];
  }
  if ((ulong)param_1[10] >> 0x3c < 0xf) {
    uVar3 = param_2[10];
    if (uVar3 >> 0x3c < 0xf) {
      uVar1 = param_1[9];
      uVar2 = param_2[8];
      param_1[9] = param_2[9];
      param_1[8] = uVar2;
      param_1[10] = uVar3;
      func_0x00010006c090(uVar1);
      goto LAB_10363d160;
    }
    func_0x00010159d670(param_1 + 8);
  }
  uVar1 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  param_1[10] = param_2[10];
LAB_10363d160:
  if ((ulong)param_1[0xd] >> 0x3c < 0xf) {
    uVar3 = param_2[0xd];
    if (uVar3 >> 0x3c < 0xf) {
      uVar1 = param_1[0xc];
      uVar2 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar2;
      param_1[0xd] = uVar3;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    func_0x00010159d670(param_1 + 0xb);
  }
  uVar1 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar1;
  param_1[0xd] = param_2[0xd];
  return param_1;
}



/* Entry: 10363d1c0; end: 10363d273;  */

int FUN_10363d1c0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10363d274; end: 10363d2f3;  */

void FUN_10363d274(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f810c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf067c;
  func_0x000107c61520(&DAT_10dbf067c,&UNK_110673d70);
  puRam0000000112f810c0 = puVar1;
  return;
}



/* Entry: 10363d2f4; end: 10363d30f;  */

long FUN_10363d2f4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10363d310; end: 10363d33f;  */

void FUN_10363d310(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_10363e5c8();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10363d340; end: 10363d34b;  */

undefined1  [16] FUN_10363d340(void)

{
  unkuint9 *unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *unaff_x20;
  return auVar1;
}



/* Entry: 10363d34c; end: 10363d4b7;  */

void FUN_10363d34c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f81340;
  func_0x0001000285a8(0x112f81340,&UNK_10dbf0858);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10363d4b8; end: 10363d50b;  */

bool FUN_10363d4b8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = *param_2;
  lVar1 = param_2[1];
  func_0x00010363d2fc(lVar2,(char)param_1[1]);
  func_0x00010363d2fc(lVar3,(char)lVar1);
  return lVar2 == lVar3;
}



/* Entry: 10363d50c; end: 10363d587;  */

bool FUN_10363d50c(long param_1,undefined8 param_2,long param_3)

{
  return param_1 == param_3;
}



/* Entry: 10363d588; end: 10363d5cf;  */

void FUN_10363d588(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf0d40,0x1b6,2);
  uRam000000011380ada8 = uStack_38;
  uRam000000011380ada0 = uStack_40;
  uRam000000011380adb8 = uStack_28;
  uRam000000011380adb0 = uStack_30;
  uRam000000011380adc8 = uStack_18;
  uRam000000011380adc0 = uStack_20;
  return;
}



/* Entry: 10363d5d0; end: 10363d7af;  */

/* WARNING: Removing unreachable block (ram,0x00010363d7ac) */

void FUN_10363d5d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        break;
      case 2:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        break;
      case 3:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        break;
      case 4:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        break;
      case 5:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        break;
      case 6:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        break;
      case 7:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        break;
      case 8:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        break;
      case 9:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        break;
      case 10:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        break;
      case 0xb:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        break;
      case 0xc:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        break;
      case 0xd:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        break;
      case 0xe:
        pcVar3 = *(code **)(param_3 + 0x180);
        FUN_10363e5d4();
        break;
      default:
        goto LAB_10363d79c;
      }
      (*pcVar3)();
LAB_10363d79c:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10363d7b0; end: 10363d99f;  */

/* WARNING: Removing unreachable block (ram,0x00010363d914) */

void FUN_10363d7b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long unaff_x21;
  long lVar3;
  code *pcVar4;
  long lStack_50;
  undefined1 uStack_48;
  
  FUN_10363d9a0();
  if (unaff_x21 == 0) {
    FUN_10363da28();
    FUN_10363dab0();
    FUN_10363db38();
    FUN_10363dbc0();
    FUN_10363dc48();
    FUN_10363dcd0();
    FUN_10363dd58();
    FUN_10363dde0();
    FUN_10363de68();
    FUN_10363def0();
    FUN_10363df78();
    FUN_10363e004();
    lVar3 = *unaff_x20;
    lVar1 = unaff_x20[1];
    lVar2 = lVar3;
    func_0x00010363d2fc(lVar3,(char)lVar1);
    if (lVar2 != 0) {
      pcVar4 = *(code **)(param_3 + 0x80);
      lStack_50 = lVar3;
      uStack_48 = (char)lVar1;
      FUN_10363e5d4();
      (*pcVar4)(&lStack_50,0xe,&UNK_110674038,lVar2,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 10363d9a0; end: 10363da27;  */

void FUN_10363d9a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 10363da28; end: 10363daaf;  */

void FUN_10363da28(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x48);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x40);
    uStack_60 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,2,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10363dab0; end: 10363db37;  */

void FUN_10363dab0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x60);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x58);
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,3,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10363db38; end: 10363dbbf;  */

void FUN_10363db38(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x78);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x70);
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,4,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10363dbc0; end: 10363dc47;  */

void FUN_10363dbc0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    (*pcVar1)(&uStack_60,5,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10363dc48; end: 10363dccf;  */

void FUN_10363dc48(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xa8);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xa0);
    uStack_60 = *(undefined8 *)(param_1 + 0x98);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,6,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10363dcd0; end: 10363dd57;  */

void FUN_10363dcd0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xc0);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xb8);
    uStack_60 = *(undefined8 *)(param_1 + 0xb0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,7,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10363dd58; end: 10363dddf;  */

void FUN_10363dd58(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xd8);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xd0);
    uStack_60 = *(undefined8 *)(param_1 + 200);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,8,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10363dde0; end: 10363de67;  */

void FUN_10363dde0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xf0);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xe8);
    uStack_60 = *(undefined8 *)(param_1 + 0xe0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,9,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10363de68; end: 10363deef;  */

void FUN_10363de68(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x108);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x100);
    uStack_60 = *(undefined8 *)(param_1 + 0xf8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,10,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10363def0; end: 10363df77;  */

void FUN_10363def0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x120);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x118);
    uStack_60 = *(undefined8 *)(param_1 + 0x110);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,0xb,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10363df78; end: 10363e003;  */

void FUN_10363df78(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x138);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x130);
    uStack_60 = *(undefined8 *)(param_1 + 0x128);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,0xc,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10363e004; end: 10363e08b;  */

void FUN_10363e004(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x150);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x148);
    uStack_60 = *(undefined8 *)(param_1 + 0x140);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,0xd,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10363e08c; end: 10363e123;  */

uint FUN_10363e08c(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong auStack_3c8 [3];
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar11 = param_1[5];
  uVar9 = param_1[4];
  uVar5 = param_1[6];
  uVar12 = param_2[5];
  uVar10 = param_2[4];
  uVar6 = param_2[6];
  uStack_b0 = uVar10;
  uStack_a8 = uVar12;
  uStack_a0 = uVar6;
  uStack_90 = uVar9;
  uStack_88 = uVar11;
  uStack_80 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar6 >> 0x3c) goto LAB_10363e6ac;
    if ((float)uVar9 == (float)uVar10) {
      func_0x00010161ef18(&uStack_90,&uStack_d0);
      func_0x00010161ef18(&uStack_b0,&uStack_d0);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar6);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) != 0) goto LAB_10363e718;
    }
    else {
      func_0x00010161ef18(&uStack_90,&uStack_d0);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_10363f2ec:
      func_0x00010161ef18(puVar3,puVar4);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
    }
LAB_10363f30c:
    func_0x000101553ccc(uVar9,uVar11,uVar5);
  }
  else {
    if (uVar6 >> 0x3c < 0xf) {
LAB_10363e6ac:
      func_0x00010161ef18(&uStack_90,&uStack_d0);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
      uVar2 = uVar5;
      uVar7 = uVar11;
      uVar8 = uVar9;
      uVar5 = uVar6;
      uVar11 = uVar12;
      uVar9 = uVar10;
LAB_10363f220:
      func_0x00010161ef18(puVar3,puVar4);
      func_0x000101553ccc(uVar8,uVar7,uVar2);
      goto LAB_10363f30c;
    }
    func_0x00010161ef18(&uStack_90,&uStack_d0);
    func_0x00010161ef18(&uStack_b0,&uStack_d0);
LAB_10363e718:
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar11 = param_1[8];
    uVar9 = param_1[7];
    uVar5 = param_1[9];
    uVar12 = param_2[8];
    uVar10 = param_2[7];
    uVar6 = param_2[9];
    uStack_f0 = uVar10;
    uStack_e8 = uVar12;
    uStack_e0 = uVar6;
    uStack_d0 = uVar9;
    uStack_c8 = uVar11;
    uStack_c0 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_10363e78c;
      if ((float)uVar9 != (float)uVar10) {
        func_0x00010161ef18(&uStack_d0,&uStack_110);
        puVar3 = &uStack_f0;
        puVar4 = &uStack_110;
        goto LAB_10363f2ec;
      }
      func_0x00010161ef18(&uStack_d0,&uStack_110);
      func_0x00010161ef18(&uStack_f0,&uStack_110);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar6);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) == 0) goto LAB_10363f30c;
    }
    else {
      if (uVar6 >> 0x3c < 0xf) {
LAB_10363e78c:
        func_0x00010161ef18(&uStack_d0,&uStack_110);
        puVar3 = &uStack_f0;
        puVar4 = &uStack_110;
        uVar2 = uVar5;
        uVar7 = uVar11;
        uVar8 = uVar9;
        uVar5 = uVar6;
        uVar11 = uVar12;
        uVar9 = uVar10;
        goto LAB_10363f220;
      }
      func_0x00010161ef18(&uStack_d0,&uStack_110);
      func_0x00010161ef18(&uStack_f0,&uStack_110);
    }
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar11 = param_1[0xb];
    uVar9 = param_1[10];
    uVar5 = param_1[0xc];
    uVar12 = param_2[0xb];
    uVar10 = param_2[10];
    uVar6 = param_2[0xc];
    uStack_130 = uVar10;
    uStack_128 = uVar12;
    uStack_120 = uVar6;
    uStack_110 = uVar9;
    uStack_108 = uVar11;
    uStack_100 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_10363e880;
      if ((float)uVar9 != (float)uVar10) {
        func_0x00010161ef18(&uStack_110,&uStack_150);
        puVar3 = &uStack_130;
        puVar4 = &uStack_150;
        goto LAB_10363f2ec;
      }
      func_0x00010161ef18(&uStack_110,&uStack_150);
      func_0x00010161ef18(&uStack_130,&uStack_150);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar6);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) == 0) goto LAB_10363f30c;
    }
    else {
      if (uVar6 >> 0x3c < 0xf) {
LAB_10363e880:
        func_0x00010161ef18(&uStack_110,&uStack_150);
        puVar3 = &uStack_130;
        puVar4 = &uStack_150;
        uVar2 = uVar5;
        uVar7 = uVar11;
        uVar8 = uVar9;
        uVar5 = uVar6;
        uVar11 = uVar12;
        uVar9 = uVar10;
        goto LAB_10363f220;
      }
      func_0x00010161ef18(&uStack_110,&uStack_150);
      func_0x00010161ef18(&uStack_130,&uStack_150);
    }
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar11 = param_1[0xe];
    uVar9 = param_1[0xd];
    uVar5 = param_1[0xf];
    uVar12 = param_2[0xe];
    uVar10 = param_2[0xd];
    uVar6 = param_2[0xf];
    uStack_170 = uVar10;
    uStack_168 = uVar12;
    uStack_160 = uVar6;
    uStack_150 = uVar9;
    uStack_148 = uVar11;
    uStack_140 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_10363e978;
      if ((float)uVar9 != (float)uVar10) {
        func_0x00010161ef18(&uStack_150,&uStack_190);
        puVar3 = &uStack_170;
        puVar4 = &uStack_190;
        goto LAB_10363f2ec;
      }
      func_0x00010161ef18(&uStack_150,&uStack_190);
      func_0x00010161ef18(&uStack_170,&uStack_190);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar6);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) == 0) goto LAB_10363f30c;
    }
    else {
      if (uVar6 >> 0x3c < 0xf) {
LAB_10363e978:
        func_0x00010161ef18(&uStack_150,&uStack_190);
        puVar3 = &uStack_170;
        puVar4 = &uStack_190;
        uVar2 = uVar5;
        uVar7 = uVar11;
        uVar8 = uVar9;
        uVar5 = uVar6;
        uVar11 = uVar12;
        uVar9 = uVar10;
        goto LAB_10363f220;
      }
      func_0x00010161ef18(&uStack_150,&uStack_190);
      func_0x00010161ef18(&uStack_170,&uStack_190);
    }
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar11 = param_1[0x11];
    uVar9 = param_1[0x10];
    uVar5 = param_1[0x12];
    uVar12 = param_2[0x11];
    uVar10 = param_2[0x10];
    uVar6 = param_2[0x12];
    uStack_1b0 = uVar10;
    uStack_1a8 = uVar12;
    uStack_1a0 = uVar6;
    uStack_190 = uVar9;
    uStack_188 = uVar11;
    uStack_180 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_10363ea70;
      if ((float)uVar9 != (float)uVar10) {
        func_0x00010161ef18(&uStack_190,&uStack_1d0);
        puVar3 = &uStack_1b0;
        puVar4 = &uStack_1d0;
        goto LAB_10363f2ec;
      }
      func_0x00010161ef18(&uStack_190,&uStack_1d0);
      func_0x00010161ef18(&uStack_1b0,&uStack_1d0);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar6);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) == 0) goto LAB_10363f30c;
    }
    else {
      if (uVar6 >> 0x3c < 0xf) {
LAB_10363ea70:
        func_0x00010161ef18(&uStack_190,&uStack_1d0);
        puVar3 = &uStack_1b0;
        puVar4 = &uStack_1d0;
        uVar2 = uVar5;
        uVar7 = uVar11;
        uVar8 = uVar9;
        uVar5 = uVar6;
        uVar11 = uVar12;
        uVar9 = uVar10;
        goto LAB_10363f220;
      }
      func_0x00010161ef18(&uStack_190,&uStack_1d0);
      func_0x00010161ef18(&uStack_1b0,&uStack_1d0);
    }
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar11 = param_1[0x14];
    uVar9 = param_1[0x13];
    uVar5 = param_1[0x15];
    uVar12 = param_2[0x14];
    uVar10 = param_2[0x13];
    uVar6 = param_2[0x15];
    uStack_1f0 = uVar10;
    uStack_1e8 = uVar12;
    uStack_1e0 = uVar6;
    uStack_1d0 = uVar9;
    uStack_1c8 = uVar11;
    uStack_1c0 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_10363eb64;
      if ((float)uVar9 != (float)uVar10) {
        func_0x00010161ef18(&uStack_1d0,&uStack_210);
        puVar3 = &uStack_1f0;
        puVar4 = &uStack_210;
        goto LAB_10363f2ec;
      }
      func_0x00010161ef18(&uStack_1d0,&uStack_210);
      func_0x00010161ef18(&uStack_1f0,&uStack_210);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar6);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) == 0) goto LAB_10363f30c;
    }
    else {
      if (uVar6 >> 0x3c < 0xf) {
LAB_10363eb64:
        func_0x00010161ef18(&uStack_1d0,&uStack_210);
        puVar3 = &uStack_1f0;
        puVar4 = &uStack_210;
        uVar2 = uVar5;
        uVar7 = uVar11;
        uVar8 = uVar9;
        uVar5 = uVar6;
        uVar11 = uVar12;
        uVar9 = uVar10;
        goto LAB_10363f220;
      }
      func_0x00010161ef18(&uStack_1d0,&uStack_210);
      func_0x00010161ef18(&uStack_1f0,&uStack_210);
    }
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar11 = param_1[0x17];
    uVar9 = param_1[0x16];
    uVar5 = param_1[0x18];
    uVar12 = param_2[0x17];
    uVar10 = param_2[0x16];
    uVar6 = param_2[0x18];
    uStack_230 = uVar10;
    uStack_228 = uVar12;
    uStack_220 = uVar6;
    uStack_210 = uVar9;
    uStack_208 = uVar11;
    uStack_200 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_10363ec54;
      if ((float)uVar9 != (float)uVar10) {
        func_0x00010161ef18(&uStack_210,&uStack_250);
        puVar3 = &uStack_230;
        puVar4 = &uStack_250;
        goto LAB_10363f2ec;
      }
      func_0x00010161ef18(&uStack_210,&uStack_250);
      func_0x00010161ef18(&uStack_230,&uStack_250);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar6);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) == 0) goto LAB_10363f30c;
    }
    else {
      if (uVar6 >> 0x3c < 0xf) {
LAB_10363ec54:
        func_0x00010161ef18(&uStack_210,&uStack_250);
        puVar3 = &uStack_230;
        puVar4 = &uStack_250;
        uVar2 = uVar5;
        uVar7 = uVar11;
        uVar8 = uVar9;
        uVar5 = uVar6;
        uVar11 = uVar12;
        uVar9 = uVar10;
        goto LAB_10363f220;
      }
      func_0x00010161ef18(&uStack_210,&uStack_250);
      func_0x00010161ef18(&uStack_230,&uStack_250);
    }
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar11 = param_1[0x1a];
    uVar9 = param_1[0x19];
    uVar5 = param_1[0x1b];
    uVar12 = param_2[0x1a];
    uVar10 = param_2[0x19];
    uVar6 = param_2[0x1b];
    uStack_270 = uVar10;
    uStack_268 = uVar12;
    uStack_260 = uVar6;
    uStack_250 = uVar9;
    uStack_248 = uVar11;
    uStack_240 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_10363ed44;
      if ((float)uVar9 != (float)uVar10) {
        func_0x00010161ef18(&uStack_250,&uStack_290);
        puVar3 = &uStack_270;
        puVar4 = &uStack_290;
        goto LAB_10363f2ec;
      }
      func_0x00010161ef18(&uStack_250,&uStack_290);
      func_0x00010161ef18(&uStack_270,&uStack_290);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar6);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) == 0) goto LAB_10363f30c;
    }
    else {
      if (uVar6 >> 0x3c < 0xf) {
LAB_10363ed44:
        func_0x00010161ef18(&uStack_250,&uStack_290);
        puVar3 = &uStack_270;
        puVar4 = &uStack_290;
        uVar2 = uVar5;
        uVar7 = uVar11;
        uVar8 = uVar9;
        uVar5 = uVar6;
        uVar11 = uVar12;
        uVar9 = uVar10;
        goto LAB_10363f220;
      }
      func_0x00010161ef18(&uStack_250,&uStack_290);
      func_0x00010161ef18(&uStack_270,&uStack_290);
    }
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar11 = param_1[0x1d];
    uVar9 = param_1[0x1c];
    uVar5 = param_1[0x1e];
    uVar12 = param_2[0x1d];
    uVar10 = param_2[0x1c];
    uVar6 = param_2[0x1e];
    uStack_2b0 = uVar10;
    uStack_2a8 = uVar12;
    uStack_2a0 = uVar6;
    uStack_290 = uVar9;
    uStack_288 = uVar11;
    uStack_280 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_10363ee34;
      if ((float)uVar9 != (float)uVar10) {
        func_0x00010161ef18(&uStack_290,&uStack_2d0);
        puVar3 = &uStack_2b0;
        puVar4 = &uStack_2d0;
        goto LAB_10363f2ec;
      }
      func_0x00010161ef18(&uStack_290,&uStack_2d0);
      func_0x00010161ef18(&uStack_2b0,&uStack_2d0);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar6);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) == 0) goto LAB_10363f30c;
    }
    else {
      if (uVar6 >> 0x3c < 0xf) {
LAB_10363ee34:
        func_0x00010161ef18(&uStack_290,&uStack_2d0);
        puVar3 = &uStack_2b0;
        puVar4 = &uStack_2d0;
        uVar2 = uVar5;
        uVar7 = uVar11;
        uVar8 = uVar9;
        uVar5 = uVar6;
        uVar11 = uVar12;
        uVar9 = uVar10;
        goto LAB_10363f220;
      }
      func_0x00010161ef18(&uStack_290,&uStack_2d0);
      func_0x00010161ef18(&uStack_2b0,&uStack_2d0);
    }
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar11 = param_1[0x20];
    uVar9 = param_1[0x1f];
    uVar5 = param_1[0x21];
    uVar12 = param_2[0x20];
    uVar10 = param_2[0x1f];
    uVar6 = param_2[0x21];
    uStack_2f0 = uVar10;
    uStack_2e8 = uVar12;
    uStack_2e0 = uVar6;
    uStack_2d0 = uVar9;
    uStack_2c8 = uVar11;
    uStack_2c0 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_10363ef28;
      if ((float)uVar9 != (float)uVar10) {
        func_0x00010161ef18(&uStack_2d0,&uStack_310);
        puVar3 = &uStack_2f0;
        puVar4 = &uStack_310;
        goto LAB_10363f2ec;
      }
      func_0x00010161ef18(&uStack_2d0,&uStack_310);
      func_0x00010161ef18(&uStack_2f0,&uStack_310);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar6);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) == 0) goto LAB_10363f30c;
    }
    else {
      if (uVar6 >> 0x3c < 0xf) {
LAB_10363ef28:
        func_0x00010161ef18(&uStack_2d0,&uStack_310);
        puVar3 = &uStack_2f0;
        puVar4 = &uStack_310;
        uVar2 = uVar5;
        uVar7 = uVar11;
        uVar8 = uVar9;
        uVar5 = uVar6;
        uVar11 = uVar12;
        uVar9 = uVar10;
        goto LAB_10363f220;
      }
      func_0x00010161ef18(&uStack_2d0,&uStack_310);
      func_0x00010161ef18(&uStack_2f0,&uStack_310);
    }
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar11 = param_1[0x23];
    uVar9 = param_1[0x22];
    uVar5 = param_1[0x24];
    uVar12 = param_2[0x23];
    uVar10 = param_2[0x22];
    uVar6 = param_2[0x24];
    uStack_330 = uVar10;
    uStack_328 = uVar12;
    uStack_320 = uVar6;
    uStack_310 = uVar9;
    uStack_308 = uVar11;
    uStack_300 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_10363f01c;
      if ((float)uVar9 != (float)uVar10) {
        func_0x00010161ef18(&uStack_310,&uStack_350);
        puVar3 = &uStack_330;
        puVar4 = &uStack_350;
        goto LAB_10363f2ec;
      }
      func_0x00010161ef18(&uStack_310,&uStack_350);
      func_0x00010161ef18(&uStack_330,&uStack_350);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar6);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) == 0) goto LAB_10363f30c;
    }
    else {
      if (uVar6 >> 0x3c < 0xf) {
LAB_10363f01c:
        func_0x00010161ef18(&uStack_310,&uStack_350);
        puVar3 = &uStack_330;
        puVar4 = &uStack_350;
        uVar2 = uVar5;
        uVar7 = uVar11;
        uVar8 = uVar9;
        uVar5 = uVar6;
        uVar11 = uVar12;
        uVar9 = uVar10;
        goto LAB_10363f220;
      }
      func_0x00010161ef18(&uStack_310,&uStack_350);
      func_0x00010161ef18(&uStack_330,&uStack_350);
    }
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar11 = param_1[0x26];
    uVar9 = param_1[0x25];
    uVar5 = param_1[0x27];
    uVar12 = param_2[0x26];
    uVar10 = param_2[0x25];
    uVar6 = param_2[0x27];
    uStack_370 = uVar10;
    uStack_368 = uVar12;
    uStack_360 = uVar6;
    uStack_350 = uVar9;
    uStack_348 = uVar11;
    uStack_340 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_10363f118;
      if ((float)uVar9 != (float)uVar10) {
        func_0x00010161ef18(&uStack_350,&uStack_390);
        puVar3 = &uStack_370;
        puVar4 = &uStack_390;
        goto LAB_10363f2ec;
      }
      func_0x00010161ef18(&uStack_350,&uStack_390);
      func_0x00010161ef18(&uStack_370,&uStack_390);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar6);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) == 0) goto LAB_10363f30c;
    }
    else {
      if (uVar6 >> 0x3c < 0xf) {
LAB_10363f118:
        func_0x00010161ef18(&uStack_350,&uStack_390);
        puVar3 = &uStack_370;
        puVar4 = &uStack_390;
        uVar2 = uVar5;
        uVar7 = uVar11;
        uVar8 = uVar9;
        uVar5 = uVar6;
        uVar11 = uVar12;
        uVar9 = uVar10;
        goto LAB_10363f220;
      }
      func_0x00010161ef18(&uStack_350,&uStack_390);
      func_0x00010161ef18(&uStack_370,&uStack_390);
    }
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar11 = param_1[0x29];
    uVar9 = param_1[0x28];
    uVar5 = param_1[0x2a];
    uVar12 = param_2[0x29];
    uVar10 = param_2[0x28];
    uVar6 = param_2[0x2a];
    uStack_3b0 = uVar10;
    uStack_3a8 = uVar12;
    uStack_3a0 = uVar6;
    uStack_390 = uVar9;
    uStack_388 = uVar11;
    uStack_380 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_10363f20c;
      if ((float)uVar9 != (float)uVar10) {
        func_0x00010161ef18(&uStack_390,auStack_3c8);
        puVar3 = &uStack_3b0;
        puVar4 = auStack_3c8;
        goto LAB_10363f2ec;
      }
      func_0x00010161ef18(&uStack_390,auStack_3c8);
      func_0x00010161ef18(&uStack_3b0,auStack_3c8);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar6);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) == 0) goto LAB_10363f30c;
    }
    else {
      if (uVar6 >> 0x3c < 0xf) {
LAB_10363f20c:
        func_0x00010161ef18(&uStack_390,auStack_3c8);
        puVar3 = &uStack_3b0;
        puVar4 = auStack_3c8;
        uVar2 = uVar5;
        uVar7 = uVar11;
        uVar8 = uVar9;
        uVar5 = uVar6;
        uVar11 = uVar12;
        uVar9 = uVar10;
        goto LAB_10363f220;
      }
      func_0x00010161ef18(&uStack_390,auStack_3c8);
      func_0x00010161ef18(&uStack_3b0,auStack_3c8);
    }
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar5 = *param_1;
    FUN_10363d50c(uVar5,(char)param_1[1],*param_2,*(undefined1 *)(param_2 + 1));
    if ((uVar5 & 1) != 0) {
      uVar5 = param_1[2];
      func_0x000100e25fcc(uVar5,param_1[3],param_2[2],param_2[3]);
      uVar1 = (uint)uVar5;
      goto LAB_10363f314;
    }
  }
  uVar1 = 0;
LAB_10363f314:
  return uVar1 & 1;
}



/* Entry: 10363e124; end: 10363e153;  */

undefined1  [16] FUN_10363e124(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 10363e154; end: 10363e187;  */

void FUN_10363e154(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 10363e188; end: 10363e19b;  */

undefined1  [16] FUN_10363e188(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x10363e198;
  return auVar1;
}



/* Entry: 10363e19c; end: 10363e1af;  */

void FUN_10363e19c(void)

{
  FUN_10363d5d0();
  return;
}



/* Entry: 10363e1b0; end: 10363e217;  */

void FUN_10363e1b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_198 [344];
  
  func_0x000107c610b4(auStack_198);
  FUN_10363d7b0(param_1,param_2,param_3);
  return;
}



/* Entry: 10363e218; end: 10363e21b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10363e218(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10363e21c; end: 10363e253;  */

uint FUN_10363e21c(long param_1,long param_2)

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
  FUN_103640958();
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



/* Entry: 10363e254; end: 10363e2a3;  */

uint FUN_10363e254(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_2d0 [344];
  undefined1 auStack_178 [344];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_178,param_1,0x158);
  func_0x000107c610b4(auStack_2d0);
  FUN_10363e614(auStack_2d0,auStack_178);
  return uVar1 & 1;
}



/* Entry: 10363e2a4; end: 10363e343;  */

/* WARNING: Possible PIC construction at 0x00010363e2f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010363e300: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010363e2f4) */
/* WARNING: Removing unreachable block (ram,0x00010363e304) */

void FUN_10363e2a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f81348 != -1) {
    func_0x000107c61568(0x112f81348,FUN_10363d588);
  }
  uVar5 = uRam000000011380adc8;
  uVar4 = uRam000000011380adc0;
  uVar3 = uRam000000011380adb8;
  uVar2 = uRam000000011380adb0;
  uVar1 = uRam000000011380ada8;
  *param_1 = uRam000000011380ada0;
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


