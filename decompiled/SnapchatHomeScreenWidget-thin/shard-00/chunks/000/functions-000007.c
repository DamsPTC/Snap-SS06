/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100034434; end: 100034437;  */

void FUN_100034434(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c56e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008af5c;
  _swift_getWitnessTable(&UNK_10008af5c,&UNK_1000b3c60);
  puRam00000001000c56e8 = puVar1;
  return;
}



/* Entry: 100034438; end: 100034477;  */

void FUN_100034438(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c56e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008af5c;
  _swift_getWitnessTable(&UNK_10008af5c,&UNK_1000b3c60);
  puRam00000001000c56e8 = puVar1;
  return;
}



/* Entry: 100034478; end: 10003447b;  */

void FUN_100034478(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c56f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008af34;
  _swift_getWitnessTable(&UNK_10008af34,&UNK_1000b3c60);
  puRam00000001000c56f0 = puVar1;
  return;
}



/* Entry: 10003447c; end: 1000344fb;  */

void FUN_10003447c(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c56f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008af34;
  _swift_getWitnessTable(&UNK_10008af34,&UNK_1000b3c60);
  puRam00000001000c56f0 = puVar1;
  return;
}



/* Entry: 1000344fc; end: 1000345f3;  */

undefined1 FUN_1000344fc(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 1000345f4; end: 1000346cf;  */

void FUN_1000345f4(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  uVar1 = 0x6567616d69;
  if ((param_2 == 0x6567616d69 && param_3 == -0x1b00000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6567616d69,0xe500000000000000,param_2,param_3,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_3);
    uVar2 = 0;
  }
  else if ((param_2 == -0x2fffffffffffffef) && (param_3 == -0x7ffffffefff629b0)) {
    _swift_bridgeObjectRelease(0x800000010009d650);
    uVar2 = 1;
  }
  else {
    uVar1 = 0xd000000000000011;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd000000000000011,0x800000010009d650,param_2,param_3,0);
    _swift_bridgeObjectRelease(param_3);
    uVar2 = 1;
    if ((uVar1 & 1) == 0) {
      uVar2 = 2;
    }
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 1000346d0; end: 1000346db;  */

undefined1  [16] FUN_1000346d0(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1000346dc; end: 10003472b;  */

void FUN_1000346dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000100034e28();
                    /* WARNING: Could not recover jumptable at 0x000100085c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_1000b14b8)(param_1,uVar1);
  return;
}



/* Entry: 10003472c; end: 100034743;  */

bool FUN_10003472c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100034744; end: 1000347af;  */

void FUN_100034744(void)

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



/* Entry: 1000347b0; end: 1000347b3;  */

void FUN_1000347b0(void)

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



/* Entry: 1000347b4; end: 1000347f3;  */

void FUN_1000347b4(void)

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



/* Entry: 1000347f4; end: 100034833;  */

undefined1  [16] FUN_1000347f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x7465756f686c6973;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x696a6f6d746962;
  }
  uVar2 = 0xea00000000006574;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe700000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 100034834; end: 100034913;  */

void FUN_100034834(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  uVar1 = 0;
  if ((param_2 == 0x696a6f6d746962 && param_3 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x696a6f6d746962,0xe700000000000000,param_2,param_3,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_3);
    uVar2 = 0;
  }
  else {
    uVar1 = 0x7465756f686c6973;
    if ((param_2 == 0x7465756f686c6973) && (param_3 == -0x15ffffffffff9a8c)) {
      _swift_bridgeObjectRelease(0xea00000000006574);
      uVar2 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x7465756f686c6973,0xea00000000006574,param_2,param_3,0);
      _swift_bridgeObjectRelease(param_3);
      uVar2 = 1;
      if ((uVar1 & 1) == 0) {
        uVar2 = 2;
      }
    }
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 100034914; end: 10003492b;  */

undefined1  [16] FUN_100034914(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10003492c; end: 10003497b;  */

void FUN_10003492c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100034da8();
                    /* WARNING: Could not recover jumptable at 0x000100085c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_1000b14b8)(param_1,uVar1);
  return;
}



/* Entry: 10003497c; end: 100034983;  */

undefined8 FUN_10003497c(void)

{
  return 1;
}



/* Entry: 100034984; end: 100034a23;  */

void FUN_100034984(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100034a24; end: 100034a3f;  */

undefined1  [16] FUN_100034a24(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe900000000000065;
  auVar1._0_8_ = 0x646f43726f6c6f63;
  return auVar1;
}



/* Entry: 100034a40; end: 100034acb;  */

void FUN_100034a40(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 99;
  if (param_2 == 0x646f43726f6c6f63 && param_3 == -0x16ffffffffffff9b) {
    _swift_bridgeObjectRelease(param_3);
    bVar1 = 0;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x646f43726f6c6f63,0xe900000000000065,param_2,param_3,0);
    _swift_bridgeObjectRelease(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 100034acc; end: 100034ae3;  */

undefined1  [16] FUN_100034acc(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 100034ae4; end: 100034b33;  */

void FUN_100034ae4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000100034de8();
                    /* WARNING: Could not recover jumptable at 0x000100085c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_1000b14b8)(param_1,uVar1);
  return;
}



/* Entry: 100034b34; end: 100034da7;  */

void FUN_100034b34(long param_1,long param_2,ulong param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar9;
  long unaff_x21;
  long lVar10;
  long lVar11;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_70;
  ulong uStack_68;
  undefined1 uStack_51;
  
  lVar4 = 0x1000c5728;
  uStack_88 = param_3;
  lStack_80 = param_2;
  func_0x0001000100d0(0x1000c5728,&UNK_10008b320);
  lStack_a0 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lStack_a0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar8 = (long)&lStack_a0 - extraout_x8;
  lVar5 = 0x1000c5730;
  func_0x0001000100d0(0x1000c5730,&UNK_10008b328);
  lStack_98 = *(long *)(lVar5 + -8);
  lStack_90 = lVar5;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lStack_98 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar11 = lVar8 - extraout_x8_00;
  lVar5 = 0x1000c5738;
  func_0x0001000100d0(0x1000c5738,&UNK_10008b330);
  lVar10 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100013de4(param_1,uVar1);
  FUN_100034da8();
  uVar3 = uStack_88;
  puVar6 = &UNK_1000b3f88;
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (lVar11 - extraout_x8_01,&UNK_1000b3f88,&UNK_1000b3f88,param_1,uVar1,uVar2);
  if ((uVar3 >> 0x3d & 1) == 0) {
    lStack_70 = (ulong)lStack_70._1_7_ << 8;
    func_0x000100034e28();
    puVar7 = &UNK_1000b4018;
    __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
              (lVar11,&UNK_1000b4018,&lStack_70,lVar5,&UNK_1000b4018,puVar6);
    lStack_70 = lStack_80;
    uStack_68 = uVar3;
    uStack_51 = 0;
    func_0x000100034e68();
    lVar4 = lStack_90;
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&lStack_70,&uStack_51,lStack_90,PTR___s10Foundation4DataVN_1000b1930,puVar7);
    lVar8 = lVar11;
    if (unaff_x21 == 0) {
      lStack_70 = CONCAT71(lStack_70._1_7_,1);
      __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(param_4,&lStack_70,lVar4);
      pcVar9 = *(code **)(lStack_98 + 8);
    }
    else {
      pcVar9 = *(code **)(lStack_98 + 8);
    }
  }
  else {
    lStack_70 = CONCAT71(lStack_70._1_7_,1);
    func_0x000100034de8();
    __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
              (lVar8,&UNK_1000b40a8,&lStack_70,lVar5,&UNK_1000b40a8,puVar6);
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(lStack_80);
    pcVar9 = *(code **)(lStack_a0 + 8);
  }
  (*pcVar9)(lVar8,lVar4);
  (**(code **)(lVar10 + 8))(lVar11 - extraout_x8_01,lVar5);
  return;
}



/* Entry: 100034da8; end: 100034ea7;  */

void FUN_100034da8(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b6c0;
  _swift_getWitnessTable(&UNK_10008b6c0,&UNK_1000b3f88);
  puRam00000001000c5740 = puVar1;
  return;
}



/* Entry: 100034ea8; end: 100034ed3;  */

void FUN_100034ea8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long unaff_x21;
  
  FUN_100034ef0();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    *(undefined4 *)(param_1 + 2) = param_4;
  }
  return;
}



/* Entry: 100034ed4; end: 100034eef;  */

void FUN_100034ed4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100034b34(param_1,*unaff_x20,unaff_x20[1],*(undefined4 *)(unaff_x20 + 2));
  return;
}



/* Entry: 100034ef0; end: 10003535f;  */

/* WARNING: Removing unreachable block (ram,0x000100035168) */
/* WARNING: Removing unreachable block (ram,0x000100035268) */
/* WARNING: Removing unreachable block (ram,0x0001000352f8) */
/* WARNING: Removing unreachable block (ram,0x0001000351b8) */
/* WARNING: Removing unreachable block (ram,0x000100035280) */
/* WARNING: Removing unreachable block (ram,0x000100035284) */
/* WARNING: Removing unreachable block (ram,0x000100035288) */

undefined8 * FUN_100034ef0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  char cStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_51;
  
  lVar4 = 0x1000c57a8;
  func_0x0001000100d0(0x1000c57a8,&UNK_10008b710);
  lStack_98 = *(long *)(lVar4 + -8);
  lStack_90 = lVar4;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lStack_98 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar4 = 0x1000c57b0;
  lStack_88 = (long)&puStack_a0 - extraout_x8;
  func_0x0001000100d0(0x1000c57b0,&UNK_10008b718);
  puVar11 = *(undefined8 **)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(puVar11[8] + 0xf & 0xfffffffffffffff0);
  lVar10 = ((long)&puStack_a0 - extraout_x8) - extraout_x8_00;
  lVar5 = 0x1000c57b8;
  func_0x0001000100d0(0x1000c57b8,&UNK_10008b720);
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar10 - extraout_x8_01;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar7 = param_1;
  func_0x000100013de4(param_1,uVar1);
  FUN_100034da8();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar12,&UNK_1000b3f88,&UNK_1000b3f88,lVar7,uVar1,uVar2);
  lVar7 = lStack_88;
  if (unaff_x21 == 0) {
    lVar6 = lVar5;
    puStack_a0 = puVar11;
    __ss22KeyedDecodingContainerV7allKeysSayxGvg();
    if ((*(long *)(lVar6 + 0x10) != 0) &&
       (cStack_70 = *(char *)(lVar6 + 0x20), *(long *)(lVar6 + 0x10) == 1 && cStack_70 != '\x02')) {
      if (cStack_70 == '\x01') {
        lVar4 = lVar6;
        func_0x000100034de8();
        puVar8 = &UNK_1000b40a8;
        __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                  (lVar7,&UNK_1000b40a8,&cStack_70,lVar5,&UNK_1000b40a8,lVar4);
        lVar4 = lStack_90;
        __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF();
        (**(code **)(lStack_98 + 8))(lVar7,lVar4);
        (**(code **)(lVar9 + 8))(lVar12,lVar5);
        _swift_unknownObjectRelease(lVar6);
        puVar11 = (undefined8 *)((ulong)puVar8 & 0xffffffff);
      }
      else {
        lVar7 = lVar6;
        func_0x000100034e28();
        puVar8 = &UNK_1000b4018;
        __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                  (lVar10,&UNK_1000b4018,&cStack_70,lVar5,&UNK_1000b4018,lVar7);
        uStack_51 = 0;
        func_0x000100035a2c();
        __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
                  (&cStack_70,PTR___s10Foundation4DataVN_1000b1930,&uStack_51,lVar4,
                   PTR___s10Foundation4DataVN_1000b1930,puVar8);
        puVar11 = (undefined8 *)CONCAT71(uStack_6f,cStack_70);
        uStack_51 = 1;
        lStack_88 = lVar12;
        __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(&uStack_51,lVar4);
        (*(code *)puStack_a0[1])(lVar10,lVar4);
        (**(code **)(lVar9 + 8))(lStack_88,lVar5);
        _swift_unknownObjectRelease(lVar6);
      }
      func_0x000100012b98(param_1);
      return puVar11;
    }
    lVar7 = 0;
    __ss13DecodingErrorOMa();
    puVar11 = (undefined8 *)PTR___ss13DecodingErrorOs0B0sWP_1000b12f0;
    _swift_allocError();
    lVar4 = 0x1000c5720;
    func_0x0001000100d0(0x1000c5720,&UNK_10008b310);
    iVar3 = *(int *)(lVar4 + 0x30);
    *puVar11 = &UNK_1000b3ef8;
    __ss22KeyedDecodingContainerV10codingPathSays9CodingKey_pGvg(lVar5);
    __ss13DecodingErrorO7ContextV10codingPath16debugDescription010underlyingB0ADSays9CodingKey_pG_SSs0B0_pSgtcfC
              ((long)puVar11 + (long)iVar3);
    (**(code **)(*(long *)(lVar7 + -8) + 0x68))
              (puVar11,*(undefined4 *)
                        PTR___ss13DecodingErrorO12typeMismatchyABypXp_AB7ContextVtcABmFWC_1000b12d0,
               lVar7);
    _swift_willThrow();
    (**(code **)(lVar9 + 8))(lVar12,lVar5);
    _swift_unknownObjectRelease(lVar6);
  }
  FUN_100012b94(param_1);
  return puVar11;
}



/* Entry: 100035360; end: 10003537f;  */

undefined8 * FUN_100035360(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined4 *)(param_2 + 2);
  FUN_100035360(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 100035380; end: 10003541b;  */

undefined8 * FUN_100035380(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined4 *)(param_2 + 2);
  FUN_100035360(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 10003541c; end: 10003542f;  */

void FUN_10003541c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 100035430; end: 100035473;  */

undefined8 * FUN_100035430(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined4 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar2 = *(undefined4 *)(param_1 + 2);
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  *(undefined4 *)(param_1 + 2) = uVar1;
  func_0x0001000275e8(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 100035474; end: 1000357cb;  */

int FUN_100035474(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((2 < param_2) && ((char)param_1[5] != '\0')) {
    return *param_1 + 3;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = ((uVar1 >> 0x1c & 1) << 1 | uVar1 >> 0x1d & 1) ^ 3;
  if (1 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1000357cc; end: 10003580b;  */

void FUN_1000357cc(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5760 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b488;
  _swift_getWitnessTable(&UNK_10008b488,&UNK_1000b40a8);
  puRam00000001000c5760 = puVar1;
  return;
}



/* Entry: 10003580c; end: 10003580f;  */

void FUN_10003580c(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b540;
  _swift_getWitnessTable(&UNK_10008b540,&UNK_1000b4018);
  puRam00000001000c5768 = puVar1;
  return;
}



/* Entry: 100035810; end: 10003584f;  */

void FUN_100035810(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b540;
  _swift_getWitnessTable(&UNK_10008b540,&UNK_1000b4018);
  puRam00000001000c5768 = puVar1;
  return;
}



/* Entry: 100035850; end: 100035853;  */

void FUN_100035850(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5770 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b5f8;
  _swift_getWitnessTable(&UNK_10008b5f8,&UNK_1000b3f88);
  puRam00000001000c5770 = puVar1;
  return;
}



/* Entry: 100035854; end: 100035893;  */

void FUN_100035854(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5770 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b5f8;
  _swift_getWitnessTable(&UNK_10008b5f8,&UNK_1000b3f88);
  puRam00000001000c5770 = puVar1;
  return;
}



/* Entry: 100035894; end: 100035897;  */

void FUN_100035894(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5778 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b4d8;
  _swift_getWitnessTable(&UNK_10008b4d8,&UNK_1000b4018);
  puRam00000001000c5778 = puVar1;
  return;
}



/* Entry: 100035898; end: 1000358d7;  */

void FUN_100035898(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5778 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b4d8;
  _swift_getWitnessTable(&UNK_10008b4d8,&UNK_1000b4018);
  puRam00000001000c5778 = puVar1;
  return;
}



/* Entry: 1000358d8; end: 1000358db;  */

void FUN_1000358d8(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b4b0;
  _swift_getWitnessTable(&UNK_10008b4b0,&UNK_1000b4018);
  puRam00000001000c5780 = puVar1;
  return;
}



/* Entry: 1000358dc; end: 10003591b;  */

void FUN_1000358dc(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b4b0;
  _swift_getWitnessTable(&UNK_10008b4b0,&UNK_1000b4018);
  puRam00000001000c5780 = puVar1;
  return;
}



/* Entry: 10003591c; end: 10003591f;  */

void FUN_10003591c(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5788 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b420;
  _swift_getWitnessTable(&UNK_10008b420,&UNK_1000b40a8);
  puRam00000001000c5788 = puVar1;
  return;
}



/* Entry: 100035920; end: 10003595f;  */

void FUN_100035920(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5788 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b420;
  _swift_getWitnessTable(&UNK_10008b420,&UNK_1000b40a8);
  puRam00000001000c5788 = puVar1;
  return;
}



/* Entry: 100035960; end: 100035963;  */

void FUN_100035960(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5790 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b3f8;
  _swift_getWitnessTable(&UNK_10008b3f8,&UNK_1000b40a8);
  puRam00000001000c5790 = puVar1;
  return;
}



/* Entry: 100035964; end: 1000359a3;  */

void FUN_100035964(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5790 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b3f8;
  _swift_getWitnessTable(&UNK_10008b3f8,&UNK_1000b40a8);
  puRam00000001000c5790 = puVar1;
  return;
}



/* Entry: 1000359a4; end: 1000359a7;  */

void FUN_1000359a4(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5798 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b590;
  _swift_getWitnessTable(&UNK_10008b590,&UNK_1000b3f88);
  puRam00000001000c5798 = puVar1;
  return;
}



/* Entry: 1000359a8; end: 1000359e7;  */

void FUN_1000359a8(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5798 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b590;
  _swift_getWitnessTable(&UNK_10008b590,&UNK_1000b3f88);
  puRam00000001000c5798 = puVar1;
  return;
}



/* Entry: 1000359e8; end: 1000359eb;  */

void FUN_1000359e8(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c57a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b568;
  _swift_getWitnessTable(&UNK_10008b568,&UNK_1000b3f88);
  puRam00000001000c57a0 = puVar1;
  return;
}



/* Entry: 1000359ec; end: 100035a6b;  */

void FUN_1000359ec(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c57a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b568;
  _swift_getWitnessTable(&UNK_10008b568,&UNK_1000b3f88);
  puRam00000001000c57a0 = puVar1;
  return;
}



/* Entry: 100035a6c; end: 100035abb;  */

undefined1 FUN_100035a6c(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 100035abc; end: 100035ae3;  */

undefined * FUN_100035abc(void)

{
  return &UNK_1000b4168;
}



/* Entry: 100035ae4; end: 100035c57;  */

undefined8 FUN_100035ae4(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if (((*(char *)(unaff_x20 + 0x70) == '\0') && (*(long *)(unaff_x20 + 8) != 0)) &&
     (__s33FriendingLiveActivityWidgetBridge0abC13AvatarPayloadV28validatedFriendmojiImageData10Foundation0K0VSgvg
                (), param_2 >> 0x3c < 0xf)) {
    uVar1 = param_1;
    FUN_1000361e0();
    FUN_1000275d4(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* Entry: 100035c58; end: 100035c93;  */

void FUN_100035c58(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10008b850;
  _swift_getWitnessTable(&UNK_10008b850,param_1);
  __s14CoreFoundation9_CFObjectPAAE9hashValueSivg(param_1,puVar1);
  return;
}



/* Entry: 100035c94; end: 100035cdb;  */

void FUN_100035c94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10008b850;
  _swift_getWitnessTable(&UNK_10008b850);
  __s14CoreFoundation9_CFObjectPAAE4hash4intoys6HasherVz_tF(param_1,param_2,puVar1);
  return;
}



/* Entry: 100035cdc; end: 100035d33;  */

void FUN_100035cdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  puVar1 = &UNK_10008b850;
  _swift_getWitnessTable(&UNK_10008b850,param_2);
  __s14CoreFoundation9_CFObjectPAAE4hash4intoys6HasherVz_tF(auStack_68,param_2,puVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100035d34; end: 100035e63;  */

void FUN_100035d34(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  uVar3 = *param_2;
  puVar1 = &UNK_10008b850;
  _swift_getWitnessTable(&UNK_10008b850,param_3);
                    /* WARNING: Could not recover jumptable at 0x000100084e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s14CoreFoundation9_CFObjectPAAE2eeoiySbx_xtFZ_1000b1718)
            (uVar2,uVar3,param_3,puVar1);
  return;
}



/* Entry: 100035e64; end: 100035f47;  */

undefined1  [16] FUN_100035e64(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  uint uVar4;
  undefined1 auVar5 [16];
  
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar4 = 0;
  }
  else {
    FUN_100036720(0);
    FUN_100036794(0x1000c57f8,&UNK_10008b850);
    do {
      uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8);
      _objc_retain();
      uVar2 = uVar1;
      __s14CoreFoundation9_CFObjectPAAE2eeoiySbx_xtFZ();
      uVar4 = (uint)uVar2;
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) break;
      param_2 = param_2 + 1 & ~uVar3;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar5._8_4_ = uVar4 & 1;
  auVar5._0_8_ = param_2;
  auVar5._12_4_ = 0;
  return auVar5;
}



/* Entry: 100035f48; end: 100035ff3;  */

undefined1  [16] FUN_100035f48(ulong param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_3 = param_3 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x30) + param_3 * 0x10);
      uVar3 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar3 == param_1 && uVar2 == param_2) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar3,uVar2,param_1,param_2,0), (uVar3 & 1) != 0)) {
        uVar4 = 1;
        goto LAB_100035fdc;
      }
      param_3 = param_3 + 1 & ~uVar5;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
  }
  uVar4 = 0;
LAB_100035fdc:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = param_3;
  return auVar6;
}



/* Entry: 100035ff4; end: 1000361df;  */

undefined * FUN_100035ff4(long param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_1000b14d8;
  if (puVar8 != (undefined *)0x0) {
    uVar6 = 0;
    func_0x0001000100d0(0x1000c5800);
    puVar3 = puVar8;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar9 = (undefined1 *)(param_1 + 0x28);
    do {
      uVar4 = *(ulong *)(puVar9 + -8);
      uVar1 = *puVar9;
      _objc_retain();
      uVar5 = uVar4;
      func_0x000100035d80();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000360d8);
        (*pcVar2)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar7 + 0x40) = *(ulong *)(puVar3 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar5 * 8) = uVar4;
      *(undefined1 *)(*(long *)(puVar3 + 0x38) + uVar5) = uVar1;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000360dc);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar9 = puVar9 + 0x10;
    } while (puVar8 != (undefined *)0x0);
    _swift_release(puVar3);
  }
  return puVar3;
}



/* Entry: 1000361e0; end: 1000364a3;  */

undefined * FUN_1000361e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar3 = 0x1000c57c8;
  func_0x0001000100d0(0x1000c57c8,&UNK_10008b768);
  _swift_initStackObject();
  puVar9 = PTR__kCGImageSourceShouldCache_1000b0c28;
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar9;
  *(undefined1 *)(lVar3 + 0x28) = 0;
  _objc_retain();
  lVar4 = lVar3;
  FUN_100035ff4(lVar3);
  _swift_setDeallocating(lVar3);
  FUN_1000366e0((undefined8 *)(lVar3 + 0x20),0x1000c57d0,&UNK_10008b770);
  uVar5 = 0;
  FUN_100036720(0);
  uVar6 = 0x1000c57d8;
  FUN_100036794(0x1000c57d8,&UNK_10008b87c);
  puVar9 = PTR___sSbN_1000b11e8;
  lVar3 = lVar4;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF(lVar4,uVar5,PTR___sSbN_1000b11e8,uVar6)
  ;
  _swift_bridgeObjectRelease(lVar4);
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_1,param_2);
  lVar4 = param_1;
  _CGImageSourceCreateWithData();
  _objc_release(param_1);
  if (lVar4 != 0) {
    lVar7 = 0x1000c57e0;
    func_0x0001000100d0(0x1000c57e0,&UNK_10008b778);
    _swift_initStackObject();
    *(undefined8 *)(lVar7 + 0x18) = 8;
    *(undefined8 *)(lVar7 + 0x10) = 4;
    *(undefined8 *)(lVar7 + 0x20) =
         *(undefined8 *)PTR__kCGImageSourceCreateThumbnailFromImageAlways_1000b0c18;
    *(undefined1 *)(lVar7 + 0x28) = 1;
    uVar10 = *(undefined8 *)PTR__kCGImageSourceCreateThumbnailWithTransform_1000b0c20;
    *(undefined **)(lVar7 + 0x40) = puVar9;
    *(undefined8 *)(lVar7 + 0x48) = uVar10;
    *(undefined1 *)(lVar7 + 0x50) = 1;
    puVar2 = PTR___sSiN_1000b1210;
    uVar11 = *(undefined8 *)PTR__kCGImageSourceThumbnailMaxPixelSize_1000b0c38;
    *(undefined8 *)(lVar7 + 0x78) = 0x166;
    puVar1 = PTR__kCGImageSourceShouldCacheImmediately_1000b0c30;
    *(undefined **)(lVar7 + 0x68) = puVar9;
    *(undefined8 *)(lVar7 + 0x70) = uVar11;
    uVar12 = *(undefined8 *)puVar1;
    *(undefined **)(lVar7 + 0x90) = puVar2;
    *(undefined8 *)(lVar7 + 0x98) = uVar12;
    *(undefined **)(lVar7 + 0xb8) = puVar9;
    *(undefined1 *)(lVar7 + 0xa0) = 1;
    _objc_retain();
    _objc_retain(uVar10);
    _objc_retain(uVar11);
    _objc_retain(uVar12);
    lVar8 = lVar7;
    func_0x0001000360dc(lVar7);
    _swift_setDeallocating(lVar7);
    uVar10 = 0x1000c57e8;
    func_0x0001000100d0(0x1000c57e8,&UNK_10008b780);
    _swift_arrayDestroy((undefined8 *)(lVar7 + 0x20),4,uVar10);
    lVar7 = lVar8;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar8,uVar5,PTR___sypN_1000b14c8 + 8,uVar6);
    _swift_bridgeObjectRelease(lVar8);
    lVar8 = lVar4;
    _CGImageSourceCreateThumbnailAtIndex(lVar4,0,lVar7);
    if (lVar8 != 0) {
      puVar9 = PTR__OBJC_CLASS___UIImage_1000c20c0;
      _objc_allocWithZone(PTR__OBJC_CLASS___UIImage_1000c20c0);
      func_0x000100086c60(0x4000000000000000);
      _objc_release(lVar4);
      _objc_release(lVar7);
      _objc_release(lVar3);
      _objc_release(lVar8);
      return puVar9;
    }
    _objc_release(lVar3);
    _objc_release(lVar4);
    lVar3 = lVar7;
  }
  _objc_release(lVar3);
  return (undefined *)0x0;
}



/* Entry: 1000364a4; end: 1000366df;  */

undefined1  [16] FUN_1000364a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar2 = param_1;
  __s33FriendingLiveActivityWidgetBridge0abC13ExtensionKeysO9avatarKeySSvau();
  uVar3 = *puVar2;
  uVar1 = puVar2[1];
  _swift_bridgeObjectRetain(uVar1);
  __s21SnapchatWidgetsShared12AppGroupDataO04fileF06userId13directoryName8filenameSo6NSDataCSgSS_S2StFZ
            (param_1,param_2,0x7845746567646957,0xef6e6f69736e6574,uVar3,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  if (param_1 == (undefined8 *)0x0) {
    uVar3 = 0;
    uVar4 = 0xf000000000000000;
  }
  else {
    uStack_38 = 0xf000000000000000;
    uStack_40 = 0;
    __s10Foundation4DataV34_conditionallyBridgeFromObjectiveC_6resultSbSo6NSDataC_ACSgztFZ
              (param_1,&uStack_40);
    _objc_release(param_1);
    uVar3 = 0;
    if (uStack_38 >> 0x3c < 0xf) {
      uVar3 = uStack_40;
    }
    uVar4 = 0xf000000000000000;
    if (uStack_38 >> 0x3c < 0xf) {
      uVar4 = uStack_38;
    }
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 1000366e0; end: 10003671f;  */

undefined8 FUN_1000366e0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000100d0(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100036720; end: 100036733;  */

void FUN_100036720(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1000b4248;
  if (lRam00000001000c5808 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam00000001000c5808 = param_1;
  }
  return;
}



/* Entry: 100036734; end: 100036783;  */

undefined8 FUN_100036734(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x1000c57e8;
  func_0x0001000100d0(0x1000c57e8,&UNK_10008b780);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100036784; end: 100036793;  */

undefined8 * FUN_100036784(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  param_2[1] = param_1[1];
  *param_2 = uVar1;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  return param_2;
}



/* Entry: 100036794; end: 10003688f;  */

void FUN_100036794(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_100036720(0xff);
    _swift_getWitnessTable(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100036890; end: 100036d0b;  */

undefined8 * FUN_100036890(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_2[1];
  if (lVar1 == 0) {
    uVar3 = param_2[8];
    uVar5 = param_2[0xb];
    uVar4 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar3;
    param_1[0xb] = uVar5;
    param_1[10] = uVar4;
    uVar3 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar3;
    uVar3 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
    uVar5 = param_2[4];
    uVar4 = param_2[7];
    uVar3 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar5;
    param_1[7] = uVar4;
    param_1[6] = uVar3;
  }
  else {
    *param_1 = *param_2;
    param_1[1] = lVar1;
    uVar2 = param_2[3];
    _swift_bridgeObjectRetain();
    if (uVar2 >> 0x3c < 0xf) {
      uVar3 = param_2[2];
      func_0x00010001c120(uVar3,uVar2);
      param_1[2] = uVar3;
      param_1[3] = uVar2;
    }
    else {
      uVar3 = param_2[2];
      param_1[3] = param_2[3];
      param_1[2] = uVar3;
    }
    uVar2 = param_2[5];
    if (uVar2 >> 0x3c < 0xf) {
      uVar3 = param_2[4];
      func_0x00010001c120(uVar3,uVar2);
      param_1[4] = uVar3;
      param_1[5] = uVar2;
    }
    else {
      uVar3 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = uVar3;
    }
    uVar3 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar3;
    uVar2 = param_2[9];
    _swift_bridgeObjectRetain();
    if (uVar2 >> 0x3c < 0xf) {
      uVar3 = param_2[8];
      func_0x00010001c120(uVar3,uVar2);
      param_1[8] = uVar3;
      param_1[9] = uVar2;
    }
    else {
      uVar3 = param_2[8];
      param_1[9] = param_2[9];
      param_1[8] = uVar3;
    }
    uVar3 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar3;
    uVar3 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar3;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
  }
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  return param_1;
}



/* Entry: 100036d0c; end: 100036d73;  */

undefined8 FUN_100036d0c(undefined8 param_1)

{
  (**(code **)(*(long *)(PTR___s10Foundation4DataVN_1000b1930 + -8) + 8))();
  return param_1;
}



/* Entry: 100036d74; end: 100036d9f;  */

void FUN_100036d74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  uVar6 = param_2[0xd];
  uVar5 = param_2[0xc];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar5;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  return;
}



/* Entry: 100036da0; end: 100036f1b;  */

undefined8 * FUN_100036da0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (param_1[1] != 0) {
    lVar3 = param_2[1];
    if (lVar3 != 0) {
      *param_1 = *param_2;
      param_1[1] = lVar3;
      _swift_bridgeObjectRelease();
      if ((ulong)param_1[3] >> 0x3c < 0xf) {
        uVar4 = param_2[3];
        if (0xe < uVar4 >> 0x3c) {
          FUN_100036d0c(param_1 + 2);
          goto LAB_100036e00;
        }
        uVar2 = param_1[2];
        param_1[2] = param_2[2];
        param_1[3] = uVar4;
        func_0x000100018c5c(uVar2);
      }
      else {
LAB_100036e00:
        uVar2 = param_2[2];
        param_1[3] = param_2[3];
        param_1[2] = uVar2;
      }
      if ((ulong)param_1[5] >> 0x3c < 0xf) {
        uVar4 = param_2[5];
        if (0xe < uVar4 >> 0x3c) {
          FUN_100036d0c(param_1 + 4);
          goto LAB_100036e70;
        }
        uVar2 = param_1[4];
        param_1[4] = param_2[4];
        param_1[5] = uVar4;
        func_0x000100018c5c(uVar2);
      }
      else {
LAB_100036e70:
        uVar2 = param_2[4];
        param_1[5] = param_2[5];
        param_1[4] = uVar2;
      }
      uVar2 = param_2[7];
      uVar1 = param_1[7];
      param_1[6] = param_2[6];
      param_1[7] = uVar2;
      _swift_bridgeObjectRelease(uVar1);
      if ((ulong)param_1[9] >> 0x3c < 0xf) {
        uVar4 = param_2[9];
        if (0xe < uVar4 >> 0x3c) {
          FUN_100036d0c(param_1 + 8);
          goto LAB_100036ec4;
        }
        uVar2 = param_1[8];
        param_1[8] = param_2[8];
        param_1[9] = uVar4;
        func_0x000100018c5c(uVar2);
      }
      else {
LAB_100036ec4:
        uVar2 = param_2[8];
        param_1[9] = param_2[9];
        param_1[8] = uVar2;
      }
      uVar2 = param_2[0xb];
      uVar1 = param_1[0xb];
      param_1[10] = param_2[10];
      param_1[0xb] = uVar2;
      _swift_bridgeObjectRelease(uVar1);
      uVar2 = param_2[0xd];
      uVar1 = param_1[0xd];
      param_1[0xc] = param_2[0xc];
      param_1[0xd] = uVar2;
      _swift_bridgeObjectRelease(uVar1);
      goto LAB_100036f00;
    }
    func_0x000100036d40(param_1);
  }
  uVar2 = param_2[8];
  uVar5 = param_2[0xb];
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  param_1[0xb] = uVar5;
  param_1[10] = uVar1;
  uVar2 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar2;
  uVar2 = *param_2;
  uVar5 = param_2[3];
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar5;
  param_1[2] = uVar1;
  uVar5 = param_2[4];
  uVar1 = param_2[7];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar1;
  param_1[6] = uVar2;
LAB_100036f00:
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  return param_1;
}



/* Entry: 100036f1c; end: 100036ffb;  */

int FUN_100036f1c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x71) != '\0')) {
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



/* Entry: 100036ffc; end: 100037043;  */

void FUN_100036ffc(void)

{
  FUN_100036794(0x1000c57d8,&UNK_10008b87c);
  return;
}



/* Entry: 100037044; end: 100037087;  */

void FUN_100037044(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 100037088; end: 1000373c7;  */

void FUN_100037088(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar2 = -0x2fffffffffffffdb;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010009d7e0);
  uVar3 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010009d700);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  _SCLocalizedStringFromTable(lVar2,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar5);
    lRam00000001000d0f20 = lVar2;
    uRam00000001000d0f28 = uVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100037158);
  (*pcVar1)();
}



/* Entry: 1000373c8; end: 1000377ab;  */

undefined1  [16] FUN_1000373c8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  lVar2 = -0x2fffffffffffffd3;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002d,0x800000010009d6d0);
  uVar3 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010009d700);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar7 = uVar3;
  _SCLocalizedStringFromTable(lVar2,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  if (lVar5 != 0) {
    lVar6 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
    _objc_release(lVar5);
    lVar2 = 0x1000c4360;
    func_0x0001000100d0(0x1000c4360,&UNK_100088f60);
    _swift_allocObject();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(undefined **)(lVar2 + 0x38) = PTR___sSSN_1000b1180;
    lVar5 = lVar2;
    FUN_100015590();
    *(long *)(lVar2 + 0x40) = lVar5;
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    _swift_bridgeObjectRetain(param_2);
    uVar3 = uVar7;
    __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(lVar6,uVar7,lVar2);
    _swift_bridgeObjectRelease(uVar7);
    auVar8._8_8_ = uVar3;
    auVar8._0_8_ = lVar6;
    return auVar8;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100037514);
  (*pcVar1)();
}



/* Entry: 1000377ac; end: 100037f7b;  */

void FUN_1000377ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  undefined8 *puVar15;
  long extraout_x8_01;
  long lVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined8 auStack_720 [4];
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  long lStack_6d8;
  long lStack_6d0;
  long lStack_6c8;
  long lStack_6c0;
  undefined8 uStack_6b8;
  long lStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 *puStack_688;
  undefined8 uStack_680;
  long lStack_678;
  undefined *puStack_670;
  long lStack_668;
  undefined8 uStack_660;
  long lStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined *puStack_5e8;
  undefined **ppuStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined2 uStack_598;
  undefined *puStack_590;
  undefined8 *puStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined2 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  ushort uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  ushort uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined2 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined2 uStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined2 uStack_368;
  undefined8 uStack_360;
  long lStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
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
  undefined2 uStack_230;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined2 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
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
  undefined1 uStack_d8;
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
  undefined2 uStack_80;
  
  puVar19 = (undefined8 *)0x1000c5870;
  uStack_6b8 = param_1;
  uStack_680 = param_2;
  func_0x0001000100d0(0x1000c5870,&UNK_10008b950);
  puStack_688 = puVar19;
  __s9WidgetKit19ActivityViewContextV10attributesxvg(&uStack_2f0);
  lVar14 = lStack_2e8;
  uVar8 = uStack_2f0;
  puStack_670 = (undefined *)lStack_2e8;
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(&uStack_660,puVar19);
  uStack_178 = uStack_638;
  uStack_180 = uStack_640;
  uStack_168 = uStack_628;
  uStack_170 = uStack_630;
  uStack_158 = uStack_618;
  uStack_160 = uStack_620;
  uStack_150 = (undefined2)uStack_610;
  lStack_198 = lStack_658;
  uStack_1a0 = uStack_660;
  uStack_188 = uStack_648;
  uStack_190 = uStack_650;
  FUN_1000364a4();
  lStack_6b0 = lVar14;
  lStack_678 = uVar8;
  __s33FriendingLiveActivityWidgetBridge0abC13AvatarPayloadV09validatedG04from8matching14visualRevisionACSg10Foundation4DataVSg_S2SSgtFZ
            (&uStack_360);
  uVar5 = uStack_318;
  uVar4 = uStack_320;
  uVar3 = uStack_328;
  uVar2 = uStack_330;
  uVar1 = uStack_338;
  uVar9 = uStack_340;
  uVar20 = uStack_348;
  uVar8 = uStack_350;
  lStack_668 = lStack_358;
  uStack_698 = uStack_308;
  uStack_690 = uStack_310;
  uStack_6a8 = uStack_2f8;
  uStack_6a0 = uStack_300;
  _swift_bridgeObjectRelease(puStack_670);
  FUN_1000275d4(lStack_678,lStack_6b0);
  FUN_100039308(&uStack_1a0);
  puVar15 = puStack_688;
  lStack_6b0 = uStack_360;
  uStack_148 = uStack_360;
  lStack_140 = lStack_668;
  uStack_6e8 = uVar20;
  uStack_6e0 = uVar8;
  uStack_138 = uVar8;
  uStack_130 = uVar20;
  uStack_6f8 = uVar1;
  uStack_6f0 = uVar9;
  uStack_128 = uVar9;
  uStack_120 = uVar1;
  auStack_720[3] = uVar3;
  uStack_700 = uVar2;
  uStack_118 = uVar2;
  uStack_110 = uVar3;
  auStack_720[1] = uVar5;
  auStack_720[2] = uVar4;
  uStack_108 = uVar4;
  uStack_100 = uVar5;
  uStack_f8 = uStack_690;
  uStack_f0 = uStack_698;
  uStack_e8 = uStack_6a0;
  uStack_e0 = uStack_6a8;
  uStack_d8 = (undefined1)uStack_1a0;
  uStack_1e8 = uVar3;
  uStack_1f0 = uVar2;
  uStack_1f8 = uVar1;
  uStack_200 = uVar9;
  uStack_1b0 = (undefined1)uStack_1a0;
  uStack_1b8 = uStack_6a8;
  uStack_1c0 = uStack_6a0;
  uStack_1c8 = uStack_698;
  uStack_1d0 = uStack_690;
  uStack_1d8 = uVar5;
  uStack_1e0 = uVar4;
  lStack_218 = lStack_668;
  uStack_220 = uStack_360;
  uStack_208 = uVar20;
  uStack_210 = uVar8;
  lVar14 = 0x1000c5848;
  func_0x0001000100d0(0x1000c5848,&UNK_10008b8c8);
  lStack_6c8 = *(long *)(lVar14 + -8);
  lStack_6c0 = lVar14;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(lStack_6c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar21 = (undefined *)0x1000c5850;
  lStack_6d0 = (long)auStack_720 - extraout_x8;
  func_0x0001000100d0(0x1000c5850,&UNK_10008b8d0);
  lStack_6d8 = *(long *)(puVar21 + -8);
  puStack_670 = puVar21;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(lStack_6d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = ((long)auStack_720 - extraout_x8) - extraout_x8_00;
  puVar19 = puVar15;
  lStack_678 = lVar14;
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(&uStack_3b8);
  uStack_a8 = uStack_390;
  uStack_b0 = uStack_398;
  uStack_98 = uStack_380;
  uStack_a0 = uStack_388;
  uStack_88 = uStack_370;
  uStack_90 = uStack_378;
  uStack_80 = uStack_368;
  uStack_c8 = uStack_3b0;
  uStack_d0 = uStack_3b8;
  uStack_b8 = uStack_3a0;
  uStack_c0 = uStack_3a8;
  if (lStack_668 == 0) {
    puVar17 = (undefined *)0x0;
    puVar21 = (undefined *)0x0;
  }
  else {
    uStack_2f0 = lStack_6b0;
    lStack_2e8 = lStack_668;
    uStack_2b8 = uStack_328;
    uStack_2c0 = uStack_330;
    uStack_2a8 = uStack_318;
    uStack_2b0 = uStack_320;
    uStack_298 = uStack_308;
    uStack_2a0 = uStack_310;
    uStack_288 = uStack_2f8;
    uStack_290 = uStack_300;
    uStack_2d8 = uStack_348;
    uStack_2e0 = uStack_350;
    uStack_2c8 = uStack_338;
    uStack_2d0 = uStack_340;
    puVar19 = &uStack_148;
    FUN_1000397b4(puVar19,&uStack_660);
    __s33FriendingLiveActivityWidgetBridge0abC13AvatarPayloadV28validatedImageDataCandidatesSay10Foundation0J0VGvg
              ();
    lVar16 = puVar19[2];
    uVar18 = 0xffffffffffffffff;
    puVar15 = puVar19 + 5;
    do {
      if (uVar18 - lVar16 == -1) {
        _swift_bridgeObjectRelease(puVar19);
        puVar21 = (undefined *)0x0;
        goto LAB_100037b34;
      }
      uVar18 = uVar18 + 1;
      if ((ulong)puVar19[2] <= uVar18) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100037f4c);
        (*pcVar6)();
      }
      uVar8 = puVar15[-1];
      uVar20 = *puVar15;
      puVar21 = PTR__OBJC_CLASS___UIImage_1000c20c0;
      _objc_allocWithZone();
      func_0x00010001c120(uVar8,uVar20);
      uVar9 = uVar8;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar8,uVar20);
      func_0x000100086ca0();
      _objc_release(uVar9);
      func_0x000100018c5c(uVar8,uVar20);
      puVar15 = puVar15 + 2;
    } while (puVar21 == (undefined *)0x0);
    _swift_bridgeObjectRelease(puVar19);
LAB_100037b34:
    uVar18 = 0x1000c58e0;
    puVar19 = &uStack_360;
    func_0x00010003987c(puVar19,0x1000c58e0,&UNK_10008b998);
    uStack_660 = lStack_6b0;
    lStack_658 = lStack_668;
    uStack_650 = uStack_6e0;
    uStack_648 = uStack_6e8;
    uStack_640 = uStack_6f0;
    uStack_638 = uStack_6f8;
    uStack_630 = uStack_700;
    uStack_628 = auStack_720[3];
    uStack_620 = auStack_720[2];
    uStack_618 = auStack_720[1];
    uStack_610 = uStack_690;
    uStack_608 = uStack_698;
    uStack_600 = uStack_6a0;
    uStack_5f8 = uStack_6a8;
    __s33FriendingLiveActivityWidgetBridge0abC13AvatarPayloadV22validatedHeroImageData10Foundation0K0VSgvg
              ();
    puVar15 = puStack_688;
    if (uVar18 >> 0x3c < 0xf) {
      puVar17 = PTR__OBJC_CLASS___UIImage_1000c20c0;
      _objc_allocWithZone();
      func_0x00010001c120(puVar19,uVar18);
      puVar10 = puVar19;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar19,uVar18);
      func_0x000100086ca0();
      _objc_release(puVar10);
      FUN_1000275d4(puVar19,uVar18);
      FUN_1000275d4(puVar19,uVar18);
    }
    else {
      puVar17 = (undefined *)0x0;
    }
  }
  uVar8 = uStack_6b8;
  FUN_100035ae4();
  uStack_408 = uStack_a8;
  uStack_410 = uStack_b0;
  uStack_3f8 = uStack_98;
  uStack_400 = uStack_a0;
  uStack_3e8 = uStack_88;
  uStack_3f0 = uStack_90;
  uStack_3e0 = uStack_80;
  uStack_428 = uStack_c8;
  uStack_430 = uStack_d0;
  uStack_418 = uStack_b8;
  uStack_420 = uStack_c0;
  lVar16 = 0x1000c4330;
  puStack_3d8 = puVar21;
  puStack_3d0 = puVar17;
  puStack_3c8 = puVar19;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  lStack_668 = lVar14;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar19 = (undefined8 *)(lVar14 - extraout_x8_01);
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(&uStack_488,puVar15);
  uStack_258 = uStack_460;
  uStack_260 = uStack_468;
  uStack_248 = uStack_450;
  uStack_250 = uStack_458;
  uStack_238 = uStack_440;
  uStack_240 = uStack_448;
  uStack_230 = uStack_438;
  uStack_278 = uStack_480;
  uStack_280 = uStack_488;
  uStack_268 = uStack_470;
  uStack_270 = uStack_478;
  iVar7 = 2;
  FUN_1000806c0(2,0x11,2,0);
  if (iVar7 == 0) {
    FUN_100039308(&uStack_280);
    lVar14 = 0;
    __s10Foundation3URLVMa();
    puVar10 = puVar19;
    (**(code **)(*(long *)(lVar14 + -8) + 0x38))(puVar19,1,1,lVar14);
  }
  else {
    func_0x000100035b78(puVar19,&uStack_280);
    puVar10 = &uStack_280;
    FUN_100039308();
  }
  func_0x00010003869c();
  __s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgF
            (lStack_678,puVar19,&UNK_1000b4790,puVar10);
  func_0x00010003987c(puVar19,0x1000c4330,&UNK_1000890b0);
  func_0x00010003992c(&uStack_430);
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(&uStack_538,puVar15);
  uStack_490 = uStack_4e8;
  uStack_4b8 = uStack_510;
  uStack_4c0 = uStack_518;
  uStack_4a8 = uStack_500;
  uStack_4b0 = uStack_508;
  uStack_498 = uStack_4f0;
  uStack_4a0 = uStack_4f8;
  uStack_4d8 = uStack_530;
  uStack_4e0 = uStack_538;
  uStack_4c8 = uStack_520;
  uStack_4d0 = uStack_528;
  if (uStack_4e8 >> 8 == 1) {
    if (lRam00000001000c5f70 != -1) {
      _swift_once(0x1000c5f70,0x1000405d0);
    }
    puVar19 = (undefined8 *)0x1000c5f60;
  }
  else {
    if (lRam00000001000c5f68 != -1) {
      _swift_once(0x1000c5f68,FUN_100040540);
    }
    puVar19 = (undefined8 *)0x1000c5f58;
  }
  uVar20 = *puVar19;
  _swift_retain(uVar20);
  FUN_100039308(&uStack_4e0);
  puStack_590 = &UNK_1000b4790;
  ppuVar11 = &puStack_590;
  puStack_588 = puVar10;
  _swift_getOpaqueTypeConformance
            (ppuVar11,PTR___s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgFQOMQ_1000b09f0
             ,1);
  puVar21 = puStack_670;
  lVar16 = lStack_678;
  lVar14 = lStack_6d0;
  __s7SwiftUI4ViewP9WidgetKitE22activityBackgroundTintyQrAA5ColorVSgF
            (lStack_6d0,uVar20,puStack_670,ppuVar11);
  _swift_release(uVar20);
  (**(code **)(lStack_6d8 + 8))(lVar16,puVar21);
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(&puStack_5e8,puVar15);
  uStack_568 = uStack_5c0;
  uStack_570 = uStack_5c8;
  uStack_558 = uStack_5b0;
  uStack_560 = uStack_5b8;
  uStack_548 = uStack_5a0;
  uStack_550 = uStack_5a8;
  uStack_540 = uStack_598;
  puStack_588 = ppuStack_5e0;
  puStack_590 = puStack_5e8;
  uStack_578 = uStack_5d0;
  uStack_580 = uStack_5d8;
  ppuVar12 = &puStack_590;
  FUN_100039308(ppuVar12);
  if (uStack_540._1_1_ == '\x01') {
    __s7SwiftUI5ColorV7primaryACvgZ();
  }
  else {
    ppuVar12 = (undefined **)PTR__OBJC_CLASS___UIColor_1000c20f8;
    _objc_opt_self(PTR__OBJC_CLASS___UIColor_1000c20f8);
    func_0x0001000875e0();
    _objc_retainAutoreleasedReturnValue();
    __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  }
  puStack_5e8 = puStack_670;
  ppuVar13 = &puStack_5e8;
  ppuStack_5e0 = ppuVar11;
  _swift_getOpaqueTypeConformance
            (ppuVar13,
             PTR___s7SwiftUI4ViewP9WidgetKitE22activityBackgroundTintyQrAA5ColorVSgFQOMQ_1000b09d0,1
            );
  lVar16 = lStack_6c0;
  __s7SwiftUI4ViewP9WidgetKitE35activitySystemActionForegroundColoryQrAA0J0VSgF
            (uVar8,ppuVar12,lStack_6c0,ppuVar13);
  _swift_release(ppuVar12);
  func_0x00010003987c(&uStack_360,0x1000c58e0,&UNK_10008b998);
  (**(code **)(lStack_6c8 + 8))(lVar14,lVar16);
  return;
}



/* Entry: 100037f7c; end: 100037f7f;  */

void FUN_100037f7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  undefined8 *puVar15;
  long extraout_x8_01;
  long lVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined8 auStack_720 [4];
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  long lStack_6d8;
  long lStack_6d0;
  long lStack_6c8;
  long lStack_6c0;
  undefined8 uStack_6b8;
  long lStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 *puStack_688;
  undefined8 uStack_680;
  long lStack_678;
  undefined *puStack_670;
  long lStack_668;
  undefined8 uStack_660;
  long lStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined *puStack_5e8;
  undefined **ppuStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined2 uStack_598;
  undefined *puStack_590;
  undefined8 *puStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined2 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  ushort uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  ushort uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined2 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined2 uStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined2 uStack_368;
  undefined8 uStack_360;
  long lStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
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
  undefined2 uStack_230;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined2 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
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
  undefined1 uStack_d8;
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
  undefined2 uStack_80;
  
  puVar19 = (undefined8 *)0x1000c5870;
  uStack_6b8 = param_1;
  uStack_680 = param_2;
  func_0x0001000100d0(0x1000c5870,&UNK_10008b950);
  puStack_688 = puVar19;
  __s9WidgetKit19ActivityViewContextV10attributesxvg(&uStack_2f0);
  lVar14 = lStack_2e8;
  uVar8 = uStack_2f0;
  puStack_670 = (undefined *)lStack_2e8;
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(&uStack_660,puVar19);
  uStack_178 = uStack_638;
  uStack_180 = uStack_640;
  uStack_168 = uStack_628;
  uStack_170 = uStack_630;
  uStack_158 = uStack_618;
  uStack_160 = uStack_620;
  uStack_150 = (undefined2)uStack_610;
  lStack_198 = lStack_658;
  uStack_1a0 = uStack_660;
  uStack_188 = uStack_648;
  uStack_190 = uStack_650;
  FUN_1000364a4();
  lStack_6b0 = lVar14;
  lStack_678 = uVar8;
  __s33FriendingLiveActivityWidgetBridge0abC13AvatarPayloadV09validatedG04from8matching14visualRevisionACSg10Foundation4DataVSg_S2SSgtFZ
            (&uStack_360);
  uVar5 = uStack_318;
  uVar4 = uStack_320;
  uVar3 = uStack_328;
  uVar2 = uStack_330;
  uVar1 = uStack_338;
  uVar9 = uStack_340;
  uVar20 = uStack_348;
  uVar8 = uStack_350;
  lStack_668 = lStack_358;
  uStack_698 = uStack_308;
  uStack_690 = uStack_310;
  uStack_6a8 = uStack_2f8;
  uStack_6a0 = uStack_300;
  _swift_bridgeObjectRelease(puStack_670);
  FUN_1000275d4(lStack_678,lStack_6b0);
  FUN_100039308(&uStack_1a0);
  puVar15 = puStack_688;
  lStack_6b0 = uStack_360;
  uStack_148 = uStack_360;
  lStack_140 = lStack_668;
  uStack_6e8 = uVar20;
  uStack_6e0 = uVar8;
  uStack_138 = uVar8;
  uStack_130 = uVar20;
  uStack_6f8 = uVar1;
  uStack_6f0 = uVar9;
  uStack_128 = uVar9;
  uStack_120 = uVar1;
  auStack_720[3] = uVar3;
  uStack_700 = uVar2;
  uStack_118 = uVar2;
  uStack_110 = uVar3;
  auStack_720[1] = uVar5;
  auStack_720[2] = uVar4;
  uStack_108 = uVar4;
  uStack_100 = uVar5;
  uStack_f8 = uStack_690;
  uStack_f0 = uStack_698;
  uStack_e8 = uStack_6a0;
  uStack_e0 = uStack_6a8;
  uStack_d8 = (undefined1)uStack_1a0;
  uStack_1e8 = uVar3;
  uStack_1f0 = uVar2;
  uStack_1f8 = uVar1;
  uStack_200 = uVar9;
  uStack_1b0 = (undefined1)uStack_1a0;
  uStack_1b8 = uStack_6a8;
  uStack_1c0 = uStack_6a0;
  uStack_1c8 = uStack_698;
  uStack_1d0 = uStack_690;
  uStack_1d8 = uVar5;
  uStack_1e0 = uVar4;
  lStack_218 = lStack_668;
  uStack_220 = uStack_360;
  uStack_208 = uVar20;
  uStack_210 = uVar8;
  lVar14 = 0x1000c5848;
  func_0x0001000100d0(0x1000c5848,&UNK_10008b8c8);
  lStack_6c8 = *(long *)(lVar14 + -8);
  lStack_6c0 = lVar14;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(lStack_6c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar21 = (undefined *)0x1000c5850;
  lStack_6d0 = (long)auStack_720 - extraout_x8;
  func_0x0001000100d0(0x1000c5850,&UNK_10008b8d0);
  lStack_6d8 = *(long *)(puVar21 + -8);
  puStack_670 = puVar21;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(lStack_6d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = ((long)auStack_720 - extraout_x8) - extraout_x8_00;
  puVar19 = puVar15;
  lStack_678 = lVar14;
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(&uStack_3b8);
  uStack_a8 = uStack_390;
  uStack_b0 = uStack_398;
  uStack_98 = uStack_380;
  uStack_a0 = uStack_388;
  uStack_88 = uStack_370;
  uStack_90 = uStack_378;
  uStack_80 = uStack_368;
  uStack_c8 = uStack_3b0;
  uStack_d0 = uStack_3b8;
  uStack_b8 = uStack_3a0;
  uStack_c0 = uStack_3a8;
  if (lStack_668 == 0) {
    puVar17 = (undefined *)0x0;
    puVar21 = (undefined *)0x0;
  }
  else {
    uStack_2f0 = lStack_6b0;
    lStack_2e8 = lStack_668;
    uStack_2b8 = uStack_328;
    uStack_2c0 = uStack_330;
    uStack_2a8 = uStack_318;
    uStack_2b0 = uStack_320;
    uStack_298 = uStack_308;
    uStack_2a0 = uStack_310;
    uStack_288 = uStack_2f8;
    uStack_290 = uStack_300;
    uStack_2d8 = uStack_348;
    uStack_2e0 = uStack_350;
    uStack_2c8 = uStack_338;
    uStack_2d0 = uStack_340;
    puVar19 = &uStack_148;
    FUN_1000397b4(puVar19,&uStack_660);
    __s33FriendingLiveActivityWidgetBridge0abC13AvatarPayloadV28validatedImageDataCandidatesSay10Foundation0J0VGvg
              ();
    lVar16 = puVar19[2];
    uVar18 = 0xffffffffffffffff;
    puVar15 = puVar19 + 5;
    do {
      if (uVar18 - lVar16 == -1) {
        _swift_bridgeObjectRelease(puVar19);
        puVar21 = (undefined *)0x0;
        goto LAB_100037b34;
      }
      uVar18 = uVar18 + 1;
      if ((ulong)puVar19[2] <= uVar18) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100037f4c);
        (*pcVar6)();
      }
      uVar8 = puVar15[-1];
      uVar20 = *puVar15;
      puVar21 = PTR__OBJC_CLASS___UIImage_1000c20c0;
      _objc_allocWithZone();
      func_0x00010001c120(uVar8,uVar20);
      uVar9 = uVar8;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar8,uVar20);
      func_0x000100086ca0();
      _objc_release(uVar9);
      func_0x000100018c5c(uVar8,uVar20);
      puVar15 = puVar15 + 2;
    } while (puVar21 == (undefined *)0x0);
    _swift_bridgeObjectRelease(puVar19);
LAB_100037b34:
    uVar18 = 0x1000c58e0;
    puVar19 = &uStack_360;
    func_0x00010003987c(puVar19,0x1000c58e0,&UNK_10008b998);
    uStack_660 = lStack_6b0;
    lStack_658 = lStack_668;
    uStack_650 = uStack_6e0;
    uStack_648 = uStack_6e8;
    uStack_640 = uStack_6f0;
    uStack_638 = uStack_6f8;
    uStack_630 = uStack_700;
    uStack_628 = auStack_720[3];
    uStack_620 = auStack_720[2];
    uStack_618 = auStack_720[1];
    uStack_610 = uStack_690;
    uStack_608 = uStack_698;
    uStack_600 = uStack_6a0;
    uStack_5f8 = uStack_6a8;
    __s33FriendingLiveActivityWidgetBridge0abC13AvatarPayloadV22validatedHeroImageData10Foundation0K0VSgvg
              ();
    puVar15 = puStack_688;
    if (uVar18 >> 0x3c < 0xf) {
      puVar17 = PTR__OBJC_CLASS___UIImage_1000c20c0;
      _objc_allocWithZone();
      func_0x00010001c120(puVar19,uVar18);
      puVar10 = puVar19;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar19,uVar18);
      func_0x000100086ca0();
      _objc_release(puVar10);
      FUN_1000275d4(puVar19,uVar18);
      FUN_1000275d4(puVar19,uVar18);
    }
    else {
      puVar17 = (undefined *)0x0;
    }
  }
  uVar8 = uStack_6b8;
  FUN_100035ae4();
  uStack_408 = uStack_a8;
  uStack_410 = uStack_b0;
  uStack_3f8 = uStack_98;
  uStack_400 = uStack_a0;
  uStack_3e8 = uStack_88;
  uStack_3f0 = uStack_90;
  uStack_3e0 = uStack_80;
  uStack_428 = uStack_c8;
  uStack_430 = uStack_d0;
  uStack_418 = uStack_b8;
  uStack_420 = uStack_c0;
  lVar16 = 0x1000c4330;
  puStack_3d8 = puVar21;
  puStack_3d0 = puVar17;
  puStack_3c8 = puVar19;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  lStack_668 = lVar14;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar19 = (undefined8 *)(lVar14 - extraout_x8_01);
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(&uStack_488,puVar15);
  uStack_258 = uStack_460;
  uStack_260 = uStack_468;
  uStack_248 = uStack_450;
  uStack_250 = uStack_458;
  uStack_238 = uStack_440;
  uStack_240 = uStack_448;
  uStack_230 = uStack_438;
  uStack_278 = uStack_480;
  uStack_280 = uStack_488;
  uStack_268 = uStack_470;
  uStack_270 = uStack_478;
  iVar7 = 2;
  FUN_1000806c0(2,0x11,2,0);
  if (iVar7 == 0) {
    FUN_100039308(&uStack_280);
    lVar14 = 0;
    __s10Foundation3URLVMa();
    puVar10 = puVar19;
    (**(code **)(*(long *)(lVar14 + -8) + 0x38))(puVar19,1,1,lVar14);
  }
  else {
    func_0x000100035b78(puVar19,&uStack_280);
    puVar10 = &uStack_280;
    FUN_100039308();
  }
  func_0x00010003869c();
  __s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgF
            (lStack_678,puVar19,&UNK_1000b4790,puVar10);
  func_0x00010003987c(puVar19,0x1000c4330,&UNK_1000890b0);
  func_0x00010003992c(&uStack_430);
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(&uStack_538,puVar15);
  uStack_490 = uStack_4e8;
  uStack_4b8 = uStack_510;
  uStack_4c0 = uStack_518;
  uStack_4a8 = uStack_500;
  uStack_4b0 = uStack_508;
  uStack_498 = uStack_4f0;
  uStack_4a0 = uStack_4f8;
  uStack_4d8 = uStack_530;
  uStack_4e0 = uStack_538;
  uStack_4c8 = uStack_520;
  uStack_4d0 = uStack_528;
  if (uStack_4e8 >> 8 == 1) {
    if (lRam00000001000c5f70 != -1) {
      _swift_once(0x1000c5f70,0x1000405d0);
    }
    puVar19 = (undefined8 *)0x1000c5f60;
  }
  else {
    if (lRam00000001000c5f68 != -1) {
      _swift_once(0x1000c5f68,FUN_100040540);
    }
    puVar19 = (undefined8 *)0x1000c5f58;
  }
  uVar20 = *puVar19;
  _swift_retain(uVar20);
  FUN_100039308(&uStack_4e0);
  puStack_590 = &UNK_1000b4790;
  ppuVar11 = &puStack_590;
  puStack_588 = puVar10;
  _swift_getOpaqueTypeConformance
            (ppuVar11,PTR___s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgFQOMQ_1000b09f0
             ,1);
  puVar21 = puStack_670;
  lVar16 = lStack_678;
  lVar14 = lStack_6d0;
  __s7SwiftUI4ViewP9WidgetKitE22activityBackgroundTintyQrAA5ColorVSgF
            (lStack_6d0,uVar20,puStack_670,ppuVar11);
  _swift_release(uVar20);
  (**(code **)(lStack_6d8 + 8))(lVar16,puVar21);
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(&puStack_5e8,puVar15);
  uStack_568 = uStack_5c0;
  uStack_570 = uStack_5c8;
  uStack_558 = uStack_5b0;
  uStack_560 = uStack_5b8;
  uStack_548 = uStack_5a0;
  uStack_550 = uStack_5a8;
  uStack_540 = uStack_598;
  puStack_588 = ppuStack_5e0;
  puStack_590 = puStack_5e8;
  uStack_578 = uStack_5d0;
  uStack_580 = uStack_5d8;
  ppuVar12 = &puStack_590;
  FUN_100039308(ppuVar12);
  if (uStack_540._1_1_ == '\x01') {
    __s7SwiftUI5ColorV7primaryACvgZ();
  }
  else {
    ppuVar12 = (undefined **)PTR__OBJC_CLASS___UIColor_1000c20f8;
    _objc_opt_self(PTR__OBJC_CLASS___UIColor_1000c20f8);
    func_0x0001000875e0();
    _objc_retainAutoreleasedReturnValue();
    __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  }
  puStack_5e8 = puStack_670;
  ppuVar13 = &puStack_5e8;
  ppuStack_5e0 = ppuVar11;
  _swift_getOpaqueTypeConformance
            (ppuVar13,
             PTR___s7SwiftUI4ViewP9WidgetKitE22activityBackgroundTintyQrAA5ColorVSgFQOMQ_1000b09d0,1
            );
  lVar16 = lStack_6c0;
  __s7SwiftUI4ViewP9WidgetKitE35activitySystemActionForegroundColoryQrAA0J0VSgF
            (uVar8,ppuVar12,lStack_6c0,ppuVar13);
  _swift_release(ppuVar12);
  func_0x00010003987c(&uStack_360,0x1000c58e0,&UNK_10008b998);
  (**(code **)(lStack_6c8 + 8))(lVar14,lVar16);
  return;
}



/* Entry: 100037f80; end: 100038657;  */

void FUN_100037f80(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x12;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  ulong uVar20;
  long lStack_3a0;
  code *pcStack_398;
  ulong uStack_390;
  ulong uStack_388;
  long lStack_380;
  undefined *puStack_378;
  long lStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  undefined1 *puStack_338;
  long lStack_330;
  undefined8 uStack_328;
  ulong uStack_320;
  code *pcStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined2 uStack_2b0;
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
  undefined2 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
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
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
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
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined2 uStack_100;
  undefined8 uStack_f0;
  long lStack_e8;
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
  
  lVar14 = 0x1000c5870;
  func_0x0001000100d0(0x1000c5870,&UNK_10008b950);
  __s9WidgetKit19ActivityViewContextV10attributesxvg(&uStack_1c0);
  lVar15 = lStack_1b8;
  uVar5 = uStack_1c0;
  lStack_330 = lVar14;
  uStack_308 = param_2;
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(&uStack_300,lVar14);
  uStack_128 = uStack_2d8;
  uStack_130 = uStack_2e0;
  uStack_118 = uStack_2c8;
  uStack_120 = uStack_2d0;
  uStack_108 = uStack_2b8;
  uStack_110 = uStack_2c0;
  uStack_100 = uStack_2b0;
  uStack_148 = uStack_2f8;
  uStack_150 = uStack_300;
  uStack_138 = uStack_2e8;
  uStack_140 = uStack_2f0;
  lVar14 = lVar15;
  FUN_1000364a4(uVar5,lVar15);
  __s33FriendingLiveActivityWidgetBridge0abC13AvatarPayloadV09validatedG04from8matching14visualRevisionACSg10Foundation4DataVSg_S2SSgtFZ
            (&uStack_230);
  uStack_a8 = uStack_1e8;
  uStack_b0 = uStack_1f0;
  uStack_98 = uStack_1d8;
  uStack_a0 = uStack_1e0;
  uStack_88 = uStack_1c8;
  uStack_90 = uStack_1d0;
  lStack_e8 = lStack_228;
  uStack_f0 = uStack_230;
  uStack_d8 = uStack_218;
  uStack_e0 = uStack_220;
  uStack_c8 = uStack_208;
  uStack_d0 = uStack_210;
  uStack_b8 = uStack_1f8;
  uStack_c0 = uStack_200;
  _swift_bridgeObjectRelease(lVar15);
  FUN_1000275d4(uVar5,lVar14);
  FUN_100039308(&uStack_150);
  uStack_80 = (undefined1)uStack_150;
  uStack_328 = param_1;
  if (lStack_228 == 0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    uStack_1c0 = uStack_230;
    lStack_1b8 = lStack_228;
    uStack_188 = uStack_1f8;
    uStack_190 = uStack_200;
    uStack_178 = uStack_1e8;
    uStack_180 = uStack_1f0;
    uStack_168 = uStack_1d8;
    uStack_170 = uStack_1e0;
    uStack_158 = uStack_1c8;
    uStack_160 = uStack_1d0;
    uStack_1a8 = uStack_218;
    uStack_1b0 = uStack_220;
    uStack_198 = uStack_208;
    uStack_1a0 = uStack_210;
    puVar6 = &uStack_f0;
    FUN_1000397b4(puVar6,&uStack_300);
    __s33FriendingLiveActivityWidgetBridge0abC13AvatarPayloadV28validatedImageDataCandidatesSay10Foundation0J0VGvg
              ();
    lVar14 = puVar6[2];
    uVar18 = 0xffffffffffffffff;
    puVar12 = puVar6 + 5;
    do {
      if (uVar18 - lVar14 == -1) {
        _swift_bridgeObjectRelease(puVar6);
        puVar19 = (undefined *)0x0;
        goto LAB_100038164;
      }
      uVar18 = uVar18 + 1;
      if ((ulong)puVar6[2] <= uVar18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100038658);
        (*pcVar3)();
      }
      uVar5 = puVar12[-1];
      uVar9 = *puVar12;
      puVar19 = PTR__OBJC_CLASS___UIImage_1000c20c0;
      _objc_allocWithZone();
      func_0x00010001c120(uVar5,uVar9);
      uVar7 = uVar5;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar5,uVar9);
      func_0x000100086ca0();
      _objc_release(uVar7);
      func_0x000100018c5c(uVar5,uVar9);
      puVar12 = puVar12 + 2;
    } while (puVar19 == (undefined *)0x0);
    _swift_bridgeObjectRelease(puVar6);
LAB_100038164:
    func_0x00010003987c(&uStack_230,0x1000c58e0,&UNK_10008b998);
  }
  lVar14 = 0;
  __s9WidgetKit13DynamicIslandVMa();
  lStack_348 = *(long *)(lVar14 + -8);
  lStack_340 = lVar14;
  puStack_338 = (undefined1 *)&lStack_3a0;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_348 + 0x40));
  lVar1 = lStack_330;
  lVar14 = (long)&lStack_3a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar15 = *(long *)(lStack_330 + -8);
  lStack_380 = lVar14;
  lStack_350 = lVar14;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  uStack_390 = extraout_x12 + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar14 - uStack_390;
  pcStack_398 = *(code **)(lVar15 + 0x10);
  (*pcStack_398)(lVar14,uStack_308,lVar1);
  uVar20 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar18 = uVar20 + 0x10 & (uVar20 ^ 0xffffffffffffffff);
  lStack_370 = uVar18 + extraout_x12;
  uVar17 = lStack_370 + 7U & 0xfffffffffffffff8;
  puVar8 = &UNK_1000b4360;
  uStack_320 = uVar18;
  _swift_allocObject(&UNK_1000b4360,uVar17 + 8,uVar20 | 7);
  pcStack_310 = *(code **)(lVar15 + 0x20);
  puStack_360 = puVar8;
  (*pcStack_310)(puVar8 + uVar18,lVar14,lVar1);
  *(undefined **)(puVar8 + uVar17) = puVar19;
  lStack_358 = lVar14;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  uVar5 = uStack_308;
  uVar18 = uStack_390;
  pcVar3 = pcStack_398;
  lVar14 = lVar14 - uStack_390;
  (*pcStack_398)(lVar14,uStack_308,lVar1);
  puVar8 = &UNK_1000b4388;
  uStack_388 = uVar17;
  _swift_allocObject(&UNK_1000b4388,uVar17 + 8,uVar20 | 7);
  puStack_368 = puVar8;
  (*pcStack_310)(puVar8 + uStack_320,lVar14,lVar1);
  *(undefined **)(puVar8 + uVar17) = puVar19;
  lStack_3a0 = lVar14;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar14 = lVar14 - uVar18;
  (*pcVar3)(lVar14,uVar5,lVar1);
  puVar8 = &UNK_1000b43b0;
  _swift_allocObject(&UNK_1000b43b0,lStack_370,uVar20 | 7);
  pcVar2 = pcStack_310;
  uVar17 = uStack_320;
  puStack_378 = puVar8;
  (*pcStack_310)(puVar8 + uStack_320,lVar14,lVar1);
  lVar14 = lStack_3a0;
  lStack_370 = lStack_3a0;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar14 = lVar14 - uVar18;
  (*pcVar3)(lVar14,uVar5,lVar1);
  uVar18 = uStack_388;
  puVar8 = &UNK_1000b43d8;
  _swift_allocObject(&UNK_1000b43d8,uStack_388 + 8,uVar20 | 7);
  (*pcVar2)(puVar8 + uVar17,lVar14,lVar1);
  *(undefined **)(puVar8 + uVar18) = puVar19;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar5 = 0x1000c5878;
  pcStack_310 = (code *)puVar19;
  func_0x0001000100d0(0x1000c5878,&UNK_10008b958);
  uVar9 = 0x1000c5880;
  func_0x0001000100d0(0x1000c5880,&UNK_10008b960);
  uVar7 = 0x1000c5888;
  func_0x0001000100d0(0x1000c5888,&UNK_10008b968);
  uVar10 = 0x1000c5890;
  func_0x000100010120(0x1000c5890,&UNK_10008b970);
  uVar11 = uVar10;
  func_0x000100039524();
  puVar12 = &uStack_300;
  uStack_300 = uVar10;
  uStack_2f8 = uVar11;
  _swift_getOpaqueTypeConformance
            (puVar12,
             PTR___s9WidgetKit27DynamicIslandExpandedRegionV19_viewRepresentationQrvpQOMQ_1000b0b70,
             1);
  uVar10 = 0x1000c58b0;
  func_0x000100010120(0x1000c58b0,&UNK_10008b980);
  uVar11 = uVar10;
  FUN_1000395ec();
  puVar6 = &uStack_300;
  uStack_300 = uVar10;
  uStack_2f8 = uVar11;
  _swift_getOpaqueTypeConformance(puVar6,PTR___s7SwiftUI4ViewPAAE10unredactedQryFQOMQ_1000b0710,1);
  puVar13 = puVar6;
  FUN_1000396a4();
  lVar15 = lStack_380;
  *(undefined8 **)(lVar14 + -0x10) = puVar13;
  *(undefined8 **)(lVar14 + -8) = puVar6;
  *(undefined8 **)(lVar14 + -0x20) = puVar12;
  *(undefined8 **)(lVar14 + -0x18) = puVar6;
  *(undefined8 *)(lVar14 + -0x30) = uVar7;
  *(undefined8 *)(lVar14 + -0x28) = uVar9;
  *(undefined8 *)(lVar14 + -0x40) = uVar5;
  *(undefined8 *)(lVar14 + -0x38) = uVar9;
  __s9WidgetKit13DynamicIslandV8expanded14compactLeading0F8Trailing7minimalAcA0cD15ExpandedContentVyxGyc_q_ycq0_ycq1_yctc7SwiftUI4ViewRzAkLR_AkLR0_AkLR1_r2_lufC
            (FUN_100039340,puStack_360,FUN_10003939c,puStack_368,FUN_100039404,puStack_378,
             FUN_100039960,puVar8);
  lVar16 = lStack_350;
  lVar14 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar16 - extraout_x8_00;
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(&uStack_288,lVar1);
  uStack_2d8 = uStack_260;
  uStack_2e0 = uStack_268;
  uStack_2c8 = uStack_250;
  uStack_2d0 = uStack_258;
  uStack_2b8 = uStack_240;
  uStack_2c0 = uStack_248;
  uStack_2b0 = uStack_238;
  uStack_2f8 = uStack_280;
  uStack_300 = uStack_288;
  uStack_2e8 = uStack_270;
  uStack_2f0 = uStack_278;
  iVar4 = 2;
  FUN_1000806c0(2,0x11,2,0);
  if (iVar4 == 0) {
    FUN_100039308(&uStack_300);
    lVar14 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar14 + -8) + 0x38))(lVar16,1,1,lVar14);
  }
  else {
    func_0x000100035b78(lVar16,&uStack_300);
    FUN_100039308(&uStack_300);
  }
  __s9WidgetKit13DynamicIslandV9widgetURLyAC10Foundation0F0VSgF(uStack_328,lVar16);
  func_0x00010003987c(&uStack_230,0x1000c58e0,&UNK_10008b998);
  _objc_release(pcStack_310);
  func_0x00010003987c(lVar16,0x1000c4330,&UNK_1000890b0);
  (**(code **)(lStack_348 + 8))(lVar15,lStack_340);
  return;
}



/* Entry: 100038658; end: 10003865b;  */

void FUN_100038658(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x12;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  ulong uVar20;
  long lStack_3a0;
  code *pcStack_398;
  ulong uStack_390;
  ulong uStack_388;
  long lStack_380;
  undefined *puStack_378;
  long lStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  undefined1 *puStack_338;
  long lStack_330;
  undefined8 uStack_328;
  ulong uStack_320;
  code *pcStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined2 uStack_2b0;
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
  undefined2 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
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
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
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
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined2 uStack_100;
  undefined8 uStack_f0;
  long lStack_e8;
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
  
  lVar14 = 0x1000c5870;
  func_0x0001000100d0(0x1000c5870,&UNK_10008b950);
  __s9WidgetKit19ActivityViewContextV10attributesxvg(&uStack_1c0);
  lVar15 = lStack_1b8;
  uVar5 = uStack_1c0;
  lStack_330 = lVar14;
  uStack_308 = param_2;
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(&uStack_300,lVar14);
  uStack_128 = uStack_2d8;
  uStack_130 = uStack_2e0;
  uStack_118 = uStack_2c8;
  uStack_120 = uStack_2d0;
  uStack_108 = uStack_2b8;
  uStack_110 = uStack_2c0;
  uStack_100 = uStack_2b0;
  uStack_148 = uStack_2f8;
  uStack_150 = uStack_300;
  uStack_138 = uStack_2e8;
  uStack_140 = uStack_2f0;
  lVar14 = lVar15;
  FUN_1000364a4(uVar5,lVar15);
  __s33FriendingLiveActivityWidgetBridge0abC13AvatarPayloadV09validatedG04from8matching14visualRevisionACSg10Foundation4DataVSg_S2SSgtFZ
            (&uStack_230);
  uStack_a8 = uStack_1e8;
  uStack_b0 = uStack_1f0;
  uStack_98 = uStack_1d8;
  uStack_a0 = uStack_1e0;
  uStack_88 = uStack_1c8;
  uStack_90 = uStack_1d0;
  lStack_e8 = lStack_228;
  uStack_f0 = uStack_230;
  uStack_d8 = uStack_218;
  uStack_e0 = uStack_220;
  uStack_c8 = uStack_208;
  uStack_d0 = uStack_210;
  uStack_b8 = uStack_1f8;
  uStack_c0 = uStack_200;
  _swift_bridgeObjectRelease(lVar15);
  FUN_1000275d4(uVar5,lVar14);
  FUN_100039308(&uStack_150);
  uStack_80 = (undefined1)uStack_150;
  uStack_328 = param_1;
  if (lStack_228 == 0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    uStack_1c0 = uStack_230;
    lStack_1b8 = lStack_228;
    uStack_188 = uStack_1f8;
    uStack_190 = uStack_200;
    uStack_178 = uStack_1e8;
    uStack_180 = uStack_1f0;
    uStack_168 = uStack_1d8;
    uStack_170 = uStack_1e0;
    uStack_158 = uStack_1c8;
    uStack_160 = uStack_1d0;
    uStack_1a8 = uStack_218;
    uStack_1b0 = uStack_220;
    uStack_198 = uStack_208;
    uStack_1a0 = uStack_210;
    puVar6 = &uStack_f0;
    FUN_1000397b4(puVar6,&uStack_300);
    __s33FriendingLiveActivityWidgetBridge0abC13AvatarPayloadV28validatedImageDataCandidatesSay10Foundation0J0VGvg
              ();
    lVar14 = puVar6[2];
    uVar18 = 0xffffffffffffffff;
    puVar12 = puVar6 + 5;
    do {
      if (uVar18 - lVar14 == -1) {
        _swift_bridgeObjectRelease(puVar6);
        puVar19 = (undefined *)0x0;
        goto LAB_100038164;
      }
      uVar18 = uVar18 + 1;
      if ((ulong)puVar6[2] <= uVar18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100038658);
        (*pcVar3)();
      }
      uVar5 = puVar12[-1];
      uVar9 = *puVar12;
      puVar19 = PTR__OBJC_CLASS___UIImage_1000c20c0;
      _objc_allocWithZone();
      func_0x00010001c120(uVar5,uVar9);
      uVar7 = uVar5;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar5,uVar9);
      func_0x000100086ca0();
      _objc_release(uVar7);
      func_0x000100018c5c(uVar5,uVar9);
      puVar12 = puVar12 + 2;
    } while (puVar19 == (undefined *)0x0);
    _swift_bridgeObjectRelease(puVar6);
LAB_100038164:
    func_0x00010003987c(&uStack_230,0x1000c58e0,&UNK_10008b998);
  }
  lVar14 = 0;
  __s9WidgetKit13DynamicIslandVMa();
  lStack_348 = *(long *)(lVar14 + -8);
  lStack_340 = lVar14;
  puStack_338 = (undefined1 *)&lStack_3a0;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_348 + 0x40));
  lVar1 = lStack_330;
  lVar14 = (long)&lStack_3a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar15 = *(long *)(lStack_330 + -8);
  lStack_380 = lVar14;
  lStack_350 = lVar14;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  uStack_390 = extraout_x12 + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar14 - uStack_390;
  pcStack_398 = *(code **)(lVar15 + 0x10);
  (*pcStack_398)(lVar14,uStack_308,lVar1);
  uVar20 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar18 = uVar20 + 0x10 & (uVar20 ^ 0xffffffffffffffff);
  lStack_370 = uVar18 + extraout_x12;
  uVar17 = lStack_370 + 7U & 0xfffffffffffffff8;
  puVar8 = &UNK_1000b4360;
  uStack_320 = uVar18;
  _swift_allocObject(&UNK_1000b4360,uVar17 + 8,uVar20 | 7);
  pcStack_310 = *(code **)(lVar15 + 0x20);
  puStack_360 = puVar8;
  (*pcStack_310)(puVar8 + uVar18,lVar14,lVar1);
  *(undefined **)(puVar8 + uVar17) = puVar19;
  lStack_358 = lVar14;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  uVar5 = uStack_308;
  uVar18 = uStack_390;
  pcVar3 = pcStack_398;
  lVar14 = lVar14 - uStack_390;
  (*pcStack_398)(lVar14,uStack_308,lVar1);
  puVar8 = &UNK_1000b4388;
  uStack_388 = uVar17;
  _swift_allocObject(&UNK_1000b4388,uVar17 + 8,uVar20 | 7);
  puStack_368 = puVar8;
  (*pcStack_310)(puVar8 + uStack_320,lVar14,lVar1);
  *(undefined **)(puVar8 + uVar17) = puVar19;
  lStack_3a0 = lVar14;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar14 = lVar14 - uVar18;
  (*pcVar3)(lVar14,uVar5,lVar1);
  puVar8 = &UNK_1000b43b0;
  _swift_allocObject(&UNK_1000b43b0,lStack_370,uVar20 | 7);
  pcVar2 = pcStack_310;
  uVar17 = uStack_320;
  puStack_378 = puVar8;
  (*pcStack_310)(puVar8 + uStack_320,lVar14,lVar1);
  lVar14 = lStack_3a0;
  lStack_370 = lStack_3a0;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar14 = lVar14 - uVar18;
  (*pcVar3)(lVar14,uVar5,lVar1);
  uVar18 = uStack_388;
  puVar8 = &UNK_1000b43d8;
  _swift_allocObject(&UNK_1000b43d8,uStack_388 + 8,uVar20 | 7);
  (*pcVar2)(puVar8 + uVar17,lVar14,lVar1);
  *(undefined **)(puVar8 + uVar18) = puVar19;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar5 = 0x1000c5878;
  pcStack_310 = (code *)puVar19;
  func_0x0001000100d0(0x1000c5878,&UNK_10008b958);
  uVar9 = 0x1000c5880;
  func_0x0001000100d0(0x1000c5880,&UNK_10008b960);
  uVar7 = 0x1000c5888;
  func_0x0001000100d0(0x1000c5888,&UNK_10008b968);
  uVar10 = 0x1000c5890;
  func_0x000100010120(0x1000c5890,&UNK_10008b970);
  uVar11 = uVar10;
  func_0x000100039524();
  puVar12 = &uStack_300;
  uStack_300 = uVar10;
  uStack_2f8 = uVar11;
  _swift_getOpaqueTypeConformance
            (puVar12,
             PTR___s9WidgetKit27DynamicIslandExpandedRegionV19_viewRepresentationQrvpQOMQ_1000b0b70,
             1);
  uVar10 = 0x1000c58b0;
  func_0x000100010120(0x1000c58b0,&UNK_10008b980);
  uVar11 = uVar10;
  FUN_1000395ec();
  puVar6 = &uStack_300;
  uStack_300 = uVar10;
  uStack_2f8 = uVar11;
  _swift_getOpaqueTypeConformance(puVar6,PTR___s7SwiftUI4ViewPAAE10unredactedQryFQOMQ_1000b0710,1);
  puVar13 = puVar6;
  FUN_1000396a4();
  lVar15 = lStack_380;
  *(undefined8 **)(lVar14 + -0x10) = puVar13;
  *(undefined8 **)(lVar14 + -8) = puVar6;
  *(undefined8 **)(lVar14 + -0x20) = puVar12;
  *(undefined8 **)(lVar14 + -0x18) = puVar6;
  *(undefined8 *)(lVar14 + -0x30) = uVar7;
  *(undefined8 *)(lVar14 + -0x28) = uVar9;
  *(undefined8 *)(lVar14 + -0x40) = uVar5;
  *(undefined8 *)(lVar14 + -0x38) = uVar9;
  __s9WidgetKit13DynamicIslandV8expanded14compactLeading0F8Trailing7minimalAcA0cD15ExpandedContentVyxGyc_q_ycq0_ycq1_yctc7SwiftUI4ViewRzAkLR_AkLR0_AkLR1_r2_lufC
            (FUN_100039340,puStack_360,FUN_10003939c,puStack_368,FUN_100039404,puStack_378,
             FUN_100039960,puVar8);
  lVar16 = lStack_350;
  lVar14 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar16 - extraout_x8_00;
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(&uStack_288,lVar1);
  uStack_2d8 = uStack_260;
  uStack_2e0 = uStack_268;
  uStack_2c8 = uStack_250;
  uStack_2d0 = uStack_258;
  uStack_2b8 = uStack_240;
  uStack_2c0 = uStack_248;
  uStack_2b0 = uStack_238;
  uStack_2f8 = uStack_280;
  uStack_300 = uStack_288;
  uStack_2e8 = uStack_270;
  uStack_2f0 = uStack_278;
  iVar4 = 2;
  FUN_1000806c0(2,0x11,2,0);
  if (iVar4 == 0) {
    FUN_100039308(&uStack_300);
    lVar14 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar14 + -8) + 0x38))(lVar16,1,1,lVar14);
  }
  else {
    func_0x000100035b78(lVar16,&uStack_300);
    FUN_100039308(&uStack_300);
  }
  __s9WidgetKit13DynamicIslandV9widgetURLyAC10Foundation0F0VSgF(uStack_328,lVar16);
  func_0x00010003987c(&uStack_230,0x1000c58e0,&UNK_10008b998);
  _objc_release(pcStack_310);
  func_0x00010003987c(lVar16,0x1000c4330,&UNK_1000890b0);
  (**(code **)(lStack_348 + 8))(lVar15,lStack_340);
  return;
}



/* Entry: 10003865c; end: 1000386db;  */

void FUN_10003865c(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5840 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s33FriendingLiveActivityWidgetBridge0A10AttributesV0C3Kit0cF0AAMc_1000b0f88;
  _swift_getWitnessTable
            (PTR___s33FriendingLiveActivityWidgetBridge0A10AttributesV0C3Kit0cF0AAMc_1000b0f88,
             PTR___s33FriendingLiveActivityWidgetBridge0A10AttributesVN_1000b0fa8);
  puRam00000001000c5840 = puVar1;
  return;
}



/* Entry: 1000386dc; end: 1000386eb;  */

void FUN_1000386dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_1000b1608)(param_1,&UNK_1000900c4,1);
  return;
}



/* Entry: 1000386ec; end: 100038853;  */

void FUN_1000386ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long lVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0x1000c58f0;
  func_0x0001000100d0(0x1000c58f0,&UNK_10008b9a8);
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&uStack_80 - extraout_x8;
  lVar2 = 0;
  __s9WidgetKit35DynamicIslandExpandedRegionPositionVMa();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  __s9WidgetKit35DynamicIslandExpandedRegionPositionV6bottomACvgZ(lVar2);
  uVar3 = 0x1000c5890;
  lStack_60 = param_2;
  uStack_58 = param_3;
  func_0x0001000100d0(0x1000c5890,&UNK_10008b970);
  uVar4 = uVar3;
  func_0x000100039524();
  __s9WidgetKit27DynamicIslandExpandedRegionV_8priority7contentACyxGAA0cdeF8PositionV_SdxyXEtcfC
            (lVar7,0,lVar2,FUN_1000397f0,auStack_70,uVar3,uVar4);
  uVar5 = 0x1000c5878;
  lStack_60 = lVar7;
  func_0x0001000100d0(0x1000c5878,&UNK_10008b958);
  puVar6 = &uStack_80;
  uStack_80 = uVar3;
  uStack_78 = uVar4;
  _swift_getOpaqueTypeConformance
            (puVar6,
             PTR___s9WidgetKit27DynamicIslandExpandedRegionV19_viewRepresentationQrvpQOMQ_1000b0b70,
             1);
  __s9WidgetKit28DynamicIslandExpandedContentV7contentACyxGxyXE_tcfC
            (param_1,FUN_1000397f8,auStack_70,uVar5,puVar6);
  (**(code **)(lVar8 + 8))(lVar7,lVar1);
  return;
}



/* Entry: 100038854; end: 10003893f;  */

void FUN_100038854(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
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
  
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  *param_1 = param_2;
  param_1[1] = 0x4028000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar1 = 0x1000c58f8;
  func_0x0001000100d0(0x1000c58f8,&UNK_10008b9b0);
  FUN_100038940((long)param_1 + (long)*(int *)(lVar1 + 0x2c));
  __s7SwiftUI9AlignmentV7leadingACvgZ();
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (&uStack_a0,0,1,0,1,0x7ff0000000000000,0,0,1,0,1);
  lVar1 = 0x1000c5890;
  func_0x0001000100d0(0x1000c5890,&UNK_10008b970);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar1 + 0x24));
  param_1[9] = uStack_58;
  param_1[8] = uStack_60;
  param_1[0xb] = uStack_48;
  param_1[10] = uStack_50;
  param_1[0xd] = uStack_38;
  param_1[0xc] = uStack_40;
  param_1[1] = uStack_98;
  *param_1 = uStack_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  param_1[5] = uStack_78;
  param_1[4] = uStack_80;
  param_1[7] = uStack_68;
  param_1[6] = uStack_70;
  return;
}



/* Entry: 100038940; end: 100038ee3;  */

void FUN_100038940(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x12;
  code *pcVar12;
  long lVar13;
  undefined8 uStack_8a0;
  undefined1 auStack_898 [8];
  undefined8 uStack_890;
  undefined1 auStack_888 [8];
  undefined8 auStack_880 [2];
  long lStack_870;
  long lStack_868;
  long lStack_860;
  undefined1 auStack_858 [208];
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined2 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined2 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
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
  undefined8 uStack_200;
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
  undefined2 uStack_1a0;
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
  undefined2 uStack_140;
  undefined6 uStack_13e;
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
  
  lVar5 = 0x1000c5880;
  lStack_860 = param_1;
  func_0x0001000100d0(0x1000c5880,&UNK_10008b960);
  lStack_868 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_868 + 0x40));
  lVar13 = (long)&lStack_870 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_870 = lVar13;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar13 = lVar13 - extraout_x12;
  uVar6 = 0x1000c5870;
  puVar11 = &UNK_10008b950;
  func_0x0001000100d0(0x1000c5870,&UNK_10008b950);
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(&uStack_c8);
  uVar7 = param_3;
  _objc_retain(param_3);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_258,0x4049000000000000,0,0x4049000000000000,0,uVar7,puVar11);
  uStack_298 = uStack_a0;
  uStack_2a0 = uStack_a8;
  uStack_288 = uStack_90;
  uStack_290 = uStack_98;
  uStack_278 = uStack_80;
  uStack_280 = uStack_88;
  uStack_2b8 = uStack_c0;
  uStack_2c0 = uStack_c8;
  uStack_2a8 = uStack_b0;
  uStack_2b0 = uStack_b8;
  uStack_270 = uStack_78;
  uStack_268 = 0x4049000000000000;
  uVar7 = 0x1000c58b0;
  uVar8 = uVar7;
  uStack_260 = param_3;
  func_0x0001000100d0(0x1000c58b0,&UNK_10008b980);
  uVar9 = uVar8;
  FUN_1000395ec();
  __s7SwiftUI4ViewPAAE10unredactedQryF(lVar13,uVar8,uVar9);
  func_0x00010003987c(&uStack_2c0,0x1000c58b0,&UNK_10008b980);
  uVar8 = uVar6;
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(&uStack_658);
  __s7SwiftUI9AlignmentV7leadingACvgZ();
  *(undefined8 *)(lVar13 + -0x10) = uVar8;
  *(undefined8 *)(lVar13 + -8) = uVar7;
  *(undefined1 *)(lVar13 + -0x18) = 1;
  *(undefined8 *)(lVar13 + -0x20) = 0;
  *(undefined1 *)(lVar13 + -0x28) = 1;
  *(undefined8 *)(lVar13 + -0x30) = 0;
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (&uStack_138,0,1,0,1,0x7ff0000000000000,0,0,1);
  uStack_140 = uStack_608;
  uStack_540 = uStack_d0;
  uStack_148 = uStack_610;
  uStack_150 = uStack_618;
  uStack_158 = uStack_620;
  uStack_160 = uStack_628;
  uStack_168 = uStack_630;
  uStack_170 = uStack_638;
  uStack_178 = uStack_640;
  uStack_180 = uStack_648;
  uStack_188 = uStack_650;
  uStack_190 = uStack_658;
  uStack_558 = uStack_e8;
  uStack_560 = uStack_f0;
  uStack_548 = uStack_d8;
  uStack_550 = uStack_e0;
  uStack_598 = uStack_128;
  uStack_5a0 = uStack_130;
  uStack_588 = uStack_118;
  uStack_590 = uStack_120;
  uStack_578 = uStack_108;
  uStack_580 = uStack_110;
  uStack_568 = uStack_f8;
  uStack_570 = uStack_100;
  uStack_5d8 = uStack_630;
  uStack_5e0 = uStack_638;
  uStack_5c8 = uStack_620;
  uStack_5d0 = uStack_628;
  uStack_5f8 = uStack_650;
  uStack_600 = uStack_658;
  uStack_5e8 = uStack_640;
  uStack_5f0 = uStack_648;
  uStack_5b8 = uStack_610;
  uStack_5c0 = uStack_618;
  uStack_5a8 = uStack_138;
  uStack_488 = uStack_e8;
  uStack_490 = uStack_f0;
  uStack_478 = uStack_d8;
  uStack_480 = uStack_e0;
  uStack_470 = uStack_d0;
  uStack_4c8 = uStack_128;
  uStack_4d0 = uStack_130;
  uStack_4b8 = uStack_118;
  uStack_4c0 = uStack_120;
  uStack_4a8 = uStack_108;
  uStack_4b0 = uStack_110;
  uStack_498 = uStack_f8;
  uStack_4a0 = uStack_100;
  uStack_508 = uStack_630;
  uStack_510 = uStack_638;
  uStack_4f8 = uStack_620;
  uStack_500 = uStack_628;
  uStack_4e8 = uStack_610;
  uStack_4f0 = uStack_618;
  uStack_4d8 = uStack_138;
  uStack_528 = uStack_650;
  uStack_530 = uStack_658;
  uStack_518 = uStack_640;
  uStack_520 = uStack_648;
  func_0x000100039834(&uStack_600,&uStack_2c0,0x1000c5900,&UNK_10008b9b8);
  func_0x00010003987c(&uStack_530,0x1000c5900,&UNK_10008b9b8);
  uStack_3b8 = uStack_e8;
  uStack_3c0 = uStack_f0;
  uStack_3a8 = uStack_d8;
  uStack_3b0 = uStack_e0;
  uStack_410 = CONCAT62(uStack_13e,uStack_140);
  uStack_3f8 = uStack_128;
  uStack_400 = uStack_130;
  uStack_3e8 = uStack_118;
  uStack_3f0 = uStack_120;
  uStack_3d8 = uStack_108;
  uStack_3e0 = uStack_110;
  uStack_3c8 = uStack_f8;
  uStack_3d0 = uStack_100;
  uStack_438 = uStack_168;
  uStack_440 = uStack_170;
  uStack_428 = uStack_158;
  uStack_430 = uStack_160;
  uStack_418 = uStack_148;
  uStack_420 = uStack_150;
  uStack_408 = uStack_138;
  uStack_458 = uStack_188;
  uStack_460 = uStack_190;
  uStack_448 = uStack_178;
  uStack_450 = uStack_180;
  uStack_3a0 = uStack_d0;
  uStack_398 = 0x3ff0000000000000;
  uStack_2f8 = uStack_f8;
  uStack_300 = uStack_100;
  uStack_2e8 = uStack_e8;
  uStack_2f0 = uStack_f0;
  uStack_2d8 = uStack_d8;
  uStack_2e0 = uStack_e0;
  uStack_340 = CONCAT62(uStack_13e,uStack_140);
  uStack_338 = uStack_138;
  uStack_328 = uStack_128;
  uStack_330 = uStack_130;
  uStack_318 = uStack_118;
  uStack_320 = uStack_120;
  uStack_308 = uStack_108;
  uStack_310 = uStack_110;
  uStack_368 = uStack_168;
  uStack_370 = uStack_170;
  uStack_358 = uStack_158;
  uStack_360 = uStack_160;
  uStack_348 = uStack_148;
  uStack_350 = uStack_150;
  uStack_388 = uStack_188;
  uStack_390 = uStack_190;
  uStack_378 = uStack_178;
  uStack_380 = uStack_180;
  uStack_2d0 = uStack_d0;
  uStack_2c8 = 0x3ff0000000000000;
  func_0x000100039834(&uStack_460,&uStack_2c0,0x1000c5908,&UNK_10008b9c0);
  func_0x00010003987c(&uStack_390,0x1000c5908,&UNK_10008b9c0);
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(&uStack_788,uVar6);
  lVar3 = lStack_868;
  lVar2 = lStack_870;
  pcVar12 = *(code **)(lStack_868 + 0x10);
  (*pcVar12)(lStack_870,lVar13,lVar5);
  lVar4 = lStack_860;
  uStack_688 = uStack_3b8;
  uStack_690 = uStack_3c0;
  uStack_678 = uStack_3a8;
  uStack_680 = uStack_3b0;
  uStack_668 = uStack_398;
  uStack_670 = uStack_3a0;
  uStack_6c8 = uStack_3f8;
  uStack_6d0 = uStack_400;
  uStack_6b8 = uStack_3e8;
  uStack_6c0 = uStack_3f0;
  uStack_6a8 = uStack_3d8;
  uStack_6b0 = uStack_3e0;
  uStack_698 = uStack_3c8;
  uStack_6a0 = uStack_3d0;
  uStack_708 = uStack_438;
  uStack_710 = uStack_440;
  uStack_6f8 = uStack_428;
  uStack_700 = uStack_430;
  uStack_6e8 = uStack_418;
  uStack_6f0 = uStack_420;
  uStack_6d8 = uStack_408;
  uStack_6e0 = uStack_410;
  uStack_728 = uStack_458;
  uStack_730 = uStack_460;
  uStack_718 = uStack_448;
  uStack_720 = uStack_450;
  (*pcVar12)(lStack_860,lVar2,lVar5);
  lVar10 = 0x1000c5910;
  func_0x0001000100d0(0x1000c5910,&UNK_10008b9c8);
  uStack_228 = uStack_698;
  uStack_230 = uStack_6a0;
  uStack_218 = uStack_688;
  uStack_220 = uStack_690;
  uStack_208 = uStack_678;
  uStack_210 = uStack_680;
  uStack_1f8 = uStack_668;
  uStack_200 = uStack_670;
  uStack_268 = uStack_6d8;
  uStack_270 = uStack_6e0;
  uStack_258 = uStack_6c8;
  uStack_260 = uStack_6d0;
  uStack_248 = uStack_6b8;
  uStack_250 = uStack_6c0;
  uStack_238 = uStack_6a8;
  uStack_240 = uStack_6b0;
  uStack_288 = uStack_6f8;
  uStack_290 = uStack_700;
  uStack_278 = uStack_6e8;
  uStack_280 = uStack_6f0;
  uStack_2a8 = uStack_718;
  uStack_2b0 = uStack_720;
  uStack_298 = uStack_708;
  uStack_2a0 = uStack_710;
  uStack_2b8 = uStack_728;
  uStack_2c0 = uStack_730;
  puVar1 = (undefined8 *)(lVar4 + *(int *)(lVar10 + 0x30));
  puVar1[5] = uStack_708;
  puVar1[4] = uStack_710;
  puVar1[7] = uStack_6f8;
  puVar1[6] = uStack_700;
  puVar1[0xd] = uStack_6c8;
  puVar1[0xc] = uStack_6d0;
  puVar1[0xf] = uStack_6b8;
  puVar1[0xe] = uStack_6c0;
  puVar1[9] = uStack_6e8;
  puVar1[8] = uStack_6f0;
  puVar1[0xb] = uStack_6d8;
  puVar1[10] = uStack_6e0;
  puVar1[0x17] = uStack_678;
  puVar1[0x16] = uStack_680;
  puVar1[0x19] = uStack_668;
  puVar1[0x18] = uStack_670;
  puVar1[0x13] = uStack_698;
  puVar1[0x12] = uStack_6a0;
  puVar1[0x15] = uStack_688;
  puVar1[0x14] = uStack_690;
  puVar1[0x11] = uStack_6a8;
  puVar1[0x10] = uStack_6b0;
  puVar1[1] = uStack_728;
  *puVar1 = uStack_730;
  puVar1[3] = uStack_718;
  puVar1[2] = uStack_720;
  puVar1 = (undefined8 *)(lVar4 + *(int *)(lVar10 + 0x40));
  uStack_1c8 = uStack_760;
  uStack_1d0 = uStack_768;
  uStack_1b8 = uStack_750;
  uStack_1c0 = uStack_758;
  uStack_1a8 = uStack_740;
  uStack_1b0 = uStack_748;
  uStack_1a0 = uStack_738;
  uStack_1e8 = uStack_780;
  uStack_1f0 = uStack_788;
  uStack_1d8 = uStack_770;
  uStack_1e0 = uStack_778;
  puVar1[5] = uStack_760;
  puVar1[4] = uStack_768;
  puVar1[7] = uStack_750;
  puVar1[6] = uStack_758;
  puVar1[9] = uStack_740;
  puVar1[8] = uStack_748;
  *(undefined2 *)(puVar1 + 10) = uStack_738;
  puVar1[1] = uStack_780;
  *puVar1 = uStack_788;
  puVar1[3] = uStack_770;
  puVar1[2] = uStack_778;
  func_0x000100039834(&uStack_2c0,auStack_858,0x1000c5908,&UNK_10008b9c0);
  func_0x0001000398bc(&uStack_1f0,auStack_858);
  pcVar12 = *(code **)(lVar3 + 8);
  (*pcVar12)(lVar13,lVar5);
  func_0x0001000398f8(&uStack_788);
  func_0x00010003987c(&uStack_730,0x1000c5908,&UNK_10008b9c0);
  (*pcVar12)(lVar2,lVar5);
  return;
}



/* Entry: 100038ee4; end: 10003918f;  */

void FUN_100038ee4(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined2 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  
  puVar8 = &UNK_10008b950;
  func_0x0001000100d0(0x1000c5870,&UNK_10008b950);
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(&puStack_128);
  uStack_78 = uStack_100;
  uStack_68 = uStack_f0;
  uStack_70 = uStack_f8;
  uStack_58 = uStack_e0;
  uStack_60 = uStack_e8;
  uStack_50 = uStack_d8;
  uStack_98 = uStack_120;
  puStack_a0 = puStack_128;
  uStack_88 = uStack_110;
  FUN_100039308(&puStack_a0);
  puVar2 = PTR__OBJC_CLASS___UIImage_1000c20c0;
  _objc_opt_self();
  func_0x000100087620(0x4030000000000000,0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = puVar2 == (undefined *)0x0;
  if (!bVar1) {
    _objc_retain();
    puVar3 = puVar2;
    __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
    puVar4 = puVar3;
    __s7SwiftUI9AlignmentV6centerACvgZ();
    __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
              (&uStack_d0,0x4030000000000000,0,0x4030000000000000,0,puVar4,puVar8);
    uStack_120 = uStack_d0;
    uStack_118 = uStack_c8;
    uStack_110 = uStack_c0;
    uStack_108 = uStack_b8;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uVar5 = 0x1000c58d0;
    puStack_128 = puVar3;
    func_0x0001000100d0(0x1000c58d0,&UNK_10008b988);
    uVar6 = uVar5;
    FUN_100039744();
    __s7SwiftUI4ViewPAAE10unredactedQryF(param_1,uVar5,uVar6);
    _swift_release(puVar3);
    _objc_release(puVar2);
  }
  lVar7 = 0x1000c58e8;
  func_0x0001000100d0(0x1000c58e8,&UNK_10008b9a0);
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(param_1,bVar1,1,lVar7);
  return;
}



/* Entry: 100039190; end: 100039193;  */

void FUN_100039190(void)

{
  return;
}



/* Entry: 100039194; end: 1000392a3;  */

void FUN_100039194(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puStack_50;
  undefined **ppuStack_48;
  
  uVar1 = 0x1000c5838;
  func_0x0001000100d0(0x1000c5838,&UNK_10008b8c0);
  uVar2 = uVar1;
  FUN_10003865c();
  puVar3 = (undefined *)0x1000c5848;
  func_0x000100010120(0x1000c5848,&UNK_10008b8c8);
  puVar4 = (undefined *)0x1000c5850;
  func_0x000100010120(0x1000c5850,&UNK_10008b8d0);
  puVar5 = puVar4;
  func_0x00010003869c();
  puStack_50 = &UNK_1000b4790;
  ppuVar6 = &puStack_50;
  ppuStack_48 = (undefined **)puVar5;
  _swift_getOpaqueTypeConformance
            (ppuVar6,PTR___s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgFQOMQ_1000b09f0,
             1);
  ppuVar7 = &puStack_50;
  puStack_50 = puVar4;
  ppuStack_48 = ppuVar6;
  _swift_getOpaqueTypeConformance
            (ppuVar7,
             PTR___s7SwiftUI4ViewP9WidgetKitE22activityBackgroundTintyQrAA5ColorVSgFQOMQ_1000b09d0,1
            );
  ppuVar6 = &puStack_50;
  puStack_50 = puVar3;
  ppuStack_48 = ppuVar7;
  _swift_getOpaqueTypeConformance
            (ppuVar6,
             PTR___s7SwiftUI4ViewP9WidgetKitE35activitySystemActionForegroundColoryQrAA0J0VSgFQOMQ_1000b09e0
             ,1);
  __s9WidgetKit21ActivityConfigurationV3for7content13dynamicIslandACyxGxm_qd__AA0C11ViewContextVyxGcAA07DynamicH0VAJctc7SwiftUI0I0Rd__lufC
            (param_1,PTR___s33FriendingLiveActivityWidgetBridge0A10AttributesVN_1000b0fa8,
             0x100039964,0,0x100039968,0,
             PTR___s33FriendingLiveActivityWidgetBridge0A10AttributesVN_1000b0fa8,uVar1,uVar2,
             ppuVar6);
  return;
}



/* Entry: 1000392a4; end: 1000392b7;  */

undefined1  [16] FUN_1000392a4(void)

{
  return ZEXT816(0x1000b4340);
}



/* Entry: 1000392b8; end: 100039307;  */

void FUN_1000392b8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c5860 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5868;
  func_0x000100010120(0x1000c5868,&UNK_10008b948);
  puVar2 = PTR___s9WidgetKit21ActivityConfigurationVyxG7SwiftUI0aD0AAMc_1000b0b28;
  _swift_getWitnessTable
            (PTR___s9WidgetKit21ActivityConfigurationVyxG7SwiftUI0aD0AAMc_1000b0b28,uVar1);
  puRam00000001000c5860 = puVar2;
  return;
}



/* Entry: 100039308; end: 10003933b;  */

undefined8 FUN_100039308(undefined8 param_1)

{
  (**(code **)(*(long *)(
                        PTR___s33FriendingLiveActivityWidgetBridge0A10AttributesV12ContentStateVN_1000b0f98
                        + -8) + 8))();
  return param_1;
}



/* Entry: 10003933c; end: 10003933f;  */

void FUN_10003933c(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = 0x1000c5870;
  func_0x0001000100d0(0x1000c5870,&UNK_10008b950);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x10 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  lVar4 = *(long *)(lVar2 + 0x40);
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,lVar1);
  _objc_release(*(undefined8 *)(unaff_x20 + (lVar4 + uVar3 + 7 & 0xfffffffffffffff8)));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100039340; end: 10003939b;  */

void FUN_100039340(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  
  lVar5 = 0x1000c5870;
  func_0x0001000100d0(0x1000c5870,&UNK_10008b950);
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
  uVar6 = *(undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar5 + -8) + 0x40) + uVar7 + 7 & 0xffffffffffffff8));
  lVar5 = 0x1000c58f0;
  func_0x0001000100d0(0x1000c58f0,&UNK_10008b9a8);
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&uStack_80 - extraout_x8;
  lVar1 = 0;
  __s9WidgetKit35DynamicIslandExpandedRegionPositionVMa();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  __s9WidgetKit35DynamicIslandExpandedRegionPositionV6bottomACvgZ(lVar1);
  uVar2 = 0x1000c5890;
  lStack_60 = unaff_x20 + uVar7;
  uStack_58 = uVar6;
  func_0x0001000100d0(0x1000c5890,&UNK_10008b970);
  uVar3 = uVar2;
  func_0x000100039524();
  __s9WidgetKit27DynamicIslandExpandedRegionV_8priority7contentACyxGAA0cdeF8PositionV_SdxyXEtcfC
            (lVar8,0,lVar1,FUN_1000397f0,auStack_70,uVar2,uVar3);
  uVar6 = 0x1000c5878;
  lStack_60 = lVar8;
  func_0x0001000100d0(0x1000c5878,&UNK_10008b958);
  puVar4 = &uStack_80;
  uStack_80 = uVar2;
  uStack_78 = uVar3;
  _swift_getOpaqueTypeConformance
            (puVar4,
             PTR___s9WidgetKit27DynamicIslandExpandedRegionV19_viewRepresentationQrvpQOMQ_1000b0b70,
             1);
  __s9WidgetKit28DynamicIslandExpandedContentV7contentACyxGxyXE_tcfC
            (param_1,FUN_1000397f8,auStack_70,uVar6,puVar4);
  (**(code **)(lVar9 + 8))(lVar8,lVar5);
  return;
}



/* Entry: 10003939c; end: 10003939f;  */

void FUN_10003939c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0x1000c5870;
  func_0x0001000100d0(0x1000c5870,&UNK_10008b950);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar2 = uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff);
  func_0x000100039094(param_1,unaff_x20 + uVar2,
                      *(undefined8 *)
                       (unaff_x20 +
                       (*(long *)(*(long *)(lVar1 + -8) + 0x40) + uVar2 + 7 & 0xffffffffffffff8)));
  return;
}



/* Entry: 1000393a0; end: 100039403;  */

void FUN_1000393a0(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0x1000c5870;
  func_0x0001000100d0(0x1000c5870,&UNK_10008b950);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100039404; end: 10003944b;  */

void FUN_100039404(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined2 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  
  func_0x0001000100d0(0x1000c5870,&UNK_10008b950);
  puVar8 = &UNK_10008b950;
  func_0x0001000100d0(0x1000c5870,&UNK_10008b950);
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(&puStack_128);
  uStack_78 = uStack_100;
  uStack_68 = uStack_f0;
  uStack_70 = uStack_f8;
  uStack_58 = uStack_e0;
  uStack_60 = uStack_e8;
  uStack_50 = uStack_d8;
  uStack_98 = uStack_120;
  puStack_a0 = puStack_128;
  uStack_88 = uStack_110;
  FUN_100039308(&puStack_a0);
  puVar2 = PTR__OBJC_CLASS___UIImage_1000c20c0;
  _objc_opt_self();
  func_0x000100087620(0x4030000000000000,0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = puVar2 == (undefined *)0x0;
  if (!bVar1) {
    _objc_retain();
    puVar3 = puVar2;
    __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
    puVar4 = puVar3;
    __s7SwiftUI9AlignmentV6centerACvgZ();
    __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
              (&uStack_d0,0x4030000000000000,0,0x4030000000000000,0,puVar4,puVar8);
    uStack_120 = uStack_d0;
    uStack_118 = uStack_c8;
    uStack_110 = uStack_c0;
    uStack_108 = uStack_b8;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uVar5 = 0x1000c58d0;
    puStack_128 = puVar3;
    func_0x0001000100d0(0x1000c58d0,&UNK_10008b988);
    uVar6 = uVar5;
    FUN_100039744();
    __s7SwiftUI4ViewPAAE10unredactedQryF(param_1,uVar5,uVar6);
    _swift_release(puVar3);
    _objc_release(puVar2);
  }
  lVar7 = 0x1000c58e8;
  func_0x0001000100d0(0x1000c58e8,&UNK_10008b9a0);
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(param_1,bVar1,1,lVar7);
  return;
}



/* Entry: 10003944c; end: 1000394c3;  */

void FUN_10003944c(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = 0x1000c5870;
  func_0x0001000100d0(0x1000c5870,&UNK_10008b950);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x10 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  lVar4 = *(long *)(lVar2 + 0x40);
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,lVar1);
  _objc_release(*(undefined8 *)(unaff_x20 + (lVar4 + uVar3 + 7 & 0xfffffffffffffff8)));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 1000394c4; end: 10003959b;  */

void FUN_1000394c4(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0x1000c5870;
  func_0x0001000100d0(0x1000c5870,&UNK_10008b950);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar2 = uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff);
  func_0x000100039094(param_1,unaff_x20 + uVar2,
                      *(undefined8 *)
                       (unaff_x20 +
                       (*(long *)(*(long *)(lVar1 + -8) + 0x40) + uVar2 + 7 & 0xffffffffffffff8)));
  return;
}



/* Entry: 10003959c; end: 1000395eb;  */

void FUN_10003959c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c58a0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c58a8;
  func_0x000100010120(0x1000c58a8,&UNK_10008b978);
  puVar2 = PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_1000b0888;
  _swift_getWitnessTable(PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_1000b0888,uVar1);
  puRam00000001000c58a0 = puVar2;
  return;
}



/* Entry: 1000395ec; end: 100039663;  */

void FUN_1000395ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam00000001000c58b8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c58b0;
  func_0x000100010120(0x1000c58b0,&UNK_10008b980);
  uVar2 = uVar1;
  FUN_100039664();
  puStack_28 = PTR___s7SwiftUI12_FrameLayoutVAA12ViewModifierAAWP_1000b02e8;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c58b8 = puVar3;
  return;
}



/* Entry: 100039664; end: 1000396a3;  */

void FUN_100039664(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c58c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b9f8;
  _swift_getWitnessTable(&UNK_10008b9f8,&UNK_1000b4488);
  puRam00000001000c58c0 = puVar1;
  return;
}


