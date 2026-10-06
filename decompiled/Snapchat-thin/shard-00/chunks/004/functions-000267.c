/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1005f55ec; end: 1005f55f7;  */

long FUN_1005f55ec(void)

{
  long in_x9;
  long in_x10;
  
  return in_x9 + in_x10;
}



/* Entry: 1005f55f8; end: 1005f569f;  */

long FUN_1005f55f8(long param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x10;
  long unaff_x20;
  
  func_0x0001005ec5b4();
  FUN_1005ec6a8();
  do {
    func_0x0001005ec6b4();
    if ((bool)in_ZR) {
      func_0x0001005ec6c0();
      func_0x0001005ec6c8();
      FUN_1005ecd30();
      func_0x0001005ec6f4();
      func_0x0001005ec700();
      func_0x0001005ec708();
      func_0x0001005ec710();
      func_0x0001005ec720();
      goto LAB_1005f566c;
    }
    func_0x0001005ed218();
  } while (extraout_x10 != 0);
  func_0x0001005ed224();
  if (!(bool)in_ZR) {
    FUN_1005f6f68();
  }
LAB_1005f566c:
  func_0x0001005ec750();
  func_0x0001005ec760();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  func_0x000107c60e78();
  func_0x00010061eec8();
  func_0x000107c34360();
  FUN_1005f55f8();
  func_0x0001005ec788(extraout_x8);
  FUN_1005f5710();
  return param_1;
}



/* Entry: 1005f56a0; end: 1005f56c3;  */

void FUN_1005f56a0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_28 [8];
  
  FUN_1005f55f8();
  func_0x0001005ec788(param_1);
  FUN_1005f5710(param_2,auStack_28);
  return;
}



/* Entry: 1005f56c4; end: 1005f570f;  */

void FUN_1005f56c4(undefined8 param_1)

{
  undefined1 auStack_28 [8];
  
  func_0x0001005ec788();
  FUN_1005f5710(param_1,auStack_28);
  return;
}



/* Entry: 1005f5710; end: 1005f5733;  */

void FUN_1005f5710(void)

{
  FUN_1005ec7e4();
  FUN_1005f5734();
  return;
}



/* Entry: 1005f5734; end: 1005f5763;  */

void FUN_1005f5734(long param_1)

{
  FUN_1005ee89c();
  *(undefined1 *)(param_1 + 0x100) = 0;
  FUN_1005f5764();
  return;
}



/* Entry: 1005f5764; end: 1005f57cb;  */

void FUN_1005f5764(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined1 auStack_118 [248];
  
  func_0x0001005eddc0();
  if ((param_1 != 0) && (FUN_10054c3a4(), (int)param_1 != 0)) {
    func_0x000107c2a150(auStack_118,*unaff_x19);
    func_0x0001005f5a7c();
    func_0x000107c2a14c();
    func_0x000107c29850(auStack_118);
    return;
  }
  puVar1 = unaff_x19 + 1;
  if (*(char *)(unaff_x19 + 0x20) == '\x01') {
    func_0x000107c29850();
    *(undefined1 *)(puVar1 + 0x1f) = 0;
  }
  return;
}



/* Entry: 1005f57cc; end: 1005f580f;  */

void FUN_1005f57cc(void)

{
  func_0x000107c61168(&PTR_PTR_1129c8320);
  return;
}



/* Entry: 1005f5810; end: 1005f5833;  */

void FUN_1005f5810(void)

{
  return;
}



/* Entry: 1005f5834; end: 1005f58e7;  */

void FUN_1005f5834(undefined8 param_1)

{
  undefined1 auStack_450 [264];
  undefined1 auStack_348 [264];
  undefined1 auStack_240 [264];
  undefined1 auStack_138 [264];
  
  func_0x0001005f581c(auStack_240);
  FUN_1005f59b4(auStack_138,auStack_240);
  func_0x000107c60ee4(auStack_450,0x108);
  FUN_1005f59b4(auStack_348,auStack_450);
  FUN_1005f5ac4(param_1,auStack_138,auStack_348);
  func_0x0001005f5c58();
  func_0x0001005f5c6c(auStack_450);
  func_0x0001005f5a88();
  func_0x0001005f5c6c(auStack_240);
  return;
}



/* Entry: 1005f58e8; end: 1005f58fb;  */

undefined1  [16] FUN_1005f58e8(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_2 + 8;
  auVar1._0_8_ = param_1 + 8;
  return auVar1;
}



/* Entry: 1005f58fc; end: 1005f591b;  */

void FUN_1005f58fc(void)

{
  FUN_1005f58e8();
  FUN_1005f5928();
  FUN_1005f5994();
  return;
}



/* Entry: 1005f591c; end: 1005f5927;  */

void FUN_1005f591c(void)

{
  return;
}



/* Entry: 1005f5928; end: 1005f5993;  */

void FUN_1005f5928(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_128 [248];
  
  FUN_1005f591c();
  cVar1 = *(char *)(param_1 + 0xf8);
  if (cVar1 != *(char *)(param_2 + 0xf8)) {
    if (cVar1 == '\0') {
      func_0x000107c3449c();
      func_0x000107c2a158();
    }
    else {
      func_0x00010061eed0();
      func_0x000107c2a158();
      unaff_x19 = unaff_x20;
    }
    if (*(char *)(unaff_x19 + 0xf8) == '\x01') {
      func_0x000107c29850();
      *(undefined1 *)(unaff_x19 + 0xf8) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c3449c();
    func_0x000107c343b8();
    func_0x00010887cb4c();
    func_0x00010887a9bc();
    func_0x00010887c048();
    func_0x00010887a94c();
    func_0x000107c344fc();
    func_0x00010887a94c();
    func_0x00010878858c(auStack_128);
    return;
  }
  return;
}



/* Entry: 1005f5994; end: 1005f59b3;  */

void FUN_1005f5994(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  *unaff_x20 = *unaff_x19;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 1005f59b4; end: 1005f59f7;  */

void FUN_1005f59b4(undefined8 param_1)

{
  func_0x0001005f59a8(param_1,param_1);
  FUN_1005f5a04();
  func_0x0001005f5a7c();
  FUN_1005f5a04();
  func_0x0001005f5a88();
  return;
}



/* Entry: 1005f59f8; end: 1005f5a03;  */

void FUN_1005f59f8(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1005f5a04; end: 1005f5a27;  */

void FUN_1005f5a04(void)

{
  FUN_1005f59f8();
  FUN_1005f5a28();
  FUN_1005f5a40();
  return;
}



/* Entry: 1005f5a28; end: 1005f5a3f;  */

undefined1  [16] FUN_1005f5a28(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_2 + 1;
  auVar1._0_8_ = param_1 + 1;
  *param_1 = *param_2;
  return auVar1;
}



/* Entry: 1005f5a40; end: 1005f5a67;  */

void FUN_1005f5a40(long param_1)

{
  func_0x0001005f5a34();
  *(undefined1 *)(param_1 + 0xf8) = 0;
  FUN_1005f5a68();
  return;
}



/* Entry: 1005f5a68; end: 1005f5a8f;  */

void FUN_1005f5a68(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    func_0x00010887a9bc();
    *(undefined1 *)(param_1 + 0xf8) = 1;
    return;
  }
  return;
}



/* Entry: 1005f5a90; end: 1005f5aaf;  */

void FUN_1005f5a90(long param_1)

{
  if (*(char *)(param_1 + 0xf8) == '\x01') {
    func_0x000107c29850();
  }
  return;
}



/* Entry: 1005f5ab0; end: 1005f5ac3;  */

void FUN_1005f5ab0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1005f5ac4; end: 1005f5b37;  */

void FUN_1005f5ac4(void)

{
  undefined1 auStack_240 [264];
  undefined1 auStack_138 [264];
  
  FUN_1005f5ab0();
  FUN_1005f5b38(auStack_138);
  FUN_1005f5b38(auStack_240);
  func_0x0001005583cc();
  FUN_1005f5ba0();
  func_0x0001005f5a88();
  func_0x0001005f5c58();
  return;
}



/* Entry: 1005f5b38; end: 1005f5b5b;  */

void FUN_1005f5b38(void)

{
  FUN_1005f59f8();
  FUN_1005f5a28();
  FUN_1005f5b5c();
  return;
}



/* Entry: 1005f5b5c; end: 1005f5b8b;  */

void FUN_1005f5b5c(long param_1)

{
  func_0x0001005f5a34();
  *(undefined1 *)(param_1 + 0xf8) = 0;
  FUN_1005f5b8c();
  return;
}



/* Entry: 1005f5b8c; end: 1005f5b9f;  */

void FUN_1005f5b8c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    func_0x00010887acc0();
    *(undefined1 *)(param_1 + 0xf8) = 1;
    return;
  }
  return;
}



/* Entry: 1005f5ba0; end: 1005f5c1b;  */

void FUN_1005f5ba0(undefined8 param_1)

{
  undefined1 in_ZR;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  FUN_100550bfc();
  uStack_38 = 0;
  uStack_40 = param_1;
  while ((((*(byte *)(unaff_x20 + 0x100) & 1) != 0 || ((*(byte *)(unaff_x19 + 0x100) & 1) != 0)) &&
         (func_0x000107c34668(), !(bool)in_ZR))) {
    func_0x000107c2a168();
    func_0x000107c2a164();
    FUN_1005f5764();
  }
  uStack_38 = 1;
  FUN_1005f5c1c(&uStack_40);
  return;
}



/* Entry: 1005f5c1c; end: 1005f5c47;  */

long FUN_1005f5c1c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_1005f5d84(param_1);
  }
  return param_1;
}



/* Entry: 1005f5c48; end: 1005f5c73;  */

void FUN_1005f5c48(void)

{
  return;
}



/* Entry: 1005f5c74; end: 1005f5ccf;  */

long FUN_1005f5c74(long param_1)

{
  func_0x0001005f59a8();
  func_0x000107c60ee4();
  FUN_1005f5cd0();
  FUN_1005f5cec();
  func_0x0001005f5a88();
  FUN_1005ed1e8();
  FUN_10054cac4();
  FUN_1005f5a90(param_1 + 0x10);
  return param_1;
}



/* Entry: 1005f5cd0; end: 1005f5ceb;  */

undefined1  [16] FUN_1005f5cd0(void)

{
  long unaff_x19;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &stack0x00000008;
  auVar1._0_8_ = unaff_x19 + 8;
  return auVar1;
}



/* Entry: 1005f5cec; end: 1005f5d0b;  */

void FUN_1005f5cec(void)

{
  func_0x0001005f5cdc();
  FUN_1005f5d34();
  return;
}



/* Entry: 1005f5d0c; end: 1005f5d33;  */

void FUN_1005f5d0c(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0xf8);
  if (cVar1 != *(char *)(param_2 + 0xf8)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0xf8) == '\x01') {
        func_0x000107c29850();
        *(undefined1 *)(param_1 + 0xf8) = 0;
      }
      return;
    }
    func_0x00010887a9bc();
    *(undefined1 *)(param_1 + 0xf8) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c343b8();
    func_0x000107c3194c();
    *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
    func_0x0001086a8024(unaff_x20 + 0x20,unaff_x19 + 0x20);
    func_0x000107c2895c(unaff_x20 + 0x60,unaff_x19 + 0x60);
    func_0x000107c3194c(unaff_x20 + 0xd8,unaff_x19 + 0xd8);
    *(undefined4 *)(unaff_x20 + 0xf0) = *(undefined4 *)(unaff_x19 + 0xf0);
    return;
  }
  return;
}



/* Entry: 1005f5d34; end: 1005f5d57;  */

undefined8 FUN_1005f5d34(undefined8 param_1)

{
  FUN_1005f5d0c();
  return param_1;
}



/* Entry: 1005f5d58; end: 1005f5d73;  */

void FUN_1005f5d58(void)

{
  FUN_1005ecb38();
  FUN_1005ecb64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1005f5d74; end: 1005f5d83;  */

void FUN_1005f5d74(void)

{
  return;
}



/* Entry: 1005f5d84; end: 1005f5df3;  */

void FUN_1005f5d84(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    func_0x000107c2984c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1005f5df4; end: 1005f5e73;  */

void FUN_1005f5df4(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001005f39b8();
  if ((bool)in_ZR) {
    FUN_1005ed91c();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c3417c();
      func_0x000107c341b0();
      func_0x000107c34218();
      FUN_10054f908();
      func_0x000107c3415c();
      func_0x000107c3422c();
      func_0x000107c3436c();
      FUN_100678270();
      func_0x0001005eb600();
    }
  }
  FUN_1005f3a4c(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1005f5f20();
  return;
}



/* Entry: 1005f5e74; end: 1005f5f1f;  */

undefined1 * FUN_1005f5e74(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x10;
  long unaff_x20;
  undefined1 auStack_c8 [152];
  
  func_0x0001005ec5b4();
  FUN_1005ec6a8();
  do {
    func_0x0001005ec6b4();
    if ((bool)in_ZR) {
      func_0x0001005ec6c0();
      func_0x0001005ec6c8();
      param_1 = auStack_c8;
      FUN_1005f5f44();
      func_0x0001005ec6f4();
      func_0x0001005ec700();
      func_0x0001005ec708();
      func_0x0001005ec710();
      func_0x0001005ec720();
      goto LAB_1005f5eec;
    }
    func_0x0001005ed218();
  } while (extraout_x10 != 0);
  func_0x0001005ed224();
  if (!(bool)in_ZR) {
    FUN_1005f6f68();
  }
LAB_1005f5eec:
  func_0x0001005ec750();
  func_0x0001005ec760();
  if ((bool)in_ZR) {
    return (undefined1 *)(unaff_x20 + 0x10);
  }
  func_0x000107c60e78();
  func_0x00010061eec8();
  func_0x000107c34360();
  FUN_1005f5e74();
  func_0x0001005ec788(extraout_x8);
  FUN_1005f5fb0();
  return param_1;
}



/* Entry: 1005f5f20; end: 1005f5f43;  */

void FUN_1005f5f20(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_28 [8];
  
  FUN_1005f5e74();
  func_0x0001005ec788(param_1);
  FUN_1005f5fb0(param_2,auStack_28);
  return;
}



/* Entry: 1005f5f44; end: 1005f5f63;  */

void FUN_1005f5f44(undefined8 *param_1)

{
  FUN_10054bfa4();
  *param_1 = &PTR_DAT_110a7d7d8;
  return;
}



/* Entry: 1005f5f64; end: 1005f5faf;  */

void FUN_1005f5f64(undefined8 param_1)

{
  undefined1 auStack_28 [8];
  
  func_0x0001005ec788();
  FUN_1005f5fb0(param_1,auStack_28);
  return;
}



/* Entry: 1005f5fb0; end: 1005f5fd3;  */

void FUN_1005f5fb0(void)

{
  FUN_1005ec7e4();
  FUN_1005f5fd4();
  return;
}



/* Entry: 1005f5fd4; end: 1005f6003;  */

void FUN_1005f5fd4(long param_1)

{
  FUN_1005ee89c();
  *(undefined1 *)(param_1 + 0xb0) = 0;
  FUN_1005f6004();
  return;
}



/* Entry: 1005f6004; end: 1005f6067;  */

void FUN_1005f6004(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined1 auStack_c8 [168];
  
  FUN_1005ec860();
  if ((param_1 != 0) && (FUN_10054c3a4(), (int)param_1 != 0)) {
    func_0x000107c28ff8(auStack_c8,*unaff_x19);
    func_0x000100692e90();
    func_0x000107c28ff4();
    func_0x000107c3256c();
    return;
  }
  puVar1 = unaff_x19 + 1;
  if (*(char *)(unaff_x19 + 0x16) == '\x01') {
    func_0x000107c28f80();
    *(undefined1 *)(puVar1 + 0x15) = 0;
  }
  return;
}



/* Entry: 1005f6068; end: 1005f606f; -[SCLensContentServices lensContentCacheProvider] */

undefined8 FUN_1005f6068(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1005f6070; end: 1005f60d3;  */

void FUN_1005f6070(void)

{
  func_0x000107c61168(&PTR_PTR_112881b10);
  return;
}



/* Entry: 1005f60d4; end: 1005f611b;  */

void FUN_1005f60d4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  return;
}



/* Entry: 1005f611c; end: 1005f6147;  */

void FUN_1005f611c(ulong param_1)

{
  if (*(char *)((param_1 | 8) + 0x50) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 1005f6148; end: 1005f6167;  */

void FUN_1005f6148(void)

{
  FUN_1005ec9ec();
  FUN_1005f6174();
  func_0x0001005eca94();
  return;
}



/* Entry: 1005f6168; end: 1005f6173;  */

void FUN_1005f6168(void)

{
  return;
}



/* Entry: 1005f6174; end: 1005f61df;  */

void FUN_1005f6174(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_c8 [168];
  
  FUN_1005f6168();
  cVar1 = *(char *)(param_1 + 0xa8);
  if (cVar1 != *(char *)(param_2 + 0xa8)) {
    if (cVar1 == '\0') {
      func_0x000107c324cc();
      func_0x000107c28fec();
    }
    else {
      FUN_10005e42c();
      func_0x000107c28fec();
      unaff_x19 = unaff_x20;
    }
    if (*(char *)(unaff_x19 + 0xa8) == '\x01') {
      func_0x000107c28f80();
      *(undefined1 *)(unaff_x19 + 0xa8) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c324cc();
    func_0x000107c324b0();
    func_0x0001086b0a24(auStack_c8);
    func_0x0001086b0314();
    func_0x0001086ad2d8();
    func_0x000107c32508();
    func_0x0001086ad2d8();
    func_0x0001086b09c8();
    return;
  }
  return;
}



/* Entry: 1005f61e0; end: 1005f61ef;  */

void FUN_1005f61e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)(param_1,0xb8);
  return;
}



/* Entry: 1005f61f0; end: 1005f620f;  */

void FUN_1005f61f0(long param_1)

{
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    func_0x000107c28f80();
  }
  return;
}



/* Entry: 1005f6210; end: 1005f621b;  */

undefined8 FUN_1005f6210(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x40);
}



/* Entry: 1005f621c; end: 1005f629b;  */

void FUN_1005f621c(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001005f39b8();
  if ((bool)in_ZR) {
    FUN_1005ed91c();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c3417c();
      func_0x000107c341b0();
      func_0x000107c34218();
      FUN_10054f908();
      func_0x000107c3415c();
      func_0x000107c3422c();
      func_0x000107c3436c();
      FUN_100678270();
      func_0x0001005eb600();
    }
  }
  FUN_1005f3a4c(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1005f6348();
  return;
}



/* Entry: 1005f629c; end: 1005f6347;  */

undefined1 * FUN_1005f629c(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x10;
  long unaff_x20;
  undefined1 auStack_c8 [152];
  
  func_0x0001005ec5b4();
  FUN_1005ec6a8();
  do {
    func_0x0001005ec6b4();
    if ((bool)in_ZR) {
      func_0x0001005ec6c0();
      func_0x0001005ec6c8();
      param_1 = auStack_c8;
      FUN_1005f636c();
      func_0x0001005ec6f4();
      func_0x0001005ec700();
      func_0x0001005ec708();
      func_0x0001005ec710();
      func_0x0001005ec720();
      goto LAB_1005f6314;
    }
    func_0x0001005ed218();
  } while (extraout_x10 != 0);
  func_0x0001005ed224();
  if (!(bool)in_ZR) {
    FUN_1005f6f68();
  }
LAB_1005f6314:
  func_0x0001005ec750();
  func_0x0001005ec760();
  if ((bool)in_ZR) {
    return (undefined1 *)(unaff_x20 + 0x10);
  }
  func_0x000107c60e78();
  func_0x00010061eec8();
  func_0x000107c34360();
  FUN_1005f629c();
  func_0x0001005ec788(extraout_x8);
  FUN_1005f63d8();
  return param_1;
}



/* Entry: 1005f6348; end: 1005f636b;  */

void FUN_1005f6348(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_28 [8];
  
  FUN_1005f629c();
  func_0x0001005ec788(param_1);
  FUN_1005f63d8(param_2,auStack_28);
  return;
}



/* Entry: 1005f636c; end: 1005f638b;  */

void FUN_1005f636c(undefined8 *param_1)

{
  FUN_10054bfa4();
  *param_1 = &PTR_DAT_110a7d8a0;
  return;
}



/* Entry: 1005f638c; end: 1005f63d7;  */

void FUN_1005f638c(undefined8 param_1)

{
  undefined1 auStack_28 [8];
  
  func_0x0001005ec788();
  FUN_1005f63d8(param_1,auStack_28);
  return;
}



/* Entry: 1005f63d8; end: 1005f63fb;  */

void FUN_1005f63d8(void)

{
  FUN_1005ec7e4();
  FUN_1005f63fc();
  return;
}



/* Entry: 1005f63fc; end: 1005f642b;  */

void FUN_1005f63fc(long param_1)

{
  FUN_1005ee89c();
  *(undefined1 *)(param_1 + 0xb0) = 0;
  FUN_1005f6438();
  return;
}



/* Entry: 1005f642c; end: 1005f6437;  */

undefined8 FUN_1005f642c(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 1005f6438; end: 1005f649b;  */

void FUN_1005f6438(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined1 auStack_c8 [168];
  
  FUN_1005f642c();
  if ((param_1 != 0) && (FUN_10054c3a4(), (int)param_1 != 0)) {
    func_0x000107c29ad8(auStack_c8,*unaff_x19);
    func_0x000100569e44();
    func_0x000107c29ad4();
    func_0x000107c28f84(auStack_c8);
    return;
  }
  puVar1 = unaff_x19 + 1;
  if (*(char *)(unaff_x19 + 0x16) == '\x01') {
    func_0x000107c28f84();
    *(undefined1 *)(puVar1 + 0x15) = 0;
  }
  return;
}



/* Entry: 1005f649c; end: 1005f64bf;  */

void FUN_1005f649c(long param_1)

{
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    func_0x000107c28f84();
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  return;
}



/* Entry: 1005f64c0; end: 1005f64e3;  */

void FUN_1005f64c0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_2 = param_2 + 8;
  func_0x0001005f64d8(param_1,param_2);
  FUN_1005f6518(param_1 + 1,param_2 + 8);
  uVar1 = *unaff_x20;
  *unaff_x20 = *unaff_x19;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 1005f64e4; end: 1005f6517;  */

void FUN_1005f64e4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001005f64d8();
  FUN_1005f6518(param_1 + 8,param_2 + 8);
  uVar1 = *unaff_x20;
  *unaff_x20 = *unaff_x19;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 1005f6518; end: 1005f6587;  */

void FUN_1005f6518(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_c8 [168];
  
  func_0x0001005f64d8();
  cVar1 = *(char *)(param_1 + 0xa8);
  if (cVar1 != *(char *)(param_2 + 0xa8)) {
    if (cVar1 == '\0') {
      func_0x000107c336f8();
      func_0x000107c29ac8();
    }
    else {
      func_0x000107c29ac8();
      unaff_x19 = unaff_x20;
    }
    if (*(char *)(unaff_x19 + 0xa8) == '\x01') {
      func_0x000107c28f84();
      *(undefined1 *)(unaff_x19 + 0xa8) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c336f8();
    func_0x000107c336b4();
    func_0x0001087fdb74(auStack_c8,unaff_x20);
    func_0x000108800000();
    func_0x0001087fdb24();
    func_0x000107c336d0();
    func_0x0001087fdb24();
    func_0x0001086a9a00(auStack_c8);
    return;
  }
  return;
}



/* Entry: 1005f6588; end: 1005f6597;  */

void FUN_1005f6588(void)

{
  return;
}



/* Entry: 1005f6598; end: 1005f65b7;  */

void FUN_1005f6598(long param_1)

{
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    func_0x000107c28f84();
  }
  return;
}



/* Entry: 1005f65b8; end: 1005f6617;  */

undefined8 * FUN_1005f65b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [176];
  
  FUN_1005f61e0(auStack_d8);
  FUN_1005f6624(param_1 + 1,auStack_d8);
  FUN_1005f6598(auStack_d0);
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_10054cac4(uVar1);
  FUN_1005f6598(param_1 + 2);
  return param_1;
}



/* Entry: 1005f6618; end: 1005f6623;  */

undefined1  [16] FUN_1005f6618(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_2 + 1;
  auVar1._0_8_ = param_1 + 1;
  *param_1 = *param_2;
  return auVar1;
}



/* Entry: 1005f6624; end: 1005f6647;  */

undefined8 FUN_1005f6624(undefined8 param_1)

{
  FUN_1005f6618();
  FUN_1005f6670();
  return param_1;
}



/* Entry: 1005f6648; end: 1005f666f;  */

void FUN_1005f6648(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0xa8);
  if (cVar1 != *(char *)(param_2 + 0xa8)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0xa8) == '\x01') {
        func_0x000107c28f84();
        *(undefined1 *)(param_1 + 0xa8) = 0;
      }
      return;
    }
    func_0x0001087fdb74();
    *(undefined1 *)(param_1 + 0xa8) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c336b4();
    func_0x000107c3194c();
    func_0x0001087ffb90();
    func_0x000108800148();
    func_0x0001087ffd48();
    *(undefined4 *)(unaff_x20 + 0xa0) = *(undefined4 *)(unaff_x19 + 0xa0);
    return;
  }
  return;
}



/* Entry: 1005f6670; end: 1005f6693;  */

undefined8 FUN_1005f6670(undefined8 param_1)

{
  FUN_1005f6648();
  return param_1;
}



/* Entry: 1005f6694; end: 1005f66af;  */

void FUN_1005f6694(void)

{
  FUN_1005ecb38();
  FUN_1005ecb64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1005f66b0; end: 1005f66c3;  */

void FUN_1005f66b0(void)

{
  return;
}



/* Entry: 1005f66c4; end: 1005f671f;  */

long FUN_1005f66c4(long param_1)

{
  undefined1 auStack_d8 [184];
  
  func_0x000107c60ee4(auStack_d8,0xb8);
  FUN_1005f672c(param_1 + 8,auStack_d8);
  FUN_1005f679c();
  func_0x0001005f67a4();
  FUN_10054cac4();
  FUN_1005f61f0(param_1 + 0x10);
  return param_1;
}



/* Entry: 1005f6720; end: 1005f672b;  */

undefined1  [16] FUN_1005f6720(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_2 + 1;
  auVar1._0_8_ = param_1 + 1;
  *param_1 = *param_2;
  return auVar1;
}



/* Entry: 1005f672c; end: 1005f674f;  */

undefined8 FUN_1005f672c(undefined8 param_1)

{
  FUN_1005f6720();
  FUN_1005f6778();
  return param_1;
}



/* Entry: 1005f6750; end: 1005f6777;  */

void FUN_1005f6750(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0xa8);
  if (cVar1 != *(char *)(param_2 + 0xa8)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0xa8) == '\x01') {
        func_0x000107c28f80();
        *(undefined1 *)(param_1 + 0xa8) = 0;
      }
      return;
    }
    func_0x0001086a94f4();
    *(undefined1 *)(param_1 + 0xa8) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c324b0();
    func_0x000107c3194c();
    func_0x0001086b056c();
    func_0x000107c27b9c(unaff_x20 + 0x70,unaff_x19 + 0x70);
    *(undefined8 *)(unaff_x20 + 0x88) = *(undefined8 *)(unaff_x19 + 0x88);
    func_0x000107c3194c(unaff_x20 + 0x90,unaff_x19 + 0x90);
    return;
  }
  return;
}



/* Entry: 1005f6778; end: 1005f679b;  */

undefined8 FUN_1005f6778(undefined8 param_1)

{
  FUN_1005f6750();
  return param_1;
}



/* Entry: 1005f679c; end: 1005f67af;  */

void FUN_1005f679c(void)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0xb0) == '\x01') {
    func_0x000107c28f80();
  }
  return;
}



/* Entry: 1005f67b0; end: 1005f67cb;  */

void FUN_1005f67b0(void)

{
  FUN_1005ecb38();
  FUN_1005ecb64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1005f67cc; end: 1005f67ef;  */

void FUN_1005f67cc(void)

{
  return;
}



/* Entry: 1005f67f0; end: 1005f6cf3;  */

void FUN_1005f67f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined1 in_ZR;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  undefined8 extraout_x8;
  undefined8 uVar10;
  int iVar11;
  ulong unaff_x20;
  long *plVar12;
  long lVar13;
  undefined1 auStack_738 [24];
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined1 auStack_700 [24];
  undefined1 auStack_6e8 [24];
  undefined1 auStack_6d0 [24];
  undefined1 auStack_6b8 [80];
  undefined1 auStack_668 [24];
  undefined1 auStack_650 [32];
  undefined **ppuStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  ulong uStack_5d8;
  long alStack_520 [27];
  byte bStack_448;
  long alStack_440 [27];
  byte bStack_368;
  undefined1 auStack_360 [32];
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  undefined1 auStack_318 [104];
  undefined1 auStack_2b0 [232];
  undefined **ppuStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  byte bStack_170;
  undefined8 uStack_18;
  
  FUN_100567254();
  lVar13 = param_1;
  func_0x000100567f30();
  uStack_18 = extraout_x8;
  FUN_1005f6cf4(auStack_2b0,*(undefined8 *)(*(long *)(lVar13 + 0x18) + 0x38));
  FUN_1005f3d74(auStack_318,*(undefined8 *)(*(long *)(lVar13 + 0x18) + 0x38),3);
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_320 = 0x3f800000;
  func_0x0001005f402c(&ppuStack_1c8,auStack_318);
  uStack_5e8 = 0;
  uStack_5f0 = 0;
  uStack_5d8 = 0;
  uStack_5e0 = 0;
  uStack_608 = 0;
  uStack_610 = 0;
  uStack_5f8 = 0;
  uStack_600 = 0;
  uStack_628 = 0;
  ppuStack_630 = (undefined **)0x0;
  uStack_618 = 0;
  uStack_620 = 0;
  while (((bStack_170 & 1) != 0 || ((uStack_5d8 & 1) != 0))) {
    in_ZR = ppuStack_1c8 == ppuStack_630;
    if ((bool)in_ZR) break;
    pppuVar9 = &ppuStack_1c8;
    func_0x000107c298f4(pppuVar9);
    func_0x000107c29974(&uStack_340,pppuVar9,pppuVar9);
    FUN_1005f3f98(&ppuStack_1c8);
  }
  func_0x0001005f6f8c();
  func_0x0001005f6f98();
  FUN_1005f6fa4(auStack_360,*(long *)(param_1 + 0x18) + 0x10);
  func_0x0001005f7178(alStack_440,auStack_2b0);
  func_0x000107c60ee4(alStack_520,0xe0);
  while ((iVar11 = (int)param_2, (bStack_368 & 1) != 0 || ((bStack_448 & 1) != 0))) {
    in_ZR = alStack_440[0] == alStack_520[0];
    if ((bool)in_ZR) break;
    plVar12 = alStack_440;
    func_0x000107c28eec();
    puVar7 = &uStack_340;
    func_0x000107c299ec(puVar7,plVar12 + 0x14);
    if (puVar7 != (undefined8 *)0x0) {
      bVar6 = *(byte *)(plVar12 + 4);
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      func_0x000107c29a30(uVar8,plVar12 + 0x14);
      if (((((uint)uVar8 | bVar6 ^ 0xffffffff) & 1) != 0) ||
         (in_ZR = *(int *)((long)puVar7 + 0x6c) == 3, (bool)in_ZR)) {
        if ((iVar11 != 0) && (in_ZR = 0, *(int *)((long)puVar7 + 0x6c) == 3)) {
          in_ZR = (int)plVar12[0xe] == 10;
          if ((bool)in_ZR) {
            func_0x000107c29a24(*(undefined8 *)(param_1 + 0x38),plVar12);
          }
        }
      }
      else {
        func_0x000107c288c4(auStack_650,auStack_360);
        FUN_10054f8dc(auStack_668,plVar12);
        func_0x000107c28ed8(auStack_6b8,plVar12 + 5);
        func_0x000107c28aa8(auStack_6d0,plVar12 + 0x17);
        func_0x000107c33680(&ppuStack_630,auStack_650,auStack_668,auStack_6b8,auStack_6d0);
        func_0x000104bee630(auStack_6d0);
        func_0x000107c2a444(auStack_6b8);
        FUN_100100fec(auStack_668);
        FUN_1005f73a4(auStack_650);
        if ((iVar11 != 0) && (in_ZR = *(int *)(puVar7 + 0xd) == 3, (bool)in_ZR)) {
          *(undefined4 *)(puVar7 + 0xd) = 2;
        }
        lVar13 = *(long *)(param_1 + 0x18);
        FUN_10054f8dc(auStack_6e8,puVar7 + 5);
        uVar10 = puVar7[0xc];
        uVar2 = *(undefined4 *)(puVar7 + 0xb);
        uVar8 = puVar7[8];
        uVar1 = puVar7[9];
        uVar3 = *(undefined4 *)(puVar7 + 0xd);
        uVar4 = *(uint *)(puVar7 + 10);
        unaff_x20 = (ulong)uVar4;
        uVar5 = *(undefined4 *)(puVar7 + 0xe);
        func_0x000107c28ed4();
        func_0x000107c28fbc(&ppuStack_1c8,lVar13 + 0x28,auStack_6e8,uVar8,uVar10,uVar2,uVar1,uVar3,
                            uVar4,uVar5,3);
        FUN_100100fec(auStack_6e8);
        func_0x000107c29a34(param_1,plVar12 + 0x14);
        uVar8 = *(undefined8 *)(param_1 + 0x30);
        func_0x000107c29a38(&uStack_720);
        uStack_708 = uStack_718;
        uStack_710 = uStack_720;
        uStack_720 = 0;
        uStack_718 = 0;
        func_0x000107c29a70(auStack_700,uVar8,plVar12 + 5,plVar12 + 0x17,&uStack_710);
        func_0x000104be3970(&uStack_710);
        func_0x000107c29a6c(&uStack_720);
        func_0x000107c29a2c(param_1,&ppuStack_1c8,auStack_700);
        func_0x000107c29a3c(auStack_700);
        func_0x000107c29a40(&ppuStack_1c8);
        func_0x000107c28f68(&ppuStack_630);
      }
    }
    FUN_1005f6ee0(alStack_440);
  }
  FUN_1005f721c(alStack_520);
  FUN_1005f721c(alStack_440);
  plVar12 = *(long **)(*(long *)(param_1 + 0x18) + 0xe8);
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1c0 = 0;
  ppuStack_1c8 = &PTR_DAT_110a609a8;
  uStack_1a8 = 0x1b3;
  FUN_10002b838(auStack_738,&UNK_10f4baf56);
  pppuVar9 = &ppuStack_1c8;
  FUN_1005e34cc(pppuVar9,auStack_738,param_2);
  (**(code **)(*plVar12 + 0x78))(plVar12,pppuVar9,uStack_328);
  FUN_1005f7244();
  FUN_1005505e4(&ppuStack_1c8);
  if (iVar11 != 0) {
    FUN_1005f7288(*(undefined8 *)(param_1 + 0x38),*(long *)(param_1 + 0x18) + 0x38,
                  *(long *)(param_1 + 0x18) + 0x78);
  }
  FUN_1005f73a4(auStack_360);
  func_0x0001005f4a64(&uStack_340);
  FUN_1005f4ae4(auStack_318);
  FUN_1005f73e4();
  func_0x0001005686a4(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  FUN_1005f73a4(auStack_360);
  func_0x0001005f4a64(&uStack_340);
  FUN_1005f4ae4(auStack_318);
  FUN_1005f73e4(auStack_2b0);
  func_0x000107c33644();
  func_0x0001005f39b8();
  if ((bool)in_ZR) {
    FUN_1005ed91c();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c3417c();
      func_0x000107c341b0();
      func_0x000107c34218();
      FUN_10054f908();
      func_0x000107c3415c();
      func_0x000107c3422c();
      func_0x000107c3436c();
      FUN_100678270();
      func_0x0001005eb600();
    }
  }
  FUN_1005f3a4c(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1005f6e1c();
  return;
}



/* Entry: 1005f6cf4; end: 1005f6d73;  */

void FUN_1005f6cf4(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001005f39b8();
  if ((bool)in_ZR) {
    FUN_1005ed91c();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c3417c();
      func_0x000107c341b0();
      func_0x000107c34218();
      FUN_10054f908();
      func_0x000107c3415c();
      func_0x000107c3422c();
      func_0x000107c3436c();
      FUN_100678270();
      func_0x0001005eb600();
    }
  }
  FUN_1005f3a4c(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1005f6e1c();
  return;
}



/* Entry: 1005f6d74; end: 1005f6e1b;  */

long FUN_1005f6d74(long param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x10;
  long unaff_x20;
  
  func_0x0001005ec5b4();
  FUN_1005ec6a8();
  do {
    func_0x0001005ec6b4();
    if ((bool)in_ZR) {
      func_0x0001005ec6c0();
      func_0x0001005ec6c8();
      FUN_1005ecd30();
      func_0x0001005ec6f4();
      func_0x0001005ec700();
      func_0x0001005ec708();
      func_0x0001005ec710();
      func_0x0001005ec720();
      goto LAB_1005f6de8;
    }
    func_0x0001005ed218();
  } while (extraout_x10 != 0);
  func_0x0001005ed224();
  if (!(bool)in_ZR) {
    FUN_1005f6f68();
  }
LAB_1005f6de8:
  func_0x0001005ec750();
  func_0x0001005ec760();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  func_0x000107c60e78();
  func_0x00010061eec8();
  func_0x000107c34360();
  FUN_1005f6d74();
  func_0x0001005ec788(extraout_x8);
  FUN_1005f6e8c();
  return param_1;
}



/* Entry: 1005f6e1c; end: 1005f6e3f;  */

void FUN_1005f6e1c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_28 [8];
  
  FUN_1005f6d74();
  func_0x0001005ec788(param_1);
  FUN_1005f6e8c(param_2,auStack_28);
  return;
}



/* Entry: 1005f6e40; end: 1005f6e8b;  */

void FUN_1005f6e40(undefined8 param_1)

{
  undefined1 auStack_28 [8];
  
  func_0x0001005ec788();
  FUN_1005f6e8c(param_1,auStack_28);
  return;
}



/* Entry: 1005f6e8c; end: 1005f6eaf;  */

void FUN_1005f6e8c(void)

{
  FUN_1005ec7e4();
  FUN_1005f6eb0();
  return;
}



/* Entry: 1005f6eb0; end: 1005f6edf;  */

void FUN_1005f6eb0(long param_1)

{
  FUN_1005ee89c();
  *(undefined1 *)(param_1 + 0xd8) = 0;
  FUN_1005f6ee0();
  return;
}



/* Entry: 1005f6ee0; end: 1005f6f43;  */

void FUN_1005f6ee0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined1 auStack_f0 [208];
  
  FUN_1005ec860();
  if ((param_1 != 0) && (FUN_10054c3a4(), (int)param_1 != 0)) {
    func_0x000107c28fe4(auStack_f0,*unaff_x19);
    func_0x000107c3252c();
    func_0x000107c28fe0();
    func_0x000107c28f8c(auStack_f0);
    return;
  }
  puVar1 = unaff_x19 + 1;
  if (*(char *)(unaff_x19 + 0x1b) == '\x01') {
    func_0x000107c28f8c();
    *(undefined1 *)(puVar1 + 0x1a) = 0;
  }
  return;
}



/* Entry: 1005f6f44; end: 1005f6f67;  */

void FUN_1005f6f44(long param_1)

{
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    func_0x000107c28f8c();
    *(undefined1 *)(param_1 + 0xd0) = 0;
  }
  return;
}



/* Entry: 1005f6f68; end: 1005f6fa3;  */

void FUN_1005f6f68(long *param_1)

{
  long *in_x9;
  long lVar1;
  long *unaff_x21;
  
  lVar1 = *param_1;
  *(long **)(lVar1 + 8) = in_x9;
  *in_x9 = lVar1;
  lVar1 = *unaff_x21;
  *(long **)(lVar1 + 8) = param_1;
  *param_1 = lVar1;
  *unaff_x21 = (long)param_1;
  param_1[1] = (long)unaff_x21;
  return;
}



/* Entry: 1005f6fa4; end: 1005f7037;  */

void FUN_1005f6fa4(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [24];
  
  FUN_100553360();
  *param_1 = &PTR_DAT_110a81f68;
  param_1[1] = 0;
  param_1[2] = &DAT_11383d918;
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_1005f7038(auStack_48,param_2);
  func_0x0001005f70e4(param_1 + 2,auStack_48,0);
  FUN_1005f7170();
  return;
}



/* Entry: 1005f7038; end: 1005f704b;  */

void FUN_1005f7038(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  
  puVar5 = (undefined1 *)*param_2;
  puVar1 = (undefined1 *)param_2[1];
  uVar4 = (long)puVar1 - (long)puVar5;
  if (uVar4 < 0x7ffffffffffffff7) {
    puVar2 = param_1;
    if (uVar4 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar4;
    }
    else {
      uVar3 = 0x19;
      if ((uVar4 | 7) != 0x17) {
        uVar3 = (uVar4 | 7) + 1;
      }
      FUN_100033e30();
      param_1[1] = uVar4;
      param_1[2] = uVar3 | 0x8000000000000000;
      *param_1 = puVar2;
    }
    for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
      *(undefined1 *)puVar2 = *puVar5;
      puVar2 = (undefined8 *)((long)puVar2 + 1);
    }
    *(undefined1 *)puVar2 = 0;
  }
  else {
    func_0x000104bd47d4();
  }
  return;
}



/* Entry: 1005f704c; end: 1005f70d7;  */

void FUN_1005f704c(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  if (param_4 < 0x7ffffffffffffff7) {
    puVar1 = param_1;
    if (param_4 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_4;
    }
    else {
      uVar2 = 0x19;
      if ((param_4 | 7) != 0x17) {
        uVar2 = (param_4 | 7) + 1;
      }
      FUN_100033e30();
      param_1[1] = param_4;
      param_1[2] = uVar2 | 0x8000000000000000;
      *param_1 = puVar1;
    }
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *(undefined1 *)puVar1 = *param_2;
      puVar1 = (undefined8 *)((long)puVar1 + 1);
    }
    *(undefined1 *)puVar1 = 0;
  }
  else {
    func_0x000104bd47d4();
  }
  return;
}



/* Entry: 1005f70d8; end: 1005f710b;  */

void FUN_1005f70d8(void)

{
  return;
}


