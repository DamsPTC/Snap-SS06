/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1010a9d3c; end: 1010a9d7f;  */

undefined8 * FUN_1010a9d3c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1010a64dc(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 1010a9d80; end: 1010a9ee3;  */

int FUN_1010a9d80(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3ff9 < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0x3ffa;
  }
  uVar1 = ((uint)(*(byte *)(param_1 + 4) >> 5) |
          ((uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x39) & 0x78 |
           (uint)*(undefined8 *)(param_1 + 2) & 7 | (*(byte *)(param_1 + 4) >> 1 & 0xf) << 7) << 3)
          ^ 0x3fff;
  if (0x3ff8 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1010a9ee4; end: 1010a9f87;  */

void FUN_1010a9ee4(double param_1,byte param_2)

{
  byte bVar1;
  long unaff_x20;
  double dVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x4a,auStack_58,1,0);
  bVar1 = *(byte *)(unaff_x20 + 0x4a);
  *(byte *)(unaff_x20 + 0x4a) = param_2;
  if (param_2 - 1 < 3 && (uint)bVar1 != (uint)param_2) {
    func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + 0x78));
    *(double *)(unaff_x20 + 0x68) = param_1;
    *(undefined1 *)(unaff_x20 + 0x70) = 0;
    if (*(char *)(unaff_x20 + 0x4a) == '\x01') {
      dVar2 = *(double *)(unaff_x20 + 0x50);
      func_0x000107c61428(unaff_x20 + 0x40,auStack_70,1,0);
      *(double *)(unaff_x20 + 0x40) = param_1 - dVar2;
      *(undefined1 *)(unaff_x20 + 0x48) = 0;
    }
  }
  return;
}



/* Entry: 1010a9f88; end: 1010aa037;  */

long FUN_1010a9f88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined1 *)(unaff_x20 + 0x39) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined2 *)(unaff_x20 + 0x48) = 1;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined1 *)(unaff_x20 + 0x60) = 1;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined1 *)(unaff_x20 + 0x70) = 1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(byte *)(unaff_x20 + 0x38) = (byte)param_7 & 1;
  *(byte *)(unaff_x20 + 0x4a) = (byte)((uint)param_7 >> 8) & 1;
  *(undefined8 *)(unaff_x20 + 0x78) = param_8;
  func_0x000107c3ceac(param_8);
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  return unaff_x20;
}



/* Entry: 1010aa038; end: 1010aa097;  */

void FUN_1010aa038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x39) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined2 *)(unaff_x20 + 0x48) = 1;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined1 *)(unaff_x20 + 0x60) = 1;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined1 *)(unaff_x20 + 0x70) = 1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(byte *)(unaff_x20 + 0x38) = (byte)param_7 & 1;
  *(byte *)(unaff_x20 + 0x4a) = (byte)((uint)param_7 >> 8) & 1;
  *(undefined8 *)(unaff_x20 + 0x78) = param_8;
  func_0x000107c3ceac(param_8);
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  return;
}



/* Entry: 1010aa098; end: 1010aa0db;  */

void FUN_1010aa098(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(uVar1);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010aa0dc; end: 1010aa177;  */

undefined1  [16] FUN_1010aa0dc(void)

{
  double dVar1;
  undefined8 uVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x4a,auStack_38,0,0);
  if (((cRam0000000112d5a000 == *(char *)(unaff_x20 + 0x4a) ||
        cRam0000000112d5a001 == *(char *)(unaff_x20 + 0x4a)) &&
      (*(char *)(unaff_x20 + 0x70) != '\x01')) && (*(char *)(unaff_x20 + 0x60) != '\x01')) {
    dVar3 = *(double *)(unaff_x20 + 0x68);
    dVar4 = *(double *)(unaff_x20 + 0x58);
    dVar1 = dVar3 - *(double *)(unaff_x20 + 0x50);
    func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + 0x78));
    uVar2 = 0;
    dVar1 = dVar1 - (dVar3 - dVar4);
  }
  else {
    dVar1 = 0.0;
    uVar2 = 1;
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = dVar1;
  return auVar5;
}



/* Entry: 1010aa178; end: 1010aa1a3;  */

undefined1  [16] FUN_1010aa178(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x000107c61434(*(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 1010aa1a4; end: 1010aa1e7;  */

undefined8 FUN_1010aa1a4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61434(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61434(uVar2);
  return uVar1;
}



/* Entry: 1010aa1e8; end: 1010aa1ef;  */

undefined1 FUN_1010aa1e8(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x38);
}



/* Entry: 1010aa1f0; end: 1010aa25b;  */

bool FUN_1010aa1f0(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 0x4a,auStack_28,0,0);
  return *(char *)(unaff_x20 + 0x4a) == '\x01';
}



/* Entry: 1010aa25c; end: 1010aa25f;  */

undefined1  [16] FUN_1010aa25c(void)

{
  double dVar1;
  undefined8 uVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x4a,auStack_38,0,0);
  if (((cRam0000000112d5a000 == *(char *)(unaff_x20 + 0x4a) ||
        cRam0000000112d5a001 == *(char *)(unaff_x20 + 0x4a)) &&
      (*(char *)(unaff_x20 + 0x70) != '\x01')) && (*(char *)(unaff_x20 + 0x60) != '\x01')) {
    dVar3 = *(double *)(unaff_x20 + 0x68);
    dVar4 = *(double *)(unaff_x20 + 0x58);
    dVar1 = dVar3 - *(double *)(unaff_x20 + 0x50);
    func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + 0x78));
    uVar2 = 0;
    dVar1 = dVar1 - (dVar3 - dVar4);
  }
  else {
    dVar1 = 0.0;
    uVar2 = 1;
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = dVar1;
  return auVar5;
}



/* Entry: 1010aa260; end: 1010aa28f;  */

undefined1 FUN_1010aa260(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 0x39,auStack_28,0,0);
  return *(undefined1 *)(unaff_x20 + 0x39);
}



/* Entry: 1010aa290; end: 1010aa2cb;  */

void FUN_1010aa290(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x39,auStack_38,1,0);
  *(undefined1 *)(unaff_x20 + 0x39) = param_1;
  return;
}



/* Entry: 1010aa2cc; end: 1010aa32b;  */

undefined1  [16] FUN_1010aa2cc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000107c61428(unaff_x20 + 0x39,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x39;
  auVar1._0_8_ = FUN_1010aa4b0;
  return auVar1;
}



/* Entry: 1010aa32c; end: 1010aa367;  */

void FUN_1010aa32c(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x49,auStack_38,1,0);
  *(undefined1 *)(unaff_x20 + 0x49) = param_1;
  return;
}



/* Entry: 1010aa368; end: 1010aa3c7;  */

undefined1  [16] FUN_1010aa368(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000107c61428(unaff_x20 + 0x49,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x49;
  auVar1._0_8_ = 0x1010aa4b4;
  return auVar1;
}



/* Entry: 1010aa3c8; end: 1010aa3cb;  */

void FUN_1010aa3c8(double param_1,byte param_2)

{
  byte bVar1;
  long unaff_x20;
  double dVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x4a,auStack_58,1,0);
  bVar1 = *(byte *)(unaff_x20 + 0x4a);
  *(byte *)(unaff_x20 + 0x4a) = param_2;
  if (param_2 - 1 < 3 && (uint)bVar1 != (uint)param_2) {
    func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + 0x78));
    *(double *)(unaff_x20 + 0x68) = param_1;
    *(undefined1 *)(unaff_x20 + 0x70) = 0;
    if (*(char *)(unaff_x20 + 0x4a) == '\x01') {
      dVar2 = *(double *)(unaff_x20 + 0x50);
      func_0x000107c61428(unaff_x20 + 0x40,auStack_70,1,0);
      *(double *)(unaff_x20 + 0x40) = param_1 - dVar2;
      *(undefined1 *)(unaff_x20 + 0x48) = 0;
    }
  }
  return;
}



/* Entry: 1010aa3cc; end: 1010aa443;  */

undefined1  [16] FUN_1010aa3cc(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0xc228);
  }
  *param_1 = lVar1;
  *(long *)(lVar1 + 0x18) = unaff_x20;
  func_0x000107c61428(unaff_x20 + 0x4a,lVar1,0,0);
  *(undefined1 *)(lVar1 + 0x20) = *(undefined1 *)(unaff_x20 + 0x4a);
  auVar2._8_8_ = (undefined1 *)(lVar1 + 0x20);
  auVar2._0_8_ = FUN_1010aa444;
  return auVar2;
}



/* Entry: 1010aa444; end: 1010aa46f;  */

void FUN_1010aa444(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_1010a9ee4(*(undefined1 *)(lVar1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 1010aa470; end: 1010aa4af;  */

void FUN_1010aa470(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + 0x78));
  *(undefined8 *)(unaff_x20 + 0x58) = param_1;
  *(undefined1 *)(unaff_x20 + 0x60) = 0;
  return;
}



/* Entry: 1010aa4b0; end: 1010aa4b7;  */

void FUN_1010aa4b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1010aa4b8; end: 1010aa58f;  */

long FUN_1010aa4b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001010aa490(0);
  func_0x000107c613fc();
  FUN_1010aa038(param_1,param_2,param_3,param_4,param_5,param_6 & 0x101,param_7);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined ***)(unaff_x20 + 0x18) = &PTR_DAT_11037ff78;
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined ***)(unaff_x20 + 0x28) = &PTR_DAT_11037ff78;
  *(undefined1 *)(unaff_x20 + 0x30) = 0;
  func_0x0001010a64f0(param_8,unaff_x20 + 0x38);
  func_0x000107c6157c(param_1);
  return unaff_x20;
}



/* Entry: 1010aa590; end: 1010aa5c7;  */

void FUN_1010aa590(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_1010a64dc(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30));
  func_0x0001000834e4(unaff_x20 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010aa5c8; end: 1010aa6eb;  */

void FUN_1010aa5c8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  puVar4 = (undefined8 *)(param_1 + 0x20);
  func_0x000107c61428(puVar4,auStack_58,0x21,0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  bVar3 = *(byte *)(param_1 + 0x30);
  if (bVar3 < 0x20) {
    uVar5 = uVar1;
    func_0x000107c614f0(uVar1);
    (**(code **)(lVar2 + 0x58))(1,uVar5,lVar2);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    *(long *)(param_1 + 0x28) = lVar2;
    *(undefined1 *)(param_1 + 0x30) = 0x20;
    func_0x000107c614a8(auStack_58);
  }
  else {
    FUN_1010a9020();
    func_0x000107c613f8(&UNK_11037fea0,puVar4,0,0);
    *puVar4 = 0x7070757320746f4e;
    puVar4[1] = 0xed0000646574726f;
    puVar4[2] = uVar1;
    puVar4[3] = lVar2;
    *(byte *)(puVar4 + 4) = bVar3;
    puVar4[5] = 0x6e4f747550646964;
    puVar4[6] = 0xee002928646c6f48;
    func_0x000107c61654();
    func_0x000107c614a8(auStack_58);
    FUN_1010a8dd4(uVar1,lVar2,bVar3);
  }
  return;
}



/* Entry: 1010aa6ec; end: 1010aa723;  */

void FUN_1010aa6ec(void)

{
  FUN_1010aa5c8();
  return;
}



/* Entry: 1010aa724; end: 1010aa833;  */

void FUN_1010aa724(ulong *param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x20,auStack_68,0,0);
  bVar2 = *(byte *)(unaff_x20 + 0x30);
  if ((bVar2 & 0xc0) == 0x40) {
    uVar4 = *(ulong *)(unaff_x20 + 0x20);
    lVar1 = *(long *)(unaff_x20 + 0x28);
    uVar6 = uVar4;
    func_0x000107c614f0();
    pcVar7 = *(code **)(lVar1 + 0x30);
    FUN_1010a8dd4(uVar4,lVar1,bVar2);
    uVar8 = uVar6;
    lVar3 = lVar1;
    (*pcVar7)();
    if (((uint)lVar3 & 0xff) != 1) {
      (**(code **)(lVar1 + 0x38))(uVar6,lVar1);
      FUN_1010a64dc(uVar4,lVar1,bVar2);
      uVar5 = 0;
      uVar6 = uVar6 & 1;
      uVar4 = 0x80;
      goto LAB_1010aa808;
    }
    FUN_1010a64dc(uVar4,lVar1,bVar2);
  }
  uVar6 = 0;
  uVar4 = 0;
  uVar8 = 0;
  uVar5 = 0x3fffffefe;
LAB_1010aa808:
  *param_1 = uVar6;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = uVar5;
  param_1[4] = 0;
  param_1[5] = uVar4;
  param_1[6] = uVar8;
  return;
}



/* Entry: 1010aa834; end: 1010aa8cb;  */

void FUN_1010aa834(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x20,auStack_58,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined1 *)(param_1 + 0x30);
  FUN_1010a8dd4(uVar1,uVar2,uVar3);
  FUN_1010a9060(param_2,uVar1,uVar2,uVar3);
  FUN_1010a64dc(uVar1,uVar2,uVar3);
  return;
}



/* Entry: 1010aa8cc; end: 1010aa8e3;  */

void FUN_1010aa8cc(void)

{
  long unaff_x20;
  
  FUN_1010aa834(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1010aa8e4; end: 1010aa97b;  */

void FUN_1010aa8e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x20,auStack_58,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined1 *)(param_1 + 0x30);
  FUN_1010a8dd4(uVar1,uVar2,uVar3);
  FUN_1010a9564(param_2,uVar1,uVar2,uVar3);
  FUN_1010a64dc(uVar1,uVar2,uVar3);
  return;
}



/* Entry: 1010aa97c; end: 1010aa997;  */

void FUN_1010aa97c(void)

{
  long unaff_x20;
  
  FUN_1010aa8e4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1010aa998; end: 1010aaa03;  */

void FUN_1010aa998(long param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x20,auStack_48,0x21,0);
  (*param_3)(param_2);
  func_0x000107c614a8(auStack_48);
  return;
}



/* Entry: 1010aaa04; end: 1010aaa23;  */

void FUN_1010aaa04(void)

{
  long unaff_x20;
  
  FUN_1010aa998(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),FUN_1010a9268);
  return;
}



/* Entry: 1010aaa24; end: 1010aaadb;  */

void FUN_1010aaa24(void)

{
  undefined8 uVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x20,auStack_48,0x21,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  bVar3 = *(byte *)(unaff_x20 + 0x30) >> 5;
  if (bVar3 < 4) {
    if (bVar3 < 2) {
LAB_1010aaaac:
      FUN_1010a64dc(uVar1,lVar2);
      goto LAB_1010aaab4;
    }
    uVar4 = uVar1;
    func_0x000107c614f0();
    (**(code **)(lVar2 + 0x70))(2,uVar4,lVar2);
    *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
    *(long *)(unaff_x20 + 0x28) = lVar2;
    uVar5 = 0xa0;
  }
  else {
    if (bVar3 == 4) goto LAB_1010aaac0;
    if (bVar3 == 5) goto LAB_1010aaaac;
LAB_1010aaab4:
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    uVar5 = 0xc0;
  }
  *(undefined1 *)(unaff_x20 + 0x30) = uVar5;
LAB_1010aaac0:
  func_0x000107c614a8(auStack_48);
  return;
}



/* Entry: 1010aaadc; end: 1010aab63;  */

void FUN_1010aaadc(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *(long *)(*unaff_x20 + 0x18);
  func_0x000107c614f0(*(undefined8 *)(*unaff_x20 + 0x10));
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1010aab64; end: 1010aabf3;  */

void FUN_1010aab64(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long *unaff_x20;
  long lVar4;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  lVar4 = *unaff_x20;
  func_0x000107c61428(lVar4 + 0x20,auStack_78,0,0);
  uVar1 = *(undefined8 *)(lVar4 + 0x20);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  uVar3 = *(undefined1 *)(lVar4 + 0x30);
  FUN_1010a8dd4(uVar1,uVar2,uVar3);
  FUN_1010a8be0(&uStack_60,uVar1,uVar2,uVar3);
  FUN_1010a64dc(uVar1,uVar2,uVar3);
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  param_1[3] = CONCAT71(uStack_47,uStack_48);
  param_1[2] = uStack_50;
  *(undefined8 *)((long)param_1 + 0x21) = uStack_3f;
  *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_40,uStack_47);
  return;
}



/* Entry: 1010aabf4; end: 1010aac3f;  */

void FUN_1010aabf4(undefined8 *param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1010aa724(&uStack_58);
  param_1[1] = uStack_50;
  *param_1 = uStack_58;
  param_1[3] = uStack_40;
  param_1[2] = uStack_48;
  param_1[5] = uStack_30;
  param_1[4] = uStack_38;
  param_1[6] = uStack_28;
  return;
}



/* Entry: 1010aac40; end: 1010aac93;  */

void FUN_1010aac40(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar3 = *unaff_x20;
  uVar1 = *(undefined8 *)(lVar3 + 0x50);
  lVar2 = *(long *)(lVar3 + 0x58);
  func_0x0001000a8868(lVar3 + 0x38,uVar1);
  (**(code **)(lVar2 + 8))(0x1010aae20,lVar3,uVar1,lVar2);
  return;
}



/* Entry: 1010aac94; end: 1010aacb7;  */

void FUN_1010aac94(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_40 = *unaff_x20;
  uVar1 = *(undefined8 *)(lStack_40 + 0x50);
  lVar2 = *(long *)(lStack_40 + 0x58);
  uStack_38 = param_1;
  func_0x0001000a8868(lStack_40 + 0x38,uVar1);
  (**(code **)(lVar2 + 8))(0x1010aae0c,auStack_50,uVar1,lVar2);
  return;
}



/* Entry: 1010aacb8; end: 1010aad7b;  */

void FUN_1010aacb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_40 = *unaff_x20;
  uVar1 = *(undefined8 *)(lStack_40 + 0x50);
  lVar2 = *(long *)(lStack_40 + 0x58);
  uStack_38 = param_1;
  func_0x0001000a8868(lStack_40 + 0x38,uVar1);
  (**(code **)(lVar2 + 8))(param_4,auStack_50,uVar1,lVar2);
  return;
}



/* Entry: 1010aad7c; end: 1010aad9b;  */

void FUN_1010aad7c(void)

{
  FUN_1010aaa24();
  return;
}



/* Entry: 1010aad9c; end: 1010aadaf;  */

bool FUN_1010aad9c(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1010aadb0; end: 1010aae33;  */

void FUN_1010aadb0(void)

{
  func_0x000107c61168(&PTR_PTR_112d5a138);
  return;
}



/* Entry: 1010aae34; end: 1010ab00f;  */

void FUN_1010aae34(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_88 [24];
  ulong uStack_70;
  long lStack_68;
  
  uVar8 = *unaff_x20;
  lVar6 = *(long *)(uVar8 + 0x10);
  lVar9 = uVar8 + 0x20;
  uVar7 = 0xffffffffffffffff;
  do {
    if (uVar7 - lVar6 == -1) {
      FUN_1010ab010(param_1,auStack_88);
      uVar7 = uVar8;
      func_0x000107c61558();
      uVar3 = uVar8;
      if ((uVar7 & 1) == 0) {
        uVar3 = 0;
        FUN_1010ab68c(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8,PTR__swift_bridgeObjectRelease_11034f258
                     );
      }
      uVar7 = *(ulong *)(uVar3 + 0x10);
      uVar8 = uVar3;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar7) {
        uVar8 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_1010ab68c(uVar8,uVar7 + 1,1,uVar3,PTR__swift_bridgeObjectRelease_11034f258);
      }
      *(ulong *)(uVar8 + 0x10) = uVar7 + 1;
      FUN_1010ab408(auStack_88,uVar8 + uVar7 * 0x28 + 0x20);
      *unaff_x20 = uVar8;
      return;
    }
    uVar7 = uVar7 + 1;
    if (*(ulong *)(uVar8 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010aafc0);
      (*pcVar1)();
    }
    FUN_1010ab010(lVar9,auStack_88);
    lVar4 = lStack_68;
    uVar2 = uStack_70;
    func_0x0001000a8868(auStack_88,uStack_70);
    (**(code **)(lVar4 + 8))();
    uVar3 = *(ulong *)(param_1 + 0x18);
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x0001000a8868(param_1,uVar3);
    (**(code **)(lVar5 + 8))();
    if (uVar2 == uVar3 && lVar4 == lVar5) {
      func_0x000107c6142c(lVar4);
      func_0x000107c6142c(lVar5);
      func_0x0001000834e4(auStack_88);
      return;
    }
    lVar9 = lVar9 + 0x28;
    func_0x000107c605b8(uVar2,lVar4,uVar3,lVar5,0);
    func_0x000107c6142c(lVar4);
    func_0x000107c6142c(lVar5);
    func_0x0001000834e4(auStack_88);
  } while ((uVar2 & 1) == 0);
  return;
}



/* Entry: 1010ab010; end: 1010ab053;  */

long FUN_1010ab010(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1010ab054; end: 1010ab10f;  */

void FUN_1010ab054(undefined8 *param_1,code *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long unaff_x21;
  long lVar2;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [40];
  
  lVar2 = *(long *)(param_4 + 0x10);
  if (lVar2 != 0) {
    param_4 = param_4 + 0x20;
    do {
      FUN_1010ab010(param_4,auStack_68);
      FUN_1010ab408(auStack_68,auStack_90);
      uVar1 = 0;
      (*param_2)();
      if (unaff_x21 != 0) {
        func_0x0001000834e4(auStack_90);
        return;
      }
      if ((uVar1 & 1) != 0) {
        func_0x0001010ab40c(auStack_90,param_1);
        return;
      }
      func_0x0001000834e4(auStack_90);
      param_4 = param_4 + 0x28;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1010ab110; end: 1010ab1fb;  */

void FUN_1010ab110(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  long lVar1;
  long lVar2;
  undefined1 auStack_68 [40];
  
  lVar1 = *unaff_x20;
  lVar2 = *(long *)(lVar1 + 0x10);
  if (lVar2 != 0) {
    FUN_1010ab010(lVar1 + 0x20,auStack_68);
    func_0x000107c61434(lVar1);
    FUN_1010ab1fc(param_1,param_2,lVar1,lVar1 + 0x20,1,lVar2 << 1 | 1);
    lVar2 = 0x112d5a1a8;
    func_0x0001000285a8(0x112d5a1a8,&UNK_10d921070);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    FUN_1010ab010(auStack_68,lVar2 + 0x20);
    func_0x0001010ab554(param_1);
    func_0x0001000834e4(auStack_68);
    func_0x000107c6142c(lVar1);
    *unaff_x20 = lVar2;
  }
  return;
}



/* Entry: 1010ab1fc; end: 1010ab36b;  */

undefined *
FUN_1010ab1fc(code *param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5,
             ulong param_6)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  long unaff_x21;
  long lVar5;
  long lVar6;
  undefined1 auStack_88 [40];
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_6 = param_6 >> 1;
  lVar6 = param_6 - param_5;
  if (lVar6 != 0) {
    uVar3 = param_5;
    if ((long)param_5 <= (long)param_6) {
      uVar3 = param_6;
    }
    lVar5 = uVar3 - param_5;
    param_4 = param_4 + param_5 * 0x28;
    do {
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010ab36c);
        (*pcVar2)();
      }
      FUN_1010ab010(param_4,auStack_88);
      uVar3 = 0;
      (*param_1)();
      if (unaff_x21 != 0) {
        func_0x0001000834e4(auStack_88);
        func_0x000107c61574(puVar1);
        func_0x000107c615e8(param_3);
        return puVar1;
      }
      if ((uVar3 & 1) == 0) {
        func_0x0001000834e4(auStack_88);
      }
      else {
        puVar4 = puVar1;
        func_0x000107c61558();
        if (((ulong)puVar4 & 1) == 0) {
          FUN_1010ab668(0,*(long *)(puVar1 + 0x10) + 1,1);
        }
        uVar3 = *(ulong *)(puVar1 + 0x10);
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
          FUN_1010ab668(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
        }
        *(ulong *)(puVar1 + 0x10) = uVar3 + 1;
        FUN_1010ab408(auStack_88,puVar1 + uVar3 * 0x28 + 0x20);
      }
      lVar5 = lVar5 + -1;
      param_4 = param_4 + 0x28;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  func_0x000107c615e8(param_3);
  return puVar1;
}



/* Entry: 1010ab36c; end: 1010ab36f;  */

void FUN_1010ab36c(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_88 [24];
  ulong uStack_70;
  long lStack_68;
  
  uVar8 = *unaff_x20;
  lVar6 = *(long *)(uVar8 + 0x10);
  lVar9 = uVar8 + 0x20;
  uVar7 = 0xffffffffffffffff;
  do {
    if (uVar7 - lVar6 == -1) {
      FUN_1010ab010(param_1,auStack_88);
      uVar7 = uVar8;
      func_0x000107c61558();
      uVar3 = uVar8;
      if ((uVar7 & 1) == 0) {
        uVar3 = 0;
        FUN_1010ab68c(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8,PTR__swift_bridgeObjectRelease_11034f258
                     );
      }
      uVar7 = *(ulong *)(uVar3 + 0x10);
      uVar8 = uVar3;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar7) {
        uVar8 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_1010ab68c(uVar8,uVar7 + 1,1,uVar3,PTR__swift_bridgeObjectRelease_11034f258);
      }
      *(ulong *)(uVar8 + 0x10) = uVar7 + 1;
      FUN_1010ab408(auStack_88,uVar8 + uVar7 * 0x28 + 0x20);
      *unaff_x20 = uVar8;
      return;
    }
    uVar7 = uVar7 + 1;
    if (*(ulong *)(uVar8 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010aafc0);
      (*pcVar1)();
    }
    FUN_1010ab010(lVar9,auStack_88);
    lVar4 = lStack_68;
    uVar2 = uStack_70;
    func_0x0001000a8868(auStack_88,uStack_70);
    (**(code **)(lVar4 + 8))();
    uVar3 = *(ulong *)(param_1 + 0x18);
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x0001000a8868(param_1,uVar3);
    (**(code **)(lVar5 + 8))();
    if (uVar2 == uVar3 && lVar4 == lVar5) {
      func_0x000107c6142c(lVar4);
      func_0x000107c6142c(lVar5);
      func_0x0001000834e4(auStack_88);
      return;
    }
    lVar9 = lVar9 + 0x28;
    func_0x000107c605b8(uVar2,lVar4,uVar3,lVar5,0);
    func_0x000107c6142c(lVar4);
    func_0x000107c6142c(lVar5);
    func_0x0001000834e4(auStack_88);
  } while ((uVar2 & 1) == 0);
  return;
}



/* Entry: 1010ab370; end: 1010ab3b3;  */

/* WARNING: Removing unreachable block (ram,0x0001010ab97c) */
/* WARNING: Removing unreachable block (ram,0x0001010ab980) */
/* WARNING: Removing unreachable block (ram,0x0001010ab974) */

void FUN_1010ab370(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  
  if (*(long *)(*unaff_x20 + 0x10) == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return;
  }
  FUN_1010ab010(*unaff_x20 + 0x20,param_1);
  lVar3 = *unaff_x20;
  lVar4 = *(long *)(lVar3 + 0x10);
  if (0 < lVar4) {
    if (SCARRY8(lVar4,-1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010ab988);
      (*pcVar1)();
    }
    lVar2 = lVar3;
    func_0x000107c61558();
    *unaff_x20 = lVar3;
    if (((int)lVar2 == 0) || ((long)(*(ulong *)(lVar3 + 0x18) >> 1) < lVar4 + -1)) {
      FUN_1010ab68c();
      *unaff_x20 = lVar2;
      lVar3 = lVar2;
    }
    func_0x0001010ab7dc(0,1,0);
    *unaff_x20 = lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010ab97c);
  (*pcVar1)();
}



/* Entry: 1010ab3b4; end: 1010ab3db;  */

undefined8 * FUN_1010ab3b4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  if (*(long *)(lVar2 + 0x10) != 0) {
    lVar1 = *(long *)(lVar2 + 0x38);
    param_1[3] = lVar1;
    param_1[4] = *(undefined8 *)(lVar2 + 0x40);
    (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,lVar2 + 0x20);
    return param_1;
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return param_2;
}



/* Entry: 1010ab3dc; end: 1010ab407;  */

void FUN_1010ab3dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_1010ab054(param_1,param_2,*unaff_x20);
  return;
}



/* Entry: 1010ab408; end: 1010ab423;  */

void FUN_1010ab408(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  long lVar1;
  long lVar2;
  undefined1 auStack_68 [40];
  
  lVar1 = *unaff_x20;
  lVar2 = *(long *)(lVar1 + 0x10);
  if (lVar2 != 0) {
    FUN_1010ab010(lVar1 + 0x20,auStack_68);
    func_0x000107c61434(lVar1);
    FUN_1010ab1fc(param_1,param_2,lVar1,lVar1 + 0x20,1,lVar2 << 1 | 1);
    lVar2 = 0x112d5a1a8;
    func_0x0001000285a8(0x112d5a1a8,&UNK_10d921070);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    FUN_1010ab010(auStack_68,lVar2 + 0x20);
    func_0x0001010ab554(param_1);
    func_0x0001000834e4(auStack_68);
    func_0x000107c6142c(lVar1);
    *unaff_x20 = lVar2;
  }
  return;
}



/* Entry: 1010ab424; end: 1010ab667;  */

undefined * FUN_1010ab424(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010ab554);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112d5a1b8;
    func_0x0001000285a8(0x112d5a1b8,&UNK_10dae4f00);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1010ab668; end: 1010ab68b;  */

void FUN_1010ab668(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1010ab68c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1010ab68c; end: 1010ab8c3;  */

undefined *
FUN_1010ab68c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010ab7dc);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112d5a1a8;
    func_0x0001000285a8(0x112d5a1a8,&UNK_10d921070);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d5a1b0;
    func_0x0001000285a8(0x112d5a1b0,&UNK_10d9210a8);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 1010ab8c4; end: 1010ab987;  */

void FUN_1010ab8c4(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010ab978);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010ab97c);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010ab980);
    (*pcVar2)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (!SCARRY8(lVar5,lVar1)) {
      lVar3 = lVar4;
      func_0x000107c61558();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar5 + lVar1)) {
        FUN_1010ab68c();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      func_0x0001010ab7dc(param_1,param_2,0);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010ab988);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1010ab984);
  (*pcVar2)();
}



/* Entry: 1010ab988; end: 1010ab997;  */

undefined1  [16] FUN_1010ab988(void)

{
  return ZEXT816(0x1103800b8);
}



/* Entry: 1010ab998; end: 1010ab9df;  */

uint FUN_1010ab998(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1010ab9e0(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1010ab9e0; end: 1010abaeb;  */

byte FUN_1010ab9e0(byte *param_1,ulong *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  ulong uVar8;
  
  if ((char)param_1[0x28] < '\0') {
    if (-1 < (char)(byte)param_2[5]) {
      return 0;
    }
    return (*param_1 ^ (byte)*param_2 ^ 1) & 1;
  }
  if ((char)(byte)param_2[5] < '\0') {
    return 0;
  }
  uVar6 = *(ulong *)(param_1 + 0x10);
  bVar1 = param_1[0x18];
  bVar2 = param_1[0x19];
  uVar5 = (ulong)*(uint *)(param_1 + 1) << 8 | (ulong)*(uint3 *)(param_1 + 5) << 0x28 |
          (ulong)*param_1;
  uVar8 = param_2[2];
  uVar4 = param_2[3];
  bVar3 = *(byte *)((long)param_2 + 0x19);
  if ((uVar5 == *param_2 && *(ulong *)(param_1 + 8) == param_2[1]) ||
     (func_0x000107c605b8(uVar5,*(ulong *)(param_1 + 8),*param_2,param_2[1],0), (uVar5 & 1) != 0)) {
    if (uVar6 == 0) {
      bVar7 = 0;
      if (uVar8 != 0) goto LAB_1010abad4;
    }
    else {
      if (uVar8 == 0) goto LAB_1010abaa0;
      func_0x000107c61434(uVar8);
      func_0x000101058cd4(uVar6,uVar8);
      func_0x000107c6142c(uVar8);
      bVar7 = 0;
      if ((uVar6 & 1) == 0) goto LAB_1010abad4;
    }
    bVar7 = 0;
    if (((bVar1 ^ (byte)uVar4) & 1) == 0) {
      bVar7 = bVar2 ^ bVar3 ^ 1;
    }
  }
  else {
LAB_1010abaa0:
    bVar7 = 0;
  }
LAB_1010abad4:
  return bVar7 & 1;
}



/* Entry: 1010abaec; end: 1010abb47;  */

long FUN_1010abaec(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1010abb48; end: 1010abb5f;  */

/* WARNING: Possible PIC construction at 0x0001010a858c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010a8590) */

undefined8 FUN_1010abb48(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  if (-1 < *(char *)(param_1 + 5)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
              (uVar1,uVar1,param_1[2],param_1[3],param_1[4]);
    return uVar1;
  }
  return *param_1;
}



/* Entry: 1010abb60; end: 1010abc5b;  */

undefined8 * FUN_1010abb60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar6 = param_2[4];
  uVar5 = *(undefined1 *)(param_2 + 5);
  func_0x0001010abb18(uVar1,uVar3,uVar2,uVar4,uVar6,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[4] = uVar6;
  *(undefined1 *)(param_1 + 5) = uVar5;
  return param_1;
}



/* Entry: 1010abc5c; end: 1010abcab;  */

undefined8 * FUN_1010abc5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar8 = param_2[4];
  uVar5 = *(undefined1 *)(param_2 + 5);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  param_1[4] = uVar8;
  uVar6 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar5;
  func_0x0001010a8574(uVar7,uVar1,uVar3,uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 1010abcac; end: 1010abdb3;  */

int FUN_1010abcac(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = (uint)(*(ulong *)(param_1 + 6) >> 2) & 0xffffff80 |
          (uint)*(ulong *)(param_1 + 6) >> 1 & 0x7f;
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Entry: 1010abdb4; end: 1010abe17;  */

void FUN_1010abdb4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  uVar1 = *param_3;
  uVar3 = param_3[3];
  uVar2 = param_3[2];
  *(undefined8 *)(unaff_x20 + 0x28) = param_3[1];
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  uVar1 = *(undefined8 *)((long)param_3 + 0x19);
  *(undefined8 *)(unaff_x20 + 0x41) = *(undefined8 *)((long)param_3 + 0x21);
  *(undefined8 *)(unaff_x20 + 0x39) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_4;
  *(undefined8 *)(unaff_x20 + 0x58) = param_5;
  return;
}



/* Entry: 1010abe18; end: 1010abe57;  */

void FUN_1010abe18(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001010a8574(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined1 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010abe58; end: 1010abe6b;  */

bool FUN_1010abe58(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1010abe6c; end: 1010abe8b;  */

void FUN_1010abe6c(void)

{
  func_0x000107c61168(&PTR_PTR_112d5a200);
  return;
}



/* Entry: 1010abe8c; end: 1010abea7;  */

uint FUN_1010abe8c(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *param_1;
  uVar3 = param_1[2];
  uVar4 = param_2[2];
  if (((uVar2 != *param_2) || (param_1[1] != param_2[1])) &&
     (func_0x000107c605b8(uVar2,param_1[1],*param_2,param_2[1],0), (uVar2 & 1) == 0)) {
    return 0;
  }
  uVar1 = (uint)(uVar3 == 0 && uVar4 == 0);
  if ((uVar3 != 0) && (uVar4 != 0)) {
    func_0x000107c61434(uVar4);
    func_0x000101058cd4(uVar3,uVar4);
    func_0x000107c6142c(uVar4);
    uVar1 = (uint)uVar3 & 1;
  }
  return uVar1;
}



/* Entry: 1010abea8; end: 1010abf8f;  */

uint FUN_1010abea8(ulong param_1,long param_2,long param_3,ulong param_4,long param_5,long param_6)

{
  uint uVar1;
  
  if (((param_1 != param_4) || (param_2 != param_5)) &&
     (func_0x000107c605b8(param_1,param_2,param_4,param_5,0), (param_1 & 1) == 0)) {
    return 0;
  }
  uVar1 = (uint)(param_3 == 0 && param_6 == 0);
  if ((param_3 != 0) && (param_6 != 0)) {
    func_0x000107c61434(param_6);
    func_0x000101058cd4(param_3,param_6);
    func_0x000107c6142c(param_6);
    uVar1 = (uint)param_3 & 1;
  }
  return uVar1;
}



/* Entry: 1010abf90; end: 1010abff3;  */

undefined8 * FUN_1010abf90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1010abff4; end: 1010ac037;  */

undefined8 * FUN_1010abff4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1010ac038; end: 1010ac0d7;  */

int FUN_1010ac038(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1010ac0d8; end: 1010ac15f;  */

undefined8 FUN_1010ac0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_4;
  func_0x0001000c6518(param_4,*(undefined8 *)(param_4 + 0x18));
  uVar2 = param_1;
  FUN_1010ac85c(param_1,param_2,param_3,lVar1);
  func_0x000107c61574(param_1);
  func_0x0001000834e4(param_4);
  return uVar2;
}



/* Entry: 1010ac160; end: 1010ac1bb;  */

void FUN_1010ac160(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1010ac1bc(uVar1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1010ac1bc; end: 1010ac53f;  */

/* WARNING: Possible PIC construction at 0x0001010ac51c: Changing call to branch */

void FUN_1010ac1bc(double param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long unaff_x20;
  ulong uVar12;
  double dVar13;
  undefined8 uVar14;
  code *pcVar15;
  long lVar16;
  ulong uStack_70;
  undefined8 uStack_68;
  
  uVar12 = *(ulong *)(param_2 + 0x20);
  cVar4 = *(char *)(param_2 + 0x48);
  if (cVar4 < '\0') {
    uVar14 = *(undefined8 *)(unaff_x20 + 0x30);
    lVar16 = *(long *)(unaff_x20 + 0x38);
    func_0x0001000a8868(unaff_x20 + 0x18,uVar14);
    uVar2 = 0x3fd0000000000000;
    if ((uVar12 & 1) == 0) {
      uVar2 = 0;
    }
    pcVar15 = *(code **)(lVar16 + 0x10);
    func_0x000107c6157c(param_2);
    (*pcVar15)(uVar2,((uint)uVar12 ^ 0xffffffff) & 1,FUN_1010ac990,param_2,uVar14,lVar16);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  uVar1 = *(ulong *)(param_2 + 0x38);
  dVar13 = *(double *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  lVar16 = *(long *)(param_2 + 0x30);
  func_0x0001000d224c(&uStack_70);
  uVar5 = uStack_70;
  if (uStack_70 == 0) {
    FUN_1010ac584(0xd000000000000020,0x800000010ef23c60,0xd000000000000013,0x800000010ef23c90);
    (**(code **)(param_2 + 0x50))(0);
  }
  else {
    uVar6 = uVar12;
    func_0x000107c5fadc(uVar12,uVar2);
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      func_0x000107c5f9dc(lVar16,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90)
      ;
    }
    uVar14 = *(undefined8 *)(param_2 + 0x10);
    uVar3 = *(ulong *)(param_2 + 0x18);
    uVar7 = uVar14;
    uVar10 = uVar3;
    func_0x000107c5fadc(uVar14);
    uVar8 = uStack_70;
    func_0x000107c4b864();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(lVar16);
    func_0x000107c61170(uVar7);
    if (uVar8 != 0) {
      uVar9 = uVar8;
      func_0x000107c5faec();
      func_0x000107c61170(uVar8);
      uVar6 = uVar9 & 0xffffffffffff;
      if ((uVar10 & 0x2000000000000000) != 0) {
        uVar6 = uVar10 >> 0x38 & 0xf;
      }
      if (uVar6 != 0) {
        uVar11 = (uint)uVar1;
        uVar2 = 0x3fd0000000000000;
        if ((uVar1 & 1) == 0) {
          uVar2 = 0;
        }
        if ((uVar11 >> 8 & 1) == 0) {
          dVar13 = 0.0;
          uVar14 = 1;
        }
        else if (cVar4 == '\x01') {
          dVar13 = param_1;
          func_0x000107c2bdd4();
          if (dVar13 <= 0.0) {
            dVar13 = 1.0;
          }
          uVar14 = 0;
        }
        else {
          uVar14 = 0;
        }
        lVar16 = *(long *)(unaff_x20 + 0x38);
        func_0x0001000a8868(unaff_x20 + 0x18,*(undefined8 *)(unaff_x20 + 0x30));
        pcVar15 = *(code **)(lVar16 + 8);
        func_0x000107c6157c(param_2);
        (*pcVar15)(uVar9,uVar10,uVar2,(uVar11 ^ 0xffffffff) & 1,dVar13,uVar14,FUN_1010ac9b4,param_2)
        ;
        func_0x000107c615e8(uStack_70);
        func_0x000107c6142c(uVar10);
        goto code_r0x000107c61574;
      }
      func_0x000107c6142c(uVar10);
    }
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x31);
    func_0x000107c6142c(uStack_68);
    uStack_70 = 0xd00000000000001e;
    uStack_68 = 0x800000010ef23cb0;
    func_0x000107c5fb78(uVar12,uVar2);
    func_0x000107c5fb78(0x7645746e6968202c,0xef203a6449746e65);
    func_0x000107c5fb78(uVar14,uVar3);
    uVar2 = uStack_68;
    FUN_1010ac584(uStack_70,uStack_68,0xd000000000000013,0x800000010ef23c90);
    func_0x000107c6142c(uVar2);
    (**(code **)(param_2 + 0x50))(0);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 1010ac540; end: 1010ac583;  */

void FUN_1010ac540(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x0001000834e4(unaff_x20 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x0001000834e4(unaff_x20 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010ac584; end: 1010ac85b;  */

void FUN_1010ac584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar4 = *unaff_x20;
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  func_0x000107c602fc(0x1b);
  func_0x000107c603d0(&stack0xffffffffffffff98,&uStack_60,uVar4,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x4f4954434e554620,0xeb00000000203a4e);
  func_0x000107c5fb78(param_3,param_4);
  func_0x000107c5fb78(0x4547415353454d20,0xea0000000000203a);
  func_0x000107c5fb78(param_1,param_2);
  uVar3 = uStack_58;
  uVar2 = uStack_60;
  uVar4 = unaff_x20[0xb];
  lVar1 = unaff_x20[0xc];
  func_0x0001000a8868(unaff_x20 + 8,uVar4);
  (**(code **)(lVar1 + 0x10))(uVar2,uVar3,uVar4,lVar1);
  func_0x000107c6142c(uVar3);
  return;
}



/* Entry: 1010ac85c; end: 1010ac923;  */

void FUN_1010ac85c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long extraout_x8;
  long lVar1;
  
  lVar1 = *(long *)(param_6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar1 + 0x40));
  func_0x000107c613fc(param_5,0x98,7);
  (**(code **)(lVar1 + 0x10))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4,param_6);
  func_0x0001010ac6b4(param_1,param_2,param_3,
                      &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_5,
                      param_6,param_7);
  return;
}



/* Entry: 1010ac924; end: 1010ac943;  */

void FUN_1010ac924(void)

{
  func_0x000107c61168(&PTR_PTR_112d5a2b0);
  return;
}



/* Entry: 1010ac944; end: 1010ac987;  */

long FUN_1010ac944(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1010ac988; end: 1010ac98f;  */

void FUN_1010ac988(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_1010ac1bc(uVar2);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1010ac990; end: 1010ac9b3;  */

void FUN_1010ac990(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x50))(1);
  return;
}



/* Entry: 1010ac9b4; end: 1010ac9b7;  */

void FUN_1010ac9b4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x50))(1);
  return;
}



/* Entry: 1010ac9b8; end: 1010aca13;  */

long FUN_1010ac9b8(undefined8 param_1,undefined1 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ddb10;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined1 *)(unaff_x20 + 0x18) = param_2;
  return unaff_x20;
}



/* Entry: 1010aca14; end: 1010aca3f;  */

void FUN_1010aca14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010aca40; end: 1010acaa7;  */

void FUN_1010aca40(void)

{
  long lVar1;
  long lStack_28;
  
  func_0x0001000d224c(&lStack_28);
  if (lStack_28 != 0) {
    lVar1 = lStack_28;
    func_0x000107c403cc();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_28);
    if (lVar1 != 0) {
      return;
    }
  }
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c453e4();
  return;
}



/* Entry: 1010acaa8; end: 1010acbaf;  */

long FUN_1010acaa8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lStack_38;
  
  if (*(char *)(unaff_x20 + 0x18) != '\x01') {
    FUN_1010aca40();
    lVar1 = param_1;
    func_0x000107c3f764();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    return lVar1;
  }
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
LAB_1010acb68:
    lVar1 = param_1;
    lVar3 = 0;
  }
  else {
    lVar1 = lStack_38;
    func_0x000107c403cc();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    param_1 = lStack_38;
    if (lVar1 == 0) goto LAB_1010acb68;
    lVar3 = lVar1;
    func_0x000107c3f2f8();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar3 != 0) {
      lVar1 = lVar3;
      func_0x000107c3f764();
      func_0x000107c61180();
      if (lVar1 != 0) goto LAB_1010acb90;
    }
  }
  FUN_1010aca40();
  lVar2 = lVar1;
  func_0x000107c3f764();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = lVar2;
LAB_1010acb90:
  func_0x000107c61170(lVar3);
  return lVar1;
}



/* Entry: 1010acbb0; end: 1010acbcf;  */

void FUN_1010acbb0(void)

{
  FUN_1010aca40();
  return;
}



/* Entry: 1010acbd0; end: 1010acbdb;  */

void FUN_1010acbd0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c0942f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + 0x20),PTR_s_lensHintLabelMargin_112602ac8);
  return;
}



/* Entry: 1010acbdc; end: 1010acbfb;  */

double FUN_1010acbdc(double param_1)

{
  long *unaff_x20;
  
  func_0x000107c4b1b0(*(undefined8 *)(*unaff_x20 + 0x20));
  return -param_1;
}



/* Entry: 1010acbfc; end: 1010acc07;  */

void FUN_1010acbfc(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c0942d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + 0x20),PTR_s_lensHintLabelHeight_112602ac0);
  return;
}



/* Entry: 1010acc08; end: 1010acc27;  */

void FUN_1010acc08(void)

{
  FUN_1010acaa8();
  return;
}



/* Entry: 1010acc28; end: 1010acc47;  */

void FUN_1010acc28(void)

{
  func_0x000107c61168(&PTR_PTR_112d5a370);
  return;
}



/* Entry: 1010acc48; end: 1010acd3b;  */

long FUN_1010acc48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar2 = 0x112d59d18;
  func_0x0001000285a8(0x112d59d18,&UNK_10d920b50);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + 0x50) = uVar2;
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined **)(unaff_x20 + 0x58) = puVar3;
  *(undefined **)(unaff_x20 + 0x60) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_1010acd3c(param_3,unaff_x20 + 0x20);
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_2);
  uVar2 = param_4;
  func_0x000107c51f40();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
  FUN_1010acd80();
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_4);
  func_0x0001000834e4(param_3);
  return unaff_x20;
}



/* Entry: 1010acd3c; end: 1010acd7f;  */

long FUN_1010acd3c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1010acd80; end: 1010ad03b;  */

void FUN_1010acd80(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar4 = &puStack_a0;
  ppuVar5 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = uVar9;
  func_0x000107c41dd4(uVar9);
  func_0x000107c61180();
  uVar6 = uVar2;
  func_0x000107c4da88();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  puVar7 = &UNK_110380288;
  puVar3 = puVar7;
  func_0x000107c613fc(&UNK_110380288,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1010ad194;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x1010afb80;
  puStack_88 = &UNK_1103802a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  uVar2 = uVar6;
  func_0x000107c5c320(uVar6);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c3e924(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c5e3e0(uVar9);
  func_0x000107c61180();
  uVar2 = uVar9;
  func_0x000107c4da88();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  puVar3 = puVar7;
  func_0x000107c613fc(&UNK_110380288,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  pcStack_80 = FUN_1010ad624;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  uStack_90 = 0x1010afb80;
  puStack_88 = &UNK_1103802c8;
  puStack_78 = puVar3;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  uVar6 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c3e924(uVar6);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c44e98(uVar6);
  func_0x000107c61180();
  uVar2 = uVar6;
  func_0x000107c4da88();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c613fc(&UNK_110380288,0x18,7);
  func_0x000107c61644(puVar7 + 0x10);
  pcStack_80 = FUN_1010ad688;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  uStack_90 = 0x1010afb7c;
  puStack_88 = &UNK_1103802f0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  uVar6 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c3e924(uVar6);
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 1010ad03c; end: 1010ad0af;  */

void FUN_1010ad03c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001000834e4(unaff_x20 + 0x20);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010ad0b0; end: 1010ad193;  */

/* WARNING: Possible PIC construction at 0x0001010ad13c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010ad150: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010ad140) */
/* WARNING: Removing unreachable block (ram,0x0001010ad154) */

void FUN_1010ad0b0(ulong param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c42454();
  func_0x000107c61180();
  uVar1 = 0;
  FUN_100c70ba8(0);
  uVar2 = param_1;
  func_0x000107c5fc54(param_1,uVar1);
  func_0x000107c61170(param_1);
  if (uVar2 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar3 = uVar2;
    }
    func_0x000107c60480();
  }
  if (uVar3 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      FUN_1010ad19c(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}


