/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1044e814c; end: 1044e8187; -[_TtC29SCCameraConfigurationServices34kSCCameraDeviceSettingsFeatureName init] */

void FUN_1044e814c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x0001044e812c();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044e8188; end: 1044e81b7;  */

void FUN_1044e8188(void)

{
  func_0x0001044e812c();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044e81b8; end: 1044e81cf; -[_TtC29SCCameraConfigurationServices34kSCCameraDeviceSettingsFeatureName .cxx_destruct] */

void FUN_1044e81b8(void)

{
  return;
}



/* Entry: 1044e81d0; end: 1044e82a7;  */

void FUN_1044e81d0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044e82a8; end: 1044e82c7;  */

void FUN_1044e82a8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1044e82c8; end: 1044e8307;  */

void FUN_1044e82c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081268 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0db30;
  _swift_getWitnessTable(&UNK_10dd0db30,&UNK_11077e308);
  puRam0000000113081268 = puVar1;
  return;
}



/* Entry: 1044e8308; end: 1044e832f;  */

undefined1  [16] FUN_1044e8308(void)

{
  return ZEXT816(0x11077e308);
}



/* Entry: 1044e8330; end: 1044e836f;  */

void FUN_1044e8330(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081270 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0dbf0;
  _swift_getWitnessTable(&UNK_10dd0dbf0,&UNK_11077e380);
  puRam0000000113081270 = puVar1;
  return;
}



/* Entry: 1044e8370; end: 1044e841b;  */

void FUN_1044e8370(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044e841c; end: 1044e8453;  */

void FUN_1044e841c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 1044e8454; end: 1044e8503;  */

void FUN_1044e8454(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1044e8504();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1044e8504; end: 1044e8517;  */

undefined1  [16] FUN_1044e8504(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1044e8518; end: 1044e8557;  */

void FUN_1044e8518(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081278 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0dcb0;
  _swift_getWitnessTable(&UNK_10dd0dcb0,&UNK_11077e3f8);
  puRam0000000113081278 = puVar1;
  return;
}



/* Entry: 1044e8558; end: 1044e855b;  */

void FUN_1044e8558(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081280 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0dd50;
  _swift_getWitnessTable(&UNK_10dd0dd50,&UNK_11077e418);
  puRam0000000113081280 = puVar1;
  return;
}



/* Entry: 1044e855c; end: 1044e859b;  */

void FUN_1044e855c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081280 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0dd50;
  _swift_getWitnessTable(&UNK_10dd0dd50,&UNK_11077e418);
  puRam0000000113081280 = puVar1;
  return;
}



/* Entry: 1044e859c; end: 1044e859f;  */

void FUN_1044e859c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081288 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0ddf0;
  _swift_getWitnessTable(&UNK_10dd0ddf0,&UNK_11077e438);
  puRam0000000113081288 = puVar1;
  return;
}



/* Entry: 1044e85a0; end: 1044e85df;  */

void FUN_1044e85a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081288 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0ddf0;
  _swift_getWitnessTable(&UNK_10dd0ddf0,&UNK_11077e438);
  puRam0000000113081288 = puVar1;
  return;
}



/* Entry: 1044e85e0; end: 1044e85e3;  */

void FUN_1044e85e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081290 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0de90;
  _swift_getWitnessTable(&UNK_10dd0de90,&UNK_11077e458);
  puRam0000000113081290 = puVar1;
  return;
}



/* Entry: 1044e85e4; end: 1044e8623;  */

void FUN_1044e85e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081290 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0de90;
  _swift_getWitnessTable(&UNK_10dd0de90,&UNK_11077e458);
  puRam0000000113081290 = puVar1;
  return;
}



/* Entry: 1044e8624; end: 1044e8627;  */

void FUN_1044e8624(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081298 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0df30;
  _swift_getWitnessTable(&UNK_10dd0df30,&UNK_11077e478);
  puRam0000000113081298 = puVar1;
  return;
}



/* Entry: 1044e8628; end: 1044e8667;  */

void FUN_1044e8628(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081298 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0df30;
  _swift_getWitnessTable(&UNK_10dd0df30,&UNK_11077e478);
  puRam0000000113081298 = puVar1;
  return;
}



/* Entry: 1044e8668; end: 1044e872b;  */

undefined1  [16] FUN_1044e8668(void)

{
  return ZEXT816(0x11077e3f8);
}



/* Entry: 1044e872c; end: 1044e8757;  */

void FUN_1044e872c(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001044e8814();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1044e8758; end: 1044e8773;  */

void FUN_1044e8758(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 1044e8774; end: 1044e87f7;  */

void FUN_1044e8774(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044e87f8; end: 1044e8827;  */

void FUN_1044e87f8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 1044e8828; end: 1044e8867;  */

void FUN_1044e8828(void)

{
  undefined *puVar1;
  
  if (puRam00000001130812a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0e0b0;
  _swift_getWitnessTable(&UNK_10dd0e0b0,&UNK_11077e4f0);
  puRam00000001130812a0 = puVar1;
  return;
}



/* Entry: 1044e8868; end: 1044e886b;  */

void FUN_1044e8868(void)

{
  undefined *puVar1;
  
  if (puRam00000001130812a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0e150;
  _swift_getWitnessTable(&UNK_10dd0e150,&UNK_11077e510);
  puRam00000001130812a8 = puVar1;
  return;
}



/* Entry: 1044e886c; end: 1044e88ab;  */

void FUN_1044e886c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130812a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0e150;
  _swift_getWitnessTable(&UNK_10dd0e150,&UNK_11077e510);
  puRam00000001130812a8 = puVar1;
  return;
}



/* Entry: 1044e88ac; end: 1044e88af;  */

void FUN_1044e88ac(void)

{
  undefined *puVar1;
  
  if (puRam00000001130812b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0e1f0;
  _swift_getWitnessTable(&UNK_10dd0e1f0,&UNK_11077e530);
  puRam00000001130812b0 = puVar1;
  return;
}



/* Entry: 1044e88b0; end: 1044e88ef;  */

void FUN_1044e88b0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130812b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0e1f0;
  _swift_getWitnessTable(&UNK_10dd0e1f0,&UNK_11077e530);
  puRam00000001130812b0 = puVar1;
  return;
}



/* Entry: 1044e88f0; end: 1044e8973;  */

undefined1  [16] FUN_1044e88f0(void)

{
  return ZEXT816(0x11077e4f0);
}



/* Entry: 1044e8974; end: 1044e89b3;  */

void FUN_1044e8974(void)

{
  undefined *puVar1;
  
  if (puRam00000001130812b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0e2f0;
  _swift_getWitnessTable(&UNK_10dd0e2f0,&UNK_11077e5a8);
  puRam00000001130812b8 = puVar1;
  return;
}



/* Entry: 1044e89b4; end: 1044e8a5f;  */

void FUN_1044e89b4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044e8a60; end: 1044e8aab;  */

void FUN_1044e8a60(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 1044e8aac; end: 1044e8b83;  */

void FUN_1044e8aac(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044e8b84; end: 1044e8ba3;  */

void FUN_1044e8b84(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1044e8ba4; end: 1044e8be3;  */

void FUN_1044e8ba4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130812c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0e3b0;
  _swift_getWitnessTable(&UNK_10dd0e3b0,&UNK_11077e620);
  puRam00000001130812c0 = puVar1;
  return;
}



/* Entry: 1044e8be4; end: 1044e8c07;  */

undefined1  [16] FUN_1044e8be4(void)

{
  return ZEXT816(0x11077e620);
}



/* Entry: 1044e8c08; end: 1044e8cdf;  */

void FUN_1044e8c08(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044e8ce0; end: 1044e8cff;  */

void FUN_1044e8ce0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1044e8d00; end: 1044e8d3f;  */

void FUN_1044e8d00(void)

{
  undefined *puVar1;
  
  if (puRam00000001130812c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0e470;
  _swift_getWitnessTable(&UNK_10dd0e470,&UNK_11077e698);
  puRam00000001130812c8 = puVar1;
  return;
}



/* Entry: 1044e8d40; end: 1044e8d67;  */

undefined1  [16] FUN_1044e8d40(void)

{
  return ZEXT816(0x11077e698);
}



/* Entry: 1044e8d68; end: 1044e8da7;  */

void FUN_1044e8d68(void)

{
  undefined *puVar1;
  
  if (puRam00000001130812d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0e530;
  _swift_getWitnessTable(&UNK_10dd0e530,&UNK_11077e710);
  puRam00000001130812d0 = puVar1;
  return;
}



/* Entry: 1044e8da8; end: 1044e8e53;  */

void FUN_1044e8da8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044e8e54; end: 1044e8ea3;  */

void FUN_1044e8e54(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 1044e8ea4; end: 1044e8ee3;  */

void FUN_1044e8ea4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130812d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0e5f0;
  _swift_getWitnessTable(&UNK_10dd0e5f0,&UNK_11077e788);
  puRam00000001130812d8 = puVar1;
  return;
}



/* Entry: 1044e8ee4; end: 1044e8f8f;  */

void FUN_1044e8ee4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044e8f90; end: 1044e8fe3;  */

void FUN_1044e8f90(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 1044e8fe4; end: 1044e9093;  */

void FUN_1044e8fe4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044e9094; end: 1044e90a7;  */

undefined1  [16] FUN_1044e9094(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 0x14) {
    uVar1 = param_1;
  }
  auVar2[8] = 0x13 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1044e90a8; end: 1044e90e7;  */

void FUN_1044e90a8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130812e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0e6b0;
  _swift_getWitnessTable(&UNK_10dd0e6b0,&UNK_11077e800);
  puRam00000001130812e0 = puVar1;
  return;
}



/* Entry: 1044e90e8; end: 1044e90eb;  */

void FUN_1044e90e8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130812e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0e750;
  _swift_getWitnessTable(&UNK_10dd0e750,&UNK_11077e820);
  puRam00000001130812e8 = puVar1;
  return;
}



/* Entry: 1044e90ec; end: 1044e912b;  */

void FUN_1044e90ec(void)

{
  undefined *puVar1;
  
  if (puRam00000001130812e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0e750;
  _swift_getWitnessTable(&UNK_10dd0e750,&UNK_11077e820);
  puRam00000001130812e8 = puVar1;
  return;
}



/* Entry: 1044e912c; end: 1044e9173;  */

undefined1  [16] FUN_1044e912c(void)

{
  return ZEXT816(0x11077e800);
}



/* Entry: 1044e9174; end: 1044e9183; -[SCCaptureBitrateLadderConfig hevcBitrate360p] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044e9174(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130812f0);
}



/* Entry: 1044e9184; end: 1044e9193; -[SCCaptureBitrateLadderConfig hevcBitrate480p] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044e9184(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130812f8);
}



/* Entry: 1044e9194; end: 1044e91a3; -[SCCaptureBitrateLadderConfig hevcBitrate720p] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044e9194(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113081300);
}



/* Entry: 1044e91a4; end: 1044e91b7; -[SCCaptureBitrateLadderConfig hevcBitrate1080p] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044e91a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113081308);
}



/* Entry: 1044e91b8; end: 1044e92cf; -[SCCaptureBitrateLadderConfig initWithHevcBitrate360p:hevcBitrate480p:hevcBitrate720p:hevcBitrate1080p:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e91b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130812f0) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130812f8) = param_4;
  *(undefined8 *)(param_1 + _DAT_113081300) = param_5;
  *(undefined8 *)(param_1 + _DAT_113081308) = param_6;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044e92d0; end: 1044e92d3; -[SCCaptureBitrateLadderConfig copyWithZone:] */

void FUN_1044e92d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044e92d4; end: 1044e92ef; -[SCCaptureBitrateLadderConfig description] */

void FUN_1044e92d4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e92f0; end: 1044e938b; -[SCCaptureBitrateLadderConfig init] */

void FUN_1044e92f0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCCameraConfigurationServices/SCCaptureBitrateLadderConfigWrapper.swift",0x47,2,0x32,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044e9338);
  (*pcVar1)();
}



/* Entry: 1044e938c; end: 1044e938f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e938c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130812f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130812f8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113081300) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113081308) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044e9390; end: 1044e939b; -[SCCameraSwitcherGradientConfig locations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e9390(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113081338);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1044e939c; end: 1044e93a7; -[SCCameraSwitcherGradientConfig opacities] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e939c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113081340);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1044e93a8; end: 1044e93fb;  */

void FUN_1044e93a8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1044e93fc; end: 1044e93ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e93fc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113081338) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113081340) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044e9400; end: 1044e94a3; -[SCCameraSwitcherGradientConfig initWithLocations:opacities:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e9400(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  puVar1 = PTR___sypN_11034f1a8;
  if (param_3 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_3,PTR___sypN_11034f1a8 + 8);
  }
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_4,puVar1 + 8);
  }
  *(long *)(param_1 + _DAT_113081338) = param_3;
  *(long *)(param_1 + _DAT_113081340) = param_4;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044e94a4; end: 1044e9507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e94a4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113081338) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113081340) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044e9508; end: 1044e950b; -[SCCameraSwitcherGradientConfig copyWithZone:] */

void FUN_1044e9508(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044e950c; end: 1044e9527; -[SCCameraSwitcherGradientConfig description] */

void FUN_1044e950c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e9528; end: 1044e95a3; -[SCCameraSwitcherGradientConfig init] */

void FUN_1044e9528(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCCameraConfigurationServices/SCCameraSwitcherGradientConfigWrapper.swift",0x49,2,0x28
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044e9570);
  (*pcVar1)();
}



/* Entry: 1044e95a4; end: 1044e95db; -[SCCameraSwitcherGradientConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e95a4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113081338));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113081340));
  return;
}



/* Entry: 1044e95dc; end: 1044e95fb;  */

void FUN_1044e95dc(void)

{
  _objc_opt_self(&PTR_PTR_1129c4ef8);
  return;
}



/* Entry: 1044e95fc; end: 1044e95ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e95fc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113081338) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113081340) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044e9600; end: 1044e960f; -[SCCameraFeatureDeviceSettings videoOrientation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044e9600(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113081370);
}



/* Entry: 1044e9610; end: 1044e9623; -[SCCameraFeatureDeviceSettings zoomFactor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044e9610(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113081378);
}



/* Entry: 1044e9624; end: 1044e96eb; -[SCCameraFeatureDeviceSettings initWithVideoOrientation:zoomFactor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e9624(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_2;
  _swift_getObjectType();
  *(undefined8 *)(param_2 + _DAT_113081370) = param_4;
  *(undefined8 *)(param_2 + _DAT_113081378) = param_1;
  lStack_40 = param_2;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044e96ec; end: 1044e96ef; -[SCCameraFeatureDeviceSettings copyWithZone:] */

void FUN_1044e96ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044e96f0; end: 1044e970b; -[SCCameraFeatureDeviceSettings description] */

void FUN_1044e96f0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e970c; end: 1044e9753; -[SCCameraFeatureDeviceSettings init] */

void FUN_1044e970c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCCameraConfigurationServices/SCCameraFeatureDeviceSettingsWrapper.swift",0x48,2,0x2a,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044e9754);
  (*pcVar1)();
}



/* Entry: 1044e9754; end: 1044e976f; +[SCCameraFeatureDeviceSettingsBuilder cameraFeatureDeviceSettings] */

void FUN_1044e9754(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e9770; end: 1044e97af; +[SCCameraFeatureDeviceSettingsBuilder cameraFeatureDeviceSettingsWithExistingCameraFeatureDeviceSettings:] */

void FUN_1044e9770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1044e99c8(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1044e97b0; end: 1044e97c7; -[SCCameraFeatureDeviceSettingsBuilder withVideoOrientation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e97b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113081380);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1044e97c8; end: 1044e97df; -[SCCameraFeatureDeviceSettingsBuilder withZoomFactor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e97c8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_113081388);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1044e97e0; end: 1044e989f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e97e0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_40;
  long lStack_38;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113081380);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar3 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113081388);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar4 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar4 = *puVar1;
  }
  FUN_1044e9a78();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_113081370) = uVar3;
  *(undefined8 *)(lVar2 + _DAT_113081378) = uVar4;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044e98a0; end: 1044e98e3; -[SCCameraFeatureDeviceSettingsBuilder build] */

void FUN_1044e98a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044e97e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044e98e4; end: 1044e9927; -[SCCameraFeatureDeviceSettingsBuilder safeBuildAndReturnError:] */

void FUN_1044e98e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044e97e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044e9928; end: 1044e998f; -[SCCameraFeatureDeviceSettingsBuilder init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e9928(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  puVar1 = (undefined8 *)(param_1 + _DAT_113081380);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(param_1 + _DAT_113081388);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044e9990; end: 1044e9993;  */

void FUN_1044e9990(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044e9994; end: 1044e99c7;  */

void FUN_1044e9994(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044e99c8; end: 1044e9a77;  */

/* WARNING: Possible PIC construction at 0x0001044e99fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001044e9a00) */

void FUN_1044e99c8(long param_1)

{
  if (param_1 == 0) {
    func_0x0001044e9a98();
    _objc_allocWithZone();
  }
  else {
    func_0x0001044e9a98();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1044e9a78; end: 1044e9ab7;  */

void FUN_1044e9a78(void)

{
  _objc_opt_self(&PTR_PTR_1129c4fc8);
  return;
}



/* Entry: 1044e9ab8; end: 1044e9abf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e9ab8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113081370) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113081378) = param_1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044e9ac0; end: 1044eb3cb;  */

undefined1  [16] FUN_1044e9ac0(void)

{
  return ZEXT816(0x11077e918);
}



/* Entry: 1044eb3cc; end: 1044eb44f;  */

void FUN_1044eb3cc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044eb450; end: 1044eb453;  */

void FUN_1044eb450(void)

{
  undefined *puVar1;
  
  if (puRam00000001130813e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0e9e0;
  _swift_getWitnessTable(&UNK_10dd0e9e0,&UNK_11077ebf8);
  puRam00000001130813e0 = puVar1;
  return;
}



/* Entry: 1044eb454; end: 1044eb493;  */

void FUN_1044eb454(void)

{
  undefined *puVar1;
  
  if (puRam00000001130813e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0e9e0;
  _swift_getWitnessTable(&UNK_10dd0e9e0,&UNK_11077ebf8);
  puRam00000001130813e0 = puVar1;
  return;
}



/* Entry: 1044eb494; end: 1044eb497;  */

void FUN_1044eb494(void)

{
  undefined *puVar1;
  
  if (puRam00000001130813e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0ea80;
  _swift_getWitnessTable(&UNK_10dd0ea80,&UNK_11077ec18);
  puRam00000001130813e8 = puVar1;
  return;
}


