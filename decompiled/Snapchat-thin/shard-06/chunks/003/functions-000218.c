/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10471649c; end: 10471649f;  */

void FUN_10471649c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e0b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd311a0;
  _swift_getWitnessTable(&UNK_10dd311a0,&UNK_11079d4e0);
  puRam000000011308e0b0 = puVar1;
  return;
}



/* Entry: 1047164a0; end: 1047164df;  */

void FUN_1047164a0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e0b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd311a0;
  _swift_getWitnessTable(&UNK_10dd311a0,&UNK_11079d4e0);
  puRam000000011308e0b0 = puVar1;
  return;
}



/* Entry: 1047164e0; end: 1047164f3;  */

bool FUN_1047164e0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1047164f4; end: 10471659f;  */

void FUN_1047164f4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047165a0; end: 1047166ab;  */

undefined1  [16] FUN_1047165a0(void)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  bVar3 = *unaff_x20;
  if (3 < bVar3) {
    pcVar4 = "endSwipeTimestampMs";
    uVar6 = 0xd000000000000016;
    if (bVar3 != 6) {
      pcVar4 = "hintDisplayTimestampMs";
      uVar6 = 0xd00000000000001b;
    }
    pcVar5 = "endSwipePositionInfo";
    uVar7 = 0xd000000000000015;
    if (bVar3 != 4) {
      pcVar5 = "startSwipeTimestampMs";
      uVar7 = 0xd000000000000013;
    }
    if (bVar3 < 6) {
      pcVar4 = pcVar5;
      uVar6 = uVar7;
    }
    auVar9._8_8_ = (ulong)pcVar4 | 0x8000000000000000;
    auVar9._0_8_ = uVar6;
    return auVar9;
  }
  pcVar4 = "swipeFailureReason";
  uVar6 = 0xd000000000000016;
  if (bVar3 != 2) {
    pcVar4 = "startSwipePositionInfo";
    uVar6 = 0xd000000000000014;
  }
  uVar1 = 0xeb00000000656372;
  uVar7 = 0x756f536570697773;
  if (bVar3 != 0) {
    uVar1 = 0x800000010f20d020;
    uVar7 = 0xd000000000000012;
  }
  uVar2 = (ulong)pcVar4 | 0x8000000000000000;
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar6 = uVar7;
  }
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = uVar6;
  return auVar8;
}



/* Entry: 1047166ac; end: 1047166cf;  */

void FUN_1047166ac(undefined1 *param_1,undefined1 param_2)

{
  FUN_104716f78();
  *param_1 = param_2;
  return;
}



/* Entry: 1047166d0; end: 1047166e7;  */

undefined1  [16] FUN_1047166d0(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1047166e8; end: 104716737;  */

void FUN_1047166e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_104716eb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 104716738; end: 1047169a3;  */

void FUN_104716738(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_51;
  
  lVar3 = 0x11308e0c0;
  func_0x0001000285a8(0x11308e0c0,&UNK_10dd312b0);
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_104716eb8();
  puVar4 = &UNK_11079d6b8;
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            ((long)&uStack_80 - extraout_x8,&UNK_11079d6b8,&UNK_11079d6b8,param_1,uVar1,uVar2);
  uStack_80 = *unaff_x20;
  uStack_51 = 0;
  func_0x000104716ef8();
  puVar5 = &uStack_80;
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
            (puVar5,&uStack_51,lVar3,&UNK_1107972f8,puVar4);
  if (unaff_x21 == 0) {
    uStack_80 = unaff_x20[1];
    uStack_51 = 1;
    func_0x000104716f38();
    puVar6 = &uStack_80;
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (puVar6,&uStack_51,lVar3,&UNK_110797250,puVar5);
    uStack_78 = unaff_x20[3];
    uStack_80 = unaff_x20[2];
    uStack_68 = unaff_x20[5];
    uStack_70 = unaff_x20[4];
    uStack_51 = 2;
    func_0x0001047126a8();
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&uStack_80,&uStack_51,lVar3,&UNK_11079d440,puVar6);
    uStack_78 = unaff_x20[7];
    uStack_80 = unaff_x20[6];
    uStack_68 = unaff_x20[9];
    uStack_70 = unaff_x20[8];
    uStack_51 = 3;
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&uStack_80,&uStack_51,lVar3,&UNK_11079d440,puVar6);
    uStack_80._0_1_ = 4;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[10],&uStack_80,lVar3);
    uStack_80._0_1_ = 5;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[0xb],&uStack_80,lVar3);
    uStack_80._0_1_ = 6;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySdSg_xtKF
              (unaff_x20[0xc],*(undefined1 *)(unaff_x20 + 0xd),&uStack_80,lVar3);
    uStack_80 = CONCAT71(uStack_80._1_7_,7);
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(unaff_x20[0xe],&uStack_80,lVar3);
  }
  (**(code **)(lVar7 + 8))((long)&uStack_80 - extraout_x8,lVar3);
  return;
}



/* Entry: 1047169a4; end: 104716c73;  */

void FUN_1047169a4(void)

{
  ulong uVar1;
  undefined8 *unaff_x20;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  __ss6HasherV8_combineyySuF(*unaff_x20);
  __ss6HasherV8_combineyySuF(unaff_x20[1]);
  dVar4 = (double)unaff_x20[3];
  dVar5 = (double)unaff_x20[4];
  dVar6 = (double)unaff_x20[5];
  dVar3 = 0.0;
  if ((double)unaff_x20[2] != 0.0) {
    dVar3 = (double)unaff_x20[2];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (dVar4 != 0.0) {
    dVar3 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (dVar5 != 0.0) {
    dVar3 = dVar5;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (dVar6 != 0.0) {
    dVar3 = dVar6;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar4 = (double)unaff_x20[7];
  dVar5 = (double)unaff_x20[8];
  dVar6 = (double)unaff_x20[9];
  dVar3 = 0.0;
  if ((double)unaff_x20[6] != 0.0) {
    dVar3 = (double)unaff_x20[6];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (dVar4 != 0.0) {
    dVar3 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (dVar5 != 0.0) {
    dVar3 = dVar5;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (dVar6 != 0.0) {
    dVar3 = dVar6;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if ((double)unaff_x20[10] != 0.0) {
    dVar3 = (double)unaff_x20[10];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if ((double)unaff_x20[0xb] != 0.0) {
    dVar3 = (double)unaff_x20[0xb];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  if (*(char *)(unaff_x20 + 0xd) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = unaff_x20[0xc];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[0xe]);
  return;
}



/* Entry: 104716c74; end: 104716c7b;  */

void FUN_104716c74(void)

{
  ulong uVar1;
  undefined8 *unaff_x20;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_98 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_98,0);
  __ss6HasherV8_combineyySuF(*unaff_x20);
  __ss6HasherV8_combineyySuF(unaff_x20[1]);
  dVar4 = (double)unaff_x20[3];
  dVar5 = (double)unaff_x20[4];
  dVar6 = (double)unaff_x20[5];
  dVar3 = 0.0;
  if ((double)unaff_x20[2] != 0.0) {
    dVar3 = (double)unaff_x20[2];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (dVar4 != 0.0) {
    dVar3 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (dVar5 != 0.0) {
    dVar3 = dVar5;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (dVar6 != 0.0) {
    dVar3 = dVar6;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar4 = (double)unaff_x20[7];
  dVar5 = (double)unaff_x20[8];
  dVar6 = (double)unaff_x20[9];
  dVar3 = 0.0;
  if ((double)unaff_x20[6] != 0.0) {
    dVar3 = (double)unaff_x20[6];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (dVar4 != 0.0) {
    dVar3 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (dVar5 != 0.0) {
    dVar3 = dVar5;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (dVar6 != 0.0) {
    dVar3 = dVar6;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if ((double)unaff_x20[10] != 0.0) {
    dVar3 = (double)unaff_x20[10];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if ((double)unaff_x20[0xb] != 0.0) {
    dVar3 = (double)unaff_x20[0xb];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  if (*(char *)(unaff_x20 + 0xd) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = unaff_x20[0xc];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[0xe]);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104716c7c; end: 104716cb3;  */

void FUN_104716c7c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1047169a4(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104716cb4; end: 104716d17;  */

void FUN_104716cb4(undefined8 *param_1)

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
  
  FUN_104717208(&uStack_98);
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



/* Entry: 104716d18; end: 104716d2b;  */

void FUN_104716d18(void)

{
  FUN_104716738();
  return;
}



/* Entry: 104716d2c; end: 104716dab;  */

uint FUN_104716d2c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_104716dac(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 104716dac; end: 104716eb7;  */

bool FUN_104716dac(int *param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  
  if (((*param_1 == *param_2) && (param_1[2] == param_2[2])) &&
     (*(double *)(param_1 + 4) == *(double *)(param_2 + 4))) {
    bVar1 = false;
    if ((*(double *)(param_1 + 6) == *(double *)(param_2 + 6)) &&
       (bVar1 = false, !NAN(*(double *)(param_1 + 8)) && !NAN(*(double *)(param_2 + 8)))) {
      bVar1 = *(double *)(param_1 + 8) == *(double *)(param_2 + 8);
    }
    bVar2 = false;
    if ((bVar1) &&
       (bVar2 = false, !NAN(*(double *)(param_1 + 10)) && !NAN(*(double *)(param_2 + 10)))) {
      bVar2 = *(double *)(param_1 + 10) == *(double *)(param_2 + 10);
    }
    if (((((bVar2) && (*(double *)(param_1 + 0xc) == *(double *)(param_2 + 0xc))) &&
         (*(double *)(param_1 + 0xe) == *(double *)(param_2 + 0xe))) &&
        ((*(double *)(param_1 + 0x10) == *(double *)(param_2 + 0x10) &&
         (*(double *)(param_1 + 0x12) == *(double *)(param_2 + 0x12))))) &&
       ((*(double *)(param_1 + 0x14) == *(double *)(param_2 + 0x14) &&
        (*(double *)(param_1 + 0x16) == *(double *)(param_2 + 0x16))))) {
      if ((char)param_1[0x1a] == '\x01') {
        if ((char)param_2[0x1a] == '\x01') {
LAB_104716ea4:
          return *(long *)(param_1 + 0x1c) == *(long *)(param_2 + 0x1c);
        }
      }
      else if (((char)param_2[0x1a] != '\x01') &&
              (*(double *)(param_1 + 0x18) == *(double *)(param_2 + 0x18))) goto LAB_104716ea4;
    }
  }
  return false;
}



/* Entry: 104716eb8; end: 104716f77;  */

void FUN_104716eb8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e0c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31444;
  _swift_getWitnessTable(&UNK_10dd31444,&UNK_11079d6b8);
  puRam000000011308e0c8 = puVar1;
  return;
}



/* Entry: 104716f78; end: 104717207;  */

undefined4 FUN_104716f78(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = 0x756f536570697773;
  if ((param_1 == 0x756f536570697773 && param_2 == -0x14ffffffff9a9c8e) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x756f536570697773,0xeb00000000656372,param_1,param_2,0), (uVar2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 0;
  }
  else {
    uVar2 = 0;
    if (((param_1 == -0x2fffffffffffffee) && (param_2 == -0x7ffffffef0df2fe0)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd000000000000012,0x800000010f20d020,param_1,param_2,0), (uVar2 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar1 = 1;
    }
    else {
      if ((param_1 != -0x2fffffffffffffea) || (param_2 != -0x7ffffffef0df2fc0)) {
        uVar2 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd000000000000016,0x800000010f20d040,param_1,param_2,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_1 == -0x2fffffffffffffec) && (param_2 == -0x7ffffffef0df2fa0)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0xd000000000000014,0x800000010f20d060,param_1,param_2,0), (uVar2 & 1) != 0)
             ) {
            _swift_bridgeObjectRelease(param_2);
            return 3;
          }
          uVar2 = 0xd000000000000015;
          if (((param_1 == -0x2fffffffffffffeb) && (param_2 == -0x7ffffffef0df2f80)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0xd000000000000015,0x800000010f20d080,param_1,param_2,0), (uVar2 & 1) != 0)
             ) {
            _swift_bridgeObjectRelease(param_2);
            return 4;
          }
          uVar2 = 0xd000000000000013;
          if (((param_1 != -0x2fffffffffffffed) || (param_2 != -0x7ffffffef0df2f60)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0xd000000000000013,0x800000010f20d0a0,param_1,param_2,0), (uVar2 & 1) == 0)
             ) {
            if ((param_1 != -0x2fffffffffffffea) || (param_2 != -0x7ffffffef0df2f40)) {
              uVar2 = 0;
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0xd000000000000016,0x800000010f20d0c0,param_1,param_2,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = 0xd00000000000001b;
                if ((param_1 == -0x2fffffffffffffe5) && (param_2 == -0x7ffffffef0df2f20)) {
                  _swift_bridgeObjectRelease(0x800000010f20d0e0);
                  return 7;
                }
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0xd00000000000001b,0x800000010f20d0e0,param_1,param_2,0);
                _swift_bridgeObjectRelease(param_2);
                if ((uVar2 & 1) != 0) {
                  return 7;
                }
                return 8;
              }
            }
            _swift_bridgeObjectRelease(param_2);
            return 6;
          }
          _swift_bridgeObjectRelease(param_2);
          return 5;
        }
      }
      _swift_bridgeObjectRelease(param_2);
      uVar1 = 2;
    }
  }
  return uVar1;
}



/* Entry: 104717208; end: 1047174f3;  */

/* WARNING: Removing unreachable block (ram,0x00010471743c) */

void FUN_104717208(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_51;
  
  lVar1 = 0x11308e100;
  func_0x0001000285a8(0x11308e100,&UNK_10dd31498);
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  lVar2 = param_2;
  func_0x0001000a8868(param_2,uVar8);
  FUN_104716eb8();
  puVar3 = &UNK_11079d6b8;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&uStack_e0 - extraout_x8,&UNK_11079d6b8,&UNK_11079d6b8,lVar2,uVar8,uVar9);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    func_0x00010471780c();
    puVar4 = &UNK_1107972f8;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&uStack_90,&UNK_1107972f8,&uStack_51,lVar1,&UNK_1107972f8,puVar3);
    uVar8 = CONCAT71(uStack_8f,uStack_90);
    uStack_51 = 1;
    func_0x00010471784c();
    puVar3 = &UNK_110797250;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&uStack_90,&UNK_110797250,&uStack_51,lVar1,&UNK_110797250,puVar4);
    uVar9 = CONCAT71(uStack_8f,uStack_90);
    uStack_51 = 2;
    uStack_98 = uVar8;
    func_0x000104712be8();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&uStack_90,&UNK_11079d440,&uStack_51,lVar1,&UNK_11079d440,puVar3);
    uStack_b0 = CONCAT71(uStack_8f,uStack_90);
    uStack_b8 = uStack_78;
    uStack_c0 = uStack_80;
    uStack_a8 = uStack_88;
    uStack_51 = 3;
    uStack_a0 = uVar9;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&uStack_90,&UNK_11079d440,&uStack_51,lVar1,&UNK_11079d440,puVar3);
    uVar8 = CONCAT71(uStack_8f,uStack_90);
    uStack_d8 = uStack_78;
    uStack_e0 = uStack_80;
    uStack_c8 = uStack_88;
    uStack_90 = 4;
    uStack_d0 = uVar8;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&uStack_90,lVar1);
    uStack_90 = 5;
    uVar9 = uVar8;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&uStack_90,lVar1);
    uStack_90 = 6;
    puVar5 = &uStack_90;
    lVar2 = lVar1;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySdSgSdm_xtKF();
    uStack_90 = 7;
    puVar6 = &uStack_90;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(puVar6,lVar1);
    (**(code **)(lVar7 + 8))((long)&uStack_e0 - extraout_x8,lVar1);
    func_0x0001000834e4(param_2);
    *param_1 = uStack_98;
    param_1[1] = uStack_a0;
    param_1[3] = uStack_a8;
    param_1[2] = uStack_b0;
    param_1[5] = uStack_b8;
    param_1[4] = uStack_c0;
    param_1[7] = uStack_c8;
    param_1[6] = uStack_d0;
    param_1[9] = uStack_d8;
    param_1[8] = uStack_e0;
    param_1[10] = uVar8;
    param_1[0xb] = uVar9;
    param_1[0xc] = puVar5;
    *(char *)(param_1 + 0xd) = (char)lVar2;
    param_1[0xe] = puVar6;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 1047174f4; end: 1047174f7;  */

void FUN_1047174f4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e0e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31348;
  _swift_getWitnessTable(&UNK_10dd31348,&UNK_11079d608);
  puRam000000011308e0e0 = puVar1;
  return;
}



/* Entry: 1047174f8; end: 104717537;  */

void FUN_1047174f8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e0e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31348;
  _swift_getWitnessTable(&UNK_10dd31348,&UNK_11079d608);
  puRam000000011308e0e0 = puVar1;
  return;
}



/* Entry: 104717538; end: 104717563;  */

long FUN_104717538(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104717564; end: 104717743;  */

int FUN_104717564(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0x1e] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 104717744; end: 104717783;  */

void FUN_104717744(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e0e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3141c;
  _swift_getWitnessTable(&UNK_10dd3141c,&UNK_11079d6b8);
  puRam000000011308e0e8 = puVar1;
  return;
}



/* Entry: 104717784; end: 104717787;  */

void FUN_104717784(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e0f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd313b4;
  _swift_getWitnessTable(&UNK_10dd313b4,&UNK_11079d6b8);
  puRam000000011308e0f0 = puVar1;
  return;
}



/* Entry: 104717788; end: 1047177c7;  */

void FUN_104717788(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e0f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd313b4;
  _swift_getWitnessTable(&UNK_10dd313b4,&UNK_11079d6b8);
  puRam000000011308e0f0 = puVar1;
  return;
}



/* Entry: 1047177c8; end: 1047177cb;  */

void FUN_1047177c8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e0f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3138c;
  _swift_getWitnessTable(&UNK_10dd3138c,&UNK_11079d6b8);
  puRam000000011308e0f8 = puVar1;
  return;
}



/* Entry: 1047177cc; end: 10471788b;  */

void FUN_1047177cc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e0f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3138c;
  _swift_getWitnessTable(&UNK_10dd3138c,&UNK_11079d6b8);
  puRam000000011308e0f8 = puVar1;
  return;
}



/* Entry: 10471788c; end: 10471789f;  */

bool FUN_10471788c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1047178a0; end: 10471794b;  */

void FUN_1047178a0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10471794c; end: 1047179c3;  */

undefined1  [16] FUN_10471794c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  uVar4 = 0xee00734d706d6174;
  uVar2 = 0x73656d6954706174;
  if (*unaff_x20 != '\x01') {
    uVar4 = 0xe900000000000065;
    uVar2 = 0x6372756f53706174;
  }
  uVar1 = 0xef6f666e496e6f69;
  uVar3 = 0x7469736f50706174;
  if (*unaff_x20 != '\0') {
    uVar1 = uVar4;
    uVar3 = uVar2;
  }
  auVar5._8_8_ = uVar1;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 1047179c4; end: 1047179e7;  */

void FUN_1047179c4(undefined1 *param_1,undefined1 param_2)

{
  FUN_104717f00();
  *param_1 = param_2;
  return;
}



/* Entry: 1047179e8; end: 1047179ff;  */

undefined1  [16] FUN_1047179e8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 104717a00; end: 104717a4f;  */

void FUN_104717a00(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_104717e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 104717a50; end: 104717beb;  */

/* WARNING: Removing unreachable block (ram,0x000104717b68) */

void FUN_104717a50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_80 [15];
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = 0x11308e118;
  func_0x0001000285a8(0x11308e118,&UNK_10dd314a0);
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_80 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_104717e80();
  puVar4 = &UNK_11079d880;
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar6,&UNK_11079d880,&UNK_11079d880,param_1,uVar1,uVar2);
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_71 = 0;
  func_0x0001047126a8();
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
            (&uStack_70,&uStack_71,lVar3,&UNK_11079d440,puVar4);
  if (unaff_x21 == 0) {
    uStack_70 = CONCAT71(uStack_70._1_7_,1);
    puVar5 = &uStack_70;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[4],puVar5,lVar3);
    uStack_70 = unaff_x20[5];
    uStack_71 = 2;
    func_0x000104717ec0();
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&uStack_70,&uStack_71,lVar3,&UNK_1107973a0,puVar5);
    (**(code **)(lVar7 + 8))(puVar6,lVar3);
  }
  else {
    (**(code **)(lVar7 + 8))(puVar6,lVar3);
  }
  return;
}



/* Entry: 104717bec; end: 104717d4b;  */

void FUN_104717bec(void)

{
  double *unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = unaff_x20[1];
  dVar3 = unaff_x20[2];
  dVar4 = unaff_x20[3];
  dVar1 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar1 = *unaff_x20;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar4 != 0.0) {
    dVar1 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (unaff_x20[4] != 0.0) {
    dVar1 = unaff_x20[4];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8_combineyySuF(unaff_x20[5]);
  return;
}



/* Entry: 104717d4c; end: 104717d53;  */

void FUN_104717d4c(void)

{
  double *unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_88 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  dVar2 = unaff_x20[1];
  dVar3 = unaff_x20[2];
  dVar4 = unaff_x20[3];
  dVar1 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar1 = *unaff_x20;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar4 != 0.0) {
    dVar1 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (unaff_x20[4] != 0.0) {
    dVar1 = unaff_x20[4];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8_combineyySuF(unaff_x20[5]);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104717d54; end: 104717d8b;  */

void FUN_104717d54(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_104717bec(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104717d8c; end: 104717dcb;  */

void FUN_104717d8c(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10471802c(&uStack_50);
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



/* Entry: 104717dcc; end: 104717e23;  */

void FUN_104717dcc(void)

{
  FUN_104717a50();
  return;
}



/* Entry: 104717e24; end: 104717e7f;  */

bool FUN_104717e24(double *param_1,double *param_2)

{
  bool bVar1;
  bool bVar2;
  
  if (*param_1 == *param_2) {
    bVar1 = false;
    if ((param_1[1] == param_2[1]) && (bVar1 = false, !NAN(param_1[2]) && !NAN(param_2[2]))) {
      bVar1 = param_1[2] == param_2[2];
    }
    bVar2 = false;
    if ((bVar1) && (bVar2 = false, !NAN(param_1[3]) && !NAN(param_2[3]))) {
      bVar2 = param_1[3] == param_2[3];
    }
    if ((bVar2) && (param_1[4] == param_2[4])) {
      return *(int *)(param_1 + 5) == *(int *)(param_2 + 5);
    }
  }
  return false;
}



/* Entry: 104717e80; end: 104717eff;  */

void FUN_104717e80(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e120 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31634;
  _swift_getWitnessTable(&UNK_10dd31634,&UNK_11079d880);
  puRam000000011308e120 = puVar1;
  return;
}



/* Entry: 104717f00; end: 10471802b;  */

undefined4 FUN_104717f00(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  if ((param_1 == 0x7469736f50706174 && param_2 == -0x10909991b6919097) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x7469736f50706174,0xef6f666e496e6f69,param_1,param_2,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0;
    if (((param_1 == 0x73656d6954706174) && (param_2 == -0x11ff8cb28f929e8c)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x73656d6954706174,0xee00734d706d6174,param_1,param_2,0), (uVar1 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar2 = 1;
    }
    else {
      uVar1 = 0;
      if ((param_1 == 0x6372756f53706174) && (param_2 == -0x16ffffffffffff9b)) {
        _swift_bridgeObjectRelease(0xe900000000000065);
        uVar2 = 2;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x6372756f53706174,0xe900000000000065,param_1,param_2,0);
        _swift_bridgeObjectRelease(param_2);
        uVar2 = 2;
        if ((uVar1 & 1) == 0) {
          uVar2 = 3;
        }
      }
    }
  }
  return uVar2;
}



/* Entry: 10471802c; end: 1047181f3;  */

/* WARNING: Removing unreachable block (ram,0x000104718144) */

void FUN_10471802c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_81;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0x11308e150;
  func_0x0001000285a8(0x11308e150,&UNK_10dd31688);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  lVar3 = param_2;
  func_0x0001000a8868(param_2,uVar7);
  FUN_104717e80();
  puVar4 = &UNK_11079d880;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&uStack_b0 - extraout_x8,&UNK_11079d880,&UNK_11079d880,lVar3,uVar7,uVar1);
  if (unaff_x21 == 0) {
    uStack_81 = 0;
    func_0x000104712be8();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&uStack_80,&UNK_11079d440,&uStack_81,lVar2,&UNK_11079d440,puVar4);
    uVar7 = CONCAT71(uStack_7f,uStack_80);
    uStack_a8 = uStack_68;
    uStack_b0 = uStack_70;
    uStack_98 = uStack_78;
    uStack_80 = 1;
    puVar5 = &uStack_80;
    uStack_a0 = uVar7;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(puVar5,lVar2);
    uStack_81 = 2;
    func_0x0001047184fc();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&uStack_80,&UNK_1107973a0,&uStack_81,lVar2,&UNK_1107973a0,puVar5);
    (**(code **)(lVar6 + 8))((long)&uStack_b0 - extraout_x8,lVar2);
    uVar1 = CONCAT71(uStack_7f,uStack_80);
    func_0x0001000834e4(param_2);
    param_1[1] = uStack_98;
    *param_1 = uStack_a0;
    param_1[3] = uStack_a8;
    param_1[2] = uStack_b0;
    param_1[4] = uVar7;
    param_1[5] = uVar1;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 1047181f4; end: 1047181f7;  */

void FUN_1047181f4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e130 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31538;
  _swift_getWitnessTable(&UNK_10dd31538,&UNK_11079d7e0);
  puRam000000011308e130 = puVar1;
  return;
}



/* Entry: 1047181f8; end: 104718237;  */

void FUN_1047181f8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e130 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31538;
  _swift_getWitnessTable(&UNK_10dd31538,&UNK_11079d7e0);
  puRam000000011308e130 = puVar1;
  return;
}



/* Entry: 104718238; end: 104718263;  */

long FUN_104718238(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104718264; end: 104718433;  */

int FUN_104718264(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 104718434; end: 104718473;  */

void FUN_104718434(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e138 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3160c;
  _swift_getWitnessTable(&UNK_10dd3160c,&UNK_11079d880);
  puRam000000011308e138 = puVar1;
  return;
}



/* Entry: 104718474; end: 104718477;  */

void FUN_104718474(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e140 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd315a4;
  _swift_getWitnessTable(&UNK_10dd315a4,&UNK_11079d880);
  puRam000000011308e140 = puVar1;
  return;
}



/* Entry: 104718478; end: 1047184b7;  */

void FUN_104718478(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e140 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd315a4;
  _swift_getWitnessTable(&UNK_10dd315a4,&UNK_11079d880);
  puRam000000011308e140 = puVar1;
  return;
}



/* Entry: 1047184b8; end: 1047184bb;  */

void FUN_1047184b8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3157c;
  _swift_getWitnessTable(&UNK_10dd3157c,&UNK_11079d880);
  puRam000000011308e148 = puVar1;
  return;
}



/* Entry: 1047184bc; end: 104718573;  */

void FUN_1047184bc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3157c;
  _swift_getWitnessTable(&UNK_10dd3157c,&UNK_11079d880);
  puRam000000011308e148 = puVar1;
  return;
}



/* Entry: 104718574; end: 1047185c3;  */

undefined8 FUN_104718574(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112db3e90;
  func_0x0001000285a8(0x112db3e90,&UNK_10d95e3e0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1047185c4; end: 1047185c7;  */

undefined8 FUN_1047185c4(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  
  lVar5 = 0;
  FUN_10472f4dc();
  lVar13 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar10 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar12 = 0x112db3e90;
  func_0x0001000285a8(0x112db3e90,&UNK_10d95e3e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar11 = (long)puVar10 - extraout_x8_00;
  lVar12 = 0x112db3e88;
  func_0x0001000285a8(0x112db3e88,&UNK_10dbce5e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = uVar11 - extraout_x8_01;
  uVar8 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar8 != 0) {
      return 0;
    }
  }
  else {
    if (uVar8 == 0) {
      return 0;
    }
    uVar6 = *param_1;
    if (((uVar6 != *param_2) || (param_1[1] != uVar8)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar6 & 1) == 0)) {
      return 0;
    }
  }
  lVar7 = 0;
  func_0x00010471853c();
  iVar4 = *(int *)(lVar7 + 0x14);
  lVar12 = (long)*(int *)(lVar12 + 0x30);
  FUN_104718574((long)param_1 + (long)iVar4,lVar9);
  FUN_104718574((long)param_2 + (long)iVar4,lVar9 + lVar12);
  pcVar14 = *(code **)(lVar13 + 0x30);
  lVar13 = lVar9;
  (*pcVar14)(lVar9,1,lVar5);
  if ((int)lVar13 == 1) {
    lVar12 = lVar9 + lVar12;
    (*pcVar14)(lVar12,1,lVar5);
    if ((int)lVar12 != 1) {
LAB_104718984:
      func_0x000104723a10(lVar9,0x112db3e88,&UNK_10dbce5e0);
      return 0;
    }
    func_0x000104723a10(lVar9,0x112db3e90,&UNK_10d95e3e0);
  }
  else {
    FUN_104718574(lVar9,uVar11);
    lVar13 = lVar9 + lVar12;
    (*pcVar14)(lVar13,1,lVar5);
    if ((int)lVar13 == 1) {
      FUN_104720d84(uVar11,FUN_10472f4dc);
      goto LAB_104718984;
    }
    func_0x000104723a50(lVar9 + lVar12,puVar10);
    uVar8 = uVar11;
    FUN_10472f858(uVar11,puVar10);
    FUN_104720d84(puVar10,FUN_10472f4dc);
    FUN_104720d84(uVar11,FUN_10472f4dc);
    func_0x000104723a10(lVar9,0x112db3e90,&UNK_10d95e3e0);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
  }
  uVar8 = *(ulong *)((long)param_1 + (long)*(int *)(lVar7 + 0x18));
  FUN_10470c328(uVar8,*(undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x18)));
  if ((uVar8 & 1) != 0) {
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x1c));
    plVar2 = (long *)((long)param_2 + (long)*(int *)(lVar7 + 0x1c));
    cVar3 = (char)plVar2[1];
    if ((char)plVar1[1] == '\x01') {
      if (cVar3 == '\x01') {
        return 1;
      }
    }
    else if ((cVar3 != '\x01') && (*plVar1 == *plVar2)) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1047185c8; end: 104718697;  */

void FUN_1047185c8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = unaff_x20[1];
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,lVar2);
  }
  lVar2 = 0;
  func_0x00010471853c();
  func_0x0001046cf16c((long)*(int *)(lVar2 + 0x14),param_1);
  func_0x0001046db048(param_1,*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar2 + 0x18)));
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar2 + 0x1c));
  if (*(char *)(puVar1 + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  return;
}



/* Entry: 104718698; end: 10471877b;  */

void FUN_104718698(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  lVar2 = unaff_x20[1];
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar3,lVar2);
  }
  lVar2 = 0;
  func_0x00010471853c();
  func_0x0001046cf16c((long)*(int *)(lVar2 + 0x14),auStack_78);
  func_0x0001046db048(auStack_78,*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar2 + 0x18)));
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar2 + 0x1c));
  if (*(char *)(puVar1 + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10471877c; end: 104718783;  */

void FUN_10471877c(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  lVar2 = unaff_x20[1];
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar3,lVar2);
  }
  lVar2 = 0;
  func_0x00010471853c();
  func_0x0001046cf16c((long)*(int *)(lVar2 + 0x14),auStack_78);
  func_0x0001046db048(auStack_78,*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar2 + 0x18)));
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar2 + 0x1c));
  if (*(char *)(puVar1 + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104718784; end: 1047187bb;  */

void FUN_104718784(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1047185c8(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047187bc; end: 1047187bf;  */

undefined8 FUN_1047187bc(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  
  lVar5 = 0;
  FUN_10472f4dc();
  lVar13 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar10 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar12 = 0x112db3e90;
  func_0x0001000285a8(0x112db3e90,&UNK_10d95e3e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar11 = (long)puVar10 - extraout_x8_00;
  lVar12 = 0x112db3e88;
  func_0x0001000285a8(0x112db3e88,&UNK_10dbce5e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = uVar11 - extraout_x8_01;
  uVar8 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar8 != 0) {
      return 0;
    }
  }
  else {
    if (uVar8 == 0) {
      return 0;
    }
    uVar6 = *param_1;
    if (((uVar6 != *param_2) || (param_1[1] != uVar8)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar6 & 1) == 0)) {
      return 0;
    }
  }
  lVar7 = 0;
  func_0x00010471853c();
  iVar4 = *(int *)(lVar7 + 0x14);
  lVar12 = (long)*(int *)(lVar12 + 0x30);
  FUN_104718574((long)param_1 + (long)iVar4,lVar9);
  FUN_104718574((long)param_2 + (long)iVar4,lVar9 + lVar12);
  pcVar14 = *(code **)(lVar13 + 0x30);
  lVar13 = lVar9;
  (*pcVar14)(lVar9,1,lVar5);
  if ((int)lVar13 == 1) {
    lVar12 = lVar9 + lVar12;
    (*pcVar14)(lVar12,1,lVar5);
    if ((int)lVar12 != 1) {
LAB_104718984:
      func_0x000104723a10(lVar9,0x112db3e88,&UNK_10dbce5e0);
      return 0;
    }
    func_0x000104723a10(lVar9,0x112db3e90,&UNK_10d95e3e0);
  }
  else {
    FUN_104718574(lVar9,uVar11);
    lVar13 = lVar9 + lVar12;
    (*pcVar14)(lVar13,1,lVar5);
    if ((int)lVar13 == 1) {
      FUN_104720d84(uVar11,FUN_10472f4dc);
      goto LAB_104718984;
    }
    func_0x000104723a50(lVar9 + lVar12,puVar10);
    uVar8 = uVar11;
    FUN_10472f858(uVar11,puVar10);
    FUN_104720d84(puVar10,FUN_10472f4dc);
    FUN_104720d84(uVar11,FUN_10472f4dc);
    func_0x000104723a10(lVar9,0x112db3e90,&UNK_10d95e3e0);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
  }
  uVar8 = *(ulong *)((long)param_1 + (long)*(int *)(lVar7 + 0x18));
  FUN_10470c328(uVar8,*(undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x18)));
  if ((uVar8 & 1) != 0) {
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x1c));
    plVar2 = (long *)((long)param_2 + (long)*(int *)(lVar7 + 0x1c));
    cVar3 = (char)plVar2[1];
    if ((char)plVar1[1] == '\x01') {
      if (cVar3 == '\x01') {
        return 1;
      }
    }
    else if ((cVar3 != '\x01') && (*plVar1 == *plVar2)) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1047187c0; end: 104718a77;  */

undefined8 FUN_1047187c0(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  
  lVar5 = 0;
  FUN_10472f4dc();
  lVar13 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar10 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar12 = 0x112db3e90;
  func_0x0001000285a8(0x112db3e90,&UNK_10d95e3e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar11 = (long)puVar10 - extraout_x8_00;
  lVar12 = 0x112db3e88;
  func_0x0001000285a8(0x112db3e88,&UNK_10dbce5e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = uVar11 - extraout_x8_01;
  uVar8 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar8 != 0) {
      return 0;
    }
  }
  else {
    if (uVar8 == 0) {
      return 0;
    }
    uVar6 = *param_1;
    if (((uVar6 != *param_2) || (param_1[1] != uVar8)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar6 & 1) == 0)) {
      return 0;
    }
  }
  lVar7 = 0;
  func_0x00010471853c();
  iVar4 = *(int *)(lVar7 + 0x14);
  lVar12 = (long)*(int *)(lVar12 + 0x30);
  FUN_104718574((long)param_1 + (long)iVar4,lVar9);
  FUN_104718574((long)param_2 + (long)iVar4,lVar9 + lVar12);
  pcVar14 = *(code **)(lVar13 + 0x30);
  lVar13 = lVar9;
  (*pcVar14)(lVar9,1,lVar5);
  if ((int)lVar13 == 1) {
    lVar12 = lVar9 + lVar12;
    (*pcVar14)(lVar12,1,lVar5);
    if ((int)lVar12 != 1) {
LAB_104718984:
      func_0x000104723a10(lVar9,0x112db3e88,&UNK_10dbce5e0);
      return 0;
    }
    func_0x000104723a10(lVar9,0x112db3e90,&UNK_10d95e3e0);
  }
  else {
    FUN_104718574(lVar9,uVar11);
    lVar13 = lVar9 + lVar12;
    (*pcVar14)(lVar13,1,lVar5);
    if ((int)lVar13 == 1) {
      FUN_104720d84(uVar11,FUN_10472f4dc);
      goto LAB_104718984;
    }
    func_0x000104723a50(lVar9 + lVar12,puVar10);
    uVar8 = uVar11;
    FUN_10472f858(uVar11,puVar10);
    FUN_104720d84(puVar10,FUN_10472f4dc);
    FUN_104720d84(uVar11,FUN_10472f4dc);
    func_0x000104723a10(lVar9,0x112db3e90,&UNK_10d95e3e0);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
  }
  uVar8 = *(ulong *)((long)param_1 + (long)*(int *)(lVar7 + 0x18));
  FUN_10470c328(uVar8,*(undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x18)));
  if ((uVar8 & 1) != 0) {
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x1c));
    plVar2 = (long *)((long)param_2 + (long)*(int *)(lVar7 + 0x1c));
    cVar3 = (char)plVar2[1];
    if ((char)plVar1[1] == '\x01') {
      if (cVar3 == '\x01') {
        return 1;
      }
    }
    else if ((cVar3 != '\x01') && (*plVar1 == *plVar2)) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 104718a78; end: 104718a7b;  */

void FUN_104718a78(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011308e160 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x00010471853c(0xff);
  puVar2 = &UNK_10dd316d8;
  _swift_getWitnessTable(&UNK_10dd316d8,uVar1);
  puRam000000011308e160 = puVar2;
  return;
}



/* Entry: 104718a7c; end: 104718abf;  */

void FUN_104718a7c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011308e160 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x00010471853c(0xff);
  puVar2 = &UNK_10dd316d8;
  _swift_getWitnessTable(&UNK_10dd316d8,uVar1);
  puRam000000011308e160 = puVar2;
  return;
}



/* Entry: 104718ac0; end: 104719d9b;  */

long * FUN_104718ac0(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  uint5 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  code *pcVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  
  uVar10 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar10 >> 0x11 & 1) == 0) {
    lVar14 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar14;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    lVar12 = 0;
    FUN_10472f4dc();
    lVar31 = *(long *)(lVar12 + -8);
    pcVar22 = *(code **)(lVar31 + 0x30);
    _swift_bridgeObjectRetain(lVar14);
    puVar13 = puVar2;
    (*pcVar22)(puVar2,1,lVar12);
    if ((int)puVar13 == 0) {
      lVar14 = 0;
      FUN_104739264();
      lVar21 = *(long *)(lVar14 + -8);
      pcVar22 = *(code **)(lVar21 + 0x30);
      puVar13 = puVar2;
      (*pcVar22)(puVar2,1,lVar14);
      if ((int)puVar13 == 0) {
        uVar24 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar24;
        uVar24 = puVar2[3];
        puVar1[2] = puVar2[2];
        puVar1[3] = uVar24;
        uVar25 = puVar2[5];
        puVar1[4] = puVar2[4];
        puVar1[5] = uVar25;
        uVar26 = puVar2[7];
        puVar1[6] = puVar2[6];
        puVar1[7] = uVar26;
        puVar1[8] = puVar2[8];
        lVar15 = puVar2[0xf];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar24);
        _swift_bridgeObjectRetain(uVar25);
        _swift_bridgeObjectRetain(uVar26);
        if (lVar15 == 1) {
          uVar24 = puVar2[9];
          puVar1[10] = puVar2[10];
          puVar1[9] = uVar24;
          uVar24 = puVar2[0xb];
          puVar1[0xc] = puVar2[0xc];
          puVar1[0xb] = uVar24;
          uVar24 = puVar2[0xd];
          puVar1[0xe] = puVar2[0xe];
          puVar1[0xd] = uVar24;
          puVar1[0xf] = puVar2[0xf];
        }
        else {
          lVar23 = puVar2[0xb];
          if (lVar23 == 1) {
            uVar24 = puVar2[9];
            puVar1[10] = puVar2[10];
            puVar1[9] = uVar24;
            uVar24 = puVar2[0xb];
            puVar1[0xc] = puVar2[0xc];
            puVar1[0xb] = uVar24;
            puVar1[0xd] = puVar2[0xd];
          }
          else {
            uVar24 = puVar2[9];
            puVar1[10] = puVar2[10];
            puVar1[9] = uVar24;
            uVar24 = puVar2[0xc];
            uVar25 = puVar2[0xd];
            puVar1[0xb] = lVar23;
            puVar1[0xc] = uVar24;
            puVar1[0xd] = uVar25;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar25);
          }
          puVar1[0xe] = puVar2[0xe];
          puVar1[0xf] = lVar15;
          _swift_bridgeObjectRetain(lVar15);
        }
        uVar24 = puVar2[0x11];
        puVar1[0x10] = puVar2[0x10];
        puVar1[0x11] = uVar24;
        uVar25 = puVar2[0x13];
        puVar1[0x12] = puVar2[0x12];
        puVar1[0x13] = uVar25;
        lVar15 = (long)puVar1 + (long)*(int *)(lVar14 + 0x34);
        lVar23 = (long)puVar2 + (long)*(int *)(lVar14 + 0x34);
        lVar18 = 0;
        FUN_104742f28();
        lVar20 = *(long *)(lVar18 + -8);
        pcVar28 = *(code **)(lVar20 + 0x30);
        _swift_bridgeObjectRetain(uVar24);
        _swift_bridgeObjectRetain(uVar25);
        lVar29 = lVar23;
        (*pcVar28)(lVar23,1,lVar18);
        if ((int)lVar29 == 0) {
          lVar29 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar29 + -8) + 0x10))(lVar15,lVar23,lVar29);
          puVar13 = (undefined8 *)(lVar15 + *(int *)(lVar18 + 0x14));
          puVar3 = (undefined8 *)(lVar23 + *(int *)(lVar18 + 0x14));
          uVar24 = puVar3[1];
          *puVar13 = *puVar3;
          puVar13[1] = uVar24;
          *(undefined1 *)(lVar15 + *(int *)(lVar18 + 0x18)) =
               *(undefined1 *)(lVar23 + *(int *)(lVar18 + 0x18));
          *(undefined1 *)(lVar15 + *(int *)(lVar18 + 0x1c)) =
               *(undefined1 *)(lVar23 + *(int *)(lVar18 + 0x1c));
          puVar13 = (undefined8 *)(lVar15 + *(int *)(lVar18 + 0x20));
          puVar3 = (undefined8 *)(lVar23 + *(int *)(lVar18 + 0x20));
          *puVar13 = *puVar3;
          *(undefined1 *)(puVar13 + 1) = *(undefined1 *)(puVar3 + 1);
          *(undefined1 *)(lVar15 + *(int *)(lVar18 + 0x24)) =
               *(undefined1 *)(lVar23 + *(int *)(lVar18 + 0x24));
          pcVar28 = *(code **)(lVar20 + 0x38);
          _swift_bridgeObjectRetain();
          (*pcVar28)(lVar15,0,1,lVar18);
        }
        else {
          lVar29 = 0x112dcbf00;
          func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
          _memcpy(lVar15,lVar23,*(undefined8 *)(*(long *)(lVar29 + -8) + 0x40));
        }
        puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x38));
        puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x38));
        uVar24 = *puVar3;
        puVar13[1] = puVar3[1];
        *puVar13 = uVar24;
        uVar24 = *(undefined8 *)((long)puVar3 + 9);
        *(undefined8 *)((long)puVar13 + 0x11) = *(undefined8 *)((long)puVar3 + 0x11);
        *(undefined8 *)((long)puVar13 + 9) = uVar24;
        (**(code **)(lVar21 + 0x38))(puVar1,0,1);
      }
      else {
        lVar15 = 0x112db3ce0;
        func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
        _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
      }
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x14));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x14));
      if (puVar3[0x18] == 1) {
        _memcpy(puVar13,puVar3,0x260);
      }
      else {
        lVar15 = puVar3[1];
        if (lVar15 == 1) {
          uVar24 = *puVar3;
          puVar13[1] = puVar3[1];
          *puVar13 = uVar24;
          puVar13[2] = puVar3[2];
        }
        else {
          *puVar13 = *puVar3;
          puVar13[1] = lVar15;
          uVar24 = puVar3[2];
          puVar13[2] = uVar24;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar24);
        }
        uVar30 = puVar3[5];
        if (uVar30 >> 0x3c == 0xb) {
          uVar24 = puVar3[3];
          puVar13[4] = puVar3[4];
          puVar13[3] = uVar24;
          puVar13[5] = puVar3[5];
        }
        else {
          puVar13[3] = puVar3[3];
          if (uVar30 >> 0x3c < 0xf) {
            uVar24 = puVar3[4];
            func_0x00010006c00c(uVar24,uVar30);
            puVar13[4] = uVar24;
            puVar13[5] = uVar30;
          }
          else {
            uVar24 = puVar3[4];
            puVar13[5] = puVar3[5];
            puVar13[4] = uVar24;
          }
        }
        *(undefined2 *)(puVar13 + 6) = *(undefined2 *)(puVar3 + 6);
        puVar13[7] = puVar3[7];
        lVar15 = puVar3[9];
        if (lVar15 == 1) {
          uVar24 = puVar3[0x10];
          uVar26 = puVar3[0x13];
          uVar25 = puVar3[0x12];
          puVar13[0x11] = puVar3[0x11];
          puVar13[0x10] = uVar24;
          puVar13[0x13] = uVar26;
          puVar13[0x12] = uVar25;
          uVar24 = puVar3[0x14];
          puVar13[0x15] = puVar3[0x15];
          puVar13[0x14] = uVar24;
          uVar24 = *(undefined8 *)((long)puVar3 + 0xaa);
          *(undefined8 *)((long)puVar13 + 0xb2) = *(undefined8 *)((long)puVar3 + 0xb2);
          *(undefined8 *)((long)puVar13 + 0xaa) = uVar24;
          uVar24 = puVar3[8];
          uVar26 = puVar3[0xb];
          uVar25 = puVar3[10];
          puVar13[9] = puVar3[9];
          puVar13[8] = uVar24;
          puVar13[0xb] = uVar26;
          puVar13[10] = uVar25;
          uVar24 = puVar3[0xc];
          uVar26 = puVar3[0xf];
          uVar25 = puVar3[0xe];
          puVar13[0xd] = puVar3[0xd];
          puVar13[0xc] = uVar24;
          puVar13[0xf] = uVar26;
          puVar13[0xe] = uVar25;
        }
        else {
          puVar13[8] = puVar3[8];
          puVar13[9] = lVar15;
          uVar6 = puVar3[0xb];
          puVar13[10] = puVar3[10];
          puVar13[0xb] = uVar6;
          uVar24 = puVar3[0xc];
          uVar25 = puVar3[0xd];
          puVar13[0xc] = uVar24;
          puVar13[0xd] = uVar25;
          uVar25 = puVar3[0xe];
          uVar26 = puVar3[0xf];
          puVar13[0xe] = uVar25;
          puVar13[0xf] = uVar26;
          uVar26 = puVar3[0x10];
          uVar7 = puVar3[0x11];
          puVar13[0x10] = uVar26;
          puVar13[0x11] = uVar7;
          lVar15 = puVar3[0x13];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar6);
          _swift_bridgeObjectRetain(uVar24);
          _swift_bridgeObjectRetain(uVar25);
          _swift_bridgeObjectRetain(uVar26);
          _swift_bridgeObjectRetain(uVar7);
          if (lVar15 == 1) {
            uVar24 = puVar3[0x12];
            puVar13[0x13] = puVar3[0x13];
            puVar13[0x12] = uVar24;
          }
          else {
            puVar13[0x12] = puVar3[0x12];
            puVar13[0x13] = lVar15;
            _swift_bridgeObjectRetain(lVar15);
          }
          uVar24 = puVar3[0x15];
          puVar13[0x14] = puVar3[0x14];
          puVar13[0x15] = uVar24;
          puVar13[0x16] = puVar3[0x16];
          *(undefined2 *)(puVar13 + 0x17) = *(undefined2 *)(puVar3 + 0x17);
          _swift_bridgeObjectRetain();
        }
        *(undefined2 *)((long)puVar13 + 0xba) = *(undefined2 *)((long)puVar3 + 0xba);
        if (puVar3[0x18] == 0) {
          lVar15 = puVar3[0x18];
          uVar25 = puVar3[0x1b];
          uVar24 = puVar3[0x1a];
          puVar13[0x19] = puVar3[0x19];
          puVar13[0x18] = lVar15;
          puVar13[0x1b] = uVar25;
          puVar13[0x1a] = uVar24;
          uVar24 = puVar3[0x1c];
          uVar26 = puVar3[0x1f];
          uVar25 = puVar3[0x1e];
          puVar13[0x1d] = puVar3[0x1d];
          puVar13[0x1c] = uVar24;
          puVar13[0x1f] = uVar26;
          puVar13[0x1e] = uVar25;
        }
        else {
          puVar13[0x18] = puVar3[0x18];
          uVar24 = puVar3[0x19];
          puVar13[0x1a] = puVar3[0x1a];
          puVar13[0x19] = uVar24;
          uVar24 = puVar3[0x1c];
          puVar13[0x1b] = puVar3[0x1b];
          puVar13[0x1c] = uVar24;
          lVar15 = puVar3[0x1e];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar24);
          if (lVar15 == 0) {
            uVar24 = puVar3[0x1d];
            puVar13[0x1e] = puVar3[0x1e];
            puVar13[0x1d] = uVar24;
            puVar13[0x1f] = puVar3[0x1f];
          }
          else {
            puVar13[0x1d] = puVar3[0x1d];
            puVar13[0x1e] = lVar15;
            uVar24 = puVar3[0x1f];
            puVar13[0x1f] = uVar24;
            _swift_bridgeObjectRetain(lVar15);
            _swift_bridgeObjectRetain(uVar24);
          }
        }
        *(undefined1 *)(puVar13 + 0x20) = *(undefined1 *)(puVar3 + 0x20);
        uVar24 = puVar3[0x22];
        puVar13[0x21] = puVar3[0x21];
        puVar13[0x22] = uVar24;
        uVar24 = puVar3[0x24];
        puVar13[0x23] = puVar3[0x23];
        puVar13[0x24] = uVar24;
        uVar25 = puVar3[0x25];
        puVar13[0x26] = puVar3[0x26];
        puVar13[0x25] = uVar25;
        uVar25 = *(undefined8 *)((long)puVar3 + 0x132);
        *(undefined8 *)((long)puVar13 + 0x13a) = *(undefined8 *)((long)puVar3 + 0x13a);
        *(undefined8 *)((long)puVar13 + 0x132) = uVar25;
        lVar15 = puVar3[0x2a];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar24);
        if (lVar15 == 0) {
          uVar24 = puVar3[0x29];
          uVar26 = puVar3[0x2c];
          uVar25 = puVar3[0x2b];
          puVar13[0x2a] = puVar3[0x2a];
          puVar13[0x29] = uVar24;
          puVar13[0x2c] = uVar26;
          puVar13[0x2b] = uVar25;
        }
        else {
          puVar13[0x29] = puVar3[0x29];
          puVar13[0x2a] = lVar15;
          uVar24 = puVar3[0x2c];
          puVar13[0x2b] = puVar3[0x2b];
          puVar13[0x2c] = uVar24;
          _swift_bridgeObjectRetain(lVar15);
          _swift_bridgeObjectRetain(uVar24);
        }
        uVar24 = puVar3[0x2e];
        puVar13[0x2d] = puVar3[0x2d];
        puVar13[0x2e] = uVar24;
        uVar24 = puVar3[0x2f];
        uVar25 = puVar3[0x30];
        *(undefined1 *)(puVar13 + 0x31) = *(undefined1 *)(puVar3 + 0x31);
        uVar30 = puVar3[0x36];
        uVar11 = *(uint5 *)(puVar3 + 0x39);
        puVar13[0x2f] = uVar24;
        puVar13[0x30] = uVar25;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar25);
        if ((((uVar30 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
           (((ulong)uVar11 & 0xfefefefefefefefe) == 0x6fefefefe)) {
          uVar24 = puVar3[0x32];
          uVar26 = puVar3[0x35];
          uVar25 = puVar3[0x34];
          puVar13[0x33] = puVar3[0x33];
          puVar13[0x32] = uVar24;
          puVar13[0x35] = uVar26;
          puVar13[0x34] = uVar25;
          uVar24 = puVar3[0x36];
          puVar13[0x37] = puVar3[0x37];
          puVar13[0x36] = uVar24;
          uVar24 = *(undefined8 *)((long)puVar3 + 0x1bd);
          *(undefined8 *)((long)puVar13 + 0x1c5) = *(undefined8 *)((long)puVar3 + 0x1c5);
          *(undefined8 *)((long)puVar13 + 0x1bd) = uVar24;
        }
        else {
          uVar24 = puVar3[0x32];
          uVar6 = puVar3[0x33];
          uVar25 = puVar3[0x34];
          uVar7 = puVar3[0x35];
          uVar26 = puVar3[0x37];
          uVar8 = puVar3[0x38];
          func_0x00010179a2b8(uVar24,uVar6,uVar25,uVar7,uVar30,uVar26,uVar8,(ulong)uVar11);
          puVar13[0x32] = uVar24;
          puVar13[0x33] = uVar6;
          puVar13[0x34] = uVar25;
          puVar13[0x35] = uVar7;
          puVar13[0x36] = uVar30;
          puVar13[0x37] = uVar26;
          puVar13[0x38] = uVar8;
          *(char *)((long)puVar13 + 0x1cc) = (char)(uVar11 >> 0x20);
          *(int *)(puVar13 + 0x39) = (int)uVar11;
        }
        *(undefined1 *)((long)puVar13 + 0x1cd) = *(undefined1 *)((long)puVar3 + 0x1cd);
        uVar24 = puVar3[0x3b];
        puVar13[0x3a] = puVar3[0x3a];
        puVar13[0x3b] = uVar24;
        *(undefined1 *)(puVar13 + 0x3c) = *(undefined1 *)(puVar3 + 0x3c);
        lVar15 = puVar3[0x3e];
        _swift_bridgeObjectRetain();
        if (lVar15 == 0) {
          uVar24 = puVar3[0x3d];
          uVar26 = puVar3[0x40];
          uVar25 = puVar3[0x3f];
          puVar13[0x3e] = puVar3[0x3e];
          puVar13[0x3d] = uVar24;
          puVar13[0x40] = uVar26;
          puVar13[0x3f] = uVar25;
          uVar24 = puVar3[0x41];
          puVar13[0x42] = puVar3[0x42];
          puVar13[0x41] = uVar24;
        }
        else {
          puVar13[0x3d] = puVar3[0x3d];
          puVar13[0x3e] = lVar15;
          uVar24 = puVar3[0x40];
          puVar13[0x3f] = puVar3[0x3f];
          puVar13[0x40] = uVar24;
          puVar13[0x41] = puVar3[0x41];
          uVar25 = puVar3[0x42];
          puVar13[0x42] = uVar25;
          _swift_bridgeObjectRetain(lVar15);
          _swift_bridgeObjectRetain(uVar24);
          _swift_bridgeObjectRetain(uVar25);
        }
        *(undefined1 *)(puVar13 + 0x43) = *(undefined1 *)(puVar3 + 0x43);
        lVar15 = puVar3[0x45];
        if (lVar15 == 0) {
          uVar24 = puVar3[0x44];
          uVar26 = puVar3[0x47];
          uVar25 = puVar3[0x46];
          puVar13[0x45] = puVar3[0x45];
          puVar13[0x44] = uVar24;
          puVar13[0x47] = uVar26;
          puVar13[0x46] = uVar25;
          uVar24 = puVar3[0x48];
          puVar13[0x49] = puVar3[0x49];
          puVar13[0x48] = uVar24;
          puVar13[0x4a] = puVar3[0x4a];
        }
        else {
          puVar13[0x44] = puVar3[0x44];
          puVar13[0x45] = lVar15;
          puVar13[0x46] = puVar3[0x46];
          uVar24 = puVar3[0x47];
          puVar13[0x47] = uVar24;
          puVar13[0x48] = puVar3[0x48];
          uVar25 = puVar3[0x49];
          puVar13[0x49] = uVar25;
          puVar13[0x4a] = puVar3[0x4a];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar24);
          _swift_bridgeObjectRetain(uVar25);
        }
        puVar13[0x4b] = puVar3[0x4b];
        _swift_bridgeObjectRetain();
      }
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x18));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x18));
      lVar15 = 0;
      FUN_10470fbcc();
      lVar23 = *(long *)(lVar15 + -8);
      puVar16 = puVar3;
      (**(code **)(lVar23 + 0x30))(puVar3,1,lVar15);
      if ((int)puVar16 == 0) {
        uVar24 = puVar3[1];
        *puVar13 = *puVar3;
        puVar13[1] = uVar24;
        uVar24 = puVar3[3];
        puVar13[2] = puVar3[2];
        puVar13[3] = uVar24;
        lVar29 = puVar3[10];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar24);
        if (lVar29 == 1) {
          uVar24 = puVar3[4];
          uVar26 = puVar3[7];
          uVar25 = puVar3[6];
          puVar13[5] = puVar3[5];
          puVar13[4] = uVar24;
          puVar13[7] = uVar26;
          puVar13[6] = uVar25;
          uVar24 = puVar3[8];
          puVar13[9] = puVar3[9];
          puVar13[8] = uVar24;
          puVar13[10] = puVar3[10];
        }
        else {
          lVar18 = puVar3[6];
          if (lVar18 == 1) {
            uVar24 = puVar3[4];
            uVar26 = puVar3[7];
            uVar25 = puVar3[6];
            puVar13[5] = puVar3[5];
            puVar13[4] = uVar24;
            puVar13[7] = uVar26;
            puVar13[6] = uVar25;
            puVar13[8] = puVar3[8];
          }
          else {
            uVar24 = puVar3[4];
            puVar13[5] = puVar3[5];
            puVar13[4] = uVar24;
            uVar24 = puVar3[7];
            uVar25 = puVar3[8];
            puVar13[6] = lVar18;
            puVar13[7] = uVar24;
            puVar13[8] = uVar25;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar25);
          }
          puVar13[9] = puVar3[9];
          puVar13[10] = lVar29;
          _swift_bridgeObjectRetain(lVar29);
        }
        uVar24 = puVar3[0xb];
        puVar13[0xc] = puVar3[0xc];
        puVar13[0xb] = uVar24;
        uVar24 = *(undefined8 *)((long)puVar3 + 0x61);
        *(undefined8 *)((long)puVar13 + 0x69) = *(undefined8 *)((long)puVar3 + 0x69);
        *(undefined8 *)((long)puVar13 + 0x61) = uVar24;
        uVar24 = puVar3[0x10];
        puVar13[0xf] = puVar3[0xf];
        puVar13[0x10] = uVar24;
        *(undefined1 *)(puVar13 + 0x11) = *(undefined1 *)(puVar3 + 0x11);
        lVar29 = puVar3[0x14];
        _swift_bridgeObjectRetain();
        if (lVar29 == 1) {
          uVar24 = puVar3[0x12];
          puVar13[0x13] = puVar3[0x13];
          puVar13[0x12] = uVar24;
          puVar13[0x14] = puVar3[0x14];
        }
        else {
          *(undefined4 *)(puVar13 + 0x12) = *(undefined4 *)(puVar3 + 0x12);
          *(undefined1 *)((long)puVar13 + 0x94) = *(undefined1 *)((long)puVar3 + 0x94);
          puVar13[0x13] = puVar3[0x13];
          puVar13[0x14] = lVar29;
          _swift_bridgeObjectRetain(lVar29);
        }
        uVar24 = puVar3[0x15];
        uVar25 = puVar3[0x16];
        puVar13[0x15] = uVar24;
        puVar13[0x16] = uVar25;
        uVar26 = puVar3[0x17];
        puVar13[0x17] = uVar26;
        lVar29 = (long)puVar13 + (long)*(int *)(lVar15 + 0x38);
        lVar18 = (long)puVar3 + (long)*(int *)(lVar15 + 0x38);
        lVar19 = 0;
        FUN_104742f28();
        lVar27 = *(long *)(lVar19 + -8);
        pcVar28 = *(code **)(lVar27 + 0x30);
        _swift_bridgeObjectRetain(uVar24);
        _swift_bridgeObjectRetain(uVar25);
        _swift_bridgeObjectRetain(uVar26);
        lVar20 = lVar18;
        (*pcVar28)(lVar18,1,lVar19);
        if ((int)lVar20 == 0) {
          lVar20 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar20 + -8) + 0x10))(lVar29,lVar18,lVar20);
          puVar3 = (undefined8 *)(lVar29 + *(int *)(lVar19 + 0x14));
          puVar16 = (undefined8 *)(lVar18 + *(int *)(lVar19 + 0x14));
          uVar24 = puVar16[1];
          *puVar3 = *puVar16;
          puVar3[1] = uVar24;
          *(undefined1 *)(lVar29 + *(int *)(lVar19 + 0x18)) =
               *(undefined1 *)(lVar18 + *(int *)(lVar19 + 0x18));
          *(undefined1 *)(lVar29 + *(int *)(lVar19 + 0x1c)) =
               *(undefined1 *)(lVar18 + *(int *)(lVar19 + 0x1c));
          puVar3 = (undefined8 *)(lVar29 + *(int *)(lVar19 + 0x20));
          puVar16 = (undefined8 *)(lVar18 + *(int *)(lVar19 + 0x20));
          *puVar3 = *puVar16;
          *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar16 + 1);
          *(undefined1 *)(lVar29 + *(int *)(lVar19 + 0x24)) =
               *(undefined1 *)(lVar18 + *(int *)(lVar19 + 0x24));
          pcVar28 = *(code **)(lVar27 + 0x38);
          _swift_bridgeObjectRetain();
          (*pcVar28)(lVar29,0,1,lVar19);
        }
        else {
          lVar20 = 0x112dcbf00;
          func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
          _memcpy(lVar29,lVar18,*(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
        }
        (**(code **)(lVar23 + 0x38))(puVar13,0,1,lVar15);
      }
      else {
        lVar15 = 0x112db3cd8;
        func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
        _memcpy(puVar13,puVar3,*(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
      }
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x1c));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x1c));
      lVar15 = 0;
      FUN_10475cf44();
      lVar23 = *(long *)(lVar15 + -8);
      puVar16 = puVar3;
      (**(code **)(lVar23 + 0x30))(puVar3,1,lVar15);
      if ((int)puVar16 == 0) {
        uVar24 = puVar3[1];
        *puVar13 = *puVar3;
        puVar13[1] = uVar24;
        uVar24 = puVar3[2];
        uVar25 = puVar3[3];
        _swift_bridgeObjectRetain();
        func_0x00010006c00c(uVar24,uVar25);
        puVar13[2] = uVar24;
        puVar13[3] = uVar25;
        puVar16 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar15 + 0x18));
        puVar4 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar15 + 0x18));
        puVar17 = puVar4;
        (*pcVar22)(puVar4,1,lVar14);
        if ((int)puVar17 == 0) {
          uVar24 = puVar4[1];
          *puVar16 = *puVar4;
          puVar16[1] = uVar24;
          uVar24 = puVar4[3];
          puVar16[2] = puVar4[2];
          puVar16[3] = uVar24;
          uVar25 = puVar4[5];
          puVar16[4] = puVar4[4];
          puVar16[5] = uVar25;
          uVar26 = puVar4[7];
          puVar16[6] = puVar4[6];
          puVar16[7] = uVar26;
          puVar16[8] = puVar4[8];
          lVar29 = puVar4[0xf];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar24);
          _swift_bridgeObjectRetain(uVar25);
          _swift_bridgeObjectRetain(uVar26);
          if (lVar29 == 1) {
            uVar24 = puVar4[9];
            puVar16[10] = puVar4[10];
            puVar16[9] = uVar24;
            uVar24 = puVar4[0xb];
            puVar16[0xc] = puVar4[0xc];
            puVar16[0xb] = uVar24;
            uVar24 = puVar4[0xd];
            puVar16[0xe] = puVar4[0xe];
            puVar16[0xd] = uVar24;
            puVar16[0xf] = puVar4[0xf];
          }
          else {
            lVar18 = puVar4[0xb];
            if (lVar18 == 1) {
              uVar24 = puVar4[9];
              puVar16[10] = puVar4[10];
              puVar16[9] = uVar24;
              uVar24 = puVar4[0xb];
              puVar16[0xc] = puVar4[0xc];
              puVar16[0xb] = uVar24;
              puVar16[0xd] = puVar4[0xd];
            }
            else {
              uVar24 = puVar4[9];
              puVar16[10] = puVar4[10];
              puVar16[9] = uVar24;
              uVar24 = puVar4[0xc];
              uVar25 = puVar4[0xd];
              puVar16[0xb] = lVar18;
              puVar16[0xc] = uVar24;
              puVar16[0xd] = uVar25;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar25);
            }
            puVar16[0xe] = puVar4[0xe];
            puVar16[0xf] = lVar29;
            _swift_bridgeObjectRetain(lVar29);
          }
          uVar24 = puVar4[0x11];
          puVar16[0x10] = puVar4[0x10];
          puVar16[0x11] = uVar24;
          uVar25 = puVar4[0x13];
          puVar16[0x12] = puVar4[0x12];
          puVar16[0x13] = uVar25;
          lVar29 = (long)puVar16 + (long)*(int *)(lVar14 + 0x34);
          lVar18 = (long)puVar4 + (long)*(int *)(lVar14 + 0x34);
          lVar19 = 0;
          FUN_104742f28();
          lVar27 = *(long *)(lVar19 + -8);
          pcVar22 = *(code **)(lVar27 + 0x30);
          _swift_bridgeObjectRetain(uVar24);
          _swift_bridgeObjectRetain(uVar25);
          lVar20 = lVar18;
          (*pcVar22)(lVar18,1,lVar19);
          if ((int)lVar20 == 0) {
            lVar20 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar20 + -8) + 0x10))(lVar29,lVar18,lVar20);
            puVar17 = (undefined8 *)(lVar29 + *(int *)(lVar19 + 0x14));
            puVar5 = (undefined8 *)(lVar18 + *(int *)(lVar19 + 0x14));
            uVar24 = puVar5[1];
            *puVar17 = *puVar5;
            puVar17[1] = uVar24;
            *(undefined1 *)(lVar29 + *(int *)(lVar19 + 0x18)) =
                 *(undefined1 *)(lVar18 + *(int *)(lVar19 + 0x18));
            *(undefined1 *)(lVar29 + *(int *)(lVar19 + 0x1c)) =
                 *(undefined1 *)(lVar18 + *(int *)(lVar19 + 0x1c));
            puVar17 = (undefined8 *)(lVar29 + *(int *)(lVar19 + 0x20));
            puVar5 = (undefined8 *)(lVar18 + *(int *)(lVar19 + 0x20));
            *puVar17 = *puVar5;
            *(undefined1 *)(puVar17 + 1) = *(undefined1 *)(puVar5 + 1);
            *(undefined1 *)(lVar29 + *(int *)(lVar19 + 0x24)) =
                 *(undefined1 *)(lVar18 + *(int *)(lVar19 + 0x24));
            pcVar22 = *(code **)(lVar27 + 0x38);
            _swift_bridgeObjectRetain();
            (*pcVar22)(lVar29,0,1,lVar19);
          }
          else {
            lVar20 = 0x112dcbf00;
            func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
            _memcpy(lVar29,lVar18,*(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
          }
          puVar17 = (undefined8 *)((long)puVar16 + (long)*(int *)(lVar14 + 0x38));
          puVar4 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar14 + 0x38));
          uVar24 = *puVar4;
          puVar17[1] = puVar4[1];
          *puVar17 = uVar24;
          uVar24 = *(undefined8 *)((long)puVar4 + 9);
          *(undefined8 *)((long)puVar17 + 0x11) = *(undefined8 *)((long)puVar4 + 0x11);
          *(undefined8 *)((long)puVar17 + 9) = uVar24;
          (**(code **)(lVar21 + 0x38))(puVar16,0,1);
        }
        else {
          lVar14 = 0x112db3ce0;
          func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
          _memcpy(puVar16,puVar4,*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
        }
        puVar16 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar15 + 0x1c));
        puVar3 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar15 + 0x1c));
        if (puVar3[0x18] == 1) {
          _memcpy(puVar16,puVar3,0x260);
        }
        else {
          lVar14 = puVar3[1];
          if (lVar14 == 1) {
            uVar24 = *puVar3;
            puVar16[1] = puVar3[1];
            *puVar16 = uVar24;
            puVar16[2] = puVar3[2];
          }
          else {
            *puVar16 = *puVar3;
            puVar16[1] = lVar14;
            uVar24 = puVar3[2];
            puVar16[2] = uVar24;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar24);
          }
          uVar30 = puVar3[5];
          if (uVar30 >> 0x3c == 0xb) {
            uVar24 = puVar3[3];
            puVar16[4] = puVar3[4];
            puVar16[3] = uVar24;
            puVar16[5] = puVar3[5];
          }
          else {
            puVar16[3] = puVar3[3];
            if (uVar30 >> 0x3c < 0xf) {
              uVar24 = puVar3[4];
              func_0x00010006c00c(uVar24,uVar30);
              puVar16[4] = uVar24;
              puVar16[5] = uVar30;
            }
            else {
              uVar24 = puVar3[4];
              puVar16[5] = puVar3[5];
              puVar16[4] = uVar24;
            }
          }
          *(undefined2 *)(puVar16 + 6) = *(undefined2 *)(puVar3 + 6);
          puVar16[7] = puVar3[7];
          lVar14 = puVar3[9];
          if (lVar14 == 1) {
            uVar24 = puVar3[0x10];
            uVar26 = puVar3[0x13];
            uVar25 = puVar3[0x12];
            puVar16[0x11] = puVar3[0x11];
            puVar16[0x10] = uVar24;
            puVar16[0x13] = uVar26;
            puVar16[0x12] = uVar25;
            uVar24 = puVar3[0x14];
            puVar16[0x15] = puVar3[0x15];
            puVar16[0x14] = uVar24;
            uVar24 = *(undefined8 *)((long)puVar3 + 0xaa);
            *(undefined8 *)((long)puVar16 + 0xb2) = *(undefined8 *)((long)puVar3 + 0xb2);
            *(undefined8 *)((long)puVar16 + 0xaa) = uVar24;
            uVar24 = puVar3[8];
            uVar26 = puVar3[0xb];
            uVar25 = puVar3[10];
            puVar16[9] = puVar3[9];
            puVar16[8] = uVar24;
            puVar16[0xb] = uVar26;
            puVar16[10] = uVar25;
            uVar24 = puVar3[0xc];
            uVar26 = puVar3[0xf];
            uVar25 = puVar3[0xe];
            puVar16[0xd] = puVar3[0xd];
            puVar16[0xc] = uVar24;
            puVar16[0xf] = uVar26;
            puVar16[0xe] = uVar25;
          }
          else {
            puVar16[8] = puVar3[8];
            puVar16[9] = lVar14;
            uVar6 = puVar3[0xb];
            puVar16[10] = puVar3[10];
            puVar16[0xb] = uVar6;
            uVar24 = puVar3[0xc];
            uVar25 = puVar3[0xd];
            puVar16[0xc] = uVar24;
            puVar16[0xd] = uVar25;
            uVar25 = puVar3[0xe];
            uVar26 = puVar3[0xf];
            puVar16[0xe] = uVar25;
            puVar16[0xf] = uVar26;
            uVar26 = puVar3[0x10];
            uVar7 = puVar3[0x11];
            puVar16[0x10] = uVar26;
            puVar16[0x11] = uVar7;
            lVar14 = puVar3[0x13];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar6);
            _swift_bridgeObjectRetain(uVar24);
            _swift_bridgeObjectRetain(uVar25);
            _swift_bridgeObjectRetain(uVar26);
            _swift_bridgeObjectRetain(uVar7);
            if (lVar14 == 1) {
              uVar24 = puVar3[0x12];
              puVar16[0x13] = puVar3[0x13];
              puVar16[0x12] = uVar24;
            }
            else {
              puVar16[0x12] = puVar3[0x12];
              puVar16[0x13] = lVar14;
              _swift_bridgeObjectRetain(lVar14);
            }
            uVar24 = puVar3[0x15];
            puVar16[0x14] = puVar3[0x14];
            puVar16[0x15] = uVar24;
            puVar16[0x16] = puVar3[0x16];
            *(undefined2 *)(puVar16 + 0x17) = *(undefined2 *)(puVar3 + 0x17);
            _swift_bridgeObjectRetain();
          }
          *(undefined2 *)((long)puVar16 + 0xba) = *(undefined2 *)((long)puVar3 + 0xba);
          if (puVar3[0x18] == 0) {
            lVar14 = puVar3[0x18];
            uVar25 = puVar3[0x1b];
            uVar24 = puVar3[0x1a];
            puVar16[0x19] = puVar3[0x19];
            puVar16[0x18] = lVar14;
            puVar16[0x1b] = uVar25;
            puVar16[0x1a] = uVar24;
            uVar24 = puVar3[0x1c];
            uVar26 = puVar3[0x1f];
            uVar25 = puVar3[0x1e];
            puVar16[0x1d] = puVar3[0x1d];
            puVar16[0x1c] = uVar24;
            puVar16[0x1f] = uVar26;
            puVar16[0x1e] = uVar25;
          }
          else {
            puVar16[0x18] = puVar3[0x18];
            uVar24 = puVar3[0x19];
            puVar16[0x1a] = puVar3[0x1a];
            puVar16[0x19] = uVar24;
            uVar24 = puVar3[0x1c];
            puVar16[0x1b] = puVar3[0x1b];
            puVar16[0x1c] = uVar24;
            lVar14 = puVar3[0x1e];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar24);
            if (lVar14 == 0) {
              uVar24 = puVar3[0x1d];
              puVar16[0x1e] = puVar3[0x1e];
              puVar16[0x1d] = uVar24;
              puVar16[0x1f] = puVar3[0x1f];
            }
            else {
              puVar16[0x1d] = puVar3[0x1d];
              puVar16[0x1e] = lVar14;
              uVar24 = puVar3[0x1f];
              puVar16[0x1f] = uVar24;
              _swift_bridgeObjectRetain(lVar14);
              _swift_bridgeObjectRetain(uVar24);
            }
          }
          *(undefined1 *)(puVar16 + 0x20) = *(undefined1 *)(puVar3 + 0x20);
          uVar24 = puVar3[0x22];
          puVar16[0x21] = puVar3[0x21];
          puVar16[0x22] = uVar24;
          uVar24 = puVar3[0x24];
          puVar16[0x23] = puVar3[0x23];
          puVar16[0x24] = uVar24;
          uVar25 = puVar3[0x25];
          puVar16[0x26] = puVar3[0x26];
          puVar16[0x25] = uVar25;
          uVar25 = *(undefined8 *)((long)puVar3 + 0x132);
          *(undefined8 *)((long)puVar16 + 0x13a) = *(undefined8 *)((long)puVar3 + 0x13a);
          *(undefined8 *)((long)puVar16 + 0x132) = uVar25;
          lVar14 = puVar3[0x2a];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar24);
          if (lVar14 == 0) {
            uVar24 = puVar3[0x29];
            uVar26 = puVar3[0x2c];
            uVar25 = puVar3[0x2b];
            puVar16[0x2a] = puVar3[0x2a];
            puVar16[0x29] = uVar24;
            puVar16[0x2c] = uVar26;
            puVar16[0x2b] = uVar25;
          }
          else {
            puVar16[0x29] = puVar3[0x29];
            puVar16[0x2a] = lVar14;
            uVar24 = puVar3[0x2c];
            puVar16[0x2b] = puVar3[0x2b];
            puVar16[0x2c] = uVar24;
            _swift_bridgeObjectRetain(lVar14);
            _swift_bridgeObjectRetain(uVar24);
          }
          uVar24 = puVar3[0x2e];
          puVar16[0x2d] = puVar3[0x2d];
          puVar16[0x2e] = uVar24;
          uVar24 = puVar3[0x2f];
          uVar25 = puVar3[0x30];
          *(undefined1 *)(puVar16 + 0x31) = *(undefined1 *)(puVar3 + 0x31);
          uVar30 = puVar3[0x36];
          uVar11 = *(uint5 *)(puVar3 + 0x39);
          puVar16[0x2f] = uVar24;
          puVar16[0x30] = uVar25;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar25);
          if ((((uVar30 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
             (((ulong)uVar11 & 0xfefefefefefefefe) == 0x6fefefefe)) {
            uVar24 = puVar3[0x32];
            uVar26 = puVar3[0x35];
            uVar25 = puVar3[0x34];
            puVar16[0x33] = puVar3[0x33];
            puVar16[0x32] = uVar24;
            puVar16[0x35] = uVar26;
            puVar16[0x34] = uVar25;
            uVar24 = puVar3[0x36];
            puVar16[0x37] = puVar3[0x37];
            puVar16[0x36] = uVar24;
            uVar24 = *(undefined8 *)((long)puVar3 + 0x1bd);
            *(undefined8 *)((long)puVar16 + 0x1c5) = *(undefined8 *)((long)puVar3 + 0x1c5);
            *(undefined8 *)((long)puVar16 + 0x1bd) = uVar24;
          }
          else {
            uVar24 = puVar3[0x32];
            uVar6 = puVar3[0x33];
            uVar25 = puVar3[0x34];
            uVar7 = puVar3[0x35];
            uVar26 = puVar3[0x37];
            uVar8 = puVar3[0x38];
            func_0x00010179a2b8(uVar24,uVar6,uVar25,uVar7,uVar30,uVar26,uVar8,(ulong)uVar11);
            puVar16[0x32] = uVar24;
            puVar16[0x33] = uVar6;
            puVar16[0x34] = uVar25;
            puVar16[0x35] = uVar7;
            puVar16[0x36] = uVar30;
            puVar16[0x37] = uVar26;
            puVar16[0x38] = uVar8;
            *(char *)((long)puVar16 + 0x1cc) = (char)(uVar11 >> 0x20);
            *(int *)(puVar16 + 0x39) = (int)uVar11;
          }
          *(undefined1 *)((long)puVar16 + 0x1cd) = *(undefined1 *)((long)puVar3 + 0x1cd);
          uVar24 = puVar3[0x3b];
          puVar16[0x3a] = puVar3[0x3a];
          puVar16[0x3b] = uVar24;
          *(undefined1 *)(puVar16 + 0x3c) = *(undefined1 *)(puVar3 + 0x3c);
          lVar14 = puVar3[0x3e];
          _swift_bridgeObjectRetain();
          if (lVar14 == 0) {
            uVar24 = puVar3[0x3d];
            uVar26 = puVar3[0x40];
            uVar25 = puVar3[0x3f];
            puVar16[0x3e] = puVar3[0x3e];
            puVar16[0x3d] = uVar24;
            puVar16[0x40] = uVar26;
            puVar16[0x3f] = uVar25;
            uVar24 = puVar3[0x41];
            puVar16[0x42] = puVar3[0x42];
            puVar16[0x41] = uVar24;
          }
          else {
            puVar16[0x3d] = puVar3[0x3d];
            puVar16[0x3e] = lVar14;
            uVar24 = puVar3[0x40];
            puVar16[0x3f] = puVar3[0x3f];
            puVar16[0x40] = uVar24;
            puVar16[0x41] = puVar3[0x41];
            uVar25 = puVar3[0x42];
            puVar16[0x42] = uVar25;
            _swift_bridgeObjectRetain(lVar14);
            _swift_bridgeObjectRetain(uVar24);
            _swift_bridgeObjectRetain(uVar25);
          }
          *(undefined1 *)(puVar16 + 0x43) = *(undefined1 *)(puVar3 + 0x43);
          lVar14 = puVar3[0x45];
          if (lVar14 == 0) {
            uVar24 = puVar3[0x44];
            uVar26 = puVar3[0x47];
            uVar25 = puVar3[0x46];
            puVar16[0x45] = puVar3[0x45];
            puVar16[0x44] = uVar24;
            puVar16[0x47] = uVar26;
            puVar16[0x46] = uVar25;
            uVar24 = puVar3[0x48];
            puVar16[0x49] = puVar3[0x49];
            puVar16[0x48] = uVar24;
            puVar16[0x4a] = puVar3[0x4a];
          }
          else {
            puVar16[0x44] = puVar3[0x44];
            puVar16[0x45] = lVar14;
            puVar16[0x46] = puVar3[0x46];
            uVar24 = puVar3[0x47];
            puVar16[0x47] = uVar24;
            puVar16[0x48] = puVar3[0x48];
            uVar25 = puVar3[0x49];
            puVar16[0x49] = uVar25;
            puVar16[0x4a] = puVar3[0x4a];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar24);
            _swift_bridgeObjectRetain(uVar25);
          }
          puVar16[0x4b] = puVar3[0x4b];
          _swift_bridgeObjectRetain();
        }
        (**(code **)(lVar23 + 0x38))(puVar13,0,1,lVar15);
      }
      else {
        lVar14 = 0x112db3cc8;
        func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
        _memcpy(puVar13,puVar3,*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
      }
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x20)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x20));
      (**(code **)(lVar31 + 0x38))(puVar1,0,1,lVar12);
    }
    else {
      lVar14 = 0x112db3e90;
      func_0x0001000285a8(0x112db3e90,&UNK_10d95e3e0);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
    }
    iVar9 = *(int *)(param_3 + 0x1c);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    _swift_bridgeObjectRetain();
  }
  else {
    lVar14 = *param_2;
    *param_1 = lVar14;
    uVar30 = (ulong)uVar10 & 0xff;
    param_1 = (long *)(lVar14 + (uVar30 + 0x10 & (uVar30 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 104719d9c; end: 10471a42f;  */

void FUN_104719d9c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  lVar1 = param_1 + *(int *)(param_2 + 0x14);
  lVar2 = 0;
  FUN_10472f4dc();
  lVar4 = lVar1;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(lVar1,1,lVar2);
  if ((int)lVar4 == 0) {
    lVar3 = 0;
    FUN_104739264();
    pcVar7 = *(code **)(*(long *)(lVar3 + -8) + 0x30);
    lVar4 = lVar1;
    (*pcVar7)(lVar1,1,lVar3);
    if ((int)lVar4 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x28));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x38));
      lVar4 = *(long *)(lVar1 + 0x78);
      if (lVar4 != 1) {
        if (*(long *)(lVar1 + 0x58) != 1) {
          _swift_bridgeObjectRelease(*(long *)(lVar1 + 0x58));
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x68));
          lVar4 = *(long *)(lVar1 + 0x78);
        }
        _swift_bridgeObjectRelease(lVar4);
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x88));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x98));
      lVar4 = lVar1 + *(int *)(lVar3 + 0x34);
      lVar5 = 0;
      FUN_104742f28();
      lVar6 = lVar4;
      (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar4,1,lVar5);
      if ((int)lVar6 == 0) {
        lVar6 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar6 + -8) + 8))(lVar4,lVar6);
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + *(int *)(lVar5 + 0x14) + 8));
      }
    }
    lVar4 = lVar1 + *(int *)(lVar2 + 0x14);
    if (*(long *)(lVar4 + 0xc0) != 1) {
      if (*(long *)(lVar4 + 8) != 1) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x10));
      }
      if (*(ulong *)(lVar4 + 0x28) >> 0x3c < 0xf &&
          (*(ulong *)(lVar4 + 0x28) & 0xf000000000000000) != 0xb000000000000000) {
        func_0x00010006c090(*(undefined8 *)(lVar4 + 0x20));
      }
      if (*(long *)(lVar4 + 0x48) != 1) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x58));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x60));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x70));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x80));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x88));
        if (*(long *)(lVar4 + 0x98) != 1) {
          _swift_bridgeObjectRelease();
        }
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0xa8));
      }
      if (*(long *)(lVar4 + 0xc0) != 0) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0xe0));
        if (*(long *)(lVar4 + 0xf0) != 0) {
          _swift_bridgeObjectRelease();
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0xf8));
        }
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x110));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x120));
      if (*(long *)(lVar4 + 0x150) != 0) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x160));
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x170));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x180));
      if ((((*(ulong *)(lVar4 + 0x1b0) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
         (((ulong)*(uint5 *)(lVar4 + 0x1c8) & 0xfefefefefefefefe) != 0x6fefefefe)) {
        func_0x00010179b820(*(undefined8 *)(lVar4 + 400),*(undefined8 *)(lVar4 + 0x198),
                            *(undefined8 *)(lVar4 + 0x1a0),*(undefined8 *)(lVar4 + 0x1a8),
                            *(ulong *)(lVar4 + 0x1b0),*(undefined8 *)(lVar4 + 0x1b8),
                            *(undefined8 *)(lVar4 + 0x1c0));
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x1d8));
      if (*(long *)(lVar4 + 0x1f0) != 0) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x200));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x210));
      }
      if (*(long *)(lVar4 + 0x228) != 0) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x238));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x248));
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 600));
    }
    lVar4 = lVar1 + *(int *)(lVar2 + 0x18);
    lVar5 = 0;
    FUN_10470fbcc();
    lVar6 = lVar4;
    (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar4,1,lVar5);
    if ((int)lVar6 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x18));
      lVar6 = *(long *)(lVar4 + 0x50);
      if (lVar6 != 1) {
        if (*(long *)(lVar4 + 0x30) != 1) {
          _swift_bridgeObjectRelease(*(long *)(lVar4 + 0x30));
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x40));
          lVar6 = *(long *)(lVar4 + 0x50);
        }
        _swift_bridgeObjectRelease(lVar6);
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x80));
      if (*(long *)(lVar4 + 0xa0) != 1) {
        _swift_bridgeObjectRelease();
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0xa8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0xb0));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0xb8));
      lVar4 = lVar4 + *(int *)(lVar5 + 0x38);
      lVar5 = 0;
      FUN_104742f28();
      lVar6 = lVar4;
      (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar4,1,lVar5);
      if ((int)lVar6 == 0) {
        lVar6 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar6 + -8) + 8))(lVar4,lVar6);
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + *(int *)(lVar5 + 0x14) + 8));
      }
    }
    lVar1 = lVar1 + *(int *)(lVar2 + 0x1c);
    lVar2 = 0;
    FUN_10475cf44();
    lVar4 = lVar1;
    (**(code **)(*(long *)(lVar2 + -8) + 0x30))(lVar1,1,lVar2);
    if ((int)lVar4 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
      func_0x00010006c090(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18));
      lVar4 = lVar1 + *(int *)(lVar2 + 0x18);
      lVar6 = lVar4;
      (*pcVar7)(lVar4,1,lVar3);
      if ((int)lVar6 == 0) {
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 8));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x18));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x28));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x38));
        lVar6 = *(long *)(lVar4 + 0x78);
        if (lVar6 != 1) {
          if (*(long *)(lVar4 + 0x58) != 1) {
            _swift_bridgeObjectRelease(*(long *)(lVar4 + 0x58));
            _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x68));
            lVar6 = *(long *)(lVar4 + 0x78);
          }
          _swift_bridgeObjectRelease(lVar6);
        }
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x88));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x98));
        lVar4 = lVar4 + *(int *)(lVar3 + 0x34);
        lVar6 = 0;
        FUN_104742f28();
        lVar3 = lVar4;
        (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar4,1,lVar6);
        if ((int)lVar3 == 0) {
          lVar3 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar3 + -8) + 8))(lVar4,lVar3);
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + *(int *)(lVar6 + 0x14) + 8));
        }
      }
      lVar1 = lVar1 + *(int *)(lVar2 + 0x1c);
      if (*(long *)(lVar1 + 0xc0) != 1) {
        if (*(long *)(lVar1 + 8) != 1) {
          _swift_bridgeObjectRelease();
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x10));
        }
        if ((*(ulong *)(lVar1 + 0x28) >> 0x3c < 0xf) &&
           ((*(ulong *)(lVar1 + 0x28) & 0xf000000000000000) != 0xb000000000000000)) {
          func_0x00010006c090(*(undefined8 *)(lVar1 + 0x20));
        }
        if (*(long *)(lVar1 + 0x48) != 1) {
          _swift_bridgeObjectRelease();
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x58));
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x60));
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x70));
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x80));
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x88));
          if (*(long *)(lVar1 + 0x98) != 1) {
            _swift_bridgeObjectRelease();
          }
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0xa8));
        }
        if (*(long *)(lVar1 + 0xc0) != 0) {
          _swift_bridgeObjectRelease();
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0xe0));
          if (*(long *)(lVar1 + 0xf0) != 0) {
            _swift_bridgeObjectRelease();
            _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0xf8));
          }
        }
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x110));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x120));
        if (*(long *)(lVar1 + 0x150) != 0) {
          _swift_bridgeObjectRelease();
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x160));
        }
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x170));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x180));
        if ((((*(ulong *)(lVar1 + 0x1b0) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
           (((ulong)*(uint5 *)(lVar1 + 0x1c8) & 0xfefefefefefefefe) != 0x6fefefefe)) {
          func_0x00010179b820(*(undefined8 *)(lVar1 + 400),*(undefined8 *)(lVar1 + 0x198),
                              *(undefined8 *)(lVar1 + 0x1a0),*(undefined8 *)(lVar1 + 0x1a8),
                              *(ulong *)(lVar1 + 0x1b0),*(undefined8 *)(lVar1 + 0x1b8),
                              *(undefined8 *)(lVar1 + 0x1c0));
        }
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x1d8));
        if (*(long *)(lVar1 + 0x1f0) != 0) {
          _swift_bridgeObjectRelease();
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x200));
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x210));
        }
        if (*(long *)(lVar1 + 0x228) != 0) {
          _swift_bridgeObjectRelease();
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x238));
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x248));
        }
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 600));
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18)));
  return;
}



/* Entry: 10471a430; end: 104720d83;  */

undefined8 * FUN_10471a430(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  uint5 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  code *pcVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  ulong uVar26;
  undefined8 uVar27;
  long lVar28;
  code *pcVar29;
  long lVar30;
  
  uVar23 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar23;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  lVar11 = 0;
  FUN_10472f4dc();
  lVar30 = *(long *)(lVar11 + -8);
  pcVar21 = *(code **)(lVar30 + 0x30);
  _swift_bridgeObjectRetain(uVar23);
  puVar12 = puVar2;
  (*pcVar21)(puVar2,1,lVar11);
  if ((int)puVar12 == 0) {
    lVar13 = 0;
    FUN_104739264();
    lVar20 = *(long *)(lVar13 + -8);
    pcVar21 = *(code **)(lVar20 + 0x30);
    puVar12 = puVar2;
    (*pcVar21)(puVar2,1,lVar13);
    if ((int)puVar12 == 0) {
      uVar23 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar23;
      uVar23 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar23;
      uVar24 = puVar2[5];
      puVar1[4] = puVar2[4];
      puVar1[5] = uVar24;
      uVar27 = puVar2[7];
      puVar1[6] = puVar2[6];
      puVar1[7] = uVar27;
      puVar1[8] = puVar2[8];
      lVar14 = puVar2[0xf];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(uVar24);
      _swift_bridgeObjectRetain(uVar27);
      if (lVar14 == 1) {
        uVar23 = puVar2[9];
        puVar1[10] = puVar2[10];
        puVar1[9] = uVar23;
        uVar23 = puVar2[0xb];
        puVar1[0xc] = puVar2[0xc];
        puVar1[0xb] = uVar23;
        uVar23 = puVar2[0xd];
        puVar1[0xe] = puVar2[0xe];
        puVar1[0xd] = uVar23;
        puVar1[0xf] = puVar2[0xf];
      }
      else {
        lVar22 = puVar2[0xb];
        if (lVar22 == 1) {
          uVar23 = puVar2[9];
          puVar1[10] = puVar2[10];
          puVar1[9] = uVar23;
          uVar23 = puVar2[0xb];
          puVar1[0xc] = puVar2[0xc];
          puVar1[0xb] = uVar23;
          puVar1[0xd] = puVar2[0xd];
        }
        else {
          uVar23 = puVar2[9];
          puVar1[10] = puVar2[10];
          puVar1[9] = uVar23;
          uVar23 = puVar2[0xc];
          uVar24 = puVar2[0xd];
          puVar1[0xb] = lVar22;
          puVar1[0xc] = uVar23;
          puVar1[0xd] = uVar24;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar24);
        }
        puVar1[0xe] = puVar2[0xe];
        puVar1[0xf] = lVar14;
        _swift_bridgeObjectRetain(lVar14);
      }
      uVar23 = puVar2[0x11];
      puVar1[0x10] = puVar2[0x10];
      puVar1[0x11] = uVar23;
      uVar24 = puVar2[0x13];
      puVar1[0x12] = puVar2[0x12];
      puVar1[0x13] = uVar24;
      lVar14 = (long)puVar1 + (long)*(int *)(lVar13 + 0x34);
      lVar22 = (long)puVar2 + (long)*(int *)(lVar13 + 0x34);
      lVar17 = 0;
      FUN_104742f28();
      lVar19 = *(long *)(lVar17 + -8);
      pcVar29 = *(code **)(lVar19 + 0x30);
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(uVar24);
      lVar25 = lVar22;
      (*pcVar29)(lVar22,1,lVar17);
      if ((int)lVar25 == 0) {
        lVar25 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar25 + -8) + 0x10))(lVar14,lVar22,lVar25);
        puVar12 = (undefined8 *)(lVar14 + *(int *)(lVar17 + 0x14));
        puVar3 = (undefined8 *)(lVar22 + *(int *)(lVar17 + 0x14));
        uVar23 = puVar3[1];
        *puVar12 = *puVar3;
        puVar12[1] = uVar23;
        *(undefined1 *)(lVar14 + *(int *)(lVar17 + 0x18)) =
             *(undefined1 *)(lVar22 + *(int *)(lVar17 + 0x18));
        *(undefined1 *)(lVar14 + *(int *)(lVar17 + 0x1c)) =
             *(undefined1 *)(lVar22 + *(int *)(lVar17 + 0x1c));
        puVar12 = (undefined8 *)(lVar14 + *(int *)(lVar17 + 0x20));
        puVar3 = (undefined8 *)(lVar22 + *(int *)(lVar17 + 0x20));
        *puVar12 = *puVar3;
        *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(puVar3 + 1);
        *(undefined1 *)(lVar14 + *(int *)(lVar17 + 0x24)) =
             *(undefined1 *)(lVar22 + *(int *)(lVar17 + 0x24));
        pcVar29 = *(code **)(lVar19 + 0x38);
        _swift_bridgeObjectRetain();
        (*pcVar29)(lVar14,0,1,lVar17);
      }
      else {
        lVar25 = 0x112dcbf00;
        func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
        _memcpy(lVar14,lVar22,*(undefined8 *)(*(long *)(lVar25 + -8) + 0x40));
      }
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x38));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x38));
      uVar23 = *puVar3;
      puVar12[1] = puVar3[1];
      *puVar12 = uVar23;
      uVar23 = *(undefined8 *)((long)puVar3 + 9);
      *(undefined8 *)((long)puVar12 + 0x11) = *(undefined8 *)((long)puVar3 + 0x11);
      *(undefined8 *)((long)puVar12 + 9) = uVar23;
      (**(code **)(lVar20 + 0x38))(puVar1,0,1);
    }
    else {
      lVar14 = 0x112db3ce0;
      func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
    }
    puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x14));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x14));
    if (puVar3[0x18] == 1) {
      _memcpy(puVar12,puVar3,0x260);
    }
    else {
      lVar14 = puVar3[1];
      if (lVar14 == 1) {
        uVar23 = *puVar3;
        puVar12[1] = puVar3[1];
        *puVar12 = uVar23;
        puVar12[2] = puVar3[2];
      }
      else {
        *puVar12 = *puVar3;
        puVar12[1] = lVar14;
        uVar23 = puVar3[2];
        puVar12[2] = uVar23;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar23);
      }
      uVar26 = puVar3[5];
      if (uVar26 >> 0x3c == 0xb) {
        uVar23 = puVar3[3];
        puVar12[4] = puVar3[4];
        puVar12[3] = uVar23;
        puVar12[5] = puVar3[5];
      }
      else {
        puVar12[3] = puVar3[3];
        if (uVar26 >> 0x3c < 0xf) {
          uVar23 = puVar3[4];
          func_0x00010006c00c(uVar23,uVar26);
          puVar12[4] = uVar23;
          puVar12[5] = uVar26;
        }
        else {
          uVar23 = puVar3[4];
          puVar12[5] = puVar3[5];
          puVar12[4] = uVar23;
        }
      }
      *(undefined2 *)(puVar12 + 6) = *(undefined2 *)(puVar3 + 6);
      puVar12[7] = puVar3[7];
      lVar14 = puVar3[9];
      if (lVar14 == 1) {
        uVar23 = puVar3[0x10];
        uVar27 = puVar3[0x13];
        uVar24 = puVar3[0x12];
        puVar12[0x11] = puVar3[0x11];
        puVar12[0x10] = uVar23;
        puVar12[0x13] = uVar27;
        puVar12[0x12] = uVar24;
        uVar23 = puVar3[0x14];
        puVar12[0x15] = puVar3[0x15];
        puVar12[0x14] = uVar23;
        uVar23 = *(undefined8 *)((long)puVar3 + 0xaa);
        *(undefined8 *)((long)puVar12 + 0xb2) = *(undefined8 *)((long)puVar3 + 0xb2);
        *(undefined8 *)((long)puVar12 + 0xaa) = uVar23;
        uVar23 = puVar3[8];
        uVar27 = puVar3[0xb];
        uVar24 = puVar3[10];
        puVar12[9] = puVar3[9];
        puVar12[8] = uVar23;
        puVar12[0xb] = uVar27;
        puVar12[10] = uVar24;
        uVar23 = puVar3[0xc];
        uVar27 = puVar3[0xf];
        uVar24 = puVar3[0xe];
        puVar12[0xd] = puVar3[0xd];
        puVar12[0xc] = uVar23;
        puVar12[0xf] = uVar27;
        puVar12[0xe] = uVar24;
      }
      else {
        puVar12[8] = puVar3[8];
        puVar12[9] = lVar14;
        uVar6 = puVar3[0xb];
        puVar12[10] = puVar3[10];
        puVar12[0xb] = uVar6;
        uVar23 = puVar3[0xc];
        uVar24 = puVar3[0xd];
        puVar12[0xc] = uVar23;
        puVar12[0xd] = uVar24;
        uVar24 = puVar3[0xe];
        uVar27 = puVar3[0xf];
        puVar12[0xe] = uVar24;
        puVar12[0xf] = uVar27;
        uVar27 = puVar3[0x10];
        uVar7 = puVar3[0x11];
        puVar12[0x10] = uVar27;
        puVar12[0x11] = uVar7;
        lVar14 = puVar3[0x13];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar6);
        _swift_bridgeObjectRetain(uVar23);
        _swift_bridgeObjectRetain(uVar24);
        _swift_bridgeObjectRetain(uVar27);
        _swift_bridgeObjectRetain(uVar7);
        if (lVar14 == 1) {
          uVar23 = puVar3[0x12];
          puVar12[0x13] = puVar3[0x13];
          puVar12[0x12] = uVar23;
        }
        else {
          puVar12[0x12] = puVar3[0x12];
          puVar12[0x13] = lVar14;
          _swift_bridgeObjectRetain(lVar14);
        }
        uVar23 = puVar3[0x15];
        puVar12[0x14] = puVar3[0x14];
        puVar12[0x15] = uVar23;
        puVar12[0x16] = puVar3[0x16];
        *(undefined2 *)(puVar12 + 0x17) = *(undefined2 *)(puVar3 + 0x17);
        _swift_bridgeObjectRetain();
      }
      *(undefined2 *)((long)puVar12 + 0xba) = *(undefined2 *)((long)puVar3 + 0xba);
      if (puVar3[0x18] == 0) {
        lVar14 = puVar3[0x18];
        uVar24 = puVar3[0x1b];
        uVar23 = puVar3[0x1a];
        puVar12[0x19] = puVar3[0x19];
        puVar12[0x18] = lVar14;
        puVar12[0x1b] = uVar24;
        puVar12[0x1a] = uVar23;
        uVar23 = puVar3[0x1c];
        uVar27 = puVar3[0x1f];
        uVar24 = puVar3[0x1e];
        puVar12[0x1d] = puVar3[0x1d];
        puVar12[0x1c] = uVar23;
        puVar12[0x1f] = uVar27;
        puVar12[0x1e] = uVar24;
      }
      else {
        puVar12[0x18] = puVar3[0x18];
        uVar23 = puVar3[0x19];
        puVar12[0x1a] = puVar3[0x1a];
        puVar12[0x19] = uVar23;
        uVar23 = puVar3[0x1c];
        puVar12[0x1b] = puVar3[0x1b];
        puVar12[0x1c] = uVar23;
        lVar14 = puVar3[0x1e];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar23);
        if (lVar14 == 0) {
          uVar23 = puVar3[0x1d];
          puVar12[0x1e] = puVar3[0x1e];
          puVar12[0x1d] = uVar23;
          puVar12[0x1f] = puVar3[0x1f];
        }
        else {
          puVar12[0x1d] = puVar3[0x1d];
          puVar12[0x1e] = lVar14;
          uVar23 = puVar3[0x1f];
          puVar12[0x1f] = uVar23;
          _swift_bridgeObjectRetain(lVar14);
          _swift_bridgeObjectRetain(uVar23);
        }
      }
      *(undefined1 *)(puVar12 + 0x20) = *(undefined1 *)(puVar3 + 0x20);
      uVar23 = puVar3[0x22];
      puVar12[0x21] = puVar3[0x21];
      puVar12[0x22] = uVar23;
      uVar23 = puVar3[0x24];
      puVar12[0x23] = puVar3[0x23];
      puVar12[0x24] = uVar23;
      uVar24 = puVar3[0x25];
      puVar12[0x26] = puVar3[0x26];
      puVar12[0x25] = uVar24;
      uVar24 = *(undefined8 *)((long)puVar3 + 0x132);
      *(undefined8 *)((long)puVar12 + 0x13a) = *(undefined8 *)((long)puVar3 + 0x13a);
      *(undefined8 *)((long)puVar12 + 0x132) = uVar24;
      lVar14 = puVar3[0x2a];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar23);
      if (lVar14 == 0) {
        uVar23 = puVar3[0x29];
        uVar27 = puVar3[0x2c];
        uVar24 = puVar3[0x2b];
        puVar12[0x2a] = puVar3[0x2a];
        puVar12[0x29] = uVar23;
        puVar12[0x2c] = uVar27;
        puVar12[0x2b] = uVar24;
      }
      else {
        puVar12[0x29] = puVar3[0x29];
        puVar12[0x2a] = lVar14;
        uVar23 = puVar3[0x2c];
        puVar12[0x2b] = puVar3[0x2b];
        puVar12[0x2c] = uVar23;
        _swift_bridgeObjectRetain(lVar14);
        _swift_bridgeObjectRetain(uVar23);
      }
      uVar23 = puVar3[0x2e];
      puVar12[0x2d] = puVar3[0x2d];
      puVar12[0x2e] = uVar23;
      uVar23 = puVar3[0x2f];
      uVar24 = puVar3[0x30];
      *(undefined1 *)(puVar12 + 0x31) = *(undefined1 *)(puVar3 + 0x31);
      uVar26 = puVar3[0x36];
      uVar10 = *(uint5 *)(puVar3 + 0x39);
      puVar12[0x2f] = uVar23;
      puVar12[0x30] = uVar24;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar24);
      if ((((uVar26 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
         (((ulong)uVar10 & 0xfefefefefefefefe) == 0x6fefefefe)) {
        uVar23 = puVar3[0x32];
        uVar27 = puVar3[0x35];
        uVar24 = puVar3[0x34];
        puVar12[0x33] = puVar3[0x33];
        puVar12[0x32] = uVar23;
        puVar12[0x35] = uVar27;
        puVar12[0x34] = uVar24;
        uVar23 = puVar3[0x36];
        puVar12[0x37] = puVar3[0x37];
        puVar12[0x36] = uVar23;
        uVar23 = *(undefined8 *)((long)puVar3 + 0x1bd);
        *(undefined8 *)((long)puVar12 + 0x1c5) = *(undefined8 *)((long)puVar3 + 0x1c5);
        *(undefined8 *)((long)puVar12 + 0x1bd) = uVar23;
      }
      else {
        uVar23 = puVar3[0x32];
        uVar6 = puVar3[0x33];
        uVar24 = puVar3[0x34];
        uVar7 = puVar3[0x35];
        uVar27 = puVar3[0x37];
        uVar8 = puVar3[0x38];
        func_0x00010179a2b8(uVar23,uVar6,uVar24,uVar7,uVar26,uVar27,uVar8,(ulong)uVar10);
        puVar12[0x32] = uVar23;
        puVar12[0x33] = uVar6;
        puVar12[0x34] = uVar24;
        puVar12[0x35] = uVar7;
        puVar12[0x36] = uVar26;
        puVar12[0x37] = uVar27;
        puVar12[0x38] = uVar8;
        *(char *)((long)puVar12 + 0x1cc) = (char)(uVar10 >> 0x20);
        *(int *)(puVar12 + 0x39) = (int)uVar10;
      }
      *(undefined1 *)((long)puVar12 + 0x1cd) = *(undefined1 *)((long)puVar3 + 0x1cd);
      uVar23 = puVar3[0x3b];
      puVar12[0x3a] = puVar3[0x3a];
      puVar12[0x3b] = uVar23;
      *(undefined1 *)(puVar12 + 0x3c) = *(undefined1 *)(puVar3 + 0x3c);
      lVar14 = puVar3[0x3e];
      _swift_bridgeObjectRetain();
      if (lVar14 == 0) {
        uVar23 = puVar3[0x3d];
        uVar27 = puVar3[0x40];
        uVar24 = puVar3[0x3f];
        puVar12[0x3e] = puVar3[0x3e];
        puVar12[0x3d] = uVar23;
        puVar12[0x40] = uVar27;
        puVar12[0x3f] = uVar24;
        uVar23 = puVar3[0x41];
        puVar12[0x42] = puVar3[0x42];
        puVar12[0x41] = uVar23;
      }
      else {
        puVar12[0x3d] = puVar3[0x3d];
        puVar12[0x3e] = lVar14;
        uVar23 = puVar3[0x40];
        puVar12[0x3f] = puVar3[0x3f];
        puVar12[0x40] = uVar23;
        puVar12[0x41] = puVar3[0x41];
        uVar24 = puVar3[0x42];
        puVar12[0x42] = uVar24;
        _swift_bridgeObjectRetain(lVar14);
        _swift_bridgeObjectRetain(uVar23);
        _swift_bridgeObjectRetain(uVar24);
      }
      *(undefined1 *)(puVar12 + 0x43) = *(undefined1 *)(puVar3 + 0x43);
      lVar14 = puVar3[0x45];
      if (lVar14 == 0) {
        uVar23 = puVar3[0x44];
        uVar27 = puVar3[0x47];
        uVar24 = puVar3[0x46];
        puVar12[0x45] = puVar3[0x45];
        puVar12[0x44] = uVar23;
        puVar12[0x47] = uVar27;
        puVar12[0x46] = uVar24;
        uVar23 = puVar3[0x48];
        puVar12[0x49] = puVar3[0x49];
        puVar12[0x48] = uVar23;
        puVar12[0x4a] = puVar3[0x4a];
      }
      else {
        puVar12[0x44] = puVar3[0x44];
        puVar12[0x45] = lVar14;
        puVar12[0x46] = puVar3[0x46];
        uVar23 = puVar3[0x47];
        puVar12[0x47] = uVar23;
        puVar12[0x48] = puVar3[0x48];
        uVar24 = puVar3[0x49];
        puVar12[0x49] = uVar24;
        puVar12[0x4a] = puVar3[0x4a];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar23);
        _swift_bridgeObjectRetain(uVar24);
      }
      puVar12[0x4b] = puVar3[0x4b];
      _swift_bridgeObjectRetain();
    }
    puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x18));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x18));
    lVar14 = 0;
    FUN_10470fbcc();
    lVar22 = *(long *)(lVar14 + -8);
    puVar15 = puVar3;
    (**(code **)(lVar22 + 0x30))(puVar3,1,lVar14);
    if ((int)puVar15 == 0) {
      uVar23 = puVar3[1];
      *puVar12 = *puVar3;
      puVar12[1] = uVar23;
      uVar23 = puVar3[3];
      puVar12[2] = puVar3[2];
      puVar12[3] = uVar23;
      lVar25 = puVar3[10];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar23);
      if (lVar25 == 1) {
        uVar23 = puVar3[4];
        uVar27 = puVar3[7];
        uVar24 = puVar3[6];
        puVar12[5] = puVar3[5];
        puVar12[4] = uVar23;
        puVar12[7] = uVar27;
        puVar12[6] = uVar24;
        uVar23 = puVar3[8];
        puVar12[9] = puVar3[9];
        puVar12[8] = uVar23;
        puVar12[10] = puVar3[10];
      }
      else {
        lVar17 = puVar3[6];
        if (lVar17 == 1) {
          uVar23 = puVar3[4];
          uVar27 = puVar3[7];
          uVar24 = puVar3[6];
          puVar12[5] = puVar3[5];
          puVar12[4] = uVar23;
          puVar12[7] = uVar27;
          puVar12[6] = uVar24;
          puVar12[8] = puVar3[8];
        }
        else {
          uVar23 = puVar3[4];
          puVar12[5] = puVar3[5];
          puVar12[4] = uVar23;
          uVar23 = puVar3[7];
          uVar24 = puVar3[8];
          puVar12[6] = lVar17;
          puVar12[7] = uVar23;
          puVar12[8] = uVar24;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar24);
        }
        puVar12[9] = puVar3[9];
        puVar12[10] = lVar25;
        _swift_bridgeObjectRetain(lVar25);
      }
      uVar23 = puVar3[0xb];
      puVar12[0xc] = puVar3[0xc];
      puVar12[0xb] = uVar23;
      uVar23 = *(undefined8 *)((long)puVar3 + 0x61);
      *(undefined8 *)((long)puVar12 + 0x69) = *(undefined8 *)((long)puVar3 + 0x69);
      *(undefined8 *)((long)puVar12 + 0x61) = uVar23;
      uVar23 = puVar3[0x10];
      puVar12[0xf] = puVar3[0xf];
      puVar12[0x10] = uVar23;
      *(undefined1 *)(puVar12 + 0x11) = *(undefined1 *)(puVar3 + 0x11);
      lVar25 = puVar3[0x14];
      _swift_bridgeObjectRetain();
      if (lVar25 == 1) {
        uVar23 = puVar3[0x12];
        puVar12[0x13] = puVar3[0x13];
        puVar12[0x12] = uVar23;
        puVar12[0x14] = puVar3[0x14];
      }
      else {
        *(undefined4 *)(puVar12 + 0x12) = *(undefined4 *)(puVar3 + 0x12);
        *(undefined1 *)((long)puVar12 + 0x94) = *(undefined1 *)((long)puVar3 + 0x94);
        puVar12[0x13] = puVar3[0x13];
        puVar12[0x14] = lVar25;
        _swift_bridgeObjectRetain(lVar25);
      }
      uVar23 = puVar3[0x15];
      uVar24 = puVar3[0x16];
      puVar12[0x15] = uVar23;
      puVar12[0x16] = uVar24;
      uVar27 = puVar3[0x17];
      puVar12[0x17] = uVar27;
      lVar25 = (long)puVar12 + (long)*(int *)(lVar14 + 0x38);
      lVar17 = (long)puVar3 + (long)*(int *)(lVar14 + 0x38);
      lVar18 = 0;
      FUN_104742f28();
      lVar28 = *(long *)(lVar18 + -8);
      pcVar29 = *(code **)(lVar28 + 0x30);
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(uVar24);
      _swift_bridgeObjectRetain(uVar27);
      lVar19 = lVar17;
      (*pcVar29)(lVar17,1,lVar18);
      if ((int)lVar19 == 0) {
        lVar19 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar19 + -8) + 0x10))(lVar25,lVar17,lVar19);
        puVar3 = (undefined8 *)(lVar25 + *(int *)(lVar18 + 0x14));
        puVar15 = (undefined8 *)(lVar17 + *(int *)(lVar18 + 0x14));
        uVar23 = puVar15[1];
        *puVar3 = *puVar15;
        puVar3[1] = uVar23;
        *(undefined1 *)(lVar25 + *(int *)(lVar18 + 0x18)) =
             *(undefined1 *)(lVar17 + *(int *)(lVar18 + 0x18));
        *(undefined1 *)(lVar25 + *(int *)(lVar18 + 0x1c)) =
             *(undefined1 *)(lVar17 + *(int *)(lVar18 + 0x1c));
        puVar3 = (undefined8 *)(lVar25 + *(int *)(lVar18 + 0x20));
        puVar15 = (undefined8 *)(lVar17 + *(int *)(lVar18 + 0x20));
        *puVar3 = *puVar15;
        *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar15 + 1);
        *(undefined1 *)(lVar25 + *(int *)(lVar18 + 0x24)) =
             *(undefined1 *)(lVar17 + *(int *)(lVar18 + 0x24));
        pcVar29 = *(code **)(lVar28 + 0x38);
        _swift_bridgeObjectRetain();
        (*pcVar29)(lVar25,0,1,lVar18);
      }
      else {
        lVar19 = 0x112dcbf00;
        func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
        _memcpy(lVar25,lVar17,*(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
      }
      (**(code **)(lVar22 + 0x38))(puVar12,0,1,lVar14);
    }
    else {
      lVar14 = 0x112db3cd8;
      func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
      _memcpy(puVar12,puVar3,*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
    }
    puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x1c));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x1c));
    lVar14 = 0;
    FUN_10475cf44();
    lVar22 = *(long *)(lVar14 + -8);
    puVar15 = puVar3;
    (**(code **)(lVar22 + 0x30))(puVar3,1,lVar14);
    if ((int)puVar15 == 0) {
      uVar23 = puVar3[1];
      *puVar12 = *puVar3;
      puVar12[1] = uVar23;
      uVar23 = puVar3[2];
      uVar24 = puVar3[3];
      _swift_bridgeObjectRetain();
      func_0x00010006c00c(uVar23,uVar24);
      puVar12[2] = uVar23;
      puVar12[3] = uVar24;
      puVar15 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar14 + 0x18));
      puVar4 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar14 + 0x18));
      puVar16 = puVar4;
      (*pcVar21)(puVar4,1,lVar13);
      if ((int)puVar16 == 0) {
        uVar23 = puVar4[1];
        *puVar15 = *puVar4;
        puVar15[1] = uVar23;
        uVar23 = puVar4[3];
        puVar15[2] = puVar4[2];
        puVar15[3] = uVar23;
        uVar24 = puVar4[5];
        puVar15[4] = puVar4[4];
        puVar15[5] = uVar24;
        uVar27 = puVar4[7];
        puVar15[6] = puVar4[6];
        puVar15[7] = uVar27;
        puVar15[8] = puVar4[8];
        lVar25 = puVar4[0xf];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar23);
        _swift_bridgeObjectRetain(uVar24);
        _swift_bridgeObjectRetain(uVar27);
        if (lVar25 == 1) {
          uVar23 = puVar4[9];
          puVar15[10] = puVar4[10];
          puVar15[9] = uVar23;
          uVar23 = puVar4[0xb];
          puVar15[0xc] = puVar4[0xc];
          puVar15[0xb] = uVar23;
          uVar23 = puVar4[0xd];
          puVar15[0xe] = puVar4[0xe];
          puVar15[0xd] = uVar23;
          puVar15[0xf] = puVar4[0xf];
        }
        else {
          lVar17 = puVar4[0xb];
          if (lVar17 == 1) {
            uVar23 = puVar4[9];
            puVar15[10] = puVar4[10];
            puVar15[9] = uVar23;
            uVar23 = puVar4[0xb];
            puVar15[0xc] = puVar4[0xc];
            puVar15[0xb] = uVar23;
            puVar15[0xd] = puVar4[0xd];
          }
          else {
            uVar23 = puVar4[9];
            puVar15[10] = puVar4[10];
            puVar15[9] = uVar23;
            uVar23 = puVar4[0xc];
            uVar24 = puVar4[0xd];
            puVar15[0xb] = lVar17;
            puVar15[0xc] = uVar23;
            puVar15[0xd] = uVar24;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar24);
          }
          puVar15[0xe] = puVar4[0xe];
          puVar15[0xf] = lVar25;
          _swift_bridgeObjectRetain(lVar25);
        }
        uVar23 = puVar4[0x11];
        puVar15[0x10] = puVar4[0x10];
        puVar15[0x11] = uVar23;
        uVar24 = puVar4[0x13];
        puVar15[0x12] = puVar4[0x12];
        puVar15[0x13] = uVar24;
        lVar25 = (long)puVar15 + (long)*(int *)(lVar13 + 0x34);
        lVar17 = (long)puVar4 + (long)*(int *)(lVar13 + 0x34);
        lVar18 = 0;
        FUN_104742f28();
        lVar28 = *(long *)(lVar18 + -8);
        pcVar21 = *(code **)(lVar28 + 0x30);
        _swift_bridgeObjectRetain(uVar23);
        _swift_bridgeObjectRetain(uVar24);
        lVar19 = lVar17;
        (*pcVar21)(lVar17,1,lVar18);
        if ((int)lVar19 == 0) {
          lVar19 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar19 + -8) + 0x10))(lVar25,lVar17,lVar19);
          puVar16 = (undefined8 *)(lVar25 + *(int *)(lVar18 + 0x14));
          puVar5 = (undefined8 *)(lVar17 + *(int *)(lVar18 + 0x14));
          uVar23 = puVar5[1];
          *puVar16 = *puVar5;
          puVar16[1] = uVar23;
          *(undefined1 *)(lVar25 + *(int *)(lVar18 + 0x18)) =
               *(undefined1 *)(lVar17 + *(int *)(lVar18 + 0x18));
          *(undefined1 *)(lVar25 + *(int *)(lVar18 + 0x1c)) =
               *(undefined1 *)(lVar17 + *(int *)(lVar18 + 0x1c));
          puVar16 = (undefined8 *)(lVar25 + *(int *)(lVar18 + 0x20));
          puVar5 = (undefined8 *)(lVar17 + *(int *)(lVar18 + 0x20));
          *puVar16 = *puVar5;
          *(undefined1 *)(puVar16 + 1) = *(undefined1 *)(puVar5 + 1);
          *(undefined1 *)(lVar25 + *(int *)(lVar18 + 0x24)) =
               *(undefined1 *)(lVar17 + *(int *)(lVar18 + 0x24));
          pcVar21 = *(code **)(lVar28 + 0x38);
          _swift_bridgeObjectRetain();
          (*pcVar21)(lVar25,0,1,lVar18);
        }
        else {
          lVar19 = 0x112dcbf00;
          func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
          _memcpy(lVar25,lVar17,*(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
        }
        puVar16 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar13 + 0x38));
        puVar4 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar13 + 0x38));
        uVar23 = *puVar4;
        puVar16[1] = puVar4[1];
        *puVar16 = uVar23;
        uVar23 = *(undefined8 *)((long)puVar4 + 9);
        *(undefined8 *)((long)puVar16 + 0x11) = *(undefined8 *)((long)puVar4 + 0x11);
        *(undefined8 *)((long)puVar16 + 9) = uVar23;
        (**(code **)(lVar20 + 0x38))(puVar15,0,1);
      }
      else {
        lVar13 = 0x112db3ce0;
        func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
        _memcpy(puVar15,puVar4,*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
      }
      puVar15 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar14 + 0x1c));
      puVar3 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar14 + 0x1c));
      if (puVar3[0x18] == 1) {
        _memcpy(puVar15,puVar3,0x260);
      }
      else {
        lVar13 = puVar3[1];
        if (lVar13 == 1) {
          uVar23 = *puVar3;
          puVar15[1] = puVar3[1];
          *puVar15 = uVar23;
          puVar15[2] = puVar3[2];
        }
        else {
          *puVar15 = *puVar3;
          puVar15[1] = lVar13;
          uVar23 = puVar3[2];
          puVar15[2] = uVar23;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar23);
        }
        uVar26 = puVar3[5];
        if (uVar26 >> 0x3c == 0xb) {
          uVar23 = puVar3[3];
          puVar15[4] = puVar3[4];
          puVar15[3] = uVar23;
          puVar15[5] = puVar3[5];
        }
        else {
          puVar15[3] = puVar3[3];
          if (uVar26 >> 0x3c < 0xf) {
            uVar23 = puVar3[4];
            func_0x00010006c00c(uVar23,uVar26);
            puVar15[4] = uVar23;
            puVar15[5] = uVar26;
          }
          else {
            uVar23 = puVar3[4];
            puVar15[5] = puVar3[5];
            puVar15[4] = uVar23;
          }
        }
        *(undefined2 *)(puVar15 + 6) = *(undefined2 *)(puVar3 + 6);
        puVar15[7] = puVar3[7];
        lVar13 = puVar3[9];
        if (lVar13 == 1) {
          uVar23 = puVar3[0x10];
          uVar27 = puVar3[0x13];
          uVar24 = puVar3[0x12];
          puVar15[0x11] = puVar3[0x11];
          puVar15[0x10] = uVar23;
          puVar15[0x13] = uVar27;
          puVar15[0x12] = uVar24;
          uVar23 = puVar3[0x14];
          puVar15[0x15] = puVar3[0x15];
          puVar15[0x14] = uVar23;
          uVar23 = *(undefined8 *)((long)puVar3 + 0xaa);
          *(undefined8 *)((long)puVar15 + 0xb2) = *(undefined8 *)((long)puVar3 + 0xb2);
          *(undefined8 *)((long)puVar15 + 0xaa) = uVar23;
          uVar23 = puVar3[8];
          uVar27 = puVar3[0xb];
          uVar24 = puVar3[10];
          puVar15[9] = puVar3[9];
          puVar15[8] = uVar23;
          puVar15[0xb] = uVar27;
          puVar15[10] = uVar24;
          uVar23 = puVar3[0xc];
          uVar27 = puVar3[0xf];
          uVar24 = puVar3[0xe];
          puVar15[0xd] = puVar3[0xd];
          puVar15[0xc] = uVar23;
          puVar15[0xf] = uVar27;
          puVar15[0xe] = uVar24;
        }
        else {
          puVar15[8] = puVar3[8];
          puVar15[9] = lVar13;
          uVar6 = puVar3[0xb];
          puVar15[10] = puVar3[10];
          puVar15[0xb] = uVar6;
          uVar23 = puVar3[0xc];
          uVar24 = puVar3[0xd];
          puVar15[0xc] = uVar23;
          puVar15[0xd] = uVar24;
          uVar24 = puVar3[0xe];
          uVar27 = puVar3[0xf];
          puVar15[0xe] = uVar24;
          puVar15[0xf] = uVar27;
          uVar27 = puVar3[0x10];
          uVar7 = puVar3[0x11];
          puVar15[0x10] = uVar27;
          puVar15[0x11] = uVar7;
          lVar13 = puVar3[0x13];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar6);
          _swift_bridgeObjectRetain(uVar23);
          _swift_bridgeObjectRetain(uVar24);
          _swift_bridgeObjectRetain(uVar27);
          _swift_bridgeObjectRetain(uVar7);
          if (lVar13 == 1) {
            uVar23 = puVar3[0x12];
            puVar15[0x13] = puVar3[0x13];
            puVar15[0x12] = uVar23;
          }
          else {
            puVar15[0x12] = puVar3[0x12];
            puVar15[0x13] = lVar13;
            _swift_bridgeObjectRetain(lVar13);
          }
          uVar23 = puVar3[0x15];
          puVar15[0x14] = puVar3[0x14];
          puVar15[0x15] = uVar23;
          puVar15[0x16] = puVar3[0x16];
          *(undefined2 *)(puVar15 + 0x17) = *(undefined2 *)(puVar3 + 0x17);
          _swift_bridgeObjectRetain();
        }
        *(undefined2 *)((long)puVar15 + 0xba) = *(undefined2 *)((long)puVar3 + 0xba);
        if (puVar3[0x18] == 0) {
          lVar13 = puVar3[0x18];
          uVar24 = puVar3[0x1b];
          uVar23 = puVar3[0x1a];
          puVar15[0x19] = puVar3[0x19];
          puVar15[0x18] = lVar13;
          puVar15[0x1b] = uVar24;
          puVar15[0x1a] = uVar23;
          uVar23 = puVar3[0x1c];
          uVar27 = puVar3[0x1f];
          uVar24 = puVar3[0x1e];
          puVar15[0x1d] = puVar3[0x1d];
          puVar15[0x1c] = uVar23;
          puVar15[0x1f] = uVar27;
          puVar15[0x1e] = uVar24;
        }
        else {
          puVar15[0x18] = puVar3[0x18];
          uVar23 = puVar3[0x19];
          puVar15[0x1a] = puVar3[0x1a];
          puVar15[0x19] = uVar23;
          uVar23 = puVar3[0x1c];
          puVar15[0x1b] = puVar3[0x1b];
          puVar15[0x1c] = uVar23;
          lVar13 = puVar3[0x1e];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar23);
          if (lVar13 == 0) {
            uVar23 = puVar3[0x1d];
            puVar15[0x1e] = puVar3[0x1e];
            puVar15[0x1d] = uVar23;
            puVar15[0x1f] = puVar3[0x1f];
          }
          else {
            puVar15[0x1d] = puVar3[0x1d];
            puVar15[0x1e] = lVar13;
            uVar23 = puVar3[0x1f];
            puVar15[0x1f] = uVar23;
            _swift_bridgeObjectRetain(lVar13);
            _swift_bridgeObjectRetain(uVar23);
          }
        }
        *(undefined1 *)(puVar15 + 0x20) = *(undefined1 *)(puVar3 + 0x20);
        uVar23 = puVar3[0x22];
        puVar15[0x21] = puVar3[0x21];
        puVar15[0x22] = uVar23;
        uVar23 = puVar3[0x24];
        puVar15[0x23] = puVar3[0x23];
        puVar15[0x24] = uVar23;
        uVar24 = puVar3[0x25];
        puVar15[0x26] = puVar3[0x26];
        puVar15[0x25] = uVar24;
        uVar24 = *(undefined8 *)((long)puVar3 + 0x132);
        *(undefined8 *)((long)puVar15 + 0x13a) = *(undefined8 *)((long)puVar3 + 0x13a);
        *(undefined8 *)((long)puVar15 + 0x132) = uVar24;
        lVar13 = puVar3[0x2a];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar23);
        if (lVar13 == 0) {
          uVar23 = puVar3[0x29];
          uVar27 = puVar3[0x2c];
          uVar24 = puVar3[0x2b];
          puVar15[0x2a] = puVar3[0x2a];
          puVar15[0x29] = uVar23;
          puVar15[0x2c] = uVar27;
          puVar15[0x2b] = uVar24;
        }
        else {
          puVar15[0x29] = puVar3[0x29];
          puVar15[0x2a] = lVar13;
          uVar23 = puVar3[0x2c];
          puVar15[0x2b] = puVar3[0x2b];
          puVar15[0x2c] = uVar23;
          _swift_bridgeObjectRetain(lVar13);
          _swift_bridgeObjectRetain(uVar23);
        }
        uVar23 = puVar3[0x2e];
        puVar15[0x2d] = puVar3[0x2d];
        puVar15[0x2e] = uVar23;
        uVar23 = puVar3[0x2f];
        uVar24 = puVar3[0x30];
        *(undefined1 *)(puVar15 + 0x31) = *(undefined1 *)(puVar3 + 0x31);
        uVar26 = puVar3[0x36];
        uVar10 = *(uint5 *)(puVar3 + 0x39);
        puVar15[0x2f] = uVar23;
        puVar15[0x30] = uVar24;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar24);
        if ((((uVar26 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
           (((ulong)uVar10 & 0xfefefefefefefefe) == 0x6fefefefe)) {
          uVar23 = puVar3[0x32];
          uVar27 = puVar3[0x35];
          uVar24 = puVar3[0x34];
          puVar15[0x33] = puVar3[0x33];
          puVar15[0x32] = uVar23;
          puVar15[0x35] = uVar27;
          puVar15[0x34] = uVar24;
          uVar23 = puVar3[0x36];
          puVar15[0x37] = puVar3[0x37];
          puVar15[0x36] = uVar23;
          uVar23 = *(undefined8 *)((long)puVar3 + 0x1bd);
          *(undefined8 *)((long)puVar15 + 0x1c5) = *(undefined8 *)((long)puVar3 + 0x1c5);
          *(undefined8 *)((long)puVar15 + 0x1bd) = uVar23;
        }
        else {
          uVar23 = puVar3[0x32];
          uVar6 = puVar3[0x33];
          uVar24 = puVar3[0x34];
          uVar7 = puVar3[0x35];
          uVar27 = puVar3[0x37];
          uVar8 = puVar3[0x38];
          func_0x00010179a2b8(uVar23,uVar6,uVar24,uVar7,uVar26,uVar27,uVar8,(ulong)uVar10);
          puVar15[0x32] = uVar23;
          puVar15[0x33] = uVar6;
          puVar15[0x34] = uVar24;
          puVar15[0x35] = uVar7;
          puVar15[0x36] = uVar26;
          puVar15[0x37] = uVar27;
          puVar15[0x38] = uVar8;
          *(char *)((long)puVar15 + 0x1cc) = (char)(uVar10 >> 0x20);
          *(int *)(puVar15 + 0x39) = (int)uVar10;
        }
        *(undefined1 *)((long)puVar15 + 0x1cd) = *(undefined1 *)((long)puVar3 + 0x1cd);
        uVar23 = puVar3[0x3b];
        puVar15[0x3a] = puVar3[0x3a];
        puVar15[0x3b] = uVar23;
        *(undefined1 *)(puVar15 + 0x3c) = *(undefined1 *)(puVar3 + 0x3c);
        lVar13 = puVar3[0x3e];
        _swift_bridgeObjectRetain();
        if (lVar13 == 0) {
          uVar23 = puVar3[0x3d];
          uVar27 = puVar3[0x40];
          uVar24 = puVar3[0x3f];
          puVar15[0x3e] = puVar3[0x3e];
          puVar15[0x3d] = uVar23;
          puVar15[0x40] = uVar27;
          puVar15[0x3f] = uVar24;
          uVar23 = puVar3[0x41];
          puVar15[0x42] = puVar3[0x42];
          puVar15[0x41] = uVar23;
        }
        else {
          puVar15[0x3d] = puVar3[0x3d];
          puVar15[0x3e] = lVar13;
          uVar23 = puVar3[0x40];
          puVar15[0x3f] = puVar3[0x3f];
          puVar15[0x40] = uVar23;
          puVar15[0x41] = puVar3[0x41];
          uVar24 = puVar3[0x42];
          puVar15[0x42] = uVar24;
          _swift_bridgeObjectRetain(lVar13);
          _swift_bridgeObjectRetain(uVar23);
          _swift_bridgeObjectRetain(uVar24);
        }
        *(undefined1 *)(puVar15 + 0x43) = *(undefined1 *)(puVar3 + 0x43);
        lVar13 = puVar3[0x45];
        if (lVar13 == 0) {
          uVar23 = puVar3[0x44];
          uVar27 = puVar3[0x47];
          uVar24 = puVar3[0x46];
          puVar15[0x45] = puVar3[0x45];
          puVar15[0x44] = uVar23;
          puVar15[0x47] = uVar27;
          puVar15[0x46] = uVar24;
          uVar23 = puVar3[0x48];
          puVar15[0x49] = puVar3[0x49];
          puVar15[0x48] = uVar23;
          puVar15[0x4a] = puVar3[0x4a];
        }
        else {
          puVar15[0x44] = puVar3[0x44];
          puVar15[0x45] = lVar13;
          puVar15[0x46] = puVar3[0x46];
          uVar23 = puVar3[0x47];
          puVar15[0x47] = uVar23;
          puVar15[0x48] = puVar3[0x48];
          uVar24 = puVar3[0x49];
          puVar15[0x49] = uVar24;
          puVar15[0x4a] = puVar3[0x4a];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar23);
          _swift_bridgeObjectRetain(uVar24);
        }
        puVar15[0x4b] = puVar3[0x4b];
        _swift_bridgeObjectRetain();
      }
      (**(code **)(lVar22 + 0x38))(puVar12,0,1,lVar14);
    }
    else {
      lVar13 = 0x112db3cc8;
      func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
      _memcpy(puVar12,puVar3,*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
    }
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x20)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x20));
    (**(code **)(lVar30 + 0x38))(puVar1,0,1,lVar11);
  }
  else {
    lVar11 = 0x112db3e90;
    func_0x0001000285a8(0x112db3e90,&UNK_10d95e3e0);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  }
  iVar9 = *(int *)(param_3 + 0x1c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar9);
  *puVar1 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 104720d84; end: 104720dbf;  */

undefined8 FUN_104720d84(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 104720dc0; end: 104723917;  */

undefined8 * FUN_104720dc0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  uVar22 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar22;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  lVar7 = 0;
  FUN_10472f4dc();
  lVar20 = *(long *)(lVar7 + -8);
  puVar8 = puVar2;
  (**(code **)(lVar20 + 0x30))(puVar2,1,lVar7);
  if ((int)puVar8 == 0) {
    lVar9 = 0;
    FUN_104739264();
    lVar17 = *(long *)(lVar9 + -8);
    pcVar18 = *(code **)(lVar17 + 0x30);
    puVar8 = puVar2;
    (*pcVar18)(puVar2,1,lVar9);
    if ((int)puVar8 == 0) {
      uVar22 = *puVar2;
      uVar24 = puVar2[3];
      uVar23 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar22;
      puVar1[3] = uVar24;
      puVar1[2] = uVar23;
      uVar22 = puVar2[4];
      uVar24 = puVar2[7];
      uVar23 = puVar2[6];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar22;
      puVar1[7] = uVar24;
      puVar1[6] = uVar23;
      puVar1[8] = puVar2[8];
      puVar1[0xf] = puVar2[0xf];
      uVar22 = puVar2[0xd];
      puVar1[0xe] = puVar2[0xe];
      puVar1[0xd] = uVar22;
      uVar22 = puVar2[0xb];
      puVar1[0xc] = puVar2[0xc];
      puVar1[0xb] = uVar22;
      uVar22 = puVar2[9];
      puVar1[10] = puVar2[10];
      puVar1[9] = uVar22;
      uVar22 = puVar2[0x10];
      uVar24 = puVar2[0x13];
      uVar23 = puVar2[0x12];
      puVar1[0x11] = puVar2[0x11];
      puVar1[0x10] = uVar22;
      puVar1[0x13] = uVar24;
      puVar1[0x12] = uVar23;
      lVar12 = (long)puVar1 + (long)*(int *)(lVar9 + 0x34);
      lVar21 = (long)puVar2 + (long)*(int *)(lVar9 + 0x34);
      lVar10 = 0;
      FUN_104742f28();
      lVar16 = *(long *)(lVar10 + -8);
      lVar11 = lVar21;
      (**(code **)(lVar16 + 0x30))(lVar21,1,lVar10);
      if ((int)lVar11 == 0) {
        lVar11 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar11 + -8) + 0x20))(lVar12,lVar21,lVar11);
        puVar8 = (undefined8 *)(lVar21 + *(int *)(lVar10 + 0x14));
        uVar22 = *puVar8;
        puVar3 = (undefined8 *)(lVar12 + *(int *)(lVar10 + 0x14));
        puVar3[1] = puVar8[1];
        *puVar3 = uVar22;
        *(undefined1 *)(lVar12 + *(int *)(lVar10 + 0x18)) =
             *(undefined1 *)(lVar21 + *(int *)(lVar10 + 0x18));
        *(undefined1 *)(lVar12 + *(int *)(lVar10 + 0x1c)) =
             *(undefined1 *)(lVar21 + *(int *)(lVar10 + 0x1c));
        puVar8 = (undefined8 *)(lVar12 + *(int *)(lVar10 + 0x20));
        puVar3 = (undefined8 *)(lVar21 + *(int *)(lVar10 + 0x20));
        *puVar8 = *puVar3;
        *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar3 + 1);
        *(undefined1 *)(lVar12 + *(int *)(lVar10 + 0x24)) =
             *(undefined1 *)(lVar21 + *(int *)(lVar10 + 0x24));
        (**(code **)(lVar16 + 0x38))(lVar12,0,1,lVar10);
      }
      else {
        lVar11 = 0x112dcbf00;
        func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
        _memcpy(lVar12,lVar21,*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
      }
      puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x38));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x38));
      uVar22 = *puVar3;
      puVar8[1] = puVar3[1];
      *puVar8 = uVar22;
      uVar22 = *(undefined8 *)((long)puVar3 + 9);
      *(undefined8 *)((long)puVar8 + 0x11) = *(undefined8 *)((long)puVar3 + 0x11);
      *(undefined8 *)((long)puVar8 + 9) = uVar22;
      (**(code **)(lVar17 + 0x38))(puVar1,0,1);
    }
    else {
      lVar12 = 0x112db3ce0;
      func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
    }
    _memcpy((long)puVar1 + (long)*(int *)(lVar7 + 0x14),(long)puVar2 + (long)*(int *)(lVar7 + 0x14),
            0x260);
    puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x18));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x18));
    lVar12 = 0;
    FUN_10470fbcc();
    lVar21 = *(long *)(lVar12 + -8);
    puVar13 = puVar3;
    (**(code **)(lVar21 + 0x30))(puVar3,1,lVar12);
    if ((int)puVar13 == 0) {
      uVar22 = *puVar3;
      uVar24 = puVar3[3];
      uVar23 = puVar3[2];
      puVar8[1] = puVar3[1];
      *puVar8 = uVar22;
      puVar8[3] = uVar24;
      puVar8[2] = uVar23;
      uVar22 = puVar3[4];
      uVar24 = puVar3[7];
      uVar23 = puVar3[6];
      puVar8[5] = puVar3[5];
      puVar8[4] = uVar22;
      puVar8[7] = uVar24;
      puVar8[6] = uVar23;
      uVar22 = puVar3[8];
      puVar8[9] = puVar3[9];
      puVar8[8] = uVar22;
      puVar8[10] = puVar3[10];
      uVar22 = puVar3[0xb];
      puVar8[0xc] = puVar3[0xc];
      puVar8[0xb] = uVar22;
      uVar22 = *(undefined8 *)((long)puVar3 + 0x61);
      *(undefined8 *)((long)puVar8 + 0x69) = *(undefined8 *)((long)puVar3 + 0x69);
      *(undefined8 *)((long)puVar8 + 0x61) = uVar22;
      uVar22 = puVar3[0xf];
      puVar8[0x10] = puVar3[0x10];
      puVar8[0xf] = uVar22;
      *(undefined1 *)(puVar8 + 0x11) = *(undefined1 *)(puVar3 + 0x11);
      uVar22 = puVar3[0x12];
      puVar8[0x13] = puVar3[0x13];
      puVar8[0x12] = uVar22;
      puVar8[0x14] = puVar3[0x14];
      uVar22 = puVar3[0x15];
      puVar8[0x16] = puVar3[0x16];
      puVar8[0x15] = uVar22;
      puVar8[0x17] = puVar3[0x17];
      lVar11 = (long)puVar8 + (long)*(int *)(lVar12 + 0x38);
      lVar10 = (long)puVar3 + (long)*(int *)(lVar12 + 0x38);
      lVar15 = 0;
      FUN_104742f28();
      lVar19 = *(long *)(lVar15 + -8);
      lVar16 = lVar10;
      (**(code **)(lVar19 + 0x30))(lVar10,1,lVar15);
      if ((int)lVar16 == 0) {
        lVar16 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar16 + -8) + 0x20))(lVar11,lVar10,lVar16);
        puVar3 = (undefined8 *)(lVar10 + *(int *)(lVar15 + 0x14));
        uVar22 = *puVar3;
        puVar13 = (undefined8 *)(lVar11 + *(int *)(lVar15 + 0x14));
        puVar13[1] = puVar3[1];
        *puVar13 = uVar22;
        *(undefined1 *)(lVar11 + *(int *)(lVar15 + 0x18)) =
             *(undefined1 *)(lVar10 + *(int *)(lVar15 + 0x18));
        *(undefined1 *)(lVar11 + *(int *)(lVar15 + 0x1c)) =
             *(undefined1 *)(lVar10 + *(int *)(lVar15 + 0x1c));
        puVar3 = (undefined8 *)(lVar11 + *(int *)(lVar15 + 0x20));
        puVar13 = (undefined8 *)(lVar10 + *(int *)(lVar15 + 0x20));
        *puVar3 = *puVar13;
        *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar13 + 1);
        *(undefined1 *)(lVar11 + *(int *)(lVar15 + 0x24)) =
             *(undefined1 *)(lVar10 + *(int *)(lVar15 + 0x24));
        (**(code **)(lVar19 + 0x38))(lVar11,0,1,lVar15);
      }
      else {
        lVar16 = 0x112dcbf00;
        func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
        _memcpy(lVar11,lVar10,*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
      }
      (**(code **)(lVar21 + 0x38))(puVar8,0,1,lVar12);
    }
    else {
      lVar12 = 0x112db3cd8;
      func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
      _memcpy(puVar8,puVar3,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
    }
    puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x1c));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x1c));
    lVar12 = 0;
    FUN_10475cf44();
    lVar21 = *(long *)(lVar12 + -8);
    puVar13 = puVar3;
    (**(code **)(lVar21 + 0x30))(puVar3,1,lVar12);
    if ((int)puVar13 == 0) {
      uVar22 = *puVar3;
      uVar24 = puVar3[3];
      uVar23 = puVar3[2];
      puVar8[1] = puVar3[1];
      *puVar8 = uVar22;
      puVar8[3] = uVar24;
      puVar8[2] = uVar23;
      puVar13 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar12 + 0x18));
      puVar4 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x18));
      puVar14 = puVar4;
      (*pcVar18)(puVar4,1,lVar9);
      if ((int)puVar14 == 0) {
        uVar22 = *puVar4;
        uVar24 = puVar4[3];
        uVar23 = puVar4[2];
        puVar13[1] = puVar4[1];
        *puVar13 = uVar22;
        puVar13[3] = uVar24;
        puVar13[2] = uVar23;
        uVar22 = puVar4[4];
        uVar24 = puVar4[7];
        uVar23 = puVar4[6];
        puVar13[5] = puVar4[5];
        puVar13[4] = uVar22;
        puVar13[7] = uVar24;
        puVar13[6] = uVar23;
        puVar13[8] = puVar4[8];
        puVar13[0xf] = puVar4[0xf];
        uVar22 = puVar4[0xd];
        puVar13[0xe] = puVar4[0xe];
        puVar13[0xd] = uVar22;
        uVar22 = puVar4[0xb];
        puVar13[0xc] = puVar4[0xc];
        puVar13[0xb] = uVar22;
        uVar22 = puVar4[9];
        puVar13[10] = puVar4[10];
        puVar13[9] = uVar22;
        uVar22 = puVar4[0x10];
        uVar24 = puVar4[0x13];
        uVar23 = puVar4[0x12];
        puVar13[0x11] = puVar4[0x11];
        puVar13[0x10] = uVar22;
        puVar13[0x13] = uVar24;
        puVar13[0x12] = uVar23;
        lVar11 = (long)puVar13 + (long)*(int *)(lVar9 + 0x34);
        lVar10 = (long)puVar4 + (long)*(int *)(lVar9 + 0x34);
        lVar15 = 0;
        FUN_104742f28();
        lVar19 = *(long *)(lVar15 + -8);
        lVar16 = lVar10;
        (**(code **)(lVar19 + 0x30))(lVar10,1);
        if ((int)lVar16 == 0) {
          lVar16 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar16 + -8) + 0x20))(lVar11,lVar10,lVar16);
          puVar14 = (undefined8 *)(lVar10 + *(int *)(lVar15 + 0x14));
          uVar22 = *puVar14;
          puVar6 = (undefined8 *)(lVar11 + *(int *)(lVar15 + 0x14));
          puVar6[1] = puVar14[1];
          *puVar6 = uVar22;
          *(undefined1 *)(lVar11 + *(int *)(lVar15 + 0x18)) =
               *(undefined1 *)(lVar10 + *(int *)(lVar15 + 0x18));
          *(undefined1 *)(lVar11 + *(int *)(lVar15 + 0x1c)) =
               *(undefined1 *)(lVar10 + *(int *)(lVar15 + 0x1c));
          puVar14 = (undefined8 *)(lVar11 + *(int *)(lVar15 + 0x20));
          puVar6 = (undefined8 *)(lVar10 + *(int *)(lVar15 + 0x20));
          *puVar14 = *puVar6;
          *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar6 + 1);
          *(undefined1 *)(lVar11 + *(int *)(lVar15 + 0x24)) =
               *(undefined1 *)(lVar10 + *(int *)(lVar15 + 0x24));
          (**(code **)(lVar19 + 0x38))(lVar11,0,1);
        }
        else {
          lVar16 = 0x112dcbf00;
          func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
          _memcpy(lVar11,lVar10,*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
        }
        puVar14 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar9 + 0x38));
        puVar4 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar9 + 0x38));
        uVar22 = *puVar4;
        puVar14[1] = puVar4[1];
        *puVar14 = uVar22;
        uVar22 = *(undefined8 *)((long)puVar4 + 9);
        *(undefined8 *)((long)puVar14 + 0x11) = *(undefined8 *)((long)puVar4 + 0x11);
        *(undefined8 *)((long)puVar14 + 9) = uVar22;
        (**(code **)(lVar17 + 0x38))(puVar13,0,1);
      }
      else {
        lVar9 = 0x112db3ce0;
        func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
        _memcpy(puVar13,puVar4,*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
      }
      _memcpy((long)puVar8 + (long)*(int *)(lVar12 + 0x1c),
              (long)puVar3 + (long)*(int *)(lVar12 + 0x1c),0x260);
      (**(code **)(lVar21 + 0x38))(puVar8,0,1,lVar12);
    }
    else {
      lVar9 = 0x112db3cc8;
      func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
      _memcpy(puVar8,puVar3,*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    }
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x20)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x20));
    (**(code **)(lVar20 + 0x38))(puVar1,0,1,lVar7);
  }
  else {
    lVar7 = 0x112db3e90;
    func_0x0001000285a8(0x112db3e90,&UNK_10d95e3e0);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  }
  iVar5 = *(int *)(param_3 + 0x1c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar5);
  *puVar1 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 104723918; end: 10472392f;  */

void FUN_104723918(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 104723930; end: 104723a93;  */

void FUN_104723930(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_40 = &UNK_10dd31718;
  lVar1 = 0x13f;
  func_0x0001047239bc();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBbWV_11034d660 + 0x40;
    puStack_28 = &UNK_10dd31730;
    _swift_initStructMetadata(param_1,0x100,4,&puStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 104723a94; end: 104723acb;  */

void FUN_104723a94(undefined8 param_1)

{
  if (lRam000000011308e268 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e81a0a0);
  return;
}



/* Entry: 104723acc; end: 104723b13;  */

undefined8 FUN_104723acc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104723b14; end: 104723b17;  */

bool FUN_104723b14(undefined8 *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar20;
  long extraout_x8_01;
  long lVar21;
  code *pcVar22;
  long lVar23;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  ulong uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
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
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lVar14 = 0;
  FUN_10472f4dc();
  lStack_110 = *(long *)(lVar14 + -8);
  lStack_108 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_110 + 0x40));
  lVar21 = (long)&uStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar14 = 0x112db3e90;
  lStack_120 = lVar21;
  func_0x0001000285a8(0x112db3e90,&UNK_10d95e3e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar20 = lVar21 - extraout_x8_00;
  lVar14 = 0x112db3e88;
  uStack_118 = uVar20;
  func_0x0001000285a8(0x112db3e88,&UNK_10dbce5e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_100 = uVar20 - extraout_x8_01;
  uStack_e0 = *param_1;
  uVar7 = param_1[1];
  uVar3 = param_1[2];
  uVar8 = param_1[3];
  uVar4 = param_1[4];
  uVar9 = param_1[5];
  lVar21 = param_1[6];
  uVar5 = *param_2;
  uVar10 = param_2[1];
  uVar20 = param_2[2];
  uVar11 = param_2[3];
  uVar6 = param_2[4];
  uVar12 = param_2[5];
  lVar23 = param_2[6];
  lStack_128 = lVar14;
  if (lVar21 == 1) {
    if (lVar23 != 1) {
LAB_104723edc:
      uStack_f8 = uVar9;
      uStack_f0 = uVar8;
      uStack_e8 = uVar4;
      func_0x000104711a50(uStack_e0,uVar7,uVar3,uVar8,uVar4,uVar9,lVar21);
      func_0x000104711a50(uVar5,uVar10,uVar20,uVar11,uVar6,uVar12,lVar23);
      func_0x0001015543ac(uStack_e0,uVar7,uVar3,uStack_f0,uStack_e8,uStack_f8,lVar21);
      func_0x0001015543ac(uVar5,uVar10,uVar20,uVar11,uVar6,uVar12,lVar23);
      return false;
    }
    uStack_150 = uVar12;
    uStack_148 = uVar10;
    uStack_140 = uVar20;
    func_0x000104711a50(uStack_e0,uVar7,uVar3,uVar8,uVar4,uVar9,1);
    func_0x000104711a50(uVar5,uStack_148,uStack_140,uVar11,uVar6,uStack_150,1);
    func_0x0001015543ac(uStack_e0,uVar7,uVar3,uVar8,uVar4,uVar9,1);
  }
  else {
    if (lVar23 == 1) goto LAB_104723edc;
    uStack_138 = uVar7;
    uStack_130 = uVar3;
    uStack_f8 = uVar9;
    uStack_f0 = uVar8;
    uStack_e8 = uVar4;
    uStack_d8 = uStack_e0;
    uStack_d0 = uVar7;
    uStack_c8 = uVar3;
    uStack_c0 = uVar8;
    uStack_b8 = uVar4;
    uStack_b0 = uVar9;
    lStack_a8 = lVar21;
    uStack_a0 = uVar5;
    uStack_98 = uVar10;
    uStack_90 = uVar20;
    uStack_88 = uVar11;
    uStack_80 = uVar6;
    uStack_78 = uVar12;
    lStack_70 = lVar23;
    func_0x000104711a50(uStack_e0,uVar7,uVar3,uVar8,uVar4,uVar9,lVar21);
    func_0x000104711a50(uVar5,uVar10,uVar20,uVar11,uVar6,uVar12,lVar23);
    puVar15 = &uStack_d8;
    FUN_104741990(puVar15,&uStack_a0);
    uStack_140 = CONCAT44(uStack_140._4_4_,(int)puVar15);
    func_0x0001015543ac(uVar5,uVar10,uVar20,uVar11,uVar6,uVar12,lVar23);
    func_0x0001015543ac(uStack_e0,uStack_138,uStack_130,uStack_f0,uStack_e8,uStack_f8,lVar21);
    if ((uStack_140 & 1) == 0) {
      return false;
    }
  }
  lVar16 = 0;
  FUN_104723a94();
  lVar23 = lStack_100;
  iVar13 = *(int *)(lVar16 + 0x14);
  lVar14 = (long)*(int *)(lStack_128 + 0x30);
  FUN_104723acc((long)param_1 + (long)iVar13,lStack_100,0x112db3e90,&UNK_10d95e3e0);
  FUN_104723acc((long)param_2 + (long)iVar13,lVar23 + lVar14,0x112db3e90,&UNK_10d95e3e0);
  lVar21 = lStack_108;
  pcVar22 = *(code **)(lStack_110 + 0x30);
  lVar17 = lVar23;
  (*pcVar22)(lVar23,1,lStack_108);
  uVar20 = uStack_118;
  if ((int)lVar17 == 1) {
    lVar14 = lVar23 + lVar14;
    (*pcVar22)(lVar14,1,lVar21);
    if ((int)lVar14 != 1) {
LAB_104724164:
      func_0x00010472f49c(lVar23,0x112db3e88,&UNK_10dbce5e0);
      return false;
    }
    func_0x00010472f49c(lVar23,0x112db3e90,&UNK_10d95e3e0);
  }
  else {
    FUN_104723acc(lVar23,uStack_118,0x112db3e90,&UNK_10d95e3e0);
    lVar17 = lVar23 + lVar14;
    (*pcVar22)(lVar17,1,lVar21);
    lVar21 = lStack_120;
    if ((int)lVar17 == 1) {
      FUN_10472c7cc(uVar20,FUN_10472f4dc);
      goto LAB_104724164;
    }
    func_0x000104723a50(lVar23 + lVar14,lStack_120);
    uVar19 = uVar20;
    FUN_10472f55c(uVar20,lVar21);
    FUN_10472c7cc(lVar21,FUN_10472f4dc);
    FUN_10472c7cc(uVar20,FUN_10472f4dc);
    func_0x00010472f49c(lVar23,0x112db3e90,&UNK_10d95e3e0);
    if ((uVar19 & 1) == 0) {
      return false;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar16 + 0x18));
  uVar20 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar16 + 0x18));
  uVar19 = puVar2[1];
  if (uVar20 == 0) {
    if (uVar19 == 0) goto LAB_104724248;
  }
  else if ((uVar19 != 0) &&
          (((uVar18 = *puVar1, uVar18 == *puVar2 && (uVar20 == uVar19)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar18 & 1) != 0)))) {
LAB_104724248:
    return *(long *)((long)param_1 + (long)*(int *)(lVar16 + 0x1c)) ==
           *(long *)((long)param_2 + (long)*(int *)(lVar16 + 0x1c));
  }
  return false;
}



/* Entry: 104723b18; end: 104723c93;  */

void FUN_104723b18(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar6 = unaff_x20[6];
  if (lVar6 != 1) {
    uVar8 = *unaff_x20;
    uVar3 = unaff_x20[1];
    lVar7 = unaff_x20[2];
    uVar4 = unaff_x20[3];
    lVar2 = unaff_x20[4];
    uVar5 = unaff_x20[5];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar7 == 1) {
LAB_104723be0:
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar8);
      if (lVar7 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,lVar7);
      }
      if (lVar2 == 0) goto LAB_104723be0;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
    }
    if (lVar6 != 0) {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar6);
      goto LAB_104723c0c;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
LAB_104723c0c:
  lVar6 = 0;
  FUN_104723a94();
  func_0x0001046cf16c((long)*(int *)(lVar6 + 0x14),param_1);
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar6 + 0x18));
  lVar7 = puVar1[1];
  if (lVar7 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar7);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar6 + 0x1c)));
  return;
}



/* Entry: 104723c94; end: 104723ccf;  */

void FUN_104723c94(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_104723b18(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104723cd0; end: 104723cd3;  */

void FUN_104723cd0(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar6 = unaff_x20[6];
  if (lVar6 != 1) {
    uVar8 = *unaff_x20;
    uVar3 = unaff_x20[1];
    lVar7 = unaff_x20[2];
    uVar4 = unaff_x20[3];
    lVar2 = unaff_x20[4];
    uVar5 = unaff_x20[5];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar7 == 1) {
LAB_104723be0:
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar8);
      if (lVar7 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,lVar7);
      }
      if (lVar2 == 0) goto LAB_104723be0;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
    }
    if (lVar6 != 0) {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar6);
      goto LAB_104723c0c;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
LAB_104723c0c:
  lVar6 = 0;
  FUN_104723a94();
  func_0x0001046cf16c((long)*(int *)(lVar6 + 0x14),param_1);
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar6 + 0x18));
  lVar7 = puVar1[1];
  if (lVar7 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar7);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar6 + 0x1c)));
  return;
}



/* Entry: 104723cd4; end: 104723d0b;  */

void FUN_104723cd4(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_104723b18(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104723d0c; end: 104723d0f;  */

bool FUN_104723d0c(undefined8 *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar20;
  long extraout_x8_01;
  long lVar21;
  code *pcVar22;
  long lVar23;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  ulong uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
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
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lVar14 = 0;
  FUN_10472f4dc();
  lStack_110 = *(long *)(lVar14 + -8);
  lStack_108 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_110 + 0x40));
  lVar21 = (long)&uStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar14 = 0x112db3e90;
  lStack_120 = lVar21;
  func_0x0001000285a8(0x112db3e90,&UNK_10d95e3e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar20 = lVar21 - extraout_x8_00;
  lVar14 = 0x112db3e88;
  uStack_118 = uVar20;
  func_0x0001000285a8(0x112db3e88,&UNK_10dbce5e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_100 = uVar20 - extraout_x8_01;
  uStack_e0 = *param_1;
  uVar7 = param_1[1];
  uVar3 = param_1[2];
  uVar8 = param_1[3];
  uVar4 = param_1[4];
  uVar9 = param_1[5];
  lVar21 = param_1[6];
  uVar5 = *param_2;
  uVar10 = param_2[1];
  uVar20 = param_2[2];
  uVar11 = param_2[3];
  uVar6 = param_2[4];
  uVar12 = param_2[5];
  lVar23 = param_2[6];
  lStack_128 = lVar14;
  if (lVar21 == 1) {
    if (lVar23 != 1) {
LAB_104723edc:
      uStack_f8 = uVar9;
      uStack_f0 = uVar8;
      uStack_e8 = uVar4;
      func_0x000104711a50(uStack_e0,uVar7,uVar3,uVar8,uVar4,uVar9,lVar21);
      func_0x000104711a50(uVar5,uVar10,uVar20,uVar11,uVar6,uVar12,lVar23);
      func_0x0001015543ac(uStack_e0,uVar7,uVar3,uStack_f0,uStack_e8,uStack_f8,lVar21);
      func_0x0001015543ac(uVar5,uVar10,uVar20,uVar11,uVar6,uVar12,lVar23);
      return false;
    }
    uStack_150 = uVar12;
    uStack_148 = uVar10;
    uStack_140 = uVar20;
    func_0x000104711a50(uStack_e0,uVar7,uVar3,uVar8,uVar4,uVar9,1);
    func_0x000104711a50(uVar5,uStack_148,uStack_140,uVar11,uVar6,uStack_150,1);
    func_0x0001015543ac(uStack_e0,uVar7,uVar3,uVar8,uVar4,uVar9,1);
  }
  else {
    if (lVar23 == 1) goto LAB_104723edc;
    uStack_138 = uVar7;
    uStack_130 = uVar3;
    uStack_f8 = uVar9;
    uStack_f0 = uVar8;
    uStack_e8 = uVar4;
    uStack_d8 = uStack_e0;
    uStack_d0 = uVar7;
    uStack_c8 = uVar3;
    uStack_c0 = uVar8;
    uStack_b8 = uVar4;
    uStack_b0 = uVar9;
    lStack_a8 = lVar21;
    uStack_a0 = uVar5;
    uStack_98 = uVar10;
    uStack_90 = uVar20;
    uStack_88 = uVar11;
    uStack_80 = uVar6;
    uStack_78 = uVar12;
    lStack_70 = lVar23;
    func_0x000104711a50(uStack_e0,uVar7,uVar3,uVar8,uVar4,uVar9,lVar21);
    func_0x000104711a50(uVar5,uVar10,uVar20,uVar11,uVar6,uVar12,lVar23);
    puVar15 = &uStack_d8;
    FUN_104741990(puVar15,&uStack_a0);
    uStack_140 = CONCAT44(uStack_140._4_4_,(int)puVar15);
    func_0x0001015543ac(uVar5,uVar10,uVar20,uVar11,uVar6,uVar12,lVar23);
    func_0x0001015543ac(uStack_e0,uStack_138,uStack_130,uStack_f0,uStack_e8,uStack_f8,lVar21);
    if ((uStack_140 & 1) == 0) {
      return false;
    }
  }
  lVar16 = 0;
  FUN_104723a94();
  lVar23 = lStack_100;
  iVar13 = *(int *)(lVar16 + 0x14);
  lVar14 = (long)*(int *)(lStack_128 + 0x30);
  FUN_104723acc((long)param_1 + (long)iVar13,lStack_100,0x112db3e90,&UNK_10d95e3e0);
  FUN_104723acc((long)param_2 + (long)iVar13,lVar23 + lVar14,0x112db3e90,&UNK_10d95e3e0);
  lVar21 = lStack_108;
  pcVar22 = *(code **)(lStack_110 + 0x30);
  lVar17 = lVar23;
  (*pcVar22)(lVar23,1,lStack_108);
  uVar20 = uStack_118;
  if ((int)lVar17 == 1) {
    lVar14 = lVar23 + lVar14;
    (*pcVar22)(lVar14,1,lVar21);
    if ((int)lVar14 != 1) {
LAB_104724164:
      func_0x00010472f49c(lVar23,0x112db3e88,&UNK_10dbce5e0);
      return false;
    }
    func_0x00010472f49c(lVar23,0x112db3e90,&UNK_10d95e3e0);
  }
  else {
    FUN_104723acc(lVar23,uStack_118,0x112db3e90,&UNK_10d95e3e0);
    lVar17 = lVar23 + lVar14;
    (*pcVar22)(lVar17,1,lVar21);
    lVar21 = lStack_120;
    if ((int)lVar17 == 1) {
      FUN_10472c7cc(uVar20,FUN_10472f4dc);
      goto LAB_104724164;
    }
    func_0x000104723a50(lVar23 + lVar14,lStack_120);
    uVar19 = uVar20;
    FUN_10472f55c(uVar20,lVar21);
    FUN_10472c7cc(lVar21,FUN_10472f4dc);
    FUN_10472c7cc(uVar20,FUN_10472f4dc);
    func_0x00010472f49c(lVar23,0x112db3e90,&UNK_10d95e3e0);
    if ((uVar19 & 1) == 0) {
      return false;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar16 + 0x18));
  uVar20 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar16 + 0x18));
  uVar19 = puVar2[1];
  if (uVar20 == 0) {
    if (uVar19 == 0) goto LAB_104724248;
  }
  else if ((uVar19 != 0) &&
          (((uVar18 = *puVar1, uVar18 == *puVar2 && (uVar20 == uVar19)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar18 & 1) != 0)))) {
LAB_104724248:
    return *(long *)((long)param_1 + (long)*(int *)(lVar16 + 0x1c)) ==
           *(long *)((long)param_2 + (long)*(int *)(lVar16 + 0x1c));
  }
  return false;
}



/* Entry: 104723d10; end: 10472425f;  */

bool FUN_104723d10(undefined8 *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar20;
  long extraout_x8_01;
  long lVar21;
  code *pcVar22;
  long lVar23;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  ulong uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
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
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lVar14 = 0;
  FUN_10472f4dc();
  lStack_110 = *(long *)(lVar14 + -8);
  lStack_108 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_110 + 0x40));
  lVar21 = (long)&uStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar14 = 0x112db3e90;
  lStack_120 = lVar21;
  func_0x0001000285a8(0x112db3e90,&UNK_10d95e3e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar20 = lVar21 - extraout_x8_00;
  lVar14 = 0x112db3e88;
  uStack_118 = uVar20;
  func_0x0001000285a8(0x112db3e88,&UNK_10dbce5e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_100 = uVar20 - extraout_x8_01;
  uStack_e0 = *param_1;
  uVar7 = param_1[1];
  uVar3 = param_1[2];
  uVar8 = param_1[3];
  uVar4 = param_1[4];
  uVar9 = param_1[5];
  lVar21 = param_1[6];
  uVar5 = *param_2;
  uVar10 = param_2[1];
  uVar20 = param_2[2];
  uVar11 = param_2[3];
  uVar6 = param_2[4];
  uVar12 = param_2[5];
  lVar23 = param_2[6];
  lStack_128 = lVar14;
  if (lVar21 == 1) {
    if (lVar23 != 1) {
LAB_104723edc:
      uStack_f8 = uVar9;
      uStack_f0 = uVar8;
      uStack_e8 = uVar4;
      func_0x000104711a50(uStack_e0,uVar7,uVar3,uVar8,uVar4,uVar9,lVar21);
      func_0x000104711a50(uVar5,uVar10,uVar20,uVar11,uVar6,uVar12,lVar23);
      func_0x0001015543ac(uStack_e0,uVar7,uVar3,uStack_f0,uStack_e8,uStack_f8,lVar21);
      func_0x0001015543ac(uVar5,uVar10,uVar20,uVar11,uVar6,uVar12,lVar23);
      return false;
    }
    uStack_150 = uVar12;
    uStack_148 = uVar10;
    uStack_140 = uVar20;
    func_0x000104711a50(uStack_e0,uVar7,uVar3,uVar8,uVar4,uVar9,1);
    func_0x000104711a50(uVar5,uStack_148,uStack_140,uVar11,uVar6,uStack_150,1);
    func_0x0001015543ac(uStack_e0,uVar7,uVar3,uVar8,uVar4,uVar9,1);
  }
  else {
    if (lVar23 == 1) goto LAB_104723edc;
    uStack_138 = uVar7;
    uStack_130 = uVar3;
    uStack_f8 = uVar9;
    uStack_f0 = uVar8;
    uStack_e8 = uVar4;
    uStack_d8 = uStack_e0;
    uStack_d0 = uVar7;
    uStack_c8 = uVar3;
    uStack_c0 = uVar8;
    uStack_b8 = uVar4;
    uStack_b0 = uVar9;
    lStack_a8 = lVar21;
    uStack_a0 = uVar5;
    uStack_98 = uVar10;
    uStack_90 = uVar20;
    uStack_88 = uVar11;
    uStack_80 = uVar6;
    uStack_78 = uVar12;
    lStack_70 = lVar23;
    func_0x000104711a50(uStack_e0,uVar7,uVar3,uVar8,uVar4,uVar9,lVar21);
    func_0x000104711a50(uVar5,uVar10,uVar20,uVar11,uVar6,uVar12,lVar23);
    puVar15 = &uStack_d8;
    FUN_104741990(puVar15,&uStack_a0);
    uStack_140 = CONCAT44(uStack_140._4_4_,(int)puVar15);
    func_0x0001015543ac(uVar5,uVar10,uVar20,uVar11,uVar6,uVar12,lVar23);
    func_0x0001015543ac(uStack_e0,uStack_138,uStack_130,uStack_f0,uStack_e8,uStack_f8,lVar21);
    if ((uStack_140 & 1) == 0) {
      return false;
    }
  }
  lVar16 = 0;
  FUN_104723a94();
  lVar23 = lStack_100;
  iVar13 = *(int *)(lVar16 + 0x14);
  lVar14 = (long)*(int *)(lStack_128 + 0x30);
  FUN_104723acc((long)param_1 + (long)iVar13,lStack_100,0x112db3e90,&UNK_10d95e3e0);
  FUN_104723acc((long)param_2 + (long)iVar13,lVar23 + lVar14,0x112db3e90,&UNK_10d95e3e0);
  lVar21 = lStack_108;
  pcVar22 = *(code **)(lStack_110 + 0x30);
  lVar17 = lVar23;
  (*pcVar22)(lVar23,1,lStack_108);
  uVar20 = uStack_118;
  if ((int)lVar17 == 1) {
    lVar14 = lVar23 + lVar14;
    (*pcVar22)(lVar14,1,lVar21);
    if ((int)lVar14 != 1) {
LAB_104724164:
      func_0x00010472f49c(lVar23,0x112db3e88,&UNK_10dbce5e0);
      return false;
    }
    func_0x00010472f49c(lVar23,0x112db3e90,&UNK_10d95e3e0);
  }
  else {
    FUN_104723acc(lVar23,uStack_118,0x112db3e90,&UNK_10d95e3e0);
    lVar17 = lVar23 + lVar14;
    (*pcVar22)(lVar17,1,lVar21);
    lVar21 = lStack_120;
    if ((int)lVar17 == 1) {
      FUN_10472c7cc(uVar20,FUN_10472f4dc);
      goto LAB_104724164;
    }
    func_0x000104723a50(lVar23 + lVar14,lStack_120);
    uVar19 = uVar20;
    FUN_10472f55c(uVar20,lVar21);
    FUN_10472c7cc(lVar21,FUN_10472f4dc);
    FUN_10472c7cc(uVar20,FUN_10472f4dc);
    func_0x00010472f49c(lVar23,0x112db3e90,&UNK_10d95e3e0);
    if ((uVar19 & 1) == 0) {
      return false;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar16 + 0x18));
  uVar20 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar16 + 0x18));
  uVar19 = puVar2[1];
  if (uVar20 == 0) {
    if (uVar19 == 0) goto LAB_104724248;
  }
  else if ((uVar19 != 0) &&
          (((uVar18 = *puVar1, uVar18 == *puVar2 && (uVar20 == uVar19)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar18 & 1) != 0)))) {
LAB_104724248:
    return *(long *)((long)param_1 + (long)*(int *)(lVar16 + 0x1c)) ==
           *(long *)((long)param_2 + (long)*(int *)(lVar16 + 0x1c));
  }
  return false;
}



/* Entry: 104724260; end: 104724263;  */

void FUN_104724260(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011308e208 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_104723a94(0xff);
  puVar2 = &UNK_10dd31790;
  _swift_getWitnessTable(&UNK_10dd31790,uVar1);
  puRam000000011308e208 = puVar2;
  return;
}



/* Entry: 104724264; end: 1047242a7;  */

void FUN_104724264(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011308e208 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_104723a94(0xff);
  puVar2 = &UNK_10dd31790;
  _swift_getWitnessTable(&UNK_10dd31790,uVar1);
  puRam000000011308e208 = puVar2;
  return;
}



/* Entry: 1047242a8; end: 1047255ab;  */

long * FUN_1047242a8(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  uint5 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  code *pcVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  code *pcVar29;
  long lVar30;
  ulong uVar31;
  
  uVar10 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar10 >> 0x11 & 1) == 0) {
    lVar26 = param_2[6];
    if (lVar26 == 1) {
      lVar26 = *param_2;
      lVar13 = param_2[3];
      lVar22 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = lVar26;
      param_1[3] = lVar13;
      param_1[2] = lVar22;
      lVar26 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = lVar26;
      param_1[6] = param_2[6];
    }
    else {
      lVar22 = param_2[2];
      if (lVar22 == 1) {
        lVar22 = *param_2;
        lVar20 = param_2[3];
        lVar13 = param_2[2];
        param_1[1] = param_2[1];
        *param_1 = lVar22;
        param_1[3] = lVar20;
        param_1[2] = lVar13;
        param_1[4] = param_2[4];
      }
      else {
        lVar13 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = lVar13;
        lVar13 = param_2[3];
        lVar20 = param_2[4];
        param_1[2] = lVar22;
        param_1[3] = lVar13;
        param_1[4] = lVar20;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(lVar20);
      }
      param_1[5] = param_2[5];
      param_1[6] = lVar26;
      _swift_bridgeObjectRetain(lVar26);
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    lVar26 = 0;
    FUN_10472f4dc();
    lVar22 = *(long *)(lVar26 + -8);
    puVar12 = puVar2;
    (**(code **)(lVar22 + 0x30))(puVar2,1,lVar26);
    if ((int)puVar12 == 0) {
      lVar13 = 0;
      FUN_104739264();
      lVar20 = *(long *)(lVar13 + -8);
      pcVar21 = *(code **)(lVar20 + 0x30);
      puVar12 = puVar2;
      (*pcVar21)(puVar2,1);
      if ((int)puVar12 == 0) {
        uVar24 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar24;
        uVar24 = puVar2[3];
        puVar1[2] = puVar2[2];
        puVar1[3] = uVar24;
        uVar25 = puVar2[5];
        puVar1[4] = puVar2[4];
        puVar1[5] = uVar25;
        uVar27 = puVar2[7];
        puVar1[6] = puVar2[6];
        puVar1[7] = uVar27;
        puVar1[8] = puVar2[8];
        lVar14 = puVar2[0xf];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar24);
        _swift_bridgeObjectRetain(uVar25);
        _swift_bridgeObjectRetain(uVar27);
        if (lVar14 == 1) {
          uVar24 = puVar2[9];
          puVar1[10] = puVar2[10];
          puVar1[9] = uVar24;
          uVar24 = puVar2[0xb];
          puVar1[0xc] = puVar2[0xc];
          puVar1[0xb] = uVar24;
          uVar24 = puVar2[0xd];
          puVar1[0xe] = puVar2[0xe];
          puVar1[0xd] = uVar24;
          puVar1[0xf] = puVar2[0xf];
        }
        else {
          lVar23 = puVar2[0xb];
          if (lVar23 == 1) {
            uVar24 = puVar2[9];
            puVar1[10] = puVar2[10];
            puVar1[9] = uVar24;
            uVar24 = puVar2[0xb];
            puVar1[0xc] = puVar2[0xc];
            puVar1[0xb] = uVar24;
            puVar1[0xd] = puVar2[0xd];
          }
          else {
            uVar24 = puVar2[9];
            puVar1[10] = puVar2[10];
            puVar1[9] = uVar24;
            uVar24 = puVar2[0xc];
            uVar25 = puVar2[0xd];
            puVar1[0xb] = lVar23;
            puVar1[0xc] = uVar24;
            puVar1[0xd] = uVar25;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar25);
          }
          puVar1[0xe] = puVar2[0xe];
          puVar1[0xf] = lVar14;
          _swift_bridgeObjectRetain(lVar14);
        }
        uVar24 = puVar2[0x11];
        puVar1[0x10] = puVar2[0x10];
        puVar1[0x11] = uVar24;
        uVar25 = puVar2[0x13];
        puVar1[0x12] = puVar2[0x12];
        puVar1[0x13] = uVar25;
        lVar14 = (long)puVar1 + (long)*(int *)(lVar13 + 0x34);
        lVar23 = (long)puVar2 + (long)*(int *)(lVar13 + 0x34);
        lVar17 = 0;
        FUN_104742f28();
        lVar19 = *(long *)(lVar17 + -8);
        pcVar29 = *(code **)(lVar19 + 0x30);
        _swift_bridgeObjectRetain(uVar24);
        _swift_bridgeObjectRetain(uVar25);
        lVar30 = lVar23;
        (*pcVar29)(lVar23,1,lVar17);
        if ((int)lVar30 == 0) {
          lVar30 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar30 + -8) + 0x10))(lVar14,lVar23,lVar30);
          puVar12 = (undefined8 *)(lVar14 + *(int *)(lVar17 + 0x14));
          puVar3 = (undefined8 *)(lVar23 + *(int *)(lVar17 + 0x14));
          uVar24 = puVar3[1];
          *puVar12 = *puVar3;
          puVar12[1] = uVar24;
          *(undefined1 *)(lVar14 + *(int *)(lVar17 + 0x18)) =
               *(undefined1 *)(lVar23 + *(int *)(lVar17 + 0x18));
          *(undefined1 *)(lVar14 + *(int *)(lVar17 + 0x1c)) =
               *(undefined1 *)(lVar23 + *(int *)(lVar17 + 0x1c));
          puVar12 = (undefined8 *)(lVar14 + *(int *)(lVar17 + 0x20));
          puVar3 = (undefined8 *)(lVar23 + *(int *)(lVar17 + 0x20));
          *puVar12 = *puVar3;
          *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(puVar3 + 1);
          *(undefined1 *)(lVar14 + *(int *)(lVar17 + 0x24)) =
               *(undefined1 *)(lVar23 + *(int *)(lVar17 + 0x24));
          pcVar29 = *(code **)(lVar19 + 0x38);
          _swift_bridgeObjectRetain();
          (*pcVar29)(lVar14,0,1,lVar17);
        }
        else {
          lVar30 = 0x112dcbf00;
          func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
          _memcpy(lVar14,lVar23,*(undefined8 *)(*(long *)(lVar30 + -8) + 0x40));
        }
        puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x38));
        puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x38));
        uVar24 = *puVar3;
        puVar12[1] = puVar3[1];
        *puVar12 = uVar24;
        uVar24 = *(undefined8 *)((long)puVar3 + 9);
        *(undefined8 *)((long)puVar12 + 0x11) = *(undefined8 *)((long)puVar3 + 0x11);
        *(undefined8 *)((long)puVar12 + 9) = uVar24;
        (**(code **)(lVar20 + 0x38))(puVar1,0,1);
      }
      else {
        lVar14 = 0x112db3ce0;
        func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
        _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
      }
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0x14));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0x14));
      if (puVar3[0x18] == 1) {
        _memcpy(puVar12,puVar3,0x260);
      }
      else {
        lVar14 = puVar3[1];
        if (lVar14 == 1) {
          uVar24 = *puVar3;
          puVar12[1] = puVar3[1];
          *puVar12 = uVar24;
          puVar12[2] = puVar3[2];
        }
        else {
          *puVar12 = *puVar3;
          puVar12[1] = lVar14;
          uVar24 = puVar3[2];
          puVar12[2] = uVar24;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar24);
        }
        uVar31 = puVar3[5];
        if (uVar31 >> 0x3c == 0xb) {
          uVar24 = puVar3[3];
          puVar12[4] = puVar3[4];
          puVar12[3] = uVar24;
          puVar12[5] = puVar3[5];
        }
        else {
          puVar12[3] = puVar3[3];
          if (uVar31 >> 0x3c < 0xf) {
            uVar24 = puVar3[4];
            func_0x00010006c00c(uVar24,uVar31);
            puVar12[4] = uVar24;
            puVar12[5] = uVar31;
          }
          else {
            uVar24 = puVar3[4];
            puVar12[5] = puVar3[5];
            puVar12[4] = uVar24;
          }
        }
        *(undefined2 *)(puVar12 + 6) = *(undefined2 *)(puVar3 + 6);
        puVar12[7] = puVar3[7];
        lVar14 = puVar3[9];
        if (lVar14 == 1) {
          uVar24 = puVar3[0x10];
          uVar27 = puVar3[0x13];
          uVar25 = puVar3[0x12];
          puVar12[0x11] = puVar3[0x11];
          puVar12[0x10] = uVar24;
          puVar12[0x13] = uVar27;
          puVar12[0x12] = uVar25;
          uVar24 = puVar3[0x14];
          puVar12[0x15] = puVar3[0x15];
          puVar12[0x14] = uVar24;
          uVar24 = *(undefined8 *)((long)puVar3 + 0xaa);
          *(undefined8 *)((long)puVar12 + 0xb2) = *(undefined8 *)((long)puVar3 + 0xb2);
          *(undefined8 *)((long)puVar12 + 0xaa) = uVar24;
          uVar24 = puVar3[8];
          uVar27 = puVar3[0xb];
          uVar25 = puVar3[10];
          puVar12[9] = puVar3[9];
          puVar12[8] = uVar24;
          puVar12[0xb] = uVar27;
          puVar12[10] = uVar25;
          uVar24 = puVar3[0xc];
          uVar27 = puVar3[0xf];
          uVar25 = puVar3[0xe];
          puVar12[0xd] = puVar3[0xd];
          puVar12[0xc] = uVar24;
          puVar12[0xf] = uVar27;
          puVar12[0xe] = uVar25;
        }
        else {
          puVar12[8] = puVar3[8];
          puVar12[9] = lVar14;
          uVar6 = puVar3[0xb];
          puVar12[10] = puVar3[10];
          puVar12[0xb] = uVar6;
          uVar24 = puVar3[0xc];
          uVar25 = puVar3[0xd];
          puVar12[0xc] = uVar24;
          puVar12[0xd] = uVar25;
          uVar25 = puVar3[0xe];
          uVar27 = puVar3[0xf];
          puVar12[0xe] = uVar25;
          puVar12[0xf] = uVar27;
          uVar27 = puVar3[0x10];
          uVar7 = puVar3[0x11];
          puVar12[0x10] = uVar27;
          puVar12[0x11] = uVar7;
          lVar14 = puVar3[0x13];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar6);
          _swift_bridgeObjectRetain(uVar24);
          _swift_bridgeObjectRetain(uVar25);
          _swift_bridgeObjectRetain(uVar27);
          _swift_bridgeObjectRetain(uVar7);
          if (lVar14 == 1) {
            uVar24 = puVar3[0x12];
            puVar12[0x13] = puVar3[0x13];
            puVar12[0x12] = uVar24;
          }
          else {
            puVar12[0x12] = puVar3[0x12];
            puVar12[0x13] = lVar14;
            _swift_bridgeObjectRetain(lVar14);
          }
          uVar24 = puVar3[0x15];
          puVar12[0x14] = puVar3[0x14];
          puVar12[0x15] = uVar24;
          puVar12[0x16] = puVar3[0x16];
          *(undefined2 *)(puVar12 + 0x17) = *(undefined2 *)(puVar3 + 0x17);
          _swift_bridgeObjectRetain();
        }
        *(undefined2 *)((long)puVar12 + 0xba) = *(undefined2 *)((long)puVar3 + 0xba);
        if (puVar3[0x18] == 0) {
          lVar14 = puVar3[0x18];
          uVar25 = puVar3[0x1b];
          uVar24 = puVar3[0x1a];
          puVar12[0x19] = puVar3[0x19];
          puVar12[0x18] = lVar14;
          puVar12[0x1b] = uVar25;
          puVar12[0x1a] = uVar24;
          uVar24 = puVar3[0x1c];
          uVar27 = puVar3[0x1f];
          uVar25 = puVar3[0x1e];
          puVar12[0x1d] = puVar3[0x1d];
          puVar12[0x1c] = uVar24;
          puVar12[0x1f] = uVar27;
          puVar12[0x1e] = uVar25;
        }
        else {
          puVar12[0x18] = puVar3[0x18];
          uVar24 = puVar3[0x19];
          puVar12[0x1a] = puVar3[0x1a];
          puVar12[0x19] = uVar24;
          uVar24 = puVar3[0x1c];
          puVar12[0x1b] = puVar3[0x1b];
          puVar12[0x1c] = uVar24;
          lVar14 = puVar3[0x1e];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar24);
          if (lVar14 == 0) {
            uVar24 = puVar3[0x1d];
            puVar12[0x1e] = puVar3[0x1e];
            puVar12[0x1d] = uVar24;
            puVar12[0x1f] = puVar3[0x1f];
          }
          else {
            puVar12[0x1d] = puVar3[0x1d];
            puVar12[0x1e] = lVar14;
            uVar24 = puVar3[0x1f];
            puVar12[0x1f] = uVar24;
            _swift_bridgeObjectRetain(lVar14);
            _swift_bridgeObjectRetain(uVar24);
          }
        }
        *(undefined1 *)(puVar12 + 0x20) = *(undefined1 *)(puVar3 + 0x20);
        uVar24 = puVar3[0x22];
        puVar12[0x21] = puVar3[0x21];
        puVar12[0x22] = uVar24;
        uVar24 = puVar3[0x24];
        puVar12[0x23] = puVar3[0x23];
        puVar12[0x24] = uVar24;
        uVar25 = puVar3[0x25];
        puVar12[0x26] = puVar3[0x26];
        puVar12[0x25] = uVar25;
        uVar25 = *(undefined8 *)((long)puVar3 + 0x132);
        *(undefined8 *)((long)puVar12 + 0x13a) = *(undefined8 *)((long)puVar3 + 0x13a);
        *(undefined8 *)((long)puVar12 + 0x132) = uVar25;
        lVar14 = puVar3[0x2a];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar24);
        if (lVar14 == 0) {
          uVar24 = puVar3[0x29];
          uVar27 = puVar3[0x2c];
          uVar25 = puVar3[0x2b];
          puVar12[0x2a] = puVar3[0x2a];
          puVar12[0x29] = uVar24;
          puVar12[0x2c] = uVar27;
          puVar12[0x2b] = uVar25;
        }
        else {
          puVar12[0x29] = puVar3[0x29];
          puVar12[0x2a] = lVar14;
          uVar24 = puVar3[0x2c];
          puVar12[0x2b] = puVar3[0x2b];
          puVar12[0x2c] = uVar24;
          _swift_bridgeObjectRetain(lVar14);
          _swift_bridgeObjectRetain(uVar24);
        }
        uVar24 = puVar3[0x2e];
        puVar12[0x2d] = puVar3[0x2d];
        puVar12[0x2e] = uVar24;
        uVar24 = puVar3[0x2f];
        uVar25 = puVar3[0x30];
        *(undefined1 *)(puVar12 + 0x31) = *(undefined1 *)(puVar3 + 0x31);
        uVar31 = puVar3[0x36];
        uVar11 = *(uint5 *)(puVar3 + 0x39);
        puVar12[0x2f] = uVar24;
        puVar12[0x30] = uVar25;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar25);
        if ((((uVar31 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
           (((ulong)uVar11 & 0xfefefefefefefefe) == 0x6fefefefe)) {
          uVar24 = puVar3[0x32];
          uVar27 = puVar3[0x35];
          uVar25 = puVar3[0x34];
          puVar12[0x33] = puVar3[0x33];
          puVar12[0x32] = uVar24;
          puVar12[0x35] = uVar27;
          puVar12[0x34] = uVar25;
          uVar24 = puVar3[0x36];
          puVar12[0x37] = puVar3[0x37];
          puVar12[0x36] = uVar24;
          uVar24 = *(undefined8 *)((long)puVar3 + 0x1bd);
          *(undefined8 *)((long)puVar12 + 0x1c5) = *(undefined8 *)((long)puVar3 + 0x1c5);
          *(undefined8 *)((long)puVar12 + 0x1bd) = uVar24;
        }
        else {
          uVar24 = puVar3[0x32];
          uVar6 = puVar3[0x33];
          uVar25 = puVar3[0x34];
          uVar7 = puVar3[0x35];
          uVar27 = puVar3[0x37];
          uVar8 = puVar3[0x38];
          func_0x00010179a2b8(uVar24,uVar6,uVar25,uVar7,uVar31,uVar27,uVar8,(ulong)uVar11);
          puVar12[0x32] = uVar24;
          puVar12[0x33] = uVar6;
          puVar12[0x34] = uVar25;
          puVar12[0x35] = uVar7;
          puVar12[0x36] = uVar31;
          puVar12[0x37] = uVar27;
          puVar12[0x38] = uVar8;
          *(char *)((long)puVar12 + 0x1cc) = (char)(uVar11 >> 0x20);
          *(int *)(puVar12 + 0x39) = (int)uVar11;
        }
        *(undefined1 *)((long)puVar12 + 0x1cd) = *(undefined1 *)((long)puVar3 + 0x1cd);
        uVar24 = puVar3[0x3b];
        puVar12[0x3a] = puVar3[0x3a];
        puVar12[0x3b] = uVar24;
        *(undefined1 *)(puVar12 + 0x3c) = *(undefined1 *)(puVar3 + 0x3c);
        lVar14 = puVar3[0x3e];
        _swift_bridgeObjectRetain();
        if (lVar14 == 0) {
          uVar24 = puVar3[0x3d];
          uVar27 = puVar3[0x40];
          uVar25 = puVar3[0x3f];
          puVar12[0x3e] = puVar3[0x3e];
          puVar12[0x3d] = uVar24;
          puVar12[0x40] = uVar27;
          puVar12[0x3f] = uVar25;
          uVar24 = puVar3[0x41];
          puVar12[0x42] = puVar3[0x42];
          puVar12[0x41] = uVar24;
        }
        else {
          puVar12[0x3d] = puVar3[0x3d];
          puVar12[0x3e] = lVar14;
          uVar24 = puVar3[0x40];
          puVar12[0x3f] = puVar3[0x3f];
          puVar12[0x40] = uVar24;
          puVar12[0x41] = puVar3[0x41];
          uVar25 = puVar3[0x42];
          puVar12[0x42] = uVar25;
          _swift_bridgeObjectRetain(lVar14);
          _swift_bridgeObjectRetain(uVar24);
          _swift_bridgeObjectRetain(uVar25);
        }
        *(undefined1 *)(puVar12 + 0x43) = *(undefined1 *)(puVar3 + 0x43);
        lVar14 = puVar3[0x45];
        if (lVar14 == 0) {
          uVar24 = puVar3[0x44];
          uVar27 = puVar3[0x47];
          uVar25 = puVar3[0x46];
          puVar12[0x45] = puVar3[0x45];
          puVar12[0x44] = uVar24;
          puVar12[0x47] = uVar27;
          puVar12[0x46] = uVar25;
          uVar24 = puVar3[0x48];
          puVar12[0x49] = puVar3[0x49];
          puVar12[0x48] = uVar24;
          puVar12[0x4a] = puVar3[0x4a];
        }
        else {
          puVar12[0x44] = puVar3[0x44];
          puVar12[0x45] = lVar14;
          puVar12[0x46] = puVar3[0x46];
          uVar24 = puVar3[0x47];
          puVar12[0x47] = uVar24;
          puVar12[0x48] = puVar3[0x48];
          uVar25 = puVar3[0x49];
          puVar12[0x49] = uVar25;
          puVar12[0x4a] = puVar3[0x4a];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar24);
          _swift_bridgeObjectRetain(uVar25);
        }
        puVar12[0x4b] = puVar3[0x4b];
        _swift_bridgeObjectRetain();
      }
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0x18));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0x18));
      lVar14 = 0;
      FUN_10470fbcc();
      lVar23 = *(long *)(lVar14 + -8);
      puVar15 = puVar3;
      (**(code **)(lVar23 + 0x30))(puVar3,1,lVar14);
      if ((int)puVar15 == 0) {
        uVar24 = puVar3[1];
        *puVar12 = *puVar3;
        puVar12[1] = uVar24;
        uVar24 = puVar3[3];
        puVar12[2] = puVar3[2];
        puVar12[3] = uVar24;
        lVar30 = puVar3[10];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar24);
        if (lVar30 == 1) {
          uVar24 = puVar3[4];
          uVar27 = puVar3[7];
          uVar25 = puVar3[6];
          puVar12[5] = puVar3[5];
          puVar12[4] = uVar24;
          puVar12[7] = uVar27;
          puVar12[6] = uVar25;
          uVar24 = puVar3[8];
          puVar12[9] = puVar3[9];
          puVar12[8] = uVar24;
          puVar12[10] = puVar3[10];
        }
        else {
          lVar17 = puVar3[6];
          if (lVar17 == 1) {
            uVar24 = puVar3[4];
            uVar27 = puVar3[7];
            uVar25 = puVar3[6];
            puVar12[5] = puVar3[5];
            puVar12[4] = uVar24;
            puVar12[7] = uVar27;
            puVar12[6] = uVar25;
            puVar12[8] = puVar3[8];
          }
          else {
            uVar24 = puVar3[4];
            puVar12[5] = puVar3[5];
            puVar12[4] = uVar24;
            uVar24 = puVar3[7];
            uVar25 = puVar3[8];
            puVar12[6] = lVar17;
            puVar12[7] = uVar24;
            puVar12[8] = uVar25;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar25);
          }
          puVar12[9] = puVar3[9];
          puVar12[10] = lVar30;
          _swift_bridgeObjectRetain(lVar30);
        }
        uVar24 = puVar3[0xb];
        puVar12[0xc] = puVar3[0xc];
        puVar12[0xb] = uVar24;
        uVar24 = *(undefined8 *)((long)puVar3 + 0x61);
        *(undefined8 *)((long)puVar12 + 0x69) = *(undefined8 *)((long)puVar3 + 0x69);
        *(undefined8 *)((long)puVar12 + 0x61) = uVar24;
        uVar24 = puVar3[0x10];
        puVar12[0xf] = puVar3[0xf];
        puVar12[0x10] = uVar24;
        *(undefined1 *)(puVar12 + 0x11) = *(undefined1 *)(puVar3 + 0x11);
        lVar30 = puVar3[0x14];
        _swift_bridgeObjectRetain();
        if (lVar30 == 1) {
          uVar24 = puVar3[0x12];
          puVar12[0x13] = puVar3[0x13];
          puVar12[0x12] = uVar24;
          puVar12[0x14] = puVar3[0x14];
        }
        else {
          *(undefined4 *)(puVar12 + 0x12) = *(undefined4 *)(puVar3 + 0x12);
          *(undefined1 *)((long)puVar12 + 0x94) = *(undefined1 *)((long)puVar3 + 0x94);
          puVar12[0x13] = puVar3[0x13];
          puVar12[0x14] = lVar30;
          _swift_bridgeObjectRetain(lVar30);
        }
        uVar24 = puVar3[0x15];
        uVar25 = puVar3[0x16];
        puVar12[0x15] = uVar24;
        puVar12[0x16] = uVar25;
        uVar27 = puVar3[0x17];
        puVar12[0x17] = uVar27;
        lVar30 = (long)puVar12 + (long)*(int *)(lVar14 + 0x38);
        lVar17 = (long)puVar3 + (long)*(int *)(lVar14 + 0x38);
        lVar18 = 0;
        FUN_104742f28();
        lVar28 = *(long *)(lVar18 + -8);
        pcVar29 = *(code **)(lVar28 + 0x30);
        _swift_bridgeObjectRetain(uVar24);
        _swift_bridgeObjectRetain(uVar25);
        _swift_bridgeObjectRetain(uVar27);
        lVar19 = lVar17;
        (*pcVar29)(lVar17,1,lVar18);
        if ((int)lVar19 == 0) {
          lVar19 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar19 + -8) + 0x10))(lVar30,lVar17,lVar19);
          puVar3 = (undefined8 *)(lVar30 + *(int *)(lVar18 + 0x14));
          puVar15 = (undefined8 *)(lVar17 + *(int *)(lVar18 + 0x14));
          uVar24 = puVar15[1];
          *puVar3 = *puVar15;
          puVar3[1] = uVar24;
          *(undefined1 *)(lVar30 + *(int *)(lVar18 + 0x18)) =
               *(undefined1 *)(lVar17 + *(int *)(lVar18 + 0x18));
          *(undefined1 *)(lVar30 + *(int *)(lVar18 + 0x1c)) =
               *(undefined1 *)(lVar17 + *(int *)(lVar18 + 0x1c));
          puVar3 = (undefined8 *)(lVar30 + *(int *)(lVar18 + 0x20));
          puVar15 = (undefined8 *)(lVar17 + *(int *)(lVar18 + 0x20));
          *puVar3 = *puVar15;
          *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar15 + 1);
          *(undefined1 *)(lVar30 + *(int *)(lVar18 + 0x24)) =
               *(undefined1 *)(lVar17 + *(int *)(lVar18 + 0x24));
          pcVar29 = *(code **)(lVar28 + 0x38);
          _swift_bridgeObjectRetain();
          (*pcVar29)(lVar30,0,1,lVar18);
        }
        else {
          lVar19 = 0x112dcbf00;
          func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
          _memcpy(lVar30,lVar17,*(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
        }
        (**(code **)(lVar23 + 0x38))(puVar12,0,1,lVar14);
      }
      else {
        lVar14 = 0x112db3cd8;
        func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
        _memcpy(puVar12,puVar3,*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
      }
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0x1c));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0x1c));
      lVar14 = 0;
      FUN_10475cf44();
      lVar23 = *(long *)(lVar14 + -8);
      puVar15 = puVar3;
      (**(code **)(lVar23 + 0x30))(puVar3,1,lVar14);
      if ((int)puVar15 == 0) {
        uVar24 = puVar3[1];
        *puVar12 = *puVar3;
        puVar12[1] = uVar24;
        uVar24 = puVar3[2];
        uVar25 = puVar3[3];
        _swift_bridgeObjectRetain();
        func_0x00010006c00c(uVar24,uVar25);
        puVar12[2] = uVar24;
        puVar12[3] = uVar25;
        puVar15 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar14 + 0x18));
        puVar4 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar14 + 0x18));
        puVar16 = puVar4;
        (*pcVar21)(puVar4,1,lVar13);
        if ((int)puVar16 == 0) {
          uVar24 = puVar4[1];
          *puVar15 = *puVar4;
          puVar15[1] = uVar24;
          uVar24 = puVar4[3];
          puVar15[2] = puVar4[2];
          puVar15[3] = uVar24;
          uVar25 = puVar4[5];
          puVar15[4] = puVar4[4];
          puVar15[5] = uVar25;
          uVar27 = puVar4[7];
          puVar15[6] = puVar4[6];
          puVar15[7] = uVar27;
          puVar15[8] = puVar4[8];
          lVar30 = puVar4[0xf];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar24);
          _swift_bridgeObjectRetain(uVar25);
          _swift_bridgeObjectRetain(uVar27);
          if (lVar30 == 1) {
            uVar24 = puVar4[9];
            puVar15[10] = puVar4[10];
            puVar15[9] = uVar24;
            uVar24 = puVar4[0xb];
            puVar15[0xc] = puVar4[0xc];
            puVar15[0xb] = uVar24;
            uVar24 = puVar4[0xd];
            puVar15[0xe] = puVar4[0xe];
            puVar15[0xd] = uVar24;
            puVar15[0xf] = puVar4[0xf];
          }
          else {
            lVar17 = puVar4[0xb];
            if (lVar17 == 1) {
              uVar24 = puVar4[9];
              puVar15[10] = puVar4[10];
              puVar15[9] = uVar24;
              uVar24 = puVar4[0xb];
              puVar15[0xc] = puVar4[0xc];
              puVar15[0xb] = uVar24;
              puVar15[0xd] = puVar4[0xd];
            }
            else {
              uVar24 = puVar4[9];
              puVar15[10] = puVar4[10];
              puVar15[9] = uVar24;
              uVar24 = puVar4[0xc];
              uVar25 = puVar4[0xd];
              puVar15[0xb] = lVar17;
              puVar15[0xc] = uVar24;
              puVar15[0xd] = uVar25;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar25);
            }
            puVar15[0xe] = puVar4[0xe];
            puVar15[0xf] = lVar30;
            _swift_bridgeObjectRetain(lVar30);
          }
          uVar24 = puVar4[0x11];
          puVar15[0x10] = puVar4[0x10];
          puVar15[0x11] = uVar24;
          uVar25 = puVar4[0x13];
          puVar15[0x12] = puVar4[0x12];
          puVar15[0x13] = uVar25;
          lVar30 = (long)puVar15 + (long)*(int *)(lVar13 + 0x34);
          lVar17 = (long)puVar4 + (long)*(int *)(lVar13 + 0x34);
          lVar18 = 0;
          FUN_104742f28();
          lVar28 = *(long *)(lVar18 + -8);
          pcVar21 = *(code **)(lVar28 + 0x30);
          _swift_bridgeObjectRetain(uVar24);
          _swift_bridgeObjectRetain(uVar25);
          lVar19 = lVar17;
          (*pcVar21)(lVar17,1,lVar18);
          if ((int)lVar19 == 0) {
            lVar19 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar19 + -8) + 0x10))(lVar30,lVar17,lVar19);
            puVar16 = (undefined8 *)(lVar30 + *(int *)(lVar18 + 0x14));
            puVar5 = (undefined8 *)(lVar17 + *(int *)(lVar18 + 0x14));
            uVar24 = puVar5[1];
            *puVar16 = *puVar5;
            puVar16[1] = uVar24;
            *(undefined1 *)(lVar30 + *(int *)(lVar18 + 0x18)) =
                 *(undefined1 *)(lVar17 + *(int *)(lVar18 + 0x18));
            *(undefined1 *)(lVar30 + *(int *)(lVar18 + 0x1c)) =
                 *(undefined1 *)(lVar17 + *(int *)(lVar18 + 0x1c));
            puVar16 = (undefined8 *)(lVar30 + *(int *)(lVar18 + 0x20));
            puVar5 = (undefined8 *)(lVar17 + *(int *)(lVar18 + 0x20));
            *puVar16 = *puVar5;
            *(undefined1 *)(puVar16 + 1) = *(undefined1 *)(puVar5 + 1);
            *(undefined1 *)(lVar30 + *(int *)(lVar18 + 0x24)) =
                 *(undefined1 *)(lVar17 + *(int *)(lVar18 + 0x24));
            pcVar21 = *(code **)(lVar28 + 0x38);
            _swift_bridgeObjectRetain();
            (*pcVar21)(lVar30,0,1,lVar18);
          }
          else {
            lVar19 = 0x112dcbf00;
            func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
            _memcpy(lVar30,lVar17,*(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
          }
          puVar16 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar13 + 0x38));
          puVar4 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar13 + 0x38));
          uVar24 = *puVar4;
          puVar16[1] = puVar4[1];
          *puVar16 = uVar24;
          uVar24 = *(undefined8 *)((long)puVar4 + 9);
          *(undefined8 *)((long)puVar16 + 0x11) = *(undefined8 *)((long)puVar4 + 0x11);
          *(undefined8 *)((long)puVar16 + 9) = uVar24;
          (**(code **)(lVar20 + 0x38))(puVar15,0,1);
        }
        else {
          lVar13 = 0x112db3ce0;
          func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
          _memcpy(puVar15,puVar4,*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
        }
        puVar15 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar14 + 0x1c));
        puVar3 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar14 + 0x1c));
        if (puVar3[0x18] == 1) {
          _memcpy(puVar15,puVar3,0x260);
        }
        else {
          lVar13 = puVar3[1];
          if (lVar13 == 1) {
            uVar24 = *puVar3;
            puVar15[1] = puVar3[1];
            *puVar15 = uVar24;
            puVar15[2] = puVar3[2];
          }
          else {
            *puVar15 = *puVar3;
            puVar15[1] = lVar13;
            uVar24 = puVar3[2];
            puVar15[2] = uVar24;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar24);
          }
          uVar31 = puVar3[5];
          if (uVar31 >> 0x3c == 0xb) {
            uVar24 = puVar3[3];
            puVar15[4] = puVar3[4];
            puVar15[3] = uVar24;
            puVar15[5] = puVar3[5];
          }
          else {
            puVar15[3] = puVar3[3];
            if (uVar31 >> 0x3c < 0xf) {
              uVar24 = puVar3[4];
              func_0x00010006c00c(uVar24,uVar31);
              puVar15[4] = uVar24;
              puVar15[5] = uVar31;
            }
            else {
              uVar24 = puVar3[4];
              puVar15[5] = puVar3[5];
              puVar15[4] = uVar24;
            }
          }
          *(undefined2 *)(puVar15 + 6) = *(undefined2 *)(puVar3 + 6);
          puVar15[7] = puVar3[7];
          lVar13 = puVar3[9];
          if (lVar13 == 1) {
            uVar24 = puVar3[0x10];
            uVar27 = puVar3[0x13];
            uVar25 = puVar3[0x12];
            puVar15[0x11] = puVar3[0x11];
            puVar15[0x10] = uVar24;
            puVar15[0x13] = uVar27;
            puVar15[0x12] = uVar25;
            uVar24 = puVar3[0x14];
            puVar15[0x15] = puVar3[0x15];
            puVar15[0x14] = uVar24;
            uVar24 = *(undefined8 *)((long)puVar3 + 0xaa);
            *(undefined8 *)((long)puVar15 + 0xb2) = *(undefined8 *)((long)puVar3 + 0xb2);
            *(undefined8 *)((long)puVar15 + 0xaa) = uVar24;
            uVar24 = puVar3[8];
            uVar27 = puVar3[0xb];
            uVar25 = puVar3[10];
            puVar15[9] = puVar3[9];
            puVar15[8] = uVar24;
            puVar15[0xb] = uVar27;
            puVar15[10] = uVar25;
            uVar24 = puVar3[0xc];
            uVar27 = puVar3[0xf];
            uVar25 = puVar3[0xe];
            puVar15[0xd] = puVar3[0xd];
            puVar15[0xc] = uVar24;
            puVar15[0xf] = uVar27;
            puVar15[0xe] = uVar25;
          }
          else {
            puVar15[8] = puVar3[8];
            puVar15[9] = lVar13;
            uVar6 = puVar3[0xb];
            puVar15[10] = puVar3[10];
            puVar15[0xb] = uVar6;
            uVar24 = puVar3[0xc];
            uVar25 = puVar3[0xd];
            puVar15[0xc] = uVar24;
            puVar15[0xd] = uVar25;
            uVar25 = puVar3[0xe];
            uVar27 = puVar3[0xf];
            puVar15[0xe] = uVar25;
            puVar15[0xf] = uVar27;
            uVar27 = puVar3[0x10];
            uVar7 = puVar3[0x11];
            puVar15[0x10] = uVar27;
            puVar15[0x11] = uVar7;
            lVar13 = puVar3[0x13];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar6);
            _swift_bridgeObjectRetain(uVar24);
            _swift_bridgeObjectRetain(uVar25);
            _swift_bridgeObjectRetain(uVar27);
            _swift_bridgeObjectRetain(uVar7);
            if (lVar13 == 1) {
              uVar24 = puVar3[0x12];
              puVar15[0x13] = puVar3[0x13];
              puVar15[0x12] = uVar24;
            }
            else {
              puVar15[0x12] = puVar3[0x12];
              puVar15[0x13] = lVar13;
              _swift_bridgeObjectRetain(lVar13);
            }
            uVar24 = puVar3[0x15];
            puVar15[0x14] = puVar3[0x14];
            puVar15[0x15] = uVar24;
            puVar15[0x16] = puVar3[0x16];
            *(undefined2 *)(puVar15 + 0x17) = *(undefined2 *)(puVar3 + 0x17);
            _swift_bridgeObjectRetain();
          }
          *(undefined2 *)((long)puVar15 + 0xba) = *(undefined2 *)((long)puVar3 + 0xba);
          if (puVar3[0x18] == 0) {
            lVar13 = puVar3[0x18];
            uVar25 = puVar3[0x1b];
            uVar24 = puVar3[0x1a];
            puVar15[0x19] = puVar3[0x19];
            puVar15[0x18] = lVar13;
            puVar15[0x1b] = uVar25;
            puVar15[0x1a] = uVar24;
            uVar24 = puVar3[0x1c];
            uVar27 = puVar3[0x1f];
            uVar25 = puVar3[0x1e];
            puVar15[0x1d] = puVar3[0x1d];
            puVar15[0x1c] = uVar24;
            puVar15[0x1f] = uVar27;
            puVar15[0x1e] = uVar25;
          }
          else {
            puVar15[0x18] = puVar3[0x18];
            uVar24 = puVar3[0x19];
            puVar15[0x1a] = puVar3[0x1a];
            puVar15[0x19] = uVar24;
            uVar24 = puVar3[0x1c];
            puVar15[0x1b] = puVar3[0x1b];
            puVar15[0x1c] = uVar24;
            lVar13 = puVar3[0x1e];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar24);
            if (lVar13 == 0) {
              uVar24 = puVar3[0x1d];
              puVar15[0x1e] = puVar3[0x1e];
              puVar15[0x1d] = uVar24;
              puVar15[0x1f] = puVar3[0x1f];
            }
            else {
              puVar15[0x1d] = puVar3[0x1d];
              puVar15[0x1e] = lVar13;
              uVar24 = puVar3[0x1f];
              puVar15[0x1f] = uVar24;
              _swift_bridgeObjectRetain(lVar13);
              _swift_bridgeObjectRetain(uVar24);
            }
          }
          *(undefined1 *)(puVar15 + 0x20) = *(undefined1 *)(puVar3 + 0x20);
          uVar24 = puVar3[0x22];
          puVar15[0x21] = puVar3[0x21];
          puVar15[0x22] = uVar24;
          uVar24 = puVar3[0x24];
          puVar15[0x23] = puVar3[0x23];
          puVar15[0x24] = uVar24;
          uVar25 = puVar3[0x25];
          puVar15[0x26] = puVar3[0x26];
          puVar15[0x25] = uVar25;
          uVar25 = *(undefined8 *)((long)puVar3 + 0x132);
          *(undefined8 *)((long)puVar15 + 0x13a) = *(undefined8 *)((long)puVar3 + 0x13a);
          *(undefined8 *)((long)puVar15 + 0x132) = uVar25;
          lVar13 = puVar3[0x2a];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar24);
          if (lVar13 == 0) {
            uVar24 = puVar3[0x29];
            uVar27 = puVar3[0x2c];
            uVar25 = puVar3[0x2b];
            puVar15[0x2a] = puVar3[0x2a];
            puVar15[0x29] = uVar24;
            puVar15[0x2c] = uVar27;
            puVar15[0x2b] = uVar25;
          }
          else {
            puVar15[0x29] = puVar3[0x29];
            puVar15[0x2a] = lVar13;
            uVar24 = puVar3[0x2c];
            puVar15[0x2b] = puVar3[0x2b];
            puVar15[0x2c] = uVar24;
            _swift_bridgeObjectRetain(lVar13);
            _swift_bridgeObjectRetain(uVar24);
          }
          uVar24 = puVar3[0x2e];
          puVar15[0x2d] = puVar3[0x2d];
          puVar15[0x2e] = uVar24;
          uVar24 = puVar3[0x2f];
          uVar25 = puVar3[0x30];
          *(undefined1 *)(puVar15 + 0x31) = *(undefined1 *)(puVar3 + 0x31);
          uVar31 = puVar3[0x36];
          uVar11 = *(uint5 *)(puVar3 + 0x39);
          puVar15[0x2f] = uVar24;
          puVar15[0x30] = uVar25;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar25);
          if ((((uVar31 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
             (((ulong)uVar11 & 0xfefefefefefefefe) == 0x6fefefefe)) {
            uVar24 = puVar3[0x32];
            uVar27 = puVar3[0x35];
            uVar25 = puVar3[0x34];
            puVar15[0x33] = puVar3[0x33];
            puVar15[0x32] = uVar24;
            puVar15[0x35] = uVar27;
            puVar15[0x34] = uVar25;
            uVar24 = puVar3[0x36];
            puVar15[0x37] = puVar3[0x37];
            puVar15[0x36] = uVar24;
            uVar24 = *(undefined8 *)((long)puVar3 + 0x1bd);
            *(undefined8 *)((long)puVar15 + 0x1c5) = *(undefined8 *)((long)puVar3 + 0x1c5);
            *(undefined8 *)((long)puVar15 + 0x1bd) = uVar24;
          }
          else {
            uVar24 = puVar3[0x32];
            uVar6 = puVar3[0x33];
            uVar25 = puVar3[0x34];
            uVar7 = puVar3[0x35];
            uVar27 = puVar3[0x37];
            uVar8 = puVar3[0x38];
            func_0x00010179a2b8(uVar24,uVar6,uVar25,uVar7,uVar31,uVar27,uVar8,(ulong)uVar11);
            puVar15[0x32] = uVar24;
            puVar15[0x33] = uVar6;
            puVar15[0x34] = uVar25;
            puVar15[0x35] = uVar7;
            puVar15[0x36] = uVar31;
            puVar15[0x37] = uVar27;
            puVar15[0x38] = uVar8;
            *(char *)((long)puVar15 + 0x1cc) = (char)(uVar11 >> 0x20);
            *(int *)(puVar15 + 0x39) = (int)uVar11;
          }
          *(undefined1 *)((long)puVar15 + 0x1cd) = *(undefined1 *)((long)puVar3 + 0x1cd);
          uVar24 = puVar3[0x3b];
          puVar15[0x3a] = puVar3[0x3a];
          puVar15[0x3b] = uVar24;
          *(undefined1 *)(puVar15 + 0x3c) = *(undefined1 *)(puVar3 + 0x3c);
          lVar13 = puVar3[0x3e];
          _swift_bridgeObjectRetain();
          if (lVar13 == 0) {
            uVar24 = puVar3[0x3d];
            uVar27 = puVar3[0x40];
            uVar25 = puVar3[0x3f];
            puVar15[0x3e] = puVar3[0x3e];
            puVar15[0x3d] = uVar24;
            puVar15[0x40] = uVar27;
            puVar15[0x3f] = uVar25;
            uVar24 = puVar3[0x41];
            puVar15[0x42] = puVar3[0x42];
            puVar15[0x41] = uVar24;
          }
          else {
            puVar15[0x3d] = puVar3[0x3d];
            puVar15[0x3e] = lVar13;
            uVar24 = puVar3[0x40];
            puVar15[0x3f] = puVar3[0x3f];
            puVar15[0x40] = uVar24;
            puVar15[0x41] = puVar3[0x41];
            uVar25 = puVar3[0x42];
            puVar15[0x42] = uVar25;
            _swift_bridgeObjectRetain(lVar13);
            _swift_bridgeObjectRetain(uVar24);
            _swift_bridgeObjectRetain(uVar25);
          }
          *(undefined1 *)(puVar15 + 0x43) = *(undefined1 *)(puVar3 + 0x43);
          lVar13 = puVar3[0x45];
          if (lVar13 == 0) {
            uVar24 = puVar3[0x44];
            uVar27 = puVar3[0x47];
            uVar25 = puVar3[0x46];
            puVar15[0x45] = puVar3[0x45];
            puVar15[0x44] = uVar24;
            puVar15[0x47] = uVar27;
            puVar15[0x46] = uVar25;
            uVar24 = puVar3[0x48];
            puVar15[0x49] = puVar3[0x49];
            puVar15[0x48] = uVar24;
            puVar15[0x4a] = puVar3[0x4a];
          }
          else {
            puVar15[0x44] = puVar3[0x44];
            puVar15[0x45] = lVar13;
            puVar15[0x46] = puVar3[0x46];
            uVar24 = puVar3[0x47];
            puVar15[0x47] = uVar24;
            puVar15[0x48] = puVar3[0x48];
            uVar25 = puVar3[0x49];
            puVar15[0x49] = uVar25;
            puVar15[0x4a] = puVar3[0x4a];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar24);
            _swift_bridgeObjectRetain(uVar25);
          }
          puVar15[0x4b] = puVar3[0x4b];
          _swift_bridgeObjectRetain();
        }
        (**(code **)(lVar23 + 0x38))(puVar12,0,1,lVar14);
      }
      else {
        lVar13 = 0x112db3cc8;
        func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
        _memcpy(puVar12,puVar3,*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
      }
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar26 + 0x20)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar26 + 0x20));
      (**(code **)(lVar22 + 0x38))(puVar1,0,1,lVar26);
    }
    else {
      lVar26 = 0x112db3e90;
      func_0x0001000285a8(0x112db3e90,&UNK_10d95e3e0);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar26 + -8) + 0x40));
    }
    iVar9 = *(int *)(param_3 + 0x1c);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    uVar24 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar24;
    *(undefined8 *)((long)param_1 + (long)iVar9) = *(undefined8 *)((long)param_2 + (long)iVar9);
    _swift_bridgeObjectRetain();
  }
  else {
    lVar26 = *param_2;
    *param_1 = lVar26;
    uVar31 = (ulong)uVar10 & 0xff;
    param_1 = (long *)(lVar26 + (uVar31 + 0x10 & (uVar31 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1047255ac; end: 104725c6b;  */

void FUN_1047255ac(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 1) {
    if (*(long *)(param_1 + 0x10) != 1) {
      _swift_bridgeObjectRelease(*(long *)(param_1 + 0x10));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
      lVar1 = *(long *)(param_1 + 0x30);
    }
    _swift_bridgeObjectRelease(lVar1);
  }
  lVar1 = param_1 + *(int *)(param_2 + 0x14);
  lVar2 = 0;
  FUN_10472f4dc();
  lVar4 = lVar1;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(lVar1,1,lVar2);
  if ((int)lVar4 == 0) {
    lVar3 = 0;
    FUN_104739264();
    pcVar7 = *(code **)(*(long *)(lVar3 + -8) + 0x30);
    lVar4 = lVar1;
    (*pcVar7)(lVar1,1,lVar3);
    if ((int)lVar4 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x28));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x38));
      lVar4 = *(long *)(lVar1 + 0x78);
      if (lVar4 != 1) {
        if (*(long *)(lVar1 + 0x58) != 1) {
          _swift_bridgeObjectRelease(*(long *)(lVar1 + 0x58));
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x68));
          lVar4 = *(long *)(lVar1 + 0x78);
        }
        _swift_bridgeObjectRelease(lVar4);
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x88));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x98));
      lVar4 = lVar1 + *(int *)(lVar3 + 0x34);
      lVar5 = 0;
      FUN_104742f28();
      lVar6 = lVar4;
      (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar4,1,lVar5);
      if ((int)lVar6 == 0) {
        lVar6 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar6 + -8) + 8))(lVar4,lVar6);
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + *(int *)(lVar5 + 0x14) + 8));
      }
    }
    lVar4 = lVar1 + *(int *)(lVar2 + 0x14);
    if (*(long *)(lVar4 + 0xc0) != 1) {
      if (*(long *)(lVar4 + 8) != 1) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x10));
      }
      if (*(ulong *)(lVar4 + 0x28) >> 0x3c < 0xf &&
          (*(ulong *)(lVar4 + 0x28) & 0xf000000000000000) != 0xb000000000000000) {
        func_0x00010006c090(*(undefined8 *)(lVar4 + 0x20));
      }
      if (*(long *)(lVar4 + 0x48) != 1) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x58));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x60));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x70));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x80));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x88));
        if (*(long *)(lVar4 + 0x98) != 1) {
          _swift_bridgeObjectRelease();
        }
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0xa8));
      }
      if (*(long *)(lVar4 + 0xc0) != 0) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0xe0));
        if (*(long *)(lVar4 + 0xf0) != 0) {
          _swift_bridgeObjectRelease();
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0xf8));
        }
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x110));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x120));
      if (*(long *)(lVar4 + 0x150) != 0) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x160));
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x170));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x180));
      if ((((*(ulong *)(lVar4 + 0x1b0) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
         (((ulong)*(uint5 *)(lVar4 + 0x1c8) & 0xfefefefefefefefe) != 0x6fefefefe)) {
        func_0x00010179b820(*(undefined8 *)(lVar4 + 400),*(undefined8 *)(lVar4 + 0x198),
                            *(undefined8 *)(lVar4 + 0x1a0),*(undefined8 *)(lVar4 + 0x1a8),
                            *(ulong *)(lVar4 + 0x1b0),*(undefined8 *)(lVar4 + 0x1b8),
                            *(undefined8 *)(lVar4 + 0x1c0));
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x1d8));
      if (*(long *)(lVar4 + 0x1f0) != 0) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x200));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x210));
      }
      if (*(long *)(lVar4 + 0x228) != 0) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x238));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x248));
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 600));
    }
    lVar4 = lVar1 + *(int *)(lVar2 + 0x18);
    lVar5 = 0;
    FUN_10470fbcc();
    lVar6 = lVar4;
    (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar4,1,lVar5);
    if ((int)lVar6 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x18));
      lVar6 = *(long *)(lVar4 + 0x50);
      if (lVar6 != 1) {
        if (*(long *)(lVar4 + 0x30) != 1) {
          _swift_bridgeObjectRelease(*(long *)(lVar4 + 0x30));
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x40));
          lVar6 = *(long *)(lVar4 + 0x50);
        }
        _swift_bridgeObjectRelease(lVar6);
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x80));
      if (*(long *)(lVar4 + 0xa0) != 1) {
        _swift_bridgeObjectRelease();
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0xa8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0xb0));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0xb8));
      lVar4 = lVar4 + *(int *)(lVar5 + 0x38);
      lVar5 = 0;
      FUN_104742f28();
      lVar6 = lVar4;
      (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar4,1,lVar5);
      if ((int)lVar6 == 0) {
        lVar6 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar6 + -8) + 8))(lVar4,lVar6);
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + *(int *)(lVar5 + 0x14) + 8));
      }
    }
    lVar1 = lVar1 + *(int *)(lVar2 + 0x1c);
    lVar2 = 0;
    FUN_10475cf44();
    lVar4 = lVar1;
    (**(code **)(*(long *)(lVar2 + -8) + 0x30))(lVar1,1,lVar2);
    if ((int)lVar4 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
      func_0x00010006c090(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18));
      lVar4 = lVar1 + *(int *)(lVar2 + 0x18);
      lVar6 = lVar4;
      (*pcVar7)(lVar4,1,lVar3);
      if ((int)lVar6 == 0) {
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 8));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x18));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x28));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x38));
        lVar6 = *(long *)(lVar4 + 0x78);
        if (lVar6 != 1) {
          if (*(long *)(lVar4 + 0x58) != 1) {
            _swift_bridgeObjectRelease(*(long *)(lVar4 + 0x58));
            _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x68));
            lVar6 = *(long *)(lVar4 + 0x78);
          }
          _swift_bridgeObjectRelease(lVar6);
        }
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x88));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x98));
        lVar4 = lVar4 + *(int *)(lVar3 + 0x34);
        lVar6 = 0;
        FUN_104742f28();
        lVar3 = lVar4;
        (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar4,1,lVar6);
        if ((int)lVar3 == 0) {
          lVar3 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar3 + -8) + 8))(lVar4,lVar3);
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + *(int *)(lVar6 + 0x14) + 8));
        }
      }
      lVar1 = lVar1 + *(int *)(lVar2 + 0x1c);
      if (*(long *)(lVar1 + 0xc0) != 1) {
        if (*(long *)(lVar1 + 8) != 1) {
          _swift_bridgeObjectRelease();
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x10));
        }
        if ((*(ulong *)(lVar1 + 0x28) >> 0x3c < 0xf) &&
           ((*(ulong *)(lVar1 + 0x28) & 0xf000000000000000) != 0xb000000000000000)) {
          func_0x00010006c090(*(undefined8 *)(lVar1 + 0x20));
        }
        if (*(long *)(lVar1 + 0x48) != 1) {
          _swift_bridgeObjectRelease();
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x58));
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x60));
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x70));
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x80));
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x88));
          if (*(long *)(lVar1 + 0x98) != 1) {
            _swift_bridgeObjectRelease();
          }
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0xa8));
        }
        if (*(long *)(lVar1 + 0xc0) != 0) {
          _swift_bridgeObjectRelease();
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0xe0));
          if (*(long *)(lVar1 + 0xf0) != 0) {
            _swift_bridgeObjectRelease();
            _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0xf8));
          }
        }
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x110));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x120));
        if (*(long *)(lVar1 + 0x150) != 0) {
          _swift_bridgeObjectRelease();
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x160));
        }
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x170));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x180));
        if ((((*(ulong *)(lVar1 + 0x1b0) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
           (((ulong)*(uint5 *)(lVar1 + 0x1c8) & 0xfefefefefefefefe) != 0x6fefefefe)) {
          func_0x00010179b820(*(undefined8 *)(lVar1 + 400),*(undefined8 *)(lVar1 + 0x198),
                              *(undefined8 *)(lVar1 + 0x1a0),*(undefined8 *)(lVar1 + 0x1a8),
                              *(ulong *)(lVar1 + 0x1b0),*(undefined8 *)(lVar1 + 0x1b8),
                              *(undefined8 *)(lVar1 + 0x1c0));
        }
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x1d8));
        if (*(long *)(lVar1 + 0x1f0) != 0) {
          _swift_bridgeObjectRelease();
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x200));
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x210));
        }
        if (*(long *)(lVar1 + 0x228) != 0) {
          _swift_bridgeObjectRelease();
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x238));
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x248));
        }
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 600));
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18) + 8));
  return;
}



/* Entry: 104725c6c; end: 10472c7cb;  */

undefined8 * FUN_104725c6c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  uint5 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  code *pcVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  undefined8 uVar28;
  long lVar29;
  code *pcVar30;
  
  lVar25 = param_2[6];
  if (lVar25 == 1) {
    uVar23 = *param_2;
    uVar28 = param_2[3];
    uVar24 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar23;
    param_1[3] = uVar28;
    param_1[2] = uVar24;
    uVar23 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar23;
    param_1[6] = param_2[6];
  }
  else {
    lVar21 = param_2[2];
    if (lVar21 == 1) {
      uVar23 = *param_2;
      uVar28 = param_2[3];
      uVar24 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar23;
      param_1[3] = uVar28;
      param_1[2] = uVar24;
      param_1[4] = param_2[4];
    }
    else {
      uVar23 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar23;
      uVar23 = param_2[3];
      uVar24 = param_2[4];
      param_1[2] = lVar21;
      param_1[3] = uVar23;
      param_1[4] = uVar24;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar24);
    }
    param_1[5] = param_2[5];
    param_1[6] = lVar25;
    _swift_bridgeObjectRetain(lVar25);
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  lVar25 = 0;
  FUN_10472f4dc();
  lVar21 = *(long *)(lVar25 + -8);
  puVar11 = puVar2;
  (**(code **)(lVar21 + 0x30))(puVar2,1,lVar25);
  if ((int)puVar11 == 0) {
    lVar12 = 0;
    FUN_104739264();
    lVar19 = *(long *)(lVar12 + -8);
    pcVar20 = *(code **)(lVar19 + 0x30);
    puVar11 = puVar2;
    (*pcVar20)(puVar2,1);
    if ((int)puVar11 == 0) {
      uVar23 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar23;
      uVar23 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar23;
      uVar24 = puVar2[5];
      puVar1[4] = puVar2[4];
      puVar1[5] = uVar24;
      uVar28 = puVar2[7];
      puVar1[6] = puVar2[6];
      puVar1[7] = uVar28;
      puVar1[8] = puVar2[8];
      lVar13 = puVar2[0xf];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(uVar24);
      _swift_bridgeObjectRetain(uVar28);
      if (lVar13 == 1) {
        uVar23 = puVar2[9];
        puVar1[10] = puVar2[10];
        puVar1[9] = uVar23;
        uVar23 = puVar2[0xb];
        puVar1[0xc] = puVar2[0xc];
        puVar1[0xb] = uVar23;
        uVar23 = puVar2[0xd];
        puVar1[0xe] = puVar2[0xe];
        puVar1[0xd] = uVar23;
        puVar1[0xf] = puVar2[0xf];
      }
      else {
        lVar22 = puVar2[0xb];
        if (lVar22 == 1) {
          uVar23 = puVar2[9];
          puVar1[10] = puVar2[10];
          puVar1[9] = uVar23;
          uVar23 = puVar2[0xb];
          puVar1[0xc] = puVar2[0xc];
          puVar1[0xb] = uVar23;
          puVar1[0xd] = puVar2[0xd];
        }
        else {
          uVar23 = puVar2[9];
          puVar1[10] = puVar2[10];
          puVar1[9] = uVar23;
          uVar23 = puVar2[0xc];
          uVar24 = puVar2[0xd];
          puVar1[0xb] = lVar22;
          puVar1[0xc] = uVar23;
          puVar1[0xd] = uVar24;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar24);
        }
        puVar1[0xe] = puVar2[0xe];
        puVar1[0xf] = lVar13;
        _swift_bridgeObjectRetain(lVar13);
      }
      uVar23 = puVar2[0x11];
      puVar1[0x10] = puVar2[0x10];
      puVar1[0x11] = uVar23;
      uVar24 = puVar2[0x13];
      puVar1[0x12] = puVar2[0x12];
      puVar1[0x13] = uVar24;
      lVar13 = (long)puVar1 + (long)*(int *)(lVar12 + 0x34);
      lVar22 = (long)puVar2 + (long)*(int *)(lVar12 + 0x34);
      lVar16 = 0;
      FUN_104742f28();
      lVar18 = *(long *)(lVar16 + -8);
      pcVar30 = *(code **)(lVar18 + 0x30);
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(uVar24);
      lVar26 = lVar22;
      (*pcVar30)(lVar22,1,lVar16);
      if ((int)lVar26 == 0) {
        lVar26 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar26 + -8) + 0x10))(lVar13,lVar22,lVar26);
        puVar11 = (undefined8 *)(lVar13 + *(int *)(lVar16 + 0x14));
        puVar3 = (undefined8 *)(lVar22 + *(int *)(lVar16 + 0x14));
        uVar23 = puVar3[1];
        *puVar11 = *puVar3;
        puVar11[1] = uVar23;
        *(undefined1 *)(lVar13 + *(int *)(lVar16 + 0x18)) =
             *(undefined1 *)(lVar22 + *(int *)(lVar16 + 0x18));
        *(undefined1 *)(lVar13 + *(int *)(lVar16 + 0x1c)) =
             *(undefined1 *)(lVar22 + *(int *)(lVar16 + 0x1c));
        puVar11 = (undefined8 *)(lVar13 + *(int *)(lVar16 + 0x20));
        puVar3 = (undefined8 *)(lVar22 + *(int *)(lVar16 + 0x20));
        *puVar11 = *puVar3;
        *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar3 + 1);
        *(undefined1 *)(lVar13 + *(int *)(lVar16 + 0x24)) =
             *(undefined1 *)(lVar22 + *(int *)(lVar16 + 0x24));
        pcVar30 = *(code **)(lVar18 + 0x38);
        _swift_bridgeObjectRetain();
        (*pcVar30)(lVar13,0,1,lVar16);
      }
      else {
        lVar26 = 0x112dcbf00;
        func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
        _memcpy(lVar13,lVar22,*(undefined8 *)(*(long *)(lVar26 + -8) + 0x40));
      }
      puVar11 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x38));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x38));
      uVar23 = *puVar3;
      puVar11[1] = puVar3[1];
      *puVar11 = uVar23;
      uVar23 = *(undefined8 *)((long)puVar3 + 9);
      *(undefined8 *)((long)puVar11 + 0x11) = *(undefined8 *)((long)puVar3 + 0x11);
      *(undefined8 *)((long)puVar11 + 9) = uVar23;
      (**(code **)(lVar19 + 0x38))(puVar1,0,1);
    }
    else {
      lVar13 = 0x112db3ce0;
      func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
    }
    puVar11 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar25 + 0x14));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar25 + 0x14));
    if (puVar3[0x18] == 1) {
      _memcpy(puVar11,puVar3,0x260);
    }
    else {
      lVar13 = puVar3[1];
      if (lVar13 == 1) {
        uVar23 = *puVar3;
        puVar11[1] = puVar3[1];
        *puVar11 = uVar23;
        puVar11[2] = puVar3[2];
      }
      else {
        *puVar11 = *puVar3;
        puVar11[1] = lVar13;
        uVar23 = puVar3[2];
        puVar11[2] = uVar23;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar23);
      }
      uVar27 = puVar3[5];
      if (uVar27 >> 0x3c == 0xb) {
        uVar23 = puVar3[3];
        puVar11[4] = puVar3[4];
        puVar11[3] = uVar23;
        puVar11[5] = puVar3[5];
      }
      else {
        puVar11[3] = puVar3[3];
        if (uVar27 >> 0x3c < 0xf) {
          uVar23 = puVar3[4];
          func_0x00010006c00c(uVar23,uVar27);
          puVar11[4] = uVar23;
          puVar11[5] = uVar27;
        }
        else {
          uVar23 = puVar3[4];
          puVar11[5] = puVar3[5];
          puVar11[4] = uVar23;
        }
      }
      *(undefined2 *)(puVar11 + 6) = *(undefined2 *)(puVar3 + 6);
      puVar11[7] = puVar3[7];
      lVar13 = puVar3[9];
      if (lVar13 == 1) {
        uVar23 = puVar3[0x10];
        uVar28 = puVar3[0x13];
        uVar24 = puVar3[0x12];
        puVar11[0x11] = puVar3[0x11];
        puVar11[0x10] = uVar23;
        puVar11[0x13] = uVar28;
        puVar11[0x12] = uVar24;
        uVar23 = puVar3[0x14];
        puVar11[0x15] = puVar3[0x15];
        puVar11[0x14] = uVar23;
        uVar23 = *(undefined8 *)((long)puVar3 + 0xaa);
        *(undefined8 *)((long)puVar11 + 0xb2) = *(undefined8 *)((long)puVar3 + 0xb2);
        *(undefined8 *)((long)puVar11 + 0xaa) = uVar23;
        uVar23 = puVar3[8];
        uVar28 = puVar3[0xb];
        uVar24 = puVar3[10];
        puVar11[9] = puVar3[9];
        puVar11[8] = uVar23;
        puVar11[0xb] = uVar28;
        puVar11[10] = uVar24;
        uVar23 = puVar3[0xc];
        uVar28 = puVar3[0xf];
        uVar24 = puVar3[0xe];
        puVar11[0xd] = puVar3[0xd];
        puVar11[0xc] = uVar23;
        puVar11[0xf] = uVar28;
        puVar11[0xe] = uVar24;
      }
      else {
        puVar11[8] = puVar3[8];
        puVar11[9] = lVar13;
        uVar6 = puVar3[0xb];
        puVar11[10] = puVar3[10];
        puVar11[0xb] = uVar6;
        uVar23 = puVar3[0xc];
        uVar24 = puVar3[0xd];
        puVar11[0xc] = uVar23;
        puVar11[0xd] = uVar24;
        uVar24 = puVar3[0xe];
        uVar28 = puVar3[0xf];
        puVar11[0xe] = uVar24;
        puVar11[0xf] = uVar28;
        uVar28 = puVar3[0x10];
        uVar7 = puVar3[0x11];
        puVar11[0x10] = uVar28;
        puVar11[0x11] = uVar7;
        lVar13 = puVar3[0x13];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar6);
        _swift_bridgeObjectRetain(uVar23);
        _swift_bridgeObjectRetain(uVar24);
        _swift_bridgeObjectRetain(uVar28);
        _swift_bridgeObjectRetain(uVar7);
        if (lVar13 == 1) {
          uVar23 = puVar3[0x12];
          puVar11[0x13] = puVar3[0x13];
          puVar11[0x12] = uVar23;
        }
        else {
          puVar11[0x12] = puVar3[0x12];
          puVar11[0x13] = lVar13;
          _swift_bridgeObjectRetain(lVar13);
        }
        uVar23 = puVar3[0x15];
        puVar11[0x14] = puVar3[0x14];
        puVar11[0x15] = uVar23;
        puVar11[0x16] = puVar3[0x16];
        *(undefined2 *)(puVar11 + 0x17) = *(undefined2 *)(puVar3 + 0x17);
        _swift_bridgeObjectRetain();
      }
      *(undefined2 *)((long)puVar11 + 0xba) = *(undefined2 *)((long)puVar3 + 0xba);
      if (puVar3[0x18] == 0) {
        lVar13 = puVar3[0x18];
        uVar24 = puVar3[0x1b];
        uVar23 = puVar3[0x1a];
        puVar11[0x19] = puVar3[0x19];
        puVar11[0x18] = lVar13;
        puVar11[0x1b] = uVar24;
        puVar11[0x1a] = uVar23;
        uVar23 = puVar3[0x1c];
        uVar28 = puVar3[0x1f];
        uVar24 = puVar3[0x1e];
        puVar11[0x1d] = puVar3[0x1d];
        puVar11[0x1c] = uVar23;
        puVar11[0x1f] = uVar28;
        puVar11[0x1e] = uVar24;
      }
      else {
        puVar11[0x18] = puVar3[0x18];
        uVar23 = puVar3[0x19];
        puVar11[0x1a] = puVar3[0x1a];
        puVar11[0x19] = uVar23;
        uVar23 = puVar3[0x1c];
        puVar11[0x1b] = puVar3[0x1b];
        puVar11[0x1c] = uVar23;
        lVar13 = puVar3[0x1e];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar23);
        if (lVar13 == 0) {
          uVar23 = puVar3[0x1d];
          puVar11[0x1e] = puVar3[0x1e];
          puVar11[0x1d] = uVar23;
          puVar11[0x1f] = puVar3[0x1f];
        }
        else {
          puVar11[0x1d] = puVar3[0x1d];
          puVar11[0x1e] = lVar13;
          uVar23 = puVar3[0x1f];
          puVar11[0x1f] = uVar23;
          _swift_bridgeObjectRetain(lVar13);
          _swift_bridgeObjectRetain(uVar23);
        }
      }
      *(undefined1 *)(puVar11 + 0x20) = *(undefined1 *)(puVar3 + 0x20);
      uVar23 = puVar3[0x22];
      puVar11[0x21] = puVar3[0x21];
      puVar11[0x22] = uVar23;
      uVar23 = puVar3[0x24];
      puVar11[0x23] = puVar3[0x23];
      puVar11[0x24] = uVar23;
      uVar24 = puVar3[0x25];
      puVar11[0x26] = puVar3[0x26];
      puVar11[0x25] = uVar24;
      uVar24 = *(undefined8 *)((long)puVar3 + 0x132);
      *(undefined8 *)((long)puVar11 + 0x13a) = *(undefined8 *)((long)puVar3 + 0x13a);
      *(undefined8 *)((long)puVar11 + 0x132) = uVar24;
      lVar13 = puVar3[0x2a];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar23);
      if (lVar13 == 0) {
        uVar23 = puVar3[0x29];
        uVar28 = puVar3[0x2c];
        uVar24 = puVar3[0x2b];
        puVar11[0x2a] = puVar3[0x2a];
        puVar11[0x29] = uVar23;
        puVar11[0x2c] = uVar28;
        puVar11[0x2b] = uVar24;
      }
      else {
        puVar11[0x29] = puVar3[0x29];
        puVar11[0x2a] = lVar13;
        uVar23 = puVar3[0x2c];
        puVar11[0x2b] = puVar3[0x2b];
        puVar11[0x2c] = uVar23;
        _swift_bridgeObjectRetain(lVar13);
        _swift_bridgeObjectRetain(uVar23);
      }
      uVar23 = puVar3[0x2e];
      puVar11[0x2d] = puVar3[0x2d];
      puVar11[0x2e] = uVar23;
      uVar23 = puVar3[0x2f];
      uVar24 = puVar3[0x30];
      *(undefined1 *)(puVar11 + 0x31) = *(undefined1 *)(puVar3 + 0x31);
      uVar27 = puVar3[0x36];
      uVar10 = *(uint5 *)(puVar3 + 0x39);
      puVar11[0x2f] = uVar23;
      puVar11[0x30] = uVar24;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar24);
      if ((((uVar27 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
         (((ulong)uVar10 & 0xfefefefefefefefe) == 0x6fefefefe)) {
        uVar23 = puVar3[0x32];
        uVar28 = puVar3[0x35];
        uVar24 = puVar3[0x34];
        puVar11[0x33] = puVar3[0x33];
        puVar11[0x32] = uVar23;
        puVar11[0x35] = uVar28;
        puVar11[0x34] = uVar24;
        uVar23 = puVar3[0x36];
        puVar11[0x37] = puVar3[0x37];
        puVar11[0x36] = uVar23;
        uVar23 = *(undefined8 *)((long)puVar3 + 0x1bd);
        *(undefined8 *)((long)puVar11 + 0x1c5) = *(undefined8 *)((long)puVar3 + 0x1c5);
        *(undefined8 *)((long)puVar11 + 0x1bd) = uVar23;
      }
      else {
        uVar23 = puVar3[0x32];
        uVar6 = puVar3[0x33];
        uVar24 = puVar3[0x34];
        uVar7 = puVar3[0x35];
        uVar28 = puVar3[0x37];
        uVar8 = puVar3[0x38];
        func_0x00010179a2b8(uVar23,uVar6,uVar24,uVar7,uVar27,uVar28,uVar8,(ulong)uVar10);
        puVar11[0x32] = uVar23;
        puVar11[0x33] = uVar6;
        puVar11[0x34] = uVar24;
        puVar11[0x35] = uVar7;
        puVar11[0x36] = uVar27;
        puVar11[0x37] = uVar28;
        puVar11[0x38] = uVar8;
        *(char *)((long)puVar11 + 0x1cc) = (char)(uVar10 >> 0x20);
        *(int *)(puVar11 + 0x39) = (int)uVar10;
      }
      *(undefined1 *)((long)puVar11 + 0x1cd) = *(undefined1 *)((long)puVar3 + 0x1cd);
      uVar23 = puVar3[0x3b];
      puVar11[0x3a] = puVar3[0x3a];
      puVar11[0x3b] = uVar23;
      *(undefined1 *)(puVar11 + 0x3c) = *(undefined1 *)(puVar3 + 0x3c);
      lVar13 = puVar3[0x3e];
      _swift_bridgeObjectRetain();
      if (lVar13 == 0) {
        uVar23 = puVar3[0x3d];
        uVar28 = puVar3[0x40];
        uVar24 = puVar3[0x3f];
        puVar11[0x3e] = puVar3[0x3e];
        puVar11[0x3d] = uVar23;
        puVar11[0x40] = uVar28;
        puVar11[0x3f] = uVar24;
        uVar23 = puVar3[0x41];
        puVar11[0x42] = puVar3[0x42];
        puVar11[0x41] = uVar23;
      }
      else {
        puVar11[0x3d] = puVar3[0x3d];
        puVar11[0x3e] = lVar13;
        uVar23 = puVar3[0x40];
        puVar11[0x3f] = puVar3[0x3f];
        puVar11[0x40] = uVar23;
        puVar11[0x41] = puVar3[0x41];
        uVar24 = puVar3[0x42];
        puVar11[0x42] = uVar24;
        _swift_bridgeObjectRetain(lVar13);
        _swift_bridgeObjectRetain(uVar23);
        _swift_bridgeObjectRetain(uVar24);
      }
      *(undefined1 *)(puVar11 + 0x43) = *(undefined1 *)(puVar3 + 0x43);
      lVar13 = puVar3[0x45];
      if (lVar13 == 0) {
        uVar23 = puVar3[0x44];
        uVar28 = puVar3[0x47];
        uVar24 = puVar3[0x46];
        puVar11[0x45] = puVar3[0x45];
        puVar11[0x44] = uVar23;
        puVar11[0x47] = uVar28;
        puVar11[0x46] = uVar24;
        uVar23 = puVar3[0x48];
        puVar11[0x49] = puVar3[0x49];
        puVar11[0x48] = uVar23;
        puVar11[0x4a] = puVar3[0x4a];
      }
      else {
        puVar11[0x44] = puVar3[0x44];
        puVar11[0x45] = lVar13;
        puVar11[0x46] = puVar3[0x46];
        uVar23 = puVar3[0x47];
        puVar11[0x47] = uVar23;
        puVar11[0x48] = puVar3[0x48];
        uVar24 = puVar3[0x49];
        puVar11[0x49] = uVar24;
        puVar11[0x4a] = puVar3[0x4a];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar23);
        _swift_bridgeObjectRetain(uVar24);
      }
      puVar11[0x4b] = puVar3[0x4b];
      _swift_bridgeObjectRetain();
    }
    puVar11 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar25 + 0x18));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar25 + 0x18));
    lVar13 = 0;
    FUN_10470fbcc();
    lVar22 = *(long *)(lVar13 + -8);
    puVar14 = puVar3;
    (**(code **)(lVar22 + 0x30))(puVar3,1,lVar13);
    if ((int)puVar14 == 0) {
      uVar23 = puVar3[1];
      *puVar11 = *puVar3;
      puVar11[1] = uVar23;
      uVar23 = puVar3[3];
      puVar11[2] = puVar3[2];
      puVar11[3] = uVar23;
      lVar26 = puVar3[10];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar23);
      if (lVar26 == 1) {
        uVar23 = puVar3[4];
        uVar28 = puVar3[7];
        uVar24 = puVar3[6];
        puVar11[5] = puVar3[5];
        puVar11[4] = uVar23;
        puVar11[7] = uVar28;
        puVar11[6] = uVar24;
        uVar23 = puVar3[8];
        puVar11[9] = puVar3[9];
        puVar11[8] = uVar23;
        puVar11[10] = puVar3[10];
      }
      else {
        lVar16 = puVar3[6];
        if (lVar16 == 1) {
          uVar23 = puVar3[4];
          uVar28 = puVar3[7];
          uVar24 = puVar3[6];
          puVar11[5] = puVar3[5];
          puVar11[4] = uVar23;
          puVar11[7] = uVar28;
          puVar11[6] = uVar24;
          puVar11[8] = puVar3[8];
        }
        else {
          uVar23 = puVar3[4];
          puVar11[5] = puVar3[5];
          puVar11[4] = uVar23;
          uVar23 = puVar3[7];
          uVar24 = puVar3[8];
          puVar11[6] = lVar16;
          puVar11[7] = uVar23;
          puVar11[8] = uVar24;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar24);
        }
        puVar11[9] = puVar3[9];
        puVar11[10] = lVar26;
        _swift_bridgeObjectRetain(lVar26);
      }
      uVar23 = puVar3[0xb];
      puVar11[0xc] = puVar3[0xc];
      puVar11[0xb] = uVar23;
      uVar23 = *(undefined8 *)((long)puVar3 + 0x61);
      *(undefined8 *)((long)puVar11 + 0x69) = *(undefined8 *)((long)puVar3 + 0x69);
      *(undefined8 *)((long)puVar11 + 0x61) = uVar23;
      uVar23 = puVar3[0x10];
      puVar11[0xf] = puVar3[0xf];
      puVar11[0x10] = uVar23;
      *(undefined1 *)(puVar11 + 0x11) = *(undefined1 *)(puVar3 + 0x11);
      lVar26 = puVar3[0x14];
      _swift_bridgeObjectRetain();
      if (lVar26 == 1) {
        uVar23 = puVar3[0x12];
        puVar11[0x13] = puVar3[0x13];
        puVar11[0x12] = uVar23;
        puVar11[0x14] = puVar3[0x14];
      }
      else {
        *(undefined4 *)(puVar11 + 0x12) = *(undefined4 *)(puVar3 + 0x12);
        *(undefined1 *)((long)puVar11 + 0x94) = *(undefined1 *)((long)puVar3 + 0x94);
        puVar11[0x13] = puVar3[0x13];
        puVar11[0x14] = lVar26;
        _swift_bridgeObjectRetain(lVar26);
      }
      uVar23 = puVar3[0x15];
      uVar24 = puVar3[0x16];
      puVar11[0x15] = uVar23;
      puVar11[0x16] = uVar24;
      uVar28 = puVar3[0x17];
      puVar11[0x17] = uVar28;
      lVar26 = (long)puVar11 + (long)*(int *)(lVar13 + 0x38);
      lVar16 = (long)puVar3 + (long)*(int *)(lVar13 + 0x38);
      lVar17 = 0;
      FUN_104742f28();
      lVar29 = *(long *)(lVar17 + -8);
      pcVar30 = *(code **)(lVar29 + 0x30);
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(uVar24);
      _swift_bridgeObjectRetain(uVar28);
      lVar18 = lVar16;
      (*pcVar30)(lVar16,1,lVar17);
      if ((int)lVar18 == 0) {
        lVar18 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar18 + -8) + 0x10))(lVar26,lVar16,lVar18);
        puVar3 = (undefined8 *)(lVar26 + *(int *)(lVar17 + 0x14));
        puVar14 = (undefined8 *)(lVar16 + *(int *)(lVar17 + 0x14));
        uVar23 = puVar14[1];
        *puVar3 = *puVar14;
        puVar3[1] = uVar23;
        *(undefined1 *)(lVar26 + *(int *)(lVar17 + 0x18)) =
             *(undefined1 *)(lVar16 + *(int *)(lVar17 + 0x18));
        *(undefined1 *)(lVar26 + *(int *)(lVar17 + 0x1c)) =
             *(undefined1 *)(lVar16 + *(int *)(lVar17 + 0x1c));
        puVar3 = (undefined8 *)(lVar26 + *(int *)(lVar17 + 0x20));
        puVar14 = (undefined8 *)(lVar16 + *(int *)(lVar17 + 0x20));
        *puVar3 = *puVar14;
        *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar14 + 1);
        *(undefined1 *)(lVar26 + *(int *)(lVar17 + 0x24)) =
             *(undefined1 *)(lVar16 + *(int *)(lVar17 + 0x24));
        pcVar30 = *(code **)(lVar29 + 0x38);
        _swift_bridgeObjectRetain();
        (*pcVar30)(lVar26,0,1,lVar17);
      }
      else {
        lVar18 = 0x112dcbf00;
        func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
        _memcpy(lVar26,lVar16,*(undefined8 *)(*(long *)(lVar18 + -8) + 0x40));
      }
      (**(code **)(lVar22 + 0x38))(puVar11,0,1,lVar13);
    }
    else {
      lVar13 = 0x112db3cd8;
      func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
      _memcpy(puVar11,puVar3,*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
    }
    puVar11 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar25 + 0x1c));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar25 + 0x1c));
    lVar13 = 0;
    FUN_10475cf44();
    lVar22 = *(long *)(lVar13 + -8);
    puVar14 = puVar3;
    (**(code **)(lVar22 + 0x30))(puVar3,1,lVar13);
    if ((int)puVar14 == 0) {
      uVar23 = puVar3[1];
      *puVar11 = *puVar3;
      puVar11[1] = uVar23;
      uVar23 = puVar3[2];
      uVar24 = puVar3[3];
      _swift_bridgeObjectRetain();
      func_0x00010006c00c(uVar23,uVar24);
      puVar11[2] = uVar23;
      puVar11[3] = uVar24;
      puVar14 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar13 + 0x18));
      puVar4 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar13 + 0x18));
      puVar15 = puVar4;
      (*pcVar20)(puVar4,1,lVar12);
      if ((int)puVar15 == 0) {
        uVar23 = puVar4[1];
        *puVar14 = *puVar4;
        puVar14[1] = uVar23;
        uVar23 = puVar4[3];
        puVar14[2] = puVar4[2];
        puVar14[3] = uVar23;
        uVar24 = puVar4[5];
        puVar14[4] = puVar4[4];
        puVar14[5] = uVar24;
        uVar28 = puVar4[7];
        puVar14[6] = puVar4[6];
        puVar14[7] = uVar28;
        puVar14[8] = puVar4[8];
        lVar26 = puVar4[0xf];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar23);
        _swift_bridgeObjectRetain(uVar24);
        _swift_bridgeObjectRetain(uVar28);
        if (lVar26 == 1) {
          uVar23 = puVar4[9];
          puVar14[10] = puVar4[10];
          puVar14[9] = uVar23;
          uVar23 = puVar4[0xb];
          puVar14[0xc] = puVar4[0xc];
          puVar14[0xb] = uVar23;
          uVar23 = puVar4[0xd];
          puVar14[0xe] = puVar4[0xe];
          puVar14[0xd] = uVar23;
          puVar14[0xf] = puVar4[0xf];
        }
        else {
          lVar16 = puVar4[0xb];
          if (lVar16 == 1) {
            uVar23 = puVar4[9];
            puVar14[10] = puVar4[10];
            puVar14[9] = uVar23;
            uVar23 = puVar4[0xb];
            puVar14[0xc] = puVar4[0xc];
            puVar14[0xb] = uVar23;
            puVar14[0xd] = puVar4[0xd];
          }
          else {
            uVar23 = puVar4[9];
            puVar14[10] = puVar4[10];
            puVar14[9] = uVar23;
            uVar23 = puVar4[0xc];
            uVar24 = puVar4[0xd];
            puVar14[0xb] = lVar16;
            puVar14[0xc] = uVar23;
            puVar14[0xd] = uVar24;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar24);
          }
          puVar14[0xe] = puVar4[0xe];
          puVar14[0xf] = lVar26;
          _swift_bridgeObjectRetain(lVar26);
        }
        uVar23 = puVar4[0x11];
        puVar14[0x10] = puVar4[0x10];
        puVar14[0x11] = uVar23;
        uVar24 = puVar4[0x13];
        puVar14[0x12] = puVar4[0x12];
        puVar14[0x13] = uVar24;
        lVar26 = (long)puVar14 + (long)*(int *)(lVar12 + 0x34);
        lVar16 = (long)puVar4 + (long)*(int *)(lVar12 + 0x34);
        lVar17 = 0;
        FUN_104742f28();
        lVar29 = *(long *)(lVar17 + -8);
        pcVar20 = *(code **)(lVar29 + 0x30);
        _swift_bridgeObjectRetain(uVar23);
        _swift_bridgeObjectRetain(uVar24);
        lVar18 = lVar16;
        (*pcVar20)(lVar16,1,lVar17);
        if ((int)lVar18 == 0) {
          lVar18 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar18 + -8) + 0x10))(lVar26,lVar16,lVar18);
          puVar15 = (undefined8 *)(lVar26 + *(int *)(lVar17 + 0x14));
          puVar5 = (undefined8 *)(lVar16 + *(int *)(lVar17 + 0x14));
          uVar23 = puVar5[1];
          *puVar15 = *puVar5;
          puVar15[1] = uVar23;
          *(undefined1 *)(lVar26 + *(int *)(lVar17 + 0x18)) =
               *(undefined1 *)(lVar16 + *(int *)(lVar17 + 0x18));
          *(undefined1 *)(lVar26 + *(int *)(lVar17 + 0x1c)) =
               *(undefined1 *)(lVar16 + *(int *)(lVar17 + 0x1c));
          puVar15 = (undefined8 *)(lVar26 + *(int *)(lVar17 + 0x20));
          puVar5 = (undefined8 *)(lVar16 + *(int *)(lVar17 + 0x20));
          *puVar15 = *puVar5;
          *(undefined1 *)(puVar15 + 1) = *(undefined1 *)(puVar5 + 1);
          *(undefined1 *)(lVar26 + *(int *)(lVar17 + 0x24)) =
               *(undefined1 *)(lVar16 + *(int *)(lVar17 + 0x24));
          pcVar20 = *(code **)(lVar29 + 0x38);
          _swift_bridgeObjectRetain();
          (*pcVar20)(lVar26,0,1,lVar17);
        }
        else {
          lVar18 = 0x112dcbf00;
          func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
          _memcpy(lVar26,lVar16,*(undefined8 *)(*(long *)(lVar18 + -8) + 0x40));
        }
        puVar15 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar12 + 0x38));
        puVar4 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar12 + 0x38));
        uVar23 = *puVar4;
        puVar15[1] = puVar4[1];
        *puVar15 = uVar23;
        uVar23 = *(undefined8 *)((long)puVar4 + 9);
        *(undefined8 *)((long)puVar15 + 0x11) = *(undefined8 *)((long)puVar4 + 0x11);
        *(undefined8 *)((long)puVar15 + 9) = uVar23;
        (**(code **)(lVar19 + 0x38))(puVar14,0,1);
      }
      else {
        lVar12 = 0x112db3ce0;
        func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
        _memcpy(puVar14,puVar4,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
      }
      puVar14 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar13 + 0x1c));
      puVar3 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar13 + 0x1c));
      if (puVar3[0x18] == 1) {
        _memcpy(puVar14,puVar3,0x260);
      }
      else {
        lVar12 = puVar3[1];
        if (lVar12 == 1) {
          uVar23 = *puVar3;
          puVar14[1] = puVar3[1];
          *puVar14 = uVar23;
          puVar14[2] = puVar3[2];
        }
        else {
          *puVar14 = *puVar3;
          puVar14[1] = lVar12;
          uVar23 = puVar3[2];
          puVar14[2] = uVar23;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar23);
        }
        uVar27 = puVar3[5];
        if (uVar27 >> 0x3c == 0xb) {
          uVar23 = puVar3[3];
          puVar14[4] = puVar3[4];
          puVar14[3] = uVar23;
          puVar14[5] = puVar3[5];
        }
        else {
          puVar14[3] = puVar3[3];
          if (uVar27 >> 0x3c < 0xf) {
            uVar23 = puVar3[4];
            func_0x00010006c00c(uVar23,uVar27);
            puVar14[4] = uVar23;
            puVar14[5] = uVar27;
          }
          else {
            uVar23 = puVar3[4];
            puVar14[5] = puVar3[5];
            puVar14[4] = uVar23;
          }
        }
        *(undefined2 *)(puVar14 + 6) = *(undefined2 *)(puVar3 + 6);
        puVar14[7] = puVar3[7];
        lVar12 = puVar3[9];
        if (lVar12 == 1) {
          uVar23 = puVar3[0x10];
          uVar28 = puVar3[0x13];
          uVar24 = puVar3[0x12];
          puVar14[0x11] = puVar3[0x11];
          puVar14[0x10] = uVar23;
          puVar14[0x13] = uVar28;
          puVar14[0x12] = uVar24;
          uVar23 = puVar3[0x14];
          puVar14[0x15] = puVar3[0x15];
          puVar14[0x14] = uVar23;
          uVar23 = *(undefined8 *)((long)puVar3 + 0xaa);
          *(undefined8 *)((long)puVar14 + 0xb2) = *(undefined8 *)((long)puVar3 + 0xb2);
          *(undefined8 *)((long)puVar14 + 0xaa) = uVar23;
          uVar23 = puVar3[8];
          uVar28 = puVar3[0xb];
          uVar24 = puVar3[10];
          puVar14[9] = puVar3[9];
          puVar14[8] = uVar23;
          puVar14[0xb] = uVar28;
          puVar14[10] = uVar24;
          uVar23 = puVar3[0xc];
          uVar28 = puVar3[0xf];
          uVar24 = puVar3[0xe];
          puVar14[0xd] = puVar3[0xd];
          puVar14[0xc] = uVar23;
          puVar14[0xf] = uVar28;
          puVar14[0xe] = uVar24;
        }
        else {
          puVar14[8] = puVar3[8];
          puVar14[9] = lVar12;
          uVar6 = puVar3[0xb];
          puVar14[10] = puVar3[10];
          puVar14[0xb] = uVar6;
          uVar23 = puVar3[0xc];
          uVar24 = puVar3[0xd];
          puVar14[0xc] = uVar23;
          puVar14[0xd] = uVar24;
          uVar24 = puVar3[0xe];
          uVar28 = puVar3[0xf];
          puVar14[0xe] = uVar24;
          puVar14[0xf] = uVar28;
          uVar28 = puVar3[0x10];
          uVar7 = puVar3[0x11];
          puVar14[0x10] = uVar28;
          puVar14[0x11] = uVar7;
          lVar12 = puVar3[0x13];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar6);
          _swift_bridgeObjectRetain(uVar23);
          _swift_bridgeObjectRetain(uVar24);
          _swift_bridgeObjectRetain(uVar28);
          _swift_bridgeObjectRetain(uVar7);
          if (lVar12 == 1) {
            uVar23 = puVar3[0x12];
            puVar14[0x13] = puVar3[0x13];
            puVar14[0x12] = uVar23;
          }
          else {
            puVar14[0x12] = puVar3[0x12];
            puVar14[0x13] = lVar12;
            _swift_bridgeObjectRetain(lVar12);
          }
          uVar23 = puVar3[0x15];
          puVar14[0x14] = puVar3[0x14];
          puVar14[0x15] = uVar23;
          puVar14[0x16] = puVar3[0x16];
          *(undefined2 *)(puVar14 + 0x17) = *(undefined2 *)(puVar3 + 0x17);
          _swift_bridgeObjectRetain();
        }
        *(undefined2 *)((long)puVar14 + 0xba) = *(undefined2 *)((long)puVar3 + 0xba);
        if (puVar3[0x18] == 0) {
          lVar12 = puVar3[0x18];
          uVar24 = puVar3[0x1b];
          uVar23 = puVar3[0x1a];
          puVar14[0x19] = puVar3[0x19];
          puVar14[0x18] = lVar12;
          puVar14[0x1b] = uVar24;
          puVar14[0x1a] = uVar23;
          uVar23 = puVar3[0x1c];
          uVar28 = puVar3[0x1f];
          uVar24 = puVar3[0x1e];
          puVar14[0x1d] = puVar3[0x1d];
          puVar14[0x1c] = uVar23;
          puVar14[0x1f] = uVar28;
          puVar14[0x1e] = uVar24;
        }
        else {
          puVar14[0x18] = puVar3[0x18];
          uVar23 = puVar3[0x19];
          puVar14[0x1a] = puVar3[0x1a];
          puVar14[0x19] = uVar23;
          uVar23 = puVar3[0x1c];
          puVar14[0x1b] = puVar3[0x1b];
          puVar14[0x1c] = uVar23;
          lVar12 = puVar3[0x1e];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar23);
          if (lVar12 == 0) {
            uVar23 = puVar3[0x1d];
            puVar14[0x1e] = puVar3[0x1e];
            puVar14[0x1d] = uVar23;
            puVar14[0x1f] = puVar3[0x1f];
          }
          else {
            puVar14[0x1d] = puVar3[0x1d];
            puVar14[0x1e] = lVar12;
            uVar23 = puVar3[0x1f];
            puVar14[0x1f] = uVar23;
            _swift_bridgeObjectRetain(lVar12);
            _swift_bridgeObjectRetain(uVar23);
          }
        }
        *(undefined1 *)(puVar14 + 0x20) = *(undefined1 *)(puVar3 + 0x20);
        uVar23 = puVar3[0x22];
        puVar14[0x21] = puVar3[0x21];
        puVar14[0x22] = uVar23;
        uVar23 = puVar3[0x24];
        puVar14[0x23] = puVar3[0x23];
        puVar14[0x24] = uVar23;
        uVar24 = puVar3[0x25];
        puVar14[0x26] = puVar3[0x26];
        puVar14[0x25] = uVar24;
        uVar24 = *(undefined8 *)((long)puVar3 + 0x132);
        *(undefined8 *)((long)puVar14 + 0x13a) = *(undefined8 *)((long)puVar3 + 0x13a);
        *(undefined8 *)((long)puVar14 + 0x132) = uVar24;
        lVar12 = puVar3[0x2a];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar23);
        if (lVar12 == 0) {
          uVar23 = puVar3[0x29];
          uVar28 = puVar3[0x2c];
          uVar24 = puVar3[0x2b];
          puVar14[0x2a] = puVar3[0x2a];
          puVar14[0x29] = uVar23;
          puVar14[0x2c] = uVar28;
          puVar14[0x2b] = uVar24;
        }
        else {
          puVar14[0x29] = puVar3[0x29];
          puVar14[0x2a] = lVar12;
          uVar23 = puVar3[0x2c];
          puVar14[0x2b] = puVar3[0x2b];
          puVar14[0x2c] = uVar23;
          _swift_bridgeObjectRetain(lVar12);
          _swift_bridgeObjectRetain(uVar23);
        }
        uVar23 = puVar3[0x2e];
        puVar14[0x2d] = puVar3[0x2d];
        puVar14[0x2e] = uVar23;
        uVar23 = puVar3[0x2f];
        uVar24 = puVar3[0x30];
        *(undefined1 *)(puVar14 + 0x31) = *(undefined1 *)(puVar3 + 0x31);
        uVar27 = puVar3[0x36];
        uVar10 = *(uint5 *)(puVar3 + 0x39);
        puVar14[0x2f] = uVar23;
        puVar14[0x30] = uVar24;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar24);
        if ((((uVar27 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
           (((ulong)uVar10 & 0xfefefefefefefefe) == 0x6fefefefe)) {
          uVar23 = puVar3[0x32];
          uVar28 = puVar3[0x35];
          uVar24 = puVar3[0x34];
          puVar14[0x33] = puVar3[0x33];
          puVar14[0x32] = uVar23;
          puVar14[0x35] = uVar28;
          puVar14[0x34] = uVar24;
          uVar23 = puVar3[0x36];
          puVar14[0x37] = puVar3[0x37];
          puVar14[0x36] = uVar23;
          uVar23 = *(undefined8 *)((long)puVar3 + 0x1bd);
          *(undefined8 *)((long)puVar14 + 0x1c5) = *(undefined8 *)((long)puVar3 + 0x1c5);
          *(undefined8 *)((long)puVar14 + 0x1bd) = uVar23;
        }
        else {
          uVar23 = puVar3[0x32];
          uVar6 = puVar3[0x33];
          uVar24 = puVar3[0x34];
          uVar7 = puVar3[0x35];
          uVar28 = puVar3[0x37];
          uVar8 = puVar3[0x38];
          func_0x00010179a2b8(uVar23,uVar6,uVar24,uVar7,uVar27,uVar28,uVar8,(ulong)uVar10);
          puVar14[0x32] = uVar23;
          puVar14[0x33] = uVar6;
          puVar14[0x34] = uVar24;
          puVar14[0x35] = uVar7;
          puVar14[0x36] = uVar27;
          puVar14[0x37] = uVar28;
          puVar14[0x38] = uVar8;
          *(char *)((long)puVar14 + 0x1cc) = (char)(uVar10 >> 0x20);
          *(int *)(puVar14 + 0x39) = (int)uVar10;
        }
        *(undefined1 *)((long)puVar14 + 0x1cd) = *(undefined1 *)((long)puVar3 + 0x1cd);
        uVar23 = puVar3[0x3b];
        puVar14[0x3a] = puVar3[0x3a];
        puVar14[0x3b] = uVar23;
        *(undefined1 *)(puVar14 + 0x3c) = *(undefined1 *)(puVar3 + 0x3c);
        lVar12 = puVar3[0x3e];
        _swift_bridgeObjectRetain();
        if (lVar12 == 0) {
          uVar23 = puVar3[0x3d];
          uVar28 = puVar3[0x40];
          uVar24 = puVar3[0x3f];
          puVar14[0x3e] = puVar3[0x3e];
          puVar14[0x3d] = uVar23;
          puVar14[0x40] = uVar28;
          puVar14[0x3f] = uVar24;
          uVar23 = puVar3[0x41];
          puVar14[0x42] = puVar3[0x42];
          puVar14[0x41] = uVar23;
        }
        else {
          puVar14[0x3d] = puVar3[0x3d];
          puVar14[0x3e] = lVar12;
          uVar23 = puVar3[0x40];
          puVar14[0x3f] = puVar3[0x3f];
          puVar14[0x40] = uVar23;
          puVar14[0x41] = puVar3[0x41];
          uVar24 = puVar3[0x42];
          puVar14[0x42] = uVar24;
          _swift_bridgeObjectRetain(lVar12);
          _swift_bridgeObjectRetain(uVar23);
          _swift_bridgeObjectRetain(uVar24);
        }
        *(undefined1 *)(puVar14 + 0x43) = *(undefined1 *)(puVar3 + 0x43);
        lVar12 = puVar3[0x45];
        if (lVar12 == 0) {
          uVar23 = puVar3[0x44];
          uVar28 = puVar3[0x47];
          uVar24 = puVar3[0x46];
          puVar14[0x45] = puVar3[0x45];
          puVar14[0x44] = uVar23;
          puVar14[0x47] = uVar28;
          puVar14[0x46] = uVar24;
          uVar23 = puVar3[0x48];
          puVar14[0x49] = puVar3[0x49];
          puVar14[0x48] = uVar23;
          puVar14[0x4a] = puVar3[0x4a];
        }
        else {
          puVar14[0x44] = puVar3[0x44];
          puVar14[0x45] = lVar12;
          puVar14[0x46] = puVar3[0x46];
          uVar23 = puVar3[0x47];
          puVar14[0x47] = uVar23;
          puVar14[0x48] = puVar3[0x48];
          uVar24 = puVar3[0x49];
          puVar14[0x49] = uVar24;
          puVar14[0x4a] = puVar3[0x4a];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar23);
          _swift_bridgeObjectRetain(uVar24);
        }
        puVar14[0x4b] = puVar3[0x4b];
        _swift_bridgeObjectRetain();
      }
      (**(code **)(lVar22 + 0x38))(puVar11,0,1,lVar13);
    }
    else {
      lVar12 = 0x112db3cc8;
      func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
      _memcpy(puVar11,puVar3,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
    }
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar25 + 0x20)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar25 + 0x20));
    (**(code **)(lVar21 + 0x38))(puVar1,0,1,lVar25);
  }
  else {
    lVar25 = 0x112db3e90;
    func_0x0001000285a8(0x112db3e90,&UNK_10d95e3e0);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar25 + -8) + 0x40));
  }
  iVar9 = *(int *)(param_3 + 0x1c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar23 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar23;
  *(undefined8 *)((long)param_1 + (long)iVar9) = *(undefined8 *)((long)param_2 + (long)iVar9);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10472c7cc; end: 10472c807;  */

undefined8 FUN_10472c7cc(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10472c808; end: 10472f3f7;  */

undefined8 * FUN_10472c808(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  uVar22 = *param_2;
  uVar24 = param_2[3];
  uVar23 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar22;
  param_1[3] = uVar24;
  param_1[2] = uVar23;
  uVar22 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar22;
  param_1[6] = param_2[6];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  lVar7 = 0;
  FUN_10472f4dc();
  lVar20 = *(long *)(lVar7 + -8);
  puVar8 = puVar2;
  (**(code **)(lVar20 + 0x30))(puVar2,1,lVar7);
  if ((int)puVar8 == 0) {
    lVar9 = 0;
    FUN_104739264();
    lVar17 = *(long *)(lVar9 + -8);
    pcVar18 = *(code **)(lVar17 + 0x30);
    puVar8 = puVar2;
    (*pcVar18)(puVar2,1,lVar9);
    if ((int)puVar8 == 0) {
      uVar22 = *puVar2;
      uVar24 = puVar2[3];
      uVar23 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar22;
      puVar1[3] = uVar24;
      puVar1[2] = uVar23;
      uVar22 = puVar2[4];
      uVar24 = puVar2[7];
      uVar23 = puVar2[6];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar22;
      puVar1[7] = uVar24;
      puVar1[6] = uVar23;
      puVar1[8] = puVar2[8];
      puVar1[0xf] = puVar2[0xf];
      uVar22 = puVar2[0xd];
      puVar1[0xe] = puVar2[0xe];
      puVar1[0xd] = uVar22;
      uVar22 = puVar2[0xb];
      puVar1[0xc] = puVar2[0xc];
      puVar1[0xb] = uVar22;
      uVar22 = puVar2[9];
      puVar1[10] = puVar2[10];
      puVar1[9] = uVar22;
      uVar22 = puVar2[0x10];
      uVar24 = puVar2[0x13];
      uVar23 = puVar2[0x12];
      puVar1[0x11] = puVar2[0x11];
      puVar1[0x10] = uVar22;
      puVar1[0x13] = uVar24;
      puVar1[0x12] = uVar23;
      lVar12 = (long)puVar1 + (long)*(int *)(lVar9 + 0x34);
      lVar21 = (long)puVar2 + (long)*(int *)(lVar9 + 0x34);
      lVar10 = 0;
      FUN_104742f28();
      lVar16 = *(long *)(lVar10 + -8);
      lVar11 = lVar21;
      (**(code **)(lVar16 + 0x30))(lVar21,1,lVar10);
      if ((int)lVar11 == 0) {
        lVar11 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar11 + -8) + 0x20))(lVar12,lVar21,lVar11);
        puVar8 = (undefined8 *)(lVar21 + *(int *)(lVar10 + 0x14));
        uVar22 = *puVar8;
        puVar3 = (undefined8 *)(lVar12 + *(int *)(lVar10 + 0x14));
        puVar3[1] = puVar8[1];
        *puVar3 = uVar22;
        *(undefined1 *)(lVar12 + *(int *)(lVar10 + 0x18)) =
             *(undefined1 *)(lVar21 + *(int *)(lVar10 + 0x18));
        *(undefined1 *)(lVar12 + *(int *)(lVar10 + 0x1c)) =
             *(undefined1 *)(lVar21 + *(int *)(lVar10 + 0x1c));
        puVar8 = (undefined8 *)(lVar12 + *(int *)(lVar10 + 0x20));
        puVar3 = (undefined8 *)(lVar21 + *(int *)(lVar10 + 0x20));
        *puVar8 = *puVar3;
        *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar3 + 1);
        *(undefined1 *)(lVar12 + *(int *)(lVar10 + 0x24)) =
             *(undefined1 *)(lVar21 + *(int *)(lVar10 + 0x24));
        (**(code **)(lVar16 + 0x38))(lVar12,0,1,lVar10);
      }
      else {
        lVar11 = 0x112dcbf00;
        func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
        _memcpy(lVar12,lVar21,*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
      }
      puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x38));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x38));
      uVar22 = *puVar3;
      puVar8[1] = puVar3[1];
      *puVar8 = uVar22;
      uVar22 = *(undefined8 *)((long)puVar3 + 9);
      *(undefined8 *)((long)puVar8 + 0x11) = *(undefined8 *)((long)puVar3 + 0x11);
      *(undefined8 *)((long)puVar8 + 9) = uVar22;
      (**(code **)(lVar17 + 0x38))(puVar1,0,1);
    }
    else {
      lVar12 = 0x112db3ce0;
      func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
    }
    _memcpy((long)puVar1 + (long)*(int *)(lVar7 + 0x14),(long)puVar2 + (long)*(int *)(lVar7 + 0x14),
            0x260);
    puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x18));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x18));
    lVar12 = 0;
    FUN_10470fbcc();
    lVar21 = *(long *)(lVar12 + -8);
    puVar13 = puVar3;
    (**(code **)(lVar21 + 0x30))(puVar3,1,lVar12);
    if ((int)puVar13 == 0) {
      uVar22 = *puVar3;
      uVar24 = puVar3[3];
      uVar23 = puVar3[2];
      puVar8[1] = puVar3[1];
      *puVar8 = uVar22;
      puVar8[3] = uVar24;
      puVar8[2] = uVar23;
      uVar22 = puVar3[4];
      uVar24 = puVar3[7];
      uVar23 = puVar3[6];
      puVar8[5] = puVar3[5];
      puVar8[4] = uVar22;
      puVar8[7] = uVar24;
      puVar8[6] = uVar23;
      uVar22 = puVar3[8];
      puVar8[9] = puVar3[9];
      puVar8[8] = uVar22;
      puVar8[10] = puVar3[10];
      uVar22 = puVar3[0xb];
      puVar8[0xc] = puVar3[0xc];
      puVar8[0xb] = uVar22;
      uVar22 = *(undefined8 *)((long)puVar3 + 0x61);
      *(undefined8 *)((long)puVar8 + 0x69) = *(undefined8 *)((long)puVar3 + 0x69);
      *(undefined8 *)((long)puVar8 + 0x61) = uVar22;
      uVar22 = puVar3[0xf];
      puVar8[0x10] = puVar3[0x10];
      puVar8[0xf] = uVar22;
      *(undefined1 *)(puVar8 + 0x11) = *(undefined1 *)(puVar3 + 0x11);
      uVar22 = puVar3[0x12];
      puVar8[0x13] = puVar3[0x13];
      puVar8[0x12] = uVar22;
      puVar8[0x14] = puVar3[0x14];
      uVar22 = puVar3[0x15];
      puVar8[0x16] = puVar3[0x16];
      puVar8[0x15] = uVar22;
      puVar8[0x17] = puVar3[0x17];
      lVar11 = (long)puVar8 + (long)*(int *)(lVar12 + 0x38);
      lVar10 = (long)puVar3 + (long)*(int *)(lVar12 + 0x38);
      lVar15 = 0;
      FUN_104742f28();
      lVar19 = *(long *)(lVar15 + -8);
      lVar16 = lVar10;
      (**(code **)(lVar19 + 0x30))(lVar10,1,lVar15);
      if ((int)lVar16 == 0) {
        lVar16 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar16 + -8) + 0x20))(lVar11,lVar10,lVar16);
        puVar3 = (undefined8 *)(lVar10 + *(int *)(lVar15 + 0x14));
        uVar22 = *puVar3;
        puVar13 = (undefined8 *)(lVar11 + *(int *)(lVar15 + 0x14));
        puVar13[1] = puVar3[1];
        *puVar13 = uVar22;
        *(undefined1 *)(lVar11 + *(int *)(lVar15 + 0x18)) =
             *(undefined1 *)(lVar10 + *(int *)(lVar15 + 0x18));
        *(undefined1 *)(lVar11 + *(int *)(lVar15 + 0x1c)) =
             *(undefined1 *)(lVar10 + *(int *)(lVar15 + 0x1c));
        puVar3 = (undefined8 *)(lVar11 + *(int *)(lVar15 + 0x20));
        puVar13 = (undefined8 *)(lVar10 + *(int *)(lVar15 + 0x20));
        *puVar3 = *puVar13;
        *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar13 + 1);
        *(undefined1 *)(lVar11 + *(int *)(lVar15 + 0x24)) =
             *(undefined1 *)(lVar10 + *(int *)(lVar15 + 0x24));
        (**(code **)(lVar19 + 0x38))(lVar11,0,1,lVar15);
      }
      else {
        lVar16 = 0x112dcbf00;
        func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
        _memcpy(lVar11,lVar10,*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
      }
      (**(code **)(lVar21 + 0x38))(puVar8,0,1,lVar12);
    }
    else {
      lVar12 = 0x112db3cd8;
      func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
      _memcpy(puVar8,puVar3,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
    }
    puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x1c));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x1c));
    lVar12 = 0;
    FUN_10475cf44();
    lVar21 = *(long *)(lVar12 + -8);
    puVar13 = puVar3;
    (**(code **)(lVar21 + 0x30))(puVar3,1,lVar12);
    if ((int)puVar13 == 0) {
      uVar22 = *puVar3;
      uVar24 = puVar3[3];
      uVar23 = puVar3[2];
      puVar8[1] = puVar3[1];
      *puVar8 = uVar22;
      puVar8[3] = uVar24;
      puVar8[2] = uVar23;
      puVar13 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar12 + 0x18));
      puVar4 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x18));
      puVar14 = puVar4;
      (*pcVar18)(puVar4,1,lVar9);
      if ((int)puVar14 == 0) {
        uVar22 = *puVar4;
        uVar24 = puVar4[3];
        uVar23 = puVar4[2];
        puVar13[1] = puVar4[1];
        *puVar13 = uVar22;
        puVar13[3] = uVar24;
        puVar13[2] = uVar23;
        uVar22 = puVar4[4];
        uVar24 = puVar4[7];
        uVar23 = puVar4[6];
        puVar13[5] = puVar4[5];
        puVar13[4] = uVar22;
        puVar13[7] = uVar24;
        puVar13[6] = uVar23;
        puVar13[8] = puVar4[8];
        puVar13[0xf] = puVar4[0xf];
        uVar22 = puVar4[0xd];
        puVar13[0xe] = puVar4[0xe];
        puVar13[0xd] = uVar22;
        uVar22 = puVar4[0xb];
        puVar13[0xc] = puVar4[0xc];
        puVar13[0xb] = uVar22;
        uVar22 = puVar4[9];
        puVar13[10] = puVar4[10];
        puVar13[9] = uVar22;
        uVar22 = puVar4[0x10];
        uVar24 = puVar4[0x13];
        uVar23 = puVar4[0x12];
        puVar13[0x11] = puVar4[0x11];
        puVar13[0x10] = uVar22;
        puVar13[0x13] = uVar24;
        puVar13[0x12] = uVar23;
        lVar11 = (long)puVar13 + (long)*(int *)(lVar9 + 0x34);
        lVar10 = (long)puVar4 + (long)*(int *)(lVar9 + 0x34);
        lVar15 = 0;
        FUN_104742f28();
        lVar19 = *(long *)(lVar15 + -8);
        lVar16 = lVar10;
        (**(code **)(lVar19 + 0x30))(lVar10,1);
        if ((int)lVar16 == 0) {
          lVar16 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar16 + -8) + 0x20))(lVar11,lVar10,lVar16);
          puVar14 = (undefined8 *)(lVar10 + *(int *)(lVar15 + 0x14));
          uVar22 = *puVar14;
          puVar6 = (undefined8 *)(lVar11 + *(int *)(lVar15 + 0x14));
          puVar6[1] = puVar14[1];
          *puVar6 = uVar22;
          *(undefined1 *)(lVar11 + *(int *)(lVar15 + 0x18)) =
               *(undefined1 *)(lVar10 + *(int *)(lVar15 + 0x18));
          *(undefined1 *)(lVar11 + *(int *)(lVar15 + 0x1c)) =
               *(undefined1 *)(lVar10 + *(int *)(lVar15 + 0x1c));
          puVar14 = (undefined8 *)(lVar11 + *(int *)(lVar15 + 0x20));
          puVar6 = (undefined8 *)(lVar10 + *(int *)(lVar15 + 0x20));
          *puVar14 = *puVar6;
          *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar6 + 1);
          *(undefined1 *)(lVar11 + *(int *)(lVar15 + 0x24)) =
               *(undefined1 *)(lVar10 + *(int *)(lVar15 + 0x24));
          (**(code **)(lVar19 + 0x38))(lVar11,0,1);
        }
        else {
          lVar16 = 0x112dcbf00;
          func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
          _memcpy(lVar11,lVar10,*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
        }
        puVar14 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar9 + 0x38));
        puVar4 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar9 + 0x38));
        uVar22 = *puVar4;
        puVar14[1] = puVar4[1];
        *puVar14 = uVar22;
        uVar22 = *(undefined8 *)((long)puVar4 + 9);
        *(undefined8 *)((long)puVar14 + 0x11) = *(undefined8 *)((long)puVar4 + 0x11);
        *(undefined8 *)((long)puVar14 + 9) = uVar22;
        (**(code **)(lVar17 + 0x38))(puVar13,0,1);
      }
      else {
        lVar9 = 0x112db3ce0;
        func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
        _memcpy(puVar13,puVar4,*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
      }
      _memcpy((long)puVar8 + (long)*(int *)(lVar12 + 0x1c),
              (long)puVar3 + (long)*(int *)(lVar12 + 0x1c),0x260);
      (**(code **)(lVar21 + 0x38))(puVar8,0,1,lVar12);
    }
    else {
      lVar9 = 0x112db3cc8;
      func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
      _memcpy(puVar8,puVar3,*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    }
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x20)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x20));
    (**(code **)(lVar20 + 0x38))(puVar1,0,1,lVar7);
  }
  else {
    lVar7 = 0x112db3e90;
    func_0x0001000285a8(0x112db3e90,&UNK_10d95e3e0);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  }
  iVar5 = *(int *)(param_3 + 0x1c);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar22 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar22;
  *(undefined8 *)((long)param_1 + (long)iVar5) = *(undefined8 *)((long)param_2 + (long)iVar5);
  return param_1;
}



/* Entry: 10472f3f8; end: 10472f40f;  */

void FUN_10472f3f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10472f410; end: 10472f4db;  */

void FUN_10472f410(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_40 = &UNK_10dd317f8;
  lVar1 = 0x13f;
  func_0x0001047239bc();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10dd31810;
    puStack_28 = PTR___sBi64_WV_11034d670 + 0x40;
    _swift_initStructMetadata(param_1,0x100,4,&puStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 10472f4dc; end: 10472f513;  */

void FUN_10472f4dc(undefined8 param_1)

{
  if (lRam000000011308e308 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e81a0c8);
  return;
}



/* Entry: 10472f514; end: 10472f55b;  */

undefined8 FUN_10472f514(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10472f55c; end: 10472f55f;  */

bool FUN_10472f55c(long param_1,long param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  long extraout_x8_01;
  undefined1 *puVar10;
  long extraout_x8_02;
  long lVar11;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long lVar12;
  code *pcVar13;
  long lVar14;
  undefined1 auStack_18a0 [8];
  undefined1 *puStack_1898;
  ulong uStack_1890;
  long lStack_1888;
  long lStack_1880;
  long lStack_1878;
  long lStack_1870;
  undefined1 *puStack_1868;
  ulong uStack_1860;
  long lStack_1858;
  long lStack_1850;
  long lStack_1848;
  undefined1 *puStack_1840;
  long lStack_1838;
  long lStack_1830;
  undefined1 auStack_1828 [608];
  undefined1 auStack_15c8 [608];
  undefined1 auStack_1368 [608];
  undefined1 auStack_1108 [1216];
  undefined1 auStack_c48 [608];
  undefined1 auStack_9e8 [608];
  undefined1 auStack_788 [608];
  undefined1 auStack_528 [608];
  undefined1 auStack_2c8 [616];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = 0;
  lStack_1830 = param_2;
  FUN_10475cf44();
  lStack_1878 = *(long *)(lVar4 + -8);
  lStack_1870 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1878 + 0x40));
  lVar4 = 0x112db3cc8;
  puStack_1898 = auStack_18a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar9 = (long)(auStack_18a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar4 = 0x112db3ca0;
  uStack_1890 = uVar9;
  func_0x0001000285a8(0x112db3ca0,&UNK_10d95e200);
  lStack_1880 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined1 *)(uVar9 - extraout_x8_01);
  lVar4 = 0;
  puStack_1868 = puVar10;
  FUN_10470fbcc();
  lStack_1850 = *(long *)(lVar4 + -8);
  lStack_1848 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1850 + 0x40));
  lVar11 = (long)puVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112db3cd8;
  lStack_1888 = lVar11;
  func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar9 = lVar11 - extraout_x8_03;
  lVar4 = 0x112db3cb0;
  uStack_1860 = uVar9;
  func_0x0001000285a8(0x112db3cb0,&UNK_10d95e210);
  lStack_1858 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined1 *)(uVar9 - extraout_x8_04);
  lVar11 = 0;
  puStack_1840 = puVar10;
  FUN_104739264();
  lVar12 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar14 = (long)puVar10 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112db3ce0;
  func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar9 = lVar14 - extraout_x8_06;
  lVar4 = 0x112db3cb8;
  func_0x0001000285a8(0x112db3cb8,&UNK_10dd33f20);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined1 *)(uVar9 - extraout_x8_07);
  iVar3 = *(int *)(lVar4 + 0x30);
  lStack_1838 = param_1;
  FUN_10472f514(param_1,puVar10,0x112db3ce0,&UNK_10d95e240);
  FUN_10472f514(lStack_1830,puVar10 + iVar3,0x112db3ce0,&UNK_10d95e240);
  pcVar13 = *(code **)(lVar12 + 0x30);
  puVar5 = puVar10;
  (*pcVar13)(puVar10,1,lVar11);
  if ((int)puVar5 == 1) {
    puVar5 = puVar10 + iVar3;
    (*pcVar13)(puVar5,1,lVar11);
    if ((int)puVar5 == 1) {
      func_0x000104739048(puVar10,0x112db3ce0,&UNK_10d95e240);
LAB_10472fc08:
      lVar12 = 0;
      FUN_10472f4dc();
      lVar4 = lStack_1838;
      lVar14 = (long)*(int *)(lVar12 + 0x14);
      _memcpy(auStack_788,lStack_1838 + lVar14,0x260);
      _memcpy(auStack_c48,lVar4 + lVar14,0x260);
      lVar11 = lStack_1830;
      _memcpy(auStack_528,lStack_1830 + lVar14,0x260);
      _memcpy(auStack_9e8,lVar11 + lVar14,0x260);
      iVar3 = (int)auStack_c48;
      func_0x0001015538ec();
      if (iVar3 == 1) {
        iVar3 = (int)auStack_9e8;
        func_0x0001015538ec();
        if (iVar3 != 1) {
LAB_10472fd18:
          _memcpy(auStack_1108,auStack_c48,0x4c0);
          FUN_10472f514(auStack_788,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
          FUN_10472f514(auStack_528,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
          uVar7 = 0x112db3d20;
          puVar8 = &UNK_10dd318e0;
          puVar10 = auStack_1108;
          goto LAB_10473008c;
        }
        _memcpy(auStack_1108,auStack_c48,0x260);
        FUN_10472f514(auStack_788,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
        FUN_10472f514(auStack_528,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
        func_0x000104739048(auStack_1108,0x112db3ce8,&UNK_10d98ff60);
      }
      else {
        _memcpy(auStack_1368,auStack_c48,0x260);
        iVar3 = (int)auStack_9e8;
        func_0x0001015538ec();
        if (iVar3 == 1) goto LAB_10472fd18;
        _memcpy(auStack_15c8,auStack_9e8,0x260);
        _memcpy(auStack_1108,auStack_9e8,0x260);
        _memcpy(auStack_2c8,auStack_1368,0x260);
        FUN_10472f514(auStack_788,auStack_1828,0x112db3ce8,&UNK_10d98ff60);
        FUN_10472f514(auStack_528,auStack_1828,0x112db3ce8,&UNK_10d98ff60);
        puVar10 = auStack_2c8;
        func_0x0001047a725c(puVar10,auStack_1108);
        func_0x000104739048(auStack_15c8,0x112db3ce8,&UNK_10d98ff60);
        func_0x000104739048(auStack_c48,0x112db3ce8,&UNK_10d98ff60);
        if (((ulong)puVar10 & 1) == 0) {
          return false;
        }
      }
      puVar10 = puStack_1840;
      iVar3 = *(int *)(lVar12 + 0x18);
      iVar1 = *(int *)(lStack_1858 + 0x30);
      FUN_10472f514(lVar4 + iVar3,puStack_1840,0x112db3cd8,&UNK_10dd317d0);
      FUN_10472f514(lVar11 + iVar3,puVar10 + iVar1,0x112db3cd8,&UNK_10dd317d0);
      lVar14 = lStack_1848;
      pcVar13 = *(code **)(lStack_1850 + 0x30);
      puVar5 = puVar10;
      (*pcVar13)(puVar10,1,lStack_1848);
      uVar9 = uStack_1860;
      if ((int)puVar5 == 1) {
        puVar5 = puVar10 + iVar1;
        (*pcVar13)(puVar5,1,lVar14);
        if ((int)puVar5 == 1) {
          func_0x000104739048(puVar10,0x112db3cd8,&UNK_10dd317d0);
LAB_10472ff90:
          puVar10 = puStack_1868;
          iVar3 = *(int *)(lVar12 + 0x1c);
          iVar1 = *(int *)(lStack_1880 + 0x30);
          FUN_10472f514(lVar4 + iVar3,puStack_1868,0x112db3cc8,&UNK_10d98e570);
          FUN_10472f514(lVar11 + iVar3,puVar10 + iVar1,0x112db3cc8,&UNK_10d98e570);
          lVar14 = lStack_1870;
          pcVar13 = *(code **)(lStack_1878 + 0x30);
          puVar5 = puVar10;
          (*pcVar13)(puVar10,1,lStack_1870);
          uVar9 = uStack_1890;
          if ((int)puVar5 == 1) {
            puVar5 = puVar10 + iVar1;
            (*pcVar13)(puVar5,1,lVar14);
            if ((int)puVar5 == 1) {
              func_0x000104739048(puVar10,0x112db3cc8,&UNK_10d98e570);
LAB_104730114:
              return *(int *)(lVar4 + *(int *)(lVar12 + 0x20)) ==
                     *(int *)(lVar11 + *(int *)(lVar12 + 0x20));
            }
          }
          else {
            FUN_10472f514(puVar10,uStack_1890,0x112db3cc8,&UNK_10d98e570);
            puVar5 = puVar10 + iVar1;
            (*pcVar13)(puVar5,1,lVar14);
            puVar2 = puStack_1898;
            if ((int)puVar5 != 1) {
              func_0x000104739088(puVar10 + iVar1,puStack_1898,FUN_10475cf44);
              uVar6 = uVar9;
              FUN_10475d204(uVar9,puVar2);
              FUN_104736bf4(puVar2,FUN_10475cf44);
              FUN_104736bf4(uVar9,FUN_10475cf44);
              func_0x000104739048(puVar10,0x112db3cc8,&UNK_10d98e570);
              if ((uVar6 & 1) == 0) {
                return false;
              }
              goto LAB_104730114;
            }
            FUN_104736bf4(uVar9,FUN_10475cf44);
          }
          uVar7 = 0x112db3ca0;
          puVar8 = &UNK_10d95e200;
          goto LAB_10473008c;
        }
      }
      else {
        FUN_10472f514(puVar10,uStack_1860,0x112db3cd8,&UNK_10dd317d0);
        puVar5 = puVar10 + iVar1;
        (*pcVar13)(puVar5,1,lVar14);
        lVar14 = lStack_1888;
        if ((int)puVar5 != 1) {
          func_0x000104739088(puVar10 + iVar1,lStack_1888,FUN_10470fbcc);
          uVar6 = uVar9;
          FUN_10470fc4c(uVar9,lVar14);
          FUN_104736bf4(lVar14,FUN_10470fbcc);
          FUN_104736bf4(uVar9,FUN_10470fbcc);
          func_0x000104739048(puVar10,0x112db3cd8,&UNK_10dd317d0);
          if ((uVar6 & 1) == 0) {
            return false;
          }
          goto LAB_10472ff90;
        }
        FUN_104736bf4(uVar9,FUN_10470fbcc);
      }
      uVar7 = 0x112db3cb0;
      puVar8 = &UNK_10d95e210;
      goto LAB_10473008c;
    }
  }
  else {
    FUN_10472f514(puVar10,uVar9,0x112db3ce0,&UNK_10d95e240);
    puVar5 = puVar10 + iVar3;
    (*pcVar13)(puVar5,1,lVar11);
    if ((int)puVar5 != 1) {
      func_0x000104739088(puVar10 + iVar3,lVar14,FUN_104739264);
      uVar6 = uVar9;
      FUN_1047397c8(uVar9,lVar14);
      FUN_104736bf4(lVar14,FUN_104739264);
      FUN_104736bf4(uVar9,FUN_104739264);
      func_0x000104739048(puVar10,0x112db3ce0,&UNK_10d95e240);
      if ((uVar6 & 1) == 0) {
        return false;
      }
      goto LAB_10472fc08;
    }
    FUN_104736bf4(uVar9,FUN_104739264);
  }
  uVar7 = 0x112db3cb8;
  puVar8 = &UNK_10dd33f20;
LAB_10473008c:
  func_0x000104739048(puVar10,uVar7,puVar8);
  return false;
}



/* Entry: 10472f560; end: 10472f7db;  */

void FUN_10472f560(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long alStack_9e0 [76];
  undefined1 auStack_780 [608];
  undefined1 auStack_520 [608];
  undefined1 auStack_2c0 [608];
  
  iVar2 = (int)alStack_9e0;
  lVar4 = 0;
  FUN_10475cf44();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)((long)alStack_9e0 + lVar1);
  lVar5 = 0x112db3cc8;
  func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)puVar7 - extraout_x8_00;
  func_0x0001046cec20(param_1);
  lVar5 = 0;
  FUN_10472f4dc();
  _memcpy(auStack_2c0,unaff_x20 + *(int *)(lVar5 + 0x14),0x260);
  iVar3 = (int)auStack_2c0;
  func_0x0001015538ec();
  if (iVar3 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    _memcpy(auStack_520,auStack_2c0,0x260);
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1047a6974(param_1);
  }
  func_0x0001046cf4d4((long)*(int *)(lVar5 + 0x18),param_1);
  FUN_10472f514(unaff_x20 + *(int *)(lVar5 + 0x1c),lVar8,0x112db3cc8,&UNK_10d98e570);
  lVar6 = lVar8;
  (**(code **)(lVar9 + 0x30))(lVar8,1,lVar4);
  if ((int)lVar6 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x000104739088(lVar8,puVar7,FUN_10475cf44);
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar8 = *(long *)((long)alStack_9e0 + lVar1 + 8);
    if (lVar8 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      uVar10 = *puVar7;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar8);
    }
    __s10Foundation4DataV4hash4intoys6HasherVz_tF
              (param_1,*(undefined8 *)((long)alStack_9e0 + lVar1 + 0x10),
               *(undefined8 *)((long)alStack_9e0 + lVar1 + 0x18));
    func_0x0001046cec20((long)*(int *)(lVar4 + 0x18),param_1);
    _memcpy(alStack_9e0,(long)puVar7 + (long)*(int *)(lVar4 + 0x1c),0x260);
    func_0x0001015538ec();
    if (iVar2 == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      _memcpy(auStack_780,alStack_9e0,0x260);
      __ss6HasherV8_combineyys5UInt8VF(1);
      FUN_1047a6974(param_1);
    }
    FUN_104736bf4(puVar7,FUN_10475cf44);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + *(int *)(lVar5 + 0x20)));
  return;
}



/* Entry: 10472f7dc; end: 10472f817;  */

void FUN_10472f7dc(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_10472f560(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10472f818; end: 10472f81b;  */

void FUN_10472f818(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long alStack_9e0 [76];
  undefined1 auStack_780 [608];
  undefined1 auStack_520 [608];
  undefined1 auStack_2c0 [608];
  
  iVar2 = (int)alStack_9e0;
  lVar4 = 0;
  FUN_10475cf44();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)((long)alStack_9e0 + lVar1);
  lVar5 = 0x112db3cc8;
  func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)puVar7 - extraout_x8_00;
  func_0x0001046cec20(param_1);
  lVar5 = 0;
  FUN_10472f4dc();
  _memcpy(auStack_2c0,unaff_x20 + *(int *)(lVar5 + 0x14),0x260);
  iVar3 = (int)auStack_2c0;
  func_0x0001015538ec();
  if (iVar3 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    _memcpy(auStack_520,auStack_2c0,0x260);
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1047a6974(param_1);
  }
  func_0x0001046cf4d4((long)*(int *)(lVar5 + 0x18),param_1);
  FUN_10472f514(unaff_x20 + *(int *)(lVar5 + 0x1c),lVar8,0x112db3cc8,&UNK_10d98e570);
  lVar6 = lVar8;
  (**(code **)(lVar9 + 0x30))(lVar8,1,lVar4);
  if ((int)lVar6 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x000104739088(lVar8,puVar7,FUN_10475cf44);
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar8 = *(long *)((long)alStack_9e0 + lVar1 + 8);
    if (lVar8 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      uVar10 = *puVar7;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar8);
    }
    __s10Foundation4DataV4hash4intoys6HasherVz_tF
              (param_1,*(undefined8 *)((long)alStack_9e0 + lVar1 + 0x10),
               *(undefined8 *)((long)alStack_9e0 + lVar1 + 0x18));
    func_0x0001046cec20((long)*(int *)(lVar4 + 0x18),param_1);
    _memcpy(alStack_9e0,(long)puVar7 + (long)*(int *)(lVar4 + 0x1c),0x260);
    func_0x0001015538ec();
    if (iVar2 == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      _memcpy(auStack_780,alStack_9e0,0x260);
      __ss6HasherV8_combineyys5UInt8VF(1);
      FUN_1047a6974(param_1);
    }
    FUN_104736bf4(puVar7,FUN_10475cf44);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + *(int *)(lVar5 + 0x20)));
  return;
}



/* Entry: 10472f81c; end: 10472f853;  */

void FUN_10472f81c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_10472f560(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10472f854; end: 10472f857;  */

bool FUN_10472f854(long param_1,long param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  long extraout_x8_01;
  undefined1 *puVar10;
  long extraout_x8_02;
  long lVar11;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long lVar12;
  code *pcVar13;
  long lVar14;
  undefined1 auStack_18a0 [8];
  undefined1 *puStack_1898;
  ulong uStack_1890;
  long lStack_1888;
  long lStack_1880;
  long lStack_1878;
  long lStack_1870;
  undefined1 *puStack_1868;
  ulong uStack_1860;
  long lStack_1858;
  long lStack_1850;
  long lStack_1848;
  undefined1 *puStack_1840;
  long lStack_1838;
  long lStack_1830;
  undefined1 auStack_1828 [608];
  undefined1 auStack_15c8 [608];
  undefined1 auStack_1368 [608];
  undefined1 auStack_1108 [1216];
  undefined1 auStack_c48 [608];
  undefined1 auStack_9e8 [608];
  undefined1 auStack_788 [608];
  undefined1 auStack_528 [608];
  undefined1 auStack_2c8 [616];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = 0;
  lStack_1830 = param_2;
  FUN_10475cf44();
  lStack_1878 = *(long *)(lVar4 + -8);
  lStack_1870 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1878 + 0x40));
  lVar4 = 0x112db3cc8;
  puStack_1898 = auStack_18a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar9 = (long)(auStack_18a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar4 = 0x112db3ca0;
  uStack_1890 = uVar9;
  func_0x0001000285a8(0x112db3ca0,&UNK_10d95e200);
  lStack_1880 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined1 *)(uVar9 - extraout_x8_01);
  lVar4 = 0;
  puStack_1868 = puVar10;
  FUN_10470fbcc();
  lStack_1850 = *(long *)(lVar4 + -8);
  lStack_1848 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1850 + 0x40));
  lVar11 = (long)puVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112db3cd8;
  lStack_1888 = lVar11;
  func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar9 = lVar11 - extraout_x8_03;
  lVar4 = 0x112db3cb0;
  uStack_1860 = uVar9;
  func_0x0001000285a8(0x112db3cb0,&UNK_10d95e210);
  lStack_1858 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined1 *)(uVar9 - extraout_x8_04);
  lVar11 = 0;
  puStack_1840 = puVar10;
  FUN_104739264();
  lVar12 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar14 = (long)puVar10 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112db3ce0;
  func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar9 = lVar14 - extraout_x8_06;
  lVar4 = 0x112db3cb8;
  func_0x0001000285a8(0x112db3cb8,&UNK_10dd33f20);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined1 *)(uVar9 - extraout_x8_07);
  iVar3 = *(int *)(lVar4 + 0x30);
  lStack_1838 = param_1;
  FUN_10472f514(param_1,puVar10,0x112db3ce0,&UNK_10d95e240);
  FUN_10472f514(lStack_1830,puVar10 + iVar3,0x112db3ce0,&UNK_10d95e240);
  pcVar13 = *(code **)(lVar12 + 0x30);
  puVar5 = puVar10;
  (*pcVar13)(puVar10,1,lVar11);
  if ((int)puVar5 == 1) {
    puVar5 = puVar10 + iVar3;
    (*pcVar13)(puVar5,1,lVar11);
    if ((int)puVar5 == 1) {
      func_0x000104739048(puVar10,0x112db3ce0,&UNK_10d95e240);
LAB_10472fc08:
      lVar12 = 0;
      FUN_10472f4dc();
      lVar4 = lStack_1838;
      lVar14 = (long)*(int *)(lVar12 + 0x14);
      _memcpy(auStack_788,lStack_1838 + lVar14,0x260);
      _memcpy(auStack_c48,lVar4 + lVar14,0x260);
      lVar11 = lStack_1830;
      _memcpy(auStack_528,lStack_1830 + lVar14,0x260);
      _memcpy(auStack_9e8,lVar11 + lVar14,0x260);
      iVar3 = (int)auStack_c48;
      func_0x0001015538ec();
      if (iVar3 == 1) {
        iVar3 = (int)auStack_9e8;
        func_0x0001015538ec();
        if (iVar3 != 1) {
LAB_10472fd18:
          _memcpy(auStack_1108,auStack_c48,0x4c0);
          FUN_10472f514(auStack_788,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
          FUN_10472f514(auStack_528,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
          uVar7 = 0x112db3d20;
          puVar8 = &UNK_10dd318e0;
          puVar10 = auStack_1108;
          goto LAB_10473008c;
        }
        _memcpy(auStack_1108,auStack_c48,0x260);
        FUN_10472f514(auStack_788,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
        FUN_10472f514(auStack_528,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
        func_0x000104739048(auStack_1108,0x112db3ce8,&UNK_10d98ff60);
      }
      else {
        _memcpy(auStack_1368,auStack_c48,0x260);
        iVar3 = (int)auStack_9e8;
        func_0x0001015538ec();
        if (iVar3 == 1) goto LAB_10472fd18;
        _memcpy(auStack_15c8,auStack_9e8,0x260);
        _memcpy(auStack_1108,auStack_9e8,0x260);
        _memcpy(auStack_2c8,auStack_1368,0x260);
        FUN_10472f514(auStack_788,auStack_1828,0x112db3ce8,&UNK_10d98ff60);
        FUN_10472f514(auStack_528,auStack_1828,0x112db3ce8,&UNK_10d98ff60);
        puVar10 = auStack_2c8;
        func_0x0001047a725c(puVar10,auStack_1108);
        func_0x000104739048(auStack_15c8,0x112db3ce8,&UNK_10d98ff60);
        func_0x000104739048(auStack_c48,0x112db3ce8,&UNK_10d98ff60);
        if (((ulong)puVar10 & 1) == 0) {
          return false;
        }
      }
      puVar10 = puStack_1840;
      iVar3 = *(int *)(lVar12 + 0x18);
      iVar1 = *(int *)(lStack_1858 + 0x30);
      FUN_10472f514(lVar4 + iVar3,puStack_1840,0x112db3cd8,&UNK_10dd317d0);
      FUN_10472f514(lVar11 + iVar3,puVar10 + iVar1,0x112db3cd8,&UNK_10dd317d0);
      lVar14 = lStack_1848;
      pcVar13 = *(code **)(lStack_1850 + 0x30);
      puVar5 = puVar10;
      (*pcVar13)(puVar10,1,lStack_1848);
      uVar9 = uStack_1860;
      if ((int)puVar5 == 1) {
        puVar5 = puVar10 + iVar1;
        (*pcVar13)(puVar5,1,lVar14);
        if ((int)puVar5 == 1) {
          func_0x000104739048(puVar10,0x112db3cd8,&UNK_10dd317d0);
LAB_10472ff90:
          puVar10 = puStack_1868;
          iVar3 = *(int *)(lVar12 + 0x1c);
          iVar1 = *(int *)(lStack_1880 + 0x30);
          FUN_10472f514(lVar4 + iVar3,puStack_1868,0x112db3cc8,&UNK_10d98e570);
          FUN_10472f514(lVar11 + iVar3,puVar10 + iVar1,0x112db3cc8,&UNK_10d98e570);
          lVar14 = lStack_1870;
          pcVar13 = *(code **)(lStack_1878 + 0x30);
          puVar5 = puVar10;
          (*pcVar13)(puVar10,1,lStack_1870);
          uVar9 = uStack_1890;
          if ((int)puVar5 == 1) {
            puVar5 = puVar10 + iVar1;
            (*pcVar13)(puVar5,1,lVar14);
            if ((int)puVar5 == 1) {
              func_0x000104739048(puVar10,0x112db3cc8,&UNK_10d98e570);
LAB_104730114:
              return *(int *)(lVar4 + *(int *)(lVar12 + 0x20)) ==
                     *(int *)(lVar11 + *(int *)(lVar12 + 0x20));
            }
          }
          else {
            FUN_10472f514(puVar10,uStack_1890,0x112db3cc8,&UNK_10d98e570);
            puVar5 = puVar10 + iVar1;
            (*pcVar13)(puVar5,1,lVar14);
            puVar2 = puStack_1898;
            if ((int)puVar5 != 1) {
              func_0x000104739088(puVar10 + iVar1,puStack_1898,FUN_10475cf44);
              uVar6 = uVar9;
              FUN_10475d204(uVar9,puVar2);
              FUN_104736bf4(puVar2,FUN_10475cf44);
              FUN_104736bf4(uVar9,FUN_10475cf44);
              func_0x000104739048(puVar10,0x112db3cc8,&UNK_10d98e570);
              if ((uVar6 & 1) == 0) {
                return false;
              }
              goto LAB_104730114;
            }
            FUN_104736bf4(uVar9,FUN_10475cf44);
          }
          uVar7 = 0x112db3ca0;
          puVar8 = &UNK_10d95e200;
          goto LAB_10473008c;
        }
      }
      else {
        FUN_10472f514(puVar10,uStack_1860,0x112db3cd8,&UNK_10dd317d0);
        puVar5 = puVar10 + iVar1;
        (*pcVar13)(puVar5,1,lVar14);
        lVar14 = lStack_1888;
        if ((int)puVar5 != 1) {
          func_0x000104739088(puVar10 + iVar1,lStack_1888,FUN_10470fbcc);
          uVar6 = uVar9;
          FUN_10470fc4c(uVar9,lVar14);
          FUN_104736bf4(lVar14,FUN_10470fbcc);
          FUN_104736bf4(uVar9,FUN_10470fbcc);
          func_0x000104739048(puVar10,0x112db3cd8,&UNK_10dd317d0);
          if ((uVar6 & 1) == 0) {
            return false;
          }
          goto LAB_10472ff90;
        }
        FUN_104736bf4(uVar9,FUN_10470fbcc);
      }
      uVar7 = 0x112db3cb0;
      puVar8 = &UNK_10d95e210;
      goto LAB_10473008c;
    }
  }
  else {
    FUN_10472f514(puVar10,uVar9,0x112db3ce0,&UNK_10d95e240);
    puVar5 = puVar10 + iVar3;
    (*pcVar13)(puVar5,1,lVar11);
    if ((int)puVar5 != 1) {
      func_0x000104739088(puVar10 + iVar3,lVar14,FUN_104739264);
      uVar6 = uVar9;
      FUN_1047397c8(uVar9,lVar14);
      FUN_104736bf4(lVar14,FUN_104739264);
      FUN_104736bf4(uVar9,FUN_104739264);
      func_0x000104739048(puVar10,0x112db3ce0,&UNK_10d95e240);
      if ((uVar6 & 1) == 0) {
        return false;
      }
      goto LAB_10472fc08;
    }
    FUN_104736bf4(uVar9,FUN_104739264);
  }
  uVar7 = 0x112db3cb8;
  puVar8 = &UNK_10dd33f20;
LAB_10473008c:
  func_0x000104739048(puVar10,uVar7,puVar8);
  return false;
}



/* Entry: 10472f858; end: 10473012b;  */

bool FUN_10472f858(long param_1,long param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  long extraout_x8_01;
  undefined1 *puVar10;
  long extraout_x8_02;
  long lVar11;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long lVar12;
  code *pcVar13;
  long lVar14;
  undefined1 auStack_18a0 [8];
  undefined1 *puStack_1898;
  ulong uStack_1890;
  long lStack_1888;
  long lStack_1880;
  long lStack_1878;
  long lStack_1870;
  undefined1 *puStack_1868;
  ulong uStack_1860;
  long lStack_1858;
  long lStack_1850;
  long lStack_1848;
  undefined1 *puStack_1840;
  long lStack_1838;
  long lStack_1830;
  undefined1 auStack_1828 [608];
  undefined1 auStack_15c8 [608];
  undefined1 auStack_1368 [608];
  undefined1 auStack_1108 [1216];
  undefined1 auStack_c48 [608];
  undefined1 auStack_9e8 [608];
  undefined1 auStack_788 [608];
  undefined1 auStack_528 [608];
  undefined1 auStack_2c8 [616];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = 0;
  lStack_1830 = param_2;
  FUN_10475cf44();
  lStack_1878 = *(long *)(lVar4 + -8);
  lStack_1870 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1878 + 0x40));
  lVar4 = 0x112db3cc8;
  puStack_1898 = auStack_18a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar9 = (long)(auStack_18a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar4 = 0x112db3ca0;
  uStack_1890 = uVar9;
  func_0x0001000285a8(0x112db3ca0,&UNK_10d95e200);
  lStack_1880 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined1 *)(uVar9 - extraout_x8_01);
  lVar4 = 0;
  puStack_1868 = puVar10;
  FUN_10470fbcc();
  lStack_1850 = *(long *)(lVar4 + -8);
  lStack_1848 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1850 + 0x40));
  lVar11 = (long)puVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112db3cd8;
  lStack_1888 = lVar11;
  func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar9 = lVar11 - extraout_x8_03;
  lVar4 = 0x112db3cb0;
  uStack_1860 = uVar9;
  func_0x0001000285a8(0x112db3cb0,&UNK_10d95e210);
  lStack_1858 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined1 *)(uVar9 - extraout_x8_04);
  lVar11 = 0;
  puStack_1840 = puVar10;
  FUN_104739264();
  lVar12 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar14 = (long)puVar10 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112db3ce0;
  func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar9 = lVar14 - extraout_x8_06;
  lVar4 = 0x112db3cb8;
  func_0x0001000285a8(0x112db3cb8,&UNK_10dd33f20);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined1 *)(uVar9 - extraout_x8_07);
  iVar3 = *(int *)(lVar4 + 0x30);
  lStack_1838 = param_1;
  FUN_10472f514(param_1,puVar10,0x112db3ce0,&UNK_10d95e240);
  FUN_10472f514(lStack_1830,puVar10 + iVar3,0x112db3ce0,&UNK_10d95e240);
  pcVar13 = *(code **)(lVar12 + 0x30);
  puVar5 = puVar10;
  (*pcVar13)(puVar10,1,lVar11);
  if ((int)puVar5 == 1) {
    puVar5 = puVar10 + iVar3;
    (*pcVar13)(puVar5,1,lVar11);
    if ((int)puVar5 == 1) {
      func_0x000104739048(puVar10,0x112db3ce0,&UNK_10d95e240);
LAB_10472fc08:
      lVar12 = 0;
      FUN_10472f4dc();
      lVar4 = lStack_1838;
      lVar14 = (long)*(int *)(lVar12 + 0x14);
      _memcpy(auStack_788,lStack_1838 + lVar14,0x260);
      _memcpy(auStack_c48,lVar4 + lVar14,0x260);
      lVar11 = lStack_1830;
      _memcpy(auStack_528,lStack_1830 + lVar14,0x260);
      _memcpy(auStack_9e8,lVar11 + lVar14,0x260);
      iVar3 = (int)auStack_c48;
      func_0x0001015538ec();
      if (iVar3 == 1) {
        iVar3 = (int)auStack_9e8;
        func_0x0001015538ec();
        if (iVar3 != 1) {
LAB_10472fd18:
          _memcpy(auStack_1108,auStack_c48,0x4c0);
          FUN_10472f514(auStack_788,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
          FUN_10472f514(auStack_528,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
          uVar7 = 0x112db3d20;
          puVar8 = &UNK_10dd318e0;
          puVar10 = auStack_1108;
          goto LAB_10473008c;
        }
        _memcpy(auStack_1108,auStack_c48,0x260);
        FUN_10472f514(auStack_788,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
        FUN_10472f514(auStack_528,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
        func_0x000104739048(auStack_1108,0x112db3ce8,&UNK_10d98ff60);
      }
      else {
        _memcpy(auStack_1368,auStack_c48,0x260);
        iVar3 = (int)auStack_9e8;
        func_0x0001015538ec();
        if (iVar3 == 1) goto LAB_10472fd18;
        _memcpy(auStack_15c8,auStack_9e8,0x260);
        _memcpy(auStack_1108,auStack_9e8,0x260);
        _memcpy(auStack_2c8,auStack_1368,0x260);
        FUN_10472f514(auStack_788,auStack_1828,0x112db3ce8,&UNK_10d98ff60);
        FUN_10472f514(auStack_528,auStack_1828,0x112db3ce8,&UNK_10d98ff60);
        puVar10 = auStack_2c8;
        func_0x0001047a725c(puVar10,auStack_1108);
        func_0x000104739048(auStack_15c8,0x112db3ce8,&UNK_10d98ff60);
        func_0x000104739048(auStack_c48,0x112db3ce8,&UNK_10d98ff60);
        if (((ulong)puVar10 & 1) == 0) {
          return false;
        }
      }
      puVar10 = puStack_1840;
      iVar3 = *(int *)(lVar12 + 0x18);
      iVar1 = *(int *)(lStack_1858 + 0x30);
      FUN_10472f514(lVar4 + iVar3,puStack_1840,0x112db3cd8,&UNK_10dd317d0);
      FUN_10472f514(lVar11 + iVar3,puVar10 + iVar1,0x112db3cd8,&UNK_10dd317d0);
      lVar14 = lStack_1848;
      pcVar13 = *(code **)(lStack_1850 + 0x30);
      puVar5 = puVar10;
      (*pcVar13)(puVar10,1,lStack_1848);
      uVar9 = uStack_1860;
      if ((int)puVar5 == 1) {
        puVar5 = puVar10 + iVar1;
        (*pcVar13)(puVar5,1,lVar14);
        if ((int)puVar5 == 1) {
          func_0x000104739048(puVar10,0x112db3cd8,&UNK_10dd317d0);
LAB_10472ff90:
          puVar10 = puStack_1868;
          iVar3 = *(int *)(lVar12 + 0x1c);
          iVar1 = *(int *)(lStack_1880 + 0x30);
          FUN_10472f514(lVar4 + iVar3,puStack_1868,0x112db3cc8,&UNK_10d98e570);
          FUN_10472f514(lVar11 + iVar3,puVar10 + iVar1,0x112db3cc8,&UNK_10d98e570);
          lVar14 = lStack_1870;
          pcVar13 = *(code **)(lStack_1878 + 0x30);
          puVar5 = puVar10;
          (*pcVar13)(puVar10,1,lStack_1870);
          uVar9 = uStack_1890;
          if ((int)puVar5 == 1) {
            puVar5 = puVar10 + iVar1;
            (*pcVar13)(puVar5,1,lVar14);
            if ((int)puVar5 == 1) {
              func_0x000104739048(puVar10,0x112db3cc8,&UNK_10d98e570);
LAB_104730114:
              return *(int *)(lVar4 + *(int *)(lVar12 + 0x20)) ==
                     *(int *)(lVar11 + *(int *)(lVar12 + 0x20));
            }
          }
          else {
            FUN_10472f514(puVar10,uStack_1890,0x112db3cc8,&UNK_10d98e570);
            puVar5 = puVar10 + iVar1;
            (*pcVar13)(puVar5,1,lVar14);
            puVar2 = puStack_1898;
            if ((int)puVar5 != 1) {
              func_0x000104739088(puVar10 + iVar1,puStack_1898,FUN_10475cf44);
              uVar6 = uVar9;
              FUN_10475d204(uVar9,puVar2);
              FUN_104736bf4(puVar2,FUN_10475cf44);
              FUN_104736bf4(uVar9,FUN_10475cf44);
              func_0x000104739048(puVar10,0x112db3cc8,&UNK_10d98e570);
              if ((uVar6 & 1) == 0) {
                return false;
              }
              goto LAB_104730114;
            }
            FUN_104736bf4(uVar9,FUN_10475cf44);
          }
          uVar7 = 0x112db3ca0;
          puVar8 = &UNK_10d95e200;
          goto LAB_10473008c;
        }
      }
      else {
        FUN_10472f514(puVar10,uStack_1860,0x112db3cd8,&UNK_10dd317d0);
        puVar5 = puVar10 + iVar1;
        (*pcVar13)(puVar5,1,lVar14);
        lVar14 = lStack_1888;
        if ((int)puVar5 != 1) {
          func_0x000104739088(puVar10 + iVar1,lStack_1888,FUN_10470fbcc);
          uVar6 = uVar9;
          FUN_10470fc4c(uVar9,lVar14);
          FUN_104736bf4(lVar14,FUN_10470fbcc);
          FUN_104736bf4(uVar9,FUN_10470fbcc);
          func_0x000104739048(puVar10,0x112db3cd8,&UNK_10dd317d0);
          if ((uVar6 & 1) == 0) {
            return false;
          }
          goto LAB_10472ff90;
        }
        FUN_104736bf4(uVar9,FUN_10470fbcc);
      }
      uVar7 = 0x112db3cb0;
      puVar8 = &UNK_10d95e210;
      goto LAB_10473008c;
    }
  }
  else {
    FUN_10472f514(puVar10,uVar9,0x112db3ce0,&UNK_10d95e240);
    puVar5 = puVar10 + iVar3;
    (*pcVar13)(puVar5,1,lVar11);
    if ((int)puVar5 != 1) {
      func_0x000104739088(puVar10 + iVar3,lVar14,FUN_104739264);
      uVar6 = uVar9;
      FUN_1047397c8(uVar9,lVar14);
      FUN_104736bf4(lVar14,FUN_104739264);
      FUN_104736bf4(uVar9,FUN_104739264);
      func_0x000104739048(puVar10,0x112db3ce0,&UNK_10d95e240);
      if ((uVar6 & 1) == 0) {
        return false;
      }
      goto LAB_10472fc08;
    }
    FUN_104736bf4(uVar9,FUN_104739264);
  }
  uVar7 = 0x112db3cb8;
  puVar8 = &UNK_10dd33f20;
LAB_10473008c:
  func_0x000104739048(puVar10,uVar7,puVar8);
  return false;
}



/* Entry: 10473012c; end: 10473012f;  */

void FUN_10473012c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011308e2a8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10472f4dc(0xff);
  puVar2 = &UNK_10dd31870;
  _swift_getWitnessTable(&UNK_10dd31870,uVar1);
  puRam000000011308e2a8 = puVar2;
  return;
}



/* Entry: 104730130; end: 104730173;  */

void FUN_104730130(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011308e2a8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10472f4dc(0xff);
  puVar2 = &UNK_10dd31870;
  _swift_getWitnessTable(&UNK_10dd31870,uVar1);
  puRam000000011308e2a8 = puVar2;
  return;
}



/* Entry: 104730174; end: 104731333;  */

long * FUN_104730174(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint5 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  code *pcVar27;
  
  uVar8 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar8 >> 0x11 & 1) == 0) {
    lVar10 = 0;
    FUN_104739264();
    lVar18 = *(long *)(lVar10 + -8);
    pcVar19 = *(code **)(lVar18 + 0x30);
    plVar11 = param_2;
    (*pcVar19)(param_2,1,lVar10);
    if ((int)plVar11 == 0) {
      lVar12 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar12;
      lVar12 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = lVar12;
      lVar20 = param_2[5];
      param_1[4] = param_2[4];
      param_1[5] = lVar20;
      lVar24 = param_2[7];
      param_1[6] = param_2[6];
      param_1[7] = lVar24;
      param_1[8] = param_2[8];
      lVar15 = param_2[0xf];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar12);
      _swift_bridgeObjectRetain(lVar20);
      _swift_bridgeObjectRetain(lVar24);
      if (lVar15 == 1) {
        lVar12 = param_2[9];
        param_1[10] = param_2[10];
        param_1[9] = lVar12;
        lVar12 = param_2[0xb];
        param_1[0xc] = param_2[0xc];
        param_1[0xb] = lVar12;
        lVar12 = param_2[0xd];
        param_1[0xe] = param_2[0xe];
        param_1[0xd] = lVar12;
        param_1[0xf] = param_2[0xf];
      }
      else {
        lVar12 = param_2[0xb];
        if (lVar12 == 1) {
          lVar12 = param_2[9];
          param_1[10] = param_2[10];
          param_1[9] = lVar12;
          lVar12 = param_2[0xb];
          param_1[0xc] = param_2[0xc];
          param_1[0xb] = lVar12;
          param_1[0xd] = param_2[0xd];
        }
        else {
          lVar20 = param_2[9];
          param_1[10] = param_2[10];
          param_1[9] = lVar20;
          lVar20 = param_2[0xc];
          lVar24 = param_2[0xd];
          param_1[0xb] = lVar12;
          param_1[0xc] = lVar20;
          param_1[0xd] = lVar24;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(lVar24);
        }
        param_1[0xe] = param_2[0xe];
        param_1[0xf] = lVar15;
        _swift_bridgeObjectRetain(lVar15);
      }
      lVar24 = param_2[0x11];
      param_1[0x10] = param_2[0x10];
      param_1[0x11] = lVar24;
      lVar15 = param_2[0x13];
      param_1[0x12] = param_2[0x12];
      param_1[0x13] = lVar15;
      lVar12 = (long)param_1 + (long)*(int *)(lVar10 + 0x34);
      lVar20 = (long)param_2 + (long)*(int *)(lVar10 + 0x34);
      lVar17 = 0;
      FUN_104742f28();
      lVar16 = *(long *)(lVar17 + -8);
      pcVar27 = *(code **)(lVar16 + 0x30);
      _swift_bridgeObjectRetain(lVar24);
      _swift_bridgeObjectRetain(lVar15);
      lVar24 = lVar20;
      (*pcVar27)(lVar20,1,lVar17);
      if ((int)lVar24 == 0) {
        lVar24 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar24 + -8) + 0x10))(lVar12,lVar20,lVar24);
        puVar1 = (undefined8 *)(lVar12 + *(int *)(lVar17 + 0x14));
        puVar2 = (undefined8 *)(lVar20 + *(int *)(lVar17 + 0x14));
        uVar21 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar21;
        *(undefined1 *)(lVar12 + *(int *)(lVar17 + 0x18)) =
             *(undefined1 *)(lVar20 + *(int *)(lVar17 + 0x18));
        *(undefined1 *)(lVar12 + *(int *)(lVar17 + 0x1c)) =
             *(undefined1 *)(lVar20 + *(int *)(lVar17 + 0x1c));
        puVar1 = (undefined8 *)(lVar12 + *(int *)(lVar17 + 0x20));
        puVar2 = (undefined8 *)(lVar20 + *(int *)(lVar17 + 0x20));
        *puVar1 = *puVar2;
        *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
        *(undefined1 *)(lVar12 + *(int *)(lVar17 + 0x24)) =
             *(undefined1 *)(lVar20 + *(int *)(lVar17 + 0x24));
        pcVar27 = *(code **)(lVar16 + 0x38);
        _swift_bridgeObjectRetain();
        (*pcVar27)(lVar12,0,1,lVar17);
      }
      else {
        lVar24 = 0x112dcbf00;
        func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
        _memcpy(lVar12,lVar20,*(undefined8 *)(*(long *)(lVar24 + -8) + 0x40));
      }
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x38));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x38));
      uVar21 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar21;
      uVar21 = *(undefined8 *)((long)puVar2 + 9);
      *(undefined8 *)((long)puVar1 + 0x11) = *(undefined8 *)((long)puVar2 + 0x11);
      *(undefined8 *)((long)puVar1 + 9) = uVar21;
      (**(code **)(lVar18 + 0x38))(param_1,0,1);
    }
    else {
      lVar12 = 0x112db3ce0;
      func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
      _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    if (puVar2[0x18] == 1) {
      _memcpy(puVar1,puVar2,0x260);
    }
    else {
      lVar12 = puVar2[1];
      if (lVar12 == 1) {
        uVar21 = *puVar2;
        puVar1[1] = puVar2[1];
        *puVar1 = uVar21;
        puVar1[2] = puVar2[2];
      }
      else {
        *puVar1 = *puVar2;
        puVar1[1] = lVar12;
        uVar21 = puVar2[2];
        puVar1[2] = uVar21;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar21);
      }
      uVar25 = puVar2[5];
      if (uVar25 >> 0x3c == 0xb) {
        uVar21 = puVar2[3];
        puVar1[4] = puVar2[4];
        puVar1[3] = uVar21;
        puVar1[5] = puVar2[5];
      }
      else {
        puVar1[3] = puVar2[3];
        if (uVar25 >> 0x3c < 0xf) {
          uVar21 = puVar2[4];
          func_0x00010006c00c(uVar21,uVar25);
          puVar1[4] = uVar21;
          puVar1[5] = uVar25;
        }
        else {
          uVar21 = puVar2[4];
          puVar1[5] = puVar2[5];
          puVar1[4] = uVar21;
        }
      }
      *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(puVar2 + 6);
      puVar1[7] = puVar2[7];
      lVar12 = puVar2[9];
      if (lVar12 == 1) {
        uVar21 = puVar2[0x10];
        uVar23 = puVar2[0x13];
        uVar22 = puVar2[0x12];
        puVar1[0x11] = puVar2[0x11];
        puVar1[0x10] = uVar21;
        puVar1[0x13] = uVar23;
        puVar1[0x12] = uVar22;
        uVar21 = puVar2[0x14];
        puVar1[0x15] = puVar2[0x15];
        puVar1[0x14] = uVar21;
        uVar21 = *(undefined8 *)((long)puVar2 + 0xaa);
        *(undefined8 *)((long)puVar1 + 0xb2) = *(undefined8 *)((long)puVar2 + 0xb2);
        *(undefined8 *)((long)puVar1 + 0xaa) = uVar21;
        uVar21 = puVar2[8];
        uVar23 = puVar2[0xb];
        uVar22 = puVar2[10];
        puVar1[9] = puVar2[9];
        puVar1[8] = uVar21;
        puVar1[0xb] = uVar23;
        puVar1[10] = uVar22;
        uVar21 = puVar2[0xc];
        uVar23 = puVar2[0xf];
        uVar22 = puVar2[0xe];
        puVar1[0xd] = puVar2[0xd];
        puVar1[0xc] = uVar21;
        puVar1[0xf] = uVar23;
        puVar1[0xe] = uVar22;
      }
      else {
        puVar1[8] = puVar2[8];
        puVar1[9] = lVar12;
        uVar5 = puVar2[0xb];
        puVar1[10] = puVar2[10];
        puVar1[0xb] = uVar5;
        uVar21 = puVar2[0xc];
        uVar22 = puVar2[0xd];
        puVar1[0xc] = uVar21;
        puVar1[0xd] = uVar22;
        uVar22 = puVar2[0xe];
        uVar23 = puVar2[0xf];
        puVar1[0xe] = uVar22;
        puVar1[0xf] = uVar23;
        uVar23 = puVar2[0x10];
        uVar6 = puVar2[0x11];
        puVar1[0x10] = uVar23;
        puVar1[0x11] = uVar6;
        lVar12 = puVar2[0x13];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar5);
        _swift_bridgeObjectRetain(uVar21);
        _swift_bridgeObjectRetain(uVar22);
        _swift_bridgeObjectRetain(uVar23);
        _swift_bridgeObjectRetain(uVar6);
        if (lVar12 == 1) {
          uVar21 = puVar2[0x12];
          puVar1[0x13] = puVar2[0x13];
          puVar1[0x12] = uVar21;
        }
        else {
          puVar1[0x12] = puVar2[0x12];
          puVar1[0x13] = lVar12;
          _swift_bridgeObjectRetain(lVar12);
        }
        uVar21 = puVar2[0x15];
        puVar1[0x14] = puVar2[0x14];
        puVar1[0x15] = uVar21;
        puVar1[0x16] = puVar2[0x16];
        *(undefined2 *)(puVar1 + 0x17) = *(undefined2 *)(puVar2 + 0x17);
        _swift_bridgeObjectRetain();
      }
      *(undefined2 *)((long)puVar1 + 0xba) = *(undefined2 *)((long)puVar2 + 0xba);
      if (puVar2[0x18] == 0) {
        lVar12 = puVar2[0x18];
        uVar22 = puVar2[0x1b];
        uVar21 = puVar2[0x1a];
        puVar1[0x19] = puVar2[0x19];
        puVar1[0x18] = lVar12;
        puVar1[0x1b] = uVar22;
        puVar1[0x1a] = uVar21;
        uVar21 = puVar2[0x1c];
        uVar23 = puVar2[0x1f];
        uVar22 = puVar2[0x1e];
        puVar1[0x1d] = puVar2[0x1d];
        puVar1[0x1c] = uVar21;
        puVar1[0x1f] = uVar23;
        puVar1[0x1e] = uVar22;
      }
      else {
        puVar1[0x18] = puVar2[0x18];
        uVar21 = puVar2[0x19];
        puVar1[0x1a] = puVar2[0x1a];
        puVar1[0x19] = uVar21;
        uVar21 = puVar2[0x1c];
        puVar1[0x1b] = puVar2[0x1b];
        puVar1[0x1c] = uVar21;
        lVar12 = puVar2[0x1e];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar21);
        if (lVar12 == 0) {
          uVar21 = puVar2[0x1d];
          puVar1[0x1e] = puVar2[0x1e];
          puVar1[0x1d] = uVar21;
          puVar1[0x1f] = puVar2[0x1f];
        }
        else {
          puVar1[0x1d] = puVar2[0x1d];
          puVar1[0x1e] = lVar12;
          uVar21 = puVar2[0x1f];
          puVar1[0x1f] = uVar21;
          _swift_bridgeObjectRetain(lVar12);
          _swift_bridgeObjectRetain(uVar21);
        }
      }
      *(undefined1 *)(puVar1 + 0x20) = *(undefined1 *)(puVar2 + 0x20);
      uVar21 = puVar2[0x22];
      puVar1[0x21] = puVar2[0x21];
      puVar1[0x22] = uVar21;
      uVar21 = puVar2[0x24];
      puVar1[0x23] = puVar2[0x23];
      puVar1[0x24] = uVar21;
      uVar22 = puVar2[0x25];
      puVar1[0x26] = puVar2[0x26];
      puVar1[0x25] = uVar22;
      uVar22 = *(undefined8 *)((long)puVar2 + 0x132);
      *(undefined8 *)((long)puVar1 + 0x13a) = *(undefined8 *)((long)puVar2 + 0x13a);
      *(undefined8 *)((long)puVar1 + 0x132) = uVar22;
      lVar12 = puVar2[0x2a];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar21);
      if (lVar12 == 0) {
        uVar21 = puVar2[0x29];
        uVar23 = puVar2[0x2c];
        uVar22 = puVar2[0x2b];
        puVar1[0x2a] = puVar2[0x2a];
        puVar1[0x29] = uVar21;
        puVar1[0x2c] = uVar23;
        puVar1[0x2b] = uVar22;
      }
      else {
        puVar1[0x29] = puVar2[0x29];
        puVar1[0x2a] = lVar12;
        uVar21 = puVar2[0x2c];
        puVar1[0x2b] = puVar2[0x2b];
        puVar1[0x2c] = uVar21;
        _swift_bridgeObjectRetain(lVar12);
        _swift_bridgeObjectRetain(uVar21);
      }
      uVar21 = puVar2[0x2e];
      puVar1[0x2d] = puVar2[0x2d];
      puVar1[0x2e] = uVar21;
      uVar21 = puVar2[0x2f];
      uVar22 = puVar2[0x30];
      *(undefined1 *)(puVar1 + 0x31) = *(undefined1 *)(puVar2 + 0x31);
      uVar25 = puVar2[0x36];
      uVar9 = *(uint5 *)(puVar2 + 0x39);
      puVar1[0x2f] = uVar21;
      puVar1[0x30] = uVar22;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar22);
      if ((((uVar25 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
         (((ulong)uVar9 & 0xfefefefefefefefe) == 0x6fefefefe)) {
        uVar21 = puVar2[0x32];
        uVar23 = puVar2[0x35];
        uVar22 = puVar2[0x34];
        puVar1[0x33] = puVar2[0x33];
        puVar1[0x32] = uVar21;
        puVar1[0x35] = uVar23;
        puVar1[0x34] = uVar22;
        uVar21 = puVar2[0x36];
        puVar1[0x37] = puVar2[0x37];
        puVar1[0x36] = uVar21;
        uVar21 = *(undefined8 *)((long)puVar2 + 0x1bd);
        *(undefined8 *)((long)puVar1 + 0x1c5) = *(undefined8 *)((long)puVar2 + 0x1c5);
        *(undefined8 *)((long)puVar1 + 0x1bd) = uVar21;
      }
      else {
        uVar21 = puVar2[0x32];
        uVar5 = puVar2[0x33];
        uVar22 = puVar2[0x34];
        uVar6 = puVar2[0x35];
        uVar23 = puVar2[0x37];
        uVar7 = puVar2[0x38];
        func_0x00010179a2b8(uVar21,uVar5,uVar22,uVar6,uVar25,uVar23,uVar7,(ulong)uVar9);
        puVar1[0x32] = uVar21;
        puVar1[0x33] = uVar5;
        puVar1[0x34] = uVar22;
        puVar1[0x35] = uVar6;
        puVar1[0x36] = uVar25;
        puVar1[0x37] = uVar23;
        puVar1[0x38] = uVar7;
        *(char *)((long)puVar1 + 0x1cc) = (char)(uVar9 >> 0x20);
        *(int *)(puVar1 + 0x39) = (int)uVar9;
      }
      *(undefined1 *)((long)puVar1 + 0x1cd) = *(undefined1 *)((long)puVar2 + 0x1cd);
      uVar21 = puVar2[0x3b];
      puVar1[0x3a] = puVar2[0x3a];
      puVar1[0x3b] = uVar21;
      *(undefined1 *)(puVar1 + 0x3c) = *(undefined1 *)(puVar2 + 0x3c);
      lVar12 = puVar2[0x3e];
      _swift_bridgeObjectRetain();
      if (lVar12 == 0) {
        uVar21 = puVar2[0x3d];
        uVar23 = puVar2[0x40];
        uVar22 = puVar2[0x3f];
        puVar1[0x3e] = puVar2[0x3e];
        puVar1[0x3d] = uVar21;
        puVar1[0x40] = uVar23;
        puVar1[0x3f] = uVar22;
        uVar21 = puVar2[0x41];
        puVar1[0x42] = puVar2[0x42];
        puVar1[0x41] = uVar21;
      }
      else {
        puVar1[0x3d] = puVar2[0x3d];
        puVar1[0x3e] = lVar12;
        uVar21 = puVar2[0x40];
        puVar1[0x3f] = puVar2[0x3f];
        puVar1[0x40] = uVar21;
        puVar1[0x41] = puVar2[0x41];
        uVar22 = puVar2[0x42];
        puVar1[0x42] = uVar22;
        _swift_bridgeObjectRetain(lVar12);
        _swift_bridgeObjectRetain(uVar21);
        _swift_bridgeObjectRetain(uVar22);
      }
      *(undefined1 *)(puVar1 + 0x43) = *(undefined1 *)(puVar2 + 0x43);
      lVar12 = puVar2[0x45];
      if (lVar12 == 0) {
        uVar21 = puVar2[0x44];
        uVar23 = puVar2[0x47];
        uVar22 = puVar2[0x46];
        puVar1[0x45] = puVar2[0x45];
        puVar1[0x44] = uVar21;
        puVar1[0x47] = uVar23;
        puVar1[0x46] = uVar22;
        uVar21 = puVar2[0x48];
        puVar1[0x49] = puVar2[0x49];
        puVar1[0x48] = uVar21;
        puVar1[0x4a] = puVar2[0x4a];
      }
      else {
        puVar1[0x44] = puVar2[0x44];
        puVar1[0x45] = lVar12;
        puVar1[0x46] = puVar2[0x46];
        uVar21 = puVar2[0x47];
        puVar1[0x47] = uVar21;
        puVar1[0x48] = puVar2[0x48];
        uVar22 = puVar2[0x49];
        puVar1[0x49] = uVar22;
        puVar1[0x4a] = puVar2[0x4a];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar21);
        _swift_bridgeObjectRetain(uVar22);
      }
      puVar1[0x4b] = puVar2[0x4b];
      _swift_bridgeObjectRetain();
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    lVar12 = 0;
    FUN_10470fbcc();
    lVar20 = *(long *)(lVar12 + -8);
    puVar13 = puVar2;
    (**(code **)(lVar20 + 0x30))(puVar2,1,lVar12);
    if ((int)puVar13 == 0) {
      uVar21 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar21;
      uVar21 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar21;
      lVar24 = puVar2[10];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar21);
      if (lVar24 == 1) {
        uVar21 = puVar2[4];
        uVar23 = puVar2[7];
        uVar22 = puVar2[6];
        puVar1[5] = puVar2[5];
        puVar1[4] = uVar21;
        puVar1[7] = uVar23;
        puVar1[6] = uVar22;
        uVar21 = puVar2[8];
        puVar1[9] = puVar2[9];
        puVar1[8] = uVar21;
        puVar1[10] = puVar2[10];
      }
      else {
        lVar15 = puVar2[6];
        if (lVar15 == 1) {
          uVar21 = puVar2[4];
          uVar23 = puVar2[7];
          uVar22 = puVar2[6];
          puVar1[5] = puVar2[5];
          puVar1[4] = uVar21;
          puVar1[7] = uVar23;
          puVar1[6] = uVar22;
          puVar1[8] = puVar2[8];
        }
        else {
          uVar21 = puVar2[4];
          puVar1[5] = puVar2[5];
          puVar1[4] = uVar21;
          uVar21 = puVar2[7];
          uVar22 = puVar2[8];
          puVar1[6] = lVar15;
          puVar1[7] = uVar21;
          puVar1[8] = uVar22;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar22);
        }
        puVar1[9] = puVar2[9];
        puVar1[10] = lVar24;
        _swift_bridgeObjectRetain(lVar24);
      }
      uVar21 = puVar2[0xb];
      puVar1[0xc] = puVar2[0xc];
      puVar1[0xb] = uVar21;
      uVar21 = *(undefined8 *)((long)puVar2 + 0x61);
      *(undefined8 *)((long)puVar1 + 0x69) = *(undefined8 *)((long)puVar2 + 0x69);
      *(undefined8 *)((long)puVar1 + 0x61) = uVar21;
      uVar21 = puVar2[0x10];
      puVar1[0xf] = puVar2[0xf];
      puVar1[0x10] = uVar21;
      *(undefined1 *)(puVar1 + 0x11) = *(undefined1 *)(puVar2 + 0x11);
      lVar24 = puVar2[0x14];
      _swift_bridgeObjectRetain();
      if (lVar24 == 1) {
        uVar21 = puVar2[0x12];
        puVar1[0x13] = puVar2[0x13];
        puVar1[0x12] = uVar21;
        puVar1[0x14] = puVar2[0x14];
      }
      else {
        *(undefined4 *)(puVar1 + 0x12) = *(undefined4 *)(puVar2 + 0x12);
        *(undefined1 *)((long)puVar1 + 0x94) = *(undefined1 *)((long)puVar2 + 0x94);
        puVar1[0x13] = puVar2[0x13];
        puVar1[0x14] = lVar24;
        _swift_bridgeObjectRetain(lVar24);
      }
      uVar21 = puVar2[0x15];
      uVar22 = puVar2[0x16];
      puVar1[0x15] = uVar21;
      puVar1[0x16] = uVar22;
      uVar23 = puVar2[0x17];
      puVar1[0x17] = uVar23;
      lVar24 = (long)puVar1 + (long)*(int *)(lVar12 + 0x38);
      lVar15 = (long)puVar2 + (long)*(int *)(lVar12 + 0x38);
      lVar16 = 0;
      FUN_104742f28();
      lVar26 = *(long *)(lVar16 + -8);
      pcVar27 = *(code **)(lVar26 + 0x30);
      _swift_bridgeObjectRetain(uVar21);
      _swift_bridgeObjectRetain(uVar22);
      _swift_bridgeObjectRetain(uVar23);
      lVar17 = lVar15;
      (*pcVar27)(lVar15,1,lVar16);
      if ((int)lVar17 == 0) {
        lVar17 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar17 + -8) + 0x10))(lVar24,lVar15,lVar17);
        puVar2 = (undefined8 *)(lVar24 + *(int *)(lVar16 + 0x14));
        puVar13 = (undefined8 *)(lVar15 + *(int *)(lVar16 + 0x14));
        uVar21 = puVar13[1];
        *puVar2 = *puVar13;
        puVar2[1] = uVar21;
        *(undefined1 *)(lVar24 + *(int *)(lVar16 + 0x18)) =
             *(undefined1 *)(lVar15 + *(int *)(lVar16 + 0x18));
        *(undefined1 *)(lVar24 + *(int *)(lVar16 + 0x1c)) =
             *(undefined1 *)(lVar15 + *(int *)(lVar16 + 0x1c));
        puVar2 = (undefined8 *)(lVar24 + *(int *)(lVar16 + 0x20));
        puVar13 = (undefined8 *)(lVar15 + *(int *)(lVar16 + 0x20));
        *puVar2 = *puVar13;
        *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar13 + 1);
        *(undefined1 *)(lVar24 + *(int *)(lVar16 + 0x24)) =
             *(undefined1 *)(lVar15 + *(int *)(lVar16 + 0x24));
        pcVar27 = *(code **)(lVar26 + 0x38);
        _swift_bridgeObjectRetain();
        (*pcVar27)(lVar24,0,1,lVar16);
      }
      else {
        lVar17 = 0x112dcbf00;
        func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
        _memcpy(lVar24,lVar15,*(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
      }
      (**(code **)(lVar20 + 0x38))(puVar1,0,1,lVar12);
    }
    else {
      lVar12 = 0x112db3cd8;
      func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    lVar12 = 0;
    FUN_10475cf44();
    lVar20 = *(long *)(lVar12 + -8);
    puVar13 = puVar2;
    (**(code **)(lVar20 + 0x30))(puVar2,1,lVar12);
    if ((int)puVar13 == 0) {
      uVar21 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar21;
      uVar21 = puVar2[2];
      uVar22 = puVar2[3];
      _swift_bridgeObjectRetain();
      func_0x00010006c00c(uVar21,uVar22);
      puVar1[2] = uVar21;
      puVar1[3] = uVar22;
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x18));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x18));
      puVar14 = puVar3;
      (*pcVar19)(puVar3,1,lVar10);
      if ((int)puVar14 == 0) {
        uVar21 = puVar3[1];
        *puVar13 = *puVar3;
        puVar13[1] = uVar21;
        uVar21 = puVar3[3];
        puVar13[2] = puVar3[2];
        puVar13[3] = uVar21;
        uVar22 = puVar3[5];
        puVar13[4] = puVar3[4];
        puVar13[5] = uVar22;
        uVar23 = puVar3[7];
        puVar13[6] = puVar3[6];
        puVar13[7] = uVar23;
        puVar13[8] = puVar3[8];
        lVar24 = puVar3[0xf];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar21);
        _swift_bridgeObjectRetain(uVar22);
        _swift_bridgeObjectRetain(uVar23);
        if (lVar24 == 1) {
          uVar21 = puVar3[9];
          puVar13[10] = puVar3[10];
          puVar13[9] = uVar21;
          uVar21 = puVar3[0xb];
          puVar13[0xc] = puVar3[0xc];
          puVar13[0xb] = uVar21;
          uVar21 = puVar3[0xd];
          puVar13[0xe] = puVar3[0xe];
          puVar13[0xd] = uVar21;
          puVar13[0xf] = puVar3[0xf];
        }
        else {
          lVar15 = puVar3[0xb];
          if (lVar15 == 1) {
            uVar21 = puVar3[9];
            puVar13[10] = puVar3[10];
            puVar13[9] = uVar21;
            uVar21 = puVar3[0xb];
            puVar13[0xc] = puVar3[0xc];
            puVar13[0xb] = uVar21;
            puVar13[0xd] = puVar3[0xd];
          }
          else {
            uVar21 = puVar3[9];
            puVar13[10] = puVar3[10];
            puVar13[9] = uVar21;
            uVar21 = puVar3[0xc];
            uVar22 = puVar3[0xd];
            puVar13[0xb] = lVar15;
            puVar13[0xc] = uVar21;
            puVar13[0xd] = uVar22;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar22);
          }
          puVar13[0xe] = puVar3[0xe];
          puVar13[0xf] = lVar24;
          _swift_bridgeObjectRetain(lVar24);
        }
        uVar21 = puVar3[0x11];
        puVar13[0x10] = puVar3[0x10];
        puVar13[0x11] = uVar21;
        uVar22 = puVar3[0x13];
        puVar13[0x12] = puVar3[0x12];
        puVar13[0x13] = uVar22;
        lVar24 = (long)puVar13 + (long)*(int *)(lVar10 + 0x34);
        lVar15 = (long)puVar3 + (long)*(int *)(lVar10 + 0x34);
        lVar16 = 0;
        FUN_104742f28();
        lVar26 = *(long *)(lVar16 + -8);
        pcVar19 = *(code **)(lVar26 + 0x30);
        _swift_bridgeObjectRetain(uVar21);
        _swift_bridgeObjectRetain(uVar22);
        lVar17 = lVar15;
        (*pcVar19)(lVar15,1,lVar16);
        if ((int)lVar17 == 0) {
          lVar17 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar17 + -8) + 0x10))(lVar24,lVar15,lVar17);
          puVar14 = (undefined8 *)(lVar24 + *(int *)(lVar16 + 0x14));
          puVar4 = (undefined8 *)(lVar15 + *(int *)(lVar16 + 0x14));
          uVar21 = puVar4[1];
          *puVar14 = *puVar4;
          puVar14[1] = uVar21;
          *(undefined1 *)(lVar24 + *(int *)(lVar16 + 0x18)) =
               *(undefined1 *)(lVar15 + *(int *)(lVar16 + 0x18));
          *(undefined1 *)(lVar24 + *(int *)(lVar16 + 0x1c)) =
               *(undefined1 *)(lVar15 + *(int *)(lVar16 + 0x1c));
          puVar14 = (undefined8 *)(lVar24 + *(int *)(lVar16 + 0x20));
          puVar4 = (undefined8 *)(lVar15 + *(int *)(lVar16 + 0x20));
          *puVar14 = *puVar4;
          *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar4 + 1);
          *(undefined1 *)(lVar24 + *(int *)(lVar16 + 0x24)) =
               *(undefined1 *)(lVar15 + *(int *)(lVar16 + 0x24));
          pcVar19 = *(code **)(lVar26 + 0x38);
          _swift_bridgeObjectRetain();
          (*pcVar19)(lVar24,0,1,lVar16);
        }
        else {
          lVar17 = 0x112dcbf00;
          func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
          _memcpy(lVar24,lVar15,*(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
        }
        puVar14 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar10 + 0x38));
        puVar3 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar10 + 0x38));
        uVar21 = *puVar3;
        puVar14[1] = puVar3[1];
        *puVar14 = uVar21;
        uVar21 = *(undefined8 *)((long)puVar3 + 9);
        *(undefined8 *)((long)puVar14 + 0x11) = *(undefined8 *)((long)puVar3 + 0x11);
        *(undefined8 *)((long)puVar14 + 9) = uVar21;
        (**(code **)(lVar18 + 0x38))(puVar13,0,1);
      }
      else {
        lVar10 = 0x112db3ce0;
        func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
        _memcpy(puVar13,puVar3,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
      }
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x1c));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x1c));
      if (puVar2[0x18] == 1) {
        _memcpy(puVar13,puVar2,0x260);
      }
      else {
        lVar10 = puVar2[1];
        if (lVar10 == 1) {
          uVar21 = *puVar2;
          puVar13[1] = puVar2[1];
          *puVar13 = uVar21;
          puVar13[2] = puVar2[2];
        }
        else {
          *puVar13 = *puVar2;
          puVar13[1] = lVar10;
          uVar21 = puVar2[2];
          puVar13[2] = uVar21;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar21);
        }
        uVar25 = puVar2[5];
        if (uVar25 >> 0x3c == 0xb) {
          uVar21 = puVar2[3];
          puVar13[4] = puVar2[4];
          puVar13[3] = uVar21;
          puVar13[5] = puVar2[5];
        }
        else {
          puVar13[3] = puVar2[3];
          if (uVar25 >> 0x3c < 0xf) {
            uVar21 = puVar2[4];
            func_0x00010006c00c(uVar21,uVar25);
            puVar13[4] = uVar21;
            puVar13[5] = uVar25;
          }
          else {
            uVar21 = puVar2[4];
            puVar13[5] = puVar2[5];
            puVar13[4] = uVar21;
          }
        }
        *(undefined2 *)(puVar13 + 6) = *(undefined2 *)(puVar2 + 6);
        puVar13[7] = puVar2[7];
        lVar10 = puVar2[9];
        if (lVar10 == 1) {
          uVar21 = puVar2[0x10];
          uVar23 = puVar2[0x13];
          uVar22 = puVar2[0x12];
          puVar13[0x11] = puVar2[0x11];
          puVar13[0x10] = uVar21;
          puVar13[0x13] = uVar23;
          puVar13[0x12] = uVar22;
          uVar21 = puVar2[0x14];
          puVar13[0x15] = puVar2[0x15];
          puVar13[0x14] = uVar21;
          uVar21 = *(undefined8 *)((long)puVar2 + 0xaa);
          *(undefined8 *)((long)puVar13 + 0xb2) = *(undefined8 *)((long)puVar2 + 0xb2);
          *(undefined8 *)((long)puVar13 + 0xaa) = uVar21;
          uVar21 = puVar2[8];
          uVar23 = puVar2[0xb];
          uVar22 = puVar2[10];
          puVar13[9] = puVar2[9];
          puVar13[8] = uVar21;
          puVar13[0xb] = uVar23;
          puVar13[10] = uVar22;
          uVar21 = puVar2[0xc];
          uVar23 = puVar2[0xf];
          uVar22 = puVar2[0xe];
          puVar13[0xd] = puVar2[0xd];
          puVar13[0xc] = uVar21;
          puVar13[0xf] = uVar23;
          puVar13[0xe] = uVar22;
        }
        else {
          puVar13[8] = puVar2[8];
          puVar13[9] = lVar10;
          uVar5 = puVar2[0xb];
          puVar13[10] = puVar2[10];
          puVar13[0xb] = uVar5;
          uVar21 = puVar2[0xc];
          uVar22 = puVar2[0xd];
          puVar13[0xc] = uVar21;
          puVar13[0xd] = uVar22;
          uVar22 = puVar2[0xe];
          uVar23 = puVar2[0xf];
          puVar13[0xe] = uVar22;
          puVar13[0xf] = uVar23;
          uVar23 = puVar2[0x10];
          uVar6 = puVar2[0x11];
          puVar13[0x10] = uVar23;
          puVar13[0x11] = uVar6;
          lVar10 = puVar2[0x13];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar5);
          _swift_bridgeObjectRetain(uVar21);
          _swift_bridgeObjectRetain(uVar22);
          _swift_bridgeObjectRetain(uVar23);
          _swift_bridgeObjectRetain(uVar6);
          if (lVar10 == 1) {
            uVar21 = puVar2[0x12];
            puVar13[0x13] = puVar2[0x13];
            puVar13[0x12] = uVar21;
          }
          else {
            puVar13[0x12] = puVar2[0x12];
            puVar13[0x13] = lVar10;
            _swift_bridgeObjectRetain(lVar10);
          }
          uVar21 = puVar2[0x15];
          puVar13[0x14] = puVar2[0x14];
          puVar13[0x15] = uVar21;
          puVar13[0x16] = puVar2[0x16];
          *(undefined2 *)(puVar13 + 0x17) = *(undefined2 *)(puVar2 + 0x17);
          _swift_bridgeObjectRetain();
        }
        *(undefined2 *)((long)puVar13 + 0xba) = *(undefined2 *)((long)puVar2 + 0xba);
        if (puVar2[0x18] == 0) {
          lVar10 = puVar2[0x18];
          uVar22 = puVar2[0x1b];
          uVar21 = puVar2[0x1a];
          puVar13[0x19] = puVar2[0x19];
          puVar13[0x18] = lVar10;
          puVar13[0x1b] = uVar22;
          puVar13[0x1a] = uVar21;
          uVar21 = puVar2[0x1c];
          uVar23 = puVar2[0x1f];
          uVar22 = puVar2[0x1e];
          puVar13[0x1d] = puVar2[0x1d];
          puVar13[0x1c] = uVar21;
          puVar13[0x1f] = uVar23;
          puVar13[0x1e] = uVar22;
        }
        else {
          puVar13[0x18] = puVar2[0x18];
          uVar21 = puVar2[0x19];
          puVar13[0x1a] = puVar2[0x1a];
          puVar13[0x19] = uVar21;
          uVar21 = puVar2[0x1c];
          puVar13[0x1b] = puVar2[0x1b];
          puVar13[0x1c] = uVar21;
          lVar10 = puVar2[0x1e];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar21);
          if (lVar10 == 0) {
            uVar21 = puVar2[0x1d];
            puVar13[0x1e] = puVar2[0x1e];
            puVar13[0x1d] = uVar21;
            puVar13[0x1f] = puVar2[0x1f];
          }
          else {
            puVar13[0x1d] = puVar2[0x1d];
            puVar13[0x1e] = lVar10;
            uVar21 = puVar2[0x1f];
            puVar13[0x1f] = uVar21;
            _swift_bridgeObjectRetain(lVar10);
            _swift_bridgeObjectRetain(uVar21);
          }
        }
        *(undefined1 *)(puVar13 + 0x20) = *(undefined1 *)(puVar2 + 0x20);
        uVar21 = puVar2[0x22];
        puVar13[0x21] = puVar2[0x21];
        puVar13[0x22] = uVar21;
        uVar21 = puVar2[0x24];
        puVar13[0x23] = puVar2[0x23];
        puVar13[0x24] = uVar21;
        uVar22 = puVar2[0x25];
        puVar13[0x26] = puVar2[0x26];
        puVar13[0x25] = uVar22;
        uVar22 = *(undefined8 *)((long)puVar2 + 0x132);
        *(undefined8 *)((long)puVar13 + 0x13a) = *(undefined8 *)((long)puVar2 + 0x13a);
        *(undefined8 *)((long)puVar13 + 0x132) = uVar22;
        lVar10 = puVar2[0x2a];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar21);
        if (lVar10 == 0) {
          uVar21 = puVar2[0x29];
          uVar23 = puVar2[0x2c];
          uVar22 = puVar2[0x2b];
          puVar13[0x2a] = puVar2[0x2a];
          puVar13[0x29] = uVar21;
          puVar13[0x2c] = uVar23;
          puVar13[0x2b] = uVar22;
        }
        else {
          puVar13[0x29] = puVar2[0x29];
          puVar13[0x2a] = lVar10;
          uVar21 = puVar2[0x2c];
          puVar13[0x2b] = puVar2[0x2b];
          puVar13[0x2c] = uVar21;
          _swift_bridgeObjectRetain(lVar10);
          _swift_bridgeObjectRetain(uVar21);
        }
        uVar21 = puVar2[0x2e];
        puVar13[0x2d] = puVar2[0x2d];
        puVar13[0x2e] = uVar21;
        uVar21 = puVar2[0x2f];
        uVar22 = puVar2[0x30];
        *(undefined1 *)(puVar13 + 0x31) = *(undefined1 *)(puVar2 + 0x31);
        uVar25 = puVar2[0x36];
        uVar9 = *(uint5 *)(puVar2 + 0x39);
        puVar13[0x2f] = uVar21;
        puVar13[0x30] = uVar22;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar22);
        if ((((uVar25 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
           (((ulong)uVar9 & 0xfefefefefefefefe) == 0x6fefefefe)) {
          uVar21 = puVar2[0x32];
          uVar23 = puVar2[0x35];
          uVar22 = puVar2[0x34];
          puVar13[0x33] = puVar2[0x33];
          puVar13[0x32] = uVar21;
          puVar13[0x35] = uVar23;
          puVar13[0x34] = uVar22;
          uVar21 = puVar2[0x36];
          puVar13[0x37] = puVar2[0x37];
          puVar13[0x36] = uVar21;
          uVar21 = *(undefined8 *)((long)puVar2 + 0x1bd);
          *(undefined8 *)((long)puVar13 + 0x1c5) = *(undefined8 *)((long)puVar2 + 0x1c5);
          *(undefined8 *)((long)puVar13 + 0x1bd) = uVar21;
        }
        else {
          uVar21 = puVar2[0x32];
          uVar5 = puVar2[0x33];
          uVar22 = puVar2[0x34];
          uVar6 = puVar2[0x35];
          uVar23 = puVar2[0x37];
          uVar7 = puVar2[0x38];
          func_0x00010179a2b8(uVar21,uVar5,uVar22,uVar6,uVar25,uVar23,uVar7,(ulong)uVar9);
          puVar13[0x32] = uVar21;
          puVar13[0x33] = uVar5;
          puVar13[0x34] = uVar22;
          puVar13[0x35] = uVar6;
          puVar13[0x36] = uVar25;
          puVar13[0x37] = uVar23;
          puVar13[0x38] = uVar7;
          *(char *)((long)puVar13 + 0x1cc) = (char)(uVar9 >> 0x20);
          *(int *)(puVar13 + 0x39) = (int)uVar9;
        }
        *(undefined1 *)((long)puVar13 + 0x1cd) = *(undefined1 *)((long)puVar2 + 0x1cd);
        uVar21 = puVar2[0x3b];
        puVar13[0x3a] = puVar2[0x3a];
        puVar13[0x3b] = uVar21;
        *(undefined1 *)(puVar13 + 0x3c) = *(undefined1 *)(puVar2 + 0x3c);
        lVar10 = puVar2[0x3e];
        _swift_bridgeObjectRetain();
        if (lVar10 == 0) {
          uVar21 = puVar2[0x3d];
          uVar23 = puVar2[0x40];
          uVar22 = puVar2[0x3f];
          puVar13[0x3e] = puVar2[0x3e];
          puVar13[0x3d] = uVar21;
          puVar13[0x40] = uVar23;
          puVar13[0x3f] = uVar22;
          uVar21 = puVar2[0x41];
          puVar13[0x42] = puVar2[0x42];
          puVar13[0x41] = uVar21;
        }
        else {
          puVar13[0x3d] = puVar2[0x3d];
          puVar13[0x3e] = lVar10;
          uVar21 = puVar2[0x40];
          puVar13[0x3f] = puVar2[0x3f];
          puVar13[0x40] = uVar21;
          puVar13[0x41] = puVar2[0x41];
          uVar22 = puVar2[0x42];
          puVar13[0x42] = uVar22;
          _swift_bridgeObjectRetain(lVar10);
          _swift_bridgeObjectRetain(uVar21);
          _swift_bridgeObjectRetain(uVar22);
        }
        *(undefined1 *)(puVar13 + 0x43) = *(undefined1 *)(puVar2 + 0x43);
        lVar10 = puVar2[0x45];
        if (lVar10 == 0) {
          uVar21 = puVar2[0x44];
          uVar23 = puVar2[0x47];
          uVar22 = puVar2[0x46];
          puVar13[0x45] = puVar2[0x45];
          puVar13[0x44] = uVar21;
          puVar13[0x47] = uVar23;
          puVar13[0x46] = uVar22;
          uVar21 = puVar2[0x48];
          puVar13[0x49] = puVar2[0x49];
          puVar13[0x48] = uVar21;
          puVar13[0x4a] = puVar2[0x4a];
        }
        else {
          puVar13[0x44] = puVar2[0x44];
          puVar13[0x45] = lVar10;
          puVar13[0x46] = puVar2[0x46];
          uVar21 = puVar2[0x47];
          puVar13[0x47] = uVar21;
          puVar13[0x48] = puVar2[0x48];
          uVar22 = puVar2[0x49];
          puVar13[0x49] = uVar22;
          puVar13[0x4a] = puVar2[0x4a];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar21);
          _swift_bridgeObjectRetain(uVar22);
        }
        puVar13[0x4b] = puVar2[0x4b];
        _swift_bridgeObjectRetain();
      }
      (**(code **)(lVar20 + 0x38))(puVar1,0,1,lVar12);
    }
    else {
      lVar10 = 0x112db3cc8;
      func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  }
  else {
    lVar10 = *param_2;
    *param_1 = lVar10;
    uVar25 = (ulong)uVar8 & 0xff;
    param_1 = (long *)(lVar10 + (uVar25 + 0x10 & (uVar25 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}


