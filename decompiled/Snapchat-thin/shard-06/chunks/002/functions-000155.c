/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1045d4d54; end: 1045d4d6f;  */

void FUN_1045d4d54(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  return;
}



/* Entry: 1045d4d70; end: 1045d4ecf;  */

undefined4 FUN_1045d4d70(void)

{
  undefined4 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x2c) != '\x01') {
    uVar1 = *(undefined4 *)(unaff_x20 + 0x28);
  }
  return uVar1;
}



/* Entry: 1045d4ed0; end: 1045d4eff;  */

undefined1  [16] FUN_1045d4ed0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 1045d4f00; end: 1045d4f33;  */

void FUN_1045d4f00(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1045d4f34; end: 1045d4f4f;  */

undefined1  [16] FUN_1045d4f34(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1045d4f44;
  return auVar1;
}



/* Entry: 1045d4f50; end: 1045d4f7b;  */

void FUN_1045d4f50(void)

{
  func_0x0001000285a8(0x113087e98,&UNK_10dd19cf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 1045d4f7c; end: 1045d503f;  */

void FUN_1045d4f7c(void)

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



/* Entry: 1045d5040; end: 1045d508b;  */

void FUN_1045d5040(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
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



/* Entry: 1045d508c; end: 1045d514b;  */

void FUN_1045d508c(void)

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
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1e9a0,0xee,&uStack_48,&lStack_40);
  puRam0000000113813eb8 = puStack_38;
  lRam0000000113813eb0 = lStack_40;
  puRam0000000113813ec8 = puStack_28;
  puRam0000000113813ec0 = puStack_30;
  puRam0000000113813ed8 = puStack_18;
  puRam0000000113813ed0 = puStack_20;
  return;
}



/* Entry: 1045d514c; end: 1045d528b;  */

void FUN_1045d514c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087ea0 != -1) {
    _swift_once(0x113087ea0,FUN_1045d508c);
  }
  uVar5 = uRam0000000113813ed8;
  uVar4 = uRam0000000113813ed0;
  uVar3 = uRam0000000113813ec8;
  uVar2 = uRam0000000113813ec0;
  uVar1 = uRam0000000113813eb8;
  *param_1 = uRam0000000113813eb0;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045d528c; end: 1045d534b;  */

void FUN_1045d528c(void)

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
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1e960,0x39,&uStack_48,&lStack_40);
  puRam0000000113813ee8 = puStack_38;
  lRam0000000113813ee0 = lStack_40;
  puRam0000000113813ef8 = puStack_28;
  puRam0000000113813ef0 = puStack_30;
  puRam0000000113813f08 = puStack_18;
  puRam0000000113813f00 = puStack_20;
  return;
}



/* Entry: 1045d534c; end: 1045d548b;  */

void FUN_1045d534c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087ea8 != -1) {
    _swift_once(0x113087ea8,FUN_1045d528c);
  }
  uVar5 = uRam0000000113813f08;
  uVar4 = uRam0000000113813f00;
  uVar3 = uRam0000000113813ef8;
  uVar2 = uRam0000000113813ef0;
  uVar1 = uRam0000000113813ee8;
  *param_1 = uRam0000000113813ee0;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045d548c; end: 1045d54b3;  */

undefined * FUN_1045d548c(void)

{
  return &UNK_11078b168;
}



/* Entry: 1045d54b4; end: 1045d5573;  */

void FUN_1045d54b4(void)

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
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1ebb8,7,&uStack_48,&lStack_40);
  puRam0000000113813f18 = puStack_38;
  lRam0000000113813f10 = lStack_40;
  puRam0000000113813f28 = puStack_28;
  puRam0000000113813f20 = puStack_30;
  puRam0000000113813f38 = puStack_18;
  puRam0000000113813f30 = puStack_20;
  return;
}



/* Entry: 1045d5574; end: 1045d5613;  */

void FUN_1045d5574(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087eb0 != -1) {
    _swift_once(0x113087eb0,FUN_1045d54b4);
  }
  uVar5 = uRam0000000113813f38;
  uVar4 = uRam0000000113813f30;
  uVar3 = uRam0000000113813f28;
  uVar2 = uRam0000000113813f20;
  uVar1 = uRam0000000113813f18;
  *param_1 = uRam0000000113813f10;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045d5614; end: 1045d5663;  */

uint FUN_1045d5614(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  FUN_104559288();
  if ((param_4 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x0001045be6d0(param_1);
    uVar2 = param_1;
    FUN_10456d190();
    _swift_bridgeObjectRelease(param_1);
    uVar1 = (uint)uVar2 & 1;
  }
  return uVar1;
}



/* Entry: 1045d5664; end: 1045d56c7;  */

void FUN_1045d5664(void)

{
  FUN_1045f245c();
  return;
}



/* Entry: 1045d56c8; end: 1045d56f3;  */

uint FUN_1045d56c8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5,
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
        FUN_104603a58(&uStack_210,auStack_2d8);
        FUN_104603a58(&uStack_140,auStack_2d8);
        puVar2 = &uStack_210;
        func_0x0001045f5e24(puVar2,&uStack_140);
        func_0x000104603a8c(&uStack_140);
        func_0x000104603a8c(&uStack_210);
        if (((ulong)puVar2 & 1) == 0) goto LAB_1045f657c;
        puVar3 = puVar3 + 0x19;
        puVar5 = puVar5 + 0x19;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    func_0x000100e25fcc(param_2,param_3,param_6,param_7);
    if ((param_2 & 1) != 0) {
      FUN_104558fb4(param_4,param_8);
      uVar1 = (uint)param_4;
      goto LAB_1045f6580;
    }
  }
LAB_1045f657c:
  uVar1 = 0;
LAB_1045f6580:
  return uVar1 & 1;
}



/* Entry: 1045d56f4; end: 1045d5743;  */

uint FUN_1045d56f4(void)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  uVar4 = *unaff_x20;
  uVar2 = unaff_x20[3];
  FUN_104559288();
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x0001045be6d0(uVar4);
    uVar3 = uVar4;
    FUN_10456cde8();
    _swift_bridgeObjectRelease(uVar4);
    uVar1 = (uint)uVar3 & 1;
  }
  return uVar1;
}



/* Entry: 1045d5744; end: 1045d5757;  */

undefined1  [16] FUN_1045d5744(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1045d5754;
  return auVar1;
}



/* Entry: 1045d5758; end: 1045d578f;  */

void FUN_1045d5758(void)

{
  FUN_1045d5664();
  return;
}



/* Entry: 1045d5790; end: 1045d582f;  */

void FUN_1045d5790(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087eb0 != -1) {
    _swift_once(0x113087eb0,FUN_1045d54b4);
  }
  uVar5 = uRam0000000113813f38;
  uVar4 = uRam0000000113813f30;
  uVar3 = uRam0000000113813f28;
  uVar2 = uRam0000000113813f20;
  uVar1 = uRam0000000113813f18;
  *param_1 = uRam0000000113813f10;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045d5830; end: 1045d589b;  */

void FUN_1045d5830(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130893f0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130893f0,&UNK_10dd1d900);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045d589c; end: 1045d595b;  */

void FUN_1045d589c(void)

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
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1e8b0,0xad,&uStack_48,&lStack_40);
  puRam0000000113813f48 = puStack_38;
  lRam0000000113813f40 = lStack_40;
  puRam0000000113813f58 = puStack_28;
  puRam0000000113813f50 = puStack_30;
  puRam0000000113813f68 = puStack_18;
  puRam0000000113813f60 = puStack_20;
  return;
}



/* Entry: 1045d595c; end: 1045d59fb;  */

void FUN_1045d595c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087ec0 != -1) {
    _swift_once(0x113087ec0,FUN_1045d589c);
  }
  uVar5 = uRam0000000113813f68;
  uVar4 = uRam0000000113813f60;
  uVar3 = uRam0000000113813f58;
  uVar2 = uRam0000000113813f50;
  uVar1 = uRam0000000113813f48;
  *param_1 = uRam0000000113813f40;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045d59fc; end: 1045d5c33;  */

undefined8 FUN_1045d59fc(void)

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
  func_0x0001045bec6c(uVar4,&UNK_11078cfa0,0x1045f9050);
  uVar5 = uVar4;
  FUN_10456cde8();
  _swift_bridgeObjectRelease(uVar4);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  uVar4 = *(ulong *)(unaff_x20 + 0x28);
  func_0x0001045bec6c(uVar4,&UNK_11078d530,0x1045f9090);
  uVar5 = uVar4;
  FUN_10456cde8();
  _swift_bridgeObjectRelease(uVar4);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  uVar4 = *(ulong *)(unaff_x20 + 0x30);
  func_0x0001045be408();
  uVar5 = uVar4;
  FUN_10456cde8();
  _swift_bridgeObjectRelease(uVar4);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  uVar4 = *(ulong *)(unaff_x20 + 0x38);
  func_0x0001045be55c();
  uVar5 = uVar4;
  FUN_10456cde8();
  _swift_bridgeObjectRelease(uVar4);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  uVar5 = *(ulong *)(unaff_x20 + 0x80);
  if (uVar5 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x78);
    lVar7 = *(long *)(unaff_x20 + 0x88);
    func_0x00010006c00c(uVar1,uVar6);
    _swift_bridgeObjectRetain(uVar5);
    _swift_retain(lVar7);
    uVar4 = uVar5;
    FUN_104559288();
    if ((uVar4 & 1) == 0) {
LAB_1045d5bfc:
      func_0x0001045f8a44(uVar1,uVar6,uVar5,lVar7);
      return 0;
    }
    _swift_beginAccess(lVar7 + 0xc0,auStack_78,0,0);
    uVar4 = *(ulong *)(lVar7 + 0xd0);
    if (uVar4 != 0) {
      uVar9 = *(undefined8 *)(lVar7 + 0xd8);
      uVar2 = *(undefined8 *)(lVar7 + 0xc0);
      uVar3 = *(undefined8 *)(lVar7 + 200);
      func_0x00010006c00c(uVar2,uVar3);
      uVar8 = uVar4;
      _swift_bridgeObjectRetain();
      FUN_104559288();
      func_0x00010458a4f4(uVar2,uVar3,uVar4,uVar9);
      if ((uVar8 & 1) == 0) goto LAB_1045d5bfc;
    }
    _swift_beginAccess(lVar7 + 0xe0,auStack_90,0,0);
    uVar8 = *(ulong *)(lVar7 + 0xe0);
    uVar4 = uVar8;
    _swift_bridgeObjectRetain();
    func_0x0001045be170();
    _swift_bridgeObjectRelease(uVar8);
    uVar8 = uVar4;
    FUN_10456cde8();
    _swift_bridgeObjectRelease(uVar4);
    func_0x0001045f8a44(uVar1,uVar6,uVar5,lVar7);
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
    func_0x00010006c00c(uVar6,uVar1);
    uVar4 = uVar5;
    _swift_bridgeObjectRetain();
    FUN_104559288();
    func_0x0001045f844c(lVar7,uVar6,uVar1,uVar5);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  }
  return 1;
}



/* Entry: 1045d5c34; end: 1045d5d1b;  */

uint FUN_1045d5c34(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  FUN_104559288();
  if ((param_3 & 1) == 0) {
LAB_1045d5cfc:
    uVar3 = 0;
  }
  else {
    _swift_beginAccess(param_4 + 0xc0,auStack_58,0,0);
    uVar5 = *(ulong *)(param_4 + 0xd0);
    if (uVar5 != 0) {
      uVar6 = *(undefined8 *)(param_4 + 0xd8);
      uVar2 = *(undefined8 *)(param_4 + 0xc0);
      uVar4 = *(undefined8 *)(param_4 + 200);
      func_0x00010006c00c(uVar2,uVar4);
      uVar1 = uVar5;
      _swift_bridgeObjectRetain();
      FUN_104559288();
      func_0x00010458a4f4(uVar2,uVar4,uVar5,uVar6);
      if ((uVar1 & 1) == 0) goto LAB_1045d5cfc;
    }
    _swift_beginAccess(param_4 + 0xe0,auStack_70,0,0);
    uVar4 = *(undefined8 *)(param_4 + 0xe0);
    uVar2 = uVar4;
    _swift_bridgeObjectRetain(uVar4);
    func_0x0001045be170();
    _swift_bridgeObjectRelease(uVar4);
    uVar4 = uVar2;
    FUN_10456cde8(uVar2);
    uVar3 = (uint)uVar4;
    _swift_bridgeObjectRelease(uVar2);
  }
  return uVar3 & 1;
}



/* Entry: 1045d5d1c; end: 1045d5d23;  */

bool FUN_1045d5d1c(void)

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
  if (uVar7 == 0) goto LAB_1045592f8;
LAB_104559324:
  uVar4 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
  uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
  uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar7 = uVar7 - 1 & uVar7;
  uVar4 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) | lVar6 << 6;
  uStack_c0 = *(undefined8 *)(*(long *)(in_x3 + 0x30) + uVar4 * 8);
  FUN_104558b10(*(long *)(in_x3 + 0x38) + uVar4 * 0x28,&uStack_b8);
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
LAB_1045593ec:
      return lVar6 == 0;
    }
    FUN_104558c58(&uStack_88,&uStack_c0);
    lVar1 = lStack_a0;
    uVar4 = uStack_a8;
    func_0x0001000a8868(&uStack_c0,uStack_a8);
    (**(code **)(lVar1 + 0x38))(uVar4,lVar1);
    if ((uVar4 & 1) == 0) {
      _swift_release(in_x3);
      func_0x0001000834e4(&uStack_c0);
      goto LAB_1045593ec;
    }
    func_0x0001000834e4(&uStack_c0);
    lVar6 = lVar3;
    if (uVar7 != 0) goto LAB_104559324;
LAB_1045592f8:
    uVar4 = uVar5;
    if ((long)uVar5 <= lVar3 + 1) {
      uVar4 = lVar3 + 1;
    }
    while( true ) {
      lVar6 = lVar3 + 1;
      if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104559418);
        (*pcVar2)();
      }
      if ((long)uVar5 <= lVar6) break;
      uVar7 = ((ulong *)(in_x3 + 0x40))[lVar6];
      lVar3 = lVar3 + 1;
      if (uVar7 != 0) goto LAB_104559324;
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



/* Entry: 1045d5d24; end: 1045d5f1b;  */

/* WARNING: Removing unreachable block (ram,0x0001045d5f18) */

void FUN_1045d5d24(undefined8 param_1,undefined8 param_2,long param_3)

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
        func_0x0001045f9050();
        lVar2 = unaff_x20 + 0x20;
        puVar3 = &UNK_11078cfa0;
        goto code_r0x0001045d5f04;
      case 5:
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x0001045f9090();
        lVar2 = unaff_x20 + 0x28;
        puVar3 = &UNK_11078d530;
        goto code_r0x0001045d5f04;
      case 6:
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x0001045f90d0();
        lVar2 = unaff_x20 + 0x30;
        puVar3 = &UNK_11078d6b8;
        goto code_r0x0001045d5f04;
      case 7:
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x0001045f9110();
        lVar2 = unaff_x20 + 0x38;
        puVar3 = &UNK_11078d2e0;
        goto code_r0x0001045d5f04;
      case 8:
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_1045f9a14();
        lVar2 = unaff_x20 + 0x70;
        puVar3 = &UNK_11078d7d8;
        goto code_r0x0001045d5f04;
      case 9:
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_1045fa9cc();
        lVar2 = unaff_x20 + 0x90;
        puVar3 = &UNK_11078e8a0;
        goto code_r0x0001045d5f04;
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
        goto LAB_1045d5dac;
      case 0xe:
        pcVar4 = *(code **)(param_3 + 0x188);
        FUN_104603c94();
        lVar2 = unaff_x20 + 0xc0;
        puVar3 = &UNK_11078cd58;
code_r0x0001045d5f04:
        (*pcVar4)(lVar2,puVar3,uVar1,param_2,param_3);
        goto LAB_1045d5dac;
      case 0xf:
        pcVar4 = *(code **)(param_3 + 0x160);
      }
      (*pcVar4)();
LAB_1045d5dac:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 1045d5f1c; end: 1045d631b;  */

void FUN_1045d5f1c(undefined8 *param_1)

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
  if ((*(long *)(unaff_x20[4] + 0x10) != 0) && (FUN_104610590(unaff_x20[4],4), unaff_x21 != 0)) {
    return;
  }
  if ((*(long *)(unaff_x20[5] + 0x10) != 0) && (FUN_10460fd68(unaff_x20[5],5), unaff_x21 != 0)) {
    return;
  }
  if ((*(long *)(unaff_x20[6] + 0x10) != 0) && (FUN_10460f15c(unaff_x20[6],6), unaff_x21 != 0)) {
    return;
  }
  if ((*(long *)(unaff_x20[7] + 0x10) != 0) && (FUN_10460ee58(unaff_x20[7],7), unaff_x21 != 0)) {
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
    func_0x00010006c00c(lVar9,uVar3);
    _swift_bridgeObjectRetain(lVar8);
    _swift_retain(lVar12);
    FUN_1045e26bc();
    if (unaff_x21 == 0) {
      uVar5 = (uint)(uVar3 >> 0x20);
      uVar6 = uVar5 >> 0x1e;
      if (uVar5 >> 0x1e < 2) {
        if (uVar6 == 0) {
          if ((uVar3 & 0xff000000000000) == 0) goto LAB_1045d60c4;
        }
        else {
          lVar13 = (long)(int)lVar9;
          lVar7 = lVar9 >> 0x20;
LAB_1045d62f4:
          if (lVar13 == lVar7) goto LAB_1045d60c4;
        }
        __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_a0,lVar9,uVar3);
      }
      else if (uVar6 == 2) {
        lVar13 = *(long *)(lVar9 + 0x10);
        lVar7 = *(long *)(lVar9 + 0x18);
        goto LAB_1045d62f4;
      }
    }
    else {
      _swift_errorRelease(unaff_x21);
    }
LAB_1045d60c4:
    func_0x0001045f8a44(lVar9,uVar3,lVar8,lVar12);
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
    func_0x00010006c00c(lVar13,lVar9);
    _swift_bridgeObjectRetain(lVar12);
    func_0x0001045bf21c(param_1,lVar8,lVar13,lVar9,lVar12);
    func_0x0001045f844c(lVar8,lVar13,lVar9,lVar12);
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
    __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_10dd1eac8 + (ulong)bVar4 * 8));
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
      goto LAB_1045d6290;
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
LAB_1045d6290:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 1045d631c; end: 1045d65b7;  */

void FUN_1045d631c(undefined8 param_1,undefined8 param_2,long param_3)

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
      func_0x0001045f9050();
      (*pcVar3)(lVar2,4,&UNK_11078cfa0,lVar1,param_2,param_3);
      lVar1 = lVar2;
    }
    lVar2 = unaff_x20[5];
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      func_0x0001045f9090();
      (*pcVar3)(lVar2,5,&UNK_11078d530,lVar1,param_2,param_3);
      lVar1 = lVar2;
    }
    lVar2 = unaff_x20[6];
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      func_0x0001045f90d0();
      (*pcVar3)(lVar2,6,&UNK_11078d6b8,lVar1,param_2,param_3);
      lVar1 = lVar2;
    }
    lVar2 = unaff_x20[7];
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      func_0x0001045f9110();
      (*pcVar3)(lVar2,7,&UNK_11078d2e0,lVar1,param_2,param_3);
    }
    FUN_1045d65b8();
    FUN_1045d663c();
    if (*(long *)(unaff_x20[1] + 0x10) != 0) {
      (**(code **)(param_3 + 0xa8))(unaff_x20[1],10,param_2,param_3);
    }
    if (*(long *)(unaff_x20[2] + 0x10) != 0) {
      (**(code **)(param_3 + 0xa8))(unaff_x20[2],0xb,param_2,param_3);
    }
    if (unaff_x20[0x17] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[0x16],unaff_x20[0x17],0xc,param_2,param_3);
    }
    FUN_1045d66c0();
    if (*(long *)(unaff_x20[3] + 0x10) != 0) {
      (**(code **)(param_3 + 0x100))(unaff_x20[3],0xf,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[8],unaff_x20[9],param_2,param_3);
  }
  return;
}



/* Entry: 1045d65b8; end: 1045d663b;  */

void FUN_1045d65b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    FUN_1045f9a14();
    (*pcVar1)(&uStack_60,8,&UNK_11078d7d8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1045d663c; end: 1045d66bf;  */

void FUN_1045d663c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    FUN_1045fa9cc();
    (*pcVar1)(&lStack_60,9,&UNK_11078e8a0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1045d66c0; end: 1045d6733;  */

void FUN_1045d66c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  char cStack_31;
  
  cStack_31 = *(char *)(param_1 + 0xc0);
  if (cStack_31 != '\f') {
    pcVar1 = *(code **)(param_4 + 0x80);
    FUN_104603c94();
    (*pcVar1)(&cStack_31,0xe,&UNK_11078cd58,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1045d6734; end: 1045d6737;  */

uint FUN_1045d6734(long *param_1,long *param_2)

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
    if (lVar4 == 0) goto LAB_1045f5e84;
  }
  else if ((lVar4 != 0) &&
          ((uVar2 = param_1[10], uVar2 == param_2[10] && param_1[0xb] == lVar4 ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar2 & 1) != 0)))) {
LAB_1045f5e84:
    lVar4 = param_2[0xd];
    if (param_1[0xd] == 0) {
      if (lVar4 == 0) goto LAB_1045f5ec0;
    }
    else if ((lVar4 != 0) &&
            (((uVar2 = param_1[0xc], uVar2 == param_2[0xc] && (param_1[0xd] == lVar4)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar2 & 1) != 0)))) {
LAB_1045f5ec0:
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
                          (), (uVar2 & 1) == 0)) goto LAB_1045f6078;
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
              if (*piVar7 != *piVar8) goto LAB_1045f6078;
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
                if (*piVar7 != *piVar8) goto LAB_1045f6078;
                lVar4 = lVar4 + -1;
                piVar7 = piVar7 + 1;
                piVar8 = piVar8 + 1;
              } while (lVar4 != 0);
            }
            uVar2 = param_1[3];
            func_0x00010142cfc4(uVar2,param_2[3]);
            if ((uVar2 & 1) != 0) {
              uVar2 = param_1[4];
              FUN_1045bb568(uVar2,param_2[4],FUN_1045d8220);
              if ((uVar2 & 1) != 0) {
                uVar2 = param_1[5];
                FUN_1045bb568(uVar2,param_2[5],FUN_1045dde7c);
                if ((uVar2 & 1) != 0) {
                  uVar2 = param_1[6];
                  FUN_1045bb348(uVar2,param_2[6]);
                  if ((uVar2 & 1) != 0) {
                    uVar2 = param_1[7];
                    func_0x0001045bb448(uVar2,param_2[7]);
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
                        if (uVar13 != 0) goto LAB_1045f60a4;
                        func_0x0001045f8fa8(&uStack_90,&uStack_d0,0x1130878f8,&UNK_10dd19bc8);
                        func_0x0001045f8fa8(&uStack_b0,&uStack_d0,0x1130878f8,&UNK_10dd19bc8);
                        func_0x0001045f8a44(uVar11,lVar5,0,uVar14);
LAB_1045f6228:
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
                          if (uVar2 != 0) goto LAB_1045f62fc;
                          func_0x0001045f8fa8(&uStack_d0,auStack_110,0x113087900,&UNK_10dd19bd0);
                          func_0x0001045f8fa8(&uStack_f0,auStack_110,0x113087900,&UNK_10dd19bd0);
                          func_0x0001045f844c(0,uVar12,lVar5,uVar14);
LAB_1045f63c8:
                          lVar4 = param_2[0x17];
                          if (param_1[0x17] == 0) {
                            if (lVar4 == 0) goto LAB_1045f6404;
                          }
                          else if ((lVar4 != 0) &&
                                  (((uVar2 = param_1[0x16], uVar2 == param_2[0x16] &&
                                    (param_1[0x17] == lVar4)) ||
                                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                              (), (uVar2 & 1) != 0)))) {
LAB_1045f6404:
                            if ((char)param_1[0x18] == '\f') {
                              if ((char)param_2[0x18] == '\f') {
LAB_1045f6428:
                                lVar4 = param_1[8];
                                func_0x000100e25fcc(lVar4,param_1[9],param_2[8],param_2[9]);
                                uVar1 = (uint)lVar4;
                                goto LAB_1045f607c;
                              }
                            }
                            else if ((char)param_1[0x18] == (char)param_2[0x18]) goto LAB_1045f6428;
                          }
                        }
                        else {
                          if (uVar2 == 0) {
LAB_1045f62fc:
                            func_0x0001045f8fa8(&uStack_d0,auStack_110,0x113087900,&UNK_10dd19bd0);
                            func_0x0001045f8fa8(&uStack_f0,auStack_110,0x113087900,&UNK_10dd19bd0);
                            func_0x0001045f844c(uVar11,uVar12,lVar5,uVar14);
                          }
                          else {
                            func_0x0001045f8fa8(&uStack_d0,auStack_110,0x113087900,&UNK_10dd19bd0);
                            func_0x0001045f8fa8(&uStack_f0,auStack_110,0x113087900,&UNK_10dd19bd0);
                            uVar3 = uVar11;
                            FUN_1045bbeac(uVar11,uVar2);
                            if (((uVar3 & 1) != 0) &&
                               (uVar3 = uVar12, func_0x000100e25fcc(uVar12,lVar5,uVar13,lVar4),
                               (uVar3 & 1) != 0)) {
                              uVar3 = uVar14;
                              FUN_104558fb4(uVar14,uVar15);
                              func_0x0001045f844c(uVar2,uVar13,lVar4,uVar15);
                              func_0x0001045f844c(uVar11,uVar12,lVar5,uVar14);
                              if ((uVar3 & 1) != 0) goto LAB_1045f63c8;
                              goto LAB_1045f6078;
                            }
                            func_0x0001045f844c(uVar2,uVar13,lVar4,uVar15);
                            uVar2 = uVar11;
                            uVar13 = uVar12;
                            lVar4 = lVar5;
                            uVar15 = uVar14;
                          }
                          func_0x0001045f844c(uVar2,uVar13,lVar4,uVar15);
                        }
                      }
                      else {
                        if (uVar13 == 0) {
LAB_1045f60a4:
                          func_0x0001045f8fa8(&uStack_90,&uStack_d0,0x1130878f8,&UNK_10dd19bc8);
                          func_0x0001045f8fa8(&uStack_b0,&uStack_d0,0x1130878f8,&UNK_10dd19bc8);
                          func_0x0001045f8a44(uVar11,lVar5,uVar12,uVar14);
                        }
                        else {
                          if (uVar14 == uVar15) {
                            func_0x0001045f8fa8(&uStack_90,&uStack_d0,0x1130878f8,&UNK_10dd19bc8);
                            func_0x0001045f8fa8(&uStack_b0,&uStack_d0,0x1130878f8,&UNK_10dd19bc8);
LAB_1045f6154:
                            uVar3 = uVar11;
                            func_0x000100e25fcc(uVar11,lVar5,uVar2,lVar4);
                            if ((uVar3 & 1) != 0) {
                              uVar3 = uVar12;
                              FUN_104558fb4(uVar12,uVar13);
                              func_0x0001045f8a44(uVar2,lVar4,uVar13,uVar15);
                              func_0x0001045f8a44(uVar11,lVar5,uVar12,uVar14);
                              if ((uVar3 & 1) == 0) goto LAB_1045f6078;
                              goto LAB_1045f6228;
                            }
                          }
                          else {
                            func_0x0001045f8fa8(&uStack_90,&uStack_d0,0x1130878f8,&UNK_10dd19bc8);
                            func_0x0001045f8fa8(&uStack_b0,&uStack_d0,0x1130878f8,&UNK_10dd19bc8);
                            _swift_retain(uVar14);
                            _swift_retain(uVar15);
                            uVar3 = uVar14;
                            FUN_1045e3b54(uVar14,uVar15);
                            _swift_release(uVar15);
                            _swift_release(uVar14);
                            if ((uVar3 & 1) != 0) goto LAB_1045f6154;
                          }
                          func_0x0001045f8a44(uVar2,lVar4,uVar13,uVar15);
                          uVar2 = uVar11;
                          lVar4 = lVar5;
                          uVar13 = uVar12;
                          uVar15 = uVar14;
                        }
                        func_0x0001045f8a44(uVar2,lVar4,uVar13,uVar15);
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
LAB_1045f6078:
  uVar1 = 0;
LAB_1045f607c:
  return uVar1 & 1;
}



/* Entry: 1045d6738; end: 1045d67c7;  */

/* WARNING: Removing unreachable block (ram,0x0001045d6788) */

void FUN_1045d6738(void)

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
  FUN_1045d5f1c(&uStack_d0);
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



/* Entry: 1045d67c8; end: 1045d6827;  */

void FUN_1045d67c8(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
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



/* Entry: 1045d6828; end: 1045d6857;  */

undefined1  [16] FUN_1045d6828(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x40);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48));
  return auVar1;
}



/* Entry: 1045d6858; end: 1045d688b;  */

void FUN_1045d6858(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  return;
}



/* Entry: 1045d688c; end: 1045d689f;  */

undefined1  [16] FUN_1045d688c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = 0x1045d689c;
  return auVar1;
}



/* Entry: 1045d68a0; end: 1045d68b3;  */

void FUN_1045d68a0(void)

{
  FUN_1045d5d24();
  return;
}



/* Entry: 1045d68b4; end: 1045d6913;  */

void FUN_1045d68b4(void)

{
  FUN_1045d631c();
  return;
}



/* Entry: 1045d6914; end: 1045d69b3;  */

void FUN_1045d6914(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087ec0 != -1) {
    _swift_once(0x113087ec0,FUN_1045d589c);
  }
  uVar5 = uRam0000000113813f68;
  uVar4 = uRam0000000113813f60;
  uVar3 = uRam0000000113813f58;
  uVar2 = uRam0000000113813f50;
  uVar1 = uRam0000000113813f48;
  *param_1 = uRam0000000113813f40;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045d69b4; end: 1045d69ef;  */

void FUN_1045d69b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130893e8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130893e8,&UNK_10dd1d8f8);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045d69f0; end: 1045d6c3b;  */

/* WARNING: Removing unreachable block (ram,0x0001045d6a7c) */

void FUN_1045d69f0(void)

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
  FUN_1045d5f1c(&uStack_1a0);
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



/* Entry: 1045d6c3c; end: 1045d6cdb;  */

uint FUN_1045d6c3c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1045d6734(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 1045d6cdc; end: 1045d6d03;  */

undefined * FUN_1045d6cdc(void)

{
  return &UNK_11078b188;
}



/* Entry: 1045d6d04; end: 1045d6dc3;  */

void FUN_1045d6d04(void)

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
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1e820,0x82,&uStack_48,&lStack_40);
  puRam0000000113813f78 = puStack_38;
  lRam0000000113813f70 = lStack_40;
  puRam0000000113813f88 = puStack_28;
  puRam0000000113813f80 = puStack_30;
  puRam0000000113813f98 = puStack_18;
  puRam0000000113813f90 = puStack_20;
  return;
}



/* Entry: 1045d6dc4; end: 1045d6e63;  */

void FUN_1045d6dc4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087ee8 != -1) {
    _swift_once(0x113087ee8,FUN_1045d6d04);
  }
  uVar5 = uRam0000000113813f98;
  uVar4 = uRam0000000113813f90;
  uVar3 = uRam0000000113813f88;
  uVar2 = uRam0000000113813f80;
  uVar1 = uRam0000000113813f78;
  *param_1 = uRam0000000113813f70;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045d6e64; end: 1045d6f5f;  */

void FUN_1045d6e64(void)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = 0;
  FUN_1045f8494();
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar2 + 0x20) = PTR___swiftEmptyArrayStorage_11034f1c8;
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
  lRam0000000113087920 = lVar2;
  return;
}



/* Entry: 1045d6f60; end: 1045d6f67;  */

undefined8 FUN_1045d6f60(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001045be55c();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar8;
  FUN_10456cde8();
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_3 + 0x28,auStack_90,0,0);
  uVar1 = *(ulong *)(param_3 + 0x28);
  uVar8 = uVar1;
  _swift_bridgeObjectRetain();
  func_0x0001045be55c();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar8;
  FUN_10456cde8();
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_3 + 0x30,auStack_a8,0,0);
  uVar1 = *(ulong *)(param_3 + 0x30);
  uVar8 = uVar1;
  _swift_bridgeObjectRetain();
  func_0x0001045bec6c();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar8;
  FUN_10456cde8();
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_3 + 0x38,auStack_c0,0,0);
  uVar1 = *(ulong *)(param_3 + 0x38);
  uVar8 = uVar1;
  _swift_bridgeObjectRetain();
  func_0x0001045bec6c();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar8;
  FUN_10456cde8();
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_3 + 0x40,auStack_d8,0,0);
  uVar1 = *(ulong *)(param_3 + 0x40);
  uVar8 = uVar1;
  _swift_bridgeObjectRetain();
  func_0x0001045be9d8();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar8;
  FUN_10456cde8();
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_3 + 0x48,auStack_f0,0,0);
  uVar1 = *(ulong *)(param_3 + 0x48);
  uVar8 = uVar1;
  _swift_bridgeObjectRetain();
  func_0x0001045beb2c();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar8;
  FUN_10456cde8();
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
  func_0x00010006c00c(uVar4,uVar6);
  _swift_bridgeObjectRetain(uVar8);
  func_0x0001045f8978(uVar3,uVar5,uVar7,uVar2);
  FUN_104559288();
  if ((uVar8 & 1) == 0) {
LAB_1045d7254:
    func_0x000104603c54(&uStack_140,0x113087030,&UNK_10dd18948);
  }
  else {
    if (uVar7 != 0) {
      func_0x00010006c00c(uVar3,uVar5);
      uVar8 = uVar7;
      _swift_bridgeObjectRetain();
      FUN_104559288();
      func_0x00010458a4f4(uVar3,uVar5,uVar7,uVar2);
      if ((uVar8 & 1) == 0) goto LAB_1045d7254;
    }
    func_0x0001045be170();
    uVar8 = uVar1;
    FUN_10456cde8();
    func_0x000104603c54(&uStack_140,0x113087030,&UNK_10dd18948);
    _swift_bridgeObjectRelease(uVar1);
    if ((uVar8 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1045d6f68; end: 1045d728f;  */

undefined8 FUN_1045d6f68(long param_1)

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
  func_0x0001045be55c();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar8;
  FUN_10456cde8();
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_1 + 0x28,auStack_90,0,0);
  uVar1 = *(ulong *)(param_1 + 0x28);
  uVar8 = uVar1;
  _swift_bridgeObjectRetain();
  func_0x0001045be55c();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar8;
  FUN_10456cde8();
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_1 + 0x30,auStack_a8,0,0);
  uVar1 = *(ulong *)(param_1 + 0x30);
  uVar8 = uVar1;
  _swift_bridgeObjectRetain();
  func_0x0001045bec6c();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar8;
  FUN_10456cde8();
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_1 + 0x38,auStack_c0,0,0);
  uVar1 = *(ulong *)(param_1 + 0x38);
  uVar8 = uVar1;
  _swift_bridgeObjectRetain();
  func_0x0001045bec6c();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar8;
  FUN_10456cde8();
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_1 + 0x40,auStack_d8,0,0);
  uVar1 = *(ulong *)(param_1 + 0x40);
  uVar8 = uVar1;
  _swift_bridgeObjectRetain();
  func_0x0001045be9d8();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar8;
  FUN_10456cde8();
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_1 + 0x48,auStack_f0,0,0);
  uVar1 = *(ulong *)(param_1 + 0x48);
  uVar8 = uVar1;
  _swift_bridgeObjectRetain();
  func_0x0001045beb2c();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar8;
  FUN_10456cde8();
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
  func_0x00010006c00c(uVar4,uVar6);
  _swift_bridgeObjectRetain(uVar8);
  func_0x0001045f8978(uVar3,uVar5,uVar7,uVar2);
  FUN_104559288();
  if ((uVar8 & 1) == 0) {
LAB_1045d7254:
    func_0x000104603c54(&uStack_140,0x113087030,&UNK_10dd18948);
  }
  else {
    if (uVar7 != 0) {
      func_0x00010006c00c(uVar3,uVar5);
      uVar8 = uVar7;
      _swift_bridgeObjectRetain();
      FUN_104559288();
      func_0x00010458a4f4(uVar3,uVar5,uVar7,uVar2);
      if ((uVar8 & 1) == 0) goto LAB_1045d7254;
    }
    func_0x0001045be170();
    uVar8 = uVar1;
    FUN_10456cde8();
    func_0x000104603c54(&uStack_140,0x113087030,&UNK_10dd18948);
    _swift_bridgeObjectRelease(uVar1);
    if ((uVar8 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1045d7290; end: 1045d72bf;  */

void FUN_1045d7290(void)

{
  FUN_1045dd3b4();
  return;
}



/* Entry: 1045d72c0; end: 1045d74fb;  */

/* WARNING: Removing unreachable block (ram,0x0001045d73f8) */
/* WARNING: Removing unreachable block (ram,0x0001045d7414) */
/* WARNING: Removing unreachable block (ram,0x0001045d74c0) */
/* WARNING: Removing unreachable block (ram,0x0001045d74f8) */
/* WARNING: Removing unreachable block (ram,0x0001045d744c) */
/* WARNING: Removing unreachable block (ram,0x0001045d7494) */
/* WARNING: Removing unreachable block (ram,0x0001045d7430) */
/* WARNING: Removing unreachable block (ram,0x0001045d7470) */
/* WARNING: Removing unreachable block (ram,0x0001045d74dc) */

void FUN_1045d72c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
        goto code_r0x0001045d73d4;
      case 2:
        FUN_1045dd640(param_2,param_1,param_3,param_4,0x1045f9110,&UNK_11078d2e0);
        break;
      case 3:
        FUN_1045d74fc(param_2,param_1,param_3,param_4);
        break;
      case 4:
        FUN_1045d7590(param_2,param_1,param_3,param_4);
        break;
      case 5:
        FUN_1045d7624(param_2,param_1,param_3,param_4);
        break;
      case 6:
        FUN_1045e5ef8(param_2,param_1,param_3,param_4,0x1045f9110,&UNK_11078d2e0);
        break;
      case 7:
        FUN_1045e602c(param_2,param_1,param_3,param_4,&SUB_101569a24,&UNK_11078d8f0);
        break;
      case 8:
        FUN_1045d76b8(param_2,param_1,param_3,param_4);
        break;
      case 9:
        FUN_1045d774c(param_2,param_1,param_3,param_4);
        break;
      case 10:
        _swift_beginAccess(param_1 + 0xa0,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x160);
        lVar2 = param_1 + 0xa0;
code_r0x0001045d73d4:
        (*pcVar3)(lVar2,param_3,param_4);
        _swift_endAccess(auStack_78);
        break;
      case 0xb:
        FUN_1045d77e0(param_2,param_1,param_3,param_4);
      }
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1045d74fc; end: 1045d758f;  */

void FUN_1045d74fc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x30;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x0001045f9050();
  (*pcVar2)(param_2 + 0x30,&UNK_11078cfa0,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 1045d7590; end: 1045d7623;  */

void FUN_1045d7590(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x38;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x0001045f9090();
  (*pcVar2)(param_2 + 0x38,&UNK_11078d530,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 1045d7624; end: 1045d76b7;  */

void FUN_1045d7624(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x40;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x0001045faf00();
  (*pcVar2)(param_2 + 0x40,&UNK_11078d020,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 1045d76b8; end: 1045d774b;  */

void FUN_1045d76b8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x48;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x0001045fb46c();
  (*pcVar2)(param_2 + 0x48,&UNK_11078d4a8,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 1045d774c; end: 1045d77df;  */

void FUN_1045d774c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x98;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x0001045fb03c();
  (*pcVar2)(param_2 + 0x98,&UNK_11078d0a8,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 1045d77e0; end: 1045d7873;  */

void FUN_1045d77e0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xa8;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x188);
  FUN_1046040b4();
  (*pcVar2)(param_2 + 0xa8,&UNK_11078cde8,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 1045d7874; end: 1045d788f;  */

void FUN_1045d7874(void)

{
  FUN_1045dd824();
  return;
}



/* Entry: 1045d7890; end: 1045d7cc3;  */

void FUN_1045d7890(long param_1,undefined8 *param_2)

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
    FUN_10460ee58();
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
    FUN_104610590();
    _swift_bridgeObjectRelease(lVar3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0x38,auStack_100,0,0);
  lVar3 = *(long *)(param_1 + 0x38);
  if (*(long *)(lVar3 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar3);
    FUN_10460fd68();
    _swift_bridgeObjectRelease(lVar3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0x40,auStack_118,0,0);
  lVar3 = *(long *)(param_1 + 0x40);
  if (*(long *)(lVar3 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar3);
    FUN_104610e00();
    _swift_bridgeObjectRelease(lVar3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0x28,auStack_130,0,0);
  lVar3 = *(long *)(param_1 + 0x28);
  if (*(long *)(lVar3 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar3);
    FUN_10460ee58();
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
    FUN_1045f88b8(&lStack_210,auStack_2a8);
    FUN_1045e4b3c(&uStack_260);
    if (unaff_x21 != 0) {
      _swift_errorRelease(unaff_x21);
      unaff_x21 = 0;
    }
    func_0x000104603c54(&lStack_180,0x113087030,&UNK_10dd18948);
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
    FUN_1046108c0();
    _swift_bridgeObjectRelease(lVar3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0x98,auStack_2a8,0,0);
  lVar3 = *(long *)(param_1 + 0x98);
  if (*(long *)(lVar3 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar3);
    func_0x00010461b5b4();
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



/* Entry: 1045d7cc4; end: 1045d80bf;  */

/* WARNING: Removing unreachable block (ram,0x0001045d7d78) */
/* WARNING: Removing unreachable block (ram,0x0001045d7d7c) */

void FUN_1045d7cc4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  
  FUN_1045e2f54();
  if (unaff_x21 == 0) {
    _swift_beginAccess(param_1 + 0x20,auStack_68,0,0);
    lVar1 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 0x118);
      func_0x0001045f9110();
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    _swift_beginAccess(param_1 + 0x30,auStack_80,0,0);
    lVar1 = *(long *)(param_1 + 0x30);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 0x118);
      func_0x0001045f9050();
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    _swift_beginAccess(param_1 + 0x38,auStack_98,0,0);
    lVar1 = *(long *)(param_1 + 0x38);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 0x118);
      func_0x0001045f9090();
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    _swift_beginAccess(param_1 + 0x40,auStack_b0,0,0);
    lVar1 = *(long *)(param_1 + 0x40);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 0x118);
      func_0x0001045faf00();
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    _swift_beginAccess(param_1 + 0x28,auStack_c8,0,0);
    lVar1 = *(long *)(param_1 + 0x28);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 0x118);
      func_0x0001045f9110();
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    FUN_1045d80c0(param_1,param_2,param_3,param_4);
    _swift_beginAccess(param_1 + 0x48,auStack_e0,0,0);
    lVar1 = *(long *)(param_1 + 0x48);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 0x118);
      func_0x0001045fb46c();
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    _swift_beginAccess(param_1 + 0x98,auStack_f8,0,0);
    lVar1 = *(long *)(param_1 + 0x98);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 0x118);
      func_0x0001045fb03c();
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
    FUN_1045d8178(param_1,param_2,param_3,param_4);
  }
  return;
}



/* Entry: 1045d80c0; end: 1045d8177;  */

void FUN_1045d80c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x000101569a24();
    (*pcVar2)(&lStack_a0,7,&UNK_11078d8f0,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1045d8178; end: 1045d8213;  */

void FUN_1045d8178(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    FUN_1046040b4();
    (*pcVar2)(&cStack_31,0xb,&UNK_11078cde8,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1045d8214; end: 1045d821f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1045d8214(byte *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
                    ulong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *unaff_x19;
  long lVar21;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
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
  undefined1 auVar39 [16];
  
  if (param_3 != param_6) {
    _swift_retain(param_3);
    _swift_retain(param_6);
    uVar17 = param_3;
    FUN_1045d8220(param_3,param_6);
    _swift_release(param_6);
    _swift_release(param_3);
    if ((uVar17 & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)param_2 >> 0x20);
    uVar15 = uVar4 >> 0x1e;
    uVar5 = (uint)(param_5 >> 0x20);
    uVar18 = uVar5 >> 0x1e;
    iVar7 = (int)param_1;
    pbVar11 = param_2;
    if ((ulong)param_2 >> 0x3e == 3) {
      uVar17 = 0;
      if ((((param_1 != (byte *)0x0) || (param_2 != (byte *)0xc000000000000000)) ||
          (param_5 >> 0x3e < 3)) || ((uVar17 = 0, param_4 != 0 || (param_5 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar15 == 0) {
        uVar17 = (ulong)param_2 >> 0x30 & 0xff;
      }
      else {
        iVar16 = (int)((ulong)param_1 >> 0x20);
        if (SBORROW4(iVar16,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar17 = (ulong)(iVar16 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar18 == 0) {
        uVar19 = param_5 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar16 = (int)((ulong)param_4 >> 0x20);
      if (SBORROW4(iVar16,(int)param_4)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar17 == (long)(iVar16 - (int)param_4)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar15 == 2) {
        uVar17 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar17 = 0;
      if (uVar18 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar18 == 2) {
        uVar19 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
        if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar17 != uVar19) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar17 < 1) goto code_r0x000100e26128;
        if (uVar15 < 2) {
          if (uVar15 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)param_1;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_1 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_1 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_1 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_1 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_1 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_1 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_1 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)param_2;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_2 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_2 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_2 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_2 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_2 >> 0x28);
            pbVar11 = (byte *)((long)register0x00000008 + (((ulong)param_2 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)param_1 >> 0x20) - (long)unaff_x25);
          if ((long)param_1 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = param_2;
          if (param_1 == (byte *)0x0) {
            func_0x000107c5ec38();
            param_1 = (byte *)0x0;
          }
          else {
            pbVar11 = param_1;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            param_1 = param_1 + ((long)unaff_x25 - (long)pbVar11);
            func_0x000107c5ec38();
            unaff_x19 = param_1;
            if (param_1 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar11) {
                pbVar11 = unaff_x23;
              }
              pbVar11 = pbVar11 + (long)param_1;
              goto code_r0x000100e262a4;
            }
          }
          pbVar11 = (byte *)0x0;
        }
        else {
          if (uVar15 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar11 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar21 = *(long *)(param_1 + 0x10);
          unaff_x24 = *(byte **)(param_1 + 0x18);
          func_0x000107c5ec30();
          pbVar11 = param_1;
          if (param_1 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            param_1 = param_1 + (lVar21 - (long)pbVar11);
          }
          unaff_x23 = unaff_x24 + -lVar21;
          if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = param_1;
          unaff_x25 = param_2;
          if (param_1 == (byte *)0x0) {
            pbVar11 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar11) {
              pbVar11 = unaff_x23;
            }
            pbVar11 = pbVar11 + (long)param_1;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)param_2 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_1,pbVar11,param_4
                            ,param_5);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = param_5;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar17 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar10 = *(byte **)pbVar8;
    param_1 = *(byte **)(pbVar8 + 8);
    pbVar20 = *(byte **)(pbVar8 + 0x18);
    bVar23 = pbVar8[0x28];
    param_2 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar12 = param_1;
    if (bVar23 < 3) {
      if (bVar23 == 0) {
        if (pbVar11[0x28] == 0) {
          lVar21 = *(long *)pbVar11;
          uVar9 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar10,lVar21,uVar9);
          return (byte *)(ulong)((uint)pbVar10 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar23 == 1) {
        if (pbVar11[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar14 = *(byte **)(pbVar11 + 0x10);
        lVar21 = *(long *)pbVar11;
        uVar9 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar10,lVar21,uVar9);
        if (((ulong)pbVar10 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar10 = param_1;
        pbVar12 = param_2;
        if ((param_1 == pbVar13) && (param_2 == pbVar14)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar11[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        lVar21 = *(long *)(pbVar11 + 0x18);
        if ((pbVar10 == pbVar13) && (param_1 == pbVar14)) {
          if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar20 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar21 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar21);
          func_0x000107c61174();
          pbVar11 = pbVar20;
          func_0x000107c60118();
          func_0x000107c61170(pbVar20);
          func_0x000107c61170(lVar21);
          pbVar20 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar20 & 1) == 0) {
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
      )(pbVar10,pbVar12,pbVar13,pbVar14,0);
      return pbVar10;
    }
    lVar22 = *(long *)(pbVar8 + 0x20);
    if (bVar23 < 5) {
      if (bVar23 != 3) {
        if (pbVar11[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        if (((pbVar10 == pbVar13) && (param_1 == pbVar14)) &&
           (pbVar10 = param_2, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
           pbVar14 = *(byte **)(pbVar11 + 0x18),
           param_2 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar11[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar11 != ((uint)pbVar10 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar14 = *(byte **)(pbVar11 + 0x10);
      lVar21 = *(long *)(pbVar11 + 0x20);
      if (param_2 == (byte *)0x0) {
        if (pbVar14 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar10 = param_1;
        pbVar12 = param_2;
        if ((param_1 != pbVar13) || (param_2 != pbVar14)) goto code_r0x000107c605b8;
      }
      if (lVar22 != 0) {
        if (lVar21 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar20 == *(byte **)(pbVar11 + 0x18)) && (lVar22 == lVar21)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar20,lVar22,*(byte **)(pbVar11 + 0x18),lVar21,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar21 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar23 != 5) {
      if ((((pbVar20 == (byte *)0x0 && param_1 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
          lVar22 == 0) && param_2 == (byte *)0x0) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar22 = *(long *)(pbVar11 + 0x20);
        lVar21 = *(long *)(pbVar11 + 0x18);
        bVar23 = pbVar11[8] | (byte)lVar21;
        bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
        bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
        bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
        bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
        bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
        bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
        bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
        bVar31 = pbVar11[0x10] | (byte)lVar22;
        bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
        bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
        bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
        bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
        bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
        bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
        bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
        auVar39[1] = bVar24;
        auVar39[0] = bVar23;
        auVar39[2] = bVar25;
        auVar39[3] = bVar26;
        auVar39[4] = bVar27;
        auVar39[5] = bVar28;
        auVar39[6] = bVar29;
        auVar39[7] = bVar30;
        auVar39[8] = bVar31;
        auVar39[9] = bVar32;
        auVar39[10] = bVar33;
        auVar39[0xb] = bVar34;
        auVar39[0xc] = bVar35;
        auVar39[0xd] = bVar36;
        auVar39[0xe] = bVar37;
        auVar39[0xf] = bVar38;
        auVar3[1] = bVar24;
        auVar3[0] = bVar23;
        auVar3[2] = bVar25;
        auVar3[3] = bVar26;
        auVar3[4] = bVar27;
        auVar3[5] = bVar28;
        auVar3[6] = bVar29;
        auVar3[7] = bVar30;
        auVar3[8] = bVar31;
        auVar3[9] = bVar32;
        auVar3[10] = bVar33;
        auVar3[0xb] = bVar34;
        auVar3[0xc] = bVar35;
        auVar3[0xd] = bVar36;
        auVar3[0xe] = bVar37;
        auVar3[0xf] = bVar38;
        auVar39 = NEON_ext(auVar39,auVar3,8,1);
        if (CONCAT17(bVar30 | auVar39[7],
                     CONCAT16(bVar29 | auVar39[6],
                              CONCAT15(bVar28 | auVar39[5],
                                       CONCAT14(bVar27 | auVar39[4],
                                                CONCAT13(bVar26 | auVar39[3],
                                                         CONCAT12(bVar25 | auVar39[2],
                                                                  CONCAT11(bVar24 | auVar39[1],
                                                                           bVar23 | auVar39[0]))))))
                    ) == 0 && *(long *)pbVar11 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar10 == (byte *)0x1) &&
         (((pbVar20 == (byte *)0x0 && param_1 == (byte *)0x0) && param_2 == (byte *)0x0) &&
          lVar22 == 0)) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 2) {
          return (byte *)0x0;
        }
      }
      lVar22 = *(long *)(pbVar11 + 0x20);
      lVar21 = *(long *)(pbVar11 + 0x18);
      bVar23 = pbVar11[8] | (byte)lVar21;
      bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
      bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
      bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
      bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
      bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
      bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
      bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
      bVar31 = pbVar11[0x10] | (byte)lVar22;
      bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
      bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
      bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
      bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
      bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
      bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
      bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
      auVar1[1] = bVar24;
      auVar1[0] = bVar23;
      auVar1[2] = bVar25;
      auVar1[3] = bVar26;
      auVar1[4] = bVar27;
      auVar1[5] = bVar28;
      auVar1[6] = bVar29;
      auVar1[7] = bVar30;
      auVar1[8] = bVar31;
      auVar1[9] = bVar32;
      auVar1[10] = bVar33;
      auVar1[0xb] = bVar34;
      auVar1[0xc] = bVar35;
      auVar1[0xd] = bVar36;
      auVar1[0xe] = bVar37;
      auVar1[0xf] = bVar38;
      auVar2[1] = bVar24;
      auVar2[0] = bVar23;
      auVar2[2] = bVar25;
      auVar2[3] = bVar26;
      auVar2[4] = bVar27;
      auVar2[5] = bVar28;
      auVar2[6] = bVar29;
      auVar2[7] = bVar30;
      auVar2[8] = bVar31;
      auVar2[9] = bVar32;
      auVar2[10] = bVar33;
      auVar2[0xb] = bVar34;
      auVar2[0xc] = bVar35;
      auVar2[0xd] = bVar36;
      auVar2[0xe] = bVar37;
      auVar2[0xf] = bVar38;
      auVar39 = NEON_ext(auVar1,auVar2,8,1);
      lVar21 = CONCAT17(bVar30 | auVar39[7],
                        CONCAT16(bVar29 | auVar39[6],
                                 CONCAT15(bVar28 | auVar39[5],
                                          CONCAT14(bVar27 | auVar39[4],
                                                   CONCAT13(bVar26 | auVar39[3],
                                                            CONCAT12(bVar25 | auVar39[2],
                                                                     CONCAT11(bVar24 | auVar39[1],
                                                                              bVar23 | auVar39[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar11[0x28] != 5) {
      return (byte *)0x0;
    }
    param_4 = *(long *)(pbVar11 + 8);
    param_5 = *(ulong *)(pbVar11 + 0x10);
    lVar21 = *(long *)pbVar11;
    uVar9 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar10,lVar21,uVar9);
    if (((ulong)pbVar10 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 1045d8220; end: 1045d884f;  */

undefined8 FUN_1045d8220(long param_1,long param_2)

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
  func_0x0001045bb448(uVar6,uVar8);
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
  func_0x0001045bb448(uVar6,uVar8);
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
  FUN_1045bb568(uVar6,uVar8,FUN_1045d8220);
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
  FUN_1045bb568(uVar6,uVar8,FUN_1045dde7c);
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
  func_0x0001045bc120(uVar6,uVar8);
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
  func_0x0001045bc80c(uVar6,uVar8);
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
    if (lStack_388 != 0) goto LAB_1045d865c;
    uStack_3a8 = *(undefined8 *)(param_1 + 0x78);
    uStack_3b0 = *(undefined8 *)(param_1 + 0x70);
    uStack_398 = *(undefined8 *)(param_1 + 0x88);
    uStack_3a0 = *(undefined8 *)(param_1 + 0x80);
    uStack_390 = *(undefined8 *)(param_1 + 0x90);
    uStack_3c8 = *(undefined8 *)(param_1 + 0x58);
    lStack_3d0 = *(long *)(param_1 + 0x50);
    uStack_3b8 = *(undefined8 *)(param_1 + 0x68);
    uStack_3c0 = *(undefined8 *)(param_1 + 0x60);
    func_0x0001045f8fa8(&lStack_280,&uStack_90,0x113087030,&UNK_10dd18948);
    func_0x0001045f8fa8(&uStack_230,&uStack_90,0x113087030,&UNK_10dd18948);
    func_0x000104603c54(&lStack_3d0,0x113087030,&UNK_10dd18948);
  }
  else {
    if (lStack_388 == 0) {
LAB_1045d865c:
      lStack_3d0 = lStack_340;
      uStack_3c8 = uStack_338;
      uStack_3c0 = uStack_330;
      uStack_3b8 = uStack_328;
      uStack_3b0 = uStack_320;
      uStack_3a8 = uStack_318;
      uStack_3a0 = uStack_310;
      uStack_398 = uStack_308;
      uStack_390 = uStack_300;
      func_0x0001045f8fa8(&lStack_280,&uStack_90,0x113087030,&UNK_10dd18948);
      func_0x0001045f8fa8(&uStack_230,&uStack_90,0x113087030,&UNK_10dd18948);
      func_0x000104603c54(&lStack_3d0,0x113087908,&UNK_10dd19be0);
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
    func_0x0001045f8fa8(&lStack_280,auStack_4a8,0x113087030,&UNK_10dd18948);
    func_0x0001045f8fa8(&uStack_230,auStack_4a8,0x113087030,&UNK_10dd18948);
    puVar4 = &uStack_90;
    func_0x0001045f76f4(puVar4,&lStack_3d0);
    func_0x000104603c54(&lStack_460,0x113087030,&UNK_10dd18948);
    func_0x000104603c54(&lStack_340,0x113087030,&UNK_10dd18948);
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
  func_0x0001045bd570(uVar6,uVar8);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar7 & 1) != 0) {
    _swift_beginAccess(param_1 + 0xa0,auStack_4a8,0,0);
    uVar7 = *(ulong *)(param_1 + 0xa0);
    _swift_beginAccess(param_2 + 0xa0,auStack_3e8,0,0);
    func_0x00010142cfc4(uVar7,*(undefined8 *)(param_2 + 0xa0));
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



/* Entry: 1045d8850; end: 1045d88af;  */

/* WARNING: Removing unreachable block (ram,0x0001045f1e40) */

void FUN_1045d8850(long param_1,ulong param_2,undefined8 param_3)

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
  FUN_1045d7890(param_3,&uStack_e0);
  uVar1 = (uint)(param_2 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_1;
      lVar4 = param_1 >> 0x20;
      goto LAB_1045f1eb8;
    }
    if ((param_2 & 0xff000000000000) == 0) goto LAB_1045f1e48;
  }
  else {
    if (uVar2 != 2) goto LAB_1045f1e48;
    lVar3 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(param_1 + 0x18);
LAB_1045f1eb8:
    if (lVar3 == lVar4) goto LAB_1045f1e48;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_e0,param_1,param_2);
LAB_1045f1e48:
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



/* Entry: 1045d88b0; end: 1045d88e7;  */

void FUN_1045d88b0(void)

{
  FUN_1045d7290();
  return;
}



/* Entry: 1045d88e8; end: 1045d8987;  */

void FUN_1045d88e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087ee8 != -1) {
    _swift_once(0x113087ee8,FUN_1045d6d04);
  }
  uVar5 = uRam0000000113813f98;
  uVar4 = uRam0000000113813f90;
  uVar3 = uRam0000000113813f88;
  uVar2 = uRam0000000113813f80;
  uVar1 = uRam0000000113813f78;
  *param_1 = uRam0000000113813f70;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045d8988; end: 1045d89fb;  */

void FUN_1045d8988(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130893e0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130893e0,&UNK_10dd1d8f0);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045d89fc; end: 1045d8a3b;  */

undefined8 FUN_1045d89fc(void)

{
  if (lRam0000000113087ef0 != -1) {
    _swift_once(0x113087ef0,0x1045d89cc);
  }
  return 0x113813fa0;
}



/* Entry: 1045d8a3c; end: 1045d8a5b;  */

undefined1  [16] FUN_1045d8a3c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (lRam0000000113087ef0 != -1) {
    _swift_once(0x113087ef0,0x1045d89cc);
  }
  uVar2 = uRam0000000113813fa8;
  uVar1 = uRam0000000113813fa0;
  _swift_bridgeObjectRetain(uRam0000000113813fa8);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 1045d8a5c; end: 1045d8b1b;  */

void FUN_1045d8a5c(void)

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
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1e800,0x16,&uStack_48,&lStack_40);
  puRam0000000113813fb8 = puStack_38;
  lRam0000000113813fb0 = lStack_40;
  puRam0000000113813fc8 = puStack_28;
  puRam0000000113813fc0 = puStack_30;
  puRam0000000113813fd8 = puStack_18;
  puRam0000000113813fd0 = puStack_20;
  return;
}



/* Entry: 1045d8b1c; end: 1045d8bbb;  */

void FUN_1045d8b1c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087ef8 != -1) {
    _swift_once(0x113087ef8,FUN_1045d8a5c);
  }
  uVar5 = uRam0000000113813fd8;
  uVar4 = uRam0000000113813fd0;
  uVar3 = uRam0000000113813fc8;
  uVar2 = uRam0000000113813fc0;
  uVar1 = uRam0000000113813fb8;
  *param_1 = uRam0000000113813fb0;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045d8bbc; end: 1045d8d1f;  */

undefined8 FUN_1045d8bbc(void)

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
  func_0x00010006c00c(uVar8,uVar9);
  _swift_bridgeObjectRetain(uVar3);
  func_0x0001045f8978(uVar5,uVar7,uVar1,uVar2);
  FUN_104559288();
  if ((uVar3 & 1) != 0) {
    func_0x0001045be170();
    uVar3 = uVar4;
    FUN_10456cde8();
    _swift_bridgeObjectRelease(uVar4);
    if ((uVar3 & 1) != 0) {
      if (uVar1 == 0) {
        func_0x000104603c54(&uStack_b0,0x113087060,&UNK_10dd201f0);
        return 1;
      }
      func_0x00010006c00c(uVar5,uVar7);
      uVar3 = uVar1;
      _swift_bridgeObjectRetain();
      FUN_104559288();
      func_0x000104603c54(&uStack_b0,0x113087060,&UNK_10dd201f0);
      func_0x00010458a4f4(uVar5,uVar7,uVar1,uVar2);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      return 1;
    }
  }
  func_0x000104603c54(&uStack_b0,0x113087060,&UNK_10dd201f0);
  return 0;
}



/* Entry: 1045d8d20; end: 1045d8dc3;  */

undefined8 FUN_1045d8d20(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  
  uVar2 = unaff_x20[4];
  FUN_104559288();
  if ((uVar2 & 1) != 0) {
    uVar3 = *unaff_x20;
    func_0x0001045be170();
    uVar2 = uVar3;
    FUN_10456d190();
    _swift_bridgeObjectRelease(uVar3);
    if ((uVar2 & 1) != 0) {
      uVar2 = unaff_x20[7];
      if (uVar2 != 0) {
        uVar5 = unaff_x20[8];
        uVar3 = unaff_x20[5];
        uVar1 = unaff_x20[6];
        func_0x00010006c00c(uVar3,uVar1);
        uVar4 = uVar2;
        _swift_bridgeObjectRetain();
        FUN_104559288();
        func_0x00010458a4f4(uVar3,uVar1,uVar2,uVar5);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 1045d8dc4; end: 1045d8eab;  */

/* WARNING: Removing unreachable block (ram,0x0001045d8ea8) */

void FUN_1045d8dc4(undefined8 param_1,long param_2,long param_3)

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
        FUN_1045f96a4();
        (*pcVar3)(unaff_x20 + 0x20,&UNK_11078d130,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x50);
          lVar1 = unaff_x20 + 0x18;
        }
        else {
          if (lVar1 != 1) goto LAB_1045d8e50;
          pcVar3 = *(code **)(param_3 + 0x50);
          lVar1 = unaff_x20 + 0x10;
        }
        (*pcVar3)(lVar1,param_2,param_3);
      }
LAB_1045d8e50:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1045d8eac; end: 1045d905b;  */

void FUN_1045d8eac(undefined8 *param_1)

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
    func_0x0001045f8918(&lStack_140,auStack_1e0);
    FUN_1045d9d80(&uStack_190);
    if (unaff_x21 != 0) {
      _swift_errorRelease();
    }
    func_0x000104603c54(&lStack_f0,0x113087060,&UNK_10dd201f0);
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
      goto LAB_1045d9034;
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
LAB_1045d9034:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 1045d905c; end: 1045d9107;  */

void FUN_1045d905c(undefined8 param_1,undefined8 param_2,long param_3)

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
    FUN_1045d9108();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1045d9108; end: 1045d91a7;  */

void FUN_1045d9108(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    FUN_1045f96a4();
    (*pcVar1)(&lStack_90,3,&UNK_11078d130,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1045d91a8; end: 1045d920f;  */

uint FUN_1045d91a8(undefined8 *param_1,undefined8 *param_2)

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
    if (lStack_220 != 0) goto LAB_1045f73b4;
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
    func_0x0001045f8fa8(&uStack_e0,&uStack_90,0x113087060,&UNK_10dd201f0);
    func_0x0001045f8fa8(&uStack_130,&uStack_90,0x113087060,&UNK_10dd201f0);
    func_0x000104603c54(&lStack_270,0x113087060,&UNK_10dd201f0);
  }
  else {
    if (lStack_220 == 0) {
LAB_1045f73b4:
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
      func_0x0001045f8fa8(&uStack_e0,&uStack_90,0x113087060,&UNK_10dd201f0);
      func_0x0001045f8fa8(&uStack_130,&uStack_90,0x113087060,&UNK_10dd201f0);
      func_0x000104603c54(&lStack_270,0x113087910,&UNK_10dd19bf0);
      uVar1 = 0;
      goto LAB_1045f74b0;
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
    func_0x0001045f8fa8(&uStack_e0,auStack_310,0x113087060,&UNK_10dd201f0);
    func_0x0001045f8fa8(&uStack_130,auStack_310,0x113087060,&UNK_10dd201f0);
    puVar2 = &uStack_90;
    func_0x0001045f6f0c(puVar2,&lStack_270);
    func_0x000104603c54(&lStack_2c0,0x113087060,&UNK_10dd201f0);
    func_0x000104603c54(&lStack_1d0,0x113087060,&UNK_10dd201f0);
    if (((ulong)puVar2 & 1) == 0) {
      uVar1 = 0;
      goto LAB_1045f74b0;
    }
  }
  uVar3 = *param_1;
  func_0x000100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
  uVar1 = (uint)uVar3;
LAB_1045f74b0:
  return uVar1 & 1;
}



/* Entry: 1045d9210; end: 1045d923f;  */

undefined1  [16] FUN_1045d9210(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1045d9240; end: 1045d9273;  */

void FUN_1045d9240(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1045d9274; end: 1045d9287;  */

undefined8 FUN_1045d9274(void)

{
  return 0x1045d9284;
}



/* Entry: 1045d9288; end: 1045d929b;  */

void FUN_1045d9288(void)

{
  FUN_1045d8dc4();
  return;
}



/* Entry: 1045d929c; end: 1045d92e3;  */

void FUN_1045d929c(void)

{
  FUN_1045d905c();
  return;
}



/* Entry: 1045d92e4; end: 1045d9383;  */

void FUN_1045d92e4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087ef8 != -1) {
    _swift_once(0x113087ef8,FUN_1045d8a5c);
  }
  uVar5 = uRam0000000113813fd8;
  uVar4 = uRam0000000113813fd0;
  uVar3 = uRam0000000113813fc8;
  uVar2 = uRam0000000113813fc0;
  uVar1 = uRam0000000113813fb8;
  *param_1 = uRam0000000113813fb0;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045d9384; end: 1045d9397;  */

void FUN_1045d9384(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130893d8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130893d8,&UNK_10dd1d8e8);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045d9398; end: 1045d959b;  */

/* WARNING: Removing unreachable block (ram,0x0001045d940c) */

void FUN_1045d9398(void)

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
  FUN_1045d8eac(&uStack_140);
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



/* Entry: 1045d959c; end: 1045d9603;  */

uint FUN_1045d959c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1045f71f8(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 1045d9604; end: 1045d9633;  */

void FUN_1045d9604(void)

{
  __sSS6appendyySSF(0x657672657365522e,0xee0065676e615264);
  uRam0000000113813fe0 = 0xd00000000000001f;
  uRam0000000113813fe8 = 0x800000010f2083f0;
  return;
}



/* Entry: 1045d9634; end: 1045d969b;  */

void FUN_1045d9634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  __sSS6appendyySSF(param_2,param_3);
  *param_4 = 0xd00000000000001f;
  *param_5 = 0x800000010f2083f0;
  return;
}



/* Entry: 1045d969c; end: 1045d96db;  */

undefined8 FUN_1045d969c(void)

{
  if (lRam0000000113087f00 != -1) {
    _swift_once(0x113087f00,FUN_1045d9604);
  }
  return 0x113813fe0;
}



/* Entry: 1045d96dc; end: 1045d96fb;  */

undefined1  [16] FUN_1045d96dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (lRam0000000113087f00 != -1) {
    _swift_once(0x113087f00,FUN_1045d9604);
  }
  uVar2 = uRam0000000113813fe8;
  uVar1 = uRam0000000113813fe0;
  _swift_bridgeObjectRetain(uRam0000000113813fe8);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 1045d96fc; end: 1045d9753;  */

undefined1  [16]
FUN_1045d96fc(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*param_1 != -1) {
    _swift_once(param_1,param_4);
  }
  uVar1 = *param_2;
  uVar2 = *param_3;
  _swift_bridgeObjectRetain(uVar2);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 1045d9754; end: 1045d9813;  */

void FUN_1045d9754(void)

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
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1e519,0xd,&uStack_48,&lStack_40);
  puRam0000000113813ff8 = puStack_38;
  lRam0000000113813ff0 = lStack_40;
  puRam0000000113814008 = puStack_28;
  puRam0000000113814000 = puStack_30;
  puRam0000000113814018 = puStack_18;
  puRam0000000113814010 = puStack_20;
  return;
}



/* Entry: 1045d9814; end: 1045d98b3;  */

void FUN_1045d9814(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087f08 != -1) {
    _swift_once(0x113087f08,FUN_1045d9754);
  }
  uVar5 = uRam0000000113814018;
  uVar4 = uRam0000000113814010;
  uVar3 = uRam0000000113814008;
  uVar2 = uRam0000000113814000;
  uVar1 = uRam0000000113813ff8;
  *param_1 = uRam0000000113813ff0;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045d98b4; end: 1045d9903;  */

void FUN_1045d98b4(void)

{
  FUN_1045de758();
  return;
}



/* Entry: 1045d9904; end: 1045d9927;  */

void FUN_1045d9904(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  func_0x0001045bf928(auStack_78,param_1,param_2,param_3 & 0xffffffffff,param_4 & 0xffffffffff);
  __ss6HasherV9_finalizeSiyF();
  return;
}


