/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100031ab0; end: 100031b47;  */

void FUN_100031ab0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c55d8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c55e0;
  func_0x000100010120(0x1000c55e0,&UNK_10008aaf0);
  uVar2 = 0x1000c55a8;
  func_0x000100031a60(0x1000c55a8,0x1000c5598,&UNK_10008aac0,
                      PTR___s7SwiftUI4LinkVyxGAA4ViewAAMc_1000b06b8);
  uVar3 = uVar2;
  func_0x000100031950();
  puVar4 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0,uVar1,
             &uStack_30);
  puRam00000001000c55d8 = puVar4;
  return;
}



/* Entry: 100031b48; end: 100031b77;  */

undefined1  [16] FUN_100031b48(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x70756f7267;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x72657375;
  }
  uVar2 = 0xe500000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe400000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 100031b78; end: 100031c4b;  */

void FUN_100031b78(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x72657375 || param_3 != -0x1c00000000000000) {
    uVar1 = 0x72657375;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x72657375,0xe400000000000000,param_2,param_3,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0x70756f7267;
      if ((param_2 == 0x70756f7267) && (param_3 == -0x1b00000000000000)) {
        _swift_bridgeObjectRelease(0xe500000000000000);
        uVar2 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x70756f7267,0xe500000000000000,param_2,param_3,0);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if ((uVar1 & 1) == 0) {
          uVar2 = 2;
        }
      }
      goto LAB_100031bd8;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_100031bd8:
  *param_1 = uVar2;
  return;
}



/* Entry: 100031c4c; end: 100031c63;  */

undefined1  [16] FUN_100031c4c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 100031c64; end: 100031cb3;  */

void FUN_100031c64(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100032c28();
                    /* WARNING: Could not recover jumptable at 0x000100085c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_1000b14b8)(param_1,uVar1);
  return;
}



/* Entry: 100031cb4; end: 100031cd3;  */

undefined8 FUN_100031cb4(void)

{
  return 1;
}



/* Entry: 100031cd4; end: 100031d57;  */

void FUN_100031cd4(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0x67;
  if (param_2 == 0x644970756f7267 && param_3 == -0x1900000000000000) {
    _swift_bridgeObjectRelease(param_3);
    bVar1 = 0;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x644970756f7267,0xe700000000000000,param_2,param_3,0);
    _swift_bridgeObjectRelease(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 100031d58; end: 100031d63;  */

undefined1  [16] FUN_100031d58(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 100031d64; end: 100031db3;  */

void FUN_100031d64(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000100032c68();
                    /* WARNING: Could not recover jumptable at 0x000100085c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_1000b14b8)(param_1,uVar1);
  return;
}



/* Entry: 100031db4; end: 100031dbf;  */

undefined8 FUN_100031db4(void)

{
  return 1;
}



/* Entry: 100031dc0; end: 100031de3;  */

void FUN_100031dc0(void)

{
  __ss6HasherV8_combineyySuF(0);
  return;
}



/* Entry: 100031de4; end: 100031dfb;  */

void FUN_100031de4(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100031dfc; end: 100031e7b;  */

void FUN_100031dfc(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0x75;
  if (param_2 == 0x644972657375 && param_3 == -0x1a00000000000000) {
    _swift_bridgeObjectRelease(param_3);
    bVar1 = 0;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x644972657375,0xe600000000000000,param_2,param_3,0);
    _swift_bridgeObjectRelease(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 100031e7c; end: 100031e93;  */

undefined1  [16] FUN_100031e7c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 100031e94; end: 100031ee3;  */

void FUN_100031e94(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000100032ca8();
                    /* WARNING: Could not recover jumptable at 0x000100085c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_1000b14b8)(param_1,uVar1);
  return;
}



/* Entry: 100031ee4; end: 10003212b;  */

void FUN_100031ee4(long param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x1000c55e8;
  uStack_78 = param_2;
  uStack_70 = param_3;
  func_0x0001000100d0(0x1000c55e8,&UNK_10008ab00);
  lStack_88 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lStack_88 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar9 = (long)&lStack_90 - extraout_x8;
  lVar4 = 0x1000c55f0;
  func_0x0001000100d0(0x1000c55f0,&UNK_10008ab08);
  lStack_90 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lStack_90 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar7 = lVar9 - extraout_x8_00;
  lVar5 = 0x1000c55f8;
  func_0x0001000100d0(0x1000c55f8,&UNK_10008ab10);
  lStack_80 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lStack_80 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar8 = lVar7 - extraout_x8_01;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100013de4(param_1,uVar1);
  FUN_100032c28();
  puVar6 = &UNK_1000b3c60;
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (lVar8,&UNK_1000b3c60,&UNK_1000b3c60,param_1,uVar1,uVar2);
  if (param_4 == '\x01') {
    uStack_51 = 1;
    func_0x000100032c68();
    __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
              (lVar9,&UNK_1000b3d80,&uStack_51,lVar5,&UNK_1000b3d80,puVar6);
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uStack_78,uStack_70);
    (**(code **)(lStack_88 + 8))(lVar9,lVar3);
    (**(code **)(lStack_80 + 8))(lVar8,lVar5);
  }
  else {
    uStack_52 = 0;
    func_0x000100032ca8();
    __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
              (lVar7,&UNK_1000b3cf0,&uStack_52,lVar5,&UNK_1000b3cf0,puVar6);
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uStack_78,uStack_70);
    (**(code **)(lStack_90 + 8))(lVar7,lVar4);
    (**(code **)(lStack_80 + 8))(lVar8,lVar5);
  }
  return;
}



/* Entry: 10003212c; end: 100032157;  */

void FUN_10003212c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long unaff_x21;
  
  FUN_100032ce8();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    *(undefined1 *)(param_1 + 2) = param_4;
  }
  return;
}



/* Entry: 100032158; end: 100032173;  */

void FUN_100032158(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100031ee4(param_1,*unaff_x20,unaff_x20[1],*(undefined1 *)(unaff_x20 + 2));
  return;
}



/* Entry: 100032174; end: 10003227f;  */

void FUN_100032174(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  cVar3 = *(char *)(unaff_x20 + 2);
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __ss6HasherV8_combineyySuF(cVar3 == '\x01');
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100032280; end: 1000322b3;  */

long FUN_100032280(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if ((char)param_1[2] == '\x01') {
    if ((char)param_2[2] != '\x01') {
      return 0;
    }
  }
  else if ((char)param_2[2] == '\x01') {
    return 0;
  }
  if ((lVar1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000100085bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_1000b1418
  )(lVar1,param_1[1],*param_2,param_2[1],0);
  return lVar1;
}



/* Entry: 1000322b4; end: 10003231f;  */

void FUN_1000322b4(void)

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



/* Entry: 100032320; end: 100032323;  */

void FUN_100032320(void)

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



/* Entry: 100032324; end: 100032363;  */

void FUN_100032324(void)

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



/* Entry: 100032364; end: 1000323d7;  */

undefined1  [16] FUN_100032364(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  uVar1 = 0xea00000000007265;
  uVar3 = 0x696669746e656469;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0xeb00000000656d61;
    uVar3 = 0x4e79616c70736964;
  }
  uVar2 = 0xee0064496e6f6974;
  uVar4 = 0x61737265766e6f63;
  if (*unaff_x20 != '\0') {
    uVar2 = uVar1;
    uVar4 = uVar3;
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Entry: 1000323d8; end: 1000323fb;  */

void FUN_1000323d8(undefined1 *param_1,undefined1 param_2)

{
  FUN_100033214();
  *param_1 = param_2;
  return;
}



/* Entry: 1000323fc; end: 100032413;  */

undefined1  [16] FUN_1000323fc(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 100032414; end: 100032463;  */

void FUN_100032414(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100033194();
                    /* WARNING: Could not recover jumptable at 0x000100085c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_1000b14b8)(param_1,uVar1);
  return;
}



/* Entry: 100032464; end: 1000325c3;  */

void FUN_100032464(long param_1)

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
  undefined1 uStack_60;
  
  lVar2 = 0x1000c5618;
  func_0x0001000100d0(0x1000c5618,&UNK_10008ab18);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100013de4(param_1,uVar3);
  FUN_100033194();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (auStack_80 + -extraout_x8,&UNK_1000b3bd0,&UNK_1000b3bd0,param_1,uVar3,uVar1);
  uVar3 = *unaff_x20;
  uStack_70 = uStack_70 & 0xffffffffffffff00;
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar3,unaff_x20[1],&uStack_70,lVar2);
  if (unaff_x21 == 0) {
    uStack_68 = unaff_x20[3];
    uStack_70 = unaff_x20[2];
    uStack_60 = *(undefined1 *)(unaff_x20 + 4);
    uStack_71 = 1;
    func_0x0001000331d4();
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&uStack_70,&uStack_71,lVar2,&UNK_1000b39a8,uVar3);
    uStack_70 = CONCAT71(uStack_70._1_7_,2);
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(unaff_x20[5],unaff_x20[6],&uStack_70,lVar2)
    ;
  }
  (**(code **)(lVar4 + 8))(auStack_80 + -extraout_x8,lVar2);
  return;
}



/* Entry: 1000325c4; end: 10003260f;  */

void FUN_1000325c4(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10003333c(&uStack_58);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_50;
    *param_1 = uStack_58;
    param_1[3] = uStack_40;
    param_1[2] = uStack_48;
    param_1[5] = uStack_30;
    param_1[4] = uStack_38;
    param_1[6] = uStack_28;
  }
  return;
}



/* Entry: 100032610; end: 100032623;  */

void FUN_100032610(void)

{
  FUN_100032464();
  return;
}



/* Entry: 100032624; end: 1000327cb;  */

void FUN_100032624(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  
  uVar1 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  cVar7 = *(char *)(unaff_x20 + 4);
  uVar3 = unaff_x20[5];
  uVar6 = unaff_x20[6];
  __ss6HasherV5_seedABSi_tcfC(auStack_98,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_98,uVar1,uVar4);
  __ss6HasherV8_combineyySuF(cVar7 == '\x01');
  __sSS4hash4intoys6HasherVz_tF(auStack_98,uVar2,uVar5);
  __sSS4hash4intoys6HasherVz_tF(auStack_98,uVar3,uVar6);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1000327cc; end: 100032823;  */

uint FUN_1000327cc(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1000330d8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 100032824; end: 10003282b;  */

undefined8 FUN_100032824(void)

{
  return 1;
}



/* Entry: 10003282c; end: 1000328a7;  */

void FUN_10003282c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1000328a8; end: 1000328cb;  */

undefined1  [16] FUN_1000328a8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xed00006449726573;
  auVar1._0_8_ = 0x55746e6572727563;
  return auVar1;
}



/* Entry: 1000328cc; end: 100032957;  */

void FUN_1000328cc(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 99;
  if (param_2 == 0x55746e6572727563 && param_3 == -0x12ffff9bb68d9a8d) {
    _swift_bridgeObjectRelease(param_3);
    bVar1 = 0;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 100032958; end: 100032963;  */

undefined1  [16] FUN_100032958(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 100032964; end: 1000329b3;  */

void FUN_100032964(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100033558();
                    /* WARNING: Could not recover jumptable at 0x000100085c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_1000b14b8)(param_1,uVar1);
  return;
}



/* Entry: 1000329b4; end: 100032adb;  */

/* WARNING: Removing unreachable block (ram,0x000100032a78) */

void FUN_1000329b4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  
  lVar3 = 0x1000c5640;
  func_0x0001000100d0(0x1000c5640,&UNK_10008ab28);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x000100013de4(param_2,uVar1);
  FUN_100033558();
  puVar5 = &UNK_1000b3b40;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (&stack0xffffffffffffffa0 + -extraout_x8,&UNK_1000b3b40,&UNK_1000b3b40,lVar4,uVar1,uVar2
            );
  if (unaff_x21 == 0) {
    lVar4 = lVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar3);
    func_0x000100012b98(param_2);
    *param_1 = puVar5;
    param_1[1] = lVar4;
  }
  else {
    FUN_100012b94(param_2);
  }
  return;
}



/* Entry: 100032adc; end: 100032bcb;  */

void FUN_100032adc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar6;
  
  lVar5 = 0x1000c5630;
  func_0x0001000100d0(0x1000c5630,&UNK_10008ab20);
  lVar6 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100013de4(param_1,uVar2);
  FUN_100033558();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (&stack0xffffffffffffffa0 + -extraout_x8,&UNK_1000b3b40,&UNK_1000b3b40,param_1,uVar2,
             uVar4);
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar1,uVar3);
  (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar5);
  return;
}



/* Entry: 100032bcc; end: 100032c27;  */

long FUN_100032bcc(long param_1,long param_2,char param_3,long param_4,long param_5,char param_6)

{
  if (param_3 == '\x01') {
    if (param_6 != '\x01') {
      return 0;
    }
  }
  else if (param_6 == '\x01') {
    return 0;
  }
  if ((param_1 == param_4) && (param_2 == param_5)) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000100085bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_1000b1418
  )(param_1,param_2,param_4,param_5,0);
  return param_1;
}



/* Entry: 100032c28; end: 100032ce7;  */

void FUN_100032c28(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5600 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b29c;
  _swift_getWitnessTable(&UNK_10008b29c,&UNK_1000b3c60);
  puRam00000001000c5600 = puVar1;
  return;
}



/* Entry: 100032ce8; end: 1000330d7;  */

/* WARNING: Removing unreachable block (ram,0x000100033070) */
/* WARNING: Removing unreachable block (ram,0x000100033084) */

undefined * FUN_100032ce8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar12;
  long unaff_x21;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 uStack_51;
  
  lVar5 = 0x1000c5708;
  func_0x0001000100d0(0x1000c5708,&UNK_10008b2f8);
  lStack_a8 = *(long *)(lVar5 + -8);
  lStack_98 = lVar5;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lStack_a8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = 0x1000c5710;
  lStack_a0 = (long)&puStack_b0 - extraout_x8;
  func_0x0001000100d0(0x1000c5710,&UNK_10008b300);
  puVar13 = *(undefined **)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(puVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = ((long)&puStack_b0 - extraout_x8) - extraout_x8_00;
  lVar6 = 0x1000c5718;
  func_0x0001000100d0(0x1000c5718,&UNK_10008b308);
  lVar15 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar14 - extraout_x8_01;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar7 = param_1;
  func_0x000100013de4(param_1,uVar1);
  FUN_100032c28();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar16,&UNK_1000b3c60,&UNK_1000b3c60,lVar7,uVar1,uVar2);
  lVar4 = lStack_98;
  lVar7 = lStack_a0;
  if (unaff_x21 == 0) {
    lVar8 = lVar6;
    puStack_b0 = puVar13;
    __ss22KeyedDecodingContainerV7allKeysSayxGvg();
    uVar12 = *(ulong *)(lVar8 + 0x10);
    lVar9 = lVar8;
    func_0x000100034584();
    if ((((uint)lVar9 & 0xff) != 2) && ((uVar12 & 0x7fffffffffffffff) == 0)) {
      uStack_51 = (undefined1)lVar9;
      if (((uint)lVar9 & 0xff) == 1) {
        func_0x000100032c68();
        puVar13 = &UNK_1000b3d80;
        __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                  (lVar7,&UNK_1000b3d80,&uStack_51,lVar6,&UNK_1000b3d80,lVar9);
        __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
        (**(code **)(lStack_a8 + 8))(lVar7,lVar4);
        (**(code **)(lVar15 + 8))(lVar16,lVar6);
        _swift_unknownObjectRelease(lVar8);
      }
      else {
        func_0x000100032ca8();
        puVar13 = &UNK_1000b3cf0;
        __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                  (lVar14,&UNK_1000b3cf0,&uStack_51,lVar6,&UNK_1000b3cf0,lVar9);
        __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
        (**(code **)(puStack_b0 + 8))(lVar14,lVar5);
        (**(code **)(lVar15 + 8))(lVar16,lVar6);
        _swift_unknownObjectRelease(lVar8);
      }
      FUN_100012b94(param_1);
      return puVar13;
    }
    puVar10 = (undefined *)0x0;
    __ss13DecodingErrorOMa();
    puVar13 = puVar10;
    puVar11 = (undefined8 *)PTR___ss13DecodingErrorOs0B0sWP_1000b12f0;
    _swift_allocError();
    lVar5 = 0x1000c5720;
    func_0x0001000100d0(0x1000c5720,&UNK_10008b310);
    iVar3 = *(int *)(lVar5 + 0x30);
    *puVar11 = &UNK_1000b39a8;
    __ss22KeyedDecodingContainerV10codingPathSays9CodingKey_pGvg(lVar6);
    __ss13DecodingErrorO7ContextV10codingPath16debugDescription010underlyingB0ADSays9CodingKey_pG_SSs0B0_pSgtcfC
              ((long)puVar11 + (long)iVar3);
    (**(code **)(*(long *)(puVar10 + -8) + 0x68))
              (puVar11,*(undefined4 *)
                        PTR___ss13DecodingErrorO12typeMismatchyABypXp_AB7ContextVtcABmFWC_1000b12d0,
               puVar10);
    _swift_willThrow();
    (**(code **)(lVar15 + 8))(lVar16,lVar6);
    _swift_unknownObjectRelease(lVar8);
  }
  func_0x000100012b98(param_1);
  return puVar13;
}



/* Entry: 1000330d8; end: 100033193;  */

ulong FUN_1000330d8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar1 & 1) != 0)) {
    uVar1 = param_1[2];
    if ((char)param_1[4] == '\x01') {
      if ((char)param_2[4] != '\x01') {
        return 0;
      }
    }
    else if ((char)param_2[4] == '\x01') {
      return 0;
    }
    if ((uVar1 == param_2[2] && param_1[3] == param_2[3]) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar1 & 1) != 0)) {
      uVar1 = param_1[5];
      if ((uVar1 == param_2[5]) && (param_1[6] == param_2[6])) {
        return 1;
      }
                    /* WARNING: Could not recover jumptable at 0x000100085bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_1000b1418
      )();
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 100033194; end: 100033213;  */

void FUN_100033194(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5620 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b1ac;
  _swift_getWitnessTable(&UNK_10008b1ac,&UNK_1000b3bd0);
  puRam00000001000c5620 = puVar1;
  return;
}



/* Entry: 100033214; end: 10003333b;  */

undefined4 FUN_100033214(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x61737265766e6f63;
  if ((param_1 == 0x61737265766e6f63 && param_2 == -0x11ff9bb69190968c) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x61737265766e6f63,0xee0064496e6f6974,param_1,param_2,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0x696669746e656469;
    if (((param_1 == 0x696669746e656469) && (param_2 == -0x15ffffffffff8d9b)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x696669746e656469,0xea00000000007265,param_1,param_2,0), (uVar1 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar2 = 1;
    }
    else {
      uVar1 = 0;
      if ((param_1 == 0x4e79616c70736964) && (param_2 == -0x14ffffffff9a929f)) {
        _swift_bridgeObjectRelease(0xeb00000000656d61);
        uVar2 = 2;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x4e79616c70736964,0xeb00000000656d61,param_1,param_2,0);
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



/* Entry: 10003333c; end: 100033557;  */

/* WARNING: Removing unreachable block (ram,0x0001000334d8) */
/* WARNING: Removing unreachable block (ram,0x00010003348c) */
/* WARNING: Removing unreachable block (ram,0x0001000334f0) */
/* WARNING: Removing unreachable block (ram,0x000100033504) */
/* WARNING: Removing unreachable block (ram,0x00010003340c) */

void FUN_10003333c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_51;
  
  lVar3 = 0x1000c56f8;
  func_0x0001000100d0(0x1000c56f8,&UNK_10008b2f0);
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x000100013de4(param_2,uVar1);
  FUN_100033194();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&uStack_90 - extraout_x8,&UNK_1000b3bd0,&UNK_1000b3bd0,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_78 = 0;
    puVar5 = &uStack_78;
    lVar4 = lVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    uStack_51 = 1;
    puStack_80 = puVar5;
    func_0x0001000344bc();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&uStack_78,&UNK_1000b39a8,&uStack_51,lVar3,&UNK_1000b39a8,puVar5);
    uStack_90 = CONCAT71(uStack_77,uStack_78);
    uStack_88 = uStack_70;
    uStack_78 = 2;
    puVar5 = &uStack_78;
    lVar6 = lVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    (**(code **)(lVar7 + 8))((long)&uStack_90 - extraout_x8,lVar3);
    func_0x000100012b98(param_2);
    *param_1 = puStack_80;
    param_1[1] = lVar4;
    param_1[2] = uStack_90;
    param_1[3] = uStack_88;
    *(undefined1 *)(param_1 + 4) = uStack_68;
    param_1[5] = puVar5;
    param_1[6] = lVar6;
  }
  else {
    FUN_100012b94(param_2);
  }
  return;
}



/* Entry: 100033558; end: 100033597;  */

void FUN_100033558(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5638 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b15c;
  _swift_getWitnessTable(&UNK_10008b15c,&UNK_1000b3b40);
  puRam00000001000c5638 = puVar1;
  return;
}



/* Entry: 100033598; end: 10003359b;  */

void FUN_100033598(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5648 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008abc0;
  _swift_getWitnessTable(&UNK_10008abc0,&UNK_1000b39a8);
  puRam00000001000c5648 = puVar1;
  return;
}



/* Entry: 10003359c; end: 1000335db;  */

void FUN_10003359c(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5648 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008abc0;
  _swift_getWitnessTable(&UNK_10008abc0,&UNK_1000b39a8);
  puRam00000001000c5648 = puVar1;
  return;
}



/* Entry: 1000335dc; end: 1000335df;  */

void FUN_1000335dc(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5650 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008ac78;
  _swift_getWitnessTable(&UNK_10008ac78,&UNK_1000b3aa0);
  puRam00000001000c5650 = puVar1;
  return;
}



/* Entry: 1000335e0; end: 10003361f;  */

void FUN_1000335e0(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5650 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008ac78;
  _swift_getWitnessTable(&UNK_10008ac78,&UNK_1000b3aa0);
  puRam00000001000c5650 = puVar1;
  return;
}



/* Entry: 100033620; end: 100033623;  */

void FUN_100033620(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5658 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008acf0;
  _swift_getWitnessTable(&UNK_10008acf0,&UNK_1000b3a20);
  puRam00000001000c5658 = puVar1;
  return;
}



/* Entry: 100033624; end: 100033663;  */

void FUN_100033624(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5658 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008acf0;
  _swift_getWitnessTable(&UNK_10008acf0,&UNK_1000b3a20);
  puRam00000001000c5658 = puVar1;
  return;
}



/* Entry: 100033664; end: 100033667;  */

void FUN_100033664(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5660 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008ad18;
  _swift_getWitnessTable(&UNK_10008ad18,&UNK_1000b3a20);
  puRam00000001000c5660 = puVar1;
  return;
}



/* Entry: 100033668; end: 1000336a7;  */

void FUN_100033668(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5660 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008ad18;
  _swift_getWitnessTable(&UNK_10008ad18,&UNK_1000b3a20);
  puRam00000001000c5660 = puVar1;
  return;
}



/* Entry: 1000336a8; end: 1000336ab;  */

void FUN_1000336a8(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5668 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008abe8;
  _swift_getWitnessTable(&UNK_10008abe8,&UNK_1000b3aa0);
  puRam00000001000c5668 = puVar1;
  return;
}



/* Entry: 1000336ac; end: 1000336eb;  */

void FUN_1000336ac(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5668 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008abe8;
  _swift_getWitnessTable(&UNK_10008abe8,&UNK_1000b3aa0);
  puRam00000001000c5668 = puVar1;
  return;
}



/* Entry: 1000336ec; end: 1000336ef;  */

void FUN_1000336ec(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5670 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008ac10;
  _swift_getWitnessTable(&UNK_10008ac10,&UNK_1000b3aa0);
  puRam00000001000c5670 = puVar1;
  return;
}



/* Entry: 1000336f0; end: 10003372f;  */

void FUN_1000336f0(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5670 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008ac10;
  _swift_getWitnessTable(&UNK_10008ac10,&UNK_1000b3aa0);
  puRam00000001000c5670 = puVar1;
  return;
}



/* Entry: 100033730; end: 100033733;  */

void FUN_100033730(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5678 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008ac38;
  _swift_getWitnessTable(&UNK_10008ac38,&UNK_1000b3aa0);
  puRam00000001000c5678 = puVar1;
  return;
}



/* Entry: 100033734; end: 100033773;  */

void FUN_100033734(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5678 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008ac38;
  _swift_getWitnessTable(&UNK_10008ac38,&UNK_1000b3aa0);
  puRam00000001000c5678 = puVar1;
  return;
}



/* Entry: 100033774; end: 100033787;  */

undefined8 * FUN_100033774(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000100027838(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 100033788; end: 100033823;  */

undefined8 * FUN_100033788(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000100027838(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 100033824; end: 100033837;  */

void FUN_100033824(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 100033838; end: 10003387b;  */

undefined8 * FUN_100033838(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x000100027878(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 10003387c; end: 10003392b;  */

int FUN_10003387c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10003392c; end: 100033957;  */

undefined8 * FUN_10003392c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 100033958; end: 10003395f;  */

void FUN_100033958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_1000b1550)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 100033960; end: 1000339cf;  */

undefined8 * FUN_100033960(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 1000339d0; end: 100033a63;  */

int FUN_1000339d0(int *param_1,int param_2)

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



/* Entry: 100033a64; end: 100033ac3;  */

long FUN_100033a64(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100033ac4; end: 100033bcf;  */

undefined8 * FUN_100033ac4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  uVar3 = *(undefined1 *)(param_2 + 4);
  _swift_bridgeObjectRetain();
  func_0x000100027838(uVar1,uVar2,uVar3);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = uVar3;
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 100033bd0; end: 100033c2f;  */

undefined8 * FUN_100033bd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  uVar4 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar4);
  uVar2 = *(undefined1 *)(param_2 + 4);
  uVar1 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar5;
  uVar3 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar2;
  func_0x000100027878(uVar1,uVar4,uVar3);
  uVar1 = param_2[6];
  uVar4 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  _swift_bridgeObjectRelease(uVar4);
  return param_1;
}



/* Entry: 100033c30; end: 1000340c3;  */

int FUN_100033c30(int *param_1,int param_2)

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



/* Entry: 1000340c4; end: 100034103;  */

void FUN_1000340c4(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5680 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008ae54;
  _swift_getWitnessTable(&UNK_10008ae54,&UNK_1000b3d80);
  puRam00000001000c5680 = puVar1;
  return;
}



/* Entry: 100034104; end: 100034107;  */

void FUN_100034104(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5688 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008af0c;
  _swift_getWitnessTable(&UNK_10008af0c,&UNK_1000b3cf0);
  puRam00000001000c5688 = puVar1;
  return;
}



/* Entry: 100034108; end: 100034147;  */

void FUN_100034108(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5688 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008af0c;
  _swift_getWitnessTable(&UNK_10008af0c,&UNK_1000b3cf0);
  puRam00000001000c5688 = puVar1;
  return;
}



/* Entry: 100034148; end: 10003414b;  */

void FUN_100034148(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5690 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008afc4;
  _swift_getWitnessTable(&UNK_10008afc4,&UNK_1000b3c60);
  puRam00000001000c5690 = puVar1;
  return;
}



/* Entry: 10003414c; end: 10003418b;  */

void FUN_10003414c(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5690 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008afc4;
  _swift_getWitnessTable(&UNK_10008afc4,&UNK_1000b3c60);
  puRam00000001000c5690 = puVar1;
  return;
}



/* Entry: 10003418c; end: 10003418f;  */

void FUN_10003418c(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5698 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b07c;
  _swift_getWitnessTable(&UNK_10008b07c,&UNK_1000b3bd0);
  puRam00000001000c5698 = puVar1;
  return;
}



/* Entry: 100034190; end: 1000341cf;  */

void FUN_100034190(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5698 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b07c;
  _swift_getWitnessTable(&UNK_10008b07c,&UNK_1000b3bd0);
  puRam00000001000c5698 = puVar1;
  return;
}



/* Entry: 1000341d0; end: 1000341d3;  */

void FUN_1000341d0(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c56a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b134;
  _swift_getWitnessTable(&UNK_10008b134,&UNK_1000b3b40);
  puRam00000001000c56a0 = puVar1;
  return;
}



/* Entry: 1000341d4; end: 100034213;  */

void FUN_1000341d4(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c56a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b134;
  _swift_getWitnessTable(&UNK_10008b134,&UNK_1000b3b40);
  puRam00000001000c56a0 = puVar1;
  return;
}



/* Entry: 100034214; end: 100034217;  */

void FUN_100034214(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c56a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b0cc;
  _swift_getWitnessTable(&UNK_10008b0cc,&UNK_1000b3b40);
  puRam00000001000c56a8 = puVar1;
  return;
}



/* Entry: 100034218; end: 100034257;  */

void FUN_100034218(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c56a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b0cc;
  _swift_getWitnessTable(&UNK_10008b0cc,&UNK_1000b3b40);
  puRam00000001000c56a8 = puVar1;
  return;
}



/* Entry: 100034258; end: 10003425b;  */

void FUN_100034258(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c56b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b0a4;
  _swift_getWitnessTable(&UNK_10008b0a4,&UNK_1000b3b40);
  puRam00000001000c56b0 = puVar1;
  return;
}



/* Entry: 10003425c; end: 10003429b;  */

void FUN_10003425c(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c56b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b0a4;
  _swift_getWitnessTable(&UNK_10008b0a4,&UNK_1000b3b40);
  puRam00000001000c56b0 = puVar1;
  return;
}



/* Entry: 10003429c; end: 10003429f;  */

void FUN_10003429c(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c56b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b014;
  _swift_getWitnessTable(&UNK_10008b014,&UNK_1000b3bd0);
  puRam00000001000c56b8 = puVar1;
  return;
}



/* Entry: 1000342a0; end: 1000342df;  */

void FUN_1000342a0(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c56b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b014;
  _swift_getWitnessTable(&UNK_10008b014,&UNK_1000b3bd0);
  puRam00000001000c56b8 = puVar1;
  return;
}



/* Entry: 1000342e0; end: 1000342e3;  */

void FUN_1000342e0(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c56c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008afec;
  _swift_getWitnessTable(&UNK_10008afec,&UNK_1000b3bd0);
  puRam00000001000c56c0 = puVar1;
  return;
}



/* Entry: 1000342e4; end: 100034323;  */

void FUN_1000342e4(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c56c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008afec;
  _swift_getWitnessTable(&UNK_10008afec,&UNK_1000b3bd0);
  puRam00000001000c56c0 = puVar1;
  return;
}



/* Entry: 100034324; end: 100034327;  */

void FUN_100034324(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c56c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008aea4;
  _swift_getWitnessTable(&UNK_10008aea4,&UNK_1000b3cf0);
  puRam00000001000c56c8 = puVar1;
  return;
}



/* Entry: 100034328; end: 100034367;  */

void FUN_100034328(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c56c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008aea4;
  _swift_getWitnessTable(&UNK_10008aea4,&UNK_1000b3cf0);
  puRam00000001000c56c8 = puVar1;
  return;
}



/* Entry: 100034368; end: 10003436b;  */

void FUN_100034368(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c56d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008ae7c;
  _swift_getWitnessTable(&UNK_10008ae7c,&UNK_1000b3cf0);
  puRam00000001000c56d0 = puVar1;
  return;
}



/* Entry: 10003436c; end: 1000343ab;  */

void FUN_10003436c(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c56d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008ae7c;
  _swift_getWitnessTable(&UNK_10008ae7c,&UNK_1000b3cf0);
  puRam00000001000c56d0 = puVar1;
  return;
}



/* Entry: 1000343ac; end: 1000343af;  */

void FUN_1000343ac(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c56d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008adec;
  _swift_getWitnessTable(&UNK_10008adec,&UNK_1000b3d80);
  puRam00000001000c56d8 = puVar1;
  return;
}



/* Entry: 1000343b0; end: 1000343ef;  */

void FUN_1000343b0(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c56d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008adec;
  _swift_getWitnessTable(&UNK_10008adec,&UNK_1000b3d80);
  puRam00000001000c56d8 = puVar1;
  return;
}



/* Entry: 1000343f0; end: 1000343f3;  */

void FUN_1000343f0(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c56e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008adc4;
  _swift_getWitnessTable(&UNK_10008adc4,&UNK_1000b3d80);
  puRam00000001000c56e0 = puVar1;
  return;
}



/* Entry: 1000343f4; end: 100034433;  */

void FUN_1000343f4(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c56e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008adc4;
  _swift_getWitnessTable(&UNK_10008adc4,&UNK_1000b3d80);
  puRam00000001000c56e0 = puVar1;
  return;
}


