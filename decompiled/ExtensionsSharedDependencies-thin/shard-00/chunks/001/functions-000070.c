/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00162af4; end: 00162b53;  */

void FUN_00162af4(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  lVar2 = param_1[2];
  uVar4 = param_1[3];
  if ((param_2 & 1) != 0) {
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRelease(uVar4);
    *(undefined8 *)(lVar2 + 0x18) = uVar1;
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x18) = uVar1;
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  return;
}



/* Entry: 00162b54; end: 00162b63;  */

bool FUN_00162b54(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x20) != 0;
}



/* Entry: 00162b64; end: 00162b7f;  */

void FUN_00162b64(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  return;
}



/* Entry: 00162b80; end: 00162cdf;  */

undefined4 FUN_00162b80(void)

{
  undefined4 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x2c) != '\x01') {
    uVar1 = *(undefined4 *)(unaff_x20 + 0x28);
  }
  return uVar1;
}



/* Entry: 00162ce0; end: 00162d0f;  */

undefined1  [16] FUN_00162ce0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                  *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 00162d10; end: 00162d43;  */

void FUN_00162d10(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 00162d44; end: 00162d5f;  */

undefined1  [16] FUN_00162d44(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x162d54;
  return auVar1;
}



/* Entry: 00162d60; end: 00162d8b;  */

void FUN_00162d60(void)

{
  func_0x000115a8(0xaf0d38,&UNK_007db080);
                    /* WARNING: Could not recover jumptable at 0x0077b4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_0099bad0)();
  return;
}



/* Entry: 00162d8c; end: 00162e4f;  */

void FUN_00162d8c(void)

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



/* Entry: 00162e50; end: 00162e9b;  */

void FUN_00162e50(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 1;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined2 *)((long)param_1 + 0x34) = 0x301;
  return;
}



/* Entry: 00162e9c; end: 00162f5b;  */

void FUN_00162e9c(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007dfd30,0xee,&uStack_48,&lStack_40);
  puRam0000000000b64bb8 = puStack_38;
  lRam0000000000b64bb0 = lStack_40;
  puRam0000000000b64bc8 = puStack_28;
  puRam0000000000b64bc0 = puStack_30;
  puRam0000000000b64bd8 = puStack_18;
  puRam0000000000b64bd0 = puStack_20;
  return;
}



/* Entry: 00162f5c; end: 0016309b;  */

void FUN_00162f5c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0d40 != -1) {
    _swift_once(0xaf0d40,FUN_00162e9c);
  }
  uVar5 = uRam0000000000b64bd8;
  uVar4 = uRam0000000000b64bd0;
  uVar3 = uRam0000000000b64bc8;
  uVar2 = uRam0000000000b64bc0;
  uVar1 = uRam0000000000b64bb8;
  *param_1 = uRam0000000000b64bb0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 0016309c; end: 0016315b;  */

void FUN_0016309c(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007dfcf0,0x39,&uStack_48,&lStack_40);
  puRam0000000000b64be8 = puStack_38;
  lRam0000000000b64be0 = lStack_40;
  puRam0000000000b64bf8 = puStack_28;
  puRam0000000000b64bf0 = puStack_30;
  puRam0000000000b64c08 = puStack_18;
  puRam0000000000b64c00 = puStack_20;
  return;
}



/* Entry: 0016315c; end: 0016329b;  */

void FUN_0016315c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0d48 != -1) {
    _swift_once(0xaf0d48,FUN_0016309c);
  }
  uVar5 = uRam0000000000b64c08;
  uVar4 = uRam0000000000b64c00;
  uVar3 = uRam0000000000b64bf8;
  uVar2 = uRam0000000000b64bf0;
  uVar1 = uRam0000000000b64be8;
  *param_1 = uRam0000000000b64be0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 0016329c; end: 001632c3;  */

undefined * FUN_0016329c(void)

{
  return &UNK_009afb00;
}



/* Entry: 001632c4; end: 00163383;  */

void FUN_001632c4(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007dff48,7,&uStack_48,&lStack_40);
  puRam0000000000b64c18 = puStack_38;
  lRam0000000000b64c10 = lStack_40;
  puRam0000000000b64c28 = puStack_28;
  puRam0000000000b64c20 = puStack_30;
  puRam0000000000b64c38 = puStack_18;
  puRam0000000000b64c30 = puStack_20;
  return;
}



/* Entry: 00163384; end: 00163423;  */

void FUN_00163384(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0d50 != -1) {
    _swift_once(0xaf0d50,FUN_001632c4);
  }
  uVar5 = uRam0000000000b64c38;
  uVar4 = uRam0000000000b64c30;
  uVar3 = uRam0000000000b64c28;
  uVar2 = uRam0000000000b64c20;
  uVar1 = uRam0000000000b64c18;
  *param_1 = uRam0000000000b64c10;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00163424; end: 00163473;  */

uint FUN_00163424(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  FUN_000e1a94();
  if ((param_4 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x0014c360(param_1);
    uVar2 = param_1;
    FUN_000f8814();
    _swift_bridgeObjectRelease(param_1);
    uVar1 = (uint)uVar2 & 1;
  }
  return uVar1;
}



/* Entry: 00163474; end: 001634d7;  */

void FUN_00163474(void)

{
  FUN_00180450();
  return;
}



/* Entry: 001634d8; end: 00163503;  */

uint FUN_001634d8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_2d8 [200];
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
  undefined1 uStack_150;
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
  undefined1 uStack_80;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == *(long *)(param_5 + 0x10)) {
    if (lVar4 != 0 && param_1 != param_5) {
      puVar5 = (undefined8 *)(param_1 + 0x20);
      puVar3 = (undefined8 *)(param_5 + 0x20);
      do {
        uStack_168 = puVar5[0x15];
        uStack_170 = puVar5[0x14];
        uStack_158 = puVar5[0x17];
        uStack_160 = puVar5[0x16];
        uStack_150 = *(undefined1 *)(puVar5 + 0x18);
        uStack_1a8 = puVar5[0xd];
        uStack_1b0 = puVar5[0xc];
        uStack_198 = puVar5[0xf];
        uStack_1a0 = puVar5[0xe];
        uStack_188 = puVar5[0x11];
        uStack_190 = puVar5[0x10];
        uStack_178 = puVar5[0x13];
        uStack_180 = puVar5[0x12];
        uStack_1e8 = puVar5[5];
        uStack_1f0 = puVar5[4];
        uStack_1d8 = puVar5[7];
        uStack_1e0 = puVar5[6];
        uStack_1c8 = puVar5[9];
        uStack_1d0 = puVar5[8];
        uStack_1b8 = puVar5[0xb];
        uStack_1c0 = puVar5[10];
        uStack_208 = puVar5[1];
        uStack_210 = *puVar5;
        uStack_1f8 = puVar5[3];
        uStack_200 = puVar5[2];
        uStack_98 = puVar3[0x15];
        uStack_a0 = puVar3[0x14];
        uStack_88 = puVar3[0x17];
        uStack_90 = puVar3[0x16];
        uStack_80 = *(undefined1 *)(puVar3 + 0x18);
        uStack_d8 = puVar3[0xd];
        uStack_e0 = puVar3[0xc];
        uStack_c8 = puVar3[0xf];
        uStack_d0 = puVar3[0xe];
        uStack_b8 = puVar3[0x11];
        uStack_c0 = puVar3[0x10];
        uStack_a8 = puVar3[0x13];
        uStack_b0 = puVar3[0x12];
        uStack_118 = puVar3[5];
        uStack_120 = puVar3[4];
        uStack_108 = puVar3[7];
        uStack_110 = puVar3[6];
        uStack_f8 = puVar3[9];
        uStack_100 = puVar3[8];
        uStack_e8 = puVar3[0xb];
        uStack_f0 = puVar3[10];
        uStack_138 = puVar3[1];
        uStack_140 = *puVar3;
        uStack_128 = puVar3[3];
        uStack_130 = puVar3[2];
        FUN_00191df8(&uStack_210,auStack_2d8);
        FUN_00191df8(&uStack_140,auStack_2d8);
        puVar2 = &uStack_210;
        func_0x00183ea4(puVar2,&uStack_140);
        func_0x00191e2c(&uStack_140);
        func_0x00191e2c(&uStack_210);
        if (((ulong)puVar2 & 1) == 0) goto LAB_001845fc;
        puVar3 = puVar3 + 0x19;
        puVar5 = puVar5 + 0x19;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    FUN_00038814(param_2,param_3,param_6,param_7);
    if ((param_2 & 1) != 0) {
      FUN_000e17c0(param_4,param_8);
      uVar1 = (uint)param_4;
      goto LAB_00184600;
    }
  }
LAB_001845fc:
  uVar1 = 0;
LAB_00184600:
  return uVar1 & 1;
}



/* Entry: 00163504; end: 00163553;  */

uint FUN_00163504(void)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  uVar4 = *unaff_x20;
  uVar2 = unaff_x20[3];
  FUN_000e1a94();
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x0014c360(uVar4);
    uVar3 = uVar4;
    FUN_000f846c();
    _swift_bridgeObjectRelease(uVar4);
    uVar1 = (uint)uVar3 & 1;
  }
  return uVar1;
}



/* Entry: 00163554; end: 00163567;  */

undefined1  [16] FUN_00163554(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x163564;
  return auVar1;
}



/* Entry: 00163568; end: 0016359f;  */

void FUN_00163568(void)

{
  FUN_00163474();
  return;
}



/* Entry: 001635a0; end: 0016363f;  */

void FUN_001635a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0d50 != -1) {
    _swift_once(0xaf0d50,FUN_001632c4);
  }
  uVar5 = uRam0000000000b64c38;
  uVar4 = uRam0000000000b64c30;
  uVar3 = uRam0000000000b64c28;
  uVar2 = uRam0000000000b64c20;
  uVar1 = uRam0000000000b64c18;
  *param_1 = uRam0000000000b64c10;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00163640; end: 001636ab;  */

void FUN_00163640(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf22b0;
  uStack_18 = param_1;
  func_0x000115a8(0xaf22b0,&UNK_007dec90);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 001636ac; end: 0016376b;  */

void FUN_001636ac(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007dfc40,0xad,&uStack_48,&lStack_40);
  puRam0000000000b64c48 = puStack_38;
  lRam0000000000b64c40 = lStack_40;
  puRam0000000000b64c58 = puStack_28;
  puRam0000000000b64c50 = puStack_30;
  puRam0000000000b64c68 = puStack_18;
  puRam0000000000b64c60 = puStack_20;
  return;
}



/* Entry: 0016376c; end: 0016380b;  */

void FUN_0016376c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0d60 != -1) {
    _swift_once(0xaf0d60,FUN_001636ac);
  }
  uVar5 = uRam0000000000b64c68;
  uVar4 = uRam0000000000b64c60;
  uVar3 = uRam0000000000b64c58;
  uVar2 = uRam0000000000b64c50;
  uVar1 = uRam0000000000b64c48;
  *param_1 = uRam0000000000b64c40;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 0016380c; end: 00163a43;  */

undefined8 FUN_0016380c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar4 = *(ulong *)(unaff_x20 + 0x20);
  func_0x0014c8fc(uVar4,&UNK_009b1938,0x1870d0);
  uVar5 = uVar4;
  FUN_000f846c();
  _swift_bridgeObjectRelease(uVar4);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  uVar4 = *(ulong *)(unaff_x20 + 0x28);
  func_0x0014c8fc(uVar4,&UNK_009b1ec8,0x187110);
  uVar5 = uVar4;
  FUN_000f846c();
  _swift_bridgeObjectRelease(uVar4);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  uVar4 = *(ulong *)(unaff_x20 + 0x30);
  func_0x0014c098();
  uVar5 = uVar4;
  FUN_000f846c();
  _swift_bridgeObjectRelease(uVar4);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  uVar4 = *(ulong *)(unaff_x20 + 0x38);
  func_0x0014c1ec();
  uVar5 = uVar4;
  FUN_000f846c();
  _swift_bridgeObjectRelease(uVar4);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  uVar5 = *(ulong *)(unaff_x20 + 0x80);
  if (uVar5 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x78);
    lVar7 = *(long *)(unaff_x20 + 0x88);
    func_0x00023304(uVar1,uVar6);
    _swift_bridgeObjectRetain(uVar5);
    _swift_retain(lVar7);
    uVar4 = uVar5;
    FUN_000e1a94();
    if ((uVar4 & 1) == 0) {
LAB_00163a0c:
      func_0x00186ac4(uVar1,uVar6,uVar5,lVar7);
      return 0;
    }
    _swift_beginAccess(lVar7 + 0xc0,auStack_78,0,0);
    uVar4 = *(ulong *)(lVar7 + 0xd0);
    if (uVar4 != 0) {
      uVar9 = *(undefined8 *)(lVar7 + 0xd8);
      uVar2 = *(undefined8 *)(lVar7 + 0xc0);
      uVar3 = *(undefined8 *)(lVar7 + 200);
      func_0x00023304(uVar2,uVar3);
      uVar8 = uVar4;
      _swift_bridgeObjectRetain();
      FUN_000e1a94();
      FUN_00116294(uVar2,uVar3,uVar4,uVar9);
      if ((uVar8 & 1) == 0) goto LAB_00163a0c;
    }
    _swift_beginAccess(lVar7 + 0xe0,auStack_90,0,0);
    uVar8 = *(ulong *)(lVar7 + 0xe0);
    uVar4 = uVar8;
    _swift_bridgeObjectRetain();
    func_0x0014be00();
    _swift_bridgeObjectRelease(uVar8);
    uVar8 = uVar4;
    FUN_000f846c();
    _swift_bridgeObjectRelease(uVar4);
    func_0x00186ac4(uVar1,uVar6,uVar5,lVar7);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
  }
  lVar7 = *(long *)(unaff_x20 + 0x90);
  if (lVar7 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0xa0);
    uVar5 = *(ulong *)(unaff_x20 + 0xa8);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x98);
    _swift_bridgeObjectRetain(lVar7);
    func_0x00023304(uVar6,uVar1);
    uVar4 = uVar5;
    _swift_bridgeObjectRetain();
    FUN_000e1a94();
    func_0x001864cc(lVar7,uVar6,uVar1,uVar5);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  }
  return 1;
}



/* Entry: 00163a44; end: 00163b2b;  */

uint FUN_00163a44(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  FUN_000e1a94();
  if ((param_3 & 1) == 0) {
LAB_00163b0c:
    uVar3 = 0;
  }
  else {
    _swift_beginAccess(param_4 + 0xc0,auStack_58,0,0);
    uVar5 = *(ulong *)(param_4 + 0xd0);
    if (uVar5 != 0) {
      uVar6 = *(undefined8 *)(param_4 + 0xd8);
      uVar2 = *(undefined8 *)(param_4 + 0xc0);
      uVar4 = *(undefined8 *)(param_4 + 200);
      func_0x00023304(uVar2,uVar4);
      uVar1 = uVar5;
      _swift_bridgeObjectRetain();
      FUN_000e1a94();
      FUN_00116294(uVar2,uVar4,uVar5,uVar6);
      if ((uVar1 & 1) == 0) goto LAB_00163b0c;
    }
    _swift_beginAccess(param_4 + 0xe0,auStack_70,0,0);
    uVar4 = *(undefined8 *)(param_4 + 0xe0);
    uVar2 = uVar4;
    _swift_bridgeObjectRetain(uVar4);
    func_0x0014be00();
    _swift_bridgeObjectRelease(uVar4);
    uVar4 = uVar2;
    FUN_000f846c(uVar2);
    uVar3 = (uint)uVar4;
    _swift_bridgeObjectRelease(uVar2);
  }
  return uVar3 & 1;
}



/* Entry: 00163b2c; end: 00163b33;  */

bool FUN_00163b2c(void)

{
  long lVar1;
  code *pcVar2;
  long in_x3;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  uVar5 = 1L << ((ulong)*(byte *)(in_x3 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if ((*(byte *)(in_x3 + 0x20) & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar5 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(in_x3 + 0x40);
  uVar5 = uVar5 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar3 = 0;
  lVar6 = lVar3;
  if (uVar7 == 0) goto LAB_000e1b04;
LAB_000e1b30:
  uVar4 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
  uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
  uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar7 = uVar7 - 1 & uVar7;
  uVar4 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) | lVar6 << 6;
  uStack_c0 = *(undefined8 *)(*(long *)(in_x3 + 0x30) + uVar4 * 8);
  FUN_000e1304(*(long *)(in_x3 + 0x38) + uVar4 * 0x28,&uStack_b8);
  lVar3 = lVar6;
  do {
    lVar6 = lStack_a0;
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    uStack_68 = uStack_98;
    lStack_70 = lStack_a0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    if (lStack_a0 == 0) {
      _swift_release(in_x3);
LAB_000e1bf8:
      return lVar6 == 0;
    }
    FUN_000e1450(&uStack_88,&uStack_c0);
    lVar1 = lStack_a0;
    uVar4 = uStack_a8;
    FUN_0001393c(&uStack_c0,uStack_a8);
    (**(code **)(lVar1 + 0x38))(uVar4,lVar1);
    if ((uVar4 & 1) == 0) {
      _swift_release(in_x3);
      FUN_00011670(&uStack_c0);
      goto LAB_000e1bf8;
    }
    FUN_00011670(&uStack_c0);
    lVar6 = lVar3;
    if (uVar7 != 0) goto LAB_000e1b30;
LAB_000e1b04:
    uVar4 = uVar5;
    if ((long)uVar5 <= lVar3 + 1) {
      uVar4 = lVar3 + 1;
    }
    while( true ) {
      lVar6 = lVar3 + 1;
      if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xe1c24);
        (*pcVar2)();
      }
      if ((long)uVar5 <= lVar6) break;
      uVar7 = ((ulong *)(in_x3 + 0x40))[lVar6];
      lVar3 = lVar3 + 1;
      if (uVar7 != 0) goto LAB_000e1b30;
    }
    uVar7 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    lStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    lVar3 = uVar4 - 1;
  } while( true );
}



/* Entry: 00163b34; end: 00163d2b;  */

/* WARNING: Removing unreachable block (ram,0x00163d28) */

void FUN_00163b34(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  long unaff_x21;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        pcVar4 = *(code **)(param_3 + 0x158);
        break;
      case 2:
        pcVar4 = *(code **)(param_3 + 0x158);
        break;
      case 3:
        pcVar4 = *(code **)(param_3 + 0x160);
        break;
      case 4:
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x001870d0();
        lVar2 = unaff_x20 + 0x20;
        puVar3 = &UNK_009b1938;
        goto code_r0x00163d14;
      case 5:
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x00187110();
        lVar2 = unaff_x20 + 0x28;
        puVar3 = &UNK_009b1ec8;
        goto code_r0x00163d14;
      case 6:
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x00187150();
        lVar2 = unaff_x20 + 0x30;
        puVar3 = &UNK_009b2050;
        goto code_r0x00163d14;
      case 7:
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x00187190();
        lVar2 = unaff_x20 + 0x38;
        puVar3 = &UNK_009b1c78;
        goto code_r0x00163d14;
      case 8:
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_00187a94();
        lVar2 = unaff_x20 + 0x70;
        puVar3 = &UNK_009b2170;
        goto code_r0x00163d14;
      case 9:
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_00188b4c();
        lVar2 = unaff_x20 + 0x90;
        puVar3 = &UNK_009b3238;
        goto code_r0x00163d14;
      case 10:
        pcVar4 = *(code **)(param_3 + 0x58);
        break;
      case 0xb:
        pcVar4 = *(code **)(param_3 + 0x58);
        break;
      case 0xc:
        pcVar4 = *(code **)(param_3 + 0x158);
        break;
      default:
        goto LAB_00163bbc;
      case 0xe:
        pcVar4 = *(code **)(param_3 + 0x188);
        FUN_00192034();
        lVar2 = unaff_x20 + 0xc0;
        puVar3 = &UNK_009b16f0;
code_r0x00163d14:
        (*pcVar4)(lVar2,puVar3,uVar1,param_2,param_3);
        goto LAB_00163bbc;
      case 0xf:
        pcVar4 = *(code **)(param_3 + 0x160);
      }
      (*pcVar4)();
LAB_00163bbc:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 00163d2c; end: 0016412b;  */

void FUN_00163d2c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long *unaff_x20;
  long unaff_x21;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar8 = unaff_x20[0xb];
  if (lVar8 != 0) {
    lVar9 = unaff_x20[10];
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar9,lVar8);
  }
  lVar8 = unaff_x20[0xd];
  if (lVar8 != 0) {
    lVar9 = unaff_x20[0xc];
    __ss6HasherV8_combineyySuF(2);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar9,lVar8);
  }
  lVar9 = *unaff_x20;
  lVar8 = *(long *)(lVar9 + 0x10);
  if (lVar8 != 0) {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyySuF(lVar8);
    puVar11 = (undefined8 *)(lVar9 + 0x28);
    do {
      uVar1 = puVar11[-1];
      uVar2 = *puVar11;
      _swift_bridgeObjectRetain(uVar2);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      puVar11 = puVar11 + 2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  if ((*(long *)(unaff_x20[4] + 0x10) != 0) && (FUN_0019ed54(unaff_x20[4],4), unaff_x21 != 0)) {
    return;
  }
  if ((*(long *)(unaff_x20[5] + 0x10) != 0) && (FUN_0019e52c(unaff_x20[5],5), unaff_x21 != 0)) {
    return;
  }
  if ((*(long *)(unaff_x20[6] + 0x10) != 0) && (FUN_0019d920(unaff_x20[6],6), unaff_x21 != 0)) {
    return;
  }
  if ((*(long *)(unaff_x20[7] + 0x10) != 0) && (FUN_0019d61c(unaff_x20[7],7), unaff_x21 != 0)) {
    return;
  }
  lVar8 = unaff_x20[0x10];
  if (lVar8 != 0) {
    lVar9 = unaff_x20[0xe];
    uVar3 = unaff_x20[0xf];
    lVar12 = unaff_x20[0x11];
    __ss6HasherV8_combineyySuF(8);
    uStack_78 = param_1[5];
    uStack_80 = param_1[4];
    uStack_68 = param_1[7];
    uStack_70 = param_1[6];
    uStack_60 = param_1[8];
    uStack_98 = param_1[1];
    uStack_a0 = *param_1;
    uStack_88 = param_1[3];
    uStack_90 = param_1[2];
    func_0x00023304(lVar9,uVar3);
    _swift_bridgeObjectRetain(lVar8);
    _swift_retain(lVar12);
    FUN_001705dc();
    if (unaff_x21 == 0) {
      uVar5 = (uint)(uVar3 >> 0x20);
      uVar6 = uVar5 >> 0x1e;
      if (uVar5 >> 0x1e < 2) {
        if (uVar6 == 0) {
          if ((uVar3 & 0xff000000000000) == 0) goto LAB_00163ed4;
        }
        else {
          lVar13 = (long)(int)lVar9;
          lVar7 = lVar9 >> 0x20;
LAB_00164104:
          if (lVar13 == lVar7) goto LAB_00163ed4;
        }
        __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_a0,lVar9,uVar3);
      }
      else if (uVar6 == 2) {
        lVar13 = *(long *)(lVar9 + 0x10);
        lVar7 = *(long *)(lVar9 + 0x18);
        goto LAB_00164104;
      }
    }
    else {
      _swift_errorRelease(unaff_x21);
    }
LAB_00163ed4:
    func_0x00186ac4(lVar9,uVar3,lVar8,lVar12);
    param_1[5] = uStack_78;
    param_1[4] = uStack_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
    param_1[8] = uStack_60;
    param_1[1] = uStack_98;
    *param_1 = uStack_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
  }
  lVar8 = unaff_x20[0x12];
  if (lVar8 != 0) {
    lVar9 = unaff_x20[0x14];
    lVar12 = unaff_x20[0x15];
    lVar13 = unaff_x20[0x13];
    __ss6HasherV8_combineyySuF(9);
    _swift_bridgeObjectRetain(lVar8);
    func_0x00023304(lVar13,lVar9);
    _swift_bridgeObjectRetain(lVar12);
    func_0x0014ceac(param_1,lVar8,lVar13,lVar9,lVar12);
    func_0x001864cc(lVar8,lVar13,lVar9,lVar12);
  }
  lVar9 = unaff_x20[1];
  lVar8 = *(long *)(lVar9 + 0x10);
  if (lVar8 != 0) {
    __ss6HasherV8_combineyySuF(10);
    __ss6HasherV8_combineyySuF(lVar8);
    puVar10 = (undefined4 *)(lVar9 + 0x20);
    do {
      __ss6HasherV8_combineyys6UInt32VF(*puVar10);
      lVar8 = lVar8 + -1;
      puVar10 = puVar10 + 1;
    } while (lVar8 != 0);
  }
  lVar9 = unaff_x20[2];
  lVar8 = *(long *)(lVar9 + 0x10);
  if (lVar8 != 0) {
    __ss6HasherV8_combineyySuF(0xb);
    __ss6HasherV8_combineyySuF(lVar8);
    puVar10 = (undefined4 *)(lVar9 + 0x20);
    do {
      __ss6HasherV8_combineyys6UInt32VF(*puVar10);
      lVar8 = lVar8 + -1;
      puVar10 = puVar10 + 1;
    } while (lVar8 != 0);
  }
  lVar8 = unaff_x20[0x17];
  if (lVar8 != 0) {
    lVar9 = unaff_x20[0x16];
    __ss6HasherV8_combineyySuF(0xc);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar9,lVar8);
  }
  bVar4 = *(byte *)(unaff_x20 + 0x18);
  if ((ulong)bVar4 != 0xc) {
    __ss6HasherV8_combineyySuF(0xe);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_007dfe58 + (ulong)bVar4 * 8));
  }
  lVar9 = unaff_x20[3];
  lVar8 = *(long *)(lVar9 + 0x10);
  if (lVar8 != 0) {
    __ss6HasherV8_combineyySuF(0xf);
    __ss6HasherV8_combineyySuF(lVar8);
    puVar11 = (undefined8 *)(lVar9 + 0x28);
    do {
      uVar1 = puVar11[-1];
      uVar2 = *puVar11;
      _swift_bridgeObjectRetain(uVar2);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      puVar11 = puVar11 + 2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  lVar8 = unaff_x20[8];
  uVar5 = (uint)((ulong)unaff_x20[9] >> 0x20);
  uVar6 = uVar5 >> 0x1e;
  if (uVar5 >> 0x1e < 2) {
    if (uVar6 == 0) {
      if ((unaff_x20[9] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_001640a0;
    }
    lVar9 = (long)(int)lVar8;
    lVar8 = lVar8 >> 0x20;
  }
  else {
    if (uVar6 != 2) {
      return;
    }
    lVar9 = *(long *)(lVar8 + 0x10);
    lVar8 = *(long *)(lVar8 + 0x18);
  }
  if (lVar9 == lVar8) {
    return;
  }
LAB_001640a0:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 0016412c; end: 001643c7;  */

void FUN_0016412c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  if (unaff_x20[0xb] != 0) {
    (**(code **)(param_3 + 0x70))(unaff_x20[10],unaff_x20[0xb],1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (unaff_x20[0xd] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[0xc],unaff_x20[0xd],2,param_2,param_3);
    }
    lVar1 = *unaff_x20;
    if (*(long *)(lVar1 + 0x10) != 0) {
      (**(code **)(param_3 + 0x100))(lVar1,3,param_2,param_3);
    }
    lVar2 = unaff_x20[4];
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      func_0x001870d0();
      (*pcVar3)(lVar2,4,&UNK_009b1938,lVar1,param_2,param_3);
      lVar1 = lVar2;
    }
    lVar2 = unaff_x20[5];
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      func_0x00187110();
      (*pcVar3)(lVar2,5,&UNK_009b1ec8,lVar1,param_2,param_3);
      lVar1 = lVar2;
    }
    lVar2 = unaff_x20[6];
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      func_0x00187150();
      (*pcVar3)(lVar2,6,&UNK_009b2050,lVar1,param_2,param_3);
      lVar1 = lVar2;
    }
    lVar2 = unaff_x20[7];
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      func_0x00187190();
      (*pcVar3)(lVar2,7,&UNK_009b1c78,lVar1,param_2,param_3);
    }
    FUN_001643c8();
    FUN_0016444c();
    if (*(long *)(unaff_x20[1] + 0x10) != 0) {
      (**(code **)(param_3 + 0xa8))(unaff_x20[1],10,param_2,param_3);
    }
    if (*(long *)(unaff_x20[2] + 0x10) != 0) {
      (**(code **)(param_3 + 0xa8))(unaff_x20[2],0xb,param_2,param_3);
    }
    if (unaff_x20[0x17] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[0x16],unaff_x20[0x17],0xc,param_2,param_3);
    }
    FUN_001644d0();
    if (*(long *)(unaff_x20[3] + 0x10) != 0) {
      (**(code **)(param_3 + 0x100))(unaff_x20[3],0xf,param_2,param_3);
    }
    FUN_0013ad2c(param_1,unaff_x20[8],unaff_x20[9],param_2,param_3);
  }
  return;
}



/* Entry: 001643c8; end: 0016444b;  */

void FUN_001643c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_50 = *(long *)(param_1 + 0x80);
  if (lStack_50 != 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x88);
    uStack_58 = *(undefined8 *)(param_1 + 0x78);
    uStack_60 = *(undefined8 *)(param_1 + 0x70);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_00187a94();
    (*pcVar1)(&uStack_60,8,&UNK_009b2170,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 0016444c; end: 001644cf;  */

void FUN_0016444c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_60 = *(long *)(param_1 + 0x90);
  if (lStack_60 != 0) {
    uStack_50 = *(undefined8 *)(param_1 + 0xa0);
    uStack_58 = *(undefined8 *)(param_1 + 0x98);
    uStack_48 = *(undefined8 *)(param_1 + 0xa8);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_00188b4c();
    (*pcVar1)(&lStack_60,9,&UNK_009b3238,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 001644d0; end: 00164543;  */

void FUN_001644d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  char cStack_31;
  
  cStack_31 = *(char *)(param_1 + 0xc0);
  if (cStack_31 != '\f') {
    pcVar1 = *(code **)(param_4 + 0x80);
    FUN_00192034();
    (*pcVar1)(&cStack_31,0xe,&UNK_009b16f0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 00164544; end: 00164547;  */

uint FUN_00164544(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_110 [32];
  ulong uStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  lVar4 = param_2[0xb];
  if (param_1[0xb] == 0) {
    if (lVar4 == 0) goto LAB_00183f04;
  }
  else if ((lVar4 != 0) &&
          ((uVar2 = param_1[10], uVar2 == param_2[10] && param_1[0xb] == lVar4 ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar2 & 1) != 0)))) {
LAB_00183f04:
    lVar4 = param_2[0xd];
    if (param_1[0xd] == 0) {
      if (lVar4 == 0) goto LAB_00183f40;
    }
    else if ((lVar4 != 0) &&
            (((uVar2 = param_1[0xc], uVar2 == param_2[0xc] && (param_1[0xd] == lVar4)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar2 & 1) != 0)))) {
LAB_00183f40:
      lVar5 = *param_1;
      lVar6 = *param_2;
      lVar4 = *(long *)(lVar5 + 0x10);
      if (lVar4 == *(long *)(lVar6 + 0x10)) {
        if (lVar4 != 0 && lVar5 != lVar6) {
          plVar9 = (long *)(lVar6 + 0x28);
          plVar10 = (long *)(lVar5 + 0x28);
          do {
            uVar2 = plVar10[-1];
            if ((uVar2 != plVar9[-1] || *plVar10 != *plVar9) &&
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar2 & 1) == 0)) goto LAB_001840f8;
            plVar9 = plVar9 + 2;
            plVar10 = plVar10 + 2;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        lVar5 = param_1[1];
        lVar6 = param_2[1];
        lVar4 = *(long *)(lVar5 + 0x10);
        if (lVar4 == *(long *)(lVar6 + 0x10)) {
          if (lVar4 != 0 && lVar5 != lVar6) {
            piVar7 = (int *)(lVar5 + 0x20);
            piVar8 = (int *)(lVar6 + 0x20);
            do {
              if (*piVar7 != *piVar8) goto LAB_001840f8;
              lVar4 = lVar4 + -1;
              piVar7 = piVar7 + 1;
              piVar8 = piVar8 + 1;
            } while (lVar4 != 0);
          }
          lVar5 = param_1[2];
          lVar6 = param_2[2];
          lVar4 = *(long *)(lVar5 + 0x10);
          if (lVar4 == *(long *)(lVar6 + 0x10)) {
            if (lVar4 != 0 && lVar5 != lVar6) {
              piVar7 = (int *)(lVar5 + 0x20);
              piVar8 = (int *)(lVar6 + 0x20);
              do {
                if (*piVar7 != *piVar8) goto LAB_001840f8;
                lVar4 = lVar4 + -1;
                piVar7 = piVar7 + 1;
                piVar8 = piVar8 + 1;
              } while (lVar4 != 0);
            }
            uVar2 = param_1[3];
            FUN_000aa78c(uVar2,param_2[3]);
            if ((uVar2 & 1) != 0) {
              uVar2 = param_1[4];
              FUN_001491f8(uVar2,param_2[4],FUN_00166030);
              if ((uVar2 & 1) != 0) {
                uVar2 = param_1[5];
                FUN_001491f8(uVar2,param_2[5],FUN_0016bd9c);
                if ((uVar2 & 1) != 0) {
                  uVar2 = param_1[6];
                  FUN_00148fd8(uVar2,param_2[6]);
                  if ((uVar2 & 1) != 0) {
                    uVar2 = param_1[7];
                    func_0x001490d8(uVar2,param_2[7]);
                    if ((uVar2 & 1) != 0) {
                      lVar5 = param_1[0xf];
                      uVar11 = param_1[0xe];
                      uVar14 = param_1[0x11];
                      uVar12 = param_1[0x10];
                      lVar4 = param_2[0xf];
                      uVar2 = param_2[0xe];
                      uVar15 = param_2[0x11];
                      uVar13 = param_2[0x10];
                      uStack_b0 = uVar2;
                      lStack_a8 = lVar4;
                      uStack_a0 = uVar13;
                      uStack_98 = uVar15;
                      uStack_90 = uVar11;
                      lStack_88 = lVar5;
                      uStack_80 = uVar12;
                      uStack_78 = uVar14;
                      if (uVar12 == 0) {
                        if (uVar13 != 0) goto LAB_00184124;
                        func_0x00187028(&uStack_90,&uStack_d0,0xaf0798,&UNK_007daf58);
                        func_0x00187028(&uStack_b0,&uStack_d0,0xaf0798,&UNK_007daf58);
                        func_0x00186ac4(uVar11,lVar5,0,uVar14);
LAB_001842a8:
                        uVar12 = param_1[0x13];
                        uVar11 = param_1[0x12];
                        uVar14 = param_1[0x15];
                        lVar5 = param_1[0x14];
                        uVar13 = param_2[0x13];
                        uVar2 = param_2[0x12];
                        uVar15 = param_2[0x15];
                        lVar4 = param_2[0x14];
                        uStack_f0 = uVar2;
                        uStack_e8 = uVar13;
                        lStack_e0 = lVar4;
                        uStack_d8 = uVar15;
                        uStack_d0 = uVar11;
                        uStack_c8 = uVar12;
                        lStack_c0 = lVar5;
                        uStack_b8 = uVar14;
                        if (uVar11 == 0) {
                          if (uVar2 != 0) goto LAB_0018437c;
                          func_0x00187028(&uStack_d0,auStack_110,0xaf07a0,&UNK_007daf60);
                          func_0x00187028(&uStack_f0,auStack_110,0xaf07a0,&UNK_007daf60);
                          func_0x001864cc(0,uVar12,lVar5,uVar14);
LAB_00184448:
                          lVar4 = param_2[0x17];
                          if (param_1[0x17] == 0) {
                            if (lVar4 == 0) goto LAB_00184484;
                          }
                          else if ((lVar4 != 0) &&
                                  (((uVar2 = param_1[0x16], uVar2 == param_2[0x16] &&
                                    (param_1[0x17] == lVar4)) ||
                                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                              (), (uVar2 & 1) != 0)))) {
LAB_00184484:
                            if ((char)param_1[0x18] == '\f') {
                              if ((char)param_2[0x18] == '\f') {
LAB_001844a8:
                                lVar4 = param_1[8];
                                FUN_00038814(lVar4,param_1[9],param_2[8],param_2[9]);
                                uVar1 = (uint)lVar4;
                                goto LAB_001840fc;
                              }
                            }
                            else if ((char)param_1[0x18] == (char)param_2[0x18]) goto LAB_001844a8;
                          }
                        }
                        else {
                          if (uVar2 == 0) {
LAB_0018437c:
                            func_0x00187028(&uStack_d0,auStack_110,0xaf07a0,&UNK_007daf60);
                            func_0x00187028(&uStack_f0,auStack_110,0xaf07a0,&UNK_007daf60);
                            func_0x001864cc(uVar11,uVar12,lVar5,uVar14);
                          }
                          else {
                            func_0x00187028(&uStack_d0,auStack_110,0xaf07a0,&UNK_007daf60);
                            func_0x00187028(&uStack_f0,auStack_110,0xaf07a0,&UNK_007daf60);
                            uVar3 = uVar11;
                            FUN_00149b3c(uVar11,uVar2);
                            if (((uVar3 & 1) != 0) &&
                               (uVar3 = uVar12, FUN_00038814(uVar12,lVar5,uVar13,lVar4),
                               (uVar3 & 1) != 0)) {
                              uVar3 = uVar14;
                              FUN_000e17c0(uVar14,uVar15);
                              func_0x001864cc(uVar2,uVar13,lVar4,uVar15);
                              func_0x001864cc(uVar11,uVar12,lVar5,uVar14);
                              if ((uVar3 & 1) != 0) goto LAB_00184448;
                              goto LAB_001840f8;
                            }
                            func_0x001864cc(uVar2,uVar13,lVar4,uVar15);
                            uVar2 = uVar11;
                            uVar13 = uVar12;
                            lVar4 = lVar5;
                            uVar15 = uVar14;
                          }
                          func_0x001864cc(uVar2,uVar13,lVar4,uVar15);
                        }
                      }
                      else {
                        if (uVar13 == 0) {
LAB_00184124:
                          func_0x00187028(&uStack_90,&uStack_d0,0xaf0798,&UNK_007daf58);
                          func_0x00187028(&uStack_b0,&uStack_d0,0xaf0798,&UNK_007daf58);
                          func_0x00186ac4(uVar11,lVar5,uVar12,uVar14);
                        }
                        else {
                          if (uVar14 == uVar15) {
                            func_0x00187028(&uStack_90,&uStack_d0,0xaf0798,&UNK_007daf58);
                            func_0x00187028(&uStack_b0,&uStack_d0,0xaf0798,&UNK_007daf58);
LAB_001841d4:
                            uVar3 = uVar11;
                            FUN_00038814(uVar11,lVar5,uVar2,lVar4);
                            if ((uVar3 & 1) != 0) {
                              uVar3 = uVar12;
                              FUN_000e17c0(uVar12,uVar13);
                              func_0x00186ac4(uVar2,lVar4,uVar13,uVar15);
                              func_0x00186ac4(uVar11,lVar5,uVar12,uVar14);
                              if ((uVar3 & 1) == 0) goto LAB_001840f8;
                              goto LAB_001842a8;
                            }
                          }
                          else {
                            func_0x00187028(&uStack_90,&uStack_d0,0xaf0798,&UNK_007daf58);
                            func_0x00187028(&uStack_b0,&uStack_d0,0xaf0798,&UNK_007daf58);
                            _swift_retain(uVar14);
                            _swift_retain(uVar15);
                            uVar3 = uVar14;
                            FUN_00171a74(uVar14,uVar15);
                            _swift_release(uVar15);
                            _swift_release(uVar14);
                            if ((uVar3 & 1) != 0) goto LAB_001841d4;
                          }
                          func_0x00186ac4(uVar2,lVar4,uVar13,uVar15);
                          uVar2 = uVar11;
                          lVar4 = lVar5;
                          uVar13 = uVar12;
                          uVar15 = uVar14;
                        }
                        func_0x00186ac4(uVar2,lVar4,uVar13,uVar15);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_001840f8:
  uVar1 = 0;
LAB_001840fc:
  return uVar1 & 1;
}



/* Entry: 00164548; end: 001645d7;  */

/* WARNING: Removing unreachable block (ram,0x00164598) */

void FUN_00164548(void)

{
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_00163d2c(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001645d8; end: 00164637;  */

void FUN_001645d8(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *param_1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[1] = puVar1;
  param_1[2] = puVar1;
  param_1[3] = puVar1;
  param_1[4] = puVar1;
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  param_1[7] = puVar1;
  param_1[9] = 0xc000000000000000;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0xc;
  return;
}



/* Entry: 00164638; end: 00164667;  */

undefined1  [16] FUN_00164638(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x40);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x40),
                  *(undefined8 *)(unaff_x20 + 0x48));
  return auVar1;
}



/* Entry: 00164668; end: 0016469b;  */

void FUN_00164668(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  return;
}



/* Entry: 0016469c; end: 001646af;  */

undefined1  [16] FUN_0016469c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = 0x1646ac;
  return auVar1;
}



/* Entry: 001646b0; end: 001646c3;  */

void FUN_001646b0(void)

{
  FUN_00163b34();
  return;
}



/* Entry: 001646c4; end: 00164723;  */

void FUN_001646c4(void)

{
  FUN_0016412c();
  return;
}



/* Entry: 00164724; end: 001647c3;  */

void FUN_00164724(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0d60 != -1) {
    _swift_once(0xaf0d60,FUN_001636ac);
  }
  uVar5 = uRam0000000000b64c68;
  uVar4 = uRam0000000000b64c60;
  uVar3 = uRam0000000000b64c58;
  uVar2 = uRam0000000000b64c50;
  uVar1 = uRam0000000000b64c48;
  *param_1 = uRam0000000000b64c40;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 001647c4; end: 001647ff;  */

void FUN_001647c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf22a8;
  uStack_18 = param_1;
  func_0x000115a8(0xaf22a8,&UNK_007dec88);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 00164800; end: 00164a4b;  */

/* WARNING: Removing unreachable block (ram,0x0016488c) */

void FUN_00164800(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  uStack_58 = unaff_x20[0x15];
  uStack_60 = unaff_x20[0x14];
  uStack_48 = unaff_x20[0x17];
  uStack_50 = unaff_x20[0x16];
  uStack_40 = *(undefined1 *)(unaff_x20 + 0x18);
  uStack_98 = unaff_x20[0xd];
  uStack_a0 = unaff_x20[0xc];
  uStack_88 = unaff_x20[0xf];
  uStack_90 = unaff_x20[0xe];
  uStack_78 = unaff_x20[0x11];
  uStack_80 = unaff_x20[0x10];
  uStack_68 = unaff_x20[0x13];
  uStack_70 = unaff_x20[0x12];
  uStack_d8 = unaff_x20[5];
  uStack_e0 = unaff_x20[4];
  uStack_c8 = unaff_x20[7];
  uStack_d0 = unaff_x20[6];
  uStack_b8 = unaff_x20[9];
  uStack_c0 = unaff_x20[8];
  uStack_a8 = unaff_x20[0xb];
  uStack_b0 = unaff_x20[10];
  uStack_f8 = unaff_x20[1];
  uStack_100 = *unaff_x20;
  uStack_e8 = unaff_x20[3];
  uStack_f0 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(&uStack_150,0);
  uStack_178 = uStack_128;
  uStack_180 = uStack_130;
  uStack_168 = uStack_118;
  uStack_170 = uStack_120;
  uStack_160 = uStack_110;
  uStack_198 = uStack_148;
  uStack_1a0 = uStack_150;
  uStack_188 = uStack_138;
  uStack_190 = uStack_140;
  FUN_00163d2c(&uStack_1a0);
  uStack_118 = uStack_168;
  uStack_120 = uStack_170;
  uStack_110 = uStack_160;
  uStack_138 = uStack_188;
  uStack_140 = uStack_190;
  uStack_128 = uStack_178;
  uStack_130 = uStack_180;
  uStack_148 = uStack_198;
  uStack_150 = uStack_1a0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00164a4c; end: 00164aeb;  */

uint FUN_00164a4c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
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
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uVar1 = 0;
  uStack_118 = param_1[0x15];
  uStack_120 = param_1[0x14];
  uStack_108 = param_1[0x17];
  uStack_110 = param_1[0x16];
  uStack_100 = *(undefined1 *)(param_1 + 0x18);
  uStack_158 = param_1[0xd];
  uStack_160 = param_1[0xc];
  uStack_148 = param_1[0xf];
  uStack_150 = param_1[0xe];
  uStack_138 = param_1[0x11];
  uStack_140 = param_1[0x10];
  uStack_128 = param_1[0x13];
  uStack_130 = param_1[0x12];
  uStack_198 = param_1[5];
  uStack_1a0 = param_1[4];
  uStack_188 = param_1[7];
  uStack_190 = param_1[6];
  uStack_178 = param_1[9];
  uStack_180 = param_1[8];
  uStack_168 = param_1[0xb];
  uStack_170 = param_1[10];
  uStack_1b8 = param_1[1];
  uStack_1c0 = *param_1;
  uStack_1a8 = param_1[3];
  uStack_1b0 = param_1[2];
  uStack_48 = param_2[0x15];
  uStack_50 = param_2[0x14];
  uStack_38 = param_2[0x17];
  uStack_40 = param_2[0x16];
  uStack_30 = *(undefined1 *)(param_2 + 0x18);
  uStack_88 = param_2[0xd];
  uStack_90 = param_2[0xc];
  uStack_78 = param_2[0xf];
  uStack_80 = param_2[0xe];
  uStack_68 = param_2[0x11];
  uStack_70 = param_2[0x10];
  uStack_58 = param_2[0x13];
  uStack_60 = param_2[0x12];
  uStack_c8 = param_2[5];
  uStack_d0 = param_2[4];
  uStack_b8 = param_2[7];
  uStack_c0 = param_2[6];
  uStack_a8 = param_2[9];
  uStack_b0 = param_2[8];
  uStack_98 = param_2[0xb];
  uStack_a0 = param_2[10];
  uStack_e8 = param_2[1];
  uStack_f0 = *param_2;
  uStack_d8 = param_2[3];
  uStack_e0 = param_2[2];
  FUN_00164544(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 00164aec; end: 00164b13;  */

undefined * FUN_00164aec(void)

{
  return &UNK_009afb20;
}



/* Entry: 00164b14; end: 00164bd3;  */

void FUN_00164b14(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007dfbb0,0x82,&uStack_48,&lStack_40);
  puRam0000000000b64c78 = puStack_38;
  lRam0000000000b64c70 = lStack_40;
  puRam0000000000b64c88 = puStack_28;
  puRam0000000000b64c80 = puStack_30;
  puRam0000000000b64c98 = puStack_18;
  puRam0000000000b64c90 = puStack_20;
  return;
}



/* Entry: 00164bd4; end: 00164c73;  */

void FUN_00164bd4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0d88 != -1) {
    _swift_once(0xaf0d88,FUN_00164b14);
  }
  uVar5 = uRam0000000000b64c98;
  uVar4 = uRam0000000000b64c90;
  uVar3 = uRam0000000000b64c88;
  uVar2 = uRam0000000000b64c80;
  uVar1 = uRam0000000000b64c78;
  *param_1 = uRam0000000000b64c70;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00164c74; end: 00164d6f;  */

void FUN_00164c74(void)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = 0;
  FUN_00186514();
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar2 + 0x20) = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar2 + 0x28) = puVar1;
  *(undefined **)(lVar2 + 0x30) = puVar1;
  *(undefined **)(lVar2 + 0x38) = puVar1;
  *(undefined **)(lVar2 + 0x40) = puVar1;
  *(undefined **)(lVar2 + 0x48) = puVar1;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined **)(lVar2 + 0x98) = puVar1;
  *(undefined **)(lVar2 + 0xa0) = puVar1;
  *(undefined1 *)(lVar2 + 0xa8) = 3;
  lRam0000000000af07c0 = lVar2;
  return;
}



/* Entry: 00164d70; end: 00164d77;  */

undefined8 FUN_00164d70(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_158 [24];
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_3 + 0x20,auStack_78,0,0);
  uVar1 = *(ulong *)(param_3 + 0x20);
  uVar8 = uVar1;
  _swift_bridgeObjectRetain();
  func_0x0014c1ec();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar8;
  FUN_000f846c();
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_3 + 0x28,auStack_90,0,0);
  uVar1 = *(ulong *)(param_3 + 0x28);
  uVar8 = uVar1;
  _swift_bridgeObjectRetain();
  func_0x0014c1ec();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar8;
  FUN_000f846c();
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_3 + 0x30,auStack_a8,0,0);
  uVar1 = *(ulong *)(param_3 + 0x30);
  uVar8 = uVar1;
  _swift_bridgeObjectRetain();
  func_0x0014c8fc();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar8;
  FUN_000f846c();
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_3 + 0x38,auStack_c0,0,0);
  uVar1 = *(ulong *)(param_3 + 0x38);
  uVar8 = uVar1;
  _swift_bridgeObjectRetain();
  func_0x0014c8fc();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar8;
  FUN_000f846c();
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_3 + 0x40,auStack_d8,0,0);
  uVar1 = *(ulong *)(param_3 + 0x40);
  uVar8 = uVar1;
  _swift_bridgeObjectRetain();
  func_0x0014c668();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar8;
  FUN_000f846c();
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_3 + 0x48,auStack_f0,0,0);
  uVar1 = *(ulong *)(param_3 + 0x48);
  uVar8 = uVar1;
  _swift_bridgeObjectRetain();
  func_0x0014c7bc();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar8;
  FUN_000f846c();
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_3 + 0x50,auStack_158,0,0);
  uVar3 = *(undefined8 *)(param_3 + 0x78);
  uStack_120 = *(undefined8 *)(param_3 + 0x70);
  uVar7 = *(ulong *)(param_3 + 0x88);
  uVar5 = *(undefined8 *)(param_3 + 0x80);
  uVar2 = *(undefined8 *)(param_3 + 0x90);
  uVar4 = *(undefined8 *)(param_3 + 0x58);
  uVar1 = *(ulong *)(param_3 + 0x50);
  uVar8 = *(ulong *)(param_3 + 0x68);
  uVar6 = *(undefined8 *)(param_3 + 0x60);
  if (uVar1 == 0) {
    return 1;
  }
  uStack_140 = uVar1;
  uStack_138 = uVar4;
  uStack_130 = uVar6;
  uStack_128 = uVar8;
  uStack_118 = uVar3;
  uStack_110 = uVar5;
  uStack_108 = uVar7;
  uStack_100 = uVar2;
  _swift_bridgeObjectRetain(uVar1);
  func_0x00023304(uVar4,uVar6);
  _swift_bridgeObjectRetain(uVar8);
  func_0x001869f8(uVar3,uVar5,uVar7,uVar2);
  FUN_000e1a94();
  if ((uVar8 & 1) == 0) {
LAB_00165064:
    func_0x00191ff4(&uStack_140,0xaefe60,&UNK_007d9c38);
  }
  else {
    if (uVar7 != 0) {
      func_0x00023304(uVar3,uVar5);
      uVar8 = uVar7;
      _swift_bridgeObjectRetain();
      FUN_000e1a94();
      FUN_00116294(uVar3,uVar5,uVar7,uVar2);
      if ((uVar8 & 1) == 0) goto LAB_00165064;
    }
    func_0x0014be00();
    uVar8 = uVar1;
    FUN_000f846c();
    func_0x00191ff4(&uStack_140,0xaefe60,&UNK_007d9c38);
    _swift_bridgeObjectRelease(uVar1);
    if ((uVar8 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 00164d78; end: 0016509f;  */

undefined8 FUN_00164d78(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_158 [24];
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x20,auStack_78,0,0);
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar8 = uVar1;
  _swift_bridgeObjectRetain();
  func_0x0014c1ec();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar8;
  FUN_000f846c();
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_1 + 0x28,auStack_90,0,0);
  uVar1 = *(ulong *)(param_1 + 0x28);
  uVar8 = uVar1;
  _swift_bridgeObjectRetain();
  func_0x0014c1ec();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar8;
  FUN_000f846c();
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_1 + 0x30,auStack_a8,0,0);
  uVar1 = *(ulong *)(param_1 + 0x30);
  uVar8 = uVar1;
  _swift_bridgeObjectRetain();
  func_0x0014c8fc();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar8;
  FUN_000f846c();
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_1 + 0x38,auStack_c0,0,0);
  uVar1 = *(ulong *)(param_1 + 0x38);
  uVar8 = uVar1;
  _swift_bridgeObjectRetain();
  func_0x0014c8fc();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar8;
  FUN_000f846c();
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_1 + 0x40,auStack_d8,0,0);
  uVar1 = *(ulong *)(param_1 + 0x40);
  uVar8 = uVar1;
  _swift_bridgeObjectRetain();
  func_0x0014c668();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar8;
  FUN_000f846c();
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_1 + 0x48,auStack_f0,0,0);
  uVar1 = *(ulong *)(param_1 + 0x48);
  uVar8 = uVar1;
  _swift_bridgeObjectRetain();
  func_0x0014c7bc();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar8;
  FUN_000f846c();
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_1 + 0x50,auStack_158,0,0);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  uStack_120 = *(undefined8 *)(param_1 + 0x70);
  uVar7 = *(ulong *)(param_1 + 0x88);
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  uVar1 = *(ulong *)(param_1 + 0x50);
  uVar8 = *(ulong *)(param_1 + 0x68);
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  if (uVar1 == 0) {
    return 1;
  }
  uStack_140 = uVar1;
  uStack_138 = uVar4;
  uStack_130 = uVar6;
  uStack_128 = uVar8;
  uStack_118 = uVar3;
  uStack_110 = uVar5;
  uStack_108 = uVar7;
  uStack_100 = uVar2;
  _swift_bridgeObjectRetain(uVar1);
  func_0x00023304(uVar4,uVar6);
  _swift_bridgeObjectRetain(uVar8);
  func_0x001869f8(uVar3,uVar5,uVar7,uVar2);
  FUN_000e1a94();
  if ((uVar8 & 1) == 0) {
LAB_00165064:
    func_0x00191ff4(&uStack_140,0xaefe60,&UNK_007d9c38);
  }
  else {
    if (uVar7 != 0) {
      func_0x00023304(uVar3,uVar5);
      uVar8 = uVar7;
      _swift_bridgeObjectRetain();
      FUN_000e1a94();
      FUN_00116294(uVar3,uVar5,uVar7,uVar2);
      if ((uVar8 & 1) == 0) goto LAB_00165064;
    }
    func_0x0014be00();
    uVar8 = uVar1;
    FUN_000f846c();
    func_0x00191ff4(&uStack_140,0xaefe60,&UNK_007d9c38);
    _swift_bridgeObjectRelease(uVar1);
    if ((uVar8 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 001650a0; end: 001650cf;  */

void FUN_001650a0(void)

{
  FUN_0016b2d4();
  return;
}



/* Entry: 001650d0; end: 0016530b;  */

/* WARNING: Removing unreachable block (ram,0x00165208) */
/* WARNING: Removing unreachable block (ram,0x00165224) */
/* WARNING: Removing unreachable block (ram,0x001652d0) */
/* WARNING: Removing unreachable block (ram,0x00165308) */
/* WARNING: Removing unreachable block (ram,0x0016525c) */
/* WARNING: Removing unreachable block (ram,0x001652a4) */
/* WARNING: Removing unreachable block (ram,0x00165240) */
/* WARNING: Removing unreachable block (ram,0x00165280) */
/* WARNING: Removing unreachable block (ram,0x001652ec) */

void FUN_001650d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_78 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
  uVar1 = param_3;
  lVar2 = param_4;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        _swift_beginAccess(param_1 + 0x10,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x158);
        lVar2 = param_1 + 0x10;
        goto code_r0x001651e4;
      case 2:
        FUN_0016b560(param_2,param_1,param_3,param_4,0x187190,&UNK_009b1c78);
        break;
      case 3:
        FUN_0016530c(param_2,param_1,param_3,param_4);
        break;
      case 4:
        FUN_001653a0(param_2,param_1,param_3,param_4);
        break;
      case 5:
        FUN_00165434(param_2,param_1,param_3,param_4);
        break;
      case 6:
        FUN_00173e7c(param_2,param_1,param_3,param_4,0x187190,&UNK_009b1c78);
        break;
      case 7:
        FUN_00173fb0(param_2,param_1,param_3,param_4,FUN_00187af8,&UNK_009b2288);
        break;
      case 8:
        FUN_001654c8(param_2,param_1,param_3,param_4);
        break;
      case 9:
        FUN_0016555c(param_2,param_1,param_3,param_4);
        break;
      case 10:
        _swift_beginAccess(param_1 + 0xa0,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x160);
        lVar2 = param_1 + 0xa0;
code_r0x001651e4:
        (*pcVar3)(lVar2,param_3,param_4);
        _swift_endAccess(auStack_78);
        break;
      case 0xb:
        FUN_001655f0(param_2,param_1,param_3,param_4);
      }
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 0016530c; end: 0016539f;  */

void FUN_0016530c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x30;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x001870d0();
  (*pcVar2)(param_2 + 0x30,&UNK_009b1938,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 001653a0; end: 00165433;  */

void FUN_001653a0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x38;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x00187110();
  (*pcVar2)(param_2 + 0x38,&UNK_009b1ec8,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 00165434; end: 001654c7;  */

void FUN_00165434(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x40;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x00189080();
  (*pcVar2)(param_2 + 0x40,&UNK_009b19b8,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 001654c8; end: 0016555b;  */

void FUN_001654c8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x48;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x001895ec();
  (*pcVar2)(param_2 + 0x48,&UNK_009b1e40,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 0016555c; end: 001655ef;  */

void FUN_0016555c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x98;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x001891bc();
  (*pcVar2)(param_2 + 0x98,&UNK_009b1a40,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 001655f0; end: 00165683;  */

void FUN_001655f0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xa8;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x188);
  func_0x001924f0();
  (*pcVar2)(param_2 + 0xa8,&UNK_009b1780,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 00165684; end: 0016569f;  */

void FUN_00165684(void)

{
  FUN_0016b744();
  return;
}



/* Entry: 001656a0; end: 00165ad3;  */

void FUN_001656a0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long unaff_x21;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [72];
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _swift_beginAccess(param_1 + 0x10,auStack_b8,0,0);
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    __ss6HasherV8_combineyySuF(1);
    _swift_bridgeObjectRetain(lVar3);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_beginAccess(param_1 + 0x20,auStack_d0,0,0);
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar3 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar3);
    FUN_0019d61c();
    if (unaff_x21 != 0) {
      _swift_bridgeObjectRelease(lVar3);
      return;
    }
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_beginAccess(param_1 + 0x30,auStack_e8,0,0);
  lVar3 = *(long *)(param_1 + 0x30);
  if (*(long *)(lVar3 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar3);
    FUN_0019ed54();
    _swift_bridgeObjectRelease(lVar3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0x38,auStack_100,0,0);
  lVar3 = *(long *)(param_1 + 0x38);
  if (*(long *)(lVar3 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar3);
    FUN_0019e52c();
    _swift_bridgeObjectRelease(lVar3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0x40,auStack_118,0,0);
  lVar3 = *(long *)(param_1 + 0x40);
  if (*(long *)(lVar3 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar3);
    FUN_0019f5d8();
    _swift_bridgeObjectRelease(lVar3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0x28,auStack_130,0,0);
  lVar3 = *(long *)(param_1 + 0x28);
  if (*(long *)(lVar3 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar3);
    FUN_0019d61c();
    _swift_bridgeObjectRelease(lVar3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0x50,auStack_198,0,0);
  uStack_178 = *(undefined8 *)(param_1 + 0x58);
  lStack_180 = *(long *)(param_1 + 0x50);
  uStack_168 = *(undefined8 *)(param_1 + 0x68);
  uStack_170 = *(undefined8 *)(param_1 + 0x60);
  uStack_158 = *(undefined8 *)(param_1 + 0x78);
  uStack_160 = *(undefined8 *)(param_1 + 0x70);
  uStack_148 = *(undefined8 *)(param_1 + 0x88);
  uStack_150 = *(undefined8 *)(param_1 + 0x80);
  uStack_140 = *(undefined8 *)(param_1 + 0x90);
  if (lStack_180 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x78);
    uStack_80 = *(undefined8 *)(param_1 + 0x70);
    uStack_68 = *(undefined8 *)(param_1 + 0x88);
    uStack_70 = *(undefined8 *)(param_1 + 0x80);
    uStack_60 = *(undefined8 *)(param_1 + 0x90);
    uStack_98 = *(undefined8 *)(param_1 + 0x58);
    uStack_a0 = *(undefined8 *)(param_1 + 0x50);
    uStack_88 = *(undefined8 *)(param_1 + 0x68);
    uStack_90 = *(undefined8 *)(param_1 + 0x60);
    __ss6HasherV8_combineyySuF(7);
    uStack_238 = param_2[5];
    uStack_240 = param_2[4];
    uStack_228 = param_2[7];
    uStack_230 = param_2[6];
    uStack_220 = param_2[8];
    uStack_258 = param_2[1];
    uStack_260 = *param_2;
    uStack_248 = param_2[3];
    uStack_250 = param_2[2];
    uStack_1e8 = uStack_158;
    uStack_1f0 = uStack_160;
    uStack_1d8 = uStack_148;
    uStack_1e0 = uStack_150;
    uStack_1d0 = uStack_140;
    uStack_208 = uStack_178;
    lStack_210 = lStack_180;
    uStack_1f8 = uStack_168;
    uStack_200 = uStack_170;
    FUN_00186938(&lStack_210,auStack_2a8);
    FUN_00172ac0(&uStack_260);
    if (unaff_x21 != 0) {
      _swift_errorRelease(unaff_x21);
      unaff_x21 = 0;
    }
    func_0x00191ff4(&lStack_180,0xaefe60,&UNK_007d9c38);
    param_2[5] = uStack_238;
    param_2[4] = uStack_240;
    param_2[7] = uStack_228;
    param_2[6] = uStack_230;
    param_2[8] = uStack_220;
    param_2[1] = uStack_258;
    *param_2 = uStack_260;
    param_2[3] = uStack_248;
    param_2[2] = uStack_250;
  }
  _swift_beginAccess(param_1 + 0x48,&lStack_210,0,0);
  lVar3 = *(long *)(param_1 + 0x48);
  if (*(long *)(lVar3 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar3);
    FUN_0019f098();
    _swift_bridgeObjectRelease(lVar3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0x98,auStack_2a8,0,0);
  lVar3 = *(long *)(param_1 + 0x98);
  if (*(long *)(lVar3 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar3);
    func_0x001a9f10();
    _swift_bridgeObjectRelease(lVar3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0xa0,auStack_1b0,0,0);
  lVar3 = *(long *)(param_1 + 0xa0);
  if (*(long *)(lVar3 + 0x10) != 0) {
    __ss6HasherV8_combineyySuF(10);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar3 + 0x10));
    lVar5 = *(long *)(lVar3 + 0x10);
    if (lVar5 != 0) {
      _swift_bridgeObjectRetain(lVar3);
      puVar6 = (undefined8 *)(lVar3 + 0x28);
      do {
        uVar4 = puVar6[-1];
        uVar1 = *puVar6;
        _swift_bridgeObjectRetain(uVar1);
        __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,uVar1);
        _swift_bridgeObjectRelease(uVar1);
        puVar6 = puVar6 + 2;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      _swift_bridgeObjectRelease(lVar3);
    }
  }
  _swift_beginAccess(param_1 + 0xa8,auStack_1c8,0,0);
  cVar2 = *(char *)(param_1 + 0xa8);
  if (cVar2 != '\x03') {
    __ss6HasherV8_combineyySuF(0xb);
    __ss6HasherV8_combineyySuF(cVar2);
  }
  return;
}



/* Entry: 00165ad4; end: 00165ecf;  */

/* WARNING: Removing unreachable block (ram,0x00165b88) */
/* WARNING: Removing unreachable block (ram,0x00165b8c) */

void FUN_00165ad4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  code *pcVar2;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  FUN_00170e74();
  if (unaff_x21 == 0) {
    _swift_beginAccess(param_1 + 0x20,auStack_68,0,0);
    lVar1 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 0x118);
      func_0x00187190();
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    _swift_beginAccess(param_1 + 0x30,auStack_80,0,0);
    lVar1 = *(long *)(param_1 + 0x30);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 0x118);
      func_0x001870d0();
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    _swift_beginAccess(param_1 + 0x38,auStack_98,0,0);
    lVar1 = *(long *)(param_1 + 0x38);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 0x118);
      func_0x00187110();
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    _swift_beginAccess(param_1 + 0x40,auStack_b0,0,0);
    lVar1 = *(long *)(param_1 + 0x40);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 0x118);
      func_0x00189080();
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    _swift_beginAccess(param_1 + 0x28,auStack_c8,0,0);
    lVar1 = *(long *)(param_1 + 0x28);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 0x118);
      func_0x00187190();
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    FUN_00165ed0(param_1,param_2,param_3,param_4);
    _swift_beginAccess(param_1 + 0x48,auStack_e0,0,0);
    lVar1 = *(long *)(param_1 + 0x48);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 0x118);
      func_0x001895ec();
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    _swift_beginAccess(param_1 + 0x98,auStack_f8,0,0);
    lVar1 = *(long *)(param_1 + 0x98);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 0x118);
      func_0x001891bc();
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    _swift_beginAccess(param_1 + 0xa0,auStack_110,0,0);
    lVar1 = *(long *)(param_1 + 0xa0);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 0x100);
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    FUN_00165f88(param_1,param_2,param_3,param_4);
  }
  return;
}



/* Entry: 00165ed0; end: 00165f87;  */

void FUN_00165ed0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x50;
  _swift_beginAccess(lVar1,auStack_58,0,0);
  lStack_a0 = *(long *)(param_1 + 0x50);
  if (lStack_a0 != 0) {
    uStack_90 = *(undefined8 *)(param_1 + 0x60);
    uStack_98 = *(undefined8 *)(param_1 + 0x58);
    uStack_80 = *(undefined8 *)(param_1 + 0x70);
    uStack_88 = *(undefined8 *)(param_1 + 0x68);
    uStack_70 = *(undefined8 *)(param_1 + 0x80);
    uStack_78 = *(undefined8 *)(param_1 + 0x78);
    uStack_60 = *(undefined8 *)(param_1 + 0x90);
    uStack_68 = *(undefined8 *)(param_1 + 0x88);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_00187af8();
    (*pcVar2)(&lStack_a0,7,&UNK_009b2288,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 00165f88; end: 00166023;  */

void FUN_00165f88(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  char cStack_31;
  
  lVar1 = param_1 + 0xa8;
  _swift_beginAccess(lVar1,auStack_58,0,0);
  cStack_31 = *(char *)(param_1 + 0xa8);
  if (cStack_31 != '\x03') {
    pcVar2 = *(code **)(param_4 + 0x80);
    func_0x001924f0();
    (*pcVar2)(&cStack_31,0xb,&UNK_009b1780,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 00166024; end: 0016602f;  */

ulong FUN_00166024(long param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,ulong param_6
                  )

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *unaff_x20;
  ulong uVar16;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  if (param_3 != param_6) {
    _swift_retain(param_3);
    _swift_retain(param_6);
    uVar12 = param_3;
    FUN_00166030(param_3,param_6);
    _swift_release(param_6);
    _swift_release(param_3);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  uVar3 = (uint)(param_5 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar5 = (int)param_1;
  if ((ulong)param_2 >> 0x3e == 3) {
    uVar12 = 0;
    if ((((param_1 != 0) || (param_2 != (byte *)0xc000000000000000)) || (param_5 >> 0x3e < 3)) ||
       ((uVar12 = 0, param_4 != 0 || (param_5 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar10 == 0) {
        uVar12 = (ulong)param_2 >> 0x30 & 0xff;
      }
      else {
        iVar11 = (int)((ulong)param_1 >> 0x20);
        if (SBORROW4(iVar11,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar12 = (ulong)(iVar11 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar13 != 2) {
        uVar12 = (ulong)(uVar12 == 0);
        goto LAB_00038af8;
      }
      uVar14 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
      if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar12 != uVar14) {
LAB_0003899c:
        uVar12 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar10 == 2) {
        uVar12 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar12 = 0;
      if (1 < uVar13) goto LAB_00038898;
LAB_000388cc:
      if (uVar13 == 0) {
        uVar14 = param_5 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar11 = (int)((ulong)param_4 >> 0x20);
      if (SBORROW4(iVar11,(int)param_4)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar12 != (long)(iVar11 - (int)param_4)) goto LAB_0003899c;
    }
    if (0 < (long)uVar12) {
      if (uVar10 < 2) {
        if (uVar10 == 0) {
          abStack_70[0] = (byte)param_1;
          abStack_70[1] = (byte)((ulong)param_1 >> 8);
          abStack_70[2] = (byte)((ulong)param_1 >> 0x10);
          abStack_70[3] = (byte)((ulong)param_1 >> 0x18);
          abStack_70[4] = (byte)((ulong)param_1 >> 0x20);
          abStack_70[5] = (byte)((ulong)param_1 >> 0x28);
          abStack_70[6] = (byte)((ulong)param_1 >> 0x30);
          abStack_70[7] = (byte)((ulong)param_1 >> 0x38);
          abStack_70[8] = (byte)param_2;
          abStack_70[9] = (byte)((ulong)param_2 >> 8);
          abStack_70[10] = (byte)((ulong)param_2 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)param_2 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)param_2 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)param_2 >> 0x28);
          param_2 = abStack_70 + ((ulong)param_2 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar12 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        lVar6 = (param_1 >> 0x20) - lVar17;
        if (param_1 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (param_1 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          param_1 = 0;
        }
        else {
          lVar7 = param_1;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          param_1 = (lVar17 - lVar7) + param_1;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (param_1 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar9 = (byte *)(lVar7 + param_1);
            goto LAB_00038aec;
          }
        }
        pbVar9 = (byte *)0x0;
      }
      else {
        if (uVar10 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          param_2 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(param_1 + 0x10);
        lVar7 = *(long *)(param_1 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = param_1;
        if (param_1 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          param_1 = (lVar17 - lVar6) + param_1;
        }
        lVar1 = lVar7 - lVar17;
        if (SBORROW8(lVar7,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (param_1 == 0) {
          pbVar9 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar9 = (byte *)(lVar6 + param_1);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)param_2 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,param_1,pbVar9,param_4,param_5);
      uVar12 = (ulong)abStack_70[0];
      param_2 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar12 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar12;
  }
  ___stack_chk_fail();
  lVar6 = (long)param_2 - uVar12;
  if (SBORROW8((long)param_2,uVar12)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar16 = *unaff_x20;
  uVar15 = uVar16 & 0xffffffffffffff8;
  uVar12 = uVar15 + 0x20 + uVar12 * 8;
  uVar8 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar14 = uVar12;
  _swift_arrayDestroy(uVar12,lVar6,uVar8);
  lVar17 = param_4 - lVar6;
  if (SBORROW8(param_4,lVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar17 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar15 + 0x10);
      lVar6 = uVar14 - (long)param_2;
    }
    else {
      uVar14 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar6 = uVar14 - (long)param_2;
    }
    if (SBORROW8(uVar14,(long)param_2)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar12 = uVar12 + param_4 * 8;
    uVar14 = uVar15 + 0x20 + (long)param_2 * 8;
    if (uVar12 != uVar14 || uVar14 + lVar6 * 8 <= uVar12) {
      _memmove(uVar12,uVar14,lVar6 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar15 + 0x10);
    }
    else {
      uVar14 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar14,lVar17)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar15 + 0x10) = uVar14 + lVar17;
  }
  if (0 < param_4) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar14;
}



/* Entry: 00166030; end: 0016665f;  */

undefined8 FUN_00166030(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  char cVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auStack_4a8 [72];
  long lStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined1 auStack_418 [24];
  undefined1 auStack_400 [24];
  undefined1 auStack_3e8 [24];
  long lStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long lStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [24];
  undefined1 auStack_298 [24];
  long lStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _swift_beginAccess(param_1 + 0x10,auStack_a8,0,0);
  uVar7 = *(ulong *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  _swift_beginAccess(param_2 + 0x10,auStack_c0,0,0);
  lVar5 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    if (lVar5 != 0) {
      return 0;
    }
  }
  else {
    if (lVar5 == 0) {
      return 0;
    }
    if ((uVar7 != *(ulong *)(param_2 + 0x10) || lVar1 != lVar5) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar7,lVar1,*(ulong *)(param_2 + 0x10),lVar5,0), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  _swift_beginAccess(param_1 + 0x20,auStack_d8,0,0);
  uVar6 = *(ulong *)(param_1 + 0x20);
  _swift_beginAccess(param_2 + 0x20,auStack_f0,0,0);
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar8);
  uVar7 = uVar6;
  func_0x001490d8(uVar6,uVar8);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_1 + 0x28,auStack_108,0,0);
  uVar6 = *(ulong *)(param_1 + 0x28);
  _swift_beginAccess(param_2 + 0x28,auStack_120,0,0);
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar8);
  uVar7 = uVar6;
  func_0x001490d8(uVar6,uVar8);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_1 + 0x30,auStack_138,0,0);
  uVar6 = *(ulong *)(param_1 + 0x30);
  _swift_beginAccess(param_2 + 0x30,auStack_150,0,0);
  uVar8 = *(undefined8 *)(param_2 + 0x30);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar8);
  uVar7 = uVar6;
  FUN_001491f8(uVar6,uVar8,FUN_00166030);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_1 + 0x38,auStack_168,0,0);
  uVar6 = *(ulong *)(param_1 + 0x38);
  _swift_beginAccess(param_2 + 0x38,auStack_180,0,0);
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar8);
  uVar7 = uVar6;
  FUN_001491f8(uVar6,uVar8,FUN_0016bd9c);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_1 + 0x40,auStack_198,0,0);
  uVar6 = *(ulong *)(param_1 + 0x40);
  _swift_beginAccess(param_2 + 0x40,auStack_1b0,0,0);
  uVar8 = *(undefined8 *)(param_2 + 0x40);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar8);
  uVar7 = uVar6;
  func_0x00149db0(uVar6,uVar8);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_1 + 0x48,auStack_1c8,0,0);
  uVar6 = *(ulong *)(param_1 + 0x48);
  _swift_beginAccess(param_2 + 0x48,auStack_1e0,0,0);
  uVar8 = *(undefined8 *)(param_2 + 0x48);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar8);
  uVar7 = uVar6;
  func_0x0014a49c(uVar6,uVar8);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_1 + 0x50,auStack_298,0,0);
  _swift_beginAccess(param_2 + 0x50,auStack_2b0,0,0);
  uStack_318 = *(undefined8 *)(param_1 + 0x78);
  uStack_320 = *(undefined8 *)(param_1 + 0x70);
  uStack_308 = *(undefined8 *)(param_1 + 0x88);
  uStack_310 = *(undefined8 *)(param_1 + 0x80);
  uStack_300 = *(undefined8 *)(param_1 + 0x90);
  uStack_338 = *(undefined8 *)(param_1 + 0x58);
  lStack_340 = *(long *)(param_1 + 0x50);
  uStack_328 = *(undefined8 *)(param_1 + 0x68);
  uStack_330 = *(undefined8 *)(param_1 + 0x60);
  uStack_228 = *(undefined8 *)(param_2 + 0x58);
  uStack_230 = *(undefined8 *)(param_2 + 0x50);
  uStack_370 = *(undefined8 *)(param_2 + 0x68);
  uStack_378 = *(undefined8 *)(param_2 + 0x60);
  uStack_1f0 = *(undefined8 *)(param_2 + 0x90);
  uStack_208 = *(undefined8 *)(param_2 + 0x78);
  uStack_210 = *(undefined8 *)(param_2 + 0x70);
  uStack_1f8 = *(undefined8 *)(param_2 + 0x88);
  uStack_200 = *(undefined8 *)(param_2 + 0x80);
  uStack_218 = *(undefined8 *)(param_2 + 0x68);
  uStack_220 = *(undefined8 *)(param_2 + 0x60);
  uStack_360 = *(undefined8 *)(param_2 + 0x78);
  uStack_368 = *(undefined8 *)(param_2 + 0x70);
  uStack_380 = *(undefined8 *)(param_2 + 0x58);
  lStack_388 = *(long *)(param_2 + 0x50);
  uStack_350 = *(undefined8 *)(param_2 + 0x88);
  uStack_358 = *(undefined8 *)(param_2 + 0x80);
  uStack_348 = *(undefined8 *)(param_2 + 0x90);
  lStack_2f8 = lStack_388;
  uStack_2f0 = uStack_380;
  uStack_2e8 = uStack_378;
  uStack_2e0 = uStack_370;
  uStack_2d8 = uStack_368;
  uStack_2d0 = uStack_360;
  uStack_2c8 = uStack_358;
  uStack_2c0 = uStack_350;
  uStack_2b8 = uStack_348;
  lStack_280 = lStack_340;
  uStack_278 = uStack_338;
  uStack_270 = uStack_330;
  uStack_268 = uStack_328;
  uStack_260 = uStack_320;
  uStack_258 = uStack_318;
  uStack_250 = uStack_310;
  uStack_248 = uStack_308;
  uStack_240 = uStack_300;
  if (lStack_340 == 0) {
    if (lStack_388 != 0) goto LAB_0016646c;
    uStack_3a8 = *(undefined8 *)(param_1 + 0x78);
    uStack_3b0 = *(undefined8 *)(param_1 + 0x70);
    uStack_398 = *(undefined8 *)(param_1 + 0x88);
    uStack_3a0 = *(undefined8 *)(param_1 + 0x80);
    uStack_390 = *(undefined8 *)(param_1 + 0x90);
    uStack_3c8 = *(undefined8 *)(param_1 + 0x58);
    lStack_3d0 = *(long *)(param_1 + 0x50);
    uStack_3b8 = *(undefined8 *)(param_1 + 0x68);
    uStack_3c0 = *(undefined8 *)(param_1 + 0x60);
    func_0x00187028(&lStack_280,&uStack_90,0xaefe60,&UNK_007d9c38);
    func_0x00187028(&uStack_230,&uStack_90,0xaefe60,&UNK_007d9c38);
    func_0x00191ff4(&lStack_3d0,0xaefe60,&UNK_007d9c38);
  }
  else {
    if (lStack_388 == 0) {
LAB_0016646c:
      lStack_3d0 = lStack_340;
      uStack_3c8 = uStack_338;
      uStack_3c0 = uStack_330;
      uStack_3b8 = uStack_328;
      uStack_3b0 = uStack_320;
      uStack_3a8 = uStack_318;
      uStack_3a0 = uStack_310;
      uStack_398 = uStack_308;
      uStack_390 = uStack_300;
      func_0x00187028(&lStack_280,&uStack_90,0xaefe60,&UNK_007d9c38);
      func_0x00187028(&uStack_230,&uStack_90,0xaefe60,&UNK_007d9c38);
      func_0x00191ff4(&lStack_3d0,0xaf07a8,&UNK_007daf70);
      return 0;
    }
    uStack_438 = *(undefined8 *)(param_2 + 0x78);
    uStack_440 = *(undefined8 *)(param_2 + 0x70);
    uStack_428 = *(undefined8 *)(param_2 + 0x88);
    uStack_430 = *(undefined8 *)(param_2 + 0x80);
    uStack_420 = *(undefined8 *)(param_2 + 0x90);
    uStack_458 = *(undefined8 *)(param_2 + 0x58);
    lStack_460 = *(long *)(param_2 + 0x50);
    uStack_448 = *(undefined8 *)(param_2 + 0x68);
    uStack_450 = *(undefined8 *)(param_2 + 0x60);
    uStack_88 = *(undefined8 *)(param_1 + 0x58);
    uStack_90 = *(undefined8 *)(param_1 + 0x50);
    uStack_78 = *(undefined8 *)(param_1 + 0x68);
    uStack_80 = *(undefined8 *)(param_1 + 0x60);
    uStack_68 = *(undefined8 *)(param_1 + 0x78);
    uStack_70 = *(undefined8 *)(param_1 + 0x70);
    uStack_58 = *(undefined8 *)(param_1 + 0x88);
    uStack_60 = *(undefined8 *)(param_1 + 0x80);
    uStack_50 = *(undefined8 *)(param_1 + 0x90);
    lStack_3d0 = lStack_460;
    uStack_3c8 = uStack_458;
    uStack_3c0 = uStack_450;
    uStack_3b8 = uStack_448;
    uStack_3b0 = uStack_440;
    uStack_3a8 = uStack_438;
    uStack_3a0 = uStack_430;
    uStack_398 = uStack_428;
    uStack_390 = uStack_420;
    func_0x00187028(&lStack_280,auStack_4a8,0xaefe60,&UNK_007d9c38);
    func_0x00187028(&uStack_230,auStack_4a8,0xaefe60,&UNK_007d9c38);
    puVar4 = &uStack_90;
    func_0x00185774(puVar4,&lStack_3d0);
    func_0x00191ff4(&lStack_460,0xaefe60,&UNK_007d9c38);
    func_0x00191ff4(&lStack_340,0xaefe60,&UNK_007d9c38);
    if (((ulong)puVar4 & 1) == 0) {
      return 0;
    }
  }
  _swift_beginAccess(param_1 + 0x98,&lStack_340,0,0);
  uVar6 = *(ulong *)(param_1 + 0x98);
  _swift_beginAccess(param_2 + 0x98,&lStack_460,0,0);
  uVar8 = *(undefined8 *)(param_2 + 0x98);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar8);
  uVar7 = uVar6;
  func_0x0014b200(uVar6,uVar8);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar7 & 1) != 0) {
    _swift_beginAccess(param_1 + 0xa0,auStack_4a8,0,0);
    uVar7 = *(ulong *)(param_1 + 0xa0);
    _swift_beginAccess(param_2 + 0xa0,auStack_3e8,0,0);
    FUN_000aa78c(uVar7,*(undefined8 *)(param_2 + 0xa0));
    if ((uVar7 & 1) != 0) {
      _swift_beginAccess(param_1 + 0xa8,auStack_400,0,0);
      cVar2 = *(char *)(param_1 + 0xa8);
      _swift_beginAccess(param_2 + 0xa8,auStack_418,0,0);
      cVar3 = *(char *)(param_2 + 0xa8);
      if (cVar2 == '\x03') {
        if (cVar3 != '\x03') {
          return 0;
        }
      }
      else {
        if (cVar3 == '\x03') {
          return 0;
        }
        if (cVar2 != cVar3) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 00166660; end: 001666ab;  */

/* WARNING: Removing unreachable block (ram,0x0017fe34) */

void FUN_00166660(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_90,0);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  FUN_001656a0(param_3,&uStack_e0);
  uVar1 = (uint)(param_2 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_1;
      lVar4 = param_1 >> 0x20;
      goto LAB_0017feac;
    }
    if ((param_2 & 0xff000000000000) == 0) goto LAB_0017fe3c;
  }
  else {
    if (uVar2 != 2) goto LAB_0017fe3c;
    lVar3 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(param_1 + 0x18);
LAB_0017feac:
    if (lVar3 == lVar4) goto LAB_0017fe3c;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_e0,param_1,param_2);
LAB_0017fe3c:
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001666ac; end: 001666db;  */

undefined1  [16] FUN_001666ac(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00023304(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 001666dc; end: 0016670f;  */

void FUN_001666dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 00166710; end: 00166723;  */

undefined8 FUN_00166710(void)

{
  return 0x166720;
}



/* Entry: 00166724; end: 0016675b;  */

void FUN_00166724(void)

{
  FUN_001650a0();
  return;
}



/* Entry: 0016675c; end: 001667fb;  */

void FUN_0016675c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0d88 != -1) {
    _swift_once(0xaf0d88,FUN_00164b14);
  }
  uVar5 = uRam0000000000b64c98;
  uVar4 = uRam0000000000b64c90;
  uVar3 = uRam0000000000b64c88;
  uVar2 = uRam0000000000b64c80;
  uVar1 = uRam0000000000b64c78;
  *param_1 = uRam0000000000b64c70;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 001667fc; end: 0016686f;  */

void FUN_001667fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf22a0;
  uStack_18 = param_1;
  func_0x000115a8(0xaf22a0,&UNK_007dec80);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 00166870; end: 001668af;  */

undefined8 FUN_00166870(void)

{
  if (lRam0000000000af0d90 != -1) {
    _swift_once(0xaf0d90,0x166840);
  }
  return 0xb64ca0;
}



/* Entry: 001668b0; end: 001668cf;  */

undefined1  [16] FUN_001668b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (lRam0000000000af0d90 != -1) {
    _swift_once(0xaf0d90,0x166840);
  }
  uVar2 = uRam0000000000b64ca8;
  uVar1 = uRam0000000000b64ca0;
  _swift_bridgeObjectRetain(uRam0000000000b64ca8);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 001668d0; end: 0016698f;  */

void FUN_001668d0(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007dfb90,0x16,&uStack_48,&lStack_40);
  puRam0000000000b64cb8 = puStack_38;
  lRam0000000000b64cb0 = lStack_40;
  puRam0000000000b64cc8 = puStack_28;
  puRam0000000000b64cc0 = puStack_30;
  puRam0000000000b64cd8 = puStack_18;
  puRam0000000000b64cd0 = puStack_20;
  return;
}



/* Entry: 00166990; end: 00166a2f;  */

void FUN_00166990(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0d98 != -1) {
    _swift_once(0xaf0d98,FUN_001668d0);
  }
  uVar5 = uRam0000000000b64cd8;
  uVar4 = uRam0000000000b64cd0;
  uVar3 = uRam0000000000b64cc8;
  uVar2 = uRam0000000000b64cc0;
  uVar1 = uRam0000000000b64cb8;
  *param_1 = uRam0000000000b64cb0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00166a30; end: 00166b93;  */

undefined8 FUN_00166a30(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar3 = *(ulong *)(unaff_x20 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_78 = (undefined1)*(undefined8 *)(unaff_x20 + 0x58);
  uStack_6f = (undefined7)*(undefined8 *)(unaff_x20 + 0x61);
  uStack_68 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x61) >> 0x38);
  uStack_77 = (undefined7)*(undefined8 *)(unaff_x20 + 0x59);
  uStack_70 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x59) >> 0x38);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(ulong *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  if (uVar4 == 0) {
    return 1;
  }
  uVar1 = CONCAT71(uStack_77,uStack_78);
  uVar2 = CONCAT71(uStack_6f,uStack_70);
  uStack_b0 = uVar4;
  uStack_a8 = uVar6;
  uStack_a0 = uVar8;
  uStack_98 = uVar9;
  uStack_90 = uVar3;
  uStack_88 = uVar5;
  uStack_80 = uVar7;
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar6);
  func_0x00023304(uVar8,uVar9);
  _swift_bridgeObjectRetain(uVar3);
  func_0x001869f8(uVar5,uVar7,uVar1,uVar2);
  FUN_000e1a94();
  if ((uVar3 & 1) != 0) {
    func_0x0014be00();
    uVar3 = uVar4;
    FUN_000f846c();
    _swift_bridgeObjectRelease(uVar4);
    if ((uVar3 & 1) != 0) {
      if (uVar1 == 0) {
        func_0x00191ff4(&uStack_b0,0xaefe90,&UNK_007e1580);
        return 1;
      }
      func_0x00023304(uVar5,uVar7);
      uVar3 = uVar1;
      _swift_bridgeObjectRetain();
      FUN_000e1a94();
      func_0x00191ff4(&uStack_b0,0xaefe90,&UNK_007e1580);
      FUN_00116294(uVar5,uVar7,uVar1,uVar2);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      return 1;
    }
  }
  func_0x00191ff4(&uStack_b0,0xaefe90,&UNK_007e1580);
  return 0;
}



/* Entry: 00166b94; end: 00166c37;  */

undefined8 FUN_00166b94(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  
  uVar2 = unaff_x20[4];
  FUN_000e1a94();
  if ((uVar2 & 1) != 0) {
    uVar3 = *unaff_x20;
    func_0x0014be00();
    uVar2 = uVar3;
    FUN_000f8814();
    _swift_bridgeObjectRelease(uVar3);
    if ((uVar2 & 1) != 0) {
      uVar2 = unaff_x20[7];
      if (uVar2 != 0) {
        uVar5 = unaff_x20[8];
        uVar3 = unaff_x20[5];
        uVar1 = unaff_x20[6];
        func_0x00023304(uVar3,uVar1);
        uVar4 = uVar2;
        _swift_bridgeObjectRetain();
        FUN_000e1a94();
        FUN_00116294(uVar3,uVar1,uVar2,uVar5);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 00166c38; end: 00166d1f;  */

/* WARNING: Removing unreachable block (ram,0x00166d1c) */

void FUN_00166c38(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar3 = *(code **)(param_3 + 0x198);
        FUN_00187724();
        (*pcVar3)(unaff_x20 + 0x20,&UNK_009b1ac8,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x50);
          lVar1 = unaff_x20 + 0x18;
        }
        else {
          if (lVar1 != 1) goto LAB_00166cc4;
          pcVar3 = *(code **)(param_3 + 0x50);
          lVar1 = unaff_x20 + 0x10;
        }
        (*pcVar3)(lVar1,param_2,param_3);
      }
LAB_00166cc4:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 00166d20; end: 00166ecf;  */

void FUN_00166d20(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  long unaff_x21;
  undefined1 auStack_1e0 [80];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  if (*(char *)((long)unaff_x20 + 0x14) != '\x01') {
    lVar4 = unaff_x20[2];
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)lVar4);
  }
  if (*(char *)((long)unaff_x20 + 0x1c) != '\x01') {
    lVar4 = unaff_x20[3];
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)lVar4);
  }
  lStack_e8 = unaff_x20[5];
  lStack_f0 = unaff_x20[4];
  lStack_d8 = unaff_x20[7];
  lStack_e0 = unaff_x20[6];
  lStack_c8 = unaff_x20[9];
  lStack_d0 = unaff_x20[8];
  lStack_c0 = unaff_x20[10];
  uStack_b8 = (undefined1)unaff_x20[0xb];
  uStack_af = *(undefined8 *)((long)unaff_x20 + 0x61);
  uStack_b7 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x59);
  uStack_b0 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x59) >> 0x38);
  if (lStack_f0 != 0) {
    lStack_78 = unaff_x20[9];
    lStack_80 = unaff_x20[8];
    lStack_70 = unaff_x20[10];
    uStack_68 = (undefined1)unaff_x20[0xb];
    uStack_5f = *(undefined8 *)((long)unaff_x20 + 0x61);
    uStack_67 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x59);
    uStack_60 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x59) >> 0x38);
    lStack_98 = unaff_x20[5];
    lStack_a0 = unaff_x20[4];
    lStack_88 = unaff_x20[7];
    lStack_90 = unaff_x20[6];
    __ss6HasherV8_combineyySuF(3);
    uStack_168 = param_1[5];
    uStack_170 = param_1[4];
    uStack_158 = param_1[7];
    uStack_160 = param_1[6];
    uStack_150 = param_1[8];
    uStack_188 = param_1[1];
    uStack_190 = *param_1;
    uStack_178 = param_1[3];
    uStack_180 = param_1[2];
    lStack_118 = unaff_x20[9];
    lStack_120 = unaff_x20[8];
    lStack_110 = unaff_x20[10];
    uStack_108 = (undefined1)unaff_x20[0xb];
    uStack_ff = *(undefined8 *)((long)unaff_x20 + 0x61);
    uStack_107 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x59);
    uStack_100 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x59) >> 0x38);
    lStack_138 = unaff_x20[5];
    lStack_140 = unaff_x20[4];
    lStack_128 = unaff_x20[7];
    lStack_130 = unaff_x20[6];
    func_0x00186998(&lStack_140,auStack_1e0);
    FUN_00167ca0(&uStack_190);
    if (unaff_x21 != 0) {
      _swift_errorRelease();
    }
    func_0x00191ff4(&lStack_f0,0xaefe90,&UNK_007e1580);
    param_1[5] = uStack_168;
    param_1[4] = uStack_170;
    param_1[7] = uStack_158;
    param_1[6] = uStack_160;
    param_1[8] = uStack_150;
    param_1[1] = uStack_188;
    *param_1 = uStack_190;
    param_1[3] = uStack_178;
    param_1[2] = uStack_180;
  }
  lVar4 = *unaff_x20;
  uVar1 = (uint)((ulong)unaff_x20[1] >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((unaff_x20[1] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_00166ea8;
    }
    lVar3 = (long)(int)lVar4;
    lVar4 = lVar4 >> 0x20;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    lVar3 = *(long *)(lVar4 + 0x10);
    lVar4 = *(long *)(lVar4 + 0x18);
  }
  if (lVar3 == lVar4) {
    return;
  }
LAB_00166ea8:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 00166ed0; end: 00166f7b;  */

void FUN_00166ed0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  if (*(char *)((long)unaff_x20 + 0x14) != '\x01') {
    (**(code **)(param_3 + 0x18))(*(undefined4 *)(unaff_x20 + 2),1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (*(char *)((long)unaff_x20 + 0x1c) != '\x01') {
      (**(code **)(param_3 + 0x18))(*(undefined4 *)(unaff_x20 + 3),2,param_2,param_3);
    }
    FUN_00166f7c();
    FUN_0013ad2c(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 00166f7c; end: 0016701b;  */

void FUN_00166f7c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  lStack_90 = *(long *)(param_1 + 0x20);
  if (lStack_90 != 0) {
    uStack_70 = *(undefined8 *)(param_1 + 0x40);
    uStack_78 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    uStack_68 = *(undefined8 *)(param_1 + 0x48);
    uStack_50 = *(undefined8 *)(param_1 + 0x60);
    uStack_58 = *(undefined8 *)(param_1 + 0x58);
    uStack_48 = *(undefined1 *)(param_1 + 0x68);
    uStack_80 = *(undefined8 *)(param_1 + 0x30);
    uStack_88 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_00187724();
    (*pcVar1)(&lStack_90,3,&UNK_009b1ac8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 0016701c; end: 00167083;  */

uint FUN_0016701c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_310 [80];
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 uStack_288;
  undefined7 uStack_287;
  undefined1 uStack_280;
  undefined8 uStack_27f;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  undefined1 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined8 uStack_1df;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined8 uStack_13f;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined8 uStack_ef;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined8 uStack_9f;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  if (*(char *)((long)param_1 + 0x14) == '\x01') {
    if (*(char *)((long)param_2 + 0x14) != '\x01') {
      return 0;
    }
  }
  else if (*(char *)((long)param_2 + 0x14) == '\x01' ||
           *(int *)(param_1 + 2) != *(int *)(param_2 + 2)) {
    return 0;
  }
  if (*(char *)((long)param_1 + 0x1c) == '\x01') {
    if (*(char *)((long)param_2 + 0x1c) != '\x01') {
      return 0;
    }
  }
  else if (*(char *)((long)param_2 + 0x1c) == '\x01' ||
           *(int *)(param_1 + 3) != *(int *)(param_2 + 3)) {
    return 0;
  }
  uStack_1b8 = param_1[7];
  uStack_1c0 = param_1[6];
  uStack_b8 = param_1[9];
  uStack_c0 = param_1[8];
  uStack_1a8 = param_1[9];
  uStack_1b0 = param_1[8];
  uStack_b0 = param_1[10];
  uStack_a8 = (undefined1)param_1[0xb];
  uStack_9f = *(undefined8 *)((long)param_1 + 0x61);
  uStack_a7 = (undefined7)*(undefined8 *)((long)param_1 + 0x59);
  uStack_a0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
  uStack_d8 = param_1[5];
  uStack_e0 = param_1[4];
  uStack_c8 = param_1[7];
  uStack_d0 = param_1[6];
  uStack_1c8 = param_1[5];
  lStack_1d0 = param_1[4];
  uStack_208 = param_2[7];
  uStack_210 = param_2[6];
  uStack_108 = param_2[9];
  uStack_110 = param_2[8];
  uStack_1f8 = param_2[9];
  uStack_200 = param_2[8];
  uStack_100 = param_2[10];
  uStack_f8 = (undefined1)param_2[0xb];
  uStack_ef = *(undefined8 *)((long)param_2 + 0x61);
  uStack_f7 = (undefined7)*(undefined8 *)((long)param_2 + 0x59);
  uStack_f0 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x59) >> 0x38);
  uStack_128 = param_2[5];
  uStack_130 = param_2[4];
  uStack_118 = param_2[7];
  uStack_120 = param_2[6];
  uStack_218 = param_2[5];
  lStack_220 = param_2[4];
  uStack_1a0 = param_1[10];
  uStack_198 = (undefined1)param_1[0xb];
  uStack_18f = (undefined7)*(undefined8 *)((long)param_1 + 0x61);
  uStack_188 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x61) >> 0x38);
  uStack_197 = (undefined7)*(undefined8 *)((long)param_1 + 0x59);
  uStack_190 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
  uStack_1f0 = param_2[10];
  uStack_148 = (undefined1)param_2[0xb];
  uStack_1df = *(undefined8 *)((long)param_2 + 0x61);
  uStack_147 = (undefined7)*(undefined8 *)((long)param_2 + 0x59);
  uStack_140 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x59) >> 0x38);
  lStack_180 = lStack_220;
  uStack_178 = uStack_218;
  uStack_170 = uStack_210;
  uStack_168 = uStack_208;
  uStack_160 = uStack_200;
  uStack_158 = uStack_1f8;
  uStack_150 = uStack_1f0;
  uStack_13f = uStack_1df;
  if (lStack_1d0 == 0) {
    if (lStack_220 != 0) goto LAB_00185434;
    uStack_248 = param_1[9];
    uStack_250 = param_1[8];
    uStack_240 = param_1[10];
    uStack_238 = (undefined1)param_1[0xb];
    uStack_22f = (undefined7)*(undefined8 *)((long)param_1 + 0x61);
    uStack_228 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x61) >> 0x38);
    uStack_237 = (undefined7)*(undefined8 *)((long)param_1 + 0x59);
    uStack_230 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
    uStack_268 = param_1[5];
    lStack_270 = param_1[4];
    uStack_258 = param_1[7];
    uStack_260 = param_1[6];
    func_0x00187028(&uStack_e0,&uStack_90,0xaefe90,&UNK_007e1580);
    func_0x00187028(&uStack_130,&uStack_90,0xaefe90,&UNK_007e1580);
    func_0x00191ff4(&lStack_270,0xaefe90,&UNK_007e1580);
  }
  else {
    if (lStack_220 == 0) {
LAB_00185434:
      uStack_1e8 = uStack_148;
      uStack_238 = uStack_198;
      uStack_237 = uStack_197;
      uStack_228 = uStack_188;
      uStack_230 = uStack_190;
      uStack_22f = uStack_18f;
      lStack_270 = lStack_1d0;
      uStack_268 = uStack_1c8;
      uStack_260 = uStack_1c0;
      uStack_258 = uStack_1b8;
      uStack_250 = uStack_1b0;
      uStack_248 = uStack_1a8;
      uStack_240 = uStack_1a0;
      uStack_1e7 = uStack_147;
      uStack_1e0 = uStack_140;
      func_0x00187028(&uStack_e0,&uStack_90,0xaefe90,&UNK_007e1580);
      func_0x00187028(&uStack_130,&uStack_90,0xaefe90,&UNK_007e1580);
      func_0x00191ff4(&lStack_270,0xaf07b0,&UNK_007daf80);
      uVar1 = 0;
      goto LAB_00185530;
    }
    uStack_298 = param_2[9];
    uStack_2a0 = param_2[8];
    uStack_290 = param_2[10];
    uStack_288 = (undefined1)param_2[0xb];
    uStack_27f = *(undefined8 *)((long)param_2 + 0x61);
    uStack_287 = (undefined7)*(undefined8 *)((long)param_2 + 0x59);
    uStack_280 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x59) >> 0x38);
    uStack_2b8 = param_2[5];
    lStack_2c0 = param_2[4];
    uStack_2a8 = param_2[7];
    uStack_2b0 = param_2[6];
    uStack_22f = (undefined7)uStack_27f;
    uStack_228 = (undefined1)((ulong)uStack_27f >> 0x38);
    uStack_88 = param_1[5];
    uStack_90 = param_1[4];
    uStack_78 = param_1[7];
    uStack_80 = param_1[6];
    uStack_68 = param_1[9];
    uStack_70 = param_1[8];
    uStack_60 = param_1[10];
    uStack_4f = *(undefined8 *)((long)param_1 + 0x61);
    uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
    uStack_58 = (undefined1)param_1[0xb];
    uStack_57 = (undefined7)((ulong)param_1[0xb] >> 8);
    lStack_270 = lStack_2c0;
    uStack_268 = uStack_2b8;
    uStack_260 = uStack_2b0;
    uStack_258 = uStack_2a8;
    uStack_250 = uStack_2a0;
    uStack_248 = uStack_298;
    uStack_240 = uStack_290;
    uStack_238 = uStack_288;
    uStack_237 = uStack_287;
    uStack_230 = uStack_280;
    func_0x00187028(&uStack_e0,auStack_310,0xaefe90,&UNK_007e1580);
    func_0x00187028(&uStack_130,auStack_310,0xaefe90,&UNK_007e1580);
    puVar2 = &uStack_90;
    func_0x00184f8c(puVar2,&lStack_270);
    func_0x00191ff4(&lStack_2c0,0xaefe90,&UNK_007e1580);
    func_0x00191ff4(&lStack_1d0,0xaefe90,&UNK_007e1580);
    if (((ulong)puVar2 & 1) == 0) {
      uVar1 = 0;
      goto LAB_00185530;
    }
  }
  uVar3 = *param_1;
  FUN_00038814(uVar3,param_1[1],*param_2,param_2[1]);
  uVar1 = (uint)uVar3;
LAB_00185530:
  return uVar1 & 1;
}



/* Entry: 00167084; end: 001670b3;  */

undefined1  [16] FUN_00167084(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00023304(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 001670b4; end: 001670e7;  */

void FUN_001670b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 001670e8; end: 001670fb;  */

undefined8 FUN_001670e8(void)

{
  return 0x1670f8;
}



/* Entry: 001670fc; end: 0016710f;  */

void FUN_001670fc(void)

{
  FUN_00166c38();
  return;
}



/* Entry: 00167110; end: 00167157;  */

void FUN_00167110(void)

{
  FUN_00166ed0();
  return;
}



/* Entry: 00167158; end: 001671f7;  */

void FUN_00167158(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0d98 != -1) {
    _swift_once(0xaf0d98,FUN_001668d0);
  }
  uVar5 = uRam0000000000b64cd8;
  uVar4 = uRam0000000000b64cd0;
  uVar3 = uRam0000000000b64cc8;
  uVar2 = uRam0000000000b64cc0;
  uVar1 = uRam0000000000b64cb8;
  *param_1 = uRam0000000000b64cb0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 001671f8; end: 0016720b;  */

void FUN_001671f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2298;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2298,&UNK_007dec78);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 0016720c; end: 0016740f;  */

/* WARNING: Removing unreachable block (ram,0x00167280) */

void FUN_0016720c(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_50 = unaff_x20[10];
  uStack_48 = (undefined1)unaff_x20[0xb];
  uStack_3f = *(undefined8 *)((long)unaff_x20 + 0x61);
  uStack_47 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x59);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x59) >> 0x38);
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  __ss6HasherV5_seedABSi_tcfC(&uStack_f0,0);
  uStack_118 = uStack_c8;
  uStack_120 = uStack_d0;
  uStack_108 = uStack_b8;
  uStack_110 = uStack_c0;
  uStack_100 = uStack_b0;
  uStack_138 = uStack_e8;
  uStack_140 = uStack_f0;
  uStack_128 = uStack_d8;
  uStack_130 = uStack_e0;
  FUN_00166d20(&uStack_140);
  uStack_b8 = uStack_108;
  uStack_c0 = uStack_110;
  uStack_b0 = uStack_100;
  uStack_d8 = uStack_128;
  uStack_e0 = uStack_130;
  uStack_c8 = uStack_118;
  uStack_d0 = uStack_120;
  uStack_e8 = uStack_138;
  uStack_f0 = uStack_140;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00167410; end: 00167477;  */

uint FUN_00167410(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
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
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_a0 = param_1[10];
  uStack_98 = (undefined1)param_1[0xb];
  uStack_8f = *(undefined8 *)((long)param_1 + 0x61);
  uStack_97 = (undefined7)*(undefined8 *)((long)param_1 + 0x59);
  uStack_90 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x61);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x59) >> 0x38);
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  uStack_30 = param_2[10];
  uStack_28 = (undefined1)param_2[0xb];
  uStack_27 = (undefined7)((ulong)param_2[0xb] >> 8);
  FUN_00185278(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 00167478; end: 001674a7;  */

void FUN_00167478(void)

{
  __sSS6appendyySSF(0x657672657365522e,0xee0065676e615264);
  uRam0000000000b64ce0 = 0xd00000000000001f;
  uRam0000000000b64ce8 = 0x80000000008b91d0;
  return;
}



/* Entry: 001674a8; end: 0016750f;  */

void FUN_001674a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  __sSS6appendyySSF(param_2,param_3);
  *param_4 = 0xd00000000000001f;
  *param_5 = 0x80000000008b91d0;
  return;
}



/* Entry: 00167510; end: 0016754f;  */

undefined8 FUN_00167510(void)

{
  if (lRam0000000000af0da0 != -1) {
    _swift_once(0xaf0da0,FUN_00167478);
  }
  return 0xb64ce0;
}



/* Entry: 00167550; end: 0016756f;  */

undefined1  [16] FUN_00167550(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (lRam0000000000af0da0 != -1) {
    _swift_once(0xaf0da0,FUN_00167478);
  }
  uVar2 = uRam0000000000b64ce8;
  uVar1 = uRam0000000000b64ce0;
  _swift_bridgeObjectRetain(uRam0000000000b64ce8);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}


