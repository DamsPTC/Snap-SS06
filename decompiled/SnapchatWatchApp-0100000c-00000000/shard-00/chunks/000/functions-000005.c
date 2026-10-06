/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10001b7c4; end: 10001b817;  */

void FUN_10001b7c4(long param_1)

{
  long lVar1;
  
  if (lRam000000010002de80 == 0) {
    lVar1 = 0xff;
    __s10Foundation3URLVMa();
    __sSqMa();
    if (lVar1 == 0) {
      lRam000000010002de80 = param_1;
    }
  }
  return;
}



/* Entry: 10001b818; end: 10001b823;  */

void FUN_10001b818(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 10001b824; end: 10001b827;  */

void FUN_10001b824(void)

{
  return;
}



/* Entry: 10001b828; end: 10001b8b7;  */

int FUN_10001b828(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10001b8a4;
        goto LAB_10001b888;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10001b888:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_10001b8a4:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10001b8b8; end: 10001b967;  */

void FUN_10001b8b8(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 4) {
    uVar3 = 4;
  }
  if (param_3 + 4 >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xfb < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xfc) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_10001b938;
      }
    }
    else if (uVar2 == 2) {
      param_1[1] = '\0';
      param_1[2] = '\0';
    }
    else {
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
    }
    if (param_2 != 0) {
LAB_10001b938:
      *param_1 = (char)param_2 + '\x04';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xfc >> 8) + 1;
    *param_1 = (char)(param_2 - 0xfc);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      *(short *)(param_1 + 1) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[1] = (char)iVar1;
      return;
    }
  }
  return;
}



/* Entry: 10001b968; end: 10001b96f;  */

undefined1 FUN_10001b968(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 10001b970; end: 10001b973;  */

void FUN_10001b970(void)

{
  return;
}



/* Entry: 10001b974; end: 10001b97b;  */

void FUN_10001b974(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 10001b97c; end: 10001b98b;  */

undefined1  [16] FUN_10001b97c(void)

{
  return ZEXT816(0x100029620);
}



/* Entry: 10001b98c; end: 10001b98f;  */

void FUN_10001b98c(void)

{
  undefined *puVar1;
  
  if (puRam000000010002dec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022394;
  _swift_getWitnessTable(&UNK_100022394,&UNK_100029620);
  puRam000000010002dec0 = puVar1;
  return;
}



/* Entry: 10001b990; end: 10001b9cf;  */

void FUN_10001b990(void)

{
  undefined *puVar1;
  
  if (puRam000000010002dec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022394;
  _swift_getWitnessTable(&UNK_100022394,&UNK_100029620);
  puRam000000010002dec0 = puVar1;
  return;
}



/* Entry: 10001b9d0; end: 10001b9d3;  */

void FUN_10001b9d0(void)

{
  undefined *puVar1;
  
  if (puRam000000010002dec8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10002232c;
  _swift_getWitnessTable(&UNK_10002232c,&UNK_100029620);
  puRam000000010002dec8 = puVar1;
  return;
}



/* Entry: 10001b9d4; end: 10001ba13;  */

void FUN_10001b9d4(void)

{
  undefined *puVar1;
  
  if (puRam000000010002dec8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10002232c;
  _swift_getWitnessTable(&UNK_10002232c,&UNK_100029620);
  puRam000000010002dec8 = puVar1;
  return;
}



/* Entry: 10001ba14; end: 10001ba17;  */

void FUN_10001ba14(void)

{
  undefined *puVar1;
  
  if (puRam000000010002ded0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022304;
  _swift_getWitnessTable(&UNK_100022304,&UNK_100029620);
  puRam000000010002ded0 = puVar1;
  return;
}



/* Entry: 10001ba18; end: 10001ba57;  */

void FUN_10001ba18(void)

{
  undefined *puVar1;
  
  if (puRam000000010002ded0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022304;
  _swift_getWitnessTable(&UNK_100022304,&UNK_100029620);
  puRam000000010002ded0 = puVar1;
  return;
}



/* Entry: 10001ba58; end: 10001ba97;  */

undefined8 FUN_10001ba58(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_10000c3c0(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10001ba98; end: 10001bad7;  */

void FUN_10001ba98(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    __s10Foundation3URLVMa(0xff);
    _swift_getWitnessTable(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 10001bad8; end: 10001badf;  */

undefined8 FUN_10001bad8(void)

{
  return 1;
}



/* Entry: 10001bae0; end: 10001bae3;  */

void FUN_10001bae0(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10001bae4; end: 10001bb07;  */

void FUN_10001bae4(void)

{
  __ss6HasherV8_combineyySuF(0);
  return;
}



/* Entry: 10001bb08; end: 10001bb0b;  */

void FUN_10001bb08(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10001bb0c; end: 10001bb1b;  */

undefined1  [16] FUN_10001bb0c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe400000000000000;
  auVar1._0_8_ = 0x74786574;
  return auVar1;
}



/* Entry: 10001bb1c; end: 10001bb1f;  */

void FUN_10001bb1c(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  if (param_2 == 0x74786574 && param_3 == -0x1c00000000000000) {
    _swift_bridgeObjectRelease(param_3);
    bVar1 = 0;
  }
  else {
    bVar1 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x74786574,0xe400000000000000,param_2,param_3,0);
    _swift_bridgeObjectRelease(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 10001bb20; end: 10001bb2b;  */

undefined1  [16] FUN_10001bb20(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10001bb2c; end: 10001bb37;  */

void FUN_10001bb2c(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}



/* Entry: 10001bb38; end: 10001bb5f;  */

void FUN_10001bb38(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10001be60();
                    /* WARNING: Could not recover jumptable at 0x000100020784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_1000289b8)(param_1,uVar1);
  return;
}



/* Entry: 10001bb60; end: 10001bb87;  */

void FUN_10001bb60(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10001be60();
                    /* WARNING: Could not recover jumptable at 0x000100020778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE11descriptionSSvg_1000289b0)(param_1,uVar1);
  return;
}



/* Entry: 10001bb88; end: 10001bb8f;  */

undefined8 FUN_10001bb88(void)

{
  return 1;
}



/* Entry: 10001bb90; end: 10001bbcf;  */

void FUN_10001bb90(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10001bbd0; end: 10001bc0b;  */

void FUN_10001bbd0(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10001bc0c; end: 10001bc1b;  */

undefined1  [16] FUN_10001bc0c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe400000000000000;
  auVar1._0_8_ = 0x74786574;
  return auVar1;
}



/* Entry: 10001bc1c; end: 10001bc9f;  */

void FUN_10001bc1c(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  if (param_2 == 0x74786574 && param_3 == -0x1c00000000000000) {
    _swift_bridgeObjectRelease(param_3);
    bVar1 = 0;
  }
  else {
    bVar1 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x74786574,0xe400000000000000,param_2,param_3,0);
    _swift_bridgeObjectRelease(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 10001bca0; end: 10001bcab;  */

undefined1  [16] FUN_10001bca0(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10001bcac; end: 10001bcd3;  */

void FUN_10001bcac(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10001bea0();
                    /* WARNING: Could not recover jumptable at 0x000100020784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_1000289b8)(param_1,uVar1);
  return;
}



/* Entry: 10001bcd4; end: 10001bcfb;  */

void FUN_10001bcd4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10001bea0();
                    /* WARNING: Could not recover jumptable at 0x000100020778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE11descriptionSSvg_1000289b0)(param_1,uVar1);
  return;
}



/* Entry: 10001bcfc; end: 10001be5f;  */

void FUN_10001bcfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0x10002dee8;
  uStack_70 = param_2;
  uStack_68 = param_3;
  FUN_10000c3c0(0x10002dee8,&UNK_100022420);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100028280)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&uStack_70 - extraout_x8;
  lVar4 = 0x10002def0;
  FUN_10000c3c0(0x10002def0,&UNK_100022428);
  lVar6 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100028280)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10001aeb0(param_1,uVar1);
  FUN_10001be60();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (lVar7 - extraout_x8_00,&UNK_100029920,&UNK_100029920,param_1,uVar1,uVar2);
  FUN_10001bea0();
  __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF(lVar7);
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uStack_70,uStack_68);
  (**(code **)(lVar5 + 8))(lVar7,lVar3);
  (**(code **)(lVar6 + 8))(lVar7 - extraout_x8_00,lVar4);
  return;
}



/* Entry: 10001be60; end: 10001be9f;  */

void FUN_10001be60(void)

{
  undefined *puVar1;
  
  if (puRam000000010002def8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_1000227fc;
  _swift_getWitnessTable(&UNK_1000227fc,&UNK_100029920);
  puRam000000010002def8 = puVar1;
  return;
}



/* Entry: 10001bea0; end: 10001bedf;  */

void FUN_10001bea0(void)

{
  undefined *puVar1;
  
  if (puRam000000010002df00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_1000227ac;
  _swift_getWitnessTable(&UNK_1000227ac,&UNK_1000299b0);
  puRam000000010002df00 = puVar1;
  return;
}



/* Entry: 10001bee0; end: 10001bf07;  */

void FUN_10001bee0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x21;
  
  FUN_10001c2ec();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return;
}



/* Entry: 10001bf08; end: 10001bf1f;  */

void FUN_10001bf08(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10001bcfc(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Entry: 10001bf20; end: 10001bf33;  */

bool FUN_10001bf20(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10001bf34; end: 10001bf77;  */

void FUN_10001bf34(void)

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



/* Entry: 10001bf78; end: 10001bf9f;  */

void FUN_10001bf78(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  __ss6HasherV8_combineyySuF(param_1,*unaff_x20);
  return;
}



/* Entry: 10001bfa0; end: 10001bfdf;  */

void FUN_10001bfa0(void)

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



/* Entry: 10001bfe0; end: 10001c017;  */

undefined1  [16] FUN_10001bfe0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x644972657375;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x746e65746e6f63;
  }
  uVar2 = 0xe600000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe700000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 10001c018; end: 10001c0eb;  */

void FUN_10001c018(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  uVar1 = 0x746e65746e6f63;
  if ((param_2 == 0x746e65746e6f63 && param_3 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x746e65746e6f63,0xe700000000000000,param_2,param_3,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_3);
    uVar2 = 0;
  }
  else {
    uVar1 = 0x644972657375;
    if ((param_2 == 0x644972657375) && (param_3 == -0x1a00000000000000)) {
      _swift_bridgeObjectRelease(0xe600000000000000);
      uVar2 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x644972657375,0xe600000000000000,param_2,param_3,0);
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



/* Entry: 10001c0ec; end: 10001c0f7;  */

undefined1  [16] FUN_10001c0ec(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10001c0f8; end: 10001c103;  */

void FUN_10001c0f8(undefined1 *param_1)

{
  *param_1 = 2;
  return;
}



/* Entry: 10001c104; end: 10001c12b;  */

void FUN_10001c104(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10001c5ac();
                    /* WARNING: Could not recover jumptable at 0x000100020784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_1000289b8)(param_1,uVar1);
  return;
}



/* Entry: 10001c12c; end: 10001c153;  */

void FUN_10001c12c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10001c5ac();
                    /* WARNING: Could not recover jumptable at 0x000100020778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE11descriptionSSvg_1000289b0)(param_1,uVar1);
  return;
}



/* Entry: 10001c154; end: 10001c2a3;  */

void FUN_10001c154(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  long lVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_51;
  
  lVar3 = 0x10002df08;
  uStack_80 = param_4;
  uStack_78 = param_5;
  FUN_10000c3c0(0x10002df08,&UNK_100022430);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100028280)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&uStack_80 - extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10001aeb0(param_1,uVar1);
  FUN_10001c5ac();
  puVar4 = &UNK_100029890;
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (lVar6,&UNK_100029890,&UNK_100029890,param_1,uVar1,uVar2);
  uStack_51 = 0;
  uStack_70 = param_2;
  uStack_68 = param_3;
  FUN_10001c5ec();
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
            (&uStack_70,&uStack_51,lVar3,&UNK_100029780,puVar4);
  if (unaff_x21 == 0) {
    uStack_70 = CONCAT71(uStack_70._1_7_,1);
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uStack_80,uStack_78,&uStack_70,lVar3);
    (**(code **)(lVar5 + 8))(lVar6,lVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(lVar6,lVar3);
  }
  return;
}



/* Entry: 10001c2a4; end: 10001c2cf;  */

void FUN_10001c2a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_10001c62c();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Entry: 10001c2d0; end: 10001c2eb;  */

void FUN_10001c2d0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10001c154(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Entry: 10001c2ec; end: 10001c5ab;  */

undefined1  [16] FUN_10001c2ec(undefined *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  long lVar10;
  long unaff_x21;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_90 [8];
  
  puVar3 = (undefined *)0x10002df78;
  FUN_10000c3c0(0x10002df78,&UNK_100022858);
  lVar10 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100028280)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_90 + -extraout_x8;
  lVar4 = 0x10002df80;
  FUN_10000c3c0(0x10002df80,&UNK_100022860);
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100028280)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = puVar13 + -extraout_x8_00;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = param_1;
  FUN_10001aeb0(param_1,uVar1);
  puVar12 = puVar5;
  FUN_10001be60();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (puVar11,&UNK_100029920,&UNK_100029920,puVar12,uVar1,uVar2);
  puVar12 = puVar11;
  if (unaff_x21 == 0) {
    lVar6 = lVar4;
    __ss22KeyedDecodingContainerV7allKeysSayxGvg();
    uVar9 = *(ulong *)(lVar6 + 0x10);
    lVar7 = lVar6;
    FUN_10001d04c();
    if ((((uint)lVar7 & 0xff) != 1) && ((uVar9 & 0x7fffffffffffffff) == 0)) {
      FUN_10001bea0();
      puVar5 = &UNK_1000299b0;
      __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                (puVar13);
      puVar12 = puVar3;
      __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
      (**(code **)(lVar10 + 8))(puVar13,puVar3);
      (**(code **)(lVar14 + 8))(puVar11,lVar4);
      _swift_unknownObjectRelease(lVar6);
      FUN_10001af14(param_1);
      goto LAB_10001c580;
    }
    lVar7 = 0;
    __ss13DecodingErrorOMa();
    puVar8 = (undefined8 *)PTR___ss13DecodingErrorOs0B0sWP_100028898;
    _swift_allocError();
    lVar10 = 0x10002df88;
    FUN_10000c3c0(0x10002df88,&UNK_100022868);
    puVar12 = (undefined *)(long)*(int *)(lVar10 + 0x30);
    *puVar8 = &UNK_100029780;
    __ss22KeyedDecodingContainerV10codingPathSays9CodingKey_pGvg(lVar4);
    __ss13DecodingErrorO7ContextV10codingPath16debugDescription010underlyingB0ADSays9CodingKey_pG_SSs0B0_pSgtcfC
              ((undefined *)((long)puVar8 + (long)puVar12));
    (**(code **)(*(long *)(lVar7 + -8) + 0x68))
              (puVar8,*(undefined4 *)
                       PTR___ss13DecodingErrorO12typeMismatchyABypXp_AB7ContextVtcABmFWC_100028878,
               lVar7);
    _swift_willThrow();
    (**(code **)(lVar14 + 8))(puVar11,lVar4);
    _swift_unknownObjectRelease(lVar6);
    puVar5 = puVar11;
  }
  FUN_10001af14(param_1);
LAB_10001c580:
  auVar15._8_8_ = puVar12;
  auVar15._0_8_ = puVar5;
  return auVar15;
}



/* Entry: 10001c5ac; end: 10001c5eb;  */

void FUN_10001c5ac(void)

{
  undefined *puVar1;
  
  if (puRam000000010002df10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10002275c;
  _swift_getWitnessTable(&UNK_10002275c,&UNK_100029890);
  puRam000000010002df10 = puVar1;
  return;
}



/* Entry: 10001c5ec; end: 10001c62b;  */

void FUN_10001c5ec(void)

{
  undefined *puVar1;
  
  if (puRam000000010002df18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022460;
  _swift_getWitnessTable(&UNK_100022460,&UNK_100029780);
  puRam000000010002df18 = puVar1;
  return;
}



/* Entry: 10001c62c; end: 10001c7cb;  */

/* WARNING: Removing unreachable block (ram,0x00010001c784) */
/* WARNING: Removing unreachable block (ram,0x00010001c710) */

undefined8 FUN_10001c62c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  undefined8 uVar5;
  long lVar6;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_51;
  
  lVar2 = 0x10002df68;
  FUN_10000c3c0(0x10002df68,&UNK_100022850);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100028280)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  FUN_10001aeb0(param_1,uVar1);
  FUN_10001c5ac();
  puVar4 = &UNK_100029890;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (&uStack_70 + -extraout_x8,&UNK_100029890,&UNK_100029890,lVar3,uVar1,uVar5);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    FUN_10001cfcc();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&uStack_70,&UNK_100029780,&uStack_51,lVar2,&UNK_100029780,puVar4);
    uVar5 = CONCAT71(uStack_6f,uStack_70);
    uStack_70 = 1;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(&uStack_70,lVar2);
    (**(code **)(lVar6 + 8))(&uStack_70 + -extraout_x8,lVar2);
    FUN_10001af14(param_1);
  }
  else {
    FUN_10001af14(param_1);
  }
  return uVar5;
}



/* Entry: 10001c7cc; end: 10001c7f7;  */

undefined8 * FUN_10001c7cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10001c7f8; end: 10001c7ff;  */

void FUN_10001c7f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100020970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_100028a20)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10001c800; end: 10001c83f;  */

undefined8 * FUN_10001c800(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 10001c840; end: 10001c86f;  */

undefined8 * FUN_10001c840(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 10001c870; end: 10001c8b7;  */

int FUN_10001c870(int *param_1,int param_2)

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



/* Entry: 10001c8b8; end: 10001c8f3;  */

void FUN_10001c8b8(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    param_1[1] = 0;
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 2) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Entry: 10001c8f4; end: 10001c8fb;  */

undefined8 FUN_10001c8f4(void)

{
  return 0;
}



/* Entry: 10001c8fc; end: 10001c8ff;  */

void FUN_10001c8fc(void)

{
  return;
}



/* Entry: 10001c900; end: 10001c903;  */

void FUN_10001c900(void)

{
  return;
}



/* Entry: 10001c904; end: 10001c913;  */

undefined1  [16] FUN_10001c904(void)

{
  return ZEXT816(0x100029780);
}



/* Entry: 10001c914; end: 10001c93f;  */

long FUN_10001c914(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10001c940; end: 10001c967;  */

void FUN_10001c940(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000100020970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_100028a20)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10001c968; end: 10001c9a3;  */

undefined8 * FUN_10001c968(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Entry: 10001c9a4; end: 10001ca0f;  */

undefined8 * FUN_10001c9a4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10001ca10; end: 10001ca53;  */

undefined8 * FUN_10001ca10(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10001ca54; end: 10001ca9b;  */

int FUN_10001ca54(int *param_1,int param_2)

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



/* Entry: 10001ca9c; end: 10001cadb;  */

void FUN_10001ca9c(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    param_1[1] = 0;
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Entry: 10001cadc; end: 10001caeb;  */

undefined1  [16] FUN_10001cadc(void)

{
  return ZEXT816(0x1000297f8);
}



/* Entry: 10001caec; end: 10001cb7b;  */

int FUN_10001caec(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10001cb68;
        goto LAB_10001cb4c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10001cb4c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10001cb68:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10001cb7c; end: 10001cc2b;  */

void FUN_10001cb7c(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 1) {
    uVar3 = 4;
  }
  if (param_3 + 1 >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xfe < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xff) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_10001cbfc;
      }
    }
    else if (uVar2 == 2) {
      param_1[1] = '\0';
      param_1[2] = '\0';
    }
    else {
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
    }
    if (param_2 != 0) {
LAB_10001cbfc:
      *param_1 = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xff >> 8) + 1;
    *param_1 = (char)(param_2 - 0xff);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      *(short *)(param_1 + 1) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[1] = (char)iVar1;
      return;
    }
  }
  return;
}



/* Entry: 10001cc2c; end: 10001cc33;  */

undefined1 FUN_10001cc2c(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 10001cc34; end: 10001cc37;  */

void FUN_10001cc34(void)

{
  return;
}



/* Entry: 10001cc38; end: 10001cc3f;  */

void FUN_10001cc38(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 10001cc40; end: 10001cc4f;  */

undefined1  [16] FUN_10001cc40(void)

{
  return ZEXT816(0x100029890);
}



/* Entry: 10001cc50; end: 10001cc53;  */

void FUN_10001cc50(void)

{
  return;
}



/* Entry: 10001cc54; end: 10001cc57;  */

uint FUN_10001cc54(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 10001cc58; end: 10001cc5b;  */

void FUN_10001cc58(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xffff < param_3 + 1U) {
    uVar2 = 4;
  }
  if (param_3 + 1U < 0x100) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = uVar2;
  }
  if (param_2 == 0) {
    if (1 < uVar1) {
      if (uVar1 == 2) {
        *(undefined2 *)param_1 = 0;
        return;
      }
      *param_1 = 0;
      return;
    }
    if (uVar1 != 0) {
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (uVar1 < 2) {
    if (uVar1 != 0) {
      *(char *)param_1 = (char)param_2;
      return;
    }
  }
  else {
    if (uVar1 == 2) {
      *(short *)param_1 = (short)param_2;
      return;
    }
    *param_1 = param_2;
  }
  return;
}



/* Entry: 10001cc5c; end: 10001cc63;  */

undefined8 FUN_10001cc5c(void)

{
  return 0;
}



/* Entry: 10001cc64; end: 10001cc67;  */

void FUN_10001cc64(void)

{
  return;
}



/* Entry: 10001cc68; end: 10001cc6b;  */

void FUN_10001cc68(void)

{
  return;
}



/* Entry: 10001cc6c; end: 10001cc7b;  */

undefined1  [16] FUN_10001cc6c(void)

{
  return ZEXT816(0x100029920);
}



/* Entry: 10001cc7c; end: 10001cccb;  */

uint FUN_10001cc7c(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 10001cccc; end: 10001cd47;  */

void FUN_10001cccc(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xffff < param_3 + 1U) {
    uVar2 = 4;
  }
  if (param_3 + 1U < 0x100) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = uVar2;
  }
  if (param_2 == 0) {
    if (1 < uVar1) {
      if (uVar1 == 2) {
        *(undefined2 *)param_1 = 0;
        return;
      }
      *param_1 = 0;
      return;
    }
    if (uVar1 != 0) {
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (uVar1 < 2) {
    if (uVar1 != 0) {
      *(char *)param_1 = (char)param_2;
      return;
    }
  }
  else {
    if (uVar1 == 2) {
      *(short *)param_1 = (short)param_2;
      return;
    }
    *param_1 = param_2;
  }
  return;
}



/* Entry: 10001cd48; end: 10001cd4f;  */

undefined8 FUN_10001cd48(void)

{
  return 0;
}



/* Entry: 10001cd50; end: 10001cd53;  */

void FUN_10001cd50(void)

{
  return;
}



/* Entry: 10001cd54; end: 10001cd57;  */

void FUN_10001cd54(void)

{
  return;
}



/* Entry: 10001cd58; end: 10001cd67;  */

undefined1  [16] FUN_10001cd58(void)

{
  return ZEXT816(0x1000299b0);
}



/* Entry: 10001cd68; end: 10001cd6b;  */

void FUN_10001cd68(void)

{
  undefined *puVar1;
  
  if (puRam000000010002df20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_1000225c4;
  _swift_getWitnessTable(&UNK_1000225c4,&UNK_1000299b0);
  puRam000000010002df20 = puVar1;
  return;
}



/* Entry: 10001cd6c; end: 10001cdab;  */

void FUN_10001cd6c(void)

{
  undefined *puVar1;
  
  if (puRam000000010002df20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_1000225c4;
  _swift_getWitnessTable(&UNK_1000225c4,&UNK_1000299b0);
  puRam000000010002df20 = puVar1;
  return;
}



/* Entry: 10001cdac; end: 10001cdaf;  */

void FUN_10001cdac(void)

{
  undefined *puVar1;
  
  if (puRam000000010002df28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10002267c;
  _swift_getWitnessTable(&UNK_10002267c,&UNK_100029920);
  puRam000000010002df28 = puVar1;
  return;
}



/* Entry: 10001cdb0; end: 10001cdef;  */

void FUN_10001cdb0(void)

{
  undefined *puVar1;
  
  if (puRam000000010002df28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10002267c;
  _swift_getWitnessTable(&UNK_10002267c,&UNK_100029920);
  puRam000000010002df28 = puVar1;
  return;
}



/* Entry: 10001cdf0; end: 10001cdf3;  */

void FUN_10001cdf0(void)

{
  undefined *puVar1;
  
  if (puRam000000010002df30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022734;
  _swift_getWitnessTable(&UNK_100022734,&UNK_100029890);
  puRam000000010002df30 = puVar1;
  return;
}



/* Entry: 10001cdf4; end: 10001ce33;  */

void FUN_10001cdf4(void)

{
  undefined *puVar1;
  
  if (puRam000000010002df30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100022734;
  _swift_getWitnessTable(&UNK_100022734,&UNK_100029890);
  puRam000000010002df30 = puVar1;
  return;
}


