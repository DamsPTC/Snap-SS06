/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102aa29dc; end: 102aa29f7;  */

void FUN_102aa29dc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102aa2870(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Entry: 102aa29f8; end: 102aa2b07;  */

undefined1  [16]
FUN_102aa29f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auVar1 [16];
  
  func_0x000107c602fc(0x1e);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb3c(param_1,param_2);
  func_0x000107c5fb78();
  func_0x000107c6142c(param_2);
  func_0x000107c5fb78(0x6974706f09090a2c,0xed0000203a736e6f);
  if (param_4 == 0) {
    param_4 = -0x1d00000000000000;
  }
  else {
    func_0x000107c5fb3c(param_3,param_4);
  }
  func_0x000107c5fb78();
  func_0x000107c6142c(param_4);
  func_0x000107c5fb78(0x7d090a,0xe300000000000000);
  auVar1._8_8_ = 0xea0000000000203a;
  auVar1._0_8_ = 0x756b7309090a7b09;
  return auVar1;
}



/* Entry: 102aa2b08; end: 102aa2b13;  */

undefined1  [16] FUN_102aa2b08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar5 = unaff_x20[3];
  func_0x000107c602fc(0x1e);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb3c(uVar1,uVar4);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c5fb78(0x6974706f09090a2c,0xed0000203a736e6f);
  if (lVar5 == 0) {
    lVar5 = -0x1d00000000000000;
  }
  else {
    func_0x000107c5fb3c(uVar2,lVar5);
  }
  func_0x000107c5fb78();
  func_0x000107c6142c(lVar5);
  func_0x000107c5fb78(0x7d090a,0xe300000000000000);
  auVar3._8_8_ = 0xea0000000000203a;
  auVar3._0_8_ = 0x756b7309090a7b09;
  return auVar3;
}



/* Entry: 102aa2b14; end: 102aa2bb3;  */

undefined8
FUN_102aa2b14(ulong param_1,long param_2,ulong param_3,long param_4,ulong param_5,long param_6,
             ulong param_7,long param_8)

{
  if (((param_1 != param_5) || (param_2 != param_6)) &&
     (func_0x000107c605b8(param_1,param_2,param_5,param_6,0), (param_1 & 1) == 0)) {
    return 0;
  }
  if (param_4 == 0) {
    if (param_8 != 0) {
      return 0;
    }
  }
  else if ((param_8 == 0) ||
          (((param_3 != param_7 || (param_4 != param_8)) &&
           (func_0x000107c605b8(param_3,param_4,param_7,param_8,0), (param_3 & 1) == 0)))) {
    return 0;
  }
  return 1;
}



/* Entry: 102aa2bb4; end: 102aa2bf3;  */

void FUN_102aa2bb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8088 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db145e0;
  func_0x000107c61520(&UNK_10db145e0,&UNK_110591d58);
  puRam0000000112ee8088 = puVar1;
  return;
}



/* Entry: 102aa2bf4; end: 102aa2d73;  */

/* WARNING: Removing unreachable block (ram,0x000102aa2cfc) */
/* WARNING: Removing unreachable block (ram,0x000102aa2cbc) */

undefined1 * FUN_102aa2bf4(long param_1)

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
  
  lVar2 = 0x112ee8100;
  func_0x0001000285a8(0x112ee8100,&UNK_10db14638);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puVar4 = *(undefined1 **)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_102aa2bb4();
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_110591d58,&UNK_110591d58,lVar3,
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



/* Entry: 102aa2d74; end: 102aa2e03;  */

long FUN_102aa2d74(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102aa2e04; end: 102aa2e6f;  */

undefined8 * FUN_102aa2e04(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102aa2e70; end: 102aa2eb3;  */

undefined8 * FUN_102aa2e70(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102aa2eb4; end: 102aa30c3;  */

int FUN_102aa2eb4(int *param_1,int param_2)

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



/* Entry: 102aa30c4; end: 102aa3103;  */

void FUN_102aa30c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db145b8;
  func_0x000107c61520(&UNK_10db145b8,&UNK_110591d58);
  puRam0000000112ee8090 = puVar1;
  return;
}



/* Entry: 102aa3104; end: 102aa3107;  */

void FUN_102aa3104(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db14518;
  func_0x000107c61520(&UNK_10db14518,&UNK_110591d58);
  puRam0000000112ee8098 = puVar1;
  return;
}



/* Entry: 102aa3108; end: 102aa3147;  */

void FUN_102aa3108(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db14518;
  func_0x000107c61520(&UNK_10db14518,&UNK_110591d58);
  puRam0000000112ee8098 = puVar1;
  return;
}



/* Entry: 102aa3148; end: 102aa314b;  */

void FUN_102aa3148(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee80a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db144f0;
  func_0x000107c61520(&UNK_10db144f0,&UNK_110591d58);
  puRam0000000112ee80a0 = puVar1;
  return;
}



/* Entry: 102aa314c; end: 102aa318b;  */

void FUN_102aa314c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee80a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db144f0;
  func_0x000107c61520(&UNK_10db144f0,&UNK_110591d58);
  puRam0000000112ee80a0 = puVar1;
  return;
}



/* Entry: 102aa318c; end: 102aa318f;  */

undefined8 FUN_102aa318c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  if ((uVar4 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar4 & 1) != 0))
  {
    uVar4 = param_1[2];
    uVar5 = param_1[4];
    uVar2 = param_1[5];
    uVar1 = param_2[4];
    uVar3 = param_2[5];
    if (((uVar4 == param_2[2]) && (param_1[3] == param_2[3])) ||
       (func_0x000107c605b8(), (uVar4 & 1) != 0)) {
      if (uVar2 == 0) {
        if (uVar3 != 0) {
          return 0;
        }
      }
      else {
        if (uVar3 == 0) {
          return 0;
        }
        if (((uVar5 != uVar1) || (uVar2 != uVar3)) &&
           (func_0x000107c605b8(uVar5,uVar2,uVar1,uVar3,0), (uVar5 & 1) == 0)) {
          return 0;
        }
      }
      if ((int)param_1[6] == (int)param_2[6]) {
        uVar4 = param_2[8];
        if (param_1[8] == 0) {
          if (uVar4 != 0) {
            return 0;
          }
        }
        else {
          if (uVar4 == 0) {
            return 0;
          }
          uVar5 = param_1[7];
          if (((uVar5 != param_2[7]) || (param_1[8] != uVar4)) &&
             (func_0x000107c605b8(), (uVar5 & 1) == 0)) {
            return 0;
          }
        }
        uVar4 = param_2[10];
        if (param_1[10] == 0) {
          if (uVar4 != 0) {
            return 0;
          }
        }
        else {
          if (uVar4 == 0) {
            return 0;
          }
          uVar5 = param_1[9];
          if (((uVar5 != param_2[9]) || (param_1[10] != uVar4)) &&
             (func_0x000107c605b8(), (uVar5 & 1) == 0)) {
            return 0;
          }
        }
        uVar4 = param_2[0xc];
        if (param_1[0xc] == 0) {
          if (uVar4 != 0) {
            return 0;
          }
        }
        else {
          if (uVar4 == 0) {
            return 0;
          }
          uVar5 = param_1[0xb];
          if (((uVar5 != param_2[0xb]) || (param_1[0xc] != uVar4)) &&
             (func_0x000107c605b8(), (uVar5 & 1) == 0)) {
            return 0;
          }
        }
        uVar4 = param_2[0xe];
        if (param_1[0xe] == 0) {
          if (uVar4 == 0) {
            return 1;
          }
        }
        else if ((uVar4 != 0) &&
                (((uVar5 = param_1[0xd], uVar5 == param_2[0xd] && (param_1[0xe] == uVar4)) ||
                 (func_0x000107c605b8(), (uVar5 & 1) != 0)))) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Entry: 102aa3190; end: 102aa320f;  */

uint FUN_102aa3190(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_b0 = param_1[0xe];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_38 = param_2[0xd];
  uStack_40 = param_2[0xc];
  uStack_30 = param_2[0xe];
  FUN_102aa39d4(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 102aa3210; end: 102aa3223;  */

bool FUN_102aa3210(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102aa3224; end: 102aa3437;  */

void FUN_102aa3224(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar5 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x6f666e69;
  if (bVar5 != 2) {
    uVar1 = 0x6e6f697469736f70;
  }
  uVar2 = 0xe400000000000000;
  if (bVar5 != 2) {
    uVar2 = 0xe800000000000000;
  }
  uVar3 = 0x6e69616d6f64;
  if (bVar5 != 0) {
    uVar3 = 0x7373616c63;
  }
  uVar4 = 0xe600000000000000;
  if (bVar5 != 0) {
    uVar4 = 0xe500000000000000;
  }
  if (bVar5 < 2) {
    uVar2 = uVar4;
    uVar1 = uVar3;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102aa3438; end: 102aa3513;  */

void FUN_102aa3438(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  uVar1 = 0x6f666e69;
  if (bVar5 != 2) {
    uVar1 = 0x6e6f697469736f70;
  }
  uVar2 = 0xe400000000000000;
  if (bVar5 != 2) {
    uVar2 = 0xe800000000000000;
  }
  uVar3 = 0x6e69616d6f64;
  if (bVar5 != 0) {
    uVar3 = 0x7373616c63;
  }
  uVar4 = 0xe600000000000000;
  if (bVar5 != 0) {
    uVar4 = 0xe500000000000000;
  }
  if (bVar5 < 2) {
    uVar2 = uVar4;
    uVar1 = uVar3;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 102aa3514; end: 102aa3537;  */

void FUN_102aa3514(undefined1 *param_1,undefined1 param_2)

{
  func_0x000102aa3c14();
  *param_1 = param_2;
  return;
}



/* Entry: 102aa3538; end: 102aa354f;  */

undefined1  [16] FUN_102aa3538(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102aa3550; end: 102aa359f;  */

void FUN_102aa3550(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102aa3b98();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102aa35a0; end: 102aa375b;  */

/* WARNING: Removing unreachable block (ram,0x000102aa36a8) */

void FUN_102aa35a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_a0 [15];
  undefined1 uStack_91;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  
  lVar3 = 0x112ee8108;
  func_0x0001000285a8(0x112ee8108,&UNK_10db14648);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_a0 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_102aa3b98();
  func_0x000107c606ec(puVar5,&UNK_110591f50,&UNK_110591f50,param_1,uVar1,uVar2);
  auStack_90[0] = 0;
  func_0x000107c6053c(*unaff_x20,unaff_x20[1],auStack_90,lVar3);
  if (unaff_x21 == 0) {
    auStack_90[0] = 1;
    func_0x000107c6053c(0x554b53,0xe300000000000000,auStack_90,lVar3);
    FUN_102aa3bd8(unaff_x20 + 2,auStack_70);
    puVar4 = auStack_70;
    FUN_102aa3bd8(puVar4,auStack_90);
    uStack_91 = 2;
    func_0x000102a9c8b8();
    func_0x000107c60554(auStack_90,&uStack_91,lVar3,&UNK_110591cc8,puVar4);
    auStack_90[0] = 3;
    func_0x000107c60558(*(undefined4 *)(unaff_x20 + 6),auStack_90,lVar3);
    (**(code **)(lVar6 + 8))(puVar5,lVar3);
  }
  else {
    (**(code **)(lVar6 + 8))(puVar5,lVar3);
  }
  return;
}



/* Entry: 102aa375c; end: 102aa37bf;  */

void FUN_102aa375c(undefined8 *param_1)

{
  long unaff_x21;
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
  
  FUN_102aa3c78(&uStack_98);
  if (unaff_x21 == 0) {
    param_1[9] = uStack_50;
    param_1[8] = uStack_58;
    param_1[0xb] = uStack_40;
    param_1[10] = uStack_48;
    param_1[0xd] = uStack_30;
    param_1[0xc] = uStack_38;
    param_1[0xe] = uStack_28;
    param_1[1] = uStack_90;
    *param_1 = uStack_98;
    param_1[3] = uStack_80;
    param_1[2] = uStack_88;
    param_1[5] = uStack_70;
    param_1[4] = uStack_78;
    param_1[7] = uStack_60;
    param_1[6] = uStack_68;
  }
  return;
}



/* Entry: 102aa37c0; end: 102aa380f;  */

void FUN_102aa37c0(void)

{
  FUN_102aa35a0();
  return;
}



/* Entry: 102aa3810; end: 102aa39cf;  */

undefined1  [16] FUN_102aa3810(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *unaff_x20;
  
  func_0x000107c602fc(0x28);
  func_0x000107c6142c(0xe000000000000000);
  uVar3 = *unaff_x20;
  uVar1 = unaff_x20[1];
  func_0x000107c602fc(0x19);
  func_0x000107c5fb78(0x203a656d616e,0xe600000000000000);
  func_0x000107c5fb78(uVar3,uVar1);
  func_0x000107c5fb78(0x6e69616d6f64202c,0xef203a7373616c43);
  func_0x000107c603d0();
  func_0x000107c5fb78(0,0xe000000000000000);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(0x3a6f666e69090a2c,0xe900000000000020);
  uVar3 = unaff_x20[3];
  FUN_102aa29f8(unaff_x20[2],uVar3,unaff_x20[4],unaff_x20[5]);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x697469736f70090a,0xec000000203a6e6f);
  puVar4 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
  func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                      PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  func_0x000107c5fb78(0x7d0a,0xe200000000000000);
  auVar2._8_8_ = 0xeb00000000203a6e;
  auVar2._0_8_ = 0x69616d6f64090a7b;
  return auVar2;
}



/* Entry: 102aa39d0; end: 102aa39d3;  */

undefined1  [16] FUN_102aa39d0(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *unaff_x20;
  
  func_0x000107c602fc(0x28);
  func_0x000107c6142c(0xe000000000000000);
  uVar3 = *unaff_x20;
  uVar1 = unaff_x20[1];
  func_0x000107c602fc(0x19);
  func_0x000107c5fb78(0x203a656d616e,0xe600000000000000);
  func_0x000107c5fb78(uVar3,uVar1);
  func_0x000107c5fb78(0x6e69616d6f64202c,0xef203a7373616c43);
  func_0x000107c603d0();
  func_0x000107c5fb78(0,0xe000000000000000);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(0x3a6f666e69090a2c,0xe900000000000020);
  uVar3 = unaff_x20[3];
  FUN_102aa29f8(unaff_x20[2],uVar3,unaff_x20[4],unaff_x20[5]);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x697469736f70090a,0xec000000203a6e6f);
  puVar4 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
  func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                      PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  func_0x000107c5fb78(0x7d0a,0xe200000000000000);
  auVar2._8_8_ = 0xeb00000000203a6e;
  auVar2._0_8_ = 0x69616d6f64090a7b;
  return auVar2;
}



/* Entry: 102aa39d4; end: 102aa3b97;  */

undefined8 FUN_102aa39d4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  if ((uVar4 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar4 & 1) != 0))
  {
    uVar4 = param_1[2];
    uVar5 = param_1[4];
    uVar2 = param_1[5];
    uVar1 = param_2[4];
    uVar3 = param_2[5];
    if (((uVar4 == param_2[2]) && (param_1[3] == param_2[3])) ||
       (func_0x000107c605b8(), (uVar4 & 1) != 0)) {
      if (uVar2 == 0) {
        if (uVar3 != 0) {
          return 0;
        }
      }
      else {
        if (uVar3 == 0) {
          return 0;
        }
        if (((uVar5 != uVar1) || (uVar2 != uVar3)) &&
           (func_0x000107c605b8(uVar5,uVar2,uVar1,uVar3,0), (uVar5 & 1) == 0)) {
          return 0;
        }
      }
      if ((int)param_1[6] == (int)param_2[6]) {
        uVar4 = param_2[8];
        if (param_1[8] == 0) {
          if (uVar4 != 0) {
            return 0;
          }
        }
        else {
          if (uVar4 == 0) {
            return 0;
          }
          uVar5 = param_1[7];
          if (((uVar5 != param_2[7]) || (param_1[8] != uVar4)) &&
             (func_0x000107c605b8(), (uVar5 & 1) == 0)) {
            return 0;
          }
        }
        uVar4 = param_2[10];
        if (param_1[10] == 0) {
          if (uVar4 != 0) {
            return 0;
          }
        }
        else {
          if (uVar4 == 0) {
            return 0;
          }
          uVar5 = param_1[9];
          if (((uVar5 != param_2[9]) || (param_1[10] != uVar4)) &&
             (func_0x000107c605b8(), (uVar5 & 1) == 0)) {
            return 0;
          }
        }
        uVar4 = param_2[0xc];
        if (param_1[0xc] == 0) {
          if (uVar4 != 0) {
            return 0;
          }
        }
        else {
          if (uVar4 == 0) {
            return 0;
          }
          uVar5 = param_1[0xb];
          if (((uVar5 != param_2[0xb]) || (param_1[0xc] != uVar4)) &&
             (func_0x000107c605b8(), (uVar5 & 1) == 0)) {
            return 0;
          }
        }
        uVar4 = param_2[0xe];
        if (param_1[0xe] == 0) {
          if (uVar4 == 0) {
            return 1;
          }
        }
        else if ((uVar4 != 0) &&
                (((uVar5 = param_1[0xd], uVar5 == param_2[0xd] && (param_1[0xe] == uVar4)) ||
                 (func_0x000107c605b8(), (uVar5 & 1) != 0)))) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Entry: 102aa3b98; end: 102aa3bd7;  */

void FUN_102aa3b98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8110 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db14800;
  func_0x000107c61520(&UNK_10db14800,&UNK_110591f50);
  puRam0000000112ee8110 = puVar1;
  return;
}



/* Entry: 102aa3bd8; end: 102aa3c77;  */

undefined8 FUN_102aa3bd8(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_100e0e1cc)(param_2,param_1);
  return param_2;
}



/* Entry: 102aa3c78; end: 102aa3f4b;  */

/* WARNING: Removing unreachable block (ram,0x000102aa3e34) */
/* WARNING: Removing unreachable block (ram,0x000102aa3dac) */
/* WARNING: Removing unreachable block (ram,0x000102aa3e94) */
/* WARNING: Removing unreachable block (ram,0x000102aa3d58) */
/* WARNING: Removing unreachable block (ram,0x000102aa3dc4) */

void FUN_102aa3c78(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long unaff_x21;
  long lVar9;
  long lStack_1f0;
  undefined1 auStack_1e8 [120];
  undefined8 ***pppuStack_170;
  long lStack_168;
  undefined8 **ppuStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined1 uStack_e9;
  undefined8 ***pppuStack_e8;
  long lStack_e0;
  undefined8 **ppuStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar3 = 0x112ee81b8;
  func_0x0001000285a8(0x112ee81b8,&UNK_10db14858);
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_102aa3b98();
  func_0x000107c606e0(auStack_1e8 + (-8 - extraout_x8),&UNK_110591f50,&UNK_110591f50,lVar4,uVar1,
                      uVar2);
  if (unaff_x21 == 0) {
    pppuStack_170 = (undefined8 ***)((ulong)pppuStack_170 & 0xffffffffffffff00);
    ppppuVar5 = &pppuStack_170;
    lVar4 = lVar3;
    lStack_1f0 = param_2;
    func_0x000107c604f4();
    pppuStack_170 = (undefined8 ***)CONCAT71(pppuStack_170._1_7_,1);
    ppppuVar6 = ppppuVar5;
    func_0x000102a9daf0();
    puVar7 = &UNK_110591ad8;
    func_0x000107c60508(&UNK_110591ad8,&pppuStack_170,lVar3,&UNK_110591ad8,ppppuVar6);
    auStack_1e8[0] = 2;
    pppuStack_e8 = ppppuVar5;
    lStack_e0 = lVar4;
    func_0x000102a9db30();
    func_0x000107c60508(&pppuStack_170,&UNK_110591cc8,auStack_1e8,lVar3,&UNK_110591cc8,puVar7);
    ppuStack_d8 = pppuStack_170;
    lStack_d0 = lStack_168;
    lStack_c0 = lStack_158;
    lStack_c8 = (long)ppuStack_160;
    uStack_e9 = 3;
    puVar8 = &uStack_e9;
    func_0x000107c6050c(puVar8,lVar3);
    lVar4 = lStack_1f0;
    (**(code **)(lVar9 + 8))(auStack_1e8 + (-8 - extraout_x8),lVar3);
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_168 = lStack_e0;
    pppuStack_170 = pppuStack_e8;
    lStack_140 = CONCAT44(uStack_b4,(int)puVar8);
    lStack_158 = lStack_d0;
    ppuStack_160 = ppuStack_d8;
    lStack_148 = lStack_c0;
    lStack_150 = lStack_c8;
    lStack_118 = 0;
    lStack_120 = 0;
    lStack_108 = 0;
    lStack_110 = 0;
    lStack_100 = 0;
    lStack_138 = 0;
    lStack_128 = 0;
    lStack_130 = 0;
    uStack_b8 = (int)puVar8;
    FUN_102aa4508(&pppuStack_170,auStack_1e8);
    func_0x0001000834e4(lVar4);
    func_0x000102a9d438(&pppuStack_e8);
    param_1[9] = lStack_128;
    param_1[8] = lStack_130;
    param_1[0xb] = lStack_118;
    param_1[10] = lStack_120;
    param_1[0xd] = lStack_108;
    param_1[0xc] = lStack_110;
    param_1[1] = lStack_168;
    *param_1 = (long)pppuStack_170;
    param_1[3] = lStack_158;
    param_1[2] = (long)ppuStack_160;
    param_1[0xe] = lStack_100;
    param_1[5] = lStack_148;
    param_1[4] = lStack_150;
    param_1[7] = lStack_138;
    param_1[6] = lStack_140;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 102aa3f4c; end: 102aa3fc7;  */

long FUN_102aa3f4c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102aa3fc8; end: 102aa4073;  */

undefined8 * FUN_102aa3fc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  uVar3 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar3;
  uVar4 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar4;
  uVar5 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar5;
  uVar6 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar6;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  return param_1;
}



/* Entry: 102aa4074; end: 102aa4187;  */

undefined8 * FUN_102aa4074(undefined8 *param_1,undefined8 *param_2)

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
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  param_1[7] = param_2[7];
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[9] = param_2[9];
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xb] = param_2[0xb];
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xd] = param_2[0xd];
  uVar1 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102aa4188; end: 102aa4223;  */

undefined8 * FUN_102aa4188(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  uVar1 = param_2[8];
  uVar2 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[10];
  uVar2 = param_1[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0xc];
  uVar2 = param_1[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0xe];
  uVar2 = param_1[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 102aa4224; end: 102aa443f;  */

int FUN_102aa4224(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1e] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102aa4440; end: 102aa447f;  */

void FUN_102aa4440(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8118 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db147d8;
  func_0x000107c61520(&UNK_10db147d8,&UNK_110591f50);
  puRam0000000112ee8118 = puVar1;
  return;
}



/* Entry: 102aa4480; end: 102aa4483;  */

void FUN_102aa4480(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8120 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db14738;
  func_0x000107c61520(&UNK_10db14738,&UNK_110591f50);
  puRam0000000112ee8120 = puVar1;
  return;
}



/* Entry: 102aa4484; end: 102aa44c3;  */

void FUN_102aa4484(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8120 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db14738;
  func_0x000107c61520(&UNK_10db14738,&UNK_110591f50);
  puRam0000000112ee8120 = puVar1;
  return;
}



/* Entry: 102aa44c4; end: 102aa44c7;  */

void FUN_102aa44c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8128 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db14710;
  func_0x000107c61520(&UNK_10db14710,&UNK_110591f50);
  puRam0000000112ee8128 = puVar1;
  return;
}



/* Entry: 102aa44c8; end: 102aa4507;  */

void FUN_102aa44c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8128 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db14710;
  func_0x000107c61520(&UNK_10db14710,&UNK_110591f50);
  puRam0000000112ee8128 = puVar1;
  return;
}



/* Entry: 102aa4508; end: 102aa481b;  */

undefined8 FUN_102aa4508(undefined8 param_1,undefined8 param_2)

{
  FUN_102aa3fc8(param_2,param_1,&UNK_110591ea0);
  return param_2;
}



/* Entry: 102aa481c; end: 102aa48cf;  */

void FUN_102aa481c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar1 = 0xec0000006174635f;
  uVar4 = 0x6c616e7265746e69;
  if (bVar3 != 3) {
    uVar1 = 0xee00746e6576655f;
    uVar4 = 0x6c616e7265747865;
  }
  uVar2 = 0xed00006567616d69;
  uVar5 = 0x5f70616e735f6e6f;
  if (bVar3 != 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  uVar1 = 0x800000010f0e61f0;
  uVar4 = 0xd000000000000010;
  if (bVar3 != 0) {
    uVar1 = 0xee0064726f636572;
    uVar4 = 0x5f70616e735f6e6f;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  *param_1 = uVar5;
  param_1[1] = uVar2;
  return;
}



/* Entry: 102aa48d0; end: 102aa492b;  */

void FUN_102aa48d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000102aa5518();
  func_0x000107c5fc40(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 102aa492c; end: 102aa4977;  */

void FUN_102aa492c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000102aa5518();
  func_0x000107c5fc2c(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 102aa4978; end: 102aa4a23;  */

void FUN_102aa4978(void)

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



/* Entry: 102aa4a24; end: 102aa4a67;  */

undefined1  [16] FUN_102aa4a24(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x646f725074697865;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6c725574697865;
  }
  uVar2 = 0xeb00000000746375;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe700000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 102aa4a68; end: 102aa4b43;  */

void FUN_102aa4a68(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  uVar1 = 0x6c725574697865;
  if ((param_2 == 0x6c725574697865 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6c725574697865,0xe700000000000000,param_2,param_3,0), (uVar1 & 1) != 0))
  {
    func_0x000107c6142c(param_3);
    uVar2 = 0;
  }
  else {
    uVar1 = 0x646f725074697865;
    if ((param_2 == 0x646f725074697865) && (param_3 == -0x14ffffffff8b9c8b)) {
      func_0x000107c6142c(0xeb00000000746375);
      uVar2 = 1;
    }
    else {
      func_0x000107c605b8(0x646f725074697865,0xeb00000000746375,param_2,param_3,0);
      func_0x000107c6142c(param_3);
      uVar2 = 1;
      if ((uVar1 & 1) == 0) {
        uVar2 = 2;
      }
    }
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 102aa4b44; end: 102aa4b5b;  */

undefined1  [16] FUN_102aa4b44(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102aa4b5c; end: 102aa4bab;  */

void FUN_102aa4b5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102aa4d98();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102aa4bac; end: 102aa4ceb;  */

void FUN_102aa4bac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  lVar3 = 0x112ee81c0;
  uStack_70 = param_4;
  uStack_68 = param_5;
  func_0x0001000285a8(0x112ee81c0,&UNK_10db14868);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&uStack_70 - extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_102aa4d98();
  func_0x000107c606ec(lVar5,&UNK_1105921c0,&UNK_1105921c0,param_1,uVar1,uVar2);
  uStack_51 = 0;
  func_0x000107c60520(param_2,param_3,&uStack_51,lVar3);
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    func_0x000107c60520(uStack_70,uStack_68,&uStack_52,lVar3);
    (**(code **)(lVar4 + 8))(lVar5,lVar3);
  }
  else {
    (**(code **)(lVar4 + 8))(lVar5,lVar3);
  }
  return;
}



/* Entry: 102aa4cec; end: 102aa4d17;  */

void FUN_102aa4cec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_102aa4dd8();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Entry: 102aa4d18; end: 102aa4d33;  */

void FUN_102aa4d18(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102aa4bac(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Entry: 102aa4d34; end: 102aa4d97;  */

ulong FUN_102aa4d34(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (4 < uVar1) {
    uVar1 = 5;
  }
  return uVar1;
}



/* Entry: 102aa4d98; end: 102aa4dd7;  */

void FUN_102aa4d98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee81c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db14aac;
  func_0x000107c61520(&UNK_10db14aac,&UNK_1105921c0);
  puRam0000000112ee81c8 = puVar1;
  return;
}



/* Entry: 102aa4dd8; end: 102aa4f5f;  */

/* WARNING: Removing unreachable block (ram,0x000102aa4f18) */
/* WARNING: Removing unreachable block (ram,0x000102aa4ea0) */

undefined1 * FUN_102aa4dd8(long param_1)

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
  
  lVar2 = 0x112ee81f8;
  func_0x0001000285a8(0x112ee81f8,&UNK_10db14b00);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puVar4 = *(undefined1 **)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_102aa4d98();
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_1105921c0,&UNK_1105921c0,lVar3,
                      uVar1,puVar4);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar4 = &uStack_51;
    func_0x000107c604d4(puVar4,lVar2);
    uStack_52 = 1;
    func_0x000107c604d4(&uStack_52,lVar2);
    (**(code **)(lVar5 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar2);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return puVar4;
}



/* Entry: 102aa4f60; end: 102aa4f63;  */

void FUN_102aa4f60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee81d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db14870;
  func_0x000107c61520(&UNK_10db14870,&UNK_1105920b0);
  puRam0000000112ee81d0 = puVar1;
  return;
}



/* Entry: 102aa4f64; end: 102aa4fa3;  */

void FUN_102aa4f64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee81d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db14870;
  func_0x000107c61520(&UNK_10db14870,&UNK_1105920b0);
  puRam0000000112ee81d0 = puVar1;
  return;
}



/* Entry: 102aa4fa4; end: 102aa50f7;  */

int FUN_102aa4fa4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102aa5020;
        goto LAB_102aa5004;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102aa5004:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_102aa5020:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102aa50f8; end: 102aa5187;  */

long FUN_102aa50f8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102aa5188; end: 102aa51f3;  */

undefined8 * FUN_102aa5188(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102aa51f4; end: 102aa5237;  */

undefined8 * FUN_102aa51f4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102aa5238; end: 102aa544f;  */

int FUN_102aa5238(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
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



/* Entry: 102aa5450; end: 102aa548f;  */

void FUN_102aa5450(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee81d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db14a84;
  func_0x000107c61520(&UNK_10db14a84,&UNK_1105921c0);
  puRam0000000112ee81d8 = puVar1;
  return;
}



/* Entry: 102aa5490; end: 102aa5493;  */

void FUN_102aa5490(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee81e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db14a1c;
  func_0x000107c61520(&UNK_10db14a1c,&UNK_1105921c0);
  puRam0000000112ee81e0 = puVar1;
  return;
}



/* Entry: 102aa5494; end: 102aa54d3;  */

void FUN_102aa5494(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee81e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db14a1c;
  func_0x000107c61520(&UNK_10db14a1c,&UNK_1105921c0);
  puRam0000000112ee81e0 = puVar1;
  return;
}



/* Entry: 102aa54d4; end: 102aa54d7;  */

void FUN_102aa54d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee81e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db149f4;
  func_0x000107c61520(&UNK_10db149f4,&UNK_1105921c0);
  puRam0000000112ee81e8 = puVar1;
  return;
}



/* Entry: 102aa54d8; end: 102aa5557;  */

void FUN_102aa54d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee81e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db149f4;
  func_0x000107c61520(&UNK_10db149f4,&UNK_1105921c0);
  puRam0000000112ee81e8 = puVar1;
  return;
}



/* Entry: 102aa5558; end: 102aa5583;  */

undefined1 FUN_102aa5558(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 102aa5584; end: 102aa57d3;  */

void FUN_102aa5584(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar5 = 0xed00004e4f495441;
  uVar1 = 0x5241;
  if (bVar3 != 2) {
    uVar1 = 0x444c524f575f5241;
  }
  uVar2 = 0xe200000000000000;
  if (bVar3 != 2) {
    uVar2 = 0xef474e494341465f;
  }
  uVar4 = 0x5a494c4155534956;
  if (bVar3 != 0) {
    uVar5 = 0xe400000000000000;
    uVar4 = 0x544e4948;
  }
  if (bVar3 < 2) {
    uVar2 = uVar5;
    uVar1 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102aa57d4; end: 102aa585b;  */

void FUN_102aa57d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar5 = 0xed00004e4f495441;
  uVar1 = 0x5241;
  if (bVar3 != 2) {
    uVar1 = 0x444c524f575f5241;
  }
  uVar2 = 0xe200000000000000;
  if (bVar3 != 2) {
    uVar2 = 0xef474e494341465f;
  }
  uVar4 = 0x5a494c4155534956;
  if (bVar3 != 0) {
    uVar5 = 0xe400000000000000;
    uVar4 = 0x544e4948;
  }
  if (bVar3 < 2) {
    uVar2 = uVar5;
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 102aa585c; end: 102aa589b;  */

void FUN_102aa585c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee82a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db14b10;
  func_0x000107c61520(&UNK_10db14b10,&UNK_110592320);
  puRam0000000112ee82a0 = puVar1;
  return;
}



/* Entry: 102aa589c; end: 102aa59ff;  */

int FUN_102aa589c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102aa5918;
        goto LAB_102aa58fc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102aa58fc:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_102aa5918:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102aa5a00; end: 102aa5a9f;  */

long FUN_102aa5a00(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102aa5aa0; end: 102aa5b1b;  */

undefined8 * FUN_102aa5aa0(undefined8 *param_1,undefined8 *param_2)

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
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Entry: 102aa5b1c; end: 102aa5b6f;  */

undefined8 * FUN_102aa5b1c(undefined8 *param_1,undefined8 *param_2)

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
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Entry: 102aa5b70; end: 102aa5c13;  */

int FUN_102aa5b70(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102aa5c14; end: 102aa6123;  */

long FUN_102aa5c14(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102aa6124; end: 102aa6137;  */

void FUN_102aa6124(undefined8 param_1,long param_2)

{
  if (param_2 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 102aa6138; end: 102aa6333;  */

void FUN_102aa6138(void)

{
  ulong uVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  pcVar3 = "nal_event";
  uVar4 = 0xd000000000000010;
  if (cVar2 != '\x01') {
    pcVar3 = "makeupProperties";
    uVar4 = 0xd000000000000011;
  }
  uVar1 = 0xe900000000000067;
  uVar5 = 0x6e697274536d6669;
  if (cVar2 != '\0') {
    uVar1 = (ulong)pcVar3 | 0x8000000000000000;
    uVar5 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102aa6334; end: 102aa63ff;  */

void FUN_102aa6334(undefined8 *param_1)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  pcVar2 = "nal_event";
  uVar3 = 0xd000000000000010;
  if (*unaff_x20 != '\x01') {
    pcVar2 = "makeupProperties";
    uVar3 = 0xd000000000000011;
  }
  uVar1 = 0xe900000000000067;
  uVar4 = 0x6e697274536d6669;
  if (*unaff_x20 != '\0') {
    uVar1 = (ulong)pcVar2 | 0x8000000000000000;
    uVar4 = uVar3;
  }
  *param_1 = uVar4;
  param_1[1] = uVar1;
  return;
}



/* Entry: 102aa6400; end: 102aa6423;  */

void FUN_102aa6400(undefined1 *param_1,undefined1 param_2)

{
  FUN_102aa7e7c();
  *param_1 = param_2;
  return;
}



/* Entry: 102aa6424; end: 102aa642f;  */

undefined1  [16] FUN_102aa6424(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102aa6430; end: 102aa647f;  */

void FUN_102aa6430(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102aa8220();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102aa6480; end: 102aa672f;  */

void FUN_102aa6480(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_330 [168];
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
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
  undefined2 uStack_200;
  undefined6 uStack_1fe;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_a8 = param_2[0x11];
  uStack_b0 = param_2[0x10];
  uStack_98 = param_2[0x13];
  uStack_a0 = param_2[0x12];
  uStack_90 = param_2[0x14];
  uStack_e8 = param_2[9];
  uStack_f0 = param_2[8];
  uStack_d8 = param_2[0xb];
  uStack_e0 = param_2[10];
  uStack_c8 = param_2[0xd];
  uStack_d0 = param_2[0xc];
  uStack_b8 = param_2[0xf];
  uStack_c0 = param_2[0xe];
  uStack_128 = param_2[1];
  uStack_130 = *param_2;
  uStack_118 = param_2[3];
  uStack_120 = param_2[2];
  uStack_108 = param_2[5];
  uStack_110 = param_2[4];
  uStack_f8 = param_2[7];
  uStack_100 = param_2[6];
  iVar1 = (int)&uStack_130;
  func_0x000102a776f4();
  uStack_270 = uStack_118;
  uStack_278 = uStack_120;
  if (iVar1 == 1) {
    uVar14 = 0;
    uStack_270 = 0;
    uStack_278 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar12 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar13 = 2;
    uVar18 = 1;
  }
  else {
    uStack_78 = uStack_118;
    uStack_80 = uStack_120;
    uStack_158 = param_2[0x11];
    uVar5 = param_2[0x10];
    uVar16 = param_2[0x13];
    uVar15 = param_2[0x12];
    uVar17 = param_2[0x14];
    uVar8 = param_2[9];
    uVar7 = param_2[8];
    uVar10 = param_2[0xb];
    uVar9 = param_2[10];
    uVar2 = param_2[0xd];
    uVar11 = param_2[0xc];
    uVar4 = param_2[0xf];
    uVar3 = param_2[0xe];
    uStack_1d8 = param_2[1];
    uStack_1e0 = *param_2;
    uStack_1c8 = param_2[3];
    uStack_1d0 = param_2[2];
    uVar18 = param_2[5];
    uVar14 = param_2[4];
    uVar13 = param_2[7];
    uVar6 = param_2[6];
    uVar12 = (undefined2)uStack_158;
    uStack_1c0 = uVar14;
    uStack_1b8 = uVar18;
    uStack_1b0 = uVar6;
    uStack_1a8 = uVar13;
    uStack_1a0 = uVar7;
    uStack_198 = uVar8;
    uStack_190 = uVar9;
    uStack_188 = uVar10;
    uStack_180 = uVar11;
    uStack_178 = uVar2;
    uStack_170 = uVar3;
    uStack_168 = uVar4;
    uStack_160 = uVar5;
    uStack_150 = uVar15;
    uStack_148 = uVar16;
    uStack_140 = uVar17;
    FUN_102aa6ecc(&uStack_80,&uStack_288,0x112d35ff8,&UNK_10d900cd0);
    FUN_102aa6ecc(&uStack_1b0,&uStack_288,0x112ee82a8,&UNK_10db14ca0);
    FUN_102aa6124(uVar14,uVar18);
    FUN_102a957ec(uVar15,uVar16,uVar17);
    func_0x000102aab260(param_2,0x112ee5e40,&UNK_10db11230);
  }
  uStack_158 = CONCAT62(uStack_158._2_6_,uVar12);
  uStack_288 = param_3;
  uStack_280 = param_4;
  uStack_268 = uVar14;
  uStack_260 = uVar18;
  uStack_258 = uVar6;
  uStack_250 = uVar13;
  uStack_248 = uVar7;
  uStack_240 = uVar8;
  uStack_238 = uVar9;
  uStack_230 = uVar10;
  uStack_228 = uVar11;
  uStack_220 = uVar2;
  uStack_218 = uVar3;
  uStack_210 = uVar4;
  uStack_208 = uVar5;
  uStack_200 = uVar12;
  uStack_1f8 = uVar15;
  uStack_1f0 = uVar16;
  uStack_1e8 = uVar17;
  uStack_1e0 = param_3;
  uStack_1d8 = param_4;
  uStack_1d0 = uStack_278;
  uStack_1c8 = uStack_270;
  uStack_1c0 = uVar14;
  uStack_1b8 = uVar18;
  uStack_1b0 = uVar6;
  uStack_1a8 = uVar13;
  uStack_1a0 = uVar7;
  uStack_198 = uVar8;
  uStack_190 = uVar9;
  uStack_188 = uVar10;
  uStack_180 = uVar11;
  uStack_178 = uVar2;
  uStack_170 = uVar3;
  uStack_168 = uVar4;
  uStack_160 = uVar5;
  uStack_150 = uVar15;
  uStack_148 = uVar16;
  uStack_140 = uVar17;
  FUN_102a7b970(&uStack_288,auStack_330);
  func_0x000102a7b9ac(&uStack_1e0);
  param_1[0x11] = CONCAT62(uStack_1fe,uStack_200);
  param_1[0x10] = uStack_208;
  param_1[0x13] = uStack_1f0;
  param_1[0x12] = uStack_1f8;
  param_1[0x14] = uStack_1e8;
  param_1[9] = uStack_240;
  param_1[8] = uStack_248;
  param_1[0xb] = uStack_230;
  param_1[10] = uStack_238;
  param_1[0xd] = uStack_220;
  param_1[0xc] = uStack_228;
  param_1[0xf] = uStack_210;
  param_1[0xe] = uStack_218;
  param_1[1] = uStack_280;
  *param_1 = uStack_288;
  param_1[3] = uStack_270;
  param_1[2] = uStack_278;
  param_1[5] = uStack_260;
  param_1[4] = uStack_268;
  param_1[7] = uStack_250;
  param_1[6] = uStack_258;
  return;
}



/* Entry: 102aa6730; end: 102aa699f;  */

void FUN_102aa6730(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_190 [95];
  undefined1 uStack_131;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  undefined6 uStack_e6;
  undefined2 uStack_e0;
  undefined8 uStack_de;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  undefined8 uStack_7e;
  
  lVar1 = 0x112ee82b0;
  func_0x0001000285a8(0x112ee82b0,&UNK_10db14ca8);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  FUN_102aa8220();
  func_0x000107c606ec(auStack_190 + -extraout_x8,&UNK_110592c88,&UNK_110592c88,param_1,uVar2,uVar3);
  uStack_128 = unaff_x20[1];
  uStack_130 = *unaff_x20;
  auStack_190[0] = 0;
  uVar2 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  uVar3 = uVar2;
  func_0x000102aa8260();
  func_0x000107c60554(&uStack_130,auStack_190,lVar1,uVar2,uVar3);
  if (unaff_x21 == 0) {
    uStack_128 = unaff_x20[5];
    uStack_130 = unaff_x20[4];
    auStack_190[0] = 1;
    uVar2 = 0x112ee82c0;
    func_0x0001000285a8(0x112ee82c0,&UNK_10db14cb0);
    uVar3 = 0x112ee82c8;
    FUN_102aa8308(0x112ee82c8,0x112ee82c0,&UNK_10db14cb0,0x102aa82c8);
    func_0x000107c60554(&uStack_130,auStack_190,lVar1,uVar2,uVar3);
    uStack_108 = unaff_x20[0xb];
    uStack_110 = unaff_x20[10];
    uStack_98 = unaff_x20[0xd];
    uStack_a0 = unaff_x20[0xc];
    uStack_118 = unaff_x20[9];
    uStack_120 = unaff_x20[8];
    uStack_a8 = unaff_x20[0xb];
    uStack_b0 = unaff_x20[10];
    uStack_f8 = unaff_x20[0xd];
    uStack_100 = unaff_x20[0xc];
    uStack_90 = unaff_x20[0xe];
    uStack_88 = (undefined2)unaff_x20[0xf];
    uStack_7e = *(undefined8 *)((long)unaff_x20 + 0x82);
    uStack_86 = (undefined6)*(undefined8 *)((long)unaff_x20 + 0x7a);
    uStack_80 = (undefined2)((ulong)*(undefined8 *)((long)unaff_x20 + 0x7a) >> 0x30);
    uStack_c8 = unaff_x20[7];
    uStack_d0 = unaff_x20[6];
    uStack_b8 = unaff_x20[9];
    uStack_c0 = unaff_x20[8];
    uStack_128 = unaff_x20[7];
    uStack_130 = unaff_x20[6];
    uStack_f0 = unaff_x20[0xe];
    uStack_e8 = (undefined2)unaff_x20[0xf];
    uStack_de = *(undefined8 *)((long)unaff_x20 + 0x82);
    uStack_e6 = (undefined6)*(undefined8 *)((long)unaff_x20 + 0x7a);
    uStack_e0 = (undefined2)((ulong)*(undefined8 *)((long)unaff_x20 + 0x7a) >> 0x30);
    uStack_131 = 2;
    uVar2 = 0x112ee82a8;
    FUN_102aa6ecc(&uStack_d0,auStack_190,0x112ee82a8,&UNK_10db14ca0);
    func_0x0001000285a8(0x112ee82a8,&UNK_10db14ca0);
    uVar3 = 0x112ee82d8;
    FUN_102aa8308(0x112ee82d8,0x112ee82a8,&UNK_10db14ca0,FUN_102aa8370);
    func_0x000107c60554(&uStack_130,&uStack_131,lVar1,uVar2,uVar3);
    func_0x000102aab260(&uStack_130,0x112ee82a8,&UNK_10db14ca0);
  }
  (**(code **)(lVar4 + 8))(auStack_190 + -extraout_x8,lVar1);
  return;
}



/* Entry: 102aa69a0; end: 102aa69a3;  */

undefined8 FUN_102aa69a0(ulong *param_1,ulong *param_2)

{
  char cVar1;
  char cVar2;
  ulong *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  undefined1 uStack_388;
  undefined7 uStack_387;
  undefined1 uStack_380;
  undefined8 uStack_37f;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  undefined2 uStack_308;
  undefined6 uStack_306;
  undefined2 uStack_300;
  undefined8 uStack_2fe;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  undefined2 uStack_2a8;
  undefined6 uStack_2a6;
  undefined2 uStack_2a0;
  undefined6 uStack_29e;
  undefined1 uStack_298;
  char cStack_297;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  undefined2 uStack_248;
  undefined6 uStack_246;
  undefined2 uStack_240;
  undefined8 uStack_23e;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  undefined2 uStack_1e8;
  undefined6 uStack_1e6;
  undefined2 uStack_1e0;
  undefined6 uStack_1de;
  undefined2 uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined2 uStack_188;
  undefined6 uStack_186;
  undefined2 uStack_180;
  undefined8 uStack_17e;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined2 uStack_128;
  undefined6 uStack_126;
  undefined2 uStack_120;
  undefined8 uStack_11e;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  undefined2 uStack_c0;
  undefined8 uStack_be;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  uVar6 = param_1[1];
  uVar5 = param_2[1];
  if (uVar6 == 0) {
    if (uVar5 != 0) {
      return 0;
    }
  }
  else {
    if (uVar5 == 0) {
      return 0;
    }
    uVar7 = *param_1;
    if ((uVar7 != *param_2 || uVar6 != uVar5) &&
       (func_0x000107c605b8(uVar7,uVar6,*param_2,uVar5,0), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  uVar6 = param_1[3];
  uVar5 = param_2[3];
  if (uVar6 == 0) {
    if (uVar5 != 0) {
      return 0;
    }
  }
  else {
    if (uVar5 == 0) {
      return 0;
    }
    uVar7 = param_1[2];
    if (((uVar7 != param_2[2]) || (uVar6 != uVar5)) &&
       (func_0x000107c605b8(uVar7,uVar6,param_2[2],uVar5,0), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  uVar6 = param_1[5];
  uVar5 = param_2[5];
  if (uVar6 == 1) {
    if (uVar5 != 1) {
      return 0;
    }
  }
  else {
    if (uVar5 == 1) {
      return 0;
    }
    if (uVar6 == 0) {
      if (uVar5 != 0) {
        return 0;
      }
    }
    else {
      if (uVar5 == 0) {
        return 0;
      }
      uVar7 = param_1[4];
      if (((uVar7 != param_2[4]) || (uVar6 != uVar5)) &&
         (func_0x000107c605b8(uVar7,uVar6,param_2[4],uVar5,0), (uVar7 & 1) == 0)) {
        return 0;
      }
    }
  }
  uStack_208 = param_1[0xb];
  uStack_210 = param_1[10];
  uStack_d8 = param_1[0xd];
  uStack_e0 = param_1[0xc];
  uStack_218 = param_1[9];
  uStack_220 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_1f8 = param_1[0xd];
  uStack_200 = param_1[0xc];
  uStack_d0 = param_1[0xe];
  uStack_c8 = (undefined2)param_1[0xf];
  uStack_be = *(undefined8 *)((long)param_1 + 0x82);
  uStack_c6 = (undefined6)*(undefined8 *)((long)param_1 + 0x7a);
  uStack_c0 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x7a) >> 0x30);
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_228 = param_1[7];
  uStack_230 = param_1[6];
  uStack_1a8 = param_2[0xb];
  uStack_1b0 = param_2[10];
  uStack_138 = param_2[0xd];
  uStack_140 = param_2[0xc];
  uStack_1b8 = param_2[9];
  uStack_1c0 = param_2[8];
  uStack_148 = param_2[0xb];
  uStack_150 = param_2[10];
  uStack_198 = param_2[0xd];
  uStack_1a0 = param_2[0xc];
  uStack_130 = param_2[0xe];
  uStack_128 = (undefined2)param_2[0xf];
  uStack_11e = *(undefined8 *)((long)param_2 + 0x82);
  uStack_126 = (undefined6)*(undefined8 *)((long)param_2 + 0x7a);
  uStack_120 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0x7a) >> 0x30);
  uStack_168 = param_2[7];
  uStack_170 = param_2[6];
  uStack_158 = param_2[9];
  uStack_160 = param_2[8];
  uStack_1c8 = param_2[7];
  uStack_1d0 = param_2[6];
  uStack_1f0 = param_1[0xe];
  uStack_1e8 = (undefined2)param_1[0xf];
  uVar9 = *(undefined8 *)((long)param_1 + 0x82);
  uStack_1de = (undefined6)uVar9;
  uStack_1d8 = (undefined2)((ulong)uVar9 >> 0x30);
  uStack_1e6 = (undefined6)*(undefined8 *)((long)param_1 + 0x7a);
  uStack_1e0 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x7a) >> 0x30);
  uStack_190 = param_2[0xe];
  uStack_188 = (undefined2)param_2[0xf];
  uStack_17e = *(undefined8 *)((long)param_2 + 0x82);
  uStack_186 = (undefined6)*(undefined8 *)((long)param_2 + 0x7a);
  uStack_180 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0x7a) >> 0x30);
  if (uStack_228 == 2) {
    if (uStack_1c8 == 2) {
      uStack_2c8 = param_1[0xb];
      uStack_2d0 = param_1[10];
      uStack_2b8 = param_1[0xd];
      uStack_2c0 = param_1[0xc];
      uStack_2b0 = param_1[0xe];
      uStack_2a8 = (undefined2)param_1[0xf];
      uVar9 = *(undefined8 *)((long)param_1 + 0x82);
      uStack_29e = (undefined6)uVar9;
      uStack_298 = (undefined1)((ulong)uVar9 >> 0x30);
      cStack_297 = (char)((ulong)uVar9 >> 0x38);
      uStack_2a6 = (undefined6)*(undefined8 *)((long)param_1 + 0x7a);
      uStack_2a0 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x7a) >> 0x30);
      uStack_2e8 = param_1[7];
      uStack_2f0 = param_1[6];
      uStack_2d8 = param_1[9];
      uStack_2e0 = param_1[8];
      FUN_102aa6ecc(&uStack_110,&uStack_350,0x112ee82a8,&UNK_10db14ca0);
      FUN_102aa6ecc(&uStack_170,&uStack_350,0x112ee82a8,&UNK_10db14ca0);
      puVar3 = &uStack_2f0;
      goto LAB_102aa863c;
    }
  }
  else {
    uStack_2c8 = param_1[0xb];
    uStack_2d0 = param_1[10];
    uStack_2b8 = param_1[0xd];
    uStack_2c0 = param_1[0xc];
    uStack_2b0 = param_1[0xe];
    uStack_2a8 = (undefined2)param_1[0xf];
    uVar10 = *(undefined8 *)((long)param_1 + 0x82);
    uStack_29e = (undefined6)uVar10;
    uStack_298 = (undefined1)((ulong)uVar10 >> 0x30);
    cStack_297 = (char)((ulong)uVar10 >> 0x38);
    cVar2 = cStack_297;
    uStack_2a6 = (undefined6)*(undefined8 *)((long)param_1 + 0x7a);
    uStack_2a0 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x7a) >> 0x30);
    uVar6 = param_1[7];
    uVar5 = param_1[6];
    uVar13 = param_1[9];
    uVar7 = param_1[8];
    if (uStack_1c8 != 2) {
      uVar11 = param_2[7];
      uVar8 = param_2[6];
      uVar14 = param_2[9];
      uVar12 = param_2[8];
      uVar9 = *(undefined8 *)((long)param_2 + 0x82);
      uStack_300 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0x7a) >> 0x30);
      uStack_328 = param_2[0xb];
      uStack_330 = param_2[10];
      uStack_318 = param_2[0xd];
      uStack_320 = param_2[0xc];
      uStack_310 = param_2[0xe];
      uStack_308 = (undefined2)param_2[0xf];
      uStack_306 = (undefined6)(param_2[0xf] >> 0x10);
      uStack_2fe._7_1_ = (char)((ulong)uVar9 >> 0x38);
      cVar1 = uStack_2fe._7_1_;
      uStack_350 = uVar8;
      uStack_348 = uVar11;
      uStack_340 = uVar12;
      uStack_338 = uVar14;
      uStack_2fe = uVar9;
      uStack_2f0 = uVar5;
      uStack_2e8 = uVar6;
      uStack_2e0 = uVar7;
      uStack_2d8 = uVar13;
      if (uVar6 == 1) {
        if (uVar11 != 1) goto LAB_102aa8894;
        FUN_102aa6ecc(&uStack_110,&uStack_3b0,0x112ee82a8,&UNK_10db14ca0);
        FUN_102aa6ecc(&uStack_170,&uStack_3b0,0x112ee82a8,&UNK_10db14ca0);
        FUN_102aa6ecc(&uStack_350,&uStack_3b0,0x112ee82a8,&UNK_10db14ca0);
LAB_102aa89cc:
        if (cVar2 == '\x01') {
          func_0x000102aab260(&uStack_350,0x112ee82a8,&UNK_10db14ca0);
          if (cVar1 == '\x01') {
LAB_102aa8b44:
            puVar3 = &uStack_230;
LAB_102aa863c:
            func_0x000102aab260(puVar3,0x112ee82a8,&UNK_10db14ca0);
            uVar5 = param_1[0x14];
            uVar6 = param_2[0x14];
            if (uVar5 == 0) {
              if (uVar6 == 0) {
                return 1;
              }
              return 0;
            }
            if (uVar6 == 0) {
              return 0;
            }
            uVar7 = param_1[0x12];
            uVar8 = param_1[0x13];
            uVar13 = param_2[0x12];
            uVar11 = param_2[0x13];
            if (uVar8 == 0) {
              if (uVar11 != 0) {
                FUN_102a957ec(uVar13,uVar11,uVar6);
                func_0x000107c6142c(uVar6);
                func_0x000107c6142c(uVar11);
                return 0;
              }
            }
            else {
              if (uVar11 == 0) {
                return 0;
              }
              if (((uVar7 != uVar13) || (uVar8 != uVar11)) &&
                 (uVar12 = uVar7, func_0x000107c605b8(uVar7,uVar8,uVar13,uVar11,0),
                 (uVar12 & 1) == 0)) {
                FUN_102a957ec(uVar13,uVar11,uVar6);
                FUN_102a957ec(uVar7,uVar8,uVar5);
                func_0x000107c6142c(uVar6);
                func_0x000107c6142c(uVar11);
                func_0x000102aab2a0(uVar7,uVar8,uVar5);
                return 0;
              }
            }
            FUN_102a957ec(uVar13,uVar11,uVar6);
            FUN_102a957ec(uVar7,uVar8,uVar5);
            uVar13 = uVar5;
            FUN_102aa75a4(uVar5,uVar6);
            func_0x000107c6142c(uVar6);
            func_0x000107c6142c(uVar11);
            func_0x000102aab2a0(uVar7,uVar8,uVar5);
            if ((uVar13 & 1) == 0) {
              return 0;
            }
            return 1;
          }
        }
        else {
          if (cVar1 == '\x01') goto LAB_102aa8a0c;
          uStack_3a8 = param_2[0xb];
          uStack_3b0 = param_2[10];
          uStack_398 = param_2[0xd];
          uStack_3a0 = param_2[0xc];
          uStack_390 = param_2[0xe];
          uStack_388 = (undefined1)param_2[0xf];
          uStack_37f = *(undefined8 *)((long)param_2 + 0x81);
          uStack_387 = (undefined7)*(undefined8 *)((long)param_2 + 0x79);
          uStack_380 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x79) >> 0x38);
          uStack_a8 = param_1[0xb];
          uStack_b0 = param_1[10];
          uStack_98 = param_1[0xd];
          uStack_a0 = param_1[0xc];
          uStack_90 = param_1[0xe];
          uStack_88 = (undefined1)param_1[0xf];
          uStack_7f = *(undefined8 *)((long)param_1 + 0x81);
          uStack_87 = (undefined7)*(undefined8 *)((long)param_1 + 0x79);
          uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x79) >> 0x38);
          puVar3 = &uStack_b0;
          FUN_102aa83b0(puVar3,&uStack_3b0);
          func_0x000102aab260(&uStack_350,0x112ee82a8,&UNK_10db14ca0);
          if (((ulong)puVar3 & 1) != 0) goto LAB_102aa8b44;
        }
      }
      else {
        if (uVar11 != 1) {
          FUN_102aa92f8(uVar5,uVar6,uVar7,uVar13,uVar8,uVar11,uVar12,uVar14);
          FUN_102aa6ecc(&uStack_110,&uStack_3b0,0x112ee82a8,&UNK_10db14ca0);
          FUN_102aa6ecc(&uStack_170,&uStack_3b0,0x112ee82a8,&UNK_10db14ca0);
          FUN_102aa6ecc(&uStack_350,&uStack_3b0,0x112ee82a8,&UNK_10db14ca0);
          FUN_102aa6ecc(&uStack_2f0,&uStack_3b0,0x112ee82a8,&UNK_10db14ca0);
          func_0x000107c6142c(uVar11);
          func_0x000107c6142c(uVar14);
          func_0x000102aab260(&uStack_2f0,0x112ee82a8,&UNK_10db14ca0);
          if ((uVar5 & 1) != 0) goto LAB_102aa89cc;
LAB_102aa8a0c:
          func_0x000102aab260(&uStack_350,0x112ee82a8,&UNK_10db14ca0);
          goto LAB_102aa8a24;
        }
LAB_102aa8894:
        FUN_102aa6ecc(&uStack_110,&uStack_3b0,0x112ee82a8,&UNK_10db14ca0);
        FUN_102aa6ecc(&uStack_170,&uStack_3b0,0x112ee82a8,&UNK_10db14ca0);
        FUN_102aa6ecc(&uStack_2f0,&uStack_3b0,0x112ee82a8,&UNK_10db14ca0);
        func_0x000102aab1f8(uVar5,uVar6,uVar7,uVar13);
        func_0x000102aab1f8(uVar8,uVar11,uVar12,uVar14);
      }
LAB_102aa8a24:
      uVar9 = 0x112ee82a8;
      puVar4 = &UNK_10db14ca0;
      puVar3 = &uStack_230;
      goto LAB_102aa8a38;
    }
  }
  uStack_248 = uStack_188;
  uStack_2a8 = uStack_1e8;
  uStack_2a6 = uStack_1e6;
  uStack_298 = (undefined1)((ulong)uVar9 >> 0x30);
  cStack_297 = (char)((ulong)uVar9 >> 0x38);
  uStack_2a0 = uStack_1e0;
  uStack_29e = uStack_1de;
  uStack_2f0 = uStack_230;
  uStack_2e8 = uStack_228;
  uStack_2e0 = uStack_220;
  uStack_2d8 = uStack_218;
  uStack_2d0 = uStack_210;
  uStack_2c8 = uStack_208;
  uStack_2c0 = uStack_200;
  uStack_2b8 = uStack_1f8;
  uStack_2b0 = uStack_1f0;
  uStack_290 = uStack_1d0;
  uStack_288 = uStack_1c8;
  uStack_280 = uStack_1c0;
  uStack_278 = uStack_1b8;
  uStack_270 = uStack_1b0;
  uStack_268 = uStack_1a8;
  uStack_260 = uStack_1a0;
  uStack_258 = uStack_198;
  uStack_250 = uStack_190;
  uStack_246 = uStack_186;
  uStack_240 = uStack_180;
  uStack_23e = uStack_17e;
  FUN_102aa6ecc(&uStack_110,&uStack_350,0x112ee82a8,&UNK_10db14ca0);
  FUN_102aa6ecc(&uStack_170,&uStack_350,0x112ee82a8,&UNK_10db14ca0);
  uVar9 = 0x112ee8498;
  puVar4 = &UNK_10db15788;
  puVar3 = &uStack_2f0;
LAB_102aa8a38:
  func_0x000102aab260(puVar3,uVar9,puVar4);
  return 0;
}



/* Entry: 102aa69a4; end: 102aa6a17;  */

void FUN_102aa69a4(undefined8 *param_1)

{
  long unaff_x21;
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
  
  FUN_102aa7ee0(&uStack_c8);
  if (unaff_x21 == 0) {
    param_1[0x11] = uStack_40;
    param_1[0x10] = uStack_48;
    param_1[0x13] = uStack_30;
    param_1[0x12] = uStack_38;
    param_1[0x14] = uStack_28;
    param_1[9] = uStack_80;
    param_1[8] = uStack_88;
    param_1[0xb] = uStack_70;
    param_1[10] = uStack_78;
    param_1[0xd] = uStack_60;
    param_1[0xc] = uStack_68;
    param_1[0xf] = uStack_50;
    param_1[0xe] = uStack_58;
    param_1[1] = uStack_c0;
    *param_1 = uStack_c8;
    param_1[3] = uStack_b0;
    param_1[2] = uStack_b8;
    param_1[5] = uStack_a0;
    param_1[4] = uStack_a8;
    param_1[7] = uStack_90;
    param_1[6] = uStack_98;
  }
  return;
}



/* Entry: 102aa6a18; end: 102aa6a2b;  */

void FUN_102aa6a18(void)

{
  FUN_102aa6730();
  return;
}



/* Entry: 102aa6a2c; end: 102aa6abb;  */

uint FUN_102aa6a2c(undefined8 *param_1,undefined8 *param_2)

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
  uStack_f8 = param_1[0x11];
  uStack_100 = param_1[0x10];
  uStack_e8 = param_1[0x13];
  uStack_f0 = param_1[0x12];
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
  FUN_102aa8448(&uStack_180,&uStack_d0);
  return uVar1 & 1;
}



/* Entry: 102aa6abc; end: 102aa6ac3;  */

undefined8 FUN_102aa6abc(void)

{
  return 1;
}



/* Entry: 102aa6ac4; end: 102aa6b63;  */

void FUN_102aa6ac4(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102aa6b64; end: 102aa6b77;  */

undefined1  [16] FUN_102aa6b64(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe600000000000000;
  auVar1._0_8_ = 0x6c72556d6669;
  return auVar1;
}



/* Entry: 102aa6b78; end: 102aa6bf7;  */

void FUN_102aa6b78(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0x69;
  if (param_2 == 0x6c72556d6669 && param_3 == -0x1a00000000000000) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    func_0x000107c605b8(0x6c72556d6669,0xe600000000000000,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 102aa6bf8; end: 102aa6c0f;  */

undefined1  [16] FUN_102aa6bf8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102aa6c10; end: 102aa6c5f;  */

void FUN_102aa6c10(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102aa8b5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102aa6c60; end: 102aa6d87;  */

/* WARNING: Removing unreachable block (ram,0x000102aa6d24) */

void FUN_102aa6c60(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  
  lVar3 = 0x112ee82f8;
  func_0x0001000285a8(0x112ee82f8,&UNK_10db14cc0);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_102aa8b5c();
  puVar5 = &UNK_110592bf8;
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_110592bf8,&UNK_110592bf8,lVar4,
                      uVar1,uVar2);
  if (unaff_x21 == 0) {
    lVar4 = lVar3;
    func_0x000107c604d4();
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



/* Entry: 102aa6d88; end: 102aa6e77;  */

void FUN_102aa6d88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar6;
  
  lVar5 = 0x112ee82e8;
  func_0x0001000285a8(0x112ee82e8,&UNK_10db14cb8);
  lVar6 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  FUN_102aa8b5c();
  func_0x000107c606ec(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_110592bf8,&UNK_110592bf8,param_1,
                      uVar2,uVar4);
  func_0x000107c60520(uVar1,uVar3);
  (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar5);
  return;
}



/* Entry: 102aa6e78; end: 102aa6ecb;  */

undefined8 FUN_102aa6e78(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar2 == 0) {
      return 1;
    }
  }
  else if ((uVar2 != 0) &&
          ((uVar1 = *param_1, uVar1 == *param_2 && param_1[1] == uVar2 ||
           (func_0x000107c605b8(), (uVar1 & 1) != 0)))) {
    return 1;
  }
  return 0;
}


