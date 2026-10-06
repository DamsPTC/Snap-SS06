/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f0dde4; end: 100f0de7f;  */

int FUN_100f0dde4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100f0de80; end: 100f0debf;  */

void FUN_100f0de80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b1a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911b58;
  func_0x000107c61520(&UNK_10d911b58,&UNK_1103681e0);
  puRam0000000112d4b1a8 = puVar1;
  return;
}



/* Entry: 100f0dec0; end: 100f0dec3;  */

void FUN_100f0dec0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b1b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911c48;
  func_0x000107c61520(&UNK_10d911c48,&UNK_110368150);
  puRam0000000112d4b1b0 = puVar1;
  return;
}



/* Entry: 100f0dec4; end: 100f0df03;  */

void FUN_100f0dec4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b1b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911c48;
  func_0x000107c61520(&UNK_10d911c48,&UNK_110368150);
  puRam0000000112d4b1b0 = puVar1;
  return;
}



/* Entry: 100f0df04; end: 100f0df07;  */

void FUN_100f0df04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b1b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911ba8;
  func_0x000107c61520(&UNK_10d911ba8,&UNK_110368150);
  puRam0000000112d4b1b8 = puVar1;
  return;
}



/* Entry: 100f0df08; end: 100f0df47;  */

void FUN_100f0df08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b1b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911ba8;
  func_0x000107c61520(&UNK_10d911ba8,&UNK_110368150);
  puRam0000000112d4b1b8 = puVar1;
  return;
}



/* Entry: 100f0df48; end: 100f0df4b;  */

void FUN_100f0df48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b1c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911b80;
  func_0x000107c61520(&UNK_10d911b80,&UNK_110368150);
  puRam0000000112d4b1c0 = puVar1;
  return;
}



/* Entry: 100f0df4c; end: 100f0df8b;  */

void FUN_100f0df4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b1c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911b80;
  func_0x000107c61520(&UNK_10d911b80,&UNK_110368150);
  puRam0000000112d4b1c0 = puVar1;
  return;
}



/* Entry: 100f0df8c; end: 100f0df8f;  */

void FUN_100f0df8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b1c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911af0;
  func_0x000107c61520(&UNK_10d911af0,&UNK_1103681e0);
  puRam0000000112d4b1c8 = puVar1;
  return;
}



/* Entry: 100f0df90; end: 100f0dfcf;  */

void FUN_100f0df90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b1c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911af0;
  func_0x000107c61520(&UNK_10d911af0,&UNK_1103681e0);
  puRam0000000112d4b1c8 = puVar1;
  return;
}



/* Entry: 100f0dfd0; end: 100f0dfd3;  */

void FUN_100f0dfd0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b1d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911ac8;
  func_0x000107c61520(&UNK_10d911ac8,&UNK_1103681e0);
  puRam0000000112d4b1d0 = puVar1;
  return;
}



/* Entry: 100f0dfd4; end: 100f0e013;  */

void FUN_100f0dfd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b1d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911ac8;
  func_0x000107c61520(&UNK_10d911ac8,&UNK_1103681e0);
  puRam0000000112d4b1d0 = puVar1;
  return;
}



/* Entry: 100f0e014; end: 100f0e123;  */

undefined4 FUN_100f0e014(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x64496e6f6974706f;
  if ((param_1 == 0x64496e6f6974706f && param_2 == -0x1800000000000000) ||
     (func_0x000107c605b8(0x64496e6f6974706f,0xe800000000000000,param_1,param_2,0), (uVar1 & 1) != 0
     )) {
    func_0x000107c6142c(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0x79726f6765746163;
    if (((param_1 == 0x79726f6765746163) && (param_2 == -0x1800000000000000)) ||
       (func_0x000107c605b8(0x79726f6765746163,0xe800000000000000,param_1,param_2,0),
       (uVar1 & 1) != 0)) {
      func_0x000107c6142c(param_2);
      uVar2 = 1;
    }
    else {
      uVar1 = 0;
      if ((param_1 == 0x73656e6f74) && (param_2 == -0x1b00000000000000)) {
        func_0x000107c6142c(0xe500000000000000);
        uVar2 = 2;
      }
      else {
        func_0x000107c605b8(0x73656e6f74,0xe500000000000000,param_1,param_2,0);
        func_0x000107c6142c(param_2);
        uVar2 = 2;
        if ((uVar1 & 1) == 0) {
          uVar2 = 3;
        }
      }
    }
  }
  return uVar2;
}



/* Entry: 100f0e124; end: 100f0e2ef;  */

/* WARNING: Removing unreachable block (ram,0x000100f0e2cc) */
/* WARNING: Removing unreachable block (ram,0x000100f0e218) */

undefined1 * FUN_100f0e124(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar1 = 0x112d4b268;
  func_0x0001000285a8(0x112d4b268,&UNK_10d911d78);
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = *(undefined1 **)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = param_1;
  func_0x0001000a8868(param_1,puVar3);
  FUN_100f0e4f0();
  func_0x000107c606e0(auStack_70 + -extraout_x8,&UNK_110368320,&UNK_110368320,lVar2,puVar3,uVar4);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar3 = &uStack_51;
    func_0x000107c60500(puVar3,lVar1);
    uStack_52 = 1;
    func_0x000107c604f4(&uStack_52,lVar1);
    uVar4 = 0x112d4b170;
    func_0x0001000285a8(0x112d4b170,&UNK_10d911a80);
    uStack_53 = 2;
    uVar5 = uVar4;
    func_0x000100f0d658();
    func_0x000107c604e8(auStack_68,uVar4,&uStack_53,lVar1,uVar4,uVar5);
    (**(code **)(lVar6 + 8))(auStack_70 + -extraout_x8,lVar1);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return puVar3;
}



/* Entry: 100f0e2f0; end: 100f0e447;  */

long FUN_100f0e2f0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lVar2 = 0x112d4b248;
  func_0x0001000285a8(0x112d4b248,&UNK_10d911d68);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar5);
  lVar4 = lVar3;
  FUN_100f0e448();
  func_0x000107c606e0(auStack_60 + -extraout_x8,&UNK_1103683b0,&UNK_1103683b0,lVar4,uVar5,uVar1);
  if (unaff_x21 == 0) {
    uVar5 = 0x112d4b258;
    func_0x0001000285a8(0x112d4b258,&UNK_10d911d70);
    FUN_100f0e488(0x112d4b260,0x112d4b258,&UNK_10d911d70,0x100f0db18);
    func_0x000107c60508(&lStack_58,uVar5);
    (**(code **)(lVar6 + 8))(auStack_60 + -extraout_x8,lVar2);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
    lStack_58 = lVar3;
  }
  return lStack_58;
}



/* Entry: 100f0e448; end: 100f0e487;  */

void FUN_100f0e448(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b250 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911f40;
  func_0x000107c61520(&UNK_10d911f40,&UNK_1103683b0);
  puRam0000000112d4b250 = puVar1;
  return;
}



/* Entry: 100f0e488; end: 100f0e4ef;  */

void FUN_100f0e488(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puVar2 = PTR___sSayxGSesSeRzlMc_11034dd10;
    uStack_38 = uVar1;
    func_0x000107c61520(PTR___sSayxGSesSeRzlMc_11034dd10,param_2,&uStack_38);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 100f0e4f0; end: 100f0e52f;  */

void FUN_100f0e4f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b270 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911ef0;
  func_0x000107c61520(&UNK_10d911ef0,&UNK_110368320);
  puRam0000000112d4b270 = puVar1;
  return;
}



/* Entry: 100f0e530; end: 100f0e773;  */

int FUN_100f0e530(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100f0e5ac;
        goto LAB_100f0e590;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100f0e590:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_100f0e5ac:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 100f0e774; end: 100f0e7b3;  */

void FUN_100f0e774(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b278 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911e10;
  func_0x000107c61520(&UNK_10d911e10,&UNK_1103683b0);
  puRam0000000112d4b278 = puVar1;
  return;
}



/* Entry: 100f0e7b4; end: 100f0e7b7;  */

void FUN_100f0e7b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b280 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911ec8;
  func_0x000107c61520(&UNK_10d911ec8,&UNK_110368320);
  puRam0000000112d4b280 = puVar1;
  return;
}



/* Entry: 100f0e7b8; end: 100f0e7f7;  */

void FUN_100f0e7b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b280 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911ec8;
  func_0x000107c61520(&UNK_10d911ec8,&UNK_110368320);
  puRam0000000112d4b280 = puVar1;
  return;
}



/* Entry: 100f0e7f8; end: 100f0e7fb;  */

void FUN_100f0e7f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b288 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911e60;
  func_0x000107c61520(&UNK_10d911e60,&UNK_110368320);
  puRam0000000112d4b288 = puVar1;
  return;
}



/* Entry: 100f0e7fc; end: 100f0e83b;  */

void FUN_100f0e7fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b288 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911e60;
  func_0x000107c61520(&UNK_10d911e60,&UNK_110368320);
  puRam0000000112d4b288 = puVar1;
  return;
}



/* Entry: 100f0e83c; end: 100f0e83f;  */

void FUN_100f0e83c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b290 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911e38;
  func_0x000107c61520(&UNK_10d911e38,&UNK_110368320);
  puRam0000000112d4b290 = puVar1;
  return;
}



/* Entry: 100f0e840; end: 100f0e87f;  */

void FUN_100f0e840(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b290 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911e38;
  func_0x000107c61520(&UNK_10d911e38,&UNK_110368320);
  puRam0000000112d4b290 = puVar1;
  return;
}



/* Entry: 100f0e880; end: 100f0e883;  */

void FUN_100f0e880(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b298 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911da8;
  func_0x000107c61520(&UNK_10d911da8,&UNK_1103683b0);
  puRam0000000112d4b298 = puVar1;
  return;
}



/* Entry: 100f0e884; end: 100f0e8c3;  */

void FUN_100f0e884(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b298 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911da8;
  func_0x000107c61520(&UNK_10d911da8,&UNK_1103683b0);
  puRam0000000112d4b298 = puVar1;
  return;
}



/* Entry: 100f0e8c4; end: 100f0e8c7;  */

void FUN_100f0e8c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b2a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911d80;
  func_0x000107c61520(&UNK_10d911d80,&UNK_1103683b0);
  puRam0000000112d4b2a0 = puVar1;
  return;
}



/* Entry: 100f0e8c8; end: 100f0e907;  */

void FUN_100f0e8c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4b2a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911d80;
  func_0x000107c61520(&UNK_10d911d80,&UNK_1103683b0);
  puRam0000000112d4b2a0 = puVar1;
  return;
}



/* Entry: 100f0e908; end: 100f0e993;  */

undefined1 FUN_100f0e908(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 100f0e994; end: 100f0e99f; -[SCBitmojiFashionLensApiPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0e994(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4b2a8;
  func_0x000107c61428(param_1 + _DAT_112d4b2a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f0e9a0; end: 100f0e9ab; -[SCBitmojiFashionLensApiPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0e9a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4b2a8;
  func_0x000107c61428(param_1 + _DAT_112d4b2a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f0e9ac; end: 100f0e9b7; -[SCBitmojiFashionLensApiPluginEntryPoint fashionTrayPresenterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0e9ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4b2b0;
  func_0x000107c61428(param_1 + _DAT_112d4b2b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f0e9b8; end: 100f0e9c3; -[SCBitmojiFashionLensApiPluginEntryPoint setFashionTrayPresenterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0e9b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4b2b0;
  func_0x000107c61428(param_1 + _DAT_112d4b2b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f0e9c4; end: 100f0e9cf; -[SCBitmojiFashionLensApiPluginEntryPoint bitmojiFetchServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0e9c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4b2b8;
  func_0x000107c61428(param_1 + _DAT_112d4b2b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f0e9d0; end: 100f0e9db; -[SCBitmojiFashionLensApiPluginEntryPoint setBitmojiFetchServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0e9d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4b2b8;
  func_0x000107c61428(param_1 + _DAT_112d4b2b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f0e9dc; end: 100f0e9e7; -[SCBitmojiFashionLensApiPluginEntryPoint profileLensServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0e9dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4b2c0;
  func_0x000107c61428(param_1 + _DAT_112d4b2c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f0e9e8; end: 100f0ea2b;  */

void FUN_100f0e9e8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f0ea2c; end: 100f0ea37; -[SCBitmojiFashionLensApiPluginEntryPoint setProfileLensServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0ea2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4b2c0;
  func_0x000107c61428(param_1 + _DAT_112d4b2c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f0ea38; end: 100f0ea8b;  */

void FUN_100f0ea38(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f0ea8c; end: 100f0ebcb;  */

/* WARNING: Possible PIC construction at 0x000100f0eb38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f0eb48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f0eba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f0eb98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f0ebac) */
/* WARNING: Removing unreachable block (ram,0x000100f0eb4c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000100f0eb3c) */
/* WARNING: Removing unreachable block (ram,0x000100f0eb9c) */

void FUN_100f0ea8c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c42dfc();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3e9b4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c4f3b4();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        FUN_100f06a70(0);
        func_0x000107c613fc();
        FUN_100f06560(lVar1,lVar2,lVar3,unaff_x20);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100f0ebcc; end: 100f0ebf3; -[SCBitmojiFashionLensApiPluginEntryPoint begin] */

void FUN_100f0ebcc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f0ea8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f0ebf4; end: 100f0ec37; -[SCBitmojiFashionLensApiPluginEntryPoint end] */

void FUN_100f0ebf4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f0ec38; end: 100f0eea3;  */

void FUN_100f0ec38(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef10e6730)) ||
       (func_0x000107c605b8(0xd00000000000001c,0x800000010ef198d0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c548b4();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10e69b0)) ||
         (func_0x000107c605b8(0xd000000000000014,0x800000010ef19650,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52cf4();
      }
      else {
        if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10e6710)) {
          uVar2 = 0xd000000000000013;
          func_0x000107c605b8(0xd000000000000013,0x800000010ef198f0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "SCBitmojiFashionLensProcessingEntryPoint/SCBitmojiFashionLensApiPluginEntryPoint.swift"
                                ,0x56,2,0x31,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100f0eea4);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c578f0();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100f0eea4; end: 100f0ef4f; -[SCBitmojiFashionLensApiPluginEntryPoint setValue:forIvarName:] */

void FUN_100f0eea4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100f0ec38(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f0ef50; end: 100f0efeb; -[SCBitmojiFashionLensApiPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0ef50(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d4b2a8,0);
  func_0x000107c61614(param_1 + _DAT_112d4b2b0,0);
  func_0x000107c61614(param_1 + _DAT_112d4b2b8,0);
  func_0x000107c61614(param_1 + _DAT_112d4b2c0,0);
  *(undefined8 *)(param_1 + _DAT_112d4b2c8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f0efec; end: 100f0f01f;  */

void FUN_100f0efec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f0f020; end: 100f0f087; -[SCBitmojiFashionLensApiPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0f020(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4b2a8);
  func_0x000107c61610(param_1 + _DAT_112d4b2b0);
  func_0x000107c61610(param_1 + _DAT_112d4b2b8);
  func_0x000107c61610(param_1 + _DAT_112d4b2c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4b2c8));
  return;
}



/* Entry: 100f0f088; end: 100f0f0a7;  */

void FUN_100f0f088(void)

{
  func_0x000107c61168(&PTR_PTR_1127a04d0);
  return;
}



/* Entry: 100f0f0a8; end: 100f0f7ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100f0f0a8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  long param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  char *pcVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  func_0x000107c613fc();
  uVar2 = param_14;
  func_0x000107c5036c();
  func_0x000107c61180();
  uVar3 = param_17;
  func_0x000107c42294(param_17);
  func_0x000107c61180();
  uVar4 = param_12;
  func_0x000107c5e1e8(param_12);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126bd598;
  func_0x000107c610f8();
  func_0x000107c47bf4();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_13 + _DAT_113074f60);
  uVar14 = *(undefined8 *)(param_13 + _DAT_113074f68);
  func_0x000107c61174(uVar6);
  func_0x000107c4500c(uVar14);
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(param_13 + _DAT_113074f80);
  func_0x000107c61174(uVar7);
  uVar3 = param_15;
  func_0x000107c41964(param_15);
  func_0x000107c61180();
  uVar4 = param_12;
  func_0x000107c5e1e8();
  func_0x000107c61180();
  lVar8 = param_2;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar8 != 0) {
    uVar9 = 0;
    FUN_100f0fae8(0,0x112d4b2f8,&PTR_PTR_1126bd5a0);
    FUN_100f0fae8(0,0x112d4b300,&PTR_PTR_1126bd598);
    func_0x000107c614e8();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c610f8();
    func_0x000107c45bf0();
    func_0x000107c61170(uVar6);
    func_0x000107c615e8(uVar14);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(lVar8);
    *(undefined8 *)(unaff_x20 + 0x10) = param_1;
    puVar10 = PTR_PTR_1126ae560;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c453e4();
    uVar3 = param_4;
    func_0x000107c5dbd4();
    func_0x000107c61180();
    puVar11 = &UNK_110368568;
    func_0x000107c613fc(&UNK_110368568,0x80,7);
    *(undefined8 *)(puVar11 + 0x10) = param_1;
    *(undefined8 *)(puVar11 + 0x18) = param_3;
    *(undefined8 *)(puVar11 + 0x20) = param_6;
    *(undefined8 *)(puVar11 + 0x28) = param_9;
    *(undefined8 *)(puVar11 + 0x30) = param_10;
    *(undefined8 *)(puVar11 + 0x38) = param_11;
    *(undefined8 *)(puVar11 + 0x40) = param_8;
    *(undefined8 *)(puVar11 + 0x48) = param_7;
    *(undefined8 *)(puVar11 + 0x50) = uVar9;
    *(undefined8 *)(puVar11 + 0x58) = param_5;
    *(long *)(puVar11 + 0x60) = param_2;
    *(undefined8 *)(puVar11 + 0x68) = param_18;
    *(undefined8 *)(puVar11 + 0x70) = param_19;
    *(undefined **)(puVar11 + 0x78) = puVar10;
    pcStack_78 = FUN_100f0fb28;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    pcStack_88 = FUN_100f0f800;
    puStack_80 = &UNK_110368580;
    ppuVar12 = &puStack_98;
    puStack_70 = puVar11;
    func_0x000107c60bc4(ppuVar12);
    puVar11 = puStack_70;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174(param_9);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174(param_7);
    func_0x000107c61174(uVar9);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_18);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61574(puVar11);
    pcVar13 = 
    "init(beginIn:circumstanceEngineServices:composerCoreUIServices:valdiRuntimeServices:composerNetworkingBridgeServices:lensProcessingFactory:cameraAdaptorPermissionRequesterServices:cameraAdaptorPreviewViewProviderServices:bitmojiFetchServices:bitmojiSelfieServices:bitmojiGlbServices:bitmojiMetricsServices:cameraHardwareServices:captureRequestHandlerServices:cameraDeviceSettingsResolverServices:contentDeliveryServices:resourceDownloaderServices:bitmojiAvatarBuilderLensScopeExposer:bitmojiAvatarBuilderLensScopeServices:)"
    ;
    func_0x0001000c10c0(
                       "init(beginIn:circumstanceEngineServices:composerCoreUIServices:valdiRuntimeServices:composerNetworkingBridgeServices:lensProcessingFactory:cameraAdaptorPermissionRequesterServices:cameraAdaptorPreviewViewProviderServices:bitmojiFetchServices:bitmojiSelfieServices:bitmojiGlbServices:bitmojiMetricsServices:cameraHardwareServices:captureRequestHandlerServices:cameraDeviceSettingsResolverServices:contentDeliveryServices:resourceDownloaderServices:bitmojiAvatarBuilderLensScopeExposer:bitmojiAvatarBuilderLensScopeServices:)"
                       );
    func_0x000107c61180();
    func_0x000107c44288(uVar3);
    func_0x000107c615e8(pcVar13);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c615e8(uVar3);
    puVar11 = puVar10;
    func_0x000107c43bf4();
    func_0x000107c61180();
    *(undefined **)(unaff_x20 + 0x18) = puVar11;
    func_0x000107c4edc4(uVar9);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_16);
    func_0x000107c61170(param_17);
    func_0x000107c61170(param_18);
    func_0x000107c61170(param_19);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(puVar10);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f0f5f4);
  (*pcVar1)();
}



/* Entry: 100f0f800; end: 100f0f91b;  */

void FUN_100f0f800(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 100f0f91c; end: 100f0f993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0f91c(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    if (param_1 != 0) {
      func_0x000107c3e2c0(*(undefined8 *)(*(long *)(param_3 + 0x10) + _DAT_112ff7680));
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 100f0f994; end: 100f0fa0b;  */

/* WARNING: Possible PIC construction at 0x000100f0f9f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f0f9f4) */

void FUN_100f0f994(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 100f0fa0c; end: 100f0fa37;  */

void FUN_100f0fa0c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100f0fa38; end: 100f0fa57;  */

void FUN_100f0fa38(void)

{
  func_0x000100f0f848();
  return;
}



/* Entry: 100f0fa58; end: 100f0fa5f;  */

undefined8 FUN_100f0fa58(void)

{
  return 0;
}



/* Entry: 100f0fa60; end: 100f0fae7;  */

void FUN_100f0fa60(void)

{
  undefined8 in_stack_00000008;
  
  func_0x000107c614e8(in_stack_00000008);
  func_0x000107c610f8();
                    /* WARNING: Could not recover jumptable at 0x00010bffb5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 100f0fae8; end: 100f0fb27;  */

void FUN_100f0fae8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 100f0fb28; end: 100f0fb47;  */

void FUN_100f0fb28(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000100f0f5f4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 100f0fb48; end: 100f0fc1b;  */

void FUN_100f0fb48(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100f0fc1c; end: 100f0fc23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0fc1c(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if (param_1 != 0) {
      func_0x000107c3e2c0(*(undefined8 *)(*(long *)(lVar1 + 0x10) + _DAT_112ff7680));
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 100f0fc24; end: 100f0fc93;  */

void FUN_100f0fc24(void)

{
  func_0x000107c61168(&PTR_PTR_112d4b348);
  return;
}



/* Entry: 100f0fc94; end: 100f0fc9b;  */

void FUN_100f0fc94(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100f0fc9c; end: 100f0fcdb; -[_TtC27BitmojiCreateFlowEntryPointP33_08EC067D9C56AE7BDC98D7266122B9B637NativeBitmojiAvatarBuilderServiceStub init] */

void FUN_100f0fc9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  FUN_100f0fcec();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f0fcdc; end: 100f0fceb;  */

void FUN_100f0fcdc(void)

{
  FUN_100f0fcec();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f0fcec; end: 100f0fd0b;  */

void FUN_100f0fcec(void)

{
  func_0x000107c61168(&PTR_PTR_1127a05a8);
  return;
}



/* Entry: 100f0fd0c; end: 100f0ff77;  */

void FUN_100f0fd0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar2 = &puStack_80;
  puVar1 = &UNK_110368a80;
  func_0x000107c613fc(&UNK_110368a80,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  uStack_60 = 0x100f1169c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110368a98;
  puStack_58 = puVar1;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c61434(param_2);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_3);
  func_0x000107c61574(puVar1);
  func_0x000100162d98(&UNK_10d912050,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100f0ff78; end: 100f1010f;  */

undefined * FUN_100f0ff78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar6 = &puStack_80;
  puVar2 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c3f56c();
  func_0x000107c61180();
  puVar3 = &UNK_1103688f0;
  func_0x000107c613fc(&UNK_1103688f0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0x100f11650;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = (undefined *)0x100f10384;
  puStack_68 = &UNK_110368908;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61174(puVar2);
  func_0x000107c61574(puVar3);
  uVar5 = param_2;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_2);
  puVar3 = &UNK_110368940;
  func_0x000107c613fc(&UNK_110368940,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  uStack_60 = 0x100f11658;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110368958;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61174(uVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c53164(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c60bd0(ppuVar6);
  return puVar2;
}



/* Entry: 100f10110; end: 100f1032b;  */

void FUN_100f10110(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  puVar3 = &UNK_110368990;
  func_0x000107c613fc(&UNK_110368990,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  puVar4 = &UNK_1103689b8;
  func_0x000107c613fc(&UNK_1103689b8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x100f11660;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_100f11674;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x100f11718;
  puStack_88 = &UNK_1103689d0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_110368a08;
  func_0x000107c613fc(&UNK_110368a08,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  puVar7 = &UNK_110368a30;
  func_0x000107c613fc(&UNK_110368a30,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_100f11694;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_80 = (code *)0x100f1170c;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  uStack_90 = 0x100e27b38;
  puStack_88 = &UNK_110368a48;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c61174(param_2);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x6a,0x56,0x21,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100f10328);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x6a,0x59,0x1c,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100f1032c);
  (*pcVar2)();
}



/* Entry: 100f1032c; end: 100f103cf;  */

void FUN_100f1032c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    func_0x000107c614b0();
    lVar1 = param_1;
    func_0x000107c5ed2c(param_1);
    func_0x000107c43b70(param_2);
    func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_1);
    return;
  }
  return;
}



/* Entry: 100f103d0; end: 100f1049b;  */

void FUN_100f103d0(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_1103688a0;
  func_0x000107c613fc(&UNK_1103688a0,0x28,7);
  puVar1[0x10] = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  pcStack_50 = FUN_100f11640;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1103688b8;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_3);
  func_0x000107c61574(puVar1);
  func_0x000100162d98(&UNK_10d912050,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100f1049c; end: 100f10503;  */

void FUN_100f1049c(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if ((param_2 & 1) == 0) {
    func_0x000107c5be10(param_3);
  }
  else {
    func_0x000107c5ba88(param_3);
    param_1 = 0x3ff0000000000000;
  }
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c52e54(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100f10504; end: 100f10507;  */

void FUN_100f10504(void)

{
  return;
}



/* Entry: 100f10508; end: 100f1054f;  */

void FUN_100f10508(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 100f10550; end: 100f10c53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f10550(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,undefined8 param_8,long param_9)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [32];
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_3 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (param_4 == 0) {
        func_0x000107c615e8(param_2);
        param_2 = param_3;
      }
      else {
        func_0x000107c5c734();
        func_0x000107c61180();
        if (param_5 == 0) {
          func_0x000107c615e8(param_2);
          func_0x000107c615e8(param_3);
          param_2 = param_4;
        }
        else {
          func_0x000107c5c734();
          func_0x000107c61180();
          if (param_6 == 0) {
            func_0x000107c615e8(param_2);
            func_0x000107c615e8(param_3);
            func_0x000107c615e8(param_4);
            param_2 = param_5;
          }
          else {
            func_0x000107c61428(param_7 + 0x10,auStack_a0,0,0);
            param_7 = param_7 + 0x10;
            func_0x000107c61618();
            if (param_7 != 0) {
              puVar3 = PTR_PTR_1126afcc0;
              func_0x000107c610f8();
              func_0x000107c4842c();
              func_0x000107c561c0();
              lVar4 = param_5;
              func_0x000107c4a6e0();
              puVar5 = &UNK_1103686e8;
              uVar16 = 0x18;
              func_0x000107c613fc(&UNK_1103686e8,0x18,7);
              *(long *)(puVar5 + 0x10) = param_7;
              pcStack_b0 = (code *)0x100f115b8;
              puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_c8 = 0x42000000;
              pcStack_c0 = (code *)0x100f11714;
              puStack_b8 = &UNK_110368700;
              ppuVar6 = &puStack_d0;
              puStack_a8 = puVar5;
              func_0x000107c60bc4(ppuVar6);
              puVar5 = puStack_a8;
              func_0x000107c61174();
              func_0x000107c61574(puVar5);
              lVar7 = param_6;
              func_0x000107c4c1e8();
              func_0x000107c61180();
              func_0x000107c60bd0(ppuVar6);
              puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
              func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
              func_0x000107c4c194();
              func_0x000107c61180();
              func_0x000107c3ec84();
              func_0x000107c61170(puVar5);
              uVar17 = *(undefined8 *)PTR__UIWindowLevelNormal_110345e88;
              puVar5 = PTR_PTR_1126b1c10;
              func_0x000107c610f8(PTR_PTR_1126b1c10);
              func_0x000107c495dc(uVar17);
              lVar8 = param_2;
              func_0x000107c4c1e0();
              func_0x000107c61180();
              func_0x000107c61170(puVar5);
              uVar17 = 0;
              FUN_100f0fcec();
              func_0x000107c610f8();
              func_0x000107c453e4();
              lVar9 = *(long *)(param_9 + _DAT_112ff7678);
              func_0x000107c3125c();
              func_0x000107c61180();
              if (lVar9 != 0) {
                lVar10 = lVar9;
                func_0x000107c5faec();
                func_0x000107c61170(lVar9);
                puVar5 = &UNK_110368738;
                func_0x000107c613fc(&UNK_110368738,0x30,7);
                *(long *)(puVar5 + 0x10) = param_9;
                *(undefined8 *)(puVar5 + 0x18) = in_stack_00000010;
                *(undefined8 *)(puVar5 + 0x20) = in_stack_00000018;
                *(undefined8 *)(puVar5 + 0x28) = in_stack_00000028;
                puVar11 = &UNK_110368760;
                func_0x000107c613fc(&UNK_110368760,0x18,7);
                *(undefined8 *)(puVar11 + 0x10) = in_stack_00000020;
                puVar12 = &UNK_110368788;
                func_0x000107c613fc(&UNK_110368788,0x20,7);
                *(undefined8 *)(puVar12 + 0x10) = in_stack_00000020;
                *(undefined8 *)(puVar12 + 0x18) = param_1;
                puVar13 = PTR_PTR_1126a5f10;
                func_0x000107c610f8();
                func_0x000107c61174(in_stack_00000020);
                func_0x000107c61174();
                func_0x000107c61174(param_9);
                func_0x000107c61174(in_stack_00000010);
                func_0x000107c61174(in_stack_00000018);
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c615f0(param_3);
                func_0x000107c615f0(lVar7);
                func_0x000107c5fadc(lVar10,uVar16);
                func_0x000107c6142c(uVar16);
                puVar1 = PTR___NSConcreteStackBlock_11034bd00;
                pcStack_b0 = (code *)0x100f115c0;
                puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_c8 = 0x42000000;
                pcStack_c0 = FUN_100f11160;
                puStack_b8 = &UNK_1103687a0;
                ppuVar14 = &puStack_d0;
                puStack_a8 = puVar5;
                func_0x000107c60bc4();
                uStack_e0 = 0x100f115cc;
                puStack_100 = puVar1;
                uStack_f8 = 0x42000000;
                uStack_f0 = 0x100f111c4;
                puStack_e8 = &UNK_1103687c8;
                ppuVar6 = &puStack_100;
                puStack_d8 = puVar11;
                func_0x000107c60bc4();
                uStack_110 = 0x100f115d4;
                puStack_130 = puVar1;
                uStack_128 = 0x42000000;
                puStack_120 = &UNK_100288f10;
                puStack_118 = &UNK_1103687f0;
                ppuVar15 = &puStack_130;
                puStack_108 = puVar12;
                func_0x000107c60bc4();
                func_0x000107c479f0(puVar13);
                func_0x000107c61170(puVar3);
                func_0x000107c615e8(lVar8);
                func_0x000107c61170(uVar17);
                func_0x000107c615e8(param_3);
                func_0x000107c615e8(lVar7);
                func_0x000107c60bd0(ppuVar15);
                func_0x000107c60bd0(ppuVar6);
                func_0x000107c60bd0(ppuVar14);
                func_0x000107c61170(lVar10);
                func_0x000107c61574(puStack_108);
                func_0x000107c61574(puStack_d8);
                func_0x000107c61574(puStack_a8);
                puVar5 = PTR_PTR_1126bd630;
                func_0x000107c610f8(PTR_PTR_1126bd630);
                func_0x000107c46828();
                uVar17 = param_8;
                func_0x0001056ff5dc(param_8,puVar5);
                func_0x000107c61180();
                func_0x000107c52af0(puVar13);
                func_0x000107c615e8(uVar17);
                if ((int)lVar4 != 0) {
                  puVar11 = &UNK_110368828;
                  func_0x000107c613fc(&UNK_110368828,0x18,7);
                  *(long *)(puVar11 + 0x10) = param_4;
                  puVar12 = PTR___NSConcreteStackBlock_11034bd00;
                  pcStack_b0 = (code *)0x100f115e0;
                  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_c8 = 0x42000000;
                  pcStack_c0 = (code *)0x100f11710;
                  puStack_b8 = &UNK_110368840;
                  ppuVar6 = &puStack_d0;
                  puStack_a8 = puVar11;
                  func_0x000107c60bc4(ppuVar6);
                  puVar11 = puStack_a8;
                  func_0x000107c615f0(param_4);
                  func_0x000107c61574(puVar11);
                  pcStack_b0 = FUN_100f10504;
                  puStack_a8 = (undefined *)0x0;
                  puStack_d0 = puVar12;
                  uStack_c8 = 0x42000000;
                  pcStack_c0 = FUN_100f10508;
                  puStack_b8 = &UNK_110368868;
                  ppuVar15 = &puStack_d0;
                  func_0x000107c60bc4(ppuVar15);
                  func_0x000100f115fc(0);
                  func_0x000107c614e8();
                  func_0x000107c4c214(param_8);
                  func_0x000107c61180();
                  func_0x000107c60bd0(ppuVar15);
                  func_0x000107c60bd0(ppuVar6);
                  func_0x000107c53124(puVar13);
                  func_0x000107c615e8(param_8);
                }
                func_0x000107c61170(puVar5);
                func_0x000107c615e8(lVar7);
                func_0x000107c610f8(PTR_PTR_1126a5f18);
                func_0x000107c49520();
                func_0x000107c61170(puVar3);
                func_0x000107c61170(param_7);
                func_0x000107c615e8(param_5);
                func_0x000107c615e8(param_6);
                func_0x000107c615e8(param_4);
                func_0x000107c615e8(param_3);
                func_0x000107c615e8(param_2);
                func_0x000107c61170(puVar13);
                return;
              }
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100f10c54);
              (*pcVar2)();
            }
            func_0x000107c615e8(param_2);
            func_0x000107c615e8(param_3);
            func_0x000107c615e8(param_4);
            func_0x000107c615e8(param_5);
            param_2 = param_6;
          }
        }
      }
    }
    func_0x000107c615e8(param_2);
  }
  return;
}



/* Entry: 100f10c54; end: 100f10ce7;  */

long FUN_100f10c54(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c4f078();
  func_0x000107c61180();
  while (lVar1 != 0) {
    func_0x000107c61170(param_1);
    lVar2 = lVar1;
    func_0x000107c4f078();
    func_0x000107c61180();
    param_1 = lVar1;
    lVar1 = lVar2;
  }
  return param_1;
}



/* Entry: 100f10ce8; end: 100f10d8b; -[_TtC27BitmojiCreateFlowEntryPoint31BitmojiCreateFlowViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f10ce8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  
  *(undefined8 *)(param_1 + _DAT_112d4b3e0) = 0;
  lVar2 = _DAT_112d4b3e8;
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar2) = puVar4;
  *(undefined8 *)(param_1 + _DAT_112d4b3f0) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112d4b3f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001d,0x800000010ef19c10,
                      "BitmojiCreateFlowEntryPoint/BitmojiCreateFlowViewController.swift",0x41,2,
                      0xdd,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100f10d8c);
  (*pcVar3)();
}



/* Entry: 100f10d8c; end: 100f10de3; -[_TtC27BitmojiCreateFlowEntryPoint31BitmojiCreateFlowViewController loadView] */

/* WARNING: Possible PIC construction at 0x000100f10dd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f10dd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f10d8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d4b3e0);
  func_0x000107c61174();
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c5a568(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100f10de4; end: 100f10df7; -[_TtC27BitmojiCreateFlowEntryPoint31BitmojiCreateFlowViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f10de4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  FUN_100f10f7c();
  puVar1 = PTR_s_viewDidAppear__112684bd0;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_60,puVar1,param_3);
  *(undefined8 *)(param_1 + _DAT_112d4b3f0) = 1;
  pcVar4 = *(code **)(param_1 + _DAT_112d4b3f8);
  if (pcVar4 != (code *)0x0) {
    uVar3 = ((undefined8 *)(param_1 + _DAT_112d4b3f8))[1];
    func_0x000107c6157c(uVar3);
    (*pcVar4)(0x3ff0000000000000);
    FUN_100f11134(pcVar4,uVar3);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100f10df8; end: 100f10e0b; -[_TtC27BitmojiCreateFlowEntryPoint31BitmojiCreateFlowViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f10df8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  FUN_100f10f7c();
  puVar1 = PTR_s_viewDidDisappear__112684c48;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_60,puVar1,param_3);
  *(undefined8 *)(param_1 + _DAT_112d4b3f0) = 0;
  pcVar4 = *(code **)(param_1 + _DAT_112d4b3f8);
  if (pcVar4 != (code *)0x0) {
    uVar3 = ((undefined8 *)(param_1 + _DAT_112d4b3f8))[1];
    func_0x000107c6157c(uVar3);
    (*pcVar4)(0);
    FUN_100f11134(pcVar4,uVar3);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100f10e0c; end: 100f10ec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f10e0c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_2;
  FUN_100f10f7c();
  uVar3 = *param_5;
  lStack_60 = param_2;
  lStack_58 = lVar1;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_60,uVar3,param_4);
  *(undefined8 *)(param_2 + _DAT_112d4b3f0) = param_6;
  pcVar2 = *(code **)(param_2 + _DAT_112d4b3f8);
  if (pcVar2 != (code *)0x0) {
    uVar3 = ((undefined8 *)(param_2 + _DAT_112d4b3f8))[1];
    func_0x000107c6157c(uVar3);
    (*pcVar2)(param_1);
    FUN_100f11134(pcVar2,uVar3);
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100f10ec8; end: 100f10ef3; -[_TtC27BitmojiCreateFlowEntryPoint31BitmojiCreateFlowViewController initWithNibName:bundle:] */

void FUN_100f10ec8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiCreateFlowEntryPoint.BitmojiCreateFlowViewController",0x3b,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f10ef4);
  (*pcVar1)();
}



/* Entry: 100f10ef4; end: 100f10eff;  */

void FUN_100f10ef4(void)

{
  FUN_100f10f7c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f10f00; end: 100f10f2f;  */

void FUN_100f10f00(undefined8 param_1,code *param_2)

{
  (*param_2)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f10f30; end: 100f10f7b; -[_TtC27BitmojiCreateFlowEntryPoint31BitmojiCreateFlowViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f10f30(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4b3e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4b3e8));
  if (*(long *)(param_1 + _DAT_112d4b3f8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112d4b3f8))[1]);
    return;
  }
  return;
}



/* Entry: 100f10f7c; end: 100f10f9b;  */

void FUN_100f10f7c(void)

{
  func_0x000107c61168(&PTR_PTR_1127a0658);
  return;
}



/* Entry: 100f10f9c; end: 100f11033;  */

/* WARNING: Possible PIC construction at 0x000100f10fd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f10fd4) */
/* WARNING: Removing unreachable block (ram,0x000100f11020) */
/* WARNING: Removing unreachable block (ram,0x000100f10fdc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f10f9c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112d4b3f8);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  *plVar1 = param_1;
  plVar1[1] = param_2;
  func_0x000100f11150();
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar3);
    return;
  }
  return;
}



/* Entry: 100f11034; end: 100f110bf; -[_TtC27BitmojiCreateFlowEntryPoint31BitmojiCreateFlowViewController setPageVisibilityObserver:] */

void FUN_100f11034(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uVar2 = 0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_110368648;
    func_0x000107c613fc(&UNK_110368648,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    uVar2 = 0x100f11144;
  }
  func_0x000107c61174(param_1);
  FUN_100f10f9c(uVar2,puVar1);
  FUN_100f11134(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f110c0; end: 100f1110f;  */

undefined * FUN_100f110c0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c42538();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 100f11110; end: 100f11133; +[SCBridgeObservable empty] */

void FUN_100f11110(void)

{
  func_0x000107c614ec();
  FUN_100f110c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f11134; end: 100f1115f;  */

void FUN_100f11134(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 100f11160; end: 100f1120b;  */

void FUN_100f11160(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    param_2 = 0;
    lVar3 = 0;
  }
  else {
    lVar3 = param_2;
    func_0x000107c5faec(param_2);
  }
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,lVar3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar3);
  return;
}



/* Entry: 100f1120c; end: 100f11557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100f1120c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar3 = param_1;
  FUN_100f10f7c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112d4b3e0) = 0;
  lVar2 = _DAT_112d4b3e8;
  puVar5 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar4 + lVar2) = puVar5;
  *(undefined8 *)(lVar4 + _DAT_112d4b3f0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d4b3f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  plVar6 = &lStack_78;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  func_0x000107c61154(plVar6,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar5 = &UNK_110368670;
  func_0x000107c613fc(&UNK_110368670,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,plVar6);
  puVar8 = &UNK_110368698;
  func_0x000107c613fc(&UNK_110368698,0x90,7);
  *(undefined8 *)(puVar8 + 0x10) = param_3;
  *(undefined8 *)(puVar8 + 0x18) = param_11;
  *(undefined8 *)(puVar8 + 0x20) = param_8;
  *(undefined8 *)(puVar8 + 0x28) = param_9;
  *(undefined8 *)(puVar8 + 0x30) = param_15;
  *(undefined **)(puVar8 + 0x38) = puVar5;
  *(undefined8 *)(puVar8 + 0x40) = param_2;
  *(long *)(puVar8 + 0x48) = param_1;
  *(undefined8 *)(puVar8 + 0x50) = param_7;
  *(undefined8 *)(puVar8 + 0x58) = param_12;
  *(undefined8 *)(puVar8 + 0x60) = param_5;
  *(undefined8 *)(puVar8 + 0x68) = param_6;
  *(undefined8 *)(puVar8 + 0x70) = param_10;
  *(undefined8 *)(puVar8 + 0x78) = param_13;
  *(undefined8 *)(puVar8 + 0x80) = param_14;
  *(undefined8 *)(puVar8 + 0x88) = param_4;
  pcStack_88 = FUN_100f11558;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  uStack_98 = 0x100f11710;
  puStack_90 = &UNK_1103686b0;
  ppuVar9 = &puStack_a8;
  puStack_80 = puVar8;
  func_0x000107c60bc4();
  puVar5 = puStack_80;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c615f0(param_12);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_4);
  func_0x000107c61574(puVar5);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c615e8(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c60bd0(ppuVar9);
  uVar10 = *(undefined8 *)((long)plVar6 + _DAT_112d4b3e0);
  *(undefined **)((long)plVar6 + _DAT_112d4b3e0) = puVar7;
  func_0x000107c61170(plVar6);
  func_0x000107c61170(uVar10);
  return plVar6;
}



/* Entry: 100f11558; end: 100f1159b;  */

void FUN_100f11558(void)

{
  long unaff_x20;
  
  FUN_100f10550(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 100f1159c; end: 100f115df;  */

void FUN_100f1159c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100f115e0; end: 100f1163f;  */

void FUN_100f115e0(void)

{
  long unaff_x20;
  
  func_0x000107c43da4(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 100f11640; end: 100f11673;  */

void FUN_100f11640(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  if ((*(byte *)(unaff_x20 + 0x10) & 1) == 0) {
    func_0x000107c5be10(*(undefined8 *)(unaff_x20 + 0x18));
  }
  else {
    func_0x000107c5ba88(*(undefined8 *)(unaff_x20 + 0x18));
    uVar2 = 0x3ff0000000000000;
  }
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c52e54(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100f11674; end: 100f11693;  */

void FUN_100f11674(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100f11694; end: 100f1171b;  */

void FUN_100f11694(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    func_0x000107c614b0();
    lVar1 = param_1;
    func_0x000107c5ed2c(param_1);
    func_0x000107c43b70(uVar2);
    func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_1);
    return;
  }
  return;
}


