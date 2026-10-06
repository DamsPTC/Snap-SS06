/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1045c07ec; end: 1045c0857;  */

undefined8 FUN_1045c07ec(void)

{
  return 0x1045c07fc;
}



/* Entry: 1045c0858; end: 1045c0897;  */

undefined1  [16] FUN_1045c0858(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x58);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045c0898; end: 1045c08cb;  */

void FUN_1045c0898(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  return;
}



/* Entry: 1045c08cc; end: 1045c0923;  */

undefined1  [16] FUN_1045c08cc(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0x58);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = FUN_1045c0924;
  return auVar4;
}



/* Entry: 1045c0924; end: 1045c0983;  */

void FUN_1045c0924(undefined8 *param_1,uint param_2)

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
    *(undefined8 *)(lVar2 + 0x50) = uVar1;
    *(undefined8 *)(lVar2 + 0x58) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x50) = uVar1;
  *(undefined8 *)(lVar2 + 0x58) = uVar3;
  return;
}



/* Entry: 1045c0984; end: 1045c0993;  */

bool FUN_1045c0984(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x58) != 0;
}



/* Entry: 1045c0994; end: 1045c09af;  */

void FUN_1045c0994(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  return;
}



/* Entry: 1045c09b0; end: 1045c09ef;  */

undefined1  [16] FUN_1045c09b0(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x68);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045c09f0; end: 1045c0a23;  */

void FUN_1045c09f0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x68));
  *(undefined8 *)(unaff_x20 + 0x60) = param_1;
  *(undefined8 *)(unaff_x20 + 0x68) = param_2;
  return;
}



/* Entry: 1045c0a24; end: 1045c0a7b;  */

undefined1  [16] FUN_1045c0a24(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0x68);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = FUN_1045c0a7c;
  return auVar4;
}



/* Entry: 1045c0a7c; end: 1045c0a8f;  */

void FUN_1045c0a7c(undefined8 *param_1,uint param_2)

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
    *(undefined8 *)(lVar2 + 0x60) = uVar1;
    *(undefined8 *)(lVar2 + 0x68) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x60) = uVar1;
  *(undefined8 *)(lVar2 + 0x68) = uVar3;
  return;
}



/* Entry: 1045c0a90; end: 1045c0aab;  */

void FUN_1045c0a90(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x68));
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  return;
}



/* Entry: 1045c0aac; end: 1045c0ab3;  */

void FUN_1045c0aac(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*unaff_x20);
  return;
}



/* Entry: 1045c0ab4; end: 1045c0adb;  */

void FUN_1045c0ab4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1045c0adc; end: 1045c0af7;  */

undefined8 FUN_1045c0adc(void)

{
  return 0x1045c0aec;
}



/* Entry: 1045c0af8; end: 1045c0b1f;  */

void FUN_1045c0af8(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 8));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  return;
}



/* Entry: 1045c0b20; end: 1045c0b3b;  */

undefined1  [16] FUN_1045c0b20(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1045c0b30;
  return auVar1;
}



/* Entry: 1045c0b3c; end: 1045c0b63;  */

void FUN_1045c0b3c(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1045c0b64; end: 1045c0b7f;  */

undefined1  [16] FUN_1045c0b64(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1045c0b74;
  return auVar1;
}



/* Entry: 1045c0b80; end: 1045c0ba7;  */

void FUN_1045c0b80(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 1045c0ba8; end: 1045c0bc3;  */

undefined1  [16] FUN_1045c0ba8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x1045c0bb8;
  return auVar1;
}



/* Entry: 1045c0bc4; end: 1045c0beb;  */

void FUN_1045c0bc4(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  return;
}



/* Entry: 1045c0bec; end: 1045c0c07;  */

undefined1  [16] FUN_1045c0bec(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x1045c0bfc;
  return auVar1;
}



/* Entry: 1045c0c08; end: 1045c0c2f;  */

void FUN_1045c0c08(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  return;
}



/* Entry: 1045c0c30; end: 1045c0c4b;  */

undefined1  [16] FUN_1045c0c30(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x1045c0c40;
  return auVar1;
}



/* Entry: 1045c0c4c; end: 1045c0c73;  */

void FUN_1045c0c4c(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  return;
}



/* Entry: 1045c0c74; end: 1045c0c8f;  */

undefined1  [16] FUN_1045c0c74(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x1045c0c84;
  return auVar1;
}



/* Entry: 1045c0c90; end: 1045c0cb7;  */

void FUN_1045c0c90(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  return;
}



/* Entry: 1045c0cb8; end: 1045c0ccb;  */

undefined1  [16] FUN_1045c0cb8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x38;
  auVar1._0_8_ = 0x1045c0cc8;
  return auVar1;
}



/* Entry: 1045c0ccc; end: 1045c0d8f;  */

undefined8 FUN_1045c0ccc(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
  lVar2 = *(long *)(unaff_x20 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar5 = uVar1;
  if (lVar2 == 0) {
    if (lRam00000001130878e8 != -1) {
      _swift_once(0x1130878e8,FUN_1045e1958);
    }
    _swift_retain(uRam00000001130878f0);
    uVar5 = 0;
  }
  func_0x0001045f8a0c(uVar1,uVar3,lVar2,uVar4);
  return uVar5;
}



/* Entry: 1045c0d90; end: 1045c0dab;  */

undefined8 FUN_1045c0d90(void)

{
  if (lRam00000001130878e8 != -1) {
    _swift_once(0x1130878e8,FUN_1045e1958);
  }
  _swift_retain(uRam00000001130878f0);
  return 0;
}



/* Entry: 1045c0dac; end: 1045c0edb;  */

void FUN_1045c0dac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x0001045f8a44(*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  *(undefined8 *)(unaff_x20 + 0x70) = param_1;
  *(undefined8 *)(unaff_x20 + 0x78) = param_2;
  *(undefined8 *)(unaff_x20 + 0x80) = param_3;
  *(undefined8 *)(unaff_x20 + 0x88) = param_4;
  return;
}



/* Entry: 1045c0edc; end: 1045c0edf;  */

void FUN_1045c0edc(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = param_1[3];
  lVar5 = param_1[4];
  uVar2 = *param_1;
  uVar6 = param_1[1];
  uVar9 = param_1[2];
  uVar3 = *(undefined8 *)(lVar5 + 0x70);
  uVar7 = *(undefined8 *)(lVar5 + 0x78);
  uVar4 = *(undefined8 *)(lVar5 + 0x80);
  uVar8 = *(undefined8 *)(lVar5 + 0x88);
  if ((param_2 & 1) == 0) {
    func_0x0001045f8a44(uVar3,uVar7,uVar4,uVar8);
    *(undefined8 *)(lVar5 + 0x70) = uVar2;
    *(undefined8 *)(lVar5 + 0x78) = uVar6;
    *(undefined8 *)(lVar5 + 0x80) = uVar9;
    *(undefined8 *)(lVar5 + 0x88) = uVar1;
  }
  else {
    func_0x00010006c00c(uVar2,uVar6);
    _swift_bridgeObjectRetain(uVar9);
    _swift_retain(uVar1);
    func_0x0001045f8a44(uVar3,uVar7,uVar4,uVar8);
    *(undefined8 *)(lVar5 + 0x70) = uVar2;
    *(undefined8 *)(lVar5 + 0x78) = uVar6;
    *(undefined8 *)(lVar5 + 0x80) = uVar9;
    *(undefined8 *)(lVar5 + 0x88) = uVar1;
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    func_0x00010006c090(*param_1,param_1[1]);
    _swift_bridgeObjectRelease(uVar1);
    _swift_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 1045c0ee0; end: 1045c0f7f;  */

bool FUN_1045c0ee0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x88);
  lVar4 = *(long *)(unaff_x20 + 0x80);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  lStack_40 = lVar4;
  uStack_38 = uVar3;
  if (lVar4 == 0) {
    func_0x0001045f8fa8(&uStack_50,auStack_70,0x1130878f8,&UNK_10dd19bc8);
  }
  else {
    func_0x0001045f8fa8(&uStack_50,auStack_70,0x1130878f8,&UNK_10dd19bc8);
    func_0x0001045f8a44(uVar1,uVar2,lVar4,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
  }
  func_0x0001045f8a44(uVar1,uVar2,0,uVar3);
  return lVar4 != 0;
}



/* Entry: 1045c0f80; end: 1045c0fa3;  */

void FUN_1045c0f80(void)

{
  long unaff_x20;
  
  func_0x0001045f8a44(*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  return;
}



/* Entry: 1045c0fa4; end: 1045c1007;  */

undefined * FUN_1045c0fa4(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(undefined **)(unaff_x20 + 0x90) != (undefined *)0x0) {
    puVar1 = *(undefined **)(unaff_x20 + 0x90);
  }
  FUN_1045f8404();
  return puVar1;
}



/* Entry: 1045c1008; end: 1045c1023;  */

undefined * FUN_1045c1008(void)

{
  return PTR___swiftEmptyArrayStorage_11034f1c8;
}



/* Entry: 1045c1024; end: 1045c106f;  */

void FUN_1045c1024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x0001045f844c(*(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8));
  *(undefined8 *)(unaff_x20 + 0x90) = param_1;
  *(undefined8 *)(unaff_x20 + 0x98) = param_2;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_3;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_4;
  return;
}



/* Entry: 1045c1070; end: 1045c1107;  */

undefined1  [16] FUN_1045c1070(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  bool bVar5;
  long *plVar6;
  long unaff_x20;
  undefined1 auVar7 [16];
  
  plVar6 = (long *)0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x28,0x2504);
  }
  *param_1 = plVar6;
  plVar6[4] = unaff_x20;
  bVar5 = *(undefined **)(unaff_x20 + 0x90) != (undefined *)0x0;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (bVar5) {
    puVar1 = *(undefined **)(unaff_x20 + 0x90);
  }
  lVar2 = 0;
  if (bVar5) {
    lVar2 = *(long *)(unaff_x20 + 0x98);
  }
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar4 = -0x4000000000000000;
  if (bVar5) {
    puVar3 = *(undefined **)(unaff_x20 + 0xa8);
    lVar4 = *(long *)(unaff_x20 + 0xa0);
  }
  *plVar6 = (long)puVar1;
  plVar6[1] = lVar2;
  plVar6[2] = lVar4;
  plVar6[3] = (long)puVar3;
  FUN_1045f8404();
  auVar7._8_8_ = plVar6;
  auVar7._0_8_ = FUN_1045c1108;
  return auVar7;
}



/* Entry: 1045c1108; end: 1045c11d7;  */

void FUN_1045c1108(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = param_1[3];
  lVar5 = param_1[4];
  uVar2 = *param_1;
  uVar6 = param_1[1];
  uVar9 = param_1[2];
  uVar3 = *(undefined8 *)(lVar5 + 0x90);
  uVar7 = *(undefined8 *)(lVar5 + 0x98);
  uVar4 = *(undefined8 *)(lVar5 + 0xa0);
  uVar8 = *(undefined8 *)(lVar5 + 0xa8);
  if ((param_2 & 1) == 0) {
    func_0x0001045f844c(uVar3,uVar7,uVar4,uVar8);
    *(undefined8 *)(lVar5 + 0x90) = uVar2;
    *(undefined8 *)(lVar5 + 0x98) = uVar6;
    *(undefined8 *)(lVar5 + 0xa0) = uVar9;
    *(undefined8 *)(lVar5 + 0xa8) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar2);
    func_0x00010006c00c(uVar6,uVar9);
    _swift_bridgeObjectRetain(uVar1);
    func_0x0001045f844c(uVar3,uVar7,uVar4,uVar8);
    *(undefined8 *)(lVar5 + 0x90) = uVar2;
    *(undefined8 *)(lVar5 + 0x98) = uVar6;
    *(undefined8 *)(lVar5 + 0xa0) = uVar9;
    *(undefined8 *)(lVar5 + 0xa8) = uVar1;
    uVar2 = param_1[1];
    uVar1 = param_1[2];
    uVar3 = param_1[3];
    _swift_bridgeObjectRelease(*param_1);
    func_0x00010006c090(uVar2,uVar1);
    _swift_bridgeObjectRelease(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 1045c11d8; end: 1045c1277;  */

bool FUN_1045c11d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [32];
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x98);
  lVar4 = *(long *)(unaff_x20 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa0);
  lStack_50 = lVar4;
  uStack_48 = uVar1;
  uStack_40 = uVar2;
  uStack_38 = uVar3;
  if (lVar4 == 0) {
    func_0x0001045f8fa8(&lStack_50,auStack_70,0x113087900,&UNK_10dd19bd0);
  }
  else {
    func_0x0001045f8fa8(&lStack_50,auStack_70,0x113087900,&UNK_10dd19bd0);
    func_0x0001045f844c(lVar4,uVar1,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
  }
  func_0x0001045f844c(0,uVar1,uVar2,uVar3);
  return lVar4 != 0;
}



/* Entry: 1045c1278; end: 1045c129b;  */

void FUN_1045c1278(void)

{
  long unaff_x20;
  
  func_0x0001045f844c(*(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8));
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  return;
}



/* Entry: 1045c129c; end: 1045c12db;  */

undefined1  [16] FUN_1045c129c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0xb8);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0xb0);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045c12dc; end: 1045c130f;  */

void FUN_1045c12dc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xb8));
  *(undefined8 *)(unaff_x20 + 0xb0) = param_1;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_2;
  return;
}



/* Entry: 1045c1310; end: 1045c1367;  */

undefined1  [16] FUN_1045c1310(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0xb8);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0xb0);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = FUN_1045c1368;
  return auVar4;
}



/* Entry: 1045c1368; end: 1045c13c7;  */

void FUN_1045c1368(undefined8 *param_1,uint param_2)

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
    *(undefined8 *)(lVar2 + 0xb0) = uVar1;
    *(undefined8 *)(lVar2 + 0xb8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0xb0) = uVar1;
  *(undefined8 *)(lVar2 + 0xb8) = uVar3;
  return;
}



/* Entry: 1045c13c8; end: 1045c13d7;  */

bool FUN_1045c13c8(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0xb8) != 0;
}



/* Entry: 1045c13d8; end: 1045c13f3;  */

void FUN_1045c13d8(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xb8));
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  return;
}



/* Entry: 1045c13f4; end: 1045c145b;  */

char FUN_1045c13f4(void)

{
  char cVar1;
  long unaff_x20;
  
  cVar1 = '\0';
  if (*(char *)(unaff_x20 + 0xc0) != '\f') {
    cVar1 = *(char *)(unaff_x20 + 0xc0);
  }
  return cVar1;
}



/* Entry: 1045c145c; end: 1045c148b;  */

undefined1  [16] FUN_1045c145c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x40);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48));
  return auVar1;
}



/* Entry: 1045c148c; end: 1045c14bf;  */

void FUN_1045c148c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  return;
}



/* Entry: 1045c14c0; end: 1045c152f;  */

undefined1  [16] FUN_1045c14c0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = 0x1045c14d0;
  return auVar1;
}



/* Entry: 1045c1530; end: 1045c15cb;  */

undefined1  [16] FUN_1045c1530(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar1 = 0x60;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x60,0xac54);
  }
  *param_1 = lVar1;
  *(long *)(lVar1 + 0x58) = unaff_x20;
  lVar4 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar4 + 0x10,lVar1,0,0);
  lVar2 = *(long *)(lVar4 + 0x18);
  if (lVar2 == 0) {
    uVar3 = 0;
    lVar2 = -0x2000000000000000;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x10);
  }
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(long *)(lVar1 + 0x50) = lVar2;
  _swift_bridgeObjectRetain();
  auVar5._8_8_ = lVar1 + 0x48;
  auVar5._0_8_ = FUN_1045c15cc;
  return auVar5;
}



/* Entry: 1045c15cc; end: 1045c15e3;  */

void FUN_1045c15cc(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar5 = *param_1;
  uVar7 = *(undefined8 *)(lVar5 + 0x48);
  uVar1 = *(undefined8 *)(lVar5 + 0x50);
  lVar4 = *(long *)(lVar5 + 0x58);
  if ((param_2 & 1) == 0) {
    uVar2 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar8 = *(long *)(lVar5 + 0x58);
      FUN_1045f8494(0);
      _swift_allocObject();
      FUN_1045f84b4();
      _swift_release(lVar6);
      *(long *)(lVar8 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x10,lVar5 + 0x30,1,0);
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    *(undefined8 *)(lVar4 + 0x10) = uVar7;
    *(undefined8 *)(lVar4 + 0x18) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    uVar2 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar8 = *(long *)(lVar5 + 0x58);
      FUN_1045f8494(0);
      _swift_allocObject();
      FUN_1045f84b4();
      _swift_release(lVar6);
      *(long *)(lVar8 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x10,lVar5 + 0x18,1,0);
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    *(undefined8 *)(lVar4 + 0x10) = uVar7;
    *(undefined8 *)(lVar4 + 0x18) = uVar1;
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = *(undefined8 *)(lVar5 + 0x50);
  }
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar5);
  return;
}



/* Entry: 1045c15e4; end: 1045c1627;  */

bool FUN_1045c15e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_38,0,0);
  return *(long *)(param_3 + 0x18) != 0;
}



/* Entry: 1045c1628; end: 1045c165b;  */

void FUN_1045c1628(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    FUN_1045f8494(0);
    _swift_allocObject();
    FUN_1045f84b4();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x10,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 1045c165c; end: 1045c16df;  */

undefined1  [16] FUN_1045c165c(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = 0x58;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x58,0xc1e9);
  }
  *param_1 = lVar1;
  *(long *)(lVar1 + 0x50) = unaff_x20;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar2 + 0x20,lVar1,0,0);
  *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(lVar2 + 0x20);
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = (undefined8 *)(lVar1 + 0x48);
  auVar3._0_8_ = FUN_1045c16e0;
  return auVar3;
}



/* Entry: 1045c16e0; end: 1045c16f7;  */

void FUN_1045c16e0(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  uVar4 = *(undefined8 *)(lVar3 + 0x48);
  lVar5 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_1045f8494(0);
      _swift_allocObject();
      FUN_1045f84b4();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x20,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar5 + 0x20);
    *(undefined8 *)(lVar5 + 0x20) = uVar4;
  }
  else {
    _swift_bridgeObjectRetain(uVar4);
    uVar1 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_1045f8494(0);
      _swift_allocObject();
      FUN_1045f84b4();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x20,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar5 + 0x20);
    *(undefined8 *)(lVar5 + 0x20) = uVar4;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar3);
  return;
}



/* Entry: 1045c16f8; end: 1045c1737;  */

void FUN_1045c16f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x28,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_3 + 0x28));
  return;
}



/* Entry: 1045c1738; end: 1045c184f;  */

void FUN_1045c1738(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    FUN_1045f8494(0);
    _swift_allocObject();
    FUN_1045f84b4();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x28,auStack_48,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_1;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 1045c1850; end: 1045c196f;  */

void FUN_1045c1850(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  uVar5 = *(undefined8 *)(lVar3 + 0x48);
  lVar4 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_1045f8494(0);
      _swift_allocObject();
      FUN_1045f84b4();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x28,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar5;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_1045f8494(0);
      _swift_allocObject();
      FUN_1045f84b4();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x28,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar3);
  return;
}



/* Entry: 1045c1970; end: 1045c19af;  */

void FUN_1045c1970(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x30,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 1045c19b0; end: 1045c1ac7;  */

void FUN_1045c19b0(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    FUN_1045f8494(0);
    _swift_allocObject();
    FUN_1045f84b4();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x30,auStack_48,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 1045c1ac8; end: 1045c1be7;  */

void FUN_1045c1ac8(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  uVar5 = *(undefined8 *)(lVar3 + 0x48);
  lVar4 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_1045f8494(0);
      _swift_allocObject();
      FUN_1045f84b4();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x30,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x30);
    *(undefined8 *)(lVar4 + 0x30) = uVar5;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_1045f8494(0);
      _swift_allocObject();
      FUN_1045f84b4();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x30,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x30);
    *(undefined8 *)(lVar4 + 0x30) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar3);
  return;
}



/* Entry: 1045c1be8; end: 1045c1c27;  */

void FUN_1045c1be8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x38,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_3 + 0x38));
  return;
}



/* Entry: 1045c1c28; end: 1045c1d3f;  */

void FUN_1045c1c28(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    FUN_1045f8494(0);
    _swift_allocObject();
    FUN_1045f84b4();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x38,auStack_48,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x38);
  *(undefined8 *)(lVar2 + 0x38) = param_1;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 1045c1d40; end: 1045c1e5f;  */

void FUN_1045c1d40(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  uVar5 = *(undefined8 *)(lVar3 + 0x48);
  lVar4 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_1045f8494(0);
      _swift_allocObject();
      FUN_1045f84b4();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x38,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x38);
    *(undefined8 *)(lVar4 + 0x38) = uVar5;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_1045f8494(0);
      _swift_allocObject();
      FUN_1045f84b4();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x38,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x38);
    *(undefined8 *)(lVar4 + 0x38) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar3);
  return;
}



/* Entry: 1045c1e60; end: 1045c1e9f;  */

void FUN_1045c1e60(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x40,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_3 + 0x40));
  return;
}



/* Entry: 1045c1ea0; end: 1045c1fb7;  */

void FUN_1045c1ea0(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    FUN_1045f8494(0);
    _swift_allocObject();
    FUN_1045f84b4();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x40,auStack_48,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  *(undefined8 *)(lVar2 + 0x40) = param_1;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 1045c1fb8; end: 1045c20d7;  */

void FUN_1045c1fb8(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  uVar5 = *(undefined8 *)(lVar3 + 0x48);
  lVar4 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_1045f8494(0);
      _swift_allocObject();
      FUN_1045f84b4();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x40,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x40);
    *(undefined8 *)(lVar4 + 0x40) = uVar5;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_1045f8494(0);
      _swift_allocObject();
      FUN_1045f84b4();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x40,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x40);
    *(undefined8 *)(lVar4 + 0x40) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar3);
  return;
}



/* Entry: 1045c20d8; end: 1045c2117;  */

void FUN_1045c20d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x48,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_3 + 0x48));
  return;
}



/* Entry: 1045c2118; end: 1045c222f;  */

void FUN_1045c2118(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    FUN_1045f8494(0);
    _swift_allocObject();
    FUN_1045f84b4();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x48,auStack_48,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x48);
  *(undefined8 *)(lVar2 + 0x48) = param_1;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 1045c2230; end: 1045c234f;  */

void FUN_1045c2230(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  uVar5 = *(undefined8 *)(lVar3 + 0x48);
  lVar4 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_1045f8494(0);
      _swift_allocObject();
      FUN_1045f84b4();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x48,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x48);
    *(undefined8 *)(lVar4 + 0x48) = uVar5;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_1045f8494(0);
      _swift_allocObject();
      FUN_1045f84b4();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x48,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x48);
    *(undefined8 *)(lVar4 + 0x48) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar3);
  return;
}



/* Entry: 1045c2350; end: 1045c2463;  */

void FUN_1045c2350(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [72];
  undefined1 auStack_b8 [24];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _swift_beginAccess(param_4 + 0x50,auStack_b8,0,0);
  uStack_98 = *(undefined8 *)(param_4 + 0x58);
  puStack_a0 = *(undefined **)(param_4 + 0x50);
  puStack_88 = *(undefined **)(param_4 + 0x68);
  uStack_90 = *(undefined8 *)(param_4 + 0x60);
  uStack_78 = *(undefined8 *)(param_4 + 0x78);
  uVar6 = *(undefined8 *)(param_4 + 0x70);
  uStack_68 = *(undefined8 *)(param_4 + 0x88);
  uStack_70 = *(undefined8 *)(param_4 + 0x80);
  uStack_60 = *(undefined8 *)(param_4 + 0x90);
  if (puStack_a0 == (undefined *)0x0) {
    uVar1 = 0;
    uStack_120 = 0x2000200020002;
    uStack_108 = 0;
    uStack_110 = 0;
    uVar3 = 2;
    uVar5 = 0xc000000000000000;
    uStack_128 = 0;
    uStack_130 = 0;
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    uStack_120 = (ulong)CONCAT16((char)((ulong)uVar6 >> 0x18),
                                 (uint6)CONCAT14((char)((ulong)uVar6 >> 0x10),
                                                 (uint)CONCAT12((char)((ulong)uVar6 >> 8),
                                                                (ushort)(byte)uVar6)));
    uStack_80._4_1_ = (undefined1)((ulong)uVar6 >> 0x20);
    uVar1 = uStack_98;
    puVar2 = puStack_a0;
    puVar4 = puStack_88;
    uVar5 = uStack_90;
    uVar3 = uStack_80._4_1_;
    uStack_130 = uStack_68;
    uStack_128 = uStack_60;
    uStack_110 = uStack_78;
    uStack_108 = uStack_70;
  }
  uStack_80 = uVar6;
  func_0x0001045f8fa8(&puStack_a0,auStack_100,0x113087030,&UNK_10dd18948);
  *param_1 = puVar2;
  param_1[1] = uVar1;
  param_1[2] = uVar5;
  param_1[3] = puVar4;
  *(uint *)(param_1 + 4) =
       CONCAT13((char)(uStack_120 >> 0x30),
                CONCAT12((char)(uStack_120 >> 0x20),
                         CONCAT11((char)(uStack_120 >> 0x10),(char)uStack_120)));
  *(undefined1 *)((long)param_1 + 0x24) = uVar3;
  param_1[8] = uStack_128;
  param_1[7] = uStack_130;
  param_1[6] = uStack_108;
  param_1[5] = uStack_110;
  return;
}



/* Entry: 1045c2464; end: 1045c24a3;  */

void FUN_1045c2464(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[3] = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined4 *)(param_1 + 4) = 0x2020202;
  *(undefined1 *)((long)param_1 + 0x24) = 2;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  return;
}



/* Entry: 1045c24a4; end: 1045c2597;  */

void FUN_1045c24a4(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_f8 [24];
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
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    FUN_1045f8494(0);
    _swift_allocObject();
    FUN_1045f84b4();
    _swift_release(lVar3);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_a0 = param_1[8];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  _swift_beginAccess(lVar2 + 0x50,auStack_f8,1,0);
  uStack_68 = *(undefined8 *)(lVar2 + 0x78);
  uStack_70 = *(undefined8 *)(lVar2 + 0x70);
  uStack_58 = *(undefined8 *)(lVar2 + 0x88);
  uStack_60 = *(undefined8 *)(lVar2 + 0x80);
  uStack_50 = *(undefined8 *)(lVar2 + 0x90);
  uStack_88 = *(undefined8 *)(lVar2 + 0x58);
  uStack_90 = *(undefined8 *)(lVar2 + 0x50);
  uStack_78 = *(undefined8 *)(lVar2 + 0x68);
  uStack_80 = *(undefined8 *)(lVar2 + 0x60);
  *(undefined8 *)(lVar2 + 0x78) = uStack_b8;
  *(undefined8 *)(lVar2 + 0x70) = uStack_c0;
  *(undefined8 *)(lVar2 + 0x88) = uStack_a8;
  *(undefined8 *)(lVar2 + 0x80) = uStack_b0;
  *(undefined8 *)(lVar2 + 0x90) = uStack_a0;
  *(undefined8 *)(lVar2 + 0x58) = uStack_d8;
  *(undefined8 *)(lVar2 + 0x50) = uStack_e0;
  *(undefined8 *)(lVar2 + 0x68) = uStack_c8;
  *(undefined8 *)(lVar2 + 0x60) = uStack_d0;
  func_0x000104603c54(&uStack_90,0x113087030,&UNK_10dd18948);
  return;
}



/* Entry: 1045c2598; end: 1045c26b3;  */

undefined1  [16] FUN_1045c2598(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  
  puVar1 = (undefined8 *)0x158;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x158,0x3644);
  }
  *param_1 = puVar1;
  puVar1[0x2a] = unaff_x20;
  lVar5 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar5 + 0x50,puVar1 + 0x24,0,0);
  uVar6 = *(undefined8 *)(lVar5 + 0x50);
  puVar1[1] = *(undefined8 *)(lVar5 + 0x58);
  *puVar1 = uVar6;
  uVar7 = *(undefined8 *)(lVar5 + 0x68);
  uVar6 = *(undefined8 *)(lVar5 + 0x60);
  uVar10 = *(undefined8 *)(lVar5 + 0x78);
  uVar9 = *(undefined8 *)(lVar5 + 0x70);
  uVar13 = *(undefined8 *)(lVar5 + 0x88);
  uVar11 = *(undefined8 *)(lVar5 + 0x80);
  puVar1[8] = *(undefined8 *)(lVar5 + 0x90);
  puVar1[5] = uVar10;
  puVar1[4] = uVar9;
  puVar1[7] = uVar13;
  puVar1[6] = uVar11;
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  if ((undefined *)*puVar1 == (undefined *)0x0) {
    uVar7 = 0xc000000000000000;
    uVar6 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar12 = 0x2000200020002;
    uVar3 = 2;
    uVar11 = 0;
    uVar13 = 0;
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    uVar7 = puVar1[2];
    uVar6 = puVar1[1];
    uVar8 = *(undefined4 *)(puVar1 + 4);
    uVar12 = (ulong)CONCAT16((char)((uint)uVar8 >> 0x18),
                             (uint6)CONCAT14((char)((uint)uVar8 >> 0x10),
                                             (uint)CONCAT12((char)((uint)uVar8 >> 8),
                                                            (ushort)(byte)uVar8)));
    uVar3 = *(undefined1 *)((long)puVar1 + 0x24);
    uVar10 = puVar1[6];
    uVar9 = puVar1[5];
    uVar13 = puVar1[8];
    uVar11 = puVar1[7];
    puVar2 = (undefined *)*puVar1;
    puVar4 = (undefined *)puVar1[3];
  }
  puVar1[9] = puVar2;
  puVar1[0xb] = uVar7;
  puVar1[10] = uVar6;
  puVar1[0xc] = puVar4;
  *(uint *)(puVar1 + 0xd) =
       CONCAT13((char)(uVar12 >> 0x30),
                CONCAT12((char)(uVar12 >> 0x20),CONCAT11((char)(uVar12 >> 0x10),(char)uVar12)));
  *(undefined1 *)((long)puVar1 + 0x6c) = uVar3;
  puVar1[0xf] = uVar10;
  puVar1[0xe] = uVar9;
  puVar1[0x11] = uVar13;
  puVar1[0x10] = uVar11;
  func_0x0001045f8fa8(puVar1,puVar1 + 0x12,0x113087030,&UNK_10dd18948);
  auVar14._8_8_ = puVar1 + 9;
  auVar14._0_8_ = FUN_1045c26b4;
  return auVar14;
}



/* Entry: 1045c26b4; end: 1045c28bf;  */

void FUN_1045c26b4(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  undefined8 uVar21;
  
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + 0xd8);
  lVar5 = *(long *)(lVar4 + 0x150);
  if ((param_2 & 1) == 0) {
    uVar9 = *(undefined8 *)(lVar4 + 0x60);
    uVar8 = *(undefined8 *)(lVar4 + 0x58);
    uVar13 = *(undefined8 *)(lVar4 + 0x70);
    uVar10 = *(undefined8 *)(lVar4 + 0x68);
    uVar17 = *(undefined8 *)(lVar4 + 0x80);
    uVar16 = *(undefined8 *)(lVar4 + 0x78);
    uVar3 = *(undefined8 *)(lVar4 + 0x88);
    uVar14 = *(undefined8 *)(lVar4 + 0x50);
    uVar12 = *(undefined8 *)(lVar4 + 0x48);
    uVar2 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x150);
      FUN_1045f8494(0);
      _swift_allocObject();
      FUN_1045f84b4();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x50,puVar1,1,0);
    uVar11 = *(undefined8 *)(lVar5 + 0x50);
    *(undefined8 *)(lVar4 + 0x98) = *(undefined8 *)(lVar5 + 0x58);
    *(undefined8 *)(lVar4 + 0x90) = uVar11;
    uVar15 = *(undefined8 *)(lVar5 + 0x68);
    uVar11 = *(undefined8 *)(lVar5 + 0x60);
    uVar19 = *(undefined8 *)(lVar5 + 0x78);
    uVar18 = *(undefined8 *)(lVar5 + 0x70);
    uVar21 = *(undefined8 *)(lVar5 + 0x88);
    uVar20 = *(undefined8 *)(lVar5 + 0x80);
    *(undefined8 *)(lVar4 + 0xd0) = *(undefined8 *)(lVar5 + 0x90);
    *(undefined8 *)(lVar4 + 0xb8) = uVar19;
    *(undefined8 *)(lVar4 + 0xb0) = uVar18;
    *(undefined8 *)(lVar4 + 200) = uVar21;
    *(undefined8 *)(lVar4 + 0xc0) = uVar20;
    *(undefined8 *)(lVar4 + 0xa8) = uVar15;
    *(undefined8 *)(lVar4 + 0xa0) = uVar11;
    *(undefined8 *)(lVar5 + 0x78) = uVar13;
    *(undefined8 *)(lVar5 + 0x70) = uVar10;
    *(undefined8 *)(lVar5 + 0x88) = uVar17;
    *(undefined8 *)(lVar5 + 0x80) = uVar16;
    *(undefined8 *)(lVar5 + 0x90) = uVar3;
    *(undefined8 *)(lVar5 + 0x58) = uVar14;
    *(undefined8 *)(lVar5 + 0x50) = uVar12;
    *(undefined8 *)(lVar5 + 0x68) = uVar9;
    *(undefined8 *)(lVar5 + 0x60) = uVar8;
    func_0x000104603c54(lVar4 + 0x90,0x113087030,&UNK_10dd18948);
  }
  else {
    *(undefined8 *)(lVar4 + 0xb8) = *(undefined8 *)(lVar4 + 0x70);
    *(undefined8 *)(lVar4 + 0xb0) = *(undefined8 *)(lVar4 + 0x68);
    *(undefined8 *)(lVar4 + 200) = *(undefined8 *)(lVar4 + 0x80);
    *(undefined8 *)(lVar4 + 0xc0) = *(undefined8 *)(lVar4 + 0x78);
    *(undefined8 *)(lVar4 + 0xd0) = *(undefined8 *)(lVar4 + 0x88);
    *(undefined8 *)(lVar4 + 0x98) = *(undefined8 *)(lVar4 + 0x50);
    *(undefined8 *)(lVar4 + 0x90) = *(undefined8 *)(lVar4 + 0x48);
    *(undefined8 *)(lVar4 + 0xa8) = *(undefined8 *)(lVar4 + 0x60);
    *(undefined8 *)(lVar4 + 0xa0) = *(undefined8 *)(lVar4 + 0x58);
    FUN_1045f88b8(lVar4 + 0x90,puVar1);
    uVar2 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x150);
      FUN_1045f8494(0);
      _swift_allocObject();
      FUN_1045f84b4();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    uVar12 = *(undefined8 *)(lVar4 + 0xb8);
    uVar8 = *(undefined8 *)(lVar4 + 0xb0);
    uVar15 = *(undefined8 *)(lVar4 + 200);
    uVar16 = *(undefined8 *)(lVar4 + 0xc0);
    uVar3 = *(undefined8 *)(lVar4 + 0xd0);
    uVar18 = *(undefined8 *)(lVar4 + 0x98);
    uVar17 = *(undefined8 *)(lVar4 + 0x90);
    uVar13 = *(undefined8 *)(lVar4 + 0xa8);
    uVar9 = *(undefined8 *)(lVar4 + 0xa0);
    _swift_beginAccess(lVar5 + 0x50,lVar4 + 0x138,1,0);
    uVar10 = *(undefined8 *)(lVar5 + 0x50);
    *(undefined8 *)(lVar4 + 0xe0) = *(undefined8 *)(lVar5 + 0x58);
    *puVar1 = uVar10;
    uVar14 = *(undefined8 *)(lVar5 + 0x68);
    uVar10 = *(undefined8 *)(lVar5 + 0x60);
    uVar19 = *(undefined8 *)(lVar5 + 0x78);
    uVar11 = *(undefined8 *)(lVar5 + 0x70);
    uVar21 = *(undefined8 *)(lVar5 + 0x88);
    uVar20 = *(undefined8 *)(lVar5 + 0x80);
    *(undefined8 *)(lVar4 + 0x118) = *(undefined8 *)(lVar5 + 0x90);
    *(undefined8 *)(lVar4 + 0x100) = uVar19;
    *(undefined8 *)(lVar4 + 0xf8) = uVar11;
    *(undefined8 *)(lVar4 + 0x110) = uVar21;
    *(undefined8 *)(lVar4 + 0x108) = uVar20;
    *(undefined8 *)(lVar4 + 0xf0) = uVar14;
    *(undefined8 *)(lVar4 + 0xe8) = uVar10;
    *(undefined8 *)(lVar5 + 0x78) = uVar12;
    *(undefined8 *)(lVar5 + 0x70) = uVar8;
    *(undefined8 *)(lVar5 + 0x88) = uVar15;
    *(undefined8 *)(lVar5 + 0x80) = uVar16;
    *(undefined8 *)(lVar5 + 0x90) = uVar3;
    *(undefined8 *)(lVar5 + 0x58) = uVar18;
    *(undefined8 *)(lVar5 + 0x50) = uVar17;
    *(undefined8 *)(lVar5 + 0x68) = uVar13;
    *(undefined8 *)(lVar5 + 0x60) = uVar9;
    func_0x000104603c54(puVar1,0x113087030,&UNK_10dd18948);
    func_0x0001045f88ec(lVar4 + 0x48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045c28c0; end: 1045c2aaf;  */

bool FUN_1045c28c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_170 [72];
  long lStack_128;
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
  undefined1 auStack_98 [24];
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _swift_beginAccess(param_3 + 0x50,auStack_98,0,0);
  uStack_78 = *(undefined8 *)(param_3 + 0x58);
  lVar3 = *(long *)(param_3 + 0x50);
  uStack_68 = *(undefined8 *)(param_3 + 0x68);
  uStack_70 = *(undefined8 *)(param_3 + 0x60);
  uStack_58 = *(undefined8 *)(param_3 + 0x78);
  uStack_60 = *(undefined8 *)(param_3 + 0x70);
  uStack_48 = *(undefined8 *)(param_3 + 0x88);
  uStack_50 = *(undefined8 *)(param_3 + 0x80);
  uStack_40 = *(undefined8 *)(param_3 + 0x90);
  lStack_80 = lVar3;
  if (lVar3 == 0) {
    lStack_128 = 0;
    uStack_118 = *(undefined8 *)(param_3 + 0x60);
    uStack_120 = *(undefined8 *)(param_3 + 0x58);
    uStack_108 = *(undefined8 *)(param_3 + 0x70);
    uStack_110 = *(undefined8 *)(param_3 + 0x68);
    uStack_f8 = *(undefined8 *)(param_3 + 0x80);
    uStack_100 = *(undefined8 *)(param_3 + 0x78);
    uStack_e8 = *(undefined8 *)(param_3 + 0x90);
    uStack_f0 = *(undefined8 *)(param_3 + 0x88);
    uVar1 = 0x113087030;
    puVar2 = &UNK_10dd18948;
    func_0x0001045f8fa8(&lStack_80,auStack_170,0x113087030,&UNK_10dd18948);
  }
  else {
    uStack_118 = *(undefined8 *)(param_3 + 0x60);
    uStack_120 = *(undefined8 *)(param_3 + 0x58);
    uStack_108 = *(undefined8 *)(param_3 + 0x70);
    uStack_110 = *(undefined8 *)(param_3 + 0x68);
    uStack_f8 = *(undefined8 *)(param_3 + 0x80);
    uStack_100 = *(undefined8 *)(param_3 + 0x78);
    uStack_e8 = *(undefined8 *)(param_3 + 0x90);
    uStack_f0 = *(undefined8 *)(param_3 + 0x88);
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_a0 = 0;
    lStack_128 = lVar3;
    func_0x0001045f8fa8(&lStack_80,auStack_170,0x113087030,&UNK_10dd18948);
    uVar1 = 0x113087908;
    puVar2 = &UNK_10dd19be0;
  }
  func_0x000104603c54(&lStack_128,uVar1,puVar2);
  return lVar3 != 0;
}



/* Entry: 1045c2ab0; end: 1045c2aef;  */

void FUN_1045c2ab0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x98,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_3 + 0x98));
  return;
}



/* Entry: 1045c2af0; end: 1045c2c07;  */

void FUN_1045c2af0(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    FUN_1045f8494(0);
    _swift_allocObject();
    FUN_1045f84b4();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x98,auStack_48,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x98);
  *(undefined8 *)(lVar2 + 0x98) = param_1;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 1045c2c08; end: 1045c2d27;  */

void FUN_1045c2c08(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  uVar5 = *(undefined8 *)(lVar3 + 0x48);
  lVar4 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_1045f8494(0);
      _swift_allocObject();
      FUN_1045f84b4();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x98,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x98);
    *(undefined8 *)(lVar4 + 0x98) = uVar5;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_1045f8494(0);
      _swift_allocObject();
      FUN_1045f84b4();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x98,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x98);
    *(undefined8 *)(lVar4 + 0x98) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar3);
  return;
}



/* Entry: 1045c2d28; end: 1045c2d67;  */

void FUN_1045c2d28(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0xa0,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_3 + 0xa0));
  return;
}



/* Entry: 1045c2d68; end: 1045c2e7f;  */

void FUN_1045c2d68(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    FUN_1045f8494(0);
    _swift_allocObject();
    FUN_1045f84b4();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0xa0,auStack_48,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0xa0);
  *(undefined8 *)(lVar2 + 0xa0) = param_1;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 1045c2e80; end: 1045c2f9f;  */

void FUN_1045c2e80(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  uVar5 = *(undefined8 *)(lVar3 + 0x48);
  lVar4 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_1045f8494(0);
      _swift_allocObject();
      FUN_1045f84b4();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0xa0,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0xa0);
    *(undefined8 *)(lVar4 + 0xa0) = uVar5;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_1045f8494(0);
      _swift_allocObject();
      FUN_1045f84b4();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0xa0,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0xa0);
    *(undefined8 *)(lVar4 + 0xa0) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar3);
  return;
}



/* Entry: 1045c2fa0; end: 1045c2fe3;  */

char FUN_1045c2fa0(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0xa8,auStack_38,0,0);
  cVar1 = '\0';
  if (*(char *)(param_3 + 0xa8) != '\x03') {
    cVar1 = *(char *)(param_3 + 0xa8);
  }
  return cVar1;
}



/* Entry: 1045c2fe4; end: 1045c30f3;  */

void FUN_1045c2fe4(undefined1 param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    FUN_1045f8494(0);
    _swift_allocObject();
    FUN_1045f84b4();
    _swift_release(lVar3);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0xa8,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0xa8) = param_1;
  return;
}



/* Entry: 1045c30f4; end: 1045c31a3;  */

void FUN_1045c30f4(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *param_1;
  uVar1 = *(undefined1 *)(lVar3 + 0x50);
  lVar4 = *(long *)(lVar3 + 0x48);
  uVar2 = *(ulong *)(lVar4 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar4 + 0x10);
  lVar4 = lVar5;
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(lVar3 + 0x48);
    FUN_1045f8494(0);
    _swift_allocObject();
    FUN_1045f84b4();
    _swift_release(lVar5);
    *(long *)(lVar6 + 0x10) = lVar4;
  }
  lVar5 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar5 = 0x30;
  }
  _swift_beginAccess(lVar4 + 0xa8,lVar3 + lVar5,1,0);
  *(undefined1 *)(lVar4 + 0xa8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar3);
  return;
}



/* Entry: 1045c31a4; end: 1045c31e7;  */

bool FUN_1045c31a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0xa8,auStack_38,0,0);
  return *(char *)(param_3 + 0xa8) != '\x03';
}



/* Entry: 1045c31e8; end: 1045c3273;  */

void FUN_1045c31e8(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    FUN_1045f8494(0);
    _swift_allocObject();
    FUN_1045f84b4();
    _swift_release(lVar3);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0xa8,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0xa8) = 3;
  return;
}



/* Entry: 1045c3274; end: 1045c329f;  */

undefined1  [16] FUN_1045c3274(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  func_0x00010006c00c();
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 1045c32a0; end: 1045c32d3;  */

void FUN_1045c32a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1045c32d4; end: 1045c33b7;  */

undefined8 FUN_1045c32d4(void)

{
  return 0x1045c32e4;
}



/* Entry: 1045c33b8; end: 1045c3497;  */

void FUN_1045c33b8(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [80];
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  
  puStack_98 = *(undefined **)(unaff_x20 + 0x28);
  puStack_a0 = *(undefined **)(unaff_x20 + 0x20);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x48);
  puStack_80 = *(undefined **)(unaff_x20 + 0x40);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_68 = (undefined1)*(undefined8 *)(unaff_x20 + 0x58);
  uStack_5f = (undefined7)*(undefined8 *)(unaff_x20 + 0x61);
  uStack_58 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x61) >> 0x38);
  uStack_67 = (undefined7)*(undefined8 *)(unaff_x20 + 0x59);
  uStack_60 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x59) >> 0x38);
  if (puStack_a0 == (undefined *)0x0) {
    uVar1 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uVar5 = 2;
    uVar4 = 0xc000000000000000;
    uStack_108 = 0;
    uStack_110 = 0;
    puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uStack_108 = CONCAT71(uStack_5f,uStack_60);
    uStack_110 = CONCAT71(uStack_67,uStack_68);
    uVar1 = uStack_90;
    puVar2 = puStack_80;
    puVar3 = puStack_a0;
    uVar4 = uStack_88;
    puVar6 = puStack_98;
    uVar5 = uStack_58;
    uStack_100 = uStack_78;
    uStack_f8 = uStack_70;
  }
  func_0x0001045f8fa8(&puStack_a0,auStack_f0,0x113087060,&UNK_10dd201f0);
  *param_1 = puVar3;
  param_1[1] = puVar6;
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  param_1[4] = puVar2;
  param_1[8] = uStack_108;
  param_1[7] = uStack_110;
  param_1[6] = uStack_f8;
  param_1[5] = uStack_100;
  *(undefined1 *)(param_1 + 9) = uVar5;
  return;
}



/* Entry: 1045c3498; end: 1045c34d3;  */

void FUN_1045c3498(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[1] = puVar1;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[4] = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 9) = 2;
  return;
}



/* Entry: 1045c34d4; end: 1045c351f;  */

void FUN_1045c34d4(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000104603c54(unaff_x20 + 0x20,0x113087060,&UNK_10dd201f0);
  uVar1 = param_1[4];
  uVar3 = param_1[7];
  uVar2 = param_1[6];
  *(undefined8 *)(unaff_x20 + 0x48) = param_1[5];
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar2;
  uVar1 = *(undefined8 *)((long)param_1 + 0x39);
  *(undefined8 *)(unaff_x20 + 0x61) = *(undefined8 *)((long)param_1 + 0x41);
  *(undefined8 *)(unaff_x20 + 0x59) = uVar1;
  uVar3 = *param_1;
  uVar2 = param_1[3];
  uVar1 = param_1[2];
  *(undefined8 *)(unaff_x20 + 0x28) = param_1[1];
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  return;
}



/* Entry: 1045c3520; end: 1045c361b;  */

undefined1  [16] FUN_1045c3520(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  puVar1 = (undefined8 *)0x198;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x198,0x9513);
  }
  *param_1 = puVar1;
  puVar1[0x32] = unaff_x20;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1[1] = *(undefined8 *)(unaff_x20 + 0x28);
  *puVar1 = uVar6;
  uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x59);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)((long)puVar1 + 0x41) = *(undefined8 *)(unaff_x20 + 0x61);
  *(undefined8 *)((long)puVar1 + 0x39) = uVar8;
  puVar1[5] = uVar10;
  puVar1[4] = uVar9;
  puVar1[7] = uVar7;
  puVar1[6] = uVar6;
  puVar1[3] = uVar12;
  puVar1[2] = uVar11;
  if ((undefined *)*puVar1 == (undefined *)0x0) {
    uVar7 = 0xc000000000000000;
    uVar6 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar3 = 2;
    uVar10 = 0;
    uVar11 = 0;
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar7 = puVar1[3];
    uVar6 = puVar1[2];
    uVar9 = puVar1[6];
    uVar8 = puVar1[5];
    uVar11 = puVar1[8];
    uVar10 = puVar1[7];
    uVar3 = *(undefined1 *)(puVar1 + 9);
    puVar2 = (undefined *)*puVar1;
    puVar4 = (undefined *)puVar1[4];
    puVar5 = (undefined *)puVar1[1];
  }
  puVar1[10] = puVar2;
  puVar1[0xb] = puVar5;
  puVar1[0xd] = uVar7;
  puVar1[0xc] = uVar6;
  puVar1[0xe] = puVar4;
  puVar1[0x10] = uVar9;
  puVar1[0xf] = uVar8;
  puVar1[0x12] = uVar11;
  puVar1[0x11] = uVar10;
  *(undefined1 *)(puVar1 + 0x13) = uVar3;
  func_0x0001045f8fa8(puVar1,puVar1 + 0x14,0x113087060,&UNK_10dd201f0);
  auVar13._8_8_ = puVar1 + 10;
  auVar13._0_8_ = FUN_1045c361c;
  return auVar13;
}



/* Entry: 1045c361c; end: 1045c3723;  */

void FUN_1045c361c(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 uStack_38;
  undefined7 uStack_37;
  
  lVar1 = *param_1;
  if ((param_2 & 1) == 0) {
    lVar2 = *(long *)(lVar1 + 400);
    uVar6 = *(undefined8 *)(lVar1 + 0x78);
    uVar3 = *(undefined8 *)(lVar1 + 0x70);
    uVar10 = *(undefined8 *)(lVar1 + 0x80);
    uStack_38 = (undefined1)*(undefined8 *)(lVar1 + 0x88);
    uVar7 = *(undefined8 *)(lVar1 + 0x91);
    uVar4 = *(undefined8 *)(lVar1 + 0x89);
    uStack_37 = (undefined7)uVar4;
    uVar11 = *(undefined8 *)(lVar1 + 0x58);
    uVar9 = *(undefined8 *)(lVar1 + 0x50);
    uVar8 = *(undefined8 *)(lVar1 + 0x68);
    uVar5 = *(undefined8 *)(lVar1 + 0x60);
    func_0x000104603c54(lVar2 + 0x20,0x113087060,&UNK_10dd201f0);
    *(undefined8 *)(lVar2 + 0x48) = uVar6;
    *(undefined8 *)(lVar2 + 0x40) = uVar3;
    *(ulong *)(lVar2 + 0x58) = CONCAT71(uStack_37,uStack_38);
    *(undefined8 *)(lVar2 + 0x50) = uVar10;
    *(undefined8 *)(lVar2 + 0x61) = uVar7;
    *(undefined8 *)(lVar2 + 0x59) = uVar4;
    *(undefined8 *)(lVar2 + 0x28) = uVar11;
    *(undefined8 *)(lVar2 + 0x20) = uVar9;
    *(undefined8 *)(lVar2 + 0x38) = uVar8;
    *(undefined8 *)(lVar2 + 0x30) = uVar5;
  }
  else {
    lVar2 = *(long *)(lVar1 + 400);
    uVar5 = *(undefined8 *)(lVar1 + 0x91);
    uVar3 = *(undefined8 *)(lVar1 + 0x89);
    *(undefined8 *)(lVar1 + 0x131) = uVar5;
    *(undefined8 *)(lVar1 + 0x129) = uVar3;
    uVar12 = *(undefined8 *)(lVar1 + 0x78);
    uVar9 = *(undefined8 *)(lVar1 + 0x70);
    uVar7 = *(undefined8 *)(lVar1 + 0x80);
    *(undefined8 *)(lVar1 + 0x118) = uVar12;
    *(undefined8 *)(lVar1 + 0x110) = uVar9;
    *(undefined8 *)(lVar1 + 0x128) = *(undefined8 *)(lVar1 + 0x88);
    *(undefined8 *)(lVar1 + 0x120) = uVar7;
    uVar16 = *(undefined8 *)(lVar1 + 0x58);
    uVar14 = *(undefined8 *)(lVar1 + 0x50);
    uVar18 = *(undefined8 *)(lVar1 + 0x68);
    uVar17 = *(undefined8 *)(lVar1 + 0x60);
    *(undefined8 *)(lVar1 + 0xf8) = uVar16;
    *(undefined8 *)(lVar1 + 0xf0) = uVar14;
    *(undefined8 *)(lVar1 + 0x108) = uVar18;
    *(undefined8 *)(lVar1 + 0x100) = uVar17;
    uStack_38 = (undefined1)*(undefined8 *)(lVar1 + 0x88);
    uStack_37 = (undefined7)uVar3;
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    *(undefined8 *)(lVar1 + 0xa8) = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar1 + 0xa0) = uVar4;
    uVar6 = *(undefined8 *)(lVar2 + 0x38);
    uVar4 = *(undefined8 *)(lVar2 + 0x30);
    uVar10 = *(undefined8 *)(lVar2 + 0x48);
    uVar8 = *(undefined8 *)(lVar2 + 0x40);
    uVar13 = *(undefined8 *)(lVar2 + 0x58);
    uVar11 = *(undefined8 *)(lVar2 + 0x50);
    uVar15 = *(undefined8 *)(lVar2 + 0x59);
    *(undefined8 *)(lVar1 + 0xe1) = *(undefined8 *)(lVar2 + 0x61);
    *(undefined8 *)(lVar1 + 0xd9) = uVar15;
    *(undefined8 *)(lVar1 + 200) = uVar10;
    *(undefined8 *)(lVar1 + 0xc0) = uVar8;
    *(undefined8 *)(lVar1 + 0xd8) = uVar13;
    *(undefined8 *)(lVar1 + 0xd0) = uVar11;
    *(undefined8 *)(lVar1 + 0xb8) = uVar6;
    *(undefined8 *)(lVar1 + 0xb0) = uVar4;
    func_0x0001045f8918(lVar1 + 0xf0,lVar1 + 0x140);
    func_0x000104603c54(lVar1 + 0xa0,0x113087060,&UNK_10dd201f0);
    *(undefined8 *)(lVar2 + 0x48) = uVar12;
    *(undefined8 *)(lVar2 + 0x40) = uVar9;
    *(ulong *)(lVar2 + 0x58) = CONCAT71(uStack_37,uStack_38);
    *(undefined8 *)(lVar2 + 0x50) = uVar7;
    *(undefined8 *)(lVar2 + 0x61) = uVar5;
    *(undefined8 *)(lVar2 + 0x59) = uVar3;
    *(undefined8 *)(lVar2 + 0x28) = uVar16;
    *(undefined8 *)(lVar2 + 0x20) = uVar14;
    *(undefined8 *)(lVar2 + 0x38) = uVar18;
    *(undefined8 *)(lVar2 + 0x30) = uVar17;
    func_0x0001045f894c(lVar1 + 0x50);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 1045c3724; end: 1045c3847;  */

bool FUN_1045c3724(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_170 [80];
  long lStack_120;
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
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  long lStack_80;
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
  
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_48 = (undefined1)*(undefined8 *)(unaff_x20 + 0x58);
  uStack_3f = *(undefined8 *)(unaff_x20 + 0x61);
  uStack_47 = (undefined7)*(undefined8 *)(unaff_x20 + 0x59);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x59) >> 0x38);
  lStack_80 = lVar3;
  if (lVar3 == 0) {
    lStack_120 = 0;
    uStack_100 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_108 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_f0 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_e0 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_e8 = *(undefined8 *)(unaff_x20 + 0x58);
    uStack_d8 = *(undefined1 *)(unaff_x20 + 0x68);
    uStack_110 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_118 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar1 = 0x113087060;
    puVar2 = &UNK_10dd201f0;
    func_0x0001045f8fa8(&lStack_80,auStack_170,0x113087060,&UNK_10dd201f0);
  }
  else {
    uStack_100 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_108 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_f0 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_e0 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_e8 = *(undefined8 *)(unaff_x20 + 0x58);
    uStack_d8 = *(undefined1 *)(unaff_x20 + 0x68);
    uStack_110 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_118 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_8f = 0;
    uStack_97 = 0;
    uStack_90 = 0;
    lStack_120 = lVar3;
    func_0x0001045f8fa8(&lStack_80,auStack_170,0x113087060,&UNK_10dd201f0);
    uVar1 = 0x113087910;
    puVar2 = &UNK_10dd19bf0;
  }
  func_0x000104603c54(&lStack_120,uVar1,puVar2);
  return lVar3 != 0;
}



/* Entry: 1045c3848; end: 1045c387f;  */

void FUN_1045c3848(void)

{
  long unaff_x20;
  
  func_0x000104603c54(unaff_x20 + 0x20,0x113087060,&UNK_10dd201f0);
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x61) = 0;
  *(undefined8 *)(unaff_x20 + 0x59) = 0;
  return;
}


