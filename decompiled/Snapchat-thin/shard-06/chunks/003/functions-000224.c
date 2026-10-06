/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10474f130; end: 10474f1bf;  */

long FUN_10474f130(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10474f1c0; end: 10474f22b;  */

undefined8 * FUN_10474f1c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 10474f22c; end: 10474f26f;  */

undefined8 * FUN_10474f22c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 10474f270; end: 10474f32f;  */

int FUN_10474f270(int *param_1,uint param_2)

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



/* Entry: 10474f330; end: 10474f42b;  */

void FUN_10474f330(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = unaff_x20[1];
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar1 = unaff_x20[3];
  }
  else {
    uVar2 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar1);
    lVar1 = unaff_x20[3];
  }
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar1 = unaff_x20[5];
  }
  else {
    uVar2 = unaff_x20[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar1);
    lVar1 = unaff_x20[5];
  }
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar1 = unaff_x20[7];
  }
  else {
    uVar2 = unaff_x20[4];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar1);
    lVar1 = unaff_x20[7];
  }
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    return;
  }
  uVar2 = unaff_x20[6];
  __ss6HasherV8_combineyys5UInt8VF(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar2,lVar1);
  return;
}



/* Entry: 10474f42c; end: 10474f467;  */

void FUN_10474f42c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_10474f330(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474f468; end: 10474f46b;  */

void FUN_10474f468(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = unaff_x20[1];
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar1 = unaff_x20[3];
  }
  else {
    uVar2 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar1);
    lVar1 = unaff_x20[3];
  }
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar1 = unaff_x20[5];
  }
  else {
    uVar2 = unaff_x20[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar1);
    lVar1 = unaff_x20[5];
  }
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar1 = unaff_x20[7];
  }
  else {
    uVar2 = unaff_x20[4];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar1);
    lVar1 = unaff_x20[7];
  }
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    return;
  }
  uVar2 = unaff_x20[6];
  __ss6HasherV8_combineyys5UInt8VF(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar2,lVar1);
  return;
}



/* Entry: 10474f46c; end: 10474f4a3;  */

void FUN_10474f46c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_10474f330(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474f4a4; end: 10474f4eb;  */

uint FUN_10474f4a4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_10474f4ec(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10474f4ec; end: 10474f64f;  */

undefined8 FUN_10474f4ec(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  if (uVar2 == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    uVar3 = *param_1;
    if ((uVar3 != *param_2 || uVar2 != uVar1) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar3,uVar2,*param_2,uVar1,0), (uVar3 & 1) == 0)) {
      return 0;
    }
  }
  uVar2 = param_1[3];
  uVar1 = param_2[3];
  if (uVar2 == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    uVar3 = param_1[2];
    if (((uVar3 != param_2[2]) || (uVar2 != uVar1)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar3,uVar2,param_2[2],uVar1,0), (uVar3 & 1) == 0)) {
      return 0;
    }
  }
  uVar2 = param_1[5];
  uVar1 = param_2[5];
  if (uVar2 == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    uVar3 = param_1[4];
    if (((uVar3 != param_2[4]) || (uVar2 != uVar1)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar3,uVar2,param_2[4],uVar1,0), (uVar3 & 1) == 0)) {
      return 0;
    }
  }
  uVar2 = param_1[7];
  uVar1 = param_2[7];
  if (uVar2 == 0) {
    if (uVar1 == 0) {
      return 1;
    }
  }
  else if (uVar1 != 0) {
    uVar3 = param_1[6];
    if ((uVar3 == param_2[6]) && (uVar2 == uVar1)) {
      return 1;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar3,uVar2,param_2[6],uVar1,0);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 10474f650; end: 10474f653;  */

void FUN_10474f650(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e7d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd334b0;
  _swift_getWitnessTable(&UNK_10dd334b0,&UNK_11079fa50);
  puRam000000011308e7d8 = puVar1;
  return;
}



/* Entry: 10474f654; end: 10474f693;  */

void FUN_10474f654(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e7d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd334b0;
  _swift_getWitnessTable(&UNK_10dd334b0,&UNK_11079fa50);
  puRam000000011308e7d8 = puVar1;
  return;
}



/* Entry: 10474f694; end: 10474f6f7;  */

long FUN_10474f694(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10474f6f8; end: 10474f807;  */

undefined8 * FUN_10474f6f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Entry: 10474f808; end: 10474f86b;  */

undefined8 * FUN_10474f808(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 10474f86c; end: 10474f94f;  */

int FUN_10474f86c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x10] != '\0')) {
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



/* Entry: 10474f950; end: 10474f9fb;  */

void FUN_10474f950(void)

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



/* Entry: 10474f9fc; end: 10474fa4f;  */

undefined1  [16] FUN_10474f9fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  cVar4 = *unaff_x20;
  uVar3 = 0x65646f63;
  if (cVar4 != '\x01') {
    uVar3 = 0x6e6f697461636f6c;
  }
  uVar1 = 0xe400000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe800000000000000;
  }
  uVar2 = 0x746e756f63736964;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe800000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Entry: 10474fa50; end: 10474fa73;  */

void FUN_10474fa50(undefined1 *param_1,undefined1 param_2)

{
  FUN_10474fec4();
  *param_1 = param_2;
  return;
}



/* Entry: 10474fa74; end: 10474fa8b;  */

undefined1  [16] FUN_10474fa74(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10474fa8c; end: 10474fadb;  */

void FUN_10474fa8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010474fe44();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 10474fadc; end: 10474fc5f;  */

/* WARNING: Removing unreachable block (ram,0x00010474fbdc) */

void FUN_10474fadc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_70 [15];
  undefined1 uStack_61;
  undefined8 uStack_60;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar2 = 0x11308e7e0;
  func_0x0001000285a8(0x11308e7e0,&UNK_10dd33500);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_70 + -extraout_x8;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar3);
  func_0x00010474fe44();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar4,&UNK_11079fbb0,&UNK_11079fbb0,param_1,uVar3,uVar1);
  uStack_51 = 0;
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(*unaff_x20,unaff_x20[1],&uStack_51,lVar2);
  if (unaff_x21 == 0) {
    uVar3 = unaff_x20[2];
    uStack_52 = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar3,unaff_x20[3],&uStack_52,lVar2);
    uStack_60 = unaff_x20[4];
    uStack_61 = 2;
    func_0x00010474fe84();
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&uStack_60,&uStack_61,lVar2,&UNK_110796e58,uVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar2);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar2);
  }
  return;
}



/* Entry: 10474fc60; end: 10474fcdb;  */

void FUN_10474fc60(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  uVar5 = unaff_x20[4];
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar1,uVar3);
  __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar2,uVar4);
  __ss6HasherV8_combineyySuF(uVar5);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474fcdc; end: 10474fd2b;  */

void FUN_10474fcdc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar1 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uVar3 = unaff_x20[4];
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  __ss6HasherV8_combineyySuF(uVar3);
  return;
}



/* Entry: 10474fd2c; end: 10474fda3;  */

void FUN_10474fd2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  uVar5 = unaff_x20[4];
  __ss6HasherV5_seedABSi_tcfC(auStack_88);
  __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar1,uVar3);
  __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar2,uVar4);
  __ss6HasherV8_combineyySuF(uVar5);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474fda4; end: 10474fde7;  */

void FUN_10474fda4(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10474ffd8(&uStack_48);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[3] = uStack_30;
    param_1[2] = uStack_38;
    param_1[4] = uStack_28;
  }
  return;
}



/* Entry: 10474fde8; end: 10474fec3;  */

void FUN_10474fde8(void)

{
  FUN_10474fadc();
  return;
}



/* Entry: 10474fec4; end: 10474ffd7;  */

undefined4 FUN_10474fec4(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_1 == 0x746e756f63736964 && param_2 == -0x1800000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x746e756f63736964,0xe800000000000000,param_1,param_2,0), (uVar2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 0;
  }
  else {
    if ((param_1 != 0x65646f63) || (param_2 != -0x1c00000000000000)) {
      uVar2 = 0x65646f63;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x65646f63,0xe400000000000000,param_1,param_2,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if ((param_1 == 0x6e6f697461636f6c) && (param_2 == -0x1800000000000000)) {
          _swift_bridgeObjectRelease(0xe800000000000000);
          return 2;
        }
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x6e6f697461636f6c,0xe800000000000000,param_1,param_2,0);
        _swift_bridgeObjectRelease(param_2);
        if ((uVar2 & 1) != 0) {
          return 2;
        }
        return 3;
      }
    }
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10474ffd8; end: 1047501b7;  */

/* WARNING: Removing unreachable block (ram,0x00010475010c) */
/* WARNING: Removing unreachable block (ram,0x000104750178) */
/* WARNING: Removing unreachable block (ram,0x00010475018c) */
/* WARNING: Removing unreachable block (ram,0x0001047500a4) */

void FUN_10474ffd8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long extraout_x8;
  long unaff_x21;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x11308e818;
  func_0x0001000285a8(0x11308e818,&UNK_10dd336f0);
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  func_0x00010474fe44();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_80 + -extraout_x8,&UNK_11079fbb0,&UNK_11079fbb0,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar5 = &uStack_51;
    lVar4 = lVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    uStack_52 = 1;
    puVar6 = &uStack_52;
    lVar7 = lVar3;
    puStack_70 = puVar5;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    uStack_53 = 2;
    puStack_78 = puVar6;
    func_0x000104750624();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&uStack_68,&UNK_110796e58,&uStack_53,lVar3,&UNK_110796e58,puVar6);
    (**(code **)(lVar8 + 8))(auStack_80 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
    *param_1 = puStack_70;
    param_1[1] = lVar4;
    param_1[2] = puStack_78;
    param_1[3] = lVar7;
    param_1[4] = uStack_68;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 1047501b8; end: 1047501bb;  */

void FUN_1047501b8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e7f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33598;
  _swift_getWitnessTable(&UNK_10dd33598,&UNK_11079fb10);
  puRam000000011308e7f8 = puVar1;
  return;
}



/* Entry: 1047501bc; end: 1047501fb;  */

void FUN_1047501bc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e7f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33598;
  _swift_getWitnessTable(&UNK_10dd33598,&UNK_11079fb10);
  puRam000000011308e7f8 = puVar1;
  return;
}



/* Entry: 1047501fc; end: 104750293;  */

long FUN_1047501fc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104750294; end: 104750307;  */

undefined8 * FUN_104750294(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 104750308; end: 104750353;  */

undefined8 * FUN_104750308(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 104750354; end: 10475055b;  */

int FUN_104750354(int *param_1,int param_2)

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



/* Entry: 10475055c; end: 10475059b;  */

void FUN_10475055c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33674;
  _swift_getWitnessTable(&UNK_10dd33674,&UNK_11079fbb0);
  puRam000000011308e800 = puVar1;
  return;
}



/* Entry: 10475059c; end: 10475059f;  */

void FUN_10475059c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e808 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3360c;
  _swift_getWitnessTable(&UNK_10dd3360c,&UNK_11079fbb0);
  puRam000000011308e808 = puVar1;
  return;
}



/* Entry: 1047505a0; end: 1047505df;  */

void FUN_1047505a0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e808 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3360c;
  _swift_getWitnessTable(&UNK_10dd3360c,&UNK_11079fbb0);
  puRam000000011308e808 = puVar1;
  return;
}



/* Entry: 1047505e0; end: 1047505e3;  */

void FUN_1047505e0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e810 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd335e4;
  _swift_getWitnessTable(&UNK_10dd335e4,&UNK_11079fbb0);
  puRam000000011308e810 = puVar1;
  return;
}



/* Entry: 1047505e4; end: 104750663;  */

void FUN_1047505e4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e810 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd335e4;
  _swift_getWitnessTable(&UNK_10dd335e4,&UNK_11079fbb0);
  puRam000000011308e810 = puVar1;
  return;
}



/* Entry: 104750664; end: 104750723;  */

void FUN_104750664(void)

{
  undefined4 *unaff_x20;
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __ss6HasherV8_combineyys6UInt32VF(*unaff_x20);
  lVar1 = *(long *)(unaff_x20 + 4);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar1 = *(long *)(unaff_x20 + 8);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 2);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar2,lVar1);
    lVar1 = *(long *)(unaff_x20 + 8);
  }
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 6);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar2,lVar1);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104750724; end: 104750727;  */

void FUN_104750724(void)

{
  undefined4 *unaff_x20;
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __ss6HasherV8_combineyys6UInt32VF(*unaff_x20);
  lVar1 = *(long *)(unaff_x20 + 4);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar1 = *(long *)(unaff_x20 + 8);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 2);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar2,lVar1);
    lVar1 = *(long *)(unaff_x20 + 8);
  }
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 6);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar2,lVar1);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104750728; end: 104750877;  */

void FUN_104750728(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 *unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 2);
  lVar3 = *(long *)(unaff_x20 + 4);
  uVar2 = *(undefined8 *)(unaff_x20 + 6);
  lVar4 = *(long *)(unaff_x20 + 8);
  __ss6HasherV8_combineyys6UInt32VF(*unaff_x20);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,lVar3);
  }
  if (lVar4 != 0) {
    __ss6HasherV8_combineyys5UInt8VF(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar2,lVar4);
    return;
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  return;
}



/* Entry: 104750878; end: 1047508bf;  */

uint FUN_104750878(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1047508c0(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047508c0; end: 104750983;  */

undefined8 FUN_1047508c0(int *param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 4);
  lVar1 = *(long *)(param_2 + 4);
  if (lVar2 == 0) {
    if (lVar1 != 0) {
      return 0;
    }
  }
  else {
    if (lVar1 == 0) {
      return 0;
    }
    uVar3 = *(ulong *)(param_1 + 2);
    if ((uVar3 != *(ulong *)(param_2 + 2) || lVar2 != lVar1) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar3,lVar2,*(ulong *)(param_2 + 2),lVar1,0), (uVar3 & 1) == 0)) {
      return 0;
    }
  }
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = *(long *)(param_2 + 8);
  if (lVar2 == 0) {
    if (lVar1 == 0) {
      return 1;
    }
  }
  else if (lVar1 != 0) {
    uVar3 = *(ulong *)(param_1 + 6);
    if ((uVar3 == *(ulong *)(param_2 + 6)) && (lVar2 == lVar1)) {
      return 1;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar3,lVar2,*(ulong *)(param_2 + 6),lVar1,0);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 104750984; end: 104750987;  */

void FUN_104750984(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e828 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33740;
  _swift_getWitnessTable(&UNK_10dd33740,&UNK_11079fcd8);
  puRam000000011308e828 = puVar1;
  return;
}



/* Entry: 104750988; end: 1047509c7;  */

void FUN_104750988(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e828 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33740;
  _swift_getWitnessTable(&UNK_10dd33740,&UNK_11079fcd8);
  puRam000000011308e828 = puVar1;
  return;
}



/* Entry: 1047509c8; end: 104750a5f;  */

long FUN_1047509c8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104750a60; end: 104750ad3;  */

undefined4 * FUN_104750a60(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  uVar1 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 104750ad4; end: 104750b1f;  */

undefined4 * FUN_104750ad4(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 4);
  uVar2 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 104750b20; end: 104750be7;  */

int FUN_104750b20(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104750be8; end: 104750c1f;  */

void FUN_104750be8(undefined8 param_1)

{
  if (lRam000000011308e890 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e81a6a0);
  return;
}



/* Entry: 104750c20; end: 104750c23;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_104750c20(ulong *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  undefined1 *puVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 uVar13;
  byte *pbVar14;
  ulong uVar15;
  long lVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  ulong uVar20;
  byte *pbVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  ulong uVar25;
  byte *pbVar26;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar27;
  ulong unaff_x22;
  long lVar28;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 auVar45 [16];
  
  uVar20 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar20 != 0) {
      return (byte *)0x0;
    }
  }
  else {
    if (uVar20 == 0) {
      return (byte *)0x0;
    }
    uVar15 = *param_1;
    if ((uVar15 != *param_2 || param_1[1] != uVar20) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar15 & 1) == 0)) {
      return (byte *)0x0;
    }
  }
  if ((double)param_1[2] == (double)param_2[2]) {
    lVar16 = 0;
    FUN_104750be8();
    uVar20 = (long)param_1 + (long)*(int *)(lVar16 + 0x18);
    FUN_1047549c8(uVar20,(long)param_2 + (long)*(int *)(lVar16 + 0x18));
    if ((uVar20 & 1) != 0) {
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x1c));
      pbVar12 = (byte *)*puVar1;
      pbVar27 = (byte *)puVar1[1];
      plVar2 = (long *)((long)param_2 + (long)*(int *)(lVar16 + 0x1c));
      lVar16 = *plVar2;
      uVar20 = plVar2[1];
      puVar9 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar9 + -0x50) = unaff_x26;
        *(byte **)(puVar9 + -0x48) = unaff_x25;
        *(byte **)(puVar9 + -0x40) = unaff_x24;
        *(byte **)(puVar9 + -0x38) = unaff_x23;
        *(ulong *)(puVar9 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar9 + -0x28) = unaff_x21;
        *(ulong *)(puVar9 + -0x20) = unaff_x20;
        *(byte **)(puVar9 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar9 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar9 + -8) = unaff_x30;
        *(undefined8 *)(puVar9 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar6 = (uint)((ulong)pbVar27 >> 0x20);
        uVar22 = uVar6 >> 0x1e;
        uVar7 = (uint)(uVar20 >> 0x20);
        uVar24 = uVar7 >> 0x1e;
        iVar10 = (int)pbVar12;
        pbVar17 = pbVar27;
        if ((ulong)pbVar27 >> 0x3e == 3) {
          uVar15 = 0;
          if ((((pbVar12 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
              (uVar20 >> 0x3e < 3)) || ((uVar15 = 0, lVar16 != 0 || (uVar20 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar11 = (byte *)0x1;
        }
        else if (uVar6 >> 0x1e < 2) {
          if (uVar22 == 0) {
            uVar15 = (ulong)pbVar27 >> 0x30 & 0xff;
          }
          else {
            iVar23 = (int)((ulong)pbVar12 >> 0x20);
            if (SBORROW4(iVar23,iVar10)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar8)();
            }
            uVar15 = (ulong)(iVar23 - iVar10);
          }
joined_r0x000100e26170:
          if (1 < uVar7 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar24 == 0) {
            uVar25 = uVar20 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar23 = (int)((ulong)lVar16 >> 0x20);
          if (SBORROW4(iVar23,(int)lVar16)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar8)();
          }
          if (uVar15 == (long)(iVar23 - (int)lVar16)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar11 = (byte *)0x0;
        }
        else {
          if (uVar22 == 2) {
            uVar15 = *(long *)(pbVar12 + 0x18) - *(long *)(pbVar12 + 0x10);
            if (SBORROW8(*(long *)(pbVar12 + 0x18),*(long *)(pbVar12 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar8)();
            }
            goto joined_r0x000100e26170;
          }
          uVar15 = 0;
          if (uVar24 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar24 == 2) {
            uVar25 = *(long *)(lVar16 + 0x18) - *(long *)(lVar16 + 0x10);
            if (SBORROW8(*(long *)(lVar16 + 0x18),*(long *)(lVar16 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar8)();
            }
code_r0x000100e2608c:
            if (uVar15 != uVar25) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar15 < 1) goto code_r0x000100e26128;
            if (uVar22 < 2) {
              if (uVar22 == 0) {
                puVar9[-0x70] = (char)pbVar12;
                puVar9[-0x6f] = (char)((ulong)pbVar12 >> 8);
                puVar9[-0x6e] = (char)((ulong)pbVar12 >> 0x10);
                puVar9[-0x6d] = (char)((ulong)pbVar12 >> 0x18);
                puVar9[-0x6c] = (char)((ulong)pbVar12 >> 0x20);
                puVar9[-0x6b] = (char)((ulong)pbVar12 >> 0x28);
                puVar9[-0x6a] = (char)((ulong)pbVar12 >> 0x30);
                puVar9[-0x69] = (char)((ulong)pbVar12 >> 0x38);
                puVar9[-0x68] = (char)pbVar27;
                puVar9[-0x67] = (char)((ulong)pbVar27 >> 8);
                puVar9[-0x66] = (char)((ulong)pbVar27 >> 0x10);
                puVar9[-0x65] = (char)((ulong)pbVar27 >> 0x18);
                puVar9[-100] = (char)((ulong)pbVar27 >> 0x20);
                puVar9[-99] = (char)((ulong)pbVar27 >> 0x28);
                pbVar17 = puVar9 + (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar9 + -0x71,puVar9 + -0x70);
                pbVar11 = (byte *)(ulong)(byte)puVar9[-0x71];
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar10;
              unaff_x23 = (byte *)(((long)pbVar12 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar12 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar8)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar27;
              if (pbVar12 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar12 = (byte *)0x0;
              }
              else {
                pbVar17 = pbVar12;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar17)) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar8)();
                }
                pbVar12 = pbVar12 + ((long)unaff_x25 - (long)pbVar17);
                func_0x000107c5ec38();
                unaff_x19 = pbVar12;
                if (pbVar12 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar17) {
                    pbVar17 = unaff_x23;
                  }
                  pbVar17 = pbVar17 + (long)pbVar12;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar17 = (byte *)0x0;
            }
            else {
              if (uVar22 != 2) {
                *(undefined8 *)(puVar9 + -0x6a) = 0;
                *(undefined8 *)(puVar9 + -0x70) = 0;
                pbVar17 = puVar9 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar28 = *(long *)(pbVar12 + 0x10);
              unaff_x24 = *(byte **)(pbVar12 + 0x18);
              func_0x000107c5ec30();
              pbVar17 = pbVar12;
              if (pbVar12 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar28,(long)pbVar17)) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar8)();
                }
                pbVar12 = pbVar12 + (lVar28 - (long)pbVar17);
              }
              unaff_x23 = unaff_x24 + -lVar28;
              if (SBORROW8((long)unaff_x24,lVar28)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar8)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar12;
              unaff_x25 = pbVar27;
              if (pbVar12 == (byte *)0x0) {
                pbVar17 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar17) {
                  pbVar17 = unaff_x23;
                }
                pbVar17 = pbVar17 + (long)pbVar12;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar9 + -0x70,pbVar12,pbVar17,lVar16,uVar20);
            pbVar11 = (byte *)(ulong)(byte)puVar9[-0x70];
            unaff_x22 = uVar20;
          }
          else {
            pbVar11 = (byte *)(ulong)(uVar15 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar9 + -0x58)) {
          return pbVar11;
        }
        func_0x000107c60e78();
        *(byte **)(puVar9 + -0xc0) = unaff_x24;
        *(byte **)(puVar9 + -0xb8) = unaff_x23;
        *(ulong *)(puVar9 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar9 + -0xa8) = unaff_x21;
        *(ulong *)(puVar9 + -0xa0) = unaff_x20;
        *(byte **)(puVar9 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar9 + -0x90) = puVar9 + -0x10;
        *(undefined **)(puVar9 + -0x88) = &UNK_100e26304;
        pbVar14 = *(byte **)pbVar11;
        pbVar12 = *(byte **)(pbVar11 + 8);
        pbVar26 = *(byte **)(pbVar11 + 0x18);
        bVar29 = pbVar11[0x28];
        pbVar27 = (byte *)((ulong)*(uint *)(pbVar11 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar11 + 0x15) << 0x28 | (ulong)pbVar11[0x10]);
        pbVar18 = pbVar12;
        if (bVar29 < 3) {
          if (bVar29 == 0) {
            if (pbVar17[0x28] == 0) {
              lVar16 = *(long *)pbVar17;
              uVar13 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar14,lVar16,uVar13);
              return (byte *)(ulong)((uint)pbVar14 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar29 == 1) {
            if (pbVar17[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar19 = *(byte **)(pbVar17 + 8);
            pbVar21 = *(byte **)(pbVar17 + 0x10);
            lVar16 = *(long *)pbVar17;
            uVar13 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar14,lVar16,uVar13);
            if (((ulong)pbVar14 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar14 = pbVar12;
            pbVar18 = pbVar27;
            if ((pbVar12 == pbVar19) && (pbVar27 == pbVar21)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar17[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar19 = *(byte **)pbVar17;
            pbVar21 = *(byte **)(pbVar17 + 8);
            lVar16 = *(long *)(pbVar17 + 0x18);
            if ((pbVar14 == pbVar19) && (pbVar12 == pbVar21)) {
              if (((pbVar11[0x10] ^ pbVar17[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar26 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar16 == 0) {
                return (byte *)0x0;
              }
              func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar16);
              func_0x000107c61174();
              pbVar12 = pbVar26;
              func_0x000107c60118();
              func_0x000107c61170(pbVar26);
              func_0x000107c61170(lVar16);
              pbVar26 = pbVar12;
joined_r0x000100e266a4:
              if (((ulong)pbVar26 & 1) == 0) {
                return (byte *)0x0;
              }
              return (byte *)0x1;
            }
          }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
          )(pbVar14,pbVar18,pbVar19,pbVar21,0);
          return pbVar14;
        }
        lVar28 = *(long *)(pbVar11 + 0x20);
        if (bVar29 < 5) {
          if (bVar29 != 3) {
            if (pbVar17[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar19 = *(byte **)pbVar17;
            pbVar21 = *(byte **)(pbVar17 + 8);
            if (((pbVar14 == pbVar19) && (pbVar12 == pbVar21)) &&
               (pbVar14 = pbVar27, pbVar18 = pbVar26, pbVar19 = *(byte **)(pbVar17 + 0x10),
               pbVar21 = *(byte **)(pbVar17 + 0x18),
               pbVar27 == *(byte **)(pbVar17 + 0x10) && pbVar26 == *(byte **)(pbVar17 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar17[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar17 != ((uint)pbVar14 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar21 = *(byte **)(pbVar17 + 0x10);
          lVar16 = *(long *)(pbVar17 + 0x20);
          if (pbVar27 == (byte *)0x0) {
            if (pbVar21 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar21 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar19 = *(byte **)(pbVar17 + 8);
            pbVar14 = pbVar12;
            pbVar18 = pbVar27;
            if ((pbVar12 != pbVar19) || (pbVar27 != pbVar21)) goto code_r0x000107c605b8;
          }
          if (lVar28 != 0) {
            if (lVar16 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar26 == *(byte **)(pbVar17 + 0x18)) && (lVar28 == lVar16)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar26,lVar28,*(byte **)(pbVar17 + 0x18),lVar16,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar16 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar29 != 5) {
          if ((((pbVar26 == (byte *)0x0 && pbVar12 == (byte *)0x0) && pbVar14 == (byte *)0x0) &&
              lVar28 == 0) && pbVar27 == (byte *)0x0) {
            if (pbVar17[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar28 = *(long *)(pbVar17 + 0x20);
            lVar16 = *(long *)(pbVar17 + 0x18);
            bVar29 = pbVar17[8] | (byte)lVar16;
            bVar30 = pbVar17[9] | (byte)((ulong)lVar16 >> 8);
            bVar31 = pbVar17[10] | (byte)((ulong)lVar16 >> 0x10);
            bVar32 = pbVar17[0xb] | (byte)((ulong)lVar16 >> 0x18);
            bVar33 = pbVar17[0xc] | (byte)((ulong)lVar16 >> 0x20);
            bVar34 = pbVar17[0xd] | (byte)((ulong)lVar16 >> 0x28);
            bVar35 = pbVar17[0xe] | (byte)((ulong)lVar16 >> 0x30);
            bVar36 = pbVar17[0xf] | (byte)((ulong)lVar16 >> 0x38);
            bVar37 = pbVar17[0x10] | (byte)lVar28;
            bVar38 = pbVar17[0x11] | (byte)((ulong)lVar28 >> 8);
            bVar39 = pbVar17[0x12] | (byte)((ulong)lVar28 >> 0x10);
            bVar40 = pbVar17[0x13] | (byte)((ulong)lVar28 >> 0x18);
            bVar41 = pbVar17[0x14] | (byte)((ulong)lVar28 >> 0x20);
            bVar42 = pbVar17[0x15] | (byte)((ulong)lVar28 >> 0x28);
            bVar43 = pbVar17[0x16] | (byte)((ulong)lVar28 >> 0x30);
            bVar44 = pbVar17[0x17] | (byte)((ulong)lVar28 >> 0x38);
            auVar45[1] = bVar30;
            auVar45[0] = bVar29;
            auVar45[2] = bVar31;
            auVar45[3] = bVar32;
            auVar45[4] = bVar33;
            auVar45[5] = bVar34;
            auVar45[6] = bVar35;
            auVar45[7] = bVar36;
            auVar45[8] = bVar37;
            auVar45[9] = bVar38;
            auVar45[10] = bVar39;
            auVar45[0xb] = bVar40;
            auVar45[0xc] = bVar41;
            auVar45[0xd] = bVar42;
            auVar45[0xe] = bVar43;
            auVar45[0xf] = bVar44;
            auVar5[1] = bVar30;
            auVar5[0] = bVar29;
            auVar5[2] = bVar31;
            auVar5[3] = bVar32;
            auVar5[4] = bVar33;
            auVar5[5] = bVar34;
            auVar5[6] = bVar35;
            auVar5[7] = bVar36;
            auVar5[8] = bVar37;
            auVar5[9] = bVar38;
            auVar5[10] = bVar39;
            auVar5[0xb] = bVar40;
            auVar5[0xc] = bVar41;
            auVar5[0xd] = bVar42;
            auVar5[0xe] = bVar43;
            auVar5[0xf] = bVar44;
            auVar45 = NEON_ext(auVar45,auVar5,8,1);
            if (CONCAT17(bVar36 | auVar45[7],
                         CONCAT16(bVar35 | auVar45[6],
                                  CONCAT15(bVar34 | auVar45[5],
                                           CONCAT14(bVar33 | auVar45[4],
                                                    CONCAT13(bVar32 | auVar45[3],
                                                             CONCAT12(bVar31 | auVar45[2],
                                                                      CONCAT11(bVar30 | auVar45[1],
                                                                               bVar29 | auVar45[0]))
                                                            ))))) == 0 && *(long *)pbVar17 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar14 == (byte *)0x1) &&
             (((pbVar26 == (byte *)0x0 && pbVar12 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
              lVar28 == 0)) {
            if (pbVar17[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar17 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar17 != 2) {
              return (byte *)0x0;
            }
          }
          lVar28 = *(long *)(pbVar17 + 0x20);
          lVar16 = *(long *)(pbVar17 + 0x18);
          bVar29 = pbVar17[8] | (byte)lVar16;
          bVar30 = pbVar17[9] | (byte)((ulong)lVar16 >> 8);
          bVar31 = pbVar17[10] | (byte)((ulong)lVar16 >> 0x10);
          bVar32 = pbVar17[0xb] | (byte)((ulong)lVar16 >> 0x18);
          bVar33 = pbVar17[0xc] | (byte)((ulong)lVar16 >> 0x20);
          bVar34 = pbVar17[0xd] | (byte)((ulong)lVar16 >> 0x28);
          bVar35 = pbVar17[0xe] | (byte)((ulong)lVar16 >> 0x30);
          bVar36 = pbVar17[0xf] | (byte)((ulong)lVar16 >> 0x38);
          bVar37 = pbVar17[0x10] | (byte)lVar28;
          bVar38 = pbVar17[0x11] | (byte)((ulong)lVar28 >> 8);
          bVar39 = pbVar17[0x12] | (byte)((ulong)lVar28 >> 0x10);
          bVar40 = pbVar17[0x13] | (byte)((ulong)lVar28 >> 0x18);
          bVar41 = pbVar17[0x14] | (byte)((ulong)lVar28 >> 0x20);
          bVar42 = pbVar17[0x15] | (byte)((ulong)lVar28 >> 0x28);
          bVar43 = pbVar17[0x16] | (byte)((ulong)lVar28 >> 0x30);
          bVar44 = pbVar17[0x17] | (byte)((ulong)lVar28 >> 0x38);
          auVar3[1] = bVar30;
          auVar3[0] = bVar29;
          auVar3[2] = bVar31;
          auVar3[3] = bVar32;
          auVar3[4] = bVar33;
          auVar3[5] = bVar34;
          auVar3[6] = bVar35;
          auVar3[7] = bVar36;
          auVar3[8] = bVar37;
          auVar3[9] = bVar38;
          auVar3[10] = bVar39;
          auVar3[0xb] = bVar40;
          auVar3[0xc] = bVar41;
          auVar3[0xd] = bVar42;
          auVar3[0xe] = bVar43;
          auVar3[0xf] = bVar44;
          auVar4[1] = bVar30;
          auVar4[0] = bVar29;
          auVar4[2] = bVar31;
          auVar4[3] = bVar32;
          auVar4[4] = bVar33;
          auVar4[5] = bVar34;
          auVar4[6] = bVar35;
          auVar4[7] = bVar36;
          auVar4[8] = bVar37;
          auVar4[9] = bVar38;
          auVar4[10] = bVar39;
          auVar4[0xb] = bVar40;
          auVar4[0xc] = bVar41;
          auVar4[0xd] = bVar42;
          auVar4[0xe] = bVar43;
          auVar4[0xf] = bVar44;
          auVar45 = NEON_ext(auVar3,auVar4,8,1);
          lVar16 = CONCAT17(bVar36 | auVar45[7],
                            CONCAT16(bVar35 | auVar45[6],
                                     CONCAT15(bVar34 | auVar45[5],
                                              CONCAT14(bVar33 | auVar45[4],
                                                       CONCAT13(bVar32 | auVar45[3],
                                                                CONCAT12(bVar31 | auVar45[2],
                                                                         CONCAT11(bVar30 | auVar45[1
                                                  ],bVar29 | auVar45[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar17[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar16 = *(long *)(pbVar17 + 8);
        uVar20 = *(ulong *)(pbVar17 + 0x10);
        lVar28 = *(long *)pbVar17;
        uVar13 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar14,lVar28,uVar13);
        if (((ulong)pbVar14 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar9 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar9 + -0x88);
        unaff_x20 = *(ulong *)(puVar9 + -0xa0);
        unaff_x19 = *(byte **)(puVar9 + -0x98);
        unaff_x22 = *(ulong *)(puVar9 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar9 + -0xa8);
        unaff_x24 = *(byte **)(puVar9 + -0xc0);
        unaff_x23 = *(byte **)(puVar9 + -0xb8);
        puVar9 = puVar9 + -0x80;
      } while( true );
    }
  }
  return (byte *)0x0;
}



/* Entry: 104750c24; end: 104750d43;  */

void FUN_104750c24(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auStack_500 [608];
  undefined1 auStack_2a0 [608];
  
  iVar3 = (int)auStack_500;
  lVar5 = unaff_x20[1];
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar6 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,lVar5);
  }
  dVar7 = 0.0;
  if ((double)unaff_x20[2] != 0.0) {
    dVar7 = (double)unaff_x20[2];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  lVar5 = 0;
  FUN_104750be8();
  iVar2 = *(int *)(lVar5 + 0x18);
  func_0x0001046cec20(param_1);
  lVar4 = 0;
  FUN_104754770();
  _memcpy(auStack_500,(long)unaff_x20 + (long)*(int *)(lVar4 + 0x14) + (long)iVar2,0x260);
  func_0x0001015538ec();
  if (iVar3 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    _memcpy(auStack_2a0,auStack_500,0x260);
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1047a6974(param_1);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar5 + 0x1c));
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,*puVar1,puVar1[1]);
  return;
}



/* Entry: 104750d44; end: 104750d7f;  */

void FUN_104750d44(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_104750c24(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104750d80; end: 104750d83;  */

void FUN_104750d80(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auStack_500 [608];
  undefined1 auStack_2a0 [608];
  
  iVar3 = (int)auStack_500;
  lVar5 = unaff_x20[1];
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar6 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,lVar5);
  }
  dVar7 = 0.0;
  if ((double)unaff_x20[2] != 0.0) {
    dVar7 = (double)unaff_x20[2];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  lVar5 = 0;
  FUN_104750be8();
  iVar2 = *(int *)(lVar5 + 0x18);
  func_0x0001046cec20(param_1);
  lVar4 = 0;
  FUN_104754770();
  _memcpy(auStack_500,(long)unaff_x20 + (long)*(int *)(lVar4 + 0x14) + (long)iVar2,0x260);
  func_0x0001015538ec();
  if (iVar3 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    _memcpy(auStack_2a0,auStack_500,0x260);
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1047a6974(param_1);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar5 + 0x1c));
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,*puVar1,puVar1[1]);
  return;
}



/* Entry: 104750d84; end: 104750dbb;  */

void FUN_104750d84(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_104750c24(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104750dbc; end: 104750dbf;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_104750dbc(ulong *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  undefined1 *puVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 uVar13;
  byte *pbVar14;
  ulong uVar15;
  long lVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  ulong uVar20;
  byte *pbVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  ulong uVar25;
  byte *pbVar26;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar27;
  ulong unaff_x22;
  long lVar28;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 auVar45 [16];
  
  uVar20 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar20 != 0) {
      return (byte *)0x0;
    }
  }
  else {
    if (uVar20 == 0) {
      return (byte *)0x0;
    }
    uVar15 = *param_1;
    if ((uVar15 != *param_2 || param_1[1] != uVar20) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar15 & 1) == 0)) {
      return (byte *)0x0;
    }
  }
  if ((double)param_1[2] == (double)param_2[2]) {
    lVar16 = 0;
    FUN_104750be8();
    uVar20 = (long)param_1 + (long)*(int *)(lVar16 + 0x18);
    FUN_1047549c8(uVar20,(long)param_2 + (long)*(int *)(lVar16 + 0x18));
    if ((uVar20 & 1) != 0) {
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x1c));
      pbVar12 = (byte *)*puVar1;
      pbVar27 = (byte *)puVar1[1];
      plVar2 = (long *)((long)param_2 + (long)*(int *)(lVar16 + 0x1c));
      lVar16 = *plVar2;
      uVar20 = plVar2[1];
      puVar9 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar9 + -0x50) = unaff_x26;
        *(byte **)(puVar9 + -0x48) = unaff_x25;
        *(byte **)(puVar9 + -0x40) = unaff_x24;
        *(byte **)(puVar9 + -0x38) = unaff_x23;
        *(ulong *)(puVar9 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar9 + -0x28) = unaff_x21;
        *(ulong *)(puVar9 + -0x20) = unaff_x20;
        *(byte **)(puVar9 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar9 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar9 + -8) = unaff_x30;
        *(undefined8 *)(puVar9 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar6 = (uint)((ulong)pbVar27 >> 0x20);
        uVar22 = uVar6 >> 0x1e;
        uVar7 = (uint)(uVar20 >> 0x20);
        uVar24 = uVar7 >> 0x1e;
        iVar10 = (int)pbVar12;
        pbVar17 = pbVar27;
        if ((ulong)pbVar27 >> 0x3e == 3) {
          uVar15 = 0;
          if ((((pbVar12 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
              (uVar20 >> 0x3e < 3)) || ((uVar15 = 0, lVar16 != 0 || (uVar20 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar11 = (byte *)0x1;
        }
        else if (uVar6 >> 0x1e < 2) {
          if (uVar22 == 0) {
            uVar15 = (ulong)pbVar27 >> 0x30 & 0xff;
          }
          else {
            iVar23 = (int)((ulong)pbVar12 >> 0x20);
            if (SBORROW4(iVar23,iVar10)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar8)();
            }
            uVar15 = (ulong)(iVar23 - iVar10);
          }
joined_r0x000100e26170:
          if (1 < uVar7 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar24 == 0) {
            uVar25 = uVar20 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar23 = (int)((ulong)lVar16 >> 0x20);
          if (SBORROW4(iVar23,(int)lVar16)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar8)();
          }
          if (uVar15 == (long)(iVar23 - (int)lVar16)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar11 = (byte *)0x0;
        }
        else {
          if (uVar22 == 2) {
            uVar15 = *(long *)(pbVar12 + 0x18) - *(long *)(pbVar12 + 0x10);
            if (SBORROW8(*(long *)(pbVar12 + 0x18),*(long *)(pbVar12 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar8)();
            }
            goto joined_r0x000100e26170;
          }
          uVar15 = 0;
          if (uVar24 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar24 == 2) {
            uVar25 = *(long *)(lVar16 + 0x18) - *(long *)(lVar16 + 0x10);
            if (SBORROW8(*(long *)(lVar16 + 0x18),*(long *)(lVar16 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar8)();
            }
code_r0x000100e2608c:
            if (uVar15 != uVar25) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar15 < 1) goto code_r0x000100e26128;
            if (uVar22 < 2) {
              if (uVar22 == 0) {
                puVar9[-0x70] = (char)pbVar12;
                puVar9[-0x6f] = (char)((ulong)pbVar12 >> 8);
                puVar9[-0x6e] = (char)((ulong)pbVar12 >> 0x10);
                puVar9[-0x6d] = (char)((ulong)pbVar12 >> 0x18);
                puVar9[-0x6c] = (char)((ulong)pbVar12 >> 0x20);
                puVar9[-0x6b] = (char)((ulong)pbVar12 >> 0x28);
                puVar9[-0x6a] = (char)((ulong)pbVar12 >> 0x30);
                puVar9[-0x69] = (char)((ulong)pbVar12 >> 0x38);
                puVar9[-0x68] = (char)pbVar27;
                puVar9[-0x67] = (char)((ulong)pbVar27 >> 8);
                puVar9[-0x66] = (char)((ulong)pbVar27 >> 0x10);
                puVar9[-0x65] = (char)((ulong)pbVar27 >> 0x18);
                puVar9[-100] = (char)((ulong)pbVar27 >> 0x20);
                puVar9[-99] = (char)((ulong)pbVar27 >> 0x28);
                pbVar17 = puVar9 + (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar9 + -0x71,puVar9 + -0x70);
                pbVar11 = (byte *)(ulong)(byte)puVar9[-0x71];
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar10;
              unaff_x23 = (byte *)(((long)pbVar12 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar12 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar8)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar27;
              if (pbVar12 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar12 = (byte *)0x0;
              }
              else {
                pbVar17 = pbVar12;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar17)) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar8)();
                }
                pbVar12 = pbVar12 + ((long)unaff_x25 - (long)pbVar17);
                func_0x000107c5ec38();
                unaff_x19 = pbVar12;
                if (pbVar12 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar17) {
                    pbVar17 = unaff_x23;
                  }
                  pbVar17 = pbVar17 + (long)pbVar12;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar17 = (byte *)0x0;
            }
            else {
              if (uVar22 != 2) {
                *(undefined8 *)(puVar9 + -0x6a) = 0;
                *(undefined8 *)(puVar9 + -0x70) = 0;
                pbVar17 = puVar9 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar28 = *(long *)(pbVar12 + 0x10);
              unaff_x24 = *(byte **)(pbVar12 + 0x18);
              func_0x000107c5ec30();
              pbVar17 = pbVar12;
              if (pbVar12 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar28,(long)pbVar17)) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar8)();
                }
                pbVar12 = pbVar12 + (lVar28 - (long)pbVar17);
              }
              unaff_x23 = unaff_x24 + -lVar28;
              if (SBORROW8((long)unaff_x24,lVar28)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar8)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar12;
              unaff_x25 = pbVar27;
              if (pbVar12 == (byte *)0x0) {
                pbVar17 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar17) {
                  pbVar17 = unaff_x23;
                }
                pbVar17 = pbVar17 + (long)pbVar12;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar9 + -0x70,pbVar12,pbVar17,lVar16,uVar20);
            pbVar11 = (byte *)(ulong)(byte)puVar9[-0x70];
            unaff_x22 = uVar20;
          }
          else {
            pbVar11 = (byte *)(ulong)(uVar15 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar9 + -0x58)) {
          return pbVar11;
        }
        func_0x000107c60e78();
        *(byte **)(puVar9 + -0xc0) = unaff_x24;
        *(byte **)(puVar9 + -0xb8) = unaff_x23;
        *(ulong *)(puVar9 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar9 + -0xa8) = unaff_x21;
        *(ulong *)(puVar9 + -0xa0) = unaff_x20;
        *(byte **)(puVar9 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar9 + -0x90) = puVar9 + -0x10;
        *(undefined **)(puVar9 + -0x88) = &UNK_100e26304;
        pbVar14 = *(byte **)pbVar11;
        pbVar12 = *(byte **)(pbVar11 + 8);
        pbVar26 = *(byte **)(pbVar11 + 0x18);
        bVar29 = pbVar11[0x28];
        pbVar27 = (byte *)((ulong)*(uint *)(pbVar11 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar11 + 0x15) << 0x28 | (ulong)pbVar11[0x10]);
        pbVar18 = pbVar12;
        if (bVar29 < 3) {
          if (bVar29 == 0) {
            if (pbVar17[0x28] == 0) {
              lVar16 = *(long *)pbVar17;
              uVar13 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar14,lVar16,uVar13);
              return (byte *)(ulong)((uint)pbVar14 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar29 == 1) {
            if (pbVar17[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar19 = *(byte **)(pbVar17 + 8);
            pbVar21 = *(byte **)(pbVar17 + 0x10);
            lVar16 = *(long *)pbVar17;
            uVar13 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar14,lVar16,uVar13);
            if (((ulong)pbVar14 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar14 = pbVar12;
            pbVar18 = pbVar27;
            if ((pbVar12 == pbVar19) && (pbVar27 == pbVar21)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar17[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar19 = *(byte **)pbVar17;
            pbVar21 = *(byte **)(pbVar17 + 8);
            lVar16 = *(long *)(pbVar17 + 0x18);
            if ((pbVar14 == pbVar19) && (pbVar12 == pbVar21)) {
              if (((pbVar11[0x10] ^ pbVar17[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar26 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar16 == 0) {
                return (byte *)0x0;
              }
              func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar16);
              func_0x000107c61174();
              pbVar12 = pbVar26;
              func_0x000107c60118();
              func_0x000107c61170(pbVar26);
              func_0x000107c61170(lVar16);
              pbVar26 = pbVar12;
joined_r0x000100e266a4:
              if (((ulong)pbVar26 & 1) == 0) {
                return (byte *)0x0;
              }
              return (byte *)0x1;
            }
          }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
          )(pbVar14,pbVar18,pbVar19,pbVar21,0);
          return pbVar14;
        }
        lVar28 = *(long *)(pbVar11 + 0x20);
        if (bVar29 < 5) {
          if (bVar29 != 3) {
            if (pbVar17[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar19 = *(byte **)pbVar17;
            pbVar21 = *(byte **)(pbVar17 + 8);
            if (((pbVar14 == pbVar19) && (pbVar12 == pbVar21)) &&
               (pbVar14 = pbVar27, pbVar18 = pbVar26, pbVar19 = *(byte **)(pbVar17 + 0x10),
               pbVar21 = *(byte **)(pbVar17 + 0x18),
               pbVar27 == *(byte **)(pbVar17 + 0x10) && pbVar26 == *(byte **)(pbVar17 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar17[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar17 != ((uint)pbVar14 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar21 = *(byte **)(pbVar17 + 0x10);
          lVar16 = *(long *)(pbVar17 + 0x20);
          if (pbVar27 == (byte *)0x0) {
            if (pbVar21 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar21 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar19 = *(byte **)(pbVar17 + 8);
            pbVar14 = pbVar12;
            pbVar18 = pbVar27;
            if ((pbVar12 != pbVar19) || (pbVar27 != pbVar21)) goto code_r0x000107c605b8;
          }
          if (lVar28 != 0) {
            if (lVar16 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar26 == *(byte **)(pbVar17 + 0x18)) && (lVar28 == lVar16)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar26,lVar28,*(byte **)(pbVar17 + 0x18),lVar16,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar16 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar29 != 5) {
          if ((((pbVar26 == (byte *)0x0 && pbVar12 == (byte *)0x0) && pbVar14 == (byte *)0x0) &&
              lVar28 == 0) && pbVar27 == (byte *)0x0) {
            if (pbVar17[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar28 = *(long *)(pbVar17 + 0x20);
            lVar16 = *(long *)(pbVar17 + 0x18);
            bVar29 = pbVar17[8] | (byte)lVar16;
            bVar30 = pbVar17[9] | (byte)((ulong)lVar16 >> 8);
            bVar31 = pbVar17[10] | (byte)((ulong)lVar16 >> 0x10);
            bVar32 = pbVar17[0xb] | (byte)((ulong)lVar16 >> 0x18);
            bVar33 = pbVar17[0xc] | (byte)((ulong)lVar16 >> 0x20);
            bVar34 = pbVar17[0xd] | (byte)((ulong)lVar16 >> 0x28);
            bVar35 = pbVar17[0xe] | (byte)((ulong)lVar16 >> 0x30);
            bVar36 = pbVar17[0xf] | (byte)((ulong)lVar16 >> 0x38);
            bVar37 = pbVar17[0x10] | (byte)lVar28;
            bVar38 = pbVar17[0x11] | (byte)((ulong)lVar28 >> 8);
            bVar39 = pbVar17[0x12] | (byte)((ulong)lVar28 >> 0x10);
            bVar40 = pbVar17[0x13] | (byte)((ulong)lVar28 >> 0x18);
            bVar41 = pbVar17[0x14] | (byte)((ulong)lVar28 >> 0x20);
            bVar42 = pbVar17[0x15] | (byte)((ulong)lVar28 >> 0x28);
            bVar43 = pbVar17[0x16] | (byte)((ulong)lVar28 >> 0x30);
            bVar44 = pbVar17[0x17] | (byte)((ulong)lVar28 >> 0x38);
            auVar45[1] = bVar30;
            auVar45[0] = bVar29;
            auVar45[2] = bVar31;
            auVar45[3] = bVar32;
            auVar45[4] = bVar33;
            auVar45[5] = bVar34;
            auVar45[6] = bVar35;
            auVar45[7] = bVar36;
            auVar45[8] = bVar37;
            auVar45[9] = bVar38;
            auVar45[10] = bVar39;
            auVar45[0xb] = bVar40;
            auVar45[0xc] = bVar41;
            auVar45[0xd] = bVar42;
            auVar45[0xe] = bVar43;
            auVar45[0xf] = bVar44;
            auVar5[1] = bVar30;
            auVar5[0] = bVar29;
            auVar5[2] = bVar31;
            auVar5[3] = bVar32;
            auVar5[4] = bVar33;
            auVar5[5] = bVar34;
            auVar5[6] = bVar35;
            auVar5[7] = bVar36;
            auVar5[8] = bVar37;
            auVar5[9] = bVar38;
            auVar5[10] = bVar39;
            auVar5[0xb] = bVar40;
            auVar5[0xc] = bVar41;
            auVar5[0xd] = bVar42;
            auVar5[0xe] = bVar43;
            auVar5[0xf] = bVar44;
            auVar45 = NEON_ext(auVar45,auVar5,8,1);
            if (CONCAT17(bVar36 | auVar45[7],
                         CONCAT16(bVar35 | auVar45[6],
                                  CONCAT15(bVar34 | auVar45[5],
                                           CONCAT14(bVar33 | auVar45[4],
                                                    CONCAT13(bVar32 | auVar45[3],
                                                             CONCAT12(bVar31 | auVar45[2],
                                                                      CONCAT11(bVar30 | auVar45[1],
                                                                               bVar29 | auVar45[0]))
                                                            ))))) == 0 && *(long *)pbVar17 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar14 == (byte *)0x1) &&
             (((pbVar26 == (byte *)0x0 && pbVar12 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
              lVar28 == 0)) {
            if (pbVar17[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar17 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar17 != 2) {
              return (byte *)0x0;
            }
          }
          lVar28 = *(long *)(pbVar17 + 0x20);
          lVar16 = *(long *)(pbVar17 + 0x18);
          bVar29 = pbVar17[8] | (byte)lVar16;
          bVar30 = pbVar17[9] | (byte)((ulong)lVar16 >> 8);
          bVar31 = pbVar17[10] | (byte)((ulong)lVar16 >> 0x10);
          bVar32 = pbVar17[0xb] | (byte)((ulong)lVar16 >> 0x18);
          bVar33 = pbVar17[0xc] | (byte)((ulong)lVar16 >> 0x20);
          bVar34 = pbVar17[0xd] | (byte)((ulong)lVar16 >> 0x28);
          bVar35 = pbVar17[0xe] | (byte)((ulong)lVar16 >> 0x30);
          bVar36 = pbVar17[0xf] | (byte)((ulong)lVar16 >> 0x38);
          bVar37 = pbVar17[0x10] | (byte)lVar28;
          bVar38 = pbVar17[0x11] | (byte)((ulong)lVar28 >> 8);
          bVar39 = pbVar17[0x12] | (byte)((ulong)lVar28 >> 0x10);
          bVar40 = pbVar17[0x13] | (byte)((ulong)lVar28 >> 0x18);
          bVar41 = pbVar17[0x14] | (byte)((ulong)lVar28 >> 0x20);
          bVar42 = pbVar17[0x15] | (byte)((ulong)lVar28 >> 0x28);
          bVar43 = pbVar17[0x16] | (byte)((ulong)lVar28 >> 0x30);
          bVar44 = pbVar17[0x17] | (byte)((ulong)lVar28 >> 0x38);
          auVar3[1] = bVar30;
          auVar3[0] = bVar29;
          auVar3[2] = bVar31;
          auVar3[3] = bVar32;
          auVar3[4] = bVar33;
          auVar3[5] = bVar34;
          auVar3[6] = bVar35;
          auVar3[7] = bVar36;
          auVar3[8] = bVar37;
          auVar3[9] = bVar38;
          auVar3[10] = bVar39;
          auVar3[0xb] = bVar40;
          auVar3[0xc] = bVar41;
          auVar3[0xd] = bVar42;
          auVar3[0xe] = bVar43;
          auVar3[0xf] = bVar44;
          auVar4[1] = bVar30;
          auVar4[0] = bVar29;
          auVar4[2] = bVar31;
          auVar4[3] = bVar32;
          auVar4[4] = bVar33;
          auVar4[5] = bVar34;
          auVar4[6] = bVar35;
          auVar4[7] = bVar36;
          auVar4[8] = bVar37;
          auVar4[9] = bVar38;
          auVar4[10] = bVar39;
          auVar4[0xb] = bVar40;
          auVar4[0xc] = bVar41;
          auVar4[0xd] = bVar42;
          auVar4[0xe] = bVar43;
          auVar4[0xf] = bVar44;
          auVar45 = NEON_ext(auVar3,auVar4,8,1);
          lVar16 = CONCAT17(bVar36 | auVar45[7],
                            CONCAT16(bVar35 | auVar45[6],
                                     CONCAT15(bVar34 | auVar45[5],
                                              CONCAT14(bVar33 | auVar45[4],
                                                       CONCAT13(bVar32 | auVar45[3],
                                                                CONCAT12(bVar31 | auVar45[2],
                                                                         CONCAT11(bVar30 | auVar45[1
                                                  ],bVar29 | auVar45[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar17[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar16 = *(long *)(pbVar17 + 8);
        uVar20 = *(ulong *)(pbVar17 + 0x10);
        lVar28 = *(long *)pbVar17;
        uVar13 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar14,lVar28,uVar13);
        if (((ulong)pbVar14 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar9 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar9 + -0x88);
        unaff_x20 = *(ulong *)(puVar9 + -0xa0);
        unaff_x19 = *(byte **)(puVar9 + -0x98);
        unaff_x22 = *(ulong *)(puVar9 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar9 + -0xa8);
        unaff_x24 = *(byte **)(puVar9 + -0xc0);
        unaff_x23 = *(byte **)(puVar9 + -0xb8);
        puVar9 = puVar9 + -0x80;
      } while( true );
    }
  }
  return (byte *)0x0;
}



/* Entry: 104750dc0; end: 104750e77;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_104750dc0(ulong *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  undefined1 *puVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 uVar13;
  byte *pbVar14;
  ulong uVar15;
  long lVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  ulong uVar20;
  byte *pbVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  ulong uVar25;
  byte *pbVar26;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar27;
  ulong unaff_x22;
  long lVar28;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 auVar45 [16];
  
  uVar20 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar20 != 0) {
      return (byte *)0x0;
    }
  }
  else {
    if (uVar20 == 0) {
      return (byte *)0x0;
    }
    uVar15 = *param_1;
    if ((uVar15 != *param_2 || param_1[1] != uVar20) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar15 & 1) == 0)) {
      return (byte *)0x0;
    }
  }
  if ((double)param_1[2] == (double)param_2[2]) {
    lVar16 = 0;
    FUN_104750be8();
    uVar20 = (long)param_1 + (long)*(int *)(lVar16 + 0x18);
    FUN_1047549c8(uVar20,(long)param_2 + (long)*(int *)(lVar16 + 0x18));
    if ((uVar20 & 1) != 0) {
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x1c));
      pbVar12 = (byte *)*puVar1;
      pbVar27 = (byte *)puVar1[1];
      plVar2 = (long *)((long)param_2 + (long)*(int *)(lVar16 + 0x1c));
      lVar16 = *plVar2;
      uVar20 = plVar2[1];
      puVar9 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar9 + -0x50) = unaff_x26;
        *(byte **)(puVar9 + -0x48) = unaff_x25;
        *(byte **)(puVar9 + -0x40) = unaff_x24;
        *(byte **)(puVar9 + -0x38) = unaff_x23;
        *(ulong *)(puVar9 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar9 + -0x28) = unaff_x21;
        *(ulong *)(puVar9 + -0x20) = unaff_x20;
        *(byte **)(puVar9 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar9 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar9 + -8) = unaff_x30;
        *(undefined8 *)(puVar9 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar6 = (uint)((ulong)pbVar27 >> 0x20);
        uVar22 = uVar6 >> 0x1e;
        uVar7 = (uint)(uVar20 >> 0x20);
        uVar24 = uVar7 >> 0x1e;
        iVar10 = (int)pbVar12;
        pbVar17 = pbVar27;
        if ((ulong)pbVar27 >> 0x3e == 3) {
          uVar15 = 0;
          if ((((pbVar12 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
              (uVar20 >> 0x3e < 3)) || ((uVar15 = 0, lVar16 != 0 || (uVar20 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar11 = (byte *)0x1;
        }
        else if (uVar6 >> 0x1e < 2) {
          if (uVar22 == 0) {
            uVar15 = (ulong)pbVar27 >> 0x30 & 0xff;
          }
          else {
            iVar23 = (int)((ulong)pbVar12 >> 0x20);
            if (SBORROW4(iVar23,iVar10)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar8)();
            }
            uVar15 = (ulong)(iVar23 - iVar10);
          }
joined_r0x000100e26170:
          if (1 < uVar7 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar24 == 0) {
            uVar25 = uVar20 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar23 = (int)((ulong)lVar16 >> 0x20);
          if (SBORROW4(iVar23,(int)lVar16)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar8)();
          }
          if (uVar15 == (long)(iVar23 - (int)lVar16)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar11 = (byte *)0x0;
        }
        else {
          if (uVar22 == 2) {
            uVar15 = *(long *)(pbVar12 + 0x18) - *(long *)(pbVar12 + 0x10);
            if (SBORROW8(*(long *)(pbVar12 + 0x18),*(long *)(pbVar12 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar8)();
            }
            goto joined_r0x000100e26170;
          }
          uVar15 = 0;
          if (uVar24 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar24 == 2) {
            uVar25 = *(long *)(lVar16 + 0x18) - *(long *)(lVar16 + 0x10);
            if (SBORROW8(*(long *)(lVar16 + 0x18),*(long *)(lVar16 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar8)();
            }
code_r0x000100e2608c:
            if (uVar15 != uVar25) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar15 < 1) goto code_r0x000100e26128;
            if (uVar22 < 2) {
              if (uVar22 == 0) {
                puVar9[-0x70] = (char)pbVar12;
                puVar9[-0x6f] = (char)((ulong)pbVar12 >> 8);
                puVar9[-0x6e] = (char)((ulong)pbVar12 >> 0x10);
                puVar9[-0x6d] = (char)((ulong)pbVar12 >> 0x18);
                puVar9[-0x6c] = (char)((ulong)pbVar12 >> 0x20);
                puVar9[-0x6b] = (char)((ulong)pbVar12 >> 0x28);
                puVar9[-0x6a] = (char)((ulong)pbVar12 >> 0x30);
                puVar9[-0x69] = (char)((ulong)pbVar12 >> 0x38);
                puVar9[-0x68] = (char)pbVar27;
                puVar9[-0x67] = (char)((ulong)pbVar27 >> 8);
                puVar9[-0x66] = (char)((ulong)pbVar27 >> 0x10);
                puVar9[-0x65] = (char)((ulong)pbVar27 >> 0x18);
                puVar9[-100] = (char)((ulong)pbVar27 >> 0x20);
                puVar9[-99] = (char)((ulong)pbVar27 >> 0x28);
                pbVar17 = puVar9 + (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar9 + -0x71,puVar9 + -0x70);
                pbVar11 = (byte *)(ulong)(byte)puVar9[-0x71];
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar10;
              unaff_x23 = (byte *)(((long)pbVar12 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar12 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar8)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar27;
              if (pbVar12 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar12 = (byte *)0x0;
              }
              else {
                pbVar17 = pbVar12;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar17)) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar8)();
                }
                pbVar12 = pbVar12 + ((long)unaff_x25 - (long)pbVar17);
                func_0x000107c5ec38();
                unaff_x19 = pbVar12;
                if (pbVar12 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar17) {
                    pbVar17 = unaff_x23;
                  }
                  pbVar17 = pbVar17 + (long)pbVar12;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar17 = (byte *)0x0;
            }
            else {
              if (uVar22 != 2) {
                *(undefined8 *)(puVar9 + -0x6a) = 0;
                *(undefined8 *)(puVar9 + -0x70) = 0;
                pbVar17 = puVar9 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar28 = *(long *)(pbVar12 + 0x10);
              unaff_x24 = *(byte **)(pbVar12 + 0x18);
              func_0x000107c5ec30();
              pbVar17 = pbVar12;
              if (pbVar12 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar28,(long)pbVar17)) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar8)();
                }
                pbVar12 = pbVar12 + (lVar28 - (long)pbVar17);
              }
              unaff_x23 = unaff_x24 + -lVar28;
              if (SBORROW8((long)unaff_x24,lVar28)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar8)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar12;
              unaff_x25 = pbVar27;
              if (pbVar12 == (byte *)0x0) {
                pbVar17 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar17) {
                  pbVar17 = unaff_x23;
                }
                pbVar17 = pbVar17 + (long)pbVar12;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar9 + -0x70,pbVar12,pbVar17,lVar16,uVar20);
            pbVar11 = (byte *)(ulong)(byte)puVar9[-0x70];
            unaff_x22 = uVar20;
          }
          else {
            pbVar11 = (byte *)(ulong)(uVar15 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar9 + -0x58)) {
          return pbVar11;
        }
        func_0x000107c60e78();
        *(byte **)(puVar9 + -0xc0) = unaff_x24;
        *(byte **)(puVar9 + -0xb8) = unaff_x23;
        *(ulong *)(puVar9 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar9 + -0xa8) = unaff_x21;
        *(ulong *)(puVar9 + -0xa0) = unaff_x20;
        *(byte **)(puVar9 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar9 + -0x90) = puVar9 + -0x10;
        *(undefined **)(puVar9 + -0x88) = &UNK_100e26304;
        pbVar14 = *(byte **)pbVar11;
        pbVar12 = *(byte **)(pbVar11 + 8);
        pbVar26 = *(byte **)(pbVar11 + 0x18);
        bVar29 = pbVar11[0x28];
        pbVar27 = (byte *)((ulong)*(uint *)(pbVar11 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar11 + 0x15) << 0x28 | (ulong)pbVar11[0x10]);
        pbVar18 = pbVar12;
        if (bVar29 < 3) {
          if (bVar29 == 0) {
            if (pbVar17[0x28] == 0) {
              lVar16 = *(long *)pbVar17;
              uVar13 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar14,lVar16,uVar13);
              return (byte *)(ulong)((uint)pbVar14 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar29 == 1) {
            if (pbVar17[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar19 = *(byte **)(pbVar17 + 8);
            pbVar21 = *(byte **)(pbVar17 + 0x10);
            lVar16 = *(long *)pbVar17;
            uVar13 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar14,lVar16,uVar13);
            if (((ulong)pbVar14 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar14 = pbVar12;
            pbVar18 = pbVar27;
            if ((pbVar12 == pbVar19) && (pbVar27 == pbVar21)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar17[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar19 = *(byte **)pbVar17;
            pbVar21 = *(byte **)(pbVar17 + 8);
            lVar16 = *(long *)(pbVar17 + 0x18);
            if ((pbVar14 == pbVar19) && (pbVar12 == pbVar21)) {
              if (((pbVar11[0x10] ^ pbVar17[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar26 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar16 == 0) {
                return (byte *)0x0;
              }
              func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar16);
              func_0x000107c61174();
              pbVar12 = pbVar26;
              func_0x000107c60118();
              func_0x000107c61170(pbVar26);
              func_0x000107c61170(lVar16);
              pbVar26 = pbVar12;
joined_r0x000100e266a4:
              if (((ulong)pbVar26 & 1) == 0) {
                return (byte *)0x0;
              }
              return (byte *)0x1;
            }
          }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
          )(pbVar14,pbVar18,pbVar19,pbVar21,0);
          return pbVar14;
        }
        lVar28 = *(long *)(pbVar11 + 0x20);
        if (bVar29 < 5) {
          if (bVar29 != 3) {
            if (pbVar17[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar19 = *(byte **)pbVar17;
            pbVar21 = *(byte **)(pbVar17 + 8);
            if (((pbVar14 == pbVar19) && (pbVar12 == pbVar21)) &&
               (pbVar14 = pbVar27, pbVar18 = pbVar26, pbVar19 = *(byte **)(pbVar17 + 0x10),
               pbVar21 = *(byte **)(pbVar17 + 0x18),
               pbVar27 == *(byte **)(pbVar17 + 0x10) && pbVar26 == *(byte **)(pbVar17 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar17[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar17 != ((uint)pbVar14 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar21 = *(byte **)(pbVar17 + 0x10);
          lVar16 = *(long *)(pbVar17 + 0x20);
          if (pbVar27 == (byte *)0x0) {
            if (pbVar21 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar21 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar19 = *(byte **)(pbVar17 + 8);
            pbVar14 = pbVar12;
            pbVar18 = pbVar27;
            if ((pbVar12 != pbVar19) || (pbVar27 != pbVar21)) goto code_r0x000107c605b8;
          }
          if (lVar28 != 0) {
            if (lVar16 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar26 == *(byte **)(pbVar17 + 0x18)) && (lVar28 == lVar16)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar26,lVar28,*(byte **)(pbVar17 + 0x18),lVar16,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar16 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar29 != 5) {
          if ((((pbVar26 == (byte *)0x0 && pbVar12 == (byte *)0x0) && pbVar14 == (byte *)0x0) &&
              lVar28 == 0) && pbVar27 == (byte *)0x0) {
            if (pbVar17[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar28 = *(long *)(pbVar17 + 0x20);
            lVar16 = *(long *)(pbVar17 + 0x18);
            bVar29 = pbVar17[8] | (byte)lVar16;
            bVar30 = pbVar17[9] | (byte)((ulong)lVar16 >> 8);
            bVar31 = pbVar17[10] | (byte)((ulong)lVar16 >> 0x10);
            bVar32 = pbVar17[0xb] | (byte)((ulong)lVar16 >> 0x18);
            bVar33 = pbVar17[0xc] | (byte)((ulong)lVar16 >> 0x20);
            bVar34 = pbVar17[0xd] | (byte)((ulong)lVar16 >> 0x28);
            bVar35 = pbVar17[0xe] | (byte)((ulong)lVar16 >> 0x30);
            bVar36 = pbVar17[0xf] | (byte)((ulong)lVar16 >> 0x38);
            bVar37 = pbVar17[0x10] | (byte)lVar28;
            bVar38 = pbVar17[0x11] | (byte)((ulong)lVar28 >> 8);
            bVar39 = pbVar17[0x12] | (byte)((ulong)lVar28 >> 0x10);
            bVar40 = pbVar17[0x13] | (byte)((ulong)lVar28 >> 0x18);
            bVar41 = pbVar17[0x14] | (byte)((ulong)lVar28 >> 0x20);
            bVar42 = pbVar17[0x15] | (byte)((ulong)lVar28 >> 0x28);
            bVar43 = pbVar17[0x16] | (byte)((ulong)lVar28 >> 0x30);
            bVar44 = pbVar17[0x17] | (byte)((ulong)lVar28 >> 0x38);
            auVar45[1] = bVar30;
            auVar45[0] = bVar29;
            auVar45[2] = bVar31;
            auVar45[3] = bVar32;
            auVar45[4] = bVar33;
            auVar45[5] = bVar34;
            auVar45[6] = bVar35;
            auVar45[7] = bVar36;
            auVar45[8] = bVar37;
            auVar45[9] = bVar38;
            auVar45[10] = bVar39;
            auVar45[0xb] = bVar40;
            auVar45[0xc] = bVar41;
            auVar45[0xd] = bVar42;
            auVar45[0xe] = bVar43;
            auVar45[0xf] = bVar44;
            auVar5[1] = bVar30;
            auVar5[0] = bVar29;
            auVar5[2] = bVar31;
            auVar5[3] = bVar32;
            auVar5[4] = bVar33;
            auVar5[5] = bVar34;
            auVar5[6] = bVar35;
            auVar5[7] = bVar36;
            auVar5[8] = bVar37;
            auVar5[9] = bVar38;
            auVar5[10] = bVar39;
            auVar5[0xb] = bVar40;
            auVar5[0xc] = bVar41;
            auVar5[0xd] = bVar42;
            auVar5[0xe] = bVar43;
            auVar5[0xf] = bVar44;
            auVar45 = NEON_ext(auVar45,auVar5,8,1);
            if (CONCAT17(bVar36 | auVar45[7],
                         CONCAT16(bVar35 | auVar45[6],
                                  CONCAT15(bVar34 | auVar45[5],
                                           CONCAT14(bVar33 | auVar45[4],
                                                    CONCAT13(bVar32 | auVar45[3],
                                                             CONCAT12(bVar31 | auVar45[2],
                                                                      CONCAT11(bVar30 | auVar45[1],
                                                                               bVar29 | auVar45[0]))
                                                            ))))) == 0 && *(long *)pbVar17 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar14 == (byte *)0x1) &&
             (((pbVar26 == (byte *)0x0 && pbVar12 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
              lVar28 == 0)) {
            if (pbVar17[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar17 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar17 != 2) {
              return (byte *)0x0;
            }
          }
          lVar28 = *(long *)(pbVar17 + 0x20);
          lVar16 = *(long *)(pbVar17 + 0x18);
          bVar29 = pbVar17[8] | (byte)lVar16;
          bVar30 = pbVar17[9] | (byte)((ulong)lVar16 >> 8);
          bVar31 = pbVar17[10] | (byte)((ulong)lVar16 >> 0x10);
          bVar32 = pbVar17[0xb] | (byte)((ulong)lVar16 >> 0x18);
          bVar33 = pbVar17[0xc] | (byte)((ulong)lVar16 >> 0x20);
          bVar34 = pbVar17[0xd] | (byte)((ulong)lVar16 >> 0x28);
          bVar35 = pbVar17[0xe] | (byte)((ulong)lVar16 >> 0x30);
          bVar36 = pbVar17[0xf] | (byte)((ulong)lVar16 >> 0x38);
          bVar37 = pbVar17[0x10] | (byte)lVar28;
          bVar38 = pbVar17[0x11] | (byte)((ulong)lVar28 >> 8);
          bVar39 = pbVar17[0x12] | (byte)((ulong)lVar28 >> 0x10);
          bVar40 = pbVar17[0x13] | (byte)((ulong)lVar28 >> 0x18);
          bVar41 = pbVar17[0x14] | (byte)((ulong)lVar28 >> 0x20);
          bVar42 = pbVar17[0x15] | (byte)((ulong)lVar28 >> 0x28);
          bVar43 = pbVar17[0x16] | (byte)((ulong)lVar28 >> 0x30);
          bVar44 = pbVar17[0x17] | (byte)((ulong)lVar28 >> 0x38);
          auVar3[1] = bVar30;
          auVar3[0] = bVar29;
          auVar3[2] = bVar31;
          auVar3[3] = bVar32;
          auVar3[4] = bVar33;
          auVar3[5] = bVar34;
          auVar3[6] = bVar35;
          auVar3[7] = bVar36;
          auVar3[8] = bVar37;
          auVar3[9] = bVar38;
          auVar3[10] = bVar39;
          auVar3[0xb] = bVar40;
          auVar3[0xc] = bVar41;
          auVar3[0xd] = bVar42;
          auVar3[0xe] = bVar43;
          auVar3[0xf] = bVar44;
          auVar4[1] = bVar30;
          auVar4[0] = bVar29;
          auVar4[2] = bVar31;
          auVar4[3] = bVar32;
          auVar4[4] = bVar33;
          auVar4[5] = bVar34;
          auVar4[6] = bVar35;
          auVar4[7] = bVar36;
          auVar4[8] = bVar37;
          auVar4[9] = bVar38;
          auVar4[10] = bVar39;
          auVar4[0xb] = bVar40;
          auVar4[0xc] = bVar41;
          auVar4[0xd] = bVar42;
          auVar4[0xe] = bVar43;
          auVar4[0xf] = bVar44;
          auVar45 = NEON_ext(auVar3,auVar4,8,1);
          lVar16 = CONCAT17(bVar36 | auVar45[7],
                            CONCAT16(bVar35 | auVar45[6],
                                     CONCAT15(bVar34 | auVar45[5],
                                              CONCAT14(bVar33 | auVar45[4],
                                                       CONCAT13(bVar32 | auVar45[3],
                                                                CONCAT12(bVar31 | auVar45[2],
                                                                         CONCAT11(bVar30 | auVar45[1
                                                  ],bVar29 | auVar45[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar17[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar16 = *(long *)(pbVar17 + 8);
        uVar20 = *(ulong *)(pbVar17 + 0x10);
        lVar28 = *(long *)pbVar17;
        uVar13 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar14,lVar28,uVar13);
        if (((ulong)pbVar14 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar9 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar9 + -0x88);
        unaff_x20 = *(ulong *)(puVar9 + -0xa0);
        unaff_x19 = *(byte **)(puVar9 + -0x98);
        unaff_x22 = *(ulong *)(puVar9 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar9 + -0xa8);
        unaff_x24 = *(byte **)(puVar9 + -0xc0);
        unaff_x23 = *(byte **)(puVar9 + -0xb8);
        puVar9 = puVar9 + -0x80;
      } while( true );
    }
  }
  return (byte *)0x0;
}



/* Entry: 104750e78; end: 104750e7b;  */

void FUN_104750e78(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011308e830 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_104750be8(0xff);
  puVar2 = &UNK_10dd337d0;
  _swift_getWitnessTable(&UNK_10dd337d0,uVar1);
  puRam000000011308e830 = puVar2;
  return;
}



/* Entry: 104750e7c; end: 104750ebf;  */

void FUN_104750e7c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011308e830 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_104750be8(0xff);
  puVar2 = &UNK_10dd337d0;
  _swift_getWitnessTable(&UNK_10dd337d0,uVar1);
  puRam000000011308e830 = puVar2;
  return;
}



/* Entry: 104750ec0; end: 104751693;  */

long * FUN_104750ec0(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint5 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  
  uVar7 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar7 >> 0x11 & 1) == 0) {
    lVar14 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar14;
    param_1[2] = param_2[2];
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    lVar9 = 0;
    FUN_104739264();
    lVar15 = *(long *)(lVar9 + -8);
    pcVar16 = *(code **)(lVar15 + 0x30);
    _swift_bridgeObjectRetain(lVar14);
    puVar10 = puVar2;
    (*pcVar16)(puVar2,1,lVar9);
    if ((int)puVar10 == 0) {
      uVar19 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar19;
      uVar19 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar19;
      uVar18 = puVar2[5];
      puVar1[4] = puVar2[4];
      puVar1[5] = uVar18;
      uVar21 = puVar2[7];
      puVar1[6] = puVar2[6];
      puVar1[7] = uVar21;
      puVar1[8] = puVar2[8];
      lVar14 = puVar2[0xf];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar19);
      _swift_bridgeObjectRetain(uVar18);
      _swift_bridgeObjectRetain(uVar21);
      if (lVar14 == 1) {
        uVar19 = puVar2[9];
        puVar1[10] = puVar2[10];
        puVar1[9] = uVar19;
        uVar19 = puVar2[0xb];
        puVar1[0xc] = puVar2[0xc];
        puVar1[0xb] = uVar19;
        uVar19 = puVar2[0xd];
        puVar1[0xe] = puVar2[0xe];
        puVar1[0xd] = uVar19;
        puVar1[0xf] = puVar2[0xf];
      }
      else {
        lVar11 = puVar2[0xb];
        if (lVar11 == 1) {
          uVar19 = puVar2[9];
          puVar1[10] = puVar2[10];
          puVar1[9] = uVar19;
          uVar19 = puVar2[0xb];
          puVar1[0xc] = puVar2[0xc];
          puVar1[0xb] = uVar19;
          puVar1[0xd] = puVar2[0xd];
        }
        else {
          uVar19 = puVar2[9];
          puVar1[10] = puVar2[10];
          puVar1[9] = uVar19;
          uVar19 = puVar2[0xc];
          uVar18 = puVar2[0xd];
          puVar1[0xb] = lVar11;
          puVar1[0xc] = uVar19;
          puVar1[0xd] = uVar18;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar18);
        }
        puVar1[0xe] = puVar2[0xe];
        puVar1[0xf] = lVar14;
        _swift_bridgeObjectRetain(lVar14);
      }
      uVar19 = puVar2[0x11];
      puVar1[0x10] = puVar2[0x10];
      puVar1[0x11] = uVar19;
      uVar18 = puVar2[0x13];
      puVar1[0x12] = puVar2[0x12];
      puVar1[0x13] = uVar18;
      lVar14 = (long)puVar1 + (long)*(int *)(lVar9 + 0x34);
      lVar11 = (long)puVar2 + (long)*(int *)(lVar9 + 0x34);
      lVar12 = 0;
      FUN_104742f28();
      lVar17 = *(long *)(lVar12 + -8);
      pcVar16 = *(code **)(lVar17 + 0x30);
      _swift_bridgeObjectRetain(uVar19);
      _swift_bridgeObjectRetain(uVar18);
      lVar13 = lVar11;
      (*pcVar16)(lVar11,1,lVar12);
      if ((int)lVar13 == 0) {
        lVar13 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar13 + -8) + 0x10))(lVar14,lVar11,lVar13);
        puVar10 = (undefined8 *)(lVar14 + *(int *)(lVar12 + 0x14));
        puVar3 = (undefined8 *)(lVar11 + *(int *)(lVar12 + 0x14));
        uVar19 = puVar3[1];
        *puVar10 = *puVar3;
        puVar10[1] = uVar19;
        *(undefined1 *)(lVar14 + *(int *)(lVar12 + 0x18)) =
             *(undefined1 *)(lVar11 + *(int *)(lVar12 + 0x18));
        *(undefined1 *)(lVar14 + *(int *)(lVar12 + 0x1c)) =
             *(undefined1 *)(lVar11 + *(int *)(lVar12 + 0x1c));
        puVar10 = (undefined8 *)(lVar14 + *(int *)(lVar12 + 0x20));
        puVar3 = (undefined8 *)(lVar11 + *(int *)(lVar12 + 0x20));
        *puVar10 = *puVar3;
        *(undefined1 *)(puVar10 + 1) = *(undefined1 *)(puVar3 + 1);
        *(undefined1 *)(lVar14 + *(int *)(lVar12 + 0x24)) =
             *(undefined1 *)(lVar11 + *(int *)(lVar12 + 0x24));
        pcVar16 = *(code **)(lVar17 + 0x38);
        _swift_bridgeObjectRetain();
        (*pcVar16)(lVar14,0,1,lVar12);
      }
      else {
        lVar13 = 0x112dcbf00;
        func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
        _memcpy(lVar14,lVar11,*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
      }
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x38));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x38));
      uVar19 = *puVar3;
      puVar10[1] = puVar3[1];
      *puVar10 = uVar19;
      uVar19 = *(undefined8 *)((long)puVar3 + 9);
      *(undefined8 *)((long)puVar10 + 0x11) = *(undefined8 *)((long)puVar3 + 0x11);
      *(undefined8 *)((long)puVar10 + 9) = uVar19;
      (**(code **)(lVar15 + 0x38))(puVar1,0,1,lVar9);
    }
    else {
      lVar14 = 0x112db3ce0;
      func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
    }
    lVar14 = 0;
    FUN_104754770();
    puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x14));
    puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x14));
    if (puVar2[0x18] == 1) {
      _memcpy(puVar1,puVar2,0x260);
    }
    else {
      lVar14 = puVar2[1];
      if (lVar14 == 1) {
        uVar19 = *puVar2;
        puVar1[1] = puVar2[1];
        *puVar1 = uVar19;
        puVar1[2] = puVar2[2];
      }
      else {
        *puVar1 = *puVar2;
        puVar1[1] = lVar14;
        uVar19 = puVar2[2];
        puVar1[2] = uVar19;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar19);
      }
      uVar20 = puVar2[5];
      if (uVar20 >> 0x3c == 0xb) {
        uVar19 = puVar2[3];
        puVar1[4] = puVar2[4];
        puVar1[3] = uVar19;
        puVar1[5] = puVar2[5];
      }
      else {
        puVar1[3] = puVar2[3];
        if (uVar20 >> 0x3c < 0xf) {
          uVar19 = puVar2[4];
          func_0x00010006c00c(uVar19,uVar20);
          puVar1[4] = uVar19;
          puVar1[5] = uVar20;
        }
        else {
          uVar19 = puVar2[4];
          puVar1[5] = puVar2[5];
          puVar1[4] = uVar19;
        }
      }
      *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(puVar2 + 6);
      puVar1[7] = puVar2[7];
      lVar14 = puVar2[9];
      if (lVar14 == 1) {
        uVar19 = puVar2[0x10];
        uVar21 = puVar2[0x13];
        uVar18 = puVar2[0x12];
        puVar1[0x11] = puVar2[0x11];
        puVar1[0x10] = uVar19;
        puVar1[0x13] = uVar21;
        puVar1[0x12] = uVar18;
        uVar19 = puVar2[0x14];
        puVar1[0x15] = puVar2[0x15];
        puVar1[0x14] = uVar19;
        uVar19 = *(undefined8 *)((long)puVar2 + 0xaa);
        *(undefined8 *)((long)puVar1 + 0xb2) = *(undefined8 *)((long)puVar2 + 0xb2);
        *(undefined8 *)((long)puVar1 + 0xaa) = uVar19;
        uVar19 = puVar2[8];
        uVar21 = puVar2[0xb];
        uVar18 = puVar2[10];
        puVar1[9] = puVar2[9];
        puVar1[8] = uVar19;
        puVar1[0xb] = uVar21;
        puVar1[10] = uVar18;
        uVar19 = puVar2[0xc];
        uVar21 = puVar2[0xf];
        uVar18 = puVar2[0xe];
        puVar1[0xd] = puVar2[0xd];
        puVar1[0xc] = uVar19;
        puVar1[0xf] = uVar21;
        puVar1[0xe] = uVar18;
      }
      else {
        puVar1[8] = puVar2[8];
        puVar1[9] = lVar14;
        uVar4 = puVar2[0xb];
        puVar1[10] = puVar2[10];
        puVar1[0xb] = uVar4;
        uVar19 = puVar2[0xc];
        uVar18 = puVar2[0xd];
        puVar1[0xc] = uVar19;
        puVar1[0xd] = uVar18;
        uVar18 = puVar2[0xe];
        uVar21 = puVar2[0xf];
        puVar1[0xe] = uVar18;
        puVar1[0xf] = uVar21;
        uVar21 = puVar2[0x10];
        uVar5 = puVar2[0x11];
        puVar1[0x10] = uVar21;
        puVar1[0x11] = uVar5;
        lVar14 = puVar2[0x13];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar4);
        _swift_bridgeObjectRetain(uVar19);
        _swift_bridgeObjectRetain(uVar18);
        _swift_bridgeObjectRetain(uVar21);
        _swift_bridgeObjectRetain(uVar5);
        if (lVar14 == 1) {
          uVar19 = puVar2[0x12];
          puVar1[0x13] = puVar2[0x13];
          puVar1[0x12] = uVar19;
        }
        else {
          puVar1[0x12] = puVar2[0x12];
          puVar1[0x13] = lVar14;
          _swift_bridgeObjectRetain(lVar14);
        }
        uVar19 = puVar2[0x15];
        puVar1[0x14] = puVar2[0x14];
        puVar1[0x15] = uVar19;
        puVar1[0x16] = puVar2[0x16];
        *(undefined2 *)(puVar1 + 0x17) = *(undefined2 *)(puVar2 + 0x17);
        _swift_bridgeObjectRetain();
      }
      *(undefined2 *)((long)puVar1 + 0xba) = *(undefined2 *)((long)puVar2 + 0xba);
      if (puVar2[0x18] == 0) {
        lVar14 = puVar2[0x18];
        uVar18 = puVar2[0x1b];
        uVar19 = puVar2[0x1a];
        puVar1[0x19] = puVar2[0x19];
        puVar1[0x18] = lVar14;
        puVar1[0x1b] = uVar18;
        puVar1[0x1a] = uVar19;
        uVar19 = puVar2[0x1c];
        uVar21 = puVar2[0x1f];
        uVar18 = puVar2[0x1e];
        puVar1[0x1d] = puVar2[0x1d];
        puVar1[0x1c] = uVar19;
        puVar1[0x1f] = uVar21;
        puVar1[0x1e] = uVar18;
      }
      else {
        puVar1[0x18] = puVar2[0x18];
        uVar19 = puVar2[0x19];
        puVar1[0x1a] = puVar2[0x1a];
        puVar1[0x19] = uVar19;
        uVar19 = puVar2[0x1c];
        puVar1[0x1b] = puVar2[0x1b];
        puVar1[0x1c] = uVar19;
        lVar14 = puVar2[0x1e];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar19);
        if (lVar14 == 0) {
          uVar19 = puVar2[0x1d];
          puVar1[0x1e] = puVar2[0x1e];
          puVar1[0x1d] = uVar19;
          puVar1[0x1f] = puVar2[0x1f];
        }
        else {
          puVar1[0x1d] = puVar2[0x1d];
          puVar1[0x1e] = lVar14;
          uVar19 = puVar2[0x1f];
          puVar1[0x1f] = uVar19;
          _swift_bridgeObjectRetain(lVar14);
          _swift_bridgeObjectRetain(uVar19);
        }
      }
      *(undefined1 *)(puVar1 + 0x20) = *(undefined1 *)(puVar2 + 0x20);
      uVar19 = puVar2[0x22];
      puVar1[0x21] = puVar2[0x21];
      puVar1[0x22] = uVar19;
      uVar19 = puVar2[0x24];
      puVar1[0x23] = puVar2[0x23];
      puVar1[0x24] = uVar19;
      uVar18 = puVar2[0x25];
      puVar1[0x26] = puVar2[0x26];
      puVar1[0x25] = uVar18;
      uVar18 = *(undefined8 *)((long)puVar2 + 0x132);
      *(undefined8 *)((long)puVar1 + 0x13a) = *(undefined8 *)((long)puVar2 + 0x13a);
      *(undefined8 *)((long)puVar1 + 0x132) = uVar18;
      lVar14 = puVar2[0x2a];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar19);
      if (lVar14 == 0) {
        uVar19 = puVar2[0x29];
        uVar21 = puVar2[0x2c];
        uVar18 = puVar2[0x2b];
        puVar1[0x2a] = puVar2[0x2a];
        puVar1[0x29] = uVar19;
        puVar1[0x2c] = uVar21;
        puVar1[0x2b] = uVar18;
      }
      else {
        puVar1[0x29] = puVar2[0x29];
        puVar1[0x2a] = lVar14;
        uVar19 = puVar2[0x2c];
        puVar1[0x2b] = puVar2[0x2b];
        puVar1[0x2c] = uVar19;
        _swift_bridgeObjectRetain(lVar14);
        _swift_bridgeObjectRetain(uVar19);
      }
      uVar19 = puVar2[0x2e];
      puVar1[0x2d] = puVar2[0x2d];
      puVar1[0x2e] = uVar19;
      uVar19 = puVar2[0x2f];
      uVar18 = puVar2[0x30];
      *(undefined1 *)(puVar1 + 0x31) = *(undefined1 *)(puVar2 + 0x31);
      uVar20 = puVar2[0x36];
      uVar8 = *(uint5 *)(puVar2 + 0x39);
      puVar1[0x2f] = uVar19;
      puVar1[0x30] = uVar18;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar18);
      if ((((uVar20 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
         (((ulong)uVar8 & 0xfefefefefefefefe) == 0x6fefefefe)) {
        uVar19 = puVar2[0x32];
        uVar21 = puVar2[0x35];
        uVar18 = puVar2[0x34];
        puVar1[0x33] = puVar2[0x33];
        puVar1[0x32] = uVar19;
        puVar1[0x35] = uVar21;
        puVar1[0x34] = uVar18;
        uVar19 = puVar2[0x36];
        puVar1[0x37] = puVar2[0x37];
        puVar1[0x36] = uVar19;
        uVar19 = *(undefined8 *)((long)puVar2 + 0x1bd);
        *(undefined8 *)((long)puVar1 + 0x1c5) = *(undefined8 *)((long)puVar2 + 0x1c5);
        *(undefined8 *)((long)puVar1 + 0x1bd) = uVar19;
      }
      else {
        uVar19 = puVar2[0x32];
        uVar4 = puVar2[0x33];
        uVar18 = puVar2[0x34];
        uVar5 = puVar2[0x35];
        uVar21 = puVar2[0x37];
        uVar6 = puVar2[0x38];
        func_0x00010179a2b8(uVar19,uVar4,uVar18,uVar5,uVar20,uVar21,uVar6,(ulong)uVar8);
        puVar1[0x32] = uVar19;
        puVar1[0x33] = uVar4;
        puVar1[0x34] = uVar18;
        puVar1[0x35] = uVar5;
        puVar1[0x36] = uVar20;
        puVar1[0x37] = uVar21;
        puVar1[0x38] = uVar6;
        *(char *)((long)puVar1 + 0x1cc) = (char)(uVar8 >> 0x20);
        *(int *)(puVar1 + 0x39) = (int)uVar8;
      }
      *(undefined1 *)((long)puVar1 + 0x1cd) = *(undefined1 *)((long)puVar2 + 0x1cd);
      uVar19 = puVar2[0x3b];
      puVar1[0x3a] = puVar2[0x3a];
      puVar1[0x3b] = uVar19;
      *(undefined1 *)(puVar1 + 0x3c) = *(undefined1 *)(puVar2 + 0x3c);
      lVar14 = puVar2[0x3e];
      _swift_bridgeObjectRetain();
      if (lVar14 == 0) {
        uVar19 = puVar2[0x3d];
        uVar21 = puVar2[0x40];
        uVar18 = puVar2[0x3f];
        puVar1[0x3e] = puVar2[0x3e];
        puVar1[0x3d] = uVar19;
        puVar1[0x40] = uVar21;
        puVar1[0x3f] = uVar18;
        uVar19 = puVar2[0x41];
        puVar1[0x42] = puVar2[0x42];
        puVar1[0x41] = uVar19;
      }
      else {
        puVar1[0x3d] = puVar2[0x3d];
        puVar1[0x3e] = lVar14;
        uVar19 = puVar2[0x40];
        puVar1[0x3f] = puVar2[0x3f];
        puVar1[0x40] = uVar19;
        puVar1[0x41] = puVar2[0x41];
        uVar18 = puVar2[0x42];
        puVar1[0x42] = uVar18;
        _swift_bridgeObjectRetain(lVar14);
        _swift_bridgeObjectRetain(uVar19);
        _swift_bridgeObjectRetain(uVar18);
      }
      *(undefined1 *)(puVar1 + 0x43) = *(undefined1 *)(puVar2 + 0x43);
      lVar14 = puVar2[0x45];
      if (lVar14 == 0) {
        uVar19 = puVar2[0x44];
        uVar21 = puVar2[0x47];
        uVar18 = puVar2[0x46];
        puVar1[0x45] = puVar2[0x45];
        puVar1[0x44] = uVar19;
        puVar1[0x47] = uVar21;
        puVar1[0x46] = uVar18;
        uVar19 = puVar2[0x48];
        puVar1[0x49] = puVar2[0x49];
        puVar1[0x48] = uVar19;
        puVar1[0x4a] = puVar2[0x4a];
      }
      else {
        puVar1[0x44] = puVar2[0x44];
        puVar1[0x45] = lVar14;
        puVar1[0x46] = puVar2[0x46];
        uVar19 = puVar2[0x47];
        puVar1[0x47] = uVar19;
        puVar1[0x48] = puVar2[0x48];
        uVar18 = puVar2[0x49];
        puVar1[0x49] = uVar18;
        puVar1[0x4a] = puVar2[0x4a];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar19);
        _swift_bridgeObjectRetain(uVar18);
      }
      puVar1[0x4b] = puVar2[0x4b];
      _swift_bridgeObjectRetain();
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar19 = *puVar2;
    uVar18 = puVar2[1];
    func_0x00010006c00c(uVar19,uVar18);
    *puVar1 = uVar19;
    puVar1[1] = uVar18;
  }
  else {
    lVar14 = *param_2;
    *param_1 = lVar14;
    uVar20 = (ulong)uVar7 & 0xff;
    param_1 = (long *)(lVar14 + (uVar20 + 0x10 & (uVar20 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 104751694; end: 10475195b;  */

/* WARNING: Possible PIC construction at 0x0001047517f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_104751694(long param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  ulong *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  lVar2 = param_1 + *(int *)(param_2 + 0x18);
  lVar4 = 0;
  FUN_104739264();
  lVar5 = lVar2;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar2,1,lVar4);
  if ((int)lVar5 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x18));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x28));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x38));
    lVar5 = *(long *)(lVar2 + 0x78);
    if (lVar5 != 1) {
      if (*(long *)(lVar2 + 0x58) != 1) {
        _swift_bridgeObjectRelease(*(long *)(lVar2 + 0x58));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x68));
        lVar5 = *(long *)(lVar2 + 0x78);
      }
      _swift_bridgeObjectRelease(lVar5);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x88));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x98));
    lVar5 = lVar2 + *(int *)(lVar4 + 0x34);
    lVar6 = 0;
    FUN_104742f28();
    lVar4 = lVar5;
    (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar5,1,lVar6);
    if ((int)lVar4 == 0) {
      lVar4 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar4 + -8) + 8))(lVar5,lVar4);
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + *(int *)(lVar6 + 0x14) + 8));
    }
  }
  lVar5 = 0;
  FUN_104754770();
  lVar2 = lVar2 + *(int *)(lVar5 + 0x14);
  if (*(long *)(lVar2 + 0xc0) != 1) {
    if (*(long *)(lVar2 + 8) != 1) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x10));
    }
    uVar8 = *(ulong *)(lVar2 + 0x28);
    if (uVar8 >> 0x3c < 0xf && (uVar8 & 0xf000000000000000) != 0xb000000000000000) {
      uVar7 = *(ulong *)(lVar2 + 0x20);
      unaff_x30 = 0x1047517fc;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
      unaff_x19 = param_1;
      unaff_x20 = param_2;
      unaff_x29 = puVar1;
      goto code_r0x00010006c090;
    }
    if (*(long *)(lVar2 + 0x48) != 1) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x58));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x60));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x70));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x80));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x88));
      if (*(long *)(lVar2 + 0x98) != 1) {
        _swift_bridgeObjectRelease();
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0xa8));
    }
    if (*(long *)(lVar2 + 0xc0) != 0) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0xe0));
      if (*(long *)(lVar2 + 0xf0) != 0) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0xf8));
      }
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x110));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x120));
    if (*(long *)(lVar2 + 0x150) != 0) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x160));
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x170));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x180));
    if ((((*(ulong *)(lVar2 + 0x1b0) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
       (((ulong)*(uint5 *)(lVar2 + 0x1c8) & 0xfefefefefefefefe) != 0x6fefefefe)) {
      func_0x00010179b820(*(undefined8 *)(lVar2 + 400),*(undefined8 *)(lVar2 + 0x198),
                          *(undefined8 *)(lVar2 + 0x1a0),*(undefined8 *)(lVar2 + 0x1a8),
                          *(ulong *)(lVar2 + 0x1b0),*(undefined8 *)(lVar2 + 0x1b8),
                          *(undefined8 *)(lVar2 + 0x1c0));
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x1d8));
    if (*(long *)(lVar2 + 0x1f0) != 0) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x200));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x210));
    }
    if (*(long *)(lVar2 + 0x228) != 0) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x238));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x248));
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 600));
  }
  puVar3 = (ulong *)(param_1 + *(int *)(param_2 + 0x1c));
  uVar7 = *puVar3;
  uVar8 = puVar3[1];
code_r0x00010006c090:
  uVar9 = (uint)(uVar8 >> 0x3e);
  if (uVar9 == 1) {
    uVar7 = uVar8 & 0x3fffffffffffffff;
  }
  else {
    if (uVar9 != 2) {
      return;
    }
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar7);
  return;
}



/* Entry: 10475195c; end: 10475398b;  */

undefined8 * FUN_10475195c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint5 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  
  uVar17 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar17;
  param_1[2] = param_2[2];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  lVar8 = 0;
  FUN_104739264();
  lVar13 = *(long *)(lVar8 + -8);
  pcVar14 = *(code **)(lVar13 + 0x30);
  _swift_bridgeObjectRetain(uVar17);
  puVar9 = puVar2;
  (*pcVar14)(puVar2,1,lVar8);
  if ((int)puVar9 == 0) {
    uVar17 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar17;
    uVar17 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar17;
    uVar16 = puVar2[5];
    puVar1[4] = puVar2[4];
    puVar1[5] = uVar16;
    uVar20 = puVar2[7];
    puVar1[6] = puVar2[6];
    puVar1[7] = uVar20;
    puVar1[8] = puVar2[8];
    lVar19 = puVar2[0xf];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar17);
    _swift_bridgeObjectRetain(uVar16);
    _swift_bridgeObjectRetain(uVar20);
    if (lVar19 == 1) {
      uVar17 = puVar2[9];
      puVar1[10] = puVar2[10];
      puVar1[9] = uVar17;
      uVar17 = puVar2[0xb];
      puVar1[0xc] = puVar2[0xc];
      puVar1[0xb] = uVar17;
      uVar17 = puVar2[0xd];
      puVar1[0xe] = puVar2[0xe];
      puVar1[0xd] = uVar17;
      puVar1[0xf] = puVar2[0xf];
    }
    else {
      lVar10 = puVar2[0xb];
      if (lVar10 == 1) {
        uVar17 = puVar2[9];
        puVar1[10] = puVar2[10];
        puVar1[9] = uVar17;
        uVar17 = puVar2[0xb];
        puVar1[0xc] = puVar2[0xc];
        puVar1[0xb] = uVar17;
        puVar1[0xd] = puVar2[0xd];
      }
      else {
        uVar17 = puVar2[9];
        puVar1[10] = puVar2[10];
        puVar1[9] = uVar17;
        uVar17 = puVar2[0xc];
        uVar16 = puVar2[0xd];
        puVar1[0xb] = lVar10;
        puVar1[0xc] = uVar17;
        puVar1[0xd] = uVar16;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar16);
      }
      puVar1[0xe] = puVar2[0xe];
      puVar1[0xf] = lVar19;
      _swift_bridgeObjectRetain(lVar19);
    }
    uVar17 = puVar2[0x11];
    puVar1[0x10] = puVar2[0x10];
    puVar1[0x11] = uVar17;
    uVar16 = puVar2[0x13];
    puVar1[0x12] = puVar2[0x12];
    puVar1[0x13] = uVar16;
    lVar19 = (long)puVar1 + (long)*(int *)(lVar8 + 0x34);
    lVar10 = (long)puVar2 + (long)*(int *)(lVar8 + 0x34);
    lVar11 = 0;
    FUN_104742f28();
    lVar15 = *(long *)(lVar11 + -8);
    pcVar14 = *(code **)(lVar15 + 0x30);
    _swift_bridgeObjectRetain(uVar17);
    _swift_bridgeObjectRetain(uVar16);
    lVar12 = lVar10;
    (*pcVar14)(lVar10,1,lVar11);
    if ((int)lVar12 == 0) {
      lVar12 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar12 + -8) + 0x10))(lVar19,lVar10,lVar12);
      puVar9 = (undefined8 *)(lVar19 + *(int *)(lVar11 + 0x14));
      puVar3 = (undefined8 *)(lVar10 + *(int *)(lVar11 + 0x14));
      uVar17 = puVar3[1];
      *puVar9 = *puVar3;
      puVar9[1] = uVar17;
      *(undefined1 *)(lVar19 + *(int *)(lVar11 + 0x18)) =
           *(undefined1 *)(lVar10 + *(int *)(lVar11 + 0x18));
      *(undefined1 *)(lVar19 + *(int *)(lVar11 + 0x1c)) =
           *(undefined1 *)(lVar10 + *(int *)(lVar11 + 0x1c));
      puVar9 = (undefined8 *)(lVar19 + *(int *)(lVar11 + 0x20));
      puVar3 = (undefined8 *)(lVar10 + *(int *)(lVar11 + 0x20));
      *puVar9 = *puVar3;
      *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(puVar3 + 1);
      *(undefined1 *)(lVar19 + *(int *)(lVar11 + 0x24)) =
           *(undefined1 *)(lVar10 + *(int *)(lVar11 + 0x24));
      pcVar14 = *(code **)(lVar15 + 0x38);
      _swift_bridgeObjectRetain();
      (*pcVar14)(lVar19,0,1,lVar11);
    }
    else {
      lVar12 = 0x112dcbf00;
      func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
      _memcpy(lVar19,lVar10,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
    }
    puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x38));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x38));
    uVar17 = *puVar3;
    puVar9[1] = puVar3[1];
    *puVar9 = uVar17;
    uVar17 = *(undefined8 *)((long)puVar3 + 9);
    *(undefined8 *)((long)puVar9 + 0x11) = *(undefined8 *)((long)puVar3 + 0x11);
    *(undefined8 *)((long)puVar9 + 9) = uVar17;
    (**(code **)(lVar13 + 0x38))(puVar1,0,1,lVar8);
  }
  else {
    lVar8 = 0x112db3ce0;
    func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  }
  lVar8 = 0;
  FUN_104754770();
  puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x14));
  puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x14));
  if (puVar2[0x18] == 1) {
    _memcpy(puVar1,puVar2,0x260);
  }
  else {
    lVar8 = puVar2[1];
    if (lVar8 == 1) {
      uVar17 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar17;
      puVar1[2] = puVar2[2];
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar8;
      uVar17 = puVar2[2];
      puVar1[2] = uVar17;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar17);
    }
    uVar18 = puVar2[5];
    if (uVar18 >> 0x3c == 0xb) {
      uVar17 = puVar2[3];
      puVar1[4] = puVar2[4];
      puVar1[3] = uVar17;
      puVar1[5] = puVar2[5];
    }
    else {
      puVar1[3] = puVar2[3];
      if (uVar18 >> 0x3c < 0xf) {
        uVar17 = puVar2[4];
        func_0x00010006c00c(uVar17,uVar18);
        puVar1[4] = uVar17;
        puVar1[5] = uVar18;
      }
      else {
        uVar17 = puVar2[4];
        puVar1[5] = puVar2[5];
        puVar1[4] = uVar17;
      }
    }
    *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(puVar2 + 6);
    puVar1[7] = puVar2[7];
    lVar8 = puVar2[9];
    if (lVar8 == 1) {
      uVar17 = puVar2[0x10];
      uVar20 = puVar2[0x13];
      uVar16 = puVar2[0x12];
      puVar1[0x11] = puVar2[0x11];
      puVar1[0x10] = uVar17;
      puVar1[0x13] = uVar20;
      puVar1[0x12] = uVar16;
      uVar17 = puVar2[0x14];
      puVar1[0x15] = puVar2[0x15];
      puVar1[0x14] = uVar17;
      uVar17 = *(undefined8 *)((long)puVar2 + 0xaa);
      *(undefined8 *)((long)puVar1 + 0xb2) = *(undefined8 *)((long)puVar2 + 0xb2);
      *(undefined8 *)((long)puVar1 + 0xaa) = uVar17;
      uVar17 = puVar2[8];
      uVar20 = puVar2[0xb];
      uVar16 = puVar2[10];
      puVar1[9] = puVar2[9];
      puVar1[8] = uVar17;
      puVar1[0xb] = uVar20;
      puVar1[10] = uVar16;
      uVar17 = puVar2[0xc];
      uVar20 = puVar2[0xf];
      uVar16 = puVar2[0xe];
      puVar1[0xd] = puVar2[0xd];
      puVar1[0xc] = uVar17;
      puVar1[0xf] = uVar20;
      puVar1[0xe] = uVar16;
    }
    else {
      puVar1[8] = puVar2[8];
      puVar1[9] = lVar8;
      uVar4 = puVar2[0xb];
      puVar1[10] = puVar2[10];
      puVar1[0xb] = uVar4;
      uVar17 = puVar2[0xc];
      uVar16 = puVar2[0xd];
      puVar1[0xc] = uVar17;
      puVar1[0xd] = uVar16;
      uVar16 = puVar2[0xe];
      uVar20 = puVar2[0xf];
      puVar1[0xe] = uVar16;
      puVar1[0xf] = uVar20;
      uVar20 = puVar2[0x10];
      uVar5 = puVar2[0x11];
      puVar1[0x10] = uVar20;
      puVar1[0x11] = uVar5;
      lVar8 = puVar2[0x13];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar17);
      _swift_bridgeObjectRetain(uVar16);
      _swift_bridgeObjectRetain(uVar20);
      _swift_bridgeObjectRetain(uVar5);
      if (lVar8 == 1) {
        uVar17 = puVar2[0x12];
        puVar1[0x13] = puVar2[0x13];
        puVar1[0x12] = uVar17;
      }
      else {
        puVar1[0x12] = puVar2[0x12];
        puVar1[0x13] = lVar8;
        _swift_bridgeObjectRetain(lVar8);
      }
      uVar17 = puVar2[0x15];
      puVar1[0x14] = puVar2[0x14];
      puVar1[0x15] = uVar17;
      puVar1[0x16] = puVar2[0x16];
      *(undefined2 *)(puVar1 + 0x17) = *(undefined2 *)(puVar2 + 0x17);
      _swift_bridgeObjectRetain();
    }
    *(undefined2 *)((long)puVar1 + 0xba) = *(undefined2 *)((long)puVar2 + 0xba);
    if (puVar2[0x18] == 0) {
      lVar8 = puVar2[0x18];
      uVar16 = puVar2[0x1b];
      uVar17 = puVar2[0x1a];
      puVar1[0x19] = puVar2[0x19];
      puVar1[0x18] = lVar8;
      puVar1[0x1b] = uVar16;
      puVar1[0x1a] = uVar17;
      uVar17 = puVar2[0x1c];
      uVar20 = puVar2[0x1f];
      uVar16 = puVar2[0x1e];
      puVar1[0x1d] = puVar2[0x1d];
      puVar1[0x1c] = uVar17;
      puVar1[0x1f] = uVar20;
      puVar1[0x1e] = uVar16;
    }
    else {
      puVar1[0x18] = puVar2[0x18];
      uVar17 = puVar2[0x19];
      puVar1[0x1a] = puVar2[0x1a];
      puVar1[0x19] = uVar17;
      uVar17 = puVar2[0x1c];
      puVar1[0x1b] = puVar2[0x1b];
      puVar1[0x1c] = uVar17;
      lVar8 = puVar2[0x1e];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar17);
      if (lVar8 == 0) {
        uVar17 = puVar2[0x1d];
        puVar1[0x1e] = puVar2[0x1e];
        puVar1[0x1d] = uVar17;
        puVar1[0x1f] = puVar2[0x1f];
      }
      else {
        puVar1[0x1d] = puVar2[0x1d];
        puVar1[0x1e] = lVar8;
        uVar17 = puVar2[0x1f];
        puVar1[0x1f] = uVar17;
        _swift_bridgeObjectRetain(lVar8);
        _swift_bridgeObjectRetain(uVar17);
      }
    }
    *(undefined1 *)(puVar1 + 0x20) = *(undefined1 *)(puVar2 + 0x20);
    uVar17 = puVar2[0x22];
    puVar1[0x21] = puVar2[0x21];
    puVar1[0x22] = uVar17;
    uVar17 = puVar2[0x24];
    puVar1[0x23] = puVar2[0x23];
    puVar1[0x24] = uVar17;
    uVar16 = puVar2[0x25];
    puVar1[0x26] = puVar2[0x26];
    puVar1[0x25] = uVar16;
    uVar16 = *(undefined8 *)((long)puVar2 + 0x132);
    *(undefined8 *)((long)puVar1 + 0x13a) = *(undefined8 *)((long)puVar2 + 0x13a);
    *(undefined8 *)((long)puVar1 + 0x132) = uVar16;
    lVar8 = puVar2[0x2a];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar17);
    if (lVar8 == 0) {
      uVar17 = puVar2[0x29];
      uVar20 = puVar2[0x2c];
      uVar16 = puVar2[0x2b];
      puVar1[0x2a] = puVar2[0x2a];
      puVar1[0x29] = uVar17;
      puVar1[0x2c] = uVar20;
      puVar1[0x2b] = uVar16;
    }
    else {
      puVar1[0x29] = puVar2[0x29];
      puVar1[0x2a] = lVar8;
      uVar17 = puVar2[0x2c];
      puVar1[0x2b] = puVar2[0x2b];
      puVar1[0x2c] = uVar17;
      _swift_bridgeObjectRetain(lVar8);
      _swift_bridgeObjectRetain(uVar17);
    }
    uVar17 = puVar2[0x2e];
    puVar1[0x2d] = puVar2[0x2d];
    puVar1[0x2e] = uVar17;
    uVar17 = puVar2[0x2f];
    uVar16 = puVar2[0x30];
    *(undefined1 *)(puVar1 + 0x31) = *(undefined1 *)(puVar2 + 0x31);
    uVar18 = puVar2[0x36];
    uVar7 = *(uint5 *)(puVar2 + 0x39);
    puVar1[0x2f] = uVar17;
    puVar1[0x30] = uVar16;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar16);
    if ((((uVar18 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
       (((ulong)uVar7 & 0xfefefefefefefefe) == 0x6fefefefe)) {
      uVar17 = puVar2[0x32];
      uVar20 = puVar2[0x35];
      uVar16 = puVar2[0x34];
      puVar1[0x33] = puVar2[0x33];
      puVar1[0x32] = uVar17;
      puVar1[0x35] = uVar20;
      puVar1[0x34] = uVar16;
      uVar17 = puVar2[0x36];
      puVar1[0x37] = puVar2[0x37];
      puVar1[0x36] = uVar17;
      uVar17 = *(undefined8 *)((long)puVar2 + 0x1bd);
      *(undefined8 *)((long)puVar1 + 0x1c5) = *(undefined8 *)((long)puVar2 + 0x1c5);
      *(undefined8 *)((long)puVar1 + 0x1bd) = uVar17;
    }
    else {
      uVar17 = puVar2[0x32];
      uVar4 = puVar2[0x33];
      uVar16 = puVar2[0x34];
      uVar5 = puVar2[0x35];
      uVar20 = puVar2[0x37];
      uVar6 = puVar2[0x38];
      func_0x00010179a2b8(uVar17,uVar4,uVar16,uVar5,uVar18,uVar20,uVar6,(ulong)uVar7);
      puVar1[0x32] = uVar17;
      puVar1[0x33] = uVar4;
      puVar1[0x34] = uVar16;
      puVar1[0x35] = uVar5;
      puVar1[0x36] = uVar18;
      puVar1[0x37] = uVar20;
      puVar1[0x38] = uVar6;
      *(char *)((long)puVar1 + 0x1cc) = (char)(uVar7 >> 0x20);
      *(int *)(puVar1 + 0x39) = (int)uVar7;
    }
    *(undefined1 *)((long)puVar1 + 0x1cd) = *(undefined1 *)((long)puVar2 + 0x1cd);
    uVar17 = puVar2[0x3b];
    puVar1[0x3a] = puVar2[0x3a];
    puVar1[0x3b] = uVar17;
    *(undefined1 *)(puVar1 + 0x3c) = *(undefined1 *)(puVar2 + 0x3c);
    lVar8 = puVar2[0x3e];
    _swift_bridgeObjectRetain();
    if (lVar8 == 0) {
      uVar17 = puVar2[0x3d];
      uVar20 = puVar2[0x40];
      uVar16 = puVar2[0x3f];
      puVar1[0x3e] = puVar2[0x3e];
      puVar1[0x3d] = uVar17;
      puVar1[0x40] = uVar20;
      puVar1[0x3f] = uVar16;
      uVar17 = puVar2[0x41];
      puVar1[0x42] = puVar2[0x42];
      puVar1[0x41] = uVar17;
    }
    else {
      puVar1[0x3d] = puVar2[0x3d];
      puVar1[0x3e] = lVar8;
      uVar17 = puVar2[0x40];
      puVar1[0x3f] = puVar2[0x3f];
      puVar1[0x40] = uVar17;
      puVar1[0x41] = puVar2[0x41];
      uVar16 = puVar2[0x42];
      puVar1[0x42] = uVar16;
      _swift_bridgeObjectRetain(lVar8);
      _swift_bridgeObjectRetain(uVar17);
      _swift_bridgeObjectRetain(uVar16);
    }
    *(undefined1 *)(puVar1 + 0x43) = *(undefined1 *)(puVar2 + 0x43);
    lVar8 = puVar2[0x45];
    if (lVar8 == 0) {
      uVar17 = puVar2[0x44];
      uVar20 = puVar2[0x47];
      uVar16 = puVar2[0x46];
      puVar1[0x45] = puVar2[0x45];
      puVar1[0x44] = uVar17;
      puVar1[0x47] = uVar20;
      puVar1[0x46] = uVar16;
      uVar17 = puVar2[0x48];
      puVar1[0x49] = puVar2[0x49];
      puVar1[0x48] = uVar17;
      puVar1[0x4a] = puVar2[0x4a];
    }
    else {
      puVar1[0x44] = puVar2[0x44];
      puVar1[0x45] = lVar8;
      puVar1[0x46] = puVar2[0x46];
      uVar17 = puVar2[0x47];
      puVar1[0x47] = uVar17;
      puVar1[0x48] = puVar2[0x48];
      uVar16 = puVar2[0x49];
      puVar1[0x49] = uVar16;
      puVar1[0x4a] = puVar2[0x4a];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar17);
      _swift_bridgeObjectRetain(uVar16);
    }
    puVar1[0x4b] = puVar2[0x4b];
    _swift_bridgeObjectRetain();
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar17 = *param_2;
  uVar16 = param_2[1];
  func_0x00010006c00c(uVar17,uVar16);
  *puVar1 = uVar17;
  puVar1[1] = uVar16;
  return param_1;
}



/* Entry: 10475398c; end: 1047539c7;  */

undefined8 FUN_10475398c(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1047539c8; end: 1047546cf;  */

undefined8 * FUN_1047539c8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar12 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar12;
  param_1[2] = param_2[2];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  lVar6 = 0;
  FUN_104739264();
  lVar11 = *(long *)(lVar6 + -8);
  puVar7 = puVar2;
  (**(code **)(lVar11 + 0x30))(puVar2,1,lVar6);
  if ((int)puVar7 == 0) {
    uVar12 = *puVar2;
    uVar14 = puVar2[3];
    uVar13 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar12;
    puVar1[3] = uVar14;
    puVar1[2] = uVar13;
    uVar12 = puVar2[4];
    uVar14 = puVar2[7];
    uVar13 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar12;
    puVar1[7] = uVar14;
    puVar1[6] = uVar13;
    puVar1[8] = puVar2[8];
    puVar1[0xf] = puVar2[0xf];
    uVar12 = puVar2[0xd];
    puVar1[0xe] = puVar2[0xe];
    puVar1[0xd] = uVar12;
    uVar12 = puVar2[0xb];
    puVar1[0xc] = puVar2[0xc];
    puVar1[0xb] = uVar12;
    uVar12 = puVar2[9];
    puVar1[10] = puVar2[10];
    puVar1[9] = uVar12;
    uVar12 = puVar2[0x10];
    uVar14 = puVar2[0x13];
    uVar13 = puVar2[0x12];
    puVar1[0x11] = puVar2[0x11];
    puVar1[0x10] = uVar12;
    puVar1[0x13] = uVar14;
    puVar1[0x12] = uVar13;
    lVar3 = (long)puVar1 + (long)*(int *)(lVar6 + 0x34);
    lVar4 = (long)puVar2 + (long)*(int *)(lVar6 + 0x34);
    lVar8 = 0;
    FUN_104742f28();
    lVar10 = *(long *)(lVar8 + -8);
    lVar9 = lVar4;
    (**(code **)(lVar10 + 0x30))(lVar4,1,lVar8);
    if ((int)lVar9 == 0) {
      lVar9 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar9 + -8) + 0x20))(lVar3,lVar4,lVar9);
      puVar7 = (undefined8 *)(lVar4 + *(int *)(lVar8 + 0x14));
      uVar12 = *puVar7;
      puVar5 = (undefined8 *)(lVar3 + *(int *)(lVar8 + 0x14));
      puVar5[1] = puVar7[1];
      *puVar5 = uVar12;
      *(undefined1 *)(lVar3 + *(int *)(lVar8 + 0x18)) =
           *(undefined1 *)(lVar4 + *(int *)(lVar8 + 0x18));
      *(undefined1 *)(lVar3 + *(int *)(lVar8 + 0x1c)) =
           *(undefined1 *)(lVar4 + *(int *)(lVar8 + 0x1c));
      puVar7 = (undefined8 *)(lVar3 + *(int *)(lVar8 + 0x20));
      puVar5 = (undefined8 *)(lVar4 + *(int *)(lVar8 + 0x20));
      *puVar7 = *puVar5;
      *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar5 + 1);
      *(undefined1 *)(lVar3 + *(int *)(lVar8 + 0x24)) =
           *(undefined1 *)(lVar4 + *(int *)(lVar8 + 0x24));
      (**(code **)(lVar10 + 0x38))(lVar3,0,1,lVar8);
    }
    else {
      lVar9 = 0x112dcbf00;
      func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
      _memcpy(lVar3,lVar4,*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    }
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x38));
    puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x38));
    uVar12 = *puVar5;
    puVar7[1] = puVar5[1];
    *puVar7 = uVar12;
    uVar12 = *(undefined8 *)((long)puVar5 + 9);
    *(undefined8 *)((long)puVar7 + 0x11) = *(undefined8 *)((long)puVar5 + 0x11);
    *(undefined8 *)((long)puVar7 + 9) = uVar12;
    (**(code **)(lVar11 + 0x38))(puVar1,0,1,lVar6);
  }
  else {
    lVar6 = 0x112db3ce0;
    func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  lVar6 = 0;
  FUN_104754770();
  _memcpy((long)puVar1 + (long)*(int *)(lVar6 + 0x14),(long)puVar2 + (long)*(int *)(lVar6 + 0x14),
          0x260);
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar12 = *param_2;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar1[1] = param_2[1];
  *puVar1 = uVar12;
  return param_1;
}



/* Entry: 1047546d0; end: 1047546e7;  */

void FUN_1047546d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1047546e8; end: 10475476f;  */

void FUN_1047546e8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_38 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_40 = &UNK_10dd33820;
  lVar1 = 0x13f;
  FUN_104754770();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dd33838;
    _swift_initStructMetadata(param_1,0x100,4,&puStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 104754770; end: 1047547a7;  */

void FUN_104754770(undefined8 param_1)

{
  if (lRam000000011308e930 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e81a6c8);
  return;
}



/* Entry: 1047547a8; end: 1047547ef;  */

undefined8 FUN_1047547a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1047547f0; end: 104754893;  */

void FUN_1047547f0(long param_1)

{
  int iVar1;
  long unaff_x20;
  undefined1 auStack_538 [72];
  undefined1 auStack_4f0 [608];
  undefined1 auStack_290 [608];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_538,0);
  func_0x0001046cec20(auStack_538);
  _memcpy(auStack_290,unaff_x20 + *(int *)(param_1 + 0x14),0x260);
  iVar1 = (int)auStack_290;
  func_0x0001015538ec();
  if (iVar1 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    _memcpy(auStack_4f0,auStack_290,0x260);
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1047a6974(auStack_538);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104754894; end: 104754923;  */

void FUN_104754894(undefined8 param_1,long param_2)

{
  int iVar1;
  long unaff_x20;
  undefined1 auStack_4f0 [608];
  undefined1 auStack_290 [608];
  
  func_0x0001046cec20();
  _memcpy(auStack_290,unaff_x20 + *(int *)(param_2 + 0x14),0x260);
  iVar1 = (int)auStack_290;
  func_0x0001015538ec();
  if (iVar1 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    _memcpy(auStack_4f0,auStack_290,0x260);
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1047a6974(param_1);
  }
  return;
}



/* Entry: 104754924; end: 1047549c3;  */

void FUN_104754924(undefined8 param_1,long param_2)

{
  int iVar1;
  long unaff_x20;
  undefined1 auStack_538 [72];
  undefined1 auStack_4f0 [608];
  undefined1 auStack_290 [608];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_538);
  func_0x0001046cec20(auStack_538);
  _memcpy(auStack_290,unaff_x20 + *(int *)(param_2 + 0x14),0x260);
  iVar1 = (int)auStack_290;
  func_0x0001015538ec();
  if (iVar1 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    _memcpy(auStack_4f0,auStack_290,0x260);
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1047a6974(auStack_538);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047549c4; end: 1047549c7;  */

undefined8 FUN_1047549c4(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar9;
  ulong uVar10;
  code *pcVar11;
  long lVar12;
  long lStack_1840;
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
  lVar2 = 0;
  FUN_104739264();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar8 = (long)&lStack_1840 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112db3ce0;
  lStack_1840 = lVar8;
  func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar10 = lVar8 - extraout_x8_00;
  lVar3 = 0x112db3cb8;
  func_0x0001000285a8(0x112db3cb8,&UNK_10dd33f20);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined1 *)(uVar10 - extraout_x8_01);
  iVar1 = *(int *)(lVar3 + 0x30);
  lStack_1838 = param_1;
  FUN_1047547a8(param_1,puVar9,0x112db3ce0,&UNK_10d95e240);
  lStack_1830 = param_2;
  FUN_1047547a8(param_2,puVar9 + iVar1,0x112db3ce0,&UNK_10d95e240);
  pcVar11 = *(code **)(lVar12 + 0x30);
  puVar4 = puVar9;
  (*pcVar11)(puVar9,1,lVar2);
  if ((int)puVar4 == 1) {
    puVar4 = puVar9 + iVar1;
    (*pcVar11)(puVar4,1,lVar2);
    if ((int)puVar4 != 1) {
LAB_104754b8c:
      uVar6 = 0x112db3cb8;
      puVar7 = &UNK_10dd33f20;
      goto LAB_104754d78;
    }
    func_0x000104758540(puVar9,0x112db3ce0,&UNK_10d95e240);
  }
  else {
    FUN_1047547a8(puVar9,uVar10,0x112db3ce0,&UNK_10d95e240);
    puVar4 = puVar9 + iVar1;
    (*pcVar11)(puVar4,1,lVar2);
    lVar3 = lStack_1840;
    if ((int)puVar4 == 1) {
      FUN_1047577c0(uVar10,FUN_104739264);
      goto LAB_104754b8c;
    }
    func_0x0001034a9054(puVar9 + iVar1,lStack_1840);
    uVar5 = uVar10;
    FUN_1047397c8(uVar10,lVar3);
    FUN_1047577c0(lVar3,FUN_104739264);
    FUN_1047577c0(uVar10,FUN_104739264);
    func_0x000104758540(puVar9,0x112db3ce0,&UNK_10d95e240);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  lVar2 = 0;
  FUN_104754770();
  lVar3 = lStack_1838;
  lVar2 = (long)*(int *)(lVar2 + 0x14);
  _memcpy(auStack_788,lStack_1838 + lVar2,0x260);
  _memcpy(auStack_c48,lVar3 + lVar2,0x260);
  lVar3 = lStack_1830;
  _memcpy(auStack_528,lStack_1830 + lVar2,0x260);
  _memcpy(auStack_9e8,lVar3 + lVar2,0x260);
  iVar1 = (int)auStack_c48;
  func_0x0001015538ec();
  if (iVar1 == 1) {
    iVar1 = (int)auStack_9e8;
    func_0x0001015538ec();
    if (iVar1 == 1) {
      _memcpy(auStack_1108,auStack_c48,0x260);
      FUN_1047547a8(auStack_788,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
      FUN_1047547a8(auStack_528,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
      func_0x000104758540(auStack_1108,0x112db3ce8,&UNK_10d98ff60);
      return 1;
    }
  }
  else {
    _memcpy(auStack_1368,auStack_c48,0x260);
    iVar1 = (int)auStack_9e8;
    func_0x0001015538ec();
    if (iVar1 != 1) {
      _memcpy(auStack_15c8,auStack_9e8,0x260);
      _memcpy(auStack_1108,auStack_9e8,0x260);
      _memcpy(auStack_2c8,auStack_1368,0x260);
      FUN_1047547a8(auStack_788,auStack_1828,0x112db3ce8,&UNK_10d98ff60);
      FUN_1047547a8(auStack_528,auStack_1828,0x112db3ce8,&UNK_10d98ff60);
      puVar9 = auStack_2c8;
      func_0x0001047a725c(puVar9,auStack_1108);
      func_0x000104758540(auStack_15c8,0x112db3ce8,&UNK_10d98ff60);
      func_0x000104758540(auStack_c48,0x112db3ce8,&UNK_10d98ff60);
      if (((ulong)puVar9 & 1) == 0) {
        return 0;
      }
      return 1;
    }
  }
  _memcpy(auStack_1108,auStack_c48,0x4c0);
  FUN_1047547a8(auStack_788,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
  FUN_1047547a8(auStack_528,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
  uVar6 = 0x112db3d20;
  puVar7 = &UNK_10dd318e0;
  puVar9 = auStack_1108;
LAB_104754d78:
  func_0x000104758540(puVar9,uVar6,puVar7);
  return 0;
}



/* Entry: 1047549c8; end: 104754e53;  */

undefined8 FUN_1047549c8(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar9;
  ulong uVar10;
  code *pcVar11;
  long lVar12;
  long lStack_1840;
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
  lVar2 = 0;
  FUN_104739264();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar8 = (long)&lStack_1840 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112db3ce0;
  lStack_1840 = lVar8;
  func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar10 = lVar8 - extraout_x8_00;
  lVar3 = 0x112db3cb8;
  func_0x0001000285a8(0x112db3cb8,&UNK_10dd33f20);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined1 *)(uVar10 - extraout_x8_01);
  iVar1 = *(int *)(lVar3 + 0x30);
  lStack_1838 = param_1;
  FUN_1047547a8(param_1,puVar9,0x112db3ce0,&UNK_10d95e240);
  lStack_1830 = param_2;
  FUN_1047547a8(param_2,puVar9 + iVar1,0x112db3ce0,&UNK_10d95e240);
  pcVar11 = *(code **)(lVar12 + 0x30);
  puVar4 = puVar9;
  (*pcVar11)(puVar9,1,lVar2);
  if ((int)puVar4 == 1) {
    puVar4 = puVar9 + iVar1;
    (*pcVar11)(puVar4,1,lVar2);
    if ((int)puVar4 != 1) {
LAB_104754b8c:
      uVar6 = 0x112db3cb8;
      puVar7 = &UNK_10dd33f20;
      goto LAB_104754d78;
    }
    func_0x000104758540(puVar9,0x112db3ce0,&UNK_10d95e240);
  }
  else {
    FUN_1047547a8(puVar9,uVar10,0x112db3ce0,&UNK_10d95e240);
    puVar4 = puVar9 + iVar1;
    (*pcVar11)(puVar4,1,lVar2);
    lVar3 = lStack_1840;
    if ((int)puVar4 == 1) {
      FUN_1047577c0(uVar10,FUN_104739264);
      goto LAB_104754b8c;
    }
    func_0x0001034a9054(puVar9 + iVar1,lStack_1840);
    uVar5 = uVar10;
    FUN_1047397c8(uVar10,lVar3);
    FUN_1047577c0(lVar3,FUN_104739264);
    FUN_1047577c0(uVar10,FUN_104739264);
    func_0x000104758540(puVar9,0x112db3ce0,&UNK_10d95e240);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  lVar2 = 0;
  FUN_104754770();
  lVar3 = lStack_1838;
  lVar2 = (long)*(int *)(lVar2 + 0x14);
  _memcpy(auStack_788,lStack_1838 + lVar2,0x260);
  _memcpy(auStack_c48,lVar3 + lVar2,0x260);
  lVar3 = lStack_1830;
  _memcpy(auStack_528,lStack_1830 + lVar2,0x260);
  _memcpy(auStack_9e8,lVar3 + lVar2,0x260);
  iVar1 = (int)auStack_c48;
  func_0x0001015538ec();
  if (iVar1 == 1) {
    iVar1 = (int)auStack_9e8;
    func_0x0001015538ec();
    if (iVar1 == 1) {
      _memcpy(auStack_1108,auStack_c48,0x260);
      FUN_1047547a8(auStack_788,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
      FUN_1047547a8(auStack_528,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
      func_0x000104758540(auStack_1108,0x112db3ce8,&UNK_10d98ff60);
      return 1;
    }
  }
  else {
    _memcpy(auStack_1368,auStack_c48,0x260);
    iVar1 = (int)auStack_9e8;
    func_0x0001015538ec();
    if (iVar1 != 1) {
      _memcpy(auStack_15c8,auStack_9e8,0x260);
      _memcpy(auStack_1108,auStack_9e8,0x260);
      _memcpy(auStack_2c8,auStack_1368,0x260);
      FUN_1047547a8(auStack_788,auStack_1828,0x112db3ce8,&UNK_10d98ff60);
      FUN_1047547a8(auStack_528,auStack_1828,0x112db3ce8,&UNK_10d98ff60);
      puVar9 = auStack_2c8;
      func_0x0001047a725c(puVar9,auStack_1108);
      func_0x000104758540(auStack_15c8,0x112db3ce8,&UNK_10d98ff60);
      func_0x000104758540(auStack_c48,0x112db3ce8,&UNK_10d98ff60);
      if (((ulong)puVar9 & 1) == 0) {
        return 0;
      }
      return 1;
    }
  }
  _memcpy(auStack_1108,auStack_c48,0x4c0);
  FUN_1047547a8(auStack_788,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
  FUN_1047547a8(auStack_528,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
  uVar6 = 0x112db3d20;
  puVar7 = &UNK_10dd318e0;
  puVar9 = auStack_1108;
LAB_104754d78:
  func_0x000104758540(puVar9,uVar6,puVar7);
  return 0;
}



/* Entry: 104754e54; end: 104754e57;  */

void FUN_104754e54(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011308e8d0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_104754770(0xff);
  puVar2 = &UNK_10dd33890;
  _swift_getWitnessTable(&UNK_10dd33890,uVar1);
  puRam000000011308e8d0 = puVar2;
  return;
}



/* Entry: 104754e58; end: 104754e9b;  */

void FUN_104754e58(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011308e8d0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_104754770(0xff);
  puVar2 = &UNK_10dd33890;
  _swift_getWitnessTable(&UNK_10dd33890,uVar1);
  puRam000000011308e8d0 = puVar2;
  return;
}



/* Entry: 104754e9c; end: 1047555f7;  */

long * FUN_104754e9c(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint5 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  code *pcVar19;
  long lVar20;
  undefined8 uVar21;
  
  uVar6 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar6 >> 0x11 & 1) == 0) {
    lVar8 = 0;
    FUN_104739264();
    lVar15 = *(long *)(lVar8 + -8);
    plVar9 = param_2;
    (**(code **)(lVar15 + 0x30))(param_2,1,lVar8);
    if ((int)plVar9 == 0) {
      lVar10 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar10;
      lVar10 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = lVar10;
      lVar20 = param_2[5];
      param_1[4] = param_2[4];
      param_1[5] = lVar20;
      lVar12 = param_2[7];
      param_1[6] = param_2[6];
      param_1[7] = lVar12;
      param_1[8] = param_2[8];
      lVar16 = param_2[0xf];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar10);
      _swift_bridgeObjectRetain(lVar20);
      _swift_bridgeObjectRetain(lVar12);
      if (lVar16 == 1) {
        lVar10 = param_2[9];
        param_1[10] = param_2[10];
        param_1[9] = lVar10;
        lVar10 = param_2[0xb];
        param_1[0xc] = param_2[0xc];
        param_1[0xb] = lVar10;
        lVar10 = param_2[0xd];
        param_1[0xe] = param_2[0xe];
        param_1[0xd] = lVar10;
        param_1[0xf] = param_2[0xf];
      }
      else {
        lVar10 = param_2[0xb];
        if (lVar10 == 1) {
          lVar10 = param_2[9];
          param_1[10] = param_2[10];
          param_1[9] = lVar10;
          lVar10 = param_2[0xb];
          param_1[0xc] = param_2[0xc];
          param_1[0xb] = lVar10;
          param_1[0xd] = param_2[0xd];
        }
        else {
          lVar20 = param_2[9];
          param_1[10] = param_2[10];
          param_1[9] = lVar20;
          lVar20 = param_2[0xc];
          lVar12 = param_2[0xd];
          param_1[0xb] = lVar10;
          param_1[0xc] = lVar20;
          param_1[0xd] = lVar12;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(lVar12);
        }
        param_1[0xe] = param_2[0xe];
        param_1[0xf] = lVar16;
        _swift_bridgeObjectRetain(lVar16);
      }
      lVar12 = param_2[0x11];
      param_1[0x10] = param_2[0x10];
      param_1[0x11] = lVar12;
      lVar16 = param_2[0x13];
      param_1[0x12] = param_2[0x12];
      param_1[0x13] = lVar16;
      lVar10 = (long)param_1 + (long)*(int *)(lVar8 + 0x34);
      lVar20 = (long)param_2 + (long)*(int *)(lVar8 + 0x34);
      lVar11 = 0;
      FUN_104742f28();
      lVar13 = *(long *)(lVar11 + -8);
      pcVar19 = *(code **)(lVar13 + 0x30);
      _swift_bridgeObjectRetain(lVar12);
      _swift_bridgeObjectRetain(lVar16);
      lVar12 = lVar20;
      (*pcVar19)(lVar20,1,lVar11);
      if ((int)lVar12 == 0) {
        lVar12 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar12 + -8) + 0x10))(lVar10,lVar20,lVar12);
        puVar1 = (undefined8 *)(lVar10 + *(int *)(lVar11 + 0x14));
        puVar2 = (undefined8 *)(lVar20 + *(int *)(lVar11 + 0x14));
        uVar17 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar17;
        *(undefined1 *)(lVar10 + *(int *)(lVar11 + 0x18)) =
             *(undefined1 *)(lVar20 + *(int *)(lVar11 + 0x18));
        *(undefined1 *)(lVar10 + *(int *)(lVar11 + 0x1c)) =
             *(undefined1 *)(lVar20 + *(int *)(lVar11 + 0x1c));
        puVar1 = (undefined8 *)(lVar10 + *(int *)(lVar11 + 0x20));
        puVar2 = (undefined8 *)(lVar20 + *(int *)(lVar11 + 0x20));
        *puVar1 = *puVar2;
        *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
        *(undefined1 *)(lVar10 + *(int *)(lVar11 + 0x24)) =
             *(undefined1 *)(lVar20 + *(int *)(lVar11 + 0x24));
        pcVar19 = *(code **)(lVar13 + 0x38);
        _swift_bridgeObjectRetain();
        (*pcVar19)(lVar10,0,1,lVar11);
      }
      else {
        lVar12 = 0x112dcbf00;
        func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
        _memcpy(lVar10,lVar20,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
      }
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x38));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x38));
      uVar17 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar17;
      uVar17 = *(undefined8 *)((long)puVar2 + 9);
      *(undefined8 *)((long)puVar1 + 0x11) = *(undefined8 *)((long)puVar2 + 0x11);
      *(undefined8 *)((long)puVar1 + 9) = uVar17;
      (**(code **)(lVar15 + 0x38))(param_1,0,1,lVar8);
    }
    else {
      lVar8 = 0x112db3ce0;
      func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
      _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    if (puVar2[0x18] == 1) {
      _memcpy(puVar1,puVar2,0x260);
    }
    else {
      lVar8 = puVar2[1];
      if (lVar8 == 1) {
        uVar17 = *puVar2;
        puVar1[1] = puVar2[1];
        *puVar1 = uVar17;
        puVar1[2] = puVar2[2];
      }
      else {
        *puVar1 = *puVar2;
        puVar1[1] = lVar8;
        uVar17 = puVar2[2];
        puVar1[2] = uVar17;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar17);
      }
      uVar14 = puVar2[5];
      if (uVar14 >> 0x3c == 0xb) {
        uVar17 = puVar2[3];
        puVar1[4] = puVar2[4];
        puVar1[3] = uVar17;
        puVar1[5] = puVar2[5];
      }
      else {
        puVar1[3] = puVar2[3];
        if (uVar14 >> 0x3c < 0xf) {
          uVar17 = puVar2[4];
          func_0x00010006c00c(uVar17,uVar14);
          puVar1[4] = uVar17;
          puVar1[5] = uVar14;
        }
        else {
          uVar17 = puVar2[4];
          puVar1[5] = puVar2[5];
          puVar1[4] = uVar17;
        }
      }
      *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(puVar2 + 6);
      puVar1[7] = puVar2[7];
      lVar8 = puVar2[9];
      if (lVar8 == 1) {
        uVar17 = puVar2[0x10];
        uVar21 = puVar2[0x13];
        uVar18 = puVar2[0x12];
        puVar1[0x11] = puVar2[0x11];
        puVar1[0x10] = uVar17;
        puVar1[0x13] = uVar21;
        puVar1[0x12] = uVar18;
        uVar17 = puVar2[0x14];
        puVar1[0x15] = puVar2[0x15];
        puVar1[0x14] = uVar17;
        uVar17 = *(undefined8 *)((long)puVar2 + 0xaa);
        *(undefined8 *)((long)puVar1 + 0xb2) = *(undefined8 *)((long)puVar2 + 0xb2);
        *(undefined8 *)((long)puVar1 + 0xaa) = uVar17;
        uVar17 = puVar2[8];
        uVar21 = puVar2[0xb];
        uVar18 = puVar2[10];
        puVar1[9] = puVar2[9];
        puVar1[8] = uVar17;
        puVar1[0xb] = uVar21;
        puVar1[10] = uVar18;
        uVar17 = puVar2[0xc];
        uVar21 = puVar2[0xf];
        uVar18 = puVar2[0xe];
        puVar1[0xd] = puVar2[0xd];
        puVar1[0xc] = uVar17;
        puVar1[0xf] = uVar21;
        puVar1[0xe] = uVar18;
      }
      else {
        puVar1[8] = puVar2[8];
        puVar1[9] = lVar8;
        uVar3 = puVar2[0xb];
        puVar1[10] = puVar2[10];
        puVar1[0xb] = uVar3;
        uVar17 = puVar2[0xc];
        uVar18 = puVar2[0xd];
        puVar1[0xc] = uVar17;
        puVar1[0xd] = uVar18;
        uVar18 = puVar2[0xe];
        uVar21 = puVar2[0xf];
        puVar1[0xe] = uVar18;
        puVar1[0xf] = uVar21;
        uVar21 = puVar2[0x10];
        uVar4 = puVar2[0x11];
        puVar1[0x10] = uVar21;
        puVar1[0x11] = uVar4;
        lVar8 = puVar2[0x13];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar3);
        _swift_bridgeObjectRetain(uVar17);
        _swift_bridgeObjectRetain(uVar18);
        _swift_bridgeObjectRetain(uVar21);
        _swift_bridgeObjectRetain(uVar4);
        if (lVar8 == 1) {
          uVar17 = puVar2[0x12];
          puVar1[0x13] = puVar2[0x13];
          puVar1[0x12] = uVar17;
        }
        else {
          puVar1[0x12] = puVar2[0x12];
          puVar1[0x13] = lVar8;
          _swift_bridgeObjectRetain(lVar8);
        }
        uVar17 = puVar2[0x15];
        puVar1[0x14] = puVar2[0x14];
        puVar1[0x15] = uVar17;
        puVar1[0x16] = puVar2[0x16];
        *(undefined2 *)(puVar1 + 0x17) = *(undefined2 *)(puVar2 + 0x17);
        _swift_bridgeObjectRetain();
      }
      *(undefined2 *)((long)puVar1 + 0xba) = *(undefined2 *)((long)puVar2 + 0xba);
      if (puVar2[0x18] == 0) {
        lVar8 = puVar2[0x18];
        uVar18 = puVar2[0x1b];
        uVar17 = puVar2[0x1a];
        puVar1[0x19] = puVar2[0x19];
        puVar1[0x18] = lVar8;
        puVar1[0x1b] = uVar18;
        puVar1[0x1a] = uVar17;
        uVar17 = puVar2[0x1c];
        uVar21 = puVar2[0x1f];
        uVar18 = puVar2[0x1e];
        puVar1[0x1d] = puVar2[0x1d];
        puVar1[0x1c] = uVar17;
        puVar1[0x1f] = uVar21;
        puVar1[0x1e] = uVar18;
      }
      else {
        puVar1[0x18] = puVar2[0x18];
        uVar17 = puVar2[0x19];
        puVar1[0x1a] = puVar2[0x1a];
        puVar1[0x19] = uVar17;
        uVar17 = puVar2[0x1c];
        puVar1[0x1b] = puVar2[0x1b];
        puVar1[0x1c] = uVar17;
        lVar8 = puVar2[0x1e];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar17);
        if (lVar8 == 0) {
          uVar17 = puVar2[0x1d];
          puVar1[0x1e] = puVar2[0x1e];
          puVar1[0x1d] = uVar17;
          puVar1[0x1f] = puVar2[0x1f];
        }
        else {
          puVar1[0x1d] = puVar2[0x1d];
          puVar1[0x1e] = lVar8;
          uVar17 = puVar2[0x1f];
          puVar1[0x1f] = uVar17;
          _swift_bridgeObjectRetain(lVar8);
          _swift_bridgeObjectRetain(uVar17);
        }
      }
      *(undefined1 *)(puVar1 + 0x20) = *(undefined1 *)(puVar2 + 0x20);
      uVar17 = puVar2[0x22];
      puVar1[0x21] = puVar2[0x21];
      puVar1[0x22] = uVar17;
      uVar17 = puVar2[0x24];
      puVar1[0x23] = puVar2[0x23];
      puVar1[0x24] = uVar17;
      uVar18 = puVar2[0x25];
      puVar1[0x26] = puVar2[0x26];
      puVar1[0x25] = uVar18;
      uVar18 = *(undefined8 *)((long)puVar2 + 0x132);
      *(undefined8 *)((long)puVar1 + 0x13a) = *(undefined8 *)((long)puVar2 + 0x13a);
      *(undefined8 *)((long)puVar1 + 0x132) = uVar18;
      lVar8 = puVar2[0x2a];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar17);
      if (lVar8 == 0) {
        uVar17 = puVar2[0x29];
        uVar21 = puVar2[0x2c];
        uVar18 = puVar2[0x2b];
        puVar1[0x2a] = puVar2[0x2a];
        puVar1[0x29] = uVar17;
        puVar1[0x2c] = uVar21;
        puVar1[0x2b] = uVar18;
      }
      else {
        puVar1[0x29] = puVar2[0x29];
        puVar1[0x2a] = lVar8;
        uVar17 = puVar2[0x2c];
        puVar1[0x2b] = puVar2[0x2b];
        puVar1[0x2c] = uVar17;
        _swift_bridgeObjectRetain(lVar8);
        _swift_bridgeObjectRetain(uVar17);
      }
      uVar17 = puVar2[0x2e];
      puVar1[0x2d] = puVar2[0x2d];
      puVar1[0x2e] = uVar17;
      uVar17 = puVar2[0x2f];
      uVar18 = puVar2[0x30];
      *(undefined1 *)(puVar1 + 0x31) = *(undefined1 *)(puVar2 + 0x31);
      uVar14 = puVar2[0x36];
      uVar7 = *(uint5 *)(puVar2 + 0x39);
      puVar1[0x2f] = uVar17;
      puVar1[0x30] = uVar18;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar18);
      if ((((uVar14 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
         (((ulong)uVar7 & 0xfefefefefefefefe) == 0x6fefefefe)) {
        uVar17 = puVar2[0x32];
        uVar21 = puVar2[0x35];
        uVar18 = puVar2[0x34];
        puVar1[0x33] = puVar2[0x33];
        puVar1[0x32] = uVar17;
        puVar1[0x35] = uVar21;
        puVar1[0x34] = uVar18;
        uVar17 = puVar2[0x36];
        puVar1[0x37] = puVar2[0x37];
        puVar1[0x36] = uVar17;
        uVar17 = *(undefined8 *)((long)puVar2 + 0x1bd);
        *(undefined8 *)((long)puVar1 + 0x1c5) = *(undefined8 *)((long)puVar2 + 0x1c5);
        *(undefined8 *)((long)puVar1 + 0x1bd) = uVar17;
      }
      else {
        uVar17 = puVar2[0x32];
        uVar3 = puVar2[0x33];
        uVar18 = puVar2[0x34];
        uVar4 = puVar2[0x35];
        uVar21 = puVar2[0x37];
        uVar5 = puVar2[0x38];
        func_0x00010179a2b8(uVar17,uVar3,uVar18,uVar4,uVar14,uVar21,uVar5,(ulong)uVar7);
        puVar1[0x32] = uVar17;
        puVar1[0x33] = uVar3;
        puVar1[0x34] = uVar18;
        puVar1[0x35] = uVar4;
        puVar1[0x36] = uVar14;
        puVar1[0x37] = uVar21;
        puVar1[0x38] = uVar5;
        *(char *)((long)puVar1 + 0x1cc) = (char)(uVar7 >> 0x20);
        *(int *)(puVar1 + 0x39) = (int)uVar7;
      }
      *(undefined1 *)((long)puVar1 + 0x1cd) = *(undefined1 *)((long)puVar2 + 0x1cd);
      uVar17 = puVar2[0x3b];
      puVar1[0x3a] = puVar2[0x3a];
      puVar1[0x3b] = uVar17;
      *(undefined1 *)(puVar1 + 0x3c) = *(undefined1 *)(puVar2 + 0x3c);
      lVar8 = puVar2[0x3e];
      _swift_bridgeObjectRetain();
      if (lVar8 == 0) {
        uVar17 = puVar2[0x3d];
        uVar21 = puVar2[0x40];
        uVar18 = puVar2[0x3f];
        puVar1[0x3e] = puVar2[0x3e];
        puVar1[0x3d] = uVar17;
        puVar1[0x40] = uVar21;
        puVar1[0x3f] = uVar18;
        uVar17 = puVar2[0x41];
        puVar1[0x42] = puVar2[0x42];
        puVar1[0x41] = uVar17;
      }
      else {
        puVar1[0x3d] = puVar2[0x3d];
        puVar1[0x3e] = lVar8;
        uVar17 = puVar2[0x40];
        puVar1[0x3f] = puVar2[0x3f];
        puVar1[0x40] = uVar17;
        puVar1[0x41] = puVar2[0x41];
        uVar18 = puVar2[0x42];
        puVar1[0x42] = uVar18;
        _swift_bridgeObjectRetain(lVar8);
        _swift_bridgeObjectRetain(uVar17);
        _swift_bridgeObjectRetain(uVar18);
      }
      *(undefined1 *)(puVar1 + 0x43) = *(undefined1 *)(puVar2 + 0x43);
      lVar8 = puVar2[0x45];
      if (lVar8 == 0) {
        uVar17 = puVar2[0x44];
        uVar21 = puVar2[0x47];
        uVar18 = puVar2[0x46];
        puVar1[0x45] = puVar2[0x45];
        puVar1[0x44] = uVar17;
        puVar1[0x47] = uVar21;
        puVar1[0x46] = uVar18;
        uVar17 = puVar2[0x48];
        puVar1[0x49] = puVar2[0x49];
        puVar1[0x48] = uVar17;
        puVar1[0x4a] = puVar2[0x4a];
      }
      else {
        puVar1[0x44] = puVar2[0x44];
        puVar1[0x45] = lVar8;
        puVar1[0x46] = puVar2[0x46];
        uVar17 = puVar2[0x47];
        puVar1[0x47] = uVar17;
        puVar1[0x48] = puVar2[0x48];
        uVar18 = puVar2[0x49];
        puVar1[0x49] = uVar18;
        puVar1[0x4a] = puVar2[0x4a];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar17);
        _swift_bridgeObjectRetain(uVar18);
      }
      puVar1[0x4b] = puVar2[0x4b];
      _swift_bridgeObjectRetain();
    }
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar14 = (ulong)uVar6 & 0xff;
    param_1 = (long *)(lVar8 + (uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1047555f8; end: 10475589f;  */

void FUN_1047555f8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = 0;
  FUN_104739264();
  lVar2 = param_1;
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,1,lVar1);
  if ((int)lVar2 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
    lVar2 = *(long *)(param_1 + 0x78);
    if (lVar2 != 1) {
      if (*(long *)(param_1 + 0x58) != 1) {
        _swift_bridgeObjectRelease(*(long *)(param_1 + 0x58));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x68));
        lVar2 = *(long *)(param_1 + 0x78);
      }
      _swift_bridgeObjectRelease(lVar2);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x88));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x98));
    lVar2 = param_1 + *(int *)(lVar1 + 0x34);
    lVar3 = 0;
    FUN_104742f28();
    lVar1 = lVar2;
    (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar2,1,lVar3);
    if ((int)lVar1 == 0) {
      lVar1 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar1 + -8) + 8))(lVar2,lVar1);
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar3 + 0x14) + 8));
    }
  }
  param_1 = param_1 + *(int *)(param_2 + 0x14);
  if (*(long *)(param_1 + 0xc0) == 1) {
    return;
  }
  if (*(long *)(param_1 + 8) != 1) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  }
  if (*(ulong *)(param_1 + 0x28) >> 0x3c < 0xf &&
      (*(ulong *)(param_1 + 0x28) & 0xf000000000000000) != 0xb000000000000000) {
    func_0x00010006c090(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(long *)(param_1 + 0x48) != 1) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x58));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x60));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x70));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x80));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x88));
    if (*(long *)(param_1 + 0x98) != 1) {
      _swift_bridgeObjectRelease();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xa8));
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xe0));
    if (*(long *)(param_1 + 0xf0) != 0) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xf8));
    }
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x110));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x120));
  if (*(long *)(param_1 + 0x150) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x160));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x170));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x180));
  if ((((*(ulong *)(param_1 + 0x1b0) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
     (((ulong)*(uint5 *)(param_1 + 0x1c8) & 0xfefefefefefefefe) != 0x6fefefefe)) {
    func_0x00010179b820(*(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x198),
                        *(undefined8 *)(param_1 + 0x1a0),*(undefined8 *)(param_1 + 0x1a8),
                        *(ulong *)(param_1 + 0x1b0),*(undefined8 *)(param_1 + 0x1b8),
                        *(undefined8 *)(param_1 + 0x1c0));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x1d8));
  if (*(long *)(param_1 + 0x1f0) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x200));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x210));
  }
  if (*(long *)(param_1 + 0x228) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x238));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x248));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 600));
  return;
}



/* Entry: 1047558a0; end: 1047577bf;  */

undefined8 * FUN_1047558a0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint5 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  
  lVar6 = 0;
  FUN_104739264();
  lVar11 = *(long *)(lVar6 + -8);
  puVar7 = param_2;
  (**(code **)(lVar11 + 0x30))(param_2,1,lVar6);
  if ((int)puVar7 == 0) {
    uVar15 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar15;
    uVar15 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar15;
    uVar16 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar16;
    uVar18 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar18;
    param_1[8] = param_2[8];
    lVar14 = param_2[0xf];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar15);
    _swift_bridgeObjectRetain(uVar16);
    _swift_bridgeObjectRetain(uVar18);
    if (lVar14 == 1) {
      uVar15 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar15;
      uVar15 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar15;
      uVar15 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar15;
      param_1[0xf] = param_2[0xf];
    }
    else {
      lVar8 = param_2[0xb];
      if (lVar8 == 1) {
        uVar15 = param_2[9];
        param_1[10] = param_2[10];
        param_1[9] = uVar15;
        uVar15 = param_2[0xb];
        param_1[0xc] = param_2[0xc];
        param_1[0xb] = uVar15;
        param_1[0xd] = param_2[0xd];
      }
      else {
        uVar15 = param_2[9];
        param_1[10] = param_2[10];
        param_1[9] = uVar15;
        uVar15 = param_2[0xc];
        uVar16 = param_2[0xd];
        param_1[0xb] = lVar8;
        param_1[0xc] = uVar15;
        param_1[0xd] = uVar16;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar16);
      }
      param_1[0xe] = param_2[0xe];
      param_1[0xf] = lVar14;
      _swift_bridgeObjectRetain(lVar14);
    }
    uVar15 = param_2[0x11];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar15;
    uVar16 = param_2[0x13];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = uVar16;
    lVar14 = (long)param_1 + (long)*(int *)(lVar6 + 0x34);
    lVar8 = (long)param_2 + (long)*(int *)(lVar6 + 0x34);
    lVar9 = 0;
    FUN_104742f28();
    lVar17 = *(long *)(lVar9 + -8);
    pcVar12 = *(code **)(lVar17 + 0x30);
    _swift_bridgeObjectRetain(uVar15);
    _swift_bridgeObjectRetain(uVar16);
    lVar10 = lVar8;
    (*pcVar12)(lVar8,1,lVar9);
    if ((int)lVar10 == 0) {
      lVar10 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar10 + -8) + 0x10))(lVar14,lVar8,lVar10);
      puVar7 = (undefined8 *)(lVar14 + *(int *)(lVar9 + 0x14));
      puVar1 = (undefined8 *)(lVar8 + *(int *)(lVar9 + 0x14));
      uVar15 = puVar1[1];
      *puVar7 = *puVar1;
      puVar7[1] = uVar15;
      *(undefined1 *)(lVar14 + *(int *)(lVar9 + 0x18)) =
           *(undefined1 *)(lVar8 + *(int *)(lVar9 + 0x18));
      *(undefined1 *)(lVar14 + *(int *)(lVar9 + 0x1c)) =
           *(undefined1 *)(lVar8 + *(int *)(lVar9 + 0x1c));
      puVar7 = (undefined8 *)(lVar14 + *(int *)(lVar9 + 0x20));
      puVar1 = (undefined8 *)(lVar8 + *(int *)(lVar9 + 0x20));
      *puVar7 = *puVar1;
      *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar1 + 1);
      *(undefined1 *)(lVar14 + *(int *)(lVar9 + 0x24)) =
           *(undefined1 *)(lVar8 + *(int *)(lVar9 + 0x24));
      pcVar12 = *(code **)(lVar17 + 0x38);
      _swift_bridgeObjectRetain();
      (*pcVar12)(lVar14,0,1,lVar9);
    }
    else {
      lVar10 = 0x112dcbf00;
      func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
      _memcpy(lVar14,lVar8,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
    puVar7 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x38));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x38));
    uVar15 = *puVar1;
    puVar7[1] = puVar1[1];
    *puVar7 = uVar15;
    uVar15 = *(undefined8 *)((long)puVar1 + 9);
    *(undefined8 *)((long)puVar7 + 0x11) = *(undefined8 *)((long)puVar1 + 0x11);
    *(undefined8 *)((long)puVar7 + 9) = uVar15;
    (**(code **)(lVar11 + 0x38))(param_1,0,1,lVar6);
  }
  else {
    lVar6 = 0x112db3ce0;
    func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
    _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  puVar7 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  if (param_2[0x18] == 1) {
    _memcpy(puVar7,param_2,0x260);
  }
  else {
    lVar6 = param_2[1];
    if (lVar6 == 1) {
      uVar15 = *param_2;
      puVar7[1] = param_2[1];
      *puVar7 = uVar15;
      puVar7[2] = param_2[2];
    }
    else {
      *puVar7 = *param_2;
      puVar7[1] = lVar6;
      uVar15 = param_2[2];
      puVar7[2] = uVar15;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar15);
    }
    uVar13 = param_2[5];
    if (uVar13 >> 0x3c == 0xb) {
      uVar15 = param_2[3];
      puVar7[4] = param_2[4];
      puVar7[3] = uVar15;
      puVar7[5] = param_2[5];
    }
    else {
      puVar7[3] = param_2[3];
      if (uVar13 >> 0x3c < 0xf) {
        uVar15 = param_2[4];
        func_0x00010006c00c(uVar15,uVar13);
        puVar7[4] = uVar15;
        puVar7[5] = uVar13;
      }
      else {
        uVar15 = param_2[4];
        puVar7[5] = param_2[5];
        puVar7[4] = uVar15;
      }
    }
    *(undefined2 *)(puVar7 + 6) = *(undefined2 *)(param_2 + 6);
    puVar7[7] = param_2[7];
    lVar6 = param_2[9];
    if (lVar6 == 1) {
      uVar15 = param_2[0x10];
      uVar18 = param_2[0x13];
      uVar16 = param_2[0x12];
      puVar7[0x11] = param_2[0x11];
      puVar7[0x10] = uVar15;
      puVar7[0x13] = uVar18;
      puVar7[0x12] = uVar16;
      uVar15 = param_2[0x14];
      puVar7[0x15] = param_2[0x15];
      puVar7[0x14] = uVar15;
      uVar15 = *(undefined8 *)((long)param_2 + 0xaa);
      *(undefined8 *)((long)puVar7 + 0xb2) = *(undefined8 *)((long)param_2 + 0xb2);
      *(undefined8 *)((long)puVar7 + 0xaa) = uVar15;
      uVar15 = param_2[8];
      uVar18 = param_2[0xb];
      uVar16 = param_2[10];
      puVar7[9] = param_2[9];
      puVar7[8] = uVar15;
      puVar7[0xb] = uVar18;
      puVar7[10] = uVar16;
      uVar15 = param_2[0xc];
      uVar18 = param_2[0xf];
      uVar16 = param_2[0xe];
      puVar7[0xd] = param_2[0xd];
      puVar7[0xc] = uVar15;
      puVar7[0xf] = uVar18;
      puVar7[0xe] = uVar16;
    }
    else {
      puVar7[8] = param_2[8];
      puVar7[9] = lVar6;
      uVar2 = param_2[0xb];
      puVar7[10] = param_2[10];
      puVar7[0xb] = uVar2;
      uVar15 = param_2[0xc];
      uVar16 = param_2[0xd];
      puVar7[0xc] = uVar15;
      puVar7[0xd] = uVar16;
      uVar16 = param_2[0xe];
      uVar18 = param_2[0xf];
      puVar7[0xe] = uVar16;
      puVar7[0xf] = uVar18;
      uVar18 = param_2[0x10];
      uVar3 = param_2[0x11];
      puVar7[0x10] = uVar18;
      puVar7[0x11] = uVar3;
      lVar6 = param_2[0x13];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar15);
      _swift_bridgeObjectRetain(uVar16);
      _swift_bridgeObjectRetain(uVar18);
      _swift_bridgeObjectRetain(uVar3);
      if (lVar6 == 1) {
        uVar15 = param_2[0x12];
        puVar7[0x13] = param_2[0x13];
        puVar7[0x12] = uVar15;
      }
      else {
        puVar7[0x12] = param_2[0x12];
        puVar7[0x13] = lVar6;
        _swift_bridgeObjectRetain(lVar6);
      }
      uVar15 = param_2[0x15];
      puVar7[0x14] = param_2[0x14];
      puVar7[0x15] = uVar15;
      puVar7[0x16] = param_2[0x16];
      *(undefined2 *)(puVar7 + 0x17) = *(undefined2 *)(param_2 + 0x17);
      _swift_bridgeObjectRetain();
    }
    *(undefined2 *)((long)puVar7 + 0xba) = *(undefined2 *)((long)param_2 + 0xba);
    if (param_2[0x18] == 0) {
      lVar6 = param_2[0x18];
      uVar16 = param_2[0x1b];
      uVar15 = param_2[0x1a];
      puVar7[0x19] = param_2[0x19];
      puVar7[0x18] = lVar6;
      puVar7[0x1b] = uVar16;
      puVar7[0x1a] = uVar15;
      uVar15 = param_2[0x1c];
      uVar18 = param_2[0x1f];
      uVar16 = param_2[0x1e];
      puVar7[0x1d] = param_2[0x1d];
      puVar7[0x1c] = uVar15;
      puVar7[0x1f] = uVar18;
      puVar7[0x1e] = uVar16;
    }
    else {
      puVar7[0x18] = param_2[0x18];
      uVar15 = param_2[0x19];
      puVar7[0x1a] = param_2[0x1a];
      puVar7[0x19] = uVar15;
      uVar15 = param_2[0x1c];
      puVar7[0x1b] = param_2[0x1b];
      puVar7[0x1c] = uVar15;
      lVar6 = param_2[0x1e];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar15);
      if (lVar6 == 0) {
        uVar15 = param_2[0x1d];
        puVar7[0x1e] = param_2[0x1e];
        puVar7[0x1d] = uVar15;
        puVar7[0x1f] = param_2[0x1f];
      }
      else {
        puVar7[0x1d] = param_2[0x1d];
        puVar7[0x1e] = lVar6;
        uVar15 = param_2[0x1f];
        puVar7[0x1f] = uVar15;
        _swift_bridgeObjectRetain(lVar6);
        _swift_bridgeObjectRetain(uVar15);
      }
    }
    *(undefined1 *)(puVar7 + 0x20) = *(undefined1 *)(param_2 + 0x20);
    uVar15 = param_2[0x22];
    puVar7[0x21] = param_2[0x21];
    puVar7[0x22] = uVar15;
    uVar15 = param_2[0x24];
    puVar7[0x23] = param_2[0x23];
    puVar7[0x24] = uVar15;
    uVar16 = param_2[0x25];
    puVar7[0x26] = param_2[0x26];
    puVar7[0x25] = uVar16;
    uVar16 = *(undefined8 *)((long)param_2 + 0x132);
    *(undefined8 *)((long)puVar7 + 0x13a) = *(undefined8 *)((long)param_2 + 0x13a);
    *(undefined8 *)((long)puVar7 + 0x132) = uVar16;
    lVar6 = param_2[0x2a];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar15);
    if (lVar6 == 0) {
      uVar15 = param_2[0x29];
      uVar18 = param_2[0x2c];
      uVar16 = param_2[0x2b];
      puVar7[0x2a] = param_2[0x2a];
      puVar7[0x29] = uVar15;
      puVar7[0x2c] = uVar18;
      puVar7[0x2b] = uVar16;
    }
    else {
      puVar7[0x29] = param_2[0x29];
      puVar7[0x2a] = lVar6;
      uVar15 = param_2[0x2c];
      puVar7[0x2b] = param_2[0x2b];
      puVar7[0x2c] = uVar15;
      _swift_bridgeObjectRetain(lVar6);
      _swift_bridgeObjectRetain(uVar15);
    }
    uVar15 = param_2[0x2e];
    puVar7[0x2d] = param_2[0x2d];
    puVar7[0x2e] = uVar15;
    uVar15 = param_2[0x2f];
    uVar16 = param_2[0x30];
    *(undefined1 *)(puVar7 + 0x31) = *(undefined1 *)(param_2 + 0x31);
    uVar13 = param_2[0x36];
    uVar5 = *(uint5 *)(param_2 + 0x39);
    puVar7[0x2f] = uVar15;
    puVar7[0x30] = uVar16;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar16);
    if ((((uVar13 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
       (((ulong)uVar5 & 0xfefefefefefefefe) == 0x6fefefefe)) {
      uVar15 = param_2[0x32];
      uVar18 = param_2[0x35];
      uVar16 = param_2[0x34];
      puVar7[0x33] = param_2[0x33];
      puVar7[0x32] = uVar15;
      puVar7[0x35] = uVar18;
      puVar7[0x34] = uVar16;
      uVar15 = param_2[0x36];
      puVar7[0x37] = param_2[0x37];
      puVar7[0x36] = uVar15;
      uVar15 = *(undefined8 *)((long)param_2 + 0x1bd);
      *(undefined8 *)((long)puVar7 + 0x1c5) = *(undefined8 *)((long)param_2 + 0x1c5);
      *(undefined8 *)((long)puVar7 + 0x1bd) = uVar15;
    }
    else {
      uVar15 = param_2[0x32];
      uVar2 = param_2[0x33];
      uVar16 = param_2[0x34];
      uVar3 = param_2[0x35];
      uVar18 = param_2[0x37];
      uVar4 = param_2[0x38];
      func_0x00010179a2b8(uVar15,uVar2,uVar16,uVar3,uVar13,uVar18,uVar4,(ulong)uVar5);
      puVar7[0x32] = uVar15;
      puVar7[0x33] = uVar2;
      puVar7[0x34] = uVar16;
      puVar7[0x35] = uVar3;
      puVar7[0x36] = uVar13;
      puVar7[0x37] = uVar18;
      puVar7[0x38] = uVar4;
      *(char *)((long)puVar7 + 0x1cc) = (char)(uVar5 >> 0x20);
      *(int *)(puVar7 + 0x39) = (int)uVar5;
    }
    *(undefined1 *)((long)puVar7 + 0x1cd) = *(undefined1 *)((long)param_2 + 0x1cd);
    uVar15 = param_2[0x3b];
    puVar7[0x3a] = param_2[0x3a];
    puVar7[0x3b] = uVar15;
    *(undefined1 *)(puVar7 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
    lVar6 = param_2[0x3e];
    _swift_bridgeObjectRetain();
    if (lVar6 == 0) {
      uVar15 = param_2[0x3d];
      uVar18 = param_2[0x40];
      uVar16 = param_2[0x3f];
      puVar7[0x3e] = param_2[0x3e];
      puVar7[0x3d] = uVar15;
      puVar7[0x40] = uVar18;
      puVar7[0x3f] = uVar16;
      uVar15 = param_2[0x41];
      puVar7[0x42] = param_2[0x42];
      puVar7[0x41] = uVar15;
    }
    else {
      puVar7[0x3d] = param_2[0x3d];
      puVar7[0x3e] = lVar6;
      uVar15 = param_2[0x40];
      puVar7[0x3f] = param_2[0x3f];
      puVar7[0x40] = uVar15;
      puVar7[0x41] = param_2[0x41];
      uVar16 = param_2[0x42];
      puVar7[0x42] = uVar16;
      _swift_bridgeObjectRetain(lVar6);
      _swift_bridgeObjectRetain(uVar15);
      _swift_bridgeObjectRetain(uVar16);
    }
    *(undefined1 *)(puVar7 + 0x43) = *(undefined1 *)(param_2 + 0x43);
    lVar6 = param_2[0x45];
    if (lVar6 == 0) {
      uVar15 = param_2[0x44];
      uVar18 = param_2[0x47];
      uVar16 = param_2[0x46];
      puVar7[0x45] = param_2[0x45];
      puVar7[0x44] = uVar15;
      puVar7[0x47] = uVar18;
      puVar7[0x46] = uVar16;
      uVar15 = param_2[0x48];
      puVar7[0x49] = param_2[0x49];
      puVar7[0x48] = uVar15;
      puVar7[0x4a] = param_2[0x4a];
    }
    else {
      puVar7[0x44] = param_2[0x44];
      puVar7[0x45] = lVar6;
      puVar7[0x46] = param_2[0x46];
      uVar15 = param_2[0x47];
      puVar7[0x47] = uVar15;
      puVar7[0x48] = param_2[0x48];
      uVar16 = param_2[0x49];
      puVar7[0x49] = uVar16;
      puVar7[0x4a] = param_2[0x4a];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar15);
      _swift_bridgeObjectRetain(uVar16);
    }
    puVar7[0x4b] = param_2[0x4b];
    _swift_bridgeObjectRetain();
  }
  return param_1;
}



/* Entry: 1047577c0; end: 1047577fb;  */

undefined8 FUN_1047577c0(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1047577fc; end: 104758463;  */

undefined8 * FUN_1047577fc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar4 = 0;
  FUN_104739264();
  lVar8 = *(long *)(lVar4 + -8);
  puVar5 = param_2;
  (**(code **)(lVar8 + 0x30))(param_2,1,lVar4);
  if ((int)puVar5 == 0) {
    uVar10 = *param_2;
    uVar12 = param_2[3];
    uVar11 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar10;
    param_1[3] = uVar12;
    param_1[2] = uVar11;
    uVar10 = param_2[4];
    uVar12 = param_2[7];
    uVar11 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar10;
    param_1[7] = uVar12;
    param_1[6] = uVar11;
    param_1[8] = param_2[8];
    param_1[0xf] = param_2[0xf];
    uVar10 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar10;
    uVar10 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar10;
    uVar10 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar10;
    uVar10 = param_2[0x10];
    uVar12 = param_2[0x13];
    uVar11 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar10;
    param_1[0x13] = uVar12;
    param_1[0x12] = uVar11;
    lVar1 = (long)param_1 + (long)*(int *)(lVar4 + 0x34);
    lVar2 = (long)param_2 + (long)*(int *)(lVar4 + 0x34);
    lVar6 = 0;
    FUN_104742f28();
    lVar9 = *(long *)(lVar6 + -8);
    lVar7 = lVar2;
    (**(code **)(lVar9 + 0x30))(lVar2,1,lVar6);
    if ((int)lVar7 == 0) {
      lVar7 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar7 + -8) + 0x20))(lVar1,lVar2,lVar7);
      puVar5 = (undefined8 *)(lVar2 + *(int *)(lVar6 + 0x14));
      uVar10 = *puVar5;
      puVar3 = (undefined8 *)(lVar1 + *(int *)(lVar6 + 0x14));
      puVar3[1] = puVar5[1];
      *puVar3 = uVar10;
      *(undefined1 *)(lVar1 + *(int *)(lVar6 + 0x18)) =
           *(undefined1 *)(lVar2 + *(int *)(lVar6 + 0x18));
      *(undefined1 *)(lVar1 + *(int *)(lVar6 + 0x1c)) =
           *(undefined1 *)(lVar2 + *(int *)(lVar6 + 0x1c));
      puVar5 = (undefined8 *)(lVar1 + *(int *)(lVar6 + 0x20));
      puVar3 = (undefined8 *)(lVar2 + *(int *)(lVar6 + 0x20));
      *puVar5 = *puVar3;
      *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar3 + 1);
      *(undefined1 *)(lVar1 + *(int *)(lVar6 + 0x24)) =
           *(undefined1 *)(lVar2 + *(int *)(lVar6 + 0x24));
      (**(code **)(lVar9 + 0x38))(lVar1,0,1,lVar6);
    }
    else {
      lVar7 = 0x112dcbf00;
      func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
      _memcpy(lVar1,lVar2,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x38));
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x38));
    uVar10 = *puVar3;
    puVar5[1] = puVar3[1];
    *puVar5 = uVar10;
    uVar10 = *(undefined8 *)((long)puVar3 + 9);
    *(undefined8 *)((long)puVar5 + 0x11) = *(undefined8 *)((long)puVar3 + 0x11);
    *(undefined8 *)((long)puVar5 + 9) = uVar10;
    (**(code **)(lVar8 + 0x38))(param_1,0,1,lVar4);
  }
  else {
    lVar4 = 0x112db3ce0;
    func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
    _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  _memcpy((long)param_1 + (long)*(int *)(param_3 + 0x14),
          (long)param_2 + (long)*(int *)(param_3 + 0x14),0x260);
  return param_1;
}



/* Entry: 104758464; end: 10475847b;  */

void FUN_104758464(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10475847c; end: 10475857f;  */

void FUN_10475847c(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x0001047584ec();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dd338e0;
    _swift_initStructMetadata(param_1,0x100,2,&lStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 104758580; end: 104758593;  */

bool FUN_104758580(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104758594; end: 10475863f;  */

void FUN_104758594(void)

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



/* Entry: 104758640; end: 1047586db;  */

undefined1  [16] FUN_104758640(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *unaff_x20;
  undefined1 auVar5 [16];
  
  bVar2 = *unaff_x20;
  uVar1 = 0xed00006576697461;
  uVar3 = 0x6c65526874646977;
  if (bVar2 != 2) {
    uVar1 = 0xee0065766974616c;
    uVar3 = 0x6552746867696568;
  }
  uVar4 = 0x52586e696769726f;
  if (bVar2 != 0) {
    uVar4 = 0x52596e696769726f;
  }
  if (bVar2 < 2) {
    uVar1 = 0xef65766974616c65;
    uVar3 = uVar4;
  }
  auVar5._8_8_ = uVar1;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 1047586dc; end: 1047586ff;  */

void FUN_1047586dc(undefined1 *param_1,undefined1 param_2)

{
  FUN_104758b54();
  *param_1 = param_2;
  return;
}



/* Entry: 104758700; end: 104758717;  */

undefined1  [16] FUN_104758700(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 104758718; end: 104758767;  */

void FUN_104758718(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1047588ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 104758768; end: 1047588eb;  */

void FUN_104758768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  lVar3 = 0x11308e968;
  func_0x0001000285a8(0x11308e968,&UNK_10dd33900);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffff90 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_5 + 0x18);
  uVar2 = *(undefined8 *)(param_5 + 0x20);
  func_0x0001000a8868(param_5,uVar1);
  FUN_1047588ec();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar4,&UNK_11079fea8,&UNK_11079fea8,param_5,uVar1,uVar2);
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



/* Entry: 1047588ec; end: 10475892b;  */

void FUN_1047588ec(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd33a9c;
  _swift_getWitnessTable(&UNK_10dd33a9c,&UNK_11079fea8);
  puRam000000011308e970 = puVar1;
  return;
}



/* Entry: 10475892c; end: 1047589a7;  */

void FUN_10475892c(double param_1,double param_2,double param_3,double param_4)

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



/* Entry: 1047589a8; end: 104758a57;  */

void FUN_1047589a8(double param_1,double param_2,double param_3,double param_4)

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



/* Entry: 104758a58; end: 104758a6f;  */

void FUN_104758a58(void)

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



/* Entry: 104758a70; end: 104758acf;  */

void FUN_104758a70(void)

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
  FUN_10475892c(uVar1,uVar2,uVar3,uVar4,auStack_88);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104758ad0; end: 104758afb;  */

void FUN_104758ad0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_104758cd4();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Entry: 104758afc; end: 104758b17;  */

void FUN_104758afc(void)

{
  undefined8 *unaff_x20;
  
  FUN_104758768(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Entry: 104758b18; end: 104758b53;  */

bool FUN_104758b18(double *param_1,double *param_2)

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



/* Entry: 104758b54; end: 104758cd3;  */

undefined4 FUN_104758b54(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x52586e696769726f;
  if ((param_1 == 0x52586e696769726f && param_2 == -0x109a89968b9e939b) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x52586e696769726f,0xef65766974616c65,param_1,param_2,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0x52596e696769726f;
    if (((param_1 == 0x52596e696769726f) && (param_2 == -0x109a89968b9e939b)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x52596e696769726f,0xef65766974616c65,param_1,param_2,0), (uVar1 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar2 = 1;
    }
    else {
      uVar1 = 0x6c65526874646977;
      if (((param_1 == 0x6c65526874646977) && (param_2 == -0x12ffff9a89968b9f)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x6c65526874646977,0xed00006576697461,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        uVar2 = 2;
      }
      else {
        uVar1 = 0;
        if ((param_1 == 0x6552746867696568) && (param_2 == -0x11ff9a89968b9e94)) {
          _swift_bridgeObjectRelease(0xee0065766974616c);
          uVar2 = 3;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x6552746867696568,0xee0065766974616c,param_1,param_2,0);
          _swift_bridgeObjectRelease(param_2);
          uVar2 = 3;
          if ((uVar1 & 1) == 0) {
            uVar2 = 4;
          }
        }
      }
    }
  }
  return uVar2;
}


