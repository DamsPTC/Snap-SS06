/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100e80f64; end: 100e80f87;  */

void FUN_100e80f64(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100e7e4c0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 100e80f88; end: 100e80fb3;  */

void FUN_100e80f88(void)

{
  FUN_100e810c8(0x112d44610,0x112d44618,&UNK_10d909da0);
  return;
}



/* Entry: 100e80fb4; end: 100e80fb7;  */

void FUN_100e80fb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d44620 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d909de0;
  func_0x000107c61520(&UNK_10d909de0,&UNK_11035d1a8);
  puRam0000000112d44620 = puVar1;
  return;
}



/* Entry: 100e80fb8; end: 100e80ff7;  */

void FUN_100e80fb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d44620 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d909de0;
  func_0x000107c61520(&UNK_10d909de0,&UNK_11035d1a8);
  puRam0000000112d44620 = puVar1;
  return;
}



/* Entry: 100e80ff8; end: 100e8100b;  */

void FUN_100e80ff8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x100e7e7d0)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_100e81038();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 100e8100c; end: 100e81037;  */

void FUN_100e8100c(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 100e81038; end: 100e81077;  */

void FUN_100e81038(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d44628 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d909e9c;
  func_0x000107c61520(&DAT_10d909e9c,&UNK_11035d1a8);
  puRam0000000112d44628 = puVar1;
  return;
}



/* Entry: 100e81078; end: 100e8109b;  */

void FUN_100e81078(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100e7e790();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 100e8109c; end: 100e810c7;  */

void FUN_100e8109c(void)

{
  FUN_100e810c8(0x112d44630,0x112d44638,&UNK_10d909ec8);
  return;
}



/* Entry: 100e810c8; end: 100e8110b;  */

void FUN_100e810c8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 100e8110c; end: 100e8113f;  */

void FUN_100e8110c(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_28,0,0);
  func_0x000107c61434(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100e81140; end: 100e81167;  */

void FUN_100e81140(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100e80a78();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100e81168; end: 100e81183;  */

void FUN_100e81168(undefined8 param_1,undefined8 param_2)

{
  FUN_100e80804(param_1,param_2,&PTR_DAT_11035ce88);
  return;
}



/* Entry: 100e81184; end: 100e8159f;  */

void FUN_100e81184(void)

{
  return;
}



/* Entry: 100e815a0; end: 100e81637;  */

void FUN_100e815a0(void)

{
  FUN_100e80bd8();
  return;
}



/* Entry: 100e81638; end: 100e81667;  */

void FUN_100e81638(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  (**(code **)(*unaff_x20 + 0x1a0))();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return;
}



/* Entry: 100e81668; end: 100e8169b;  */

void FUN_100e81668(undefined8 *param_1)

{
  long *unaff_x20;
  
  (**(code **)(*unaff_x20 + 0xf8))(*param_1,param_1[1]);
  return;
}



/* Entry: 100e8169c; end: 100e81b77;  */

void FUN_100e8169c(void)

{
  undefined1 *unaff_x20;
  
  FUN_100e7dd40(*unaff_x20);
  return;
}



/* Entry: 100e81b78; end: 100e81c1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100e81b78(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d44d48;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d44d48);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c61180();
    func_0x000107c53840();
    func_0x000107c52e44(0,0,0x4044000000000000,0x4044000000000000,puVar3);
    func_0x000107c61170(puVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 100e81c20; end: 100e81d83;  */

undefined * FUN_100e81c20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = PTR_PTR_1126aec40;
  func_0x000107c61168(PTR_PTR_1126aec40);
  func_0x000107c3ee98();
  func_0x000107c61180();
  func_0x000107c59a2c();
  func_0x000107c544f8(puVar1);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c59e1c(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c59e34(puVar1);
  puVar2 = &UNK_11035d2f8;
  func_0x000107c613fc(&UNK_11035d2f8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_50 = FUN_100e822fc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uVar4 = 0x42000000;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11035d310;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c56ea0(puVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61174(puVar1);
  func_0x000107c498ec();
  func_0x000107c52e44(0,0,uVar4,0x4049000000000000,puVar1);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 100e81d84; end: 100e81deb;  */

long FUN_100e81d84(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar2 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar2);
  lVar3 = lVar1;
  if (lVar1 == 0) {
    FUN_100e81c20(param_2,param_3,param_4);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
    *(long *)(unaff_x20 + lVar2) = param_2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar1 = 0;
    lVar3 = param_2;
  }
  func_0x000107c61174(lVar1);
  return lVar3;
}



/* Entry: 100e81dec; end: 100e820db;  */

/* WARNING: Possible PIC construction at 0x000100e81e44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e81e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e81f04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e81f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e81fa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e8204c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e81ff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e82018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e8206c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e820c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e82070) */
/* WARNING: Removing unreachable block (ram,0x000100e8201c) */
/* WARNING: Removing unreachable block (ram,0x000100e81ff8) */
/* WARNING: Removing unreachable block (ram,0x000100e82058) */
/* WARNING: Removing unreachable block (ram,0x000100e8205c) */
/* WARNING: Removing unreachable block (ram,0x000100e81ffc) */
/* WARNING: Removing unreachable block (ram,0x000100e82050) */
/* WARNING: Removing unreachable block (ram,0x000100e81fa4) */
/* WARNING: Removing unreachable block (ram,0x000100e81f80) */
/* WARNING: Removing unreachable block (ram,0x000100e82038) */
/* WARNING: Removing unreachable block (ram,0x000100e8203c) */
/* WARNING: Removing unreachable block (ram,0x000100e81f84) */
/* WARNING: Removing unreachable block (ram,0x000100e81f08) */
/* WARNING: Removing unreachable block (ram,0x000100e81fa8) */
/* WARNING: Removing unreachable block (ram,0x000100e81f24) */
/* WARNING: Removing unreachable block (ram,0x000100e82020) */
/* WARNING: Removing unreachable block (ram,0x000107c55258) */
/* WARNING: Removing unreachable block (ram,0x00010c1a9f00) */
/* WARNING: Removing unreachable block (ram,0x000100e81f2c) */
/* WARNING: Removing unreachable block (ram,0x000100e81e80) */
/* WARNING: Removing unreachable block (ram,0x000100e81ecc) */
/* WARNING: Removing unreachable block (ram,0x000100e81ea0) */
/* WARNING: Removing unreachable block (ram,0x000100e81eec) */
/* WARNING: Removing unreachable block (ram,0x000100e81e48) */
/* WARNING: Removing unreachable block (ram,0x000100e820c4) */
/* WARNING: Removing unreachable block (ram,0x000100e820c8) */

void FUN_100e81dec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c5d200();
  func_0x000107c61180();
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c59e44(unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 100e820dc; end: 100e82153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e820dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112d44d40;
    func_0x000107c61618();
    if (lVar1 != 0) {
      FUN_100e886fc(param_1);
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 100e82154; end: 100e82217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100e82154(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  lVar1 = unaff_x20 + _DAT_112d44d40;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d44d48) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d44d50) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d44d58) = 0;
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c(param_2);
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_initWithReuseIdentifier__1125eda10,param_1);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 100e82218; end: 100e8224f; -[_TtC26SCConnectedAccountsFeature20ConnectedAccountCell initWithReuseIdentifier:] */

void FUN_100e82218(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x000107c5faec(param_3);
  }
  FUN_100e82154();
  return;
}



/* Entry: 100e82250; end: 100e82283;  */

void FUN_100e82250(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e82284; end: 100e822db; -[_TtC26SCConnectedAccountsFeature20ConnectedAccountCell .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100e822b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e822b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e82284(long param_1)

{
  FUN_100e82320(param_1 + _DAT_112d44d40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d44d48));
  return;
}



/* Entry: 100e822dc; end: 100e822fb;  */

void FUN_100e822dc(void)

{
  func_0x000107c61168(&PTR_PTR_11279c5d0);
  return;
}



/* Entry: 100e822fc; end: 100e8231f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e822fc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112d44d40;
    func_0x000107c61618();
    if (lVar2 != 0) {
      FUN_100e886fc(lVar1);
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100e82320; end: 100e82343;  */

undefined8 FUN_100e82320(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100e82344; end: 100e8234b;  */

void FUN_100e82344(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 100e8234c; end: 100e82387;  */

undefined8 * FUN_100e8234c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100e82388; end: 100e823e3;  */

undefined8 * FUN_100e82388(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Entry: 100e823e4; end: 100e82427;  */

undefined8 * FUN_100e823e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Entry: 100e82428; end: 100e824c3;  */

int FUN_100e82428(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100e824c4; end: 100e82537;  */

byte FUN_100e824c4(int *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  
  if (*param_1 == *param_2) {
    uVar3 = *(ulong *)(param_1 + 2);
    bVar2 = *(byte *)(param_1 + 6);
    bVar1 = *(byte *)(param_2 + 6);
    if ((uVar3 == *(ulong *)(param_2 + 2) && *(long *)(param_1 + 4) == *(long *)(param_2 + 4)) ||
       (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
      bVar2 = bVar2 ^ bVar1 ^ 1;
    }
    else {
      bVar2 = 0;
    }
    return bVar2;
  }
  return 0;
}



/* Entry: 100e82538; end: 100e82667;  */

/* WARNING: Possible PIC construction at 0x000100e82574: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e82578) */

long FUN_100e82538(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = *param_2;
  lVar4 = param_2[1];
  if ((lVar1 == lVar3 && lVar2 == lVar4) &&
     (lVar1 = param_1[2], lVar2 = param_1[3], lVar3 = param_2[2], lVar4 = param_2[3],
     param_1[2] == param_2[2] && param_1[3] == param_2[3])) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(lVar1,lVar2,lVar3,lVar4,0);
  return lVar1;
}



/* Entry: 100e82668; end: 100e82ae3;  */

long FUN_100e82668(long param_1,uint param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lStack_50;
  undefined8 uStack_48;
  
  if (param_1 == 1) {
    lVar7 = 0x656c676f6f47;
    uVar6 = 0xe600000000000000;
  }
  else {
    if (param_1 != 2) {
      lStack_50 = param_1;
      func_0x000107c60614(&UNK_11064aef0,&lStack_50,&UNK_11064aef0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100e82ae4);
      (*pcVar4)();
    }
    uVar6 = 0xe500000000000000;
    lVar7 = 0x656c707041;
  }
  uVar3 = param_2 >> 8 & 0xff;
  bVar5 = (param_2 & 0xff) != 0;
  lVar8 = 0x6b6e694c;
  if (bVar5) {
    lVar8 = 0x6b6e696c6e55;
  }
  uVar2 = 0xe400000000000000;
  if (bVar5) {
    uVar2 = 0xe600000000000000;
  }
  lStack_50 = lVar8;
  uStack_48 = uVar2;
  if (uVar3 < 4) {
    if (uVar3 < 2) {
      if (uVar3 == 0) {
        func_0x000107c6142c(uVar2);
        lStack_50 = 0;
        uStack_48 = 0xe000000000000000;
        func_0x000107c602fc(0x25);
        func_0x000107c6142c(uStack_48);
        lStack_50 = lVar7;
        uStack_48 = uVar6;
        func_0x000107c5fb78(0xd000000000000023,0x800000010ef15fa0);
        return 0x2079646165726c41;
      }
      lStack_50 = 0x20746f6e6e6143;
      uStack_48 = 0xe700000000000000;
      func_0x000107c5fb78(lVar8,uVar2);
      func_0x000107c6142c(uVar2);
      lVar8 = lStack_50;
      lStack_50 = 0;
      uStack_48 = 0xe000000000000000;
      func_0x000107c602fc(0x3a);
      func_0x000107c5fb78(0x2073696854,0xe500000000000000);
      func_0x000107c5fb78(lVar7,uVar6);
      func_0x000107c6142c(uVar6);
      pcVar1 = " account is linked to a different Snapchat account.";
      uVar6 = 0xd000000000000033;
    }
    else {
      if (uVar3 != 2) {
        func_0x000107c6142c(uVar6);
        func_0x000107c6142c(uVar2);
        return 0xd000000000000011;
      }
      func_0x000107c5fb78(0x64656c69614620,0xe700000000000000);
      lVar8 = lStack_50;
      lStack_50 = 0;
      uStack_48 = 0xe000000000000000;
      func_0x000107c602fc(0x33);
      func_0x000107c5fb78(0x20656854,0xe400000000000000);
      func_0x000107c5fb78(lVar7,uVar6);
      func_0x000107c6142c(uVar6);
      pcVar1 = " sign-in token was invalid. Please try again.";
      uVar6 = 0xd00000000000002d;
    }
    func_0x000107c5fb78(uVar6,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
    lStack_50 = lVar8;
  }
  else if (uVar3 < 6) {
    if (uVar3 == 4) {
      func_0x000107c6142c(uVar6);
      func_0x000107c6142c(uVar2);
      lStack_50 = 0x6e776f646c6f6f43;
    }
    else {
      func_0x000107c6142c(uVar2);
      lStack_50 = 0;
      uStack_48 = 0xe000000000000000;
      func_0x000107c602fc(0x35);
      func_0x000107c5fb78(0xd000000000000032,0x800000010ef15e40);
      func_0x000107c5fb78(lVar7,uVar6);
      func_0x000107c6142c(uVar6);
      func_0x000107c5fb78(0x2e,0xe100000000000000);
      lStack_50 = 0x5520746f6e6e6143;
    }
  }
  else if (uVar3 == 6) {
    func_0x000107c6142c(uVar2);
    lStack_50 = 0;
    uStack_48 = 0xe000000000000000;
    func_0x000107c602fc(0x21);
    func_0x000107c6142c(uStack_48);
    lStack_50 = lVar7;
    uStack_48 = uVar6;
    func_0x000107c5fb78(0xd00000000000001f,0x800000010ef15e20);
    lStack_50 = 0x6b6e694c20746f4e;
  }
  else {
    func_0x000107c6142c(uVar6);
    func_0x000107c5fb78(0x64656c69614620,0xe700000000000000);
  }
  return lStack_50;
}



/* Entry: 100e82ae4; end: 100e82d03;  */

void FUN_100e82ae4(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong auStack_b0 [9];
  undefined *puStack_68;
  
  lVar6 = *(long *)(param_2 + 8);
  func_0x0001033a9b54();
  uVar4 = *(ulong *)(param_2 + 0x10);
  if (uVar4 == 0) {
    func_0x000107c6142c();
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100e83100(0,uVar4,0);
    uVar9 = 0;
    do {
      puVar11 = puStack_68;
      if (*(ulong *)(param_2 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100e82ce0);
        (*pcVar1)();
      }
      uVar8 = *(ulong *)(param_2 + 0x20 + uVar9 * 8);
      if (uVar8 == 1) {
        uVar7 = 0xe600000000000000;
        uVar10 = 0x656c676f6f47;
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_100e82c30;
LAB_100e82b94:
        func_0x000107c6068c(auStack_b0,*(undefined8 *)(lVar6 + 0x28));
        uVar3 = uVar8;
        func_0x000107c60690();
        func_0x000107c606a8();
        uVar5 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
        uVar3 = uVar3 & (uVar5 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar6 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) == 0) {
          bVar2 = false;
        }
        else {
          do {
            bVar2 = (int)*(undefined8 *)(*(long *)(lVar6 + 0x30) + uVar3 * 8) == (int)uVar8;
            if (bVar2) break;
            uVar3 = uVar3 + 1 & ~uVar5;
          } while ((*(ulong *)(lVar6 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
        }
      }
      else {
        if (uVar8 != 2) {
          auStack_b0[0] = uVar8;
          func_0x000107c60614(&UNK_11064aef0,auStack_b0,&UNK_11064aef0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100e82d04);
          (*pcVar1)();
        }
        uVar7 = 0xe500000000000000;
        uVar10 = 0x656c707041;
        if (*(long *)(lVar6 + 0x10) != 0) goto LAB_100e82b94;
LAB_100e82c30:
        bVar2 = false;
      }
      uVar3 = *(ulong *)(puVar11 + 0x10);
      puStack_68 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar3) {
        func_0x000100e83100(1 < *(ulong *)(puVar11 + 0x18),uVar3 + 1,1);
      }
      puVar11 = puStack_68;
      uVar9 = uVar9 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
      *(ulong *)(puStack_68 + uVar3 * 0x20 + 0x20) = uVar8;
      *(undefined8 *)(puStack_68 + uVar3 * 0x20 + 0x28) = uVar10;
      *(undefined8 *)(puStack_68 + uVar3 * 0x20 + 0x30) = uVar7;
      puStack_68[uVar3 * 0x20 + 0x38] = bVar2;
    } while (uVar9 != uVar4);
    func_0x000107c6142c();
  }
  *param_1 = puVar11;
  return;
}



/* Entry: 100e82d04; end: 100e82dbf;  */

undefined1 FUN_100e82d04(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_78 [72];
  
  if (*(long *)(param_2 + 0x10) == 0) {
    return 0;
  }
  func_0x000107c6068c(auStack_78,*(undefined8 *)(param_2 + 0x28));
  uVar1 = param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_2 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if ((int)*(undefined8 *)(*(long *)(param_2 + 0x30) + uVar1 * 8) == (int)param_1) {
        return 1;
      }
      uVar1 = uVar1 + 1 & ~uVar2;
    } while ((*(ulong *)(param_2 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 100e82dc0; end: 100e82dd3;  */

void FUN_100e82dc0(undefined8 param_1,char *param_2)

{
  *(bool *)param_1 = *param_2 == '\x01';
  return;
}



/* Entry: 100e82dd4; end: 100e82eff;  */

void FUN_100e82dd4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(ushort *)(param_2 + 0x18);
  if ((*(ushort *)(param_2 + 0x18) & 0xff) == 2) {
    uVar1 = 0;
    uVar2 = 0;
    param_4 = 0;
    param_5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    FUN_100e82668();
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}



/* Entry: 100e82f00; end: 100e82f9b;  */

undefined8 FUN_100e82f00(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  func_0x000103dbf46c();
  uVar1 = 0x112d44da0;
  func_0x0001000285a8(0x112d44da0,&UNK_10d90a200);
  pcVar2 = FUN_100e82dd4;
  func_0x0001000bfde0(FUN_100e82dd4,0,uVar1);
  func_0x000107c61574(param_1);
  uVar1 = 0x112d44da8;
  FUN_100e834c0(0x112d44da8,0x112d44da0,&UNK_10d90a200,FUN_100e83528);
  func_0x000104884898();
  func_0x000107c61574(pcVar2);
  return uVar1;
}



/* Entry: 100e82f9c; end: 100e8306f;  */

undefined8 FUN_100e82f9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  FUN_100e839b0();
  uVar1 = param_1;
  func_0x000103dbf46c();
  puVar2 = &UNK_11035d3f8;
  func_0x000107c613fc(&UNK_11035d3f8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  uVar3 = 0x112d44d88;
  func_0x0001000285a8(0x112d44d88,&UNK_10d90a1f8);
  pcVar4 = FUN_100e83070;
  func_0x0001000bfde0(FUN_100e83070,puVar2,uVar3);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112d44d90;
  FUN_100e834c0(0x112d44d90,0x112d44d88,&UNK_10d90a1f8,FUN_100e830c0);
  func_0x000104884898();
  func_0x000107c61574(pcVar4);
  return uVar3;
}



/* Entry: 100e83070; end: 100e830bf;  */

void FUN_100e83070(undefined8 *param_1,long param_2)

{
  long unaff_x20;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_100e83340(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(param_2 + 0x20),*(undefined1 *)(param_2 + 0x28));
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[3] = uStack_30;
  param_1[2] = uStack_38;
  param_1[4] = uStack_28;
  return;
}



/* Entry: 100e830c0; end: 100e83137;  */

void FUN_100e830c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d44d98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90a26c;
  func_0x000107c61520(&UNK_10d90a26c,&UNK_11035d4f8);
  puRam0000000112d44d98 = puVar1;
  return;
}



/* Entry: 100e83138; end: 100e8333f;  */

undefined * FUN_100e83138(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100e83240);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d44dd0;
    func_0x0001000285a8(0x112d44dd0,&UNK_10d90a210);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar3 + 0x20,param_4 + 0x20,uVar6,&UNK_11035d3a0);
  }
  else {
    if (puVar3 != param_4 || param_4 + 0x20 + uVar6 * 0x20 <= puVar3 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 100e83340; end: 100e834bf;  */

void FUN_100e83340(long *param_1,undefined8 param_2,long param_3,long param_4,char param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_60;
  long lStack_58;
  
  if (param_5 == '\x01' || param_3 == 0) {
    param_4 = 0;
    lVar3 = 0;
    lVar5 = 0;
    lStack_60 = 0;
    lStack_58 = 0;
  }
  else {
    if (param_4 == 1) {
      uVar4 = 0xe600000000000000;
      uVar2 = 0x656c676f6f47;
    }
    else {
      if (param_4 != 2) {
        lStack_60 = param_4;
        func_0x000107c60614(&UNK_11064aef0,&lStack_60,&UNK_11064aef0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100e834c0);
        (*pcVar1)();
      }
      uVar4 = 0xe500000000000000;
      uVar2 = 0x656c707041;
    }
    lStack_60 = 0x656e6e6f63736944;
    lStack_58 = -0x14ffffffffdf8b9d;
    func_0x000107c5fb78(uVar2,uVar4);
    func_0x000107c6142c(uVar4);
    func_0x000107c5fb78(0x3f,0xe100000000000000);
    lVar5 = lStack_58;
    lVar3 = lStack_60;
    lStack_60 = 0;
    lStack_58 = 0xe000000000000000;
    func_0x000107c602fc(0x22);
    func_0x000107c6142c(lStack_58);
    lStack_60 = -0x2fffffffffffffe1;
    lStack_58 = -0x7ffffffef10ea230;
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c5fb78(0x2e,0xe100000000000000);
  }
  *param_1 = param_4;
  param_1[1] = lVar3;
  param_1[2] = lVar5;
  param_1[3] = lStack_60;
  param_1[4] = lStack_58;
  return;
}



/* Entry: 100e834c0; end: 100e83527;  */

void FUN_100e834c0(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puVar2 = PTR___sxSgSQsSQRzlMc_11034f190;
    uStack_38 = uVar1;
    func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,param_2,&uStack_38);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 100e83528; end: 100e83567;  */

void FUN_100e83528(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d44db0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90a244;
  func_0x000107c61520(&UNK_10d90a244,&UNK_11035d478);
  puRam0000000112d44db0 = puVar1;
  return;
}



/* Entry: 100e83568; end: 100e835d7;  */

void FUN_100e83568(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112d44dc0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d44db8;
  func_0x00010002969c(0x112d44db8,&UNK_10d90a208);
  uVar2 = uVar1;
  FUN_100e835d8();
  puVar3 = PTR___sSayxGSQsSQRzlMc_11034dd00;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSayxGSQsSQRzlMc_11034dd00,uVar1,&uStack_28);
  puRam0000000112d44dc0 = puVar3;
  return;
}



/* Entry: 100e835d8; end: 100e83617;  */

void FUN_100e835d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d44dc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90a1bc;
  func_0x000107c61520(&UNK_10d90a1bc,&UNK_11035d3a0);
  puRam0000000112d44dc8 = puVar1;
  return;
}



/* Entry: 100e83618; end: 100e8367b;  */

/* WARNING: Possible PIC construction at 0x000100e8362c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e83630) */

void FUN_100e83618(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 100e8367c; end: 100e836e7;  */

undefined8 * FUN_100e8367c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 100e836e8; end: 100e8372b;  */

undefined8 * FUN_100e836e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 100e8372c; end: 100e837c3;  */

int FUN_100e8372c(int *param_1,int param_2)

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



/* Entry: 100e837c4; end: 100e8382f;  */

/* WARNING: Possible PIC construction at 0x000100e837d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e837dc) */

void FUN_100e837c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 100e83830; end: 100e838a3;  */

undefined8 * FUN_100e83830(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 100e838a4; end: 100e838b7;  */

void FUN_100e838a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Entry: 100e838b8; end: 100e83903;  */

undefined8 * FUN_100e838b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 100e83904; end: 100e839af;  */

int FUN_100e83904(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100e839b0; end: 100e83a4f;  */

void FUN_100e839b0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x80);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c4248c();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar1 != 0) {
        func_0x000107c5faec(lVar1);
        func_0x000107c61170(lVar1);
      }
    }
  }
  return;
}



/* Entry: 100e83a50; end: 100e83a67;  */

uint FUN_100e83a50(ulong *param_1,ulong *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  
  uVar10 = *param_1;
  uVar8 = *param_2;
  bVar1 = (byte)param_2[1];
  bVar2 = (byte)param_1[1];
  bVar3 = bVar2 >> 5;
  if (bVar3 < 4) {
    if (bVar3 < 2) {
      if (bVar3 == 0) {
        if (bVar1 < 0x20) {
          if (uVar10 >> 0x3e == 0) {
            uVar14 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar14 = uVar10 & 0xffffffffffffff8;
            if ((uVar10 & 0x8000000000000000) != 0) {
              uVar14 = uVar10;
            }
            func_0x000107c60480();
          }
          if (uVar8 >> 0x3e == 0) {
            uVar5 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar5 = uVar8 & 0xffffffffffffff8;
            if ((uVar8 & 0x8000000000000000) != 0) {
              uVar5 = uVar8;
            }
            func_0x000107c60480();
          }
          if (uVar14 == uVar5) {
            if (uVar14 != 0) {
              uVar11 = uVar10 & 0xffffffffffffff8;
              uVar5 = uVar11;
              if ((uVar10 & 0x8000000000000000) != 0) {
                uVar5 = uVar10;
              }
              uVar6 = uVar11 + 0x20;
              if (uVar10 >> 0x3e != 0) {
                uVar6 = uVar5;
              }
              uVar12 = uVar8 & 0xffffffffffffff8;
              uVar5 = uVar12;
              if ((uVar8 & 0x8000000000000000) != 0) {
                uVar5 = uVar8;
              }
              uVar7 = uVar12 + 0x20;
              if (uVar8 >> 0x3e != 0) {
                uVar7 = uVar5;
              }
              if (uVar6 != uVar7) {
                if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x100e85274);
                  (*pcVar4)();
                }
                func_0x0001033a8e58(0);
                if (((uVar8 | uVar10) & 0xc000000000000001) == 0) {
                  lVar17 = *(long *)(uVar11 + 0x10);
                  lVar18 = *(long *)(uVar12 + 0x10);
                  puVar15 = (ulong *)(uVar10 + 0x20);
                  puVar16 = (undefined8 *)(uVar8 + 0x20);
                  do {
                    uVar14 = uVar14 - 1;
                    if (lVar17 == 0) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x100e85214);
                      (*pcVar4)();
                    }
                    if (lVar18 == 0) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x100e85218);
                      (*pcVar4)();
                    }
                    uVar8 = *puVar15;
                    uVar13 = *puVar16;
                    func_0x000107c61174();
                    func_0x000107c61174(uVar13);
                    uVar10 = uVar8;
                    func_0x000107c60118(uVar8,uVar13);
                    uVar9 = (uint)uVar10;
                    func_0x000107c61170(uVar8);
                    func_0x000107c61170(uVar13);
                    if ((uVar10 & 1) == 0) break;
                    lVar18 = lVar18 + -1;
                    lVar17 = lVar17 + -1;
                    puVar15 = puVar15 + 1;
                    puVar16 = puVar16 + 1;
                  } while (uVar14 != 0);
                }
                else {
                  lVar17 = 4;
                  do {
                    uVar14 = uVar14 - 1;
                    uVar5 = lVar17 - 4;
                    if ((uVar10 & 0xc000000000000001) == 0) {
                      if (*(long *)(uVar11 + 0x10) <= (long)uVar5) {
                    /* WARNING: Does not return */
                        pcVar4 = (code *)SoftwareBreakpoint(1,0x100e8521c);
                        (*pcVar4)();
                      }
                      uVar6 = *(ulong *)(uVar10 + lVar17 * 8);
                      func_0x000107c61174();
                      if ((uVar8 & 0xc000000000000001) != 0) goto LAB_100e8510c;
LAB_100e8513c:
                      if (*(long *)(uVar12 + 0x10) <= (long)uVar5) {
                    /* WARNING: Does not return */
                        pcVar4 = (code *)SoftwareBreakpoint(1,0x100e85220);
                        (*pcVar4)();
                      }
                      uVar5 = *(ulong *)(uVar8 + lVar17 * 8);
                      func_0x000107c61174(uVar5);
                    }
                    else {
                      uVar6 = uVar5;
                      FUN_100e853dc(uVar5,uVar10);
                      if ((uVar8 & 0xc000000000000001) == 0) goto LAB_100e8513c;
LAB_100e8510c:
                      FUN_100e853dc(uVar5,uVar8);
                    }
                    uVar7 = uVar6;
                    func_0x000107c60118(uVar6,uVar5);
                    uVar9 = (uint)uVar7;
                    func_0x000107c61170(uVar6);
                    func_0x000107c61170(uVar5);
                  } while (((uVar7 & 1) != 0) && (lVar17 = lVar17 + 1, uVar14 != 0));
                }
                goto LAB_100e8524c;
              }
            }
            uVar9 = 1;
          }
          else {
            uVar9 = 0;
          }
LAB_100e8524c:
          return uVar9 & 1;
        }
      }
      else if ((bVar1 & 0xe0) == 0x20) {
LAB_100e86054:
        return (uint)((int)uVar10 == (int)uVar8);
      }
    }
    else if (bVar3 == 2) {
      if ((bVar1 & 0xe0) == 0x40) goto LAB_100e86054;
    }
    else if ((bVar1 & 0xe0) == 0x60) {
      uVar13 = 0;
      func_0x0001007bbbf8(0);
      func_0x000107c60118(uVar10,uVar8,uVar13);
      return (uint)uVar10 & 1;
    }
  }
  else if (bVar3 < 6) {
    if (bVar3 == 4) {
      if ((char)bVar1 < -0x60) goto LAB_100e86054;
    }
    else if ((bVar1 & 0xe0) == 0xa0) {
LAB_100e8606c:
      uVar9 = 0;
      if ((int)uVar10 == (int)uVar8) {
        uVar9 = (uint)(((bVar1 ^ bVar2) & 0x1f) == 0);
      }
      return uVar9;
    }
  }
  else if (bVar3 == 6) {
    if ((bVar1 & 0xe0) == 0xc0) goto LAB_100e8606c;
  }
  else {
    uVar14 = ~(long)(char)bVar2;
    if ((long)(-0x20 - ((long)(char)bVar2 + (ulong)(uVar10 >= 3))) < 0 ==
        (SCARRY8(uVar14,-0x20) != SCARRY8(uVar14 - 0x20,(ulong)(uVar10 < 3)))) {
      if (uVar10 == 0 && bVar2 == 0xe0) {
        if (((0xdf < bVar1) && (uVar8 == 0)) && (bVar1 == 0xe0)) {
          return 1;
        }
      }
      else if (bVar2 == 0xe0 && uVar10 == 1) {
        if (((0xdf < bVar1) && (uVar8 == 1)) && (bVar1 == 0xe0)) {
          return 1;
        }
      }
      else if (((0xdf < bVar1) && (uVar8 == 2)) && (bVar1 == 0xe0)) {
        return 1;
      }
    }
    else if (bVar2 == 0xe0 && uVar10 == 3) {
      if (((0xdf < bVar1) && (uVar8 == 3)) && (bVar1 == 0xe0)) {
        return 1;
      }
    }
    else if (bVar2 == 0xe0 && uVar10 == 4) {
      if (((0xdf < bVar1) && (uVar8 == 4)) && (bVar1 == 0xe0)) {
        return 1;
      }
    }
    else if (((0xdf < bVar1) && (uVar8 == 5)) && (bVar1 == 0xe0)) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 100e83a68; end: 100e83aeb;  */

void FUN_100e83a68(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 100e83aec; end: 100e83b07;  */

bool FUN_100e83aec(undefined8 *param_1,undefined8 *param_2)

{
  return (int)*param_1 == (int)*param_2 && *(short *)(param_1 + 1) == *(short *)(param_2 + 1);
}



/* Entry: 100e83b08; end: 100e83b4f;  */

uint FUN_100e83b08(undefined8 *param_1,undefined8 *param_2)

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
  FUN_100e861f4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 100e83b50; end: 100e83eff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e83b50(undefined1 *param_1,ulong param_2,uint param_3,undefined1 *param_4)

{
  ushort uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  undefined1 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined1 uVar20;
  ushort uVar21;
  ulong uVar22;
  undefined *apuStack_80 [3];
  undefined *puStack_68;
  
  uVar2 = *param_4;
  puVar10 = *(undefined **)(param_4 + 8);
  uVar14 = *(ulong *)(param_4 + 0x10);
  uVar4 = *(ushort *)(param_4 + 0x18);
  uVar17 = *(ulong *)(param_4 + 0x20);
  uVar3 = param_4[0x28];
  uVar12 = param_3 >> 5 & 7;
  uVar19 = uVar17;
  uVar22 = uVar14;
  uVar16 = uVar2;
  apuStack_80[0] = puVar10;
  uVar21 = uVar4;
  uVar20 = uVar3;
  if (uVar12 < 4) {
    if (uVar12 < 2) {
      if (uVar12 == 0) {
        if (param_2 >> 0x3e == 0) {
          uVar14 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar14 = param_2;
          if (-1 < (long)param_2) {
            uVar14 = param_2 & 0xffffffffffffff8;
          }
          func_0x000107c60480();
        }
        puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (uVar14 != 0) {
          puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x000100e8311c(0,uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
          if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e83f00);
            (*pcVar6)();
          }
          if ((param_2 & 0xc000000000000001) == 0) {
            plVar15 = (long *)(param_2 + 0x20);
            do {
              puVar10 = puStack_68;
              lVar5 = _DAT_112f60d28;
              lVar13 = *plVar15;
              func_0x000107c61428(lVar13 + _DAT_112f60d28,apuStack_80,0,0);
              uVar18 = *(undefined8 *)(lVar13 + lVar5);
              uVar17 = *(ulong *)(puVar10 + 0x10);
              puStack_68 = puVar10;
              if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar17) {
                func_0x000100e8311c(1 < *(ulong *)(puVar10 + 0x18),uVar17 + 1,1);
              }
              *(ulong *)(puStack_68 + 0x10) = uVar17 + 1;
              *(undefined8 *)(puStack_68 + uVar17 * 8 + 0x20) = uVar18;
              uVar14 = uVar14 - 1;
              puVar11 = puStack_68;
              plVar15 = plVar15 + 1;
            } while (uVar14 != 0);
          }
          else {
            uVar17 = 0;
            do {
              puVar10 = puStack_68;
              uVar9 = uVar17;
              FUN_100e853dc(uVar17,param_2);
              lVar5 = _DAT_112f60d28;
              func_0x000107c61428(uVar9 + _DAT_112f60d28,apuStack_80,0,0);
              uVar18 = *(undefined8 *)(uVar9 + lVar5);
              func_0x000107c615e8(uVar9);
              uVar9 = *(ulong *)(puVar10 + 0x10);
              puStack_68 = puVar10;
              if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar9) {
                func_0x000100e8311c(1 < *(ulong *)(puVar10 + 0x18),uVar9 + 1,1);
              }
              uVar17 = uVar17 + 1;
              *(ulong *)(puStack_68 + 0x10) = uVar9 + 1;
              *(undefined8 *)(puStack_68 + uVar9 * 8 + 0x20) = uVar18;
              puVar11 = puStack_68;
            } while (uVar14 != uVar17);
          }
        }
        puVar10 = puVar11;
        FUN_100e86540();
        func_0x000107c6142c(puVar11);
        uVar16 = 0;
      }
      else {
        func_0x000107c61434(puVar10);
        uVar14 = param_2;
        puVar11 = puVar10;
        FUN_100e82d04();
        if (((uVar14 & 1) == 0) || (FUN_100e839b0(), puVar11 == (undefined *)0x0)) {
          uVar16 = 1;
        }
        else {
          func_0x000107c6142c(puVar11);
          uVar19 = param_2;
          uVar20 = 0;
        }
      }
      goto LAB_100e83eb4;
    }
    if (uVar12 == 2) {
      func_0x000107c61434(puVar10);
      uVar19 = 0;
      uVar16 = 1;
      uVar20 = 1;
      goto LAB_100e83eb4;
    }
    uVar18 = *(undefined8 *)(param_2 + _DAT_112f60d28);
    func_0x000107c61434(puVar10);
    FUN_100e85578(&puStack_68,uVar18);
LAB_100e83d60:
    puVar10 = apuStack_80[0];
    uVar22 = 0;
    uVar16 = 0;
    uVar21 = 2;
  }
  else {
    if (uVar12 < 6) {
      if (uVar12 == 4) {
        func_0x000107c61434(puVar10);
        func_0x000100e85668(param_2);
        goto LAB_100e83d60;
      }
      uVar21 = (ushort)((param_3 & 0x1f) << 8);
    }
    else {
      if (uVar12 != 6) {
        func_0x000107c61434(puVar10);
        uVar9 = ~(long)(char)param_3;
        uVar12 = param_3 & 0xff;
        bVar7 = uVar12 != 0xe0;
        bVar8 = param_2 != 4;
        uVar20 = uVar2;
        if (bVar7 || bVar8) {
          uVar20 = 2;
        }
        uVar19 = 0;
        if (bVar7 || bVar8) {
          uVar19 = uVar14;
        }
        uVar1 = 2;
        if (bVar7 || bVar8) {
          uVar1 = uVar4;
        }
        bVar7 = uVar12 != 0xe0;
        bVar8 = param_2 != 3;
        if (bVar7 || bVar8) {
          uVar22 = uVar19;
          uVar16 = uVar20;
          uVar21 = uVar1;
        }
        uVar19 = 0;
        if (bVar7 || bVar8) {
          uVar19 = uVar17;
        }
        uVar20 = 1;
        if (bVar7 || bVar8) {
          uVar20 = uVar3;
        }
        if (param_2 != 0 || uVar12 != 0xe0) {
          uVar2 = uVar12 == 0xe0 && param_2 == 1;
        }
        if ((long)(-0x20 - ((long)(char)param_3 + (ulong)(param_2 >= 3))) < 0 ==
            (SCARRY8(uVar9,-0x20) != SCARRY8(uVar9 - 0x20,(ulong)(param_2 < 3)))) {
          uVar19 = uVar17;
          uVar22 = uVar14;
          uVar16 = uVar2;
          uVar21 = uVar4;
          uVar20 = uVar3;
        }
        goto LAB_100e83eb4;
      }
      uVar21 = (ushort)((param_3 & 0x1f) << 8) | 1;
    }
    func_0x000107c61434(puVar10);
    uVar22 = param_2;
    uVar16 = 0;
  }
LAB_100e83eb4:
  *param_1 = uVar16;
  *(undefined **)(param_1 + 8) = puVar10;
  *(ulong *)(param_1 + 0x10) = uVar22;
  *(ushort *)(param_1 + 0x18) = uVar21;
  *(ulong *)(param_1 + 0x20) = uVar19;
  param_1[0x28] = uVar20;
  return;
}



/* Entry: 100e83f00; end: 100e8427f;  */

void FUN_100e83f00(ulong param_1,uint param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  uVar1 = param_2 >> 5 & 7;
  if (uVar1 == 1) {
    lVar7 = *(long *)(param_3 + 8);
    uVar3 = param_1;
    FUN_100e82d04();
    if ((uVar3 & 1) != 0) {
      FUN_100e839b0();
      if (lVar7 != 0) {
        func_0x000107c6142c(lVar7);
        return;
      }
      func_0x0001000285a8(0x112d44f28,&UNK_10d90a398);
      func_0x000107c613fc();
      uVar5 = 1;
      func_0x00010008747c();
      uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
      puVar4 = &UNK_11035d6a0;
      func_0x000107c613fc(&UNK_11035d6a0,0x28,7);
      *(undefined8 *)(puVar4 + 0x10) = uVar8;
      *(ulong *)(puVar4 + 0x18) = param_1;
      *(undefined8 *)(puVar4 + 0x20) = uVar5;
      func_0x000107c615f0(uVar8);
      func_0x000107c6157c(uVar5);
      uVar5 = 4;
      func_0x0001001ca524(4,1,0,4,uVar3,0,&UNK_10d90a3c0,puVar4,PTR___sytN_11034f1b0 + 8);
      goto LAB_100e840f8;
    }
    func_0x0001000285a8(0x112d44f28,&UNK_10d90a398);
    func_0x000107c613fc();
    uVar5 = 1;
    func_0x00010008747c();
    uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
    puVar4 = &UNK_11035d678;
    func_0x000107c613fc(&UNK_11035d678,0x28,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar8;
    *(ulong *)(puVar4 + 0x18) = param_1;
    *(undefined8 *)(puVar4 + 0x20) = uVar5;
    func_0x000107c615f0(uVar8);
    func_0x000107c6157c(uVar5);
    puVar6 = &UNK_10d90a3b8;
  }
  else {
    if (uVar1 != 2) {
      if (uVar1 != 7) {
        return;
      }
      if ((param_2 & 0xff) != 0xe0 || param_1 != 1) {
        if (param_1 != 0 || (param_2 & 0xff) != 0xe0) {
          return;
        }
        plVar2 = (long *)(unaff_x20 + 0x58);
        func_0x000100e8651c(plVar2,*(undefined8 *)(unaff_x20 + 0x70));
        func_0x000104cb95c8(*(undefined8 *)(*plVar2 + 0x10),1);
        func_0x0001000285a8(0x112d44f30,&UNK_10d90a3d8);
        uStack_50 = 1;
        uStack_48 = 0xe0;
        func_0x000100854cb0(&uStack_50);
        return;
      }
      func_0x0001000285a8(0x112d44f28,&UNK_10d90a398);
      func_0x000107c613fc();
      uVar5 = 1;
      func_0x00010008747c();
      uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
      puVar6 = &UNK_11035d6c8;
      func_0x000107c613fc(&UNK_11035d6c8,0x20,7);
      *(undefined8 *)(puVar6 + 0x10) = uVar8;
      *(undefined8 *)(puVar6 + 0x18) = uVar5;
      func_0x000107c615f0(uVar8);
      func_0x000107c6157c(uVar5);
      uVar5 = 4;
      func_0x0001001ca524(4,1,0,4,0,0,&UNK_10d90a3d0,puVar6,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(uVar5);
      return;
    }
    func_0x0001000285a8(0x112d44f28,&UNK_10d90a398);
    func_0x000107c613fc();
    uVar5 = 1;
    func_0x00010008747c();
    uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
    puVar4 = &UNK_11035d650;
    func_0x000107c613fc(&UNK_11035d650,0x28,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar8;
    *(ulong *)(puVar4 + 0x18) = param_1;
    *(undefined8 *)(puVar4 + 0x20) = uVar5;
    func_0x000107c615f0(uVar8);
    func_0x000107c6157c(uVar5);
    puVar6 = &UNK_10d90a3a8;
  }
  uVar5 = 4;
  func_0x0001001ca524(4,1,0,4,0,0,puVar6,puVar4,PTR___sytN_11034f1b0 + 8);
LAB_100e840f8:
  func_0x000107c61574(puVar4);
  func_0x000107c61574(uVar5);
  return;
}



/* Entry: 100e84280; end: 100e84297;  */

void FUN_100e84280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e84298,0,0);
  return;
}



/* Entry: 100e84298; end: 100e8433b;  */

void FUN_100e84298(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100e8433c;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,1);
  uVar2 = 0x112d44f38;
  func_0x0001000285a8(0x112d44f38,&UNK_10d90a3e0);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_100e84438;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11035d6e0;
  *(long *)(unaff_x22 + 0x70) = lVar1;
  func_0x000107c4316c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 100e8433c; end: 100e84393;  */

void FUN_100e8433c(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xa8) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_100e84394;
  }
  else {
    pcVar1 = FUN_100e843dc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100e84394; end: 100e843db;  */

void FUN_100e84394(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar1;
  *(undefined1 *)(unaff_x22 + 0x58) = 0;
  func_0x000100087c34();
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100e843d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100e843dc; end: 100e84437;  */

void FUN_100e843dc(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c61654();
  *(undefined8 *)(unaff_x22 + 0x50) = 2;
  *(undefined1 *)(unaff_x22 + 0x58) = 0xe0;
  func_0x000100087c34();
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100e84434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100e84438; end: 100e844e7;  */

void FUN_100e84438(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x000100e8651c(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  if (param_3 != 0) {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar1 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar1 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar3,uVar2);
    return;
  }
  uVar2 = 0;
  func_0x0001033a8e58(0);
  func_0x000107c5fc54(param_2,uVar2);
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 100e844e8; end: 100e84503;  */

void FUN_100e844e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e84504,0,0);
  return;
}



/* Entry: 100e84504; end: 100e845b3;  */

void FUN_100e84504(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100e845b4;
  lVar2 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar2,1);
  uVar3 = 0x112d44f40;
  func_0x0001000285a8(0x112d44f40,&UNK_10d90a3f0);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined8 *)(unaff_x22 + 0x60) = 0x100e86bb8;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11035d708;
  *(long *)(unaff_x22 + 0x70) = lVar2;
  func_0x000107c4b674(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 100e845b4; end: 100e8460b;  */

void FUN_100e845b4(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xb0) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_100e8460c;
  }
  else {
    pcVar1 = FUN_100e8478c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100e8460c; end: 100e8478b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e8460c(void)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x90);
  lVar2 = *(long *)(lVar3 + _DAT_112f60d58);
  if (lVar2 < 3) {
    if (lVar2 == 0) {
      lVar2 = *(long *)(lVar3 + _DAT_112f60d60);
      if (lVar2 != 0) {
        *(long *)(unaff_x22 + 0x50) = lVar2;
        *(undefined1 *)(unaff_x22 + 0x58) = 0x60;
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000100087c34(unaff_x22 + 0x50);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar2);
        goto LAB_100e8476c;
      }
LAB_100e846f4:
      *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar1 = 0xa7;
    }
    else if (lVar2 == 1) {
      *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar1 = 0xa0;
    }
    else {
      if (lVar2 != 2) goto LAB_100e84704;
      *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar1 = 0xa1;
    }
  }
  else if (lVar2 < 5) {
    if (lVar2 == 3) {
      *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar1 = 0xa2;
    }
    else {
      if (lVar2 != 4) {
LAB_100e84704:
        *(long *)(unaff_x22 + 0x50) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdb9af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF_11034ed60)
                  (&UNK_11064ae00,unaff_x22 + 0x50,&UNK_11064ae00,PTR___sSiN_11034deb0);
        return;
      }
      *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar1 = 0xa3;
    }
  }
  else {
    if (lVar2 != 5) {
      if (lVar2 != 6) goto LAB_100e84704;
      goto LAB_100e846f4;
    }
    *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar1 = 0xa4;
  }
  *(undefined1 *)(unaff_x22 + 0x58) = uVar1;
  func_0x000100087c34(unaff_x22 + 0x50);
  lVar2 = lVar3;
LAB_100e8476c:
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x000100e84788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100e8478c; end: 100e847ef;  */

void FUN_100e8478c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61654();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  *(undefined1 *)(unaff_x22 + 0x58) = 0xa7;
  func_0x000100087c34();
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100e847ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100e847f0; end: 100e8480b;  */

void FUN_100e847f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e8480c,0,0);
  return;
}



/* Entry: 100e8480c; end: 100e848bb;  */

void FUN_100e8480c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100e848bc;
  lVar2 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar2,1);
  uVar3 = 0x112d44f48;
  func_0x0001000285a8(0x112d44f48,&UNK_10d90a3f8);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined8 *)(unaff_x22 + 0x60) = 0x100e86bb4;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11035d730;
  *(long *)(unaff_x22 + 0x70) = lVar2;
  func_0x000107c5d270(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 100e848bc; end: 100e84913;  */

void FUN_100e848bc(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xb0) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_100e84914;
  }
  else {
    pcVar1 = FUN_100e849b4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100e84914; end: 100e849b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e84914(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x90);
  uVar1 = *(ulong *)(lVar2 + _DAT_112f60da0);
  if (uVar1 < 6) {
    *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xa0);
    *(char *)(unaff_x22 + 0x58) = (char)(0xc7c6c4c3c580 >> ((uVar1 & 7) << 3));
    func_0x000100087c34(unaff_x22 + 0x50);
    func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x000100e84984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(ulong *)(unaff_x22 + 0x50) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdb9af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF_11034ed60)
            (&UNK_11064ae78,unaff_x22 + 0x50,&UNK_11064ae78,PTR___sSiN_11034deb0);
  return;
}



/* Entry: 100e849b4; end: 100e84a17;  */

void FUN_100e849b4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61654();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  *(undefined1 *)(unaff_x22 + 0x58) = 199;
  func_0x000100087c34();
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100e84a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100e84a18; end: 100e84ac3;  */

void FUN_100e84a18(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  plVar2 = (long *)(param_1 + 0x20);
  func_0x000100e8651c(plVar2,*(undefined8 *)(param_1 + 0x38));
  lVar4 = *plVar2;
  if (param_3 != 0) {
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar2 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar4,uVar3);
    return;
  }
  if (param_2 != 0) {
    **(long **)(*(long *)(lVar4 + 0x40) + 0x28) = param_2;
    func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e84ac4);
  (*pcVar1)();
}



/* Entry: 100e84ac4; end: 100e84ae7;  */

void FUN_100e84ac4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
  FUN_100e864fc(unaff_x20 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 100e84ae8; end: 100e84b3f;  */

void FUN_100e84ae8(long param_1)

{
  undefined8 uVar1;
  
  func_0x000103dbf870();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c6157c();
  func_0x000107c615e8(uVar1);
  FUN_100e864fc(param_1 + 0x58);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x88,7);
  return;
}



/* Entry: 100e84b40; end: 100e84c03;  */

void FUN_100e84b40(undefined8 param_1)

{
  if (lRam0000000112d44e08 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e615f2c);
  return;
}



/* Entry: 100e84c04; end: 100e84c4f;  */

void FUN_100e84c04(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_100e83b50(&uStack_50,*param_2,*(undefined1 *)(param_2 + 1),param_3);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = CONCAT71(uStack_37,uStack_38);
  param_1[2] = uStack_40;
  *(undefined8 *)((long)param_1 + 0x21) = uStack_2f;
  *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_30,uStack_37);
  return;
}



/* Entry: 100e84c50; end: 100e84cab;  */

void FUN_100e84c50(ulong *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  uVar9 = *param_1;
  bVar1 = (byte)param_1[1];
  bVar2 = bVar1 >> 5;
  if (bVar2 == 1) {
    lVar8 = *(long *)(param_2 + 8);
    uVar4 = uVar9;
    FUN_100e82d04();
    if ((uVar4 & 1) != 0) {
      FUN_100e839b0();
      if (lVar8 != 0) {
        func_0x000107c6142c(lVar8);
        return;
      }
      func_0x0001000285a8(0x112d44f28,&UNK_10d90a398);
      func_0x000107c613fc();
      uVar6 = 1;
      func_0x00010008747c();
      uVar10 = *(undefined8 *)(unaff_x20 + 0x50);
      puVar5 = &UNK_11035d6a0;
      func_0x000107c613fc(&UNK_11035d6a0,0x28,7);
      *(undefined8 *)(puVar5 + 0x10) = uVar10;
      *(ulong *)(puVar5 + 0x18) = uVar9;
      *(undefined8 *)(puVar5 + 0x20) = uVar6;
      func_0x000107c615f0(uVar10);
      func_0x000107c6157c(uVar6);
      uVar6 = 4;
      func_0x0001001ca524(4,1,0,4,uVar4,0,&UNK_10d90a3c0,puVar5,PTR___sytN_11034f1b0 + 8);
      goto LAB_100e840f8;
    }
    func_0x0001000285a8(0x112d44f28,&UNK_10d90a398);
    func_0x000107c613fc();
    uVar6 = 1;
    func_0x00010008747c();
    uVar10 = *(undefined8 *)(unaff_x20 + 0x50);
    puVar5 = &UNK_11035d678;
    func_0x000107c613fc(&UNK_11035d678,0x28,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar10;
    *(ulong *)(puVar5 + 0x18) = uVar9;
    *(undefined8 *)(puVar5 + 0x20) = uVar6;
    func_0x000107c615f0(uVar10);
    func_0x000107c6157c(uVar6);
    puVar7 = &UNK_10d90a3b8;
  }
  else {
    if (bVar2 != 2) {
      if (bVar2 != 7) {
        return;
      }
      if (bVar1 != 0xe0 || uVar9 != 1) {
        if (uVar9 != 0 || bVar1 != 0xe0) {
          return;
        }
        plVar3 = (long *)(unaff_x20 + 0x58);
        func_0x000100e8651c(plVar3,*(undefined8 *)(unaff_x20 + 0x70));
        func_0x000104cb95c8(*(undefined8 *)(*plVar3 + 0x10),1);
        func_0x0001000285a8(0x112d44f30,&UNK_10d90a3d8);
        uStack_50 = 1;
        uStack_48 = 0xe0;
        func_0x000100854cb0(&uStack_50);
        return;
      }
      func_0x0001000285a8(0x112d44f28,&UNK_10d90a398);
      func_0x000107c613fc();
      uVar6 = 1;
      func_0x00010008747c();
      uVar10 = *(undefined8 *)(unaff_x20 + 0x50);
      puVar7 = &UNK_11035d6c8;
      func_0x000107c613fc(&UNK_11035d6c8,0x20,7);
      *(undefined8 *)(puVar7 + 0x10) = uVar10;
      *(undefined8 *)(puVar7 + 0x18) = uVar6;
      func_0x000107c615f0(uVar10);
      func_0x000107c6157c(uVar6);
      uVar6 = 4;
      func_0x0001001ca524(4,1,0,4,0,0,&UNK_10d90a3d0,puVar7,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(uVar6);
      return;
    }
    func_0x0001000285a8(0x112d44f28,&UNK_10d90a398);
    func_0x000107c613fc();
    uVar6 = 1;
    func_0x00010008747c();
    uVar10 = *(undefined8 *)(unaff_x20 + 0x50);
    puVar5 = &UNK_11035d650;
    func_0x000107c613fc(&UNK_11035d650,0x28,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar10;
    *(ulong *)(puVar5 + 0x18) = uVar9;
    *(undefined8 *)(puVar5 + 0x20) = uVar6;
    func_0x000107c615f0(uVar10);
    func_0x000107c6157c(uVar6);
    puVar7 = &UNK_10d90a3a8;
  }
  uVar6 = 4;
  func_0x0001001ca524(4,1,0,4,0,0,puVar7,puVar5,PTR___sytN_11034f1b0 + 8);
LAB_100e840f8:
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar6);
  return;
}



/* Entry: 100e84cac; end: 100e84cfb;  */

undefined8 * FUN_100e84cac(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000100e84c64(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000100e84c90(uVar3,uVar2);
  return param_1;
}



/* Entry: 100e84cfc; end: 100e84d37;  */

undefined8 * FUN_100e84cfc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000100e84c90(uVar3,uVar2);
  return param_1;
}



/* Entry: 100e84d38; end: 100e84e43;  */

int FUN_100e84d38(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x18 < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0x19;
  }
  uVar1 = (*(byte *)(param_1 + 2) & 0x18 | (uint)(*(byte *)(param_1 + 2) >> 5)) ^ 0x1f;
  if (0x17 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100e84e44; end: 100e84e6f;  */

long FUN_100e84e44(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100e84e70; end: 100e84e77;  */

void FUN_100e84e70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 100e84e78; end: 100e84ec3;  */

undefined1 * FUN_100e84e78(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  param_1[0x28] = param_2[0x28];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100e84ec4; end: 100e84f2f;  */

undefined1 * FUN_100e84ec4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[0x28] = param_2[0x28];
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return param_1;
}



/* Entry: 100e84f30; end: 100e84f8b;  */

undefined1 * FUN_100e84f30(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  param_1[0x28] = param_2[0x28];
  return param_1;
}



/* Entry: 100e84f8c; end: 100e8502f;  */

int FUN_100e84f8c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100e85030; end: 100e853db;  */

uint FUN_100e85030(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar2 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar9 == uVar2) {
    if (uVar9 != 0) {
      uVar5 = param_1 & 0xffffffffffffff8;
      uVar2 = uVar5;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar2 = param_1;
      }
      uVar3 = uVar5 + 0x20;
      if (param_1 >> 0x3e != 0) {
        uVar3 = uVar2;
      }
      uVar6 = param_2 & 0xffffffffffffff8;
      uVar2 = uVar6;
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar2 = param_2;
      }
      uVar4 = uVar6 + 0x20;
      if (param_2 >> 0x3e != 0) {
        uVar4 = uVar2;
      }
      if (uVar3 != uVar4) {
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100e85274);
          (*pcVar1)();
        }
        func_0x0001033a8e58(0);
        if (((param_2 | param_1) & 0xc000000000000001) == 0) {
          lVar12 = *(long *)(uVar5 + 0x10);
          lVar13 = *(long *)(uVar6 + 0x10);
          puVar10 = (ulong *)(param_1 + 0x20);
          puVar11 = (undefined8 *)(param_2 + 0x20);
          do {
            uVar9 = uVar9 - 1;
            if (lVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100e85214);
              (*pcVar1)();
            }
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100e85218);
              (*pcVar1)();
            }
            uVar5 = *puVar10;
            uVar7 = *puVar11;
            func_0x000107c61174();
            func_0x000107c61174(uVar7);
            uVar2 = uVar5;
            func_0x000107c60118(uVar5,uVar7);
            uVar8 = (uint)uVar2;
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar7);
            if ((uVar2 & 1) == 0) break;
            lVar13 = lVar13 + -1;
            lVar12 = lVar12 + -1;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar9 != 0);
        }
        else {
          lVar12 = 4;
          do {
            uVar9 = uVar9 - 1;
            uVar2 = lVar12 - 4;
            if ((param_1 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar5 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x100e8521c);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(param_1 + lVar12 * 8);
              func_0x000107c61174();
              if ((param_2 & 0xc000000000000001) == 0) goto LAB_100e8513c;
LAB_100e8510c:
              FUN_100e853dc(uVar2,param_2);
            }
            else {
              uVar3 = uVar2;
              FUN_100e853dc(uVar2,param_1);
              if ((param_2 & 0xc000000000000001) != 0) goto LAB_100e8510c;
LAB_100e8513c:
              if (*(long *)(uVar6 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x100e85220);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(param_2 + lVar12 * 8);
              func_0x000107c61174(uVar2);
            }
            uVar4 = uVar3;
            func_0x000107c60118(uVar3,uVar2);
            uVar8 = (uint)uVar4;
            func_0x000107c61170(uVar3);
            func_0x000107c61170(uVar2);
          } while (((uVar4 & 1) != 0) && (lVar12 = lVar12 + 1, uVar9 != 0));
        }
        goto LAB_100e8524c;
      }
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
LAB_100e8524c:
  return uVar8 & 1;
}


