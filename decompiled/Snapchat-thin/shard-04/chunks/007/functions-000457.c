/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1037b12fc; end: 1037b1357;  */

long FUN_1037b12fc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1037b1358; end: 1037b142f;  */

undefined8 * FUN_1037b1358(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar2 = param_2[4];
  param_1[4] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 1037b1430; end: 1037b1483;  */

undefined8 * FUN_1037b1430(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1037b1484; end: 1037b1523;  */

int FUN_1037b1484(int *param_1,int param_2)

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



/* Entry: 1037b1524; end: 1037b1563;  */

void FUN_1037b1524(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93aa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0c83c;
  func_0x000107c61520(&UNK_10dc0c83c,&UNK_1106944b8);
  puRam0000000112f93aa8 = puVar1;
  return;
}



/* Entry: 1037b1564; end: 1037b16cb;  */

int FUN_1037b1564(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1037b15e0;
        goto LAB_1037b15c4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1037b15c4:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1037b15e0:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1037b16cc; end: 1037b170b;  */

void FUN_1037b16cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93ab0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0c814;
  func_0x000107c61520(&UNK_10dc0c814,&UNK_1106944b8);
  puRam0000000112f93ab0 = puVar1;
  return;
}



/* Entry: 1037b170c; end: 1037b170f;  */

void FUN_1037b170c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93ab8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0c7ac;
  func_0x000107c61520(&UNK_10dc0c7ac,&UNK_1106944b8);
  puRam0000000112f93ab8 = puVar1;
  return;
}



/* Entry: 1037b1710; end: 1037b174f;  */

void FUN_1037b1710(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93ab8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0c7ac;
  func_0x000107c61520(&UNK_10dc0c7ac,&UNK_1106944b8);
  puRam0000000112f93ab8 = puVar1;
  return;
}



/* Entry: 1037b1750; end: 1037b1753;  */

void FUN_1037b1750(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93ac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0c784;
  func_0x000107c61520(&UNK_10dc0c784,&UNK_1106944b8);
  puRam0000000112f93ac0 = puVar1;
  return;
}



/* Entry: 1037b1754; end: 1037b1793;  */

void FUN_1037b1754(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93ac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0c784;
  func_0x000107c61520(&UNK_10dc0c784,&UNK_1106944b8);
  puRam0000000112f93ac0 = puVar1;
  return;
}



/* Entry: 1037b1794; end: 1037b18ef;  */

undefined4 FUN_1037b1794(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_1 != 0x68746170 || param_2 != -0x1c00000000000000) {
    uVar1 = 0;
    func_0x000107c605b8(0x68746170,0xe400000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0x6574497972657571;
      if (((param_1 != 0x6574497972657571) || (param_2 != -0x15ffffffffff8c93)) &&
         (func_0x000107c605b8(0x6574497972657571,0xea0000000000736d,param_1,param_2,0),
         (uVar1 & 1) == 0)) {
        if ((param_1 == 0x68736168) && (param_2 == -0x1c00000000000000)) {
          func_0x000107c6142c(0xe400000000000000);
          return 2;
        }
        uVar1 = 0;
        func_0x000107c605b8(0x68736168,0xe400000000000000,param_1,param_2,0);
        func_0x000107c6142c(param_2);
        if ((uVar1 & 1) != 0) {
          return 2;
        }
        return 3;
      }
      func_0x000107c6142c(param_2);
      return 1;
    }
  }
  func_0x000107c6142c(param_2);
  return 0;
}



/* Entry: 1037b18f0; end: 1037b1a47;  */

undefined8 * FUN_1037b18f0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  lVar1 = param_2[3];
  func_0x000107c61434();
  if (lVar1 == 0) {
    uVar2 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
  }
  else {
    param_1[2] = param_2[2];
    param_1[3] = lVar1;
    uVar2 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar2;
    func_0x000107c61434(lVar1);
    func_0x000107c61434(uVar2);
  }
  return param_1;
}



/* Entry: 1037b1a48; end: 1037b1aeb;  */

long FUN_1037b1a48(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  return param_1;
}



/* Entry: 1037b1aec; end: 1037b1bb7;  */

int FUN_1037b1aec(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1037b1bb8; end: 1037b1c1b;  */

/* WARNING: Possible PIC construction at 0x0001037b1bcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037b1bd0) */

void FUN_1037b1bb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1037b1c1c; end: 1037b1c87;  */

undefined8 * FUN_1037b1c1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1037b1c88; end: 1037b1ccb;  */

undefined8 * FUN_1037b1c88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1037b1ccc; end: 1037b1d63;  */

int FUN_1037b1ccc(int *param_1,int param_2)

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



/* Entry: 1037b1d64; end: 1037b1e93;  */

void FUN_1037b1d64(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_80 [15];
  undefined1 uStack_71;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = 0x112f93ae0;
  func_0x0001000285a8(0x112f93ae0,&UNK_10dc0c960);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar3);
  FUN_1037b2548();
  func_0x000107c606ec(auStack_80 + -extraout_x8,&UNK_110694778,&UNK_110694778,param_1,uVar3,uVar1);
  uVar3 = *unaff_x20;
  uStack_70 = uStack_70 & 0xffffffffffffff00;
  func_0x000107c60520(uVar3,unaff_x20[1],&uStack_70,lVar2);
  if (unaff_x21 == 0) {
    uStack_68 = unaff_x20[3];
    uStack_70 = unaff_x20[2];
    uStack_58 = unaff_x20[5];
    uStack_60 = unaff_x20[4];
    uStack_71 = 1;
    func_0x0001037b25c8();
    func_0x000107c60530(&uStack_70,&uStack_71,lVar2,&UNK_110694650,uVar3);
  }
  (**(code **)(lVar4 + 8))(auStack_80 + -extraout_x8,lVar2);
  return;
}



/* Entry: 1037b1e94; end: 1037b1fd3;  */

void FUN_1037b1e94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112f93b00;
  uStack_70 = param_4;
  uStack_68 = param_5;
  func_0x0001000285a8(0x112f93b00,&UNK_10dc0c970);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&uStack_70 - extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_1037b2790();
  func_0x000107c606ec(lVar5,&UNK_1106946e8,&UNK_1106946e8,param_1,uVar1,uVar2);
  uStack_51 = 0;
  func_0x000107c6053c(param_2,param_3,&uStack_51,lVar3);
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    func_0x000107c6053c(uStack_70,uStack_68,&uStack_52,lVar3);
    (**(code **)(lVar4 + 8))(lVar5,lVar3);
  }
  else {
    (**(code **)(lVar4 + 8))(lVar5,lVar3);
  }
  return;
}



/* Entry: 1037b1fd4; end: 1037b2007;  */

undefined1  [16] FUN_1037b1fd4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x6567617373656d;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6c7275;
  }
  uVar2 = 0xe700000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe300000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 1037b2008; end: 1037b20df;  */

void FUN_1037b2008(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x6c7275 || param_3 != -0x1d00000000000000) {
    uVar1 = 0x6c7275;
    func_0x000107c605b8(0x6c7275,0xe300000000000000,param_2,param_3,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0x6567617373656d;
      if ((param_2 == 0x6567617373656d) && (param_3 == -0x1900000000000000)) {
        func_0x000107c6142c(0xe700000000000000);
        uVar2 = 1;
      }
      else {
        func_0x000107c605b8(0x6567617373656d,0xe700000000000000,param_2,param_3,0);
        func_0x000107c6142c(param_3);
        uVar2 = 1;
        if ((uVar1 & 1) == 0) {
          uVar2 = 2;
        }
      }
      goto LAB_1037b2068;
    }
  }
  func_0x000107c6142c(param_3);
  uVar2 = 0;
LAB_1037b2068:
  *param_1 = uVar2;
  return;
}



/* Entry: 1037b20e0; end: 1037b20eb;  */

undefined1  [16] FUN_1037b20e0(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1037b20ec; end: 1037b213b;  */

void FUN_1037b20ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1037b2548();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1037b213c; end: 1037b217b;  */

void FUN_1037b213c(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1037b23b4(&uStack_50);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[3] = uStack_38;
    param_1[2] = uStack_40;
    param_1[5] = uStack_28;
    param_1[4] = uStack_30;
  }
  return;
}



/* Entry: 1037b217c; end: 1037b218f;  */

void FUN_1037b217c(void)

{
  FUN_1037b1d64();
  return;
}



/* Entry: 1037b2190; end: 1037b2213;  */

void FUN_1037b2190(void)

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



/* Entry: 1037b2214; end: 1037b2237;  */

undefined4 FUN_1037b2214(void)

{
  undefined4 uVar1;
  char *unaff_x20;
  
  uVar1 = 0x61746164;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x656d616e;
  }
  return uVar1;
}



/* Entry: 1037b2238; end: 1037b230f;  */

void FUN_1037b2238(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x656d616e || param_3 != -0x1c00000000000000) {
    uVar1 = 0;
    func_0x000107c605b8(0x656d616e,0xe400000000000000,param_2,param_3,0);
    if ((uVar1 & 1) == 0) {
      if ((param_2 == 0x61746164) && (param_3 == -0x1c00000000000000)) {
        func_0x000107c6142c(0xe400000000000000);
        uVar2 = 1;
      }
      else {
        uVar1 = 0;
        func_0x000107c605b8(0x61746164,0xe400000000000000,param_2,param_3,0);
        func_0x000107c6142c(param_3);
        uVar2 = 1;
        if ((uVar1 & 1) == 0) {
          uVar2 = 2;
        }
      }
      goto LAB_1037b2298;
    }
  }
  func_0x000107c6142c(param_3);
  uVar2 = 0;
LAB_1037b2298:
  *param_1 = uVar2;
  return;
}



/* Entry: 1037b2310; end: 1037b231b;  */

undefined1  [16] FUN_1037b2310(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1037b231c; end: 1037b236b;  */

void FUN_1037b231c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1037b2790();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1037b236c; end: 1037b2397;  */

void FUN_1037b236c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_1037b2608();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Entry: 1037b2398; end: 1037b23b3;  */

void FUN_1037b2398(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1037b1e94(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Entry: 1037b23b4; end: 1037b2547;  */

/* WARNING: Removing unreachable block (ram,0x0001037b2514) */
/* WARNING: Removing unreachable block (ram,0x0001037b2484) */

void FUN_1037b23b4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_51;
  
  lVar3 = 0x112f93ac8;
  func_0x0001000285a8(0x112f93ac8,&UNK_10dc0c958);
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_1037b2548();
  func_0x000107c606e0((long)&uStack_a0 - extraout_x8,&UNK_110694778,&UNK_110694778,lVar4,uVar1,uVar2
                     );
  if (unaff_x21 == 0) {
    uStack_80 = 0;
    puVar5 = &uStack_80;
    lVar4 = lVar3;
    func_0x000107c604d4();
    uStack_51 = 1;
    puVar6 = puVar5;
    func_0x0001037b2588();
    func_0x000107c604e8(&uStack_80,&UNK_110694650,&uStack_51,lVar3,&UNK_110694650,puVar6);
    (**(code **)(lVar7 + 8))((long)&uStack_a0 - extraout_x8,lVar3);
    uStack_90 = CONCAT71(uStack_7f,uStack_80);
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    uStack_88 = uStack_78;
    func_0x0001000834e4(param_2);
    *param_1 = puVar5;
    param_1[1] = lVar4;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
    param_1[5] = uStack_98;
    param_1[4] = uStack_a0;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 1037b2548; end: 1037b2607;  */

void FUN_1037b2548(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93ad0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0cb44;
  func_0x000107c61520(&UNK_10dc0cb44,&UNK_110694778);
  puRam0000000112f93ad0 = puVar1;
  return;
}



/* Entry: 1037b2608; end: 1037b278f;  */

/* WARNING: Removing unreachable block (ram,0x0001037b2748) */
/* WARNING: Removing unreachable block (ram,0x0001037b26d0) */

undefined1 * FUN_1037b2608(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar2 = 0x112f93af0;
  func_0x0001000285a8(0x112f93af0,&UNK_10dc0c968);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puVar4 = *(undefined1 **)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_1037b2790();
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_1106946e8,&UNK_1106946e8,lVar3,
                      uVar1,puVar4);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar4 = &uStack_51;
    func_0x000107c604f4(puVar4,lVar2);
    uStack_52 = 1;
    func_0x000107c604f4(&uStack_52,lVar2);
    (**(code **)(lVar5 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar2);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return puVar4;
}



/* Entry: 1037b2790; end: 1037b27cf;  */

void FUN_1037b2790(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93af8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0caf4;
  func_0x000107c61520(&UNK_10dc0caf4,&UNK_1106946e8);
  puRam0000000112f93af8 = puVar1;
  return;
}



/* Entry: 1037b27d0; end: 1037b293b;  */

void FUN_1037b27d0(void)

{
  return;
}



/* Entry: 1037b293c; end: 1037b297b;  */

void FUN_1037b293c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93b08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0ca14;
  func_0x000107c61520(&UNK_10dc0ca14,&UNK_110694778);
  puRam0000000112f93b08 = puVar1;
  return;
}



/* Entry: 1037b297c; end: 1037b297f;  */

void FUN_1037b297c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93b10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0cacc;
  func_0x000107c61520(&UNK_10dc0cacc,&UNK_1106946e8);
  puRam0000000112f93b10 = puVar1;
  return;
}



/* Entry: 1037b2980; end: 1037b29bf;  */

void FUN_1037b2980(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93b10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0cacc;
  func_0x000107c61520(&UNK_10dc0cacc,&UNK_1106946e8);
  puRam0000000112f93b10 = puVar1;
  return;
}



/* Entry: 1037b29c0; end: 1037b29c3;  */

void FUN_1037b29c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93b18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0ca64;
  func_0x000107c61520(&UNK_10dc0ca64,&UNK_1106946e8);
  puRam0000000112f93b18 = puVar1;
  return;
}



/* Entry: 1037b29c4; end: 1037b2a03;  */

void FUN_1037b29c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93b18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0ca64;
  func_0x000107c61520(&UNK_10dc0ca64,&UNK_1106946e8);
  puRam0000000112f93b18 = puVar1;
  return;
}



/* Entry: 1037b2a04; end: 1037b2a07;  */

void FUN_1037b2a04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93b20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0ca3c;
  func_0x000107c61520(&UNK_10dc0ca3c,&UNK_1106946e8);
  puRam0000000112f93b20 = puVar1;
  return;
}



/* Entry: 1037b2a08; end: 1037b2a47;  */

void FUN_1037b2a08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93b20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0ca3c;
  func_0x000107c61520(&UNK_10dc0ca3c,&UNK_1106946e8);
  puRam0000000112f93b20 = puVar1;
  return;
}



/* Entry: 1037b2a48; end: 1037b2a4b;  */

void FUN_1037b2a48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93b28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0c9ac;
  func_0x000107c61520(&UNK_10dc0c9ac,&UNK_110694778);
  puRam0000000112f93b28 = puVar1;
  return;
}



/* Entry: 1037b2a4c; end: 1037b2a8b;  */

void FUN_1037b2a4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93b28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0c9ac;
  func_0x000107c61520(&UNK_10dc0c9ac,&UNK_110694778);
  puRam0000000112f93b28 = puVar1;
  return;
}



/* Entry: 1037b2a8c; end: 1037b2a8f;  */

void FUN_1037b2a8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93b30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0c984;
  func_0x000107c61520(&UNK_10dc0c984,&UNK_110694778);
  puRam0000000112f93b30 = puVar1;
  return;
}



/* Entry: 1037b2a90; end: 1037b2acf;  */

void FUN_1037b2a90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93b30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0c984;
  func_0x000107c61520(&UNK_10dc0c984,&UNK_110694778);
  puRam0000000112f93b30 = puVar1;
  return;
}



/* Entry: 1037b2ad0; end: 1037b2b1f;  */

undefined1 FUN_1037b2ad0(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 1037b2b20; end: 1037b2b2b; -[_TtC23PopupBridgeScriptPlugin23PopupBridgeScriptPlugin name] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b2b20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f93b38);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f93b38))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037b2b2c; end: 1037b2b37; -[_TtC23PopupBridgeScriptPlugin23PopupBridgeScriptPlugin scriptString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b2b2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f93b40);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f93b40))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037b2b38; end: 1037b2b7f;  */

void FUN_1037b2b38(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037b2b80; end: 1037b2b8f; -[_TtC23PopupBridgeScriptPlugin23PopupBridgeScriptPlugin injectionTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037b2b80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f93b48);
}



/* Entry: 1037b2b90; end: 1037b2bd7; -[_TtC23PopupBridgeScriptPlugin23PopupBridgeScriptPlugin callbackNames] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b2b90(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f93b50);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037b2bd8; end: 1037b2bdf; -[_TtC23PopupBridgeScriptPlugin23PopupBridgeScriptPlugin forMainFrameOnly] */

undefined8 FUN_1037b2bd8(void)

{
  return 0;
}



/* Entry: 1037b2be0; end: 1037b2caf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b2be0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f93b38);
  *puVar1 = 0x72625f7075706f70;
  puVar1[1] = 0xec00000065676469;
  *(undefined8 *)(unaff_x20 + _DAT_112f93b48) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f93b58) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f93b60) = 0;
  FUN_1037b345c();
  plVar2 = (long *)(unaff_x20 + _DAT_112f93b40);
  *plVar2 = lVar3;
  plVar2[1] = param_2;
  uVar4 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  *(undefined8 *)(unaff_x20 + _DAT_112f93b50) = uVar4;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037b2cb0; end: 1037b2ccf; -[_TtC23PopupBridgeScriptPlugin23PopupBridgeScriptPlugin init] */

void FUN_1037b2cb0(void)

{
  FUN_1037b2be0();
  return;
}



/* Entry: 1037b2cd0; end: 1037b2e6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b2cd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  puVar1 = &UNK_110694858;
  func_0x000107c613fc(&UNK_110694858,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_110694880;
  func_0x000107c613fc(&UNK_110694880,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  puVar3 = PTR__OBJC_CLASS___ASWebAuthenticationSession_1126b1c78;
  func_0x000107c610f8();
  func_0x000107c6157c(puVar1);
  func_0x000107c61174(param_2);
  func_0x000107c5ed90();
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f166a10);
  pcStack_60 = FUN_1037b4594;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100de9b20;
  puStack_68 = &UNK_110694898;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c48fc8();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  puVar2 = puStack_58;
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f93b60);
  *(undefined **)(unaff_x20 + _DAT_112f93b60) = puVar3;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c5771c(puVar3);
    func_0x000107c5ba38(puVar3);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 1037b2e6c; end: 1037b3087; -[_TtC23PopupBridgeScriptPlugin23PopupBridgeScriptPlugin userContentController:didReceive:webView:] */

/* WARNING: Possible PIC construction at 0x0001037b2ecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037b2edc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037b2ed0) */
/* WARNING: Removing unreachable block (ram,0x0001037b2ee0) */

void FUN_1037b2e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_1037b3718(param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1037b3088; end: 1037b30bb;  */

void FUN_1037b3088(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037b30bc; end: 1037b311b; -[_TtC23PopupBridgeScriptPlugin23PopupBridgeScriptPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b30bc(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f93b38 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f93b40 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f93b50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f93b60));
  return;
}



/* Entry: 1037b311c; end: 1037b322f;  */

ulong FUN_1037b311c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((param_1 & 0xc000000000000001) == 0) {
    uVar3 = param_1 + 0x38;
    func_0x000107c60268(uVar3,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    uVar5 = 0;
    param_2 = (ulong)*(uint *)(param_1 + 0x24);
    if (uVar3 != 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) goto LAB_1037b31ec;
  }
  else {
    uVar1 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar1 = param_1;
    }
    uVar3 = uVar1;
    func_0x000107c60284();
    uVar4 = param_2;
    func_0x000107c602b4(uVar1);
    uVar2 = uVar3;
    func_0x000107c60290(uVar3,param_2,uVar1,uVar4);
    uVar5 = 1;
    FUN_1037b4510(uVar1,uVar4,1);
    if ((uVar2 & 1) == 0) {
LAB_1037b31ec:
      uVar1 = uVar3;
      FUN_1037b3244(uVar3,param_2,uVar5,param_1);
      FUN_1037b4510(uVar3,param_2,uVar5);
      return uVar1;
    }
  }
  FUN_1037b4510(uVar3,param_2,uVar5);
  return 0;
}



/* Entry: 1037b3230; end: 1037b3243; -[_TtC23PopupBridgeScriptPlugin23PopupBridgeScriptPlugin presentationAnchorForWebAuthenticationSession:] */

void FUN_1037b3230(void)

{
  func_0x0001037b42dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037b3244; end: 1037b345b;  */

/* WARNING: Possible PIC construction at 0x0001037b33a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037b33a8) */
/* WARNING: Removing unreachable block (ram,0x0001037b3420) */
/* WARNING: Removing unreachable block (ram,0x0001037b33c8) */

undefined8 FUN_1037b3244(ulong param_1,undefined8 param_2,char param_3,ulong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uStack_60;
  undefined8 uStack_58;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_3 == '\x01') {
      uVar3 = param_4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_4) {
        uVar3 = param_4;
      }
      func_0x000107c602a4(param_1,param_2,uVar3);
      uVar2 = 0;
      uStack_60 = param_1;
      FUN_1037b45b8(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
      func_0x000107c6147c(&uStack_58,&uStack_60,PTR___syXlN_11034f1a0 + 8,uVar2,7);
      return uStack_58;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1037b345c);
    (*pcVar1)();
  }
  if (param_3 == '\x01') {
    uVar2 = 0;
    FUN_1037b45b8(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    uVar3 = param_1;
    func_0x000107c60294(param_1,param_2);
    if ((int)uVar3 != *(int *)(param_4 + 0x24)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1037b3450);
      (*pcVar1)();
    }
    func_0x000107c60298(param_1,param_2);
    uStack_60 = param_1;
    func_0x000107c6147c(&uStack_58,&uStack_60,PTR___syXlN_11034f1a0 + 8,uVar2,7);
    uVar3 = *(ulong *)(param_4 + 0x28);
    func_0x000107c60114();
    uVar3 = uVar3 & (-1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f) ^ 0xffffffffffffffffU);
    if ((*(ulong *)(param_4 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) == 0) {
      func_0x000107c61170(uStack_58);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1037b33ec);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(*(long *)(param_4 + 0x30) + uVar3 * 8);
  }
  else {
    if (param_1 >> ((ulong)*(byte *)(param_4 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1037b3454);
      (*pcVar1)();
    }
    if ((*(ulong *)(param_4 + (param_1 >> 3 & 0xffffffffffffff8) + 0x38) >> (param_1 & 0x3f) & 1) ==
        0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1037b3458);
      (*pcVar1)();
    }
    if (*(int *)(param_4 + 0x24) != (int)param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1037b3420);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return uVar2;
}



/* Entry: 1037b345c; end: 1037b3717;  */

undefined1  [16] FUN_1037b345c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&uStack_50 - extraout_x8;
  lVar6 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edd0(lVar9,0x2f2f3a6f6d6e6576,0xe800000000000000);
  lVar5 = lVar9;
  (**(code **)(lVar12 + 0x30))(lVar9,1,lVar6);
  if ((int)lVar5 == 1) {
    func_0x0001037b45f8(lVar9,0x112d36580,&UNK_10d9016d0);
    puVar10 = (undefined *)0x0;
  }
  else {
    (**(code **)(lVar12 + 0x20))(lVar11,lVar9,lVar6);
    puVar7 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168();
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar8 = puVar7;
    func_0x000107c5ed90();
    puVar10 = puVar7;
    func_0x000107c3f3f4();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar8);
    (**(code **)(lVar12 + 8))(lVar11,lVar6);
  }
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x29e);
  func_0x000107c5fb78(0xd0000000000000a8,0x800000010f166b90);
  func_0x000107c5fb78(0xd000000000000014,0x800000010f166a10);
  func_0x000107c5fb78(0x2f2f3a,0xe300000000000000);
  func_0x000107c5fb78(0x6972627075706f70,0xed00003176656764);
  func_0x000107c5fb78(0xd000000000000036,0x800000010f166c40);
  bVar4 = ((ulong)puVar10 & 1) == 0;
  uVar1 = 0x65757274;
  if (bVar4) {
    uVar1 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar4) {
    uVar2 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c5fb78(0xd00000000000005c,0x800000010f166c80);
  func_0x000107c5fb78(0xd000000000000012,0x800000010f166a30);
  func_0x000107c5fb78(0xd0000000000000b6,0x800000010f166ce0);
  func_0x000107c5fb78(0xd000000000000012,0x800000010f166a30);
  func_0x000107c5fb78(0xd0000000000000a1,0x800000010f166da0);
  auVar3._8_8_ = uStack_48;
  auVar3._0_8_ = uStack_50;
  return auVar3;
}



/* Entry: 1037b3718; end: 1037b44ef;  */

/* WARNING: Removing unreachable block (ram,0x0001037b390c) */
/* WARNING: Removing unreachable block (ram,0x0001037b412c) */

undefined1  [16] FUN_1037b3718(undefined *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  uint uVar14;
  ulong uVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar16;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong uVar17;
  long lVar18;
  undefined *unaff_x20;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined *puVar22;
  long lVar23;
  undefined *puVar24;
  undefined *puVar25;
  long lVar26;
  undefined *puVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  undefined *puVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined auStack_1d0 [8];
  long alStack_1c8 [15];
  ulong auStack_150 [18];
  undefined auStack_c0 [8];
  undefined *puStack_b8;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar31 = (undefined *)0xd000000000000012;
  lVar29 = 0x112d36580;
  puVar27 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar29 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar22 = auStack_c0 + -extraout_x8;
  puVar4 = (undefined *)0x0;
  func_0x000107c5ede0();
  lVar29 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar29 + 0x40));
  puVar25 = puVar22 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar5 = param_1;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  puVar13 = puVar5;
  func_0x000107c5faec();
  puVar24 = puVar27;
  func_0x000107c61170(puVar5);
  if ((puVar13 == (undefined *)0xd000000000000012) && (puVar27 == (undefined *)0x800000010f166a30))
  {
    func_0x000107c6142c(0x800000010f166a30);
LAB_1037b3848:
    puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    func_0x000107c3eb80(param_1);
    func_0x000107c61180();
    puStack_98 = (undefined *)0x0;
    func_0x000107c41300();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
    puVar5 = puStack_98;
    func_0x000107c61174();
    if (puVar6 == (undefined *)0x0) {
      unaff_x20 = puVar5;
      func_0x000107c5ed30();
      func_0x000107c61170(puVar5);
      func_0x000107c61654();
      puVar6 = unaff_x20;
      func_0x000107c614ac(unaff_x20);
      param_1 = unaff_x20;
    }
    else {
      puVar13 = puVar6;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar6);
      uVar7 = 0;
      func_0x000107c5eb24();
      func_0x000107c613fc();
      func_0x000107c5eb20();
      uVar10 = uVar7;
      FUN_1037b4524();
      func_0x000107c5eb1c(&puStack_98,&UNK_1106945d0,puVar13,puVar24,&UNK_1106945d0,uVar10);
      func_0x000107c61574(uVar7);
      puVar5 = puStack_78;
      param_1 = puStack_88;
      puVar27 = puVar24;
      puVar31 = puStack_80;
      if (puStack_90 == (undefined *)0x0) {
        func_0x00010006c090(puVar13,puVar24);
        puVar6 = puStack_88;
        puVar24 = puStack_80;
        FUN_1037b4564(puStack_88,puStack_80,puStack_78,puStack_70);
        unaff_x20 = puStack_70;
      }
      else {
        puStack_b8 = puStack_98;
        FUN_1037b4564(puStack_88,puStack_80,puStack_78);
        func_0x000107c5edd0(puVar22,puStack_b8,puStack_90);
        func_0x000107c6142c(puStack_90);
        puVar6 = puVar22;
        (**(code **)(lVar29 + 0x30))(puVar22,1,puVar4);
        if ((int)puVar6 == 1) {
          func_0x00010006c090(puVar13,puVar24);
          puVar24 = (undefined *)0x112d36580;
          puVar6 = puVar22;
          func_0x0001037b45f8(puVar22,0x112d36580,&UNK_10d9016d0);
          unaff_x20 = puStack_90;
        }
        else {
          (**(code **)(lVar29 + 0x20))(puVar25,puVar22,puVar4);
          FUN_1037b2cd0(puVar25,param_2);
          func_0x00010006c090(puVar13,puVar24);
          puVar6 = puVar25;
          puVar24 = puVar4;
          (**(code **)(lVar29 + 8))(puVar25,puVar4);
        }
      }
    }
  }
  else {
    puVar5 = puVar13;
    puVar24 = puVar27;
    func_0x000107c605b8(puVar13,puVar27,0xd000000000000012,0x800000010f166a30,0);
    puVar6 = puVar27;
    func_0x000107c6142c(puVar27);
    if (((ulong)puVar5 & 1) != 0) goto LAB_1037b3848;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar32._8_8_ = puVar24;
    auVar32._0_8_ = puVar6;
    return auVar32;
  }
  func_0x000107c60e78();
  *(undefined **)(puVar25 + -0x60) = puVar31;
  *(long *)(puVar25 + -0x58) = lVar29;
  *(undefined **)(puVar25 + -0x50) = puVar13;
  *(undefined **)(puVar25 + -0x48) = puVar27;
  *(undefined **)(puVar25 + -0x40) = puVar25;
  *(undefined **)(puVar25 + -0x38) = puVar22;
  *(undefined **)(puVar25 + -0x30) = puVar4;
  *(undefined **)(puVar25 + -0x28) = param_1;
  *(undefined **)(puVar25 + -0x20) = unaff_x20;
  *(undefined **)(puVar25 + -0x18) = puVar5;
  *(undefined1 **)(puVar25 + -0x10) = &stack0xfffffffffffffff0;
  *(undefined8 *)(puVar25 + -8) = 0x1037b3a80;
  lVar29 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar29 + -8) + 0x40));
  *(undefined **)(puVar25 + -0xb0) =
       puVar25 + (-0x110 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar29 = 0;
  func_0x000107c5ebbc();
  *(long *)(puVar25 + -0xa8) = lVar29;
  lVar21 = *(long *)(lVar29 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  uVar28 = (long)(puVar25 + (-0x110 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0))) -
           (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar29 = 0x112d4b5b0;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar29 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = uVar28 - extraout_x8_03;
  lVar8 = 0;
  func_0x000107c5ec24();
  lVar23 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar23 + 0x40));
  lVar16 = lVar19 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  *(long *)(puVar25 + -0xa0) = lVar16;
  lVar29 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar29 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar16 - extraout_x8_05;
  lVar9 = 0;
  func_0x000107c5ede0();
  lVar18 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar26 = lVar16 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  func_0x000100029394(puVar6,lVar16);
  lVar29 = lVar16;
  (**(code **)(lVar18 + 0x30))(lVar16,1,lVar9);
  if ((int)lVar29 == 1) {
    func_0x0001037b45f8(lVar16,0x112d36580,&UNK_10d9016d0);
  }
  else {
    (**(code **)(lVar18 + 0x20))(lVar26,lVar16,lVar9);
    func_0x000107c5ebe4(lVar19,lVar26,0);
    lVar29 = lVar19;
    (**(code **)(lVar23 + 0x30))(lVar19,1,lVar8);
    if ((int)lVar29 == 1) {
      (**(code **)(lVar18 + 8))(lVar26,lVar9);
      func_0x0001037b45f8(lVar19,0x112d4b5b0,&UNK_10d912140);
    }
    else {
      uVar7 = *(undefined8 *)(puVar25 + -0xa0);
      uVar10 = uVar7;
      (**(code **)(lVar23 + 0x20))(uVar7,lVar19,lVar8);
      func_0x000107c5ec0c();
      if (lVar19 != 0) {
        *(undefined8 *)(puVar25 + -0x90) = uVar10;
        *(long *)(puVar25 + -0x88) = lVar19;
        *(long *)(puVar25 + -0xb8) = lVar23;
        func_0x000100e8b654();
        puVar27 = &UNK_110694838;
        puVar24 = PTR___sSSN_11034da80;
        func_0x000107c60204(&UNK_110694838,PTR___sSSN_11034da80,PTR___sSSN_11034da80,uVar10,uVar10);
        lVar23 = *(long *)(puVar25 + -0xb8);
        func_0x000107c6142c();
        if ((puVar27 == (undefined *)0x0) && (func_0x000107c5ebec(), puVar24 != (undefined *)0x0)) {
          *(long *)(puVar25 + -0x90) = lVar19;
          *(undefined **)(puVar25 + -0x88) = puVar24;
          puVar27 = &UNK_10dc0cba0;
          puVar5 = PTR___sSSN_11034da80;
          func_0x000107c60204();
          lVar23 = *(long *)(puVar25 + -0xb8);
          func_0x000107c6142c();
          if (puVar27 == (undefined *)0x0) {
            func_0x000107c5ebc4();
            *(long *)(puVar25 + -0x108) = lVar8;
            if (puVar24 == (undefined *)0x0) {
              func_0x000107c5ebf4();
              puVar27 = puVar5;
              puVar13 = puVar24;
LAB_1037b40b8:
              puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
              puVar5 = puVar27;
              func_0x0001001830b8();
              puVar31 = puVar24;
            }
            else {
              puVar27 = PTR___swiftEmptyArrayStorage_11034f1c8;
              func_0x0001001830b8();
              *(undefined **)(puVar25 + -200) = puVar27;
              lVar29 = *(long *)(puVar24 + 0x10);
              *(long *)(puVar25 + -0xf0) = lVar29;
              if (lVar29 != 0) {
                uVar30 = 0;
                bVar2 = *(byte *)(lVar21 + 0x50);
                *(undefined **)(puVar25 + -0x100) = puVar24;
                *(undefined **)(puVar25 + -0xf8) =
                     puVar24 + ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff));
                puVar27 = *(undefined **)(puVar25 + -0xa8);
                *(long *)(puVar25 + -0xc0) = lVar21;
                do {
                  if (*(ulong *)(puVar24 + 0x10) <= uVar30) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x1037b42c4);
                    (*pcVar3)();
                  }
                  uVar15 = *(long *)(puVar25 + -0xf8) +
                           *(long *)(*(long *)(puVar25 + -0xc0) + 0x48) * uVar30;
                  uVar11 = uVar28;
                  (**(code **)(*(long *)(puVar25 + -0xc0) + 0x10))(uVar28,uVar15,puVar27);
                  func_0x000107c5ebb4();
                  uVar12 = uVar11;
                  uVar17 = uVar15;
                  func_0x000107c5ebb8();
                  if (uVar17 == 0) {
                    lVar29 = *(long *)(puVar25 + -200);
                    func_0x000107c61434(lVar29);
                    uVar12 = uVar15;
                    func_0x000100029284();
                    func_0x000107c6142c(lVar29);
                    if ((uVar12 & 1) == 0) {
                      puVar27 = *(undefined **)(puVar25 + -0xa8);
                      puVar5 = puVar27;
                      (**(code **)(*(long *)(puVar25 + -0xc0) + 8))(uVar28);
                      func_0x000107c6142c(uVar15);
                    }
                    else {
                      lVar8 = lVar29;
                      func_0x000107c61558();
                      *(long *)(puVar25 + -0x90) = lVar29;
                      if ((int)lVar8 == 0) {
                        func_0x000100184498();
                        lVar29 = *(long *)(puVar25 + -0x90);
                      }
                      func_0x000107c6142c(*(undefined8 *)
                                           (*(long *)(lVar29 + 0x30) + uVar11 * 0x10 + 8));
                      func_0x000107c6142c(*(undefined8 *)
                                           (*(long *)(lVar29 + 0x38) + uVar11 * 0x10 + 8));
                      *(long *)(puVar25 + -200) = lVar29;
                      func_0x00010105bd08(uVar11,lVar29);
                      func_0x000107c6142c(uVar15);
                      puVar27 = *(undefined **)(puVar25 + -0xa8);
                      puVar5 = puVar27;
                      (**(code **)(*(long *)(puVar25 + -0xc0) + 8))(uVar28);
                    }
                  }
                  else {
                    *(ulong *)(puVar25 + -0xe8) = uVar12;
                    *(ulong *)(puVar25 + -0xe0) = uVar17;
                    uVar20 = *(ulong *)(puVar25 + -200);
                    uVar12 = uVar20;
                    func_0x000107c61558();
                    *(ulong *)(puVar25 + -0x90) = uVar20;
                    *(ulong *)(puVar25 + -0xd8) = uVar11;
                    *(ulong *)(puVar25 + -0xd0) = uVar15;
                    func_0x000100029284();
                    uVar17 = (ulong)~(uint)uVar15 & 1;
                    lVar29 = *(long *)(uVar20 + 0x10) + uVar17;
                    if (SCARRY8(*(long *)(uVar20 + 0x10),uVar17)) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x1037b42c8);
                      (*pcVar3)();
                    }
                    if (*(long *)(uVar20 + 0x18) < lVar29) {
                      func_0x0001001833c8(lVar29,uVar12);
                      uVar11 = *(ulong *)(puVar25 + -0xd8);
                      uVar14 = (uint)*(undefined8 *)(puVar25 + -0xd0);
                      func_0x000100029284();
                      lVar29 = *(long *)(puVar25 + -0xc0);
                      if (((uint)uVar15 & 1) != (uVar14 & 1)) {
                        func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
                        pcVar3 = (code *)SoftwareBreakpoint(1,0x1037b42dc);
                        (*pcVar3)();
                      }
                    }
                    else {
                      lVar29 = *(long *)(puVar25 + -0xc0);
                      if ((uVar12 & 1) == 0) {
                        func_0x000100184498();
                      }
                    }
                    lVar8 = *(long *)(puVar25 + -0x90);
                    *(long *)(puVar25 + -200) = lVar8;
                    if ((uVar15 & 1) == 0) {
                      lVar19 = lVar8 + (uVar11 >> 6) * 8;
                      *(ulong *)(lVar19 + 0x40) = *(ulong *)(lVar19 + 0x40) | 1L << (uVar11 & 0x3f);
                      puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar11 * 0x10);
                      uVar10 = *(undefined8 *)(puVar25 + -0xd0);
                      *puVar1 = *(undefined8 *)(puVar25 + -0xd8);
                      puVar1[1] = uVar10;
                      puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar11 * 0x10);
                      uVar10 = *(undefined8 *)(puVar25 + -0xe0);
                      *puVar1 = *(undefined8 *)(puVar25 + -0xe8);
                      puVar1[1] = uVar10;
                      puVar27 = *(undefined **)(puVar25 + -0xa8);
                      puVar5 = puVar27;
                      (**(code **)(lVar29 + 8))(uVar28);
                      if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
                        pcVar3 = (code *)SoftwareBreakpoint(1,0x1037b42cc);
                        (*pcVar3)();
                      }
                      *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
                    }
                    else {
                      puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar11 * 0x10);
                      uVar7 = puVar1[1];
                      uVar10 = *(undefined8 *)(puVar25 + -0xe0);
                      *puVar1 = *(undefined8 *)(puVar25 + -0xe8);
                      puVar1[1] = uVar10;
                      func_0x000107c6142c(*(undefined8 *)(puVar25 + -0xd0));
                      func_0x000107c6142c(uVar7);
                      puVar27 = *(undefined **)(puVar25 + -0xa8);
                      puVar5 = puVar27;
                      (**(code **)(lVar29 + 8))(uVar28);
                    }
                    puVar24 = *(undefined **)(puVar25 + -0x100);
                  }
                  uVar30 = uVar30 + 1;
                } while (*(ulong *)(puVar25 + -0xf0) != uVar30);
              }
              func_0x000107c6142c();
              func_0x000107c5ebf4();
              puVar27 = puVar5;
              puVar13 = puVar24;
              puVar31 = *(undefined **)(puVar25 + -200);
              if (*(undefined **)(puVar25 + -200) == (undefined *)0x0) goto LAB_1037b40b8;
            }
            func_0x000107c5ec1c();
            uVar7 = 0;
            func_0x000107c5eb54();
            func_0x000107c613fc();
            func_0x000107c5eb50();
            *(undefined **)(puVar25 + -0x90) = puVar13;
            *(undefined **)(puVar25 + -0x88) = puVar27;
            *(undefined **)(puVar25 + -0x80) = puVar31;
            *(undefined **)(puVar25 + -0x78) = puVar24;
            *(undefined **)(puVar25 + -0x70) = puVar5;
            uVar10 = uVar7;
            FUN_1037b4638();
            puVar24 = &UNK_110694418;
            puVar13 = puVar25 + -0x90;
            func_0x000107c5eb4c(puVar13,&UNK_110694418,uVar10);
            func_0x000107c6142c(puVar31);
            func_0x000107c6142c(puVar27);
            func_0x000107c61574(uVar7);
            func_0x000107c6142c(puVar5);
            uVar10 = *(undefined8 *)(puVar25 + -0xb0);
            func_0x000107c5fb04(uVar10);
            puVar27 = puVar13;
            puVar5 = puVar24;
            func_0x000107c5faf0(puVar13,puVar24,uVar10);
            lVar29 = *(long *)(puVar25 + -0xb8);
            if (puVar5 == (undefined *)0x0) {
              func_0x00010006c090(puVar13,puVar24);
              *(undefined8 *)(puVar25 + -0x90) = 0;
              *(undefined8 *)(puVar25 + -0x88) = 0xe000000000000000;
              func_0x000107c602fc(0x28);
              func_0x000107c6142c(*(undefined8 *)(puVar25 + -0x88));
              *(undefined8 *)(puVar25 + -0x90) = 0xd00000000000001e;
              *(undefined8 *)(puVar25 + -0x88) = 0x800000010f166b40;
              func_0x000107c5fb78(0xd000000000000039,0x800000010f166b00);
              func_0x000107c5fb78(0x3b296c6c756e202c,0xe800000000000000);
            }
            else {
              *(undefined8 *)(puVar25 + -0x90) = 0;
              *(undefined8 *)(puVar25 + -0x88) = 0xe000000000000000;
              func_0x000107c602fc(0x28);
              func_0x000107c6142c(*(undefined8 *)(puVar25 + -0x88));
              *(undefined8 *)(puVar25 + -0x90) = 0xd000000000000024;
              *(undefined8 *)(puVar25 + -0x88) = 0x800000010f166b60;
              func_0x000107c5fb78(puVar27,puVar5);
              func_0x000107c6142c(puVar5);
              func_0x000107c5fb78(0x3b29,0xe200000000000000);
              func_0x00010006c090(puVar13,puVar24);
            }
            uVar10 = *(undefined8 *)(puVar25 + -0x90);
            uVar7 = *(undefined8 *)(puVar25 + -0x88);
            (**(code **)(lVar29 + 8))
                      (*(undefined8 *)(puVar25 + -0xa0),*(undefined8 *)(puVar25 + -0x108));
            (**(code **)(lVar18 + 8))(lVar26,lVar9);
            goto LAB_1037b3d48;
          }
        }
      }
      (**(code **)(lVar23 + 8))(uVar7,lVar8);
      (**(code **)(lVar18 + 8))(lVar26,lVar9);
    }
  }
  uVar10 = 0;
  uVar7 = 0;
LAB_1037b3d48:
  auVar33._8_8_ = uVar7;
  auVar33._0_8_ = uVar10;
  return auVar33;
}



/* Entry: 1037b44f0; end: 1037b450f;  */

void FUN_1037b44f0(void)

{
  func_0x000107c61168(&PTR_PTR_1128eaa98);
  return;
}



/* Entry: 1037b4510; end: 1037b4523;  */

void FUN_1037b4510(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 1037b4524; end: 1037b4563;  */

void FUN_1037b4524(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93bc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0c92c;
  func_0x000107c61520(&UNK_10dc0c92c,&UNK_1106945d0);
  puRam0000000112f93bc8 = puVar1;
  return;
}



/* Entry: 1037b4564; end: 1037b4593;  */

/* WARNING: Possible PIC construction at 0x0001037b457c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037b4580) */

void FUN_1037b4564(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 1037b4594; end: 1037b45b7;  */

void FUN_1037b4594(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  long lStack_60;
  long alStack_58 [3];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = PTR_PTR_1126a6d58;
  func_0x000107c610f8(PTR_PTR_1126a6d58);
  func_0x000107c453e4();
  func_0x000107bc16a4();
  func_0x000107c61170(puVar2);
  if (param_2 != 0) {
    alStack_58[0] = param_2;
    func_0x000107c614b0(param_2);
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    uVar4 = 0;
    FUN_1037b45b8(0,0x112d46e68,&PTR__OBJC_CLASS___NSError_1126ae858);
    plVar7 = &lStack_60;
    func_0x000107c6147c(plVar7,alStack_58,uVar3,uVar4,6);
    if (((ulong)plVar7 & 1) != 0) {
      lVar5 = lStack_60;
      func_0x000107c3fcb0();
      func_0x000107c61170(lStack_60);
      if (lVar5 == 1) {
        plVar7 = (long *)0x800000010f166a50;
        param_1 = 0xd0000000000000a5;
        goto LAB_1037b3040;
      }
    }
    func_0x000107c614cc(param_2,auStack_68,auStack_80);
    func_0x000107c60640(uStack_78,uStack_70);
    func_0x000107c6142c(uStack_70);
  }
  plVar7 = alStack_58;
  func_0x000107c61428(lVar6 + 0x10,plVar7,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 == 0) {
    return;
  }
  func_0x0001037b3a80(param_1);
  func_0x000107c61170(lVar6);
  if (plVar7 == (long *)0x0) {
    return;
  }
LAB_1037b3040:
  func_0x000107c5fadc(param_1,plVar7);
  func_0x000107c6142c(plVar7);
  func_0x000107c42a80(uVar1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1037b45b8; end: 1037b4637;  */

void FUN_1037b45b8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1037b4638; end: 1037b4677;  */

void FUN_1037b4638(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93bd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0c73c;
  func_0x000107c61520(&UNK_10dc0c73c,&UNK_110694418);
  puRam0000000112f93bd0 = puVar1;
  return;
}



/* Entry: 1037b4678; end: 1037b46ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1037b4678(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1037b4a38();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f93bd8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f93be0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037b4700);
  (*pcVar1)();
}



/* Entry: 1037b4700; end: 1037b475f; -[_TtC49WebViewInjectionScriptSaberPluginScopeGraphBridge64WebViewInjectionScriptSaberPluginScopeGraphBridgeSaberEntryPoint init] */

void FUN_1037b4700(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebViewInjectionScriptSaberPluginScopeGraphBridge.WebViewInjectionScriptSaberPluginScopeGraphBridgeSaberEntryPoint"
                      ,0x72,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037b472c);
  (*pcVar1)();
}



/* Entry: 1037b4760; end: 1037b4797; -[_TtC49WebViewInjectionScriptSaberPluginScopeGraphBridge64WebViewInjectionScriptSaberPluginScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037b477c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037b4780) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b4760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f93bd8));
  return;
}



/* Entry: 1037b4798; end: 1037b47bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b4798(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f93be0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f93bd8));
  return;
}



/* Entry: 1037b47c0; end: 1037b47df;  */

void FUN_1037b47c0(void)

{
  func_0x000107c61168(&PTR_PTR_1128eab78);
  return;
}



/* Entry: 1037b47e0; end: 1037b4867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1037b47e0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f93c10) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f93c18);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1037b4868);
  (*pcVar2)();
}



/* Entry: 1037b4868; end: 1037b494f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1037b4868(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f93c10);
  *(undefined **)(unaff_x20 + _DAT_112f93c10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f93c18);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f93c18))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1106949c8;
  func_0x000107c613fc(&UNK_1106949c8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1037b4954,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1037b4950; end: 1037b495b;  */

void FUN_1037b4950(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1037b495c; end: 1037b49bb; -[_TtC49WebViewInjectionScriptSaberPluginScopeGraphBridge62WebViewInjectionScriptSaberPluginScopedServicesSaberEntryPoint init] */

void FUN_1037b495c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebViewInjectionScriptSaberPluginScopeGraphBridge.WebViewInjectionScriptSaberPluginScopedServicesSaberEntryPoint"
                      ,0x70,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037b4988);
  (*pcVar1)();
}



/* Entry: 1037b49bc; end: 1037b49f3; -[_TtC49WebViewInjectionScriptSaberPluginScopeGraphBridge62WebViewInjectionScriptSaberPluginScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b49bc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f93c18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f93c10));
  return;
}



/* Entry: 1037b49f4; end: 1037b49f7;  */

void FUN_1037b49f4(void)

{
  return;
}



/* Entry: 1037b49f8; end: 1037b4a17;  */

void FUN_1037b49f8(void)

{
  FUN_1037b4868();
  return;
}



/* Entry: 1037b4a18; end: 1037b4a37;  */

void FUN_1037b4a18(void)

{
  func_0x000107c61168(&PTR_PTR_1128eac40);
  return;
}



/* Entry: 1037b4a38; end: 1037b4b07;  */

undefined8 FUN_1037b4a38(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112f93c48,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1037b4b08();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1037b4b08; end: 1037b4b27;  */

void FUN_1037b4b08(void)

{
  func_0x000107c61168(&PTR_PTR_1128ead08);
  return;
}



/* Entry: 1037b4b28; end: 1037b4b93;  */

void FUN_1037b4b28(void)

{
  func_0x0001000285a8(0x112f93c50,&UNK_10dc0ccc8);
  func_0x0001000823a8(0x1037b4b68,0);
  return;
}



/* Entry: 1037b4b94; end: 1037b4bcf; -[_TtC49WebViewInjectionScriptSaberPluginScopeGraphBridge57WebViewInjectionScriptSaberPluginScopeGraphBridgeServices init] */

void FUN_1037b4b94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037b4bd0; end: 1037b4c03;  */

void FUN_1037b4bd0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037b4c04; end: 1037b4c0b;  */

undefined8 FUN_1037b4c04(void)

{
  return 0x1b;
}



/* Entry: 1037b4c0c; end: 1037b4d83;  */

void FUN_1037b4c0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110694a10;
  func_0x000107c613fc(&UNK_110694a10,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1037b4d84,puVar1);
  return;
}



/* Entry: 1037b4d84; end: 1037b4d8b;  */

void FUN_1037b4d84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112f93c48,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f93c48,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110694aa8;
  func_0x000107c613fc(&UNK_110694aa8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1037b4e38;
  func_0x00010058fa64(0x1037b4e38,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1037b4d8c; end: 1037b4de7;  */

void FUN_1037b4d8c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f93c48,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f93c48,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1037b4de8; end: 1037b4e3f;  */

undefined ** FUN_1037b4de8(void)

{
  return &PTR_DAT_113067198;
}



/* Entry: 1037b4e40; end: 1037b4e87; -[SCWebViewInjectionScriptSaberPluginScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b4e40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f93ca8;
  func_0x000107c61428(param_1 + _DAT_112f93ca8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037b4e88; end: 1037b4edf; -[SCWebViewInjectionScriptSaberPluginScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b4e88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f93ca8;
  func_0x000107c61428(param_1 + _DAT_112f93ca8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


