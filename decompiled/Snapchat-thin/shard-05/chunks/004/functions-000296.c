/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103df1578; end: 103df1d6f;  */

undefined8 * FUN_103df1578(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar11 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar11;
  param_1[2] = param_2[2];
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  uVar11 = param_2[4];
  uVar17 = param_2[7];
  uVar15 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar11;
  param_1[7] = uVar17;
  param_1[6] = uVar15;
  uVar11 = param_2[8];
  uVar17 = param_2[0xb];
  uVar15 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar11;
  param_1[0xb] = uVar17;
  param_1[10] = uVar15;
  uVar11 = param_2[0xc];
  param_1[0xc] = uVar11;
  uVar15 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar15;
  uVar15 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar15;
  param_1[0x11] = param_2[0x11];
  lVar12 = param_2[0x39];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar11);
  if (lVar12 == 0) {
    _memcpy(param_1 + 0x12,param_2 + 0x12,0x160);
  }
  else {
    uVar11 = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar11;
    uVar11 = param_2[0x15];
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = uVar11;
    uVar8 = param_2[0x16];
    param_1[0x16] = uVar8;
    uVar11 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar11;
    uVar10 = param_2[0x19];
    uVar11 = param_2[0x1a];
    param_1[0x19] = uVar10;
    param_1[0x1a] = uVar11;
    *(undefined2 *)(param_1 + 0x1b) = *(undefined2 *)(param_2 + 0x1b);
    *(undefined1 *)((long)param_1 + 0xda) = *(undefined1 *)((long)param_2 + 0xda);
    uVar11 = param_2[0x1d];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1d] = uVar11;
    uVar9 = param_2[0x1e];
    param_1[0x1e] = uVar9;
    *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(param_2 + 0x1f);
    uVar15 = param_2[0x20];
    param_1[0x21] = param_2[0x21];
    param_1[0x20] = uVar15;
    *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
    uVar15 = param_2[0x24];
    param_1[0x23] = param_2[0x23];
    param_1[0x24] = uVar15;
    uVar17 = param_2[0x26];
    param_1[0x25] = param_2[0x25];
    param_1[0x26] = uVar17;
    uVar1 = param_2[0x28];
    param_1[0x27] = param_2[0x27];
    param_1[0x28] = uVar1;
    uVar2 = param_2[0x2a];
    param_1[0x29] = param_2[0x29];
    param_1[0x2a] = uVar2;
    uVar3 = param_2[0x2c];
    param_1[0x2b] = param_2[0x2b];
    param_1[0x2c] = uVar3;
    uVar4 = param_2[0x2e];
    param_1[0x2d] = param_2[0x2d];
    param_1[0x2e] = uVar4;
    uVar13 = param_2[0x2f];
    param_1[0x2f] = uVar13;
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
    *(undefined1 *)((long)param_1 + 0x181) = *(undefined1 *)((long)param_2 + 0x181);
    *(undefined1 *)((long)param_1 + 0x182) = *(undefined1 *)((long)param_2 + 0x182);
    uVar4 = param_2[0x32];
    param_1[0x31] = param_2[0x31];
    param_1[0x32] = uVar4;
    uVar5 = param_2[0x34];
    param_1[0x33] = param_2[0x33];
    param_1[0x34] = uVar5;
    uVar6 = param_2[0x36];
    param_1[0x35] = param_2[0x35];
    param_1[0x36] = uVar6;
    uVar7 = param_2[0x38];
    param_1[0x37] = param_2[0x37];
    param_1[0x38] = uVar7;
    uVar14 = param_2[0x39];
    param_1[0x39] = uVar14;
    uVar16 = param_2[0x3a];
    param_1[0x3b] = param_2[0x3b];
    param_1[0x3a] = uVar16;
    uVar16 = param_2[0x3d];
    param_1[0x3c] = param_2[0x3c];
    param_1[0x3d] = uVar16;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar11);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar15);
    _swift_bridgeObjectRetain(uVar17);
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar13);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar14);
  }
  return param_1;
}



/* Entry: 103df1d70; end: 103df1d77;  */

void FUN_103df1d70(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x1f0);
  return;
}



/* Entry: 103df1d78; end: 103df1fc7;  */

undefined8 * FUN_103df1d78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);
  param_1[4] = param_2[4];
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  uVar2 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  uVar2 = param_2[0xc];
  uVar1 = param_1[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[0xd] = param_2[0xd];
  uVar2 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar2;
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  if (param_1[0x39] != 0) {
    if (param_2[0x39] != 0) {
      uVar2 = param_2[0x12];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar2;
      uVar2 = param_1[0x14];
      param_1[0x14] = param_2[0x14];
      _swift_bridgeObjectRelease(uVar2);
      uVar2 = param_2[0x16];
      uVar1 = param_1[0x16];
      param_1[0x15] = param_2[0x15];
      param_1[0x16] = uVar2;
      _swift_bridgeObjectRelease(uVar1);
      uVar2 = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      param_1[0x17] = uVar2;
      uVar2 = param_1[0x19];
      param_1[0x19] = param_2[0x19];
      _swift_bridgeObjectRelease(uVar2);
      param_1[0x1a] = param_2[0x1a];
      *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
      *(undefined1 *)((long)param_1 + 0xd9) = *(undefined1 *)((long)param_2 + 0xd9);
      *(undefined1 *)((long)param_1 + 0xda) = *(undefined1 *)((long)param_2 + 0xda);
      uVar2 = param_2[0x1d];
      uVar1 = param_1[0x1d];
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1d] = uVar2;
      _swift_bridgeObjectRelease(uVar1);
      uVar2 = param_1[0x1e];
      param_1[0x1e] = param_2[0x1e];
      _swift_bridgeObjectRelease(uVar2);
      *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(param_2 + 0x1f);
      uVar2 = param_2[0x20];
      param_1[0x21] = param_2[0x21];
      param_1[0x20] = uVar2;
      *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
      uVar2 = param_2[0x24];
      uVar1 = param_1[0x24];
      param_1[0x23] = param_2[0x23];
      param_1[0x24] = uVar2;
      _swift_bridgeObjectRelease(uVar1);
      uVar2 = param_2[0x26];
      uVar1 = param_1[0x26];
      param_1[0x25] = param_2[0x25];
      param_1[0x26] = uVar2;
      _swift_bridgeObjectRelease(uVar1);
      uVar2 = param_2[0x28];
      uVar1 = param_1[0x28];
      param_1[0x27] = param_2[0x27];
      param_1[0x28] = uVar2;
      _swift_bridgeObjectRelease(uVar1);
      uVar2 = param_2[0x2a];
      uVar1 = param_1[0x2a];
      param_1[0x29] = param_2[0x29];
      param_1[0x2a] = uVar2;
      _swift_bridgeObjectRelease(uVar1);
      uVar2 = param_2[0x2c];
      uVar1 = param_1[0x2c];
      param_1[0x2b] = param_2[0x2b];
      param_1[0x2c] = uVar2;
      _swift_bridgeObjectRelease(uVar1);
      uVar2 = param_2[0x2d];
      param_1[0x2e] = param_2[0x2e];
      param_1[0x2d] = uVar2;
      uVar2 = param_1[0x2f];
      param_1[0x2f] = param_2[0x2f];
      _swift_bridgeObjectRelease(uVar2);
      *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
      *(undefined1 *)((long)param_1 + 0x181) = *(undefined1 *)((long)param_2 + 0x181);
      *(undefined1 *)((long)param_1 + 0x182) = *(undefined1 *)((long)param_2 + 0x182);
      uVar2 = param_2[0x32];
      uVar1 = param_1[0x32];
      param_1[0x31] = param_2[0x31];
      param_1[0x32] = uVar2;
      _swift_bridgeObjectRelease(uVar1);
      uVar2 = param_2[0x34];
      uVar1 = param_1[0x34];
      param_1[0x33] = param_2[0x33];
      param_1[0x34] = uVar2;
      _swift_bridgeObjectRelease(uVar1);
      uVar2 = param_2[0x36];
      uVar1 = param_1[0x36];
      param_1[0x35] = param_2[0x35];
      param_1[0x36] = uVar2;
      _swift_bridgeObjectRelease(uVar1);
      uVar2 = param_2[0x38];
      uVar1 = param_1[0x38];
      param_1[0x37] = param_2[0x37];
      param_1[0x38] = uVar2;
      _swift_bridgeObjectRelease(uVar1);
      uVar2 = param_1[0x39];
      param_1[0x39] = param_2[0x39];
      _swift_bridgeObjectRelease(uVar2);
      uVar2 = param_2[0x3a];
      param_1[0x3b] = param_2[0x3b];
      param_1[0x3a] = uVar2;
      uVar2 = param_2[0x3d];
      param_1[0x3c] = param_2[0x3c];
      param_1[0x3d] = uVar2;
      return param_1;
    }
    func_0x000102d12390(param_1 + 0x12);
  }
  _memcpy(param_1 + 0x12,param_2 + 0x12,0x160);
  return param_1;
}



/* Entry: 103df1fc8; end: 103df211b;  */

int FUN_103df1fc8(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x7c] != '\0')) {
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



/* Entry: 103df211c; end: 103df21f3;  */

void FUN_103df211c(void)

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



/* Entry: 103df21f4; end: 103df2213;  */

void FUN_103df21f4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103df2214; end: 103df2253;  */

void FUN_103df2214(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010d10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc97480;
  _swift_getWitnessTable(&UNK_10dc97480,&UNK_1107138f8);
  puRam0000000113010d10 = puVar1;
  return;
}



/* Entry: 103df2254; end: 103df2277;  */

undefined1  [16] FUN_103df2254(void)

{
  return ZEXT816(0x1107138f8);
}



/* Entry: 103df2278; end: 103df234f;  */

void FUN_103df2278(void)

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



/* Entry: 103df2350; end: 103df236f;  */

void FUN_103df2350(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103df2370; end: 103df23af;  */

void FUN_103df2370(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010d18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc97540;
  _swift_getWitnessTable(&UNK_10dc97540,&UNK_110713970);
  puRam0000000113010d18 = puVar1;
  return;
}



/* Entry: 103df23b0; end: 103df23d3;  */

undefined1  [16] FUN_103df23b0(void)

{
  return ZEXT816(0x110713970);
}



/* Entry: 103df23d4; end: 103df24ab;  */

void FUN_103df23d4(void)

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



/* Entry: 103df24ac; end: 103df24cb;  */

void FUN_103df24ac(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103df24cc; end: 103df250b;  */

void FUN_103df24cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010d20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc97600;
  _swift_getWitnessTable(&UNK_10dc97600,&UNK_1107139e8);
  puRam0000000113010d20 = puVar1;
  return;
}



/* Entry: 103df250c; end: 103df251b;  */

undefined1  [16] FUN_103df250c(void)

{
  return ZEXT816(0x1107139e8);
}



/* Entry: 103df251c; end: 103df2547;  */

void FUN_103df251c(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103df270c();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 103df2548; end: 103df255f;  */

void FUN_103df2548(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = 0;
  *(bool *)(param_1 + 1) = lVar1 != 0;
  return;
}



/* Entry: 103df2560; end: 103df258b;  */

void FUN_103df2560(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000103df271c();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 103df258c; end: 103df2593; +[SCAdRequestConstants successStatusCode] */

undefined8 FUN_103df258c(void)

{
  return 200;
}



/* Entry: 103df2594; end: 103df25cf; -[SCAdRequestConstants init] */

void FUN_103df2594(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103df25d0; end: 103df2603;  */

void FUN_103df25d0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103df2604; end: 103df270b;  */

void FUN_103df2604(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000103df272c();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 103df270c; end: 103df275f;  */

undefined1  [16] FUN_103df270c(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 8) {
    uVar1 = param_1;
  }
  auVar2[8] = 7 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 103df2760; end: 103df279f;  */

void FUN_103df2760(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010d28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc976c8;
  _swift_getWitnessTable(&UNK_10dc976c8,&UNK_110713a60);
  puRam0000000113010d28 = puVar1;
  return;
}



/* Entry: 103df27a0; end: 103df27a3;  */

void FUN_103df27a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010d30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc97768;
  _swift_getWitnessTable(&UNK_10dc97768,&UNK_110713a80);
  puRam0000000113010d30 = puVar1;
  return;
}



/* Entry: 103df27a4; end: 103df27e3;  */

void FUN_103df27a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010d30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc97768;
  _swift_getWitnessTable(&UNK_10dc97768,&UNK_110713a80);
  puRam0000000113010d30 = puVar1;
  return;
}



/* Entry: 103df27e4; end: 103df27e7;  */

void FUN_103df27e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010d38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc97808;
  _swift_getWitnessTable(&UNK_10dc97808,&UNK_110713aa0);
  puRam0000000113010d38 = puVar1;
  return;
}



/* Entry: 103df27e8; end: 103df2827;  */

void FUN_103df27e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010d38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc97808;
  _swift_getWitnessTable(&UNK_10dc97808,&UNK_110713aa0);
  puRam0000000113010d38 = puVar1;
  return;
}



/* Entry: 103df2828; end: 103df282b;  */

void FUN_103df2828(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010d40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc978a8;
  _swift_getWitnessTable(&UNK_10dc978a8,&UNK_110713ac0);
  puRam0000000113010d40 = puVar1;
  return;
}



/* Entry: 103df282c; end: 103df286b;  */

void FUN_103df282c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010d40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc978a8;
  _swift_getWitnessTable(&UNK_10dc978a8,&UNK_110713ac0);
  puRam0000000113010d40 = puVar1;
  return;
}



/* Entry: 103df286c; end: 103df286f;  */

void FUN_103df286c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010d48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc97948;
  _swift_getWitnessTable(&UNK_10dc97948,&UNK_110713ae0);
  puRam0000000113010d48 = puVar1;
  return;
}



/* Entry: 103df2870; end: 103df28af;  */

void FUN_103df2870(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010d48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc97948;
  _swift_getWitnessTable(&UNK_10dc97948,&UNK_110713ae0);
  puRam0000000113010d48 = puVar1;
  return;
}



/* Entry: 103df28b0; end: 103df28b3;  */

void FUN_103df28b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010d50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc979e8;
  _swift_getWitnessTable(&UNK_10dc979e8,&UNK_110713b00);
  puRam0000000113010d50 = puVar1;
  return;
}



/* Entry: 103df28b4; end: 103df28f3;  */

void FUN_103df28b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010d50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc979e8;
  _swift_getWitnessTable(&UNK_10dc979e8,&UNK_110713b00);
  puRam0000000113010d50 = puVar1;
  return;
}



/* Entry: 103df28f4; end: 103df28f7;  */

void FUN_103df28f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010d58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc97a88;
  _swift_getWitnessTable(&UNK_10dc97a88,&UNK_110713b20);
  puRam0000000113010d58 = puVar1;
  return;
}



/* Entry: 103df28f8; end: 103df2937;  */

void FUN_103df28f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010d58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc97a88;
  _swift_getWitnessTable(&UNK_10dc97a88,&UNK_110713b20);
  puRam0000000113010d58 = puVar1;
  return;
}



/* Entry: 103df2938; end: 103df293b;  */

void FUN_103df2938(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010d60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc97b28;
  _swift_getWitnessTable(&UNK_10dc97b28,&UNK_110713b40);
  puRam0000000113010d60 = puVar1;
  return;
}



/* Entry: 103df293c; end: 103df297b;  */

void FUN_103df293c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010d60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc97b28;
  _swift_getWitnessTable(&UNK_10dc97b28,&UNK_110713b40);
  puRam0000000113010d60 = puVar1;
  return;
}



/* Entry: 103df297c; end: 103df297f;  */

void FUN_103df297c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010d68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc97bc8;
  _swift_getWitnessTable(&UNK_10dc97bc8,&UNK_110713b60);
  puRam0000000113010d68 = puVar1;
  return;
}



/* Entry: 103df2980; end: 103df29bf;  */

void FUN_103df2980(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010d68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc97bc8;
  _swift_getWitnessTable(&UNK_10dc97bc8,&UNK_110713b60);
  puRam0000000113010d68 = puVar1;
  return;
}



/* Entry: 103df29c0; end: 103df29c3;  */

void FUN_103df29c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010d70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc97c68;
  _swift_getWitnessTable(&UNK_10dc97c68,&UNK_110713b80);
  puRam0000000113010d70 = puVar1;
  return;
}



/* Entry: 103df29c4; end: 103df2a03;  */

void FUN_103df29c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010d70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc97c68;
  _swift_getWitnessTable(&UNK_10dc97c68,&UNK_110713b80);
  puRam0000000113010d70 = puVar1;
  return;
}



/* Entry: 103df2a04; end: 103df2a07;  */

void FUN_103df2a04(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010d78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc97d08;
  _swift_getWitnessTable(&UNK_10dc97d08,&UNK_110713ba0);
  puRam0000000113010d78 = puVar1;
  return;
}



/* Entry: 103df2a08; end: 103df2a47;  */

void FUN_103df2a08(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010d78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc97d08;
  _swift_getWitnessTable(&UNK_10dc97d08,&UNK_110713ba0);
  puRam0000000113010d78 = puVar1;
  return;
}



/* Entry: 103df2a48; end: 103df2a4b;  */

void FUN_103df2a48(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010d80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc97da8;
  _swift_getWitnessTable(&UNK_10dc97da8,&UNK_110713bc0);
  puRam0000000113010d80 = puVar1;
  return;
}



/* Entry: 103df2a4c; end: 103df2a8b;  */

void FUN_103df2a4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010d80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc97da8;
  _swift_getWitnessTable(&UNK_10dc97da8,&UNK_110713bc0);
  puRam0000000113010d80 = puVar1;
  return;
}



/* Entry: 103df2a8c; end: 103df2aeb;  */

undefined1  [16] FUN_103df2a8c(void)

{
  return ZEXT816(0x110713a60);
}



/* Entry: 103df2aec; end: 103df2b0b;  */

void FUN_103df2aec(void)

{
  _objc_opt_self(&PTR_PTR_11294dcb0);
  return;
}



/* Entry: 103df2b0c; end: 103df2c73;  */

undefined1  [16] FUN_103df2b0c(void)

{
  return ZEXT816(0x110713b20);
}



/* Entry: 103df2c74; end: 103df2ebf;  */

long FUN_103df2c74(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103df2ec0; end: 103df2ed7;  */

bool FUN_103df2ec0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103df2ed8; end: 103df2f17;  */

void FUN_103df2ed8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010db0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc97ff0;
  _swift_getWitnessTable(&UNK_10dc97ff0,&UNK_110713cc8);
  puRam0000000113010db0 = puVar1;
  return;
}



/* Entry: 103df2f18; end: 103df2fc3;  */

void FUN_103df2f18(void)

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



/* Entry: 103df2fc4; end: 103df300f;  */

void FUN_103df2fc4(ulong *param_1,ulong *param_2)

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



/* Entry: 103df3010; end: 103df30e7;  */

void FUN_103df3010(void)

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



/* Entry: 103df30e8; end: 103df3107;  */

void FUN_103df30e8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103df3108; end: 103df3147;  */

void FUN_103df3108(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010db8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc980b0;
  _swift_getWitnessTable(&UNK_10dc980b0,&UNK_110713d40);
  puRam0000000113010db8 = puVar1;
  return;
}



/* Entry: 103df3148; end: 103df3157;  */

undefined1  [16] FUN_103df3148(void)

{
  return ZEXT816(0x110713d40);
}



/* Entry: 103df3158; end: 103df31e7;  */

long FUN_103df3158(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103df31e8; end: 103df31fb;  */

bool FUN_103df31e8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103df31fc; end: 103df32d3;  */

void FUN_103df31fc(void)

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



/* Entry: 103df32d4; end: 103df32f3;  */

void FUN_103df32d4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103df32f4; end: 103df3333;  */

void FUN_103df32f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010dc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc98190;
  _swift_getWitnessTable(&UNK_10dc98190,&UNK_110713e48);
  puRam0000000113010dc0 = puVar1;
  return;
}



/* Entry: 103df3334; end: 103df3343;  */

undefined1  [16] FUN_103df3334(void)

{
  return ZEXT816(0x110713e48);
}



/* Entry: 103df3344; end: 103df3a27;  */

long FUN_103df3344(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103df3a28; end: 103df3a5f;  */

void FUN_103df3a28(undefined8 param_1)

{
  if (lRam0000000113010e30 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7c5b48);
  return;
}



/* Entry: 103df3a60; end: 103df3bcf;  */

void FUN_103df3a60(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar5;
  undefined1 *puVar6;
  code *pcVar7;
  
  lVar3 = 0x112dbe418;
  func_0x0001000285a8(0x112dbe418,&UNK_10d990420);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffc0 + -extraout_x8;
  lVar3 = 0;
  FUN_103df3a28();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar5 = (undefined8 *)(puVar6 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0;
  func_0x000100b91d00();
  pcVar7 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  (*pcVar7)(puVar6,1,1,lVar4);
  iVar1 = *(int *)(lVar3 + 0x30);
  (*pcVar7)((long)puVar5 + (long)iVar1,1,1,lVar4);
  iVar2 = *(int *)(lVar3 + 0x50);
  puVar5[1] = 10;
  *puVar5 = 0;
  puVar5[2] = 0xffffffffffffffff;
  puVar5[4] = 0;
  puVar5[3] = 0;
  puVar5[6] = 0;
  puVar5[5] = 0;
  puVar5[7] = 0;
  func_0x000101685658(puVar6,(long)puVar5 + (long)iVar1);
  *(undefined8 *)((long)puVar5 + (long)*(int *)(lVar3 + 0x34)) = 0;
  *(undefined1 *)((long)puVar5 + (long)*(int *)(lVar3 + 0x38)) = 0;
  *(undefined1 *)((long)puVar5 + (long)*(int *)(lVar3 + 0x3c)) = 0;
  *(undefined8 *)((long)puVar5 + (long)*(int *)(lVar3 + 0x40)) = 0;
  *(undefined8 *)((long)puVar5 + (long)*(int *)(lVar3 + 0x44)) = 0;
  *(undefined8 *)((long)puVar5 + (long)*(int *)(lVar3 + 0x48)) = 0;
  *(undefined8 *)((long)puVar5 + (long)*(int *)(lVar3 + 0x4c)) = 0;
  *(undefined8 *)((long)puVar5 + (long)iVar2) = 0;
  FUN_103e070e8(0);
  _objc_allocWithZone();
  FUN_103e062c8();
  puRam00000001138121d0 = puVar5;
  return;
}



/* Entry: 103df3bd0; end: 103df3c0f; +[SCAdOpportunityEvent identity] */

void FUN_103df3bd0(void)

{
  if (lRam0000000113010dd0 != -1) {
    _swift_once(0x113010dd0,FUN_103df3a60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138121d0);
  return;
}



/* Entry: 103df3c10; end: 103df3c53;  */

undefined8 FUN_103df3c10(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103df3a28();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103df3c54; end: 103df3d77; -[SCAdOpportunityEvent withStorySessionId:] */

void FUN_103df3c54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_103df3a28();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar5 = (undefined8 *)(puVar4 + -extraout_x12);
  _objc_retain(param_1);
  _objc_retain();
  uVar3 = param_3;
  _objc_retain(param_3);
  FUN_103e0576c(puVar5,param_1);
  uVar6 = *puVar5;
  _objc_retain(uVar3);
  _objc_release(uVar6);
  *puVar5 = param_3;
  FUN_103df3c10(puVar5,puVar4);
  _objc_allocWithZone(uVar1);
  FUN_103e062c8(puVar4);
  _objc_release(uVar3);
  _objc_release(param_1);
  func_0x000103dfafbc(puVar5,FUN_103df3a28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 103df3d78; end: 103df3e6b; -[SCAdOpportunityEvent withAdProductType:] */

void FUN_103df3d78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_103df3a28();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_103e0576c(lVar2);
  *(undefined8 *)(lVar2 + 8) = param_3;
  FUN_103df3c10(lVar2,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_103e062c8(puVar3);
  _objc_release(param_1);
  func_0x000103dfafbc(lVar2,FUN_103df3a28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 103df3e6c; end: 103df3f5f; -[SCAdOpportunityEvent withViewLocation:] */

void FUN_103df3e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_103df3a28();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_103e0576c(lVar2);
  *(undefined8 *)(lVar2 + 0x10) = param_3;
  FUN_103df3c10(lVar2,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_103e062c8(puVar3);
  _objc_release(param_1);
  func_0x000103dfafbc(lVar2,FUN_103df3a28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 103df3f60; end: 103df4053; -[SCAdOpportunityEvent withAdRequestStartTimeMillis:] */

void FUN_103df3f60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  
  uVar1 = param_2;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_103df3a28();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = (long)puVar3 - extraout_x12;
  _objc_retain(param_2);
  _objc_retain();
  FUN_103e0576c(lVar2);
  *(undefined8 *)(lVar2 + 0x18) = param_1;
  FUN_103df3c10(lVar2,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_103e062c8(puVar3);
  _objc_release(param_2);
  func_0x000103dfafbc(lVar2,FUN_103df3a28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 103df4054; end: 103df4147; -[SCAdOpportunityEvent withAdRequestFinishTimeMillis:] */

void FUN_103df4054(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  
  uVar1 = param_2;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_103df3a28();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = (long)puVar3 - extraout_x12;
  _objc_retain(param_2);
  _objc_retain();
  FUN_103e0576c(lVar2);
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  FUN_103df3c10(lVar2,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_103e062c8(puVar3);
  _objc_release(param_2);
  func_0x000103dfafbc(lVar2,FUN_103df3a28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 103df4148; end: 103df423b; -[SCAdOpportunityEvent withAdMediaDownloadStartTimeMillis:] */

void FUN_103df4148(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  
  uVar1 = param_2;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_103df3a28();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = (long)puVar3 - extraout_x12;
  _objc_retain(param_2);
  _objc_retain();
  FUN_103e0576c(lVar2);
  *(undefined8 *)(lVar2 + 0x28) = param_1;
  FUN_103df3c10(lVar2,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_103e062c8(puVar3);
  _objc_release(param_2);
  func_0x000103dfafbc(lVar2,FUN_103df3a28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 103df423c; end: 103df432f; -[SCAdOpportunityEvent withAdMediaDownloadFinishTimeMillis:] */

void FUN_103df423c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  
  uVar1 = param_2;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_103df3a28();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = (long)puVar3 - extraout_x12;
  _objc_retain(param_2);
  _objc_retain();
  FUN_103e0576c(lVar2);
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  FUN_103df3c10(lVar2,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_103e062c8(puVar3);
  _objc_release(param_2);
  func_0x000103dfafbc(lVar2,FUN_103df3a28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 103df4330; end: 103df45b7;  */

long FUN_103df4330(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  undefined8 unaff_x20;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [4];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _swift_getObjectType();
  lVar3 = 0;
  FUN_103df3a28();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = (long)&puStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar3 - extraout_x12;
  _objc_retain();
  FUN_103e0576c(lVar5);
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    if (param_1 >> 0x3e == 0) {
      uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = param_1;
      if (-1 < (long)param_1) {
        uVar6 = param_1 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar6 != 0) {
      puStack_e0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000103e06988(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103df45b8);
        (*pcVar2)();
      }
      if ((param_1 & 0xc000000000000001) == 0) {
        puVar8 = (undefined8 *)(param_1 + 0x20);
        do {
          puVar4 = puStack_e0;
          _objc_retain(*puVar8);
          FUN_103e05180(&uStack_d8);
          uVar7 = *(ulong *)(puVar4 + 0x10);
          puStack_e0 = puVar4;
          if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar7) {
            func_0x000103e06988(1 < *(ulong *)(puVar4 + 0x18),uVar7 + 1,1);
          }
          *(ulong *)(puStack_e0 + 0x10) = uVar7 + 1;
          *(undefined8 *)(puStack_e0 + uVar7 * 0x78 + 0x48) = uStack_b0;
          *(undefined8 *)(puStack_e0 + uVar7 * 0x78 + 0x40) = uStack_b8;
          *(undefined8 *)(puStack_e0 + uVar7 * 0x78 + 0x58) = auStack_a8[1];
          *(undefined8 *)(puStack_e0 + uVar7 * 0x78 + 0x50) = auStack_a8[0];
          *(undefined8 *)(puStack_e0 + uVar7 * 0x78 + 0x28) = uStack_d0;
          *(undefined8 *)(puStack_e0 + uVar7 * 0x78 + 0x20) = uStack_d8;
          *(undefined8 *)(puStack_e0 + uVar7 * 0x78 + 0x38) = uStack_c0;
          *(undefined8 *)(puStack_e0 + uVar7 * 0x78 + 0x30) = uStack_c8;
          puStack_e0[uVar7 * 0x78 + 0x90] = uStack_68;
          *(undefined8 *)(puStack_e0 + uVar7 * 0x78 + 0x78) = uStack_80;
          *(undefined8 *)(puStack_e0 + uVar7 * 0x78 + 0x70) = uStack_88;
          *(undefined8 *)(puStack_e0 + uVar7 * 0x78 + 0x88) = uStack_70;
          *(undefined8 *)(puStack_e0 + uVar7 * 0x78 + 0x80) = uStack_78;
          *(undefined8 *)(puStack_e0 + uVar7 * 0x78 + 0x68) = auStack_a8[3];
          *(undefined8 *)(puStack_e0 + uVar7 * 0x78 + 0x60) = auStack_a8[2];
          uVar6 = uVar6 - 1;
          puVar4 = puStack_e0;
          puVar8 = puVar8 + 1;
        } while (uVar6 != 0);
      }
      else {
        uVar7 = 0;
        do {
          puVar4 = puStack_e0;
          func_0x000103e06f04(uVar7,param_1);
          FUN_103e05180(&uStack_d8);
          uVar1 = *(ulong *)(puVar4 + 0x10);
          puStack_e0 = puVar4;
          if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
            func_0x000103e06988(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
          }
          uVar7 = uVar7 + 1;
          *(ulong *)(puStack_e0 + 0x10) = uVar1 + 1;
          *(undefined8 *)(puStack_e0 + uVar1 * 0x78 + 0x48) = uStack_b0;
          *(undefined8 *)(puStack_e0 + uVar1 * 0x78 + 0x40) = uStack_b8;
          *(undefined8 *)(puStack_e0 + uVar1 * 0x78 + 0x58) = auStack_a8[1];
          *(undefined8 *)(puStack_e0 + uVar1 * 0x78 + 0x50) = auStack_a8[0];
          *(undefined8 *)(puStack_e0 + uVar1 * 0x78 + 0x28) = uStack_d0;
          *(undefined8 *)(puStack_e0 + uVar1 * 0x78 + 0x20) = uStack_d8;
          *(undefined8 *)(puStack_e0 + uVar1 * 0x78 + 0x38) = uStack_c0;
          *(undefined8 *)(puStack_e0 + uVar1 * 0x78 + 0x30) = uStack_c8;
          puStack_e0[uVar1 * 0x78 + 0x90] = uStack_68;
          *(undefined8 *)(puStack_e0 + uVar1 * 0x78 + 0x78) = uStack_80;
          *(undefined8 *)(puStack_e0 + uVar1 * 0x78 + 0x70) = uStack_88;
          *(undefined8 *)(puStack_e0 + uVar1 * 0x78 + 0x88) = uStack_70;
          *(undefined8 *)(puStack_e0 + uVar1 * 0x78 + 0x80) = uStack_78;
          *(undefined8 *)(puStack_e0 + uVar1 * 0x78 + 0x68) = auStack_a8[3];
          *(undefined8 *)(puStack_e0 + uVar1 * 0x78 + 0x60) = auStack_a8[2];
          puVar4 = puStack_e0;
        } while (uVar6 != uVar7);
      }
    }
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 0x38));
  *(undefined **)(lVar5 + 0x38) = puVar4;
  FUN_103df3c10(lVar5,lVar3);
  _objc_allocWithZone(unaff_x20);
  FUN_103e062c8(lVar3);
  func_0x000103dfafbc(lVar5,FUN_103df3a28);
  return lVar3;
}



/* Entry: 103df45b8; end: 103df45cb; -[SCAdOpportunityEvent withAdSlotInfoList:] */

void FUN_103df45b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    FUN_103e05520(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  _objc_retain(param_1);
  lVar2 = param_3;
  FUN_103df4330(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103df45cc; end: 103df473f;  */

long FUN_103df45cc(long param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 unaff_x20;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  
  _swift_getObjectType();
  lVar1 = 0x112dbe418;
  func_0x0001000285a8(0x112dbe418,&UNK_10d990420);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  FUN_103df3a28();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar4 - extraout_x12;
  _objc_retain();
  FUN_103e0576c(lVar5);
  if (param_1 != 0) {
    _objc_retain(param_1);
    func_0x0001047b6fb0(puVar3);
  }
  lVar2 = 0;
  func_0x000100b91d00();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar3,param_1 == 0,1,lVar2);
  func_0x000101685658(puVar3,lVar5 + *(int *)(lVar1 + 0x30));
  FUN_103df3c10(lVar5,lVar4);
  _objc_allocWithZone(unaff_x20);
  FUN_103e062c8(lVar4);
  func_0x000103dfafbc(lVar5,FUN_103df3a28);
  return lVar4;
}



/* Entry: 103df4740; end: 103df479f; -[SCAdOpportunityEvent withAdResponse:] */

void FUN_103df4740(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103df45cc(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103df47a0; end: 103df489b; -[SCAdOpportunityEvent withAdInsertionStatus:] */

void FUN_103df47a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_103df3a28();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_103e0576c(lVar4);
  *(undefined8 *)(lVar4 + *(int *)(lVar2 + 0x34)) = param_3;
  FUN_103df3c10(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_103e062c8(puVar3);
  _objc_release(param_1);
  func_0x000103dfafbc(lVar4,FUN_103df3a28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 103df489c; end: 103df4997; -[SCAdOpportunityEvent withIsBrandSafe:] */

void FUN_103df489c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_103df3a28();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_103e0576c(lVar4);
  *(undefined1 *)(lVar4 + *(int *)(lVar2 + 0x38)) = param_3;
  FUN_103df3c10(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_103e062c8(puVar3);
  _objc_release(param_1);
  func_0x000103dfafbc(lVar4,FUN_103df3a28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 103df4998; end: 103df4a93; -[SCAdOpportunityEvent withInsertionRuleSatisfied:] */

void FUN_103df4998(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_103df3a28();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_103e0576c(lVar4);
  *(undefined1 *)(lVar4 + *(int *)(lVar2 + 0x3c)) = param_3;
  FUN_103df3c10(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_103e062c8(puVar3);
  _objc_release(param_1);
  func_0x000103dfafbc(lVar4,FUN_103df3a28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 103df4a94; end: 103df4b8f; -[SCAdOpportunityEvent withTryInsertAfterMediaReadyTimeMillis:] */

void FUN_103df4a94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_2;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_103df3a28();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_2);
  _objc_retain();
  FUN_103e0576c(lVar4);
  *(undefined8 *)(lVar4 + *(int *)(lVar2 + 0x40)) = param_1;
  FUN_103df3c10(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_103e062c8(puVar3);
  _objc_release(param_2);
  func_0x000103dfafbc(lVar4,FUN_103df3a28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 103df4b90; end: 103df4c8b; -[SCAdOpportunityEvent withLastTryInsertTimeMillis:] */

void FUN_103df4b90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_2;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_103df3a28();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_2);
  _objc_retain();
  FUN_103e0576c(lVar4);
  *(undefined8 *)(lVar4 + *(int *)(lVar2 + 0x44)) = param_1;
  FUN_103df3c10(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_103e062c8(puVar3);
  _objc_release(param_2);
  func_0x000103dfafbc(lVar4,FUN_103df3a28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 103df4c8c; end: 103df4d87; -[SCAdOpportunityEvent withInsertionStartTimeMillis:] */

void FUN_103df4c8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_2;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_103df3a28();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_2);
  _objc_retain();
  FUN_103e0576c(lVar4);
  *(undefined8 *)(lVar4 + *(int *)(lVar2 + 0x48)) = param_1;
  FUN_103df3c10(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_103e062c8(puVar3);
  _objc_release(param_2);
  func_0x000103dfafbc(lVar4,FUN_103df3a28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 103df4d88; end: 103df4e83; -[SCAdOpportunityEvent withInsertionSuccessTimeMillis:] */

void FUN_103df4d88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_2;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_103df3a28();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_2);
  _objc_retain();
  FUN_103e0576c(lVar4);
  *(undefined8 *)(lVar4 + *(int *)(lVar2 + 0x4c)) = param_1;
  FUN_103df3c10(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_103e062c8(puVar3);
  _objc_release(param_2);
  func_0x000103dfafbc(lVar4,FUN_103df3a28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 103df4e84; end: 103df510f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103df4e84(ulong param_1)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long alStack_90 [3];
  undefined *puStack_78;
  
  _swift_getObjectType();
  lVar3 = 0;
  FUN_103df3a28();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar5 = (long)alStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar5 - extraout_x12;
  _objc_retain();
  FUN_103e0576c(lVar7);
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    if (param_1 >> 0x3e == 0) {
      uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar9 = param_1;
      if (-1 < (long)param_1) {
        uVar9 = param_1 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar9 != 0) {
      puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000103e0696c(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103df5110);
        (*pcVar2)();
      }
      alStack_90[0] = lVar3;
      alStack_90[1] = lVar5;
      alStack_90[2] = unaff_x20;
      if ((param_1 & 0xc000000000000001) == 0) {
        lVar12 = *(ulong *)(puStack_78 + 0x10) << 4;
        uVar10 = *(ulong *)(puStack_78 + 0x10);
        plVar11 = (long *)(param_1 + 0x20);
        do {
          uVar13 = *(undefined8 *)(*plVar11 + _DAT_113011340);
          uVar8 = *(undefined8 *)(*plVar11 + _DAT_113011348);
          uVar4 = uVar10 + 1;
          if (*(ulong *)(puStack_78 + 0x18) >> 1 <= uVar10) {
            func_0x000103e0696c(1 < *(ulong *)(puStack_78 + 0x18),uVar4,1);
          }
          *(ulong *)(puStack_78 + 0x10) = uVar4;
          *(undefined8 *)(puStack_78 + lVar12 + 0x20) = uVar13;
          *(undefined8 *)(puStack_78 + lVar12 + 0x28) = uVar8;
          lVar12 = lVar12 + 0x10;
          uVar9 = uVar9 - 1;
          uVar10 = uVar4;
          lVar3 = alStack_90[0];
          puVar6 = puStack_78;
          unaff_x20 = alStack_90[2];
          lVar5 = alStack_90[1];
          plVar11 = plVar11 + 1;
        } while (uVar9 != 0);
      }
      else {
        uVar10 = 0;
        do {
          puVar6 = puStack_78;
          uVar4 = uVar10;
          FUN_103e06d68(uVar10,param_1);
          uVar13 = *(undefined8 *)(uVar4 + _DAT_113011340);
          uVar8 = *(undefined8 *)(uVar4 + _DAT_113011348);
          _swift_unknownObjectRelease();
          puStack_78 = puVar6;
          uVar4 = *(ulong *)(puVar6 + 0x10);
          if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar4) {
            func_0x000103e0696c(1 < *(ulong *)(puVar6 + 0x18),uVar4 + 1,1);
          }
          uVar10 = uVar10 + 1;
          *(ulong *)(puStack_78 + 0x10) = uVar4 + 1;
          *(undefined8 *)(puStack_78 + uVar4 * 0x10 + 0x20) = uVar13;
          *(undefined8 *)(puStack_78 + uVar4 * 0x10 + 0x28) = uVar8;
          lVar3 = alStack_90[0];
          puVar6 = puStack_78;
          unaff_x20 = alStack_90[2];
          lVar5 = alStack_90[1];
        } while (uVar9 != uVar10);
      }
    }
  }
  iVar1 = *(int *)(lVar3 + 0x50);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + iVar1));
  *(undefined **)(lVar7 + iVar1) = puVar6;
  FUN_103df3c10(lVar7,lVar5);
  _objc_allocWithZone(unaff_x20);
  FUN_103e062c8(lVar5);
  func_0x000103dfafbc(lVar7,FUN_103df3a28);
  return lVar5;
}



/* Entry: 103df5110; end: 103df5123; -[SCAdOpportunityEvent withEventHistoryList:] */

void FUN_103df5110(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    (*(code *)0x103e05718)(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  _objc_retain(param_1);
  lVar2 = param_3;
  FUN_103df4e84(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103df5124; end: 103df519f;  */

void FUN_103df5124(undefined8 param_1,undefined8 param_2,long param_3,code *param_4,code *param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    (*param_4)(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  _objc_retain(param_1);
  lVar2 = param_3;
  (*param_5)(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103df51a0; end: 103dfaf1f;  */

long * FUN_103df51a0(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  
  uVar11 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar26 = *param_2;
  *param_1 = lVar26;
  if ((uVar11 >> 0x11 & 1) == 0) {
    lVar12 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = lVar12;
    lVar12 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = lVar12;
    lVar12 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = lVar12;
    lVar28 = param_2[7];
    param_1[7] = lVar28;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    lVar12 = 0;
    func_0x000100b91d00();
    lVar30 = *(long *)(lVar12 + -8);
    pcVar18 = *(code **)(lVar30 + 0x30);
    _objc_retain(lVar26);
    _swift_bridgeObjectRetain(lVar28);
    puVar13 = puVar2;
    (*pcVar18)(puVar2,1,lVar12);
    if ((int)puVar13 == 0) {
      uVar20 = *puVar2;
      uVar29 = puVar2[3];
      uVar22 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar20;
      puVar1[3] = uVar29;
      puVar1[2] = uVar22;
      uVar20 = puVar2[4];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar20;
      uVar20 = puVar2[6];
      uVar22 = puVar2[7];
      puVar1[6] = uVar20;
      puVar1[7] = uVar22;
      uVar22 = puVar2[8];
      uVar29 = puVar2[9];
      puVar1[8] = uVar22;
      puVar1[9] = uVar29;
      uVar29 = puVar2[10];
      uVar33 = puVar2[0xb];
      puVar1[10] = uVar29;
      puVar1[0xb] = uVar33;
      uVar33 = puVar2[0xc];
      uVar32 = puVar2[0xd];
      puVar1[0xc] = uVar33;
      puVar1[0xd] = uVar32;
      uVar32 = puVar2[0xe];
      uVar19 = puVar2[0xf];
      puVar1[0xe] = uVar32;
      puVar1[0xf] = uVar19;
      uVar19 = puVar2[0x10];
      puVar1[0x10] = uVar19;
      lVar16 = (long)*(int *)(lVar12 + 0x3c);
      lVar28 = 0;
      __s10Foundation4UUIDVMa();
      lVar23 = *(long *)(lVar28 + -8);
      pcVar18 = *(code **)(lVar23 + 0x30);
      _swift_bridgeObjectRetain(uVar20);
      _swift_bridgeObjectRetain(uVar22);
      _swift_bridgeObjectRetain(uVar29);
      _swift_bridgeObjectRetain(uVar33);
      _swift_bridgeObjectRetain(uVar32);
      _swift_bridgeObjectRetain(uVar19);
      lVar26 = (long)puVar2 + lVar16;
      (*pcVar18)(lVar26,1,lVar28);
      if ((int)lVar26 == 0) {
        (**(code **)(lVar23 + 0x10))((long)puVar1 + lVar16,(long)puVar2 + lVar16,lVar28);
        (**(code **)(lVar23 + 0x38))((long)puVar1 + lVar16,0,1,lVar28);
      }
      else {
        lVar26 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar1 + lVar16,(long)puVar2 + lVar16,
                *(undefined8 *)(*(long *)(lVar26 + -8) + 0x40));
      }
      lVar16 = (long)*(int *)(lVar12 + 0x40);
      lVar26 = (long)puVar2 + lVar16;
      (*pcVar18)(lVar26,1,lVar28);
      if ((int)lVar26 == 0) {
        (**(code **)(lVar23 + 0x10))((long)puVar1 + lVar16,(long)puVar2 + lVar16,lVar28);
        (**(code **)(lVar23 + 0x38))((long)puVar1 + lVar16,0,1,lVar28);
      }
      else {
        lVar26 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar1 + lVar16,(long)puVar2 + lVar16,
                *(undefined8 *)(*(long *)(lVar26 + -8) + 0x40));
      }
      lVar16 = (long)*(int *)(lVar12 + 0x44);
      lVar26 = (long)puVar2 + lVar16;
      (*pcVar18)(lVar26,1,lVar28);
      if ((int)lVar26 == 0) {
        (**(code **)(lVar23 + 0x10))((long)puVar1 + lVar16,(long)puVar2 + lVar16,lVar28);
        (**(code **)(lVar23 + 0x38))((long)puVar1 + lVar16,0,1,lVar28);
      }
      else {
        lVar26 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar1 + lVar16,(long)puVar2 + lVar16,
                *(undefined8 *)(*(long *)(lVar26 + -8) + 0x40));
      }
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x48)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x48));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x4c)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x4c));
      uVar20 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x50));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x50)) = uVar20;
      uVar22 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x54));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x54)) = uVar22;
      uVar29 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x58));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x58)) = uVar29;
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x5c));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x5c));
      lVar26 = puVar3[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar20);
      _swift_bridgeObjectRetain(uVar22);
      _swift_bridgeObjectRetain(uVar29);
      if (lVar26 == 1) {
        uVar20 = puVar3[0xc];
        uVar29 = puVar3[0xf];
        uVar22 = puVar3[0xe];
        puVar13[0xd] = puVar3[0xd];
        puVar13[0xc] = uVar20;
        puVar13[0xf] = uVar29;
        puVar13[0xe] = uVar22;
        uVar20 = puVar3[0x10];
        uVar29 = puVar3[0x13];
        uVar22 = puVar3[0x12];
        puVar13[0x11] = puVar3[0x11];
        puVar13[0x10] = uVar20;
        puVar13[0x13] = uVar29;
        puVar13[0x12] = uVar22;
        uVar20 = puVar3[4];
        uVar29 = puVar3[7];
        uVar22 = puVar3[6];
        puVar13[5] = puVar3[5];
        puVar13[4] = uVar20;
        puVar13[7] = uVar29;
        puVar13[6] = uVar22;
        uVar20 = puVar3[8];
        uVar29 = puVar3[0xb];
        uVar22 = puVar3[10];
        puVar13[9] = puVar3[9];
        puVar13[8] = uVar20;
        puVar13[0xb] = uVar29;
        puVar13[10] = uVar22;
        uVar20 = *puVar3;
        uVar29 = puVar3[3];
        uVar22 = puVar3[2];
        puVar13[1] = puVar3[1];
        *puVar13 = uVar20;
        puVar13[3] = uVar29;
        puVar13[2] = uVar22;
      }
      else {
        *puVar13 = *puVar3;
        puVar13[1] = lVar26;
        uVar20 = puVar3[3];
        puVar13[2] = puVar3[2];
        puVar13[3] = uVar20;
        uVar22 = puVar3[5];
        puVar13[4] = puVar3[4];
        puVar13[5] = uVar22;
        uVar29 = puVar3[7];
        puVar13[6] = puVar3[6];
        puVar13[7] = uVar29;
        uVar33 = puVar3[9];
        puVar13[8] = puVar3[8];
        puVar13[9] = uVar33;
        *(undefined1 *)(puVar13 + 10) = *(undefined1 *)(puVar3 + 10);
        uVar32 = puVar3[0xb];
        puVar13[0xc] = puVar3[0xc];
        puVar13[0xb] = uVar32;
        lVar16 = puVar3[0x12];
        _swift_bridgeObjectRetain(lVar26);
        _swift_bridgeObjectRetain(uVar20);
        _swift_bridgeObjectRetain(uVar22);
        _swift_bridgeObjectRetain(uVar29);
        _swift_bridgeObjectRetain(uVar33);
        if (lVar16 == 0) {
          uVar20 = puVar3[0xd];
          puVar13[0xe] = puVar3[0xe];
          puVar13[0xd] = uVar20;
          uVar20 = puVar3[0xf];
          puVar13[0x10] = puVar3[0x10];
          puVar13[0xf] = uVar20;
          uVar20 = puVar3[0x11];
          puVar13[0x12] = puVar3[0x12];
          puVar13[0x11] = uVar20;
          puVar13[0x13] = puVar3[0x13];
        }
        else {
          uVar20 = puVar3[0xe];
          puVar13[0xd] = puVar3[0xd];
          puVar13[0xe] = uVar20;
          uVar20 = puVar3[0x10];
          puVar13[0xf] = puVar3[0xf];
          puVar13[0x10] = uVar20;
          puVar13[0x11] = puVar3[0x11];
          puVar13[0x12] = lVar16;
          puVar13[0x13] = puVar3[0x13];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar20);
          _swift_bridgeObjectRetain(lVar16);
        }
      }
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x60)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x60));
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 100));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 100));
      lVar26 = puVar3[1];
      if (lVar26 == 1) {
        uVar20 = *puVar3;
        uVar29 = puVar3[3];
        uVar22 = puVar3[2];
        puVar13[1] = puVar3[1];
        *puVar13 = uVar20;
        puVar13[3] = uVar29;
        puVar13[2] = uVar22;
        puVar13[4] = puVar3[4];
      }
      else {
        *puVar13 = *puVar3;
        puVar13[1] = lVar26;
        puVar13[2] = puVar3[2];
        *(undefined1 *)(puVar13 + 3) = *(undefined1 *)(puVar3 + 3);
        *(undefined2 *)((long)puVar13 + 0x19) = *(undefined2 *)((long)puVar3 + 0x19);
        puVar13[4] = puVar3[4];
        _swift_bridgeObjectRetain();
      }
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x68));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x68));
      if (puVar3[0x27] == 0) {
        _memcpy(puVar13,puVar3,0x160);
      }
      else {
        uVar20 = *puVar3;
        puVar13[1] = puVar3[1];
        *puVar13 = uVar20;
        uVar20 = puVar3[2];
        uVar22 = puVar3[3];
        puVar13[2] = uVar20;
        puVar13[3] = uVar22;
        uVar21 = puVar3[4];
        puVar13[4] = uVar21;
        uVar22 = puVar3[5];
        puVar13[6] = puVar3[6];
        puVar13[5] = uVar22;
        uVar22 = puVar3[7];
        uVar29 = puVar3[8];
        puVar13[7] = uVar22;
        puVar13[8] = uVar29;
        *(undefined2 *)(puVar13 + 9) = *(undefined2 *)(puVar3 + 9);
        *(undefined1 *)((long)puVar13 + 0x4a) = *(undefined1 *)((long)puVar3 + 0x4a);
        uVar29 = puVar3[0xb];
        puVar13[10] = puVar3[10];
        puVar13[0xb] = uVar29;
        uVar24 = puVar3[0xc];
        puVar13[0xc] = uVar24;
        *(undefined1 *)(puVar13 + 0xd) = *(undefined1 *)(puVar3 + 0xd);
        uVar33 = puVar3[0xe];
        puVar13[0xf] = puVar3[0xf];
        puVar13[0xe] = uVar33;
        *(undefined1 *)(puVar13 + 0x10) = *(undefined1 *)(puVar3 + 0x10);
        uVar33 = puVar3[0x12];
        puVar13[0x11] = puVar3[0x11];
        puVar13[0x12] = uVar33;
        uVar32 = puVar3[0x14];
        puVar13[0x13] = puVar3[0x13];
        puVar13[0x14] = uVar32;
        uVar19 = puVar3[0x16];
        puVar13[0x15] = puVar3[0x15];
        puVar13[0x16] = uVar19;
        uVar5 = puVar3[0x18];
        puVar13[0x17] = puVar3[0x17];
        puVar13[0x18] = uVar5;
        uVar6 = puVar3[0x1a];
        puVar13[0x19] = puVar3[0x19];
        puVar13[0x1a] = uVar6;
        uVar34 = puVar3[0x1b];
        puVar13[0x1c] = puVar3[0x1c];
        puVar13[0x1b] = uVar34;
        uVar17 = puVar3[0x1d];
        puVar13[0x1d] = uVar17;
        *(undefined1 *)(puVar13 + 0x1e) = *(undefined1 *)(puVar3 + 0x1e);
        *(undefined1 *)((long)puVar13 + 0xf1) = *(undefined1 *)((long)puVar3 + 0xf1);
        *(undefined1 *)((long)puVar13 + 0xf2) = *(undefined1 *)((long)puVar3 + 0xf2);
        uVar34 = puVar3[0x20];
        puVar13[0x1f] = puVar3[0x1f];
        puVar13[0x20] = uVar34;
        uVar7 = puVar3[0x22];
        puVar13[0x21] = puVar3[0x21];
        puVar13[0x22] = uVar7;
        uVar8 = puVar3[0x24];
        puVar13[0x23] = puVar3[0x23];
        puVar13[0x24] = uVar8;
        uVar9 = puVar3[0x26];
        puVar13[0x25] = puVar3[0x25];
        puVar13[0x26] = uVar9;
        uVar31 = puVar3[0x27];
        puVar13[0x27] = uVar31;
        uVar35 = puVar3[0x28];
        puVar13[0x29] = puVar3[0x29];
        puVar13[0x28] = uVar35;
        uVar35 = puVar3[0x2b];
        puVar13[0x2a] = puVar3[0x2a];
        puVar13[0x2b] = uVar35;
        _swift_bridgeObjectRetain(uVar20);
        _swift_bridgeObjectRetain(uVar21);
        _swift_bridgeObjectRetain(uVar22);
        _swift_bridgeObjectRetain(uVar29);
        _swift_bridgeObjectRetain(uVar24);
        _swift_bridgeObjectRetain(uVar33);
        _swift_bridgeObjectRetain(uVar32);
        _swift_bridgeObjectRetain(uVar19);
        _swift_bridgeObjectRetain(uVar5);
        _swift_bridgeObjectRetain(uVar6);
        _swift_bridgeObjectRetain(uVar17);
        _swift_bridgeObjectRetain(uVar34);
        _swift_bridgeObjectRetain(uVar7);
        _swift_bridgeObjectRetain(uVar8);
        _swift_bridgeObjectRetain(uVar9);
        _swift_bridgeObjectRetain(uVar31);
      }
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x6c));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x6c));
      uVar27 = puVar3[1];
      if (uVar27 >> 0x3c < 0xf) {
        uVar20 = *puVar3;
        func_0x00010006c00c(uVar20,uVar27);
        *puVar13 = uVar20;
        puVar13[1] = uVar27;
      }
      else {
        uVar20 = *puVar3;
        puVar13[1] = puVar3[1];
        *puVar13 = uVar20;
      }
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x70)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x70));
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x74));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x74));
      uVar20 = puVar3[1];
      *puVar13 = *puVar3;
      puVar13[1] = uVar20;
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x78));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x78));
      uVar20 = puVar3[1];
      *puVar13 = *puVar3;
      puVar13[1] = uVar20;
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x7c));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x7c));
      uVar22 = puVar3[1];
      *puVar13 = *puVar3;
      puVar13[1] = uVar22;
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x80));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x80));
      uVar27 = puVar3[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar20);
      _swift_bridgeObjectRetain(uVar22);
      if (uVar27 >> 0x3c < 0xf) {
        uVar20 = *puVar3;
        func_0x00010006c00c(uVar20,uVar27);
        *puVar13 = uVar20;
        puVar13[1] = uVar27;
      }
      else {
        uVar20 = *puVar3;
        puVar13[1] = puVar3[1];
        *puVar13 = uVar20;
      }
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x84));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x84));
      lVar26 = 0;
      func_0x000100b91fbc();
      lVar16 = *(long *)(lVar26 + -8);
      puVar14 = puVar3;
      (**(code **)(lVar16 + 0x30))(puVar3,1,lVar26);
      if ((int)puVar14 == 0) {
        uVar20 = puVar3[1];
        *puVar13 = *puVar3;
        puVar13[1] = uVar20;
        uVar20 = puVar3[2];
        uVar29 = puVar3[5];
        uVar22 = puVar3[4];
        puVar13[3] = puVar3[3];
        puVar13[2] = uVar20;
        puVar13[5] = uVar29;
        puVar13[4] = uVar22;
        uVar20 = puVar3[6];
        uVar22 = puVar3[7];
        puVar13[6] = uVar20;
        puVar13[7] = uVar22;
        uVar22 = puVar3[8];
        puVar13[8] = uVar22;
        lVar25 = (long)*(int *)(lVar26 + 0x28);
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar20);
        _swift_bridgeObjectRetain(uVar22);
        lVar15 = (long)puVar3 + lVar25;
        (*pcVar18)(lVar15,1,lVar28);
        if ((int)lVar15 == 0) {
          (**(code **)(lVar23 + 0x10))((long)puVar13 + lVar25,(long)puVar3 + lVar25,lVar28);
          (**(code **)(lVar23 + 0x38))((long)puVar13 + lVar25,0,1,lVar28);
        }
        else {
          lVar15 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          _memcpy((long)puVar13 + lVar25,(long)puVar3 + lVar25,
                  *(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
        }
        puVar14 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar26 + 0x2c));
        puVar4 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar26 + 0x2c));
        uVar20 = puVar4[1];
        *puVar14 = *puVar4;
        puVar14[1] = uVar20;
        puVar14 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar26 + 0x30));
        puVar4 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar26 + 0x30));
        uVar20 = puVar4[1];
        *puVar14 = *puVar4;
        puVar14[1] = uVar20;
        lVar25 = (long)*(int *)(lVar26 + 0x34);
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar20);
        lVar15 = (long)puVar3 + lVar25;
        (*pcVar18)(lVar15,1,lVar28);
        if ((int)lVar15 == 0) {
          (**(code **)(lVar23 + 0x10))((long)puVar13 + lVar25,(long)puVar3 + lVar25,lVar28);
          (**(code **)(lVar23 + 0x38))((long)puVar13 + lVar25,0,1,lVar28);
        }
        else {
          lVar28 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          _memcpy((long)puVar13 + lVar25,(long)puVar3 + lVar25,
                  *(undefined8 *)(*(long *)(lVar28 + -8) + 0x40));
        }
        puVar14 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar26 + 0x38));
        puVar4 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar26 + 0x38));
        uVar20 = puVar4[1];
        *puVar14 = *puVar4;
        puVar14[1] = uVar20;
        puVar14 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar26 + 0x3c));
        puVar3 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar26 + 0x3c));
        uVar20 = puVar3[1];
        *puVar14 = *puVar3;
        puVar14[1] = uVar20;
        pcVar18 = *(code **)(lVar16 + 0x38);
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar20);
        (*pcVar18)(puVar13,0,1,lVar26);
      }
      else {
        lVar26 = 0x112db39a8;
        func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
        _memcpy(puVar13,puVar3,*(undefined8 *)(*(long *)(lVar26 + -8) + 0x40));
      }
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x88));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x88));
      lVar26 = puVar3[1];
      if (lVar26 == 0) {
        uVar20 = puVar3[0x10];
        uVar29 = puVar3[0x13];
        uVar22 = puVar3[0x12];
        puVar13[0x11] = puVar3[0x11];
        puVar13[0x10] = uVar20;
        puVar13[0x13] = uVar29;
        puVar13[0x12] = uVar22;
        *(undefined1 *)(puVar13 + 0x14) = *(undefined1 *)(puVar3 + 0x14);
        uVar20 = puVar3[8];
        uVar29 = puVar3[0xb];
        uVar22 = puVar3[10];
        puVar13[9] = puVar3[9];
        puVar13[8] = uVar20;
        puVar13[0xb] = uVar29;
        puVar13[10] = uVar22;
        uVar29 = puVar3[0xc];
        uVar22 = puVar3[0xf];
        uVar20 = puVar3[0xe];
        puVar13[0xd] = puVar3[0xd];
        puVar13[0xc] = uVar29;
        puVar13[0xf] = uVar22;
        puVar13[0xe] = uVar20;
        uVar20 = *puVar3;
        uVar29 = puVar3[3];
        uVar22 = puVar3[2];
        puVar13[1] = puVar3[1];
        *puVar13 = uVar20;
        puVar13[3] = uVar29;
        puVar13[2] = uVar22;
        uVar29 = puVar3[4];
        uVar22 = puVar3[7];
        uVar20 = puVar3[6];
        puVar13[5] = puVar3[5];
        puVar13[4] = uVar29;
        puVar13[7] = uVar22;
        puVar13[6] = uVar20;
      }
      else {
        *puVar13 = *puVar3;
        puVar13[1] = lVar26;
        lVar26 = puVar3[8];
        _swift_bridgeObjectRetain();
        if (lVar26 == 1) {
          uVar20 = puVar3[2];
          uVar29 = puVar3[5];
          uVar22 = puVar3[4];
          puVar13[3] = puVar3[3];
          puVar13[2] = uVar20;
          puVar13[5] = uVar29;
          puVar13[4] = uVar22;
          uVar20 = puVar3[6];
          puVar13[7] = puVar3[7];
          puVar13[6] = uVar20;
          puVar13[8] = puVar3[8];
        }
        else {
          lVar28 = puVar3[4];
          if (lVar28 == 1) {
            uVar20 = puVar3[2];
            uVar29 = puVar3[5];
            uVar22 = puVar3[4];
            puVar13[3] = puVar3[3];
            puVar13[2] = uVar20;
            puVar13[5] = uVar29;
            puVar13[4] = uVar22;
            puVar13[6] = puVar3[6];
          }
          else {
            uVar20 = puVar3[2];
            puVar13[3] = puVar3[3];
            puVar13[2] = uVar20;
            uVar20 = puVar3[5];
            uVar22 = puVar3[6];
            puVar13[4] = lVar28;
            puVar13[5] = uVar20;
            puVar13[6] = uVar22;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar22);
          }
          puVar13[7] = puVar3[7];
          puVar13[8] = lVar26;
          _swift_bridgeObjectRetain(lVar26);
        }
        lVar26 = puVar3[0xf];
        if (lVar26 == 1) {
          uVar20 = puVar3[9];
          puVar13[10] = puVar3[10];
          puVar13[9] = uVar20;
          uVar20 = puVar3[0xb];
          puVar13[0xc] = puVar3[0xc];
          puVar13[0xb] = uVar20;
          uVar20 = puVar3[0xd];
          puVar13[0xe] = puVar3[0xe];
          puVar13[0xd] = uVar20;
          puVar13[0xf] = puVar3[0xf];
        }
        else {
          lVar28 = puVar3[0xb];
          if (lVar28 == 1) {
            uVar20 = puVar3[9];
            puVar13[10] = puVar3[10];
            puVar13[9] = uVar20;
            uVar20 = puVar3[0xb];
            puVar13[0xc] = puVar3[0xc];
            puVar13[0xb] = uVar20;
            puVar13[0xd] = puVar3[0xd];
          }
          else {
            uVar20 = puVar3[9];
            puVar13[10] = puVar3[10];
            puVar13[9] = uVar20;
            uVar20 = puVar3[0xc];
            uVar22 = puVar3[0xd];
            puVar13[0xb] = lVar28;
            puVar13[0xc] = uVar20;
            puVar13[0xd] = uVar22;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar22);
          }
          puVar13[0xe] = puVar3[0xe];
          puVar13[0xf] = lVar26;
          _swift_bridgeObjectRetain(lVar26);
        }
        *(undefined2 *)(puVar13 + 0x10) = *(undefined2 *)(puVar3 + 0x10);
        uVar20 = puVar3[0x11];
        puVar13[0x12] = puVar3[0x12];
        puVar13[0x11] = uVar20;
        puVar13[0x13] = puVar3[0x13];
        *(undefined1 *)(puVar13 + 0x14) = *(undefined1 *)(puVar3 + 0x14);
        _swift_bridgeObjectRetain();
      }
      *(undefined4 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x8c)) =
           *(undefined4 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x8c));
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x90)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x90));
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x94));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x94));
      uVar20 = *puVar3;
      uVar29 = puVar3[3];
      uVar22 = puVar3[2];
      puVar13[1] = puVar3[1];
      *puVar13 = uVar20;
      puVar13[3] = uVar29;
      puVar13[2] = uVar22;
      uVar20 = puVar3[4];
      uVar29 = puVar3[7];
      uVar22 = puVar3[6];
      puVar13[5] = puVar3[5];
      puVar13[4] = uVar20;
      puVar13[7] = uVar29;
      puVar13[6] = uVar22;
      uVar29 = puVar3[0xc];
      uVar22 = puVar3[0xf];
      uVar20 = puVar3[0xe];
      puVar13[0xd] = puVar3[0xd];
      puVar13[0xc] = uVar29;
      puVar13[0xf] = uVar22;
      puVar13[0xe] = uVar20;
      uVar29 = puVar3[8];
      uVar22 = puVar3[0xb];
      uVar20 = puVar3[10];
      puVar13[9] = puVar3[9];
      puVar13[8] = uVar29;
      puVar13[0xb] = uVar22;
      puVar13[10] = uVar20;
      uVar20 = *(undefined8 *)((long)puVar3 + 0xa9);
      *(undefined8 *)((long)puVar13 + 0xb1) = *(undefined8 *)((long)puVar3 + 0xb1);
      *(undefined8 *)((long)puVar13 + 0xa9) = uVar20;
      uVar20 = puVar3[0x12];
      uVar29 = puVar3[0x15];
      uVar22 = puVar3[0x14];
      puVar13[0x13] = puVar3[0x13];
      puVar13[0x12] = uVar20;
      puVar13[0x15] = uVar29;
      puVar13[0x14] = uVar22;
      uVar20 = puVar3[0x10];
      puVar13[0x11] = puVar3[0x11];
      puVar13[0x10] = uVar20;
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x98)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x98));
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x9c)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x9c));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xa0)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xa0));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xa4)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xa4));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xa8)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xa8));
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xac));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xac));
      lVar26 = puVar3[1];
      if (lVar26 == 0) {
        uVar20 = *puVar3;
        uVar29 = puVar3[3];
        uVar22 = puVar3[2];
        puVar13[1] = puVar3[1];
        *puVar13 = uVar20;
        puVar13[3] = uVar29;
        puVar13[2] = uVar22;
      }
      else {
        *puVar13 = *puVar3;
        puVar13[1] = lVar26;
        uVar20 = puVar3[3];
        puVar13[2] = puVar3[2];
        puVar13[3] = uVar20;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar20);
      }
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xb0)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xb0));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xb4)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xb4));
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xb8));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xb8));
      lVar26 = puVar3[1];
      if (lVar26 == 0) {
        uVar20 = puVar3[0x10];
        uVar29 = puVar3[0x13];
        uVar22 = puVar3[0x12];
        puVar13[0x11] = puVar3[0x11];
        puVar13[0x10] = uVar20;
        puVar13[0x13] = uVar29;
        puVar13[0x12] = uVar22;
        *(undefined1 *)(puVar13 + 0x14) = *(undefined1 *)(puVar3 + 0x14);
        uVar20 = puVar3[8];
        uVar29 = puVar3[0xb];
        uVar22 = puVar3[10];
        puVar13[9] = puVar3[9];
        puVar13[8] = uVar20;
        puVar13[0xb] = uVar29;
        puVar13[10] = uVar22;
        uVar29 = puVar3[0xc];
        uVar22 = puVar3[0xf];
        uVar20 = puVar3[0xe];
        puVar13[0xd] = puVar3[0xd];
        puVar13[0xc] = uVar29;
        puVar13[0xf] = uVar22;
        puVar13[0xe] = uVar20;
        uVar20 = *puVar3;
        uVar29 = puVar3[3];
        uVar22 = puVar3[2];
        puVar13[1] = puVar3[1];
        *puVar13 = uVar20;
        puVar13[3] = uVar29;
        puVar13[2] = uVar22;
        uVar29 = puVar3[4];
        uVar22 = puVar3[7];
        uVar20 = puVar3[6];
        puVar13[5] = puVar3[5];
        puVar13[4] = uVar29;
        puVar13[7] = uVar22;
        puVar13[6] = uVar20;
      }
      else {
        *puVar13 = *puVar3;
        puVar13[1] = lVar26;
        lVar26 = puVar3[8];
        _swift_bridgeObjectRetain();
        if (lVar26 == 1) {
          uVar20 = puVar3[2];
          uVar29 = puVar3[5];
          uVar22 = puVar3[4];
          puVar13[3] = puVar3[3];
          puVar13[2] = uVar20;
          puVar13[5] = uVar29;
          puVar13[4] = uVar22;
          uVar20 = puVar3[6];
          puVar13[7] = puVar3[7];
          puVar13[6] = uVar20;
          puVar13[8] = puVar3[8];
        }
        else {
          lVar28 = puVar3[4];
          if (lVar28 == 1) {
            uVar20 = puVar3[2];
            uVar29 = puVar3[5];
            uVar22 = puVar3[4];
            puVar13[3] = puVar3[3];
            puVar13[2] = uVar20;
            puVar13[5] = uVar29;
            puVar13[4] = uVar22;
            puVar13[6] = puVar3[6];
          }
          else {
            uVar20 = puVar3[2];
            puVar13[3] = puVar3[3];
            puVar13[2] = uVar20;
            uVar20 = puVar3[5];
            uVar22 = puVar3[6];
            puVar13[4] = lVar28;
            puVar13[5] = uVar20;
            puVar13[6] = uVar22;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar22);
          }
          puVar13[7] = puVar3[7];
          puVar13[8] = lVar26;
          _swift_bridgeObjectRetain(lVar26);
        }
        lVar26 = puVar3[0xf];
        if (lVar26 == 1) {
          uVar20 = puVar3[9];
          puVar13[10] = puVar3[10];
          puVar13[9] = uVar20;
          uVar20 = puVar3[0xb];
          puVar13[0xc] = puVar3[0xc];
          puVar13[0xb] = uVar20;
          uVar20 = puVar3[0xd];
          puVar13[0xe] = puVar3[0xe];
          puVar13[0xd] = uVar20;
          puVar13[0xf] = puVar3[0xf];
        }
        else {
          lVar28 = puVar3[0xb];
          if (lVar28 == 1) {
            uVar20 = puVar3[9];
            puVar13[10] = puVar3[10];
            puVar13[9] = uVar20;
            uVar20 = puVar3[0xb];
            puVar13[0xc] = puVar3[0xc];
            puVar13[0xb] = uVar20;
            puVar13[0xd] = puVar3[0xd];
          }
          else {
            uVar20 = puVar3[9];
            puVar13[10] = puVar3[10];
            puVar13[9] = uVar20;
            uVar20 = puVar3[0xc];
            uVar22 = puVar3[0xd];
            puVar13[0xb] = lVar28;
            puVar13[0xc] = uVar20;
            puVar13[0xd] = uVar22;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar22);
          }
          puVar13[0xe] = puVar3[0xe];
          puVar13[0xf] = lVar26;
          _swift_bridgeObjectRetain(lVar26);
        }
        *(undefined2 *)(puVar13 + 0x10) = *(undefined2 *)(puVar3 + 0x10);
        uVar20 = puVar3[0x11];
        puVar13[0x12] = puVar3[0x12];
        puVar13[0x11] = uVar20;
        puVar13[0x13] = puVar3[0x13];
        *(undefined1 *)(puVar13 + 0x14) = *(undefined1 *)(puVar3 + 0x14);
        _swift_bridgeObjectRetain();
      }
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xbc));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xbc));
      lVar26 = puVar3[1];
      if (lVar26 == 0) {
        uVar20 = puVar3[0x10];
        uVar29 = puVar3[0x13];
        uVar22 = puVar3[0x12];
        puVar13[0x11] = puVar3[0x11];
        puVar13[0x10] = uVar20;
        puVar13[0x13] = uVar29;
        puVar13[0x12] = uVar22;
        *(undefined1 *)(puVar13 + 0x14) = *(undefined1 *)(puVar3 + 0x14);
        uVar20 = puVar3[8];
        uVar29 = puVar3[0xb];
        uVar22 = puVar3[10];
        puVar13[9] = puVar3[9];
        puVar13[8] = uVar20;
        puVar13[0xb] = uVar29;
        puVar13[10] = uVar22;
        uVar29 = puVar3[0xc];
        uVar22 = puVar3[0xf];
        uVar20 = puVar3[0xe];
        puVar13[0xd] = puVar3[0xd];
        puVar13[0xc] = uVar29;
        puVar13[0xf] = uVar22;
        puVar13[0xe] = uVar20;
        uVar20 = *puVar3;
        uVar29 = puVar3[3];
        uVar22 = puVar3[2];
        puVar13[1] = puVar3[1];
        *puVar13 = uVar20;
        puVar13[3] = uVar29;
        puVar13[2] = uVar22;
        uVar29 = puVar3[4];
        uVar22 = puVar3[7];
        uVar20 = puVar3[6];
        puVar13[5] = puVar3[5];
        puVar13[4] = uVar29;
        puVar13[7] = uVar22;
        puVar13[6] = uVar20;
      }
      else {
        *puVar13 = *puVar3;
        puVar13[1] = lVar26;
        lVar26 = puVar3[8];
        _swift_bridgeObjectRetain();
        if (lVar26 == 1) {
          uVar20 = puVar3[2];
          uVar29 = puVar3[5];
          uVar22 = puVar3[4];
          puVar13[3] = puVar3[3];
          puVar13[2] = uVar20;
          puVar13[5] = uVar29;
          puVar13[4] = uVar22;
          uVar20 = puVar3[6];
          puVar13[7] = puVar3[7];
          puVar13[6] = uVar20;
          puVar13[8] = puVar3[8];
        }
        else {
          lVar28 = puVar3[4];
          if (lVar28 == 1) {
            uVar20 = puVar3[2];
            uVar29 = puVar3[5];
            uVar22 = puVar3[4];
            puVar13[3] = puVar3[3];
            puVar13[2] = uVar20;
            puVar13[5] = uVar29;
            puVar13[4] = uVar22;
            puVar13[6] = puVar3[6];
          }
          else {
            uVar20 = puVar3[2];
            puVar13[3] = puVar3[3];
            puVar13[2] = uVar20;
            uVar20 = puVar3[5];
            uVar22 = puVar3[6];
            puVar13[4] = lVar28;
            puVar13[5] = uVar20;
            puVar13[6] = uVar22;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar22);
          }
          puVar13[7] = puVar3[7];
          puVar13[8] = lVar26;
          _swift_bridgeObjectRetain(lVar26);
        }
        lVar26 = puVar3[0xf];
        if (lVar26 == 1) {
          uVar20 = puVar3[9];
          puVar13[10] = puVar3[10];
          puVar13[9] = uVar20;
          uVar20 = puVar3[0xb];
          puVar13[0xc] = puVar3[0xc];
          puVar13[0xb] = uVar20;
          uVar20 = puVar3[0xd];
          puVar13[0xe] = puVar3[0xe];
          puVar13[0xd] = uVar20;
          puVar13[0xf] = puVar3[0xf];
        }
        else {
          lVar28 = puVar3[0xb];
          if (lVar28 == 1) {
            uVar20 = puVar3[9];
            puVar13[10] = puVar3[10];
            puVar13[9] = uVar20;
            uVar20 = puVar3[0xb];
            puVar13[0xc] = puVar3[0xc];
            puVar13[0xb] = uVar20;
            puVar13[0xd] = puVar3[0xd];
          }
          else {
            uVar20 = puVar3[9];
            puVar13[10] = puVar3[10];
            puVar13[9] = uVar20;
            uVar20 = puVar3[0xc];
            uVar22 = puVar3[0xd];
            puVar13[0xb] = lVar28;
            puVar13[0xc] = uVar20;
            puVar13[0xd] = uVar22;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar22);
          }
          puVar13[0xe] = puVar3[0xe];
          puVar13[0xf] = lVar26;
          _swift_bridgeObjectRetain(lVar26);
        }
        *(undefined2 *)(puVar13 + 0x10) = *(undefined2 *)(puVar3 + 0x10);
        uVar20 = puVar3[0x11];
        puVar13[0x12] = puVar3[0x12];
        puVar13[0x11] = uVar20;
        puVar13[0x13] = puVar3[0x13];
        *(undefined1 *)(puVar13 + 0x14) = *(undefined1 *)(puVar3 + 0x14);
        _swift_bridgeObjectRetain();
      }
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xc0)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xc0));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xc4)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xc4));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 200)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 200));
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xcc)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xcc));
      (**(code **)(lVar30 + 0x38))(puVar1,0,1,lVar12);
    }
    else {
      lVar26 = 0x112dbe418;
      func_0x0001000285a8(0x112dbe418,&UNK_10d990420);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar26 + -8) + 0x40));
    }
    iVar10 = *(int *)(param_3 + 0x38);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
    *(undefined1 *)((long)param_1 + (long)iVar10) = *(undefined1 *)((long)param_2 + (long)iVar10);
    iVar10 = *(int *)(param_3 + 0x40);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
    *(undefined8 *)((long)param_1 + (long)iVar10) = *(undefined8 *)((long)param_2 + (long)iVar10);
    iVar10 = *(int *)(param_3 + 0x48);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
    *(undefined8 *)((long)param_1 + (long)iVar10) = *(undefined8 *)((long)param_2 + (long)iVar10);
    iVar10 = *(int *)(param_3 + 0x50);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
    *(undefined8 *)((long)param_1 + (long)iVar10) = *(undefined8 *)((long)param_2 + (long)iVar10);
    _swift_bridgeObjectRetain();
  }
  else {
    uVar27 = (ulong)uVar11 & 0xff;
    param_1 = (long *)(lVar26 + (uVar27 + 0x10 & (uVar27 ^ 0xffffffffffffffff)));
    _swift_retain(lVar26);
  }
  return param_1;
}



/* Entry: 103dfaf20; end: 103dfaff7;  */

undefined8 FUN_103dfaf20(undefined8 param_1)

{
  (*(code *)&DAT_1047a3cf0)();
  return param_1;
}



/* Entry: 103dfaff8; end: 103dfd207;  */

undefined8 * FUN_103dfaff8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar17 = *param_2;
  uVar19 = param_2[3];
  uVar18 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar17;
  param_1[3] = uVar19;
  param_1[2] = uVar18;
  uVar17 = param_2[4];
  uVar19 = param_2[7];
  uVar18 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar17;
  param_1[7] = uVar19;
  param_1[6] = uVar18;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  lVar6 = 0;
  func_0x000100b91d00();
  lVar13 = *(long *)(lVar6 + -8);
  puVar7 = puVar2;
  (**(code **)(lVar13 + 0x30))(puVar2,1,lVar6);
  if ((int)puVar7 == 0) {
    uVar17 = *puVar2;
    uVar19 = puVar2[3];
    uVar18 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar17;
    puVar1[3] = uVar19;
    puVar1[2] = uVar18;
    puVar1[4] = puVar2[4];
    uVar17 = puVar2[5];
    puVar1[6] = puVar2[6];
    puVar1[5] = uVar17;
    uVar17 = puVar2[7];
    puVar1[8] = puVar2[8];
    puVar1[7] = uVar17;
    uVar17 = puVar2[9];
    puVar1[10] = puVar2[10];
    puVar1[9] = uVar17;
    uVar17 = puVar2[0xb];
    puVar1[0xc] = puVar2[0xc];
    puVar1[0xb] = uVar17;
    uVar17 = puVar2[0xd];
    puVar1[0xe] = puVar2[0xe];
    puVar1[0xd] = uVar17;
    uVar17 = puVar2[0xf];
    puVar1[0x10] = puVar2[0x10];
    puVar1[0xf] = uVar17;
    lVar15 = (long)*(int *)(lVar6 + 0x3c);
    lVar8 = 0;
    __s10Foundation4UUIDVMa();
    lVar16 = *(long *)(lVar8 + -8);
    pcVar12 = *(code **)(lVar16 + 0x30);
    lVar9 = (long)puVar2 + lVar15;
    (*pcVar12)(lVar9,1,lVar8);
    if ((int)lVar9 == 0) {
      (**(code **)(lVar16 + 0x20))((long)puVar1 + lVar15,(long)puVar2 + lVar15,lVar8);
      (**(code **)(lVar16 + 0x38))((long)puVar1 + lVar15,0,1,lVar8);
    }
    else {
      lVar9 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar15,(long)puVar2 + lVar15,
              *(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    }
    lVar15 = (long)*(int *)(lVar6 + 0x40);
    lVar9 = (long)puVar2 + lVar15;
    (*pcVar12)(lVar9,1,lVar8);
    if ((int)lVar9 == 0) {
      (**(code **)(lVar16 + 0x20))((long)puVar1 + lVar15,(long)puVar2 + lVar15,lVar8);
      (**(code **)(lVar16 + 0x38))((long)puVar1 + lVar15,0,1,lVar8);
    }
    else {
      lVar9 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar15,(long)puVar2 + lVar15,
              *(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    }
    lVar15 = (long)*(int *)(lVar6 + 0x44);
    lVar9 = (long)puVar2 + lVar15;
    (*pcVar12)(lVar9,1,lVar8);
    if ((int)lVar9 == 0) {
      (**(code **)(lVar16 + 0x20))((long)puVar1 + lVar15,(long)puVar2 + lVar15,lVar8);
      (**(code **)(lVar16 + 0x38))((long)puVar1 + lVar15,0,1,lVar8);
    }
    else {
      lVar9 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar15,(long)puVar2 + lVar15,
              *(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    }
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x48)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x48));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x4c)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x4c));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x50)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x50));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x54)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x54));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x58)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x58));
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x5c));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x5c));
    uVar17 = *puVar3;
    uVar19 = puVar3[3];
    uVar18 = puVar3[2];
    puVar7[1] = puVar3[1];
    *puVar7 = uVar17;
    puVar7[3] = uVar19;
    puVar7[2] = uVar18;
    uVar19 = puVar3[8];
    uVar18 = puVar3[0xb];
    uVar17 = puVar3[10];
    puVar7[9] = puVar3[9];
    puVar7[8] = uVar19;
    puVar7[0xb] = uVar18;
    puVar7[10] = uVar17;
    uVar19 = puVar3[4];
    uVar18 = puVar3[7];
    uVar17 = puVar3[6];
    puVar7[5] = puVar3[5];
    puVar7[4] = uVar19;
    puVar7[7] = uVar18;
    puVar7[6] = uVar17;
    uVar19 = puVar3[0x10];
    uVar18 = puVar3[0x13];
    uVar17 = puVar3[0x12];
    puVar7[0x11] = puVar3[0x11];
    puVar7[0x10] = uVar19;
    puVar7[0x13] = uVar18;
    puVar7[0x12] = uVar17;
    uVar19 = puVar3[0xc];
    uVar18 = puVar3[0xf];
    uVar17 = puVar3[0xe];
    puVar7[0xd] = puVar3[0xd];
    puVar7[0xc] = uVar19;
    puVar7[0xf] = uVar18;
    puVar7[0xe] = uVar17;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x60)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x60));
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 100));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 100));
    puVar7[4] = puVar3[4];
    uVar19 = *puVar3;
    uVar18 = puVar3[3];
    uVar17 = puVar3[2];
    puVar7[1] = puVar3[1];
    *puVar7 = uVar19;
    puVar7[3] = uVar18;
    puVar7[2] = uVar17;
    _memcpy((long)puVar1 + (long)*(int *)(lVar6 + 0x68),(long)puVar2 + (long)*(int *)(lVar6 + 0x68),
            0x160);
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x6c));
    uVar17 = *puVar7;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x6c));
    puVar3[1] = puVar7[1];
    *puVar3 = uVar17;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x70)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x70));
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x74));
    uVar17 = *puVar7;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x74));
    puVar3[1] = puVar7[1];
    *puVar3 = uVar17;
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x78));
    uVar17 = *puVar7;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x78));
    puVar3[1] = puVar7[1];
    *puVar3 = uVar17;
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x7c));
    uVar17 = *puVar7;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x7c));
    puVar3[1] = puVar7[1];
    *puVar3 = uVar17;
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x80));
    uVar17 = *puVar7;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x80));
    puVar3[1] = puVar7[1];
    *puVar3 = uVar17;
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x84));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x84));
    lVar9 = 0;
    func_0x000100b91fbc();
    lVar15 = *(long *)(lVar9 + -8);
    puVar10 = puVar3;
    (**(code **)(lVar15 + 0x30))(puVar3,1,lVar9);
    if ((int)puVar10 == 0) {
      uVar17 = *puVar3;
      uVar19 = puVar3[3];
      uVar18 = puVar3[2];
      puVar7[1] = puVar3[1];
      *puVar7 = uVar17;
      puVar7[3] = uVar19;
      puVar7[2] = uVar18;
      puVar7[4] = puVar3[4];
      uVar17 = puVar3[5];
      puVar7[6] = puVar3[6];
      puVar7[5] = uVar17;
      uVar17 = puVar3[7];
      puVar7[8] = puVar3[8];
      puVar7[7] = uVar17;
      lVar14 = (long)*(int *)(lVar9 + 0x28);
      lVar11 = (long)puVar3 + lVar14;
      (*pcVar12)(lVar11,1,lVar8);
      if ((int)lVar11 == 0) {
        (**(code **)(lVar16 + 0x20))((long)puVar7 + lVar14,(long)puVar3 + lVar14,lVar8);
        (**(code **)(lVar16 + 0x38))((long)puVar7 + lVar14,0,1,lVar8);
      }
      else {
        lVar11 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar7 + lVar14,(long)puVar3 + lVar14,
                *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
      }
      puVar10 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar9 + 0x2c));
      uVar17 = *puVar10;
      puVar5 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar9 + 0x2c));
      puVar5[1] = puVar10[1];
      *puVar5 = uVar17;
      puVar10 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar9 + 0x30));
      uVar17 = *puVar10;
      puVar5 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar9 + 0x30));
      puVar5[1] = puVar10[1];
      *puVar5 = uVar17;
      lVar14 = (long)*(int *)(lVar9 + 0x34);
      lVar11 = (long)puVar3 + lVar14;
      (*pcVar12)(lVar11,1,lVar8);
      if ((int)lVar11 == 0) {
        (**(code **)(lVar16 + 0x20))((long)puVar7 + lVar14,(long)puVar3 + lVar14,lVar8);
        (**(code **)(lVar16 + 0x38))((long)puVar7 + lVar14,0,1,lVar8);
      }
      else {
        lVar8 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar7 + lVar14,(long)puVar3 + lVar14,
                *(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
      }
      puVar10 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar9 + 0x38));
      uVar17 = *puVar10;
      puVar5 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar9 + 0x38));
      puVar5[1] = puVar10[1];
      *puVar5 = uVar17;
      puVar3 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar9 + 0x3c));
      uVar17 = *puVar3;
      puVar10 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar9 + 0x3c));
      puVar10[1] = puVar3[1];
      *puVar10 = uVar17;
      (**(code **)(lVar15 + 0x38))(puVar7,0,1,lVar9);
    }
    else {
      lVar9 = 0x112db39a8;
      func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
      _memcpy(puVar7,puVar3,*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    }
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x88));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x88));
    uVar19 = puVar3[8];
    uVar18 = puVar3[0xb];
    uVar17 = puVar3[10];
    puVar7[9] = puVar3[9];
    puVar7[8] = uVar19;
    puVar7[0xb] = uVar18;
    puVar7[10] = uVar17;
    *(undefined1 *)(puVar7 + 0x14) = *(undefined1 *)(puVar3 + 0x14);
    uVar19 = puVar3[0x10];
    uVar18 = puVar3[0x13];
    uVar17 = puVar3[0x12];
    puVar7[0x11] = puVar3[0x11];
    puVar7[0x10] = uVar19;
    puVar7[0x13] = uVar18;
    puVar7[0x12] = uVar17;
    uVar17 = puVar3[0xc];
    uVar19 = puVar3[0xf];
    uVar18 = puVar3[0xe];
    puVar7[0xd] = puVar3[0xd];
    puVar7[0xc] = uVar17;
    puVar7[0xf] = uVar19;
    puVar7[0xe] = uVar18;
    uVar17 = *puVar3;
    uVar19 = puVar3[3];
    uVar18 = puVar3[2];
    puVar7[1] = puVar3[1];
    *puVar7 = uVar17;
    puVar7[3] = uVar19;
    puVar7[2] = uVar18;
    uVar19 = puVar3[4];
    uVar18 = puVar3[7];
    uVar17 = puVar3[6];
    puVar7[5] = puVar3[5];
    puVar7[4] = uVar19;
    puVar7[7] = uVar18;
    puVar7[6] = uVar17;
    *(undefined4 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x8c)) =
         *(undefined4 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x8c));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x90)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x90));
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x94));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x94));
    uVar17 = *puVar3;
    uVar19 = puVar3[3];
    uVar18 = puVar3[2];
    puVar7[1] = puVar3[1];
    *puVar7 = uVar17;
    puVar7[3] = uVar19;
    puVar7[2] = uVar18;
    uVar17 = puVar3[4];
    uVar19 = puVar3[7];
    uVar18 = puVar3[6];
    puVar7[5] = puVar3[5];
    puVar7[4] = uVar17;
    puVar7[7] = uVar19;
    puVar7[6] = uVar18;
    uVar19 = puVar3[0xc];
    uVar18 = puVar3[0xf];
    uVar17 = puVar3[0xe];
    puVar7[0xd] = puVar3[0xd];
    puVar7[0xc] = uVar19;
    puVar7[0xf] = uVar18;
    puVar7[0xe] = uVar17;
    uVar19 = puVar3[8];
    uVar18 = puVar3[0xb];
    uVar17 = puVar3[10];
    puVar7[9] = puVar3[9];
    puVar7[8] = uVar19;
    puVar7[0xb] = uVar18;
    puVar7[10] = uVar17;
    uVar17 = *(undefined8 *)((long)puVar3 + 0xa9);
    *(undefined8 *)((long)puVar7 + 0xb1) = *(undefined8 *)((long)puVar3 + 0xb1);
    *(undefined8 *)((long)puVar7 + 0xa9) = uVar17;
    uVar17 = puVar3[0x12];
    uVar19 = puVar3[0x15];
    uVar18 = puVar3[0x14];
    puVar7[0x13] = puVar3[0x13];
    puVar7[0x12] = uVar17;
    puVar7[0x15] = uVar19;
    puVar7[0x14] = uVar18;
    uVar17 = puVar3[0x10];
    puVar7[0x11] = puVar3[0x11];
    puVar7[0x10] = uVar17;
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x98)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x98));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x9c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x9c));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xa0)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xa0));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xa4)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xa4));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xa8)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xa8));
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xac));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xac));
    uVar17 = *puVar3;
    uVar19 = puVar3[3];
    uVar18 = puVar3[2];
    puVar7[1] = puVar3[1];
    *puVar7 = uVar17;
    puVar7[3] = uVar19;
    puVar7[2] = uVar18;
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xb0)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xb0));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xb4)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xb4));
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xb8));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xb8));
    uVar17 = *puVar3;
    uVar19 = puVar3[3];
    uVar18 = puVar3[2];
    puVar7[1] = puVar3[1];
    *puVar7 = uVar17;
    puVar7[3] = uVar19;
    puVar7[2] = uVar18;
    uVar19 = puVar3[8];
    uVar18 = puVar3[0xb];
    uVar17 = puVar3[10];
    puVar7[9] = puVar3[9];
    puVar7[8] = uVar19;
    puVar7[0xb] = uVar18;
    puVar7[10] = uVar17;
    uVar17 = puVar3[4];
    uVar19 = puVar3[7];
    uVar18 = puVar3[6];
    puVar7[5] = puVar3[5];
    puVar7[4] = uVar17;
    puVar7[7] = uVar19;
    puVar7[6] = uVar18;
    *(undefined1 *)(puVar7 + 0x14) = *(undefined1 *)(puVar3 + 0x14);
    uVar19 = puVar3[0x10];
    uVar18 = puVar3[0x13];
    uVar17 = puVar3[0x12];
    puVar7[0x11] = puVar3[0x11];
    puVar7[0x10] = uVar19;
    puVar7[0x13] = uVar18;
    puVar7[0x12] = uVar17;
    uVar17 = puVar3[0xc];
    uVar19 = puVar3[0xf];
    uVar18 = puVar3[0xe];
    puVar7[0xd] = puVar3[0xd];
    puVar7[0xc] = uVar17;
    puVar7[0xf] = uVar19;
    puVar7[0xe] = uVar18;
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xbc));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xbc));
    uVar17 = *puVar3;
    uVar19 = puVar3[3];
    uVar18 = puVar3[2];
    puVar7[1] = puVar3[1];
    *puVar7 = uVar17;
    puVar7[3] = uVar19;
    puVar7[2] = uVar18;
    uVar19 = puVar3[8];
    uVar18 = puVar3[0xb];
    uVar17 = puVar3[10];
    puVar7[9] = puVar3[9];
    puVar7[8] = uVar19;
    puVar7[0xb] = uVar18;
    puVar7[10] = uVar17;
    uVar17 = puVar3[4];
    uVar19 = puVar3[7];
    uVar18 = puVar3[6];
    puVar7[5] = puVar3[5];
    puVar7[4] = uVar17;
    puVar7[7] = uVar19;
    puVar7[6] = uVar18;
    *(undefined1 *)(puVar7 + 0x14) = *(undefined1 *)(puVar3 + 0x14);
    uVar19 = puVar3[0x10];
    uVar18 = puVar3[0x13];
    uVar17 = puVar3[0x12];
    puVar7[0x11] = puVar3[0x11];
    puVar7[0x10] = uVar19;
    puVar7[0x13] = uVar18;
    puVar7[0x12] = uVar17;
    uVar17 = puVar3[0xc];
    uVar19 = puVar3[0xf];
    uVar18 = puVar3[0xe];
    puVar7[0xd] = puVar3[0xd];
    puVar7[0xc] = uVar17;
    puVar7[0xf] = uVar19;
    puVar7[0xe] = uVar18;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xc0)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xc0));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xc4)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xc4));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 200)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 200));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xcc)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xcc));
    (**(code **)(lVar13 + 0x38))(puVar1,0,1,lVar6);
  }
  else {
    lVar6 = 0x112dbe418;
    func_0x0001000285a8(0x112dbe418,&UNK_10d990420);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  iVar4 = *(int *)(param_3 + 0x38);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *(undefined1 *)((long)param_1 + (long)iVar4) = *(undefined1 *)((long)param_2 + (long)iVar4);
  iVar4 = *(int *)(param_3 + 0x40);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  *(undefined8 *)((long)param_1 + (long)iVar4) = *(undefined8 *)((long)param_2 + (long)iVar4);
  iVar4 = *(int *)(param_3 + 0x48);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  *(undefined8 *)((long)param_1 + (long)iVar4) = *(undefined8 *)((long)param_2 + (long)iVar4);
  iVar4 = *(int *)(param_3 + 0x50);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  *(undefined8 *)((long)param_1 + (long)iVar4) = *(undefined8 *)((long)param_2 + (long)iVar4);
  return param_1;
}



/* Entry: 103dfd208; end: 103dfd21f;  */

void FUN_103dfd208(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103dfd220; end: 103dfd2cb;  */

void FUN_103dfd220(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_b8 = &UNK_10dc98288;
  puStack_80 = &UNK_10dc98288;
  lVar2 = 0x13f;
  puStack_b0 = puVar1;
  puStack_a8 = puVar1;
  puStack_a0 = puVar1;
  puStack_98 = puVar1;
  puStack_90 = puVar1;
  puStack_88 = puVar1;
  func_0x000101684ed8();
  if (param_2 < 0x40) {
    lStack_78 = *(long *)(lVar2 + -8) + 0x40;
    puStack_68 = &UNK_10dc982a0;
    puStack_60 = &UNK_10dc982a0;
    puStack_38 = &UNK_10dc98288;
    puStack_70 = puVar1;
    puStack_58 = puVar1;
    puStack_50 = puVar1;
    puStack_48 = puVar1;
    puStack_40 = puVar1;
    _swift_initStructMetadata(param_1,0x100,0x11,&puStack_b8,param_1 + 0x10);
  }
  return;
}



/* Entry: 103dfd2cc; end: 103dfd323;  */

int FUN_103dfd2cc(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 103dfd324; end: 103dfd337;  */

bool FUN_103dfd324(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103dfd338; end: 103dfd40f;  */

void FUN_103dfd338(void)

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



/* Entry: 103dfd410; end: 103dfd42f;  */

void FUN_103dfd410(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}


