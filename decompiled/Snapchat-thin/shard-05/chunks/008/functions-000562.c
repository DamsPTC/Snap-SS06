/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10425ae00; end: 10425ae5b;  */

void FUN_10425ae00(void)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_88);
  FUN_10425acbc(uVar1,uVar2,uVar3,auStack_88);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10425ae5c; end: 10425ae5f;  */

void FUN_10425ae5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069db8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce5040;
  _swift_getWitnessTable(&UNK_10dce5040,&UNK_110754760);
  puRam0000000113069db8 = puVar1;
  return;
}



/* Entry: 10425ae60; end: 10425ae9f;  */

void FUN_10425ae60(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069db8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce5040;
  _swift_getWitnessTable(&UNK_10dce5040,&UNK_110754760);
  puRam0000000113069db8 = puVar1;
  return;
}



/* Entry: 10425aea0; end: 10425af27;  */

int FUN_10425aea0(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10425af28; end: 10425b03b;  */

void FUN_10425af28(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  double dVar2;
  double dVar3;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  dVar3 = (double)unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __ss6HasherV8_combineyySuF(uVar1);
  dVar2 = 0.0;
  if (dVar3 != 0.0) {
    dVar2 = dVar3;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10425b03c; end: 10425b03f;  */

void FUN_10425b03c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069dc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce50d0;
  _swift_getWitnessTable(&UNK_10dce50d0,&UNK_110754818);
  puRam0000000113069dc0 = puVar1;
  return;
}



/* Entry: 10425b040; end: 10425b07f;  */

void FUN_10425b040(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069dc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce50d0;
  _swift_getWitnessTable(&UNK_10dce50d0,&UNK_110754818);
  puRam0000000113069dc0 = puVar1;
  return;
}



/* Entry: 10425b080; end: 10425b0f3;  */

int FUN_10425b080(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10425b0f4; end: 10425b243;  */

undefined8
FUN_10425b0f4(ulong param_1,ulong param_2,ulong param_3,long param_4,long param_5,long param_6)

{
  ulong uVar1;
  
  if (param_1 == 0) {
    if (param_4 != 0) {
      return 0;
    }
  }
  else {
    if (param_4 == 0) {
      return 0;
    }
    func_0x0001002ed07c(0);
    _objc_retain(param_4);
    _objc_retain();
    uVar1 = param_1;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(param_1);
    _objc_release(param_4);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  if (param_2 == 0) {
    if (param_5 != 0) {
      return 0;
    }
  }
  else {
    if (param_5 == 0) {
      return 0;
    }
    func_0x0001002ed07c(0);
    _objc_retain(param_5);
    _objc_retain();
    uVar1 = param_2;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(param_2);
    _objc_release(param_5);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  if (param_3 == 0) {
    if (param_6 == 0) {
      return 1;
    }
  }
  else if (param_6 != 0) {
    func_0x0001002ed07c(0);
    _objc_retain(param_6);
    _objc_retain();
    uVar1 = param_3;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(param_3);
    _objc_release(param_6);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 10425b244; end: 10425b273;  */

void FUN_10425b244(undefined8 *param_1)

{
  _objc_release(*param_1);
  _objc_release(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[2]);
  return;
}



/* Entry: 10425b274; end: 10425b2e7;  */

undefined8 * FUN_10425b274(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10425b2e8; end: 10425b333;  */

undefined8 * FUN_10425b2e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _objc_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10425b334; end: 10425b3fb;  */

int FUN_10425b334(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10425b3fc; end: 10425b4fb;  */

undefined8 FUN_10425b3fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10425b4fc; end: 10425b99f;  */

void FUN_10425b4fc(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
                  undefined8 param_17,undefined1 param_18,undefined4 param_19,undefined8 param_20,
                  undefined1 param_21,undefined4 param_22,undefined8 param_23,undefined1 param_24,
                  undefined4 param_25,undefined8 param_26,undefined1 param_27,undefined4 param_28,
                  undefined8 param_29,undefined8 param_30,undefined1 param_31,undefined4 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined1 param_36,
                  undefined4 param_37,undefined8 param_38,undefined1 param_39,undefined4 param_40,
                  undefined8 param_41,undefined1 param_42,undefined4 param_43,undefined8 param_44,
                  undefined8 param_45,undefined1 param_46,undefined4 param_47,undefined8 param_48,
                  undefined1 param_49,undefined4 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined1 param_57,undefined4 param_58,undefined8 param_59,undefined1 param_60,
                  undefined4 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined1 param_65,undefined4 param_66,undefined8 param_67,undefined1 param_68,
                  undefined4 param_69,undefined8 param_70,undefined1 param_71,undefined4 param_72,
                  undefined8 param_73,undefined1 param_74,undefined4 param_75,undefined8 param_76,
                  undefined1 param_77,undefined4 param_78,undefined8 param_79,undefined8 param_80,
                  undefined8 param_81,undefined1 param_82)

{
  undefined1 auStack_da0 [776];
  undefined1 uStack_a98;
  undefined1 uStack_a97;
  undefined8 uStack_a90;
  undefined1 uStack_a88;
  undefined8 uStack_a80;
  undefined1 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined1 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined1 uStack_a40;
  undefined8 uStack_a38;
  undefined1 uStack_a30;
  undefined8 uStack_a28;
  undefined1 uStack_a20;
  undefined8 uStack_a18;
  undefined1 uStack_a10;
  undefined1 auStack_a08 [257];
  undefined1 uStack_907;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined1 uStack_8d0;
  undefined8 uStack_8c8;
  undefined1 uStack_8c0;
  undefined8 uStack_8b8;
  undefined1 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined1 uStack_870;
  undefined8 uStack_868;
  undefined1 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined1 uStack_828;
  undefined8 uStack_820;
  undefined1 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined1 uStack_7f8;
  undefined8 uStack_7f0;
  undefined1 uStack_7e8;
  undefined8 uStack_7e0;
  undefined1 uStack_7d8;
  undefined8 uStack_7d0;
  undefined1 uStack_7c8;
  undefined8 uStack_7c0;
  undefined1 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined1 uStack_798;
  undefined1 auStack_790 [264];
  undefined1 auStack_688 [776];
  undefined1 auStack_380 [784];
  
  func_0x000100406b98(auStack_790);
  _memcpy(auStack_a08,auStack_790,0x101);
  uStack_8a0 = 1;
  uStack_8a8 = 0;
  uStack_890 = 0;
  uStack_898 = 0;
  uStack_880 = 0;
  uStack_888 = 0;
  uStack_a58 = param_11;
  uStack_a50 = param_13;
  uStack_a48 = param_14;
  uStack_a40 = param_15;
  uStack_a38 = param_17;
  uStack_a30 = param_18;
  uStack_a28 = param_20;
  uStack_a20 = param_21;
  uStack_a18 = param_23;
  uStack_a10 = param_24;
  uStack_a98 = param_3;
  uStack_a97 = param_4;
  uStack_a90 = param_2;
  uStack_a88 = param_5;
  uStack_a80 = param_6;
  uStack_a78 = param_7;
  uStack_a70 = param_8;
  uStack_a68 = param_9;
  uStack_a60 = param_10;
  func_0x00010425b444(param_26,auStack_a08,0x112dcc740,&UNK_10d9907d0);
  uStack_907 = param_27;
  uStack_900 = param_29;
  uStack_8f8 = param_30;
  uStack_8f0 = param_31;
  uStack_8e0 = param_34;
  uStack_8e8 = param_33;
  uStack_8d8 = param_35;
  uStack_8d0 = param_36;
  uStack_8c8 = param_38;
  uStack_8c0 = param_39;
  uStack_8b8 = param_41;
  uStack_8b0 = param_42;
  func_0x00010425b444(param_44,&uStack_8a8,0x112f732d0,&UNK_10dbced78);
  uStack_878 = param_45;
  uStack_870 = param_46;
  uStack_868 = param_48;
  uStack_860 = param_49;
  uStack_850 = param_52;
  uStack_858 = param_51;
  uStack_840 = param_54;
  uStack_848 = param_53;
  uStack_838 = param_55;
  uStack_830 = param_56;
  uStack_828 = param_57;
  uStack_820 = param_59;
  uStack_818 = param_60;
  uStack_808 = param_63;
  uStack_810 = param_62;
  uStack_800 = param_64;
  uStack_7f8 = param_65;
  uStack_7f0 = param_67;
  uStack_7e8 = param_68;
  uStack_7e0 = param_70;
  uStack_7d8 = param_71;
  uStack_7d0 = param_73;
  uStack_7c8 = param_74;
  uStack_7c0 = param_76;
  uStack_7b8 = param_77;
  uStack_7a8 = param_80;
  uStack_7b0 = param_79;
  uStack_7a0 = param_81;
  uStack_798 = param_82;
  _memcpy(auStack_688,&uStack_a98,0x301);
  _memcpy(auStack_380,&uStack_a98,0x301);
  func_0x00010178e208(auStack_688,auStack_da0);
  func_0x00010178e244(auStack_380);
  _memcpy(param_1,auStack_688,0x301);
  return;
}



/* Entry: 10425b9a0; end: 10425b9a3;  */

undefined8 FUN_10425b9a0(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uStack_af0;
  long lStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_9e0;
  long lStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_8d8;
  long lStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined1 auStack_7d0 [48];
  undefined1 auStack_7a0 [528];
  undefined8 uStack_590;
  long lStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined1 auStack_488 [264];
  undefined1 auStack_380 [264];
  undefined1 auStack_278 [264];
  undefined1 auStack_170 [272];
  
  if (((*param_1 ^ *param_2) & 1) != 0) {
    return 0;
  }
  if (((param_1[1] ^ param_2[1]) & 1) != 0) {
    return 0;
  }
  if (*(double *)(param_1 + 8) != *(double *)(param_2 + 8)) {
    return 0;
  }
  if (((param_1[0x10] ^ param_2[0x10]) & 1) != 0) {
    return 0;
  }
  if (param_1[0x20] == 1) {
    if (param_2[0x20] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x20] == 1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x18) != *(long *)(param_2 + 0x18)) {
      return 0;
    }
  }
  lVar8 = *(long *)(param_1 + 0x30);
  lVar7 = *(long *)(param_2 + 0x30);
  if (lVar8 == 0) {
    if (lVar7 != 0) {
      return 0;
    }
  }
  else {
    if (lVar7 == 0) {
      return 0;
    }
    uVar3 = *(ulong *)(param_1 + 0x28);
    if (((uVar3 != *(ulong *)(param_2 + 0x28)) || (lVar8 != lVar7)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar3,lVar8,*(ulong *)(param_2 + 0x28),lVar7,0), (uVar3 & 1) == 0)) {
      return 0;
    }
  }
  if (param_1[0x40] == 1) {
    if (param_2[0x40] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x40] == 1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x38) != *(long *)(param_2 + 0x38)) {
      return 0;
    }
  }
  if (((param_1[0x41] ^ param_2[0x41]) & 1) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x48) != *(int *)(param_2 + 0x48)) {
    return 0;
  }
  uVar3 = *(ulong *)(param_1 + 0x50);
  lVar7 = *(long *)(param_2 + 0x50);
  if (uVar3 == 0) {
    if (lVar7 != 0) {
      return 0;
    }
  }
  else {
    if (lVar7 == 0) {
      return 0;
    }
    func_0x00010142cfc4(uVar3,lVar7);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  if (((param_1[0x58] ^ param_2[0x58]) & 1) != 0) {
    return 0;
  }
  if (((param_1[0x59] ^ param_2[0x59]) & 1) != 0) {
    return 0;
  }
  if (param_1[0x68] == 1) {
    if (param_2[0x68] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x68] == 1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x60) != *(long *)(param_2 + 0x60)) {
      return 0;
    }
  }
  if (param_1[0x78] == 1) {
    if (param_2[0x78] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x78] == 1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x70) != *(long *)(param_2 + 0x70)) {
      return 0;
    }
  }
  if (param_1[0x88] == 1) {
    if (param_2[0x88] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x88] == 1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x80) != *(long *)(param_2 + 0x80)) {
      return 0;
    }
  }
  if (((param_1[0x89] ^ param_2[0x89]) & 1) != 0) {
    return 0;
  }
  _memcpy(auStack_278,param_1 + 0x90,0x101);
  _memcpy(auStack_380,param_2 + 0x90,0x101);
  _memcpy(&uStack_590,param_1 + 0x90,0x101);
  _memcpy(auStack_488,param_2 + 0x90,0x101);
  iVar2 = (int)&uStack_590;
  func_0x0001018803f0();
  if (iVar2 == 1) {
    iVar2 = (int)auStack_488;
    func_0x0001018803f0();
    if (iVar2 != 1) {
LAB_10425d584:
      _memcpy(auStack_7a0,&uStack_590,0x209);
      FUN_10425b3fc(auStack_278,auStack_170,0x112dcc740,&UNK_10d9907d0);
      FUN_10425b3fc(auStack_380,auStack_170,0x112dcc740,&UNK_10d9907d0);
      FUN_10425f204(auStack_7a0,0x113069da8,&UNK_10dce4f50);
      return 0;
    }
    _memcpy(auStack_7a0,&uStack_590,0x101);
    FUN_10425b3fc(auStack_278,auStack_170,0x112dcc740,&UNK_10d9907d0);
    FUN_10425b3fc(auStack_380,auStack_170,0x112dcc740,&UNK_10d9907d0);
    FUN_10425f204(auStack_7a0,0x112dcc740,&UNK_10d9907d0);
  }
  else {
    _memcpy(&uStack_8d8,&uStack_590,0x101);
    iVar2 = (int)auStack_488;
    func_0x0001018803f0();
    if (iVar2 == 1) goto LAB_10425d584;
    _memcpy(&uStack_9e0,auStack_488,0x101);
    _memcpy(auStack_7a0,auStack_488,0x101);
    _memcpy(auStack_170,&uStack_8d8,0x101);
    puVar4 = auStack_170;
    FUN_1042608f8(puVar4,auStack_7a0);
    FUN_10425b3fc(auStack_278,&uStack_af0,0x112dcc740,&UNK_10d9907d0);
    FUN_10425b3fc(auStack_380,&uStack_af0,0x112dcc740,&UNK_10d9907d0);
    FUN_10425f204(&uStack_9e0,0x112dcc740,&UNK_10d9907d0);
    FUN_10425f204(&uStack_590,0x112dcc740,&UNK_10d9907d0);
    if (((ulong)puVar4 & 1) == 0) {
      return 0;
    }
  }
  if (((param_1[0x191] ^ param_2[0x191]) & 1) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x198) != *(int *)(param_2 + 0x198)) {
    return 0;
  }
  if (param_1[0x1a8] == 1) {
    if (param_2[0x1a8] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x1a8] == 1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x1a0) != *(long *)(param_2 + 0x1a0)) {
      return 0;
    }
  }
  uVar3 = *(ulong *)(param_1 + 0x1b0);
  lVar7 = *(long *)(param_2 + 0x1b0);
  if (uVar3 == 1) {
    if (lVar7 != 1) {
      return 0;
    }
  }
  else {
    if (lVar7 == 1) {
      return 0;
    }
    uVar11 = *(undefined8 *)(param_1 + 0x1b8);
    uVar13 = *(undefined8 *)(param_1 + 0x1c0);
    uVar12 = *(undefined8 *)(param_2 + 0x1b8);
    uVar14 = *(undefined8 *)(param_2 + 0x1c0);
    func_0x0001034cdf84(lVar7,uVar12,uVar14);
    func_0x0001034cdf84(uVar3,uVar11,uVar13);
    uVar5 = uVar3;
    FUN_10425b0f4(uVar3,uVar11,uVar13,lVar7,uVar12,uVar14);
    _objc_release(lVar7);
    _objc_release(uVar12);
    _objc_release(uVar14);
    func_0x0001034cdfc4(uVar3,uVar11,uVar13);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  if (((param_1[0x1c8] ^ param_2[0x1c8]) & 1) != 0) {
    return 0;
  }
  if (param_1[0x1d8] == 1) {
    if (param_2[0x1d8] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x1d8] == 1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x1d0) != *(long *)(param_2 + 0x1d0)) {
      return 0;
    }
  }
  if (param_1[0x1e8] == 1) {
    if (param_2[0x1e8] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x1e8] == 1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x1e0) != *(long *)(param_2 + 0x1e0)) {
      return 0;
    }
  }
  lVar7 = *(long *)(param_1 + 0x1f8);
  uVar11 = *(undefined8 *)(param_1 + 0x1f0);
  uVar19 = *(undefined8 *)(param_1 + 0x208);
  uVar17 = *(undefined8 *)(param_1 + 0x200);
  uVar15 = *(undefined8 *)(param_1 + 0x218);
  uVar12 = *(undefined8 *)(param_1 + 0x210);
  lVar8 = *(long *)(param_2 + 0x1f8);
  uVar13 = *(undefined8 *)(param_2 + 0x1f0);
  uVar20 = *(undefined8 *)(param_2 + 0x208);
  uVar18 = *(undefined8 *)(param_2 + 0x200);
  uVar16 = *(undefined8 *)(param_2 + 0x218);
  uVar14 = *(undefined8 *)(param_2 + 0x210);
  uStack_af0 = uVar13;
  lStack_ae8 = lVar8;
  uStack_ae0 = uVar18;
  uStack_ad8 = uVar20;
  uStack_ad0 = uVar14;
  uStack_ac8 = uVar16;
  uStack_9e0 = uVar11;
  lStack_9d8 = lVar7;
  uStack_9d0 = uVar17;
  uStack_9c8 = uVar19;
  uStack_9c0 = uVar12;
  uStack_9b8 = uVar15;
  if (lVar7 == 1) {
    if (lVar8 != 1) {
LAB_10425d8cc:
      FUN_10425b3fc(&uStack_9e0,&uStack_590,0x112f732d0,&UNK_10dbced78);
      FUN_10425b3fc(&uStack_af0,&uStack_590,0x112f732d0,&UNK_10dbced78);
      FUN_10425f1b0(uVar11,lVar7,uVar17,uVar19,uVar12,uVar15);
      FUN_10425f1b0(uVar13,lVar8,uVar18,uVar20,uVar14,uVar16);
      return 0;
    }
    FUN_10425b3fc(&uStack_9e0,&uStack_590,0x112f732d0,&UNK_10dbced78);
    FUN_10425b3fc(&uStack_af0,&uStack_590,0x112f732d0,&UNK_10dbced78);
    FUN_10425f1b0(uVar11,1,uVar17,uVar19,uVar12,uVar15);
  }
  else {
    if (lVar8 == 1) goto LAB_10425d8cc;
    puVar6 = &uStack_8d8;
    uStack_8d8 = uVar11;
    lStack_8d0 = lVar7;
    uStack_8c8 = uVar17;
    uStack_8c0 = uVar19;
    uStack_8b8 = uVar12;
    uStack_8b0 = uVar15;
    uStack_590 = uVar13;
    lStack_588 = lVar8;
    uStack_580 = uVar18;
    uStack_578 = uVar20;
    uStack_570 = uVar14;
    uStack_568 = uVar16;
    FUN_10425a4c4(puVar6,&uStack_590);
    FUN_10425b3fc(&uStack_9e0,auStack_7d0,0x112f732d0,&UNK_10dbced78);
    FUN_10425b3fc(&uStack_af0,auStack_7d0,0x112f732d0,&UNK_10dbced78);
    FUN_10425f1b0(uVar13,lVar8,uVar18,uVar20,uVar14,uVar16);
    FUN_10425f1b0(uVar11,lVar7,uVar17,uVar19,uVar12,uVar15);
    if (((ulong)puVar6 & 1) == 0) {
      return 0;
    }
  }
  if (param_1[0x228] == 1) {
    if (param_2[0x228] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x228] == 1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x220) != *(long *)(param_2 + 0x220)) {
      return 0;
    }
  }
  if (param_1[0x238] == 1) {
    if (param_2[0x238] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x238] == 1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x230) != *(long *)(param_2 + 0x230)) {
      return 0;
    }
  }
  if (((param_1[0x239] ^ param_2[0x239]) & 1) != 0) {
    return 0;
  }
  uVar3 = *(ulong *)(param_1 + 0x240);
  lVar7 = *(long *)(param_2 + 0x240);
  if (uVar3 == 0) {
    if (lVar7 != 0) {
      return 0;
    }
LAB_10425db44:
    uVar3 = *(ulong *)(param_1 + 600);
    if (uVar3 == 0) {
      if (*(long *)(param_2 + 600) != 0) {
        return 0;
      }
    }
    else {
      if (*(long *)(param_2 + 600) == 0) {
        return 0;
      }
      func_0x0001020f35dc();
      if ((uVar3 & 1) == 0) {
        return 0;
      }
    }
    lVar7 = *(long *)(param_2 + 0x268);
    if (*(long *)(param_1 + 0x268) == 0) {
      if (lVar7 != 0) {
        return 0;
      }
    }
    else {
      if (lVar7 == 0) {
        return 0;
      }
      uVar3 = *(ulong *)(param_1 + 0x260);
      if (((uVar3 != *(ulong *)(param_2 + 0x260)) || (*(long *)(param_1 + 0x268) != lVar7)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar3 & 1) == 0)) {
        return 0;
      }
    }
    if ((((param_1[0x270] ^ param_2[0x270]) & 1) == 0) &&
       (((param_1[0x271] ^ param_2[0x271]) & 1) == 0)) {
      bVar1 = param_2[0x272];
      if (param_1[0x272] == 2) {
        if (bVar1 != 2) {
          return 0;
        }
      }
      else {
        if (bVar1 == 2) {
          return 0;
        }
        if (((param_1[0x272] ^ bVar1) & 1) != 0) {
          return 0;
        }
      }
      if (((((((*(int *)(param_1 + 0x278) == *(int *)(param_2 + 0x278)) &&
              (((param_1[0x280] ^ param_2[0x280]) & 1) == 0)) &&
             (*(int *)(param_1 + 0x288) == *(int *)(param_2 + 0x288))) &&
            ((*(long *)(param_1 + 0x290) == *(long *)(param_2 + 0x290) &&
             (*(long *)(param_1 + 0x298) == *(long *)(param_2 + 0x298))))) &&
           ((((param_1[0x2a0] ^ param_2[0x2a0]) & 1) == 0 &&
            ((((param_1[0x2a1] ^ param_2[0x2a1]) & 1) == 0 &&
             (*(int *)(param_1 + 0x2a8) == *(int *)(param_2 + 0x2a8))))))) &&
          (((param_1[0x2b0] ^ param_2[0x2b0]) & 1) == 0)) &&
         (((((param_1[0x2b1] ^ param_2[0x2b1]) & 1) == 0 &&
           (((param_1[0x2b2] ^ param_2[0x2b2]) & 1) == 0)) &&
          (((param_1[0x2b3] ^ param_2[0x2b3]) & 1) == 0)))) {
        if (param_1[0x2c0] == 1) {
          if (param_2[0x2c0] != 1) {
            return 0;
          }
        }
        else {
          if (param_2[0x2c0] == 1) {
            return 0;
          }
          if (*(long *)(param_1 + 0x2b8) != *(long *)(param_2 + 0x2b8)) {
            return 0;
          }
        }
        if (param_1[0x2d0] == 1) {
          if (param_2[0x2d0] != 1) {
            return 0;
          }
        }
        else {
          if (param_2[0x2d0] == 1) {
            return 0;
          }
          if (*(long *)(param_1 + 0x2c8) != *(long *)(param_2 + 0x2c8)) {
            return 0;
          }
        }
        if (param_1[0x2e0] == 1) {
          if (param_2[0x2e0] != 1) {
            return 0;
          }
        }
        else {
          if (param_2[0x2e0] == 1) {
            return 0;
          }
          if (*(long *)(param_1 + 0x2d8) != *(long *)(param_2 + 0x2d8)) {
            return 0;
          }
        }
        lVar7 = *(long *)(param_2 + 0x2f0);
        if (*(long *)(param_1 + 0x2f0) == 0) {
          if (lVar7 != 0) {
            return 0;
          }
        }
        else {
          if (lVar7 == 0) {
            return 0;
          }
          uVar3 = *(ulong *)(param_1 + 0x2e8);
          if (((uVar3 != *(ulong *)(param_2 + 0x2e8)) || (*(long *)(param_1 + 0x2f0) != lVar7)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar3 & 1) == 0)) {
            return 0;
          }
        }
        if (param_1[0x300] == 1) {
          if (param_2[0x300] == 1) {
            return 1;
          }
        }
        else if ((param_2[0x300] != 1) && (*(long *)(param_1 + 0x2f8) == *(long *)(param_2 + 0x2f8))
                ) {
          return 1;
        }
      }
    }
  }
  else {
    if (lVar7 == 0) {
      return 0;
    }
    uVar10 = *(ulong *)(param_1 + 0x248);
    uVar9 = *(ulong *)(param_1 + 0x250);
    uVar11 = *(undefined8 *)(param_2 + 0x248);
    uVar12 = *(undefined8 *)(param_2 + 0x250);
    uVar5 = uVar3;
    func_0x0001042298e8(uVar3,lVar7);
    if ((uVar5 & 1) == 0) {
      func_0x00010425b48c(lVar7,uVar11,uVar12);
      func_0x00010425b48c(uVar3,uVar10,uVar9);
    }
    else {
      uVar5 = uVar10;
      func_0x000104229964(uVar10,uVar11);
      func_0x00010425b48c(lVar7,uVar11,uVar12);
      func_0x00010425b48c(uVar3,uVar10,uVar9);
      if ((uVar5 & 1) != 0) {
        uVar5 = uVar9;
        func_0x000104229a00(uVar9,uVar12);
        _swift_bridgeObjectRelease(uVar12);
        _swift_bridgeObjectRelease(uVar11);
        _swift_bridgeObjectRelease(lVar7);
        func_0x00010425b4c4(uVar3,uVar10,uVar9);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        goto LAB_10425db44;
      }
    }
    _swift_bridgeObjectRelease(uVar12);
    _swift_bridgeObjectRelease(uVar11);
    _swift_bridgeObjectRelease(lVar7);
    func_0x00010425b4c4(uVar3,uVar10,uVar9);
  }
  return 0;
}



/* Entry: 10425b9a4; end: 10425b9f7;  */

uint FUN_10425b9a4(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_630 [776];
  undefined1 auStack_328 [776];
  
  uVar1 = 0;
  _memcpy(auStack_630,param_1,0x301);
  _memcpy(auStack_328,param_2,0x301);
  FUN_10425d20c(auStack_630,auStack_328);
  return uVar1 & 1;
}



/* Entry: 10425b9f8; end: 10425bbe7;  */

void FUN_10425b9f8(void)

{
  undefined1 *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_d58 [776];
  undefined2 auStack_a50 [4];
  undefined8 uStack_a48;
  undefined1 uStack_a40;
  undefined8 uStack_a38;
  undefined1 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined2 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined2 uStack_9f8;
  undefined8 uStack_9f0;
  undefined1 uStack_9e8;
  undefined8 uStack_9e0;
  undefined1 uStack_9d8;
  undefined8 uStack_9d0;
  undefined2 uStack_9c8;
  undefined1 auStack_9c0 [257];
  undefined1 uStack_8bf;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined1 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined1 uStack_888;
  undefined8 uStack_880;
  undefined1 uStack_878;
  undefined8 uStack_870;
  undefined1 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined1 uStack_828;
  undefined8 uStack_820;
  undefined2 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined2 uStack_7e0;
  undefined1 uStack_7de;
  undefined8 uStack_7d8;
  undefined1 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined2 uStack_7b0;
  undefined8 uStack_7a8;
  undefined4 uStack_7a0;
  undefined8 uStack_798;
  undefined1 uStack_790;
  undefined8 uStack_788;
  undefined1 uStack_780;
  undefined8 uStack_778;
  undefined1 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined1 uStack_750;
  undefined1 auStack_748 [776];
  undefined1 auStack_440 [264];
  undefined1 auStack_338 [776];
  
  func_0x000100406b98(auStack_440);
  _memcpy(auStack_9c0,auStack_440,0x101);
  uVar3 = 1;
  uVar2 = 0;
  auStack_a50[0] = 0;
  uStack_a48 = 0;
  uStack_a40 = 0;
  uStack_a38 = 0;
  uStack_858 = 1;
  uStack_860 = 0;
  uStack_848 = 0;
  uStack_850 = 0;
  uStack_838 = 0;
  uStack_840 = 0;
  uStack_a30 = 1;
  uStack_a28 = 0;
  uStack_a18 = 0;
  uStack_a20 = 0;
  uStack_a10 = 1;
  uStack_9f0 = 0;
  uStack_a00 = 0;
  uStack_a08 = 0;
  uStack_9f8 = 0;
  uStack_9e8 = 1;
  uStack_9e0 = 0;
  uStack_9d8 = 1;
  uStack_9d0 = 0;
  uStack_9c8 = 1;
  FUN_10425f204(auStack_9c0,0x112dcc740,&UNK_10d9907d0);
  _memcpy(auStack_9c0,auStack_440,0x101);
  uStack_8bf = 0;
  uStack_8b0 = 0;
  uStack_8b8 = 0;
  uStack_8a8 = 1;
  uStack_8a0 = 1;
  uStack_880 = 0;
  uStack_890 = 0;
  uStack_898 = 0;
  uStack_888 = 0;
  uStack_878 = 1;
  uStack_870 = 0;
  uStack_868 = 1;
  FUN_10425f1b0(uStack_860,uStack_858,uStack_850,uStack_848,uStack_840,uStack_838,in_x6,in_x7,uVar2,
                uVar3);
  uStack_848 = 0;
  uStack_850 = 0;
  uStack_838 = 0;
  uStack_840 = 0;
  uStack_830 = 0;
  uStack_828 = 1;
  uStack_820 = 0;
  uStack_818 = 1;
  uStack_808 = 0;
  uStack_810 = 0;
  uStack_7f8 = 0;
  uStack_800 = 0;
  uStack_7e8 = 0;
  uStack_7f0 = 0;
  uStack_7e0 = 0;
  uStack_7de = 2;
  uStack_7d8 = 0;
  uStack_7d0 = 0;
  uStack_798 = 0;
  uStack_7c8 = 0;
  uStack_7b8 = 0;
  uStack_7c0 = 0;
  uStack_7b0 = 0;
  uStack_7a0 = 0;
  uStack_7a8 = 0;
  uStack_790 = 1;
  uStack_788 = 0;
  uStack_780 = 1;
  uStack_778 = 0;
  uStack_770 = 1;
  uStack_760 = 0;
  uStack_768 = 0;
  uStack_758 = 0;
  uStack_750 = 1;
  uStack_860 = uVar2;
  uStack_858 = uVar3;
  _memcpy(auStack_748,auStack_a50,0x301);
  _memcpy(auStack_338,auStack_a50,0x301);
  func_0x00010178e208(auStack_748,auStack_d58);
  func_0x00010178e244(auStack_338);
  FUN_1042ca7c4(0);
  _objc_allocWithZone();
  puVar1 = auStack_748;
  FUN_1042c96c8();
  func_0x00010178e244(auStack_748);
  puRam0000000113813360 = puVar1;
  return;
}



/* Entry: 10425bbe8; end: 10425bc27; +[SCAdWebViewTrackInfo identity] */

void FUN_10425bbe8(void)

{
  if (lRam0000000113069dc8 != -1) {
    _swift_once(0x113069dc8,FUN_10425b9f8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813360);
  return;
}



/* Entry: 10425bc28; end: 10425bcd3; -[SCAdWebViewTrackInfo withIsInstantPageEnabled:] */

void FUN_10425bc28(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_958 [776];
  undefined1 auStack_650 [672];
  undefined1 uStack_3b0;
  undefined1 auStack_348 [776];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042c9f5c(auStack_650);
  uStack_3b0 = param_3;
  _memcpy(auStack_348,auStack_650,0x301);
  _objc_allocWithZone(uVar1);
  func_0x00010178e208(auStack_348,auStack_958);
  puVar2 = auStack_348;
  FUN_1042c96c8(puVar2);
  func_0x00010178e244(auStack_348);
  _objc_release(param_1);
  func_0x00010178e244(auStack_650);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10425bcd4; end: 10425bd7f; -[SCAdWebViewTrackInfo withIsShopPayUser:] */

void FUN_10425bcd4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_958 [776];
  undefined1 auStack_650 [673];
  undefined1 uStack_3af;
  undefined1 auStack_348 [776];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042c9f5c(auStack_650);
  uStack_3af = param_3;
  _memcpy(auStack_348,auStack_650,0x301);
  _objc_allocWithZone(uVar1);
  func_0x00010178e208(auStack_348,auStack_958);
  puVar2 = auStack_348;
  FUN_1042c96c8(puVar2);
  func_0x00010178e244(auStack_348);
  _objc_release(param_1);
  func_0x00010178e244(auStack_650);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10425bd80; end: 10425be6b; -[SCAdWebViewTrackInfo withGaHitTypes:] */

void FUN_10425bd80(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_c58 [776];
  undefined1 auStack_950 [80];
  long lStack_900;
  undefined1 auStack_648 [80];
  undefined8 uStack_5f8;
  undefined8 uStack_340;
  undefined1 auStack_338 [776];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_3,PTR___sSSN_11034da80);
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042c9f5c(auStack_648);
  uStack_340 = uStack_5f8;
  FUN_10425f204(&uStack_340,0x112d445a8,&UNK_10d990150);
  _memcpy(auStack_950,auStack_648,0x301);
  lStack_900 = param_3;
  _memcpy(auStack_338,auStack_950,0x301);
  _objc_allocWithZone(uVar1);
  func_0x00010178e208(auStack_338,auStack_c58);
  puVar2 = auStack_338;
  FUN_1042c96c8(puVar2);
  func_0x00010178e244(auStack_338);
  _objc_release(param_1);
  func_0x00010178e244(auStack_950);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10425be6c; end: 10425bf47; -[SCAdWebViewTrackInfo withFirstGAHitLatency:] */

void FUN_10425be6c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_948 [776];
  undefined1 auStack_640 [96];
  long lStack_5e0;
  undefined1 uStack_5d8;
  undefined1 auStack_338 [776];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain();
  FUN_1042c9f5c(auStack_640,param_1);
  uStack_5d8 = param_3 == 0;
  if ((bool)uStack_5d8) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c067fc0();
  }
  lStack_5e0 = lVar2;
  _memcpy(auStack_338,auStack_640,0x301);
  _objc_allocWithZone(uVar1);
  func_0x00010178e208(auStack_338,auStack_948);
  puVar3 = auStack_338;
  FUN_1042c96c8(puVar3);
  func_0x00010178e244(auStack_338);
  _objc_release(param_3);
  _objc_release(param_1);
  func_0x00010178e244(auStack_640);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10425bf48; end: 10425c023; -[SCAdWebViewTrackInfo withFirstGATsMs:] */

void FUN_10425bf48(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_948 [776];
  undefined1 auStack_640 [112];
  long lStack_5d0;
  undefined1 uStack_5c8;
  undefined1 auStack_338 [776];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain();
  FUN_1042c9f5c(auStack_640,param_1);
  uStack_5c8 = param_3 == 0;
  if ((bool)uStack_5c8) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c067fc0();
  }
  lStack_5d0 = lVar2;
  _memcpy(auStack_338,auStack_640,0x301);
  _objc_allocWithZone(uVar1);
  func_0x00010178e208(auStack_338,auStack_948);
  puVar3 = auStack_338;
  FUN_1042c96c8(puVar3);
  func_0x00010178e244(auStack_338);
  _objc_release(param_3);
  _objc_release(param_1);
  func_0x00010178e244(auStack_640);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10425c024; end: 10425c0cf; -[SCAdWebViewTrackInfo withHasGAPageViewHit:] */

void FUN_10425c024(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_958 [776];
  undefined1 auStack_650 [88];
  undefined1 uStack_5f8;
  undefined1 auStack_348 [776];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042c9f5c(auStack_650);
  uStack_5f8 = param_3;
  _memcpy(auStack_348,auStack_650,0x301);
  _objc_allocWithZone(uVar1);
  func_0x00010178e208(auStack_348,auStack_958);
  puVar2 = auStack_348;
  FUN_1042c96c8(puVar2);
  func_0x00010178e244(auStack_348);
  _objc_release(param_1);
  func_0x00010178e244(auStack_650);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10425c0d0; end: 10425c17b; -[SCAdWebViewTrackInfo withHasGAPageViewHitInLandingPage:] */

void FUN_10425c0d0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_958 [776];
  undefined1 auStack_650 [89];
  undefined1 uStack_5f7;
  undefined1 auStack_348 [776];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042c9f5c(auStack_650);
  uStack_5f7 = param_3;
  _memcpy(auStack_348,auStack_650,0x301);
  _objc_allocWithZone(uVar1);
  func_0x00010178e208(auStack_348,auStack_958);
  puVar2 = auStack_348;
  FUN_1042c96c8(puVar2);
  func_0x00010178e244(auStack_348);
  _objc_release(param_1);
  func_0x00010178e244(auStack_650);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10425c17c; end: 10425c34b; -[SCAdWebViewTrackInfo withGaHitCounts:] */

void FUN_10425c17c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_948 [776];
  undefined1 auStack_640 [128];
  long lStack_5c0;
  undefined1 uStack_5b8;
  undefined1 auStack_338 [776];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain();
  FUN_1042c9f5c(auStack_640,param_1);
  uStack_5b8 = param_3 == 0;
  if ((bool)uStack_5b8) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c067fc0();
  }
  lStack_5c0 = lVar2;
  _memcpy(auStack_338,auStack_640,0x301);
  _objc_allocWithZone(uVar1);
  func_0x00010178e208(auStack_338,auStack_948);
  puVar3 = auStack_338;
  FUN_1042c96c8(puVar3);
  func_0x00010178e244(auStack_338);
  _objc_release(param_3);
  _objc_release(param_1);
  func_0x00010178e244(auStack_640);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10425c34c; end: 10425c3ab; -[SCAdWebViewTrackInfo withWebViewLoadInfo:] */

void FUN_10425c34c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010425c258(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10425c3ac; end: 10425c457; -[SCAdWebViewTrackInfo withExitMethod:] */

void FUN_10425c3ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_958 [776];
  undefined1 auStack_650 [648];
  undefined8 uStack_3c8;
  undefined1 auStack_348 [776];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042c9f5c(auStack_650);
  uStack_3c8 = param_3;
  _memcpy(auStack_348,auStack_650,0x301);
  _objc_allocWithZone(uVar1);
  func_0x00010178e208(auStack_348,auStack_958);
  puVar2 = auStack_348;
  FUN_1042c96c8(puVar2);
  func_0x00010178e244(auStack_348);
  _objc_release(param_1);
  func_0x00010178e244(auStack_650);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10425c458; end: 10425c503; -[SCAdWebViewTrackInfo withScrollCount:] */

void FUN_10425c458(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_958 [776];
  undefined1 auStack_650 [656];
  undefined8 uStack_3c0;
  undefined1 auStack_348 [776];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042c9f5c(auStack_650);
  uStack_3c0 = param_3;
  _memcpy(auStack_348,auStack_650,0x301);
  _objc_allocWithZone(uVar1);
  func_0x00010178e208(auStack_348,auStack_958);
  puVar2 = auStack_348;
  FUN_1042c96c8(puVar2);
  func_0x00010178e244(auStack_348);
  _objc_release(param_1);
  func_0x00010178e244(auStack_650);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10425c504; end: 10425c5af; -[SCAdWebViewTrackInfo withTapCount:] */

void FUN_10425c504(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_958 [776];
  undefined1 auStack_650 [664];
  undefined8 uStack_3b8;
  undefined1 auStack_348 [776];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042c9f5c(auStack_650);
  uStack_3b8 = param_3;
  _memcpy(auStack_348,auStack_650,0x301);
  _objc_allocWithZone(uVar1);
  func_0x00010178e208(auStack_348,auStack_958);
  puVar2 = auStack_348;
  FUN_1042c96c8(puVar2);
  func_0x00010178e244(auStack_348);
  _objc_release(param_1);
  func_0x00010178e244(auStack_650);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10425c5b0; end: 10425c65b; -[SCAdWebViewTrackInfo withBrowserType:] */

void FUN_10425c5b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_958 [776];
  undefined1 auStack_650 [408];
  undefined8 uStack_4b8;
  undefined1 auStack_348 [776];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042c9f5c(auStack_650);
  uStack_4b8 = param_3;
  _memcpy(auStack_348,auStack_650,0x301);
  _objc_allocWithZone(uVar1);
  func_0x00010178e208(auStack_348,auStack_958);
  puVar2 = auStack_348;
  FUN_1042c96c8(puVar2);
  func_0x00010178e244(auStack_348);
  _objc_release(param_1);
  func_0x00010178e244(auStack_650);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10425c65c; end: 10425c707; -[SCAdWebViewTrackInfo withLoadedOnEntry:] */

void FUN_10425c65c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_958 [776];
  undefined1 auStack_650 [776];
  undefined1 auStack_348 [776];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042c9f5c(auStack_650);
  auStack_650[0] = param_3;
  _memcpy(auStack_348,auStack_650,0x301);
  _objc_allocWithZone(uVar1);
  func_0x00010178e208(auStack_348,auStack_958);
  puVar2 = auStack_348;
  FUN_1042c96c8(puVar2);
  func_0x00010178e244(auStack_348);
  _objc_release(param_1);
  func_0x00010178e244(auStack_650);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10425c708; end: 10425c7b3; -[SCAdWebViewTrackInfo withLoadedOnExit:] */

void FUN_10425c708(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_958 [776];
  undefined1 uStack_650;
  undefined1 uStack_64f;
  undefined1 auStack_348 [776];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042c9f5c(&uStack_650);
  uStack_64f = param_3;
  _memcpy(auStack_348,&uStack_650,0x301);
  _objc_allocWithZone(uVar1);
  func_0x00010178e208(auStack_348,auStack_958);
  puVar2 = auStack_348;
  FUN_1042c96c8(puVar2);
  func_0x00010178e244(auStack_348);
  _objc_release(param_1);
  func_0x00010178e244(&uStack_650);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10425c7b4; end: 10425c85f; -[SCAdWebViewTrackInfo withVisiblePageLoadTimeSeconds:] */

void FUN_10425c7b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_958 [776];
  undefined1 auStack_650 [8];
  undefined8 uStack_648;
  undefined1 auStack_348 [776];
  
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  FUN_1042c9f5c(auStack_650);
  uStack_648 = param_1;
  _memcpy(auStack_348,auStack_650,0x301);
  _objc_allocWithZone(uVar1);
  func_0x00010178e208(auStack_348,auStack_958);
  puVar2 = auStack_348;
  FUN_1042c96c8(puVar2);
  func_0x00010178e244(auStack_348);
  _objc_release(param_2);
  func_0x00010178e244(auStack_650);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10425c860; end: 10425c90b; -[SCAdWebViewTrackInfo withDidOpenInBrowser:] */

void FUN_10425c860(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_958 [776];
  undefined1 auStack_650 [401];
  undefined1 uStack_4bf;
  undefined1 auStack_348 [776];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042c9f5c(auStack_650);
  uStack_4bf = param_3;
  _memcpy(auStack_348,auStack_650,0x301);
  _objc_allocWithZone(uVar1);
  func_0x00010178e208(auStack_348,auStack_958);
  puVar2 = auStack_348;
  FUN_1042c96c8(puVar2);
  func_0x00010178e244(auStack_348);
  _objc_release(param_1);
  func_0x00010178e244(auStack_650);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10425c90c; end: 10425c9b7; -[SCAdWebViewTrackInfo withInstantPageType:] */

void FUN_10425c90c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_958 [776];
  undefined1 auStack_650 [680];
  undefined8 uStack_3a8;
  undefined1 auStack_348 [776];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042c9f5c(auStack_650);
  uStack_3a8 = param_3;
  _memcpy(auStack_348,auStack_650,0x301);
  _objc_allocWithZone(uVar1);
  func_0x00010178e208(auStack_348,auStack_958);
  puVar2 = auStack_348;
  FUN_1042c96c8(puVar2);
  func_0x00010178e244(auStack_348);
  _objc_release(param_1);
  func_0x00010178e244(auStack_650);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10425c9b8; end: 10425ca63; -[SCAdWebViewTrackInfo withDidTapExternalBrowserButton:] */

void FUN_10425c9b8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_958 [776];
  undefined1 auStack_650 [689];
  undefined1 uStack_39f;
  undefined1 auStack_348 [776];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042c9f5c(auStack_650);
  uStack_39f = param_3;
  _memcpy(auStack_348,auStack_650,0x301);
  _objc_allocWithZone(uVar1);
  func_0x00010178e208(auStack_348,auStack_958);
  puVar2 = auStack_348;
  FUN_1042c96c8(puVar2);
  func_0x00010178e244(auStack_348);
  _objc_release(param_1);
  func_0x00010178e244(auStack_650);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10425ca64; end: 10425cb0f; -[SCAdWebViewTrackInfo withDidTapCopyLink:] */

void FUN_10425ca64(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_958 [776];
  undefined1 auStack_650 [690];
  undefined1 uStack_39e;
  undefined1 auStack_348 [776];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042c9f5c(auStack_650);
  uStack_39e = param_3;
  _memcpy(auStack_348,auStack_650,0x301);
  _objc_allocWithZone(uVar1);
  func_0x00010178e208(auStack_348,auStack_958);
  puVar2 = auStack_348;
  FUN_1042c96c8(puVar2);
  func_0x00010178e244(auStack_348);
  _objc_release(param_1);
  func_0x00010178e244(auStack_650);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10425cb10; end: 10425cc0f; -[SCAdWebViewTrackInfo withUrl:] */

void FUN_10425cb10(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_c78 [776];
  undefined1 auStack_970 [608];
  long lStack_710;
  undefined8 uStack_708;
  undefined1 auStack_668 [608];
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_348 [776];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042c9f5c(auStack_668);
  uStack_358 = uStack_400;
  uStack_360 = uStack_408;
  FUN_10425f204(&uStack_360,0x112d35ff8,&UNK_10d900cd0);
  _memcpy(auStack_970,auStack_668,0x301);
  lStack_710 = param_3;
  uStack_708 = param_2;
  _memcpy(auStack_348,auStack_970,0x301);
  _objc_allocWithZone(uVar1);
  func_0x00010178e208(auStack_348,auStack_c78);
  puVar2 = auStack_348;
  FUN_1042c96c8(puVar2);
  func_0x00010178e244(auStack_348);
  _objc_release(param_1);
  func_0x00010178e244(auStack_970);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10425cc10; end: 10425cceb; -[SCAdWebViewTrackInfo withInitialPageLoadStatusCode:] */

void FUN_10425cc10(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_948 [776];
  undefined1 auStack_640 [24];
  long lStack_628;
  undefined1 uStack_620;
  undefined1 auStack_338 [776];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain();
  FUN_1042c9f5c(auStack_640,param_1);
  uStack_620 = param_3 == 0;
  if ((bool)uStack_620) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c067fc0();
  }
  lStack_628 = lVar2;
  _memcpy(auStack_338,auStack_640,0x301);
  _objc_allocWithZone(uVar1);
  func_0x00010178e208(auStack_338,auStack_948);
  puVar3 = auStack_338;
  FUN_1042c96c8(puVar3);
  func_0x00010178e244(auStack_338);
  _objc_release(param_3);
  _objc_release(param_1);
  func_0x00010178e244(auStack_640);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10425ccec; end: 10425cd97; -[SCAdWebViewTrackInfo withDidPresentSkoverlay:] */

void FUN_10425ccec(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_958 [776];
  undefined1 auStack_650 [691];
  undefined1 uStack_39d;
  undefined1 auStack_348 [776];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042c9f5c(auStack_650);
  uStack_39d = param_3;
  _memcpy(auStack_348,auStack_650,0x301);
  _objc_allocWithZone(uVar1);
  func_0x00010178e208(auStack_348,auStack_958);
  puVar2 = auStack_348;
  FUN_1042c96c8(puVar2);
  func_0x00010178e244(auStack_348);
  _objc_release(param_1);
  func_0x00010178e244(auStack_650);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10425cd98; end: 10425ce73; -[SCAdWebViewTrackInfo withRetargetPromptRenderedMs:] */

void FUN_10425cd98(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_948 [776];
  undefined1 auStack_640 [696];
  long lStack_388;
  undefined1 uStack_380;
  undefined1 auStack_338 [776];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain();
  FUN_1042c9f5c(auStack_640,param_1);
  uStack_380 = param_3 == 0;
  if ((bool)uStack_380) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c067fc0();
  }
  lStack_388 = lVar2;
  _memcpy(auStack_338,auStack_640,0x301);
  _objc_allocWithZone(uVar1);
  func_0x00010178e208(auStack_338,auStack_948);
  puVar3 = auStack_338;
  FUN_1042c96c8(puVar3);
  func_0x00010178e244(auStack_338);
  _objc_release(param_3);
  _objc_release(param_1);
  func_0x00010178e244(auStack_640);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10425ce74; end: 10425cf4f; -[SCAdWebViewTrackInfo withRetargetPromptTapCount:] */

void FUN_10425ce74(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_948 [776];
  undefined1 auStack_640 [712];
  long lStack_378;
  undefined1 uStack_370;
  undefined1 auStack_338 [776];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain();
  FUN_1042c9f5c(auStack_640,param_1);
  uStack_370 = param_3 == 0;
  if ((bool)uStack_370) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c067fc0();
  }
  lStack_378 = lVar2;
  _memcpy(auStack_338,auStack_640,0x301);
  _objc_allocWithZone(uVar1);
  func_0x00010178e208(auStack_338,auStack_948);
  puVar3 = auStack_338;
  FUN_1042c96c8(puVar3);
  func_0x00010178e244(auStack_338);
  _objc_release(param_3);
  _objc_release(param_1);
  func_0x00010178e244(auStack_640);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10425cf50; end: 10425d02b; -[SCAdWebViewTrackInfo withRetargetPromptExbOpenedMs:] */

void FUN_10425cf50(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_948 [776];
  undefined1 auStack_640 [728];
  long lStack_368;
  undefined1 uStack_360;
  undefined1 auStack_338 [776];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain();
  FUN_1042c9f5c(auStack_640,param_1);
  uStack_360 = param_3 == 0;
  if ((bool)uStack_360) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c067fc0();
  }
  lStack_368 = lVar2;
  _memcpy(auStack_338,auStack_640,0x301);
  _objc_allocWithZone(uVar1);
  func_0x00010178e208(auStack_338,auStack_948);
  puVar3 = auStack_338;
  FUN_1042c96c8(puVar3);
  func_0x00010178e244(auStack_338);
  _objc_release(param_3);
  _objc_release(param_1);
  func_0x00010178e244(auStack_640);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10425d02c; end: 10425d12f; -[SCAdWebViewTrackInfo withRetargetPromptUrl:] */

void FUN_10425d02c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_c78 [776];
  undefined1 auStack_970 [744];
  long lStack_688;
  undefined8 uStack_680;
  undefined1 auStack_668 [744];
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_348 [776];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042c9f5c(auStack_668);
  uStack_358 = uStack_378;
  uStack_360 = uStack_380;
  FUN_10425f204(&uStack_360,0x112d35ff8,&UNK_10d900cd0);
  _memcpy(auStack_970,auStack_668,0x301);
  lStack_688 = param_3;
  uStack_680 = param_2;
  _memcpy(auStack_348,auStack_970,0x301);
  _objc_allocWithZone(uVar1);
  func_0x00010178e208(auStack_348,auStack_c78);
  puVar2 = auStack_348;
  FUN_1042c96c8(puVar2);
  func_0x00010178e244(auStack_348);
  _objc_release(param_1);
  func_0x00010178e244(auStack_970);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10425d130; end: 10425d20b; -[SCAdWebViewTrackInfo withRetargetPromptDismissMs:] */

void FUN_10425d130(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_948 [776];
  undefined1 auStack_640 [760];
  long lStack_348;
  undefined1 uStack_340;
  undefined1 auStack_338 [776];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain();
  FUN_1042c9f5c(auStack_640,param_1);
  uStack_340 = param_3 == 0;
  if ((bool)uStack_340) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c067fc0();
  }
  lStack_348 = lVar2;
  _memcpy(auStack_338,auStack_640,0x301);
  _objc_allocWithZone(uVar1);
  func_0x00010178e208(auStack_338,auStack_948);
  puVar3 = auStack_338;
  FUN_1042c96c8(puVar3);
  func_0x00010178e244(auStack_338);
  _objc_release(param_3);
  _objc_release(param_1);
  func_0x00010178e244(auStack_640);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10425d20c; end: 10425de5b;  */

undefined8 FUN_10425d20c(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uStack_af0;
  long lStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_9e0;
  long lStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_8d8;
  long lStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined1 auStack_7d0 [48];
  undefined1 auStack_7a0 [528];
  undefined8 uStack_590;
  long lStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined1 auStack_488 [264];
  undefined1 auStack_380 [264];
  undefined1 auStack_278 [264];
  undefined1 auStack_170 [272];
  
  if (((*param_1 ^ *param_2) & 1) != 0) {
    return 0;
  }
  if (((param_1[1] ^ param_2[1]) & 1) != 0) {
    return 0;
  }
  if (*(double *)(param_1 + 8) != *(double *)(param_2 + 8)) {
    return 0;
  }
  if (((param_1[0x10] ^ param_2[0x10]) & 1) != 0) {
    return 0;
  }
  if (param_1[0x20] == 1) {
    if (param_2[0x20] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x20] == 1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x18) != *(long *)(param_2 + 0x18)) {
      return 0;
    }
  }
  lVar8 = *(long *)(param_1 + 0x30);
  lVar7 = *(long *)(param_2 + 0x30);
  if (lVar8 == 0) {
    if (lVar7 != 0) {
      return 0;
    }
  }
  else {
    if (lVar7 == 0) {
      return 0;
    }
    uVar3 = *(ulong *)(param_1 + 0x28);
    if (((uVar3 != *(ulong *)(param_2 + 0x28)) || (lVar8 != lVar7)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar3,lVar8,*(ulong *)(param_2 + 0x28),lVar7,0), (uVar3 & 1) == 0)) {
      return 0;
    }
  }
  if (param_1[0x40] == 1) {
    if (param_2[0x40] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x40] == 1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x38) != *(long *)(param_2 + 0x38)) {
      return 0;
    }
  }
  if (((param_1[0x41] ^ param_2[0x41]) & 1) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x48) != *(int *)(param_2 + 0x48)) {
    return 0;
  }
  uVar3 = *(ulong *)(param_1 + 0x50);
  lVar7 = *(long *)(param_2 + 0x50);
  if (uVar3 == 0) {
    if (lVar7 != 0) {
      return 0;
    }
  }
  else {
    if (lVar7 == 0) {
      return 0;
    }
    func_0x00010142cfc4(uVar3,lVar7);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  if (((param_1[0x58] ^ param_2[0x58]) & 1) != 0) {
    return 0;
  }
  if (((param_1[0x59] ^ param_2[0x59]) & 1) != 0) {
    return 0;
  }
  if (param_1[0x68] == 1) {
    if (param_2[0x68] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x68] == 1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x60) != *(long *)(param_2 + 0x60)) {
      return 0;
    }
  }
  if (param_1[0x78] == 1) {
    if (param_2[0x78] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x78] == 1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x70) != *(long *)(param_2 + 0x70)) {
      return 0;
    }
  }
  if (param_1[0x88] == 1) {
    if (param_2[0x88] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x88] == 1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x80) != *(long *)(param_2 + 0x80)) {
      return 0;
    }
  }
  if (((param_1[0x89] ^ param_2[0x89]) & 1) != 0) {
    return 0;
  }
  _memcpy(auStack_278,param_1 + 0x90,0x101);
  _memcpy(auStack_380,param_2 + 0x90,0x101);
  _memcpy(&uStack_590,param_1 + 0x90,0x101);
  _memcpy(auStack_488,param_2 + 0x90,0x101);
  iVar2 = (int)&uStack_590;
  func_0x0001018803f0();
  if (iVar2 == 1) {
    iVar2 = (int)auStack_488;
    func_0x0001018803f0();
    if (iVar2 != 1) {
LAB_10425d584:
      _memcpy(auStack_7a0,&uStack_590,0x209);
      FUN_10425b3fc(auStack_278,auStack_170,0x112dcc740,&UNK_10d9907d0);
      FUN_10425b3fc(auStack_380,auStack_170,0x112dcc740,&UNK_10d9907d0);
      FUN_10425f204(auStack_7a0,0x113069da8,&UNK_10dce4f50);
      return 0;
    }
    _memcpy(auStack_7a0,&uStack_590,0x101);
    FUN_10425b3fc(auStack_278,auStack_170,0x112dcc740,&UNK_10d9907d0);
    FUN_10425b3fc(auStack_380,auStack_170,0x112dcc740,&UNK_10d9907d0);
    FUN_10425f204(auStack_7a0,0x112dcc740,&UNK_10d9907d0);
  }
  else {
    _memcpy(&uStack_8d8,&uStack_590,0x101);
    iVar2 = (int)auStack_488;
    func_0x0001018803f0();
    if (iVar2 == 1) goto LAB_10425d584;
    _memcpy(&uStack_9e0,auStack_488,0x101);
    _memcpy(auStack_7a0,auStack_488,0x101);
    _memcpy(auStack_170,&uStack_8d8,0x101);
    puVar4 = auStack_170;
    FUN_1042608f8(puVar4,auStack_7a0);
    FUN_10425b3fc(auStack_278,&uStack_af0,0x112dcc740,&UNK_10d9907d0);
    FUN_10425b3fc(auStack_380,&uStack_af0,0x112dcc740,&UNK_10d9907d0);
    FUN_10425f204(&uStack_9e0,0x112dcc740,&UNK_10d9907d0);
    FUN_10425f204(&uStack_590,0x112dcc740,&UNK_10d9907d0);
    if (((ulong)puVar4 & 1) == 0) {
      return 0;
    }
  }
  if (((param_1[0x191] ^ param_2[0x191]) & 1) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x198) != *(int *)(param_2 + 0x198)) {
    return 0;
  }
  if (param_1[0x1a8] == 1) {
    if (param_2[0x1a8] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x1a8] == 1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x1a0) != *(long *)(param_2 + 0x1a0)) {
      return 0;
    }
  }
  uVar3 = *(ulong *)(param_1 + 0x1b0);
  lVar7 = *(long *)(param_2 + 0x1b0);
  if (uVar3 == 1) {
    if (lVar7 != 1) {
      return 0;
    }
  }
  else {
    if (lVar7 == 1) {
      return 0;
    }
    uVar11 = *(undefined8 *)(param_1 + 0x1b8);
    uVar13 = *(undefined8 *)(param_1 + 0x1c0);
    uVar12 = *(undefined8 *)(param_2 + 0x1b8);
    uVar14 = *(undefined8 *)(param_2 + 0x1c0);
    func_0x0001034cdf84(lVar7,uVar12,uVar14);
    func_0x0001034cdf84(uVar3,uVar11,uVar13);
    uVar5 = uVar3;
    FUN_10425b0f4(uVar3,uVar11,uVar13,lVar7,uVar12,uVar14);
    _objc_release(lVar7);
    _objc_release(uVar12);
    _objc_release(uVar14);
    func_0x0001034cdfc4(uVar3,uVar11,uVar13);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  if (((param_1[0x1c8] ^ param_2[0x1c8]) & 1) != 0) {
    return 0;
  }
  if (param_1[0x1d8] == 1) {
    if (param_2[0x1d8] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x1d8] == 1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x1d0) != *(long *)(param_2 + 0x1d0)) {
      return 0;
    }
  }
  if (param_1[0x1e8] == 1) {
    if (param_2[0x1e8] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x1e8] == 1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x1e0) != *(long *)(param_2 + 0x1e0)) {
      return 0;
    }
  }
  lVar7 = *(long *)(param_1 + 0x1f8);
  uVar11 = *(undefined8 *)(param_1 + 0x1f0);
  uVar19 = *(undefined8 *)(param_1 + 0x208);
  uVar17 = *(undefined8 *)(param_1 + 0x200);
  uVar15 = *(undefined8 *)(param_1 + 0x218);
  uVar12 = *(undefined8 *)(param_1 + 0x210);
  lVar8 = *(long *)(param_2 + 0x1f8);
  uVar13 = *(undefined8 *)(param_2 + 0x1f0);
  uVar20 = *(undefined8 *)(param_2 + 0x208);
  uVar18 = *(undefined8 *)(param_2 + 0x200);
  uVar16 = *(undefined8 *)(param_2 + 0x218);
  uVar14 = *(undefined8 *)(param_2 + 0x210);
  uStack_af0 = uVar13;
  lStack_ae8 = lVar8;
  uStack_ae0 = uVar18;
  uStack_ad8 = uVar20;
  uStack_ad0 = uVar14;
  uStack_ac8 = uVar16;
  uStack_9e0 = uVar11;
  lStack_9d8 = lVar7;
  uStack_9d0 = uVar17;
  uStack_9c8 = uVar19;
  uStack_9c0 = uVar12;
  uStack_9b8 = uVar15;
  if (lVar7 == 1) {
    if (lVar8 != 1) {
LAB_10425d8cc:
      FUN_10425b3fc(&uStack_9e0,&uStack_590,0x112f732d0,&UNK_10dbced78);
      FUN_10425b3fc(&uStack_af0,&uStack_590,0x112f732d0,&UNK_10dbced78);
      FUN_10425f1b0(uVar11,lVar7,uVar17,uVar19,uVar12,uVar15);
      FUN_10425f1b0(uVar13,lVar8,uVar18,uVar20,uVar14,uVar16);
      return 0;
    }
    FUN_10425b3fc(&uStack_9e0,&uStack_590,0x112f732d0,&UNK_10dbced78);
    FUN_10425b3fc(&uStack_af0,&uStack_590,0x112f732d0,&UNK_10dbced78);
    FUN_10425f1b0(uVar11,1,uVar17,uVar19,uVar12,uVar15);
  }
  else {
    if (lVar8 == 1) goto LAB_10425d8cc;
    puVar6 = &uStack_8d8;
    uStack_8d8 = uVar11;
    lStack_8d0 = lVar7;
    uStack_8c8 = uVar17;
    uStack_8c0 = uVar19;
    uStack_8b8 = uVar12;
    uStack_8b0 = uVar15;
    uStack_590 = uVar13;
    lStack_588 = lVar8;
    uStack_580 = uVar18;
    uStack_578 = uVar20;
    uStack_570 = uVar14;
    uStack_568 = uVar16;
    FUN_10425a4c4(puVar6,&uStack_590);
    FUN_10425b3fc(&uStack_9e0,auStack_7d0,0x112f732d0,&UNK_10dbced78);
    FUN_10425b3fc(&uStack_af0,auStack_7d0,0x112f732d0,&UNK_10dbced78);
    FUN_10425f1b0(uVar13,lVar8,uVar18,uVar20,uVar14,uVar16);
    FUN_10425f1b0(uVar11,lVar7,uVar17,uVar19,uVar12,uVar15);
    if (((ulong)puVar6 & 1) == 0) {
      return 0;
    }
  }
  if (param_1[0x228] == 1) {
    if (param_2[0x228] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x228] == 1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x220) != *(long *)(param_2 + 0x220)) {
      return 0;
    }
  }
  if (param_1[0x238] == 1) {
    if (param_2[0x238] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x238] == 1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x230) != *(long *)(param_2 + 0x230)) {
      return 0;
    }
  }
  if (((param_1[0x239] ^ param_2[0x239]) & 1) != 0) {
    return 0;
  }
  uVar3 = *(ulong *)(param_1 + 0x240);
  lVar7 = *(long *)(param_2 + 0x240);
  if (uVar3 == 0) {
    if (lVar7 != 0) {
      return 0;
    }
LAB_10425db44:
    uVar3 = *(ulong *)(param_1 + 600);
    if (uVar3 == 0) {
      if (*(long *)(param_2 + 600) != 0) {
        return 0;
      }
    }
    else {
      if (*(long *)(param_2 + 600) == 0) {
        return 0;
      }
      func_0x0001020f35dc();
      if ((uVar3 & 1) == 0) {
        return 0;
      }
    }
    lVar7 = *(long *)(param_2 + 0x268);
    if (*(long *)(param_1 + 0x268) == 0) {
      if (lVar7 != 0) {
        return 0;
      }
    }
    else {
      if (lVar7 == 0) {
        return 0;
      }
      uVar3 = *(ulong *)(param_1 + 0x260);
      if (((uVar3 != *(ulong *)(param_2 + 0x260)) || (*(long *)(param_1 + 0x268) != lVar7)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar3 & 1) == 0)) {
        return 0;
      }
    }
    if ((((param_1[0x270] ^ param_2[0x270]) & 1) == 0) &&
       (((param_1[0x271] ^ param_2[0x271]) & 1) == 0)) {
      bVar1 = param_2[0x272];
      if (param_1[0x272] == 2) {
        if (bVar1 != 2) {
          return 0;
        }
      }
      else {
        if (bVar1 == 2) {
          return 0;
        }
        if (((param_1[0x272] ^ bVar1) & 1) != 0) {
          return 0;
        }
      }
      if (((((((*(int *)(param_1 + 0x278) == *(int *)(param_2 + 0x278)) &&
              (((param_1[0x280] ^ param_2[0x280]) & 1) == 0)) &&
             (*(int *)(param_1 + 0x288) == *(int *)(param_2 + 0x288))) &&
            ((*(long *)(param_1 + 0x290) == *(long *)(param_2 + 0x290) &&
             (*(long *)(param_1 + 0x298) == *(long *)(param_2 + 0x298))))) &&
           ((((param_1[0x2a0] ^ param_2[0x2a0]) & 1) == 0 &&
            ((((param_1[0x2a1] ^ param_2[0x2a1]) & 1) == 0 &&
             (*(int *)(param_1 + 0x2a8) == *(int *)(param_2 + 0x2a8))))))) &&
          (((param_1[0x2b0] ^ param_2[0x2b0]) & 1) == 0)) &&
         (((((param_1[0x2b1] ^ param_2[0x2b1]) & 1) == 0 &&
           (((param_1[0x2b2] ^ param_2[0x2b2]) & 1) == 0)) &&
          (((param_1[0x2b3] ^ param_2[0x2b3]) & 1) == 0)))) {
        if (param_1[0x2c0] == 1) {
          if (param_2[0x2c0] != 1) {
            return 0;
          }
        }
        else {
          if (param_2[0x2c0] == 1) {
            return 0;
          }
          if (*(long *)(param_1 + 0x2b8) != *(long *)(param_2 + 0x2b8)) {
            return 0;
          }
        }
        if (param_1[0x2d0] == 1) {
          if (param_2[0x2d0] != 1) {
            return 0;
          }
        }
        else {
          if (param_2[0x2d0] == 1) {
            return 0;
          }
          if (*(long *)(param_1 + 0x2c8) != *(long *)(param_2 + 0x2c8)) {
            return 0;
          }
        }
        if (param_1[0x2e0] == 1) {
          if (param_2[0x2e0] != 1) {
            return 0;
          }
        }
        else {
          if (param_2[0x2e0] == 1) {
            return 0;
          }
          if (*(long *)(param_1 + 0x2d8) != *(long *)(param_2 + 0x2d8)) {
            return 0;
          }
        }
        lVar7 = *(long *)(param_2 + 0x2f0);
        if (*(long *)(param_1 + 0x2f0) == 0) {
          if (lVar7 != 0) {
            return 0;
          }
        }
        else {
          if (lVar7 == 0) {
            return 0;
          }
          uVar3 = *(ulong *)(param_1 + 0x2e8);
          if (((uVar3 != *(ulong *)(param_2 + 0x2e8)) || (*(long *)(param_1 + 0x2f0) != lVar7)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar3 & 1) == 0)) {
            return 0;
          }
        }
        if (param_1[0x300] == 1) {
          if (param_2[0x300] == 1) {
            return 1;
          }
        }
        else if ((param_2[0x300] != 1) && (*(long *)(param_1 + 0x2f8) == *(long *)(param_2 + 0x2f8))
                ) {
          return 1;
        }
      }
    }
  }
  else {
    if (lVar7 == 0) {
      return 0;
    }
    uVar10 = *(ulong *)(param_1 + 0x248);
    uVar9 = *(ulong *)(param_1 + 0x250);
    uVar11 = *(undefined8 *)(param_2 + 0x248);
    uVar12 = *(undefined8 *)(param_2 + 0x250);
    uVar5 = uVar3;
    func_0x0001042298e8(uVar3,lVar7);
    if ((uVar5 & 1) == 0) {
      func_0x00010425b48c(lVar7,uVar11,uVar12);
      func_0x00010425b48c(uVar3,uVar10,uVar9);
    }
    else {
      uVar5 = uVar10;
      func_0x000104229964(uVar10,uVar11);
      func_0x00010425b48c(lVar7,uVar11,uVar12);
      func_0x00010425b48c(uVar3,uVar10,uVar9);
      if ((uVar5 & 1) != 0) {
        uVar5 = uVar9;
        func_0x000104229a00(uVar9,uVar12);
        _swift_bridgeObjectRelease(uVar12);
        _swift_bridgeObjectRelease(uVar11);
        _swift_bridgeObjectRelease(lVar7);
        func_0x00010425b4c4(uVar3,uVar10,uVar9);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        goto LAB_10425db44;
      }
    }
    _swift_bridgeObjectRelease(uVar12);
    _swift_bridgeObjectRelease(uVar11);
    _swift_bridgeObjectRelease(lVar7);
    func_0x00010425b4c4(uVar3,uVar10,uVar9);
  }
  return 0;
}



/* Entry: 10425de5c; end: 10425df53;  */

long FUN_10425de5c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10425df54; end: 10425eb6b;  */

undefined2 * FUN_10425df54(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  param_1[0x2c] = param_2[0x2c];
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined1 *)((long)param_1 + 0x89) = *(undefined1 *)((long)param_2 + 0x89);
  lVar2 = *(long *)(param_2 + 0x74);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  if (lVar2 == 1) {
    _memcpy(param_1 + 0x48,param_2 + 0x48,0x101);
  }
  else {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(undefined1 *)(param_1 + 0x4c) = *(undefined1 *)(param_2 + 0x4c);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_2 + 0x54);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)(param_2 + 0x5c);
    *(undefined1 *)(param_1 + 100) = *(undefined1 *)(param_2 + 100);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    uVar3 = *(undefined8 *)(param_2 + 0x68);
    *(undefined1 *)(param_1 + 0x6c) = *(undefined1 *)(param_2 + 0x6c);
    *(undefined8 *)(param_1 + 0x68) = uVar3;
    *(undefined1 *)((long)param_1 + 0xd9) = *(undefined1 *)((long)param_2 + 0xd9);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
    *(long *)(param_1 + 0x74) = lVar2;
    uVar3 = *(undefined8 *)(param_2 + 0x7c);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x7c) = uVar3;
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
    *(undefined1 *)(param_1 + 0x84) = *(undefined1 *)(param_2 + 0x84);
    *(undefined1 *)(param_1 + 0x8c) = *(undefined1 *)(param_2 + 0x8c);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
    *(undefined1 *)(param_1 + 0x94) = *(undefined1 *)(param_2 + 0x94);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
    *(undefined1 *)(param_1 + 0x9c) = *(undefined1 *)(param_2 + 0x9c);
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
    *(undefined1 *)(param_1 + 0xa4) = *(undefined1 *)(param_2 + 0xa4);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
    uVar1 = *(undefined8 *)(param_2 + 0xac);
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_1 + 0xac) = uVar1;
    uVar4 = *(undefined8 *)(param_2 + 0xb0);
    *(undefined1 *)(param_1 + 0xb4) = *(undefined1 *)(param_2 + 0xb4);
    *(undefined8 *)(param_1 + 0xb0) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0xb8);
    *(undefined1 *)(param_1 + 0xbc) = *(undefined1 *)(param_2 + 0xbc);
    *(undefined8 *)(param_1 + 0xb8) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0xc4);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
    *(undefined8 *)(param_1 + 0xc4) = uVar4;
    *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
    _swift_bridgeObjectRetain(lVar2);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRetain(uVar4);
  }
  *(undefined1 *)((long)param_1 + 0x191) = *(undefined1 *)((long)param_2 + 0x191);
  uVar3 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xcc) = *(undefined8 *)(param_2 + 0xcc);
  *(undefined8 *)(param_1 + 0xd0) = uVar3;
  *(undefined1 *)(param_1 + 0xd4) = *(undefined1 *)(param_2 + 0xd4);
  if (*(long *)(param_2 + 0xd8) == 1) {
    uVar3 = *(undefined8 *)(param_2 + 0xd8);
    *(undefined8 *)(param_1 + 0xdc) = *(undefined8 *)(param_2 + 0xdc);
    *(undefined8 *)(param_1 + 0xd8) = uVar3;
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0xdc);
    uVar1 = *(undefined8 *)(param_2 + 0xe0);
    *(long *)(param_1 + 0xd8) = *(long *)(param_2 + 0xd8);
    *(undefined8 *)(param_1 + 0xdc) = uVar3;
    *(undefined8 *)(param_1 + 0xe0) = uVar1;
    _objc_retain();
    _objc_retain(uVar3);
    _objc_retain(uVar1);
  }
  *(undefined1 *)(param_1 + 0xe4) = *(undefined1 *)(param_2 + 0xe4);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined1 *)(param_1 + 0xec) = *(undefined1 *)(param_2 + 0xec);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined1 *)(param_1 + 0xf4) = *(undefined1 *)(param_2 + 0xf4);
  lVar2 = *(long *)(param_2 + 0xfc);
  if (lVar2 == 1) {
    uVar3 = *(undefined8 *)(param_2 + 0xf8);
    uVar4 = *(undefined8 *)(param_2 + 0x104);
    uVar1 = *(undefined8 *)(param_2 + 0x100);
    *(undefined8 *)(param_1 + 0xfc) = *(undefined8 *)(param_2 + 0xfc);
    *(undefined8 *)(param_1 + 0xf8) = uVar3;
    *(undefined8 *)(param_1 + 0x104) = uVar4;
    *(undefined8 *)(param_1 + 0x100) = uVar1;
    uVar3 = *(undefined8 *)(param_2 + 0x108);
    *(undefined8 *)(param_1 + 0x10c) = *(undefined8 *)(param_2 + 0x10c);
    *(undefined8 *)(param_1 + 0x108) = uVar3;
  }
  else {
    param_1[0xf8] = param_2[0xf8];
    uVar3 = *(undefined8 *)(param_2 + 0x100);
    *(long *)(param_1 + 0xfc) = lVar2;
    *(undefined8 *)(param_1 + 0x100) = uVar3;
    uVar1 = *(undefined8 *)(param_2 + 0x104);
    *(undefined8 *)(param_1 + 0x104) = uVar1;
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
    uVar4 = *(undefined8 *)(param_2 + 0x10c);
    *(undefined8 *)(param_1 + 0x10c) = uVar4;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRetain(uVar4);
  }
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  *(undefined1 *)(param_1 + 0x114) = *(undefined1 *)(param_2 + 0x114);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
  param_1[0x11c] = param_2[0x11c];
  if (*(long *)(param_2 + 0x120) == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x120);
    *(undefined8 *)(param_1 + 0x124) = *(undefined8 *)(param_2 + 0x124);
    *(undefined8 *)(param_1 + 0x120) = uVar3;
    *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  }
  else {
    *(long *)(param_1 + 0x120) = *(long *)(param_2 + 0x120);
    uVar3 = *(undefined8 *)(param_2 + 0x124);
    *(undefined8 *)(param_1 + 0x124) = uVar3;
    uVar1 = *(undefined8 *)(param_2 + 0x128);
    *(undefined8 *)(param_1 + 0x128) = uVar1;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar1);
  }
  *(undefined8 *)(param_1 + 300) = *(undefined8 *)(param_2 + 300);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  uVar3 = *(undefined8 *)(param_2 + 0x134);
  *(undefined8 *)(param_1 + 0x134) = uVar3;
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
  *(undefined2 *)((long)param_1 + 0x271) = *(undefined2 *)((long)param_2 + 0x271);
  *(undefined8 *)(param_1 + 0x13c) = *(undefined8 *)(param_2 + 0x13c);
  *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x144) = *(undefined8 *)(param_2 + 0x144);
  uVar1 = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x14c) = *(undefined8 *)(param_2 + 0x14c);
  *(undefined8 *)(param_1 + 0x148) = uVar1;
  param_1[0x150] = param_2[0x150];
  *(undefined8 *)(param_1 + 0x154) = *(undefined8 *)(param_2 + 0x154);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x15c) = *(undefined8 *)(param_2 + 0x15c);
  *(undefined1 *)(param_1 + 0x160) = *(undefined1 *)(param_2 + 0x160);
  *(undefined8 *)(param_1 + 0x164) = *(undefined8 *)(param_2 + 0x164);
  *(undefined1 *)(param_1 + 0x168) = *(undefined1 *)(param_2 + 0x168);
  *(undefined1 *)(param_1 + 0x170) = *(undefined1 *)(param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x16c) = *(undefined8 *)(param_2 + 0x16c);
  *(undefined8 *)(param_1 + 0x174) = *(undefined8 *)(param_2 + 0x174);
  uVar1 = *(undefined8 *)(param_2 + 0x178);
  *(undefined8 *)(param_1 + 0x178) = uVar1;
  *(undefined1 *)(param_1 + 0x180) = *(undefined1 *)(param_2 + 0x180);
  *(undefined8 *)(param_1 + 0x17c) = *(undefined8 *)(param_2 + 0x17c);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Entry: 10425eb6c; end: 10425eb73;  */

void FUN_10425eb6c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x301);
  return;
}



/* Entry: 10425eb74; end: 10425f033;  */

undefined1 * FUN_10425eb74(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  param_1[0x20] = param_2[0x20];
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  param_1[0x40] = param_2[0x40];
  param_1[0x41] = param_2[0x41];
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x58] = param_2[0x58];
  param_1[0x59] = param_2[0x59];
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  param_1[0x68] = param_2[0x68];
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  param_1[0x78] = param_2[0x78];
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  param_1[0x88] = param_2[0x88];
  param_1[0x89] = param_2[0x89];
  if (*(long *)(param_1 + 0xe8) == 1) {
LAB_10425ec5c:
    _memcpy(param_1 + 0x90,param_2 + 0x90,0x101);
  }
  else {
    lVar3 = *(long *)(param_2 + 0xe8);
    if (lVar3 == 1) {
      func_0x0001017e2180(param_1 + 0x90);
      goto LAB_10425ec5c;
    }
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
    param_1[0x98] = param_2[0x98];
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
    param_1[0xa8] = param_2[0xa8];
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
    param_1[0xb8] = param_2[0xb8];
    param_1[200] = param_2[200];
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
    uVar2 = *(undefined8 *)(param_2 + 0xd0);
    param_1[0xd8] = param_2[0xd8];
    *(undefined8 *)(param_1 + 0xd0) = uVar2;
    param_1[0xd9] = param_2[0xd9];
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
    *(long *)(param_1 + 0xe8) = lVar3;
    _swift_bridgeObjectRelease();
    uVar2 = *(undefined8 *)(param_2 + 0xf8);
    uVar1 = *(undefined8 *)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
    *(undefined8 *)(param_1 + 0xf8) = uVar2;
    _swift_bridgeObjectRelease(uVar1);
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
    param_1[0x108] = param_2[0x108];
    *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
    param_1[0x118] = param_2[0x118];
    *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
    param_1[0x128] = param_2[0x128];
    param_1[0x138] = param_2[0x138];
    *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
    uVar2 = *(undefined8 *)(param_2 + 0x140);
    param_1[0x148] = param_2[0x148];
    *(undefined8 *)(param_1 + 0x140) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x158);
    uVar1 = *(undefined8 *)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
    *(undefined8 *)(param_1 + 0x158) = uVar2;
    _swift_bridgeObjectRelease(uVar1);
    *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
    param_1[0x168] = param_2[0x168];
    *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
    param_1[0x178] = param_2[0x178];
    uVar2 = *(undefined8 *)(param_2 + 0x188);
    uVar1 = *(undefined8 *)(param_1 + 0x188);
    *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_2 + 0x180);
    *(undefined8 *)(param_1 + 0x188) = uVar2;
    _swift_bridgeObjectRelease(uVar1);
    param_1[400] = param_2[400];
  }
  param_1[0x191] = param_2[0x191];
  uVar2 = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  *(undefined8 *)(param_1 + 0x1a0) = uVar2;
  param_1[0x1a8] = param_2[0x1a8];
  if (*(long *)(param_1 + 0x1b0) == 1) {
LAB_10425edb4:
    uVar2 = *(undefined8 *)(param_2 + 0x1b0);
    *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_2 + 0x1b8);
    *(undefined8 *)(param_1 + 0x1b0) = uVar2;
    *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 0x1c0);
  }
  else {
    if (*(long *)(param_2 + 0x1b0) == 1) {
      func_0x0001017e21b4(param_1 + 0x1b0);
      goto LAB_10425edb4;
    }
    *(long *)(param_1 + 0x1b0) = *(long *)(param_2 + 0x1b0);
    _objc_release();
    uVar2 = *(undefined8 *)(param_1 + 0x1b8);
    *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_2 + 0x1b8);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x1c0);
    *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 0x1c0);
    _objc_release(uVar2);
  }
  param_1[0x1c8] = param_2[0x1c8];
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_2 + 0x1d0);
  param_1[0x1d8] = param_2[0x1d8];
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 0x1e0);
  param_1[0x1e8] = param_2[0x1e8];
  if (*(long *)(param_1 + 0x1f8) == 1) {
LAB_10425ee38:
    uVar2 = *(undefined8 *)(param_2 + 0x1f0);
    uVar4 = *(undefined8 *)(param_2 + 0x208);
    uVar1 = *(undefined8 *)(param_2 + 0x200);
    *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_2 + 0x1f8);
    *(undefined8 *)(param_1 + 0x1f0) = uVar2;
    *(undefined8 *)(param_1 + 0x208) = uVar4;
    *(undefined8 *)(param_1 + 0x200) = uVar1;
    uVar2 = *(undefined8 *)(param_2 + 0x210);
    *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
    *(undefined8 *)(param_1 + 0x210) = uVar2;
  }
  else {
    lVar3 = *(long *)(param_2 + 0x1f8);
    if (lVar3 == 1) {
      func_0x0001017e21e8(param_1 + 0x1f0);
      goto LAB_10425ee38;
    }
    *(undefined2 *)(param_1 + 0x1f0) = *(undefined2 *)(param_2 + 0x1f0);
    *(long *)(param_1 + 0x1f8) = lVar3;
    _swift_bridgeObjectRelease();
    uVar2 = *(undefined8 *)(param_1 + 0x200);
    *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_2 + 0x200);
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x208);
    *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_2 + 0x208);
    _swift_bridgeObjectRelease(uVar2);
    param_1[0x210] = param_2[0x210];
    *(undefined2 *)(param_1 + 0x211) = *(undefined2 *)(param_2 + 0x211);
    param_1[0x213] = param_2[0x213];
    uVar2 = *(undefined8 *)(param_1 + 0x218);
    *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
    _swift_bridgeObjectRelease(uVar2);
  }
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x220);
  param_1[0x228] = param_2[0x228];
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_2 + 0x230);
  param_1[0x238] = param_2[0x238];
  param_1[0x239] = param_2[0x239];
  if (*(long *)(param_1 + 0x240) != 0) {
    lVar3 = *(long *)(param_2 + 0x240);
    if (lVar3 != 0) {
      *(long *)(param_1 + 0x240) = lVar3;
      _swift_bridgeObjectRelease();
      uVar2 = *(undefined8 *)(param_1 + 0x248);
      *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_2 + 0x248);
      _swift_bridgeObjectRelease(uVar2);
      uVar2 = *(undefined8 *)(param_1 + 0x250);
      *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_2 + 0x250);
      _swift_bridgeObjectRelease(uVar2);
      goto LAB_10425ef30;
    }
    func_0x0001017e221c(param_1 + 0x240);
  }
  lVar3 = *(long *)(param_2 + 0x240);
  *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_2 + 0x248);
  *(long *)(param_1 + 0x240) = lVar3;
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_2 + 0x250);
LAB_10425ef30:
  uVar2 = *(undefined8 *)(param_1 + 600);
  *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_2 + 600);
  _swift_bridgeObjectRelease(uVar2);
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_2 + 0x260);
  uVar2 = *(undefined8 *)(param_1 + 0x268);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x268);
  _swift_bridgeObjectRelease(uVar2);
  param_1[0x270] = param_2[0x270];
  param_1[0x271] = param_2[0x271];
  param_1[0x272] = param_2[0x272];
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_2 + 0x278);
  param_1[0x280] = param_2[0x280];
  *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_2 + 0x288);
  uVar2 = *(undefined8 *)(param_2 + 0x290);
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_2 + 0x298);
  *(undefined8 *)(param_1 + 0x290) = uVar2;
  param_1[0x2a0] = param_2[0x2a0];
  param_1[0x2a1] = param_2[0x2a1];
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_2 + 0x2a8);
  param_1[0x2b0] = param_2[0x2b0];
  param_1[0x2b1] = param_2[0x2b1];
  param_1[0x2b2] = param_2[0x2b2];
  param_1[0x2b3] = param_2[0x2b3];
  *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_2 + 0x2b8);
  param_1[0x2c0] = param_2[0x2c0];
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x2c8);
  param_1[0x2d0] = param_2[0x2d0];
  uVar2 = *(undefined8 *)(param_2 + 0x2d8);
  param_1[0x2e0] = param_2[0x2e0];
  *(undefined8 *)(param_1 + 0x2d8) = uVar2;
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_2 + 0x2e8);
  uVar2 = *(undefined8 *)(param_1 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_2 + 0x2f0);
  _swift_bridgeObjectRelease(uVar2);
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_2 + 0x2f8);
  param_1[0x300] = param_2[0x300];
  return param_1;
}



/* Entry: 10425f034; end: 10425f1af;  */

int FUN_10425f034(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x301) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0xc);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10425f1b0; end: 10425f203;  */

void FUN_10425f1b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (param_2 == 1) {
    return;
  }
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_6);
  return;
}



/* Entry: 10425f204; end: 10425f3ef;  */

undefined8 FUN_10425f204(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10425f3f0; end: 10425f73f;  */

void FUN_10425f3f0(undefined8 param_1)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *unaff_x20;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(char *)(unaff_x20 + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
  }
  if (*(char *)(unaff_x20 + 3) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
  }
  if (*(char *)(unaff_x20 + 5) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[4];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
  }
  if (*(char *)(unaff_x20 + 7) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[6];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
  }
  if (*(char *)(unaff_x20 + 9) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = unaff_x20[8];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  bVar2 = *(byte *)((long)unaff_x20 + 0x49);
  if (bVar2 == 2) {
    bVar2 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar2 = bVar2 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar2);
  lVar4 = unaff_x20[0xb];
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar4 = unaff_x20[0xd];
  }
  else {
    uVar5 = unaff_x20[10];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar4);
    lVar4 = unaff_x20[0xd];
  }
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0xc];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar4);
  }
  if (*(char *)(unaff_x20 + 0xf) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0xe];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
  }
  if (*(char *)(unaff_x20 + 0x11) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x10];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
  }
  if (*(char *)(unaff_x20 + 0x13) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x12];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
  }
  if (*(char *)(unaff_x20 + 0x15) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x14];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
  }
  if (*(char *)(unaff_x20 + 0x17) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar4 = unaff_x20[0x19];
  }
  else {
    uVar5 = unaff_x20[0x16];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
    lVar4 = unaff_x20[0x19];
  }
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x18];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar4);
  }
  if (*(char *)(unaff_x20 + 0x1b) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x1a];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
  }
  if (*(char *)(unaff_x20 + 0x1d) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar4 = unaff_x20[0x1f];
  }
  else {
    uVar5 = unaff_x20[0x1c];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
    lVar4 = unaff_x20[0x1f];
  }
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x1e];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar4);
  }
  bVar2 = *(byte *)(unaff_x20 + 0x20);
  if (bVar2 == 2) {
    bVar2 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar2 = bVar2 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar2);
  return;
}



/* Entry: 10425f740; end: 10425f7cf;  */

uint FUN_10425f740(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_230 [264];
  undefined1 auStack_128 [264];
  
  uVar1 = 0;
  _memcpy(auStack_230,param_1,0x101);
  _memcpy(auStack_128,param_2,0x101);
  FUN_1042608f8(auStack_230,auStack_128);
  return uVar1 & 1;
}



/* Entry: 10425f7d0; end: 10425f7d3;  */

void FUN_10425f7d0(undefined8 param_1)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *unaff_x20;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(char *)(unaff_x20 + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
  }
  if (*(char *)(unaff_x20 + 3) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
  }
  if (*(char *)(unaff_x20 + 5) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[4];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
  }
  if (*(char *)(unaff_x20 + 7) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[6];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
  }
  if (*(char *)(unaff_x20 + 9) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = unaff_x20[8];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  bVar2 = *(byte *)((long)unaff_x20 + 0x49);
  if (bVar2 == 2) {
    bVar2 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar2 = bVar2 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar2);
  lVar4 = unaff_x20[0xb];
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar4 = unaff_x20[0xd];
  }
  else {
    uVar5 = unaff_x20[10];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar4);
    lVar4 = unaff_x20[0xd];
  }
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0xc];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar4);
  }
  if (*(char *)(unaff_x20 + 0xf) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0xe];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
  }
  if (*(char *)(unaff_x20 + 0x11) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x10];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
  }
  if (*(char *)(unaff_x20 + 0x13) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x12];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
  }
  if (*(char *)(unaff_x20 + 0x15) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x14];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
  }
  if (*(char *)(unaff_x20 + 0x17) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar4 = unaff_x20[0x19];
  }
  else {
    uVar5 = unaff_x20[0x16];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
    lVar4 = unaff_x20[0x19];
  }
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x18];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar4);
  }
  if (*(char *)(unaff_x20 + 0x1b) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x1a];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
  }
  if (*(char *)(unaff_x20 + 0x1d) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar4 = unaff_x20[0x1f];
  }
  else {
    uVar5 = unaff_x20[0x1c];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
    lVar4 = unaff_x20[0x1f];
  }
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x1e];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar4);
  }
  bVar2 = *(byte *)(unaff_x20 + 0x20);
  if (bVar2 == 2) {
    bVar2 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar2 = bVar2 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar2);
  return;
}



/* Entry: 10425f7d4; end: 10425f96b;  */

void FUN_10425f7d4(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_10425f3f0(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10425f96c; end: 10425f9ab; +[SCAdWebViewLoadTrackInfo identity] */

void FUN_10425f96c(void)

{
  if (lRam0000000113069dd0 != -1) {
    _swift_once(0x113069dd0,0x10425f80c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813368);
  return;
}



/* Entry: 10425f9ac; end: 10425fa7f; -[SCAdWebViewLoadTrackInfo withDomDownloadLatency:] */

void FUN_10425f9ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_348 [264];
  long lStack_240;
  undefined1 uStack_238;
  undefined1 auStack_138 [264];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain();
  FUN_1042cd98c(&lStack_240,param_1);
  uStack_238 = param_3 == 0;
  if ((bool)uStack_238) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c067fc0();
  }
  lStack_240 = lVar2;
  _memcpy(auStack_138,&lStack_240,0x101);
  _objc_allocWithZone(uVar1);
  func_0x000101880464(auStack_138,auStack_348);
  puVar3 = auStack_138;
  FUN_1042cbdbc(puVar3);
  _objc_release(param_3);
  _objc_release(param_1);
  func_0x0001017e2180(&lStack_240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10425fa80; end: 10425fb53; -[SCAdWebViewLoadTrackInfo withDomLoadLatency:] */

void FUN_10425fa80(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_348 [264];
  undefined1 auStack_240 [16];
  long lStack_230;
  undefined1 uStack_228;
  undefined1 auStack_138 [264];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain();
  FUN_1042cd98c(auStack_240,param_1);
  uStack_228 = param_3 == 0;
  if ((bool)uStack_228) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c067fc0();
  }
  lStack_230 = lVar2;
  _memcpy(auStack_138,auStack_240,0x101);
  _objc_allocWithZone(uVar1);
  func_0x000101880464(auStack_138,auStack_348);
  puVar3 = auStack_138;
  FUN_1042cbdbc(puVar3);
  _objc_release(param_3);
  _objc_release(param_1);
  func_0x0001017e2180(auStack_240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10425fb54; end: 10425fc27; -[SCAdWebViewLoadTrackInfo withFirstContentfulPaintLatency:] */

void FUN_10425fb54(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_348 [264];
  undefined1 auStack_240 [32];
  long lStack_220;
  undefined1 uStack_218;
  undefined1 auStack_138 [264];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain();
  FUN_1042cd98c(auStack_240,param_1);
  uStack_218 = param_3 == 0;
  if ((bool)uStack_218) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c067fc0();
  }
  lStack_220 = lVar2;
  _memcpy(auStack_138,auStack_240,0x101);
  _objc_allocWithZone(uVar1);
  func_0x000101880464(auStack_138,auStack_348);
  puVar3 = auStack_138;
  FUN_1042cbdbc(puVar3);
  _objc_release(param_3);
  _objc_release(param_1);
  func_0x0001017e2180(auStack_240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10425fc28; end: 10425fcfb; -[SCAdWebViewLoadTrackInfo withFullLoadLatency:] */

void FUN_10425fc28(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_348 [264];
  undefined1 auStack_240 [48];
  long lStack_210;
  undefined1 uStack_208;
  undefined1 auStack_138 [264];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain();
  FUN_1042cd98c(auStack_240,param_1);
  uStack_208 = param_3 == 0;
  if ((bool)uStack_208) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c067fc0();
  }
  lStack_210 = lVar2;
  _memcpy(auStack_138,auStack_240,0x101);
  _objc_allocWithZone(uVar1);
  func_0x000101880464(auStack_138,auStack_348);
  puVar3 = auStack_138;
  FUN_1042cbdbc(puVar3);
  _objc_release(param_3);
  _objc_release(param_1);
  func_0x0001017e2180(auStack_240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10425fcfc; end: 10425fdcf; -[SCAdWebViewLoadTrackInfo withLoadProgress:] */

void FUN_10425fcfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_348 [264];
  undefined1 auStack_240 [64];
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined1 auStack_138 [264];
  
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  _objc_retain();
  FUN_1042cd98c(auStack_240,param_2);
  uStack_1f8 = param_4 == 0;
  if ((bool)uStack_1f8) {
    param_1 = 0;
  }
  else {
    func_0x00010bf885a0(param_4);
  }
  uStack_200 = param_1;
  _memcpy(auStack_138,auStack_240,0x101);
  _objc_allocWithZone(uVar1);
  func_0x000101880464(auStack_138,auStack_348);
  puVar2 = auStack_138;
  FUN_1042cbdbc(puVar2);
  _objc_release(param_4);
  _objc_release(param_2);
  func_0x0001017e2180(auStack_240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10425fdd0; end: 10425fe97; -[SCAdWebViewLoadTrackInfo withHasSubsequentNavigation:] */

void FUN_10425fdd0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_348 [264];
  undefined1 auStack_240 [73];
  undefined1 uStack_1f7;
  undefined1 auStack_138 [264];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain();
  FUN_1042cd98c(auStack_240,param_1);
  if (param_3 == 0) {
    uStack_1f7 = 2;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf1f3c0();
    uStack_1f7 = (undefined1)lVar2;
  }
  _memcpy(auStack_138,auStack_240,0x101);
  _objc_allocWithZone(uVar1);
  func_0x000101880464(auStack_138,auStack_348);
  puVar3 = auStack_138;
  FUN_1042cbdbc(puVar3);
  _objc_release(param_3);
  _objc_release(param_1);
  func_0x0001017e2180(auStack_240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10425fe98; end: 10425ff7b; -[SCAdWebViewLoadTrackInfo withUserAgent:] */

void FUN_10425fe98(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_478 [264];
  undefined1 auStack_370 [80];
  long lStack_320;
  undefined8 uStack_318;
  undefined1 auStack_268 [80];
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_148 [264];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042cd98c(auStack_268);
  uStack_158 = uStack_210;
  uStack_160 = uStack_218;
  func_0x000101994d34(&uStack_160);
  _memcpy(auStack_370,auStack_268,0x101);
  lStack_320 = param_3;
  uStack_318 = param_2;
  _memcpy(auStack_148,auStack_370,0x101);
  _objc_allocWithZone(uVar1);
  func_0x000101880464(auStack_148,auStack_478);
  puVar2 = auStack_148;
  FUN_1042cbdbc(puVar2);
  _objc_release(param_1);
  func_0x0001017e2180(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10425ff7c; end: 10426005f; -[SCAdWebViewLoadTrackInfo withPageURL:] */

void FUN_10425ff7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_478 [264];
  undefined1 auStack_370 [96];
  long lStack_310;
  undefined8 uStack_308;
  undefined1 auStack_268 [96];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_148 [264];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042cd98c(auStack_268);
  uStack_158 = uStack_200;
  uStack_160 = uStack_208;
  func_0x000101994d34(&uStack_160);
  _memcpy(auStack_370,auStack_268,0x101);
  lStack_310 = param_3;
  uStack_308 = param_2;
  _memcpy(auStack_148,auStack_370,0x101);
  _objc_allocWithZone(uVar1);
  func_0x000101880464(auStack_148,auStack_478);
  puVar2 = auStack_148;
  FUN_1042cbdbc(puVar2);
  _objc_release(param_1);
  func_0x0001017e2180(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104260060; end: 10426010b;  */

undefined1 * FUN_104260060(long param_1)

{
  undefined1 *puVar1;
  undefined8 unaff_x20;
  undefined1 auStack_348 [264];
  undefined1 auStack_240 [112];
  long lStack_1d0;
  undefined1 uStack_1c8;
  undefined1 auStack_138 [264];
  
  _swift_getObjectType();
  _objc_retain();
  FUN_1042cd98c(auStack_240);
  uStack_1c8 = param_1 == 0;
  if ((bool)uStack_1c8) {
    param_1 = 0;
  }
  else {
    func_0x00010c0b4ca0();
  }
  lStack_1d0 = param_1;
  _memcpy(auStack_138,auStack_240,0x101);
  _objc_allocWithZone(unaff_x20);
  func_0x000101880464(auStack_138,auStack_348);
  puVar1 = auStack_138;
  FUN_1042cbdbc(puVar1);
  func_0x0001017e2180(auStack_240);
  return puVar1;
}



/* Entry: 10426010c; end: 10426016b; -[SCAdWebViewLoadTrackInfo withNavigationStartTimestampMs:] */

void FUN_10426010c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104260060(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10426016c; end: 10426023f; -[SCAdWebViewLoadTrackInfo withResponseStartLatencyMs:] */

void FUN_10426016c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_348 [264];
  undefined1 auStack_240 [128];
  long lStack_1c0;
  undefined1 uStack_1b8;
  undefined1 auStack_138 [264];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain();
  FUN_1042cd98c(auStack_240,param_1);
  uStack_1b8 = param_3 == 0;
  if ((bool)uStack_1b8) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c067fc0();
  }
  lStack_1c0 = lVar2;
  _memcpy(auStack_138,auStack_240,0x101);
  _objc_allocWithZone(uVar1);
  func_0x000101880464(auStack_138,auStack_348);
  puVar3 = auStack_138;
  FUN_1042cbdbc(puVar3);
  _objc_release(param_3);
  _objc_release(param_1);
  func_0x0001017e2180(auStack_240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104260240; end: 104260313; -[SCAdWebViewLoadTrackInfo withDomInteractiveLatencyMs:] */

void FUN_104260240(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_348 [264];
  undefined1 auStack_240 [144];
  long lStack_1b0;
  undefined1 uStack_1a8;
  undefined1 auStack_138 [264];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain();
  FUN_1042cd98c(auStack_240,param_1);
  uStack_1a8 = param_3 == 0;
  if ((bool)uStack_1a8) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c067fc0();
  }
  lStack_1b0 = lVar2;
  _memcpy(auStack_138,auStack_240,0x101);
  _objc_allocWithZone(uVar1);
  func_0x000101880464(auStack_138,auStack_348);
  puVar3 = auStack_138;
  FUN_1042cbdbc(puVar3);
  _objc_release(param_3);
  _objc_release(param_1);
  func_0x0001017e2180(auStack_240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104260314; end: 1042603e7; -[SCAdWebViewLoadTrackInfo withDomContentLoadedStartLatencyMs:] */

void FUN_104260314(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_348 [264];
  undefined1 auStack_240 [160];
  long lStack_1a0;
  undefined1 uStack_198;
  undefined1 auStack_138 [264];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain();
  FUN_1042cd98c(auStack_240,param_1);
  uStack_198 = param_3 == 0;
  if ((bool)uStack_198) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c067fc0();
  }
  lStack_1a0 = lVar2;
  _memcpy(auStack_138,auStack_240,0x101);
  _objc_allocWithZone(uVar1);
  func_0x000101880464(auStack_138,auStack_348);
  puVar3 = auStack_138;
  FUN_1042cbdbc(puVar3);
  _objc_release(param_3);
  _objc_release(param_1);
  func_0x0001017e2180(auStack_240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1042603e8; end: 1042604bb; -[SCAdWebViewLoadTrackInfo withDomCompleteLatencyMs:] */

void FUN_1042603e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_348 [264];
  undefined1 auStack_240 [176];
  long lStack_190;
  undefined1 uStack_188;
  undefined1 auStack_138 [264];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain();
  FUN_1042cd98c(auStack_240,param_1);
  uStack_188 = param_3 == 0;
  if ((bool)uStack_188) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c067fc0();
  }
  lStack_190 = lVar2;
  _memcpy(auStack_138,auStack_240,0x101);
  _objc_allocWithZone(uVar1);
  func_0x000101880464(auStack_138,auStack_348);
  puVar3 = auStack_138;
  FUN_1042cbdbc(puVar3);
  _objc_release(param_3);
  _objc_release(param_1);
  func_0x0001017e2180(auStack_240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1042604bc; end: 10426059f; -[SCAdWebViewLoadTrackInfo withResolvedPageUrl:] */

void FUN_1042604bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_478 [264];
  undefined1 auStack_370 [192];
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_268 [192];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_148 [264];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042cd98c(auStack_268);
  uStack_158 = uStack_1a0;
  uStack_160 = uStack_1a8;
  func_0x000101994d34(&uStack_160);
  _memcpy(auStack_370,auStack_268,0x101);
  lStack_2b0 = param_3;
  uStack_2a8 = param_2;
  _memcpy(auStack_148,auStack_370,0x101);
  _objc_allocWithZone(uVar1);
  func_0x000101880464(auStack_148,auStack_478);
  puVar2 = auStack_148;
  FUN_1042cbdbc(puVar2);
  _objc_release(param_1);
  func_0x0001017e2180(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1042605a0; end: 104260673; -[SCAdWebViewLoadTrackInfo withServerRedirectCount:] */

void FUN_1042605a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_348 [264];
  undefined1 auStack_240 [208];
  long lStack_170;
  undefined1 uStack_168;
  undefined1 auStack_138 [264];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain();
  FUN_1042cd98c(auStack_240,param_1);
  uStack_168 = param_3 == 0;
  if ((bool)uStack_168) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c067fc0();
  }
  lStack_170 = lVar2;
  _memcpy(auStack_138,auStack_240,0x101);
  _objc_allocWithZone(uVar1);
  func_0x000101880464(auStack_138,auStack_348);
  puVar3 = auStack_138;
  FUN_1042cbdbc(puVar3);
  _objc_release(param_3);
  _objc_release(param_1);
  func_0x0001017e2180(auStack_240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104260674; end: 104260747; -[SCAdWebViewLoadTrackInfo withServerRedirectResolvedTsMs:] */

void FUN_104260674(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_348 [264];
  undefined1 auStack_240 [224];
  long lStack_160;
  undefined1 uStack_158;
  undefined1 auStack_138 [264];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain();
  FUN_1042cd98c(auStack_240,param_1);
  uStack_158 = param_3 == 0;
  if ((bool)uStack_158) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c067fc0();
  }
  lStack_160 = lVar2;
  _memcpy(auStack_138,auStack_240,0x101);
  _objc_allocWithZone(uVar1);
  func_0x000101880464(auStack_138,auStack_348);
  puVar3 = auStack_138;
  FUN_1042cbdbc(puVar3);
  _objc_release(param_3);
  _objc_release(param_1);
  func_0x0001017e2180(auStack_240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104260748; end: 10426082f; -[SCAdWebViewLoadTrackInfo withServerRedirectResolvedUrl:] */

void FUN_104260748(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_478 [264];
  undefined1 auStack_370 [240];
  long lStack_280;
  undefined8 uStack_278;
  undefined1 auStack_268 [240];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_148 [264];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1042cd98c(auStack_268);
  uStack_158 = uStack_170;
  uStack_160 = uStack_178;
  func_0x000101994d34(&uStack_160);
  _memcpy(auStack_370,auStack_268,0x101);
  lStack_280 = param_3;
  uStack_278 = param_2;
  _memcpy(auStack_148,auStack_370,0x101);
  _objc_allocWithZone(uVar1);
  func_0x000101880464(auStack_148,auStack_478);
  puVar2 = auStack_148;
  FUN_1042cbdbc(puVar2);
  _objc_release(param_1);
  func_0x0001017e2180(auStack_370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104260830; end: 1042608f7; -[SCAdWebViewLoadTrackInfo withHasPostClickEngagement:] */

void FUN_104260830(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_348 [264];
  undefined1 auStack_240 [256];
  undefined1 uStack_140;
  undefined1 auStack_138 [264];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain();
  FUN_1042cd98c(auStack_240,param_1);
  if (param_3 == 0) {
    uStack_140 = 2;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf1f3c0();
    uStack_140 = (undefined1)lVar2;
  }
  _memcpy(auStack_138,auStack_240,0x101);
  _objc_allocWithZone(uVar1);
  func_0x000101880464(auStack_138,auStack_348);
  puVar3 = auStack_138;
  FUN_1042cbdbc(puVar3);
  _objc_release(param_3);
  _objc_release(param_1);
  func_0x0001017e2180(auStack_240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1042608f8; end: 104260d63;  */

undefined8 FUN_1042608f8(long *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if ((char)param_1[1] == '\x01') {
    if ((char)param_2[1] != '\x01') {
      return 0;
    }
  }
  else if ((char)param_2[1] == '\x01' || *param_1 != *param_2) {
    return 0;
  }
  if ((char)param_1[3] == '\x01') {
    if ((char)param_2[3] != '\x01') {
      return 0;
    }
  }
  else if ((char)param_2[3] == '\x01' || param_1[2] != param_2[2]) {
    return 0;
  }
  if ((char)param_1[5] == '\x01') {
    if ((char)param_2[5] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[5] == '\x01') {
      return 0;
    }
    if (param_1[4] != param_2[4]) {
      return 0;
    }
  }
  if ((char)param_1[7] == '\x01') {
    if ((char)param_2[7] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[7] == '\x01') {
      return 0;
    }
    if (param_1[6] != param_2[6]) {
      return 0;
    }
  }
  if ((char)param_1[9] == '\x01') {
    if ((char)param_2[9] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[9] == '\x01') {
      return 0;
    }
    if ((double)param_1[8] != (double)param_2[8]) {
      return 0;
    }
  }
  bVar1 = *(byte *)((long)param_2 + 0x49);
  if (*(byte *)((long)param_1 + 0x49) == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if (((*(byte *)((long)param_1 + 0x49) ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  lVar3 = param_1[0xb];
  lVar2 = param_2[0xb];
  if (lVar3 == 0) {
    if (lVar2 != 0) {
      return 0;
    }
  }
  else {
    if (lVar2 == 0) {
      return 0;
    }
    uVar4 = param_1[10];
    if (((uVar4 != param_2[10]) || (lVar3 != lVar2)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,lVar3,param_2[10],lVar2,0), (uVar4 & 1) == 0)) {
      return 0;
    }
  }
  lVar3 = param_1[0xd];
  lVar2 = param_2[0xd];
  if (lVar3 == 0) {
    if (lVar2 != 0) {
      return 0;
    }
  }
  else {
    if (lVar2 == 0) {
      return 0;
    }
    uVar4 = param_1[0xc];
    if (((uVar4 != param_2[0xc]) || (lVar3 != lVar2)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,lVar3,param_2[0xc],lVar2,0), (uVar4 & 1) == 0)) {
      return 0;
    }
  }
  if ((char)param_1[0xf] == '\x01') {
    if ((char)param_2[0xf] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[0xf] == '\x01') {
      return 0;
    }
    if (param_1[0xe] != param_2[0xe]) {
      return 0;
    }
  }
  if ((char)param_1[0x11] == '\x01') {
    if ((char)param_2[0x11] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[0x11] == '\x01') {
      return 0;
    }
    if (param_1[0x10] != param_2[0x10]) {
      return 0;
    }
  }
  if ((char)param_1[0x13] == '\x01') {
    if ((char)param_2[0x13] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[0x13] == '\x01') {
      return 0;
    }
    if (param_1[0x12] != param_2[0x12]) {
      return 0;
    }
  }
  if ((char)param_1[0x15] == '\x01') {
    if ((char)param_2[0x15] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[0x15] == '\x01') {
      return 0;
    }
    if (param_1[0x14] != param_2[0x14]) {
      return 0;
    }
  }
  if ((char)param_1[0x17] == '\x01') {
    if ((char)param_2[0x17] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[0x17] == '\x01') {
      return 0;
    }
    if (param_1[0x16] != param_2[0x16]) {
      return 0;
    }
  }
  lVar3 = param_1[0x19];
  lVar2 = param_2[0x19];
  if (lVar3 == 0) {
    if (lVar2 != 0) {
      return 0;
    }
  }
  else {
    if (lVar2 == 0) {
      return 0;
    }
    uVar4 = param_1[0x18];
    if (((uVar4 != param_2[0x18]) || (lVar3 != lVar2)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,lVar3,param_2[0x18],lVar2,0), (uVar4 & 1) == 0)) {
      return 0;
    }
  }
  if ((char)param_1[0x1b] == '\x01') {
    if ((char)param_2[0x1b] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[0x1b] == '\x01') {
      return 0;
    }
    if (param_1[0x1a] != param_2[0x1a]) {
      return 0;
    }
  }
  if ((char)param_1[0x1d] == '\x01') {
    if ((char)param_2[0x1d] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[0x1d] == '\x01') {
      return 0;
    }
    if (param_1[0x1c] != param_2[0x1c]) {
      return 0;
    }
  }
  lVar2 = param_2[0x1f];
  if (param_1[0x1f] == 0) {
    if (lVar2 != 0) {
      return 0;
    }
  }
  else {
    if (lVar2 == 0) {
      return 0;
    }
    uVar4 = param_1[0x1e];
    if (((uVar4 != param_2[0x1e]) || (param_1[0x1f] != lVar2)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar4 & 1) == 0)) {
      return 0;
    }
  }
  bVar1 = *(byte *)(param_2 + 0x20);
  if (*(byte *)(param_1 + 0x20) == 2) {
    if (bVar1 == 2) {
      return 1;
    }
  }
  else if ((bVar1 != 2) && (((*(byte *)(param_1 + 0x20) ^ bVar1) & 1) == 0)) {
    return 1;
  }
  return 0;
}



/* Entry: 104260d64; end: 104260d67;  */

void FUN_104260d64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dcc748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce51f8;
  func_0x000107c61520(&UNK_10dce51f8,&UNK_110754ac0);
  puRam0000000112dcc748 = puVar1;
  return;
}



/* Entry: 104260d68; end: 104260dcb;  */

long FUN_104260d68(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104260dcc; end: 10426107b;  */

undefined8 * FUN_104260dcc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[6] = param_2[6];
  uVar1 = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = uVar1;
  *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  param_1[0xe] = param_2[0xe];
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  uVar2 = param_2[0x10];
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  param_1[0x10] = uVar2;
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  param_1[0x12] = param_2[0x12];
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  param_1[0x14] = param_2[0x14];
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  param_1[0x16] = param_2[0x16];
  uVar2 = param_2[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar2;
  uVar3 = param_2[0x1a];
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
  param_1[0x1a] = uVar3;
  uVar3 = param_2[0x1c];
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
  param_1[0x1c] = uVar3;
  uVar3 = param_2[0x1f];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = uVar3;
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Entry: 10426107c; end: 1042611af;  */

undefined8 * FUN_10426107c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[6] = param_2[6];
  uVar2 = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = uVar2;
  *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
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
  param_1[0xe] = param_2[0xe];
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  param_1[0x10] = param_2[0x10];
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  param_1[0x12] = param_2[0x12];
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  param_1[0x14] = param_2[0x14];
  uVar2 = param_2[0x16];
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  param_1[0x16] = uVar2;
  uVar2 = param_2[0x19];
  uVar1 = param_1[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x1a] = param_2[0x1a];
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
  param_1[0x1c] = param_2[0x1c];
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
  uVar2 = param_2[0x1f];
  uVar1 = param_1[0x1f];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  return param_1;
}



/* Entry: 1042611b0; end: 1042612a3;  */

int FUN_1042611b0(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x101) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x16);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1042612a4; end: 10426141f;  */

bool FUN_1042612a4(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  double *pdVar6;
  double *pdVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar8 = param_1[2];
  uVar1 = param_2[1];
  uVar9 = param_2[2];
  func_0x0001042298e8(uVar3,*param_2);
  if (((uVar3 & 1) == 0) || (func_0x000104229964(uVar4,uVar1), (uVar4 & 1) == 0)) {
    return false;
  }
  lVar5 = *(long *)(uVar8 + 0x10);
  if (lVar5 != *(long *)(uVar9 + 0x10)) {
    return false;
  }
  if ((lVar5 != 0) && (uVar8 != uVar9)) {
    pdVar7 = (double *)(uVar8 + 0x28);
    pdVar6 = (double *)(uVar9 + 0x28);
    do {
      lVar5 = lVar5 + -1;
      bVar2 = *pdVar7 == *pdVar6 && *(int *)(pdVar7 + -1) == *(int *)(pdVar6 + -1);
      if (*pdVar7 != *pdVar6 || *(int *)(pdVar7 + -1) != *(int *)(pdVar6 + -1)) {
        return bVar2;
      }
      pdVar7 = pdVar7 + 2;
      pdVar6 = pdVar6 + 2;
    } while (lVar5 != 0);
    return bVar2;
  }
  return true;
}



/* Entry: 104261420; end: 10426148b;  */

void FUN_104261420(undefined8 param_1,long param_2)

{
  long lVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  
  lVar1 = *(long *)(param_2 + 0x10);
  __ss6HasherV8_combineyySuF(lVar1);
  if (lVar1 != 0) {
    pdVar2 = (double *)(param_2 + 0x28);
    do {
      dVar4 = *pdVar2;
      __ss6HasherV8_combineyySuF(pdVar2[-1]);
      dVar3 = 0.0;
      if (dVar4 != 0.0) {
        dVar3 = dVar4;
      }
      __ss6HasherV8_combineyys6UInt64VF(dVar3);
      lVar1 = lVar1 + -1;
      pdVar2 = pdVar2 + 2;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 10426148c; end: 10426155b;  */

void FUN_10426148c(undefined8 param_1,long param_2)

{
  long lVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  lVar1 = *(long *)(param_2 + 0x10);
  __ss6HasherV8_combineyySuF(lVar1);
  if (lVar1 != 0) {
    pdVar2 = (double *)(param_2 + 0x28);
    do {
      dVar4 = *pdVar2;
      dVar5 = pdVar2[1];
      dVar6 = pdVar2[2];
      dVar7 = pdVar2[3];
      dVar8 = pdVar2[4];
      dVar3 = 0.0;
      if (pdVar2[-1] != 0.0) {
        dVar3 = pdVar2[-1];
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
      if (dVar7 != 0.0) {
        dVar3 = dVar7;
      }
      __ss6HasherV8_combineyys6UInt64VF(dVar3);
      dVar3 = 0.0;
      if (dVar8 != 0.0) {
        dVar3 = dVar8;
      }
      __ss6HasherV8_combineyys6UInt64VF(dVar3);
      pdVar2 = pdVar2 + 6;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 10426155c; end: 1042615eb;  */

void FUN_10426155c(undefined8 param_1,long param_2)

{
  long lVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  lVar1 = *(long *)(param_2 + 0x10);
  __ss6HasherV8_combineyySuF(lVar1);
  if (lVar1 != 0) {
    pdVar2 = (double *)(param_2 + 0x30);
    do {
      dVar4 = pdVar2[-1];
      dVar5 = *pdVar2;
      dVar3 = 0.0;
      if (pdVar2[-2] != 0.0) {
        dVar3 = pdVar2[-2];
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
      lVar1 = lVar1 + -1;
      pdVar2 = pdVar2 + 3;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 1042615ec; end: 1042615ef;  */

void FUN_1042615ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069dd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce5280;
  _swift_getWitnessTable(&UNK_10dce5280,&UNK_110754bb8);
  puRam0000000113069dd8 = puVar1;
  return;
}



/* Entry: 1042615f0; end: 10426162f;  */

void FUN_1042615f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069dd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce5280;
  _swift_getWitnessTable(&UNK_10dce5280,&UNK_110754bb8);
  puRam0000000113069dd8 = puVar1;
  return;
}



/* Entry: 104261630; end: 10426165f;  */

void FUN_104261630(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[2]);
  return;
}



/* Entry: 104261660; end: 10426171f;  */

undefined8 * FUN_104261660(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 104261720; end: 10426176b;  */

undefined8 * FUN_104261720(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 10426176c; end: 10426180b;  */

int FUN_10426176c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10426180c; end: 104261853;  */

uint FUN_10426180c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_104261a08(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104261854; end: 104261893; -[SCAdWebviewLifecycleEvent isExitAd] */

bool FUN_104261854(void)

{
  undefined1 auStack_50 [40];
  char cStack_28;
  
  FUN_1042d0fc0(auStack_50);
  func_0x000102d078d4(auStack_50);
  return cStack_28 == '\r';
}



/* Entry: 104261894; end: 1042618ef; -[SCAdWebviewLifecycleEvent adIdentifier] */

void FUN_104261894(void)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_30;
  char cStack_28;
  
  FUN_1042d0fc0(&uStack_50);
  if (cStack_28 == '\n') {
    _swift_bridgeObjectRelease(uStack_30);
  }
  uVar1 = uStack_50;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_50,uStack_48);
  _swift_bridgeObjectRelease(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042618f0; end: 104261993; -[SCAdWebviewLifecycleEvent snapIndex] */

undefined8 FUN_1042618f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000104261924();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104261994; end: 104261a07; -[SCAdWebviewLifecycleEvent isOnAttachment] */

void FUN_104261994(void)

{
  undefined *puVar1;
  undefined1 auStack_50 [40];
  char cStack_28;
  
  FUN_1042d0fc0(auStack_50);
  if ((cStack_28 == '\x02') || (cStack_28 == '\v')) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x00010bff91e0();
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  func_0x000102d078d4(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


