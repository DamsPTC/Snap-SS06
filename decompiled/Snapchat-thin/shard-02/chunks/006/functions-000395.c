/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f39a64; end: 101f39ac7;  */

undefined1  [16] FUN_101f39a64(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar5 = *unaff_x20;
  uVar1 = 0x7466656c;
  if (bVar5 != 2) {
    uVar1 = 0x7468676972;
  }
  uVar2 = 0xe400000000000000;
  if (bVar5 != 2) {
    uVar2 = 0xe500000000000000;
  }
  uVar3 = 0x706f74;
  if (bVar5 != 0) {
    uVar3 = 0x6d6f74746f62;
  }
  uVar4 = 0xe300000000000000;
  if (bVar5 != 0) {
    uVar4 = 0xe600000000000000;
  }
  if (bVar5 < 2) {
    uVar2 = uVar4;
    uVar1 = uVar3;
  }
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = uVar1;
  return auVar6;
}



/* Entry: 101f39ac8; end: 101f39aeb;  */

void FUN_101f39ac8(undefined1 *param_1,undefined1 param_2)

{
  FUN_101f3a088();
  *param_1 = param_2;
  return;
}



/* Entry: 101f39aec; end: 101f39b03;  */

undefined1  [16] FUN_101f39aec(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f39b04; end: 101f39b53;  */

void FUN_101f39b04(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000101f3a814();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f39b54; end: 101f39b7f;  */

void FUN_101f39b54(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_101f3a1e0();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Entry: 101f39b80; end: 101f39bbb;  */

bool FUN_101f39b80(double *param_1,double *param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = false;
  if ((*param_1 == *param_2) && (bVar1 = false, !NAN(param_1[1]) && !NAN(param_2[1]))) {
    bVar1 = param_1[1] == param_2[1];
  }
  bVar2 = false;
  if ((bVar1) && (bVar2 = false, !NAN(param_1[2]) && !NAN(param_2[2]))) {
    bVar2 = param_1[2] == param_2[2];
  }
  if (!bVar2) {
    return false;
  }
  return param_1[3] == param_2[3];
}



/* Entry: 101f39bbc; end: 101f39d2b;  */

void FUN_101f39bbc(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x676e69646e756f62;
  if (cVar2 != '\x01') {
    uVar1 = 0x7364692d70616e73;
  }
  uVar3 = 0xec000000786f622d;
  if (cVar2 != '\x01') {
    uVar3 = 0xe800000000000000;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f39d2c; end: 101f39da3;  */

void FUN_101f39d2c(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 101f39da4; end: 101f39e2f;  */

void FUN_101f39da4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x676e69646e756f62;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x7364692d70616e73;
  }
  uVar2 = 0xec000000786f622d;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe800000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 101f39e30; end: 101f39eab;  */

void FUN_101f39e30(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 uVar3;
  
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_3);
  uVar3 = 1;
  if (lVar2 != 1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = uVar3;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 101f39eac; end: 101f39ec3;  */

undefined1  [16] FUN_101f39eac(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f39ec4; end: 101f39f13;  */

void FUN_101f39ec4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101f3a794();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f39f14; end: 101f39f2f;  */

undefined1  [16] FUN_101f39f14(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c840;
  auVar1._0_8_ = 0xd000000000000018;
  return auVar1;
}



/* Entry: 101f39f30; end: 101f39f77;  */

uint FUN_101f39f30(undefined8 *param_1,undefined8 *param_2)

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
  FUN_101f39fbc(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101f39f78; end: 101f39fbb;  */

void FUN_101f39f78(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_101f3a388(&uStack_48);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[3] = uStack_30;
    param_1[2] = uStack_38;
    param_1[4] = uStack_28;
  }
  return;
}



/* Entry: 101f39fbc; end: 101f3a087;  */

undefined8 FUN_101f39fbc(long *param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  lVar4 = *param_1;
  lVar5 = *param_2;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (lVar6 == *(long *)(lVar5 + 0x10)) {
    if (lVar6 != 0 && lVar4 != lVar5) {
      plVar7 = (long *)(lVar5 + 0x28);
      plVar8 = (long *)(lVar4 + 0x28);
      do {
        uVar3 = plVar8[-1];
        if ((uVar3 != plVar7[-1] || *plVar8 != *plVar7) && (func_0x000107c605b8(), (uVar3 & 1) == 0)
           ) {
          return 0;
        }
        plVar7 = plVar7 + 2;
        plVar8 = plVar8 + 2;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if ((double)param_1[1] == (double)param_2[1]) {
      bVar1 = false;
      if (((double)param_1[2] == (double)param_2[2]) &&
         (bVar1 = false, !NAN((double)param_1[3]) && !NAN((double)param_2[3]))) {
        bVar1 = (double)param_1[3] == (double)param_2[3];
      }
      bVar2 = false;
      if ((bVar1) && (bVar2 = false, !NAN((double)param_1[4]) && !NAN((double)param_2[4]))) {
        bVar2 = (double)param_1[4] == (double)param_2[4];
      }
      if (bVar2) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 101f3a088; end: 101f3a1df;  */

undefined4 FUN_101f3a088(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_1 != 0x706f74 || param_2 != -0x1d00000000000000) {
    uVar1 = 0;
    func_0x000107c605b8(0x706f74,0xe300000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
      if (((param_1 != 0x6d6f74746f62) || (param_2 != -0x1a00000000000000)) &&
         (func_0x000107c605b8(0x6d6f74746f62,0xe600000000000000,param_1,param_2,0), (uVar1 & 1) == 0
         )) {
        if ((param_1 != 0x7466656c) || (param_2 != -0x1c00000000000000)) {
          uVar1 = 0;
          func_0x000107c605b8(0x7466656c,0xe400000000000000,param_1,param_2,0);
          if ((uVar1 & 1) == 0) {
            uVar1 = 0;
            if ((param_1 == 0x7468676972) && (param_2 == -0x1b00000000000000)) {
              func_0x000107c6142c(0xe500000000000000);
              return 3;
            }
            func_0x000107c605b8(0x7468676972,0xe500000000000000,param_1,param_2,0);
            func_0x000107c6142c(param_2);
            if ((uVar1 & 1) != 0) {
              return 3;
            }
            return 4;
          }
        }
        func_0x000107c6142c(param_2);
        return 2;
      }
      func_0x000107c6142c(param_2);
      return 1;
    }
  }
  func_0x000107c6142c(param_2);
  return 0;
}



/* Entry: 101f3a1e0; end: 101f3a387;  */

/* WARNING: Removing unreachable block (ram,0x000101f3a2ec) */

undefined8 FUN_101f3a1e0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined8 unaff_d8;
  undefined1 auStack_80 [12];
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  
  lVar3 = 0x112e42218;
  func_0x0001000285a8(0x112e42218,&UNK_10da320d0);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  func_0x000101f3a814();
  func_0x000107c606e0(auStack_80 + -extraout_x8,&UNK_1104a3208,&UNK_1104a3208,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_71 = 0;
    func_0x000107c604fc(&uStack_71,lVar3);
    uStack_72 = 1;
    func_0x000107c604fc(&uStack_72,lVar3);
    uStack_73 = 2;
    func_0x000107c604fc(&uStack_73,lVar3);
    uStack_74 = 3;
    func_0x000107c604fc(&uStack_74,lVar3);
    (**(code **)(lVar5 + 8))(auStack_80 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
  }
  else {
    func_0x0001000834e4(param_2);
    param_1 = unaff_d8;
  }
  return param_1;
}



/* Entry: 101f3a388; end: 101f3a547;  */

/* WARNING: Removing unreachable block (ram,0x000101f3a510) */
/* WARNING: Removing unreachable block (ram,0x000101f3a484) */

void FUN_101f3a388(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_51;
  
  lVar1 = 0x112e42200;
  func_0x0001000285a8(0x112e42200,&UNK_10da320c0);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  lVar2 = param_2;
  func_0x0001000a8868(param_2,uVar3);
  FUN_101f3a794();
  func_0x000107c606e0((long)&uStack_a0 - extraout_x8,&UNK_1104a3298,&UNK_1104a3298,lVar2,uVar3,uVar4
                     );
  if (unaff_x21 == 0) {
    uVar3 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uStack_51 = 0;
    uVar4 = uVar3;
    FUN_10188fe58();
    func_0x000107c60508(&uStack_80,uVar3,&uStack_51,lVar1,uVar3,uVar4);
    uVar4 = uStack_80;
    uStack_51 = 1;
    func_0x000101f3a7d4();
    func_0x000107c60508(&uStack_80,&UNK_1104a3168,&uStack_51,lVar1,&UNK_1104a3168,uVar3);
    (**(code **)(lVar5 + 8))((long)&uStack_a0 - extraout_x8,lVar1);
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    uStack_88 = uStack_78;
    uStack_90 = uStack_80;
    func_0x0001000834e4(param_2);
    *param_1 = uVar4;
    param_1[4] = uStack_98;
    param_1[3] = uStack_a0;
    param_1[2] = uStack_88;
    param_1[1] = uStack_90;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 101f3a548; end: 101f3a56b;  */

void FUN_101f3a548(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f3a56c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f3a56c; end: 101f3a5ab;  */

void FUN_101f3a56c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e421f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da32064;
  func_0x000107c61520(&UNK_10da32064,&UNK_1104a30e8);
  puRam0000000112e421f8 = puVar1;
  return;
}



/* Entry: 101f3a5ac; end: 101f3a5b3;  */

void FUN_101f3a5ac(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 101f3a5b4; end: 101f3a5ef;  */

undefined8 * FUN_101f3a5b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101f3a5f0; end: 101f3a653;  */

undefined8 * FUN_101f3a5f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 101f3a654; end: 101f3a697;  */

undefined8 * FUN_101f3a654(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  return param_1;
}



/* Entry: 101f3a698; end: 101f3a793;  */

int FUN_101f3a698(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[5] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101f3a794; end: 101f3a853;  */

void FUN_101f3a794(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42208 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da322dc;
  func_0x000107c61520(&UNK_10da322dc,&UNK_1104a3298);
  puRam0000000112e42208 = puVar1;
  return;
}



/* Entry: 101f3a854; end: 101f3aaff;  */

int FUN_101f3a854(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101f3a8d0;
        goto LAB_101f3a8b4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101f3a8b4:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_101f3a8d0:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101f3ab00; end: 101f3ab3f;  */

void FUN_101f3ab00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42228 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da321ac;
  func_0x000107c61520(&UNK_10da321ac,&UNK_1104a3298);
  puRam0000000112e42228 = puVar1;
  return;
}



/* Entry: 101f3ab40; end: 101f3ab43;  */

void FUN_101f3ab40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42230 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da32264;
  func_0x000107c61520(&UNK_10da32264,&UNK_1104a3208);
  puRam0000000112e42230 = puVar1;
  return;
}



/* Entry: 101f3ab44; end: 101f3ab83;  */

void FUN_101f3ab44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42230 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da32264;
  func_0x000107c61520(&UNK_10da32264,&UNK_1104a3208);
  puRam0000000112e42230 = puVar1;
  return;
}



/* Entry: 101f3ab84; end: 101f3ab87;  */

void FUN_101f3ab84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da321fc;
  func_0x000107c61520(&UNK_10da321fc,&UNK_1104a3208);
  puRam0000000112e42238 = puVar1;
  return;
}



/* Entry: 101f3ab88; end: 101f3abc7;  */

void FUN_101f3ab88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da321fc;
  func_0x000107c61520(&UNK_10da321fc,&UNK_1104a3208);
  puRam0000000112e42238 = puVar1;
  return;
}



/* Entry: 101f3abc8; end: 101f3abcb;  */

void FUN_101f3abc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42240 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da321d4;
  func_0x000107c61520(&UNK_10da321d4,&UNK_1104a3208);
  puRam0000000112e42240 = puVar1;
  return;
}



/* Entry: 101f3abcc; end: 101f3ac0b;  */

void FUN_101f3abcc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42240 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da321d4;
  func_0x000107c61520(&UNK_10da321d4,&UNK_1104a3208);
  puRam0000000112e42240 = puVar1;
  return;
}



/* Entry: 101f3ac0c; end: 101f3ac0f;  */

void FUN_101f3ac0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42248 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3210c;
  func_0x000107c61520(&UNK_10da3210c,&UNK_1104a3298);
  puRam0000000112e42248 = puVar1;
  return;
}



/* Entry: 101f3ac10; end: 101f3ac4f;  */

void FUN_101f3ac10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42248 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3210c;
  func_0x000107c61520(&UNK_10da3210c,&UNK_1104a3298);
  puRam0000000112e42248 = puVar1;
  return;
}



/* Entry: 101f3ac50; end: 101f3ac53;  */

void FUN_101f3ac50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42250 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da320e4;
  func_0x000107c61520(&UNK_10da320e4,&UNK_1104a3298);
  puRam0000000112e42250 = puVar1;
  return;
}



/* Entry: 101f3ac54; end: 101f3ac93;  */

void FUN_101f3ac54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42250 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da320e4;
  func_0x000107c61520(&UNK_10da320e4,&UNK_1104a3298);
  puRam0000000112e42250 = puVar1;
  return;
}



/* Entry: 101f3ac94; end: 101f3acbb;  */

undefined1 FUN_101f3ac94(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 101f3acbc; end: 101f3ad0f;  */

void FUN_101f3acbc(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,0x692d646e65697266,0xe900000000000064);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f3ad10; end: 101f3ad2b;  */

void FUN_101f3ad10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,0x692d646e65697266,0xe900000000000064);
  return;
}



/* Entry: 101f3ad2c; end: 101f3ad7b;  */

void FUN_101f3ad2c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  func_0x000107c5fb58(auStack_68,0x692d646e65697266,0xe900000000000064);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f3ad7c; end: 101f3ade7;  */

void FUN_101f3ad7c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar1);
  *(bool *)param_1 = lVar2 != 0;
  return;
}



/* Entry: 101f3ade8; end: 101f3ae23;  */

void FUN_101f3ade8(undefined8 *param_1)

{
  *param_1 = 0x692d646e65697266;
  param_1[1] = 0xe900000000000064;
  return;
}



/* Entry: 101f3ae24; end: 101f3ae93;  */

void FUN_101f3ae24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_3);
  *(bool *)param_1 = lVar1 != 0;
  return;
}



/* Entry: 101f3ae94; end: 101f3aeab;  */

undefined1  [16] FUN_101f3ae94(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f3aeac; end: 101f3aefb;  */

void FUN_101f3aeac(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101f3aefc();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f3aefc; end: 101f3af3b;  */

void FUN_101f3aefc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e422b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da324c4;
  func_0x000107c61520(&UNK_10da324c4,&UNK_1104a3488);
  puRam0000000112e422b8 = puVar1;
  return;
}



/* Entry: 101f3af3c; end: 101f3af5b;  */

undefined1  [16] FUN_101f3af3c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xec00000079726f74;
  auVar1._0_8_ = 0x732d68636e75616c;
  return auVar1;
}



/* Entry: 101f3af5c; end: 101f3af7f;  */

void FUN_101f3af5c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f3af80();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f3af80; end: 101f3afbf;  */

void FUN_101f3af80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e422c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3237c;
  func_0x000107c61520(&UNK_10da3237c,&UNK_1104a33f0);
  puRam0000000112e422c0 = puVar1;
  return;
}



/* Entry: 101f3afc0; end: 101f3afef;  */

long FUN_101f3afc0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != *param_2 || param_1[1] != param_2[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 101f3aff0; end: 101f3b117;  */

/* WARNING: Removing unreachable block (ram,0x000101f3b0b4) */

void FUN_101f3aff0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  
  lVar3 = 0x112e422b0;
  func_0x0001000285a8(0x112e422b0,&UNK_10da32330);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_101f3aefc();
  puVar5 = &UNK_1104a3488;
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_1104a3488,&UNK_1104a3488,lVar4,
                      uVar1,uVar2);
  if (unaff_x21 == 0) {
    lVar4 = lVar3;
    func_0x000107c604f4();
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
    *param_1 = puVar5;
    param_1[1] = lVar4;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 101f3b118; end: 101f3b11f;  */

void FUN_101f3b118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101f3b120; end: 101f3b18f;  */

undefined8 * FUN_101f3b120(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101f3b190; end: 101f3b313;  */

int FUN_101f3b190(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101f3b314; end: 101f3b353;  */

void FUN_101f3b314(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e422c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3249c;
  func_0x000107c61520(&UNK_10da3249c,&UNK_1104a3488);
  puRam0000000112e422c8 = puVar1;
  return;
}



/* Entry: 101f3b354; end: 101f3b357;  */

void FUN_101f3b354(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e422d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da323fc;
  func_0x000107c61520(&UNK_10da323fc,&UNK_1104a3488);
  puRam0000000112e422d0 = puVar1;
  return;
}



/* Entry: 101f3b358; end: 101f3b397;  */

void FUN_101f3b358(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e422d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da323fc;
  func_0x000107c61520(&UNK_10da323fc,&UNK_1104a3488);
  puRam0000000112e422d0 = puVar1;
  return;
}



/* Entry: 101f3b398; end: 101f3b39b;  */

void FUN_101f3b398(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e422d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da323d4;
  func_0x000107c61520(&UNK_10da323d4,&UNK_1104a3488);
  puRam0000000112e422d8 = puVar1;
  return;
}



/* Entry: 101f3b39c; end: 101f3b3db;  */

void FUN_101f3b39c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e422d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da323d4;
  func_0x000107c61520(&UNK_10da323d4,&UNK_1104a3488);
  puRam0000000112e422d8 = puVar1;
  return;
}



/* Entry: 101f3b3dc; end: 101f3b3e3;  */

undefined8 * FUN_101f3b3dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101f3b3e4; end: 101f3b42b;  */

uint FUN_101f3b3e4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_60 = param_1[2];
  uStack_58 = (undefined1)param_1[3];
  uStack_4f = *(undefined8 *)((long)param_1 + 0x21);
  uStack_57 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  uStack_28 = (undefined1)param_2[3];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x21);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x19);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x19) >> 0x38);
  FUN_101f3b540(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101f3b42c; end: 101f3b43b;  */

void FUN_101f3b42c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101f3b43c; end: 101f3b483;  */

uint FUN_101f3b43c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_101f3b4bc(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101f3b484; end: 101f3b4bb;  */

byte FUN_101f3b484(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = *param_1;
  bVar3 = *param_2;
  bVar1 = bVar3 == 2 && bVar2 == 2;
  if (bVar2 != 2 && bVar3 != 2) {
    bVar1 = bVar3 ^ bVar2 ^ 1;
  }
  return bVar1 & 1;
}



/* Entry: 101f3b4bc; end: 101f3b53f;  */

/* WARNING: Possible PIC construction at 0x000101f3b4ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f3b4f0) */

long FUN_101f3b4bc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != *param_2 || param_1[1] != param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  if (param_1[2] == param_2[2]) {
    lVar1 = param_1[3];
    if (lVar1 != param_2[3] || param_1[4] != param_2[4]) goto code_r0x000107c605b8;
    lVar1 = 1;
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 101f3b540; end: 101f3b77f;  */

/* WARNING: Possible PIC construction at 0x000101f3b5e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f3b5ec) */

ulong FUN_101f3b540(byte *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  undefined1 auVar28 [16];
  
  bVar12 = *param_1;
  uVar1 = *(ulong *)(param_1 + 8);
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar8 = *(ulong *)(param_1 + 0x18);
  uVar3 = *(ulong *)(param_1 + 0x20);
  bVar13 = param_1[0x28];
  uVar7 = (ulong)*(uint *)(param_1 + 1) << 8 | (ulong)*(uint3 *)(param_1 + 5) << 0x28 |
          (ulong)bVar12;
  if (bVar13 < 2) {
    if (bVar13 == 0) {
      if ((byte)param_2[5] == 0) {
        uVar9 = *param_2;
        uVar10 = param_2[1];
        if (uVar7 != uVar9 || uVar1 != uVar10) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
          )(uVar7,uVar1,uVar9,uVar10,0);
          return uVar7;
        }
        if ((uVar2 == param_2[2]) &&
           (((uVar8 == param_2[3] && (uVar3 == param_2[4])) ||
            (func_0x000107c605b8(uVar8,uVar3,param_2[3],param_2[4],0), (uVar8 & 1) != 0))))
        goto LAB_101f3b75c;
      }
    }
    else if ((byte)param_2[5] == 1) {
      uVar9 = *param_2;
      uVar10 = param_2[1];
      if (uVar7 != uVar9 || uVar1 != uVar10) goto code_r0x000107c605b8;
      goto LAB_101f3b75c;
    }
  }
  else if (bVar13 == 2) {
    if ((byte)param_2[5] == 2) {
      uVar11 = (byte)(bVar12 ^ (byte)*param_2) ^ 1;
      goto LAB_101f3b768;
    }
  }
  else if (bVar13 == 3) {
    if ((byte)param_2[5] == 3) {
      bVar13 = (byte)*param_2;
      if (bVar12 == 2) {
        if (bVar13 == 2) {
LAB_101f3b75c:
          uVar11 = 1;
          goto LAB_101f3b768;
        }
      }
      else if ((bVar13 != 2) && (((bVar12 ^ bVar13) & 1) == 0)) goto LAB_101f3b75c;
    }
  }
  else if ((((uVar2 == 0 && uVar1 == 0) && uVar8 == 0) && uVar3 == 0) && uVar7 == 0) {
    if ((byte)param_2[5] == 4) {
      uVar8 = param_2[4];
      uVar1 = param_2[3];
      bVar12 = (byte)param_2[1] | (byte)uVar1;
      bVar13 = *(byte *)((long)param_2 + 9) | (byte)(uVar1 >> 8);
      bVar14 = *(byte *)((long)param_2 + 10) | (byte)(uVar1 >> 0x10);
      bVar15 = *(byte *)((long)param_2 + 0xb) | (byte)(uVar1 >> 0x18);
      bVar16 = *(byte *)((long)param_2 + 0xc) | (byte)(uVar1 >> 0x20);
      bVar17 = *(byte *)((long)param_2 + 0xd) | (byte)(uVar1 >> 0x28);
      bVar18 = *(byte *)((long)param_2 + 0xe) | (byte)(uVar1 >> 0x30);
      bVar19 = *(byte *)((long)param_2 + 0xf) | (byte)(uVar1 >> 0x38);
      bVar20 = (byte)param_2[2] | (byte)uVar8;
      bVar21 = *(byte *)((long)param_2 + 0x11) | (byte)(uVar8 >> 8);
      bVar22 = *(byte *)((long)param_2 + 0x12) | (byte)(uVar8 >> 0x10);
      bVar23 = *(byte *)((long)param_2 + 0x13) | (byte)(uVar8 >> 0x18);
      bVar24 = *(byte *)((long)param_2 + 0x14) | (byte)(uVar8 >> 0x20);
      bVar25 = *(byte *)((long)param_2 + 0x15) | (byte)(uVar8 >> 0x28);
      bVar26 = *(byte *)((long)param_2 + 0x16) | (byte)(uVar8 >> 0x30);
      bVar27 = *(byte *)((long)param_2 + 0x17) | (byte)(uVar8 >> 0x38);
      auVar28[1] = bVar13;
      auVar28[0] = bVar12;
      auVar28[2] = bVar14;
      auVar28[3] = bVar15;
      auVar28[4] = bVar16;
      auVar28[5] = bVar17;
      auVar28[6] = bVar18;
      auVar28[7] = bVar19;
      auVar28[8] = bVar20;
      auVar28[9] = bVar21;
      auVar28[10] = bVar22;
      auVar28[0xb] = bVar23;
      auVar28[0xc] = bVar24;
      auVar28[0xd] = bVar25;
      auVar28[0xe] = bVar26;
      auVar28[0xf] = bVar27;
      auVar6[1] = bVar13;
      auVar6[0] = bVar12;
      auVar6[2] = bVar14;
      auVar6[3] = bVar15;
      auVar6[4] = bVar16;
      auVar6[5] = bVar17;
      auVar6[6] = bVar18;
      auVar6[7] = bVar19;
      auVar6[8] = bVar20;
      auVar6[9] = bVar21;
      auVar6[10] = bVar22;
      auVar6[0xb] = bVar23;
      auVar6[0xc] = bVar24;
      auVar6[0xd] = bVar25;
      auVar6[0xe] = bVar26;
      auVar6[0xf] = bVar27;
      auVar28 = NEON_ext(auVar28,auVar6,8,1);
      if (CONCAT17(bVar19 | auVar28[7],
                   CONCAT16(bVar18 | auVar28[6],
                            CONCAT15(bVar17 | auVar28[5],
                                     CONCAT14(bVar16 | auVar28[4],
                                              CONCAT13(bVar15 | auVar28[3],
                                                       CONCAT12(bVar14 | auVar28[2],
                                                                CONCAT11(bVar13 | auVar28[1],
                                                                         bVar12 | auVar28[0])))))))
          == 0 && *param_2 == 0) goto LAB_101f3b75c;
    }
  }
  else if (uVar7 == 1 && (((uVar2 == 0 && uVar1 == 0) && uVar8 == 0) && uVar3 == 0)) {
    if (((byte)param_2[5] == 4) && (*param_2 == 1)) goto LAB_101f3b740;
  }
  else if (uVar7 == 2 && (((uVar2 == 0 && uVar1 == 0) && uVar8 == 0) && uVar3 == 0)) {
    if (((byte)param_2[5] == 4) && (*param_2 == 2)) goto LAB_101f3b740;
  }
  else if (((byte)param_2[5] == 4) && (*param_2 == 3)) {
LAB_101f3b740:
    uVar8 = param_2[4];
    uVar1 = param_2[3];
    bVar12 = (byte)param_2[1] | (byte)uVar1;
    bVar13 = *(byte *)((long)param_2 + 9) | (byte)(uVar1 >> 8);
    bVar14 = *(byte *)((long)param_2 + 10) | (byte)(uVar1 >> 0x10);
    bVar15 = *(byte *)((long)param_2 + 0xb) | (byte)(uVar1 >> 0x18);
    bVar16 = *(byte *)((long)param_2 + 0xc) | (byte)(uVar1 >> 0x20);
    bVar17 = *(byte *)((long)param_2 + 0xd) | (byte)(uVar1 >> 0x28);
    bVar18 = *(byte *)((long)param_2 + 0xe) | (byte)(uVar1 >> 0x30);
    bVar19 = *(byte *)((long)param_2 + 0xf) | (byte)(uVar1 >> 0x38);
    bVar20 = (byte)param_2[2] | (byte)uVar8;
    bVar21 = *(byte *)((long)param_2 + 0x11) | (byte)(uVar8 >> 8);
    bVar22 = *(byte *)((long)param_2 + 0x12) | (byte)(uVar8 >> 0x10);
    bVar23 = *(byte *)((long)param_2 + 0x13) | (byte)(uVar8 >> 0x18);
    bVar24 = *(byte *)((long)param_2 + 0x14) | (byte)(uVar8 >> 0x20);
    bVar25 = *(byte *)((long)param_2 + 0x15) | (byte)(uVar8 >> 0x28);
    bVar26 = *(byte *)((long)param_2 + 0x16) | (byte)(uVar8 >> 0x30);
    bVar27 = *(byte *)((long)param_2 + 0x17) | (byte)(uVar8 >> 0x38);
    auVar4[1] = bVar13;
    auVar4[0] = bVar12;
    auVar4[2] = bVar14;
    auVar4[3] = bVar15;
    auVar4[4] = bVar16;
    auVar4[5] = bVar17;
    auVar4[6] = bVar18;
    auVar4[7] = bVar19;
    auVar4[8] = bVar20;
    auVar4[9] = bVar21;
    auVar4[10] = bVar22;
    auVar4[0xb] = bVar23;
    auVar4[0xc] = bVar24;
    auVar4[0xd] = bVar25;
    auVar4[0xe] = bVar26;
    auVar4[0xf] = bVar27;
    auVar5[1] = bVar13;
    auVar5[0] = bVar12;
    auVar5[2] = bVar14;
    auVar5[3] = bVar15;
    auVar5[4] = bVar16;
    auVar5[5] = bVar17;
    auVar5[6] = bVar18;
    auVar5[7] = bVar19;
    auVar5[8] = bVar20;
    auVar5[9] = bVar21;
    auVar5[10] = bVar22;
    auVar5[0xb] = bVar23;
    auVar5[0xc] = bVar24;
    auVar5[0xd] = bVar25;
    auVar5[0xe] = bVar26;
    auVar5[0xf] = bVar27;
    auVar28 = NEON_ext(auVar4,auVar5,8,1);
    if (CONCAT17(bVar19 | auVar28[7],
                 CONCAT16(bVar18 | auVar28[6],
                          CONCAT15(bVar17 | auVar28[5],
                                   CONCAT14(bVar16 | auVar28[4],
                                            CONCAT13(bVar15 | auVar28[3],
                                                     CONCAT12(bVar14 | auVar28[2],
                                                              CONCAT11(bVar13 | auVar28[1],
                                                                       bVar12 | auVar28[0]))))))) ==
        0) goto LAB_101f3b75c;
  }
  uVar11 = 0;
LAB_101f3b768:
  return (ulong)(uVar11 & 1);
}



/* Entry: 101f3b780; end: 101f3b797;  */

/* WARNING: Possible PIC construction at 0x000101b69b44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b69b48) */

undefined8 FUN_101f3b780(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  if ((*(char *)(param_1 + 5) != '\x01') && (*(char *)(param_1 + 5) != '\0')) {
    return *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1,uVar1,param_1[2],param_1[3],param_1[4]);
  return uVar1;
}



/* Entry: 101f3b798; end: 101f3b893;  */

undefined8 * FUN_101f3b798(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar6 = param_2[4];
  uVar5 = *(undefined1 *)(param_2 + 5);
  FUN_101b699f8(uVar1,uVar3,uVar2,uVar4,uVar6,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[4] = uVar6;
  *(undefined1 *)(param_1 + 5) = uVar5;
  return param_1;
}



/* Entry: 101f3b894; end: 101f3b8e3;  */

undefined8 * FUN_101f3b894(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar8 = param_2[4];
  uVar5 = *(undefined1 *)(param_2 + 5);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  param_1[4] = uVar8;
  uVar6 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar5;
  FUN_101b69b20(uVar7,uVar1,uVar3,uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 101f3b8e4; end: 101f3b9cb;  */

int FUN_101f3b8e4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfb < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0xfc;
  }
  uVar1 = *(byte *)(param_1 + 10) ^ 0xff;
  if (*(byte *)(param_1 + 10) < 5) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101f3b9cc; end: 101f3ba37;  */

/* WARNING: Possible PIC construction at 0x000101f3b9e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f3b9e4) */

void FUN_101f3b9cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101f3ba38; end: 101f3baab;  */

undefined8 * FUN_101f3ba38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101f3baac; end: 101f3baf7;  */

undefined8 * FUN_101f3baac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 101f3baf8; end: 101f3bd4b;  */

int FUN_101f3baf8(int *param_1,int param_2)

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



/* Entry: 101f3bd4c; end: 101f3bdeb;  */

void FUN_101f3bd4c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f3bdec; end: 101f3bdef;  */

void FUN_101f3bdec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42360 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da326a8;
  func_0x000107c61520(&UNK_10da326a8,&UNK_1104a37c0);
  puRam0000000112e42360 = puVar1;
  return;
}



/* Entry: 101f3bdf0; end: 101f3be2f;  */

void FUN_101f3bdf0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42360 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da326a8;
  func_0x000107c61520(&UNK_10da326a8,&UNK_1104a37c0);
  puRam0000000112e42360 = puVar1;
  return;
}



/* Entry: 101f3be30; end: 101f3c0ef;  */

void FUN_101f3be30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101f3c0f0; end: 101f3c18f;  */

void FUN_101f3c0f0(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f3c190; end: 101f3c19b;  */

undefined1  [16] FUN_101f3c190(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe200000000000000;
  auVar1._0_8_ = 0x6469;
  return auVar1;
}



/* Entry: 101f3c19c; end: 101f3c217;  */

void FUN_101f3c19c(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  if (param_2 == 0x6469 && param_3 == -0x1e00000000000000) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    bVar1 = 0x69;
    func_0x000107c605b8(0x6469,0xe200000000000000,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 101f3c218; end: 101f3c22f;  */

undefined1  [16] FUN_101f3c218(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f3c230; end: 101f3c27f;  */

void FUN_101f3c230(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101f3c280();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f3c280; end: 101f3c2bf;  */

void FUN_101f3c280(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42370 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da32888;
  func_0x000107c61520(&UNK_10da32888,&UNK_1104a39e8);
  puRam0000000112e42370 = puVar1;
  return;
}



/* Entry: 101f3c2c0; end: 101f3c2db;  */

undefined1  [16] FUN_101f3c2c0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c870;
  auVar1._0_8_ = 0xd00000000000001a;
  return auVar1;
}



/* Entry: 101f3c2dc; end: 101f3c2ff;  */

void FUN_101f3c2dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f3c300();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f3c300; end: 101f3c33f;  */

void FUN_101f3c300(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42378 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3276c;
  func_0x000107c61520(&UNK_10da3276c,&UNK_1104a3950);
  puRam0000000112e42378 = puVar1;
  return;
}



/* Entry: 101f3c340; end: 101f3c36f;  */

long FUN_101f3c340(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != *param_2 || param_1[1] != param_2[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 101f3c370; end: 101f3c497;  */

/* WARNING: Removing unreachable block (ram,0x000101f3c434) */

void FUN_101f3c370(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  
  lVar3 = 0x112e42368;
  func_0x0001000285a8(0x112e42368,&UNK_10da32720);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_101f3c280();
  puVar5 = &UNK_1104a39e8;
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_1104a39e8,&UNK_1104a39e8,lVar4,
                      uVar1,uVar2);
  if (unaff_x21 == 0) {
    lVar4 = lVar3;
    func_0x000107c604f4();
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
    *param_1 = puVar5;
    param_1[1] = lVar4;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 101f3c498; end: 101f3c49f;  */

void FUN_101f3c498(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101f3c4a0; end: 101f3c50f;  */

undefined8 * FUN_101f3c4a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101f3c510; end: 101f3c693;  */

int FUN_101f3c510(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101f3c694; end: 101f3c6d3;  */

void FUN_101f3c694(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42380 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da32860;
  func_0x000107c61520(&UNK_10da32860,&UNK_1104a39e8);
  puRam0000000112e42380 = puVar1;
  return;
}



/* Entry: 101f3c6d4; end: 101f3c6d7;  */

void FUN_101f3c6d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42388 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da327f8;
  func_0x000107c61520(&UNK_10da327f8,&UNK_1104a39e8);
  puRam0000000112e42388 = puVar1;
  return;
}



/* Entry: 101f3c6d8; end: 101f3c717;  */

void FUN_101f3c6d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42388 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da327f8;
  func_0x000107c61520(&UNK_10da327f8,&UNK_1104a39e8);
  puRam0000000112e42388 = puVar1;
  return;
}



/* Entry: 101f3c718; end: 101f3c71b;  */

void FUN_101f3c718(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42390 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da327d0;
  func_0x000107c61520(&UNK_10da327d0,&UNK_1104a39e8);
  puRam0000000112e42390 = puVar1;
  return;
}



/* Entry: 101f3c71c; end: 101f3c75b;  */

void FUN_101f3c71c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42390 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da327d0;
  func_0x000107c61520(&UNK_10da327d0,&UNK_1104a39e8);
  puRam0000000112e42390 = puVar1;
  return;
}


