/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00080aac; end: 00080b83;  */

void FUN_00080aac(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x65707974 || param_3 != -0x1c00000000000000) {
    uVar1 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x65707974,0xe400000000000000,param_2,param_3,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0x747865746e6f63;
      if ((param_2 == 0x747865746e6f63) && (param_3 == -0x1900000000000000)) {
        _swift_bridgeObjectRelease(0xe700000000000000);
        uVar2 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x747865746e6f63,0xe700000000000000,param_2,param_3,0);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if ((uVar1 & 1) == 0) {
          uVar2 = 2;
        }
      }
      goto LAB_00080b0c;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_00080b0c:
  *param_1 = uVar2;
  return;
}



/* Entry: 00080b84; end: 00080b9b;  */

undefined1  [16] FUN_00080b84(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 00080b9c; end: 00080beb;  */

void FUN_00080b9c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_00080d30();
                    /* WARNING: Could not recover jumptable at 0x00779130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_0099b8c0)(param_1,uVar1);
  return;
}



/* Entry: 00080bec; end: 00080d2f;  */

void FUN_00080bec(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_60 [12];
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0xae92e8;
  func_0x000115a8(0xae92e8,&UNK_007d2820);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_0001393c(param_1,uVar1);
  FUN_00080d30();
  puVar4 = &UNK_009a3268;
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (auStack_60 + -extraout_x8,&UNK_009a3268,&UNK_009a3268,param_1,uVar1,uVar2);
  uStack_51 = (undefined1)param_2;
  uStack_52 = 0;
  func_0x00080d70();
  puVar5 = &uStack_51;
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
            (puVar5,&uStack_52,lVar3,&UNK_009a3648,puVar4);
  if (unaff_x21 == 0) {
    uStack_53 = (undefined1)((uint)param_2 >> 8);
    uStack_54 = 1;
    func_0x00080db0();
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&uStack_53,&uStack_54,lVar3,&UNK_009a3770,puVar5);
  }
  (**(code **)(lVar6 + 8))(auStack_60 + -extraout_x8,lVar3);
  return;
}



/* Entry: 00080d30; end: 00080def;  */

void FUN_00080d30(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae92f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d295c;
  _swift_getWitnessTable(&UNK_007d295c,&UNK_009a3268);
  puRam0000000000ae92f0 = puVar1;
  return;
}



/* Entry: 00080df0; end: 00080e17;  */

void FUN_00080df0(undefined2 *param_1,undefined2 param_2)

{
  long unaff_x21;
  
  FUN_00080e30();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 00080e18; end: 00080e2f;  */

void FUN_00080e18(undefined8 param_1)

{
  undefined2 *unaff_x20;
  
  FUN_00080bec(param_1,*unaff_x20);
  return;
}



/* Entry: 00080e30; end: 00080faf;  */

/* WARNING: Removing unreachable block (ram,0x00080f10) */

void FUN_00080e30(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_60 [12];
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0xae9320;
  func_0x000115a8(0xae9320,&UNK_007d29b0);
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  FUN_0001393c(param_1,uVar1);
  FUN_00080d30();
  puVar5 = &UNK_009a3268;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_60 + -extraout_x8,&UNK_009a3268,&UNK_009a3268,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_52 = 0;
    func_0x0008132c();
    puVar6 = &UNK_009a3648;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&uStack_51,&UNK_009a3648,&uStack_52,lVar3,&UNK_009a3648,puVar5);
    uStack_54 = 1;
    func_0x0008136c();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&uStack_53,&UNK_009a3770,&uStack_54,lVar3,&UNK_009a3770,puVar6);
    (**(code **)(lVar7 + 8))(auStack_60 + -extraout_x8,lVar3);
    FUN_00011670(param_1);
  }
  else {
    FUN_00011670(param_1);
  }
  return;
}



/* Entry: 00080fb0; end: 00081263;  */

int FUN_00080fb0(ushort *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 4;
    if (param_2 + 0xff06 < 0xffff0000) {
      iVar2 = 2;
    }
    if (param_2 + 0xff06 < 0xff0000) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)param_1[1];
        if (param_1[1] == 0) goto LAB_0008102c;
        goto LAB_0008100c;
      }
      uVar1 = (uint)(byte)param_1[1];
    }
    if (uVar1 != 0) {
LAB_0008100c:
      return ((uint)*param_1 | uVar1 << 0x10) - 0xff06;
    }
  }
LAB_0008102c:
  iVar2 = *(byte *)((long)param_1 + 1) - 7;
  if (*(byte *)((long)param_1 + 1) < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 00081264; end: 000812a3;  */

void FUN_00081264(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9308 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2934;
  _swift_getWitnessTable(&UNK_007d2934,&UNK_009a3268);
  puRam0000000000ae9308 = puVar1;
  return;
}



/* Entry: 000812a4; end: 000812a7;  */

void FUN_000812a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9310 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d28cc;
  _swift_getWitnessTable(&UNK_007d28cc,&UNK_009a3268);
  puRam0000000000ae9310 = puVar1;
  return;
}



/* Entry: 000812a8; end: 000812e7;  */

void FUN_000812a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9310 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d28cc;
  _swift_getWitnessTable(&UNK_007d28cc,&UNK_009a3268);
  puRam0000000000ae9310 = puVar1;
  return;
}



/* Entry: 000812e8; end: 000812eb;  */

void FUN_000812e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9318 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d28a4;
  _swift_getWitnessTable(&UNK_007d28a4,&UNK_009a3268);
  puRam0000000000ae9318 = puVar1;
  return;
}



/* Entry: 000812ec; end: 000813ab;  */

void FUN_000812ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9318 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d28a4;
  _swift_getWitnessTable(&UNK_007d28a4,&UNK_009a3268);
  puRam0000000000ae9318 = puVar1;
  return;
}



/* Entry: 000813ac; end: 000813b7;  */

undefined1  [16] FUN_000813ac(void)

{
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 000813b8; end: 000813e3;  */

void FUN_000813b8(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_bridgeObjectRelease(param_3);
  *param_1 = 1;
  return;
}



/* Entry: 000813e4; end: 000813fb;  */

undefined1  [16] FUN_000813e4(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 000813fc; end: 0008144b;  */

void FUN_000813fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00082424();
                    /* WARNING: Could not recover jumptable at 0x00779130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_0099b8c0)(param_1,uVar1);
  return;
}



/* Entry: 0008144c; end: 00081463;  */

bool FUN_0008144c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 00081464; end: 0008148b;  */

void FUN_00081464(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  __ss6HasherV8_combineyySuF(param_1,*unaff_x20);
  return;
}



/* Entry: 0008148c; end: 000814eb;  */

void FUN_0008148c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000814ec; end: 0008150f;  */

void FUN_000814ec(undefined1 *param_1,undefined1 param_2)

{
  FUN_000821b4();
  *param_1 = param_2;
  return;
}



/* Entry: 00081510; end: 00081527;  */

undefined1  [16] FUN_00081510(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 00081528; end: 000815fb;  */

void FUN_00081528(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_000823a4();
                    /* WARNING: Could not recover jumptable at 0x00779130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_0099b8c0)(param_1,uVar1);
  return;
}



/* Entry: 000815fc; end: 0008163b;  */

undefined1  [16] FUN_000815fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar2 = 0x80000000008b7a60;
  uVar1 = 0xd000000000000017;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe800000000000000;
    uVar1 = 0x746e696f70646e65;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 0008163c; end: 0008171b;  */

void FUN_0008163c(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  uVar1 = 0x746e696f70646e65;
  if ((param_2 == 0x746e696f70646e65 && param_3 == -0x1800000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x746e696f70646e65,0xe800000000000000,param_2,param_3,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_3);
    uVar2 = 0;
  }
  else if ((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7fffffffff7485a0)) {
    _swift_bridgeObjectRelease(0x80000000008b7a60);
    uVar2 = 1;
  }
  else {
    uVar1 = 0xd000000000000017;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd000000000000017,0x80000000008b7a60,param_2,param_3,0);
    _swift_bridgeObjectRelease(param_3);
    uVar2 = 1;
    if ((uVar1 & 1) == 0) {
      uVar2 = 2;
    }
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 0008171c; end: 00081733;  */

undefined1  [16] FUN_0008171c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 00081734; end: 00081783;  */

void FUN_00081734(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00082464();
                    /* WARNING: Could not recover jumptable at 0x00779130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_0099b8c0)(param_1,uVar1);
  return;
}



/* Entry: 00081784; end: 0008179b;  */

undefined1  [16] FUN_00081784(void)

{
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 0008179c; end: 000817eb;  */

void FUN_0008179c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000823e4();
                    /* WARNING: Could not recover jumptable at 0x00779130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_0099b8c0)(param_1,uVar1);
  return;
}



/* Entry: 000817ec; end: 00081b63;  */

void FUN_000817ec(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar6;
  long unaff_x21;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_68;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar1 = 0xae9338;
  uStack_b8 = param_4;
  uStack_a0 = param_2;
  lStack_88 = param_3;
  func_0x000115a8(0xae9338,&UNK_007d29c0);
  lStack_b0 = *(long *)(lVar1 + -8);
  lStack_a8 = lVar1;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lStack_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_c0 + -extraout_x8;
  lVar1 = 0xae9340;
  func_0x000115a8(0xae9340,&UNK_007d29c8);
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)puVar10 - extraout_x8_00;
  lVar2 = 0xae9348;
  func_0x000115a8(0xae9348,&UNK_007d29d0);
  lStack_98 = *(long *)(lVar2 + -8);
  lStack_90 = lVar2;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lStack_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar8 - extraout_x8_01;
  lVar2 = 0xae9350;
  func_0x000115a8(0xae9350,&UNK_007d29d8);
  lStack_80 = *(long *)(lVar2 + -8);
  lStack_78 = lVar2;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lStack_80 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar11 - extraout_x8_02;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  FUN_0001393c(param_1,uVar4);
  FUN_000823a4();
  lVar2 = lStack_88;
  puVar3 = &UNK_009a3438;
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (lVar7,&UNK_009a3438,&UNK_009a3438,param_1,uVar4,uVar5);
  if (lVar2 == 1) {
    uStack_52 = 1;
    func_0x00082424();
    lVar2 = lStack_78;
    __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
              (lVar8,&UNK_009a34e8,&uStack_52,lStack_78,&UNK_009a34e8,puVar3);
    (**(code **)(lVar9 + 8))(lVar8,lVar1);
    pcVar6 = *(code **)(lStack_80 + 8);
  }
  else {
    if (lVar2 != 2) {
      uStack_53 = 0;
      func_0x00082464();
      lVar8 = lStack_78;
      __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
                (lVar11,&UNK_009a34c8,&uStack_53,lStack_78,&UNK_009a34c8,puVar3);
      lVar1 = lStack_90;
      uStack_54 = 0;
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
                (uStack_a0,lVar2,&uStack_54,lStack_90);
      if (unaff_x21 != 0) {
        (**(code **)(lStack_98 + 8))(lVar11,lVar1);
        (**(code **)(lStack_80 + 8))(lVar7,lVar8);
        return;
      }
      uStack_68 = uStack_b8;
      uStack_55 = 1;
      uVar4 = 0xae9378;
      func_0x000115a8(0xae9378,&UNK_007d29e0);
      uVar5 = 0xae9380;
      FUN_0008333c(0xae9380,0x824a4,PTR___sSayxGSEsSERzlMc_0099b1d8);
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
                (&uStack_68,&uStack_55,lVar1,uVar4,uVar5);
      (**(code **)(lStack_98 + 8))(lVar11,lVar1);
      (**(code **)(lStack_80 + 8))(lVar7,lVar8);
      return;
    }
    uStack_51 = 2;
    func_0x000823e4();
    lVar2 = lStack_78;
    __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
              (puVar10,&UNK_009a3508,&uStack_51,lStack_78,&UNK_009a3508,puVar3);
    (**(code **)(lStack_b0 + 8))(puVar10,lStack_a8);
    pcVar6 = *(code **)(lStack_80 + 8);
  }
  (*pcVar6)(lVar7,lVar2);
  return;
}



/* Entry: 00081b64; end: 00081c53;  */

void FUN_00081b64(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_3 == 1) {
    uVar2 = 1;
  }
  else {
    if (param_3 != 2) {
      __ss6HasherV8_combineyySuF(0);
      if (param_3 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,param_2,param_3);
      }
      if (param_4 != 0) {
        __ss6HasherV8_combineyys5UInt8VF(1);
        lVar3 = *(long *)(param_4 + 0x10);
        __ss6HasherV8_combineyySuF(lVar3);
        if (lVar3 == 0) {
          return;
        }
        puVar4 = (undefined8 *)(param_4 + 0x28);
        do {
          uVar2 = puVar4[-1];
          uVar1 = *puVar4;
          func_0x00023304(uVar2,uVar1);
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar2,uVar1);
          FUN_00023358(uVar2,uVar1);
          puVar4 = puVar4 + 2;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        return;
      }
      __ss6HasherV8_combineyys5UInt8VF(0);
      return;
    }
    uVar2 = 2;
  }
  __ss6HasherV8_combineyySuF(uVar2);
  return;
}



/* Entry: 00081c54; end: 00081c6f;  */

undefined8 FUN_00081c54(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_2[1];
  uVar5 = param_2[2];
  if (uVar1 == 1) {
    if (uVar2 == 1) {
      return 1;
    }
  }
  else if (uVar1 == 2) {
    if (uVar2 == 2) {
      return 1;
    }
  }
  else if (1 < uVar2 - 1) {
    if (uVar1 == 0) {
      if (uVar2 != 0) {
        return 0;
      }
    }
    else {
      if (uVar2 == 0) {
        return 0;
      }
      if (((uVar3 != *param_2) || (uVar1 != uVar2)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar3,uVar1,*param_2,uVar2,0), (uVar3 & 1) == 0)) {
        return 0;
      }
    }
    if (uVar4 == 0) {
      if (uVar5 == 0) {
        return 1;
      }
    }
    else if (uVar5 != 0) {
      _swift_bridgeObjectRetain(uVar5);
      FUN_00081d70(uVar4,uVar5);
      _swift_bridgeObjectRelease(uVar5);
      if ((uVar4 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 00081c70; end: 00081cc7;  */

void FUN_00081c70(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  FUN_00081b64(auStack_78,uVar1,uVar2,uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00081cc8; end: 00081cd3;  */

void FUN_00081cc8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x20;
  long lVar4;
  undefined8 *puVar5;
  
  uVar2 = *unaff_x20;
  lVar4 = unaff_x20[1];
  lVar3 = unaff_x20[2];
  if (lVar4 == 1) {
    uVar2 = 1;
  }
  else {
    if (lVar4 != 2) {
      __ss6HasherV8_combineyySuF(0);
      if (lVar4 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar4);
      }
      if (lVar3 != 0) {
        __ss6HasherV8_combineyys5UInt8VF(1);
        lVar4 = *(long *)(lVar3 + 0x10);
        __ss6HasherV8_combineyySuF(lVar4);
        if (lVar4 == 0) {
          return;
        }
        puVar5 = (undefined8 *)(lVar3 + 0x28);
        do {
          uVar2 = puVar5[-1];
          uVar1 = *puVar5;
          func_0x00023304(uVar2,uVar1);
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar2,uVar1);
          FUN_00023358(uVar2,uVar1);
          puVar5 = puVar5 + 2;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        return;
      }
      __ss6HasherV8_combineyys5UInt8VF(0);
      return;
    }
    uVar2 = 2;
  }
  __ss6HasherV8_combineyySuF(uVar2);
  return;
}



/* Entry: 00081cd4; end: 00081d27;  */

void FUN_00081cd4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  FUN_00081b64(auStack_78,uVar1,uVar2,uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00081d28; end: 00081d53;  */

void FUN_00081d28(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x21;
  
  FUN_000824e4();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
  }
  return;
}



/* Entry: 00081d54; end: 00081d6f;  */

void FUN_00081d54(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_000817ec(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2]);
  return;
}



/* Entry: 00081d70; end: 000821b3;  */

ulong FUN_00081d70(ulong param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  ulong *puVar20;
  ulong *puVar21;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar19 = *(long *)(param_1 + 0x10);
  if (lVar19 == *(long *)(param_2 + 0x10)) {
    if ((lVar19 != 0) && (param_1 != param_2)) {
      puVar20 = (ulong *)(param_2 + 0x28);
      puVar21 = (ulong *)(param_1 + 0x28);
      do {
        uVar6 = puVar21[-1];
        uVar10 = *puVar21;
        uVar7 = puVar20[-1];
        uVar2 = *puVar20;
        uVar12 = (uint)(uVar10 >> 0x20);
        uVar11 = uVar12 >> 0x1e;
        uVar3 = (uint)(uVar2 >> 0x20);
        uVar13 = uVar3 >> 0x1e;
        iVar18 = (int)uVar6;
        if (uVar10 >> 0x3e == 3) {
          uVar16 = 0;
          if ((((uVar6 != 0 || uVar10 != 0xc000000000000000) || uVar2 >> 0x3e < 3) || (uVar7 != 0))
             || (uVar2 != 0xc000000000000000)) goto joined_r0x00081fcc;
        }
        else {
          if (uVar12 >> 0x1e < 2) {
            if (uVar11 == 0) {
              uVar16 = uVar10 >> 0x30 & 0xff;
            }
            else {
              iVar14 = (int)(uVar6 >> 0x20);
              if (SBORROW4(iVar14,iVar18)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x8219c);
                (*pcVar4)();
              }
              uVar16 = (ulong)(iVar14 - iVar18);
            }
joined_r0x00081fcc:
            if (uVar3 >> 0x1e < 2) goto LAB_00081e6c;
LAB_00081e38:
            if (uVar13 != 2) {
              if (uVar16 == 0) goto LAB_00081dd4;
              goto LAB_0008214c;
            }
            uVar15 = *(long *)(uVar7 + 0x18) - *(long *)(uVar7 + 0x10);
            if (SBORROW8(*(long *)(uVar7 + 0x18),*(long *)(uVar7 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x82198);
              (*pcVar4)();
            }
          }
          else {
            if (uVar11 == 2) {
              uVar16 = *(long *)(uVar6 + 0x18) - *(long *)(uVar6 + 0x10);
              if (SBORROW8(*(long *)(uVar6 + 0x18),*(long *)(uVar6 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x821a0);
                (*pcVar4)();
              }
              goto joined_r0x00081fcc;
            }
            uVar16 = 0;
            if (1 < uVar13) goto LAB_00081e38;
LAB_00081e6c:
            if (uVar13 == 0) {
              uVar15 = uVar2 >> 0x30 & 0xff;
            }
            else {
              iVar14 = (int)(uVar7 >> 0x20);
              if (SBORROW4(iVar14,(int)uVar7)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x82194);
                (*pcVar4)();
              }
              uVar15 = (ulong)(iVar14 - (int)uVar7);
            }
          }
          if (uVar16 != uVar15) goto LAB_0008214c;
          if (0 < (long)uVar16) {
            if (uVar11 < 2) {
              if (uVar11 != 0) {
                lVar17 = (long)iVar18;
                uVar16 = ((long)uVar6 >> 0x20) - lVar17;
                if ((long)uVar6 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x821a4);
                  (*pcVar4)();
                }
                func_0x00023304(uVar6,uVar10);
                uVar15 = uVar7;
                func_0x00023304(uVar7,uVar2);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                if (uVar15 == 0) {
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  lVar17 = 0;
                  lVar9 = 0;
                }
                else {
                  uVar5 = uVar15;
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar17,uVar5)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x821b0);
                    (*pcVar4)();
                  }
                  lVar1 = (lVar17 - uVar5) + uVar15;
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  if ((long)uVar16 <= (long)uVar5) {
                    uVar5 = uVar16;
                  }
                  lVar17 = 0;
                  if (lVar1 != 0) {
                    lVar17 = lVar1;
                  }
                  lVar9 = 0;
                  if (lVar1 != 0) {
                    lVar9 = uVar5 + lVar1;
                  }
                }
                FUN_000382a0(abStack_80,lVar17,lVar9,uVar7,uVar2);
                FUN_00023358(uVar7,uVar2);
                FUN_00023358(uVar6);
                param_2 = uVar10;
joined_r0x00082140:
                if ((abStack_80[0] & 1) != 0) goto LAB_00081dd4;
                goto LAB_0008214c;
              }
              abStack_80[0] = (byte)uVar6;
              abStack_80[1] = (byte)(uVar6 >> 8);
              abStack_80[2] = (byte)(uVar6 >> 0x10);
              abStack_80[3] = (byte)(uVar6 >> 0x18);
              abStack_80[4] = (byte)(uVar6 >> 0x20);
              abStack_80[5] = (byte)(uVar6 >> 0x28);
              abStack_80[6] = (byte)(uVar6 >> 0x30);
              abStack_80[7] = (byte)(uVar6 >> 0x38);
              abStack_80[8] = (byte)uVar10;
              abStack_80[9] = (byte)(uVar10 >> 8);
              abStack_80[10] = (byte)(uVar10 >> 0x10);
              abStack_80[0xb] = (byte)(uVar10 >> 0x18);
              abStack_80[0xc] = (byte)(uVar10 >> 0x20);
              abStack_80[0xd] = (byte)(uVar10 >> 0x28);
              pbVar8 = abStack_80 + (uVar10 >> 0x30 & 0xff);
              func_0x00023304(uVar6,uVar10);
              func_0x00023304(uVar7,uVar2);
            }
            else {
              if (uVar11 == 2) {
                lVar17 = *(long *)(uVar6 + 0x10);
                lVar9 = *(long *)(uVar6 + 0x18);
                func_0x00023304(uVar6,uVar10);
                uVar16 = uVar7;
                func_0x00023304(uVar7,uVar2);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                uVar15 = uVar16;
                if (uVar16 != 0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar17,uVar15)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x821ac);
                    (*pcVar4)();
                  }
                  uVar16 = (lVar17 - uVar15) + uVar16;
                }
                uVar5 = lVar9 - lVar17;
                if (SBORROW8(lVar9,lVar17)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x821a8);
                  (*pcVar4)();
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if (uVar16 == 0) {
                  lVar17 = 0;
                }
                else {
                  if ((long)uVar5 <= (long)uVar15) {
                    uVar15 = uVar5;
                  }
                  lVar17 = uVar15 + uVar16;
                }
                FUN_000382a0(abStack_80,uVar16,lVar17,uVar7,uVar2);
                FUN_00023358(uVar7,uVar2);
                FUN_00023358(uVar6);
                param_2 = uVar10;
                goto joined_r0x00082140;
              }
              abStack_80[8] = 0;
              abStack_80[9] = 0;
              abStack_80[10] = 0;
              abStack_80[0xb] = 0;
              abStack_80[0xc] = 0;
              abStack_80[0xd] = 0;
              abStack_80[0] = 0;
              abStack_80[1] = 0;
              abStack_80[2] = 0;
              abStack_80[3] = 0;
              abStack_80[4] = 0;
              abStack_80[5] = 0;
              abStack_80[6] = 0;
              abStack_80[7] = 0;
              func_0x00023304(uVar6,uVar10);
              func_0x00023304(uVar7,uVar2);
              pbVar8 = abStack_80;
            }
            FUN_000382a0(&bStack_81,abStack_80,pbVar8,uVar7,uVar2);
            FUN_00023358(uVar7,uVar2);
            FUN_00023358(uVar6);
            param_2 = uVar10;
            if ((bStack_81 & 1) == 0) goto LAB_0008214c;
          }
        }
LAB_00081dd4:
        puVar20 = puVar20 + 2;
        puVar21 = puVar21 + 2;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
    uVar6 = 1;
  }
  else {
LAB_0008214c:
    uVar6 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_68) {
    ___stack_chk_fail();
    uVar7 = 0x657475706d6f63;
    if ((uVar6 == 0x657475706d6f63 && param_2 == 0xe700000000000000) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x657475706d6f63,0xe700000000000000,uVar6,param_2,0), (uVar7 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar6 = 0;
    }
    else {
      uVar7 = 0x746e65696c63;
      if (((uVar6 == 0x746e65696c63) && (param_2 == 0xe600000000000000)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x746e65696c63,0xe600000000000000,uVar6,param_2,0), (uVar7 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        uVar6 = 1;
      }
      else {
        uVar7 = 0;
        if ((uVar6 == 0x726f4661746c6564) && (param_2 == 0xea00000000006563)) {
          _swift_bridgeObjectRelease(0xea00000000006563);
          uVar6 = 2;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x726f4661746c6564,0xea00000000006563,uVar6,param_2,0);
          _swift_bridgeObjectRelease(param_2);
          uVar12 = 2;
          if ((uVar7 & 1) == 0) {
            uVar12 = 3;
          }
          uVar6 = (ulong)uVar12;
        }
      }
    }
    return uVar6;
  }
  return uVar6;
}



/* Entry: 000821b4; end: 000823a3;  */

undefined4 FUN_000821b4(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x657475706d6f63;
  if ((param_1 == 0x657475706d6f63 && param_2 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x657475706d6f63,0xe700000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0x746e65696c63;
    if (((param_1 == 0x746e65696c63) && (param_2 == -0x1a00000000000000)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x746e65696c63,0xe600000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar2 = 1;
    }
    else {
      uVar1 = 0;
      if ((param_1 == 0x726f4661746c6564) && (param_2 == -0x15ffffffffff9a9d)) {
        _swift_bridgeObjectRelease(0xea00000000006563);
        uVar2 = 2;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x726f4661746c6564,0xea00000000006563,param_1,param_2,0);
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



/* Entry: 000823a4; end: 000824e3;  */

void FUN_000823a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9358 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2e18;
  _swift_getWitnessTable(&UNK_007d2e18,&UNK_009a3438);
  puRam0000000000ae9358 = puVar1;
  return;
}



/* Entry: 000824e4; end: 000829db;  */

/* WARNING: Removing unreachable block (ram,0x0008298c) */
/* WARNING: Removing unreachable block (ram,0x00082888) */

undefined8 * FUN_000824e4(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar8;
  long unaff_x21;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long alStack_d0 [4];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 uStack_81;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_58;
  
  lVar2 = 0xae93e8;
  func_0x000115a8(0xae93e8,&UNK_007d2e68);
  alStack_d0[3] = *(long *)(lVar2 + -8);
  lStack_b0 = lVar2;
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(alStack_d0[3] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0xae93f0;
  lStack_a0 = (long)alStack_d0 - extraout_x8;
  func_0x000115a8(0xae93f0,&UNK_007d2e70);
  alStack_d0[1] = *(long *)(lVar2 + -8);
  alStack_d0[2] = lVar2;
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(alStack_d0[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = ((long)alStack_d0 - extraout_x8) - extraout_x8_00;
  lVar2 = 0xae93f8;
  lStack_a8 = lVar7;
  func_0x000115a8(0xae93f8,&UNK_007d2e78);
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)(lVar7 - extraout_x8_01);
  uVar3 = 0xae9400;
  func_0x000115a8(0xae9400,&UNK_007d2e80);
  lVar11 = *(long *)(uVar3 - 8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)puVar9 - extraout_x8_02;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  lVar7 = param_1;
  FUN_0001393c(param_1,uVar5);
  FUN_000823a4();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar12,&UNK_009a3438,&UNK_009a3438,lVar7,uVar5,uVar6);
  lVar7 = lStack_a0;
  if (unaff_x21 == 0) {
    uVar4 = uVar3;
    alStack_d0[0] = lVar11;
    __ss22KeyedDecodingContainerV7allKeysSayxGvg();
    lStack_78 = uVar4 + 0x20;
    uStack_68 = *(long *)(uVar4 + 0x10) << 1 | 1;
    uStack_70 = 0;
    uStack_80 = uVar4;
    FUN_00083c84();
    if ((((uint)uVar4 & 0xff) != 3) && (uStack_70 == uStack_68 >> 1)) {
      if ((uVar4 & 0xff) == 0) {
        uStack_58._0_1_ = 0;
        func_0x00082464();
        __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                  (puVar9,&UNK_009a34c8,&uStack_58,uVar3,&UNK_009a34c8,uVar4);
        uStack_58._0_1_ = 0;
        puVar10 = &uStack_58;
        __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar10,lVar2);
        uVar5 = 0xae9378;
        func_0x000115a8(0xae9378,&UNK_007d29e0);
        uStack_81 = 1;
        uVar6 = 0xae9410;
        FUN_0008333c(0xae9410,FUN_000833ac,PTR___sSayxGSesSeRzlMc_0099b1f8);
        __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
                  (&uStack_58,uVar5,&uStack_81,lVar2,uVar5,uVar6);
        (**(code **)(lVar8 + 8))(puVar9,lVar2);
        (**(code **)(alStack_d0[0] + 8))(lVar12,uVar3);
        _swift_unknownObjectRelease(uStack_80);
      }
      else if (((uint)uVar4 & 0xff) == 1) {
        uStack_58._0_1_ = (undefined1)uVar4;
        func_0x00082424();
        lVar2 = lStack_a8;
        __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                  (lStack_a8,&UNK_009a34e8,&uStack_58,uVar3,&UNK_009a34e8,uVar4);
        (**(code **)(alStack_d0[1] + 8))(lVar2,alStack_d0[2]);
        (**(code **)(alStack_d0[0] + 8))(lVar12,uVar3);
        _swift_unknownObjectRelease(uStack_80);
        puVar10 = (undefined8 *)0x0;
      }
      else {
        uStack_58._0_1_ = 2;
        func_0x000823e4();
        __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                  (lVar7,&UNK_009a3508,&uStack_58,uVar3,&UNK_009a3508,uVar4);
        (**(code **)(alStack_d0[3] + 8))(lVar7,lStack_b0);
        (**(code **)(alStack_d0[0] + 8))(lVar12,uVar3);
        _swift_unknownObjectRelease(uStack_80);
        puVar10 = (undefined8 *)0x0;
      }
      FUN_00011670(param_1);
      return puVar10;
    }
    lVar7 = 0;
    __ss13DecodingErrorOMa();
    puVar9 = (undefined8 *)PTR___ss13DecodingErrorOs0B0sWP_0099b4a8;
    _swift_allocError();
    lVar2 = 0xae9408;
    func_0x000115a8(0xae9408,&UNK_007d2e88);
    iVar1 = *(int *)(lVar2 + 0x30);
    *puVar9 = &UNK_009a33a8;
    __ss22KeyedDecodingContainerV10codingPathSays9CodingKey_pGvg(uVar3);
    __ss13DecodingErrorO7ContextV10codingPath16debugDescription010underlyingB0ADSays9CodingKey_pG_SSs0B0_pSgtcfC
              ((long)puVar9 + (long)iVar1);
    (**(code **)(*(long *)(lVar7 + -8) + 0x68))
              (puVar9,*(undefined4 *)
                       PTR___ss13DecodingErrorO12typeMismatchyABypXp_AB7ContextVtcABmFWC_0099b488,
               lVar7);
    _swift_willThrow();
    (**(code **)(alStack_d0[0] + 8))(lVar12,uVar3);
    _swift_unknownObjectRelease(uStack_80);
  }
  FUN_00011670(param_1);
  return puVar9;
}



/* Entry: 000829dc; end: 000829df;  */

void FUN_000829dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9390 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d29e8;
  _swift_getWitnessTable(&UNK_007d29e8,&UNK_009a33a8);
  puRam0000000000ae9390 = puVar1;
  return;
}



/* Entry: 000829e0; end: 00082a1f;  */

void FUN_000829e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9390 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d29e8;
  _swift_getWitnessTable(&UNK_007d29e8,&UNK_009a33a8);
  puRam0000000000ae9390 = puVar1;
  return;
}



/* Entry: 00082a20; end: 00082a23;  */

undefined8 * FUN_00082a20(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    param_1[2] = param_2[2];
    return param_1;
  }
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar3 = param_2[2];
  param_1[2] = uVar3;
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Entry: 00082a24; end: 00082ad7;  */

void FUN_00082a24(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    return;
  }
  _swift_bridgeObjectRelease();
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 00082ad8; end: 00082be3;  */

undefined8 * FUN_00082ad8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = param_1[1];
  uVar1 = uVar5;
  if (0xfffffffe < uVar5) {
    uVar1 = 0xffffffff;
  }
  uVar4 = param_2[1];
  if (0xfffffffe < uVar4) {
    uVar4 = 0xffffffff;
  }
  iVar2 = (int)uVar4 + -1;
  if ((int)uVar1 + -1 < 0) {
    if (iVar2 < 0) {
      *param_1 = *param_2;
      uVar3 = param_2[1];
      param_1[1] = uVar3;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRelease(uVar5);
      uVar3 = param_1[2];
      param_1[2] = param_2[2];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar3);
    }
    else {
      _swift_bridgeObjectRelease(uVar5);
      _swift_bridgeObjectRelease(param_1[2]);
      uVar6 = param_2[1];
      uVar3 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar6;
      *param_1 = uVar3;
    }
  }
  else if (iVar2 < 0) {
    *param_1 = *param_2;
    uVar3 = param_2[1];
    param_1[1] = uVar3;
    uVar6 = param_2[2];
    param_1[2] = uVar6;
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar6);
  }
  else {
    uVar6 = param_2[1];
    uVar3 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar3;
  }
  return param_1;
}



/* Entry: 00082be4; end: 00082c97;  */

undefined8 * FUN_00082be4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = param_1[1];
  uVar1 = uVar3;
  if (0xfffffffe < uVar3) {
    uVar1 = 0xffffffff;
  }
  if ((int)uVar1 + -1 < 0) {
    uVar4 = param_2[1];
    uVar1 = uVar4;
    if (0xfffffffe < uVar4) {
      uVar1 = 0xffffffff;
    }
    if ((int)uVar1 + -1 < 0) {
      *param_1 = *param_2;
      param_1[1] = uVar4;
      _swift_bridgeObjectRelease(uVar3);
      uVar2 = param_1[2];
      param_1[2] = param_2[2];
      _swift_bridgeObjectRelease(uVar2);
    }
    else {
      _swift_bridgeObjectRelease(uVar3);
      _swift_bridgeObjectRelease(param_1[2]);
      uVar2 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar2;
      param_1[2] = param_2[2];
    }
  }
  else {
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[2] = param_2[2];
  }
  return param_1;
}



/* Entry: 00082c98; end: 00083097;  */

int FUN_00082c98(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffc < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7ffffffd;
  }
  uVar3 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar2 = (int)uVar3 - 1;
  if (0x7fffffff < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < uVar2 + 1) {
    iVar1 = uVar2 - 1;
  }
  return iVar1;
}



/* Entry: 00083098; end: 000830d7;  */

void FUN_00083098(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2c48;
  _swift_getWitnessTable(&UNK_007d2c48,&UNK_009a34c8);
  puRam0000000000ae9398 = puVar1;
  return;
}



/* Entry: 000830d8; end: 000830db;  */

void FUN_000830d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae93a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2d00;
  _swift_getWitnessTable(&UNK_007d2d00,&UNK_009a3438);
  puRam0000000000ae93a0 = puVar1;
  return;
}



/* Entry: 000830dc; end: 0008311b;  */

void FUN_000830dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae93a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2d00;
  _swift_getWitnessTable(&UNK_007d2d00,&UNK_009a3438);
  puRam0000000000ae93a0 = puVar1;
  return;
}



/* Entry: 0008311c; end: 0008311f;  */

void FUN_0008311c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae93a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2be0;
  _swift_getWitnessTable(&UNK_007d2be0,&UNK_009a34c8);
  puRam0000000000ae93a8 = puVar1;
  return;
}



/* Entry: 00083120; end: 0008315f;  */

void FUN_00083120(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae93a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2be0;
  _swift_getWitnessTable(&UNK_007d2be0,&UNK_009a34c8);
  puRam0000000000ae93a8 = puVar1;
  return;
}



/* Entry: 00083160; end: 00083163;  */

void FUN_00083160(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae93b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2bb8;
  _swift_getWitnessTable(&UNK_007d2bb8,&UNK_009a34c8);
  puRam0000000000ae93b0 = puVar1;
  return;
}



/* Entry: 00083164; end: 000831a3;  */

void FUN_00083164(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae93b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2bb8;
  _swift_getWitnessTable(&UNK_007d2bb8,&UNK_009a34c8);
  puRam0000000000ae93b0 = puVar1;
  return;
}



/* Entry: 000831a4; end: 000831a7;  */

void FUN_000831a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae93b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2b90;
  _swift_getWitnessTable(&UNK_007d2b90,&UNK_009a34e8);
  puRam0000000000ae93b8 = puVar1;
  return;
}



/* Entry: 000831a8; end: 000831e7;  */

void FUN_000831a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae93b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2b90;
  _swift_getWitnessTable(&UNK_007d2b90,&UNK_009a34e8);
  puRam0000000000ae93b8 = puVar1;
  return;
}



/* Entry: 000831e8; end: 000831eb;  */

void FUN_000831e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae93c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2b68;
  _swift_getWitnessTable(&UNK_007d2b68,&UNK_009a34e8);
  puRam0000000000ae93c0 = puVar1;
  return;
}



/* Entry: 000831ec; end: 0008322b;  */

void FUN_000831ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae93c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2b68;
  _swift_getWitnessTable(&UNK_007d2b68,&UNK_009a34e8);
  puRam0000000000ae93c0 = puVar1;
  return;
}



/* Entry: 0008322c; end: 0008322f;  */

void FUN_0008322c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae93c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2b40;
  _swift_getWitnessTable(&UNK_007d2b40,&UNK_009a3508);
  puRam0000000000ae93c8 = puVar1;
  return;
}



/* Entry: 00083230; end: 0008326f;  */

void FUN_00083230(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae93c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2b40;
  _swift_getWitnessTable(&UNK_007d2b40,&UNK_009a3508);
  puRam0000000000ae93c8 = puVar1;
  return;
}



/* Entry: 00083270; end: 00083273;  */

void FUN_00083270(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae93d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2b18;
  _swift_getWitnessTable(&UNK_007d2b18,&UNK_009a3508);
  puRam0000000000ae93d0 = puVar1;
  return;
}



/* Entry: 00083274; end: 000832b3;  */

void FUN_00083274(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae93d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2b18;
  _swift_getWitnessTable(&UNK_007d2b18,&UNK_009a3508);
  puRam0000000000ae93d0 = puVar1;
  return;
}



/* Entry: 000832b4; end: 000832b7;  */

void FUN_000832b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae93d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2c98;
  _swift_getWitnessTable(&UNK_007d2c98,&UNK_009a3438);
  puRam0000000000ae93d8 = puVar1;
  return;
}



/* Entry: 000832b8; end: 000832f7;  */

void FUN_000832b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae93d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2c98;
  _swift_getWitnessTable(&UNK_007d2c98,&UNK_009a3438);
  puRam0000000000ae93d8 = puVar1;
  return;
}



/* Entry: 000832f8; end: 000832fb;  */

void FUN_000832f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae93e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2c70;
  _swift_getWitnessTable(&UNK_007d2c70,&UNK_009a3438);
  puRam0000000000ae93e0 = puVar1;
  return;
}



/* Entry: 000832fc; end: 0008333b;  */

void FUN_000832fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae93e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2c70;
  _swift_getWitnessTable(&UNK_007d2c70,&UNK_009a3438);
  puRam0000000000ae93e0 = puVar1;
  return;
}



/* Entry: 0008333c; end: 000833ab;  */

void FUN_0008333c(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    uVar1 = 0xae9378;
    FUN_00016c74(0xae9378,&UNK_007d29e0);
    uVar2 = uVar1;
    (*param_2)();
    uStack_38 = uVar2;
    _swift_getWitnessTable(param_3,uVar1,&uStack_38);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 000833ac; end: 000833eb;  */

void FUN_000833ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9418 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s10Foundation4DataVSeAAMc_0099c3d8;
  _swift_getWitnessTable
            (PTR___s10Foundation4DataVSeAAMc_0099c3d8,PTR___s10Foundation4DataVN_0099c3c0);
  puRam0000000000ae9418 = puVar1;
  return;
}



/* Entry: 000833ec; end: 00083447;  */

undefined1 FUN_000833ec(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 00083448; end: 0008351b;  */

void FUN_00083448(void)

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



/* Entry: 0008351c; end: 00083527;  */

void FUN_0008351c(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 00083528; end: 00083567;  */

void FUN_00083528(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xae9460;
  func_0x000115a8(0xae9460,&UNK_007d2e90);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 00083568; end: 000835c3;  */

void FUN_00083568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_0008381c();
  __sSYsSeRzSu8RawValueSYRtzrlE4fromxs7Decoder_p_tKcfC(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 000835c4; end: 0008360f;  */

void FUN_000835c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_0008381c();
  __sSYsSERzSu8RawValueSYRtzrlE6encode2toys7Encoder_p_tKF(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 00083610; end: 00083623;  */

ulong FUN_00083610(ulong param_1)

{
  if (0x16 < param_1) {
    param_1 = 0x17;
  }
  return param_1;
}



/* Entry: 00083624; end: 00083663;  */

void FUN_00083624(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9468 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2e98;
  _swift_getWitnessTable(&UNK_007d2e98,&UNK_009a3648);
  puRam0000000000ae9468 = puVar1;
  return;
}



/* Entry: 00083664; end: 00083667;  */

void FUN_00083664(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000ae9470 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae9478;
  FUN_00016c74(0xae9478,&UNK_007d2f38);
  puVar2 = PTR___sSayxGSlsMc_0099b208;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_0099b208,uVar1);
  puRam0000000000ae9470 = puVar2;
  return;
}



/* Entry: 00083668; end: 000836b7;  */

void FUN_00083668(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000ae9470 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae9478;
  FUN_00016c74(0xae9478,&UNK_007d2f38);
  puVar2 = PTR___sSayxGSlsMc_0099b208;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_0099b208,uVar1);
  puRam0000000000ae9470 = puVar2;
  return;
}



/* Entry: 000836b8; end: 0008381b;  */

int FUN_000836b8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xe9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x16) {
      iVar2 = 4;
    }
    if (param_2 + 0x16 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_00083734;
        goto LAB_00083718;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_00083718:
      return ((uint)*param_1 | uVar1 << 8) - 0x16;
    }
  }
LAB_00083734:
  iVar2 = *param_1 - 0x17;
  if (*param_1 < 0x17) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 0008381c; end: 0008385b;  */

void FUN_0008381c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9480 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2f00;
  _swift_getWitnessTable(&UNK_007d2f00,&UNK_009a3648);
  puRam0000000000ae9480 = puVar1;
  return;
}



/* Entry: 0008385c; end: 0008386f;  */

bool FUN_0008385c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 00083870; end: 00083943;  */

void FUN_00083870(void)

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



/* Entry: 00083944; end: 0008394f;  */

void FUN_00083944(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 00083950; end: 0008398f;  */

void FUN_00083950(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xae94b8;
  func_0x000115a8(0xae94b8,&UNK_007d2ff0);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 00083990; end: 000839eb;  */

void FUN_00083990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_00083c44();
  __sSYsSeRzSi8RawValueSYRtzrlE4fromxs7Decoder_p_tKcfC(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 000839ec; end: 00083a37;  */

void FUN_000839ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_00083c44();
  __sSYsSERzSi8RawValueSYRtzrlE6encode2toys7Encoder_p_tKF(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 00083a38; end: 00083a4b;  */

ulong FUN_00083a38(ulong param_1)

{
  if (6 < param_1) {
    param_1 = 7;
  }
  return param_1;
}



/* Entry: 00083a4c; end: 00083a8b;  */

void FUN_00083a4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae94c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2ff8;
  _swift_getWitnessTable(&UNK_007d2ff8,&UNK_009a3770);
  puRam0000000000ae94c0 = puVar1;
  return;
}



/* Entry: 00083a8c; end: 00083a8f;  */

void FUN_00083a8c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000ae94c8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae94d0;
  FUN_00016c74(0xae94d0,&UNK_007d3098);
  puVar2 = PTR___sSayxGSlsMc_0099b208;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_0099b208,uVar1);
  puRam0000000000ae94c8 = puVar2;
  return;
}



/* Entry: 00083a90; end: 00083adf;  */

void FUN_00083a90(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000ae94c8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae94d0;
  FUN_00016c74(0xae94d0,&UNK_007d3098);
  puVar2 = PTR___sSayxGSlsMc_0099b208;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_0099b208,uVar1);
  puRam0000000000ae94c8 = puVar2;
  return;
}



/* Entry: 00083ae0; end: 00083c43;  */

int FUN_00083ae0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_00083b5c;
        goto LAB_00083b40;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_00083b40:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_00083b5c:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 00083c44; end: 00083c83;  */

void FUN_00083c44(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae94d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d3060;
  _swift_getWitnessTable(&UNK_007d3060,&UNK_009a3770);
  puRam0000000000ae94d8 = puVar1;
  return;
}



/* Entry: 00083c84; end: 00083cc3;  */

undefined1 FUN_00083c84(void)

{
  ulong uVar1;
  undefined1 uVar2;
  code *pcVar3;
  ulong uVar4;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  uVar4 = *(ulong *)(unaff_x20 + 0x18) >> 1;
  if (uVar1 == uVar4) {
    return 3;
  }
  if ((long)uVar1 < (long)uVar4) {
    uVar2 = *(undefined1 *)(*(long *)(unaff_x20 + 8) + uVar1);
    *(ulong *)(unaff_x20 + 0x10) = uVar1 + 1;
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x83cb8);
  (*pcVar3)();
}



/* Entry: 00083cc4; end: 00083d13;  */

void FUN_00083cc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000847e0();
                    /* WARNING: Could not recover jumptable at 0x00779130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_0099b8c0)(param_1,uVar1);
  return;
}



/* Entry: 00083d14; end: 00083d2b;  */

bool FUN_00083d14(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 00083d2c; end: 00083d53;  */

void FUN_00083d2c(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  __ss6HasherV8_combineyySuF(param_1,*unaff_x20);
  return;
}



/* Entry: 00083d54; end: 00083d8f;  */

void FUN_00083d54(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00083d90; end: 00083e6f;  */

void FUN_00083d90(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x6c7275 || param_3 != -0x1d00000000000000) {
    uVar1 = 0x6c7275;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x6c7275,0xe300000000000000,param_2,param_3,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
      if ((param_2 == 0x656a624f746c6f62) && (param_3 == -0x15ffffffffff8b9d)) {
        _swift_bridgeObjectRelease(0xea00000000007463);
        uVar2 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x656a624f746c6f62,0xea00000000007463,param_2,param_3,0);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if ((uVar1 & 1) == 0) {
          uVar2 = 2;
        }
      }
      goto LAB_00083df0;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_00083df0:
  *param_1 = uVar2;
  return;
}


