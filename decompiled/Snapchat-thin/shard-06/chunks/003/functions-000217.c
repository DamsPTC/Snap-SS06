/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104712c68; end: 104712c7b;  */

bool FUN_104712c68(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104712c7c; end: 104712d27;  */

void FUN_104712c7c(void)

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



/* Entry: 104712d28; end: 104712d57;  */

undefined1  [16] FUN_104712d28(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x6570697773;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x706174;
  }
  uVar2 = 0xe500000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe300000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 104712d58; end: 104712e2b;  */

void FUN_104712d58(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x706174 || param_3 != -0x1d00000000000000) {
    uVar1 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x706174,0xe300000000000000,param_2,param_3,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0x6570697773;
      if ((param_2 == 0x6570697773) && (param_3 == -0x1b00000000000000)) {
        _swift_bridgeObjectRelease(0xe500000000000000);
        uVar2 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x6570697773,0xe500000000000000,param_2,param_3,0);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if ((uVar1 & 1) == 0) {
          uVar2 = 2;
        }
      }
      goto LAB_104712db8;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_104712db8:
  *param_1 = uVar2;
  return;
}



/* Entry: 104712e2c; end: 104712e43;  */

undefined1  [16] FUN_104712e2c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 104712e44; end: 104712e93;  */

void FUN_104712e44(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10471389c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 104712e94; end: 104712eb7;  */

undefined8 FUN_104712e94(void)

{
  return 1;
}



/* Entry: 104712eb8; end: 104712f07;  */

void FUN_104712eb8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001047138dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 104712f08; end: 104712f0f;  */

undefined8 FUN_104712f08(void)

{
  return 1;
}



/* Entry: 104712f10; end: 104712f8b;  */

void FUN_104712f10(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104712f8c; end: 104712f9b;  */

undefined1  [16] FUN_104712f8c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe400000000000000;
  auVar1._0_8_ = 0x6f666e69;
  return auVar1;
}



/* Entry: 104712f9c; end: 10471301f;  */

void FUN_104712f9c(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  if (param_2 == 0x6f666e69 && param_3 == -0x1c00000000000000) {
    _swift_bridgeObjectRelease(param_3);
    bVar1 = 0;
  }
  else {
    bVar1 = 0x69;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x6f666e69,0xe400000000000000,param_2,param_3,0);
    _swift_bridgeObjectRelease(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 104713020; end: 10471302b;  */

undefined1  [16] FUN_104713020(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10471302c; end: 10471307b;  */

void FUN_10471302c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010471395c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 10471307c; end: 10471336f;  */

void FUN_10471307c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar7;
  long *unaff_x20;
  long lVar8;
  ulong uStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  long lStack_70;
  
  lVar3 = 0x11308df88;
  func_0x0001000285a8(0x11308df88,&UNK_10dd30a98);
  lStack_118 = *(long *)(lVar3 + -8);
  lStack_110 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_118 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x11308df90;
  lStack_120 = (long)&uStack_130 - extraout_x8;
  func_0x0001000285a8(0x11308df90,&UNK_10dd30aa0);
  lStack_108 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_108 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = ((long)&uStack_130 - extraout_x8) - extraout_x8_00;
  lVar4 = 0x11308df98;
  func_0x0001000285a8(0x11308df98,&UNK_10dd30aa8);
  lStack_f0 = *(long *)(lVar4 + -8);
  lStack_e8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_f0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_10471389c();
  puVar5 = &UNK_11079d030;
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (lVar8 - extraout_x8_01,&UNK_11079d030,&UNK_11079d030,param_1,uVar1,uVar2);
  lVar4 = *unaff_x20;
  lStack_d8 = unaff_x20[1];
  lStack_d0 = unaff_x20[2];
  lStack_c8 = unaff_x20[3];
  lStack_100 = unaff_x20[4];
  lStack_f8 = unaff_x20[5];
  if (unaff_x20[0xd] < 0) {
    lStack_108 = unaff_x20[0xe];
    lStack_128 = unaff_x20[0xc];
    uStack_130 = unaff_x20[0xd] & 0x7fffffffffffffff;
    lStack_e0 = CONCAT71(lStack_e0._1_7_,1);
    func_0x0001047138dc();
    lVar6 = lStack_e8;
    lVar3 = lStack_120;
    __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
              (lStack_120,&UNK_11079d150,&lStack_e0,lStack_e8,&UNK_11079d150,puVar5);
    lStack_c0 = lStack_100;
    lStack_b8 = lStack_f8;
    lStack_a8 = unaff_x20[7];
    lStack_b0 = unaff_x20[6];
    lStack_98 = unaff_x20[9];
    lStack_a0 = unaff_x20[8];
    lStack_88 = unaff_x20[0xb];
    lStack_90 = unaff_x20[10];
    lStack_80 = lStack_128;
    uStack_78 = uStack_130;
    lStack_70 = lStack_108;
    lStack_e0 = lVar4;
    func_0x00010471391c();
    lVar4 = lStack_110;
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF(&lStack_e0);
    (**(code **)(lStack_118 + 8))(lVar3,lVar4);
    pcVar7 = *(code **)(lStack_f0 + 8);
  }
  else {
    lStack_e0 = (ulong)lStack_e0._1_7_ << 8;
    func_0x00010471395c();
    lVar6 = lStack_e8;
    __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
              (lVar8,&UNK_11079d0c0,&lStack_e0,lStack_e8,&UNK_11079d0c0,puVar5);
    lStack_c0 = lStack_100;
    lStack_b8 = lStack_f8;
    lStack_e0 = lVar4;
    func_0x00010471399c();
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF(&lStack_e0);
    (**(code **)(lStack_108 + 8))(lVar8,lVar3);
    pcVar7 = *(code **)(lStack_f0 + 8);
  }
  (*pcVar7)(lVar8 - extraout_x8_01,lVar6);
  return;
}



/* Entry: 104713370; end: 10471345f;  */

void FUN_104713370(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar5 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  uVar6 = unaff_x20[3];
  uVar4 = unaff_x20[4];
  uVar7 = unaff_x20[5];
  if ((long)unaff_x20[0xd] < 0) {
    __ss6HasherV8_combineyySuF(1);
    FUN_1047169a4(param_1);
  }
  else {
    __ss6HasherV8_combineyySuF(0);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
    uVar2 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
    uVar2 = 0;
    if ((uVar6 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar6;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
    uVar2 = 0;
    if ((uVar4 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
    __ss6HasherV8_combineyySuF(uVar7);
  }
  return;
}



/* Entry: 104713460; end: 104713667;  */

void FUN_104713460(void)

{
  ulong uVar1;
  ulong uVar2;
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
  ulong *unaff_x20;
  ulong uVar15;
  undefined1 auStack_a8 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_a8,0);
  uVar1 = *unaff_x20;
  uVar7 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar8 = unaff_x20[3];
  uVar3 = unaff_x20[4];
  uVar9 = unaff_x20[5];
  uVar15 = unaff_x20[0xd];
  if ((long)uVar15 < 0) {
    uVar13 = unaff_x20[0xc];
    uVar14 = unaff_x20[0xe];
    uVar4 = unaff_x20[10];
    uVar10 = unaff_x20[0xb];
    uVar5 = unaff_x20[8];
    uVar11 = unaff_x20[9];
    uVar6 = unaff_x20[6];
    uVar12 = unaff_x20[7];
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyySuF(uVar1);
    __ss6HasherV8_combineyySuF(uVar7);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar1 = 0;
    if ((uVar8 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar8;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar1 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar1 = 0;
    if ((uVar9 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar9;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar1 = 0;
    if ((uVar6 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar6;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar1 = 0;
    if ((uVar12 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar12;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar1 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar1 = 0;
    if ((uVar11 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar11;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar1 = 0;
    if ((uVar4 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar1 = 0;
    if ((uVar10 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar10;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    if ((uVar15 & 0xff) == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar1 = 0;
      if ((uVar13 & 0x7fffffffffffffff) != 0) {
        uVar1 = uVar13;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar1);
    }
  }
  else {
    __ss6HasherV8_combineyySuF(0);
    uVar15 = 0;
    if ((uVar1 & 0x7fffffffffffffff) != 0) {
      uVar15 = uVar1;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar15);
    uVar1 = 0;
    if ((uVar7 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar7;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar1 = 0;
    if ((uVar8 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar8;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar1 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar14 = uVar9;
  }
  __ss6HasherV8_combineyySuF(uVar14);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104713668; end: 10471366f;  */

void FUN_104713668(void)

{
  ulong uVar1;
  ulong uVar2;
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
  ulong *unaff_x20;
  ulong uVar15;
  undefined1 auStack_a8 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_a8,0);
  uVar1 = *unaff_x20;
  uVar7 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar8 = unaff_x20[3];
  uVar3 = unaff_x20[4];
  uVar9 = unaff_x20[5];
  uVar15 = unaff_x20[0xd];
  if ((long)uVar15 < 0) {
    uVar13 = unaff_x20[0xc];
    uVar14 = unaff_x20[0xe];
    uVar4 = unaff_x20[10];
    uVar10 = unaff_x20[0xb];
    uVar5 = unaff_x20[8];
    uVar11 = unaff_x20[9];
    uVar6 = unaff_x20[6];
    uVar12 = unaff_x20[7];
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyySuF(uVar1);
    __ss6HasherV8_combineyySuF(uVar7);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar1 = 0;
    if ((uVar8 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar8;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar1 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar1 = 0;
    if ((uVar9 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar9;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar1 = 0;
    if ((uVar6 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar6;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar1 = 0;
    if ((uVar12 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar12;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar1 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar1 = 0;
    if ((uVar11 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar11;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar1 = 0;
    if ((uVar4 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar1 = 0;
    if ((uVar10 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar10;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    if ((uVar15 & 0xff) == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar1 = 0;
      if ((uVar13 & 0x7fffffffffffffff) != 0) {
        uVar1 = uVar13;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar1);
    }
  }
  else {
    __ss6HasherV8_combineyySuF(0);
    uVar15 = 0;
    if ((uVar1 & 0x7fffffffffffffff) != 0) {
      uVar15 = uVar1;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar15);
    uVar1 = 0;
    if ((uVar7 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar7;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar1 = 0;
    if ((uVar8 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar8;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar1 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar14 = uVar9;
  }
  __ss6HasherV8_combineyySuF(uVar14);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104713670; end: 1047136a7;  */

void FUN_104713670(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_104713370(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047136a8; end: 10471370b;  */

void FUN_1047136a8(undefined8 *param_1)

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
  
  FUN_1047139dc(&uStack_98);
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



/* Entry: 10471370c; end: 10471371f;  */

void FUN_10471370c(void)

{
  FUN_10471307c();
  return;
}



/* Entry: 104713720; end: 10471389b;  */

uint FUN_104713720(undefined8 *param_1,undefined8 *param_2)

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
  func_0x0001047137a0(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 10471389c; end: 1047139db;  */

void FUN_10471389c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dfa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30e68;
  _swift_getWitnessTable(&UNK_10dd30e68,&UNK_11079d030);
  puRam000000011308dfa0 = puVar1;
  return;
}



/* Entry: 1047139dc; end: 104713e8f;  */

/* WARNING: Removing unreachable block (ram,0x000104713d6c) */
/* WARNING: Removing unreachable block (ram,0x000104713df0) */
/* WARNING: Removing unreachable block (ram,0x000104713d70) */

void FUN_1047139dc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar9;
  long unaff_x21;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uVar13;
  undefined8 uStack_e8;
  char cStack_e0;
  undefined7 uStack_df;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  long lStack_70;
  
  lVar3 = 0x11308e018;
  puStack_128 = param_1;
  func_0x0001000285a8(0x11308e018,&UNK_10dd30eb8);
  lStack_120 = *(long *)(lVar3 + -8);
  lStack_100 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_120 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x11308e020;
  lStack_110 = (long)&lStack_150 - extraout_x8;
  func_0x0001000285a8(0x11308e020,&UNK_10dd30ec0);
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = ((long)&lStack_150 - extraout_x8) - extraout_x8_00;
  lVar4 = 0x11308e028;
  func_0x0001000285a8(0x11308e028,&UNK_10dd30ec8);
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar13 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  lVar5 = param_2;
  func_0x0001000a8868(param_2,uVar13);
  FUN_10471389c();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar12 - extraout_x8_01,&UNK_11079d030,&UNK_11079d030,lVar5,uVar13,uVar1);
  lVar7 = lStack_100;
  lVar5 = lStack_110;
  if (unaff_x21 == 0) {
    lVar6 = lVar4;
    lStack_150 = lVar11;
    lStack_148 = lVar3;
    lStack_140 = lVar12 - extraout_x8_01;
    __ss22KeyedDecodingContainerV7allKeysSayxGvg();
    if ((*(long *)(lVar6 + 0x10) != 0) &&
       (cStack_e0 = *(char *)(lVar6 + 0x20), *(long *)(lVar6 + 0x10) == 1 && cStack_e0 != '\x02')) {
      if (cStack_e0 == '\x01') {
        lVar11 = lVar6;
        func_0x0001047138dc();
        lVar3 = lStack_140;
        __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                  (lVar5,&UNK_11079d150,&cStack_e0,lVar4,&UNK_11079d150,lVar11);
        func_0x0001047144d8();
        __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF(&cStack_e0);
        (**(code **)(lStack_120 + 8))(lVar5,lVar7);
        (**(code **)(lVar10 + 8))(lVar3,lVar4);
        _swift_unknownObjectRelease(lVar6);
        uVar13 = CONCAT71(uStack_df,cStack_e0);
        uStack_f8 = uStack_c8;
        lStack_100 = uStack_d0;
        uStack_e8 = uStack_d8;
        uStack_138 = uStack_98;
        lStack_140 = lStack_a0;
        uStack_108 = uStack_b8;
        lStack_110 = uStack_c0;
        uStack_118 = uStack_a8;
        lStack_120 = lStack_b0;
        uVar9 = uStack_78 & 1 | 0x8000000000000000;
        lVar4 = lStack_90;
        lVar5 = lStack_70;
        lVar7 = lStack_88;
        lVar10 = lStack_80;
      }
      else {
        lVar3 = lVar6;
        func_0x00010471395c();
        lVar5 = lStack_140;
        __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                  (lVar12,&UNK_11079d0c0,&cStack_e0,lVar4,&UNK_11079d0c0,lVar3);
        func_0x000104714518();
        lVar3 = lStack_148;
        __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF(&cStack_e0);
        (**(code **)(lStack_150 + 8))(lVar12,lVar3);
        (**(code **)(lVar10 + 8))(lVar5,lVar4);
        _swift_unknownObjectRelease(lVar6);
        uVar9 = 0;
        uVar13 = CONCAT71(uStack_df,cStack_e0);
        uStack_f8 = uStack_c8;
        lStack_100 = uStack_d0;
        uStack_e8 = uStack_d8;
        uStack_108 = uStack_b8;
        lStack_110 = uStack_c0;
      }
      func_0x0001000834e4(param_2);
      puStack_128[1] = uStack_e8;
      *puStack_128 = uVar13;
      puStack_128[3] = uStack_f8;
      puStack_128[2] = lStack_100;
      puStack_128[5] = uStack_108;
      puStack_128[4] = lStack_110;
      puStack_128[7] = uStack_118;
      puStack_128[6] = lStack_120;
      puStack_128[9] = uStack_138;
      puStack_128[8] = lStack_140;
      puStack_128[10] = lVar4;
      puStack_128[0xb] = lVar7;
      puStack_128[0xc] = lVar10;
      puStack_128[0xd] = uVar9;
      puStack_128[0xe] = lVar5;
      return;
    }
    lVar7 = 0;
    __ss13DecodingErrorOMa();
    puVar8 = (undefined8 *)PTR___ss13DecodingErrorOs0B0sWP_11034e5b0;
    _swift_allocError();
    lVar3 = 0x112da1fc8;
    func_0x0001000285a8(0x112da1fc8,&UNK_10dae6550);
    lVar5 = lStack_140;
    iVar2 = *(int *)(lVar3 + 0x30);
    *puVar8 = &UNK_11079cfa0;
    __ss22KeyedDecodingContainerV10codingPathSays9CodingKey_pGvg(lVar4);
    __ss13DecodingErrorO7ContextV10codingPath16debugDescription010underlyingB0ADSays9CodingKey_pG_SSs0B0_pSgtcfC
              ((long)puVar8 + (long)iVar2);
    (**(code **)(*(long *)(lVar7 + -8) + 0x68))
              (puVar8,*(undefined4 *)
                       PTR___ss13DecodingErrorO12typeMismatchyABypXp_AB7ContextVtcABmFWC_11034e580,
               lVar7);
    _swift_willThrow();
    (**(code **)(lVar10 + 8))(lVar5,lVar4);
    _swift_unknownObjectRelease(lVar6);
  }
  func_0x0001000834e4(param_2);
  return;
}



/* Entry: 104713e90; end: 104713e93;  */

void FUN_104713e90(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dfc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30b40;
  _swift_getWitnessTable(&UNK_10dd30b40,&UNK_11079cfa0);
  puRam000000011308dfc8 = puVar1;
  return;
}



/* Entry: 104713e94; end: 104713ed3;  */

void FUN_104713e94(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dfc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30b40;
  _swift_getWitnessTable(&UNK_10dd30b40,&UNK_11079cfa0);
  puRam000000011308dfc8 = puVar1;
  return;
}



/* Entry: 104713ed4; end: 104713eff;  */

long FUN_104713ed4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104713f00; end: 104714277;  */

int FUN_104713f00(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1e] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = (uint)(*(ulong *)(param_1 + 0x1a) >> 1);
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Entry: 104714278; end: 1047142b7;  */

void FUN_104714278(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dfd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30c30;
  _swift_getWitnessTable(&UNK_10dd30c30,&UNK_11079d150);
  puRam000000011308dfd0 = puVar1;
  return;
}



/* Entry: 1047142b8; end: 1047142bb;  */

void FUN_1047142b8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dfd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30ce8;
  _swift_getWitnessTable(&UNK_10dd30ce8,&UNK_11079d0c0);
  puRam000000011308dfd8 = puVar1;
  return;
}



/* Entry: 1047142bc; end: 1047142fb;  */

void FUN_1047142bc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dfd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30ce8;
  _swift_getWitnessTable(&UNK_10dd30ce8,&UNK_11079d0c0);
  puRam000000011308dfd8 = puVar1;
  return;
}



/* Entry: 1047142fc; end: 1047142ff;  */

void FUN_1047142fc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dfe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30da0;
  _swift_getWitnessTable(&UNK_10dd30da0,&UNK_11079d030);
  puRam000000011308dfe0 = puVar1;
  return;
}



/* Entry: 104714300; end: 10471433f;  */

void FUN_104714300(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dfe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30da0;
  _swift_getWitnessTable(&UNK_10dd30da0,&UNK_11079d030);
  puRam000000011308dfe0 = puVar1;
  return;
}



/* Entry: 104714340; end: 104714343;  */

void FUN_104714340(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dfe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30c80;
  _swift_getWitnessTable(&UNK_10dd30c80,&UNK_11079d0c0);
  puRam000000011308dfe8 = puVar1;
  return;
}



/* Entry: 104714344; end: 104714383;  */

void FUN_104714344(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dfe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30c80;
  _swift_getWitnessTable(&UNK_10dd30c80,&UNK_11079d0c0);
  puRam000000011308dfe8 = puVar1;
  return;
}



/* Entry: 104714384; end: 104714387;  */

void FUN_104714384(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dff0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30c58;
  _swift_getWitnessTable(&UNK_10dd30c58,&UNK_11079d0c0);
  puRam000000011308dff0 = puVar1;
  return;
}



/* Entry: 104714388; end: 1047143c7;  */

void FUN_104714388(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dff0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30c58;
  _swift_getWitnessTable(&UNK_10dd30c58,&UNK_11079d0c0);
  puRam000000011308dff0 = puVar1;
  return;
}



/* Entry: 1047143c8; end: 1047143cb;  */

void FUN_1047143c8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dff8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30bc8;
  _swift_getWitnessTable(&UNK_10dd30bc8,&UNK_11079d150);
  puRam000000011308dff8 = puVar1;
  return;
}



/* Entry: 1047143cc; end: 10471440b;  */

void FUN_1047143cc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dff8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30bc8;
  _swift_getWitnessTable(&UNK_10dd30bc8,&UNK_11079d150);
  puRam000000011308dff8 = puVar1;
  return;
}



/* Entry: 10471440c; end: 10471440f;  */

void FUN_10471440c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e000 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30ba0;
  _swift_getWitnessTable(&UNK_10dd30ba0,&UNK_11079d150);
  puRam000000011308e000 = puVar1;
  return;
}



/* Entry: 104714410; end: 10471444f;  */

void FUN_104714410(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e000 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30ba0;
  _swift_getWitnessTable(&UNK_10dd30ba0,&UNK_11079d150);
  puRam000000011308e000 = puVar1;
  return;
}



/* Entry: 104714450; end: 104714453;  */

void FUN_104714450(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e008 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30d38;
  _swift_getWitnessTable(&UNK_10dd30d38,&UNK_11079d030);
  puRam000000011308e008 = puVar1;
  return;
}



/* Entry: 104714454; end: 104714493;  */

void FUN_104714454(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e008 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30d38;
  _swift_getWitnessTable(&UNK_10dd30d38,&UNK_11079d030);
  puRam000000011308e008 = puVar1;
  return;
}



/* Entry: 104714494; end: 104714497;  */

void FUN_104714494(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e010 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30d10;
  _swift_getWitnessTable(&UNK_10dd30d10,&UNK_11079d030);
  puRam000000011308e010 = puVar1;
  return;
}



/* Entry: 104714498; end: 104714557;  */

void FUN_104714498(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e010 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30d10;
  _swift_getWitnessTable(&UNK_10dd30d10,&UNK_11079d030);
  puRam000000011308e010 = puVar1;
  return;
}



/* Entry: 104714558; end: 1047145a3;  */

void FUN_104714558(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  if (param_2 == 0x6f666e69 && param_3 == -0x1c00000000000000) {
    _swift_bridgeObjectRelease(param_3);
    bVar1 = 0;
  }
  else {
    bVar1 = 0x69;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x6f666e69,0xe400000000000000,param_2,param_3,0);
    _swift_bridgeObjectRelease(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 1047145a4; end: 10471464f;  */

void FUN_1047145a4(void)

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



/* Entry: 104714650; end: 1047146db;  */

undefined1  [16] FUN_104714650(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  char *pcVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
  
  bVar4 = *unaff_x20;
  uVar1 = 0xd00000000000001e;
  pcVar5 = "isibleTimestampMs";
  if (bVar4 != 2) {
    uVar1 = 0xd000000000000011;
    pcVar5 = "attachmentTriggeredTimestampMs";
  }
  uVar2 = 0xe90000000000006f;
  uVar6 = 0x666e496b63696c63;
  if (bVar4 != 0) {
    uVar2 = 0x800000010f20cf70;
    uVar6 = 0xd000000000000021;
  }
  uVar3 = (ulong)pcVar5 | 0x8000000000000000;
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar1 = uVar6;
  }
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = uVar1;
  return auVar7;
}



/* Entry: 1047146dc; end: 1047146ff;  */

void FUN_1047146dc(undefined1 *param_1,undefined1 param_2)

{
  FUN_104715178();
  *param_1 = param_2;
  return;
}



/* Entry: 104714700; end: 104714717;  */

undefined1  [16] FUN_104714700(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 104714718; end: 104714767;  */

void FUN_104714718(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1047150f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 104714768; end: 10471476b;  */

undefined1 FUN_104714768(double *param_1,double *param_2)

{
  ulong uVar1;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  dStack_120 = *param_1;
  dStack_118 = param_1[1];
  dStack_110 = param_1[2];
  dStack_108 = param_1[3];
  dStack_100 = param_1[4];
  dStack_a8 = *param_2;
  dStack_a0 = param_2[1];
  dStack_98 = param_2[2];
  dStack_90 = param_2[3];
  dStack_88 = param_2[4];
  dStack_40 = param_2[0xd];
  if ((long)param_1[0xd] < 0) {
    if (-1 < (long)dStack_40) {
      return 0;
    }
    uVar1 = 0;
    dStack_f0 = param_1[6];
    dStack_f8 = param_1[5];
    dStack_e0 = param_1[8];
    dStack_e8 = param_1[7];
    dStack_d0 = param_1[10];
    dStack_d8 = param_1[9];
    dStack_c0 = param_1[0xc];
    dStack_c8 = param_1[0xb];
    dStack_b0 = param_1[0xe];
    dStack_78 = param_2[6];
    dStack_80 = param_2[5];
    dStack_68 = param_2[8];
    dStack_70 = param_2[7];
    dStack_58 = param_2[10];
    dStack_60 = param_2[9];
    dStack_48 = param_2[0xc];
    dStack_50 = param_2[0xb];
    dStack_38 = param_2[0xe];
    dStack_b8 = ABS(param_1[0xd]);
    dStack_40 = ABS(dStack_40);
    FUN_104716dac(&dStack_120,&dStack_a8);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  else {
    if ((long)dStack_40 < 0) {
      return 0;
    }
    if (dStack_120 != dStack_a8) {
      return 0;
    }
    if (dStack_118 != dStack_a0) {
      return 0;
    }
    if (dStack_110 != dStack_98) {
      return 0;
    }
    if (dStack_108 != dStack_90) {
      return 0;
    }
    if (dStack_100 != dStack_88) {
      return 0;
    }
    if (SUB84(param_1[5],0) != SUB84(param_2[5],0)) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    if (*(char *)(param_2 + 0x10) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 0x10) == '\x01') {
      return 0;
    }
    if (param_1[0xf] != param_2[0xf]) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0x12) == '\x01') {
    if (*(char *)(param_2 + 0x12) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 0x12) == '\x01') {
      return 0;
    }
    if (param_1[0x11] != param_2[0x11]) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0x14) == '\x01') {
    if (*(char *)(param_2 + 0x14) == '\x01') {
      return 1;
    }
  }
  else if ((*(char *)(param_2 + 0x14) != '\x01') && (param_1[0x13] == param_2[0x13])) {
    return 1;
  }
  return 0;
}



/* Entry: 10471476c; end: 10471491b;  */

void FUN_10471476c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_e0 [15];
  undefined1 uStack_d1;
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
  
  lVar3 = 0x11308e040;
  func_0x0001000285a8(0x11308e040,&UNK_10dd30ed0);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_e0 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_1047150f8();
  puVar4 = &UNK_11079d318;
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar5,&UNK_11079d318,&UNK_11079d318,param_1,uVar1,uVar2);
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_68 = unaff_x20[0xd];
  uStack_70 = unaff_x20[0xc];
  uStack_60 = unaff_x20[0xe];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_d1 = 0;
  func_0x000104715138();
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
            (&uStack_d0,&uStack_d1,lVar3,&UNK_11079cfa0,puVar4);
  if (unaff_x21 == 0) {
    uStack_d0._0_1_ = 1;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySdSg_xtKF
              (unaff_x20[0xf],*(undefined1 *)(unaff_x20 + 0x10),&uStack_d0,lVar3);
    uStack_d0._0_1_ = 2;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySdSg_xtKF
              (unaff_x20[0x11],*(undefined1 *)(unaff_x20 + 0x12),&uStack_d0,lVar3);
    uStack_d0 = CONCAT71(uStack_d0._1_7_,3);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySiSg_xtKF
              (unaff_x20[0x13],*(undefined1 *)(unaff_x20 + 0x14),&uStack_d0,lVar3);
    (**(code **)(lVar6 + 8))(puVar5,lVar3);
  }
  else {
    (**(code **)(lVar6 + 8))(puVar5,lVar3);
  }
  return;
}



/* Entry: 10471491c; end: 104714abb;  */

void FUN_10471491c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar7 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  uVar2 = unaff_x20[4];
  uVar5 = unaff_x20[5];
  if ((long)unaff_x20[0xd] < 0) {
    __ss6HasherV8_combineyySuF(1);
    FUN_1047169a4(param_1);
  }
  else {
    __ss6HasherV8_combineyySuF(0);
    uVar1 = 0;
    if ((uVar6 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar6;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar6 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar6 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar6);
    uVar6 = 0;
    if ((uVar7 & 0x7fffffffffffffff) != 0) {
      uVar6 = uVar7;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar6);
    uVar6 = 0;
    if ((uVar4 & 0x7fffffffffffffff) != 0) {
      uVar6 = uVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar6);
    uVar6 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar6 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar6);
    __ss6HasherV8_combineyySuF(uVar5);
  }
  if ((char)unaff_x20[0x10] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = unaff_x20[0xf];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar6 = 0;
    if ((uVar7 & 0x7fffffffffffffff) != 0) {
      uVar6 = uVar7;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar6);
  }
  if ((char)unaff_x20[0x12] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = unaff_x20[0x11];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar6 = 0;
    if ((uVar7 & 0x7fffffffffffffff) != 0) {
      uVar6 = uVar7;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar6);
  }
  if ((char)unaff_x20[0x14] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar6 = unaff_x20[0x13];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar6);
  }
  return;
}



/* Entry: 104714abc; end: 104714af7;  */

void FUN_104714abc(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_10471491c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104714af8; end: 104714afb;  */

void FUN_104714af8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar7 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  uVar2 = unaff_x20[4];
  uVar5 = unaff_x20[5];
  if ((long)unaff_x20[0xd] < 0) {
    __ss6HasherV8_combineyySuF(1);
    FUN_1047169a4(param_1);
  }
  else {
    __ss6HasherV8_combineyySuF(0);
    uVar1 = 0;
    if ((uVar6 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar6;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar6 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar6 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar6);
    uVar6 = 0;
    if ((uVar7 & 0x7fffffffffffffff) != 0) {
      uVar6 = uVar7;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar6);
    uVar6 = 0;
    if ((uVar4 & 0x7fffffffffffffff) != 0) {
      uVar6 = uVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar6);
    uVar6 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar6 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar6);
    __ss6HasherV8_combineyySuF(uVar5);
  }
  if ((char)unaff_x20[0x10] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = unaff_x20[0xf];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar6 = 0;
    if ((uVar7 & 0x7fffffffffffffff) != 0) {
      uVar6 = uVar7;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar6);
  }
  if ((char)unaff_x20[0x12] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = unaff_x20[0x11];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar6 = 0;
    if ((uVar7 & 0x7fffffffffffffff) != 0) {
      uVar6 = uVar7;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar6);
  }
  if ((char)unaff_x20[0x14] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar6 = unaff_x20[0x13];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar6);
  }
  return;
}



/* Entry: 104714afc; end: 104714b33;  */

void FUN_104714afc(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_10471491c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104714b34; end: 104714ba7;  */

void FUN_104714b34(undefined8 *param_1)

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
  undefined1 uStack_28;
  
  FUN_1047152e8(&uStack_c8);
  if (unaff_x21 == 0) {
    param_1[0x11] = uStack_40;
    param_1[0x10] = uStack_48;
    param_1[0x13] = uStack_30;
    param_1[0x12] = uStack_38;
    *(undefined1 *)(param_1 + 0x14) = uStack_28;
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



/* Entry: 104714ba8; end: 104714bbb;  */

void FUN_104714ba8(void)

{
  FUN_10471476c();
  return;
}



/* Entry: 104714bbc; end: 104714c4b;  */

uint FUN_104714bbc(undefined8 *param_1,undefined8 *param_2)

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
  undefined1 uStack_e0;
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
  undefined1 uStack_30;
  
  uVar1 = 0;
  uStack_f8 = param_1[0x11];
  uStack_100 = param_1[0x10];
  uStack_e8 = param_1[0x13];
  uStack_f0 = param_1[0x12];
  uStack_e0 = *(undefined1 *)(param_1 + 0x14);
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
  uStack_30 = *(undefined1 *)(param_2 + 0x14);
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
  FUN_104714eec(&uStack_180,&uStack_d0);
  return uVar1 & 1;
}



/* Entry: 104714c4c; end: 104714d23; -[SCAdClickInteraction withAttachmentFullyVisibleTimestampMs:] */

void FUN_104714c4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
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
  undefined8 uStack_138;
  undefined8 uStack_127;
  undefined8 uStack_11f;
  undefined8 uStack_117;
  undefined8 uStack_10f;
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
  undefined1 uStack_80;
  undefined8 uStack_7f;
  undefined8 uStack_77;
  undefined8 uStack_6f;
  undefined8 uStack_67;
  
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  FUN_1047e04f8(&uStack_1a8);
  uStack_b8 = uStack_160;
  uStack_c0 = uStack_168;
  uStack_a8 = uStack_150;
  uStack_b0 = uStack_158;
  uStack_98 = uStack_140;
  uStack_a0 = uStack_148;
  uStack_90 = uStack_138;
  uStack_f8 = uStack_1a0;
  uStack_100 = uStack_1a8;
  uStack_e8 = uStack_190;
  uStack_f0 = uStack_198;
  uStack_d8 = uStack_180;
  uStack_e0 = uStack_188;
  uStack_c8 = uStack_170;
  uStack_d0 = uStack_178;
  uStack_80 = 0;
  uStack_77 = uStack_11f;
  uStack_7f = uStack_127;
  uStack_67 = uStack_10f;
  uStack_6f = uStack_117;
  uStack_88 = param_1;
  _objc_allocWithZone(uVar1);
  puVar2 = &uStack_100;
  FUN_1047df924(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104714d24; end: 104714df7; -[SCAdClickInteraction withAttachmentTriggeredTimestampMs:] */

void FUN_104714d24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
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
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_117;
  undefined8 uStack_10f;
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
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined8 uStack_67;
  
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  FUN_1047e04f8(&uStack_1a8);
  uStack_a8 = uStack_150;
  uStack_b0 = uStack_158;
  uStack_98 = uStack_140;
  uStack_a0 = uStack_148;
  uStack_88 = uStack_130;
  uStack_90 = uStack_138;
  uStack_80 = uStack_128;
  uStack_d8 = uStack_180;
  uStack_e0 = uStack_188;
  uStack_c8 = uStack_170;
  uStack_d0 = uStack_178;
  uStack_b8 = uStack_160;
  uStack_c0 = uStack_168;
  uStack_f8 = uStack_1a0;
  uStack_100 = uStack_1a8;
  uStack_e8 = uStack_190;
  uStack_f0 = uStack_198;
  uStack_70 = 0;
  uStack_67 = uStack_10f;
  uStack_6f = uStack_117;
  uStack_78 = param_1;
  _objc_allocWithZone(uVar1);
  puVar2 = &uStack_100;
  FUN_1047df924(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104714df8; end: 104714eeb; -[SCAdClickInteraction withMultiSegmentIndex:] */

void FUN_104714df8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
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
  long lStack_58;
  undefined1 uStack_50;
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_1047e04f8(&uStack_198,param_1);
  uStack_50 = param_3 == 0;
  if ((bool)uStack_50) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c067fc0();
  }
  uStack_88 = uStack_130;
  uStack_90 = uStack_138;
  uStack_78 = uStack_120;
  uStack_80 = uStack_128;
  uStack_68 = uStack_110;
  uStack_70 = uStack_118;
  uStack_c8 = uStack_170;
  uStack_d0 = uStack_178;
  uStack_b8 = uStack_160;
  uStack_c0 = uStack_168;
  uStack_a8 = uStack_150;
  uStack_b0 = uStack_158;
  uStack_98 = uStack_140;
  uStack_a0 = uStack_148;
  uStack_e8 = uStack_190;
  uStack_f0 = uStack_198;
  uStack_d8 = uStack_180;
  uStack_e0 = uStack_188;
  uStack_60 = uStack_108;
  lStack_58 = lVar2;
  _objc_allocWithZone(uVar1);
  puVar3 = &uStack_f0;
  FUN_1047df924(puVar3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104714eec; end: 1047150f7;  */

undefined1 FUN_104714eec(double *param_1,double *param_2)

{
  ulong uVar1;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  dStack_120 = *param_1;
  dStack_118 = param_1[1];
  dStack_110 = param_1[2];
  dStack_108 = param_1[3];
  dStack_100 = param_1[4];
  dStack_a8 = *param_2;
  dStack_a0 = param_2[1];
  dStack_98 = param_2[2];
  dStack_90 = param_2[3];
  dStack_88 = param_2[4];
  dStack_40 = param_2[0xd];
  if ((long)param_1[0xd] < 0) {
    if (-1 < (long)dStack_40) {
      return 0;
    }
    uVar1 = 0;
    dStack_f0 = param_1[6];
    dStack_f8 = param_1[5];
    dStack_e0 = param_1[8];
    dStack_e8 = param_1[7];
    dStack_d0 = param_1[10];
    dStack_d8 = param_1[9];
    dStack_c0 = param_1[0xc];
    dStack_c8 = param_1[0xb];
    dStack_b0 = param_1[0xe];
    dStack_78 = param_2[6];
    dStack_80 = param_2[5];
    dStack_68 = param_2[8];
    dStack_70 = param_2[7];
    dStack_58 = param_2[10];
    dStack_60 = param_2[9];
    dStack_48 = param_2[0xc];
    dStack_50 = param_2[0xb];
    dStack_38 = param_2[0xe];
    dStack_b8 = ABS(param_1[0xd]);
    dStack_40 = ABS(dStack_40);
    FUN_104716dac(&dStack_120,&dStack_a8);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  else {
    if ((long)dStack_40 < 0) {
      return 0;
    }
    if (dStack_120 != dStack_a8) {
      return 0;
    }
    if (dStack_118 != dStack_a0) {
      return 0;
    }
    if (dStack_110 != dStack_98) {
      return 0;
    }
    if (dStack_108 != dStack_90) {
      return 0;
    }
    if (dStack_100 != dStack_88) {
      return 0;
    }
    if (SUB84(param_1[5],0) != SUB84(param_2[5],0)) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    if (*(char *)(param_2 + 0x10) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 0x10) == '\x01') {
      return 0;
    }
    if (param_1[0xf] != param_2[0xf]) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0x12) == '\x01') {
    if (*(char *)(param_2 + 0x12) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 0x12) == '\x01') {
      return 0;
    }
    if (param_1[0x11] != param_2[0x11]) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0x14) == '\x01') {
    if (*(char *)(param_2 + 0x14) == '\x01') {
      return 1;
    }
  }
  else if ((*(char *)(param_2 + 0x14) != '\x01') && (param_1[0x13] == param_2[0x13])) {
    return 1;
  }
  return 0;
}



/* Entry: 1047150f8; end: 104715177;  */

void FUN_1047150f8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e048 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31068;
  _swift_getWitnessTable(&UNK_10dd31068,&UNK_11079d318);
  puRam000000011308e048 = puVar1;
  return;
}



/* Entry: 104715178; end: 1047152e7;  */

undefined4 FUN_104715178(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x666e496b63696c63;
  if ((param_1 == 0x666e496b63696c63 && param_2 == -0x16ffffffffffff91) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x666e496b63696c63,0xe90000000000006f,param_1,param_2,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0xd000000000000021;
    if (((param_1 == -0x2fffffffffffffdf) && (param_2 == -0x7ffffffef0df3090)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd000000000000021,0x800000010f20cf70,param_1,param_2,0), (uVar1 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar2 = 1;
    }
    else {
      uVar1 = 0;
      if (((param_1 == -0x2fffffffffffffe2) && (param_2 == -0x7ffffffef0df3060)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0xd00000000000001e,0x800000010f20cfa0,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        uVar2 = 2;
      }
      else if ((param_1 == -0x2fffffffffffffef) && (param_2 == -0x7ffffffef0df3040)) {
        _swift_bridgeObjectRelease(0x800000010f20cfc0);
        uVar2 = 3;
      }
      else {
        uVar1 = 0xd000000000000011;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd000000000000011,0x800000010f20cfc0,param_1,param_2,0);
        _swift_bridgeObjectRelease(param_2);
        uVar2 = 3;
        if ((uVar1 & 1) == 0) {
          uVar2 = 4;
        }
      }
    }
  }
  return uVar2;
}



/* Entry: 1047152e8; end: 10471555b;  */

/* WARNING: Removing unreachable block (ram,0x0001047154b0) */

void FUN_1047152e8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long extraout_x8;
  long unaff_x21;
  long lVar11;
  undefined1 auStack_180 [8];
  undefined1 *puStack_178;
  undefined1 uStack_16a;
  undefined1 uStack_169;
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
  
  lVar3 = 0x11308e078;
  func_0x0001000285a8(0x11308e078,&UNK_10dd310b8);
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_1047150f8();
  puVar5 = &UNK_11079d318;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_180 + -extraout_x8,&UNK_11079d318,&UNK_11079d318,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_169 = 0;
    func_0x0001047158e0();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&uStack_168,&UNK_11079cfa0,&uStack_169,lVar3,&UNK_11079cfa0,puVar5);
    uStack_98 = uStack_110;
    uStack_a0 = uStack_118;
    uStack_88 = uStack_100;
    uStack_90 = uStack_108;
    uStack_e8 = uStack_160;
    uStack_f0 = uStack_168;
    uStack_d8 = uStack_150;
    uStack_e0 = uStack_158;
    uStack_c8 = uStack_140;
    uStack_d0 = uStack_148;
    uStack_80 = uStack_f8;
    uStack_b8 = uStack_130;
    uStack_c0 = uStack_138;
    uStack_a8 = uStack_120;
    uStack_b0 = uStack_128;
    uStack_16a = 1;
    puVar6 = &uStack_16a;
    lVar4 = lVar3;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySdSgSdm_xtKF();
    uStack_16a = 2;
    puVar7 = &uStack_16a;
    lVar9 = lVar3;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySdSgSdm_xtKF();
    uStack_16a = 3;
    puVar8 = &uStack_16a;
    lVar10 = lVar3;
    puStack_178 = puVar7;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySiSgSim_xtKF();
    (**(code **)(lVar11 + 8))(auStack_180 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
    param_1[9] = uStack_a8;
    param_1[8] = uStack_b0;
    param_1[0xb] = uStack_98;
    param_1[10] = uStack_a0;
    param_1[0xd] = uStack_88;
    param_1[0xc] = uStack_90;
    param_1[1] = uStack_e8;
    *param_1 = uStack_f0;
    param_1[3] = uStack_d8;
    param_1[2] = uStack_e0;
    param_1[5] = uStack_c8;
    param_1[4] = uStack_d0;
    param_1[7] = uStack_b8;
    param_1[6] = uStack_c0;
    param_1[0xe] = uStack_80;
    param_1[0xf] = puVar6;
    *(char *)(param_1 + 0x10) = (char)lVar4;
    param_1[0x11] = puStack_178;
    *(char *)(param_1 + 0x12) = (char)lVar9;
    param_1[0x13] = puVar8;
    *(char *)(param_1 + 0x14) = (char)lVar10;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 10471555c; end: 10471555f;  */

void FUN_10471555c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e058 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30f68;
  _swift_getWitnessTable(&UNK_10dd30f68,&UNK_11079d278);
  puRam000000011308e058 = puVar1;
  return;
}



/* Entry: 104715560; end: 10471559f;  */

void FUN_104715560(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e058 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30f68;
  _swift_getWitnessTable(&UNK_10dd30f68,&UNK_11079d278);
  puRam000000011308e058 = puVar1;
  return;
}



/* Entry: 1047155a0; end: 1047155cb;  */

long FUN_1047155a0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1047155cc; end: 104715817;  */

int FUN_1047155cc(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0xa1) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = (uint)(*(ulong *)(param_1 + 0x1a) >> 1);
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Entry: 104715818; end: 104715857;  */

void FUN_104715818(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e060 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31040;
  _swift_getWitnessTable(&UNK_10dd31040,&UNK_11079d318);
  puRam000000011308e060 = puVar1;
  return;
}



/* Entry: 104715858; end: 10471585b;  */

void FUN_104715858(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e068 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30fd8;
  _swift_getWitnessTable(&UNK_10dd30fd8,&UNK_11079d318);
  puRam000000011308e068 = puVar1;
  return;
}



/* Entry: 10471585c; end: 10471589b;  */

void FUN_10471585c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e068 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30fd8;
  _swift_getWitnessTable(&UNK_10dd30fd8,&UNK_11079d318);
  puRam000000011308e068 = puVar1;
  return;
}



/* Entry: 10471589c; end: 10471589f;  */

void FUN_10471589c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30fb0;
  _swift_getWitnessTable(&UNK_10dd30fb0,&UNK_11079d318);
  puRam000000011308e070 = puVar1;
  return;
}



/* Entry: 1047158a0; end: 10471591f;  */

void FUN_1047158a0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30fb0;
  _swift_getWitnessTable(&UNK_10dd30fb0,&UNK_11079d318);
  puRam000000011308e070 = puVar1;
  return;
}



/* Entry: 104715920; end: 104715933;  */

bool FUN_104715920(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104715934; end: 1047159df;  */

void FUN_104715934(void)

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



/* Entry: 1047159e0; end: 104715a53;  */

undefined1  [16] FUN_1047159e0(void)

{
  ulong uVar1;
  byte bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  uVar5 = 0x6f697469736f5078;
  bVar2 = *unaff_x20;
  pcVar3 = "multiSegmentIndex";
  if (bVar2 != 2) {
    pcVar3 = "xPositionRelative";
  }
  uVar1 = (ulong)pcVar3 | 0x8000000000000000;
  if (bVar2 != 0) {
    uVar5 = 0x6f697469736f5079;
  }
  uVar4 = 0xd000000000000011;
  if (bVar2 < 2) {
    uVar1 = 0xe90000000000006e;
    uVar4 = uVar5;
  }
  auVar6._8_8_ = uVar1;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 104715a54; end: 104715a77;  */

void FUN_104715a54(undefined1 *param_1,undefined1 param_2)

{
  FUN_104715ecc();
  *param_1 = param_2;
  return;
}



/* Entry: 104715a78; end: 104715a8f;  */

undefined1  [16] FUN_104715a78(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 104715a90; end: 104715adf;  */

void FUN_104715a90(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_104715c64();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 104715ae0; end: 104715c63;  */

void FUN_104715ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  lVar3 = 0x11308e088;
  func_0x0001000285a8(0x11308e088,&UNK_10dd310c0);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffff90 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_5 + 0x18);
  uVar2 = *(undefined8 *)(param_5 + 0x20);
  func_0x0001000a8868(param_5,uVar1);
  FUN_104715c64();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar4,&UNK_11079d4e0,&UNK_11079d4e0,param_5,uVar1,uVar2);
  uStack_41 = 0;
  __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(param_1,&uStack_41,lVar3);
  if (unaff_x21 == 0) {
    uStack_42 = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(param_2,&uStack_42,lVar3);
    uStack_43 = 2;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(param_3,&uStack_43,lVar3);
    uStack_44 = 3;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(param_4,&uStack_44,lVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  return;
}



/* Entry: 104715c64; end: 104715ca3;  */

void FUN_104715c64(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31258;
  _swift_getWitnessTable(&UNK_10dd31258,&UNK_11079d4e0);
  puRam000000011308e090 = puVar1;
  return;
}



/* Entry: 104715ca4; end: 104715d1f;  */

void FUN_104715ca4(double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (param_1 != 0.0) {
    dVar1 = param_1;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (param_2 != 0.0) {
    dVar1 = param_2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (param_3 != 0.0) {
    dVar1 = param_3;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (param_4 != 0.0) {
    dVar1 = param_4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  return;
}



/* Entry: 104715d20; end: 104715dcf;  */

void FUN_104715d20(double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  undefined1 auStack_98 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_98,0);
  dVar1 = 0.0;
  if (param_1 != 0.0) {
    dVar1 = param_1;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (param_2 != 0.0) {
    dVar1 = param_2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (param_3 != 0.0) {
    dVar1 = param_3;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (param_4 != 0.0) {
    dVar1 = param_4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104715dd0; end: 104715de7;  */

void FUN_104715dd0(void)

{
  double *unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_98 [72];
  
  dVar2 = *unaff_x20;
  dVar3 = unaff_x20[1];
  dVar4 = unaff_x20[2];
  dVar5 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_98,0);
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
  if (dVar5 != 0.0) {
    dVar1 = dVar5;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104715de8; end: 104715e47;  */

void FUN_104715de8(void)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_88);
  FUN_104715ca4(uVar1,uVar2,uVar3,uVar4,auStack_88);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104715e48; end: 104715e73;  */

void FUN_104715e48(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_10471603c();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Entry: 104715e74; end: 104715e8f;  */

void FUN_104715e74(void)

{
  undefined8 *unaff_x20;
  
  FUN_104715ae0(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Entry: 104715e90; end: 104715ecb;  */

bool FUN_104715e90(double *param_1,double *param_2)

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



/* Entry: 104715ecc; end: 10471603b;  */

undefined4 FUN_104715ecc(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_1 == 0x6f697469736f5078 && param_2 == -0x16ffffffffffff92) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6f697469736f5078,0xe90000000000006e,param_1,param_2,0), (uVar2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 0;
  }
  else {
    uVar2 = 0x6f697469736f5079;
    if (((param_1 == 0x6f697469736f5079) && (param_2 == -0x16ffffffffffff92)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x6f697469736f5079,0xe90000000000006e,param_1,param_2,0), (uVar2 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar1 = 1;
    }
    else {
      if ((param_1 != -0x2fffffffffffffef) || (param_2 != -0x7ffffffef0df3020)) {
        uVar2 = 0xd000000000000011;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd000000000000011,0x800000010f20cfe0,param_1,param_2,0);
        if ((uVar2 & 1) == 0) {
          if ((param_1 == -0x2fffffffffffffef) && (param_2 == -0x7ffffffef0df3000)) {
            _swift_bridgeObjectRelease(0x800000010f20d000);
            return 3;
          }
          uVar2 = 0xd000000000000011;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0xd000000000000011,0x800000010f20d000,param_1,param_2,0);
          _swift_bridgeObjectRelease(param_2);
          if ((uVar2 & 1) != 0) {
            return 3;
          }
          return 4;
        }
      }
      _swift_bridgeObjectRelease(param_2);
      uVar1 = 2;
    }
  }
  return uVar1;
}



/* Entry: 10471603c; end: 1047161e3;  */

/* WARNING: Removing unreachable block (ram,0x000104716148) */

undefined8 FUN_10471603c(undefined8 param_1,long param_2)

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
  
  lVar3 = 0x11308e0b8;
  func_0x0001000285a8(0x11308e0b8,&UNK_10dd312a8);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_104715c64();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_80 + -extraout_x8,&UNK_11079d4e0,&UNK_11079d4e0,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_71 = 0;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&uStack_71,lVar3);
    uStack_72 = 1;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&uStack_72,lVar3);
    uStack_73 = 2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&uStack_73,lVar3);
    uStack_74 = 3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&uStack_74,lVar3);
    (**(code **)(lVar5 + 8))(auStack_80 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
  }
  else {
    func_0x0001000834e4(param_2);
    param_1 = unaff_d8;
  }
  return param_1;
}



/* Entry: 1047161e4; end: 1047161e7;  */

void FUN_1047161e4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31158;
  _swift_getWitnessTable(&UNK_10dd31158,&UNK_11079d440);
  puRam000000011308e098 = puVar1;
  return;
}



/* Entry: 1047161e8; end: 104716227;  */

void FUN_1047161e8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31158;
  _swift_getWitnessTable(&UNK_10dd31158,&UNK_11079d440);
  puRam000000011308e098 = puVar1;
  return;
}



/* Entry: 104716228; end: 104716253;  */

long FUN_104716228(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104716254; end: 104716417;  */

int FUN_104716254(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 104716418; end: 104716457;  */

void FUN_104716418(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e0a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31230;
  _swift_getWitnessTable(&UNK_10dd31230,&UNK_11079d4e0);
  puRam000000011308e0a0 = puVar1;
  return;
}



/* Entry: 104716458; end: 10471645b;  */

void FUN_104716458(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e0a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd311c8;
  _swift_getWitnessTable(&UNK_10dd311c8,&UNK_11079d4e0);
  puRam000000011308e0a8 = puVar1;
  return;
}



/* Entry: 10471645c; end: 10471649b;  */

void FUN_10471645c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e0a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd311c8;
  _swift_getWitnessTable(&UNK_10dd311c8,&UNK_11079d4e0);
  puRam000000011308e0a8 = puVar1;
  return;
}


